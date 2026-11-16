"""Run the TPack, CDS, account, channel and game services: python3 -m tet4server.

The front (TPack, the CDS channel directory and the account service) leads players to
the channels. A channel is one lobby with its rooms, on its own channel and game
sockets; with --channels N, each channel runs in a process of its own, so that the
channels share the machine's cores, and the database is what they share.
"""
import argparse
import asyncio
import functools
import logging
import multiprocessing
import signal
import ssl
from contextlib import suppress
from dataclasses import dataclass, replace
from pathlib import Path
from typing import Callable

from .config import (ACCOUNTS_PORT, CDS_PORT, CHANNEL_PORT, CHANNEL_START_TIMEOUT,
                     GAME_HANDSHAKE_DELAY, GAME_PORT, HOST, MAX_CHANNELS, PRESENCE_CHECK,
                     RECORDS_REFRESH, RANKINGS_PORT, TPACK_PORT)
from .domain.lobby import Lobby
from .protocol.session import Session, Tracer
from .protocol.wire import Endpoint, ProtocolError, frame, read_frame
from .services import directory, tpack
from .services.accounts import AccountService
from .services.channel import ChannelConnection
from .services.game import GameConnection
from .services.rankings import Rankings
from .storage import Database

log = logging.getLogger("tet4.server")


@dataclass(frozen=True)
class Ports:
    """The client's bootstrap string names the TPack and CDS ports; the directory and the
    room replies announce the channel and game ports. Channel n listens on
    channel + 2(n - 1) and game + 2(n - 1). Port 0 binds any free port."""
    tpack: int = TPACK_PORT
    cds: int = CDS_PORT
    channel: int = CHANNEL_PORT
    game: int = GAME_PORT
    accounts: int = ACCOUNTS_PORT
    rankings: int = 0

    def of_channel(self, number: int) -> "Ports":
        step = 2 * (number - 1)
        return replace(self, channel=self.channel and self.channel + step,
                       game=self.game and self.game + step)


class Listeners:
    """Bound sockets and their connection tasks."""

    def __init__(self, host: str, tracer: Tracer | None = None):
        self.host = host
        self._tracer = tracer
        self._servers: list[asyncio.Server] = []
        self._connections: set[asyncio.Task] = set()

    async def listen(self, port: int, handler, tls: ssl.SSLContext | None = None) -> int:
        """Serve `handler(reader, writer)` on `port` (0: any); the port bound."""
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

    def secure(self, service: str, connection: Callable[[Session], object],
               handshake_delay: float = 0.0):
        """A handler for the secure socket, running one connection object per client."""
        async def handler(reader, writer):
            try:
                session = Session(service, reader, writer, self._tracer, handshake_delay)
                await connection(session).run()
                log.debug("%s %s: closed by the client", service, session.peer)
            except (ProtocolError, ConnectionError, asyncio.IncompleteReadError) as exc:
                log.info("%s connection closed: %s", service, str(exc) or type(exc).__name__)
            except Exception:
                log.exception("%s connection failed", service)
        return handler

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


class Channel:
    """One channel: a lobby with its rooms, on its own channel and game sockets."""

    def __init__(self, number: int, host: str, public_host: str, ports: Ports,
                 db: Path | None = None, trace: Path | None = None):
        self.number = number
        self.public_host = public_host
        self.ports = ports
        self.db = Database(db) if db else None
        self.lobby = Lobby(self.db, number)
        self._listeners = Listeners(host, Tracer(trace) if trace else None)
        self._chores: list[asyncio.Task] = []
        self.endpoint = self.game = Endpoint(public_host, 0)

    async def start(self) -> "Channel":
        listen, secure = self._listeners.listen, self._listeners.secure
        try:
            self.game = Endpoint(self.public_host, await listen(self.ports.game, secure(
                "game", lambda session: GameConnection(session, self.lobby),
                GAME_HANDSHAKE_DELAY)))
            self.endpoint = Endpoint(self.public_host, await listen(
                self.ports.channel, secure("channel", lambda session: ChannelConnection(
                    session, self.lobby, self.game, self.db))))
        except BaseException:
            await self.close()
            raise
        if self.db:
            # Other channels share the database: their games change the ranks, and their
            # logins can replace a session here.
            await asyncio.to_thread(self.db.clear_channel, self.number)
            self._chores = [
                asyncio.create_task(_every(RECORDS_REFRESH, self.lobby.records.refresh)),
                asyncio.create_task(_every(RECORDS_REFRESH, self.lobby.ratings.refresh)),
                asyncio.create_task(_every(PRESENCE_CHECK, self.lobby.end_replaced_logins))]
        return self

    @property
    def members(self) -> int:
        return len(self.lobby.players)

    async def close(self) -> None:
        for chore in self._chores:
            chore.cancel()
        await self._listeners.close()
        await self.lobby.close()
        if self.db:
            self.db.close()


