"""XLBP message IDs and the layouts the server reads and writes.

Member names are the client's own class names from MSVC RTTI (HgCom3.dll and
Tet4.exe) without the `Cmd_` prefix. Layouts follow each class's Serialize /
Deserialize pair and keys its Converter; docs/PROTOCOL.md gives the evidence for
every message. A body always starts with its u32 message ID.
"""
import enum
from dataclasses import dataclass
from typing import NamedTuple

from .xdr import Reader, i32, i64, string, u8, u16, u32, u64


class Msg(enum.IntEnum):
    LayerAlignment = 0x09D0057A

    # Channel socket, client to server
    AuthToS = 0x0365C03A
    Channel_GetUserIdByMemberIdToS = 0x0FAB330A
    Channel_EnterChannelByUserIdToS = 0x0696068A
    Channel_GetMemberListToS = 0x0AE3BBDA
    Channel_GetRoomListToS = 0x0DDA299A
    Item_GetItemStateToS = 0x075BAC2A
    Channel_CreateRoomToS = 0x0CA9895A
    Channel_TicketReissueToS = 0x0A101CBA
    Shop_GetInventoryInfoToS = 0x04762CEA
    Channel_OrderTypeGetDisplayMemberInfoTetrisToS = 0x0E4772BA
    Room_OrderTypeAutoEnterSingleModeRoomTetrisToS = 0x031AC76A

    # Channel socket, server to client
    AuthToC = 0x008500CA
    Channel_GetUserIdToC = 0x0A80E29A
    Channel_EnterChannelToC = 0x00C0FC8A
    Channel_GetMemberInfoToC = 0x060BC39A
    Channel_GetMemberListToC = 0x06B816EA
    Channel_GetRoomListToC = 0x0226968A
    Item_GetItemStateToC = 0x0C446ADA
    Channel_CreateRoomToC = 0x0A80143A
    Channel_RoomInfoToC = 0x0A680DDA
    Room_OrderTypeAutoEnterSingleModeRoomTetrisToC = 0x0DF37B3A

    # Game socket, client to server
    Room_EnterRoomToS = 0x09A5347A
    Room_AlterRoomToS = 0x0D31FDDA
    Room_StartNewGameToS = 0x072585BA
    Room_OrderTypeSingleModePolyMinoPutTetrisToS = 0x0CC4004A  # every piece; no reply
    Room_OrderTypeSingleModeGameReportTetrisToS = 0x05BCDF3A
    Room_GameReportToS = 0x0B81FF1A                             # after the Tetris report; no reply
    Room_ExitRoomToS = 0x0510821A
    Room_OrderTypeSetSpeedLevelTetris = 0x0F5DE7AA              # on leaving; no reply

    # Game socket, server to client
    Room_EnterRoomToC = 0x0974DCEA
    Room_AddMemberToC = 0x0619233A
    Room_StartNewGameToC = 0x0F809B5A
    Room_OrderTypeSingleModeGameReportTetrisToC = 0x0EE1D56A
    Room_DeleteMemberToC = 0x0E50895A


def describe(msg_id: int) -> str:
    try:
        return "Cmd_" + Msg(msg_id).name
    except ValueError:
        return f"0x{msg_id:08X}"


class Endpoint(NamedTuple):
    host: str
    port: int


# --- Requests ---------------------------------------------------------------
# Each reader starts after the message ID and takes only the fields the server
# uses; the rest of the message is ignored.

@dataclass(frozen=True)
class EnterChannel:
    member_id: bytes
    k23e: bytes
    k24e: bytes


def read_auth(r: Reader) -> tuple[bytes, bytes]:
    """AuthToS: u32 id | i64 | str account | i64 | str | str game | str ticket (the
    bootstrap's k300e) | str method. Returns the account and the ticket."""
    r.u64()
    account = r.string()
    r.u64(), r.string(), r.string()
    return account, r.string()


def read_enter_channel(r: Reader) -> EnterChannel:
    """Channel_EnterChannelByUserIdToS (converter 0x60138E50):
    u64 k601e | str k3e | str k22e | str k23e | str k24e | str k149e | u32 k167e |
    str k442e | str k441e | u64."""
    r.u64()
    member_id = r.string()
    r.string()
    return EnterChannel(member_id, k23e=r.string(), k24e=r.string())


