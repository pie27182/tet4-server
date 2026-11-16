"""End-to-end: a scripted client walks the observed login and Single Mode sequence
against the real listeners, over TCP, with the client's side of the cipher."""
import asyncio
import json
import tempfile
import unittest
from pathlib import Path

from tet4server import crypto, schema
from tet4server import messages as m
from tet4server.accounts import Database
from tet4server.lobby import Lobby
from tet4server.messages import GameReport, Msg, describe
from tet4server.records import Records
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
        payload = MAGIC + encode_batch({layer: body})
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


# Cmd_Channel_CreateRoomToS as the client sent it after AutoEnter: the room title
# (EUC-KR), an empty room option and k200e "G".
TITLE = bytes.fromhex("c7e0bab9c7d120c7cfb7e7b5c7bcbcbfe4")
CREATE_ROOM_CAPTURED = bytes.fromhex(
    "0ca9895a0000000474657374000000000000000000000011" + TITLE.hex()
    + "0000000000000000000000000000000147000000000000000454455434000000000000000131")


def game_report(mode: int, value: int, completed: bool) -> bytes:
    """Room_OrderTypeSingleModeGameReportTetrisToS as the client builds it at game over."""
    return b"".join([
        u32(Msg.Room_OrderTypeSingleModeGameReportTetrisToS), string(MEMBER), string(b""),
        string(b"1"), string(b""), u32(mode), u32(value), u8(completed), u32(0) * 3])


def read_single_mode_info(r: Reader) -> tuple:
    """mode, rank, ranked, values, dates, result, plays."""
    mode, _, rank, ranked = r.u32(), r.u32(), r.u32(), r.u32()
    values = [r.u32() for _ in range(r.u32())]
    dates = [r.string() for _ in range(r.u32())]
    return mode, rank, ranked, values, dates, r.u32(), r.u32()


def room_request(msg_id: int) -> bytes:
    """AutoEnterSingleModeRoomTetrisToS / CreateRoomToS as the Single Mode button fills them."""
    return b"".join([
        u32(msg_id), string(MEMBER), u32(0), string(b""), string(b""), string(b"N000S"),
        u32(0), u32(0), string(b""), u32(0), string(b"TET4"), string(b""), string(b"1")])


class RecordTest(unittest.IsolatedAsyncioTestCase):
    async def play(self, lobby: Records, games, member: bytes = MEMBER) -> None:
        for mode, value, completed in games:
            await lobby.add_game(GameReport(member, mode, value, completed))

    async def test_best_five_per_mode(self):
        lobby = Records()
        await self.play(lobby, [(0, 300, True), (0, 100, True), (0, 200, True), (0, 50, True),
                                (0, 50, True), (0, 40, True), (1, 9000, True), (1, 7000, True),
                                (1, 5000, False), (2, 0, True)])
        marathon, forty, ultra = (lobby.single_mode(MEMBER, mode) for mode in range(3))
        self.assertEqual([v for v, _ in marathon.top], [300, 200, 100, 50, 50])
        self.assertEqual([v for v, _ in forty.top], [7000, 9000])  # lower is better
        self.assertEqual((marathon.plays, forty.plays, ultra.plays), (6, 3, 1))
        self.assertEqual((ultra.top, ultra.rank), ([], 0))
        self.assertEqual(lobby.single_mode(b"other", 0), m.SingleMode([], 0, 0, 1))

    async def test_rank_among_players(self):
        lobby = Records()
        await self.play(lobby, [(0, 500, True), (1, 4000, True)], member=b"first")
        await self.play(lobby, [(0, 300, True), (1, 3000, True)])
        self.assertEqual(lobby.single_mode(MEMBER, 0)[2:], (2, 2))
        self.assertEqual(lobby.single_mode(MEMBER, 1)[2:], (1, 2))

    async def test_ranks_match_a_full_sort(self):
        # Ranks come from sorted bests; they must agree with ranking everyone directly,
        # ties included, also when a player's best improves.
        import random
        rng, lobby, best = random.Random(7), Records(), {}
        for _ in range(400):
            member, mode = b"p%d" % rng.randrange(60), rng.choice((0, 1))
            value = rng.randrange(1, 40) * 100
            await lobby.add_game(GameReport(member, mode, value, True))
            old = best.get((member, mode))
            best[(member, mode)] = value if old is None else (
                min(old, value) if mode == 1 else max(old, value))
        for (member, mode), value in best.items():
            others = [v for (_, m), v in best.items() if m == mode]
            better = sum(v < value if mode == 1 else v > value for v in others)
            self.assertEqual(lobby.single_mode(member, mode)[2:], (better + 1, len(others)))

    async def test_records_survive_in_the_database(self):
        with tempfile.TemporaryDirectory() as tmp:
            db = Database(Path(tmp) / "tet4.db")
            await self.play(Records(db), [(0, 300, True), (1, 7000, False)])
            again = Records(db)
            marathon = again.single_mode(MEMBER, 0)
            self.assertEqual(([v for v, _ in marathon.top], marathon.plays), ([300], 1))
            self.assertEqual(again.single_mode(MEMBER, 1).plays, 1)
            db.close()


class ServiceTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        self.trace = Path(tmp.name) / "trace.jsonl"
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
        self.assertEqual((message.layer, describe(message.id)), (layer, describe(msg_id)))
        return message

    async def room_numbers(self, channel: SecureClient) -> list[int]:
        await channel.send(u32(Msg.Channel_GetRoomListToS) + string(b"TET4") + string(b"") * 2)
        reply = await self.expect(channel, Msg.Channel_GetRoomListToC)
        r = Reader(reply.body)
        for skip in (r.u32, r.string, r.string, r.string, r.u32, r.string):
            skip()
        count = r.u32()
        fields = parse(reply.body, "s s s u32 s u32" + f" {ROOM_INFO}" * count)
        size = len(ROOM_INFO.split())
        slots = [fields[6 + i * size:6 + (i + 1) * size] for i in range(count)]
        return [slot[0] for slot in slots if slot[7]]  # k42e of the slots not empty (k47e)

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
        # Layer 3 of the same batch: the Tetris profile, one record list per mode.
        generic = len(m.get_member_info_to_c(MEMBER))
        self.assertEqual(reply.body[generic:generic + 12],
                         u32(Msg.LayerAlignment) * 2 + u32(Msg.Channel_GetMemberInfoToC))
        # Rooms the player may create today (layer 3): allowed minus used must be > 0.
        reply = await self.expect(channel, schema.message_id(
            "Channel_OrderTypeDayCntInfoTetrisToC"), layer=3)
        r = Reader(reply.body[4:])
        day = schema.unpack("Channel_OrderTypeDayCntInfoTetrisToC", r)
        self.assertGreater(day["allowed"] - day["used"], 0)

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

        await channel.send(CREATE_ROOM_CAPTURED)
        reply = await self.expect(channel, Msg.Channel_CreateRoomToC)
        fields = parse(reply.body, "s u32 s s u32 s s s u32 u32 s u32 s s s s s u32 s")
        self.assertEqual((fields[4], fields[6], fields[7], fields[9], fields[10]),
                         (1, TITLE, b"N000S", 1, b"G"))  # room 1, option from AutoEnter, 1 seat
        self.assertEqual((fields[16], fields[17]), (b"127.0.0.1", self.ports.game))
        reply = await self.expect(channel, Msg.Channel_RoomInfoToC)
        self.assertEqual(parse(reply.body, ROOM_INFO)[0], 1)
        # A Single Mode room is the player's own: it stays out of the room list.
        self.assertEqual(await self.room_numbers(channel), [])

        game = await SecureClient.connect(self.ports.game)
        await game.send(b"".join([
            u32(Msg.Room_EnterRoomToS), u32(1), string(b""), string(b""), u32(0), u32(0),
            string(b"N000S"), string(b""), string(b""), string(b""), u32(0),
            string(MEMBER), string(b""), u32(0), u32(0)]))
        await self.expect(game, Msg.Room_EnterRoomToC)
        reply = await self.expect(game, Msg.Room_AddMemberToC)
        fields = parse(reply.body, "s s u32 s s s s u32 s u64 u64" + " u32" * 6
                       + " s u32 s s s s u32 u32 u32")
        self.assertEqual((fields[0], fields[2], fields[3]), (MEMBER, 0, MEMBER))  # host, seat, k3e
        await game.send(u32(Msg.Room_AlterRoomToS) + u32(0) + string(b"") * 4)
        await game.send(u32(Msg.Room_StartNewGameToS) + string(b"v6e"))
        reply = await self.expect(game, Msg.Room_StartNewGameToC)
        # HgCom3's members at layer 0, then (past two empty layers) Tet4.exe's items.
        layer0 = 4 + 4 + 4 + len(MEMBER) + 3
        self.assertEqual(parse(reply.body[:layer0], "u32 s u8 u8 u8")[:2], [1, MEMBER])
        self.assertEqual(parse(reply.body[layer0:], "u32 u32 u32 s u8 u8 u8 u8")[2:],
                         [1, MEMBER, 0, 0, 0, 0])

        # Game over: the reply carries the mode's records, now with this score.
        await game.send(game_report(0, 246, True), layer=3)
        reply = await self.expect(game, Msg.Room_OrderTypeSingleModeGameReportTetrisToC, layer=3)
        r = Reader(reply.body)
        r.u32(), r.string(), r.string()
        self.assertEqual(r.u32(), 0)                    # result: success
        self.assertEqual(r.string(), MEMBER)            # _TetrisMemberGameReport
        r.take(20 + 5 + 48 + 1)
        r.u8(), r.string(), r.u32(), r.take(2)          # _TetrisSchoolInfo
        r.take(16)
        mode, rank, ranked, values, dates, result, plays = read_single_mode_info(r)
        self.assertEqual((mode, rank, ranked, values, result, plays, r.remaining()),
                         (0, 1, 1, [246, 0, 0, 0, 0], 246, 1, 0))
        self.assertRegex(dates[0], rb"^\d{4}\.\d\d\.\d\d$")

        # The exit button, as captured: the client leaves once the player is deleted.
        await game.send(bytes.fromhex("0510821a0000000000000000000000047465737400000000"))
        reply = await self.expect(game, Msg.Room_DeleteMemberToC)
        self.assertEqual(parse(reply.body, "s s u32 s s")[3], MEMBER)

        await game.close()
        for _ in range(100):
            if not self.services.lobby.rooms:
                break
            await asyncio.sleep(0.01)
        self.assertEqual(await self.room_numbers(channel), [])

        records = [json.loads(line) for line in self.trace.read_text().splitlines()]
        self.assertIn({"service": "channel", "dir": "in", "layer": 3,
                       "name": "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS"},
                      [{k: rec[k] for k in ("service", "dir", "layer", "name")} for rec in records])

    async def test_plain_frames_before_the_handshake_are_ignored(self):
        # As captured: EnterRoomToS in the clear, then the share, then the same
        # EnterRoomToS encrypted. Only the encrypted one may be answered, or the
        # reply would be taken as part of the server's share.
        reader, writer = await asyncio.open_connection("127.0.0.1", self.ports.game)
        enter = b"".join([
            u32(Msg.Room_EnterRoomToS), u32(1), string(b""), string(b""), u32(0), u32(0),
            string(b"N000S"), string(b""), string(b""), string(b""), u32(0),
            string(MEMBER), string(b""), u32(0), u32(0)])
        writer.write(frame(MAGIC + enter))
        share = crypto.seal_share(crypto.new_share())
        writer.write(share)
        server_share = await asyncio.wait_for(reader.readexactly(crypto.SHARE_SIZE), TIMEOUT)
        game = SecureClient(reader, writer, crypto.master_key(share, server_share))
        await game.send(enter)
        await self.expect(game, Msg.Room_EnterRoomToC)
        await game.close()

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
