"""Channel service: login replies, lobby lists and Single Mode room creation."""
import dataclasses

from . import messages as m
from .lobby import Lobby
from .messages import Endpoint, Msg
from .xdr import Reader
from .xlbp import Session, serve_messages


class ChannelConnection:
    def __init__(self, session: Session, lobby: Lobby, game: Endpoint):
        self.session = session
        self.lobby = lobby
        self.game = game
        self.member_id: bytes | None = None
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
        }

    async def run(self) -> None:
        try:
            await serve_messages(self.session, self.handlers)
        finally:
            if self.member_id:
                self.lobby.close_rooms_of(self.member_id)

    async def on_auth(self, r: Reader) -> None:
        await self.session.send(m.auth_to_c())

    async def on_get_user_id(self, r: Reader) -> None:
        self.member_id = r.string()
        await self.session.send(m.get_user_id_to_c(self.member_id))

    async def on_enter_channel(self, r: Reader) -> None:
        request = m.read_enter_channel(r)
        self.member_id = request.member_id
        # MetpInfo(4).k23e/k24e come back from this reply; Msg_SendEnterRoom needs them.
        await self.session.send(m.enter_channel_to_c(request.k23e, request.k24e))
        # The player's own record (layer 0, found by SGlobalInfo::MyData()) and its
        # Tetris profile (layer 3, read by the Single Mode scene).
        member = request.member_id
        await self.session.send_layers({
            0: m.get_member_info_to_c(member),
            3: m.get_member_info_tetris(
                member, [self.lobby.single_mode(member, mode) for mode in range(m.SINGLE_MODES)]),
        })

    async def on_get_member_list(self, r: Reader) -> None:
        await self.session.send(m.get_member_list_to_c())

    async def on_get_room_list(self, r: Reader) -> None:
        await self.session.send(m.get_room_list_to_c(self.lobby.rooms()))

    async def on_get_item_state(self, r: Reader) -> None:
        await self.session.send(m.get_item_state_to_c())

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
        await self.session.send(m.create_room_to_c(room, self.game))
        await self.session.send(m.room_info_to_c(room))
