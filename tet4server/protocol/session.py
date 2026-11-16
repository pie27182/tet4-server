"""The secure socket: the key exchange, encrypted XLBP frames and their batches.

After the two 48-byte key shares, every frame is encrypted with its direction's
stream cipher and reads `u32 length | "XLBP" | batch`, the length counting the magic
and the batch.

A batch carries one message type in up to four layer slots. Every empty slot before
a filled one is a 4-byte LayerAlignment marker, and trailing empty slots are left out.
The receiver reads the first real message ID and runs that type's converter for each
slot, so a message is known by its ID and layer together: the client takes its own
Tetris messages and the Tetris extensions of generic ones at layer 3, the generic
messages at layer 0 (docs/PROTOCOL.md section 5).
"""
import asyncio
import json
import logging
import time
from pathlib import Path

from ..config import MAX_BACKLOG, MAX_FRAME
from . import cipher
from .codec import U32, Message, message_id, name_of
from .wire import ProtocolError

MAGIC = b"XLBP"
LAYERS = 4
ALIGNMENT = U32.pack(message_id("LayerAlignment"))

log = logging.getLogger("tet4.session")


def encode_batch(messages: tuple[Message, ...]) -> bytes:
    """Messages of one type, each in its layer's slot, as one batch."""
    slots = sorted(messages)
    if not slots or len({m.layer for m in slots}) != len(slots) or not (
            0 <= slots[0].layer and slots[-1].layer < LAYERS):
        raise ValueError(f"a batch takes one message per layer 0-{LAYERS - 1}")
    out, layer = [], 0
    for message in slots:
        out.append(ALIGNMENT * (message.layer - layer))
        out.append(message.body)
        layer = message.layer + 1
    return b"".join(out)


def decode_batch(batch: bytes) -> Message | None:
    """The first filled slot of a batch, the body running to the batch's end; None
    for a batch of markers only."""
    for layer in range(LAYERS):
        offset = 4 * layer
        if offset == len(batch):
            return None
        if offset + 4 > len(batch):
            raise ProtocolError("batch ends inside a message ID")
        if batch[offset:offset + 4] != ALIGNMENT:
            return Message(layer, batch[offset:])
    if len(batch) > 4 * LAYERS:
        raise ProtocolError("data after four empty layer slots")
    return None


class Tracer:
    """Writes every decrypted batch to a JSON-lines file. Traces contain the client's
    login ticket: keep them out of git and out of bug reports."""

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
            "name": name_of(message.layer, message.id) if message else None,
            "batch": batch.hex(),
        }) + "\n")
        self._file.flush()

    def close(self) -> None:
        self._file.close()


class _Clear:
    """The cipher of a connection before its key exchange."""

    @staticmethod
    def encrypt(data: bytes) -> bytes:
        return data

    decrypt = encrypt


class Session:
    """One client connection.

    The client's key share comes first and every frame after it is encrypted. A plain
    frame before the share is a stale "connected" notice firing on a new game
    connection (config.GAME_HANDSHAKE_DELAY); it gets no reply, because until the
    exchange the client takes the first 48 bytes it receives as the server's share.
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

    async def _exchange_keys(self, client_share: bytes) -> None:
        """Answer the client's share with a fresh one of ours and key both directions."""
        await asyncio.sleep(self._handshake_delay)
        server_share = cipher.seal_share(cipher.new_share())
        self._writer.write(server_share)
        await self._writer.drain()
        master = cipher.master_key(client_share, server_share)
        self._rx = cipher.upstream_cipher(master)
        self._tx = cipher.downstream_cipher(master)
        self._keyed = True
        log.debug("%s %s: keys exchanged", self.service, self.peer)

    async def receive(self) -> Message | None:
        """The next message from the client; None once it has closed the connection."""
        while True:
            try:
                if not self._keyed:
                    head = await self._read(8)
                    if head[4:] != MAGIC:
                        rest = await self._read(cipher.SHARE_SIZE - len(head))
                        await self._exchange_keys(head + rest)
                        continue
                    length = U32.unpack(head[:4])[0]
                    if not len(MAGIC) <= length <= MAX_FRAME:
                        raise ProtocolError(f"bad frame length {length}")
                    plain = head[4:] + await self._read(length - len(MAGIC))
                    message = decode_batch(plain[4:])
                    log.info("%s %s: ignored a plain %s before the key exchange", self.service,
                             self.peer, name_of(message.layer, message.id) if message else "batch")
                    continue
                header = await self._read(4)
            except asyncio.IncompleteReadError as exc:
                if exc.partial:
                    raise ProtocolError("connection closed inside a frame header") from None
                return None
            length = U32.unpack(self._rx.decrypt(header))[0]
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
                log.warning("%s %s: skipped a batch: %s", self.service, self.peer, exc)
                continue
            if message is not None:
                if log.isEnabledFor(logging.DEBUG):
                    log.debug("%s %s <- %s%s", self.service, self.peer,
                              name_of(message.layer, message.id), _layer_note(message.layer))
                return message
            log.debug("%s %s: a batch of layer markers only", self.service, self.peer)

    async def send(self, *messages: Message) -> None:
        """Send one batch and wait until the socket has taken it (a reply)."""
        self.post(*messages)
        await self._writer.drain()

    def post(self, *messages: Message) -> None:
        """Queue one batch without waiting (news for other players)."""
        self.post_batch(encode_batch(messages))

    def post_batch(self, batch: bytes) -> None:
        """Queue an encoded batch: a client whose unsent data passes MAX_BACKLOG is
        cut off rather than holding the others up."""
        writer = self._writer
        if writer.is_closing():
            return
        if self._tracer:
            self._tracer.record(self, "out", batch)
        writer.write(self._tx.encrypt(U32.pack(len(batch) + 4) + MAGIC + batch))
        if log.isEnabledFor(logging.DEBUG):
            message = decode_batch(batch)
            log.debug("%s %s -> %s%s", self.service, self.peer,
                      name_of(message.layer, message.id), _layer_note(message.layer))
        if writer.transport.get_write_buffer_size() > MAX_BACKLOG:
            log.warning("%s %s: %d bytes unsent, disconnecting", self.service, self.peer,
                        writer.transport.get_write_buffer_size())
            writer.transport.abort()

    def close(self) -> None:
        self._writer.close()


def _layer_note(layer: int) -> str:
    return "" if layer == 0 else f" (layer {layer})"
