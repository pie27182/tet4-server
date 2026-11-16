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
import struct
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


# --- keys and speed ----------------------------------------------------------------
#
# The game reads .\controls.runtime.bin when it starts: "HTC2", version 1, DAS, ARR,
# a 256-byte table from DirectInput scan code to action, and SDF (all u32 little-
# endian but the table). It first sets its own keys, then applies every table entry
# below 22: an action, or 0 to switch the key off. Without the file the game keeps
# its own key presets and speeds (DAS 145 ms, ARR 33 ms, SDF 33 ms).

KEYS = {   # key name -> DirectInput scan code
    **{chr(65 + i): code for i, code in enumerate((
        0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32,
        0x31, 0x18, 0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C))},
    **{str(n): 0x01 + n for n in range(1, 10)}, "0": 0x0B,
    "Left": 0xCB, "Right": 0xCD, "Up": 0xC8, "Down": 0xD0, "Space": 0x39,
    "LShift": 0x2A, "RShift": 0x36, "LControl": 0x1D, "RControl": 0x9D,
    "Home": 0xC7, "End": 0xCF, "PageUp": 0xC9, "PageDown": 0xD1, "Insert": 0xD2,
    "Delete": 0xD3, "CapsLock": 0x3A, "Backspace": 0x0E, "Grave": 0x29, "Minus": 0x0C,
    "Equals": 0x0D, "LeftBracket": 0x1A, "RightBracket": 0x1B, "Backslash": 0x2B,
    "Semicolon": 0x27, "Quote": 0x28, "Comma": 0x33, "Period": 0x34, "Slash": 0x35,
    **{f"NumPad{n}": code for n, code in enumerate(
        (0x52, 0x4F, 0x50, 0x51, 0x4B, 0x4C, 0x4D, 0x47, 0x48, 0x49))},
    "Decimal": 0x53, "Add": 0x4E, "Subtract": 0x4A, "Multiply": 0x37, "Divide": 0xB5,
}
# action -> (label, the game's action number, the game's own keys for it)
ACTIONS = {
    "left": ("Move left", 1, ("Left",)),
    "right": ("Move right", 2, ("Right",)),
    "soft_drop": ("Soft drop", 4, ("Down",)),
    "hard_drop": ("Hard drop", 5, ("Space",)),
    "rotate_cw": ("Rotate clockwise", 7, ("Up", "X", "End", "PageUp")),
    "rotate_ccw": ("Rotate counterclockwise", 8,
                   ("Z", "LControl", "RControl", "Home", "PageDown")),
    "hold": ("Hold", 6, ("LShift", "RShift", "C", "Insert")),
    **{f"item_target_{n}": (f"Item target {n}", 8 + n, (str(n), "QWEASD"[n - 1]))
       for n in range(1, 7)},
    "use_item": ("Use item", 15, ("Grave", "V")),
    "discard_item": ("Discard item", 16, ("T", "R")),
}
REQUIRED = ("left", "right", "soft_drop", "hard_drop", "rotate_cw", "rotate_ccw", "hold")
ORIGINAL_SPEED = {"das_ms": 145, "arr_ms": 33, "soft_drop_arr_ms": 33}
SPEED_LIMITS = {"das_ms": 1000, "arr_ms": 500, "soft_drop_arr_ms": 500}
SPEED_NAMES = {"das_ms": "DAS", "arr_ms": "ARR", "soft_drop_arr_ms": "SDF"}
DEFAULT_CONTROLS = {
    "enabled": True, **ORIGINAL_SPEED,
    "keys": {"left": ["Left"], "right": ["Right"], "soft_drop": ["Down"],
             "hard_drop": ["Space"], "rotate_cw": ["Up", "X"],
             "rotate_ccw": ["Z", "LControl", "RControl"], "hold": ["LShift", "RShift", "C"]},
}


