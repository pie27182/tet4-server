#!/usr/bin/env python3
"""Recover MFC metadata that RTTI does not cover, from a PE module.

Two structures are scanned directly in the file:

* CRuntimeClass (DECLARE_DYNAMIC): pointer to an ASCII class name, object size,
  schema, factory pointer, base class. Found by looking for pointers to
  identifier-looking class names in the data sections.
* AFX_MSGMAP_ENTRY (24 bytes on x86): nMessage, nCode, nID, nLastID, nSig, pfn.
  Entries for well-known window messages let us name handlers OnPaint, OnTimer...
  The names are inferred from the message id; they are not original symbols.

Output: names/<module>.tsv entries (address TAB name) and a short report.

Usage: python3 tools/scan_mfc.py client/HgCtr3.dll
"""
from __future__ import annotations

import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

# WM_* messages that map to a conventional MFC handler name.
WM_HANDLERS = {
    0x0001: "OnCreate",
    0x0002: "OnDestroy",
    0x0003: "OnMove",
    0x0005: "OnSize",
    0x0006: "OnActivate",
    0x0007: "OnSetFocus",
    0x0008: "OnKillFocus",
    0x000A: "OnEnable",
    0x000F: "OnPaint",
    0x0010: "OnClose",
    0x0011: "OnQueryEndSession",
    0x0014: "OnEraseBkgnd",
    0x0015: "OnSysColorChange",
    0x0020: "OnSetCursor",
    0x0021: "OnMouseActivate",
    0x0100: "OnKeyDown",
    0x0101: "OnKeyUp",
    0x0102: "OnChar",
    0x0104: "OnSysKeyDown",
    0x0105: "OnSysKeyUp",
    0x0111: "OnCommand",
    0x0113: "OnTimer",
    0x0114: "OnHScroll",
    0x0115: "OnVScroll",
    0x0200: "OnMouseMove",
    0x0201: "OnLButtonDown",
    0x0202: "OnLButtonUp",
    0x0203: "OnLButtonDblClk",
    0x0204: "OnRButtonDown",
    0x0205: "OnRButtonUp",
    0x0206: "OnRButtonDblClk",
    0x020A: "OnMouseWheel",
    0x0210: "OnCaptureChanged",
    0x0231: "OnContextMenu",
}

IDENT = re.compile(rb"^[CA-Z][A-Za-z0-9_]{2,60}$")


class PE:
    def __init__(self, path: Path):
        self.data = path.read_bytes()
        self.pe_off = struct.unpack_from("<I", self.data, 0x3C)[0]
        assert self.data[self.pe_off:self.pe_off + 4] == b"PE\0\0"
        coff = self.pe_off + 4
        self.sections_n = struct.unpack_from("<H", self.data, coff + 2)[0]
        opt_size = struct.unpack_from("<H", self.data, coff + 16)[0]
        opt = coff + 20
        self.image_base = struct.unpack_from("<I", self.data, opt + 28)[0]
        self.sections = []
        sec = opt + opt_size
        for i in range(self.sections_n):
            off = sec + i * 40
            name = self.data[off:off + 8].rstrip(b"\0").decode(errors="replace")
            vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", self.data, off + 8)
            chars = struct.unpack_from("<I", self.data, off + 36)[0]
            self.sections.append(
                {"name": name, "va": self.image_base + vaddr, "vsize": vsize,
                 "raw": rawptr, "rawsize": rawsize, "exec": bool(chars & 0x20000000),
                 "write": bool(chars & 0x80000000)}
            )

    def read_va(self, va: int, size: int) -> bytes | None:
        for s in self.sections:
            if s["va"] <= va < s["va"] + max(s["vsize"], s["rawsize"]):
                delta = va - s["va"]
                if delta + size > s["rawsize"]:
                    return None
                return self.data[s["raw"] + delta:s["raw"] + delta + size]
        return None

    def mapped(self, va: int) -> bool:
        return any(s["va"] <= va < s["va"] + max(s["vsize"], s["rawsize"]) for s in self.sections)

    def in_exec(self, va: int) -> bool:
        return any(s["exec"] and s["va"] <= va < s["va"] + s["vsize"] for s in self.sections)


