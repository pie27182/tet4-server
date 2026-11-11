#!/usr/bin/env python3
"""Extract MSVC x86 RTTI/vtables and message IDs from Tet4.exe.

No third-party Python packages are required. GNU objdump is optional and used
only to print the GetSize/Serialize/Deserialize function bodies.

Usage:
    python3 tet4_rtti_extract.py /path/to/Tet4.exe
    python3 tet4_rtti_extract.py /path/to/Tet4.exe --disasm

Assumptions are specific to the 32-bit MSVC RTTI layout used by this client:
    TypeDescriptor: vfptr, spare, decorated name\0
    CompleteObjectLocator (x86): signature, offset, cdOffset,
                                  pTypeDescriptor, pClassDescriptor
    vftable locator pointer immediately precedes the first virtual slot.
"""
from __future__ import annotations

import argparse
import json
import re
import shutil
import struct
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable

U32 = struct.Struct("<I")
COL5 = struct.Struct("<IIIII")


@dataclass(frozen=True)
class Section:
    name: str
    rva: int
    virtual_size: int
    raw_offset: int
    raw_size: int

    def contains_rva(self, rva: int) -> bool:
        return self.rva <= rva < self.rva + max(self.virtual_size, self.raw_size)

    def contains_raw(self, offset: int) -> bool:
        return self.raw_offset <= offset < self.raw_offset + self.raw_size


class PE32:
    def __init__(self, path: Path):
        self.path = path
        self.data = path.read_bytes()
        d = self.data
        if d[:2] != b"MZ":
            raise ValueError("not an MZ/PE file")
        peoff = U32.unpack_from(d, 0x3C)[0]
        if d[peoff:peoff + 4] != b"PE\0\0":
            raise ValueError("missing PE signature")
        coff = peoff + 4
        nsec = struct.unpack_from("<H", d, coff + 2)[0]
        opt_size = struct.unpack_from("<H", d, coff + 16)[0]
        opt = coff + 20
        magic = struct.unpack_from("<H", d, opt)[0]
        if magic != 0x10B:
            raise ValueError(f"expected PE32 (0x10b), found optional-header magic {magic:#x}")
        self.image_base = U32.unpack_from(d, opt + 28)[0]
        sec_table = opt + opt_size
        self.sections: list[Section] = []
        for i in range(nsec):
            off = sec_table + i * 40
            name = d[off:off + 8].split(b"\0", 1)[0].decode("ascii", "replace")
            vsize, rva, raw_size, raw_off = struct.unpack_from("<IIII", d, off + 8)
            self.sections.append(Section(name, rva, vsize, raw_off, raw_size))

    def rva_to_raw(self, rva: int) -> int | None:
        for s in self.sections:
            if s.contains_rva(rva):
                delta = rva - s.rva
                if delta < s.raw_size:
                    return s.raw_offset + delta
        return None

    def raw_to_va(self, raw: int) -> int | None:
        for s in self.sections:
            if s.contains_raw(raw):
                return self.image_base + s.rva + (raw - s.raw_offset)
        return None

    def va_to_raw(self, va: int) -> int | None:
        if va < self.image_base:
            return None
        return self.rva_to_raw(va - self.image_base)

    def section_for_va(self, va: int) -> Section | None:
        if va < self.image_base:
            return None
        rva = va - self.image_base
        return next((s for s in self.sections if s.contains_rva(rva)), None)

    def find_all(self, needle: bytes) -> Iterable[int]:
        start = 0
        while True:
            pos = self.data.find(needle, start)
            if pos < 0:
                return
            yield pos
            start = pos + 1

    def u32(self, raw: int) -> int:
        return U32.unpack_from(self.data, raw)[0]


@dataclass
class MessageInfo:
    name: str
    decorated_name_raw: int
    type_descriptor_va: int
    col_raw: int
    col_va: int
    vftable_va: int
    slots: list[int]
    get_id: int | None
    get_size: int
    serialize: int
    deserialize: int


def get_type_info(pe: PE32, name: str) -> MessageInfo | None:
    decorated = f".?AV{name}@@".encode("ascii") + b"\0"
    name_raw = pe.data.find(decorated)
    if name_raw < 0:
        return None
    # A 32-bit MSVC TypeDescriptor has two 4-byte words before the name.
    td_va = pe.raw_to_va(name_raw - 8)
    if td_va is None:
        return None

    candidates: list[tuple[int, int]] = []
    for td_ref_raw in pe.find_all(U32.pack(td_va)):
        col_raw = td_ref_raw - 12
        if col_raw < 0 or col_raw + COL5.size > len(pe.data):
            continue
        signature, offset, cd_offset, p_td, _p_chd = COL5.unpack_from(pe.data, col_raw)
        if signature != 0 or p_td != td_va:
            continue
        col_va = pe.raw_to_va(col_raw)
        if col_va is None:
            continue
        # Prefer the primary base-class locator (offset == 0).
        candidates.append((col_raw, col_va))
    if not candidates:
        return None

    for col_raw, col_va in candidates:
        # In MSVC x86 the vftable's locator pointer is one dword before slot 0.
        for col_ref_raw in pe.find_all(U32.pack(col_va)):
            section = next((s for s in pe.sections if s.contains_raw(col_ref_raw)), None)
            if section is None or section.name != ".rdata":
                continue
            vt_raw = col_ref_raw + 4
            if vt_raw + 7 * 4 > len(pe.data):
                continue
            slots = list(struct.unpack_from("<9I", pe.data, vt_raw))
            # Filter false positives: slot entries should point into executable .text.
            executable = 0
            for va in slots:
                sec = pe.section_for_va(va)
                if sec is not None and sec.name == ".text":
                    executable += 1
            if executable < 7:
                continue
            vftable_va = pe.raw_to_va(vt_raw)
            if vftable_va is None:
                continue
            get_id_va = slots[2]
            get_id = decode_mov_eax_ret(pe, get_id_va)
            return MessageInfo(
                name=name,
                decorated_name_raw=name_raw,
                type_descriptor_va=td_va,
                col_raw=col_raw,
                col_va=col_va,
                vftable_va=vftable_va,
                slots=slots,
                get_id=get_id,
                get_size=slots[4],
                serialize=slots[5],
                deserialize=slots[6],
            )
    return None


