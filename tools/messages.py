"""Write docs/MESSAGES.md: every message the client knows, field by field, and what the
server does with it, read from the server itself: the catalog, the services' handler
tables and the functions that build each message.

    python3 tools/messages.py

tests/test_docs.py checks that the file is current.
"""
import ast
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))

from tet4server.protocol import catalog, codec  # noqa: E402
from tet4server.services.channel import ChannelConnection  # noqa: E402
from tet4server.services.game import GameConnection  # noqa: E402

KOREAN = "not implemented: Hangame Korea's own services (avatars, Gaea promotions, client " \
         "options, memberships, the report terms), not part of the game"
NICKNAME = "not implemented: choosing or changing a nickname (and the nickname change item); " \
           "an account's name is its nickname"
ENTRY = "not implemented: another launcher's way in; this client enters with " \
        "EnterChannelByUserIdToS"
GENERIC = "not sent: a feature of Hangame's other games (money, power and recovery items) " \
          "Tetris has no use for"
NO_REPLY = "no reply needed"

# Why the server neither handles nor sends a message, by name or by name prefix.
NOTES = {
    "Channel_AvatarChange": KOREAN, "Room_AvatarChange": KOREAN,
    "Channel_ClientOptionInfo": KOREAN, "Room_ClientOptionInfo": KOREAN,
    "Channel_ComplaintAgree": KOREAN,
    "Channel_Gaea": KOREAN, "Room_Gaea": KOREAN,
    "Item_Provoke": KOREAN, "Item_ReserveChance": KOREAN,
    "Channel_GetMemberShipStateSvcKorToC": KOREAN,
    "Channel_CheckCharacterIdExist": NICKNAME, "Channel_CheckUserId": NICKNAME,
    "Channel_MakeUserId": NICKNAME, "Channel_OrderTypeChangeUserIdTetris": NICKNAME,
    "Channel_OrderTypeImsiCharacterIdTetrisToC": NICKNAME,
    "Channel_EnterChannelToS": ENTRY, "Channel_EnterChannelWithTicket": ENTRY,
    "Channel_EnterChannelByUserIdImsiToS": ENTRY,
    "Channel_EnterChannelErrorToC": "not sent: a refused entry gets EnterChannelToC with "
                                    "result v2e",
    "Channel_ExitChannelToS": NO_REPLY + ": the client closes the connection after it",
    "Channel_ExitChannelToC": "not sent: the client leaves by itself",
    "Channel_TicketReissueToS": NO_REPLY + ": sent periodically; the session goes on",
    "Channel_TicketReissueToC": "not sent: tickets are not reissued (layout not recovered)",
    "Channel_OrderTypeFriendMemberInfoTetris": "not implemented: friends",
    "Channel_ViewRoom": "not implemented: watching a room from the lobby",
    "Room_ViewerToPlayer": "not implemented: a watcher taking a free seat",
    "Shop_RequestUseGiftToS": "not implemented: gifts and the gift box",
    "Shop_ResponseUseGiftToC": "not implemented: gifts and the gift box",
    "Shop_GetCouponListToC": "not sent: there are no coupons (CouponCountToC says 0)",
    "Shop_RequestUseHappyCubeHammerToS": "not implemented: the Happy Cube",
    "Shop_ResponseUseHappyCubeHammerToC": "not implemented: the Happy Cube",
    "Shop_RequestChangeLiqidMethod": "not implemented: club payment methods (TP pays once)",
    "Shop_ResponseChangeLiqidMethod": "not implemented: club payment methods (TP pays once)",
    "Shop_RequestReserveSurrender": "not implemented: cancelling a club (TP pays once)",
    "Shop_ResponseReserveSurrender": "not implemented: cancelling a club (TP pays once)",
    "Channel_OrderTypeMissionCompleteTetrisToC": "not implemented: missions",
    "Room_OrderTypeMissionCompleteTetrisToC": "not implemented: missions",
    "Room_OrderTypeSetEmblemTetrisToC": "not implemented: an emblem earned in a game (missions)",
    "Channel_LevelUpRewardToC": "not implemented: levels and their rewards",
    "Channel_DetectGhost": "not implemented: the duplicate-client check",
    "Room_DetectGhost": "not implemented: the duplicate-client check",
    "Channel_OrderTypeRefreshMember": "not implemented: refreshing a member's row",
    "Room_SetRoomStateToS": "not implemented",
    "Room_NoticeToS": "not implemented: room notices",
    "Notice_NoticeToC": "not sent: an operator's notice to everyone (could announce "
                        "maintenance)",
    "Channel_ShutdownTimeToC": "not sent: a shutdown countdown (could announce maintenance)",
    "Room_ShutdownTimeToC": "not sent: a shutdown countdown (could announce maintenance)",
    "Channel_SendErrorToMemberToC": "not sent: an operator's error notice to one member",
    "Channel_BanishToC": "not sent: an operator sending a member out of the channel",
    "Channel_ReserveBanishToC": "not sent: an operator sending a member out later",
    "Room_ReserveBanishToC": "not sent: an operator sending a member out of a room later",
    "Channel_SearchMemberToC": "not implemented: finding a member (its request is not known)",
    "Room_RoomEventToC": "not sent: a room event of Hangame's (unused by Tetris)",
    "Channel_TodayMatchInfoToC": "not sent: today's match counts",
    "Channel_GetMemberListTodayMatchInfoToC": "not sent: today's match counts",
    "Room_GetMemberListTodayMatchInfoToC": "not sent: today's match counts",
    "Room_GetMemberListToC": "not sent: AddMemberToC seats each member, and also sets the counts "
                             "the client reads on leaving a room, which this does not",
    "Room_ItemUse": GENERIC, "Room_MoneyRecoveredToC": GENERIC,
    "Room_ItemMemberGameInfoResultToC": GENERIC, "Room_MemberGameInfoResultToC": GENERIC,
    "Room_CanLockThisRoomToC": GENERIC, "Room_ConnectTypeErrorToC": GENERIC,
    "Room_NotMatchZeroSum": GENERIC,
    "Room_GameReportToS": NO_REPLY + ": HgCom3's generic game report; the client goes on",
    "Room_OrderTypeGameInfoToS": NO_REPLY,
    "Room_OrderTypeGameInfoToC": "not sent: what the client does with it is not known",
    "Room_OrderTypeAvgAttackSpeedTetrisToS": NO_REPLY + ": attack speeds are not kept",
    "Room_OrderTypeTotalAvgAttackSpeedTetrisToC": "not sent: attack speeds are not kept",
    "Room_OrderTypeSingleModePolyMinoPutTetrisToS": NO_REPLY + ": one per piece in Single Mode",
    "Room_OrderTypeUseHoldItemTetrisToS": NO_REPLY + ": the hold item is the client's",
    "RoomOrderTypePostGameStartTetris": NO_REPLY,
    "ChannelOrderTypeSingleModeRoomInfoTetrisToC": "not sent: Single Mode needs no room info",
    "Channel_OrderTypeSingleModeResultMemberTetrisToC": "not sent: records travel in the "
                                                        "profile and the game report",
    "Room_OrderTypeMiniGameReportTetrisToC": "not sent: the mini game's report",
    "Room_OrderTypeForceBanishTetris": "not sent: the host's banish is ReqBanishMemberToC",
    "LayerAlignment": "not a message: it fills a batch's empty layer slots",
}


