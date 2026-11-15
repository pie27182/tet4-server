#!/usr/bin/env python3
"""Check, patch and start your copy of the Tet4 1.3.4 client.

    python3 tools/client.py check [DIR]     verify DIR (default client/) against its
                                            files.sha256.json
    python3 tools/client.py patch [SRC DST] copy client/ to client-patched/ with the
                                            TPack hosts set to 127.0.0.1
    python3 tools/client.py run [DIR]       start DIR/Tet4.exe (default client-patched/)
                                            under Wine with tools/bootstrap-sample.txt

The client is not part of this repository: copy your own into client/.
"""
import argparse
import hashlib
import json
import os
import shutil
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CLEAN_SHA256 = "722d91223ae28d89c4740420544fc4f372bf13b41e3bce5a139c793054407b8f"
PATCHED_SHA256 = "f2020231a914ac11263694f3552c751e8cf5dfa6f9f7ad0710a02f5c6980ae28"

# The client connects to these TPack hosts, not to the bootstrap's (file offsets).
TPACK_HOSTS = [
    (0x1F9520, b"dev-tpacksvr.tp.casual.hangame.com"),
    (0x1F9544, b"alpha-tpacksvr.tp.casual.hangame.com"),
    (0x1F956C, b"tpacksvr.tp.casual.hangame.com"),
]

# --debug-single-scene: the two calls at the end of CTetSingleScene::Update
# (0x00462600) that index its still-empty step vectors (image address, bytes).
SCENE_UPDATE_CALLS = [
    (0x004627F0, bytes.fromhex("e87bf6ffff")),  # call 0x00461E70, faults at 0x00461E9D
    (0x004627F7, bytes.fromhex("e8a4f7ffff")),  # call 0x00461FA0, faults at 0x00462009
]


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def check(directory: Path) -> int:
    manifest_path = directory / "files.sha256.json"
    try:
        manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    except (OSError, ValueError) as exc:
        sys.exit(f"cannot read {manifest_path}: {exc}")
    missing = [rel for rel in manifest if not (directory / rel).is_file()]
    changed = [rel for rel, digest in manifest.items()
               if rel not in missing and sha256((directory / rel).read_bytes()) != digest]
    print(f"{len(manifest)} files, {len(missing)} missing, {len(changed)} changed")
    for rel in missing[:20]:
        print("  missing", rel)
    for rel in changed[:20]:
        print("  changed", rel)
    if changed == ["Tet4.exe"] and not missing:
        print("only Tet4.exe differs, as in a patched copy")
    return 0 if not missing and not changed else 1


def file_offset(image: bytes, va: int) -> int:
    pe = struct.unpack_from("<I", image, 0x3C)[0]
    sections = struct.unpack_from("<H", image, pe + 6)[0]
    optional = pe + 24
    image_base = struct.unpack_from("<I", image, optional + 28)[0]
    table = optional + struct.unpack_from("<H", image, pe + 20)[0]
    rva = va - image_base
    for i in range(sections):
        size, start, raw_size, raw = struct.unpack_from("<IIII", image, table + 40 * i + 8)
        if start <= rva < start + max(size, raw_size):
            return raw + rva - start
    raise ValueError(f"0x{va:08X} is not in the image")


def patch(src: Path, dst: Path, debug_single_scene: bool) -> int:
    if dst.exists():
        sys.exit(f"{dst} already exists")
    exe = bytearray((src / "Tet4.exe").read_bytes())
    if sha256(exe) != CLEAN_SHA256:
        sys.exit("Tet4.exe is not the clean 1.3.4 file; run `tools/client.py check` first")
    for offset, host in TPACK_HOSTS:
        exe[offset:offset + len(host)] = b"127.0.0.1".ljust(len(host), b"\0")
    assert sha256(exe) == PATCHED_SHA256
    if debug_single_scene:
        for va, expected in SCENE_UPDATE_CALLS:
            offset = file_offset(exe, va)
            if exe[offset:offset + len(expected)] != expected:
                sys.exit(f"unexpected bytes at 0x{va:08X}; not patching")
            exe[offset:offset + len(expected)] = b"\x90" * len(expected)
    try:
        shutil.copytree(src, dst)
        (dst / "Tet4.exe").write_bytes(exe)
    except OSError as exc:
        shutil.rmtree(dst, ignore_errors=True)
        sys.exit(f"copy failed: {exc}")
    print(f"patched copy in {dst}" + (" (debug: scene update calls removed)" if debug_single_scene else ""))
    return 0


def run(directory: Path, bootstrap: Path) -> int:
    if not (directory / "Tet4.exe").is_file():
        sys.exit(f"no Tet4.exe in {directory}")
    env = {**os.environ, "LANG": "ko_KR.UTF-8", "LC_ALL": "ko_KR.UTF-8"}
    env.setdefault("WINEDEBUG", "-all")
    boot = bootstrap.read_text(encoding="ascii").strip()
    return subprocess.call(["wine", "Tet4.exe", boot], cwd=directory, env=env)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    commands = parser.add_subparsers(dest="command", required=True)
    p = commands.add_parser("check", help="verify a client folder against its manifest")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client")
    p = commands.add_parser("patch", help="make a copy that uses the local TPack server")
    p.add_argument("src", type=Path, nargs="?", default=ROOT / "client")
    p.add_argument("dst", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--debug-single-scene", action="store_true",
                   help="also remove the two calls that crash the Single Mode scene "
                        "(debugging only; see docs/PROTOCOL.md)")
    p = commands.add_parser("run", help="start the client under Wine")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--bootstrap", type=Path, default=ROOT / "tools" / "bootstrap-sample.txt")
    args = parser.parse_args()
    if args.command == "check":
        return check(args.dir)
    if args.command == "patch":
        return patch(args.src, args.dst, args.debug_single_scene)
    return run(args.dir, args.bootstrap)


if __name__ == "__main__":
    raise SystemExit(main())
