"""Channel service: login, the lobby (players, chat, room list) and room creation."""
import asyncio
import dataclasses
import logging

from . import messages as m
from . import profiles, schema, shop
from .accounts import Database
from .lobby import Lobby, Player
from .messages import Endpoint, Msg
from .profiles import member_info, tetris_info
from .room import Room, room_info_to_c
from .xdr import Reader
from .xlbp import Session, serve_messages

log = logging.getLogger("tet4.channel")

CHANNEL_KEYS = dict(k22e=b"TET4", k23e=b"", k24e=b"1")   # GameID, sub id, channel
DAILY_ROOMS = 99          # rooms a player may create per day without a room-host item


def add_member_batch(lobby: Lobby, member_id: bytes) -> dict[int, bytes]:
    """Channel_AddMemberToC with its Tetris profile at layer 3, for the other players."""
    return {
        0: schema.pack("Channel_AddMemberToC", CHANNEL_KEYS, k3e=member_id, k7e=member_id,
                       k11e=b"M"),
        3: schema.pack_as("Channel_AddMemberToC", "Channel_OrderTypeAddMemberTetrisToC",
                          member=tetris_info(lobby, member_id)),
    }


def create_room_to_c(room: Room | None, request: m.RoomRequest, game: Endpoint) -> bytes:
    """Channel_CreateRoomToC (Tet4.exe converter 0x00441E90): the room's fields back with
    its number in k42e and its player limit in k66e, and the game endpoint, the host
    in the string right before the port. failcode 1 refuses (no free room slot)."""
    f = room.fields if room else request
    return schema.pack(
        "Channel_CreateRoomToC", failcode=0 if room else 1, k1e=b"" if room else b"v2e",
        k42e=room.number if room else 0, k67e=f.k67e, k45e=f.k45e, k46e=f.k46e,
        k127e=f.k127e, k66e=room.limit if room else 0, k200e=f.k200e, k69e=f.k69e,
        k22e=f.k22e, k23e=f.k23e, k24e=f.k24e, k52e=game.host.encode("ascii"), k53e=game.port)