def decode_mov_eax_ret(pe: PE32, function_va: int) -> int | None:
    raw = pe.va_to_raw(function_va)
    if raw is None:
        return None
    b = pe.data[raw:raw + 16]
    # Most message IDs in this executable are exactly: B8 imm32 C3.
    for i in range(min(5, len(b) - 5)):
        if b[i] == 0xB8 and b[i + 5] == 0xC3:
            return U32.unpack_from(b, i + 1)[0]
    return None


def decorated_names(pe: PE32) -> list[str]:
    found = set()
    pattern = re.compile(rb"\.\?AV(Cmd_[A-Za-z0-9_]+|_SingleModeInfo)@@\0")
    for match in pattern.finditer(pe.data):
        found.add(match.group(1).decode("ascii"))
    return sorted(found)


def disassemble(pe: PE32, va: int, label: str, length: int = 0x220) -> None:
    objdump = shutil.which("objdump")
    if not objdump:
        print("    [objdump not installed; skipped]")
        return
    cmd = [objdump, "-d", "-Mintel", f"--start-address={va:#x}",
           f"--stop-address={va + length:#x}", str(pe.path)]
    proc = subprocess.run(cmd, text=True, stdout=subprocess.PIPE,
                          stderr=subprocess.STDOUT, check=False)
    print(f"\n    ; {label} at {va:#010x}")
    for line in proc.stdout.splitlines():
        if re.match(r"\s*[0-9a-f]+:", line):
            print("    " + line.strip())


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("exe", type=Path, help="Tet4.exe or Tet4.exe.orig")
    ap.add_argument("--disasm", action="store_true",
                    help="disassemble GetSize, Serialize and Deserialize methods")
    ap.add_argument("--json", action="store_true", help="emit machine-readable JSON")
    ap.add_argument("--all-cmd", action="store_true",
                    help="scan every decorated Cmd_* RTTI name in the image")
    ap.add_argument("names", nargs="*", help="optional class names to inspect")
    args = ap.parse_args()

    try:
        pe = PE32(args.exe)
        names = args.names or (decorated_names(pe) if args.all_cmd else [
            "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS",
            "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToC",
            "Cmd_ChannelOrderTypeSingleModeRoomInfoTetrisToC",
            "Cmd_Channel_OrderTypeSingleModeResultMemberTetrisToC",
            "Cmd_Room_OrderTypeSingleModeGameReportTetrisToS",
            "Cmd_Room_OrderTypeSingleModeGameReportTetrisToC",
            "Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS",
            "_SingleModeInfo",
        ])
        results = []
        for name in names:
            info = get_type_info(pe, name)
            if info is None:
                print(f"WARN: no primary MSVC RTTI/vftable found for {name}", file=sys.stderr)
                continue
            row = {
                "name": info.name,
                "type_descriptor_va": f"0x{info.type_descriptor_va:08x}",
                "col_va": f"0x{info.col_va:08x}",
                "vftable_va": f"0x{info.vftable_va:08x}",
                "GetID_function": f"0x{info.slots[2]:08x}",
                "GetID": None if info.get_id is None else f"0x{info.get_id:08x}",
                "GetSize_function": f"0x{info.get_size:08x}",
                "Serialize_function": f"0x{info.serialize:08x}",
                "Deserialize_function": f"0x{info.deserialize:08x}",
                "vtable_slots": [f"0x{x:08x}" for x in info.slots],
            }
            results.append(row)
            if not args.json:
                print(f"{info.name}")
                print(f"  TypeDescriptor VA : {info.type_descriptor_va:#010x}")
                print(f"  COL VA            : {info.col_va:#010x}")
                print(f"  vftable VA        : {info.vftable_va:#010x}")
                print(f"  GetID             : {info.get_id!r} (function {info.slots[2]:#010x})")
                print(f"  GetSize           : {info.get_size:#010x}")
                print(f"  Serialize         : {info.serialize:#010x}")
                print(f"  Deserialize       : {info.deserialize:#010x}")
            if args.disasm:
                disassemble(pe, info.get_size, "GetSize")
                disassemble(pe, info.serialize, "Serialize")
                disassemble(pe, info.deserialize, "Deserialize")
        if args.json:
            print(json.dumps({"image_base": f"0x{pe.image_base:08x}",
                              "messages": results}, indent=2))
        return 0 if results else 1
    except (OSError, ValueError, struct.error) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
