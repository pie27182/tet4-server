"""Channel server (port from CDS, 15001): handshake, frames, auth and channel-entry replies.

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
Cmd_Channel_GetUserIdByMemberIdToS (0x0FAB330A): id | string member_id
Cmd_Channel_GetUserIdToC (0x0A80E29A), Serialize at 0x60135DA0 and converter
FUN_6013F9B0 (HgCom3.dll):
    u32 id | i64 | string (+0x18 -> "k3e") | string (+0x34 -> "k2e") | i32 (+0x50 -> "k161e")
    k161e == 0 is the success path in Msg_GetUserId (HgModel3.dll, 0x6090FFE0).

Strings are uint32be length + bytes, with no padding. i64 is big-endian.
"""
import logging
import socket
from dataclasses import dataclass
import struct
import threading

from . import crypto
from .xdr import ProtocolError, Reader, pack_string, pack_u32

MAGIC = b"XLBP"
AUTH_TO_S = 0x0365C03A
AUTH_TO_C = 0x008500CA
GET_USER_ID_BY_MEMBER_TOS = 0x0FAB330A
GET_USER_ID_TOC = 0x0A80E29A
ENTER_CHANNEL_BY_USER_ID_TOS = 0x0696068A
ENTER_CHANNEL_TOC = 0x00C0FC8A
HANDSHAKE_PLAIN = struct.pack("<24H", *range(24))

log = logging.getLogger("tet4.channel")


def auth_to_c(text_a: bytes = b"", text_b: bytes = b"", code: int = 0) -> bytes:
    """Body of Cmd_AuthToC (after the magic), in the client's serialization order."""
    return (pack_u32(AUTH_TO_C)
            + struct.pack(">q", 0) + pack_string(b"") + struct.pack(">q", 0)
            + pack_string(b"") + pack_string(b"")
            + pack_string(text_a) + pack_string(text_b)
            + struct.pack(">i", code))


def get_user_id_to_c(member_id: bytes, text_b: bytes = b"", code: int = 0) -> bytes:
    """Body of Cmd_Channel_GetUserIdToC (after the magic)."""
    return (pack_u32(GET_USER_ID_TOC)
            + struct.pack(">q", 0) + pack_string(member_id) + pack_string(text_b)
            + struct.pack(">i", code))


@dataclass(frozen=True)
class EnterChannelRequest:
    """Wire fields of Cmd_Channel_EnterChannelByUserIdToS."""
    user_id: int
    strings: tuple[bytes, ...]
    option: int
    trailing_strings: tuple[bytes, ...]
    trailing_u64: int


def parse_enter_channel_request(payload: bytes) -> EnterChannelRequest:
    """Parse a complete frame payload, including its message ID."""
    r = Reader(payload)
    if r.u32() != ENTER_CHANNEL_BY_USER_ID_TOS:
        raise ProtocolError("not Cmd_Channel_EnterChannelByUserIdToS")
    user_id = r.u64()
    strings = tuple(r.string() for _ in range(5))
    option = r.u32()
    trailing_strings = tuple(r.string() for _ in range(2))
    trailing_u64 = r.u64()
    if r.remaining():
        raise ProtocolError(f"unexpected {r.remaining()} trailing request bytes")
    return EnterChannelRequest(user_id, strings, option, trailing_strings, trailing_u64)


def enter_channel_to_c(
    strings: tuple[bytes, ...] | None = None,
    u32s: tuple[int, ...] | None = None,
    flag: int = 0,
) -> bytes:
    """Serialize a success-shaped probe for Cmd_Channel_EnterChannelToC.

    Serialize at 0x6012e4a0 establishes the layout. Until channel-state values
    are recovered, defaults mirror the message constructor: nine present-but-empty
    strings, eight zero uint32s and a zero byte. The final string is converted to
    k1e; an empty value is present and is not the explicit failure value "v2e".
    This probe is not yet live-verified.
    """
    if strings is None:
        strings = (b"",) * 9
    if u32s is None:
        u32s = (0,) * 8
    if len(strings) != 9 or any(not isinstance(v, bytes) for v in strings):
        raise ValueError("EnterChannelToC requires exactly nine byte-string fields")
    if len(u32s) != 8 or any(
        not isinstance(v, int) or not 0 <= v <= 0xFFFFFFFF for v in u32s
    ):
        raise ValueError("EnterChannelToC requires exactly eight uint32 fields")
    if not isinstance(flag, int) or not 0 <= flag <= 0xFF:
        raise ValueError("EnterChannelToC flag must fit in one byte")

    # Field order: str*5, u32*3, u8, str, u32*2, str*2, u32*3, str.
    return (
        pack_u32(ENTER_CHANNEL_TOC)
        + b"".join(pack_string(v) for v in strings[:5])
        + b"".join(pack_u32(v) for v in u32s[:3])
        + struct.pack(">B", flag)
        + pack_string(strings[5])
        + b"".join(pack_u32(v) for v in u32s[3:5])
        + pack_string(strings[6])
        + pack_string(strings[7])
        + b"".join(pack_u32(v) for v in u32s[5:8])
        + pack_string(strings[8])
    )


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
            msg_id, payload = session.read_frame(conn)
            log.info("channel frame id=0x%08x", msg_id)
            if msg_id == AUTH_TO_S:
                session.send(conn, auth_to_c())
                log.info("sent Cmd_AuthToC")
            elif msg_id == GET_USER_ID_BY_MEMBER_TOS:
                r = Reader(payload)
                r.u32()
                member = r.string()
                session.send(conn, get_user_id_to_c(member))
                log.info("sent Cmd_Channel_GetUserIdToC for member %r", member)
            elif msg_id == ENTER_CHANNEL_BY_USER_ID_TOS:
                request = parse_enter_channel_request(payload)
                session.send(conn, enter_channel_to_c())
                log.info(
                    "sent Cmd_Channel_EnterChannelToC probe for user_id=%d",
                    request.user_id,
                )
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
