"""Minimal Single Mode game-socket endpoint.

The channel's AutoEnter success reply directs the original client to this local
listener. The secure-socket handshake is shared with the channel connection.
Until the game-service message handlers are recovered, this endpoint records
the first client frames and deliberately does not fabricate acknowledgements.
"""
import logging
import socket
import threading

from . import channel
from .xdr import ProtocolError

log = logging.getLogger("tet4.game")


def handle(conn: socket.socket) -> None:
    try:
        session = channel.handshake(conn)
        log.info("game socket secure handshake completed")
        while True:
            msg_id, payload = session.read_frame(conn)
            # Keep the complete payload in the log for the next protocol-research
            # pass. Do not log credentials if a future message contains them.
            log.info(
                "game frame id=0x%08x payload_len=%d payload_hex=%s",
                msg_id,
                len(payload),
                payload.hex(),
            )
    except (ProtocolError, OSError) as exc:
        log.info("game socket closed: %s", exc)
    finally:
        conn.close()


def serve(host: str = "127.0.0.1", port: int = channel.GAME_SERVER_PORT) -> None:
    """Accept client game-socket connections and capture decoded XLBP frames."""
    srv = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    srv.bind((host, port))
    srv.listen(16)
    log.info("game server listening on %s:%d", host, port)
    while True:
        conn, address = srv.accept()
        log.info("game connection from %s:%d", *address)
        threading.Thread(target=handle, args=(conn,), daemon=True).start()
