"""Game service: a room on the socket that AutoEnter, CreateRoom and GameJoinRoom name."""
import logging

from . import messages as m
from . import schema
from .lobby import Lobby
from .messages import Msg
from .room import Member, Room
from .xdr import Reader
from .xlbp import Session, serve_messages

log = logging.getLogger("tet4.game")

# In-game messages a client sends for the other players in its room: Tet4.exe
# registers each of them for receiving at layer 3 (0x0045B410) under the same ID.
RELAYED = {schema.message_id(name) for name in (
    "Room_OrderTypeAbnormalEndTetris", "Room_OrderTypeAdjustStableTetris",
    "Room_OrderTypeBasicDataTetris", "Room_OrderTypeChangeTeamTetris",
    "Room_OrderTypeCheckBombTetris", "Room_OrderTypeCheckCollapseTetris",
    "Room_OrderTypeComboTetris", "Room_OrderTypeGameEndOkTetris",
    "Room_OrderTypeGameStartOkTetris", "Room_OrderTypeGarbageSendTetris",
    "Room_OrderTypeItemApplyTetris",
    "Room_OrderTypeItemGetTetris", "Room_OrderTypeItemRemoveTetris",
    "Room_OrderTypeItemReflectTetris", "Room_OrderTypeItemStealTetris",
    "Room_OrderTypeItemStoleTetris", "Room_OrderTypeItemStolenTetris",
    "Room_OrderTypeItemUseTetris", "Room_OrderTypeItemSendTetris",
    "Room_OrderTypeLineUpTetris", "Room_OrderTypeMapSetSyncTetris",
    "Room_OrderTypePolyMinoPutTetris", "Room_OrderTypePolyMinoPutPieceTetris",
    "Room_OrderTypeRankOfMeTetris", "Room_OrderTypeRoomInfoTetris",
    "Room_OrderTypeSwitchMatrixTetris", "Room_OrderTypeSwitchResultTetris",
    "Room_OrderTypeTeamSetAutoTetris", "Room_OrderTypeTon10Tetris",
    "Room_OrderTypeTriTetTetris", "Room_OrderTypeIMSITetris",
    "Room_OrderTypeSetSpeedLevelTetris", "Room_OrderTypeRoomOptionRelay",
    "Room_OrderTypeIAmClearTetris", "Room_OrderTypeMapSetTetris",
    "Room_OrderTypeMapUpdateTetris", "Room_OrderTypeGageInfoTetris",
    "RoomOrderTypeSetSkipCountTetris", "RoomOrderTypeShadowTimeoverTetris",
    "RoomOrderTypeShadowEndTetris", "Room_OrderTypeRequestBanishMemberTetris",
    "Room_OrderTypeResponseBanishMemberTetris",
)}


def add_member_to_c(room: Room, member: Member) -> bytes:
    """Room_AddMemberToC: seats the member in the receiver's game (Msg_AddRoomMember,
    HgModel3 0x60915600); for the receiver itself it also keeps the counts the client
    reads when it leaves the room."""
    return schema.pack("Room_AddMemberToC", k50e=room.host, k58e=member.seat,
                       k3e=member.member_id, k7e=member.member_id, k11e=b"M")


def delete_member_to_c(room: Room, member: Member) -> bytes:
    """Room_DeleteMemberToC: the member left; for the leaver itself the client
    disconnects and returns to the lobby (Msg_DeleteRoomMember, 0x60915FC0)."""
    return schema.pack("Room_DeleteMemberToC", k50e=room.host, k58e=member.seat,
                       k3e=member.member_id)


