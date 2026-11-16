"""What clients are shown of the server's state: member rows and profiles, rooms and
the room list, the shop and the inventory.

Each function turns domain objects into a message's fields (a dict) or a whole
message. The client keeps the Tetris profile it is sent: the emblem and title it
shows, and one Single Mode record list per mode.
"""
import time
from functools import cache

from ..config import (CHANNEL_ID, DECORATION_SLOTS, EMBLEM, EXTRA_SLOTS, GAME_ID, NO_MISSION,
                      RECORDS_SHOWN, ROOM_EMPTY, ROOM_SLOTS, SINGLE_MODE_ROOM_INFO_OPTIONS,
                      SINGLE_MODES, SUB_ID, TITLE)
from ..domain.lobby import Lobby, Player
from ..domain.records import Standing
from ..domain.room import Room, Settings
from ..domain.shop import DECORATION_NAMES, GROUPS, PRODUCTS, Wallet
from ..protocol.codec import MESSAGES, STRUCTS, Message, pack

# The channel's identity, as every lobby message carries it.
CHANNEL = dict(game_id=GAME_ID, sub_id=SUB_ID, channel_id=CHANNEL_ID)


# --- players -------------------------------------------------------------------------

def member_row(lobby: Lobby, player: Player) -> dict:
    """A lobby row (_MemberInfo), including the player's current multiplayer points."""
    room = player.room
    return dict(member=player.member_id, k7e=player.member_id, k11e=b"M",
                k31e=lobby.ratings.standing(player.member_id).points,
                room=room.number if room and not room.single else 0)


def profile(lobby: Lobby, member_id: bytes) -> dict:
    """A member's profile: decorations, Single Mode records and multiplayer rating."""
    wallet = lobby.shop.wallet(member_id)
    rating = lobby.ratings.standing(member_id)
    # _TetrisSchoolInfo's field order is u8, str, u32, u16. The u32 is provisionally
    # used for rating points; grade code/name are zero until the client's 24 thresholds
    # and grade lookup have been recovered. The trailing best-grade field is also 0.
    school = dict(f0=0, f1=b"", f2=rating.points, f3=0)
    return dict(member=member_id, school=school,
                f2=rating.wins, f3=rating.losses,
                f4=f"{rating.win_rate * 100:.2f}", f5=0,
                f6=max(0, rating.streak), f7=0,
                emblem=wallet.emblem.encode(), title=wallet.title.encode(),
                single_modes=[single_mode(mode, lobby.records.standing(member_id, mode))
                              for mode in range(SINGLE_MODES)])


def single_mode(mode: int, standing: Standing, result: int = 0) -> dict:
    """One mode's records (_SingleModeInfo). The client always reads RECORDS_SHOWN results
    and compares a finished game with the first, so empty places are sent as 0."""
    top = (list(standing.top) + [(0, b"")] * RECORDS_SHOWN)[:RECORDS_SHOWN]
    return dict(mode=mode, values=[value for value, _ in top], dates=[date for _, date in top],
                rank=standing.rank, ranked=standing.ranked, plays=standing.plays, result=result)


def decorations(wallet: Wallet, kind: str) -> dict:
    """The emblems (kind EMBLEM) or titles (TITLE) a member owns, with the names the lists
    show, the one shown and the slots. A bought one has no mission to look up."""
    shown = wallet.emblem if kind == EMBLEM else wallet.title
    return dict(items=[dict(code=code.encode(), name=DECORATION_NAMES.get(code, ""),
                            mission=NO_MISSION)
                       for code in wallet.items if code[1] == kind],
                shown=shown.encode(),
                slots=DECORATION_SLOTS * (2 if EXTRA_SLOTS[kind] in wallet.items else 1))


def arrival(lobby: Lobby, player: Player) -> tuple[Message, Message]:
    """A member entering the channel, for the others: its row and its Tetris profile."""
    return (pack("Channel_AddMemberToC", {**CHANNEL, **member_row(lobby, player)}),
            pack("Channel_OrderTypeAddMemberTetrisToC", profile=profile(lobby, player.member_id)))


def departure(member_id: bytes) -> Message:
    return pack("Channel_DeleteMemberToC", CHANNEL, member=member_id)


def own_record(lobby: Lobby, member_id: bytes) -> tuple[Message, Message]:
    """A member's own record on entering: the generic one (the client's own member
    data) and the Tetris profile with its emblems and titles, which Single Mode reads."""
    wallet = lobby.shop.wallet(member_id)
    return (pack("Channel_GetMemberInfoToC", member=member_id),
            pack("Channel_OrderTypeGetMemberInfoTetrisToC", profile=profile(lobby, member_id),
                 emblems=decorations(wallet, EMBLEM), titles=decorations(wallet, TITLE)))