def check_controls(controls: dict) -> dict:
    """Controls as the launcher keeps them (the format of h-tetra's controls.json),
    checked; raises LaunchError saying what is wrong."""
    try:
        out = {"enabled": bool(controls.get("enabled", True))}
        for field, limit in SPEED_LIMITS.items():
            value = str(controls.get(field, ORIGINAL_SPEED[field])).strip()
            if not value.isdigit() or int(value) > limit:
                raise LaunchError(f"{SPEED_NAMES[field]} must be a whole number from 0 to "
                                  f"{limit} (ms).")
            out[field] = int(value)
        keys, seen = {}, set()
        for action, names in dict(controls.get("keys") or {}).items():
            if action not in ACTIONS:
                raise LaunchError(f"Unknown action: {action}")
            for name in names:
                if name not in KEYS:
                    raise LaunchError(f"Unsupported key: {name}")
                if name in seen:
                    raise LaunchError(f"{name} is set for two actions.")
                seen.add(name)
            if names:
                keys[action] = list(names)
    except (TypeError, ValueError, AttributeError):
        raise LaunchError("The key settings are not valid.") from None
    missing = [ACTIONS[a][0] for a in REQUIRED if a not in keys]
    if missing:
        raise LaunchError("Set a key for: " + ", ".join(missing) + ".")
    out["keys"] = keys
    return out


def load_controls(game: Path | None = None) -> dict:
    """The saved controls; at first those of the game folder's own controls.json, if it
    has a valid one, else the defaults."""
    for path in (data_dir() / "controls.json", game and game / "controls.json"):
        try:
            return check_controls(json.loads(path.read_text(encoding="utf-8")))
        except (OSError, ValueError, TypeError, AttributeError, LaunchError):
            continue
    return json.loads(json.dumps(DEFAULT_CONTROLS))


def save_controls(controls: dict) -> None:
    data_dir().mkdir(parents=True, exist_ok=True)
    (data_dir() / "controls.json").write_text(
        json.dumps({"version": 2, **check_controls(controls)}, indent=2), "utf-8")


def controls_runtime(controls: dict) -> bytes:
    """controls.runtime.bin for these controls. An action given keys loses the game's
    own keys for it; an item action left empty keeps them (unless a key is taken)."""
    table = bytearray([0xFF] * 256)
    for action, names in controls["keys"].items():
        for name in ACTIONS[action][2]:
            table[KEYS[name]] = 0
    for action, names in controls["keys"].items():
        for name in names:
            table[KEYS[name]] = ACTIONS[action][1]
    return (struct.pack("<4I", 0x32435448, 1, controls["das_ms"], controls["arr_ms"])
            + bytes(table) + struct.pack("<I", controls["soft_drop_arr_ms"]))


def apply_controls(copy: Path, game: Path) -> None:
    """Write (or, when switched off, remove) the controls file in a game copy."""
    controls = load_controls(game)
    runtime = copy / "controls.runtime.bin"
    if controls["enabled"]:
        runtime.write_bytes(controls_runtime(controls))
    elif runtime.exists():
        runtime.unlink()


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

KEYRING_SERVICE = "Tet4 Launcher"


def load_password(server: str, name: str) -> str | None:
    try:
        import keyring
        return keyring.get_password(KEYRING_SERVICE, f"{server.strip().lower()}:{name.strip().lower()}")
    except Exception:
        return None


def save_password(server: str, name: str, password: str) -> bool:
    try:
        import keyring
        keyring.set_password(KEYRING_SERVICE, f"{server.strip().lower()}:{name.strip().lower()}",
                             password)
        return True
    except Exception:
        return False


def ask_to_save_password(server: str, name: str, password: str) -> None:
    if input("Remember password in the system keyring? [y/N] ").strip().lower() in ("y", "yes"):
        if not save_password(server, name, password):
            print("Could not save the password. Install keyring and enable a system keyring.")


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
    apply_controls(copy, game)
    report("Logging in..." if op == "login" else "Creating the account...")
    ticket = request_ticket(server, op, name.strip(), password, secure)
    report("Starting the game...")
    return start_game(copy, bootstrap(server, name.strip(), ticket))


# --- the launcher window -----------------------------------------------------------

# Tk's names for keys, where they differ from the game's.
TK_KEYS = {
    "space": "Space", "Shift_L": "LShift", "Shift_R": "RShift", "Control_L": "LControl",
    "Control_R": "RControl", "Prior": "PageUp", "Next": "PageDown", "Caps_Lock": "CapsLock",
    "BackSpace": "Backspace", "grave": "Grave", "minus": "Minus", "equal": "Equals",
    "bracketleft": "LeftBracket", "bracketright": "RightBracket", "backslash": "Backslash",
    "semicolon": "Semicolon", "apostrophe": "Quote", "comma": "Comma", "period": "Period",
    "slash": "Slash", "KP_Decimal": "Decimal", "KP_Delete": "Decimal", "KP_Add": "Add",
    "KP_Subtract": "Subtract", "KP_Multiply": "Multiply", "KP_Divide": "Divide",
    **{f"KP_{n}": f"NumPad{n}" for n in range(10)},
    **dict(zip(("KP_Insert", "KP_End", "KP_Down", "KP_Next", "KP_Left", "KP_Begin",
                "KP_Right", "KP_Home", "KP_Up", "KP_Prior"),
               (f"NumPad{n}" for n in range(10)))),
}
# Windows' virtual-key codes of the number pad, which Tk names like the other keys.
WINDOWS_NUMPAD = {**{0x60 + n: f"NumPad{n}" for n in range(10)}, 0x6A: "Multiply",
                  0x6B: "Add", 0x6D: "Subtract", 0x6E: "Decimal", 0x6F: "Divide"}