def note(name: str) -> str:
    if name in NOTES:
        return NOTES[name]
    if "SvcKor" in name:
        return KOREAN
    for prefix in sorted(NOTES, key=len, reverse=True):
        if name.startswith(prefix):
            return NOTES[prefix]
    return "not handled" if name.endswith("ToS") else "not sent"


def handlers() -> dict[str, str]:
    """Message name -> the method that handles it."""
    out = {}
    for service in (ChannelConnection, GameConnection):
        for (layer, msg_id), (layout, method) in service.handlers.items():
            name = layout.name if layout else codec.name_of(layer, msg_id)
            out[name] = f"{service.__name__}.{method.__name__}"
    return out


def senders() -> dict[str, list[str]]:
    """Message name -> the functions whose code names it (and so builds it)."""
    out = defaultdict(list)
    for path in sorted((ROOT / "tet4server" / "services").glob("*.py")):
        tree = ast.parse(path.read_text(encoding="utf-8"))
        for scope in ast.walk(tree):
            if not isinstance(scope, ast.ClassDef | ast.Module):
                continue
            for node in scope.body:
                if not isinstance(node, ast.FunctionDef | ast.AsyncFunctionDef):
                    continue
                owner = f"{scope.name}." if isinstance(scope, ast.ClassDef) else f"{path.stem}."
                for const in ast.walk(node):
                    if (isinstance(const, ast.Constant) and const.value in codec.MESSAGES
                            and owner + node.name not in out[const.value]):
                        out[const.value].append(owner + node.name)
    return out


def direction(name: str) -> str:
    if name.endswith("ToS") or name == "CDS_ReqSelect":
        return "client → server"
    if name.endswith("ToC") or name == "CDS_AnsSelect":
        return "server → client"
    return "client → server → the room" if name.startswith("Room") else "both ways"


# The plain-frame services answer in one function each.
PLAIN_SERVICES = {"TPack_": "tpack.answer", "CDS_": "directory.answer"}


def status(name: str, handled: dict, sent: dict) -> str:
    for prefix, function in PLAIN_SERVICES.items():
        if name.startswith(prefix):
            return f"{'sent' if direction(name).startswith('server') else 'handled'} by " \
                   f"`{function}`"
    if name in handled:
        what = "passed on to the room" if handled[name].endswith(".relay") else "handled"
        return f"{what} by `{handled[name]}`"
    if name in sent and not name.endswith("ToS"):
        return "sent by " + ", ".join(f"`{s}`" for s in sent[name])
    return note(name)


