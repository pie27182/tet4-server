"""Run the TPack, CDS, channel and game services: python3 -m tet4server."""
import argparse
import asyncio
import functools
import logging
from contextlib import suppress
from dataclasses import dataclass
from pathlib import Path
from typing import Callable

from . import cds, tpack
from .channel import ChannelConnection
from .game import GameConnection
from .lobby import Lobby
from .messages import Endpoint
from .xdr import ProtocolError, frame, read_frame
from .xlbp import Session, Tracer

HOST = "127.0.0.1"

log = logging.getLogger("tet4.server")


@dataclass(frozen=True)
class Ports:
    """The client's bootstrap string fixes the TPack and CDS ports; the CDS and room
    replies announce the channel and game ports to it."""
    tpack: int = 10454
    cds: int = 15000
    channel: int = 15001
    game: int = 15002


class Services:
    """The four listeners. A port of 0 binds any free port; the replies announce
    the ports actually bound."""

    def __init__(self, host: str = HOST, ports: Ports = Ports(), trace: Path | None = None):
        self.host = host
        self.ports = ports
        self.lobby = Lobby()
        self._tracer = Tracer(trace) if trace else None
        self._servers: list[asyncio.Server] = []
        self._connections: set[asyncio.Task] = set()

    async def start(self) -> "Services":
        try:
            game = Endpoint(self.host, await self._listen(self.ports.game, self._secure(
                "game", lambda session: GameConnection(session, self.lobby))))
            channel = Endpoint(self.host, await self._listen(self.ports.channel, self._secure(
                "channel", lambda session: ChannelConnection(session, self.lobby, game))))
            cds_port = await self._listen(self.ports.cds, _plain(
                "CDS", functools.partial(cds.answer, channel=channel)))
            tpack_port = await self._listen(self.ports.tpack, _plain("TPack", tpack.answer))
        except BaseException:
            await self.close()
            raise
        self.ports = Ports(tpack_port, cds_port, channel.port, game.port)
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

    async def __aenter__(self) -> "Services":
        return await self.start()

    async def __aexit__(self, *exc_info) -> None:
        await self.close()

    async def _listen(self, port: int, handler) -> int:
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

        server = await asyncio.start_server(connection, self.host, port)
        self._servers.append(server)
        return server.sockets[0].getsockname()[1]

    def _secure(self, service: str, connection: Callable[[Session], object]):
        async def handler(reader, writer):
            try:
                session = Session(service, reader, writer, self._tracer)
                await connection(session).run()
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


async def _run(trace: Path | None) -> None:
    async with Services(trace=trace) as services:
        p = services.ports
        log.info("listening on %s: TPack %d, CDS %d, channel %d, game %d",
                 services.host, p.tpack, p.cds, p.channel, p.game)
        if trace:
            log.info("tracing decrypted messages to %s", trace)
        await asyncio.Event().wait()


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="python3 -m tet4server", description=__doc__)
    parser.add_argument("--trace", type=Path, metavar="FILE",
                        help="append every decrypted channel/game message to FILE (JSON lines)")
    parser.add_argument("--log-level", default="INFO", choices=("DEBUG", "INFO", "WARNING"))
    args = parser.parse_args(argv)
    logging.basicConfig(level=args.log_level,
                        format="%(asctime)s %(levelname)s %(name)s: %(message)s")
    try:
        asyncio.run(_run(args.trace))
    except KeyboardInterrupt:
        log.info("stopped")
    except OSError as exc:
        log.error("cannot start: %s", exc)
        return 1
    return 0