def key_name(keysym: str, keycode: int) -> str | None:
    """The game's name for a key Tk reports, or None for a key the game cannot use."""
    if os.name == "nt" and keycode in WINDOWS_NUMPAD:
        return WINDOWS_NUMPAD[keycode]
    name = TK_KEYS.get(keysym, keysym.upper() if len(keysym) == 1 else keysym)
    return name if name in KEYS else None


def controls_window(parent, game: str) -> None:
    """The keys and speed settings, as h-tetra's launcher has them."""
    import tkinter as tk
    from tkinter import messagebox, ttk

    controls = load_controls(Path(game) if game else None)
    win = tk.Toplevel(parent)
    win.title("Keys and speed")
    win.resizable(False, False)
    win.transient(parent)
    frame = ttk.Frame(win, padding=14)
    frame.grid()
    ttk.Label(frame, text="Click a box and press a key. Right-click a box to clear it."
              ).grid(row=0, column=0, columnspan=4, sticky="w", pady=(0, 8))
    for column, title in enumerate(("Action", "Key", "Second key", "Third key")):
        ttk.Label(frame, text=title).grid(row=1, column=column, sticky="w")

    cells: dict[tuple[str, int], tk.StringVar] = {}
    buttons: dict[tuple[str, int], ttk.Button] = {}
    waiting: list = [None]           # the box waiting for a key

    def show(keys: dict) -> None:
        for (action, column), var in cells.items():
            names = keys.get(action, [])
            var.set(names[column] if column < len(names) else "—")

    def current() -> dict:
        keys = {}
        for (action, column), var in sorted(cells.items(), key=lambda kv: kv[0][1]):
            if var.get() in KEYS:
                keys.setdefault(action, []).append(var.get())
        return keys

    def pick(cell) -> None:
        if waiting[0]:
            show(current())
        waiting[0] = cell
        cells[cell].set("press a key")
        win.focus_set()            # keys go to the window, not to the box's button

    def clear(cell) -> None:
        cells[cell].set("—")
        waiting[0] = None
        show(current())

    def pressed(event) -> str:
        cell = waiting[0]
        if cell is None:
            return ""
        name = key_name(event.keysym, event.keycode)
        if name is None:
            return "break"               # not a key the game can use: keep waiting
        for other, var in cells.items():
            if var.get() == name:        # one key, one action
                var.set("—")
        cells[cell].set(name)
        waiting[0] = None
        show(current())
        return "break"

    for row, (action, (label, _, _)) in enumerate(ACTIONS.items(), 2):
        ttk.Label(frame, text=label).grid(row=row, column=0, sticky="w", padx=(0, 10))
        for column in range(3):
            cell = (action, column)
            cells[cell] = tk.StringVar()
            button = ttk.Button(frame, textvariable=cells[cell], width=14, takefocus=False,
                                command=lambda c=cell: pick(c))
            button.grid(row=row, column=column + 1, padx=2, pady=1)
            button.bind("<Button-3>", lambda event, c=cell: clear(c))
            buttons[cell] = button
    show(controls["keys"])
    win.bind("<KeyPress>", pressed)

    row = len(ACTIONS) + 2
    ttk.Label(frame, text="Item rows left empty keep the game's own item keys (1-6 and "
              "Q W E A S D, ` or V to use, T or R to discard), except keys used above.",
              wraplength=520, justify="left").grid(row=row, column=0, columnspan=4,
                                                   sticky="w", pady=(8, 6))
    speeds = ttk.Frame(frame)
    speeds.grid(row=row + 1, column=0, columnspan=4, sticky="w")
    speed = {}
    for column, (field, label) in enumerate((("das_ms", "DAS (ms)"), ("arr_ms", "ARR (ms)"),
                                            ("soft_drop_arr_ms", "SDF (ms)"))):
        ttk.Label(speeds, text=label).grid(row=0, column=2 * column, padx=(0 if column == 0
                                                                          else 14, 4))
        speed[field] = tk.StringVar(value=str(controls[field]))
        ttk.Spinbox(speeds, from_=0, to=SPEED_LIMITS[field], width=6,
                    textvariable=speed[field]).grid(row=0, column=2 * column + 1)
    ttk.Label(frame, text="DAS: the wait before a held key repeats. ARR: the time between "
              "repeated moves (0: straight to the wall).\nSDF: the time between soft drop "
              "steps (0: straight down; the lock delay stays the same).",
              justify="left").grid(row=row + 2, column=0, columnspan=4, sticky="w", pady=6)
    enabled = tk.BooleanVar(value=controls["enabled"])
    ttk.Checkbutton(frame, text="Use these keys and speeds (off: the game's own presets)",
                    variable=enabled).grid(row=row + 3, column=0, columnspan=4, sticky="w")
    ttk.Label(frame, text="Changes apply from the next game start.", foreground="#b03030"
              ).grid(row=row + 4, column=0, columnspan=4, sticky="w", pady=(4, 8))

    def reset() -> None:
        show(DEFAULT_CONTROLS["keys"])
        original_speed()
        enabled.set(True)

    def original_speed() -> None:
        for field, value in ORIGINAL_SPEED.items():
            speed[field].set(str(value))

    def save() -> None:
        try:
            save_controls({"enabled": enabled.get(), "keys": current(),
                           **{field: var.get().strip() for field, var in speed.items()}})
        except LaunchError as exc:
            messagebox.showerror("Keys and speed", str(exc), parent=win)
            return
        except OSError as exc:
            messagebox.showerror("Keys and speed", f"Could not save: {exc}", parent=win)
            return
        win.destroy()

    actions = ttk.Frame(frame)
    actions.grid(row=row + 5, column=0, columnspan=4)
    for column, (text, command) in enumerate((
            ("Reset to defaults", reset), ("Original speed", original_speed),
            ("Save", save), ("Cancel", win.destroy))):
        ttk.Button(actions, text=text, command=command).grid(row=0, column=column, padx=4)
    win.grab_set()
    win.focus_set()


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
    remember_password = tk.BooleanVar(value=False)
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
    ttk.Checkbutton(frame, text="Remember password in system keyring",
                    variable=remember_password).grid(row=4, column=0, columnspan=3, sticky="w")
    buttons = ttk.Frame(frame)
    buttons.grid(row=5, column=0, columnspan=3, pady=(8, 6))
    ttk.Label(frame, textvariable=status, wraplength=420, justify="left").grid(
        row=6, column=0, columnspan=3, sticky="w")

    def go(op: str):
        values = {key: variable.get().strip() for key, variable in fields.items()}
        if not values["game"]:
            browse()
            values["game"] = fields["game"].get().strip()
            if not values["game"]:
                return
        saved_password = load_password(values["server"], values["name"])
        secret = password.get() or saved_password
        remember = remember_password.get() or saved_password is not None
        if not values["name"] or not secret:
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
                play(Path(values["game"]), values["server"], op, values["name"], secret,
                     secure, report=lambda text: root.after(0, status.set, text))
            except LaunchError as exc:
                root.after(0, failed, str(exc))
            except Exception as exc:          # a bug: say so instead of vanishing
                root.after(0, failed, f"Unexpected error: {exc!r}")
            else:
                if remember and not save_password(values["server"], values["name"], secret):
                    root.after(0, status.set, "Game is starting, but the password could not be saved.")
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
    ttk.Button(buttons, text="Keys and speed...",
               command=lambda: controls_window(root, fields["game"].get().strip())).grid(
        row=0, column=2, padx=4)
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
    password = load_password(settings["server"], settings["name"])
    if not password:
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
    if not load_password(settings["server"], settings["name"]):
        ask_to_save_password(settings["server"], settings["name"], password)
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
        password = load_password(args.server, name) or getpass.getpass("Password: ")
        if args.register and getpass.getpass("Password again: ") != password:
            raise LaunchError("The passwords did not match.")
        log = play(game, args.server, "register" if args.register else "login", name,
                   password, secure)
        if not load_password(args.server, name):
            ask_to_save_password(args.server, name, password)
        print(log)
        return 0
    except LaunchError as exc:
        print(exc, file=sys.stderr)
        return 1
    except (EOFError, KeyboardInterrupt):
        print()
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
