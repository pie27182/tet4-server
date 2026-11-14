#!/usr/bin/env python3
"""Validate reconstruction metadata tables.

The tables are tab-separated and contain one row per recovered address,
function or instruction. The checker enforces the documented columns and the
provenance vocabulary; it does not try to prove that the analysis is correct.
"""
from __future__ import annotations

import argparse
import re
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
PROVENANCE = {"observed", "derived", "provisional", "inferred"}
ADDRESS = re.compile(r"^0x[0-9a-f]+$")
SIZE = re.compile(r"^(\?|\d+)$")


def validate(path: Path) -> list[str]:
    """Return a list of human-readable errors; an empty list means valid."""
    errors: list[str] = []
    try:
        lines = path.read_text(encoding="utf-8").splitlines()
    except OSError as exc:
        return [f"{path}: {exc}"]

    if not lines:
        return [f"{path}: empty table"]

    header = tuple(lines[0].split("\t"))
    if header != COLUMNS:
        errors.append(
            f"{path}: header must be {chr(9).join(COLUMNS)!r}, got {lines[0]!r}"
        )

    seen: set[tuple[str, str]] = set()
    for number, line in enumerate(lines[1:], start=2):
        if not line.strip():
            continue
        parts = line.split("\t")
        if len(parts) != len(COLUMNS):
            errors.append(
                f"{path}:{number}: expected {len(COLUMNS)} columns, got {len(parts)}"
            )
            continue
        row = dict(zip(COLUMNS, parts))
        if not ADDRESS.match(row["address"]):
            errors.append(f"{path}:{number}: bad address {row['address']!r}")
        if not SIZE.match(row["size"]):
            errors.append(f"{path}:{number}: bad size {row['size']!r}")
        if row["provenance"] not in PROVENANCE:
            errors.append(
                f"{path}:{number}: bad provenance {row['provenance']!r}"
            )
        for column in ("symbol", "owner", "role", "evidence"):
            if not row[column].strip():
                errors.append(f"{path}:{number}: empty {column}")
        key = (row["address"], row["symbol"])
        if key in seen:
            errors.append(f"{path}:{number}: duplicate {key}")
        seen.add(key)

    return errors


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "tables",
        nargs="+",
        type=Path,
        help="metadata TSV files, for example reconstruction/metadata/scene.tsv",
    )
    args = parser.parse_args(argv)

    failed = False
    for table in args.tables:
        errors = validate(table)
        if errors:
            failed = True
            for error in errors:
                print(error, file=sys.stderr)
        else:
            print(f"{table}: ok")
    return 1 if failed else 0


if __name__ == "__main__":
    raise SystemExit(main())
