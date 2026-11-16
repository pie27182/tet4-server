"""Messages to the methods that handle them.

A service marks each handler with the message it takes:

    class ChannelConnection(Connection):
        @on("Shop_GetPointInfoToS")
        async def get_points(self, request: dict) -> None: ...

The handler gets the message's fields by name (codec.unpack); one marked raw=True gets
the Message itself, to pass on unchanged. A message without a handler is dropped:
the client expects no reply to it. Every service's handlers are listed in its class's
`handlers`, which docs/MESSAGES.md is generated from.
"""
import logging
from typing import Awaitable, Callable, ClassVar

from .codec import MESSAGES, Layout, name_of
from .session import Session
from .wire import ProtocolError

log = logging.getLogger("tet4.dispatch")

Handler = Callable[["Connection", object], Awaitable[None]]


def on(*names: str, raw: bool = False):
    """Make the decorated method the handler of the client messages `names`."""
    def mark(method: Handler) -> Handler:
        method.handles = (names, raw)
        return method
    return mark


class Connection:
    """A client connection whose messages go to the methods marked with @on."""

    # (layer, ID) -> (the message's layout, or None for raw handlers; the handler)
    handlers: ClassVar[dict[tuple[int, int], tuple[Layout | None, Handler]]] = {}

    def __init_subclass__(cls, **kwargs):
        super().__init_subclass__(**kwargs)
        cls.handlers = {}
        for method in vars(cls).values():
            names, raw = getattr(method, "handles", ((), False))
            for name in names:
                layout = MESSAGES[name]
                cls.handlers[(layout.layer, layout.id)] = (None if raw else layout, method)

    def __init__(self, session: Session):
        self.session = session

    async def serve(self) -> None:
        """Handle the client's messages until it disconnects."""
        handlers = self.handlers
        while (message := await self.session.receive()) is not None:
            entry = handlers.get((message.layer, message.id))
            if entry is None:
                log.debug("%s %s: no reply to %s", self.session.service, self.session.peer,
                          name_of(message.layer, message.id))
                continue
            layout, handler = entry
            try:
                await handler(self, message if layout is None
                              else layout.unpack_fields(message.body, 4, lenient=True)[0])
            except ProtocolError as exc:
                log.warning("%s %s: malformed %s: %s", self.session.service, self.session.peer,
                            name_of(message.layer, message.id), exc)
