"""The game socket: one room, from entering it to leaving, and its games.

The client connects here when CreateRoomToC, GameJoinRoomToC or the Single Mode reply
names this socket. In a game the clients run everything themselves: the server passes
their in-game messages on to the others in the room, and keeps the score of who is out.
"""
import logging
import time
from functools import partial

from ..config import (FAILED, GAME_POINTS, GRADE_REWARD, HOST_POINTS, MAP_PLACES,
                      MIN_GAME_SECONDS, NEXT_PIECES, NO_SUCH_ROOM, PLUS_HOST, PLUS_HOST_BONUS,
                      RATING_TIME, SUPER_HOST, SUPER_HOST_BONUS, UNLIMITED_HOLD)
from ..domain.lobby import Lobby
from ..domain.rating import Result, finish
from ..domain.records import GameReport
from ..domain.room import Member, Play, Room
from ..protocol.codec import Message, message_id, pack, unpack
from ..protocol.dispatch import Connection, on
from ..protocol.session import Session
from . import views

log = logging.getLogger("tet4.game")

# In-game messages a client sends for the other players in its room: the client takes
# each of them at layer 3, under the same ID, so they pass on unchanged.
RELAYED = (
    "Room_OrderTypeAbnormalEndTetris", "Room_OrderTypeAdjustStableTetris",
    "Room_OrderTypeBasicDataTetris", "Room_OrderTypeChangeTeamTetris",
    "Room_OrderTypeCheckBombTetris", "Room_OrderTypeCheckCollapseTetris",
    "Room_OrderTypeGameEndOkTetris", "Room_OrderTypeGameStartOkTetris",
    "Room_OrderTypeGageInfoTetris", "Room_OrderTypeIAmClearTetris",
    "Room_OrderTypeIMSITetris", "Room_OrderTypeItemApplyTetris",
    "Room_OrderTypeItemGetTetris", "Room_OrderTypeItemReflectTetris",
    "Room_OrderTypeItemRemoveTetris", "Room_OrderTypeItemSendTetris",
    "Room_OrderTypeItemStealTetris", "Room_OrderTypeItemStoleTetris",
    "Room_OrderTypeItemStolenTetris", "Room_OrderTypeItemUseTetris",
    "Room_OrderTypeLineUpTetris", "Room_OrderTypeMapSetSyncTetris",
    "Room_OrderTypeMapUpdateTetris", "Room_OrderTypePolyMinoPutPieceTetris",
    "Room_OrderTypeRankOfMeTetris", "Room_OrderTypeRequestBanishMemberTetris",
    "Room_OrderTypeResponseBanishMemberTetris", "Room_OrderTypeRoomInfoTetris",
    "Room_OrderTypeRoomOptionRelay", "Room_OrderTypeSetSpeedLevelTetris",
    "Room_OrderTypeSwitchMatrixTetris", "Room_OrderTypeSwitchResultTetris",
    "Room_OrderTypeTeamSetAutoTetris", "Room_OrderTypeTon10Tetris",
    "Room_OrderTypeTriTetTetris", "RoomOrderTypeSetSkipCountTetris",
    "RoomOrderTypeShadowEndTetris", "RoomOrderTypeShadowTimeoverTetris",
)
# In-game messages passed on the same way, which the server also counts for the result
# board: a piece placed; garbage lines sent (seat, lines, hole, target); a combo
# (seat, u16 combo, lines).
PIECE, GARBAGE, COMBO = (message_id(name) for name in (
    "Room_OrderTypePolyMinoPutTetris", "Room_OrderTypeGarbageSendTetris",
    "Room_OrderTypeComboTetris"))


def seated(lobby: Lobby, room: Room, member: Member) -> Message:
    """A member in its seat, for a member's game: the client seats the player with its
    record and, for its own player, keeps the counts it reads on leaving the room."""
    record = lobby.shop.wallet(member.member_id).record
    return pack("Room_AddMemberToC", views.record_fields(record), host=room.host,
                seat=member.seat, member=member.member_id, k7e=member.member_id, k11e=b"M")


def gone(room: Room, member: Member) -> Message:
    """A member left; told so itself, the client returns to the lobby."""
    return pack("Room_DeleteMemberToC", host=room.host, seat=member.seat, member=member.member_id)