def scan_runtime_classes(pe: PE) -> list[tuple[int, str, int]]:
    """Return (CRuntimeClass VA, class name, object size)."""
    found: dict[int, tuple[str, int]] = {}
    for s in pe.sections:
        if s["exec"] or s["rawsize"] < 32:
            continue
        blob = pe.data[s["raw"]:s["raw"] + s["rawsize"]]
        # Walk every 4-byte aligned value that could be a pointer to a class name.
        for off in range(0, len(blob) - 4, 4):
            value = struct.unpack_from("<I", blob, off)[0]
            if not pe.mapped(value):
                continue
            name_bytes = pe.read_va(value, 40)
            if not name_bytes:
                continue
            end = name_bytes.find(b"\0")
            if end < 3:
                continue
            ident = name_bytes[:end]
            if not IDENT.match(ident):
                continue
            # CRuntimeClass: name pointer at +0, size at +4, schema at +8
            size_bytes = pe.read_va(s["va"] + off + 4, 4)
            if not size_bytes:
                continue
            obj_size = struct.unpack("<I", size_bytes)[0]
            if not 4 <= obj_size <= 0x20000:
                continue
            va = s["va"] + off
            found.setdefault(va, (ident.decode(), obj_size))
    return [(va, name, size) for va, (name, size) in sorted(found.items())]


def _entry(pe: PE, blob: bytes, off: int):
    if off < 0 or off + 24 > len(blob):
        return None
    n_message, n_code, n_id, n_last, n_sig, pfn = struct.unpack_from("<IIIIII", blob, off)
    if n_code not in (0, 0xFFFFFFFF) or n_sig > 0x80 or not pe.in_exec(pfn):
        return None
    return n_message, n_code, n_id, n_sig, pfn


def scan_message_maps(pe: PE) -> list[tuple[int, str]]:
    """Return (handler VA, inferred name) for well-known window messages.

    Only entries that belong to a real map are kept: at least three valid
    entries 24 bytes apart, or two entries followed by the map terminator
    (nMessage == 0, nSig == 0). Random data almost never forms that.
    """
    names: dict[int, str] = {}
    for s in pe.sections:
        if s["exec"] or s["rawsize"] < 24:
            continue
        blob = pe.data[s["raw"]:s["raw"] + s["rawsize"]]
        starts: list[int] = []
        for off in range(0, len(blob) - 24, 4):
            start = off
            if _entry(pe, blob, start - 24):
                continue  # not the first entry of a map
            count = 0
            while True:
                e = _entry(pe, blob, start + count * 24)
                if e is None:
                    break
                count += 1
                if count > 200:
                    break
            terminated = (
                start + count * 24 + 8 <= len(blob)
                and struct.unpack_from("<II", blob, start + count * 24) == (0, 0)
            )
            if count >= 3 or (count == 2 and terminated):
                starts.append(start)
        for start in starts:
            count = 0
            while _entry(pe, blob, start + count * 24) is not None and count <= 200:
                e = _entry(pe, blob, start + count * 24)
                n_message, n_code, n_id, n_sig, pfn = e
                handler = WM_HANDLERS.get(n_message)
                if handler:
                    if n_message == 0x0111:
                        names.setdefault(pfn, f"OnCommand_{n_id & 0xFFFF}")
                    else:
                        names.setdefault(pfn, handler)
                count += 1
    return sorted(names.items())


def main() -> int:
    if len(sys.argv) < 2:
        print(__doc__)
        return 1
    path = Path(sys.argv[1])
    pe = PE(path)
    classes = scan_runtime_classes(pe)
    handlers = scan_message_maps(pe)
    base = pe.image_base
    print(f"{path.name}: image base 0x{base:x}")
    print(f"CRuntimeClass records: {len(classes)}")
    for va, name, size in classes[:10]:
        print(f"  0x{va:x} {name} size=0x{size:x}")
    print(f"message handlers: {len(handlers)}")
    for va, name in handlers[:10]:
        print(f"  0x{va:x} {name}")

    out = ROOT / "names" / f"{path.name}.tsv"
    existing = out.read_text().splitlines() if out.exists() else []
    have = {line.split("\t", 1)[0].strip().lower() for line in existing if "\t" in line}
    added = []
    for va, name in handlers:
        address = f"0x{va:x}"
        if address not in have:
            added.append(f"{address}\t{name}")
            have.add(address)
    if added:
        header = [f"# Reconstructed names for {path.name}.",
                  "# Includes MFC message handlers inferred from AFX_MSGMAP entries",
                  "# (pfn + nMessage -> OnPaint/OnTimer/...). Not original symbols."]
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text("\n".join(header + existing + added) + "\n")
    print(f"new handler names written: {len(added)} -> {out}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
