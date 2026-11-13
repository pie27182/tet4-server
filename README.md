# tet4-server

A small local server for the original 2012 Hangame Tetris client (`Tet4.exe`).
The goal is to let the unmodified client log in, reach a channel, and play
Single Mode against a server we run on `127.0.0.1`.

The client is not replaced. This project implements the server side of the protocol
that the client already speaks, based on captured traffic and decompiled code.

## Status

Working, verified with the real client (`tools/live_check.py`):

- TPack account replies (AuthSession, LoginTPack)
- CDS channel directory reply
- Secure channel handshake and both stream directions
- Channel authorization, user id, channel entry, member list, room list and item state;
  the client reaches the channel screen with an empty room list

Not yet working: live-verified AutoEnter/game-socket entry and Single Mode gameplay.
The game listener still captures frames but does not send a start-game state or turn
updates. See [`docs/ROADMAP.md`](docs/ROADMAP.md).

## Quick start

```
git bundle verify tet4-server.bundle      # from a bundle, optional
git clone tet4-server.bundle tet4-server  # or: git clone <url>
cd tet4-server
cp -r /path/to/hangame-client/. client/   # your own client copy, git-ignored
python3 -m unittest discover -s tests -t .  # OK, needs no client
python3 -m tet4server                     # start TPack/CDS/channel/game listeners
python3 tools/check_client.py
python3 tools/patch_client.py
python3 tools/live_check.py                # records to live-runs/<time>/
```

The client, recordings and decompiled output never enter git or the bundle. Versions,
troubleshooting and every step: [`docs/REPRODUCE.md`](docs/REPRODUCE.md).

## Documentation

- [`docs/REPRODUCE.md`](docs/REPRODUCE.md) — everything you run: requirements, client
  folder, patched copy, live run, decompilation. Start here.
- [`docs/CLIENT.md`](docs/CLIENT.md) — how the client works: ports, framing, TPack,
  CDS, secure channel, messages. Facts marked as seen on the wire or read from code.
- [`docs/READING.md`](docs/READING.md) — how to read the reconstructed code, which
  names are original, and the reference documentation behind the tools.
- [`docs/METHOD.md`](docs/METHOD.md) — the rules and the wrong turns.
- [`docs/ROADMAP.md`](docs/ROADMAP.md) — what is done and what remains.
- [`docs/SERVER.md`](docs/SERVER.md) — start the local protocol services and current Single Mode boundary.
- [`docs/FILES.md`](docs/FILES.md) — every file of the client folder.
- [`docs/ADDRESSES.md`](docs/ADDRESSES.md) — addresses used in the docs.
- [`docs/ONLINE.md`](docs/ONLINE.md) — the original online gateway (not implemented).
- [`CONTRIBUTING.md`](CONTRIBUTING.md) — ground rules, branches, commits, issues.

## Layout

```
tet4server/   protocol code (xdr, tpack, cds, crypto, channel, game, tetris)
tests/        unittest tests with byte vectors from captured runs
docs/         client description, method, roadmap, reproduction, reading guide
tools/        client check/patch, live run, Ghidra export, class recovery,
              disassembler, function lookup, RTTI extractor, debugger driver
names/        reconstructed function names (address -> name)
fields/       reconstructed structure fields (structure, offset, name)

Local data, git-ignored, never in the bundle:
client/ client-patched/ work/ live-runs/ .venv/
```
