#!/usr/bin/env python3
"""Dump bytes at a Tet4.exe virtual address without modifying the executable.

The 24-grade lookup is documented at VA 0x005DC870. Its record layout is not yet
known, so this tool first emits a raw hex/ASCII dump for static analysis.
"""
from __future__ import annotations

import argparse
import struct
import sys
from dataclasses import dataclass
from pathlib import Path

RATING_TABLE_VA = 0x005DC870


class PEError(ValueError):
    """The executable is not a usable PE image or the requested VA is unmapped."""


@dataclass(frozen=True)
class Section:
    name: str
    virtual_address: int
    virtual_size: int
    raw_offset: int
    raw_size: int


@dataclass(frozen=True)
class Location:
    image_base: int
    rva: int
    file_offset: int
    available: int
    section: str


def _u16(data: bytes, offset: int) -> int:
    try:
        return struct.unpack_from("<H", data, offset)[0]
    except struct.error:
        raise PEError("truncated PE header") from None


def _u32(data: bytes, offset: int) -> int:
    try:
        return struct.unpack_from("<I", data, offset)[0]
    except struct.error:
        raise PEError("truncated PE header") from None


def locate_va(data: bytes, va: int) -> Location:
    """Map an image VA to its raw-file offset, rejecting zero-filled/unmapped data."""
    if len(data) < 0x40 or data[:2] != b"MZ":
        raise PEError("not a Windows PE executable (missing MZ header)")
    pe = _u32(data, 0x3C)
    if pe + 24 > len(data) or data[pe:pe + 4] != b"PE\0\0":
        raise PEError("invalid or truncated PE signature")

    coff = pe + 4
    section_count = _u16(data, coff + 2)
    optional_size = _u16(data, coff + 16)
    optional = coff + 20
    magic = _u16(data, optional)
    if magic == 0x10B:           # PE32
        image_base = _u32(data, optional + 28)
    elif magic == 0x20B:         # PE32+
        try:
            image_base = struct.unpack_from("<Q", data, optional + 24)[0]
        except struct.error:
            raise PEError("truncated PE32+ optional header") from None
    else:
        raise PEError(f"unsupported PE optional-header magic 0x{magic:04x}")

    if va < image_base:
        raise PEError(f"VA 0x{va:08x} is below image base 0x{image_base:x}")
    rva = va - image_base
    section_table = optional + optional_size

    for index in range(section_count):
        offset = section_table + index * 40
        if offset + 40 > len(data):
            raise PEError("truncated section table")
        raw_name = data[offset:offset + 8].split(b"\0", 1)[0]
        name = raw_name.decode("ascii", "replace")
        virtual_size, virtual_address, raw_size, raw_offset = struct.unpack_from(
            "<IIII", data, offset + 8)
        span = max(virtual_size, raw_size)
        if virtual_address <= rva < virtual_address + span:
            within = rva - virtual_address
            if within >= raw_size:
                raise PEError(f"VA 0x{va:08x} lies in zero-filled data of section {name}")
            file_offset = raw_offset + within
            if file_offset >= len(data):
                raise PEError(f"section {name} points beyond end of file")
            available = min(raw_size - within, len(data) - file_offset)
            return Location(image_base, rva, file_offset, available, name)

    raise PEError(f"VA 0x{va:08x} is not contained in a PE section")


def hexdump(data: bytes, address: int, width: int = 16) -> str:
    """Format a traditional address/hex/ASCII dump."""
    lines = []
    for offset in range(0, len(data), width):
        chunk = data[offset:offset + width]
        hex_part = " ".join(f"{byte:02x}" for byte in chunk)
        ascii_part = "".join(chr(b) if 0x20 <= b < 0x7F else "." for b in chunk)
        lines.append(f"{address + offset:08x}  {hex_part:<{width * 3 - 1}}  |{ascii_part}|")
    return "\n".join(lines)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("executable", type=Path, help="original Tet4.exe 1.3.4")
    parser.add_argument("--va", type=lambda value: int(value, 0), default=RATING_TABLE_VA,
                        help="virtual address to dump (default 0x005DC870)")
    parser.add_argument("--size", type=lambda value: int(value, 0), default=0x200,
                        help="number of bytes (default 0x200)")
    args = parser.parse_args(argv)
    if args.size < 1 or args.size > 0x10000:
        parser.error("--size must be between 1 and 0x10000")

    try:
        data = args.executable.read_bytes()
        location = locate_va(data, args.va)
        size = min(args.size, location.available)
        payload = data[location.file_offset:location.file_offset + size]
    except (OSError, PEError) as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 1

    print(f"file: {args.executable}")
    print(f"section: {location.section}")
    print(f"image base: 0x{location.image_base:08x}")
    print(f"VA: 0x{args.va:08x}  RVA: 0x{location.rva:08x}")
    print(f"file offset: 0x{location.file_offset:x}  bytes: {len(payload)}")
    if len(payload) < args.size:
        print(f"warning: only {len(payload)} bytes are available in this section",
              file=sys.stderr)
    print(hexdump(payload, args.va))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