def display_profile(lobby: Lobby, member_id: bytes, kind: int) -> Message:
    """A member's profile for the member info dialog, and a player's own emblem and
    title lists."""
    wallet = lobby.shop.wallet(member_id)
    return pack("Channel_OrderTypeGetDisplayMemberInfoTetrisToC", member=member_id, kind=kind,
                profile=profile(lobby, member_id), emblems=decorations(wallet, EMBLEM),
                titles=decorations(wallet, TITLE))


def shown_decorations(member_id: bytes, wallet: Wallet) -> Message:
    """The emblem and title a member shows, for everyone's lobby."""
    return pack("Channel_OrderTypeChangeDisplayMemberInfoToC", member=member_id,
                emblem=wallet.emblem, title=wallet.title)


# --- rooms ---------------------------------------------------------------------------

def echo(settings: Settings, layout: str) -> dict:
    """The fields of the client's own that the message or structure `layout` carries
    back, as the creator's request had them."""
    names = (STRUCTS.get(layout) or MESSAGES[layout]).names
    return {name: value for name, value in settings.echo.items() if name in names}


def room_info(room: Room) -> dict:
    """A room as the room list shows it (_RoomInfo)."""
    s = room.settings
    # Keep the experiment in the lobby update only; game/create replies use real options.
    options = (SINGLE_MODE_ROOM_INFO_OPTIONS or s.options) if room.single else s.options
    return dict(echo(s, "_RoomInfo"), room=room.number, title=s.title, limit=room.limit,
                private=int(room.private), options=options, state=room.state,
                creator=room.creator, host=room.host, playing=int(room.playing),
                players=[dict(member=m.member_id, seat=m.seat) for m in room.members])


def room_news(room: Room) -> Message:
    """A room's new state, for the room list (a listed room only)."""
    return pack("Channel_RoomInfoToC", info=room_info(room))


def free_slot(number: int) -> Message:
    """A closed room: its slot in the room list is empty again."""
    return pack("Channel_RoomInfoToC", info=dict(room=number, state=ROOM_EMPTY))


def room_list(lobby: Lobby) -> list[dict]:
    """Every numbered slot of the room list: the client only updates rooms it has, so
    the empty slots are listed too, with their number alone."""
    rooms = lobby.rooms
    return [room_info(rooms[n]) if n in rooms and not rooms[n].single else dict(room=n)
            for n in range(1, ROOM_SLOTS + 1)]


# --- the shop ------------------------------------------------------------------------

@cache
def shop_info() -> Message:
    """The catalog: the tabs, the product groups on them and every product's price."""
    tabs: dict[str, list[str]] = {}
    for group, (tab, _) in GROUPS.items():
        tabs.setdefault(tab, []).append(group)
    return pack(
        "Shop_GetShopInfoToC",
        boards=[dict(code=tab, groups=groups) for tab, groups in tabs.items()],
        groups=[dict(code=group, products=[group + period for period in prices])
                for group, (_, prices) in GROUPS.items()],
        products=[dict(code=p.code, currency=b"TP", price=p.price, per_piece=p.period[0] == "C")
                  for p in PRODUCTS.values()])


def inventory(wallet: Wallet) -> Message:
    """The inventory: items, emblems and titles, each a period item (kind T, with start
    and end dates) or one with uses (kind C), and the TP the lobby shows."""
    shelves: dict[str, list[dict]] = {"1": [], EMBLEM: [], TITLE: []}
    for item in wallet.items.values():
        timed = not item.count
        shelves.get(item.code[1], shelves["1"]).append(dict(
            code=item.code, kind=b"T" if timed else b"C", count=item.count,
            start=_date(item.start) if timed else b"", end=_date(item.end) if timed else b""))
    return pack(
        "Shop_GetInventoryInfoToC",
        items=dict(items=shelves["1"]),
        emblems=dict(items=shelves[EMBLEM], slots=DECORATION_SLOTS),
        titles=dict(items=shelves[TITLE], slots=DECORATION_SLOTS),
        points=[dict(kind=b"TP", amount=wallet.points)], now=_date(time.time()))


def points(wallet: Wallet, kind: bytes = b"TP") -> Message:
    return pack("Shop_GetPointInfoToC", kind=kind, amount=wallet.points if kind == b"TP" else 0)


def points_changed(before: int, after: int) -> Message:
    """A new TP balance, which the lobby shows."""
    return pack("Shop_ChangePointInfoToC", kind=b"TP", before=before, amount=after)


def _date(t: float) -> bytes:
    return time.strftime("%Y%m%d%H%M%S", time.localtime(t)).encode()
