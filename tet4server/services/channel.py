"""The channel socket: login, the lobby (players, chat, the room list), creating and
joining rooms, invitations, profiles and the shop."""
import asyncio
import logging

from ..config import (DAILY_ROOMS, EMBLEM, FAILED, MAX_MEMBERS, NO_FREE_SLOT, NO_SUCH_ROOM,
                      ROOM_FULL, SEATS, TITLE, WRONG_PASSWORD)
from ..domain.lobby import Lobby, Player
from ..domain.room import Room, Settings
from ..protocol.codec import Message, pack
from ..protocol.dispatch import Connection, on
from ..protocol.session import Session
from ..protocol.wire import Endpoint
from ..storage import Database
from . import views
from .views import CHANNEL

log = logging.getLogger("tet4.channel")

# Room fields the client sets and reads back, which the server keeps as they came.
ECHOED = ("k127e", "k200e", "k69e")


def settings_from(request: dict) -> Settings:
    """A room's settings from a request to create it."""
    return Settings(title=request["title"], password=request["password"],
                    options=request["options"], limit=request["limit"],
                    echo={key: request[key] for key in ECHOED if key in request})


class ChannelConnection(Connection):
    def __init__(self, session: Session, lobby: Lobby, game: Endpoint,
                 db: Database | None = None):
        super().__init__(session)
        self.lobby = lobby
        self.game = game                     # the game socket rooms are played on
        self.db = db
        self.account: bytes | None = None    # with accounts, the one a valid ticket named
        self.member_id: bytes | None = None
        self.player: Player | None = None
        self.single_mode_request: dict | None = None   # for the CreateRoomToS after it

    async def run(self) -> None:
        try:
            await self.serve()
        finally:
            self.leave()

    def leave(self) -> None:
        if self.player and self.lobby.leave(self.player):
            self.lobby.post(views.departure(self.player.member_id))
            self.lobby.shop.forget(self.player.member_id)
        if self.member_id:
            for room in self.lobby.close_rooms_of(self.member_id):
                if not room.single:
                    self.lobby.post(views.free_slot(room.number))

    def _claim(self, member_id: bytes) -> bytes:
        """The member this connection acts as; with accounts, only the logged-in one."""
        if self.db and member_id != self.account:
            raise ConnectionRefusedError(f"{member_id!r} is not the logged-in account")
        return member_id

    # --- login ---------------------------------------------------------------------------

    @on("AuthToS")
    async def auth(self, request: dict) -> None:
        """The login ticket. Any login_result but 0 stops the client at a notice."""
        if self.db is None:
            await self.session.send(pack("AuthToC"))
            return
        account, ticket = request["key"]["member"], request["ticket"]
        valid = await asyncio.to_thread(self.db.check_ticket, account.decode("latin-1"),
                                        ticket.decode("latin-1"))
        if not valid:
            await self.session.send(pack("AuthToC", login_result=1))
            raise ConnectionRefusedError(f"invalid ticket for {account!r}")
        self.account = account
        log.info("%s logged in as %r", self.session.peer, account)
        await self.session.send(pack("AuthToC"))

    @on("Channel_GetUserIdByMemberIdToS")
    async def user_id(self, request: dict) -> None:
        self.member_id = self._claim(request["member"])
        await self.session.send(pack("Channel_GetUserIdToC", member=self.member_id))

    @on("Channel_EnterChannelByUserIdToS")
    async def enter_channel(self, request: dict) -> None:
        member = self.member_id = self._claim(request["member"])
        if len(self.lobby.players) >= MAX_MEMBERS and member not in self.lobby.players:
            await self.session.send(pack("Channel_EnterChannelToC", result=FAILED))
            raise ConnectionRefusedError(f"channel full, {member!r} refused")
        # The player's wallet and records as the database has them now: the player may
        # have played in another channel since this one last saw them.
        await self.lobby.shop.load(member)
        await self.lobby.records.load(member)
        # The client sends sub_id and channel_id back in its room requests, and seats a
        # room's members by room_size (so that it knows which room each member is in).
        await self.session.send(pack("Channel_EnterChannelToC", sub_id=request["sub_id"],
                                     channel_id=request["channel_id"], room_size=SEATS))
        await self.session.send(*views.own_record(self.lobby, member))
        # Rooms the player may still create today: the create dialog needs some left.
        await self.session.send(pack("Channel_OrderTypeDayCntInfoTetrisToC", member=member,
                                     used=0, allowed=DAILY_ROOMS))
        self.player = Player(member, self.session.host, self.session)
        old = self.lobby.enter(self.player)
        if old is not None and old.session is not self.session:
            old.session.close()
        self.lobby.post(*views.arrival(self.lobby, self.player), exclude=self.player)

    # --- the lobby -----------------------------------------------------------------------

    @on("Channel_GetMemberListToS")
    async def member_list(self, request: dict) -> None:
        players = list(self.lobby.players.values())
        await self.session.send(
            pack("Channel_GetMemberListToC", CHANNEL,
                 members=[views.member_row(p) for p in players]),
            pack("Channel_OrderTypeGetMemberListTetrisToC",
                 profiles=[views.profile(self.lobby, p.member_id) for p in players]))

    @on("Channel_GetRoomListToS")
    async def room_list(self, request: dict) -> None:
        # The client reads room_count rooms, not the vector's length.
        slots = views.room_list(self.lobby)
        await self.session.send(pack("Channel_GetRoomListToC", CHANNEL, room_count=len(slots),
                                     rooms=slots))

    @on("Item_GetItemStateToS")
    async def item_state(self, request: dict) -> None:
        # Without a reply the client leaves the channel a few seconds later.
        await self.session.send(pack("Item_GetItemStateToC"))

    @on("Chatting_ChatStringToS")
    async def chat(self, request: dict) -> None:
        if self.player:
            self.lobby.post(pack("Chatting_ChatStringToC", request, member=self.player.member_id))

    @on("Chatting_HanChatStringToS")
    async def lobby_chat(self, request: dict) -> None:
        """Lobby chat, to everyone in the channel under the sender's real member id; the
        sender too, as the client shows its own line from the echo."""
        if self.player:
            chat = dict(request["chat"], member=self.player.member_id)
            self.lobby.post(pack("Chatting_HanChatStringToC", chat=chat))

    @on("Channel_ComplaintSvcKorToS")
    async def report(self, request: dict) -> None:
        """The lobby's report button (신고): kept for the operators. The client confirms
        it to the player by itself."""
        if self.player:
            self.lobby.report(self.player.member_id, request)

    # --- creating and joining rooms ------------------------------------------------------

    @on("Room_OrderTypeAutoEnterSingleModeRoomTetrisToS")
    async def single_mode(self, request: dict) -> None:
        """The Single Mode button. The reply sends the request back, with no room yet and
        the game socket to play on; the client then creates the room itself."""
        self.single_mode_request = request
        await self.session.send(pack(
            "Room_OrderTypeAutoEnterSingleModeRoomTetrisToC", request, member=b"",
            game_host=self.game.host.encode("ascii"), game_port=self.game.port))

    @on("Channel_CreateRoomToS")
    async def create_room(self, request: dict) -> None:
        # The CreateRoomToS after the Single Mode button leaves the options empty: the
        # room gets the mode asked for there.
        if not request["options"] and self.single_mode_request:
            request["options"] = self.single_mode_request["options"]
        self.single_mode_request = None
        room = self._create(request)
        await self.session.send(self._created(room, request))
        if room is not None and room.single:
            await self.session.send(views.room_news(room))

    @on("Channel_AutoEnterRoomToS")
    async def create_room_from_dialog(self, request: dict) -> None:
        """The create dialog asks for a room this way, in any slot. Its reply only reports
        success; the CreateRoomToC after it makes the client connect to the game socket."""
        room = self._create(request)
        await self.session.send(pack("Channel_AutoEnterRoomToC", result=b"" if room else FAILED))
        await self.session.send(self._created(room, request))

    def _create(self, request: dict) -> Room | None:
        room = self.lobby.create_room(self.member_id or request["member"],
                                      settings_from(request), wanted=request["room"])
        if room is not None and not room.single:
            self.lobby.post(views.room_news(room))
        return room

    def _created(self, room: Room | None, request: dict) -> Message:
        """CreateRoomToC: the room's settings back with its number and player limit, and
        the game socket (the host right before the port)."""
        s = room.settings if room else settings_from(request)
        return pack("Channel_CreateRoomToC", views.echo(s, "Channel_CreateRoomToC"),
                    result=b"" if room else FAILED, failcode=0 if room else NO_FREE_SLOT,
                    room=room.number if room else 0, limit=room.limit if room else 0,
                    title=s.title, password=s.password, options=s.options,
                    game_id=request["game_id"], sub_id=request["sub_id"],
                    channel_id=request["channel_id"],
                    game_host=self.game.host.encode("ascii"), game_port=self.game.port)

    @on("Channel_GameJoinRoomToS")
    async def join_room(self, request: dict) -> None:
        """A room picked from the room list (or by quick join, which the client picks)."""
        room = self.lobby.rooms.get(request["room"])
        failcode = 0
        if room is None or room.single or self.member_id in room.banished:
            failcode = NO_SUCH_ROOM
        elif room.private and request["password"] != room.settings.password:
            failcode = WRONG_PASSWORD
        elif room.seat_free() is None or room.playing:
            failcode = ROOM_FULL
        s = room.settings if room else Settings()
        await self.session.send(pack(
            "Channel_GameJoinRoomToC", {**CHANNEL, **views.echo(s, "Channel_GameJoinRoomToC")},
            failcode=failcode, result=FAILED if failcode else b"", room=request["room"],
            title=s.title, password=s.password, limit=room.limit if room else 0,
            options=s.options, game_host=self.game.host.encode("ascii"),
            game_port=self.game.port))

    # --- invitations ---------------------------------------------------------------------

    @on("Channel_InviteGameToMemberToS")
    async def invite(self, request: dict) -> None:
        """초대하기: a player in a room invites one in the lobby, who is asked with the
        room's number, title and password and the invitation's text. A player who cannot
        be asked answers at once, for the inviter's waiting dialog to close."""
        room = self.player.room if self.player else None
        target = self.lobby.players.get(request["target"])
        if room is None or target is None or target.room is not None:
            await self.session.send(pack("Channel_ResponseInviteGameToC", member=request["target"],
                                         inviter=request["member"], k64e=1))
            return
        target.session.post(pack(
            "Channel_InviteGameToMemberToC", member=self.player.member_id, room=room.number,
            title=room.settings.title, password=room.settings.password,
            message=request["message"]))

    @on("Channel_ResponseInviteGameToS")
    async def invite_answer(self, request: dict) -> None:
        """The invited player's answer, for the player who asked, whose waiting dialog
        closes. The client answers alike whether it accepts or declines (k64e 0);
        accepting, it then joins the room by itself."""
        inviter = self.lobby.players.get(request["inviter"])
        if inviter and self.player:
            inviter.session.post(pack(
                "Channel_ResponseInviteGameToC", member=self.player.member_id,
                inviter=request["inviter"], k64e=request["k64e"]))

    # --- profiles ------------------------------------------------------------------------

    @on("Channel_OrderTypeGetDisplayMemberInfoTetrisToS")
    async def profile(self, request: dict) -> None:
        """A player's profile: the member info dialog, and the player's own emblem and
        title lists (the lobby's 엠블럼 and 호칭 buttons)."""
        await self.session.send(views.display_profile(self.lobby, request["member"],
                                                      request["kind"]))

    @on("Channel_OrderTypeChangeDisplayMemberInfoToS")
    async def show(self, request: dict) -> None:
        """Show an owned emblem and title (empty: none); everyone's lobby updates. The
        client sends both, the one it changes and the one shown."""
        if self.player is None:
            return
        member = self.player.member_id
        if await self.lobby.shop.show(member, request["emblem"].decode("latin-1"),
                                      request["title"].decode("latin-1")):
            self.lobby.post(views.shown_decorations(member, self.lobby.shop.wallet(member)))

    @on("Channel_RequestDeleteEmblemToS")
    async def discard_emblem(self, request: dict) -> None:
        await self._discard(request["code"], EMBLEM, "Channel_ResponseDeleteEmblemToC")

    @on("Channel_RequestDeleteAliasToS")
    async def discard_title(self, request: dict) -> None:
        await self._discard(request["code"], TITLE, "Channel_ResponseDeleteAliasToC")

    async def _discard(self, code: bytes, kind: str, reply: str) -> None:
        """The emblem and title lists' trash button: the item goes, and the list drops it
        when told so. If it was shown, none is, for everyone."""
        if self.player is None:
            return
        member = self.player.member_id
        done, shown = await self.lobby.shop.discard(member, code.decode("latin-1"), kind)
        await self.session.send(pack(reply, code=code, done=done))
        if shown:
            self.lobby.post(views.shown_decorations(member, self.lobby.shop.wallet(member)))

    @on("Channel_CouponCountToS")
    async def coupon_count(self, request: dict) -> None:
        """The coupons a player holds: there are none."""
        if self.player:
            await self.session.send(pack("Channel_CouponCountToC", member=self.player.member_id))

    # --- the shop ------------------------------------------------------------------------

    @on("Shop_GetShopInfoToS")
    async def shop_info(self, request: dict) -> None:
        await self.session.send(views.shop_info())

    @on("Shop_GetInventoryInfoToS")
    async def inventory(self, request: dict) -> None:
        # Asked on entering the lobby, which shows the TP from it, and by the shop.
        if self.player:
            await self.session.send(views.inventory(self.lobby.shop.wallet(self.player.member_id)))

    @on("Shop_GetPointInfoToS")
    async def points(self, request: dict) -> None:
        if self.player:
            await self.session.send(views.points(self.lobby.shop.wallet(self.player.member_id),
                                                 request["kind"]))

    @on("Shop_ReqBuyProductToS")
    async def buy(self, request: dict) -> None:
        """Buy a product with TP. Status C completes the purchase in the buy window; a
        nonzero result shows the error text instead."""
        if self.player is None:
            return
        member = self.player.member_id
        before = self.lobby.shop.wallet(member).points
        error = await self.lobby.shop.buy(member, request["code"].decode("latin-1"),
                                          request["quantity"])
        await self.session.send(pack(
            "Shop_ResBuyProductToC", code=request["code"], quantity=request["quantity"],
            gift=request["gift"], receiver=request["receiver"], result=int(error is not None),
            error=error or "", status=b"" if error else b"C"))
        if error is None:
            wallet = self.lobby.shop.wallet(member)
            await self.session.send(views.points_changed(before, wallet.points))
            await self.session.send(views.inventory(wallet))

    @on("Shop_RequestCanPurchaseToS")
    async def can_purchase(self, request: dict) -> None:
        await self.session.send(pack("Shop_ResponseCanPurchaseToC", code=request["code"]))
