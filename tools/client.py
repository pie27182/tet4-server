#!/usr/bin/env python3
"""Tet4 launcher: logs in to a Tet4 server and starts your copy of the original game.

Run it with no arguments for the launcher window (or `--console` for questions in the
terminal). Releases ship it for Windows as Tet4Launcher.exe. It needs the original
Hangame Tetris 1.3.4 game folder, which it never changes: the first time it plays on
a server it makes a copy of the game that connects there, in the launcher's data
folder, and uses that copy from then on.

Developer commands:
    client.py check DIR                  verify a game folder
    client.py patch SRC DST --server HOST
                                         write a copy that connects to HOST
    client.py play --server HOST [--name NAME] [--register] [--game DIR]
                                         log in (or register) in the terminal and play
    client.py run DIR                    start a copy with the test account (no login)
    client.py bootstrap                  print the test account's bootstrap string
`--insecure` logs in without TLS, for a test server without a certificate.
"""
import argparse
import getpass
import hashlib
import json
import os
import shutil
import socket
import ssl
import subprocess
import sys
import threading
import time
from pathlib import Path

DEFAULT_SERVER = "tet4server.duckdns.org"
ACCOUNTS_PORT = 10455        # the server's account service (TLS)
DIRECTORY_PORT = 15000       # the server's channel directory, named in the bootstrap
TPACK_PORT = 10454           # the server's TPack service, named in the bootstrap

# The original Tet4.exe 1.3.4, and the three TPack host names in it (file offsets).
# The game connects to these names, so a server's copy has them replaced.
CLEAN_SHA256 = "722d91223ae28d89c4740420544fc4f372bf13b41e3bce5a139c793054407b8f"
TPACK_HOSTS = ((0x1F9520, b"dev-tpacksvr.tp.casual.hangame.com"),
               (0x1F9544, b"alpha-tpacksvr.tp.casual.hangame.com"),
               (0x1F956C, b"tpacksvr.tp.casual.hangame.com"))
MAX_HOST = min(len(name) for _, name in TPACK_HOSTS)

# The bootstrap string the game is started with: the directory's address, then
# key:length=value fields. The account (k3e) and ticket (k8e, k300e) are filled in;
# the rest are the values the original launcher passed (docs/PROTOCOL.md section 1).
BOOTSTRAP_FIELDS = (
    ("k22e", "TET4"), ("k37e", "999999"), ("k87e", "hgc"), ("k93e", "HANGAME"),
    ("k126e", "urlhgc"), ("k89e", "sess"), ("k88e", "sess2"),
    ("k95e", "http://www.hangame.com"), ("k96e", "x"), ("k60e", "Dummy"), ("nors", "Y"),
    ("k90e", "2.94"), ("k91e", "1.33"), ("k92e", "18"), ("scvr", "1"), ("k98e", "0"),
    ("fcvr", "1"), ("fciv", "16"), ("k125e", "20"), ("lang", "KOREAN"), ("k140e", "01D0"),
    ("k10e", "31"), ("k11e", "M"), ("k111e", "x"), ("k3e", "test"), ("k8e", "a" * 32),
    ("k150e", "3"), ("k13e", "1000000"), ("k31e", "1360"), ("p189", "1"), ("k46e", "01"),
    ("k602e", str(TPACK_PORT)), ("k300e", "A" * 32),
)


class LaunchError(Exception):
    """Something the player has to fix; the message says what."""


# --- where the launcher keeps its things ---------------------------------------------

def data_dir() -> Path:
    """The launcher's settings, the game copies and the game's log."""
    if os.name == "nt":
        base = Path(os.environ.get("LOCALAPPDATA") or Path.home() / "AppData" / "Local")
        return base / "Tet4"
    return Path(os.environ.get("XDG_DATA_HOME") or Path.home() / ".local" / "share") / "tet4"


def load_settings() -> dict:
    settings = {"server": DEFAULT_SERVER, "game": "", "name": ""}
    try:
        saved = json.loads((data_dir() / "launcher.json").read_text(encoding="utf-8"))
        settings.update({k: str(v) for k, v in saved.items() if k in settings})
    except (OSError, ValueError):
        pass
    return settings


def save_settings(settings: dict) -> None:
    try:
        data_dir().mkdir(parents=True, exist_ok=True)
        (data_dir() / "launcher.json").write_text(json.dumps(settings, indent=2), "utf-8")
    except OSError:
        pass                    # only a convenience: the next start asks again


# --- the game ----------------------------------------------------------------------

