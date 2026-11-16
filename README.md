# tet4-server

An online server for the 2012 Hangame Tetris client, `Tet4.exe` 1.3.4, run on any
Linux host or VPS for players connecting over the internet. Players register and
log in with an account; the server keeps their records in a database and ranks
them across everyone on the server. The client stays unmodified apart from its
TPack host names, which point at the server.

The server implements the protocol the client already speaks, reconstructed from
captured traffic and the client's code. [`docs/PROTOCOL.md`](docs/PROTOCOL.md)
describes the protocol and the evidence for every reply.

## Status

Tested with two real clients at once (Wine, headless under Xvfb):

- **Login and lobby**: TPack login, the CDS channel directory and the secure
  socket; accounts and tickets with `--db`; the member list with the room each
  player is in, joins and leaves, lobby chat, the room list (100 slots), quick
  join (바로입장), the member info dialog, and emblems and titles to show.
- **Rooms**: the create dialog (item battle, no-item battle, race), passwords,
  joining from the room list, quick join and invitations (초대), the host's title,
  options and map choice, the game start for everyone, the in-game traffic between
  players, the end with the ranking, results and TP, and leaving. The host sending
  a member away (강퇴) is tested with scripted clients only.
- **Single Mode**: Marathon, 40 lines and Ultra, game over with NEW RECORD, rank
  and the five best results per mode, retry, and back to the lobby. Ultra opens
  after 500 games, as the client requires.
- **Shop (상점) and My Items (내 아이템)**: the three tabs (room-host tickets and
  clubs, items for the game, emblems and titles) at the prices the client shows,
  buying with TP, and the inventory with each item's period or uses. Players start
  with 10,000 TP and earn 30, 20 or 10 TP per multiplayer game by rank.

The client runs the game; the server keeps the players, rooms, records and
wallets, and passes the game traffic between the players in a room.

With a database the server requires accounts: players register and log in with a
name and password through `tools/client.py play`, and records and wallets are kept.
[`docs/DEPLOY.md`](docs/DEPLOY.md) sets this up on a VPS.

Not implemented yet: whispers, friends, guilds, gifts and the gift box, the Happy
Cube, missions, spectating a room from the lobby, and the effects of the items that
are used up (rating and record items, nickname change); they can be bought but do
nothing. Survival and painting rooms are created like the others but untested.

## Running

Python 3.10 or newer, standard library only.

```bash
python3 -m unittest discover -s tests -t .
```

```bash
python3 -m tet4server
```

This listens on 127.0.0.1: TPack 10454, CDS 15000, and one channel on 15001 (game
15002). Any account name is accepted and records last until the server stops.
`--db FILE` keeps accounts, records and wallets in an SQLite file and requires a
login (the account service listens on 10455); `--channels N` runs N channels of up
to 300 players, each in its own process, sharing that file. `--host` and
`--public-host` set the address to listen on and the one announced to clients.
`--trace FILE` appends every decrypted message to FILE.

To run the client against it, copy your client folder into `client/` (it is
git-ignored), then check it, make the patched copy and start it under Wine in a
second terminal:

```bash
python3 tools/client.py check
```

```bash
python3 tools/client.py patch
```

```bash
python3 tools/client.py run
```

`check` compares every file with the client's own `files.sha256.json`. `patch`
writes `client-patched/`, whose `Tet4.exe` connects to the TPack server on this machine
(`--host ADDRESS` for a server elsewhere). `run` starts it with the test account in
`tools/bootstrap-sample.txt` and the Korean locale; against a server with
accounts, `play --server ADDRESS [--register]` logs in and starts it instead.

## Layout

```
tet4server/  the server
  xdr.py       wire primitives          crypto.py   handshake and stream cipher
  xlbp.py      secure session, batches  schema.py   message codec over catalog.py
  catalog.py   every message layout     messages.py hand-written layouts, IDs
  tpack.py     TPack login              cds.py      channel directory
  channel.py   channel service          game.py     game service (rooms)
  lobby.py     players, rooms, chat     room.py     a room's seats, host, games
  profiles.py  member rows, profiles    records.py  Single Mode records
  shop.py      catalog, TP, inventory   server.py   listeners and command line
  accounts.py  accounts, tickets, database, account service
tests/       captured vectors, layouts, scripted clients for every service
tools/       client.py, the sample bootstrap, a winedbg command file
docs/        PROTOCOL.md, DEBUGGING.md, DEPLOY.md
```

The decompiled client and the analysis scripts used to recover the protocol are
not in the tree; commit `7776802` is the last one that has them.

See [`CONTRIBUTING.md`](CONTRIBUTING.md) before changing the protocol.
