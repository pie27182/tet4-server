"""Accounts, login tickets, Single Mode records and wallets in one SQLite database,
and the account service that registers players and hands out tickets.

The client never sends a password. A launcher (`tools/client.py play`) logs in
here first, receives a ticket and starts the client with it in the bootstrap
(`k3e` the account, `k8e` and `k300e` the ticket); the channel service checks the
ticket in Cmd_AuthToS. The game protocol's cipher has a fixed key, so the ticket is
readable on the wire: it expires, and passwords only ever travel to this service,
which should run behind TLS on a public server.

Account service protocol: one JSON object per line each way.
    {"op": "register" | "login", "name": "...", "password": "..."}
    {"ok": true, "ticket": "..."}  or  {"ok": false, "error": "..."}
"""
import asyncio
import hashlib
import hmac
import json
import logging
import re
import secrets
import sqlite3
import string
import threading
import time
from collections import defaultdict, deque
from concurrent.futures import Future, ThreadPoolExecutor
from pathlib import Path

log = logging.getLogger("tet4.accounts")

NAME = re.compile(r"[a-z0-9_]{3,12}")   # the client shows member ids as they are
PASSWORD_LENGTH = (8, 128)
TICKET_ALPHABET = string.ascii_letters + string.digits
TICKET_LENGTH = 32                      # the width of k8e and k300e in the bootstrap
TICKET_LIFETIME = 12 * 3600             # seconds
SCRYPT = dict(n=2 ** 14, r=8, p=1, dklen=32)
FAILURES_PER_MINUTE = 10                # per client address, then refused
MAX_LINE = 4096

SCHEMA = """
CREATE TABLE IF NOT EXISTS accounts (
    name TEXT PRIMARY KEY, salt BLOB NOT NULL, hash BLOB NOT NULL, created REAL NOT NULL);
CREATE TABLE IF NOT EXISTS tickets (
    ticket TEXT PRIMARY KEY, name TEXT NOT NULL REFERENCES accounts(name),
    expires REAL NOT NULL);
CREATE TABLE IF NOT EXISTS single_mode (
    name TEXT NOT NULL, mode INTEGER NOT NULL, plays INTEGER NOT NULL,
    top TEXT NOT NULL, PRIMARY KEY (name, mode));
CREATE TABLE IF NOT EXISTS wallets (
    name TEXT PRIMARY KEY, points INTEGER NOT NULL, items TEXT NOT NULL,
    title TEXT NOT NULL, emblem TEXT NOT NULL);
"""


class AccountError(Exception):
    """A refused registration or login; the message is shown to the player."""


def _hash(password: str, salt: bytes) -> bytes:
    return hashlib.scrypt(password.encode(), salt=salt, **SCRYPT)


def _log_failure(future: Future) -> None:
    if not future.cancelled() and future.exception():
        log.error("database write failed", exc_info=future.exception())