class Services:
    """The front and the channels. `host` is the address to bind, `public_host` the
    one the replies announce to clients (a VPS binds 0.0.0.0 and announces its public
    IP). A port of 0 binds any free port; the replies announce the ports bound.

    With `db` the server requires accounts: the account service registers players
    and hands out tickets, and the channels accept only valid tickets; records and
    wallets are kept in it. Without it any account name is accepted and everything
    lasts until the server stops; more than one channel needs it.
    """

    def __init__(self, host: str = HOST, ports: Ports = Ports(), trace: Path | None = None,
                 db: Path | None = None, public_host: str | None = None,
                 tls: ssl.SSLContext | None = None, channels: int = 1,
                 rankings_port: int | None = None):
        if channels > 1 and not db:
            raise ValueError("more than one channel needs a database")
        self.host = host
        self.public_host = public_host or host
        self.ports = ports
        self._db_path, self._trace, self._tls, self._count = db, trace, tls, channels
        self._rankings_port = rankings_port
        self.db = Database(db) if db else None
        self.channels: list[Channel] = []            # with one channel, in this process
        self._processes: list[multiprocessing.Process] = []
        self._members = None                          # their member counts, shared
        self._listeners = Listeners(host)

    @property
    def lobby(self) -> Lobby:
        """The lobby of a server with one channel."""
        return self.channels[0].lobby

    async def start(self) -> "Services":
        try:
            if self._count == 1:
                self.channels = [await Channel(1, self.host, self.public_host, self.ports,
                                               self._db_path, self._trace).start()]
                endpoints = [self.channels[0].endpoint]
                ports = replace(self.ports, channel=endpoints[0].port,
                                game=self.channels[0].game.port)
            else:
                endpoints = await self._start_processes()
                ports = replace(self.ports, channel=endpoints[0].port)
            listen = self._listeners.listen
            cds_port = await listen(self.ports.cds, _plain("CDS", functools.partial(
                directory.answer, channels=endpoints, members=self._member_counts)))
            tpack_port = await listen(self.ports.tpack, _plain("TPack", tpack.answer))
            accounts_port = 0
            if self.db:
                accounts_port = await listen(
                    self.ports.accounts, AccountService(self.db).handle, self._tls)
            rankings_port = 0
            if self.db and self._rankings_port is not None:
                rankings_port = await listen(self._rankings_port, Rankings(self.db).handle)
        except BaseException:
            await self.close()
            raise
        self.ports = replace(ports, tpack=tpack_port, cds=cds_port, accounts=accounts_port,
                             rankings=rankings_port)
        return self

    def _member_counts(self) -> list[int]:
        if self.channels:
            return [channel.members for channel in self.channels]
        return list(self._members)

    async def _start_processes(self) -> list[Endpoint]:
        """One process per channel; each reports its bound ports when it listens."""
        context = multiprocessing.get_context("spawn")
        self._members = context.Array("i", self._count, lock=False)
        ready = context.Queue()
        for number in range(1, self._count + 1):
            trace = self._trace and self._trace.with_suffix(f".{number}{self._trace.suffix}")
            process = context.Process(
                target=_channel_process, name=f"channel {number}", daemon=True,
                args=(number, self.host, self.public_host, self.ports.of_channel(number),
                      self._db_path, trace, logging.getLogger().level, self._members, ready))
            process.start()
            self._processes.append(process)
        endpoints: dict[int, Endpoint] = {}
        while len(endpoints) < self._count:
            number, port = await asyncio.to_thread(ready.get, timeout=CHANNEL_START_TIMEOUT)
            if port is None:
                raise OSError(f"channel {number} could not start")
            endpoints[number] = Endpoint(self.public_host, port)
        return [endpoints[n] for n in sorted(endpoints)]

    async def close(self) -> None:
        await self._listeners.close()
        for channel in self.channels:
            await channel.close()
        for process in self._processes:
            process.terminate()
        for process in self._processes:
            await asyncio.to_thread(process.join, 5)
        if self.db:
            self.db.close()

    async def __aenter__(self) -> "Services":
        return await self.start()

    async def __aexit__(self, *exc_info) -> None:
        await self.close()


