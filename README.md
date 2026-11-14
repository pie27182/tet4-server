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
  the client reaches the channel screen
- Single Mode AutoEnter, a one-room `GetRoomListToC` reply, `CreateRoomToC`,
  `RoomInfoToC`, connection to the game socket on `15002`, the 48-byte secure
  handshake, `EnterRoomToS`/`AlterRoomToS`, and the Korean
  `Cmd_Room_StartNewGameSvcKorToC` vector
- Live WineDbg checks show the room list, `SetRoomInfo`, the Korean start
  converter and `Net_StartNewGame` all executing

Not yet working: the room-to-game scene transition. Clicking Single Mode creates
`CTetSingleScene` and starts updating it before `CTetSingleMainBody::Start`
(`FUN_00460DD0`) runs, so the scene step vectors are empty and the client faults
at `Tet4.exe:0x00461E9D` (return address `0x004627F5`). The server already
delivers the room and start messages; the missing piece is the client-side
trigger that starts the main body. See [`docs/CLIENT.md`](docs/CLIENT.md) and
[`docs/ROADMAP.md`](docs/ROADMAP.md).

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

The client binaries and recordings never enter git. The decompiled text is
committed as a snapshot under [`decompiled/`](decompiled/); the client's
executables and DLLs remain local and git-ignored. Versions, troubleshooting and
every step: [`docs/REPRODUCE.md`](docs/REPRODUCE.md).

## Documentation

- [`docs/REPRODUCE.md`](docs/REPRODUCE.md) — everything you run: requirements, client
  folder, patched copy, live run, decompilation. Start here.
- [`docs/ORIGINAL.md`](docs/ORIGINAL.md) — what the original client is: game,
  C++/MFC 9/VC9 stack, and the matching-decompilation method.
- [`docs/RTTI.md`](docs/RTTI.md) — MSVC RTTI class/vtable inventory and the
  generated C++03 skeletons.
- [`docs/RECOVERY.md`](docs/RECOVERY.md) — the DLL-first recovery queue and the
  rules for readable class/field/method output.
- [`docs/ALTERNATIVES.md`](docs/ALTERNATIVES.md) — faster class-recovery tools
  (SuperGhidra, IDA, Binary Ninja, OOAnalyzer) and their trade-offs.
- [`docs/CLIENT.md`](docs/CLIENT.md) — how the client works: ports, framing, TPack,
  CDS, secure channel, messages. Facts marked as seen on the wire or read from code.
- [`docs/READING.md`](docs/READING.md) — how to read the reconstructed code, which
  names are original, and the reference documentation behind the tools.
- [`docs/TOOLCHAIN.md`](docs/TOOLCHAIN.md) — the exact VC9 SP1 compiler for
  function-level matching, the download script, and its limits.
- [`docs/DECOMPILATION.md`](docs/DECOMPILATION.md) — the full REA native
  decompilation, its counts, failures and missing .NET part.
- [`decompiled/README.md`](decompiled/README.md) — the committed snapshot:
  full REA archive, consolidated C/H, class headers and RTTI, with sizes and
  extraction instructions.
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
decompiled/   committed decompilation snapshot: full REA archive, consolidated
              Ghidra C/H, class-recovery headers, RTTI inventory

Local data, git-ignored, never in the bundle:
client/ client-patched/ work/ live-runs/ .venv/
```
