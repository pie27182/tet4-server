"""Minimal Single Mode game-socket endpoint.

The channel's AutoEnter reply directs the original client to this local listener.
The secure-socket handshake is shared with the channel connection. Until the
game-service message handlers are recovered, this endpoint captures decoded frames
as local .bin files and deliberately does not fabricate acknowledgements.
"""
import logging
import socket
import threading
import uuid
from dataclasses import dataclass
from pathlib import Path

from . import channel
from .xdr import ProtocolError, Reader

log = logging.getLogger("tet4.game")

GAME_REPORT_TOS = 0x05BCDF3A
POLY_MINO_PUT_TOS = 0x0CC4004A


@dataclass(frozen=True)
class GameReportRequest:
    strings: tuple[bytes, bytes, bytes, bytes]
    counters: tuple[int, int, int, int, int]
    flag: int


@dataclass(frozen=True)
class PolyMinoPutRequest:
    values: tuple[int, int, int, int]


def parse_game_report_request(payload: bytes) -> GameReportRequest:
    """Parse the statically recovered Single Mode GameReportToS wire layout."""
    r = Reader(payload)
    if r.u32() != GAME_REPORT_TOS:
        raise ProtocolError("not Cmd_Room_OrderTypeSingleModeGameReportTetrisToS")
    strings = tuple(r.string() for _ in range(4))
    counters = (r.u32(), r.u32())
    flag = r.take(1)[0]
    counters += (r.u32(), r.u32(), r.u32())
    if r.remaining():
        raise ProtocolError(f"unexpected {r.remaining()} trailing GameReportToS bytes")
    return GameReportRequest(strings, counters, flag)  # type: ignore[arg-type]


def parse_poly_mino_put_request(payload: bytes) -> PolyMinoPutRequest:
    """Parse Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS (four uint32s)."""
    r = Reader(payload)
    if r.u32() != POLY_MINO_PUT_TOS:
        raise ProtocolError("not Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS")
    values = tuple(r.u32() for _ in range(4))
    if r.remaining():
        raise ProtocolError(f"unexpected {r.remaining()} trailing PolyMinoPutToS bytes")
    return PolyMinoPutRequest(values)  # type: ignore[arg-type]


def save_frame(
    capture_dir: Path | None,
    connection_id: str,
    sequence: int,
    msg_id: int,
    payload: bytes,
) -> Path | None:
    """Save a decoded frame body locally; never put captured tokens in text logs."""
    if capture_dir is None:
        return None
    capture_dir.mkdir(parents=True, exist_ok=True)
    path = capture_dir / f"{connection_id}-{sequence:04d}-0x{msg_id:08x}.bin"
    path.write_bytes(payload)
    return path


def handle(conn: socket.socket, capture_dir: Path | None = None) -> None:
    connection_id = uuid.uuid4().hex[:12]
    try:
        session = channel.handshake(conn)
        log.info("game socket %s secure handshake completed", connection_id)
        sequence = 0
        while True:
            msg_id, payload = session.read_frame(conn)
            sequence += 1
            saved = save_frame(capture_dir, connection_id, sequence, msg_id, payload)
            if msg_id == GAME_REPORT_TOS:
                request = parse_game_report_request(payload)
                log.info(
                    "Single Mode GameReportToS connection=%s seq=%d "
                    "string_lengths=%r counters=%r flag=%d captured=%s",
                    connection_id,
                    sequence,
                    tuple(map(len, request.strings)),
                    request.counters,
                    request.flag,
                    saved is not None,
                )
            elif msg_id == POLY_MINO_PUT_TOS:
                request = parse_poly_mino_put_request(payload)
                log.info(
                    "Single Mode PolyMinoPutToS connection=%s seq=%d "
                    "values=%r captured=%s",
                    connection_id,
                    sequence,
                    request.values,
                    saved is not None,
                )
            else:
                log.info(
                    "game frame connection=%s seq=%d id=0x%08x payload_len=%d captured=%s",
                    connection_id,
                    sequence,
                    msg_id,
                    len(payload),
                    saved is not None,
                )
    except (ProtocolError, OSError) as exc:
        log.info("game socket %s closed: %s", connection_id, exc)
    finally:
        conn.close()


def serve(
    host: str = "127.0.0.1",
    port: int = channel.GAME_SERVER_PORT,
    capture_dir: Path | None = None,
) -> None:
    """Accept game-socket connections and capture decoded XLBP frame bodies."""
    srv = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    srv.bind((host, port))
    srv.listen(16)
    log.info("game server listening on %s:%d", host, port)
    while True:
        conn, address = srv.accept()
        log.info("game connection from %s:%d", *address)
        threading.Thread(
            target=handle, args=(conn, capture_dir), daemon=True
        ).start()
