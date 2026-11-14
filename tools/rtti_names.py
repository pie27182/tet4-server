#!/usr/bin/env python3
"""Build per-module name maps from the RTTI slot inventory.

`all-slots.tsv` contains original method names recovered from vtables/imports.
This tool merges them with the curated `names/<module>.tsv` maps; curated names
win. The result is written to an output directory and can be passed to
`ApplyNameMap.java` during class recovery:

    tools/rtti_names.py work/rtti/all-slots.tsv work/rtti/names names
"""
from __future__ import annotations

import argparse
import re
from pathlib import Path

BAD = re.compile(r"^(FUN_|thunk_FUN_|vfunc|unknown|FID_conflict|_)")


def clean(name: str) -> str | None:
    if not name or BAD.match(name):
        return None
    # HGF5V.DLL::CF5GameWnd::DisplayChatMessage -> CF5GameWnd::DisplayChatMessage
    for marker in (".DLL::", ".EXE::"):
        if marker in name:
            name = name.split(marker, 1)[1]
    name = name.strip()
    if not re.match(r"^[A-Za-z_?].*", name):
        return None
    return name


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("slots", type=Path)
    parser.add_argument("output", type=Path)
    parser.add_argument("base", type=Path, nargs="?")
    args = parser.parse_args(argv)

    recovered: dict[str, dict[str, str]] = {}
    for line in args.slots.read_text(encoding="utf-8").splitlines()[1:]:
        parts = line.split("\t")
        if len(parts) != 6:
            continue
        module, _cls, _vtable, _slot, target, name = parts
        method = clean(name)
        if method:
            recovered.setdefault(module, {})[target.lower()] = method

    args.output.mkdir(parents=True, exist_ok=True)
    for module, entries in recovered.items():
        base_lines: list[str] = []
        known: set[str] = set()
        if args.base:
            base_path = args.base / f"{module}.tsv"
            if base_path.exists():
                for line in base_path.read_text(encoding="utf-8").splitlines():
                    base_lines.append(line)
                    if "\t" in line and not line.startswith("#"):
                        known.add(line.split("\t", 1)[0].strip().lower())
        lines = base_lines[:]
        if not lines:
            lines = [f"# RTTI-derived names for {module}."]
        added = 0
        for address, name in sorted(entries.items()):
            if address in known:
                continue
            lines.append(f"{address}\t{name}")
            added += 1
        (args.output / f"{module}.tsv").write_text(
            "\n".join(lines) + "\n", encoding="utf-8"
        )
        print(f"{module}: {added} RTTI names")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
