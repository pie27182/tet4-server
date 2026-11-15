"""Wire primitives shared by every Tet4 service.

Integers are big-endian. A string is a u32 byte count followed by the bytes, with
no terminator or padding; a vector is a u32 element count followed by the
elements. TPack and CDS frames are a u32 body length followed by the body.
"""
import asyncio
import struct

MAX_FRAME = 1 << 20  # far above any client message; guards against garbage lengths


class ProtocolError(Exception):
    """The peer sent bytes that do not fit the expected layout."""


class Reader:
    """Sequential reader over one message."""

    def __init__(self, data: bytes):
        self.data = data
        self.pos = 0

    def remaining(self) -> int:
        return len(self.data) - self.pos

    def take(self, n: int) -> bytes:
        if n > self.remaining():
            raise ProtocolError(f"need {n} bytes at offset {self.pos}, have {self.remaining()}")
        chunk = self.data[self.pos:self.pos + n]
        self.pos += n
        return chunk

    def u8(self) -> int:
        return self.take(1)[0]

    def u32(self) -> int:
        return struct.unpack(">I", self.take(4))[0]

    def u64(self) -> int:
        return struct.unpack(">Q", self.take(8))[0]

    def string(self) -> bytes:
        return self.take(self.u32())


def u8(value: int) -> bytes:
    return struct.pack(">B", value)


def u32(value: int) -> bytes:
    return struct.pack(">I", value)


def i32(value: int) -> bytes:
    return struct.pack(">i", value)


def u64(value: int) -> bytes:
    return struct.pack(">Q", value)


def i64(value: int) -> bytes:
    return struct.pack(">q", value)


def string(value: bytes) -> bytes:
    return u32(len(value)) + value


def frame(body: bytes) -> bytes:
    return u32(len(body)) + body


async def read_frame(reader: asyncio.StreamReader) -> bytes | None:
    """Read one `u32 length | body` frame; None if the peer closed between frames."""
    try:
        header = await reader.readexactly(4)
    except asyncio.IncompleteReadError as exc:
        if exc.partial:
            raise ProtocolError("connection closed inside a frame header") from None
        return None
    (length,) = struct.unpack(">I", header)
    if length > MAX_FRAME:
        raise ProtocolError(f"frame length {length} exceeds {MAX_FRAME}")
    try:
        return await reader.readexactly(length)
    except asyncio.IncompleteReadError:
        raise ProtocolError("connection closed inside a frame") from None
