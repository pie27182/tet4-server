"""Minimal Single Mode game-socket endpoint.

The channel's AutoEnter reply directs the original client to this local listener.
The secure-socket handshake is shared with the channel connection. Recovered
client requests are decoded and captured. A minimal success-shaped
Cmd_Room_EnterRoomToC probe is sent. An experimental layer-3 AddMemberToC
bootstrap can be enabled for live testing; it remains off by default.
"""
import logging
import os
import socket
import struct
import threading
import uuid
from dataclasses import dataclass
from pathlib import Path

from . import channel, single_mode
from .xdr import ProtocolError, Reader, pack_string, pack_u32

log = logging.getLogger("tet4.game")

GAME_REPORT_TOS = 0x05BCDF3A
POLY_MINO_PUT_TOS = 0x0CC4004A
GAME_ENTER_ROOM_TOS = 0x09A5347A
GAME_ALTER_ROOM_TOS = 0x0D31FDDA
GAME_ENTER_ROOM_TOC = 0x0974DCEA
GAME_START_NEW_GAME_TOC = 0x0F809B5A


@dataclass(frozen=True)
class GameReportRequest:
    strings: tuple[bytes, bytes, bytes, bytes]
    counters: tuple[int, int, int, int, int]
    flag: int


@dataclass(frozen=True)
class PolyMinoPutRequest:
    values: tuple[int, int, int, int]


def enter_room_to_c(
    k1e: bytes = b"",
    failcode: int = 0,
    k2e: bytes = b"",
) -> bytes:
    """Serialize Cmd_Room_EnterRoomToC: id | k1e | failcode | k2e.

    Converter HgCom3.dll:0x6013C940 applies the header ("s4e", "c14e", 1),
    then writes AddValue("k1e", string), AddValue("failcode", u32) and
    AddValue("k2e", string). The constructor at 0x60133280 sets the message id
    to 0x0974DCEA. Empty strings and failcode 0 are a success-shaped probe,
    not a verified room state.
    """
    if not isinstance(k1e, bytes) or not isinstance(k2e, bytes):
        raise ValueError("k1e and k2e must be bytes")
    if not 0 <= failcode <= 0xFFFFFFFF:
        raise ValueError("failcode must fit in u32")
    return (
        pack_u32(GAME_ENTER_ROOM_TOC)
        + pack_string(k1e)
        + struct.pack(">I", failcode)
        + pack_string(k2e)
    )


def early_add_member_to_c(member_id: bytes) -> bytes | None:
    """Build the diagnostic AddMemberToC that precedes EnterRoomToC.

    ``TET4_EARLY_ADD_MEMBER_ID`` names the local player expected in
    EnterRoomToS. The early send is refused when the configured ID does not
    match, so this probe cannot add a different member than the room's local
    player. The caller must suppress the normal post-EnterRoom AddMemberToC
    whenever the early mode is active.

    ``TET4_EARLY_ADD_MEMBER_BASE=1`` selects the diagnostic two-layer batch:
    a layer-0 Cmd_Room_AddMemberToC base body followed by the accepted layer-3
    87-byte extension. The default remains the layer-3-only body.
    """
    configured = os.environ.get("TET4_EARLY_ADD_MEMBER_ID")
    if not configured:
        return None
    configured_id = configured.encode("utf-8")
    if configured_id != member_id:
        log.warning(
            "skipped early AddMemberToC: TET4_EARLY_ADD_MEMBER_ID does not match "
            "the EnterRoomToS local member (configured_len=%d local_len=%d)",
            len(configured_id),
            len(member_id),
        )
        return None
    if os.environ.get("TET4_EARLY_ADD_MEMBER_BASE") == "1":
        return single_mode.layered_add_member_pair_candidate(member_id)
    return single_mode.layered_add_member_to_c_candidate(member_id)


@dataclass(frozen=True)
class EnterRoomRequest:
    """Opaque EnterRoomToS fields, retained in their exact wire order."""

    first_value: int
    first_strings: tuple[bytes, bytes]
    middle_values: tuple[int, int]
    middle_strings: tuple[bytes, bytes, bytes, bytes]
    next_value: int
    final_strings: tuple[bytes, bytes]
    final_values: tuple[int, int]


