#!/usr/bin/env python3
"""Check, patch and start your copy of the Tet4 1.3.4 client.

    python3 tools/client.py check [DIR]     verify DIR (default client/) against its
                                            files.sha256.json
    python3 tools/client.py patch [SRC DST] copy client/ to client-patched/ with the
                                            TPack hosts set to 127.0.0.1
    python3 tools/client.py run [DIR]       start DIR/Tet4.exe (default client-patched/)
                                            under Wine with tools/bootstrap-sample.txt
    python3 tools/client.py controls [DIR]  write DIR/controls.runtime.bin from
                                            DIR/controls.json
    python3 tools/client.py run [DIR] --controls FILE
                                            use FILE instead of DIR/controls.json

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

# h-tetra.exe turns controls.json into controls.runtime.bin.  Tet4.exe reads
# only the binary file: u32 magic "HTC2", u32 enabled (1), u32 das_ms, u32 arr_ms,
# 256 action-id bytes indexed by DirectInput scan code, u32 soft_drop_arr_ms.
# Tet4.exe preloads its own defaults, so scan codes that should not be bound are
# written as 0, exactly as the launcher's Compile() does.
CONTROL_MAGIC = 0x32435448
CONTROL_FILE = "controls.runtime.bin"
CONTROL_SIZE = 0x114
CONTROL_ACTIONS = {
    "left": 1,
    "right": 2,
    "soft_drop": 4,
    "hard_drop": 5,
    "hold": 6,
    "rotate_cw": 7,
    "rotate_ccw": 8,
    "item_target_1": 9,
    "item_target_2": 10,
    "item_target_3": 11,
    "item_target_4": 12,
    "item_target_5": 13,
    "item_target_6": 14,
    "use_item": 15,
    "discard_item": 16,
}
CONTROL_REQUIRED = ("left", "right", "soft_drop", "hard_drop", "hold",
                    "rotate_cw", "rotate_ccw")
# Defaults in FUN_004d0550 that the launcher explicitly unbinds before it
# applies controls.json.
CONTROL_CLEARED = {
    203, 205, 157, 29, 44, 209, 199, 200, 45, 207, 201, 208, 57, 42, 54, 46,
    210, 79, 80, 81, 75, 76, 77, 71, 72, 73, 82,
}
# Item actions have a second built-in binding that is cleared only when the
# action is configured.
CONTROL_ITEM_DEFAULTS = {
    "item_target_1": (2, 16),
    "item_target_2": (3, 17),
    "item_target_3": (4, 18),
    "item_target_4": (5, 30),
    "item_target_5": (6, 31),
    "item_target_6": (7, 32),
    "use_item": (41, 47),
    "discard_item": (20, 19),
}
DIK_CODES = {
    "escape": 0x01, "esc": 0x01, "1": 0x02, "2": 0x03, "3": 0x04, "4": 0x05,
    "5": 0x06, "6": 0x07, "7": 0x08, "8": 0x09, "9": 0x0A, "0": 0x0B,
    "minus": 0x0C, "equals": 0x0D, "backspace": 0x0E, "tab": 0x0F,
    "q": 0x10, "w": 0x11, "e": 0x12, "r": 0x13, "t": 0x14, "y": 0x15,
    "u": 0x16, "i": 0x17, "o": 0x18, "p": 0x19, "leftbracket": 0x1A,
    "rightbracket": 0x1B, "enter": 0x1C, "lcontrol": 0x1D, "leftcontrol": 0x1D,
    "control": 0x1D, "a": 0x1E, "s": 0x1F, "d": 0x20, "f": 0x21, "g": 0x22,
    "h": 0x23, "j": 0x24, "k": 0x25, "l": 0x26, "semicolon": 0x27,
    "apostrophe": 0x28, "quote": 0x28, "grave": 0x29, "lshift": 0x2A,
    "leftshift": 0x2A,
    "shift": 0x2A, "backslash": 0x2B, "z": 0x2C, "x": 0x2D, "c": 0x2E,
    "v": 0x2F, "b": 0x30, "n": 0x31, "m": 0x32, "comma": 0x33,
    "period": 0x34, "slash": 0x35, "rshift": 0x36, "rightshift": 0x36,
    "multiply": 0x37, "lalt": 0x38, "leftalt": 0x38, "alt": 0x38,
    "space": 0x39, "capslock": 0x3A, "f1": 0x3B, "f2": 0x3C, "f3": 0x3D,
    "f4": 0x3E, "f5": 0x3F, "f6": 0x40, "f7": 0x41, "f8": 0x42, "f9": 0x43,
    "f10": 0x44, "numlock": 0x45, "scrolllock": 0x46, "numpad7": 0x47,
    "numpad8": 0x48, "numpad9": 0x49, "subtract": 0x4A, "numpad4": 0x4B,
    "numpad5": 0x4C, "numpad6": 0x4D, "add": 0x4E, "numpad1": 0x4F,
    "numpad2": 0x50, "numpad3": 0x51, "numpad0": 0x52, "decimal": 0x53,
    "f11": 0x57, "f12": 0x58, "numpadenter": 0x9C, "rcontrol": 0x9D,
    "rightcontrol": 0x9D, "divide": 0xB5, "printscreen": 0xB7,
    "ralt": 0xB8, "rightalt": 0xB8, "home": 0xC7, "up": 0xC8, "pageup": 0xC9,
    "left": 0xCB, "right": 0xCD, "end": 0xCF, "down": 0xD0, "pagedown": 0xD1,
    "insert": 0xD2, "delete": 0xD3, "lwin": 0xDB, "rwin": 0xDC, "menu": 0xDD,
}


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


def patch(src: Path, dst: Path) -> int:
    if dst.exists():
        sys.exit(f"{dst} already exists")
    exe = bytearray((src / "Tet4.exe").read_bytes())
    if sha256(exe) != CLEAN_SHA256:
        sys.exit("Tet4.exe is not the clean 1.3.4 file; run `tools/client.py check` first")
    for offset, host in TPACK_HOSTS:
        exe[offset:offset + len(host)] = b"127.0.0.1".ljust(len(host), b"\0")
    assert sha256(exe) == PATCHED_SHA256
    try:
        shutil.copytree(src, dst)
        (dst / "Tet4.exe").write_bytes(exe)
    except OSError as exc:
        shutil.rmtree(dst, ignore_errors=True)
        sys.exit(f"copy failed: {exc}")
    print(f"patched copy in {dst}")
    return 0


def key_code(name: str) -> int:
    key = name.strip().lower()
    if key.startswith("dik_"):
        key = key[4:]
    try:
        return DIK_CODES[key]
    except KeyError:
        sys.exit(f"unsupported key {name!r}; supported keys: {', '.join(sorted(DIK_CODES))}")


def write_controls(directory: Path, source: Path | None = None) -> int:
    source = source or directory / "controls.json"
    try:
        config = json.loads(source.read_text(encoding="utf-8"))
    except (OSError, ValueError) as exc:
        sys.exit(f"cannot read {source}: {exc}")
    if not isinstance(config, dict):
        sys.exit(f"{source}: expected an object")
    enabled = config.get("enabled", True)
    if not isinstance(enabled, bool):
        sys.exit(f"{source}: enabled must be true or false")
    try:
        das = int(config.get("das_ms", 145))
        arr = int(config.get("arr_ms", 33))
        soft = int(config.get("soft_drop_arr_ms", 33))
    except (TypeError, ValueError):
        sys.exit(f"{source}: das_ms, arr_ms and soft_drop_arr_ms must be integers")
    if not (0 <= das <= 1000 and 0 <= arr <= 500 and 0 <= soft <= 500):
        sys.exit(f"{source}: das_ms must be 0..1000, arr_ms and soft_drop_arr_ms 0..500")
    keys = config.get("keys")
    if not isinstance(keys, dict):
        sys.exit(f"{source}: keys must be an object")
    assignments = {}
    for action, names in keys.items():
        name = action.lower()
        action_id = CONTROL_ACTIONS.get(name)
        if action_id is None:
            sys.exit(f"{source}: unknown action {action!r}; supported: "
                     f"{', '.join(sorted(CONTROL_ACTIONS))}")
        if name in assignments:
            sys.exit(f"{source}: duplicate action {action!r}")
        if not isinstance(names, list) or not 1 <= len(names) <= 8:
            sys.exit(f"{source}: {action} requires an array of 1 to 8 key names")
        assignments[name] = (action, names, action_id)
    missing = [action for action in CONTROL_REQUIRED if action not in assignments]
    if missing:
        sys.exit(f"{source}: missing action(s): {', '.join(missing)}")
    buf = bytearray([0xFF]) * CONTROL_SIZE
    struct.pack_into("<IIII", buf, 0,
                     CONTROL_MAGIC, 1 if enabled else 0, das, arr)
    struct.pack_into("<I", buf, 0x110, soft)
    for code in CONTROL_CLEARED:
        buf[0x10 + code] = 0
    for name in assignments:
        for code in CONTROL_ITEM_DEFAULTS.get(name, ()):
            buf[0x10 + code] = 0
    seen = {}
    for name, (action, names, action_id) in assignments.items():
        for key in names:
            code = key_code(str(key))
            if not 1 <= code <= 0xFE:
                sys.exit(f"{source}: key {key!r} has no DirectInput scan code")
            if code in seen:
                sys.exit(f"{source}: duplicate key {key!r} "
                         f"({seen[code]}, {action})")
            seen[code] = action
            buf[0x10 + code] = action_id
    runtime = directory / CONTROL_FILE
    runtime.write_bytes(buf)
    state = "enabled" if enabled else "disabled"
    print(f"controls {state} in {runtime} from {source}: {len(buf)} bytes, "
          f"das={das} arr={arr} soft={soft}", flush=True)
    return 0


def run(directory: Path, bootstrap: Path, controls: Path | None = None) -> int:
    if not (directory / "Tet4.exe").is_file():
        sys.exit(f"no Tet4.exe in {directory}")
    # `client-patched` is a disposable copy of `client`, so the canonical
    # controls.json is the one in client/.  An explicit --controls wins.
    explicit = controls is not None
    if controls is None:
        source = ROOT / "client" / "controls.json"
        if directory.resolve() == (ROOT / "client-patched").resolve() and source.is_file():
            controls = source
        else:
            controls = directory / "controls.json"
    if controls.is_file():
        write_controls(directory, controls)
    elif explicit or controls != directory / "controls.json":
        sys.exit(f"no controls file: {controls}")
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
    p = commands.add_parser("run", help="start the client under Wine")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--bootstrap", type=Path, default=ROOT / "tools" / "bootstrap-sample.txt")
    p.add_argument("--controls", type=Path, default=None,
                   help="controls.json to apply (default: client/controls.json "
                        "for client-patched, otherwise DIR/controls.json)")
    p = commands.add_parser("controls", help="write controls.runtime.bin from controls.json")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--config", type=Path, default=None,
                   help="controls.json to read (default: DIR/controls.json)")
    args = parser.parse_args()
    if args.command == "check":
        return check(args.dir)
    if args.command == "patch":
        return patch(args.src, args.dst)
    if args.command == "controls":
        return write_controls(args.dir, args.config)
    return run(args.dir, args.bootstrap, args.controls)


if __name__ == "__main__":
    raise SystemExit(main())
