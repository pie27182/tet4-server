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
from dataclasses import dataclass
import logging
import socket
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
GET_MEMBER_LIST_TOS = 0x0AE3BBDA
GET_MEMBER_LIST_TOC = 0x06B816EA
ITEM_STATE_TOS = 0x075BAC2A
ITEM_STATE_TOC = 0x0C446ADA
GET_ROOM_LIST_TOS = 0x0DDA299A
GET_ROOM_LIST_TOC = 0x0226968A
AUTO_ENTER_SINGLE_MODE_TOS = 0x031AC76A
AUTO_ENTER_SINGLE_MODE_TOC = 0x0DF37B3A
GAME_SERVER_HOST = b"127.0.0.1"
GAME_SERVER_PORT = 15002
SINGLE_MODE_ROOM_INFO_TOC = 0x04B61A2A
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
    The live client advanced to LayerAlignment and then requested the member list
    after this reply. Metadata correctness and a stable lobby are still unverified.
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



@dataclass(frozen=True)
class StringListRequest:
    """Three-string request used by GetMemberListToS and GetRoomListToS."""
    strings: tuple[bytes, bytes, bytes]
    option: int | None = None


def parse_get_member_list_request(payload: bytes) -> StringListRequest:
    """Parse Cmd_Channel_GetMemberListToS: u32 id | string × 3."""
    r = Reader(payload)
    if r.u32() != GET_MEMBER_LIST_TOS:
        raise ProtocolError("not Cmd_Channel_GetMemberListToS")
    strings = tuple(r.string() for _ in range(3))
    if r.remaining():
        raise ProtocolError(f"unexpected {r.remaining()} trailing member-list request bytes")
    return StringListRequest(strings)  # type: ignore[arg-type]


def parse_get_room_list_request(payload: bytes) -> StringListRequest:
    """Parse Cmd_Channel_GetRoomListToS: u32 id | string × 3 [| u8].

    The wire capture shows `id | "TET4" | "" | ""` with no trailing integer.
    Serialize FUN_60129450 writes one byte after the strings, so a single
    trailing byte is accepted and kept as `option`; longer tails are rejected.
    """
    r = Reader(payload)
    if r.u32() != GET_ROOM_LIST_TOS:
        raise ProtocolError("not Cmd_Channel_GetRoomListToS")
    strings = tuple(r.string() for _ in range(3))
    option = 0
    if r.remaining() == 1:
        option = r.take(1)[0]
    elif r.remaining():
        raise ProtocolError(f"unexpected {r.remaining()} trailing room-list request bytes")
    return StringListRequest(strings, option)  # type: ignore[arg-type]


def get_member_list_to_c(
    strings: tuple[bytes, bytes, bytes] = (b"", b"", b""),
    final: bytes = b"",
) -> bytes:
    """Serialize an empty Cmd_Channel_GetMemberListToC response.

    HgCom3.dll Serialize FUN_601301D0: string × 3 | vector | string.
    The vector is encoded as a uint32 count followed by entries. This probe
    intentionally returns zero members; member-record serialization remains
    unimplemented until actual member data is available.
    """
    if len(strings) != 3 or any(not isinstance(v, bytes) for v in strings):
        raise ValueError("GetMemberListToC requires exactly three byte-string fields")
    if not isinstance(final, bytes):
        raise ValueError("GetMemberListToC final field must be bytes")
    return (
        pack_u32(GET_MEMBER_LIST_TOC)
        + b"".join(pack_string(v) for v in strings)
        + pack_u32(0)
        + pack_string(final)
    )


def get_room_list_to_c(
    strings: tuple[bytes, bytes, bytes] = (b"", b"", b""),
    option: int = 0,
    final: bytes = b"",
) -> bytes:
    """Serialize an empty Cmd_Channel_GetRoomListToC response.

    HgCom3.dll Serialize FUN_60130630: string × 3 | uint32 | string | vector.
    The vector count is zero; room-record serialization is intentionally not
    guessed before a real room is observed.
    """
    if len(strings) != 3 or any(not isinstance(v, bytes) for v in strings):
        raise ValueError("GetRoomListToC requires exactly three byte-string fields")
    if not isinstance(option, int) or not 0 <= option <= 0xFFFFFFFF:
        raise ValueError("GetRoomListToC option must fit in uint32")
    if not isinstance(final, bytes):
        raise ValueError("GetRoomListToC final field must be bytes")
    return (
        pack_u32(GET_ROOM_LIST_TOC)
        + b"".join(pack_string(v) for v in strings)
        + pack_u32(option)
        + pack_string(final)
        + pack_u32(0)
    )



