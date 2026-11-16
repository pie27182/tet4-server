"""Write docs/MESSAGES.md: every message the client knows and what the server does
with it, taken from the server itself (its handler tables, the relayed set and the
messages it builds). python3 tools/messages.py; tests/test_docs.py checks the file is
current."""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))

from tet4server import schema  # noqa: E402
from tet4server.channel import ChannelConnection  # noqa: E402
from tet4server.game import RELAYED, GameConnection  # noqa: E402

# Why the server leaves a client message unanswered.
NO_REPLY = "needs no reply"
KOREAN = "Hangame Korea's own services (avatar, reports, Gaea, events), not this game"
WHY = {
    "Channel_AvatarChangeSvcKorToS": KOREAN,
    "Channel_CheckCharacterIdExistToS": "not implemented: choosing a nickname",
    "Channel_CheckUserIdToS": "not implemented: choosing a nickname",
    "Channel_ClientOptionInfoSvcKorToS": KOREAN,
    "Channel_ComplaintAgreeSvcKorToS": KOREAN,
    "Channel_ComplaintSvcKorToS": KOREAN,
    "Channel_CouponCountToS": "not implemented: coupons",
    "Channel_DetectGhostToS": "not implemented: the duplicate-client check",
    "Channel_EnterChannelByUserIdImsiToS": "other launchers' entry; this client enters by user id",
    "Channel_EnterChannelToS": "other launchers' entry; this client enters by user id",
    "Channel_EnterChannelWithTicketToS": "other launchers' entry; this client enters by user id",
    "Channel_ExitChannelToS": NO_REPLY + ": the connection closes after it",
    "Channel_GaeaGameValueSvcKorToS": KOREAN,
    "Channel_MakeUserIdToS": "not implemented: choosing a nickname",
    "Channel_OrderTypeChangeUserIdTetrisToS": "not implemented: the nickname change item",
    "Channel_OrderTypeFriendMemberInfoTetrisToS": "not implemented: friends",
    "Channel_OrderTypeRefreshMemberToS": "not implemented",
    "Channel_RequestDeleteAliasToS": "not implemented: throwing a title away",
    "Channel_RequestDeleteEmblemToS": "not implemented: throwing an emblem away",
    "Channel_TicketReissueToS": NO_REPLY + ": sent periodically, the session goes on",
    "Channel_ViewRoomToS": "not implemented: watching a room from the lobby",
    "Item_ProvokeSvcKorToS": KOREAN,
    "Item_ReserveChanceSvcKorToS": KOREAN,
    "Room_AvatarChangeSvcKorToS": KOREAN,
    "Room_ClientOptionInfoSvcKorToS": KOREAN,
    "Room_ComplaintSvcKorToS": KOREAN,
    "Room_DetectGhostToS": "not implemented: the duplicate-client check",
    "Room_GaeaGameValueSvcKorToS": KOREAN,
    "Room_GameReportToS": NO_REPLY + ": Single Mode's result goes with its Tetris report",
    "Room_NoticeToS": "not implemented: room notices",
    "Room_OrderTypeAvgAttackSpeedTetrisToS": NO_REPLY + ": attack speeds are not kept",
    "Room_OrderTypeGameInfoToS": NO_REPLY,
    "Room_OrderTypeSingleModePolyMinoPutTetrisToS": NO_REPLY + ": one per piece in Single Mode",
    "Room_OrderTypeUseHoldItemTetrisToS": NO_REPLY,
    "Room_SetRoomStateToS": "not implemented",
    "Room_ViewerToPlayerToS": "not implemented: watching a room",
    "Shop_RequestChangeLiqidMethodToS": "not implemented: club payments (TP pays once)",
    "Shop_RequestReserveSurrenderToS": "not implemented: club payments (TP pays once)",
    "Shop_RequestUseGiftToS": "not implemented: gifts",
    "Shop_RequestUseHappyCubeHammerToS": "not implemented: the Happy Cube",
    "RoomOrderTypePostGameStartTetris": NO_REPLY,
    "LayerAlignment": "not a message: it fills a batch's empty layer slots (PROTOCOL.md 5)",
    "Room_NotMatchZeroSum": "not sent: a notice of HgCom3 the game has no use for",
    "Room_OrderTypeForceBanishTetris": "not sent: members are sent away with ReqBanishMemberToC",
}


def coverage() -> list[tuple[int, str, str, str]]:
    """(ID, name, direction, what the server does) for every message."""
    handled = {msg_id for (_, msg_id) in
               [*ChannelConnection(None, None, None).handlers, *GameConnection(None, None).handlers]}
    source = "".join(p.read_text() for p in (ROOT / "tet4server").glob("*.py")
                     if p.name != "catalog.py")
    built = {name for name in schema.MESSAGES
             if re.search(r"""["']%s["']|Msg\.%s\b""" % (name, name), source)}
    rows = []
    for name, message in schema.MESSAGES.items():
        msg_id = message.id
        if name.endswith("ToS"):
            direction = "client → server"
            does = "answered" if msg_id in handled else WHY.get(name, "not handled")
        elif name.endswith("ToC"):
            direction = "server → client"
            does = "sent" if name in built else "not sent"
        else:
            direction = "in a room"
            does = ("passed to the room" if msg_id in RELAYED else "answered" if msg_id in handled
                    else "sent" if name in built else WHY.get(name, "not handled"))
        rows.append((msg_id, name, direction, does))
    return sorted(rows, key=lambda row: row[1])


def document() -> str:
    rows = coverage()
    counts = {}
    for _, _, _, does in rows:
        key = does.split(":")[0]
        counts[key] = counts.get(key, 0) + 1
    lines = [
        "# Messages",
        "",
        "Every message the client knows, with what the server does with it. Generated",
        "by `python3 tools/messages.py` from the server's handler tables; do not edit by",
        "hand. Every layout is in `tet4server/catalog.py`, and the server reads and",
        "writes all of them; [`PROTOCOL.md`](PROTOCOL.md) describes the ones in use.",
        "",
        " | ".join(f"{n} {k}" for k, n in sorted(counts.items(), key=lambda kv: -kv[1])) + ".",
        "",
        "| ID | Message | Direction | Server |",
        "|---|---|---|---|",
    ]
    lines += [f"| `0x{msg_id:08X}` | {name} | {direction} | {does} |"
              for msg_id, name, direction, does in rows]
    return "\n".join(lines) + "\n"


if __name__ == "__main__":
    (ROOT / "docs" / "MESSAGES.md").write_text(document(), encoding="utf-8")
