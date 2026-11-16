"""The secure socket and XLBP batches, shared by the channel and game services.

After the 48-byte share exchange every frame is encrypted with the direction's
stream cipher and reads `u32 length | "XLBP" | batch`, the length covering the
magic and the batch.

A batch carries one message type in up to four layer slots (HgCom3
PC_ConvertM2X 0x601204A0 / PC_ConvertX2M 0x601206E0). Every empty slot before a
populated one is a 4-byte Cmd_LayerAlignment marker. The receiver looks up the
first real message ID once and runs that type's converter for each slot, so the
pair (ID, layer) identifies a message: Tet4.exe registers its Tetris messages and
extensions at layer 3, HgCom3 its generic messages at layer 0.
"""
import asyncio
import json
import logging
import struct
import time
from dataclasses import dataclass
from pathlib import Path
from typing import Awaitable, Callable

from . import crypto
from .messages import Msg, describe
from .xdr import MAX_FRAME, ProtocolError, Reader, u32

MAGIC = b"XLBP"
LAYERS = 4
MAX_BACKLOG = 1 << 20   # unsent bytes before a client counts as stuck

log = logging.getLogger("tet4.xlbp")


@dataclass(frozen=True)
class Message:
    layer: int
    id: int
    body: bytes  # from the message ID to the end of the batch


def encode_batch(layers: dict[int, bytes]) -> bytes:
    """One message type in its layer slots: {layer: body}, bodies sharing one ID."""
    if not layers or not set(layers) <= set(range(LAYERS)):
        raise ValueError(f"layers must be within 0..{LAYERS - 1}")
    out, empty = [], 0
    for layer in range(max(layers) + 1):
        if layer in layers:
            out.append(u32(Msg.LayerAlignment) * empty + layers[layer])
            empty = 0
        else:
            empty += 1
    return b"".join(out)


def decode_batch(batch: bytes) -> Message | None:
    """The first populated slot of a batch; None for a batch of markers only."""
    for layer in range(LAYERS):
        offset = 4 * layer
        if offset == len(batch):
            return None
        if offset + 4 > len(batch):
            raise ProtocolError("batch ends inside a message ID")
        (msg_id,) = struct.unpack_from(">I", batch, offset)
        if msg_id != Msg.LayerAlignment:
            return Message(layer, msg_id, batch[offset:])
    if len(batch) > 4 * LAYERS:
        raise ProtocolError("data after four empty layer slots")
    return None


class Tracer:
    """Writes every decrypted batch to a JSON-lines file. Traces contain the
    client's session ticket: keep them out of git and out of bug reports."""

    def __init__(self, path: Path):
        path.parent.mkdir(parents=True, exist_ok=True)
        self._file = path.open("a", encoding="utf-8")

    def record(self, session: "Session", direction: str, batch: bytes) -> None:
        try:
            message = decode_batch(batch)
        except ProtocolError:
            message = None
        self._file.write(json.dumps({
            "time": round(time.time(), 3),
            "service": session.service,
            "peer": session.peer,
            "dir": direction,
            "layer": message.layer if message else None,
            "name": describe(message.id) if message else None,
            "batch": batch.hex(),
        }) + "\n")
        self._file.flush()

    def close(self) -> None:
        self._file.close()


class _Clear:
    """The cipher of a connection that skipped the handshake."""

    @staticmethod
    def encrypt(data: bytes) -> bytes:
        return data

    decrypt = encrypt


