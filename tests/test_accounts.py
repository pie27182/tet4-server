"""Accounts, tickets, the account service, and the login check on the channel and
game sockets."""
import asyncio
import json
import tempfile
import unittest
from pathlib import Path
from unittest import mock

from tet4server import accounts, server
from tet4server import messages as m
from tet4server.accounts import AccountError, AccountService, Database
from tet4server.messages import Msg
from tet4server.server import Ports, Services
from tet4server.xdr import Reader, string, u32, u64

from tests.test_server import TIMEOUT, SecureClient

# Cmd_AuthToS as the client sent it, account "test", ticket "A" * 32.
AUTH_CAPTURED = bytes.fromhex(
    "0365c03a00000000000000000000000474657374000000000000000000000000000000045445543400"
    "0000204141414141414141414141414141414141414141414141414141414141414141000000145469"
    "636b65744175746842794d656d6265724964")


def auth(name: str, ticket: str) -> bytes:
    return b"".join([u32(Msg.AuthToS), bytes(8), string(name.encode()), bytes(12),
                     string(b"TET4"), string(ticket.encode()), string(b"TicketAuthByMemberId")])


class AuthTest(unittest.TestCase):
    def test_account_and_ticket_from_the_captured_request(self):
        r = Reader(AUTH_CAPTURED)
        r.u32()
        self.assertEqual(m.read_auth(r), (b"test", b"A" * 32))
        self.assertEqual(r.remaining(), len("TicketAuthByMemberId") + 4)


class DatabaseTest(unittest.TestCase):
    def setUp(self):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        self.db = Database(Path(tmp.name) / "tet4.db")
        self.addCleanup(self.db.close)

    def test_register_login_and_tickets(self):
        first = self.db.register("alice", "correct horse")
        second = self.db.login("alice", "correct horse")
        self.assertEqual((len(first), len(second)), (32, 32))
        self.assertTrue(self.db.check_ticket("alice", second))
        self.assertFalse(self.db.check_ticket("bob", second))
        self.assertFalse(self.db.check_ticket("alice", "x" * 32))

    def test_refusals(self):
        self.db.register("alice", "correct horse")
        for name, password in [("alice", "correct horse"), ("Al", "correct horse"),
                               ("bob", "short")]:
            with self.subTest(name=name), self.assertRaises(AccountError):
                self.db.register(name, password)
        for name, password in [("alice", "wrong password"), ("nobody", "correct horse")]:
            with self.subTest(name=name), self.assertRaises(AccountError):
                self.db.login(name, password)

    def test_expired_ticket(self):
        ticket = self.db.register("alice", "correct horse")
        self.db._run("UPDATE tickets SET expires = 0")
        self.assertFalse(self.db.check_ticket("alice", ticket))


class AccountServiceTest(unittest.IsolatedAsyncioTestCase):
    async def test_failed_attempts_are_limited(self):
        with tempfile.TemporaryDirectory() as tmp:
            service = AccountService(Database(Path(tmp) / "tet4.db"))
            bad = json.dumps({"op": "login", "name": "x", "password": "y" * 8}).encode()
            replies = [await service.answer("10.0.0.1", bad)
                       for _ in range(accounts.FAILURES_PER_MINUTE + 1)]
            self.assertEqual(replies[-1]["error"], "too many attempts, wait a minute")
            self.assertEqual((await service.answer("10.0.0.1", b"{}"))["ok"], False)
            service.db.close()


class LoginTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0),
                                       db=Path(tmp.name) / "tet4.db").start()
        self.addAsyncCleanup(self.services.close)

    async def account_request(self, **request) -> dict:
        reader, writer = await asyncio.open_connection("127.0.0.1", self.services.ports.accounts)
        writer.write(json.dumps(request).encode() + b"\n")
        reply = json.loads(await asyncio.wait_for(reader.readline(), TIMEOUT))
        writer.close()
        await writer.wait_closed()
        return reply

    async def auth_result(self, client: SecureClient, body: bytes) -> int:
        await client.send(body)
        reply = await client.receive()
        self.assertEqual(reply.id, Msg.AuthToC)
        r = Reader(reply.body[4:])
        r.u64(), r.string(), r.u64(), r.string(), r.string(), r.string(), r.string()
        return r.u32()

    async def test_only_a_valid_ticket_logs_in(self):
        reply = await self.account_request(op="register", name="test", password="correct horse")
        self.assertTrue(reply["ok"])
        self.assertFalse((await self.account_request(op="login", name="test",
                                                     password="wrong one"))["ok"])

        refused = await SecureClient.connect(self.services.ports.channel)
        self.assertEqual(await self.auth_result(refused, AUTH_CAPTURED), 1)  # dummy ticket
        self.assertEqual(await asyncio.wait_for(refused.reader.read(), TIMEOUT), b"")
        await refused.close()

        channel = await SecureClient.connect(self.services.ports.channel)
        self.addAsyncCleanup(channel.close)
        self.assertEqual(await self.auth_result(channel, auth("test", reply["ticket"])), 0)
        # Another account's name is refused on the logged-in connection.
        await channel.send(u32(Msg.Channel_GetUserIdByMemberIdToS) + string(b"other"))
        self.assertEqual(await asyncio.wait_for(channel.reader.read(), TIMEOUT), b"")

    async def test_game_socket_needs_a_logged_in_member(self):
        game = await SecureClient.connect(self.services.ports.game)
        await game.send(b"".join([
            u32(Msg.Room_EnterRoomToS), u32(1), string(b""), string(b""), u32(0), u32(0),
            string(b"N000S"), string(b""), string(b""), string(b""), u32(0),
            string(b"test"), string(b""), u32(0), u32(0)]))
        self.assertEqual(await asyncio.wait_for(game.reader.read(), TIMEOUT), b"")
        await game.close()


if __name__ == "__main__":
    unittest.main()


class PresenceTest(unittest.IsolatedAsyncioTestCase):
    @mock.patch.object(server, "PRESENCE", 0.05)
    async def test_logging_in_in_another_channel_ends_the_older_session(self):
        # Two channels sharing the database, as two processes would: alice logs in to
        # channel 1, then again to channel 2; channel 1 closes her older session.
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "tet4.db"
            accounts = Database(path)
            self.addCleanup(accounts.close)
            first_ticket = accounts.register("alice", "correct horse")
            second_ticket = accounts.login("alice", "correct horse")
            channels = []
            for number in (1, 2):
                channel = await server.Channel(number, "127.0.0.1", "127.0.0.1",
                                               Ports(0, 0, 0, 0, 0), path).start()
                self.addAsyncCleanup(channel.close)
                channels.append(channel)

            async def enter(channel: server.Channel, ticket: str) -> SecureClient:
                client = await SecureClient.connect(channel.endpoint.port)
                self.addAsyncCleanup(client.close)
                await client.send(auth("alice", ticket))
                await client.send(u32(Msg.Channel_GetUserIdByMemberIdToS) + string(b"alice"))
                await client.send(b"".join([
                    u32(Msg.Channel_EnterChannelByUserIdToS), u64(0), string(b"alice"),
                    string(b"TET4"), string(b""), string(b"1"), string(b""), u32(0),
                    string(b""), string(b""), u64(0)]))
                while (await client.receive()).id != Msg.Channel_EnterChannelToC:
                    pass
                return client

            older = await enter(channels[0], first_ticket)
            await enter(channels[1], second_ticket)
            with self.assertRaises((asyncio.IncompleteReadError, ConnectionError)):
                while True:                      # until channel 1 closes it
                    await older.receive()
            for _ in range(50):
                if not channels[0].lobby.players:
                    break
                await asyncio.sleep(0.02)
            self.assertEqual(list(channels[0].lobby.players), [])
            self.assertEqual(list(channels[1].lobby.players), [b"alice"])