class GameConnection(Connection):
    def __init__(self, session: Session, lobby: Lobby):
        super().__init__(session)
        self.lobby = lobby
        self.member_id: bytes | None = None
        self.room: Room | None = None
        self.map_name = b""     # the map this client last showed the room

    async def run(self) -> None:
        try:
            await self.serve()
        finally:
            self.leave_room(tell_self=False)

    def _show(self, room: Room) -> None:
        """Tell the channel about a room's new state; Single Mode rooms are unlisted."""
        if not room.single:
            self.lobby.post(views.room_news(room))

    # --- entering and leaving ------------------------------------------------------------

    @on("Room_EnterRoomToS")
    async def enter_room(self, request: dict) -> None:
        member_id = request["member"]
        # The game socket carries no ticket: with accounts, the member must be logged in
        # on a channel connection from the same address.
        if self.lobby.requires_login and not self.lobby.online_from(member_id, self.session.host):
            raise ConnectionRefusedError(f"{member_id!r} is not logged in from {self.session.host}")
        room = self.lobby.rooms.get(request["room"])
        if (room is None or room.member(member_id) or member_id in room.banished
                or (member := room.add(member_id, self)) is None):
            log.info("%r cannot enter room %d", member_id, request["room"])
            await self.session.send(pack("Room_EnterRoomToC", failcode=NO_SUCH_ROOM,
                                         result=FAILED))
            raise ConnectionRefusedError(f"room {request['room']} refused {member_id!r}")
        self.member_id, self.room = member_id, room
        player = self.lobby.players.get(member_id)
        if player:
            player.room = room
        log.info("%r entered room %d, seat %d", member_id, room.number, member.seat)
        await self.session.send(pack("Room_EnterRoomToC"))
        # Everyone in the room, the newcomer included, seated in the newcomer's game; the
        # others seat the newcomer.
        for other in room.members:
            self.session.post(seated(self.lobby, room, other))
        room.post(seated(self.lobby, room, member), exclude=self)
        self._show(room)

    @on("Room_ExitRoomToS")
    async def exit_room(self, request: dict) -> None:
        # The exit button: the client leaves once told that its player left the room.
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
        if tell_self:
            self.session.post(gone(room, member))
        room.post(gone(room, member))
        player = self.lobby.players.get(member.member_id)
        if player and player.room is room:
            player.room = None
        if room.members:
            self._show(room)
        elif self.lobby.close_room(room):
            self._free(room)

    def _free(self, room: Room) -> None:
        """A closed room's slot is empty again in the room list: in everyone's, or for a
        Single Mode room in its player's, the only list it was in."""
        news = views.free_slot(room.number)
        if not room.single:
            self.lobby.post(news)
        elif player := self.lobby.players.get(room.creator):
            player.session.post(news)

    @on("Room_ReqBanishMemberToS")
    async def banish(self, request: dict) -> None:
        """The host sends a member away (강퇴): the member is told, leaves as with the exit
        button, and cannot come back to this room."""
        target, room = request["member"], self.room
        if room is None or room.host != self.member_id or target == self.member_id:
            return
        member = room.member(target)
        if member is None:
            return
        log.info("room %d: %r sent %r away", room.number, self.member_id, target)
        room.banished.add(target)
        member.connection.session.post(pack("Room_ReqBanishMemberToC", member=target))
        member.connection.leave_room(tell_self=True)

    # --- the room ------------------------------------------------------------------------

    @on("Room_AlterRoomToS")
    async def alter_room(self, request: dict) -> None:
        """The host changes the room's title, password or options (the map is the second
        character of the options): the members' rooms and the room list update."""
        room = self.room
        if room is None or room.single or room.host != self.member_id:
            return              # Single Mode sends an empty one before every game
        s = room.settings
        s.title, s.password = request["title"], request["password"]
        s.options = request["options"] or s.options
        room.post(pack("Room_GetRoomInfoToC", info=views.room_info(room)))
        self._show(room)

    @on("Room_OrderTypeMapSetTetris", raw=True)
    async def map_preview(self, message: Message) -> None:
        """The host's map, name and cells, which the others show on their waiting boards.
        The MapSetTetrisToS right after it gives only the map's place in the list: its
        name is learned here."""
        if self.room is not None:
            self.map_name = unpack("Room_OrderTypeMapSetTetris", message.body)["name"][:64]
            self.room.post(message, exclude=self)

    @on("Room_OrderTypeMapSetTetrisToS")
    async def map_set(self, request: dict) -> None:
        """The host's map choice, for the other members' games, which load the map by name
        or, with `random` 1-3, pick a random map of that kind. An empty name would clear
        the map the preview just showed, so a map whose name is not known is not sent
        (a game itself always starts on the host's map: LetsGameStart carries it)."""
        room = self.room
        if room is None:
            return
        place, random = request["place"], request["random"]
        if self.map_name and not random and place < MAP_PLACES:
            self.lobby.map_names[(room.mode, place)] = self.map_name
        self.map_name = b""     # a choice sent alone (for a newcomer) is looked up
        name = self.lobby.map_names.get((room.mode, place), b"")
        if name or random:
            room.post(pack("Room_OrderTypeMapSetTetrisToC", seat=request["seat"], name=name,
                           random=random, unknown1=request["unknown1"],
                           unknown2=request["unknown2"]), exclude=self)

    @on("Chatting_ChatStringToS")
    async def chat(self, request: dict) -> None:
        if self.room is not None:
            self.room.post(pack("Chatting_ChatStringToC", request, member=self.member_id))

    @on("Room_ComplaintSvcKorToS")
    async def report(self, request: dict) -> None:
        """The room's report button (신고), as in the lobby."""
        if self.room is not None:
            self.lobby.report(self.member_id, request)

    @on(*RELAYED, raw=True)
    async def relay(self, message: Message) -> None:
        """Pass an in-game message on to the other players in the room, unchanged."""
        if self.room is not None:
            self.room.post(message, exclude=self)

    @on("Room_OrderTypePolyMinoPutTetris", "Room_OrderTypeGarbageSendTetris",
        "Room_OrderTypeComboTetris", raw=True)
    async def counted(self, message: Message) -> None:
        """Pass on a piece, garbage or a combo, counting it for the player's statistics."""
        room = self.room
        if room is None:
            return
        play = room.plays.get(self.member_id)
        if play is not None:
            body = message.body
            if message.id == PIECE:
                play.pieces += 1
            elif message.id == GARBAGE:
                play.attack += body[5]
            elif message.id == COMBO:
                play.combo = max(play.combo, int.from_bytes(body[5:7], "big"))
        room.post(message, exclude=self)

    # --- games ---------------------------------------------------------------------------

    @on("Room_StartNewGameToS")
    async def start_new_game(self, request: dict) -> None:
        """A game starts in the room, with each player's items for it: unlimited hold
        lifts the hold limit, and next shows more of the coming pieces."""
        room = self.room
        if room is None or (room.host != self.member_id and not room.single):
            return
        room.playing = True
        room.post(*self._items(room))
        self._show(room)

    def _items(self, room: Room) -> tuple[Message, Message]:
        """StartNewGameToC with each member's items for the game: unlimited hold lifts
        the hold limit, and next shows more of the coming pieces."""
        owns = self.lobby.shop.owns
        return pack("Room_StartNewGameToC"), pack(
            "Room_OrderTypeStartNewGameTetrisToC",
            items=[dict(member=m.member_id, hold=owns(m.member_id, UNLIMITED_HOLD),
                        next=owns(m.member_id, NEXT_PIECES)) for m in room.members])

    @on("Room_OrderTypeLetsGameStartTetris")
    async def lets_game_start(self, request: dict) -> None:
        """The host starts a multiplayer game: every member, the host included, starts it
        on LetsGameStartOk, with the same seats and map; the client never sends that
        message itself."""
        room = self.room
        if room is None or room.host != self.member_id:
            return
        request.pop("kind")
        if request["map"] and request["place"] < MAP_PLACES:
            self.lobby.map_names[(room.mode, request["place"])] = request["map"][:64]
        room.start_game([player for player in request["players"] if player])
        room.post(*self._items(room))
        room.post(pack("Room_OrderTypeLetsGameStartOkTetris", request))
        self._show(room)

    @on("Room_OrderTypeIWillDieTetris", raw=True)
    async def out(self, message: Message) -> None:
        """A player is out: topped out, or the last one in once the others are. The others
        see it; when every player has reported, the game ends."""
        if self.room is None:
            return
        self.room.post(message, exclude=self)
        if self.room.player_out(self.member_id):
            self.end_game(self.room)

    def end_game(self, room: Room) -> None:
        """The result board: one line per player, winner first, with the place, 내공,
        grades and TP. Then the game report, which updates the seats with the new
        records and closes the board five seconds later. A game counts (TP, 내공, wins
        and losses) with two players or more and MIN_GAME_SECONDS played."""
        ranking = room.ranking()
        log.info("room %d: game over, %s", room.number,
                 ", ".join(f"{i}. {m!r}" for i, m in enumerate(ranking, 1)))
        counts = len(ranking) > 1 and room.played_for() >= MIN_GAME_SECONDS
        today = time.strftime("%Y-%m-%d")
        settle = {}               # member -> (finish on its record, TP)
        host_bonus = self._host_bonus(room)
        for rank, member_id in enumerate(ranking, 1):
            tp = GAME_POINTS[min(rank, len(GAME_POINTS)) - 1] if counts else 0
            if member_id == room.host and host_bonus:
                tp += HOST_POINTS
            play = room.plays.get(member_id) or Play()
            settle[member_id] = (partial(finish, players=len(ranking), rank=rank,
                                         bonus_percent=self._bonus(room, member_id,
                                                                   host_bonus), tp=tp,
                                         grade_reward=GRADE_REWARD, today=today, play=play)
                                 if counts else _unchanged, tp)
        shown = {m: f(self.lobby.shop.wallet(m).record) for m, (f, _) in settle.items()}
        room.post(pack("Room_OrderTypeLetsGameEndTetrisToC", reports=[
            views.game_report(m, rank, shown[m], settle[m][1], room.plays.get(m) or Play())
            for rank, m in enumerate(ranking, 1)]))
        room.post(pack("Room_GameReportToC", members=[
                      views.score_report(m, shown[m].after) for m in ranking]),
                  pack("Room_OrderTypeGameReportTetrisToC", room=room.number, reports=[
                      dict(member=m, today_tp=shown[m].after.today_tp) for m in ranking]))
        self._show(room)
        if counts:
            self.lobby.spawn(self.keep_results(settle))

    def _host_bonus(self, room: Room) -> int:
        """The % more 내공 the host wins with super or plus room host (0 without)."""
        owns = self.lobby.shop.owns
        return (SUPER_HOST_BONUS if owns(room.host, SUPER_HOST)
                else PLUS_HOST_BONUS if owns(room.host, PLUS_HOST) else 0)

    def _bonus(self, room: Room, member_id: bytes, host_bonus: int) -> int:
        """The % more 내공 a player wins: the host's room-host bonus, and twice all of it
        with 내공 time."""
        percent = host_bonus if member_id == room.host else 0
        owns = self.lobby.shop.owns
        return 2 * percent + 100 if any(owns(member_id, i) for i in RATING_TIME) else percent

    async def keep_results(self, settle: dict) -> None:
        """Keep each player's result, on its record as kept (a player who left the channel
        may not be here). The players' TP balance and everyone's member list update."""
        for member_id, (finish_on, tp) in settle.items():
            result, before, after = await self.lobby.shop.finish_game(member_id, finish_on, tp)
            player = self.lobby.players.get(member_id)
            if player:
                player.session.post(views.points_changed(before, after))
            self.lobby.post(views.refresh(member_id, result.after))

    @on("Room_OrderTypeSingleModeGameReportTetrisToS")
    async def single_mode_report(self, request: dict) -> None:
        """A Single Mode game is over: the reply carries the mode's new standing, which
        the result screen shows, this game's result first."""
        if request["member"] != self.member_id:
            log.warning("%s: report for %r ignored", self.session.peer, request["member"])
            return
        report = GameReport(self.member_id, request["mode"], request["value"],
                            bool(request["completed"]))
        standing = await self.lobby.records.add_game(report)
        result = report.value if report.completed else 0
        await self.session.send(pack(
            "Room_OrderTypeSingleModeGameReportTetrisToC", member=self.member_id,
            report=dict(member=self.member_id),
            standing=views.single_mode(report.mode, standing, result)))


def _unchanged(record) -> Result:
    """A game that does not count leaves a record as it was."""
    return Result(record, record, 0, 0)
