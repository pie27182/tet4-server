"""Public Single and Multiplayer ranking pages, separate from the legacy game protocol.

Hangame published both rankings on its website. The 1.3.4 game protocol has no
verified request for those global tables, so expose them over read-only HTTP rather
than inventing a new in-game message.
"""
import asyncio
import html
import json
import logging
from urllib.parse import parse_qs, urlsplit

from ..storage import Database

log = logging.getLogger("tet4.rankings")

MODES = {0: "Marathon", 1: "40 Lines", 2: "Ultra"}
MAX_LIMIT = 500


class Rankings:
    def __init__(self, db: Database):
        self.db = db

    async def handle(self, reader: asyncio.StreamReader,
                     writer: asyncio.StreamWriter) -> None:
        try:
            request = await asyncio.wait_for(reader.readline(), 5)
            if len(request) > 2048:
                await self._send(writer, 414, b"URI too long", "text/plain; charset=utf-8")
                return
            try:
                method, target, _ = request.decode("ascii").strip().split(" ", 2)
            except (UnicodeDecodeError, ValueError):
                await self._send(writer, 400, b"Bad request", "text/plain; charset=utf-8")
                return

            # Read and discard headers; the service does not accept request bodies.
            for _ in range(32):
                line = await asyncio.wait_for(reader.readline(), 5)
                if not line or line in (b"\r\n", b"\n"):
                    break

            if method != "GET":
                await self._send(writer, 405, b"GET only", "text/plain; charset=utf-8",
                                 extra=b"Allow: GET\r\n")
                return

            url = urlsplit(target)
            query = parse_qs(url.query)
            limit = self._limit(query.get("limit", ["100"])[0])
            if url.path in ("/", "/rankings", "/rankings/"):
                body = self._index()
                content_type = "text/html; charset=utf-8"
            elif url.path in ("/rankings/multiplayer", "/api/rankings/multiplayer"):
                board = await self.multiplayer(limit)
                if url.path.startswith("/api/"):
                    body, content_type = self._json(board), "application/json; charset=utf-8"
                else:
                    body, content_type = self._multiplayer_page(board), "text/html; charset=utf-8"
            elif url.path in ("/rankings/single", "/api/rankings/single"):
                try:
                    mode = int(query.get("mode", ["0"])[0])
                except ValueError:
                    mode = -1
                if mode not in MODES:
                    await self._send(writer, 400, b"mode must be 0, 1 or 2",
                                     "text/plain; charset=utf-8")
                    return
                board = await self.single(mode, limit)
                if url.path.startswith("/api/"):
                    body, content_type = self._json(board), "application/json; charset=utf-8"
                else:
                    body, content_type = self._single_page(board), "text/html; charset=utf-8"
            else:
                await self._send(writer, 404, b"Not found", "text/plain; charset=utf-8")
                return
            await self._send(writer, 200, body, content_type)
        except (asyncio.TimeoutError, ConnectionError, BrokenPipeError) as exc:
            log.debug("ranking request closed: %s", exc)
        except Exception:
            log.exception("ranking request failed")
            try:
                await self._send(writer, 500, b"Internal server error",
                                 "text/plain; charset=utf-8")
            except (ConnectionError, BrokenPipeError):
                pass
        finally:
            writer.close()
            try:
                await writer.wait_closed()
            except ConnectionError:
                pass

    @staticmethod
    def _limit(value: str) -> int:
        try:
            return max(1, min(int(value), MAX_LIMIT))
        except ValueError:
            return 100

    async def multiplayer(self, limit: int = 100) -> dict:
        rows = await asyncio.to_thread(self.db.load_ratings)
        rows.sort(key=lambda row: (-row[1], row[0]))
        players = []
        last_points = None
        last_rank = 0
        for index, (name, points, plays, wins, losses, streak, best_streak,
                    best_points) in enumerate(rows[:self._limit(str(limit))], 1):
            rank = last_rank if points == last_points else index
            players.append({
                "rank": rank,
                "member": name,
                "points": points,
                "plays": plays,
                "wins": wins,
                "losses": losses,
                "win_rate": round(wins * 100 / plays, 2) if plays else 0.0,
                "current_streak": streak,
                "best_streak": best_streak,
                "best_points": best_points,
            })
            last_points, last_rank = points, rank
        return {
            "kind": "multiplayer",
            "title": "Multi Ranking",
            "points_name": "내공",
            "points_note": "Provisional server-side reconstruction; not the recovered Hangame formula.",
            "players": players,
        }

    async def single(self, mode: int, limit: int = 100) -> dict:
        rows = await asyncio.to_thread(self.db.load_single_mode)
        bests = []
        for name, player_mode, plays, top in rows:
            if player_mode != mode or not top:
                continue
            value, date = top[0]
            bests.append((int(value), name, str(date), int(plays)))
        bests.sort(key=lambda item: ((item[0] if mode == 1 else -item[0]), item[1]))
        players = []
        last_value = None
        last_rank = 0
        for index, (value, name, date, plays) in enumerate(
                bests[:self._limit(str(limit))], 1):
            rank = last_rank if value == last_value else index
            players.append({
                "rank": rank,
                "member": name,
                "best": value,
                "date": date,
                "plays": plays,
            })
            last_value, last_rank = value, rank
        return {
            "kind": "single",
            "title": "Single Ranking",
            "mode": mode,
            "mode_name": MODES[mode],
            "metric": "time_cs" if mode == 1 else "score",
            "players": players,
        }

    @staticmethod
    def _json(value: dict) -> bytes:
        return json.dumps(value, ensure_ascii=False, separators=(",", ":")).encode("utf-8")

    @staticmethod
    async def _send(writer: asyncio.StreamWriter, status: int, body: bytes,
                    content_type: str, extra: bytes = b"") -> None:
        reason = {200: "OK", 400: "Bad Request", 404: "Not Found", 405: "Method Not Allowed",
                  414: "URI Too Long", 500: "Internal Server Error"}.get(status, "Error")
        writer.write(
            f"HTTP/1.1 {status} {reason}\r\n".encode("ascii")
            + f"Content-Type: {content_type}\r\n".encode("ascii")
            + f"Content-Length: {len(body)}\r\n".encode("ascii")
            + b"Cache-Control: no-store\r\n"
            + b"X-Content-Type-Options: nosniff\r\n"
            + b"Access-Control-Allow-Origin: *\r\n"
            + b"Connection: close\r\n"
            + extra + b"\r\n" + body)
        await writer.drain()

    @staticmethod
    def _index() -> bytes:
        links = "".join(
            f'<li><a href="/rankings/single?mode={mode}">{html.escape(name)}</a></li>'
            for mode, name in MODES.items())
        return f"""<!doctype html>
<html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width">
<title>Tet4 rankings</title>
<style>
body{{font:16px system-ui,sans-serif;max-width:760px;margin:3rem auto;padding:0 1rem;
background:#f6f7f9;color:#20242a}}a{{color:#185abc}}li{{margin:.8rem 0}}
section{{background:white;padding:1.2rem 1.5rem;margin:1rem 0;border-radius:10px}}
small{{color:#626a73}}
</style>
<h1>Tet4 Rankings</h1>
<section><h2><a href="/rankings/multiplayer">Multi Ranking</a></h2>
<p>내공, games played, wins, losses and win rate.</p>
<small>The multiplayer score formula is a provisional reconstruction.</small></section>
<section><h2>Single Ranking</h2><ul>{links}</ul>
<p>Best result per player and mode.</p></section>
</html>""".encode("utf-8")

    @staticmethod
    def _layout(title: str, content: str) -> bytes:
        return f"""<!doctype html>
<html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width">
<title>{html.escape(title)}</title>
<style>
body{{font:15px system-ui,sans-serif;max-width:1000px;margin:2rem auto;padding:0 1rem;
color:#20242a;background:#f6f7f9}}a{{color:#185abc}}table{{width:100%;border-collapse:collapse;
background:white}}th,td{{padding:.65rem;text-align:left;border-bottom:1px solid #e5e7eb}}
th{{background:#eef1f5}}.note{{color:#626a73;font-size:.9rem}}nav a{{margin-right:1rem}}
</style>
<nav><a href="/rankings">All rankings</a> <a href="/rankings/multiplayer">Multi</a>
<a href="/rankings/single?mode=0">Marathon</a> <a href="/rankings/single?mode=1">40 Lines</a>
<a href="/rankings/single?mode=2">Ultra</a></nav>
<h1>{html.escape(title)}</h1>{content}</html>""".encode("utf-8")

    def _multiplayer_page(self, board: dict) -> bytes:
        body = [
            '<p class="note">내공 values use a provisional server-side rating formula, '
            'not a verified copy of Hangame\'s original calculation.</p>',
            "<table><thead><tr><th>Rank</th><th>Player</th><th>내공</th><th>Games</th>"
            "<th>Wins</th><th>Losses</th><th>Win rate</th></tr></thead><tbody>",
        ]
        for row in board["players"]:
            body.append(
                "<tr><td>{rank}</td><td>{member}</td><td>{points:,}</td><td>{plays}</td>"
                "<td>{wins}</td><td>{losses}</td><td>{win_rate:.2f}%</td></tr>".format(
                    **{**row, "member": html.escape(row["member"])}))
        body.append("</tbody></table>")
        if not board["players"]:
            body.insert(1, "<p>No multiplayer results yet.</p>")
        return self._layout("Multi Ranking", "".join(body))

    def _single_page(self, board: dict) -> bytes:
        metric = "Best time" if board["mode"] == 1 else "Best score"
        body = [
            "<table><thead><tr><th>Rank</th><th>Player</th>"
            f"<th>{metric}</th><th>Date</th><th>Games</th></tr></thead><tbody>"
        ]
        for row in board["players"]:
            value = (f"{row['best'] // 6000:02d}:{row['best'] // 100 % 60:02d}."
                     f"{row['best'] % 100:02d}") if board["mode"] == 1 else f"{row['best']:,}"
            body.append(
                f"<tr><td>{row['rank']}</td><td>{html.escape(row['member'])}</td>"
                f"<td>{value}</td><td>{html.escape(row['date'])}</td>"
                f"<td>{row['plays']}</td></tr>")
        body.append("</tbody></table>")
        if not board["players"]:
            body.insert(0, "<p>No completed records yet.</p>")
        return self._layout(f"Single Ranking — {board['mode_name']}", "".join(body))
