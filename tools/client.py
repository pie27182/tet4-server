#!/usr/bin/env python3
"""Check, patch and start your copy of the Tet4 1.3.4 client.

    python3 tools/client.py check [DIR]     verify DIR (default client/) against its
                                            files.sha256.json
    python3 tools/client.py patch [SRC DST] copy client/ to client-patched/ with the
                [--host ADDRESS]            TPack hosts set to 127.0.0.1 or ADDRESS
    python3 tools/client.py run [DIR]       start DIR/Tet4.exe (default client-patched/)
                                            under Wine with tools/bootstrap-sample.txt
    python3 tools/client.py play --server ADDRESS [--register] [--name NAME] [DIR]
                                            log in to a server that requires accounts
                                            and start the client with the ticket

The client is not part of this repository: copy your own into client/.
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

# The client connects to these TPack hosts, not to the bootstrap's (file offsets).
TPACK_HOSTS = [
    (0x1F9520, b"dev-tpacksvr.tp.casual.hangame.com"),
    (0x1F9544, b"alpha-tpacksvr.tp.casual.hangame.com"),
    (0x1F956C, b"tpacksvr.tp.casual.hangame.com"),
]
MAX_HOST = min(len(host) for _, host in TPACK_HOSTS)
SAMPLE = ROOT / "tools" / "bootstrap-sample.txt"

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
    if not (directory / "Tet4.exe").is_file():
        sys.exit(f"no Tet4.exe in {directory}")
    env = {**os.environ, "LANG": "ko_KR.UTF-8", "LC_ALL": "ko_KR.UTF-8"}
    env.setdefault("WINEDEBUG", "-all")
    return subprocess.call(["wine", "Tet4.exe", boot], cwd=directory, env=env)


def make_bootstrap(sample: str, server: str, name: str, ticket: str) -> str:
    """The sample bootstrap with the server's CDS address, the account (k3e) and the
    ticket (k8e, k300e). Fields are `key:length=value`, joined by `&`."""
    head, fields = sample.split(";", 1)
    head = re.sub(r"^metp://[^/]+", f"metp://{server}:15000", head)
    values = {"k3e": name, "k8e": ticket, "k300e": ticket}
    out = []
    for field in fields.split("&"):
        key = field.split(":", 1)[0]
        value = values.get(key, field.split("=", 1)[1])
        out.append(f"{key}:{len(value)}={value}")
    return head + ";" + "&".join(out)


def request_ticket(server: str, port: int, op: str, name: str, password: str,
                   insecure: bool) -> str:
    """Register or log in on the account service; TLS unless `insecure`."""
    request = json.dumps({"op": op, "name": name, "password": password}).encode() + b"\n"
    with socket.create_connection((server, port), timeout=15) as raw:
        conn = raw if insecure else ssl.create_default_context().wrap_socket(
            raw, server_hostname=server)
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


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    commands = parser.add_subparsers(dest="command", required=True)
    p = commands.add_parser("check", help="verify a client folder against its manifest")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client")
    p = commands.add_parser("patch", help="make a copy that uses your TPack server")
    p.add_argument("src", type=Path, nargs="?", default=ROOT / "client")
    p.add_argument("dst", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--host", default="127.0.0.1",
                   help=f"the server's address, at most {MAX_HOST} characters")
    p = commands.add_parser("run", help="start the client under Wine (no accounts)")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--bootstrap", type=Path, default=SAMPLE)
    p = commands.add_parser("play", help="log in and start the client")
    p.add_argument("dir", type=Path, nargs="?", default=ROOT / "client-patched")
    p.add_argument("--server", required=True, help="the server's address")
    p.add_argument("--port", type=int, default=15010, help="account service port")
    p.add_argument("--name", help="account name (asked if left out)")
    p.add_argument("--register", action="store_true", help="create the account first")
    p.add_argument("--insecure", action="store_true",
                   help="no TLS to the account service (a server on your own machine)")
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
