"""Players' profiles: the member list row, the Tetris profile with Single Mode records,
and the emblems (T2xxxx) and titles (T3xxxx) a player owns and shows.

The client keeps the profile it is sent (Tet4.exe 0x004ECB50): the emblem and title
shown are the Tetris profile's strings at +0x8C and +0xA8, and each inventory lists
the owned ones with the number of slots.
"""
from typing import TYPE_CHECKING

from . import messages as m
from . import schema
from .shop import DECORATION_NAMES, Wallet

if TYPE_CHECKING:
    from .lobby import Lobby, Player

SLOTS = 4                  # emblem and title slots; the slot items add four more
EXTRA_SLOTS = {"2": "T90002", "3": "T90003"}
NO_MISSION = 0xFFFFFFFF    # an emblem or title bought, not earned by a mission: the
                           # emblem list (0x004853C0) looks any other number up


def member_info(player: "Player") -> dict:
    """A lobby member list row (_MemberInfo). k151e is the room the player is in, 0 in
    the lobby (HgModel3 Msg_FillMemberList keeps it at CMemberData+0x338): the member
    list shows it, and accepting an invitation finds the inviter's room by it."""
    room = player.room
    return dict(k3e=player.member_id, k7e=player.member_id, k11e=b"M",
                k151e=room.number if room and not room.single else 0)


def tetris_info(lobby: "Lobby", member_id: bytes) -> dict:
    """A member's Tetris profile (_TetrisMemberInfo): its title, emblem and Single Mode
    records."""
    wallet = lobby.shop.wallet(member_id)
    return dict(k3e=member_id, title=wallet.title.encode(), emblem=wallet.emblem.encode(),
                single_modes=[_single_mode(mode, lobby.records.single_mode(member_id, mode))
                              for mode in range(m.SINGLE_MODES)])


def _single_mode(mode: int, standing: m.SingleMode) -> dict:
    top = (list(standing.top) + [(0, b"")] * m.TOP)[:m.TOP]
    return dict(mode=mode, values=[v for v, _ in top], dates=[d for _, d in top],
                rank=standing.rank, ranked=standing.ranked, plays=standing.plays)


def decorations(wallet: Wallet, kind: str) -> dict:
    """The emblem (kind "2") or title (kind "3") inventory: owned codes with the names the
    lists and the lobby show, the one shown and the slots."""
    shown = wallet.emblem if kind == "2" else wallet.title
    return dict(items=[dict(code=code.encode(), name=DECORATION_NAMES.get(code, ""),
                            mission=NO_MISSION)
                       for code in wallet.items if code[1] == kind],
                shown=shown.encode(),
                slots=SLOTS * (2 if EXTRA_SLOTS[kind] in wallet.items else 1))


def member_info_tetris(lobby: "Lobby", member_id: bytes) -> bytes:
    """Layer 3 of Channel_GetMemberInfoToC (converter 0x00459E20): the player's own
    Tetris profile, which the Single Mode scene reads, and its emblems and titles."""
    wallet = lobby.shop.wallet(member_id)
    return schema.pack_as(
        "Channel_GetMemberInfoToC", "Channel_OrderTypeGetMemberInfoTetrisToC",
        tetris=tetris_info(lobby, member_id), emblems=decorations(wallet, "2"),
        titles=decorations(wallet, "3"))


def display_member_info(lobby: "Lobby", member_id: bytes, kind: int) -> bytes:
    """GetDisplayMemberInfoTetrisToC (converter 0x00459EF0): a player's profile for the
    member info dialog, and for the player's own emblem and title lists."""
    wallet = lobby.shop.wallet(member_id)
    return schema.pack(
        "Channel_OrderTypeGetDisplayMemberInfoTetrisToC", k3e=member_id, kind=kind,
        tetris=tetris_info(lobby, member_id), emblems=decorations(wallet, "2"),
        titles=decorations(wallet, "3"))


def change_display_member_info(member_id: bytes, wallet: Wallet) -> bytes:
    """ChangeDisplayMemberInfoToC (converter 0x00456390): the emblem and title a player
    shows, for everyone's lobby."""
    return schema.pack("Channel_OrderTypeChangeDisplayMemberInfoToC", k3e=member_id,
                       emblem=wallet.emblem, title=wallet.title)
