#!/usr/bin/env python3
"""Look up a function in an export made by tools/export.sh.

export.sh writes <module>.index.tsv (entry, size, name, signature) and <module>.c
(decompiled C) for every module. This script searches the index files:

    python3 tools/find_function.py EXPORT_DIR 0x60903110
    python3 tools/find_function.py EXPORT_DIR BuildChannelList
    python3 tools/find_function.py EXPORT_DIR 60903600 --show

--show also prints the decompiled body of the first match from <module>.c.
"""
import argparse
import re
import sys
from pathlib import Path


def load_index(export_dir: Path):
    for tsv in sorted(export_dir.glob("*.index.tsv")):
        module = tsv.name[: -len(".index.tsv")]
        for line in tsv.read_text(encoding="utf-8", errors="replace").splitlines()[1:]:
            parts = line.split("\t")
            if len(parts) < 3:
                continue
            entry, size, name = parts[0], parts[1], parts[2]
            yield module, entry.lower().removeprefix("0x"), size, name, parts[3] if len(parts) > 3 else ""


def body_of(export_dir: Path, module: str, entry: str) -> str:
    text = (export_dir / f"{module}.c").read_text(encoding="utf-8", errors="replace")
    blocks = re.split(r"(?=/\* ---- )", text)
    for block in blocks:
        head = block.split("\n", 1)[0]
        if f"@ {entry}" in head:
            return block
    return ""


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("export_dir", type=Path)
    ap.add_argument("query", help="hex address (0x... or plain) or part of a function name")
    ap.add_argument("--show", action="store_true", help="print the decompiled body of the first match")
    args = ap.parse_args()

    q = args.query.lower()
    is_addr = bool(re.fullmatch(r"(0x)?[0-9a-f]{6,8}", q))
    if is_addr:
        q = q.removeprefix("0x").zfill(8)
    matches = []
    for module, entry, size, name, sig in load_index(args.export_dir):
        if (is_addr and entry == q) or (not is_addr and args.query.lower() in name.lower()):
            matches.append((module, entry, size, name, sig))
    if not matches:
        print("no match", file=sys.stderr)
        return 1
    for module, entry, size, name, sig in matches[:50]:
        print(f"{module:28s} 0x{entry}  size={size:>6}  {name}")
        if sig:
            print(f"    {sig}")
    if args.show:
        module, entry = matches[0][0], matches[0][1]
        print(body_of(args.export_dir, module, entry) or "(body not found)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
