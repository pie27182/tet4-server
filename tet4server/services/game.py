"""The game socket: one room, from entering it to leaving, and its games.

The client connects here when CreateRoomToC, GameJoinRoomToC or the Single Mode reply
names this socket. In a game the clients run everything themselves: the server passes
their in-game messages on to the others in the room, and keeps the score of who is out.
"""
import logging

from ..config import (FAILED, GAME_POINTS, MAP_PLACES, MIN_GAME_SECONDS, NEXT_PIECES,
                      NO_SUCH_ROOM, UNLIMITED_HOLD)
from ..domain.lobby import Lobby
from ..domain.records import GameReport
from ..domain.room import Member, Room
from ..protocol.codec import Message, pack, unpack
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
    "Room_OrderTypeComboTetris", "Room_OrderTypeGameEndOkTetris",
    "Room_OrderTypeGameStartOkTetris", "Room_OrderTypeGarbageSendTetris",
    "Room_OrderTypeGageInfoTetris", "Room_OrderTypeIAmClearTetris",
    "Room_OrderTypeIMSITetris", "Room_OrderTypeItemApplyTetris",
    "Room_OrderTypeItemGetTetris", "Room_OrderTypeItemReflectTetris",
    "Room_OrderTypeItemRemoveTetris", "Room_OrderTypeItemSendTetris",
    "Room_OrderTypeItemStealTetris", "Room_OrderTypeItemStoleTetris",
    "Room_OrderTypeItemStolenTetris", "Room_OrderTypeItemUseTetris",
    "Room_OrderTypeLineUpTetris", "Room_OrderTypeMapSetSyncTetris",
    "Room_OrderTypeMapUpdateTetris",
    "Room_OrderTypePolyMinoPutPieceTetris", "Room_OrderTypePolyMinoPutTetris",
    "Room_OrderTypeRankOfMeTetris", "Room_OrderTypeRequestBanishMemberTetris",
    "Room_OrderTypeResponseBanishMemberTetris", "Room_OrderTypeRoomInfoTetris",
    "Room_OrderTypeRoomOptionRelay", "Room_OrderTypeSetSpeedLevelTetris",
    "Room_OrderTypeSwitchMatrixTetris", "Room_OrderTypeSwitchResultTetris",
    "Room_OrderTypeTeamSetAutoTetris", "Room_OrderTypeTon10Tetris",
    "Room_OrderTypeTriTetTetris", "RoomOrderTypeSetSkipCountTetris",
    "RoomOrderTypeShadowEndTetris", "RoomOrderTypeShadowTimeoverTetris",
)


def seated(room: Room, member: Member) -> Message:
    """A member in its seat, for a member's game: the client seats the player and, for
    its own player, keeps the counts it reads on leaving the room."""
    return pack("Room_AddMemberToC", host=room.host, seat=member.seat, member=member.member_id,
                k7e=member.member_id, k11e=b"M")


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
            self.session.post(seated(room, other))
        room.post(seated(room, member), exclude=self)
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

    # --- games ---------------------------------------------------------------------------

    @on("Room_StartNewGameToS")
    async def start_new_game(self, request: dict) -> None:
        """A game starts in the room, with each player's items for it: unlimited hold
        lifts the hold limit, and next shows more of the coming pieces."""
        room = self.room
        if room is None or (room.host != self.member_id and not room.single):
            return
        room.playing = True
        owns = self.lobby.shop.owns
        room.post(pack("Room_StartNewGameToC"), pack(
            "Room_OrderTypeStartNewGameTetrisToC",
            items=[dict(member=m.member_id, hold=owns(m.member_id, UNLIMITED_HOLD),
                        next=owns(m.member_id, NEXT_PIECES)) for m in room.members]))
        self._show(room)

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
            await self.end_game(self.room)

    async def end_game(self, room: Room) -> None:
        """The result board: one report per player, winner first, with rank and levels.
        Then the game report, which resets the seats and closes the board five seconds
        later, and TP for the players."""
        ranking = room.ranking()
        if not room.single and len(ranking) > 1:
            await self.lobby.ratings.add_game(ranking)
        log.info("room %d: game over, %s", room.number,
                 ", ".join(f"{i}. {m!r}" for i, m in enumerate(ranking, 1)))
        room.post(pack("Room_OrderTypeLetsGameEndTetrisToC", reports=[
            dict(member=member_id, rank=rank, level=1, level_after=1)
            for rank, member_id in enumerate(ranking, 1)]))
        players = [dict(member=member_id) for member_id in ranking]
        room.post(pack("Room_GameReportToC", members=players),
                  pack("Room_OrderTypeGameReportTetrisToC", room=room.number, reports=players))
        self._show(room)
        if room.played_for() >= MIN_GAME_SECONDS:
            self.lobby.spawn(self.reward(ranking))

    async def reward(self, ranking: list[bytes]) -> None:
        """TP for a finished game by rank; each player's lobby shows the new balance."""
        for rank, member_id in enumerate(ranking, 1):
            points = GAME_POINTS[min(rank, len(GAME_POINTS)) - 1]
            before, after = await self.lobby.shop.earn(member_id, points)
            player = self.lobby.players.get(member_id)
            if player:
                player.session.post(views.points_changed(before, after))

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
