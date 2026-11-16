"""Load test: bots log in to a running server, fill rooms and play.

    python3 -m tet4server --log-level WARNING &
    python3 tools/loadtest.py --players 120 --server-pid $!

Every bot is a client of its own: it enters the channel, joins a room (the first bot
of every ROOM creates it), and once the host has started the game sends a piece every
1/RATE seconds, which the server encrypts and passes to the others in the room. The
bots run in several processes, so that their own ciphers leave the server's core
alone. Printed: pieces delivered per second, delivery latency, and the CPU the server
process used. Run it on the server's machine, or the latency includes the network.
"""
import argparse
import asyncio
import multiprocessing
import os
import random
import statistics
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

from tet4server.config import CHANNEL_PORT  # noqa: E402
from tet4server.protocol import cipher, codec  # noqa: E402
from tet4server.protocol.codec import pack  # noqa: E402
from tet4server.protocol.session import MAGIC, decode_batch, encode_batch  # noqa: E402
from tet4server.protocol.wire import U32  # noqa: E402

PIECE = codec.message_id("Room_OrderTypePolyMinoPutTetris")


class Client:
    """The client's side of the secure socket."""

    @classmethod
    async def connect(cls, host: str, port: int) -> "Client":
        reader, writer = await asyncio.open_connection(host, port)
        share = cipher.seal_share(cipher.new_share())
        writer.write(share)
        master = cipher.master_key(share, await reader.readexactly(cipher.SHARE_SIZE))
        return cls(reader, writer, master)

    def __init__(self, reader, writer, master):
        self.reader, self.writer = reader, writer
        self.tx, self.rx = cipher.upstream_cipher(master), cipher.downstream_cipher(master)

    def send(self, *messages) -> None:
        payload = MAGIC + encode_batch(messages)
        self.writer.write(self.tx.encrypt(U32.pack(len(payload)) + payload))

    async def receive(self):
        length = U32.unpack(self.rx.decrypt(await self.reader.readexactly(4)))[0]
        return decode_batch(self.rx.decrypt(await self.reader.readexactly(length))[4:])

    async def until(self, name: str) -> dict:
        """The fields of the next message `name`, skipping others."""
        layout = codec.MESSAGES[name]
        while True:
            message = await self.receive()
            if (message.layer, message.id) == (layout.layer, layout.id):
                return codec.unpack(name, message.body)


async def bot(args, index: int, rooms: dict, stats: dict) -> None:
    name, size = b"bot%d" % index, args.room
    group, host = divmod(index, size)[0], index % size == 0
    channel = await Client.connect(args.host, args.port)
    channel.send(pack("AuthToS"))
    await channel.until("AuthToC")
    channel.send(pack("Channel_GetUserIdByMemberIdToS", member=name))
    await channel.until("Channel_GetUserIdToC")
    channel.send(pack("Channel_EnterChannelByUserIdToS", member=name, game_id=b"TET4",
                      channel_id=b"1"))
    await channel.until("Channel_EnterChannelToC")
    if host:
        channel.send(pack("Channel_AutoEnterRoomToS", member=name, room=0xFFFFFFFF,
                          title=b"load", options=b"Y000MNN", limit=size))
        created = await channel.until("Channel_CreateRoomToC")
        rooms[group].set_result((created["room"], created["game_port"]))
    number, game_port = await rooms[group]
    stats["readers"].append(asyncio.create_task(drain(channel)))   # lobby news, not counted
    game = await Client.connect(args.host, game_port)
    game.send(pack("Room_EnterRoomToS", room=number, member=name))
    await game.until("Room_EnterRoomToC")
    if host:
        for _ in range(size):                             # everyone seated
            await game.until("Room_AddMemberToC")
        seats = [b"bot%d" % (group * size + seat) for seat in range(size)]
        game.send(pack("Room_OrderTypeLetsGameStartTetris", flags=[0] * 6,
                       players=seats + [b""] * (6 - size)))
    await game.until("Room_OrderTypeLetsGameStartOkTetris")
    stats["playing"] += 1
    stats["readers"].append(asyncio.create_task(listen(game, stats)))
    await stats["start"]
    end = time.monotonic() + args.seconds
    while time.monotonic() < end:
        game.send(pack("Room_OrderTypePolyMinoPutTetris", f2=bytes(16),
                       f3=int(time.time() * 1000) & 0xFFFFFFFF))
        stats["sent"] += 1
        await asyncio.sleep(random.expovariate(args.rate))


