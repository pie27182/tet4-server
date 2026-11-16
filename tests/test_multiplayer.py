"""Two scripted clients through the multiplayer flow the real clients follow: lobby
presence and chat, room creation from the create dialog, joining, the game start,
the in-game relay, the end with its ranking, report and TP, and leaving."""
import unittest
from unittest import mock

from tet4server import schema, shop
from tet4server.messages import Msg, describe
from tet4server.server import Ports, Services
from tet4server.xdr import Reader, string, u32, u64
from tet4server.xlbp import Message

from tests.test_server import SecureClient


ID = schema.message_id


def pack(name: str, **values) -> bytes:
    return schema.pack(name, **values)


def fields(message: Message, name: str) -> dict:
    r = Reader(message.body)
    r.u32()
    return schema.unpack(name, r)


class Player:
    def __init__(self, test: "MultiplayerTest", name: bytes):
        self.test, self.name = test, name

    async def until(self, client: SecureClient, msg_id: int, layer: int = 0) -> Message:
        """The next message with this ID and layer, skipping others (broadcasts)."""
        for _ in range(50):
            message = await client.receive()
            if (message.id, message.layer) == (msg_id, layer):
                return message
        self.test.fail(f"no {describe(msg_id)} for {self.name!r}")

    async def enter_channel(self) -> None:
        self.channel = await SecureClient.connect(self.test.ports.channel)
        self.test.addAsyncCleanup(self.channel.close)
        await self.channel.send(u32(Msg.AuthToS))
        await self.until(self.channel, Msg.AuthToC)
        await self.channel.send(u32(Msg.Channel_GetUserIdByMemberIdToS) + string(self.name))
        await self.until(self.channel, Msg.Channel_GetUserIdToC)
        await self.channel.send(b"".join([
            u32(Msg.Channel_EnterChannelByUserIdToS), u64(0), string(self.name),
            string(b"TET4"), string(b""), string(b"1"), string(b""), u32(0),
            string(b""), string(b""), u64(0)]))
        await self.until(self.channel, Msg.Channel_EnterChannelToC)
        await self.until(self.channel, ID("Channel_OrderTypeDayCntInfoTetrisToC"), 3)

    async def enter_game(self, room: int) -> None:
        self.game = await SecureClient.connect(self.test.ports.game)
        self.test.addAsyncCleanup(self.game.close)
        await self.game.send(pack("Room_EnterRoomToS", k42e=room, k3e=self.name))
        reply = await self.until(self.game, Msg.Room_EnterRoomToC)
        self.test.assertEqual(fields(reply, "Room_EnterRoomToC")["failcode"], 0)


class MultiplayerTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(self.services.close)
        self.ports = self.services.ports

    @mock.patch.object(shop, "MIN_GAME_SECONDS", 0)
    async def test_two_players_play_a_game(self):
        alice, bob = Player(self, b"alice"), Player(self, b"bob")
        await alice.enter_channel()
        await bob.enter_channel()
        # alice sees bob arrive, with his Tetris profile at layer 3 of the same batch
        added = await alice.until(alice.channel, ID("Channel_AddMemberToC"))
        self.assertEqual(fields(added, "Channel_AddMemberToC")["k3e"], b"bob")
        await bob.channel.send(u32(Msg.Channel_GetMemberListToS) + string(b"TET4") * 3)
        listed = fields(await bob.until(bob.channel, Msg.Channel_GetMemberListToC),
                        "Channel_GetMemberListToC")
        self.assertEqual({m["k3e"] for m in listed["members"]}, {b"alice", b"bob"})

        # Lobby chat reaches everyone under the sender's id.
        chat = dict(chat=dict(k3e=b"mallory", text=dict(message=b"hello")))
        await alice.channel.send(pack("Chatting_HanChatStringToS", **chat))
        heard = fields(await bob.until(bob.channel, ID("Chatting_HanChatStringToC")),
                       "Chatting_HanChatStringToC")["chat"]
        self.assertEqual((heard["k3e"], heard["text"]["message"]), (b"alice", b"hello"))

        # The create dialog: AutoEnterRoomToS for any slot, two players.
        await alice.channel.send(pack("Channel_AutoEnterRoomToS", k3e=b"alice", k42e=0xFFFFFFFF,
                                      k45e=b"versus", k46e=b"Y000MNN", k66e=2, k200e=b"G",
                                      k22e=b"TET4", k24e=b"1"))
        await alice.until(alice.channel, ID("Channel_AutoEnterRoomToC"))
        created = fields(await alice.until(alice.channel, Msg.Channel_CreateRoomToC),
                         "Channel_CreateRoomToC")
        self.assertEqual((created["failcode"], created["k42e"], created["k66e"]), (0, 1, 2))
        info = fields(await bob.until(bob.channel, Msg.Channel_RoomInfoToC), "Channel_RoomInfoToC")
        self.assertEqual((info["room"]["k42e"], info["room"]["k45e"]), (1, b"versus"))

        await alice.enter_game(1)
        seated = fields(await alice.until(alice.game, Msg.Room_AddMemberToC), "Room_AddMemberToC")
        self.assertEqual((seated["k3e"], seated["k58e"], seated["k50e"]), (b"alice", 0, b"alice"))

        # bob joins from the room list and is seated next to alice in both games.
        await bob.channel.send(pack("Channel_GameJoinRoomToS", k3e=b"bob", k42e=1))
        joined = fields(await bob.until(bob.channel, ID("Channel_GameJoinRoomToC")),
                        "Channel_GameJoinRoomToC")
        self.assertEqual((joined["failcode"], joined["k53e"]), (0, self.ports.game))
        await bob.enter_game(1)
        first = fields(await bob.until(bob.game, Msg.Room_AddMemberToC), "Room_AddMemberToC")
        second = fields(await bob.until(bob.game, Msg.Room_AddMemberToC), "Room_AddMemberToC")
        self.assertEqual([(first["k3e"], first["k58e"]), (second["k3e"], second["k58e"])],
                         [(b"alice", 0), (b"bob", 1)])
        other = fields(await alice.until(alice.game, Msg.Room_AddMemberToC), "Room_AddMemberToC")
        self.assertEqual(other["k3e"], b"bob")

        # Only the host starts; everyone, the host included, gets LetsGameStartOk.
        start = pack("Room_OrderTypeLetsGameStartTetris", map="거북이", place=4,
                     members=[b"alice", b"bob", b"", b"", b"", b""], flags=[0] * 6)
        await bob.game.send(start, layer=3)
        await alice.game.send(start, layer=3)
        go_id = ID("Room_OrderTypeLetsGameStartOkTetris")
        for player in (alice, bob):
            go = fields(await player.until(player.game, go_id, 3), "Room_OrderTypeLetsGameStartOkTetris")
            self.assertEqual(go["members"][:2], [b"alice", b"bob"])

        # The map's name is learnt from the start: the host's map choice now shows it.
        await alice.game.send(pack("Room_OrderTypeMapSetTetrisToS", place=4), layer=3)
        choice = fields(await bob.until(bob.game, ID("Room_OrderTypeMapSetTetrisToC"), 3),
                        "Room_OrderTypeMapSetTetrisToC")
        self.assertEqual(choice["name"].decode("cp949"), "거북이")

        # Pieces go to the other player only, unchanged.
        piece = pack("Room_OrderTypePolyMinoPutTetris")
        await alice.game.send(piece, layer=3)
        relayed = await bob.until(bob.game, ID("Room_OrderTypePolyMinoPutTetris"), 3)
        self.assertEqual(relayed.body, piece)

        # alice tops out, then bob reports as the last one in: the game ends, bob first.
        await alice.game.send(pack("Room_OrderTypeIWillDieTetris", seat=0), layer=3)
        await bob.until(bob.game, ID("Room_OrderTypeIWillDieTetris"), 3)
        await bob.game.send(pack("Room_OrderTypeIWillDieTetris", seat=1), layer=3)
        for player in (alice, bob):
            end = fields(await player.until(
                player.game, ID("Room_OrderTypeLetsGameEndTetrisToC"), 3),
                "Room_OrderTypeLetsGameEndTetrisToC")
            self.assertEqual([(r["k3e"], r["rank"]) for r in end["reports"]],
                             [(b"bob", 1), (b"alice", 2)])
            report = await player.until(player.game, ID("Room_GameReportToC"))
            tetris = report.body[len(pack("Room_GameReportToC", members=[dict(k3e=b"bob"),
                                                                             dict(k3e=b"alice")])):]
            r = Reader(tetris[8:])   # two layer markers, then the message ID
            r.u32()
            self.assertEqual(schema.unpack("Room_OrderTypeGameReportTetrisToC", r)["room"], 1)

        # TP by rank, shown in each player's lobby.
        for player, earned in ((bob, 30), (alice, 20)):
            change = fields(await player.until(player.channel, ID("Shop_ChangePointInfoToC"), 3),
                            "Shop_ChangePointInfoToC")
            self.assertEqual(change["amount"] - change["before"], earned)

        # bob leaves: both hear it; alice stays as the host.
        await bob.game.send(u32(Msg.Room_ExitRoomToS))
        for player in (bob, alice):
            gone = fields(await player.until(player.game, Msg.Room_DeleteMemberToC),
                          "Room_DeleteMemberToC")
            self.assertEqual((gone["k3e"], gone["k50e"]), (b"bob", b"alice"))
        self.assertEqual([m.member_id for m in self.services.lobby.rooms[1].members], [b"alice"])

    async def test_join_refusals(self):
        alice, bob = Player(self, b"alice"), Player(self, b"bob")
        await alice.enter_channel()
        await bob.enter_channel()
        await bob.channel.send(pack("Channel_GameJoinRoomToS", k3e=b"bob", k42e=7))
        joined = fields(await bob.until(bob.channel, ID("Channel_GameJoinRoomToC")),
                        "Channel_GameJoinRoomToC")
        self.assertEqual((joined["failcode"], joined["k1e"]), (1, b"v2e"))   # no such room
        await alice.channel.send(pack("Channel_AutoEnterRoomToS", k3e=b"alice", k42e=0xFFFFFFFF,
                                      k45e=b"secret", k67e=b"pw", k46e=b"N000MNN", k66e=2))
        await alice.until(alice.channel, Msg.Channel_CreateRoomToC)
        await bob.channel.send(pack("Channel_GameJoinRoomToS", k3e=b"bob", k42e=1, k67e=b"no"))
        joined = fields(await bob.until(bob.channel, ID("Channel_GameJoinRoomToC")),
                        "Channel_GameJoinRoomToC")
        self.assertEqual(joined["failcode"], 2)                               # wrong password