def fields(layout: codec.Layout) -> str:
    """A layout's fields as `name` type (key), unnamed ones by type alone."""
    if not layout.fields:
        return "*(no fields)*"
    out = []
    for field in layout.fields:
        typ = field.type.replace("{", "").replace("}", "")
        if field.name == f"f{layout.fields.index(field)}":
            out.append(f"{typ}")
        elif field.key and field.key != field.name:
            out.append(f"`{field.name}` {typ} ({field.key})")
        else:
            out.append(f"`{field.name}` {typ}")
    return " · ".join(out)


GROUPS = (("Channel", "Channel"), ("Chatting_", "Chat"), ("Item_", "Items"),
          ("Shop_", "Shop"), ("Room", "Room"), ("Notice_", "Notices"))


def group(name: str) -> str:
    if name in catalog.PLAIN:
        return "TPack and the directory"
    return next((title for prefix, title in GROUPS if name.startswith(prefix)), "Other")


def document() -> str:
    handled, sent = handlers(), senders()
    names = sorted(catalog.MESSAGES) + list(catalog.PLAIN)
    statuses = {name: status(name, handled, sent) for name in names}
    counts = defaultdict(int)
    for text in statuses.values():
        counts[text.split(" by ")[0].split(":")[0]] += 1
    lines = [
        "# Messages",
        "",
        "Every message the client knows, field by field, and what this server does with",
        "it. Generated by `python3 tools/messages.py` from `tet4server/protocol/catalog.py`",
        "and the services' code; do not edit by hand. [`PROTOCOL.md`](PROTOCOL.md) tells",
        "how the messages fit together and gives the evidence.",
        "",
        "**Reading an entry.** The heading is the client's class name without `Cmd_`. Then",
        "the message ID, the direction, the batch layer it travels in (PROTOCOL.md section",
        "6.2) and what the server does. The fields follow in wire order: a field the server",
        "names is `name` type, with the client's key in parentheses where it is known",
        "(PROTOCOL.md section 6.3); a field nobody has named is its type alone, read and",
        "written as `f0`, `f1`, ... by position. Types: `u8` `u16` `u32` `u64` `i32` `i64`",
        "`f32` are big-endian numbers, `str` is a u32 length and the bytes (CP949 text),",
        "`_Name` a structure written inline, `[type]` a u32 count and the elements.",
        "",
        "| What the server does | Messages |",
        "|---|---|",
        *(f"| {what} | {n} |" for what, n in sorted(counts.items(), key=lambda kv: -kv[1])),
        "",
    ]
    by_group = defaultdict(list)
    for name in names:
        by_group[group(name)].append(name)
    order = ["Channel", "Chat", "Items", "Shop", "Room", "Notices", "Other",
             "TPack and the directory"]
    for section in order + sorted(set(by_group) - set(order)):
        if section not in by_group:
            continue
        lines += [f"## {section}", ""]
        for name in by_group[section]:
            layout = codec.MESSAGES[name]
            where = (f"layer {layout.layer}" if layout.layer is not None else "plain frame")
            extends = catalog.EXTENDS.get(name)
            lines += [
                f"### {name}",
                "",
                f"`0x{layout.id:08X}` · {direction(name)} · {where}"
                + (f" · rides under {extends} (own ID `0x{layout.class_id:08X}`)"
                   if extends else "") + f" · **{statuses[name]}**",
                "",
                fields(layout),
                "",
            ]
    lines += ["## Structures", "",
              "Nested in the messages above, without a message ID of their own.", ""]
    for name in sorted(codec.STRUCTS):
        lines += [f"### {name}", "", fields(codec.STRUCTS[name]), ""]
    lines += keys()
    return "\n".join(lines).rstrip() + "\n"


def keys() -> list[str]:
    """The client keys that appear in the catalog, with the names fields have under them."""
    uses = defaultdict(lambda: defaultdict(list))
    for name, layout in {**codec.MESSAGES, **codec.STRUCTS}.items():
        for field in layout.fields:
            if field.key:
                uses[field.key][field.name].append(name)
    lines = ["## Keys", "",
             "The client's keys for fields, and the names the server gives the fields under",
             "each; a key named after itself is one whose meaning is not known.", "",
             "| Key | Name | In |", "|---|---|---|"]
    for key in sorted(uses, key=lambda k: int(k[1:-1])):
        for field, where in sorted(uses[key].items()):
            shown = ", ".join(sorted(where)[:3]) + (f" and {len(where) - 3} more"
                                                   if len(where) > 3 else "")
            lines.append(f"| {key} | {'—' if field == key else f'`{field}`'} | {shown} |")
    return lines + [""]


if __name__ == "__main__":
    (ROOT / "docs" / "MESSAGES.md").write_text(document(), encoding="utf-8")
