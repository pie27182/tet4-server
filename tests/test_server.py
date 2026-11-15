"""End-to-end: a scripted client walks the observed login and Single Mode sequence
against the real listeners, over TCP, with the client's side of the cipher."""
import asyncio
import json
import tempfile
import unittest
from pathlib import Path

from tet4server import crypto
from tet4server.messages import Msg
from tet4server.server import Ports, Services
from tet4server.xdr import Reader, frame, read_frame, string, u8, u32, u64
from tet4server.xlbp import MAGIC, Message, decode_batch, encode_batch

from tests.test_messages import ROOM_INFO, parse

TIMEOUT = 5
MEMBER = b"tester"


class SecureClient:
    """The client's side of the secure socket."""

    @classmethod
    async def connect(cls, port: int) -> "SecureClient":
        reader, writer = await asyncio.open_connection("127.0.0.1", port)
        share = crypto.seal_share(crypto.new_share())
        writer.write(share)
        server_share = await asyncio.wait_for(reader.readexactly(crypto.SHARE_SIZE), TIMEOUT)
        return cls(reader, writer, crypto.master_key(share, server_share))

    def __init__(self, reader, writer, master):
        self.reader, self.writer = reader, writer
        self.tx = crypto.upstream_cipher(master)
        self.rx = crypto.downstream_cipher(master)

    async def send(self, body: bytes, layer: int = 0) -> None:
        payload = MAGIC + encode_batch(body, layer)
        self.writer.write(self.tx.encrypt(u32(len(payload)) + payload))
        await self.writer.drain()

    async def receive(self) -> Message:
        header = self.rx.decrypt(await asyncio.wait_for(self.reader.readexactly(4), TIMEOUT))
        length = int.from_bytes(header, "big")
        payload = self.rx.decrypt(await asyncio.wait_for(self.reader.readexactly(length), TIMEOUT))
        assert payload[:4] == MAGIC
        return decode_batch(payload[4:])

    async def close(self) -> None:
        self.writer.close()
        await self.writer.wait_closed()


def room_request(msg_id: int) -> bytes:
    """AutoEnterSingleModeRoomTetrisToS / CreateRoomToS as the Single Mode button fills them."""
    return b"".join([
        u32(msg_id), string(MEMBER), u32(0), string(b""), string(b""), string(b"N000S"),
        u32(0), u32(0), string(b""), u32(0), string(b"TET4"), string(b""), string(b"1")])


class ServiceTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.trace = Path(tempfile.mkdtemp()) / "trace.jsonl"
        self.services = await Services(ports=Ports(0, 0, 0, 0), trace=self.trace).start()
        self.addAsyncCleanup(self.services.close)
        self.ports = self.services.ports

    async def plain_request(self, port: int, body: bytes) -> bytes:
        reader, writer = await asyncio.open_connection("127.0.0.1", port)
        try:
            writer.write(frame(body))
            return await asyncio.wait_for(read_frame(reader), TIMEOUT)
        finally:
            writer.close()
            await writer.wait_closed()

    async def expect(self, client: SecureClient, msg_id: int, layer: int = 0) -> Message:
        message = await client.receive()
        self.assertEqual((message.layer, Msg(message.id).name), (layer, Msg(msg_id).name))
        return message

    async def room_numbers(self, channel: SecureClient) -> list[int]:
        await channel.send(u32(Msg.Channel_GetRoomListToS) + string(b"TET4") + string(b"") * 2)
        reply = await self.expect(channel, Msg.Channel_GetRoomListToC)
        r = Reader(reply.body)
        for skip in (r.u32, r.string, r.string, r.string, r.u32, r.string):
            skip()
        count = r.u32()
        fields = parse(reply.body, "s s s u32 s u32" + f" {ROOM_INFO}" * count)
        return fields[6 + 3::len(ROOM_INFO.split())]  # k66e of each _RoomInfo

    async def test_directory_announces_the_bound_channel_port(self):
        tpack = await self.plain_request(self.ports.tpack, b"".join([
            u32(0x0CF7BD9A), string(b"TPACK::Connector::Impl::Connector::AuthSession"), u32(1)]))
        self.assertEqual(Reader(tpack).u32(), 0x0A36B7BA)
        reply = await self.plain_request(self.ports.cds, bytes.fromhex(
            "05740f6a" "00000001" "00000006" "434f4d4d4f4e"))
        r = Reader(reply)
        r.u32(), r.u32(), r.u32()
        for _ in range(r.u32()):
            r.string()
        r.u32()
        row = [r.string() for _ in range(r.u32())]
        self.assertEqual(row[3:5], [b"127.0.0.1", str(self.ports.channel).encode()])

    async def test_login_and_single_mode_room(self):
        channel = await SecureClient.connect(self.ports.channel)
        self.addAsyncCleanup(channel.close)

        await channel.send(u32(Msg.AuthToS) + string(MEMBER) + string(b"TET4"))
        await self.expect(channel, Msg.AuthToC)

        await channel.send(u32(Msg.Channel_GetUserIdByMemberIdToS) + string(MEMBER))
        reply = await self.expect(channel, Msg.Channel_GetUserIdToC)
        self.assertEqual(parse(reply.body, "u64 s s u32")[1], MEMBER)

        await channel.send(b"".join([
            u32(Msg.Channel_EnterChannelByUserIdToS), u64(0), string(MEMBER), string(b"TET4"),
            string(b""), string(b"1"), string(b"7.8"), u32(0), string(b""), string(b""), u64(0)]))
        reply = await self.expect(channel, Msg.Channel_EnterChannelToC)
        strings = [v for v in parse(reply.body, "s s s s s u32 u32 u32 u8 s u32 u32 s s u32 u32 u32 s")
                   if isinstance(v, bytes)]
        self.assertEqual((strings[2], strings[7]), (b"", b"1"))
        reply = await self.expect(channel, Msg.Channel_GetMemberInfoToC)
        self.assertEqual(Reader(reply.body[4:]).string(), MEMBER)

        await channel.send(u32(Msg.Channel_GetMemberListToS) + string(b"TET4") + string(b"") + string(b"1"))
        await self.expect(channel, Msg.Channel_GetMemberListToC)
        self.assertEqual(await self.room_numbers(channel), [])
        await channel.send(u32(Msg.Item_GetItemStateToS) + string(MEMBER) + u8(1))
        await self.expect(channel, Msg.Item_GetItemStateToC)

        # A message without a reply leaves the connection usable.
        await channel.send(u32(Msg.Channel_TicketReissueToS) + string(b"ticket"))

        # Single Mode button: AutoEnter (layer 3), then the client creates the room.
        await channel.send(room_request(Msg.Room_OrderTypeAutoEnterSingleModeRoomTetrisToS), layer=3)
        reply = await self.expect(channel, Msg.Room_OrderTypeAutoEnterSingleModeRoomTetrisToC, layer=3)
        fields = parse(reply.body, "s u32 s s s u32 u32 s u32 s s s s u32 s s u32 s")
        self.assertEqual((fields[4], fields[6]), (b"N000S", 0))
        self.assertEqual(fields[15:17], [b"127.0.0.1", self.ports.game])

        await channel.send(room_request(Msg.Channel_CreateRoomToS))
        reply = await self.expect(channel, Msg.Channel_CreateRoomToC)
        fields = parse(reply.body, "s u32 s s u32 s s s u32 u32 s u32 s s s s s u32 s")
        self.assertEqual((fields[7], fields[9]), (b"N000S", 1))
        self.assertEqual((fields[15], fields[17]), (b"127.0.0.1", self.ports.game))
        reply = await self.expect(channel, Msg.Channel_RoomInfoToC)
        self.assertEqual(parse(reply.body, ROOM_INFO)[3], 1)
        self.assertEqual(await self.room_numbers(channel), [1])

        game = await SecureClient.connect(self.ports.game)
        await game.send(b"".join([
            u32(Msg.Room_EnterRoomToS), u32(1), string(b""), string(b""), u32(0), u32(0),
            string(b"N000S"), string(b""), string(b""), string(b""), u32(0),
            string(MEMBER), string(b""), u32(0), u32(0)]))
        await self.expect(game, Msg.Room_EnterRoomToC)
        await game.send(u32(Msg.Room_AlterRoomToS) + u32(0) + string(b"") * 4)
        await game.send(u32(Msg.Room_StartNewGameToS) + string(b"v6e"))
        reply = await self.expect(game, Msg.Room_StartNewGameToC)
        self.assertEqual(parse(reply.body, "u32 s u8 u8 u8")[:2], [1, MEMBER])

        await game.close()
        for _ in range(100):
            if not self.services.lobby.rooms():
                break
            await asyncio.sleep(0.01)
        self.assertEqual(await self.room_numbers(channel), [])

        records = [json.loads(line) for line in self.trace.read_text().splitlines()]
        self.assertIn({"service": "channel", "dir": "in", "layer": 3,
                       "name": "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS"},
                      [{k: rec[k] for k in ("service", "dir", "layer", "name")} for rec in records])

    async def test_bad_frame_closes_only_that_connection(self):
        broken = await SecureClient.connect(self.ports.channel)
        payload = b"XXXX" + u32(Msg.AuthToS)
        broken.writer.write(broken.tx.encrypt(u32(len(payload)) + payload))
        self.assertEqual(await asyncio.wait_for(broken.reader.read(), TIMEOUT), b"")
        await broken.close()
        channel = await SecureClient.connect(self.ports.channel)
        await channel.send(u32(Msg.AuthToS))
        await self.expect(channel, Msg.AuthToC)
        await channel.close()


if __name__ == "__main__":
    unittest.main()
