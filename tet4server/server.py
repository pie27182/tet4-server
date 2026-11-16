"""Run the TPack, CDS, channel, game and account services: python3 -m tet4server."""
import argparse
import asyncio
import functools
import logging
import ssl
from contextlib import suppress
from dataclasses import dataclass
from pathlib import Path
from typing import Callable

from . import cds, tpack
from .accounts import AccountService, Database
from .channel import ChannelConnection
from .game import GameConnection
from .lobby import Lobby
from .messages import Endpoint
from .xdr import ProtocolError, frame, read_frame
from .xlbp import Session, Tracer

HOST = "127.0.0.1"

# Single Mode opens the game socket twice: AutoEnter connects, then CreateRoomToC
# closes that connection and connects again. If the first connection is keyed
# before the client handles CreateRoomToC, its queued "connected" notification fires
# on the second one, which then sends EnterRoomToS unencrypted and later fails with
# MFC's generic error. Answering game shares a little later lets the client drop the
# first connection unkeyed.
GAME_HANDSHAKE_DELAY = 0.2

log = logging.getLogger("tet4.server")


@dataclass(frozen=True)
class Ports:
    """The client's bootstrap string fixes the TPack and CDS ports; the CDS and room
    replies announce the channel and game ports to it."""
    tpack: int = 10454
    cds: int = 15000
    channel: int = 15001
    game: int = 15002
    accounts: int = 15010    # registration and login, used by the launcher; with a database


class Services:
    """The listeners. `host` is the address to bind, `public_host` the one the replies
    announce to clients (a VPS binds 0.0.0.0 and announces its public IP). A port of 0
    binds any free port; the replies announce the ports actually bound.

    With `db` the server requires accounts: the account service registers players
    and hands out tickets, and the channel service accepts only valid tickets.
    Without it any account name is accepted and records last until the server stops.
    """

    def __init__(self, host: str = HOST, ports: Ports = Ports(), trace: Path | None = None,
                 db: Path | None = None, public_host: str | None = None,
                 tls: ssl.SSLContext | None = None):
        self.host = host
        self.public_host = public_host or host
        self.ports = ports
        self.db = Database(db) if db else None
        self.lobby = Lobby(self.db)
        self._tls = tls
        self._tracer = Tracer(trace) if trace else None
        self._servers: list[asyncio.Server] = []
        self._connections: set[asyncio.Task] = set()

    async def start(self) -> "Services":
        try:
            game = Endpoint(self.public_host, await self._listen(self.ports.game, self._secure(
                "game", lambda session: GameConnection(session, self.lobby),
                GAME_HANDSHAKE_DELAY)))
            channel = Endpoint(self.public_host, await self._listen(
                self.ports.channel, self._secure("channel", lambda session: ChannelConnection(
                    session, self.lobby, game, self.db))))
            cds_port = await self._listen(self.ports.cds, _plain(
                "CDS", functools.partial(cds.answer, channel=channel)))
            tpack_port = await self._listen(self.ports.tpack, _plain("TPack", tpack.answer))
            accounts_port = 0
            if self.db:
                accounts_port = await self._listen(
                    self.ports.accounts, AccountService(self.db).handle, self._tls)
        except BaseException:
            await self.close()
            raise
        self.ports = Ports(tpack_port, cds_port, channel.port, game.port, accounts_port)
        return self

    async def close(self) -> None:
        for server in self._servers:
            server.close()
        for task in self._connections:
            task.cancel()
        await asyncio.gather(*self._connections, return_exceptions=True)
        for server in self._servers:
            await server.wait_closed()
        if self._tracer:
            self._tracer.close()
        if self.db:
            self.db.close()

    async def __aenter__(self) -> "Services":
        return await self.start()

    async def __aexit__(self, *exc_info) -> None:
        await self.close()

    async def _listen(self, port: int, handler, tls: ssl.SSLContext | None = None) -> int:
        async def connection(reader, writer):
            task = asyncio.current_task()
            self._connections.add(task)
            try:
                await handler(reader, writer)
            finally:
                self._connections.discard(task)
                writer.close()
                with suppress(ConnectionError, asyncio.CancelledError):
                    await writer.wait_closed()

        server = await asyncio.start_server(connection, self.host, port, ssl=tls)
        self._servers.append(server)
        return server.sockets[0].getsockname()[1]

    def _secure(self, service: str, connection: Callable[[Session], object],
                handshake_delay: float = 0.0):
        async def handler(reader, writer):
            try:
                session = Session(service, reader, writer, self._tracer, handshake_delay)
                await connection(session).run()
                log.debug("%s %s: closed by the client", service, session.peer)
            except (ProtocolError, ConnectionError, asyncio.IncompleteReadError) as exc:
                log.info("%s connection closed: %s", service, str(exc) or type(exc).__name__)
        return handler


def _plain(name: str, answer: Callable[[bytes], bytes | None]):
    async def handler(reader, writer):
        try:
            while (body := await read_frame(reader)) is not None:
                try:
                    reply = answer(body)
                except ProtocolError as exc:
                    log.warning("%s: malformed request: %s", name, exc)
                    continue
                if reply is not None:
                    writer.write(frame(reply))
                    await writer.drain()
        except (ProtocolError, ConnectionError) as exc:
            log.info("%s connection closed: %s", name, str(exc) or type(exc).__name__)
    return handler


async def _run(args: argparse.Namespace) -> None:
    tls = None
    if args.tls_cert:
        tls = ssl.create_default_context(ssl.Purpose.CLIENT_AUTH)
        tls.load_cert_chain(args.tls_cert, args.tls_key)
    async with Services(args.host, trace=args.trace, db=args.db, public_host=args.public_host,
                        tls=tls) as services:
        p = services.ports
        log.info("listening on %s (announced as %s): TPack %d, CDS %d, channel %d, game %d",
                 services.host, services.public_host, p.tpack, p.cds, p.channel, p.game)
        if services.db:
            log.info("accounts required; account service on port %d%s", p.accounts,
                     " with TLS" if tls else " WITHOUT TLS: passwords travel in the clear")
        if args.trace:
            log.info("tracing decrypted messages to %s", args.trace)
        await asyncio.Event().wait()


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="python3 -m tet4server", description=__doc__)
    parser.add_argument("--host", default=HOST,
                        help="address to listen on (default %(default)s; 0.0.0.0 for all)")
    parser.add_argument("--public-host", metavar="ADDRESS",
                        help="address announced to clients (default: --host)")
    parser.add_argument("--db", type=Path, metavar="FILE",
                        help="SQLite database: require accounts and keep records in FILE")
    parser.add_argument("--tls-cert", type=Path, metavar="PEM",
                        help="certificate chain for the account service")
    parser.add_argument("--tls-key", type=Path, metavar="PEM",
                        help="private key for --tls-cert")
    parser.add_argument("--trace", type=Path, metavar="FILE",
                        help="append every decrypted channel/game message to FILE (JSON lines)")
    parser.add_argument("--log-level", default="INFO", choices=("DEBUG", "INFO", "WARNING"))
    args = parser.parse_args(argv)
    if args.host == "0.0.0.0" and not args.public_host:
        parser.error("--host 0.0.0.0 needs --public-host, the address clients connect to")
    if bool(args.tls_cert) != bool(args.tls_key):
        parser.error("--tls-cert and --tls-key go together")
    logging.basicConfig(level=args.log_level,
                        format="%(asctime)s %(levelname)s %(name)s: %(message)s")
    try:
        asyncio.run(_run(args))
    except KeyboardInterrupt:
        log.info("stopped")
    except OSError as exc:
        log.error("cannot start: %s", exc)
        return 1
    return 0
