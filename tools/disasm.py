#!/usr/bin/env python3
"""Disassemble code of a PE module at an image address (32-bit x86).

    python3 tools/disasm.py client/CDSClientConnector.dll 0x100153a0 --count 20
    python3 tools/disasm.py client/HgSock3.dll 0x60605580 --end 0x60605600

Needs pefile and capstone (pip install --user pefile capstone). Addresses are image
addresses, the same ones Ghidra and docs/ADDRESSES.md use.
"""
import argparse
import sys
from pathlib import Path

try:
    import capstone
    import pefile
except ImportError:
    sys.exit("pip install --user pefile capstone")


def read_at(pe: pefile.PE, va: int, size: int) -> bytes:
    rva = va - pe.OPTIONAL_HEADER.ImageBase
    offset = pe.get_offset_from_rva(rva)
    return pe.__data__[offset:offset + size]


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("module", type=Path)
    ap.add_argument("address", type=lambda s: int(s, 16), help="image address, hex")
    limit = ap.add_mutually_exclusive_group()
    limit.add_argument("--count", type=int, default=20, help="number of instructions")
    limit.add_argument("--end", type=lambda s: int(s, 16), help="stop before this address")
    args = ap.parse_args()

    pe = pefile.PE(str(args.module), fast_load=True)
    end = args.end if args.end is not None else args.address + 15 * (args.count + 1)
    code = read_at(pe, args.address, end - args.address)
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    shown = 0
    for ins in md.disasm(code, args.address):
        if args.end is not None and ins.address >= args.end:
            break
        if args.end is None and shown >= args.count:
            break
        print(f"{ins.address:08x}  {ins.bytes.hex():<24s} {ins.mnemonic} {ins.op_str}")
        shown += 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
