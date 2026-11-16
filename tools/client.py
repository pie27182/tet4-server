#!/usr/bin/env python3
"""Client launcher and helpers for Tet4 1.3.4.

The game itself is not distributed here. This helper is designed for normal users:
run it with no arguments and it will guide the user through the setup interactively.

Legacy commands remain available:
    python3 tools/client.py check [DIR]
    python3 tools/client.py patch [SRC DST] [--host ADDRESS]
    python3 tools/client.py play --server ADDRESS [--register] [--name NAME] [DIR]
"""
import argparse
import getpass
import hashlib
import json
import os
import re
import shutil
import socket
import ssl
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CLEAN_SHA256 = "722d91223ae28d89c4740420544fc4f372bf13b41e3bce5a139c793054407b8f"
PATCHED_SHA256 = "f2020231a914ac11263694f3552c751e8cf5dfa6f9f7ad0710a02f5c6980ae28"

TPACK_HOSTS = [
    (0x1F9520, b"dev-tpacksvr.tp.casual.hangame.com"),
    (0x1F9544, b"alpha-tpacksvr.tp.casual.hangame.com"),
    (0x1F956C, b"tpacksvr.tp.casual.hangame.com"),
]
MAX_HOST = min(len(host) for _, host in TPACK_HOSTS)
SAMPLE = ROOT / "tools" / "bootstrap-sample.txt"
DEFAULT_SERVER = "tet4server.duckdns.org"
CONFIG_PATH = ROOT / ".tet4_launcher.json"


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def load_config() -> dict:
    default = {"server": DEFAULT_SERVER, "client": str(ROOT / "client")}
    if not CONFIG_PATH.is_file():
        return default
    try:
        data = json.loads(CONFIG_PATH.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return default
    return {"server": data.get("server") or default["server"], "client": data.get("client") or default["client"]}


def save_config(server: str, client_dir: str) -> None:
    CONFIG_PATH.write_text(json.dumps({"server": server, "client": client_dir}, indent=2), encoding="utf-8")


def print_banner() -> None:
    print("Tet4 Launcher")
    print("This launcher helps you choose the game folder, patch it, and start the game.")
    print("The game files themselves are not included in this repository.")
    print()


def read_line(label: str, default: str) -> str:
    answer = input(f"{label} [{default}]: ").strip()
    return answer if answer else default


def check_directory(directory: Path) -> tuple[list[str], list[str]]:
    manifest_path = directory / "files.sha256.json"
    if not manifest_path.is_file():
        return ["missing files.sha256.json"], []
    try:
        manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return ["files.sha256.json is unreadable"], []
    missing = [rel for rel in manifest if not (directory / rel).is_file()]
    changed = [
        rel for rel, digest in manifest.items()
        if rel not in missing and sha256((directory / rel).read_bytes()) != digest
    ]
    return missing, changed


def check(directory: Path) -> int:
    missing, changed = check_directory(directory)
    if not missing and not changed:
        print(f"{directory}: OK")
        return 0
    print(f"{directory}: not ready")
    for rel in missing[:20]:
        print("  missing", rel)
    for rel in changed[:20]:
        print("  changed", rel)
    return 1


def patch(src: Path, dst: Path, address: str) -> int:
    if dst.exists():
        sys.exit(f"{dst} already exists")
    if not 0 < len(address) <= MAX_HOST or not address.isascii():
        sys.exit(f"the TPack host must be 1 to {MAX_HOST} ASCII characters")
    exe = bytearray((src / "Tet4.exe").read_bytes())
    if sha256(exe) != CLEAN_SHA256:
        sys.exit("Tet4.exe is not the clean 1.3.4 file; run `tools/client.py check` first")
    for offset, host in TPACK_HOSTS:
        exe[offset:offset + len(host)] = address.encode().ljust(len(host), b"\0")
    assert address != "127.0.0.1" or sha256(exe) == PATCHED_SHA256
    try:
        shutil.copytree(src, dst)
        (dst / "Tet4.exe").write_bytes(exe)
    except OSError as exc:
        shutil.rmtree(dst, ignore_errors=True)
        sys.exit(f"copy failed: {exc}")
    print(f"patched copy in {dst} (TPack host {address})")
    return 0


def start(directory: Path, boot: str) -> int:
    exe = directory / "Tet4.exe"
    if not exe.is_file():
        sys.exit(f"no Tet4.exe in {directory}")
    if os.name == "nt":
        env = os.environ.copy()
        env.setdefault("LANG", "ko_KR.UTF-8")
        env.setdefault("LC_ALL", "ko_KR.UTF-8")
        return subprocess.call([str(exe), boot], cwd=directory, env=env)
    env = {**os.environ, "LANG": "ko_KR.UTF-8", "LC_ALL": "ko_KR.UTF-8"}
    env.setdefault("WINEDEBUG", "-all")
    return subprocess.call(["wine", "Tet4.exe", boot], cwd=directory, env=env)


def make_bootstrap(sample: str, server: str, name: str, ticket: str) -> str:
    head, fields = sample.split(";", 1)
    head = re.sub(r"^metp://[^/]+", f"metp://{server}:15000", head)
    values = {"k3e": name, "k8e": ticket, "k300e": ticket}
    out = []
    for field in fields.split("&"):
        key = field.split(":", 1)[0]
        value = values.get(key, field.split("=", 1)[1])
        out.append(f"{key}:{len(value)}={value}")
    return head + ";" + "&".join(out)


def request_ticket(server: str, port: int, op: str, name: str, password: str, insecure: bool) -> str:
    request = json.dumps({"op": op, "name": name, "password": password}).encode() + b"\n"
    with socket.create_connection((server, port), timeout=15) as raw:
        conn = raw if insecure else ssl.create_default_context().wrap_socket(raw, server_hostname=server)
        conn.sendall(request)
        reply = json.loads(conn.makefile("rb").readline())
    if not reply.get("ok"):
        sys.exit(f"{op} refused: {reply.get('error')}")
    return reply["ticket"]


def play(args: argparse.Namespace) -> int:
    name = args.name or input("name: ")
    password = getpass.getpass("password: ")
    if args.register and getpass.getpass("repeat password: ") != password:
        sys.exit("the passwords differ")
    ticket = request_ticket(args.server, args.port, "register" if args.register else "login",
                            name, password, args.insecure)
    sample = SAMPLE.read_text(encoding="ascii").strip()
    return start(args.dir, make_bootstrap(sample, args.server, name, ticket))


def interactive_main() -> int:
    print_banner()
    config = load_config()
    default_client = config.get("client") or str(ROOT / "client")
    default_server = config.get("server") or DEFAULT_SERVER

    print("Step 1: choose the server address")
    server = read_line("Server address", default_server)
    if not server:
        server = default_server

    while True:
        print("Step 2: choose the folder with your original Tet4 client")
        print("The game files are not shipped here. Select the folder that already contains Tet4.exe.")
        client_dir = read_line("Game folder", default_client)
        if not client_dir:
            client_dir = default_client
        path = Path(client_dir).expanduser()
        if not path.exists():
            print(f"Folder not found: {path}")
            print("Please choose the folder that contains Tet4.exe and the game files.")
            if input("Try again? [Y/n]: ").strip().lower() not in {"", "y", "yes"}:
                return 1
            continue
        if not (path / "Tet4.exe").is_file():
            print(f"No Tet4.exe found in {path}")
            print("Please choose the folder where the original game is installed.")
            if input("Try again? [Y/n]: ").strip().lower() not in {"", "y", "yes"}:
                return 1
            continue

        missing, changed = check_directory(path)
        if missing or changed:
            print(f"The selected game folder is not a clean game installation.")
            for rel in missing[:10]:
                print("  missing:", rel)
            for rel in changed[:10]:
                print("  changed:", rel)
            print("The launcher can still prepare a clean patched copy from this folder, but the original files must be valid.")
            choice = input("Continue and prepare the patched copy? [Y/n]: ").strip().lower()
            if choice not in {"", "y", "yes"}:
                return 1

        save_config(server, str(path))
        patched_dir = ROOT / "client-patched"
        if patched_dir.exists():
            print(f"Using existing patched copy: {patched_dir}")
        else:
            print(f"Preparing patched copy in {patched_dir}...")
            patch(path, patched_dir, server)

        print()
        print("Step 3: choose login or registration")
        action = input("Do you already have an account? [Y/n]: ").strip().lower()
        is_existing = action in {"", "y", "yes"}
        name = input("Account name: ").strip()
        if not name:
            print("Account name is required.")
            return 1

        if is_existing:
            password = getpass.getpass("Password: ")
            if not password:
                print("Password is required.")
                return 1
            ticket = request_ticket(server, 10455, "login", name, password, False)
            sample = SAMPLE.read_text(encoding="ascii").strip()
            return start(patched_dir, make_bootstrap(sample, server, name, ticket))

        password = getpass.getpass("Choose a password: ")
        repeat = getpass.getpass("Repeat the password: ")
        if password != repeat:
            print("Passwords do not match.")
            return 1
        ticket = request_ticket(server, 10455, "register", name, password, False)
        sample = SAMPLE.read_text(encoding="ascii").strip()
        return start(patched_dir, make_bootstrap(sample, server, name, ticket))


def main() -> int:
    if len(sys.argv) == 1:
        return interactive_main()
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    commands = parser.add_subparsers(dest="command", required=True)

    p = commands.add_parser("check", help="verify a client folder against its manifest")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client")

    p = commands.add_parser("patch", help="make a copy that uses your TPack server")
    p.add_argument("src", type=Path, nargs="?", default=ROOT / "client")
    p.add_argument("dst", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--host", default="127.0.0.1", help=f"the server's address, at most {MAX_HOST} characters")

    p = commands.add_parser("run", help="start the client under Wine (no accounts)")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--bootstrap", type=Path, default=SAMPLE)

    p = commands.add_parser("play", help="log in and start the client")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--server", required=True, help="the server's address")
    p.add_argument("--port", type=int, default=10455, help="account service port")
    p.add_argument("--name", help="account name (asked if left out)")
    p.add_argument("--register", action="store_true", help="create the account first")
    p.add_argument("--insecure", action="store_true", help="no TLS to the account service")

    args = parser.parse_args()
    if args.command == "check":
        return check(args.dir)
    if args.command == "patch":
        return patch(args.src, args.dst, args.host)
    if args.command == "play":
        return play(args)
    return start(args.dir, args.bootstrap.read_text(encoding="ascii").strip())


if __name__ == "__main__":
    raise SystemExit(main())




























































































































