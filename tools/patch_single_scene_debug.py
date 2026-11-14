#!/usr/bin/env python3
"""Debug-only workaround for the Single Mode scene update crash.

Tet4.exe 1.3.4 calls FUN_00461E70 (CTetSingleScene step update) from
CTetSingleScene::Update at 0x4627F0. When the Single Mode scene is created
before the server-side game start data is applied, its step vector at
scene+0x268 is empty and FUN_00461E70 faults at 0x461E9D.

This script NOPs that one 5-byte call in a *copy* of the client
(client-patched/Tet4.exe). It is a debugging aid to let the room UI appear and
to observe the next protocol step; it is not part of the server or the
reconstruction and must not be applied to the original client/Tet4.exe.
"""
import struct
import sys
from pathlib import Path

VA = 0x4627F0
EXPECTED = bytes.fromhex("e87bf6ffff")
PATCH = b"\x90" * 5


def va_to_offset(data: bytes, va: int) -> int:
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise SystemExit("not a PE image")
    coff = pe + 4
    count = struct.unpack_from("<H", data, coff + 2)[0]
    opt_size = struct.unpack_from("<H", data, coff + 16)[0]
    opt = coff + 20
    magic = struct.unpack_from("<H", data, opt)[0]
    image_base = (struct.unpack_from("<I", data, opt + 28)[0]
                  if magic == 0x10B else struct.unpack_from("<Q", data, opt + 24)[0])
    table = opt + opt_size
    rva = va - image_base
    for i in range(count):
        off = table + i * 40
        vsize, sva, raw_size, raw = struct.unpack_from("<IIII", data, off + 8)
        if sva <= rva < sva + max(vsize, raw_size):
            return raw + rva - sva
    raise SystemExit(f"VA 0x{va:x} is not mapped")


def main(argv: list[str]) -> int:
    path = Path(argv[1] if len(argv) > 1 else "client-patched/Tet4.exe")
    data = bytearray(path.read_bytes())
    off = va_to_offset(data, VA)
    current = bytes(data[off:off + len(EXPECTED)])
    if current == PATCH:
        print(f"{path}: already patched at 0x{VA:08x}")
        return 0
    if current != EXPECTED:
        raise SystemExit(
            f"{path}: unexpected bytes at 0x{VA:08x}: {current.hex()}"
        )
    data[off:off + len(PATCH)] = PATCH
    path.write_bytes(data)
    print(f"{path}: patched 0x{VA:08x} ({EXPECTED.hex()} -> {PATCH.hex()})")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv))
