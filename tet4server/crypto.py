"""Cryptography of the secure channel socket (HgSock3.dll, CHgSecureSocket).

Recovered from machine code of GenerateKey (0x606041D0), MakeKey (0x606042C0),
the send/receive filters (0x606057A0 / 0x60605900), FUN_60605A70 (init_by_array),
FUN_60605B20 (MT19937 twist and temper) and FUN_60605580/60605610 (TEA).

Handshake: each side sends 48 bytes = 12 dwords = TEA(plain), with the fixed
key K. master = client_plain XOR TEA_decrypt(server_wire).

Stream: two contexts derived from master, one for each direction. A context
has an 8-byte chaining buffer, a dynamic TEA block, and an MT19937 generator
seeded with init_by_array(4 words). Per byte:
    cipher = keystream ^ chain ^ plain
    chain[j] = plain
and every 8 bytes the dynamic block is re-encrypted with TEA under the key
(chain[0], chain[1], chain[0], chain[1]), and the generator emits two new words.
"""
import struct

MASK = 0xFFFFFFFF
DELTA = 0x9E3779B9
FIXED_KEY = (0x21F72C9D, 0xCAE2A54B, 0xDE8F1DCA, 0x97D23A1C)


def tea_encrypt(v0: int, v1: int, key) -> tuple:
    s = 0
    for _ in range(32):
        s = (s + DELTA) & MASK
        v0 = (v0 + ((((v1 << 4) + key[0]) ^ ((v1 >> 5) + key[1]) ^ (s + v1)) & MASK)) & MASK
        v1 = (v1 + ((((v0 << 4) + key[2]) ^ ((v0 >> 5) + key[3]) ^ (s + v0)) & MASK)) & MASK
    return v0, v1


def tea_decrypt(v0: int, v1: int, key) -> tuple:
    s = 0xC6EF3720
    for _ in range(32):
        v1 = (v1 - ((((v0 << 4) + key[2]) ^ ((v0 >> 5) + key[3]) ^ (s + v0)) & MASK)) & MASK
        v0 = (v0 - ((((v1 << 4) + key[0]) ^ ((v1 >> 5) + key[1]) ^ (s + v1)) & MASK)) & MASK
        s = (s - DELTA) & MASK
    return v0, v1


def _blocks48(data: bytes, fn) -> bytes:
    if len(data) != 48:
        raise ValueError(f"handshake share must be 48 bytes, got {len(data)}")
    w = struct.unpack("<12I", data)
    out = []
    for i in range(0, 12, 2):
        out.extend(fn(w[i], w[i + 1], FIXED_KEY))
    return struct.pack("<12I", *out)


def encrypt_share(plain48: bytes) -> bytes:
    return _blocks48(plain48, tea_encrypt)


def decrypt_share(wire48: bytes) -> bytes:
    return _blocks48(wire48, tea_decrypt)


def master_words(client_wire: bytes, server_wire: bytes) -> list:
    """12 dwords: client plain XOR decrypted server share."""
    client = struct.unpack("<12I", decrypt_share(client_wire))
    server = struct.unpack("<12I", decrypt_share(server_wire))
    return [c ^ s for c, s in zip(client, server)]


class MT19937:
    """Standard MT19937 as in FUN_60605B20, but seeded by init_by_array."""

    def __init__(self, state):
        self.mt = list(state)
        self.index = 624

    @classmethod
    def by_array(cls, key):
        mt = [0] * 624
        mt[0] = 19650218
        for i in range(1, 624):
            mt[i] = (1812433253 * (mt[i - 1] ^ (mt[i - 1] >> 30)) + i) & MASK
        i, j = 1, 0
        for _ in range(624):
            mt[i] = ((mt[i] ^ (((mt[i - 1] ^ (mt[i - 1] >> 30)) * 1664525) & MASK))
                     + key[j] + j) & MASK
            i += 1
            j += 1
            if i >= 624:
                mt[0] = mt[623]
                i = 1
            if j >= len(key):
                j = 0
        for _ in range(623):
            mt[i] = ((mt[i] ^ (((mt[i - 1] ^ (mt[i - 1] >> 30)) * 1566083941) & MASK)) - i) & MASK
            i += 1
            if i >= 624:
                mt[0] = mt[623]
                i = 1
        mt[0] = 0x80000000
        return cls(mt)

    def _twist(self):
        mt = self.mt
        for i in range(624):
            y = (mt[i] & 0x80000000) | (mt[(i + 1) % 624] & 0x7FFFFFFF)
            mt[i] = mt[(i + 397) % 624] ^ (y >> 1) ^ (0x9908B0DF if y & 1 else 0)
        self.index = 0

    def next32(self) -> int:
        if self.index >= 624:
            self._twist()
        y = self.mt[self.index]
        self.index += 1
        y ^= y >> 11
        y ^= (y << 7) & 0x9D2C5680
        y ^= (y << 15) & 0xEFC60000
        y ^= y >> 18
        return y & MASK


class Stream:
    """One direction of the channel. Build with Stream.from_master()."""

    def __init__(self, chain_words, key_words):
        self.chain = bytearray(struct.pack("<2I", *chain_words))
        self.dynamic = tuple(chain_words)
        self.rng = MT19937.by_array(key_words)
        self._refill()

    @classmethod
    def from_master(cls, master, direction: str):
        """Server-side streams. 'decrypt_client' reads what the client sends (mirror of the
        client send context, master words 6..11); 'encrypt_to_client' writes to the client
        (mirror of the client receive context, master words 0..5)."""
        if direction == "decrypt_client":
            return cls(master[6:8], master[8:12])
        if direction == "encrypt_to_client":
            return cls(master[0:2], master[2:6])
        raise ValueError(direction)

    def _refill(self):
        self.ks = struct.pack("<2I", self.rng.next32(), self.rng.next32())
        self.pos = 0

    def _block_end(self):
        chain = struct.unpack("<2I", bytes(self.chain))
        key = (chain[0], chain[1], chain[0], chain[1])
        self.dynamic = tea_encrypt(self.dynamic[0], self.dynamic[1], key)
        self.chain = bytearray(struct.pack("<2I", *self.dynamic))
        self._refill()

    def _apply(self, data: bytes, decrypt: bool) -> bytes:
        out = bytearray(len(data))
        for n, b in enumerate(data):
            j = self.pos
            ks = self.ks[j]
            if decrypt:
                plain = b ^ self.chain[j] ^ ks
                out[n] = plain
            else:
                plain = b
                out[n] = ks ^ self.chain[j] ^ plain
            self.chain[j] = plain
            self.pos += 1
            if self.pos == 8:
                self._block_end()
        return bytes(out)

    def decrypt(self, data: bytes) -> bytes:
        return self._apply(data, decrypt=True)

    def encrypt(self, data: bytes) -> bytes:
        return self._apply(data, decrypt=False)
