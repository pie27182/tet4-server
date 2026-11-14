#!/usr/bin/env python3
"""Inventory MSVC RTTI classes, inheritance and vtables in a PE32 image.

MSVC stores, for every polymorphic class:
  TypeDescriptor        vftable, spare, ".?AVClassName@@"
  CompleteObjectLocator signature 0, offset, cdOffset, pTypeDescriptor, pCHD
  ClassHierarchy        signature 0, attributes, baseCount, pBaseClassArray
  BaseClassArray        pointers to BaseClassDescriptor
  BaseClassDescriptor   pTypeDescriptor, containedBases, PMD, attributes
  vftable[-1]           pointer to the CompleteObjectLocator

The tool follows those pointers and prints one row per vtable. It does not
guess method names or fields; slots are addresses from the binary.

    tools/rtti_inventory.py client/Tet4.exe > work/rtti/Tet4.exe.tsv
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

COLUMNS = (
    "class",
    "type_descriptor",
    "complete_object_locator",
    "vtable",
    "slots",
    "bases",
    "inheritance",
)


class PE:
    def __init__(self, path: Path):
        self.data = path.read_bytes()
        pe = struct.unpack_from("<I", self.data, 0x3C)[0]
        count = struct.unpack_from("<H", self.data, pe + 6)[0]
        optional = pe + 24
        self.image_base = struct.unpack_from("<I", self.data, optional + 28)[0]
        table = optional + struct.unpack_from("<H", self.data, pe + 20)[0]
        self.sections = []
        for index in range(count):
            offset = table + index * 40
            name = self.data[offset : offset + 8].rstrip(b"\0").decode("latin1")
            size, va, raw_size, raw_ptr = struct.unpack_from(
                "<IIII", self.data, offset + 8
            )
            self.sections.append((name, self.image_base + va, raw_size, raw_ptr))
        self.code_ranges = [
            (start, start + size)
            for name, start, size, _ in self.sections
            if name == ".text"
        ]

    def is_code(self, va: int) -> bool:
        return any(start <= va < end for start, end in self.code_ranges)

    def offset(self, va: int) -> int | None:
        for _, start, size, raw_ptr in self.sections:
            if start <= va < start + size:
                return raw_ptr + (va - start)
        return None

    def va(self, offset: int) -> int | None:
        for _, start, size, raw_ptr in self.sections:
            if raw_ptr <= offset < raw_ptr + size:
                return start + (offset - raw_ptr)
        return None

    def u32(self, va: int) -> int | None:
        offset = self.offset(va)
        if offset is None:
            return None
        return struct.unpack_from("<I", self.data, offset)[0]

    def cstr(self, va: int) -> str | None:
        offset = self.offset(va)
        if offset is None:
            return None
        end = self.data.find(b"\0", offset)
        if end < 0:
            return None
        return self.data[offset:end].decode("latin1", errors="replace")


def sections_with_va(pe: PE, names=(".rdata", ".data", ".text")):
    return [s for s in pe.sections if s[0] in names]


def type_descriptor_va(name: str, pe: PE, string_va: int) -> int:
    return string_va - 8


def find_type_descriptors(pe: PE):
    result = []
    for name, start, size, raw_ptr in sections_with_va(pe, (".rdata", ".data")):
        blob = pe.data[raw_ptr : raw_ptr + size]
        for prefix in (b".?AV", b".?AU"):
            position = blob.find(prefix)
            while position >= 0:
                string_va = start + position
                descriptor = string_va - 8
                text = pe.cstr(string_va)
                if text:
                    result.append((descriptor, text))
                position = blob.find(prefix, position + 1)
    return result


def find_cols(pe: PE, descriptor_va: int):
    result = []
    pattern = struct.pack("<I", descriptor_va)
    for name, start, size, raw_ptr in sections_with_va(pe, (".rdata", ".data")):
        blob = pe.data[raw_ptr : raw_ptr + size]
        position = blob.find(pattern)
        while position >= 0:
            col = start + position - 12
            if pe.u32(col) == 0 and pe.u32(col + 12) == descriptor_va:
                chd = pe.u32(col + 16)
                if chd is not None and pe.u32(chd) == 0:
                    result.append((col, chd))
            position = blob.find(pattern, position + 1)
    return result


def find_vtables(pe: PE, col: int):
    result = []
    pattern = struct.pack("<I", col)
    for name, start, size, raw_ptr in sections_with_va(pe, (".rdata", ".data")):
        blob = pe.data[raw_ptr : raw_ptr + size]
        position = blob.find(pattern)
        while position >= 0:
            vtable = start + position + 4
            first = pe.u32(vtable)
            if first is not None and pe.is_code(first):
                slots = []
                index = 0
                while index < 512:
                    target = pe.u32(vtable + index * 4)
                    if target is None or not pe.is_code(target):
                        break
                    slots.append(target)
                    index += 1
                result.append((vtable, slots))
            position = blob.find(pattern, position + 1)
    return result


def parse_bases(pe: PE, chd: int):
    count = pe.u32(chd + 8)
    array = pe.u32(chd + 12)
    attributes = pe.u32(chd + 4) or 0
    bases = []
    if count is None or array is None:
        return bases, attributes
    for index in range(min(count, 64)):
        descriptor = pe.u32(array + index * 4)
        if descriptor is None:
            break
        base_descriptor = pe.u32(descriptor)
        if base_descriptor is None:
            continue
        name = pe.cstr(base_descriptor + 8)
        mdisp = pe.u32(descriptor + 8)
        pdisp = pe.u32(descriptor + 12)
        vdisp = pe.u32(descriptor + 16)
        if name:
            bases.append(f"{name}@{mdisp},{pdisp},{vdisp}")
    return bases, attributes


def clean_name(text: str) -> str:
    if text.startswith(".?AV") or text.startswith(".?AU"):
        text = text[4:]
    if text.endswith("@@"):
        text = text[:-2]
    return text


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("pe", type=Path)
    args = parser.parse_args(argv)

    pe = PE(args.pe)
    rows = []
    seen = set()
    descriptors = find_type_descriptors(pe)
    for descriptor, raw_name in descriptors:
        class_name = clean_name(raw_name)
        for col, chd in find_cols(pe, descriptor):
            bases, attributes = parse_bases(pe, chd)
            for vtable, slots in find_vtables(pe, col):
                key = (class_name, vtable)
                if key in seen:
                    continue
                seen.add(key)
                rows.append(
                    (
                        class_name,
                        f"0x{descriptor:x}",
                        f"0x{col:x}",
                        f"0x{vtable:x}",
                        str(len(slots)),
                        ";".join(clean_name(base.split("@")[0]) for base in bases),
                        f"0x{attributes:x}",
                    )
                )
    print("\t".join(COLUMNS))
    for row in sorted(rows):
        print("\t".join(row))
    return 0


if __name__ == "__main__":
    sys.exit(main())
