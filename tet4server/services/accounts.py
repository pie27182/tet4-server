"""The account service: registration and login for the launcher, which then starts
the client with a login ticket.

The client never sends a password. A launcher (`tools/client.py play`) logs in here,
receives a ticket and starts the client with it in the bootstrap (`k3e` the account,
`k8e` and `k300e` the ticket); the channel checks the ticket in AuthToS. The game
protocol's cipher has a fixed key, so the ticket can be read off the wire: it expires,
and passwords only ever travel to this service, which a public server runs behind TLS.

One JSON object per line each way:
    {"op": "register" | "login", "name": "...", "password": "..."}
    {"ok": true, "ticket": "..."}  or  {"ok": false, "error": "..."}
"""
import asyncio
import json
import logging
import time
from collections import defaultdict, deque

from ..config import ACCOUNT_TIMEOUT, FAILED_LOGINS_PER_MINUTE, MAX_ACCOUNT_REQUEST
from ..storage import AccountError, Database

log = logging.getLogger("tet4.accounts")


class AccountService:
    def __init__(self, db: Database):
        self.db = db
        self._failures: dict[str, deque] = defaultdict(deque)

    def _limited(self, host: str) -> bool:
        recent = self._failures[host]
        while recent and recent[0] < time.monotonic() - 60:
            recent.popleft()
        return len(recent) >= FAILED_LOGINS_PER_MINUTE

    async def handle(self, reader: asyncio.StreamReader, writer: asyncio.StreamWriter) -> None:
        host = writer.get_extra_info("peername")[0]
        try:
            line = await asyncio.wait_for(reader.readline(), timeout=ACCOUNT_TIMEOUT)
        except (asyncio.TimeoutError, ValueError, ConnectionError):
            return
        reply = await self.answer(host, line[:MAX_ACCOUNT_REQUEST])
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
