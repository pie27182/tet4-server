"""Wire primitives shared by TPack, CDS and the channel protocol.

All integers are big-endian. Strings are a uint32 length followed by raw bytes,
with no padding. A frame is a uint32 length followed by that many body bytes.
"""
import struct


class ProtocolError(Exception):
    pass


class Reader:
    def __init__(self, data: bytes):
        self.data = data
        self.pos = 0

    def remaining(self) -> int:
        return len(self.data) - self.pos

    def take(self, n: int) -> bytes:
        if n < 0 or self.pos + n > len(self.data):
            raise ProtocolError(f"need {n} bytes at {self.pos}, have {self.remaining()}")
        chunk = self.data[self.pos:self.pos + n]
        self.pos += n
        return chunk

    def u32(self) -> int:
        return struct.unpack(">I", self.take(4))[0]

    def u64(self) -> int:
        return struct.unpack(">Q", self.take(8))[0]

    def i32(self) -> int:
        return struct.unpack(">i", self.take(4))[0]

    def string(self) -> bytes:
        return self.take(self.u32())


def pack_u32(value: int) -> bytes:
    return struct.pack(">I", value & 0xFFFFFFFF)


def pack_string(value: bytes) -> bytes:
    return pack_u32(len(value)) + value


def frame(body: bytes) -> bytes:
    return pack_u32(len(body)) + body
