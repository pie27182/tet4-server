#!/usr/bin/env python3
"""Generate C++03 class skeletons from the RTTI inventory.

The hierarchy and vtable slot order are observed facts. Method signatures are
not recovered, so a slot is either its recovered name or `vfunc_<slot>`; the
address is kept in a comment. The output is a navigation skeleton, not
compilable source.
"""
from __future__ import annotations

import argparse
import re
from collections import defaultdict
from pathlib import Path

BAD_NAME = re.compile(r"^(FUN_|thunk_FUN_|vfunction|FID_conflict|unknown|_)")


def read_classes(path: Path):
    rows = []
    for line in path.read_text(encoding="utf-8").splitlines()[1:]:
        parts = line.split("\t")
        if len(parts) != 8:
            continue
        module, cls, td, col, vtable, slots, bases, inheritance = parts
        rows.append(
            {
                "module": module,
                "class": cls,
                "td": td,
                "col": col,
                "vtable": vtable,
                "slots": int(slots),
                "bases": [b for b in bases.split(";") if b and b != cls],
                "inheritance": inheritance,
            }
        )
    return rows


def read_slots(path: Path):
    slots = defaultdict(dict)
    for line in path.read_text(encoding="utf-8").splitlines()[1:]:
        parts = line.split("\t")
        if len(parts) != 6:
            continue
        module, cls, vtable, slot, target, name = parts
        slots[(module, cls, vtable)][int(slot)] = (target, name)
    return slots


def method_name(name: str, slot: int) -> str:
    if not name or BAD_NAME.match(name):
        return f"vfunc_{slot}"
    # HGF5V.DLL::CF5GameWnd::DisplayChatMessage -> DisplayChatMessage
    short = name.split("::")[-1].strip()
    if not short or not re.match(r"^[A-Za-z_]\w*$", short):
        return f"vfunc_{slot}"
    return short


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("classes", type=Path)
    parser.add_argument("slots", type=Path)
    parser.add_argument("output", type=Path)
    parser.add_argument("modules", nargs="+")
    args = parser.parse_args(argv)

    classes = read_classes(args.classes)
    slots = read_slots(args.slots)
    args.output.mkdir(parents=True, exist_ok=True)

    for module in args.modules:
        module_classes = [c for c in classes if c["module"] == module]
        if not module_classes:
            continue
        # One class declaration per name, using the largest vtable.
        chosen = {}
        for item in module_classes:
            current = chosen.get(item["class"])
            if current is None or item["slots"] > current["slots"]:
                chosen[item["class"]] = item
        defined = set(chosen)
        forward = set()
        for item in chosen.values():
            forward.update(b for b in item["bases"] if b not in defined)

        namespace = re.sub(r"\W", "_", Path(module).stem)
        lines = [
            "// Generated from MSVC RTTI by tools/rtti_headers.py.",
            "// Hierarchy and vtable order are observed; signatures are not.",
            "#pragma once",
            "",
            f"namespace {namespace} {{",
            "",
        ]
        for name in sorted(forward):
            lines.append(f"class {name};")
        if forward:
            lines.append("")
        for name in sorted(chosen):
            item = chosen[name]
            bases = ", ".join(f"public {b}" for b in item["bases"])
            head = f"class {name}"
            if bases:
                head += f" : {bases}"
            lines.append(head + " {")
            lines.append("public:")
            table = slots.get((module, name, item["vtable"]), {})
            for slot in range(item["slots"]):
                target, method = table.get(slot, ("", ""))
                lines.append(
                    f"    virtual void {method_name(method, slot)}(); "
                    f"// slot {slot}, 0x{int(target, 16):08x}"
                )
            lines.append("};")
            lines.append("")
        lines.append(f"}}  // namespace {namespace}")
        (args.output / f"{namespace}.h").write_text(
            "\n".join(lines) + "\n", encoding="utf-8"
        )
        print(f"{module}: {len(chosen)} classes -> {namespace}.h")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