class Session:
    """One client connection.

    The client's share comes first and every frame after it is encrypted. A plain
    frame before the share is a stale "connected" notification firing on a new game
    connection (see server.GAME_HANDSHAKE_DELAY); it gets no reply, because until
    the handshake the client takes the first 48 bytes it receives as the server's
    share.
    """

    def __init__(self, service: str, reader: asyncio.StreamReader,
                 writer: asyncio.StreamWriter, tracer: Tracer | None = None,
                 handshake_delay: float = 0.0):
        self.service = service
        host, port = writer.get_extra_info("peername")[:2]
        self.host = host
        self.peer = f"{host}:{port}"
        self._reader = reader
        self._writer = writer
        self._pending = b""
        self._rx = self._tx = _Clear()
        self._keyed = False
        self._tracer = tracer
        self._handshake_delay = handshake_delay
        log.debug("%s %s: connected", service, self.peer)

    async def _read(self, n: int) -> bytes:
        chunk, self._pending = self._pending[:n], self._pending[n:]
        if len(chunk) < n:
            chunk += await self._reader.readexactly(n - len(chunk))
        return chunk

    async def _handshake(self, client_share: bytes) -> None:
        """Answer the client's share with a fresh one of ours and key both directions."""
        await asyncio.sleep(self._handshake_delay)
        server_share = crypto.seal_share(crypto.new_share())
        self._writer.write(server_share)
        await self._writer.drain()
        master = crypto.master_key(client_share, server_share)
        self._rx = crypto.upstream_cipher(master)
        self._tx = crypto.downstream_cipher(master)
        self._keyed = True
        log.debug("%s %s: share answered", self.service, self.peer)

    async def receive(self) -> Message | None:
        """The next message from the client; None once it has closed the connection."""
        while True:
            try:
                if not self._keyed:
                    head = await self._read(8)
                    if head[4:] != MAGIC:
                        rest = await self._read(crypto.SHARE_SIZE - len(head))
                        await self._handshake(head + rest)
                        continue
                    (length,) = struct.unpack(">I", head[:4])
                    if not len(MAGIC) <= length <= MAX_FRAME:
                        raise ProtocolError(f"bad frame length {length}")
                    plain = head[4:] + await self._read(length - len(MAGIC))
                    message = decode_batch(plain[4:])
                    log.info("%s %s: ignored plain %s before the handshake", self.service,
                             self.peer, describe(message.id) if message else "batch")
                    continue
                header = await self._read(4)
            except asyncio.IncompleteReadError as exc:
                if exc.partial:
                    raise ProtocolError("connection closed inside a frame header") from None
                return None
            (length,) = struct.unpack(">I", self._rx.decrypt(header))
            if not len(MAGIC) <= length <= MAX_FRAME:
                raise ProtocolError(f"bad frame length {length}")
            try:
                payload = self._rx.decrypt(await self._read(length))
            except asyncio.IncompleteReadError:
                raise ProtocolError("connection closed inside a frame") from None
            if payload[:4] != MAGIC:
                raise ProtocolError(f"bad frame magic {payload[:4]!r}")
            batch = payload[4:]
            if self._tracer:
                self._tracer.record(self, "in", batch)
            try:
                message = decode_batch(batch)
            except ProtocolError as exc:
                log.warning("%s %s: skipped batch: %s", self.service, self.peer, exc)
                continue
            if message is not None:
                return message
            log.debug("%s %s: batch of layer markers only", self.service, self.peer)

    async def send(self, body: bytes, layer: int = 0) -> None:
        await self.send_layers({layer: body})

    async def send_layers(self, layers: dict[int, bytes]) -> None:
        """Send one batch and wait until the socket has taken it (replies)."""
        self.post_layers(layers)
        await self._writer.drain()

    def close(self) -> None:
        self._writer.close()

    def post(self, body: bytes, layer: int = 0) -> None:
        self.post_layers({layer: body})

    def post_layers(self, layers: dict[int, bytes]) -> None:
        """Queue one batch without waiting (messages to other players): a client whose
        unsent data passes MAX_BACKLOG is disconnected instead of holding others up."""
        if self._writer.is_closing():
            return
        batch = encode_batch(layers)
        if self._tracer:
            self._tracer.record(self, "out", batch)
        payload = MAGIC + batch
        self._writer.write(self._tx.encrypt(u32(len(payload)) + payload))
        first = layers[min(layers)]
        log.info("%s %s -> %s%s", self.service, self.peer,
                 describe(int.from_bytes(first[:4], "big")), _layer_note(*sorted(layers)))
        if self._writer.transport.get_write_buffer_size() > MAX_BACKLOG:
            log.warning("%s %s: %d bytes unsent, disconnecting", self.service, self.peer,
                        self._writer.transport.get_write_buffer_size())
            self._writer.transport.abort()


Handler = Callable[[Reader], Awaitable[None]]


async def serve_messages(session: Session, handlers: dict[tuple[int, int], Handler]) -> None:
    """Run the handler for each (layer, message ID) until the client disconnects.

    Messages without a handler get no reply. A handler receives a reader
    positioned after the message ID.
    """
    while (message := await session.receive()) is not None:
        handler = handlers.get((message.layer, message.id))
        log.info("%s %s <- %s%s%s", session.service, session.peer, describe(message.id),
                 _layer_note(message.layer), "" if handler else " (no reply)")
        if handler is None:
            continue
        reader = Reader(message.body)
        reader.u32()
        try:
            await handler(reader)
        except ProtocolError as exc:
            log.warning("%s %s: malformed %s: %s", session.service, session.peer,
                        describe(message.id), exc)


def _layer_note(*layers: int) -> str:
    return "" if layers == (0,) else f" (layer {'+'.join(map(str, layers))})"
