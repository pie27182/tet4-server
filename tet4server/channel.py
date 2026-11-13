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
import os
import socket
import struct
import threading

from . import crypto, trace
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
LAYER_ALIGNMENT = 0x09D0057A
GET_DISPLAY_MEMBER_INFO_TOS = 0x0E4772BA
GET_DISPLAY_MEMBER_INFO_TOC = 0x0C3B49AA
GET_MEMBER_INFO_TOC = 0x060BC39A
AUTO_ENTER_SINGLE_MODE_TOS = 0x031AC76A
AUTO_ENTER_SINGLE_MODE_TOC = 0x0DF37B3A
GAME_SERVER_HOST = b"127.0.0.1"
GAME_SERVER_PORT = 15002
SINGLE_MODE_ROOM_INFO_TOC = 0x04B61A2A
HANDSHAKE_PLAIN = struct.pack("<24H", *range(24))

log = logging.getLogger("tet4.channel")


def layer_message(body: bytes, layer: int) -> bytes:
    """Place one populated message in the requested XLBP layer slot.

    PC_ConvertX2M dispatches four ordered layer slots (0..3). Empty slots
    before a populated slot are represented by Cmd_LayerAlignment markers.
    For example, Tetris-specific channel messages registered with
    PC_RegisterX2M(..., NLayer=3, ...) require three leading markers.
    """
    if not isinstance(body, bytes) or len(body) < 4:
        raise ValueError("layer message body must contain a 4-byte message ID")
    if not isinstance(layer, int) or not 0 <= layer <= 3:
        raise ValueError("XLBP layer must be in 0..3")
    return pack_u32(LAYER_ALIGNMENT) * layer + body


def unwrap_layer_alignment(message_stream: bytes) -> tuple[int, bytes]:
    """Skip leading empty Cmd_LayerAlignment slots in one XLBP message batch.

    HgCom3.dll PC_ConvertM2X (FUN_601204a0) inserts an empty
    Cmd_LayerAlignment (0x09D0057A) for each null IMessage slot before the
    next populated slot. PC_ConvertX2M (FUN_601206e0) consumes those markers
    and continues dispatching the next message. The live Single Mode capture
    contains three such markers before AutoEnterSingleModeToS.

    This server currently handles one populated application message per XLBP
    batch. It strips any leading alignment markers, but does not yet split
    multiple populated messages concatenated in the same batch.
    """
    reader = Reader(message_stream)
    marker_count = 0
    while reader.remaining():
        start = reader.pos
        msg_id = reader.u32()
        if msg_id != LAYER_ALIGNMENT:
            return msg_id, message_stream[start:]
        marker_count += 1
        if marker_count > 4:
            raise ProtocolError("too many LayerAlignment slots in one XLBP batch")
    # An alignment-only batch is valid and has no application command to dispatch.
    return LAYER_ALIGNMENT, message_stream[-4:] if message_stream else b""


@dataclass(frozen=True)
class DisplayMemberInfoRequest:
    member_id: bytes
    option: int


def parse_get_display_member_info_request(payload: bytes) -> DisplayMemberInfoRequest:
    """Parse the captured GetDisplayMemberInfoToS request: id | string | u32."""
    reader = Reader(payload)
    if reader.u32() != GET_DISPLAY_MEMBER_INFO_TOS:
        raise ProtocolError("not Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToS")
    member_id = reader.string()
    option = reader.u32()
    if reader.remaining():
        raise ProtocolError(
            f"unexpected {reader.remaining()} trailing GetDisplayMemberInfoToS bytes"
        )
    return DisplayMemberInfoRequest(member_id, option)


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


def get_member_info_to_c(member_key: bytes = b"k601e") -> bytes:
    """Serialize the minimal Cmd_Channel_GetMemberInfoToC profile.

    HgCom3.dll stream serializer FUN_6012dce0 and matching deserializer
    FUN_6012df00 establish this exact wire order:
      str × 4 | u32 | str | u64 | u32 × 7 | str | u32 × 2 |
      str | u64 | u32 × 2 | str × 2 | u32 | str | vector | str

    The converter FUN_601391a0 maps the first string to k3e. Msg_AddMember
    copies k3e into CMemberData's member key. Msg_GetUserId sets
    GData[k602e] to the literal "k601e"; SGlobalInfo::MyData() looks up
    that key in the member-data list. The dynamic k153e vector is empty and
    the final k1e result string is present and empty (success-shaped).

    The registered Net_GetMemberInfo -> Msg_GetMemberInfo -> Msg_AddMember
    path is statically recovered. Sending this message after EnterChannelToC
    remains experimental: timing and live acceptance still need validation.
    """
    if not isinstance(member_key, bytes) or not member_key:
        raise ValueError("member_key must be a non-empty byte string")

    return (
        pack_u32(GET_MEMBER_INFO_TOC)
        + pack_string(member_key)  # k3e
        + pack_string(b"")         # k7e
        + pack_string(b"")         # k8e
        + pack_string(b"")         # k11e
        + pack_u32(0)              # k10e
        + pack_string(b"")         # k12e
        + struct.pack(">Q", 0)     # k13e
        + b"".join(pack_u32(0) for _ in range(7))  # k14e, k26e..k31e
        + pack_string(b"")         # k32e
        + pack_u32(0)              # k33e
        + pack_u32(0)              # k131e
        + pack_string(b"")         # k102e
        + struct.pack(">Q", 0)     # k34e
        + pack_u32(0)              # k35e
        + pack_u32(0)              # k154e
        + pack_string(b"")         # k37e
        + pack_string(b"")         # k38e
        + pack_u32(0)              # k42e
        + pack_string(b"")         # k201e
        + pack_u32(0)              # empty k153e vector
        + pack_string(b"")         # k1e
    )


