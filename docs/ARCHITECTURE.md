# Architecture

How the server is built: its layers and modules, its processes, the path of a
message through the code, and how to extend it. [`PROTOCOL.md`](PROTOCOL.md)
describes what the client speaks, [`MESSAGES.md`](MESSAGES.md) every message.

## Layers

```
tet4server/
  config.py        every setting, and every fixed value of the client
  server.py        processes, listeners, the command line
  storage.py       the SQLite database
  protocol/        bytes <-> messages with named fields; no game logic
  domain/          the server's state and rules; no bytes
  services/        one module per socket: messages <-> the domain
```

Imports go one way: `services` use `domain` and `protocol`; `domain` uses
`storage`; everything may use `config`. The protocol knows nothing of rooms or
players, and the domain builds no message, so either can change without the other.

| Module | Responsibility |
|---|---|
| `config.py` | Addresses and ports, capacity, timing, the TP economy, account rules; the client's identifiers, sizes, room states, failcodes and item codes |
| `protocol/wire.py` | Integers, strings and frames; `ProtocolError`; `Endpoint` |
| `protocol/cipher.py` | The secure socket's key exchange (TEA) and stream cipher (TEA and MT19937) |
| `protocol/catalog.py` | Every message's ID, layer and fields (`name:type=key`), the extension classes, TPack and the directory |
| `protocol/codec.py` | `pack(name, **fields)` → `Message(layer, body)`, `unpack(name, body)` → fields; layouts compiled once |
| `protocol/session.py` | One client's secure connection: key exchange, encrypted frames, layered batches, the trace file |
| `protocol/dispatch.py` | `@on(name)` handlers and the loop that feeds them a connection's messages |
| `domain/lobby.py` | One channel: its players, its rooms, the map names learnt, background work |
| `domain/room.py` | A room: settings, seats, host, the running game and its ranking |
| `domain/records.py` | Single Mode records and ranks |
| `domain/rating.py` | Global multiplayer rating, lifetime results and leaderboard |
| `domain/shop.py` | Products and prices, wallets (TP and items), buying, showing and discarding |
| `storage.py` | Accounts and tickets, records, wallets, presence; one writer thread |
| `services/tpack.py`, `directory.py` | The plain-frame services: one function each |
| `services/accounts.py` | Registration and login for the launcher (JSON lines) |
| `services/channel.py` | The channel socket: login, lobby, rooms, invitations, profiles, shop |
| `services/game.py` | The game socket: entering and leaving a room, its settings, games, relays |
| `services/views.py` | What clients are shown: member rows, profiles, room info, the shop, the inventory |

## Processes and concurrency

```
front process                         channel process (one per --channels)
  TPack        :10454                   channel socket :15001 + 2(n-1)
  directory    :15000  -- counts --     game socket    :15002 + 2(n-1)
  accounts     :10455                   event loop + one database writer thread
        \___________ SQLite database (WAL), shared ___________/
```

- With one channel (the default) everything runs in one process. With
  `--channels N` the front process starts N channel processes (multiprocessing,
  "spawn"); each reports its bound ports, and keeps its player count in a shared
  array the directory reads.
- A channel process is one asyncio event loop. Everything that touches the domain
  runs on it, so the domain has no locks. Database reads go to a worker thread
  (`asyncio.to_thread`); writes go to one writer thread, in order (`Database.write`,
  `Database.submit`).
- Channels share only the database. A change that reads before it writes (a
  purchase, TP earned, a Single Mode result) runs as one immediate transaction, so
  no channel undoes another's. Each channel rereads everyone's records every minute
  for the ranks, and checks every two seconds whether its players logged in again
  elsewhere (the presence table), closing their older connections.
- Sending never waits for a slow client: `Session.post` queues the batch, and a
  client with more than a megabyte unsent is cut off. Replies use `Session.send`,
  which waits until the socket has taken them.

## A message's path

```
socket -> Session.receive        key exchange, decrypt, "XLBP", decode_batch -> Message(layer, body)
       -> Connection.serve       handlers[(layer, ID)] -> codec unpack -> fields
       -> @on handler            the domain (lobby, room, shop, records) changes
       -> views / codec.pack     the replies and news, each a Message with its layer
       -> Session.send / post    encode_batch (alignment markers), encrypt, write
          Lobby.post, Room.post  the same batch to everyone in the channel or room
```

