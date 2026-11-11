#!/usr/bin/env python3
"""Make a copy of the client whose TPack hosts point at 127.0.0.1.

The unmodified client does not contact the local TPack server (see docs/CLIENT.md),
so the experiments used a copy in which three hostnames are replaced by 127.0.0.1.
This script applies exactly that change to a copy you make yourself. It does not
ship any binary: the patch is three offsets and the strings it expects to find.

    python3 tools/patch_client.py              # client/ -> client-patched/ in the repository

The source must be the clean Tet4.exe (sha256 checked). The output is checked
against the sha256 of the patched file we used.
"""
import argparse
import hashlib
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

CLEAN_SHA256 = "722d91223ae28d89c4740420544fc4f372bf13b41e3bce5a139c793054407b8f"
PATCHED_SHA256 = "f2020231a914ac11263694f3552c751e8cf5dfa6f9f7ad0710a02f5c6980ae28"

# (file offset, original hostname) in Tet4.exe. Each is replaced by 127.0.0.1,
# padded with NUL bytes to the same length.
PATCHES = [
    (0x1F9520, b"dev-tpacksvr.tp.casual.hangame.com"),
    (0x1F9544, b"alpha-tpacksvr.tp.casual.hangame.com"),
    (0x1F956C, b"tpacksvr.tp.casual.hangame.com"),
]
REPLACEMENT = b"127.0.0.1"


def sha256_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path, nargs="?", default=ROOT / "client", help="clean client folder")
    ap.add_argument("dst", type=Path, nargs="?", default=ROOT / "client-patched", help="new folder to create")
    args = ap.parse_args()

    if args.dst.exists():
        print(f"{args.dst} already exists; remove it or choose another path", file=sys.stderr)
        return 2
    src_exe = args.src / "Tet4.exe"
    data = bytearray(src_exe.read_bytes())
    if sha256_bytes(bytes(data)) != CLEAN_SHA256:
        print("Tet4.exe is not the clean file; run tools/check_client.py first", file=sys.stderr)
        return 1

    for offset, original in PATCHES:
        if bytes(data[offset:offset + len(original)]) != original:
            print(f"unexpected bytes at 0x{offset:x}; this build is not supported", file=sys.stderr)
            return 1
        data[offset:offset + len(original)] = REPLACEMENT.ljust(len(original), b"\0")

    result = bytes(data)
    if sha256_bytes(result) != PATCHED_SHA256:
        print("patched bytes do not match the expected result", file=sys.stderr)
        return 1

    try:
        shutil.copytree(args.src, args.dst, symlinks=False)
        (args.dst / "Tet4.exe").write_bytes(result)
    except OSError as exc:
        shutil.rmtree(args.dst, ignore_errors=True)
        print(f"copy failed ({exc}); removed the partial folder {args.dst}", file=sys.stderr)
        return 1
    print(f"patched copy written to {args.dst}")
    print("Tet4.exe sha256", PATCHED_SHA256)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
