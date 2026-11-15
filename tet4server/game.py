"""Game service: the Single Mode room on the socket that AutoEnter/CreateRoom name."""
import logging

from . import messages as m
from .lobby import Lobby
from .messages import Msg
from .xdr import Reader
from .xlbp import Session, serve_messages

log = logging.getLogger("tet4.game")


class GameConnection:
    def __init__(self, session: Session, lobby: Lobby):
        self.session = session
        self.lobby = lobby
        self.member_id: bytes | None = None
        self.handlers = {
            (0, Msg.Room_EnterRoomToS): self.on_enter_room,
            (0, Msg.Room_StartNewGameToS): self.on_start_new_game,
        }

    async def run(self) -> None:
        try:
            await serve_messages(self.session, self.handlers)
        finally:
            if self.member_id:
                self.lobby.close_rooms_of(self.member_id)

    async def on_enter_room(self, r: Reader) -> None:
        self.member_id = m.read_enter_room(r)
        await self.session.send(m.enter_room_to_c())

    async def on_start_new_game(self, r: Reader) -> None:
        # Sent by CTetSingleMainBody::Start through CF5GameWnd::SendStartNewGame.
        if self.member_id is None:
            log.warning("%s: StartNewGameToS before EnterRoomToS", self.session.peer)
            return
        await self.session.send(m.start_new_game_to_c([self.member_id]))