For example `Channel_GameJoinRoomToS` arrives at layer 0; `Connection.serve` finds
`ChannelConnection.join_room` registered for (0, 0x0AE830EA), unpacks the fields
(`member`, `room`, `password`) and calls it; the handler checks the room in the
lobby and sends `Channel_GameJoinRoomToC` with the room's settings and the game
socket. In-game messages skip the codec: `GameConnection.relay` is registered
`raw=True` for 42 of them and posts each, as it came, to the other members.

## The catalog and the codec

`protocol/catalog.py` is the one place a message is defined: its ID, its layer,
and its fields in wire order, written `name:type=key`. The types come from the
client's Serialize and Deserialize functions, the layers from its converter
registrations, the names from this server, and the keys from the client's
converters. A field nobody has named is its bare type and reads as `f0`, `f1`, ...
by position. `EXTENDS` lists the classes the client receives under another
message's ID; `PLAIN` the TPack and directory messages.

`protocol/codec.py` compiles every layout once at import: consecutive number
fields become one `struct.Struct`, strings, structures and vectors their own steps.
`pack` returns a `Message` with the layer and the wire ID (an extension's base ID),
filling fields left out with zero or empty; `unpack` reads a message that ends
before its last fields leniently, as the real client sends some. Unknown field
names raise `KeyError`, so a misspelt name fails at once.

## Performance

The stream cipher is the cost: one TEA encryption, 32 rounds in pure Python, per 8
bytes per recipient, and lobby news goes to every player in the channel. Measured
with `tools/loadtest.py` on one channel (4-core container): 300 players in 50 full
rooms placing two pieces a second each, 2,570 pieces delivered a second for 40% of
one core, a median delivery of 1 ms, 99% within 0.17 s. Profiled under that load,
TEA is about three quarters of the CPU; the codec and dispatch are a few percent.
The server scales with channels, one process per core. Per-message logging is at
DEBUG, so a busy server logs only events (logins, rooms, games).

## Extending

**Handle a client message.** Name the fields you need in its catalog entry
(`room:u32=k42e`), write a method on the service's connection class marked
`@on("Its_NameToS")` that takes the fields, and reply with `codec.pack(...)` or a
`views` function. Then run `python3 tools/messages.py` (MESSAGES.md shows the new
handler) and add a test with the scripted clients in `tests/support.py`.

**Send a new message.** Name its fields in the catalog and `pack` it; a message the
lobby or a room needs to see goes out with `Lobby.post` or `Room.post`. If it is an
extension of another, add it to `EXTENDS`: `pack` then gives it the base message's
ID, and `Session.send(base, extension)` puts both in one batch.

**Add a setting.** Put it in `config.py` with a comment saying what it does, and
import it where it is used.

**Add a product.** Add its group and prices to `GROUPS` in `domain/shop.py`; the
client shows it if its own `ShopDataList.xml` knows the code. An item the server
acts on gets its code in `config.py`.

**Keep something.** Add a table to `storage.py`'s schema and methods to read and
write it; the domain object that owns the data loads it on entering and writes
through `Database.write`, in a transaction if it reads first.

Every protocol change needs evidence ([`CONTRIBUTING.md`](../CONTRIBUTING.md)): a
capture, the client's code, or a live run.

## Tests

`python3 -m unittest discover -s tests -t .` runs everything in a few seconds:

| Test | What it covers |
|---|---|
| `test_cipher` | The key exchange and stream cipher against a captured session |
| `test_protocol` | Batches and layers, the codec on every message, layouts at the positions the client reads |
| `test_tpack`, `test_directory` | The plain services against captured bytes |
| `test_server` | A scripted client through login and Single Mode over TCP; records and ranks; channel processes |
| `test_multiplayer` | Two scripted clients: presence, chat, rooms, a game to its end, multiplayer rating, invitations, banishing |
| `test_rating` | Multiplayer rating transfers, opponent strength, global order and SQLite persistence |
| `test_shop` | The catalog, wallets, buying, the inventory, items in a game, profiles |
| `test_accounts` | The database, the account service, tickets, logins across channels |
| `test_reports` | Players' reports: logged, kept in the database, listed by `tools/reports.py` |
| `test_launcher` | The launcher's settings, game copies, key settings and login |
| `test_docs` | MESSAGES.md is current |

`tools/loadtest.py` measures capacity; `tools/reports.py` lists players' reports;
[`DEBUGGING.md`](DEBUGGING.md) runs the real client.