@dataclass(frozen=True)
class AutoEnterSingleModeRequest:
    """Wire fields of Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS."""
    strings: tuple[bytes, ...]  # 8 strings, in Serialize order
    integers: tuple[int, ...]   # 4 uint32 values, interleaved with strings


def parse_auto_enter_single_mode_request(payload: bytes) -> AutoEnterSingleModeRequest:
    """Parse AutoEnterSingleModeRoomTetrisToS from the client.

    Tet4.exe Serialize FUN_004A18F0:
      string(+0x0c), u32(+0x28), string(+0x2c), string(+0x48),
      string(+0x64), u32(+0x80), u32(+0x84), string(+0x88),
      u32(+0xa4), string(+0xa8), string(+0xc4), string(+0xe0).
    """
    r = Reader(payload)
    if r.u32() != AUTO_ENTER_SINGLE_MODE_TOS:
        raise ProtocolError("not Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS")
    strings = []
    integers = []
    strings.append(r.string())
    integers.append(r.u32())
    strings.append(r.string())
    strings.append(r.string())
    strings.append(r.string())
    integers.extend((r.u32(), r.u32()))
    strings.append(r.string())
    integers.append(r.u32())
    strings.extend((r.string(), r.string(), r.string()))
    if r.remaining():
        raise ProtocolError(f"unexpected {r.remaining()} trailing AutoEnterSingleMode bytes")
    return AutoEnterSingleModeRequest(tuple(strings), tuple(integers))


def auto_enter_single_mode_to_c(
    game_host: bytes = GAME_SERVER_HOST,
    game_port: int = GAME_SERVER_PORT,
    strings: tuple[bytes, ...] | None = None,
    integers: tuple[int, ...] | None = None,
) -> bytes:
    """Serialize the AutoEnter ToC response and direct the client to our local game socket.

    Tet4.exe Serialize FUN_00442E90 / Deserialize FUN_00443080:
      str, u32, str, str, str, u32, u32, str, u32,
      str, str, str, str, u32, str, str, u32, str.

    The success converter rejects status string "v2e" at +0xfc. The game server
    endpoint is read from k52e (string +0x138) and k53e (uint32 +0x154).
    Remaining constructor-default fields are empty/zero until the client confirms
    which room metadata is mandatory. This is a controlled local probe, not yet a
    verified successful room transition.
    """
    if not isinstance(game_host, bytes) or not game_host:
        raise ValueError("game_host must be a non-empty byte string")
    if not isinstance(game_port, int) or not 1 <= game_port <= 0xFFFFFFFF:
        raise ValueError("game_port must be in 1..0xffffffff")
    values = list((b"",) * 12 if strings is None else strings)
    numbers = list((0,) * 6 if integers is None else integers)
    if len(values) != 12 or any(not isinstance(v, bytes) for v in values):
        raise ValueError("AutoEnterToC requires exactly twelve byte-string fields")
    if len(numbers) != 6 or any(
        not isinstance(v, int) or not 0 <= v <= 0xFFFFFFFF for v in numbers
    ):
        raise ValueError("AutoEnterToC requires exactly six uint32 fields")

    # +0xfc is the result string; anything except "v2e" follows success.
    values[8] = b""
    # +0x138 / +0x154 are the game server host / port.
    values[10] = game_host
    numbers[5] = game_port
    return (
        pack_u32(AUTO_ENTER_SINGLE_MODE_TOC)
        + pack_string(values[0])
        + pack_u32(numbers[0])
        + pack_string(values[1])
        + pack_string(values[2])
        + pack_string(values[3])
        + pack_u32(numbers[1])
        + pack_u32(numbers[2])
        + pack_string(values[4])
        + pack_u32(numbers[3])
        + pack_string(values[5])
        + pack_string(values[6])
        + pack_string(values[7])
        + pack_string(values[8])
        + pack_u32(numbers[4])
        + pack_string(values[9])
        + pack_string(values[10])
        + pack_u32(numbers[5])
        + pack_string(values[11])
    )