class ChannelConnection:
    def __init__(self, session: Session, lobby: Lobby, game: Endpoint,
                 db: Database | None = None):
        self.session = session
        self.lobby = lobby
        self.game = game
        self.db = db
        self.account: bytes | None = None    # set by a valid ticket when db is set
        self.member_id: bytes | None = None
        self.player: Player | None = None
        self.auto_enter: m.RoomRequest | None = None
        self.handlers = {
            (0, Msg.AuthToS): self.on_auth,
            (0, Msg.Channel_GetUserIdByMemberIdToS): self.on_get_user_id,
            (0, Msg.Channel_EnterChannelByUserIdToS): self.on_enter_channel,
            (0, Msg.Channel_GetMemberListToS): self.on_get_member_list,
            (0, Msg.Channel_GetRoomListToS): self.on_get_room_list,
            (0, Msg.Item_GetItemStateToS): self.on_get_item_state,
            (3, Msg.Room_OrderTypeAutoEnterSingleModeRoomTetrisToS): self.on_auto_enter,
            (0, Msg.Channel_CreateRoomToS): self.on_create_room,
            (0, schema.message_id("Channel_GameJoinRoomToS")): self.on_join_room,
            (0, schema.message_id("Channel_AutoEnterRoomToS")): self.on_auto_enter_room,
            (0, schema.message_id("Chatting_ChatStringToS")): self.on_chat,
            (0, schema.message_id("Chatting_HanChatStringToS")): self.on_han_chat,
            (3, schema.message_id("Shop_GetShopInfoToS")): self.on_get_shop_info,
            (3, Msg.Shop_GetInventoryInfoToS): self.on_get_inventory,
            (3, schema.message_id("Shop_GetPointInfoToS")): self.on_get_points,
            (3, schema.message_id("Shop_ReqBuyProductToS")): self.on_buy,
            (3, schema.message_id("Shop_RequestCanPurchaseToS")): self.on_can_purchase,
            (3, Msg.Channel_OrderTypeGetDisplayMemberInfoTetrisToS): self.on_get_profile,
            (3, schema.message_id("Channel_OrderTypeChangeDisplayMemberInfoToS")): self.on_show,
        }

    async def run(self) -> None:
        try:
            await serve_messages(self.session, self.handlers)
        finally:
            self.leave()

    def leave(self) -> None:
        if self.player and self.lobby.leave(self.player):
            self.lobby.post(schema.pack("Channel_DeleteMemberToC", CHANNEL_KEYS,
                                        k3e=self.player.member_id))
        if self.member_id:
            self.lobby.close_rooms_of(self.member_id)

    def _claim(self, member_id: bytes) -> bytes:
        """The member this connection acts as; with accounts, only the logged-in one."""
        if self.db and member_id != self.account:
            raise ConnectionRefusedError(f"{member_id!r} is not the logged-in account")
        return member_id

    async def on_auth(self, r: Reader) -> None:
        if self.db is None:
            await self.session.send(m.auth_to_c())
            return
        account, ticket = m.read_auth(r)
        valid = await asyncio.to_thread(self.db.check_ticket, account.decode("latin-1"),
                                        ticket.decode("latin-1"))
        if not valid:
            await self.session.send(m.auth_to_c(result=1))
            raise ConnectionRefusedError(f"invalid ticket for {account!r}")
        self.account = account
        log.info("%s logged in as %r", self.session.peer, account)
        await self.session.send(m.auth_to_c())

    async def on_get_user_id(self, r: Reader) -> None:
        self.member_id = self._claim(r.string())
        await self.session.send(m.get_user_id_to_c(self.member_id))

    async def on_enter_channel(self, r: Reader) -> None:
        request = m.read_enter_channel(r)
        member = self.member_id = self._claim(request.member_id)
        # MetpInfo(4).k23e/k24e come back from this reply; Msg_SendEnterRoom needs them.
        await self.session.send(m.enter_channel_to_c(request.k23e, request.k24e))
        # The player's own record (layer 0, found by SGlobalInfo::MyData()) and its
        # Tetris profile (layer 3, read by the Single Mode scene).
        await self.session.send_layers({
            0: m.get_member_info_to_c(member),
            3: profiles.member_info_tetris(self.lobby, member),
        })
        # Rooms a player may still create today (FUN_00491830 compares allowed - used).
        await self.session.send(schema.pack(
            "Channel_OrderTypeDayCntInfoTetrisToC", k3e=member, used=0, allowed=DAILY_ROOMS),
            layer=3)
        self.player = Player(member, self.session.host, self)
        old = self.lobby.enter(self.player)
        if old is not None and old.channel is not self:
            old.channel.session.close()
        self.lobby.post(add_member_batch(self.lobby, member), exclude=self.player)

    async def on_get_member_list(self, r: Reader) -> None:
        players = list(self.lobby.players.values())
        await self.session.send_layers({
            0: schema.pack("Channel_GetMemberListToC", CHANNEL_KEYS,
                           members=[member_info(p.member_id) for p in players]),
            3: schema.pack_as("Channel_GetMemberListToC", "Channel_OrderTypeGetMemberListTetrisToC",
                              members=[tetris_info(self.lobby, p.member_id) for p in players]),
        })

    async def on_get_room_list(self, r: Reader) -> None:
        # Msg_FillRoomList (HgModel3 0x60909BE0) reads k51e rooms, not the vector's length.
        slots = self.lobby.room_slots()
        await self.session.send(schema.pack(
            "Channel_GetRoomListToC", CHANNEL_KEYS, k51e=len(slots), rooms=slots))

    async def on_get_item_state(self, r: Reader) -> None:
        await self.session.send(m.get_item_state_to_c())

    async def on_chat(self, r: Reader) -> None:
        chat = schema.unpack("Chatting_ChatStringToS", r)
        if self.player is None:
            return
        chat["k3e"] = self.player.member_id
        self.lobby.post(schema.pack("Chatting_ChatStringToC", chat))

    async def on_han_chat(self, r: Reader) -> None:
        """Lobby chat: echoed to everyone in the channel, the sender included (the client
        shows its own line from the echo), under the sender's real member id."""
        chat = schema.unpack("Chatting_HanChatStringToS", r)["chat"]
        if self.player is None:
            return
        chat["k3e"] = self.player.member_id
        self.lobby.post(schema.pack("Chatting_HanChatStringToC", chat=chat))

    async def on_auto_enter(self, r: Reader) -> None:
        # Echo the requested room with room number 0 and the game endpoint; the
        # client then creates the room itself with CreateRoomToS.
        request = m.read_room_request(r)
        self.auto_enter = request
        await self.session.send(m.auto_enter_single_mode_to_c(request, self.game), layer=3)

    async def on_create_room(self, r: Reader) -> None:
        request = m.read_room_request(r)
        # The CreateRoomToS that follows AutoEnter leaves the room option empty;
        # the room gets the mode the client asked for in AutoEnter.
        if not request.k46e and self.auto_enter:
            request = dataclasses.replace(request, k46e=self.auto_enter.k46e)
        self.auto_enter = None
        room = self.lobby.create_room(self.member_id or request.member_id, request)
        await self.session.send(create_room_to_c(room, request, self.game))
        if room is not None and room.single:
            await self.session.send(room_info_to_c(room))

    async def on_auto_enter_room(self, r: Reader) -> None:
        """The create-room dialog (Msg_SetCreateRoomReturn, Tet4.exe 0x004CA230) asks
        for a room this way, any slot (k42e -1). The reply only reports success
        (Net_Channel_AutoEnterRoom, HgCtr3 0x6020A4B0 acts on failure alone); the
        CreateRoomToC after it makes the client connect to the game socket."""
        f = schema.unpack("Channel_AutoEnterRoomToS", r)
        request = m.RoomRequest(
            member_id=self.member_id or f["k3e"], k42e=f["k42e"] if f["k42e"] < 1 << 31 else 0,
            k67e=f["k67e"], k45e=f["k45e"], k46e=f["k46e"], k127e=f["k127e"], k66e=f["k66e"],
            k200e=f["k200e"], k69e=0, k22e=f["k22e"], k23e=f["k23e"], k24e=f["k24e"])
        room = self.lobby.create_room(request.member_id, request)
        await self.session.send(schema.pack("Channel_AutoEnterRoomToC",
                                            k1e=b"" if room else b"v2e"))
        await self.session.send(create_room_to_c(room, request, self.game))

    async def on_join_room(self, r: Reader) -> None:
        request = schema.unpack("Channel_GameJoinRoomToS", r)
        room = self.lobby.rooms.get(request["k42e"])
        failcode = 0
        if room is None or room.single:
            failcode = 1
        elif room.private and request["k67e"] != room.fields.k67e:
            failcode = 2
        elif room.seat_free() is None or room.playing:
            failcode = 3
        f = room.fields if room else m.RoomRequest(b"", 0, b"", b"", b"", 0, 0, b"", 0, b"", b"", b"")
        await self.session.send(schema.pack(
            "Channel_GameJoinRoomToC", CHANNEL_KEYS, failcode=failcode,
            k1e=b"v2e" if failcode else b"", k42e=request["k42e"], k45e=f.k45e, k67e=f.k67e,
            k127e=f.k127e, k66e=room.limit if room else 0, k46e=f.k46e, k200e=f.k200e,
            k52e=self.game.host.encode("ascii"), k53e=self.game.port))

    # --- the shop ---------------------------------------------------------------

    async def on_get_shop_info(self, r: Reader) -> None:
        await self.session.send(shop.SHOP_INFO, layer=3)

    async def on_get_inventory(self, r: Reader) -> None:
        # Sent on entering the lobby and by the shop; the lobby shows the TP from it.
        if self.player:
            wallet = self.lobby.shop.wallet(self.player.member_id)
            await self.session.send(shop.inventory_info_to_c(wallet), layer=3)

    async def on_get_points(self, r: Reader) -> None:
        kind = schema.unpack("Shop_GetPointInfoToS", r)["kind"]
        if self.player:
            amount = self.lobby.shop.wallet(self.player.member_id).points if kind == b"TP" else 0
            await self.session.send(
                schema.pack("Shop_GetPointInfoToC", kind=kind, amount=amount), layer=3)

    async def on_buy(self, r: Reader) -> None:
        """Buy a product with TP. The reply's status C completes the purchase in the
        buy window (Tet4.exe 0x0054DEB0); a nonzero result shows its error text."""
        request = schema.unpack("Shop_ReqBuyProductToS", r)
        if self.player is None:
            return
        member = self.player.member_id
        wallet = self.lobby.shop.wallet(member)
        before = wallet.points
        error = self.lobby.shop.buy(member, request["code"].decode("latin-1"),
                                    request["quantity"])
        await self.session.send(schema.pack(
            "Shop_ResBuyProductToC", code=request["code"], quantity=request["quantity"],
            gift=request["gift"], receiver=request["receiver"], result=int(error is not None),
            error=error or "", status=b"" if error else b"C"), layer=3)
        if error is None:
            await self.session.send(shop.change_point_info_to_c(before, wallet.points), layer=3)
            await self.session.send(shop.inventory_info_to_c(wallet), layer=3)

    async def on_can_purchase(self, r: Reader) -> None:
        code = schema.unpack("Shop_RequestCanPurchaseToS", r)["code"]
        await self.session.send(schema.pack("Shop_ResponseCanPurchaseToC", code=code), layer=3)

    # --- profiles ---------------------------------------------------------------

    async def on_get_profile(self, r: Reader) -> None:
        """A player's profile: the member info dialog, and the player's own emblem and
        title lists (the lobby's 엠블럼 and 호칭 buttons ask for them)."""
        request = schema.unpack("Channel_OrderTypeGetDisplayMemberInfoTetrisToS", r)
        await self.session.send(
            profiles.display_member_info(self.lobby, request["k3e"], request["kind"]), layer=3)

    async def on_show(self, r: Reader) -> None:
        """Show an owned emblem and title (empty: none); everyone's lobby updates. The
        client sends both, the one it changes and the one shown (0x004E8660)."""
        request = schema.unpack("Channel_OrderTypeChangeDisplayMemberInfoToS", r)
        if self.player is None:
            return
        member = self.player.member_id
        if self.lobby.shop.show(member, request["title"].decode("latin-1"),
                                request["emblem"].decode("latin-1")):
            self.lobby.post({3: profiles.change_display_member_info(
                member, self.lobby.shop.wallet(member))})
