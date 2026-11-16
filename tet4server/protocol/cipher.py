"""The secure socket's cryptography: the key exchange and the stream cipher.

Key exchange: each side sends a 48-byte share, twelve little-endian dwords
TEA-encrypted under FIXED_KEY, whose plaintext is 24 random 16-bit values. Both
sides derive the same twelve-dword master key: the client's plaintext XOR the
server's. The key is fixed, so this hides nothing from anyone who sees both shares.

Stream: one cipher state per direction, each an 8-byte chain, an 8-byte block and
an MT19937 generator seeded with init_by_array. For byte j of each 8-byte block:

    cipher = plain ^ chain[j] ^ keystream[j]        chain[j] = plain

After the eighth byte the block is TEA-encrypted under the key
(chain0, chain1, chain0, chain1) and becomes the new chain, and two generator
outputs form the next keystream. docs/PROTOCOL.md section 4 has the details.
"""
import random
import secrets
import struct

MASK = 0xFFFFFFFF
DELTA = 0x9E3779B9
SUMS = tuple(DELTA * (i + 1) & MASK for i in range(32))   # TEA's running sum per round
FIXED_KEY = (0x21F72C9D, 0xCAE2A54B, 0xDE8F1DCA, 0x97D23A1C)
SHARE_SIZE = 48


# TEA, written for speed: the stream cipher runs it for every 8 bytes on the wire.
# Each round's sum is masked once; the bits above 32 never reach the low ones.

def tea_encrypt(v0: int, v1: int, key) -> tuple[int, int]:
    k0, k1, k2, k3 = key
    for s in SUMS:
        v0 = (v0 + (((v1 << 4) + k0) ^ ((v1 >> 5) + k1) ^ (s + v1))) & MASK
        v1 = (v1 + (((v0 << 4) + k2) ^ ((v0 >> 5) + k3) ^ (s + v0))) & MASK
    return v0, v1


def tea_decrypt(v0: int, v1: int, key) -> tuple[int, int]:
    k0, k1, k2, k3 = key
    for s in reversed(SUMS):
        v1 = (v1 - (((v0 << 4) + k2) ^ ((v0 >> 5) + k3) ^ (s + v0))) & MASK
        v0 = (v0 - (((v1 << 4) + k0) ^ ((v1 >> 5) + k1) ^ (s + v1))) & MASK
    return v0, v1


def _share_blocks(data: bytes, cipher) -> bytes:
    if len(data) != SHARE_SIZE:
        raise ValueError(f"a handshake share is {SHARE_SIZE} bytes, got {len(data)}")
    words = struct.unpack("<12I", data)
    out = []
    for i in range(0, 12, 2):
        out.extend(cipher(words[i], words[i + 1], FIXED_KEY))
    return struct.pack("<12I", *out)


def seal_share(plain: bytes) -> bytes:
    """Encrypt a plaintext share for the wire."""
    return _share_blocks(plain, tea_encrypt)


def open_share(wire: bytes) -> bytes:
    """Decrypt a share received from the wire."""
    return _share_blocks(wire, tea_decrypt)


def new_share() -> bytes:
    """A plaintext share made like GenerateKey's: 24 values of rand() % 0xFFFF."""
    return struct.pack("<24H", *(secrets.randbelow(0xFFFF) for _ in range(24)))


def master_key(client_wire: bytes, server_wire: bytes) -> tuple[int, ...]:
    client = struct.unpack("<12I", open_share(client_wire))
    server = struct.unpack("<12I", open_share(server_wire))
    return tuple(c ^ s for c, s in zip(client, server))


def mt19937(key) -> random.Random:
    """The client's MT19937, seeded with init_by_array. Python's own generator is the
    same MT19937 in C: given this state, getrandbits(32) yields the client's outputs."""
    mt = [19650218] + [0] * 623
    for i in range(1, 624):
        mt[i] = (1812433253 * (mt[i - 1] ^ (mt[i - 1] >> 30)) + i) & MASK
    i, j = 1, 0
    for _ in range(max(624, len(key))):
        mt[i] = ((mt[i] ^ (((mt[i - 1] ^ (mt[i - 1] >> 30)) * 1664525) & MASK))
                 + key[j] + j) & MASK
        i, j = i + 1, j + 1
        if i >= 624:
            mt[0], i = mt[623], 1
        if j >= len(key):
            j = 0
    for _ in range(623):
        mt[i] = ((mt[i] ^ (((mt[i - 1] ^ (mt[i - 1] >> 30)) * 1566083941) & MASK)) - i) & MASK
        i += 1
        if i >= 624:
            mt[0], i = mt[623], 1
    mt[0] = 0x80000000
    generator = random.Random()
    generator.setstate((3, (*mt, 624), None))
    return generator


class StreamCipher:
    """One direction of a secure connection; encrypt and decrypt share the state. The
    chain and keystream are kept as little-endian 64-bit integers, so a whole block
    takes three XORs."""

    def __init__(self, chain_words, key_words):
        self._block = tuple(chain_words)
        self._chain = chain_words[0] | chain_words[1] << 32
        self._rng = mt19937(key_words)
        self._keystream = self._rng.getrandbits(32) | self._rng.getrandbits(32) << 32
        self._pos = 0                     # bytes of the current block done

    def _end_block(self) -> None:
        # The chain now holds the block's plaintext: it keys TEA for the next chain.
        c0, c1 = self._chain & MASK, self._chain >> 32
        self._block = tea_encrypt(*self._block, (c0, c1, c0, c1))
        self._chain = self._block[0] | self._block[1] << 32
        self._keystream = self._rng.getrandbits(32) | self._rng.getrandbits(32) << 32
        self._pos = 0

    def _apply(self, data: bytes, decrypt: bool) -> bytes:
        out = bytearray(len(data))
        i, n = 0, len(data)
        while i < n:
            if self._pos == 0 and n - i >= 8:            # a whole block at once
                given = int.from_bytes(data[i:i + 8], "little")
                result = given ^ self._chain ^ self._keystream
                out[i:i + 8] = result.to_bytes(8, "little")
                self._chain = result if decrypt else given
                i += 8
                self._end_block()
                continue
            shift = 8 * self._pos
            given = data[i]
            result = given ^ ((self._chain ^ self._keystream) >> shift) & 0xFF
            out[i] = result
            plain = result if decrypt else given
            self._chain = self._chain & ~(0xFF << shift) | plain << shift
            i += 1
            self._pos += 1
            if self._pos == 8:
                self._end_block()
        return bytes(out)

    def encrypt(self, data: bytes) -> bytes:
        return self._apply(data, decrypt=False)

    def decrypt(self, data: bytes) -> bytes:
        return self._apply(data, decrypt=True)


def upstream_cipher(master) -> StreamCipher:
    """The cipher of the bytes the client sends."""
    return StreamCipher(master[6:8], master[8:12])


def downstream_cipher(master) -> StreamCipher:
    """The cipher of the bytes the server sends."""
    return StreamCipher(master[0:2], master[2:6])
