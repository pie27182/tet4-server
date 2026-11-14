#!/usr/bin/env python3
"""Export MSVC vtable entries as reconstruction metadata.

The output is a TSV table consumed by tools/check_reconstruction.py. Function
names and sizes come from a Ghidra index (`address<TAB>size<TAB>name`); a target
that is not a known function is reported as `unknown` with size `?`.

Example:

    tools/export_vtable.py client/Tet4.exe work/reconstructed/Tet4.exe.index.tsv \
        --vtable CTetSceneManager=0x5fa244 \
        --vtable CTetSceneManager_Shadow=0x5f9af4 \
        > reconstruction/metadata/scene_vtable.tsv
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

COLUMNS = (
    "address",
    "size",
    "symbol",
    "owner",
    "role",
    "provenance",
    "evidence",
    "notes",
)


def sections(path: Path):
    data = path.read_bytes()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    count = struct.unpack_from("<H", data, pe + 6)[0]
    optional = pe + 24
    image_base = struct.unpack_from("<I", data, optional + 28)[0]
    table = optional + struct.unpack_from("<H", data, pe + 20)[0]
    result = []
    for index in range(count):
        offset = table + index * 40
        size, va, raw_size, raw_ptr = struct.unpack_from("<IIII", data, offset + 8)
        result.append((image_base + va, raw_size, raw_ptr))
    return data, result


def va_to_offset(va: int, sections_table) -> int | None:
    for start, size, raw_ptr in sections_table:
        if start <= va < start + size:
            return raw_ptr + (va - start)
    return None


def load_index(path: Path):
    rows = []
    for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
        parts = line.split("\t")
        if len(parts) < 3:
            continue
        try:
            address = int(parts[0], 16)
            size = int(parts[1])
        except ValueError:
            continue
        rows.append((address, size, parts[2]))
    rows.sort()
    return rows


def lookup(target: int, index_rows) -> tuple[int, int, str] | None:
    for address, size, name in index_rows:
        if address <= target < address + size:
            return address, size, name
    return None


def vtable_entries(data: bytes, sections_table, vtable: int) -> list[int]:
    entries = []
    while len(entries) < 256:
        offset = va_to_offset(vtable + 4 * len(entries), sections_table)
        if offset is None:
            break
        target = struct.unpack_from("<I", data, offset)[0]
        # Code in this image lives between the image base and the last section.
        if not 0x400000 <= target < 0x610000:
            break
        entries.append(target)
    return entries


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("pe", type=Path)
    parser.add_argument("index", type=Path)
    parser.add_argument(
        "--vtable",
        action="append",
        required=True,
        metavar="OWNER=ADDRESS",
        help="class name and virtual address, repeatable",
    )
    args = parser.parse_args(argv)

    data, section_table = sections(args.pe)
    index_rows = load_index(args.index)
    print("\t".join(COLUMNS))
    for item in args.vtable:
        if "=" not in item:
            parser.error(f"bad --vtable {item!r}; expected OWNER=ADDRESS")
        owner, text = item.split("=", 1)
        vtable = int(text, 16)
        for slot, target in enumerate(vtable_entries(data, section_table, vtable)):
            hit = lookup(target, index_rows)
            if hit is None:
                address, size, name = target, "?", "unknown"
            else:
                address, length, name = hit
                size = str(length)
            print(
                "\t".join(
                    [
                        f"0x{address:x}",
                        size,
                        name,
                        owner,
                        f"vtable 0x{vtable:x} slot {slot}",
                        "observed",
                        f"vtable entry {slot} -> 0x{target:x}",
                        "role name not proven",
                    ]
                )
            )
    return 0


if __name__ == "__main__":
    sys.exit(main())