class Database:
    """Blocking SQLite access, one connection shared under a lock. The services read
    through asyncio.to_thread and write through `write`, on one thread, so that the
    writes land in the order they were made. Several processes (channels) may share
    the file: a change that reads before it writes runs as one `transaction`."""

    def __init__(self, path: Path):
        path.parent.mkdir(parents=True, exist_ok=True)
        self._db = sqlite3.connect(path, check_same_thread=False, isolation_level=None)
        self._db.execute("PRAGMA journal_mode=WAL")
        self._db.execute("PRAGMA busy_timeout=10000")     # other processes' writes
        self._db.executescript(SCHEMA)
        self._lock = threading.RLock()                    # a transaction's own reads take it again
        self._writer = ThreadPoolExecutor(1, thread_name_prefix="db-write")

    def close(self) -> None:
        self._writer.shutdown()
        self._db.close()

    def submit(self, fn, *args) -> Future:
        """Queue a write; it runs after every write queued before it."""
        future = self._writer.submit(fn, *args)
        future.add_done_callback(_log_failure)
        return future

    async def write(self, fn, *args):
        return await asyncio.wrap_future(self.submit(fn, *args))

    def _run(self, sql: str, args=()) -> list[tuple]:
        with self._lock:
            return self._db.execute(sql, args).fetchall()

    def transaction(self, fn, *args):
        """fn(*args), its reads and writes in one immediate transaction: no other
        process writes in between, so a read-change-write loses no one else's change."""
        with self._lock:
            self._db.execute("BEGIN IMMEDIATE")
            try:
                result = fn(*args)
            except BaseException:
                self._db.execute("ROLLBACK")
                raise
            self._db.execute("COMMIT")
            return result

    def register(self, name: str, password: str) -> str:
        if not NAME.fullmatch(name):
            raise AccountError("name: 3 to 12 of a-z, 0-9 and _")
        if not PASSWORD_LENGTH[0] <= len(password) <= PASSWORD_LENGTH[1]:
            raise AccountError(f"password: {PASSWORD_LENGTH[0]} to {PASSWORD_LENGTH[1]} characters")
        salt = secrets.token_bytes(16)
        try:
            self._run("INSERT INTO accounts VALUES (?, ?, ?, ?)",
                      (name, salt, _hash(password, salt), time.time()))
        except sqlite3.IntegrityError:
            raise AccountError("name taken") from None
        log.info("registered %s", name)
        return self._new_ticket(name)

    def login(self, name: str, password: str) -> str:
        row = self._run("SELECT salt, hash FROM accounts WHERE name = ?", (name,))
        # Hash even for unknown names, so timing does not reveal which names exist.
        salt, stored = row[0] if row else (b"\0" * 16, b"")
        if not hmac.compare_digest(_hash(password, salt), stored) or not row:
            raise AccountError("wrong name or password")
        return self._new_ticket(name)

    def _new_ticket(self, name: str) -> str:
        ticket = "".join(secrets.choice(TICKET_ALPHABET) for _ in range(TICKET_LENGTH))
        now = time.time()
        self._run("DELETE FROM tickets WHERE expires < ?", (now,))
        self._run("INSERT INTO tickets VALUES (?, ?, ?)", (ticket, name, now + TICKET_LIFETIME))
        return ticket

    def check_ticket(self, name: str, ticket: str) -> bool:
        row = self._run("SELECT name, expires FROM tickets WHERE ticket = ?", (ticket,))
        return bool(row) and hmac.compare_digest(row[0][0], name) and row[0][1] > time.time()

    def load_single_mode(self, name: str | None = None
                         ) -> list[tuple[str, int, int, list[tuple[int, str]]]]:
        """Everyone's records, or one player's."""
        rows = (self._run("SELECT * FROM single_mode WHERE name = ?", (name,)) if name
                else self._run("SELECT * FROM single_mode"))
        return [(name, mode, plays, [tuple(e) for e in json.loads(top)])
                for name, mode, plays, top in rows]

    def save_single_mode(self, name: str, mode: int, plays: int,
                         top: list[tuple[int, str]]) -> None:
        self._run("INSERT OR REPLACE INTO single_mode VALUES (?, ?, ?, ?)",
                  (name, mode, plays, json.dumps(top)))

    def load_wallet(self, name: str) -> tuple[int, str, str, str] | None:
        rows = self._run("SELECT points, items, title, emblem FROM wallets WHERE name = ?",
                         (name,))
        return rows[0] if rows else None

    def save_wallet(self, name: str, points: int, items: str, title: str, emblem: str) -> None:
        self._run("INSERT OR REPLACE INTO wallets VALUES (?, ?, ?, ?, ?)",
                  (name, points, items, title, emblem))


class AccountService:
    """Serves registration and login requests (see the module docstring)."""

    def __init__(self, db: Database):
        self.db = db
        self._failures: dict[str, deque] = defaultdict(deque)

    def _limited(self, host: str) -> bool:
        recent = self._failures[host]
        while recent and recent[0] < time.monotonic() - 60:
            recent.popleft()
        return len(recent) >= FAILURES_PER_MINUTE

    async def handle(self, reader: asyncio.StreamReader, writer: asyncio.StreamWriter) -> None:
        host = writer.get_extra_info("peername")[0]
        try:
            line = await asyncio.wait_for(reader.readline(), timeout=30)
        except (asyncio.TimeoutError, ValueError, ConnectionError):
            return
        reply = await self.answer(host, line[:MAX_LINE])
        writer.write(json.dumps(reply).encode() + b"\n")
        await writer.drain()

    async def answer(self, host: str, line: bytes) -> dict:
        if self._limited(host):
            return {"ok": False, "error": "too many attempts, wait a minute"}
        try:
            request = json.loads(line)
            op, name, password = request["op"], str(request["name"]), str(request["password"])
            if op not in ("register", "login"):
                raise KeyError(op)
        except (ValueError, KeyError, TypeError):
            return {"ok": False, "error": "bad request"}
        try:
            ticket = await asyncio.to_thread(getattr(self.db, op), name, password)
        except AccountError as exc:
            self._failures[host].append(time.monotonic())
            log.info("%s %s %r refused: %s", host, op, name, exc)
            return {"ok": False, "error": str(exc)}
        log.info("%s %s %r", host, op, name)
        return {"ok": True, "ticket": ticket}
