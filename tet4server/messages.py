"""XLBP message IDs and the layouts the server reads and writes.

Member names are the client's own class names from MSVC RTTI (HgCom3.dll and
Tet4.exe) without the `Cmd_` prefix. Layouts follow each class's Serialize /
Deserialize pair and keys its Converter; docs/PROTOCOL.md gives the evidence for
every message. A body always starts with its u32 message ID.
"""
import enum
from dataclasses import dataclass
from typing import NamedTuple

from .xdr import Reader, i32, i64, string, u8, u32, u64


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

    # Game socket
    Room_EnterRoomToS = 0x09A5347A
    Room_AlterRoomToS = 0x0D31FDDA
    Room_StartNewGameToS = 0x072585BA
    Room_OrderTypeSingleModePolyMinoPutTetrisToS = 0x0CC4004A
    Room_OrderTypeSingleModeGameReportTetrisToS = 0x05BCDF3A
    Room_EnterRoomToC = 0x0974DCEA
    Room_StartNewGameToC = 0x0F809B5A


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


def read_enter_room(r: Reader) -> bytes:
    """Room_EnterRoomToS (Deserialize 0x6012AEC0): u32 | str | str | u32 | u32 |
    str k46e | str | str | str | u32 | str k3e | str | u32 | u32. Returns the
    member id (k3e), whose position is known from captures."""
    for skip in (r.u32, r.string, r.string, r.u32, r.u32,
                 r.string, r.string, r.string, r.string, r.u32):
        skip()
    return r.string()


# --- Rooms ------------------------------------------------------------------

@dataclass(frozen=True)
class Room:
    number: int          # k66e, assigned by the server
    owner: bytes         # member id of the creator
    fields: RoomRequest  # what the creator asked for


def room_info(room: Room) -> bytes:
    """A nested _RoomInfo (Serialize 0x60126AC0, keys from converter 0x6013B850).
    Nested, it carries no message ID of its own."""
    f = room.fields
    return b"".join([
        u32(f.k42e), string(f.k45e), u32(f.k127e), u32(room.number),
        u8(0),                                  # k68e
        string(f.k46e), string(f.k200e),
        u32(0), string(b""), string(b""),       # k47e, k116e, k50e
        u32(0),                                 # k143e
        u32(0), u32(0), u32(0),                 # three empty vectors
    ])


# --- Channel replies ---------------------------------------------------------

def auth_to_c() -> bytes:
    """AuthToC (Serialize 0x601356E0): u32 id | _KeyType (i64 | str | i64 | str | str)
    | str | str | i32 k161e. k161e = 0 is success (converter 0x6013F8B0)."""
    return b"".join([
        u32(Msg.AuthToC),
        i64(0), string(b""), i64(0), string(b""), string(b""),
        string(b""), string(b""), i32(0),
    ])


def get_user_id_to_c(member_id: bytes) -> bytes:
    """Channel_GetUserIdToC (Serialize 0x60135DA0, converter 0x6013F9B0):
    u32 id | i64 | str k3e | str k2e | i32 k161e."""
    return b"".join([
        u32(Msg.Channel_GetUserIdToC), i64(0), string(member_id), string(b""), i32(0),
    ])


def enter_channel_to_c(k23e: bytes, k24e: bytes) -> bytes:
    """Channel_EnterChannelToC (Serialize 0x6012E4A0): u32 id | str x5 | u32 x3 | u8 |
    str | u32 x2 | str x2 | u32 x3 | str k1e. Converter 0x60139620 maps string 3 to
    k23e and string 8 to k24e; k1e must be present and not "v2e"."""
    return b"".join([
        u32(Msg.Channel_EnterChannelToC),
        string(b""), string(b""), string(k23e), string(b""), string(b""),
        u32(0), u32(0), u32(0), u8(0),
        string(b""), u32(0), u32(0),
        string(b""), string(k24e),
        u32(0), u32(0), u32(0),
        string(b""),
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


def get_member_list_to_c() -> bytes:
    """Channel_GetMemberListToC (Serialize 0x601301D0): u32 id | str x3 |
    vector<member> | str. Sent empty."""
    return b"".join([
        u32(Msg.Channel_GetMemberListToC),
        string(b""), string(b""), string(b""), u32(0), string(b""),
    ])


def get_room_list_to_c(rooms) -> bytes:
    """Channel_GetRoomListToC (Serialize 0x60130630): u32 id | str x3 | u32 | str |
    vector<_RoomInfo>."""
    rooms = list(rooms)
    return b"".join([
        u32(Msg.Channel_GetRoomListToC),
        string(b""), string(b""), string(b""), u32(0), string(b""),
        u32(len(rooms)), *map(room_info, rooms),
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


def create_room_to_c(room: Room, game: Endpoint) -> bytes:
    """Channel_CreateRoomToC (Deserialize 0x0043F580, Tet4.exe converter 0x00441E90):
    u32 id | str | u32 failcode | str k2e | str k3e | u32 k42e | str k67e | str k45e |
    str k46e | u32 k127e | u32 k66e | str k200e | u32 k69e | str k22e | str k23e |
    str k24e | str k52e | str | u32 k53e | str k82e."""
    f = room.fields
    return b"".join([
        u32(Msg.Channel_CreateRoomToC),
        string(b""), u32(0), string(b""), string(b""),
        u32(f.k42e), string(f.k67e), string(f.k45e), string(f.k46e),
        u32(f.k127e), u32(room.number), string(f.k200e), u32(f.k69e),
        string(f.k22e), string(f.k23e), string(f.k24e),
        string(game.host.encode("ascii")), string(b""), u32(game.port), string(b""),
    ])


def room_info_to_c(room: Room) -> bytes:
    """Channel_RoomInfoToC: u32 id | _RoomInfo. Its Deserialize (0x601309F0) sets the
    embedded _RoomInfo's nested flag, so no second ID follows."""
    return u32(Msg.Channel_RoomInfoToC) + room_info(room)


# --- Game replies -------------------------------------------------------------

def enter_room_to_c() -> bytes:
    """Room_EnterRoomToC (converter 0x6013C940): u32 id | str k1e | u32 failcode |
    str k2e. failcode 0 is success."""
    return b"".join([u32(Msg.Room_EnterRoomToC), string(b""), u32(0), string(b"")])


def start_new_game_to_c(member_ids) -> bytes:
    """Room_StartNewGameToC, HgCom3's layer-0 form (converter 0x60147870):
    u32 id | vector<str member | u8 | u8 | u8>, keys k3e<i>, k118e<i>, k119e<i>."""
    member_ids = list(member_ids)
    return b"".join([
        u32(Msg.Room_StartNewGameToC), u32(len(member_ids)),
        *(string(m) + bytes(3) for m in member_ids),
    ])
