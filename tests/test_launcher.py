"""The launcher (tools/client.py): game folders, the server's copy, the bootstrap,
and logging in to a real account service."""
import asyncio
import hashlib
import importlib.util
import json
import tempfile
import unittest
from pathlib import Path
from unittest import mock

from tet4server.server import Ports, Services

ROOT = Path(__file__).resolve().parent.parent
spec = importlib.util.spec_from_file_location("client", ROOT / "tools" / "client.py")
client = importlib.util.module_from_spec(spec)
spec.loader.exec_module(client)


def fake_game(folder: Path) -> bytes:
    """A game folder whose Tet4.exe is large enough to hold the TPack host names."""
    exe = bytearray(0x1F9600)
    for offset, name in client.TPACK_HOSTS:
        exe[offset:offset + len(name)] = name
    folder.mkdir(parents=True)
    (folder / "Tet4.exe").write_bytes(exe)
    (folder / "data.bin").write_bytes(b"data")
    (folder / "files.sha256.json").write_text(json.dumps(
        {"Tet4.exe": hashlib.sha256(exe).hexdigest(),
         "data.bin": hashlib.sha256(b"data").hexdigest()}))
    return bytes(exe)


class LauncherTest(unittest.TestCase):
    def setUp(self):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        self.tmp = Path(tmp.name)
        self.game = self.tmp / "Tet4"
        exe = fake_game(self.game)
        for patch in (mock.patch.object(client, "CLEAN_SHA256", hashlib.sha256(exe).hexdigest()),
                      mock.patch.object(client, "data_dir", lambda: self.tmp / "data")):
            patch.start()
            self.addCleanup(patch.stop)

    def test_the_bootstrap_names_the_server_account_and_ticket(self):
        boot = client.bootstrap("tet4.example.org", "alice", "T" * 32)
        head, fields = boot.split(";", 1)
        self.assertEqual(head, "metp://tet4.example.org:15000//go/go")
        values = {}
        for field in fields.split("&"):
            key, rest = field.split(":", 1)
            length, value = rest.split("=", 1)
            self.assertEqual(int(length), len(value))
            values[key] = value
        self.assertEqual((values["k3e"], values["k8e"], values["k300e"], values["k602e"]),
                         ("alice", "T" * 32, "T" * 32, "10454"))

    def test_game_folders(self):
        self.assertEqual(client.check_game(self.game), [])
        (self.game / "data.bin").write_bytes(b"other")
        self.assertEqual(client.check_game(self.game), ["changed: data.bin"])
        self.assertIn("no Tet4.exe", client.check_game(self.tmp)[0])
        (self.game / "Tet4.exe").write_bytes(b"not the game")
        self.assertIn("not the original", client.check_game(self.game)[0])

    def test_server_addresses(self):
        self.assertEqual(client.check_server(" 10.0.0.2 "), "10.0.0.2")
        for bad in ("", "a b", "x" * 31):
            with self.subTest(bad=bad), self.assertRaises(client.LaunchError):
                client.check_server(bad)

    def test_one_copy_per_server_made_once(self):
        copy = client.game_copy(self.game, "10.0.0.2", report=lambda text: None)
        self.assertEqual(copy, self.tmp / "data" / "games" / "10.0.0.2")
        exe = (copy / "Tet4.exe").read_bytes()
        for offset, name in client.TPACK_HOSTS:
            self.assertEqual(exe[offset:offset + len(name)], b"10.0.0.2".ljust(len(name), b"\0"))
        self.assertEqual((copy / "data.bin").read_bytes(), b"data")
        self.assertEqual((self.game / "Tet4.exe").read_bytes()[0x1F956C:0x1F9574], b"tpacksvr")

        reports = []
        self.assertEqual(client.game_copy(self.game, "10.0.0.2", reports.append), copy)
        self.assertEqual(reports, [])                         # reused as it is
        (copy / "Tet4.exe").write_bytes(b"damaged")
        client.game_copy(self.game, "10.0.0.2", reports.append)
        self.assertEqual(len(reports), 1)                     # made again
        self.assertEqual((copy / "Tet4.exe").read_bytes(), exe)


class LoginTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0),
                                       db=Path(tmp.name) / "tet4.db").start()
        self.addAsyncCleanup(self.services.close)

    def ticket(self, op: str, password: str) -> str:
        return client.request_ticket("127.0.0.1", op, "alice", password, secure=False,
                                     port=self.services.ports.accounts)

    async def test_register_log_in_and_refusals(self):
        def run(op: str, password: str):
            return asyncio.to_thread(self.ticket, op, password)

        self.assertEqual(len(await run("register", "correct horse")), 32)
        ticket = await run("login", "correct horse")
        self.assertTrue(self.services.db.check_ticket("alice", ticket))
        with self.assertRaisesRegex(client.LaunchError, "^Wrong name or password.$"):
            await run("login", "wrong password")
        with self.assertRaisesRegex(client.LaunchError, "Could not reach the server"):
            client.request_ticket("127.0.0.1", "login", "alice", "x", secure=False, port=1)


if __name__ == "__main__":
    unittest.main()