def start_new_game_svckor_to_c(member_id: bytes) -> bytes:
    """Serialize the Korean-service StartNewGame vector payload.

    Cmd_Room_StartNewGameSvcKorToC (HgCom3.dll:0x60145C20) carries a vector of
    _MemberInfoStartNewGame entries (deserializer 0x60141EC0):

        u32  message id (0xF809B5A on the game session)
        u32  count
        for each entry:
            str  +0x08 (member id)
            u8   +0x24
            u8   +0x25
            u8   +0x26

    The HgCom3 converter FUN_60147870 turns each entry into k3e<i>,
    k118e<i> and k119e<i> keys, which the game lobby model consumes when it
    starts the Single Mode game.
    """
    if not isinstance(member_id, bytes) or not member_id:
        raise ValueError("member_id must be a non-empty byte string")
    return (
        pack_u32(GAME_START_NEW_GAME_TOC)
        + pack_u32(1)
        + pack_string(member_id)
        + bytes((0, 0, 0))
    )


def start_new_game_to_c(
    member_id: bytes,
    room_option: bytes,
    index: int = 0,
    message_id: int = GAME_START_NEW_GAME_TOC,
) -> bytes:
    """Serialize Cmd_Room_StartNewGameToC (0x0F809B5A).

    Tet4.exe registers this id with converter FUN_00459BD0, which constructs
    Cmd_Room_OrderTypeStartNewGameTetrisToC and reads a vector of _AliasInfo
    entries (class constructor FUN_0044A020, deserializer FUN_0044A8D0):

        u32  message id
        u32  count
        for each entry:
            str  +0x0c (member id)
            str  +0x28 (room option / mode string)
            u32  +0x44

    The converter looks up entry +0x0c in the room's member table and reads
    bytes 0, 1 and 3 of the +0x28 string as mode flags. The client's own
    EnterRoomToS carries exactly these values at middle_strings[0] ("N000S")
    and final_strings[0] ("test"), so the server can echo them back when it
    starts the Single Mode game.
    """
    if not isinstance(member_id, bytes) or not member_id:
        raise ValueError("member_id must be a non-empty byte string")
    if not isinstance(room_option, bytes) or not room_option:
        raise ValueError("room_option must be a non-empty byte string")
    if not isinstance(index, int) or not 0 <= index <= 0xFFFFFFFF:
        raise ValueError("index must fit in uint32")
    return (
        pack_u32(message_id)
        + pack_u32(1)                 # one _AliasInfo entry
        + pack_string(member_id)      # +0x0c
        + pack_string(room_option)    # +0x28 ("N000S")
        + pack_u32(index)             # +0x44
    )


@dataclass(frozen=True)
class AlterRoomRequest:
    """Opaque AlterRoomToS fields; meaning of individual fields is not yet known."""

    value: int
    strings: tuple[bytes, bytes, bytes, bytes]




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


def parse_enter_room_request(payload: bytes) -> EnterRoomRequest:
    """Parse the recovered Cmd_Room_EnterRoomToS stream layout.

    HgCom3.dll FUN_6012aec0 reads:
      id | u32 | str | str | u32 | u32 | str x4 | u32 | str | str | u32 | u32
    Field names remain positional because their semantics are not yet established.
    """
    r = Reader(payload)
    if r.u32() != GAME_ENTER_ROOM_TOS:
        raise ProtocolError("not Cmd_Room_EnterRoomToS")
    first_value = r.u32()
    first_strings = (r.string(), r.string())
    middle_values = (r.u32(), r.u32())
    middle_strings = tuple(r.string() for _ in range(4))
    next_value = r.u32()
    final_strings = (r.string(), r.string())
    final_values = (r.u32(), r.u32())
    if r.remaining():
        raise ProtocolError(
            f"unexpected {r.remaining()} trailing EnterRoomToS bytes"
        )
    return EnterRoomRequest(
        first_value,
        first_strings,
        middle_values,
        middle_strings,  # type: ignore[arg-type]
        next_value,
        final_strings,
        final_values,
    )