@dataclass(frozen=True)
class RoomRequest:
    """The room fields of AutoEnterSingleModeRoomTetrisToS (Serialize 0x004A18F0)
    and Channel_CreateRoomToS, in wire order."""
    member_id: bytes  # GData["k602e"], which Msg_GetUserId set to the member id
    k42e: int
    k67e: bytes
    k45e: bytes
    k46e: bytes       # room option: mode letter and flags, b"N000S" for Single Mode
    k127e: int
    k66e: int         # room number, 0 when no room is chosen
    k200e: bytes
    k69e: int
    k22e: bytes       # GameID, b"TET4"
    k23e: bytes
    k24e: bytes


def read_room_request(r: Reader) -> RoomRequest:
    return RoomRequest(
        member_id=r.string(), k42e=r.u32(), k67e=r.string(), k45e=r.string(),
        k46e=r.string(), k127e=r.u32(), k66e=r.u32(), k200e=r.string(), k69e=r.u32(),
        k22e=r.string(), k23e=r.string(), k24e=r.string(),
    )


@dataclass(frozen=True)
class GameReport:
    member_id: bytes
    mode: int        # 0 Marathon, 1 40 lines, 2 Ultra
    value: int       # score; in 40 lines the time in 1/100 s
    completed: bool  # 40 lines: all lines cleared; always set in the other modes


def read_game_report(r: Reader) -> GameReport:
    """Room_OrderTypeSingleModeGameReportTetrisToS (built by 0x00461770): str member |
    str k23e | str k24e | str k42e | u32 mode | u32 value | u8 completed | u32 x3."""
    member_id = r.string()
    r.string(), r.string(), r.string()
    return GameReport(member_id, mode=r.u32(), value=r.u32(), completed=bool(r.u8()))


def read_enter_room(r: Reader) -> bytes:
    """Room_EnterRoomToS (Deserialize 0x6012AEC0): u32 | str | str | u32 | u32 |
    str k46e | str | str | str | u32 | str k3e | str | u32 | u32. Returns the
    member id (k3e), whose position is known from captures."""
    for skip in (r.u32, r.string, r.string, r.u32, r.u32,
                 r.string, r.string, r.string, r.string, r.u32):
        skip()
    return r.string()


# --- Channel replies ---------------------------------------------------------

def auth_to_c(result: int = 0) -> bytes:
    """AuthToC (Serialize 0x601356E0): u32 id | _KeyType (i64 | str | i64 | str | str)
    | str | str | i32 k161e. k161e = 0 is success (converter 0x6013F8B0); any other
    value stops the client at a notice dialog."""
    return b"".join([
        u32(Msg.AuthToC),
        i64(0), string(b""), i64(0), string(b""), string(b""),
        string(b""), string(b""), i32(result),
    ])


def get_user_id_to_c(member_id: bytes) -> bytes:
    """Channel_GetUserIdToC (Serialize 0x60135DA0, converter 0x6013F9B0):
    u32 id | i64 | str k3e | str k2e | i32 k161e."""
    return b"".join([
        u32(Msg.Channel_GetUserIdToC), i64(0), string(member_id), string(b""), i32(0),
    ])


def get_member_info_to_c(member_id: bytes) -> bytes:
    """Channel_GetMemberInfoToC (Serialize 0x6012DCE0, converter 0x601391A0):
    str k3e | str x3 | u32 | str | u64 | u32 x7 | str | u32 x2 | str | u64 | u32 x2 |
    str x2 | u32 | str | vector k153e | str k1e. Msg_AddMember creates the client's own
    CMemberData from k3e; everything else stays empty."""
    return b"".join([
        u32(Msg.Channel_GetMemberInfoToC),
        string(member_id), string(b""), string(b""), string(b""),
        u32(0), string(b""), u64(0),
        *(u32(0) for _ in range(7)),
        string(b""), u32(0), u32(0),
        string(b""), u64(0), u32(0), u32(0),
        string(b""), string(b""), u32(0), string(b""),
        u32(0),
        string(b""),
    ])


SINGLE_MODES = 3      # Marathon, 40 lines, Ultra: _SingleModeInfo mode 0, 1, 2
FORTY_LINES = 1       # the mode whose value is a time (1/100 s), lower is better
TOP = 5               # records the client shows and keeps per mode


class SingleMode(NamedTuple):
    """A player's standing in one Single Mode mode."""
    top: list[tuple[int, bytes]]  # best first: (score or time, date)
    plays: int = 0                # games played in the mode
    rank: int = 0                 # place of the player's best among all players; 0 without one
    ranked: int = 0               # players with a record in the mode


