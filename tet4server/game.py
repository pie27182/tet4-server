"""Game service: a room on the socket that AutoEnter, CreateRoom and GameJoinRoom name."""
import dataclasses
import logging

from . import messages as m
from . import schema, shop
from .lobby import Lobby
from .messages import Msg
from .room import Member, Room
from .xdr import Reader
from .xlbp import Session, serve_messages

log = logging.getLogger("tet4.game")

MAP_PLACES = 1000         # places in a map list the server learns names for (about 60 used)

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
            (0, Msg.Room_AlterRoomToS): self.on_alter_room,
            (0, schema.message_id("Room_ReqBanishMemberToS")): self.on_banish,
            (3, schema.message_id("Room_OrderTypeMapSetTetrisToS")): self.on_map_set,
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
        if (room is None or room.member(member_id) or member_id in room.banished
                or (seat := room.add(self)) is None):
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
        members = [member.member_id for member in room.members]
        room.post_layers({0: m.start_new_game_to_c(members), 3: self.usable_items(members)})
        self.lobby.room_changed(room)

    def usable_items(self, members: list[bytes]) -> bytes:
        """The layer-3 StartNewGameToC (Tet4.exe 0x00459BD0): each player's items for
        the game. Unlimited hold (T10004) lifts the hold limit; next (T10005) shows
        more of the coming pieces."""
        owns = self.lobby.shop.owns
        return schema.pack_as(
            "Room_StartNewGameToC", "Room_OrderTypeStartNewGameTetrisToC",
            items=[dict(k3e=member, hold=owns(member, "T10004"), next=owns(member, "T10005"))
                   for member in members])

    async def on_lets_game_start(self, r: Reader) -> None:
        """The host starts a multiplayer game: every member, the host included, gets
        LetsGameStartOkTetris with the same seats and map data, and starts on it
        (FUN_004586B0); the client never sends LetsGameStartOk itself."""
        room = self.room
        if room is None or room.host != self.member_id:
            return
        start = schema.unpack("Room_OrderTypeLetsGameStartTetris", r)
        start.pop("kind")
        if start["map"] and start["place"] < MAP_PLACES:
            self.lobby.map_names[(room.fields.k46e[:1], start["place"])] = start["map"][:64]
        room.start_game([member for member in start["members"] if member])
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
        if room.played_for() >= shop.MIN_GAME_SECONDS:
            self.lobby.spawn(self.reward(room.ranking()))

    async def reward(self, ranking: list[bytes]) -> None:
        """TP for a finished game by rank; each player's lobby shows the new balance."""
        for rank, member_id in enumerate(ranking, 1):
            points = shop.GAME_POINTS[min(rank, len(shop.GAME_POINTS)) - 1]
            before, after = await self.lobby.shop.earn(member_id, points)
            player = self.lobby.players.get(member_id)
            if player:
                player.channel.session.post(shop.change_point_info_to_c(before, after), layer=3)

    async def on_alter_room(self, r: Reader) -> None:
        """The host changes the room's title, password or options (the map is the second
        character of the options): the members' rooms and the room list update."""
        f = schema.unpack("Room_AlterRoomToS", r)
        room = self.room
        if room is None or room.single or room.host != self.member_id:
            return              # Single Mode sends an empty one before every game
        room.fields = dataclasses.replace(room.fields, k45e=f["k45e"], k67e=f["k67e"],
                                          k46e=f["k46e"] or room.fields.k46e)
        room.post(schema.pack("Room_GetRoomInfoToC", room=room.info()))
        self.lobby.room_changed(room)

    async def on_banish(self, r: Reader) -> None:
        """The host sends a member away (강퇴): the member is told (ReqBanishMemberToC,
        HgCom3 converter 0x6013E0B0), leaves like with the exit button, and cannot come
        back to this room."""
        target = r.string()
        room = self.room
        if room is None or room.host != self.member_id or target == self.member_id:
            return
        member = room.member(target)
        if member is None:
            return
        log.info("room %d: %r sent %r away", room.number, self.member_id, target)
        room.banished.add(target)
        member.conn.session.post(schema.pack("Room_ReqBanishMemberToC", k3e=target))
        member.conn.leave_room(tell_self=True)

    async def on_map_set(self, r: Reader) -> None:
        """The host's map choice for the other members' games: MapSetTetrisToC (converter
        0x00445E90) fills the map packet the host's game sent (0x00425560) and applies
        it (0x00576790): `random` 1-3 a random kind, else the map by name. The host sends
        the map's place in the list; the name is known once a game was played on it (the
        game itself always starts on the host's map, LetsGameStart carries the name)."""
        f = schema.unpack("Room_OrderTypeMapSetTetrisToS", r)
        room = self.room
        if room is not None:
            name = self.lobby.map_names.get((room.fields.k46e[:1], f["place"]), b"")
            room.post(schema.pack(
                "Room_OrderTypeMapSetTetrisToC", seat=f["seat"], name=name, random=f["random"],
                f50=f["f50"], f51=f["f51"]), layer=3, exclude=self)

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