async def drain(client: Client) -> None:
    try:
        while True:
            await client.receive()
    except (asyncio.IncompleteReadError, ConnectionError):
        pass


async def listen(game: Client, stats: dict) -> None:
    try:
        while True:
            message = await game.receive()
            if message.id == PIECE:
                sent = codec.unpack("Room_OrderTypePolyMinoPutTetris", message.body)["f3"]
                stats["latency"].append(((int(time.time() * 1000) - sent) & 0xFFFFFFFF))
    except (asyncio.IncompleteReadError, ConnectionError):
        pass


async def run_bots(args, indexes: list[int], ready, go, results) -> None:
    loop = asyncio.get_running_loop()
    rooms = {i // args.room: loop.create_future() for i in indexes}
    stats = {"sent": 0, "playing": 0, "latency": [], "readers": [],
             "start": loop.create_future()}
    tasks = [asyncio.create_task(bot(args, i, rooms, stats)) for i in indexes]
    while stats["playing"] < len(indexes):
        await asyncio.sleep(0.1)
        if any(t.done() and t.exception() for t in tasks):
            raise next(t.exception() for t in tasks if t.done() and t.exception())
    ready.put(len(indexes))
    await asyncio.to_thread(go.wait)
    stats["start"].set_result(None)
    await asyncio.gather(*tasks)
    await asyncio.sleep(1)                               # the last deliveries
    results.put((stats["sent"], stats["latency"]))


def bot_process(args, indexes, ready, go, results) -> None:
    asyncio.run(run_bots(args, indexes, ready, go, results))


def cpu_seconds(pid: int) -> float:
    """User and system time of a process and its children, in seconds."""
    fields = Path(f"/proc/{pid}/stat").read_text().rsplit(")", 1)[1].split()
    return sum(int(f) for f in fields[11:15]) / os.sysconf("SC_CLK_TCK")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=CHANNEL_PORT, help="the channel's port")
    parser.add_argument("--players", type=int, default=60)
    parser.add_argument("--room", type=int, default=6, help="players per room (2-6)")
    parser.add_argument("--rate", type=float, default=2.0, help="pieces per second per player")
    parser.add_argument("--seconds", type=float, default=20.0)
    parser.add_argument("--processes", type=int, default=max(1, (os.cpu_count() or 2) - 1))
    parser.add_argument("--server-pid", type=int, help="measure this process's CPU")
    args = parser.parse_args()
    groups = list(range(args.players // args.room))
    context = multiprocessing.get_context("spawn")
    ready, go, results = context.Queue(), context.Event(), context.Queue()
    shares = [[i for g in groups[p::args.processes] for i in range(g * args.room, (g + 1) * args.room)]
              for p in range(args.processes)]
    shares = [s for s in shares if s]
    processes = [context.Process(target=bot_process, args=(args, s, ready, go, results), daemon=True)
                 for s in shares]
    for process in processes:
        process.start()
    playing = sum(ready.get(timeout=120) for _ in processes)
    print(f"{playing} players in {playing // args.room} rooms; playing for {args.seconds:.0f} s")
    cpu = cpu_seconds(args.server_pid) if args.server_pid else None
    started = time.monotonic()
    go.set()
    outcome = [results.get(timeout=args.seconds + 60) for _ in processes]
    elapsed = time.monotonic() - started
    sent = sum(s for s, _ in outcome)
    latency = sorted(v for _, values in outcome for v in values)
    print(f"pieces sent {sent / elapsed:.0f}/s, delivered {len(latency) / elapsed:.0f}/s")
    if latency:
        q = statistics.quantiles(latency, n=100)
        print(f"delivery latency: median {q[49]:.0f} ms, 99th percentile {q[98]:.0f} ms")
    if cpu is not None:
        used = cpu_seconds(args.server_pid) - cpu
        print(f"server CPU: {100 * used / elapsed:.0f}% of one core")


if __name__ == "__main__":
    main()
