"""The wire's primitives, shared by every service.

Integers are big-endian. A string is a u32 byte count and the bytes, with no
terminator or padding; a vector is a u32 element count and the elements. A frame,
on every socket, is a u32 byte count and the body.
"""
import asyncio
import struct
from typing import NamedTuple

from ..config import MAX_FRAME

U32 = struct.Struct(">I")


class ProtocolError(Exception):
    """The peer sent bytes that do not fit the expected layout."""


class Endpoint(NamedTuple):
    """An address clients connect to."""
    host: str
    port: int


def u32(value: int) -> bytes:
    return U32.pack(value)


def string(value: bytes) -> bytes:
    return U32.pack(len(value)) + value


def frame(body: bytes) -> bytes:
    return U32.pack(len(body)) + body


async def read_frame(reader: asyncio.StreamReader) -> bytes | None:
    """One frame's body; None if the peer closed the connection between frames."""
    try:
        header = await reader.readexactly(4)
    except asyncio.IncompleteReadError as exc:
        if exc.partial:
            raise ProtocolError("connection closed inside a frame header") from None
        return None
    (length,) = U32.unpack(header)
    if length > MAX_FRAME:
        raise ProtocolError(f"frame length {length} exceeds {MAX_FRAME}")
    try:
        return await reader.readexactly(length)
    except asyncio.IncompleteReadError:
        raise ProtocolError("connection closed inside a frame") from None
