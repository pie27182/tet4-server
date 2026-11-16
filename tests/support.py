"""Scripted clients for the tests: the client's side of the secure socket, and a player
who logs in and walks the lobby and rooms the way the real client does."""
import asyncio
import unittest

from tet4server.protocol import cipher, codec
from tet4server.protocol.codec import Message, pack
from tet4server.protocol.session import MAGIC, decode_batch, encode_batch
from tet4server.protocol.wire import U32

TIMEOUT = 5


class SecureClient:
    """The client's side of the secure socket."""

    @classmethod
    async def connect(cls, port: int) -> "SecureClient":
        reader, writer = await asyncio.open_connection("127.0.0.1", port)
        share = cipher.seal_share(cipher.new_share())
        writer.write(share)
        server_share = await asyncio.wait_for(reader.readexactly(cipher.SHARE_SIZE), TIMEOUT)
        return cls(reader, writer, cipher.master_key(share, server_share))

    def __init__(self, reader, writer, master):
        self.reader, self.writer = reader, writer
        self.tx = cipher.upstream_cipher(master)
        self.rx = cipher.downstream_cipher(master)

    async def send(self, *messages: Message) -> None:
        """One batch of these messages, each in its layer's slot."""
        self.write_frame(MAGIC + encode_batch(messages))
        await self.writer.drain()

    def write_frame(self, payload: bytes) -> None:
        self.writer.write(self.tx.encrypt(U32.pack(len(payload)) + payload))

    async def receive(self) -> Message:
        header = self.rx.decrypt(await asyncio.wait_for(self.reader.readexactly(4), TIMEOUT))
        length = U32.unpack(header)[0]
        payload = self.rx.decrypt(await asyncio.wait_for(self.reader.readexactly(length), TIMEOUT))
        assert payload[:4] == MAGIC
        return decode_batch(payload[4:])

    async def closed(self) -> bool:
        """Whether the server closes the connection (reading whatever comes first)."""
        return await asyncio.wait_for(self.reader.read(), TIMEOUT) == b""

    async def close(self) -> None:
        self.writer.close()
        await self.writer.wait_closed()


def slot(name: str) -> tuple[int, int]:
    """The (layer, ID) a message arrives under."""
    layout = codec.MESSAGES[name]
    return layout.layer, layout.id


class Player:
    """A scripted client with a channel connection and, in a room, a game connection."""

    def __init__(self, test: unittest.IsolatedAsyncioTestCase, name: bytes, ports):
        self.test, self.name, self.ports = test, name, ports
        self.channel: SecureClient | None = None
        self.game: SecureClient | None = None

    async def message(self, client: SecureClient, name: str) -> Message:
        """The next message `name`, skipping others (news for everyone)."""
        for _ in range(50):
            message = await client.receive()
            if (message.layer, message.id) == slot(name):
                return message
        self.test.fail(f"no {name} for {self.name!r}")

    async def until(self, client: SecureClient, name: str) -> dict:
        """The fields of the next message `name`."""
        return codec.unpack(name, (await self.message(client, name)).body)

    async def enter_channel(self, ticket: bytes = b"") -> None:
        self.channel = await SecureClient.connect(self.ports.channel)
        self.test.addAsyncCleanup(self.channel.close)
        await self.channel.send(pack("AuthToS", key=dict(member=self.name, game_id=b"TET4"),
                                     ticket=ticket, method=b"TicketAuthByMemberId"))
        await self.message(self.channel, "AuthToC")
        await self.channel.send(pack("Channel_GetUserIdByMemberIdToS", member=self.name))
        await self.message(self.channel, "Channel_GetUserIdToC")
        await self.channel.send(pack("Channel_EnterChannelByUserIdToS", member=self.name,
                                     game_id=b"TET4", channel_id=b"1"))
        await self.message(self.channel, "Channel_EnterChannelToC")
        await self.message(self.channel, "Channel_OrderTypeDayCntInfoTetrisToC")

    async def create_room(self, title: bytes = b"room", options: bytes = b"Y000MNN",
                          limit: int = 2, password: bytes = b"") -> dict:
        """A room from the create dialog, in any slot: the CreateRoomToC that follows."""
        await self.channel.send(pack("Channel_AutoEnterRoomToS", member=self.name,
                                     room=0xFFFFFFFF, title=title, options=options,
                                     limit=limit, password=password, k200e=b"G",
                                     game_id=b"TET4", channel_id=b"1"))
        await self.message(self.channel, "Channel_AutoEnterRoomToC")
        return await self.until(self.channel, "Channel_CreateRoomToC")

    async def enter_game(self, room: int) -> None:
        self.game = await SecureClient.connect(self.ports.game)
        self.test.addAsyncCleanup(self.game.close)
        await self.game.send(pack("Room_EnterRoomToS", room=room, member=self.name))
        reply = await self.until(self.game, "Room_EnterRoomToC")
        self.test.assertEqual(reply["failcode"], 0)
