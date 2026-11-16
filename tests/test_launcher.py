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


class ControlsTest(unittest.TestCase):
    def setUp(self):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        self.tmp = Path(tmp.name)
        patch = mock.patch.object(client, "data_dir", lambda: self.tmp / "data")
        patch.start()
        self.addCleanup(patch.stop)

    def table(self, controls: dict) -> bytes:
        data = client.controls_runtime(controls)
        self.assertEqual(len(data), 0x114)                    # the size the game reads
        self.assertEqual(data[:16], b"HTC2" + bytes.fromhex("01000000")
                         + controls["das_ms"].to_bytes(4, "little")
                         + controls["arr_ms"].to_bytes(4, "little"))
        self.assertEqual(data[-4:], controls["soft_drop_arr_ms"].to_bytes(4, "little"))
        return data[16:-4]

    def test_the_defaults(self):
        controls = client.load_controls()
        table = self.table(controls)
        self.assertEqual((controls["das_ms"], controls["arr_ms"], controls["soft_drop_arr_ms"]),
                         (145, 33, 33))
        self.assertEqual({name: table[code] for name, code in client.KEYS.items()
                          if table[code] != 0xFF},
                         {"Left": 1, "Right": 2, "Down": 4, "Space": 5, "Up": 7, "X": 7,
                          "Z": 8, "LControl": 8, "RControl": 8, "LShift": 6, "RShift": 6,
                          "C": 6, "End": 0, "PageUp": 0, "Home": 0, "PageDown": 0,
                          "Insert": 0})       # the game's other rotate and hold keys go off

    def test_bound_items_and_taken_keys(self):
        controls = client.load_controls()
        controls["keys"]["use_item"] = ["F"]
        controls["keys"]["left"] = ["Left", "Q"]               # Q is item target 1's own key
        table = self.table(client.check_controls(controls))
        self.assertEqual((table[client.KEYS["F"]], table[client.KEYS["Grave"]],
                          table[client.KEYS["V"]]), (15, 0, 0))
        self.assertEqual((table[client.KEYS["Q"]], table[client.KEYS["1"]]), (1, 0xFF))

    def test_refused_settings(self):
        controls = client.load_controls()
        for change, message in (
                ({"das_ms": "1001"}, "DAS must be"), ({"soft_drop_arr_ms": "x"}, "SDF must be"),
                ({"keys": {**controls["keys"], "hold": []}}, "Set a key for: Hold"),
                ({"keys": {**controls["keys"], "use_item": ["Space"]}}, "Space is set for two"),
                ({"keys": {**controls["keys"], "use_item": ["F13"]}}, "Unsupported key")):
            with self.subTest(change=change), self.assertRaisesRegex(client.LaunchError,
                                                                      message):
                client.check_controls({**controls, **change})

    def test_saved_and_applied(self):
        game, copy = self.tmp / "game", self.tmp / "copy"
        game.mkdir()
        copy.mkdir()
        (game / "controls.json").write_text(json.dumps({**client.DEFAULT_CONTROLS,
                                                        "das_ms": 107}))
        self.assertEqual(client.load_controls(game)["das_ms"], 107)   # the game folder's
        client.save_controls({**client.load_controls(game), "arr_ms": 0})
        self.assertEqual(client.load_controls(game)["arr_ms"], 0)     # then the saved ones
        client.apply_controls(copy, game)
        self.assertEqual(len((copy / "controls.runtime.bin").read_bytes()), 0x114)
        client.save_controls({**client.load_controls(), "enabled": False})
        client.apply_controls(copy, game)
        self.assertFalse((copy / "controls.runtime.bin").exists())

    def test_key_names_from_tk(self):
        self.assertEqual([client.key_name(sym, 0) for sym in (
            "a", "Shift_R", "Prior", "KP_7", "KP_Home", "grave", "F13", "Escape")],
            ["A", "RShift", "PageUp", "NumPad7", "NumPad7", "Grave", None, None])


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