async def _every(seconds: float, chore) -> None:
    """Run `chore` every `seconds` until cancelled; a failure is logged, not fatal."""
    while True:
        await asyncio.sleep(seconds)
        try:
            await chore()
        except Exception:
            log.exception("%s failed", chore.__qualname__)


def _channel_process(number: int, host: str, public_host: str, ports: Ports, db: Path,
                     trace: Path | None, log_level: int, members, ready) -> None:
    """A channel's own process: serve it until terminated, keeping its member count
    in the shared array for the directory."""
    logging.basicConfig(level=log_level, format=f"%(asctime)s %(levelname)s channel {number} "
                                                "%(name)s: %(message)s")

    async def serve() -> None:
        try:
            channel = await Channel(number, host, public_host, ports, db, trace).start()
        except OSError as exc:
            log.error("cannot start: %s", exc)
            ready.put((number, None))
            return
        ready.put((number, channel.endpoint.port))
        log.info("channel %d on ports %d and %d", number, channel.endpoint.port,
                 channel.game.port)
        while True:
            members[number - 1] = channel.members
            await asyncio.sleep(1)

    with suppress(KeyboardInterrupt):
        asyncio.run(serve())


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
                        tls=tls, channels=args.channels,
                        rankings_port=None if args.no_rankings else args.rankings_port) as services:
        p = services.ports
        log.info("listening on %s (announced as %s): TPack %d, CDS %d, %d channel%s from "
                 "port %d", services.host, services.public_host, p.tpack, p.cds,
                 args.channels, "s" if args.channels > 1 else "", p.channel)
        if services.db:
            log.info("accounts required; account service on port %d%s", p.accounts,
                     " with TLS" if tls else " WITHOUT TLS: passwords travel in the clear")
            if p.rankings:
                log.info("public Single and Multiplayer rankings on port %d", p.rankings)
        elif not args.no_rankings:
            log.info("public rankings disabled: they require --db")
        if args.trace:
            log.info("tracing decrypted messages to %s", args.trace)
        stop = asyncio.Event()
        asyncio.get_running_loop().add_signal_handler(signal.SIGTERM, stop.set)
        await stop.wait()
        log.info("stopping")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="python3 -m tet4server", description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--host", default=HOST,
                        help="address to listen on (default %(default)s; 0.0.0.0 for all)")
    parser.add_argument("--public-host", metavar="ADDRESS",
                        help="address announced to clients (default: --host)")
    parser.add_argument("--db", type=Path, metavar="FILE",
                        help="SQLite database: require accounts, keep records and wallets")
    parser.add_argument("--channels", type=int, default=1, metavar="N",
                        help="channels, each in its own process with more than one "
                             "(default %(default)s; needs --db above 1)")
    parser.add_argument("--tls-cert", type=Path, metavar="PEM",
                        help="certificate chain for the account service")
    parser.add_argument("--tls-key", type=Path, metavar="PEM",
                        help="private key for --tls-cert")
    parser.add_argument("--rankings-port", type=int, default=RANKINGS_PORT, metavar="PORT",
                        help="public ranking pages (default %(default)s; requires --db)")
    parser.add_argument("--no-rankings", action="store_true",
                        help="disable the public ranking pages")
    parser.add_argument("--trace", type=Path, metavar="FILE",
                        help="append every decrypted channel/game message to FILE (JSON lines)")
    parser.add_argument("--log-level", default="INFO", choices=("DEBUG", "INFO", "WARNING"))
    args = parser.parse_args(argv)
    if args.host == "0.0.0.0" and not args.public_host:
        parser.error("--host 0.0.0.0 needs --public-host, the address clients connect to")
    if bool(args.tls_cert) != bool(args.tls_key):
        parser.error("--tls-cert and --tls-key go together")
    if not 1 <= args.channels <= MAX_CHANNELS:
        parser.error(f"--channels: 1 to {MAX_CHANNELS}")
    if args.channels > 1 and not args.db:
        parser.error("--channels above 1 needs --db, which the channels share")
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
