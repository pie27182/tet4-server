"""Channel server (port from CDS, 15001): handshake, frames, and the auth reply.

Frame on the secure socket, after decryption:
    uint32be length | "XLBP" | uint32be message id | message fields
The length covers everything after it. The client's receive path checks the magic,
peeks the id (the message class reads it again in its own Deserialize), then runs
that class's Deserialize.

Cmd_AuthToC (0x008500CA) fields, from Serialize at 0x601356E0 and its sub-object
_KeyType::Serialize at 0x60128690 (HgCom3.dll):
    u32 id
    _KeyType without its own id:  i64 | string | i64 | string | string
    string  (+0x88)
    string  (+0xA4)
    i32     (+0xC0)
Strings are uint32be length + bytes, with no padding. i64 is big-endian.
"""
import logging
import socket
import struct
import threading

from . import crypto
from .xdr import ProtocolError, Reader, pack_string, pack_u32

MAGIC = b"XLBP"
AUTH_TO_S = 0x0365C03A
AUTH_TO_C = 0x008500CA
HANDSHAKE_PLAIN = struct.pack("<24H", *range(24))

log = logging.getLogger("tet4.channel")


def auth_to_c(text_a: bytes = b"", text_b: bytes = b"", code: int = 0) -> bytes:
    """Body of Cmd_AuthToC (after the magic), in the client's serialization order."""
    return (pack_u32(AUTH_TO_C)
            + struct.pack(">q", 0) + pack_string(b"") + struct.pack(">q", 0)
            + pack_string(b"") + pack_string(b"")
            + pack_string(text_a) + pack_string(text_b)
            + struct.pack(">i", code))


def frame(body: bytes) -> bytes:
    """Length-prefixed frame: uint32be length, then MAGIC + message."""
    payload = MAGIC + body
    return pack_u32(len(payload)) + payload


class Session:
    """Two stream contexts for one connection, built once from the handshake master."""

    def __init__(self, master):
        self.from_client = crypto.Stream.from_master(master, "decrypt_client")
        self.to_client = crypto.Stream.from_master(master, "encrypt_to_client")

    def read_frame(self, conn) -> tuple:
        head = self.from_client.decrypt(_recv_exact(conn, 4))
        size = struct.unpack(">I", head)[0]
        payload = self.from_client.decrypt(_recv_exact(conn, size))
        if payload[:4] != MAGIC:
            raise ProtocolError(f"bad magic {payload[:4]!r}")
        return Reader(payload[4:]).u32(), payload[4:]

    def send(self, conn, body: bytes) -> None:
        conn.sendall(self.to_client.encrypt(frame(body)))


def _recv_exact(conn, n: int) -> bytes:
    buf = b""
    while len(buf) < n:
        chunk = conn.recv(n - len(buf))
        if not chunk:
            raise ProtocolError("connection closed")
        buf += chunk
    return buf


def handshake(conn) -> Session:
    share = _recv_exact(conn, 48)
    server_wire = crypto.encrypt_share(HANDSHAKE_PLAIN)
    conn.sendall(server_wire)
    return Session(crypto.master_words(share, server_wire))


def handle(conn) -> None:
    try:
        session = handshake(conn)
        while True:
            msg_id, _ = session.read_frame(conn)
            log.info("channel frame id=0x%08x", msg_id)
            if msg_id == AUTH_TO_S:
                session.send(conn, auth_to_c())
                log.info("sent Cmd_AuthToC")
    except (ProtocolError, OSError) as exc:
        log.info("channel closed: %s", exc)
    finally:
        conn.close()


def serve(host: str, port: int) -> None:
    srv = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    srv.bind((host, port))
    srv.listen(16)
    log.info("channel listening on %s:%d", host, port)
    while True:
        conn, _ = srv.accept()
        threading.Thread(target=handle, args=(conn,), daemon=True).start()
