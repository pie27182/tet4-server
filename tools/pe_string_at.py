#!/usr/bin/env python3
"""Print NUL-terminated strings at virtual addresses in a PE image.

Usage: tools/pe_string_at.py client/HgCom3.dll 0x60174b94 0x60174c64 ...
Standard library only.
"""
import struct
import sys
from pathlib import Path


def pe_sections(path: Path):
    data = path.read_bytes()
    if data[:2] != b"MZ":
        raise SystemExit(f"{path}: not an MZ image")
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise SystemExit(f"{path}: not a PE image")
    coff = pe + 4
    count = struct.unpack_from("<H", data, coff + 2)[0]
    opt_size = struct.unpack_from("<H", data, coff + 16)[0]
    opt = coff + 20
    magic = struct.unpack_from("<H", data, opt)[0]
    image_base = (struct.unpack_from("<I", data, opt + 28)[0]
                  if magic == 0x10B else struct.unpack_from("<Q", data, opt + 24)[0])
    sections = []
    table = opt + opt_size
    for i in range(count):
        off = table + i * 40
        name = data[off:off + 8].rstrip(b"\0").decode("ascii", "replace")
        vsize, va, rsize, raw = struct.unpack_from("<IIII", data, off + 8)
        sections.append((va, max(vsize, rsize), raw, name))
    return data, image_base, sections


def read_at(data, image_base, sections, va, limit=512):
    rva = va - image_base
    for sva, size, raw, _name in sections:
        if sva <= rva < sva + size:
            start = raw + (rva - sva)
            end = data.find(b"\0", start, start + limit)
            if end < 0:
                end = start + limit
            return data[start:end]
    return None


def main(argv):
    if len(argv) < 3:
        raise SystemExit(__doc__)
    path = Path(argv[1])
    data, image_base, sections = pe_sections(path)
    for text in argv[2:]:
        va = int(text, 0)
        value = read_at(data, image_base, sections, va)
        print(f"0x{va:08x}  {value!r}" if value is not None else f"0x{va:08x}  <unmapped>")


if __name__ == "__main__":
    main(sys.argv)
