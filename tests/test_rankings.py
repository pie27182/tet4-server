"""The public Single and Multiplayer ranking pages and their read-only JSON APIs."""
import asyncio
import json
import tempfile
import unittest
from pathlib import Path

from tet4server.server import Ports, Services


class PublicRankingsTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.services = await Services(
            ports=Ports(0, 0, 0, 0, 0),
            db=Path(self.tmp.name) / "tet4.db",
            rankings_port=0,
        ).start()
        self.addAsyncCleanup(self.services.close)

    async def get(self, target: str) -> tuple[int, bytes]:
        reader, writer = await asyncio.open_connection(
            "127.0.0.1", self.services.ports.rankings)
        writer.write(f"GET {target} HTTP/1.1\r\nHost: localhost\r\n\r\n".encode("ascii"))
        await writer.drain()
        response = await reader.read()
        writer.close()
        await writer.wait_closed()
        head, body = response.split(b"\r\n\r\n", 1)
        status = int(head.split(b" ", 2)[1])
        return status, body

    async def test_home_page_links_both_original_rankings(self):
        status, body = await self.get("/rankings")
        self.assertEqual(status, 200)
        self.assertIn(b"Multi Ranking", body)
        self.assertIn(b"Single Ranking", body)
        self.assertIn(b"mode=2", body)

    async def test_multiplayer_board_and_json_api(self):
        await self.services.lobby.ratings.add_game([b"bob", b"alice"])

        status, body = await self.get("/api/rankings/multiplayer?limit=10")
        self.assertEqual(status, 200)
        board = json.loads(body)
        self.assertEqual(board["kind"], "multiplayer")
        self.assertEqual([p["member"] for p in board["players"]], ["bob", "alice"])
        self.assertEqual([p["points"] for p in board["players"]], [1616, 1584])
        self.assertEqual((board["players"][0]["wins"], board["players"][0]["win_rate"]),
                         (1, 100.0))

        status, page = await self.get("/rankings/multiplayer")
        self.assertEqual(status, 200)
        self.assertIn(b"1,616", page)
        self.assertIn(b"provisional", page.lower())

    async def test_single_rankings_order_scores_and_times_correctly(self):
        self.services.db.save_single_mode(
            "alice", 0, 3, [(900, "2026.11.16"), (700, "2026.11.15")])
        self.services.db.save_single_mode("bob", 0, 2, [(1200, "2026.11.15")])
        self.services.db.save_single_mode("alice", 1, 2, [(6250, "2026.11.16")])
        self.services.db.save_single_mode("bob", 1, 2, [(5100, "2026.11.15")])

        status, score_body = await self.get("/api/rankings/single?mode=0")
        self.assertEqual(status, 200)
        scores = json.loads(score_body)["players"]
        self.assertEqual([p["member"] for p in scores], ["bob", "alice"])
        self.assertEqual([p["best"] for p in scores], [1200, 900])

        status, time_body = await self.get("/api/rankings/single?mode=1")
        self.assertEqual(status, 200)
        times = json.loads(time_body)["players"]
        self.assertEqual([p["member"] for p in times], ["bob", "alice"])
        self.assertEqual([p["best"] for p in times], [5100, 6250])

        status, page = await self.get("/rankings/single?mode=1")
        self.assertEqual(status, 200)
        self.assertIn(b"00:51.00", page)
        self.assertIn(b"01:02.50", page)

    async def test_bad_mode_and_unknown_path(self):
        status, _ = await self.get("/api/rankings/single?mode=9")
        self.assertEqual(status, 400)
        status, _ = await self.get("/missing")
        self.assertEqual(status, 404)


if __name__ == "__main__":
    unittest.main()
