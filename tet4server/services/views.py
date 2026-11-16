"""What clients are shown of the server's state: member rows and profiles, rooms and
the room list, the shop and the inventory.

Each function turns domain objects into a message's fields (a dict) or a whole
message. The client keeps the Tetris profile it is sent: the emblem and title it
shows, and one Single Mode record list per mode.
"""
import time
from functools import cache

from ..config import (CHANNEL_ID, DECORATION_SLOTS, EMBLEM, EXTRA_SLOTS, GAME_ID, NO_MISSION,
                      RECORDS_SHOWN, ROOM_EMPTY, ROOM_SLOTS, SINGLE_MODES, SUB_ID, TITLE)
from ..domain.lobby import Lobby, Player
from ..domain.rating import NAMES, Record, Result
from ..domain.records import Standing
from ..domain.room import Room, Settings
from ..domain.shop import DECORATION_NAMES, GROUPS, PRODUCTS, Wallet
from ..protocol.codec import MESSAGES, STRUCTS, Message, pack

# The channel's identity, as every lobby message carries it.
CHANNEL = dict(game_id=GAME_ID, sub_id=SUB_ID, channel_id=CHANNEL_ID)


# --- players -------------------------------------------------------------------------

def record_fields(record: Record) -> dict:
    """A member's record as member rows and seats carry it: the client shows the grade's
    medal and name, the 내공 and the games, and keeps them to compare after a game
    (the exit dialog's totals compare k30e)."""
    return dict(plays=record.plays, wins=record.wins, losses=record.losses,
                k30e=record.rating, rating=record.rating, grade_name=NAMES[record.grade],
                grade=record.grade)


def member_row(lobby: Lobby, player: Player) -> dict:
    """A row of the lobby's member list (_MemberInfo): the member, its record and the
    room it is in, 0 in the lobby, which the list shows and an accepted invitation looks
    the room up by. The client accepted rows with k7e the member id again and k11e "M"."""
    room = player.room
    return dict(record_fields(lobby.shop.wallet(player.member_id).record),
                member=player.member_id, k7e=player.member_id, k11e=b"M",
                room=room.number if room and not room.single else 0)


def profile(lobby: Lobby, member_id: bytes) -> dict:
    """A member's Tetris profile (_TetrisMemberInfo): the grades, the best win streak,
    the emblem and title shown and the Single Mode records. Which of the grade fields
    draws which medal is not known, so each medal's candidates carry its grade."""
    wallet = lobby.shop.wallet(member_id)
    record = wallet.record
    return dict(member=member_id, best_grade=record.best_grade, grade=record.grade,
                best_grade_name=NAMES[record.best_grade], best_streak=record.best_streak,
                emblem=wallet.emblem.encode(), title=wallet.title.encode(),
                single_modes=[single_mode(mode, lobby.records.standing(member_id, mode))
                              for mode in range(SINGLE_MODES)])


def basic_info(record: Record) -> dict:
    """The member info dialog's record (_BasicMemberInfo): 내공 and grade, wins and
    losses (the dialog adds them up and works out the rate), the speeds in thousandths
    and the best combo."""
    return dict(best_grade=record.best_grade, wins=record.wins, losses=record.losses,
                rating=record.rating, grade=record.grade, grade_name=NAMES[record.grade],
                speed=round(record.speed * 1000), attack_speed=round(record.attack_speed * 1000),
                max_combo=record.max_combo)


def refresh(member_id: bytes, record: Record) -> Message:
    """A member's new record for everyone's member list; a player's own updates its
    profile panel."""
    return pack("Channel_OrderTypeRefreshMemberToC", member=member_id, plays=record.plays,
                wins=record.wins, losses=record.losses, rating=record.rating,
                grade_name=NAMES[record.grade], grade=record.grade)


def game_report(member_id: bytes, rank: int, result: Result, tp: int, play) -> dict:
    """A player's line on the result board (_TetrisGameReport): the place, the grades
    and 내공 before and after (the board shows the change and plays the level-up when
    the grade rose), the part bonuses added, the game's statistics (`play`, a room.Play)
    and the TP earned with the reward for a new grade."""
    before, after = result.before, result.after
    return dict(member=member_id, rank=rank, grade=before.grade, grade_after=after.grade,
                rating=before.rating, rating_after=after.rating, bonus=result.bonus,
                speed=play.speed, attack_lines=play.attack, attack_speed=play.attack_speed,
                max_combo=play.combo, tp=tp + result.reward, reward_tp=result.reward)


def score_report(member_id: bytes, record: Record) -> dict:
    """A player's record after a game (_MemberScoreReport), for the seats and the exit
    dialog's totals."""
    return dict(record_fields(record), member=member_id)


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
                basic=basic_info(wallet.record), profile=profile(lobby, member_id),
                emblems=decorations(wallet, EMBLEM), titles=decorations(wallet, TITLE))


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
    return dict(echo(s, "_RoomInfo"), room=room.number, title=s.title, limit=room.limit,
                private=int(room.private), options=s.options, state=room.state,
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
