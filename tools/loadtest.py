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

from tet4server import crypto, schema  # noqa: E402
from tet4server.messages import Msg  # noqa: E402
from tet4server.xdr import Reader, string, u32, u64  # noqa: E402
from tet4server.xlbp import MAGIC, decode_batch, encode_batch  # noqa: E402

PIECE = schema.message_id("Room_OrderTypePolyMinoPutTetris")
START_OK = schema.message_id("Room_OrderTypeLetsGameStartOkTetris")


class Client:
    """The client's side of the secure socket."""

    @classmethod
    async def connect(cls, host: str, port: int) -> "Client":
        reader, writer = await asyncio.open_connection(host, port)
        share = crypto.seal_share(crypto.new_share())
        writer.write(share)
        master = crypto.master_key(share, await reader.readexactly(crypto.SHARE_SIZE))
        return cls(reader, writer, master)

    def __init__(self, reader, writer, master):
        self.reader, self.writer = reader, writer
        self.tx, self.rx = crypto.upstream_cipher(master), crypto.downstream_cipher(master)

    def send(self, body: bytes, layer: int = 0) -> None:
        payload = MAGIC + encode_batch({layer: body})
        self.writer.write(self.tx.encrypt(u32(len(payload)) + payload))

    async def receive(self):
        length = int.from_bytes(self.rx.decrypt(await self.reader.readexactly(4)), "big")
        return decode_batch(self.rx.decrypt(await self.reader.readexactly(length))[4:])

    async def until(self, msg_id: int, layer: int = 0):
        while True:
            message = await self.receive()
            if (message.id, message.layer) == (msg_id, layer):
                return message


def fields(message, name: str) -> dict:
    r = Reader(message.body)
    r.u32()
    return schema.unpack(name, r)


async def bot(args, index: int, rooms: dict, stats: dict) -> None:
    name, size = b"bot%d" % index, args.room
    group, host = divmod(index, size)[0], index % size == 0
    channel = await Client.connect(args.host, args.port)
    channel.send(u32(Msg.AuthToS))
    await channel.until(Msg.AuthToC)
    channel.send(u32(Msg.Channel_GetUserIdByMemberIdToS) + string(name))
    await channel.until(Msg.Channel_GetUserIdToC)
    channel.send(b"".join([u32(Msg.Channel_EnterChannelByUserIdToS), u64(0), string(name),
                           string(b"TET4"), string(b""), string(b"1"), string(b""), u32(0),
                           string(b""), string(b""), u64(0)]))
    await channel.until(Msg.Channel_EnterChannelToC)
    if host:
        channel.send(schema.pack("Channel_AutoEnterRoomToS", k3e=name, k42e=0xFFFFFFFF,
                                 k45e=b"load", k46e=b"Y000MNN", k66e=size))
        created = fields(await channel.until(Msg.Channel_CreateRoomToC), "Channel_CreateRoomToC")
        rooms[group].set_result((created["k42e"], created["k53e"]))
    number, game_port = await rooms[group]
    stats["readers"].append(asyncio.create_task(drain(channel)))   # lobby news, not counted
    game = await Client.connect(args.host, game_port)
    game.send(schema.pack("Room_EnterRoomToS", k42e=number, k3e=name))
    await game.until(Msg.Room_EnterRoomToC)
    if host:
        for _ in range(size):                             # everyone seated
            await game.until(Msg.Room_AddMemberToC)
        seats = [b"bot%d" % (group * size + seat) for seat in range(size)]
        game.send(schema.pack("Room_OrderTypeLetsGameStartTetris", flags=[0] * 6,
                              members=seats + [b""] * (6 - size)), layer=3)
    await game.until(START_OK, 3)
    stats["playing"] += 1
    stats["readers"].append(asyncio.create_task(listen(game, stats)))
    await stats["start"]
    end = time.monotonic() + args.seconds
    while time.monotonic() < end:
        game.send(schema.pack("Room_OrderTypePolyMinoPutTetris", f2=bytes(16),
                              f3=int(time.time() * 1000) & 0xFFFFFFFF), layer=3)
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
                sent = fields(message, "Room_OrderTypePolyMinoPutTetris")["f3"]
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
    parser.add_argument("--port", type=int, default=15001, help="the channel's port")
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