class GameConnection:
    def __init__(self, session: Session, lobby: Lobby):
        self.session = session
        self.lobby = lobby
        self.member_id: bytes | None = None
        self.room: Room | None = None
        self.handlers = {
            (0, Msg.Room_EnterRoomToS): self.on_enter_room,
            (0, Msg.Room_StartNewGameToS): self.on_start_new_game,
            (3, Msg.Room_OrderTypeSingleModeGameReportTetrisToS): self.on_single_mode_report,
            (0, Msg.Room_ExitRoomToS): self.on_exit_room,
            (0, schema.message_id("Chatting_ChatStringToS")): self.on_chat,
            (3, schema.message_id("Room_OrderTypeLetsGameStartTetris")): self.on_lets_game_start,
            (3, schema.message_id("Room_OrderTypeIWillDieTetris")): self.on_out,
        }
        for msg_id in RELAYED:
            self.handlers[(3, msg_id)] = self.relay

    async def run(self) -> None:
        try:
            await serve_messages(self.session, self.handlers)
        finally:
            self.leave_room(tell_self=False)

    async def on_enter_room(self, r: Reader) -> None:
        request = schema.unpack("Room_EnterRoomToS", r)
        member_id = request["k3e"]
        # The game socket carries no ticket: with accounts, the member must be logged
        # in on a channel connection from the same address.
        if self.lobby.requires_login and not self.lobby.online_from(member_id, self.session.host):
            raise ConnectionRefusedError(f"{member_id!r} is not logged in from {self.session.host}")
        room = self.lobby.rooms.get(request["k42e"])
        if room is None or room.member(member_id) or (seat := room.add(self)) is None:
            log.info("%r cannot enter room %d", member_id, request["k42e"])
            await self.session.send(schema.pack("Room_EnterRoomToC", failcode=1, k1e=b"v2e"))
            raise ConnectionRefusedError(f"room {request['k42e']} refused {member_id!r}")
        self.member_id, self.room = member_id, room
        player = self.lobby.players.get(member_id)
        if player:
            player.room = room
        log.info("%r entered room %d, seat %d", member_id, room.number, seat.seat)
        await self.session.send(m.enter_room_to_c())
        # Everyone in the room, the player included, seated in the player's game; the
        # others seat the player.
        for member in room.members:
            self.session.post(add_member_to_c(room, member))
        room.post(add_member_to_c(room, seat), exclude=self)
        self.lobby.room_changed(room)

    async def on_start_new_game(self, r: Reader) -> None:
        # Sent by CTetMainBody::Start through CF5GameWnd::SendStartNewGame.
        room = self.room
        if room is None:
            log.warning("%s: StartNewGameToS outside a room", self.session.peer)
            return
        if room.host != self.member_id and not room.single:
            log.info("%r is not the host of room %d", self.member_id, room.number)
            return
        room.playing = True
        room.post(m.start_new_game_to_c([member.member_id for member in room.members]))
        self.lobby.room_changed(room)

    async def on_lets_game_start(self, r: Reader) -> None:
        """The host starts a multiplayer game: every member, the host included, gets
        LetsGameStartOkTetris with the same seats and map data, and starts on it
        (FUN_004586B0); the client never sends LetsGameStartOk itself."""
        room = self.room
        if room is None or room.host != self.member_id:
            return
        start = schema.unpack("Room_OrderTypeLetsGameStartTetris", r)
        start.pop("kind")
        room.start_game()
        room.post(schema.pack("Room_OrderTypeLetsGameStartOkTetris", start), layer=3)
        self.lobby.room_changed(room)

    async def on_out(self, r: Reader) -> None:
        """IWillDie: a player is out (topped out, or the last one left once the others
        are). The others see it; when everyone has reported, the game ends."""
        if self.room is None:
            return
        self.room.post(r.data, layer=3, exclude=self)
        if self.room.player_out(self.member_id):
            self.end_game(self.room)

    def end_game(self, room: Room) -> None:
        """LetsGameEndTetrisToC to every member: one _TetrisGameReport per player, winner
        first. CTetMainBody's handler (slot 15, 0x005796C0) shows the result board
        from them: rank (+0x28), team (+0x2C), name, level before and after."""
        reports = [dict(k3e=member_id, rank=rank, level=1, level_after=1)
                   for rank, member_id in enumerate(room.ranking(), 1)]
        log.info("room %d: game over, %s", room.number,
                 ", ".join(f"{i}. {m!r}" for i, m in enumerate(room.ranking(), 1)))
        room.post(schema.pack("Room_OrderTypeLetsGameEndTetrisToC", reports=reports), layer=3)
        # The game report: HgCom3's member scores at layer 0 and Tet4.exe's at layer 3.
        # The layer-3 converter (0x0045B070) checks the room number, resets every seat
        # and closes the result board five seconds later.
        players = [dict(k3e=member_id) for member_id in room.ranking()]
        room.post_layers({
            0: schema.pack("Room_GameReportToC", members=players),
            3: schema.pack_as("Room_GameReportToC", "Room_OrderTypeGameReportTetrisToC",
                              room=room.number, reports=players),
        })
        self.lobby.room_changed(room)

    async def relay(self, r: Reader) -> None:
        """Pass an in-game message on to the other players in the room, unchanged."""
        if self.room is not None:
            self.room.post(r.data, layer=3, exclude=self)

    async def on_chat(self, r: Reader) -> None:
        chat = schema.unpack("Chatting_ChatStringToS", r)
        if self.room is not None:
            chat["k3e"] = self.member_id
            self.room.post(schema.pack("Chatting_ChatStringToC", chat))

    async def on_single_mode_report(self, r: Reader) -> None:
        # Sent at game over; the reply carries the mode's updated standing.
        report = m.read_game_report(r)
        if report.member_id != self.member_id:
            log.warning("%s: report for %r ignored", self.session.peer, report.member_id)
            return
        standing = await self.lobby.records.add_game(report)
        await self.session.send(m.single_mode_game_report_to_c(report, standing), layer=3)

    async def on_exit_room(self, r: Reader) -> None:
        # The exit button: the client leaves once told that the player left the room.
        self.leave_room(tell_self=True)

    def leave_room(self, tell_self: bool) -> None:
        room, self.room = self.room, None
        if room is None:
            return
        member = room.remove(self)
        if member is None:
            return
        log.info("%r left room %d", member.member_id, room.number)
        if room.player_out(member.member_id) and room.members:
            self.end_game(room)
        notice = delete_member_to_c(room, member)
        if tell_self:
            self.session.post(notice)
        room.post(notice)
        player = self.lobby.players.get(member.member_id)
        if player and player.room is room:
            player.room = None
        if not room.members:
            room.playing = False
            self.lobby.close_room(room)
        else:
            self.lobby.room_changed(room)