def check_game(folder: Path) -> list[str]:
    """Why a game folder cannot be used (empty when it can). Tet4.exe must be the
    original; other files are checked against the game's own files.sha256.json."""
    exe = folder / "Tet4.exe"
    if not exe.is_file():
        return [f"There is no Tet4.exe in {folder}. Choose the folder the game is installed in."]
    if hashlib.sha256(exe.read_bytes()).hexdigest() != CLEAN_SHA256:
        return [f"{exe} is not the original Hangame Tetris 1.3.4 file. "
                "Choose the original game folder (not a copy made for a server)."]
    try:
        manifest = json.loads((folder / "files.sha256.json").read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return []
    problems = []
    for name, digest in manifest.items():
        path = folder / name
        if not path.is_file():
            problems.append(f"missing: {name}")
        elif hashlib.sha256(path.read_bytes()).hexdigest() != digest:
            problems.append(f"changed: {name}")
    return problems


def check_server(server: str) -> str:
    server = server.strip()
    if not server or not server.isascii() or " " in server:
        raise LaunchError("Enter the server's address, such as tet4server.example.org.")
    if len(server) > MAX_HOST:
        raise LaunchError(f"The server address can have at most {MAX_HOST} characters "
                          "(the game has no room for more). Use a shorter name or the IP.")
    return server


def patched_exe(original: bytes, server: str) -> bytes:
    """Tet4.exe with its TPack host names replaced by the server's address."""
    exe = bytearray(original)
    for offset, name in TPACK_HOSTS:
        exe[offset:offset + len(name)] = server.encode("ascii").ljust(len(name), b"\0")
    return bytes(exe)


def make_copy(game: Path, copy: Path, server: str) -> None:
    """Copy the game folder to `copy`, its Tet4.exe connecting to `server`."""
    exe = patched_exe((game / "Tet4.exe").read_bytes(), server)
    partial = copy.with_name(copy.name + ".partial")
    shutil.rmtree(partial, ignore_errors=True)
    try:
        shutil.copytree(game, partial)
        (partial / "Tet4.exe").write_bytes(exe)
        shutil.rmtree(copy, ignore_errors=True)
        partial.rename(copy)
    except OSError as exc:
        shutil.rmtree(partial, ignore_errors=True)
        raise LaunchError(f"Could not copy the game to {copy}: {exc}") from None


def game_copy(game: Path, server: str, report=print) -> Path:
    """The copy of the game for `server`, made the first time (and again if it no
    longer matches the original)."""
    copy = data_dir() / "games" / server
    expected = patched_exe((game / "Tet4.exe").read_bytes(), server)
    exe = copy / "Tet4.exe"
    if exe.is_file() and exe.read_bytes() == expected:
        return copy
    report(f"Preparing the game for {server} (only the first time)...")
    copy.parent.mkdir(parents=True, exist_ok=True)
    make_copy(game, copy, server)
    return copy


def bootstrap(server: str, name: str, ticket: str) -> str:
    """The string the game is started with, for this account and ticket."""
    values = {"k3e": name, "k8e": ticket, "k300e": ticket}
    fields = [(key, values.get(key, value)) for key, value in BOOTSTRAP_FIELDS]
    return (f"metp://{server}:{DIRECTORY_PORT}//go/go;"
            + "&".join(f"{key}:{len(value)}={value}" for key, value in fields))


def start_game(copy: Path, boot: str) -> Path:
    """Start the game (under Wine outside Windows); the log file. Raises if the game
    exits at once."""
    log_path = data_dir() / "game.log"
    log_path.parent.mkdir(parents=True, exist_ok=True)
    with open(log_path, "ab") as log:
        if os.name == "nt":
            command, options = [str(copy / "Tet4.exe"), boot], {
                "creationflags": subprocess.DETACHED_PROCESS | subprocess.CREATE_NEW_PROCESS_GROUP}
        else:
            if not shutil.which("wine"):
                raise LaunchError("Wine is needed to run the game here: install it first.")
            if not (os.environ.get("DISPLAY") or os.environ.get("WAYLAND_DISPLAY")):
                raise LaunchError("The game needs a graphical session: start the launcher "
                                  "from your desktop.")
            command = ["wine", "Tet4.exe", boot]
            options = {"start_new_session": True, "env": {
                **os.environ, "LANG": "ko_KR.UTF-8", "LC_ALL": "ko_KR.UTF-8",
                "WINEDEBUG": os.environ.get("WINEDEBUG", "-all")}}
        try:
            game = subprocess.Popen(command, cwd=copy, stdin=subprocess.DEVNULL, stdout=log,
                                    stderr=log, **options)
        except OSError as exc:
            raise LaunchError(f"Could not start the game: {exc}") from None
    time.sleep(2)
    if game.poll() not in (None, 0):
        raise LaunchError(f"The game stopped at once (code {game.returncode}). "
                          f"Its log is {log_path}.")
    return log_path


# --- the account -------------------------------------------------------------------

def request_ticket(server: str, op: str, name: str, password: str,
                   secure: bool = True, port: int = ACCOUNTS_PORT) -> str:
    """Log in (op "login") or create an account ("register"); the ticket the game
    starts with."""
    request = json.dumps({"op": op, "name": name, "password": password}).encode() + b"\n"
    try:
        with socket.create_connection((server, port), timeout=15) as raw:
            conn = (ssl.create_default_context().wrap_socket(raw, server_hostname=server)
                    if secure else raw)
            conn.sendall(request)
            reply = json.loads(conn.makefile("rb").readline() or b"{}")
    except ssl.SSLError as exc:
        raise LaunchError(f"The server's secure connection failed ({exc.reason}). "
                          "Check the address.") from None
    except socket.gaierror:
        raise LaunchError(f"The address {server} was not found. Check it.") from None
    except (OSError, ValueError):
        raise LaunchError(f"Could not reach the server {server}. It may be offline, or a "
                          "firewall blocks it.") from None
    if not reply.get("ok"):
        error = str(reply.get("error") or "the server refused the request")
        raise LaunchError(f"{error[:1].upper()}{error[1:]}.")
    return reply["ticket"]


def play(game: Path, server: str, op: str, name: str, password: str, secure: bool = True,
         report=print) -> Path:
    """Everything between the play button and the game: check the folder, prepare the
    server's copy, log in, start. The game's log file."""
    server = check_server(server)
    problems = check_game(game)
    if problems:
        raise LaunchError("\n".join(problems[:8]))
    copy = game_copy(game, server, report)
    report("Logging in..." if op == "login" else "Creating the account...")
    ticket = request_ticket(server, op, name.strip(), password, secure)
    report("Starting the game...")
    return start_game(copy, bootstrap(server, name.strip(), ticket))


# --- the launcher window -----------------------------------------------------------

def window(secure: bool) -> int:
    import tkinter as tk
    from tkinter import filedialog, messagebox, simpledialog, ttk

    settings = load_settings()
    root = tk.Tk()
    root.title("Tet4 Launcher")
    root.resizable(False, False)
    frame = ttk.Frame(root, padding=16)
    frame.grid()
    fields = {key: tk.StringVar(value=settings[key]) for key in ("server", "game", "name")}
    password = tk.StringVar()
    status = tk.StringVar(value="Choose your game folder, then log in or create an account.")

    def row(number: int, label: str, variable, **options):
        ttk.Label(frame, text=label).grid(row=number, column=0, sticky="w", pady=3)
        entry = ttk.Entry(frame, textvariable=variable, width=42, **options)
        entry.grid(row=number, column=1, sticky="we", pady=3)
        return entry

    def browse():
        folder = filedialog.askdirectory(title="The folder that contains Tet4.exe",
                                         initialdir=fields["game"].get() or None)
        if folder:
            fields["game"].set(str(Path(folder)))

    row(0, "Server", fields["server"])
    row(1, "Game folder", fields["game"])
    ttk.Button(frame, text="Browse...", command=browse).grid(row=1, column=2, padx=(6, 0))
    name_entry = row(2, "Account name", fields["name"])
    password_entry = row(3, "Password", password, show="•")
    buttons = ttk.Frame(frame)
    buttons.grid(row=4, column=0, columnspan=3, pady=(12, 6))
    ttk.Label(frame, textvariable=status, wraplength=420, justify="left").grid(
        row=5, column=0, columnspan=3, sticky="w")

    def go(op: str):
        values = {key: variable.get().strip() for key, variable in fields.items()}
        if not values["game"]:
            browse()
            values["game"] = fields["game"].get().strip()
            if not values["game"]:
                return
        if not values["name"] or not password.get():
            status.set("Enter your account name and password.")
            (name_entry if not values["name"] else password_entry).focus()
            return
        if op == "register" and simpledialog.askstring(
                "Create account", "Type the password again:", show="•",
                parent=root) != password.get():
            status.set("The passwords did not match. Try again.")
            return
        save_settings(values)
        for button in buttons.winfo_children():
            button.state(["disabled"])

        def work():
            try:
                play(Path(values["game"]), values["server"], op, values["name"], password.get(),
                     secure, report=lambda text: root.after(0, status.set, text))
            except LaunchError as exc:
                root.after(0, failed, str(exc))
            except Exception as exc:          # a bug: say so instead of vanishing
                root.after(0, failed, f"Unexpected error: {exc!r}")
            else:
                root.after(0, status.set, "The game is starting. Have fun!")
                root.after(3000, root.destroy)

        threading.Thread(target=work, daemon=True).start()

    def failed(message: str):
        status.set("Not started.")
        messagebox.showerror("Tet4 Launcher", message, parent=root)
        for button in buttons.winfo_children():
            button.state(["!disabled"])

    ttk.Button(buttons, text="Log in and play", command=lambda: go("login")).grid(
        row=0, column=0, padx=4)
    ttk.Button(buttons, text="Create account", command=lambda: go("register")).grid(
        row=0, column=1, padx=4)
    root.bind("<Return>", lambda event: go("login"))
    (password_entry if fields["name"].get() else name_entry).focus()
    root.mainloop()
    return 0


def console(secure: bool) -> int:
    """The same, asking in the terminal."""
    settings = load_settings()

    def ask(label: str, default: str) -> str:
        answer = input(f"{label} [{default}]: " if default else f"{label}: ").strip()
        return answer or default

    print("Tet4 Launcher. Press Enter to keep a value in brackets.")
    settings["server"] = ask("Server", settings["server"])
    settings["game"] = ask("Game folder (the one with Tet4.exe)", settings["game"])
    register = ask("Do you have an account? (y/n)", "y").lower().startswith("n")
    settings["name"] = ask("Account name", settings["name"])
    password = getpass.getpass("Password: ")
    if register and getpass.getpass("Password again: ") != password:
        print("The passwords did not match.")
        return 1
    save_settings(settings)
    try:
        log = play(Path(settings["game"]), settings["server"],
                   "register" if register else "login", settings["name"], password, secure)
    except LaunchError as exc:
        print(f"\n{exc}")
        return 1
    print(f"The game is starting. Its log is {log}.")
    return 0


# --- developer commands ------------------------------------------------------------

def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="client.py", description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--console", action="store_true", help="ask in the terminal")
    parser.add_argument("--insecure", action="store_true", help="log in without TLS")
    commands = parser.add_subparsers(dest="command")
    p = commands.add_parser("check", help="verify a game folder")
    p.add_argument("dir", type=Path)
    p = commands.add_parser("patch", help="write a copy that connects to a server")
    p.add_argument("src", type=Path)
    p.add_argument("dst", type=Path)
    p.add_argument("--server", default="127.0.0.1")
    p = commands.add_parser("play", help="log in and play from the terminal")
    p.add_argument("--server", default=DEFAULT_SERVER)
    p.add_argument("--game", type=Path, help="the original game folder")
    p.add_argument("--name")
    p.add_argument("--register", action="store_true", help="create the account first")
    p = commands.add_parser("run", help="start a copy with the test account")
    p.add_argument("dir", type=Path)
    p.add_argument("--server", default="127.0.0.1")
    commands.add_parser("bootstrap", help="print the test account's bootstrap string")
    args = parser.parse_args(argv)
    secure = not args.insecure

    try:
        if args.command is None:
            if not args.console and (os.name == "nt" or os.environ.get("DISPLAY")):
                try:
                    return window(secure)
                except ImportError:
                    print("(No Tk in this Python: asking here instead.)")
            return console(secure)
        if args.command == "check":
            problems = check_game(args.dir)
            print("\n".join(problems) or f"{args.dir}: OK")
            return 1 if problems else 0
        if args.command == "patch":
            if args.dst.exists():
                raise LaunchError(f"{args.dst} already exists")
            problems = check_game(args.src)
            if problems:
                raise LaunchError("\n".join(problems))
            make_copy(args.src, args.dst, check_server(args.server))
            print(f"{args.dst}: connects to {args.server}")
            return 0
        if args.command == "bootstrap":
            print(bootstrap("127.0.0.1", "test", "A" * 32))
            return 0
        if args.command == "run":
            print(start_game(args.dir, bootstrap(args.server, "test", "A" * 32)))
            return 0
        settings = load_settings()
        game = args.game or Path(settings["game"])
        name = args.name or input("Account name: ")
        password = getpass.getpass("Password: ")
        if args.register and getpass.getpass("Password again: ") != password:
            raise LaunchError("The passwords did not match.")
        print(play(game, args.server, "register" if args.register else "login", name,
                   password, secure))
        return 0
    except LaunchError as exc:
        print(exc, file=sys.stderr)
        return 1
    except (EOFError, KeyboardInterrupt):
        print()
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