def parse_alter_room_request(payload: bytes) -> AlterRoomRequest:
    """Parse Cmd_Room_AlterRoomToS: id | u32 | string x4."""
    r = Reader(payload)
    if r.u32() != GAME_ALTER_ROOM_TOS:
        raise ProtocolError("not Cmd_Room_AlterRoomToS")
    value = r.u32()
    strings = tuple(r.string() for _ in range(4))
    if r.remaining():
        raise ProtocolError(
            f"unexpected {r.remaining()} trailing AlterRoomToS bytes"
        )
    return AlterRoomRequest(value, strings)  # type: ignore[arg-type]


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
        session = channel.handshake(conn, service="game")
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
            elif msg_id == GAME_ENTER_ROOM_TOS:
                request = parse_enter_room_request(payload)
                string_lengths = tuple(
                    len(value)
                    for value in (
                        *request.first_strings,
                        *request.middle_strings,
                        *request.final_strings,
                    )
                )
                log.info(
                    "game EnterRoomToS connection=%s seq=%d "
                    "integer_fields=%r string_lengths=%r captured=%s",
                    connection_id,
                    sequence,
                    (
                        request.first_value,
                        *request.middle_values,
                        request.next_value,
                        *request.final_values,
                    ),
                    string_lengths,
                    saved is not None,
                )
                member_id = request.final_strings[0]
                room_option = request.middle_strings[0]
                early_mode = bool(os.environ.get("TET4_EARLY_ADD_MEMBER_ID"))
                if early_mode:
                    early_body = early_add_member_to_c(member_id)
                    if early_body is not None:
                        session.send(conn, early_body)
                        log.warning(
                            "sent early AddMemberToC before Cmd_Room_EnterRoomToC "
                            "connection=%s member_id_len=%d layer=%d base_pair=%s",
                            connection_id,
                            len(member_id),
                            single_mode.ADD_MEMBER_LAYER,
                            os.environ.get("TET4_EARLY_ADD_MEMBER_BASE") == "1",
                        )
                session.send(conn, enter_room_to_c())
                log.info(
                    "sent Cmd_Room_EnterRoomToC connection=%s "
                    "failcode=0 k1e_len=0 k2e_len=0",
                    connection_id,
                )
                if member_id and room_option:
                    def send_add_member() -> None:
                        # This layer-3 wire layout was accepted by the live client:
                        # message ID | member-id string | opaque 87-byte suffix.
                        # Keep it opt-in while the profile fields are unresolved.
                        if early_mode:
                            log.warning(
                                "skipped post-EnterRoom AddMemberToC connection=%s "
                                "(TET4_EARLY_ADD_MEMBER_ID is active)",
                                connection_id,
                            )
                            return
                        if os.environ.get("TET4_EXPERIMENTAL_ADD_MEMBER_BOOTSTRAP") == "1":
                            bootstrap = single_mode.layered_add_member_to_c_candidate(member_id)
                            session.send(conn, bootstrap)
                            log.warning(
                                "sent experimental live-probed AddMemberToC "
                                "connection=%s member_id_len=%d layer=%d",
                                connection_id,
                                len(member_id),
                                single_mode.ADD_MEMBER_LAYER,
                            )

                    def send_svckor() -> None:
                        if os.environ.get("TET4_SKIP_SVCKOR") == "1":
                            log.warning(
                                "skipped Cmd_Room_StartNewGameSvcKorToC connection=%s "
                                "(TET4_SKIP_SVCKOR=1)",
                                connection_id,
                            )
                            return
                        session.send(conn, start_new_game_svckor_to_c(member_id))
                        log.info(
                            "sent Cmd_Room_StartNewGameSvcKorToC connection=%s "
                            "member_id_len=%d option_len=%d entries=1",
                            connection_id,
                            len(member_id),
                            len(room_option),
                        )

                    # Default order stays AddMember -> SvcKor. Reverse it only
                    # for the live ordering probe; both options remain opt-in.
                    if os.environ.get("TET4_SVCKOR_BEFORE_ADD_MEMBER") == "1":
                        send_svckor()
                        send_add_member()
                    else:
                        send_add_member()
                        send_svckor()
            elif msg_id == GAME_ALTER_ROOM_TOS:
                request = parse_alter_room_request(payload)
                log.info(
                    "game AlterRoomToS connection=%s seq=%d "
                    "value=%d string_lengths=%r captured=%s",
                    connection_id,
                    sequence,
                    request.value,
                    tuple(map(len, request.strings)),
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
