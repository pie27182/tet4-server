#!/usr/bin/env python3
"""Summarize REA decompile_all output.

`work/decompiled-rea/<module>/decompile-index.json` is the manifest written by
REA. This tool merges the manifests into `all-functions.tsv` and writes
`SUMMARY.md`; it never modifies the decompiled `.c` files.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path


def load(root: Path):
    rows = []
    modules = []
    for index in sorted(root.glob("*/decompile-index.json")):
        module = index.parent.name
        data = json.loads(index.read_text(encoding="utf-8"))
        functions = data.get("functions", [])
        counts = {"written": 0, "external": 0, "failed": 0, "other": 0}
        for function in functions:
            status = function.get("status", "other")
            counts[status if status in counts else "other"] += 1
            body = function.get("body") or {}
            ranges = body.get("ranges") or []
            end = ranges[-1].get("end", "") if ranges else ""
            rows.append(
                (
                    module,
                    function.get("address", ""),
                    end,
                    function.get("name", ""),
                    status,
                    function.get("relative_path", ""),
                )
            )
        modules.append((module, len(functions), counts))
    return rows, modules


def write(root: Path, rows, modules) -> None:
    with (root / "all-functions.tsv").open("w", encoding="utf-8") as out:
        out.write("module\taddress\tend\tname\tstatus\tpath\n")
        for row in rows:
            out.write("\t".join(str(value) for value in row) + "\n")

    total_written = sum(m[2]["written"] for m in modules)
    total_external = sum(m[2]["external"] for m in modules)
    total_failed = sum(m[2]["failed"] for m in modules)

    with (root / "SUMMARY.md").open("w", encoding="utf-8") as out:
        out.write("# REA decompilation of the Hangame Tetris client\n\n")
        out.write(
            f"{len(modules)} native modules, {len(rows)} indexed functions, "
            f"{total_written} written bodies, {total_external} external, "
            f"{total_failed} failed.\n\n"
        )
        out.write("| module | functions | written | external | failed |\n")
        out.write("|---|---:|---:|---:|---:|\n")
        for module, count, counts in modules:
            out.write(
                f"| `{module}` | {count} | {counts['written']} | "
                f"{counts['external']} | {counts['failed']} |\n"
            )
        if total_failed:
            out.write("\nFailures:\n")
            for module, _, counts in modules:
                if counts["failed"]:
                    out.write(
                        f"- `{module}`: {counts['failed']} function(s) failed "
                        "in Ghidra (payload/address-space limit).\n"
                    )


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "root",
        nargs="?",
        type=Path,
        default=Path("work/decompiled-rea"),
        help="directory containing <module>/decompile-index.json",
    )
    args = parser.parse_args(argv)
    if not args.root.is_dir():
        print(f"{args.root}: not a directory", file=sys.stderr)
        return 1
    rows, modules = load(args.root)
    write(args.root, rows, modules)
    written = sum(m[2]["written"] for m in modules)
    external = sum(m[2]["external"] for m in modules)
    failed = sum(m[2]["failed"] for m in modules)
    print(
        f"{len(modules)} modules, {len(rows)} functions, "
        f"{written} written, {external} external, {failed} failed"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