@dataclass(frozen=True)
class EnterChannelRequest:
    """Wire fields of Cmd_Channel_EnterChannelByUserIdToS.

    HgCom3.dll FUN_60138E50 maps the first five strings as:
      k3e, k22e, k23e, k24e, k149e
    followed by k167e (u32), k442e and k441e (strings).
    """
    user_id: int
    strings: tuple[bytes, ...]
    option: int
    trailing_strings: tuple[bytes, ...]
    trailing_u64: int

    @property
    def channel_metp_k23e(self) -> bytes:
        return self.strings[2]

    @property
    def channel_metp_k24e(self) -> bytes:
        return self.strings[3]


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

    Serialize at 0x6012e4a0 establishes the layout. The converter at
    HgCom3.dll:0x60139620 maps response string 3 (index 2) to k23e and
    response string 8 (index 7) to k24e. CChannelLobbyController::Net_Channel_EnterChannel
    calls Msg_FillChannelInfo, which copies those values into MetpInfo(4).

    The corresponding request converter HgCom3.dll:0x60138e50 maps request
    strings 3 and 4 (indices 2 and 3) to k23e and k24e. The dispatcher echoes
    those exact fields into the matching response positions; other fields retain
    constructor defaults until their semantics are recovered. The final response
    string is converted to k1e; empty is present and is not the failure value "v2e".
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
class ItemStateRequest:
    """Observed Cmd_Item_GetItemStateToS request fields."""
    member_key: bytes
    option: int


def parse_item_state_request(payload: bytes) -> ItemStateRequest:
    """Parse the captured request: u32 id | string | u8.

    The 2026-11-12 live capture contained the key "test" and option 1.
    The key is returned to the caller but should not be written verbatim to logs.
    """
    r = Reader(payload)
    if r.u32() != ITEM_STATE_TOS:
        raise ProtocolError("not Cmd_Item_GetItemStateToS")
    member_key = r.string()
    option = r.take(1)[0]
    if r.remaining():
        raise ProtocolError(f"unexpected {r.remaining()} trailing item-state request bytes")
    return ItemStateRequest(member_key, option)


