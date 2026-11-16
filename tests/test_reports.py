"""Reports (신고): a player's report of another reaches the server from the lobby or a
room, is logged, and is kept in the database for the operators, who list them with
tools/reports.py."""
import contextlib
import io
import json
import tempfile
import unittest
from pathlib import Path
from unittest import mock

from tet4server.config import REPORT_CHAT_LINES
from tet4server.domain import lobby as lobby_module
from tet4server.domain.lobby import Lobby
from tet4server.protocol.codec import pack
from tet4server.server import Ports, Services
from tet4server.storage import Database

from tests.support import Player
from tests.test_docs import load_tool


def complaint(lines: int = 1) -> dict:
    """A report of bob for abuse (욕설), with his chat lines, as the client sends it."""
    said = dict(member=b"bob", time=b"2026/11/16 17:54:27", text=b"bad words here")
    return dict(game_id=b"TET4", reporter=b"mallory", reason="욕설".encode("cp949"),
                chat=[said] * lines, reported=b"bob")


class ReportStorageTest(unittest.TestCase):
    def test_reports_are_kept_for_the_operators(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "tet4.db"
            db = Database(path)
            lobby = Lobby(db, number=2)
            lobby.report(b"alice", complaint(lines=REPORT_CHAT_LINES + 10))
            lobby.report(b"alice", complaint())          # too soon after the first: dropped
            with mock.patch.object(lobby_module.time, "time", return_value=4e9):
                lobby.report(b"carol", complaint())
            db.close()                                   # waits for the writes

            db = Database(path)
            self.addCleanup(db.close)
            newest, oldest = db.reports()
            # The reporter is the connection's member, not the name the client wrote.
            self.assertEqual(oldest[1:5], (2, "alice", "bob", "욕설"))
            self.assertEqual(newest[2], "carol")
            chat = json.loads(oldest[5])
            self.assertEqual(len(chat), REPORT_CHAT_LINES)
            self.assertEqual(chat[0], ["2026/11/16 17:54:27", "bob", "bad words here"])

            out = io.StringIO()
            with contextlib.redirect_stdout(out):
                load_tool("reports").main(["--db", str(path)])
            listing = out.getvalue().splitlines()
            self.assertIn("channel 2: alice reports bob: 욕설", listing[2])
            self.assertIn("bob: bad words here", listing[3])


class ReportTest(unittest.IsolatedAsyncioTestCase):
    async def test_a_report_from_the_lobby_is_logged(self):
        services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(services.close)
        alice = Player(self, b"alice", services.ports)
        await alice.enter_channel()
        with self.assertLogs("tet4.lobby", "INFO") as logs:
            await alice.channel.send(pack("Channel_ComplaintSvcKorToS", complaint()))
            # The client expects no reply: a request answered after it shows it was read.
            await alice.channel.send(pack("Shop_GetPointInfoToS"))
            await alice.until(alice.channel, "Shop_GetPointInfoToC")
        self.assertIn("alice reports bob: 욕설 (1 chat lines)", "\n".join(logs.output))


if __name__ == "__main__":
    unittest.main()
