"""Cryptography of the client's secure socket (HgSock3.dll, CHgSecureSocket).

Handshake (GenerateKey 0x606041D0, MakeKey 0x606042C0): each side sends a 48-byte
share, twelve little-endian dwords TEA-encrypted under FIXED_KEY. The plaintext is
24 random 16-bit values. Both sides derive the same twelve-dword master key:
client plaintext XOR server plaintext. The key is fixed, so this is obfuscation,
not secrecy: anyone who sees both shares can decrypt the session.

Stream (filters 0x606057A0 / 0x60605900): one cipher state per direction. A state
holds an 8-byte chain, an 8-byte block and an MT19937 generator seeded with
init_by_array (0x60605A70). For byte j of each 8-byte block:

    cipher = plain ^ chain[j] ^ keystream[j]        chain[j] = plain

After the eighth byte the block is TEA-encrypted under the key
(chain0, chain1, chain0, chain1) and becomes the new chain, and two generator
outputs (0x60605B20) form the next keystream.
"""
import secrets
import struct

MASK = 0xFFFFFFFF
DELTA = 0x9E3779B9
FIXED_KEY = (0x21F72C9D, 0xCAE2A54B, 0xDE8F1DCA, 0x97D23A1C)
SHARE_SIZE = 48


def tea_encrypt(v0: int, v1: int, key) -> tuple[int, int]:
    s = 0
    for _ in range(32):
        s = (s + DELTA) & MASK
        v0 = (v0 + ((((v1 << 4) + key[0]) ^ ((v1 >> 5) + key[1]) ^ (s + v1)) & MASK)) & MASK
        v1 = (v1 + ((((v0 << 4) + key[2]) ^ ((v0 >> 5) + key[3]) ^ (s + v0)) & MASK)) & MASK
    return v0, v1


def tea_decrypt(v0: int, v1: int, key) -> tuple[int, int]:
    s = (DELTA * 32) & MASK
    for _ in range(32):
        v1 = (v1 - ((((v0 << 4) + key[2]) ^ ((v0 >> 5) + key[3]) ^ (s + v0)) & MASK)) & MASK
        v0 = (v0 - ((((v1 << 4) + key[0]) ^ ((v1 >> 5) + key[1]) ^ (s + v1)) & MASK)) & MASK
        s = (s - DELTA) & MASK
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


class MT19937:
    """MT19937 seeded with init_by_array, the only seeding the client uses."""

    def __init__(self, key):
        mt = [0] * 624
        mt[0] = 19650218
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
        self._mt = mt
        self._index = 624

    def _twist(self) -> None:
        mt = self._mt
        for i in range(624):
            y = (mt[i] & 0x80000000) | (mt[(i + 1) % 624] & 0x7FFFFFFF)
            mt[i] = mt[(i + 397) % 624] ^ (y >> 1) ^ (0x9908B0DF if y & 1 else 0)
        self._index = 0

    def next32(self) -> int:
        if self._index >= 624:
            self._twist()
        y = self._mt[self._index]
        self._index += 1
        y ^= y >> 11
        y ^= (y << 7) & 0x9D2C5680
        y ^= (y << 15) & 0xEFC60000
        y ^= y >> 18
        return y & MASK


class StreamCipher:
    """One direction of a secure connection; encrypt and decrypt share the state."""

    def __init__(self, chain_words, key_words):
        self._chain = bytearray(struct.pack("<2I", *chain_words))
        self._block = tuple(chain_words)
        self._rng = MT19937(key_words)
        self._next_keystream()

    def _next_keystream(self) -> None:
        self._keystream = struct.pack("<2I", self._rng.next32(), self._rng.next32())
        self._pos = 0

    def _end_block(self) -> None:
        c0, c1 = struct.unpack("<2I", self._chain)
        self._block = tea_encrypt(*self._block, (c0, c1, c0, c1))
        self._chain[:] = struct.pack("<2I", *self._block)
        self._next_keystream()

    def _apply(self, data: bytes, decrypt: bool) -> bytes:
        out = bytearray(len(data))
        for i, byte in enumerate(data):
            mask = self._chain[self._pos] ^ self._keystream[self._pos]
            out[i] = byte ^ mask
            self._chain[self._pos] = out[i] if decrypt else byte
            self._pos += 1
            if self._pos == 8:
                self._end_block()
        return bytes(out)

    def encrypt(self, data: bytes) -> bytes:
        return self._apply(data, decrypt=False)

    def decrypt(self, data: bytes) -> bytes:
        return self._apply(data, decrypt=True)


def upstream_cipher(master) -> StreamCipher:
    """Client-to-server bytes: the client's send context (this+0x13C)."""
    return StreamCipher(master[6:8], master[8:12])


def downstream_cipher(master) -> StreamCipher:
    """Server-to-client bytes: the client's receive context (this+0x140)."""
    return StreamCipher(master[0:2], master[2:6])
