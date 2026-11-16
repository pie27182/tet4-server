"""End to end: a scripted client walks the observed login and Single Mode sequence
against the real listeners, over TCP, with the client's side of the cipher; and the
Single Mode records behind it."""
import asyncio
import json
import random
import tempfile
import unittest
from pathlib import Path

from tet4server.domain.records import GameReport, Records, Standing
from tet4server.protocol import cipher, codec
from tet4server.protocol.codec import Message, pack
from tet4server.protocol.session import MAGIC
from tet4server.protocol.wire import frame, read_frame
from tet4server.server import Ports, Services
from tet4server.storage import Database

from tests.support import TIMEOUT, Player, SecureClient
from tests.test_directory import SELECT_COMMON

MEMBER = b"tester"

# CreateRoomToS as the client sent it after the Single Mode button: the room title
# (CP949), empty options, k200e "G".
TITLE = bytes.fromhex("c7e0bab9c7d120c7cfb7e7b5c7bcbcbfe4")
CREATE_ROOM_CAPTURED = bytes.fromhex(
    "0ca9895a0000000474657374000000000000000000000011" + TITLE.hex()
    + "0000000000000000000000000000000147000000000000000454455434000000000000000131")
# ExitRoomToS as the client sent it (the exit button).
EXIT_ROOM_CAPTURED = bytes.fromhex("0510821a0000000000000000000000047465737400000000")


class RecordTest(unittest.IsolatedAsyncioTestCase):
    async def play(self, records: Records, games, member: bytes = MEMBER) -> None:
        for mode, value, completed in games:
            await records.add_game(GameReport(member, mode, value, completed))

    async def test_best_five_per_mode(self):
        records = Records()
        await self.play(records, [(0, 300, True), (0, 100, True), (0, 200, True), (0, 50, True),
                                  (0, 50, True), (0, 40, True), (1, 9000, True),
                                  (1, 7000, True), (1, 5000, False), (2, 0, True)])
        marathon, forty, ultra = (records.standing(MEMBER, mode) for mode in range(3))
        self.assertEqual([v for v, _ in marathon.top], [300, 200, 100, 50, 50])
        self.assertEqual([v for v, _ in forty.top], [7000, 9000])  # lower is better
        self.assertEqual((marathon.plays, forty.plays, ultra.plays), (6, 3, 1))
        self.assertEqual((ultra.top, ultra.rank), ([], 0))
        self.assertEqual(records.standing(b"other", 0), Standing([], 0, 0, 1))

    async def test_rank_among_players(self):
        records = Records()
        await self.play(records, [(0, 500, True), (1, 4000, True)], member=b"first")
        await self.play(records, [(0, 300, True), (1, 3000, True)])
        self.assertEqual(records.standing(MEMBER, 0)[2:], (2, 2))
        self.assertEqual(records.standing(MEMBER, 1)[2:], (1, 2))

    async def test_ranks_match_a_full_sort(self):
        # Ranks come from sorted bests; they must agree with ranking everyone directly,
        # ties included, also when a player's best improves.
        rng, records, best = random.Random(7), Records(), {}
        for _ in range(400):
            member, mode = b"p%d" % rng.randrange(60), rng.choice((0, 1))
            value = rng.randrange(1, 40) * 100
            await records.add_game(GameReport(member, mode, value, True))
            old = best.get((member, mode))
            best[(member, mode)] = value if old is None else (
                min(old, value) if mode == 1 else max(old, value))
        for (member, mode), value in best.items():
            others = [v for (_, m), v in best.items() if m == mode]
            better = sum(v < value if mode == 1 else v > value for v in others)
            self.assertEqual(records.standing(member, mode)[2:], (better + 1, len(others)))

    async def test_records_survive_in_the_database(self):
        with tempfile.TemporaryDirectory() as tmp:
            db = Database(Path(tmp) / "tet4.db")
            await self.play(Records(db), [(0, 300, True), (1, 7000, False)])
            again = Records(db)
            marathon = again.standing(MEMBER, 0)
            self.assertEqual(([v for v, _ in marathon.top], marathon.plays), ([300], 1))
            self.assertEqual(again.standing(MEMBER, 1).plays, 1)
            db.close()


class ServiceTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        self.trace = Path(tmp.name) / "trace.jsonl"
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0), trace=self.trace).start()
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

    async def listed_rooms(self, player: Player) -> list[int]:
        """The numbers of the room list's slots that hold a room."""
        await player.channel.send(pack("Channel_GetRoomListToS", game_id=b"TET4"))
        reply = await player.until(player.channel, "Channel_GetRoomListToC")
        self.assertEqual(reply["room_count"], len(reply["rooms"]))
        return [room["room"] for room in reply["rooms"] if room["state"]]

    async def test_directory_announces_the_bound_channel_port(self):
        tpack = await self.plain_request(self.ports.tpack, pack(
            "TPack_AuthSessionToS", method=b"TPACK::Connector::Impl::Connector::AuthSession",
            context=1).body)
        self.assertEqual(codec.unpack("TPack_AuthSessionToC", tpack)["context"], 1)
        reply = codec.unpack("CDS_AnsSelect", await self.plain_request(self.ports.cds,
                                                                       SELECT_COMMON))
        self.assertEqual(reply["rows"][0][3:5], [b"127.0.0.1", str(self.ports.channel).encode()])

    async def test_login_and_single_mode_room(self):
        player = Player(self, MEMBER, self.ports)
        await player.enter_channel()
        channel = player.channel
        await channel.send(pack("Channel_GetMemberListToS", game_id=b"TET4", channel_id=b"1"))
        members = await player.until(channel, "Channel_GetMemberListToC")
        self.assertEqual([m["member"] for m in members["members"]], [MEMBER])
        self.assertEqual(await self.listed_rooms(player), [])
        await channel.send(pack("Item_GetItemStateToS", member=MEMBER))
        await player.message(channel, "Item_GetItemStateToC")

        # A message without a reply leaves the connection usable.
        await channel.send(pack("Channel_TicketReissueToS", f0=b"ticket"))

        # The Single Mode button: AutoEnter (layer 3), then the client creates the room.
        await channel.send(pack("Room_OrderTypeAutoEnterSingleModeRoomTetrisToS", member=MEMBER,
                                options=b"N000S", game_id=b"TET4", channel_id=b"1"))
        reply = await player.until(channel, "Room_OrderTypeAutoEnterSingleModeRoomTetrisToC")
        self.assertEqual((reply["options"], reply["room"], reply["result"]), (b"N000S", 0, b""))
        self.assertEqual((reply["game_host"], reply["game_port"]), (b"127.0.0.1", self.ports.game))

        await channel.send(Message(0, CREATE_ROOM_CAPTURED))
        created = await player.until(channel, "Channel_CreateRoomToC")
        # Room 1 with the options from AutoEnter and one seat; the game socket.
        self.assertEqual((created["room"], created["title"], created["options"], created["limit"],
                          created["k200e"]), (1, TITLE, b"N000S", 1, b"G"))
        self.assertEqual((created["game_host"], created["game_port"]),
                         (b"127.0.0.1", self.ports.game))
        info = await player.until(channel, "Channel_RoomInfoToC")
        self.assertEqual(info["info"]["room"], 1)
        # A Single Mode room is the player's own: it stays out of the room list.
        self.assertEqual(await self.listed_rooms(player), [])

        await player.enter_game(1)
        game = player.game
        seated = await player.until(game, "Room_AddMemberToC")
        self.assertEqual((seated["host"], seated["seat"], seated["member"]), (MEMBER, 0, MEMBER))
        await game.send(pack("Room_AlterRoomToS"))                 # sent before every game
        await game.send(pack("Room_StartNewGameToS", k59e=b"v6e"))
        start = await player.message(game, "Room_StartNewGameToC")
        # HgCom3's message at layer 0, then (past two empty slots) Tet4.exe's items.
        generic = pack("Room_StartNewGameToC").body
        self.assertEqual(start.body[:len(generic) + 8],
                         generic + codec.pack("LayerAlignment").body * 2)
        items = codec.unpack("Room_OrderTypeStartNewGameTetrisToC", start.body[len(generic) + 8:])
        self.assertEqual(items["items"], [dict(member=MEMBER, hold=0, next=0, f3=0, f4=0)])

        # Game over: the reply carries the mode's records, now with this score.
        await game.send(pack("Room_OrderTypeSingleModeGameReportTetrisToS", member=MEMBER,
                             mode=0, value=246, completed=1))
        report = await player.until(game, "Room_OrderTypeSingleModeGameReportTetrisToC")
        standing = report["standing"]
        self.assertEqual((report["result"], report["report"]["member"]), (0, MEMBER))
        self.assertEqual((standing["mode"], standing["rank"], standing["ranked"],
                          standing["values"], standing["result"], standing["plays"]),
                         (0, 1, 1, [246, 0, 0, 0, 0], 246, 1))
        self.assertRegex(standing["dates"][0], rb"^\d{4}\.\d\d\.\d\d$")

        # The exit button: the client leaves once its player is deleted.
        await game.send(Message(0, EXIT_ROOM_CAPTURED))
        gone = await player.until(game, "Room_DeleteMemberToC")
        self.assertEqual(gone["member"], MEMBER)

        await game.close()
        for _ in range(100):
            if not self.services.lobby.rooms:
                break
            await asyncio.sleep(0.01)
        self.assertEqual(await self.listed_rooms(player), [])

        records = [json.loads(line) for line in self.trace.read_text().splitlines()]
        self.assertIn({"service": "channel", "dir": "in", "layer": 3,
                       "name": "Room_OrderTypeAutoEnterSingleModeRoomTetrisToS"},
                      [{k: rec[k] for k in ("service", "dir", "layer", "name")} for rec in records])

    async def test_plain_frames_before_the_key_exchange_are_ignored(self):
        # As captured: EnterRoomToS in the clear, then the share, then the same
        # EnterRoomToS encrypted. Only the encrypted one may be answered, or the reply
        # would be taken as part of the server's share. (There is no room 1: the reply
        # refuses, but it is the reply to the encrypted request.)
        reader, writer = await asyncio.open_connection("127.0.0.1", self.ports.game)
        enter = pack("Room_EnterRoomToS", room=1, options=b"N000S", member=MEMBER)
        writer.write(frame(MAGIC + enter.body))
        share = cipher.seal_share(cipher.new_share())
        writer.write(share)
        server_share = await asyncio.wait_for(reader.readexactly(cipher.SHARE_SIZE), TIMEOUT)
        game = SecureClient(reader, writer, cipher.master_key(share, server_share))
        await game.send(enter)
        reply = await game.receive()
        self.assertEqual(reply.id, codec.message_id("Room_EnterRoomToC"))
        await game.close()

    async def test_a_bad_frame_closes_only_that_connection(self):
        broken = await SecureClient.connect(self.ports.channel)
        broken.write_frame(b"XXXX" + pack("AuthToS").body)
        self.assertTrue(await broken.closed())
        await broken.close()
        channel = await SecureClient.connect(self.ports.channel)
        await channel.send(pack("AuthToS"))                       # a short one is fine too
        self.assertEqual((await channel.receive()).id, codec.message_id("AuthToC"))
        await channel.close()