def single_mode_room_info_to_c(text: bytes = b"", value: int = 0, flag: int = 0) -> bytes:
    """Serialize the statically recovered RoomInfo message; not dispatched yet.

    Tet4.exe Serialize FUN_00443D90 establishes:
        u32 id | string | u32 | u8

    The message's role and field semantics are not confirmed by a live exchange,
    so this serializer is a byte-layout primitive only. It is deliberately not sent
    automatically during AutoEnter.
    """
    if not isinstance(text, bytes):
        raise ValueError("room-info text field must be bytes")
    if not isinstance(value, int) or not 0 <= value <= 0xFFFFFFFF:
        raise ValueError("room-info value must fit in uint32")
    if not isinstance(flag, int) or not 0 <= flag <= 0xFF:
        raise ValueError("room-info flag must fit in one byte")
    return (
        pack_u32(SINGLE_MODE_ROOM_INFO_TOC)
        + pack_string(text)
        + pack_u32(value)
        + bytes([flag])
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

    The success converter rejects status string "v2e" at +0xfc. It maps the
    strings at +0xa8, +0xc4 and +0xe0 to k22e, k23e and k24e; +0xa8 is also
    passed as k42e to channel/fillEnterRoomParameter. The button request carries
    GameID, k23e and k24e at those same three offsets, so callers should echo
    those values rather than leaving them blank.
    
    The game server endpoint is read from k52e (string +0x138) and k53e (uint32
    +0x154). Other room metadata remains unverified. The response shape and its
    acceptance still require live-client validation.
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

    def __init__(self, master, service: str = "channel", peer: str = "unknown"):
        self.from_client = crypto.Stream.from_master(master, "decrypt_client")
        self.to_client = crypto.Stream.from_master(master, "encrypt_to_client")
        self.service = service
        self.peer = peer
        self.rx_sequence = 0
        self.tx_sequence = 0

    def read_frame(self, conn) -> tuple:
        head = self.from_client.decrypt(_recv_exact(conn, 4))
        size = struct.unpack(">I", head)[0]
        payload = self.from_client.decrypt(_recv_exact(conn, size))
        if payload[:4] != MAGIC:
            raise ProtocolError(f"bad magic {payload[:4]!r}")
        body = payload[4:]
        self.rx_sequence += 1
        trace.record_message(
            service=self.service,
            direction="client_to_server",
            body=body,
            peer=self.peer,
            sequence=self.rx_sequence,
        )
        return unwrap_layer_alignment(body)

    def send(self, conn, body: bytes) -> None:
        self.tx_sequence += 1
        trace.record_message(
            service=self.service,
            direction="server_to_client",
            body=body,
            peer=self.peer,
            sequence=self.tx_sequence,
        )
        conn.sendall(self.to_client.encrypt(frame(body)))


def _recv_exact(conn, n: int) -> bytes:
    buf = b""
    while len(buf) < n:
        chunk = conn.recv(n - len(buf))
        if not chunk:
            raise ProtocolError("connection closed")
        buf += chunk
    return buf


def handshake(conn, service: str = "channel") -> Session:
    share = _recv_exact(conn, 48)
    server_wire = crypto.encrypt_share(HANDSHAKE_PLAIN)
    conn.sendall(server_wire)
    try:
        host, port = conn.getpeername()[:2]
        peer = f"{host}:{port}"
    except (OSError, ValueError):
        peer = "unknown"
    return Session(
        crypto.master_words(share, server_wire),
        service=service,
        peer=peer,
    )


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
                if os.environ.get("TET4_TRACE_UNKNOWN") == "1":
                    log.warning(
                        "unhandled channel frame id=0x%08x payload_hex=%s (%s)",
                        msg_id,
                        payload.hex(),
                        exc,
                    )
                else:
                    log.warning(
                        "unhandled/malformed channel frame id=0x%08x payload_len=%d (%s); "
                        "set TET4_TRACE_UNKNOWN=1 for a raw hex dump",
                        msg_id,
                        len(payload),
                        exc,
                    )
    except (ProtocolError, OSError) as exc:
        log.info("channel closed: %s", exc)
    finally:
        conn.close()


def _dispatch(session, conn, msg_id: int, payload: bytes) -> None:
        if msg_id == LAYER_ALIGNMENT:
            log.debug("received alignment-only XLBP batch")
        elif msg_id == AUTH_TO_S:
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
            # FUN_60138E50 maps ToS strings 3/4 to k23e/k24e. The
            # ToC converter FUN_60139620 writes its response strings 3/8
            # back to those keys, then Msg_FillChannelInfo copies them into
            # MetpInfo(4) before Msg_SendEnterRoom reads them.
            response_strings = [b""] * 9
            response_strings[2] = request.channel_metp_k23e
            response_strings[7] = request.channel_metp_k24e
            session.send(conn, enter_channel_to_c(strings=tuple(response_strings)))
            # Seed the local CMemberData object before Msg_SendEnterRoom calls
            # SGlobalInfo::MyData(). This is a statically recovered push path;
            # its placement here is experimental and requires live validation.
            session.send(conn, get_member_info_to_c())
            log.info(
                "sent experimental Cmd_Channel_GetMemberInfoToC "
                "(member_key_len=%d)",
                len(b"k601e"),
            )
            log.info(
                "sent Cmd_Channel_EnterChannelToC with channel metadata "

                "(k23e_len=%d, k24e_len=%d) for user_id=%d",
                len(request.channel_metp_k23e),
                len(request.channel_metp_k24e),
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
            request = parse_item_state_request(payload)
            log.info(
                "received Cmd_Item_GetItemStateToS key_len=%d option=%d",
                len(request.member_key),
                request.option,
            )
            session.send(conn, item_state_to_c())
            log.info("sent empty Cmd_Item_GetItemStateToC (0 items)")
        elif msg_id == GET_DISPLAY_MEMBER_INFO_TOS:
            request = parse_get_display_member_info_request(payload)
            log.info(
                "received Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToS "
                "member_id=%r option=%d; response layout not yet implemented",
                request.member_id,
                request.option,
            )
        elif msg_id == AUTO_ENTER_SINGLE_MODE_TOS:
            request = parse_auto_enter_single_mode_request(payload)
            log.info(
                "received Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS "
                "strings=%r integers=%r",
                request.strings,
                request.integers,
            )
            # The button request copies GameID/k23e/k24e into strings
            # 5..7 (+0xa8/+0xc4/+0xe0). The ToC converter maps those response
            # fields to k22e/k23e/k24e and forwards k22e as k42e to
            # fillEnterRoomParameter. Preserve these identity fields in the reply.
            response_strings = [b""] * 12
            response_strings[5:8] = request.strings[5:8]
            # Tet4.exe registers AutoEnterSingleModeToC (0x0DF37B3A)
            # with PC_RegisterX2M(..., NLayer=3, ...). The captured ToS
            # arrived after three LayerAlignment markers, so its ToC must
            # occupy the same layer slot rather than defaulting to layer 0.
            response = auto_enter_single_mode_to_c(strings=tuple(response_strings))
            session.send(conn, layer_message(response, 3))
            log.info(
                "sent Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToC "
                "game_id=%r endpoint=%s:%d",
                request.strings[5],
                GAME_SERVER_HOST.decode("ascii"),
                GAME_SERVER_PORT,
            )
        else:
            log.warning(
                "unhandled channel application message id=0x%08x payload_len=%d",
                msg_id,
                len(payload),
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