def item_state_to_c(flag: int = 0, text: bytes = b"") -> bytes:
    """Serialize an empty Cmd_Item_GetItemStateToC response.

    HgCom3.dll Serialize FUN_60130CF0 (vtable slot 5 of the class whose
    constructor is FUN_60130A90): uint32 id | u8 flag | string | vector.
    The vector is a uint32 count followed by records; this probe returns zero
    records until the item record layout is recovered.
    """
    if not isinstance(flag, int) or not 0 <= flag <= 0xFF:
        raise ValueError("item-state flag must fit in one byte")
    if not isinstance(text, bytes):
        raise ValueError("item-state text field must be bytes")
    return pack_u32(ITEM_STATE_TOC) + bytes([flag]) + pack_string(text) + pack_u32(0)


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


def handle(conn, discovery_only: bool = False) -> None:
    try:
        session = handshake(conn)
        if discovery_only:
            # Reproduce the old channel-directory refresh path: complete only the
            # 48-byte secure handshake, deliberately send no XLBP application reply,
            # and keep the socket open until the client abandons it.
            log.info(
                "channel discovery-only: handshake sent; no application replies"
            )
            ignored = 0
            while True:
                chunk = conn.recv(4096)
                if not chunk:
                    break
                ignored += len(chunk)
            log.info(
                "channel discovery-only: client closed; ignored %d post-handshake bytes",
                ignored,
            )
            return

        while True:
            msg_id, payload = session.read_frame(conn)
            log.info("channel frame id=0x%08x", msg_id)
            try:
                _dispatch(session, conn, msg_id, payload)
            except ProtocolError as exc:
                # One malformed request must not take the whole channel down.
                log.warning(
                    "unhandled channel frame id=0x%08x payload_hex=%s (%s)",
                    msg_id,
                    payload.hex(),
                    exc,
                )
    except (ProtocolError, OSError) as exc:
        log.info("channel closed: %s", exc)
    finally:
        conn.close()


def _dispatch(session, conn, msg_id: int, payload: bytes) -> None:
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
        elif msg_id == GET_MEMBER_LIST_TOS:
            request = parse_get_member_list_request(payload)
            session.send(conn, get_member_list_to_c())
            log.info(
                "sent empty Cmd_Channel_GetMemberListToC "
                "for keys=%r (0 members)",
                request.strings,
            )
        elif msg_id == GET_ROOM_LIST_TOS:
            request = parse_get_room_list_request(payload)
            session.send(conn, get_room_list_to_c())
            log.info(
                "sent empty Cmd_Channel_GetRoomListToC "
                "for keys=%r option=%d (0 rooms)",
                request.strings,
                request.option,
            )
        elif msg_id == ITEM_STATE_TOS:
            log.info("received Cmd_Item_GetItemStateToS payload_hex=%s", payload.hex())
            session.send(conn, item_state_to_c())
            log.info("sent empty Cmd_Item_GetItemStateToC")
        elif msg_id == AUTO_ENTER_SINGLE_MODE_TOS:
            request = parse_auto_enter_single_mode_request(payload)
            log.info(
                "received Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS "
                "strings=%r integers=%r",
                request.strings,
                request.integers,
            )
            session.send(conn, auto_enter_single_mode_to_c())
            log.info(
                "sent Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToC "
                "with local game endpoint %s:%d",
                GAME_SERVER_HOST.decode("ascii"),
                GAME_SERVER_PORT,
            )


def serve(host: str, port: int, discovery_only: bool = False) -> None:
    """Serve channel connections; discovery_only reproduces the old CDS refresh path."""
    srv = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    srv.bind((host, port))
    srv.listen(16)
    mode = "discovery-only" if discovery_only else "full"
    log.info("channel listening on %s:%d (mode=%s)", host, port, mode)
    while True:
        conn, _ = srv.accept()
        threading.Thread(
        target=handle, args=(conn, discovery_only), daemon=True
        ).start()