class ChannelProcessTest(unittest.IsolatedAsyncioTestCase):
    async def test_channels_in_their_own_processes(self):
        # Two channels, each a process of its own: the directory lists both with the
        # ports they bound, and counts the players in each.
        with tempfile.TemporaryDirectory() as tmp:
            services = await Services(ports=Ports(0, 0, 0, 0, 0), db=Path(tmp) / "tet4.db",
                                      channels=2).start()
            self.addAsyncCleanup(services.close)
            reader, writer = await asyncio.open_connection("127.0.0.1", services.ports.cds)
            self.addCleanup(writer.close)
            writer.write(frame(SELECT_COMMON))
            rows = codec.unpack("CDS_AnsSelect",
                                await asyncio.wait_for(read_frame(reader), TIMEOUT))["rows"]
            self.assertEqual([row[2] for row in rows], [b"1", b"2"])
            second = int(rows[1][4])
            self.assertNotEqual(second, int(rows[0][4]))
            # A secure session with channel 2's process (not logged in: refused, but the
            # key exchange proves the process serves it).
            client = await SecureClient.connect(second)
            self.addAsyncCleanup(client.close)
            await client.send(pack("AuthToS", key=dict(member=b"x"), ticket=b"no ticket"))
            self.assertEqual((await client.receive()).id, codec.message_id("AuthToC"))


if __name__ == "__main__":
    unittest.main()
