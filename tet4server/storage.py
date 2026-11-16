"""The database: accounts and login tickets, Single Mode records, wallets, who is
logged in where, and the players' reports, in one SQLite file that every channel
process shares.
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
from concurrent.futures import Future, ThreadPoolExecutor
from pathlib import Path

from .config import NAME_PATTERN, PASSWORD_LENGTH, SCRYPT, TICKET_LENGTH, TICKET_LIFETIME

log = logging.getLogger("tet4.storage")

NAME = re.compile(NAME_PATTERN)
TICKET_ALPHABET = string.ascii_letters + string.digits

SCHEMA = """
CREATE TABLE IF NOT EXISTS accounts (
    name TEXT PRIMARY KEY, salt BLOB NOT NULL, hash BLOB NOT NULL, created REAL NOT NULL);
CREATE TABLE IF NOT EXISTS tickets (
    ticket TEXT PRIMARY KEY, name TEXT NOT NULL REFERENCES accounts(name),
    expires REAL NOT NULL);
CREATE TABLE IF NOT EXISTS single_mode (
    name TEXT NOT NULL, mode INTEGER NOT NULL, plays INTEGER NOT NULL,
    top TEXT NOT NULL, PRIMARY KEY (name, mode));
CREATE TABLE IF NOT EXISTS multiplayer_ratings (
    name TEXT PRIMARY KEY, points INTEGER NOT NULL, plays INTEGER NOT NULL,
    wins INTEGER NOT NULL, losses INTEGER NOT NULL, streak INTEGER NOT NULL,
    best_streak INTEGER NOT NULL, best_points INTEGER NOT NULL);
-- Who is logged in where: a player's channel and login id ("session").
CREATE TABLE IF NOT EXISTS presence (
    name TEXT PRIMARY KEY, channel INTEGER NOT NULL, session TEXT NOT NULL);
CREATE TABLE IF NOT EXISTS wallets (
    name TEXT PRIMARY KEY, points INTEGER NOT NULL, items TEXT NOT NULL,
    title TEXT NOT NULL, emblem TEXT NOT NULL);
-- Players' reports of each other (신고), for the operators; chat is a JSON list of
-- [time, member, text], the lines the reporter's client sent with the report.
CREATE TABLE IF NOT EXISTS reports (
    time REAL NOT NULL, channel INTEGER NOT NULL, reporter TEXT NOT NULL,
    reported TEXT NOT NULL, reason TEXT NOT NULL, chat TEXT NOT NULL);
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

    def load_ratings(self, name: str | None = None
                     ) -> list[tuple[str, int, int, int, int, int, int, int]]:
        """All multiplayer ratings, or one player's lifetime stats."""
        sql = ("SELECT name, points, plays, wins, losses, streak, best_streak, best_points "
               "FROM multiplayer_ratings")
        rows = self._run(sql + (" WHERE name = ?" if name else ""), (name,) if name else ())
        return rows

    def save_rating(self, name: str, points: int, plays: int, wins: int, losses: int,
                    streak: int, best_streak: int, best_points: int) -> None:
        self._run(
            "INSERT INTO multiplayer_ratings VALUES (?, ?, ?, ?, ?, ?, ?, ?) "
            "ON CONFLICT(name) DO UPDATE SET points=excluded.points, plays=excluded.plays, "
            "wins=excluded.wins, losses=excluded.losses, streak=excluded.streak, "
            "best_streak=excluded.best_streak, best_points=excluded.best_points",
            (name, points, plays, wins, losses, streak, best_streak, best_points))

    # Presence: the channel and login each logged-in player is in, so that a player
    # logging in again in another channel's process ends the older login there.

    def arrive(self, name: str, channel: int, login_id: str) -> None:
        self._run("INSERT OR REPLACE INTO presence VALUES (?, ?, ?)", (name, channel, login_id))

    def depart(self, name: str, login_id: str) -> None:
        self._run("DELETE FROM presence WHERE name = ? AND session = ?", (name, login_id))

    def logins(self, names: list[str]) -> dict[str, str]:
        """The current login id of each of these players, if logged in anywhere."""
        marks = ",".join("?" * len(names))
        return dict(self._run(f"SELECT name, session FROM presence WHERE name IN ({marks})",
                              names))

    def clear_channel(self, channel: int) -> None:
        """Forget a channel's players (it starts, so none of them is still there)."""
        self._run("DELETE FROM presence WHERE channel = ?", (channel,))

    def load_wallet(self, name: str) -> tuple[int, str, str, str] | None:
        rows = self._run("SELECT points, items, title, emblem FROM wallets WHERE name = ?",
                         (name,))
        return rows[0] if rows else None

    def save_wallet(self, name: str, points: int, items: str, title: str, emblem: str) -> None:
        self._run("INSERT OR REPLACE INTO wallets VALUES (?, ?, ?, ?, ?)",
                  (name, points, items, title, emblem))

    def add_report(self, report: tuple[float, int, str, str, str, str]) -> None:
        """Keep a report: time, channel, reporter, reported, reason and the chat (JSON)."""
        self._run("INSERT INTO reports VALUES (?, ?, ?, ?, ?, ?)", report)

    def reports(self, last: int = 20) -> list[tuple[float, int, str, str, str, str]]:
        """The last reports, newest first."""
        return self._run("SELECT * FROM reports ORDER BY time DESC LIMIT ?", (last,))
