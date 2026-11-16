"""Two scripted clients through the multiplayer flow the real clients follow: lobby
presence and chat, room creation from the create dialog, joining, the game start,
the in-game relay, the end with its ranking, report and TP, and leaving; invitations
and sending a member away."""
import unittest
from unittest import mock

from tet4server.protocol import codec
from tet4server.protocol.codec import pack
from tet4server.server import Ports, Services
from tet4server.services import game

from tests.support import Player


class Lobby(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(self.services.close)
        self.alice = Player(self, b"alice", self.services.ports)
        self.bob = Player(self, b"bob", self.services.ports)
        await self.alice.enter_channel()
        await self.bob.enter_channel()


class MultiplayerTest(Lobby):
    @mock.patch.object(game, "MIN_GAME_SECONDS", 0)
    async def test_two_players_play_a_game(self):
        alice, bob = self.alice, self.bob
        # alice sees bob arrive, his Tetris profile at layer 3 of the same batch
        added = await alice.message(alice.channel, "Channel_AddMemberToC")
        self.assertEqual(codec.unpack("Channel_AddMemberToC", added.body)["member"], b"bob")
        await bob.channel.send(pack("Channel_GetMemberListToS", game_id=b"TET4"))
        listed = await bob.until(bob.channel, "Channel_GetMemberListToC")
        self.assertEqual({m["member"] for m in listed["members"]}, {b"alice", b"bob"})

        # Lobby chat reaches everyone under the sender's id.
        await alice.channel.send(pack("Chatting_HanChatStringToS", chat=dict(
            member=b"mallory", text=dict(message=b"hello"))))
        heard = (await bob.until(bob.channel, "Chatting_HanChatStringToC"))["chat"]
        self.assertEqual((heard["member"], heard["text"]["message"]), (b"alice", b"hello"))

        # The create dialog: any slot, two players.
        created = await alice.create_room(title=b"versus", limit=2)
        self.assertEqual((created["failcode"], created["room"], created["limit"]), (0, 1, 2))
        info = (await bob.until(bob.channel, "Channel_RoomInfoToC"))["info"]
        self.assertEqual((info["room"], info["title"], info["k200e"]), (1, b"versus", b"G"))

        await alice.enter_game(1)
        seated = await alice.until(alice.game, "Room_AddMemberToC")
        self.assertEqual((seated["member"], seated["seat"], seated["host"]),
                         (b"alice", 0, b"alice"))

        # bob joins from the room list and is seated next to alice in both games.
        await bob.channel.send(pack("Channel_GameJoinRoomToS", member=b"bob", room=1))
        joined = await bob.until(bob.channel, "Channel_GameJoinRoomToC")
        self.assertEqual((joined["failcode"], joined["game_port"]),
                         (0, self.services.ports.game))
        await bob.enter_game(1)
        first = await bob.until(bob.game, "Room_AddMemberToC")
        second = await bob.until(bob.game, "Room_AddMemberToC")
        self.assertEqual([(first["member"], first["seat"]), (second["member"], second["seat"])],
                         [(b"alice", 0), (b"bob", 1)])
        other = await alice.until(alice.game, "Room_AddMemberToC")
        self.assertEqual(other["member"], b"bob")

        # The host's map: its preview (name and cells) reaches the others as it came, and
        # names the place of the choice after it. A map whose name is not known is not
        # sent: an empty name would clear the board the preview showed.
        preview = pack("Room_OrderTypeMapSetTetris", name="패턴B", cells=[0x3C] * 200,
                       unknown1=1, unknown2=1)
        await alice.game.send(preview)
        await alice.game.send(pack("Room_OrderTypeMapSetTetrisToS", place=2, unknown1=1))
        await alice.game.send(pack("Room_OrderTypeMapSetTetrisToS", place=3))
        await alice.game.send(pack("Room_OrderTypeMapSetTetrisToS", place=2))
        self.assertEqual(await bob.message(bob.game, "Room_OrderTypeMapSetTetris"), preview)
        for unknown1 in (1, 0):
            choice = await bob.until(bob.game, "Room_OrderTypeMapSetTetrisToC")
            self.assertEqual((choice["name"].decode("cp949"), choice["unknown1"]),
                             ("패턴B", unknown1))

        # Only the host starts; everyone, the host included, gets LetsGameStartOk.
        start = pack("Room_OrderTypeLetsGameStartTetris", map="거북이", place=4,
                     players=[b"alice", b"bob", b"", b"", b"", b""], flags=[0] * 6)
        await bob.game.send(start)
        await alice.game.send(start)
        for player in (alice, bob):
            go = await player.until(player.game, "Room_OrderTypeLetsGameStartOkTetris")
            self.assertEqual((go["players"][:2], go["place"]), ([b"alice", b"bob"], 4))

        # The map's name is learnt from the start: the host's map choice now shows it.
        await alice.game.send(pack("Room_OrderTypeMapSetTetrisToS", place=4, unknown2=1))
        choice = await bob.until(bob.game, "Room_OrderTypeMapSetTetrisToC")
        self.assertEqual((choice["name"].decode("cp949"), choice["unknown2"]), ("거북이", 1))

        # Pieces, garbage and combos go to the other player only, unchanged, and count
        # for the result board.
        piece = pack("Room_OrderTypePolyMinoPutTetris", f1=7)
        garbage = pack("Room_OrderTypeGarbageSendTetris", f1=3, f2=5, f3=0x80)
        combo = pack("Room_OrderTypeComboTetris", f1=4, f2=2)
        for message in (piece, piece, garbage, combo):
            await bob.game.send(message)
        for message in (piece, piece, garbage, combo):
            name = codec.name_of(message.layer, message.id)
            self.assertEqual(await alice.message(alice.game, name), message)

        # alice tops out, then bob reports as the last one in: the game ends, bob first,
        # with 내공 by place (alice's loss stops at the lowest 내공) and TP by rank.
        await alice.game.send(pack("Room_OrderTypeIWillDieTetris", seat=0))
        await bob.message(bob.game, "Room_OrderTypeIWillDieTetris")
        await bob.game.send(pack("Room_OrderTypeIWillDieTetris", seat=1))
        for player in (alice, bob):
            end = await player.until(player.game, "Room_OrderTypeLetsGameEndTetrisToC")
            self.assertEqual([(r["member"], r["rank"], r["rating"], r["rating_after"], r["tp"])
                              for r in end["reports"]],
                             [(b"bob", 1, 1000, 1100, 30), (b"alice", 2, 1000, 1000, 20)])
            self.assertEqual((end["reports"][0]["attack_lines"], end["reports"][0]["max_combo"]),
                             (3, 4))
            report = await player.message(player.game, "Room_GameReportToC")
            generic, end_of_generic = codec.MESSAGES["Room_GameReportToC"].unpack_fields(
                report.body, 4)
            self.assertEqual([(m["member"], m["wins"], m["losses"], m["rating"])
                              for m in generic["members"]],
                             [(b"bob", 1, 0, 1100), (b"alice", 0, 1, 1000)])
            tetris = codec.unpack("Room_OrderTypeGameReportTetrisToC",
                                  report.body[end_of_generic + 8:])   # past two empty slots
            self.assertEqual((tetris["room"], tetris["reports"][0]["today_tp"]), (1, 30))

        # TP in each player's lobby, and the new records in everyone's member list.
        change = await bob.until(bob.channel, "Shop_ChangePointInfoToC")
        self.assertEqual(change["amount"] - change["before"], 30)
        rows = {}
        while len(rows) < 3:
            message = await alice.channel.receive()
            name = codec.name_of(message.layer, message.id)
            if name == "Shop_ChangePointInfoToC":
                change = codec.unpack(name, message.body)
                rows["TP"] = change["amount"] - change["before"]
            elif name == "Channel_OrderTypeRefreshMemberToC":
                row = codec.unpack(name, message.body)
                rows[row["member"]] = (row["plays"], row["wins"], row["rating"], row["grade"])
        self.assertEqual(rows, {"TP": 20, b"bob": (1, 1, 1100, 0), b"alice": (1, 0, 1000, 0)})

        # bob leaves: both hear it; alice stays as the host.
        await bob.game.send(pack("Room_ExitRoomToS"))
        for player in (bob, alice):
            gone = await player.until(player.game, "Room_DeleteMemberToC")
            self.assertEqual((gone["member"], gone["host"]), (b"bob", b"alice"))
        self.assertEqual([m.member_id for m in self.services.lobby.rooms[1].members], [b"alice"])

    @mock.patch.object(game, "MIN_GAME_SECONDS", 999)
    async def test_room_host_bonus_does_not_bypass_short_game_cutoff(self):
        alice, bob = self.alice, self.bob
        shop = self.services.lobby.shop
        self.assertIsNone(await shop.buy(b"alice", "PU0HT10003D001", 1))
        await alice.create_room(title=b"short", limit=2)
        await alice.enter_game(1)
        await bob.enter_game(1)

        await alice.game.send(pack("Room_OrderTypeLetsGameStartTetris", map="",
                                   place=0, players=[b"alice", b"bob", b"", b"", b"", b""],
                                   flags=[0] * 6))
        for player in (alice, bob):
            await player.until(player.game, "Room_OrderTypeLetsGameStartOkTetris")

        await alice.game.send(pack("Room_OrderTypeIWillDieTetris", seat=0))
        await bob.message(bob.game, "Room_OrderTypeIWillDieTetris")
        await bob.game.send(pack("Room_OrderTypeIWillDieTetris", seat=1))
        for player in (alice, bob):
            end = await player.until(player.game, "Room_OrderTypeLetsGameEndTetrisToC")
            self.assertEqual([(r["member"], r["tp"]) for r in end["reports"]],
                             [(b"bob", 0), (b"alice", 0)])

        # T10003 costs 1,500 TP; a short match must not refund 10 TP to its host.
        self.assertEqual(shop.wallet(b"alice").points, 8_500)
        self.assertEqual(shop.wallet(b"bob").points, 10_000)

    async def test_join_refusals(self):
        alice, bob = self.alice, self.bob
        await bob.channel.send(pack("Channel_GameJoinRoomToS", member=b"bob", room=7))
        joined = await bob.until(bob.channel, "Channel_GameJoinRoomToC")
        self.assertEqual((joined["failcode"], joined["result"]), (1, b"v2e"))   # no such room
        await alice.create_room(title=b"secret", password=b"pw", options=b"N000MNN")
        await bob.channel.send(pack("Channel_GameJoinRoomToS", member=b"bob", room=1,
                                    password=b"no"))
        joined = await bob.until(bob.channel, "Channel_GameJoinRoomToC")
        self.assertEqual(joined["failcode"], 2)                                 # wrong password


class InvitationTest(Lobby):
    async def test_invite_from_a_room(self):
        alice, bob = self.alice, self.bob
        await alice.create_room(title=b"come")
        await alice.enter_game(1)

        # The member list tells where everyone is: alice in room 1, bob in the lobby.
        await bob.channel.send(pack("Channel_GetMemberListToS", game_id=b"TET4"))
        listed = await bob.until(bob.channel, "Channel_GetMemberListToC")
        self.assertEqual({m["member"]: m["room"] for m in listed["members"]},
                         {b"alice": 1, b"bob": 0})

        await alice.channel.send(pack("Channel_InviteGameToMemberToS", member=b"alice",
                                      room=1, message=b"play?", target=b"bob"))
        invite = await bob.until(bob.channel, "Channel_InviteGameToMemberToC")
        self.assertEqual((invite["member"], invite["room"], invite["title"], invite["message"]),
                         (b"alice", 1, b"come", b"play?"))

        # bob's answer goes to alice (accepting, he then joins the room himself).
        await bob.channel.send(pack("Channel_ResponseInviteGameToS", member=b"bob",
                                    inviter=b"alice"))
        answer = await alice.until(alice.channel, "Channel_ResponseInviteGameToC")
        self.assertEqual((answer["member"], answer["k64e"]), (b"bob", 0))

        # Someone who is not in the lobby cannot be asked: the answer comes at once.
        await alice.channel.send(pack("Channel_InviteGameToMemberToS", member=b"alice",
                                      target=b"nobody"))
        answer = await alice.until(alice.channel, "Channel_ResponseInviteGameToC")
        self.assertEqual((answer["member"], answer["k64e"]), (b"nobody", 1))


class BanishTest(Lobby):
    async def test_host_sends_a_member_away(self):
        alice, bob = self.alice, self.bob
        await alice.create_room()
        await alice.enter_game(1)
        await bob.enter_game(1)

        await bob.game.send(pack("Room_ReqBanishMemberToS", member=b"alice"))   # not the host
        await alice.game.send(pack("Room_ReqBanishMemberToS", member=b"bob"))
        told = await bob.until(bob.game, "Room_ReqBanishMemberToC")
        self.assertEqual(told["member"], b"bob")
        for player in (bob, alice):
            gone = await player.until(player.game, "Room_DeleteMemberToC")
            self.assertEqual(gone["member"], b"bob")
        self.assertEqual([m.member_id for m in self.services.lobby.rooms[1].members], [b"alice"])

        # He cannot come back.
        await bob.channel.send(pack("Channel_GameJoinRoomToS", member=b"bob", room=1))
        joined = await bob.until(bob.channel, "Channel_GameJoinRoomToC")
        self.assertEqual(joined["failcode"], 1)


if __name__ == "__main__":
    unittest.main()