if __name__ == "__main__":
    unittest.main()


class InvitationTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(self.services.close)
        self.ports = self.services.ports

    async def test_invite_from_a_room(self):
        alice, bob = Player(self, b"alice"), Player(self, b"bob")
        await alice.enter_channel()
        await bob.enter_channel()
        await alice.channel.send(pack("Channel_AutoEnterRoomToS", k3e=b"alice", k42e=0xFFFFFFFF,
                                      k45e=b"come", k46e=b"Y000MNN", k66e=2))
        await alice.until(alice.channel, Msg.Channel_CreateRoomToC)
        await alice.enter_game(1)

        # The member list tells where everyone is (k151e): alice in room 1, bob in the lobby.
        await bob.channel.send(u32(Msg.Channel_GetMemberListToS) + string(b"TET4") * 3)
        listed = fields(await bob.until(bob.channel, Msg.Channel_GetMemberListToC),
                        "Channel_GetMemberListToC")
        self.assertEqual({m["k3e"]: m["k151e"] for m in listed["members"]},
                         {b"alice": 1, b"bob": 0})

        await alice.channel.send(pack("Channel_InviteGameToMemberToS", k3e=b"alice",
                                      k64e=b"play?", target=b"bob"))
        invite = fields(await bob.until(bob.channel, ID("Channel_InviteGameToMemberToC")),
                        "Channel_InviteGameToMemberToC")
        self.assertEqual((invite["k3e"], invite["k42e"], invite["k64e"]), (b"alice", 1, b"play?"))

        # bob's answer goes to alice: 0 accepted, then he joins the room himself.
        await bob.channel.send(pack("Channel_ResponseInviteGameToS", k3e=b"bob", k64e=b"alice",
                                    declined=0))
        answer = fields(await alice.until(alice.channel, ID("Channel_ResponseInviteGameToC")),
                        "Channel_ResponseInviteGameToC")
        self.assertEqual((answer["k3e"], answer["declined"]), (b"bob", 0))

        # Someone who is not in the lobby cannot be asked: declined at once.
        await alice.channel.send(pack("Channel_InviteGameToMemberToS", k3e=b"alice",
                                      target=b"nobody"))
        answer = fields(await alice.until(alice.channel, ID("Channel_ResponseInviteGameToC")),
                        "Channel_ResponseInviteGameToC")
        self.assertEqual((answer["k3e"], answer["declined"]), (b"nobody", 1))