def single_mode_info(mode: int, standing: SingleMode, result: int = 0) -> bytes:
    """A nested _SingleModeInfo (Deserialize 0x004596D0): u32 mode | u32 | u32 rank |
    u32 ranked | vector<u32> values | vector<str> dates | u32 result | u32 plays.
    The result screen (0x0045CB30) shows `result`, the rank and rank/ranked as a
    percentage; FUN_00460230 adds `plays` of every mode to the multiplayer games and
    opens Ultra at 500. The client shows TOP records and compares a finished game with
    the first, so there are always TOP; a value of 0 is an empty slot."""
    top = (list(standing.top) + [(0, b"")] * TOP)[:TOP]
    return b"".join([u32(mode), u32(0), u32(standing.rank), u32(standing.ranked),
                     u32(TOP), *(u32(v) for v, _ in top), u32(TOP), *(string(d) for _, d in top),
                     u32(result), u32(standing.plays)])


def get_member_list_to_c() -> bytes:
    """Channel_GetMemberListToC (Serialize 0x601301D0): u32 id | str x3 |
    vector<member> | str. Sent empty."""
    return b"".join([
        u32(Msg.Channel_GetMemberListToC),
        string(b""), string(b""), string(b""), u32(0), string(b""),
    ])


def get_item_state_to_c() -> bytes:
    """Item_GetItemStateToC (Serialize 0x60130CF0): u32 id | u8 | str | vector<item>.
    Sent empty."""
    return b"".join([u32(Msg.Item_GetItemStateToC), u8(0), string(b""), u32(0)])


def auto_enter_single_mode_to_c(request: RoomRequest, game: Endpoint) -> bytes:
    """Room_OrderTypeAutoEnterSingleModeRoomTetrisToC (Deserialize 0x00443080,
    converter 0x00445F60): the request's room fields, then str status ("v2e" is
    failure) | u32 | str | str k52e | u32 k53e | str k82e, k52e/k53e being the game
    endpoint. The room option k46e must be echoed: CF5GameWnd::DoExActive switches
    on it."""
    f = request
    return b"".join([
        u32(Msg.Room_OrderTypeAutoEnterSingleModeRoomTetrisToC),
        string(b""), u32(f.k42e), string(f.k67e), string(f.k45e), string(f.k46e),
        u32(f.k127e), u32(f.k66e), string(f.k200e), u32(f.k69e),
        string(f.k22e), string(f.k23e), string(f.k24e),
        string(b""), u32(0), string(b""),
        string(game.host.encode("ascii")), u32(game.port), string(b""),
    ])


# --- Game replies -------------------------------------------------------------

def enter_room_to_c() -> bytes:
    """Room_EnterRoomToC (converter 0x6013C940): u32 id | str k1e | u32 failcode |
    str k2e. failcode 0 is success."""
    return b"".join([u32(Msg.Room_EnterRoomToC), string(b""), u32(0), string(b"")])


def single_mode_game_report_to_c(report: GameReport, standing: SingleMode) -> bytes:
    """Room_OrderTypeSingleModeGameReportTetrisToC, layer 3 (Deserialize 0x00443BB0,
    converter 0x00450940): u32 id | str | str | u32 result | _TetrisMemberGameReport |
    _SingleModeInfo. With result 0 the client takes the _SingleModeInfo as the mode's
    standing and shows it on the result screen; the _TetrisMemberGameReport is unused."""
    member_report = b"".join([                             # _TetrisMemberGameReport
        string(report.member_id), bytes(20), bytes(5), bytes(48), bytes(1),  # u32 x5 | u8 x5 | 12 x4 | u8
        u8(0) + string(b"") + u32(0) + u16(0),             # _TetrisSchoolInfo
        bytes(16),
    ])
    result = report.value if report.completed else 0
    return b"".join([u32(Msg.Room_OrderTypeSingleModeGameReportTetrisToC),
                     string(report.member_id), string(b""), u32(0), member_report,
                     single_mode_info(report.mode, standing, result)])


def start_new_game_to_c(member_ids) -> bytes:
    """Room_StartNewGameToC, HgCom3's layer-0 form (converter 0x60147870):
    u32 id | vector<str member | u8 | u8 | u8>, keys k3e<i>, k118e<i>, k119e<i>."""
    member_ids = list(member_ids)
    return b"".join([
        u32(Msg.Room_StartNewGameToC), u32(len(member_ids)),
        *(string(m) + bytes(3) for m in member_ids),
    ])
