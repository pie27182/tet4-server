#!/usr/bin/env python3
"""Check a Tet4 client folder against the manifest shipped inside it.

The folder you got from the official distribution contains files.sha256.json
(relative path -> sha256 of every file). This script verifies all of them and
reports Tet4.exe separately, because the three-host patch (tools/patch_client.py)
changes it on purpose.

    python3 tools/check_client.py ~/h-tetra-client

Exit status 0 when every file matches the manifest.
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

CLEAN_TET4_SHA256 = "722d91223ae28d89c4740420544fc4f372bf13b41e3bce5a139c793054407b8f"


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("client_dir", type=Path)
    args = ap.parse_args()
    root = args.client_dir
    manifest_path = root / "files.sha256.json"
    if not manifest_path.exists():
        print(f"no files.sha256.json in {root}: is this the client folder?", file=sys.stderr)
        return 2
    try:
        manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    except (OSError, ValueError) as exc:
        print(f"cannot read {manifest_path}: {exc}", file=sys.stderr)
        return 2

    missing, bad = [], []
    for rel, expected in manifest.items():
        path = root / rel
        if not path.is_file():
            missing.append(rel)
        elif sha256(path) != expected:
            bad.append(rel)

    print(f"manifest entries: {len(manifest)}")
    print(f"missing: {len(missing)}  changed: {len(bad)}")
    for rel in missing[:20]:
        print("  missing", rel)
    for rel in bad[:20]:
        print("  changed", rel)
    if "Tet4.exe" in bad:
        tet4 = sha256(root / "Tet4.exe")
        if tet4 == CLEAN_TET4_SHA256:
            print("Tet4.exe is the clean file")
        else:
            print("Tet4.exe differs from the clean file (expected only after tools/patch_client.py)")
    ok = not missing and not bad
    print("OK" if ok else "NOT THE ORIGINAL CLIENT (see above)")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
