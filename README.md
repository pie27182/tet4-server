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
- Secure channel handshake, both stream directions
- Channel authorization (`Cmd_AuthToC`) and the user-id reply (`Cmd_Channel_GetUserIdToC`);
  the client accepts both and continues

Not yet working: the client waits for the reply to `EnterChannelByUserIdToS`, so it
stays in the lobby. Single Mode is not started. See [`docs/ROADMAP.md`](docs/ROADMAP.md).

## Documentation

- [`docs/CLIENT.md`](docs/CLIENT.md): how the client works (startup, ports, framing,
  TPack, CDS, secure channel, message IDs). Each fact is marked as seen on the wire
  or only read from code.
- [`docs/METHOD.md`](docs/METHOD.md): tools and method used for the analysis, and
  the wrong turns to avoid.
- [`docs/ROADMAP.md`](docs/ROADMAP.md): ordered checklist of what is done and what remains.
- [`docs/REPRODUCE.md`](docs/REPRODUCE.md): step by step, from the repository and your own
  client folder to a recorded session. Start here to reproduce the results.
- [`docs/FILES.md`](docs/FILES.md): what every file of the client folder is.
- [`docs/ADDRESSES.md`](docs/ADDRESSES.md): the addresses used in the documentation.
- [`docs/ONLINE.md`](docs/ONLINE.md): how the original online service was reached (launcher
  remote gateway: pinned TLS tunnel, JSON hello) and how a local gateway could work.

## Layout

```
tet4server/   protocol code (xdr, tpack, cds, crypto)
tests/        unittest tests; byte vectors come from captured runs
docs/         client description, method, roadmap
tools/        client check and patch, live run, Ghidra export, function lookup,
              RTTI extractor, sample startup string
```

## Requirements

Python 3 (standard library only) for the servers and tests. Running the real client
needs your own copy of the client folder (version 1.3.4, not included), Wine, `wf-recorder`,
`ffmpeg`, `grim` and a Wayland session. Decompiling needs Ghidra 12.2. Versions and
disk notes: [`docs/REPRODUCE.md`](docs/REPRODUCE.md), section 0.

## Running the tests

```
python3 -m unittest discover -s tests -t .
```

## Running the live check

Full steps, with what you should see at each one, are in
[`docs/REPRODUCE.md`](docs/REPRODUCE.md). In short:

```
python3 tools/check_client.py ~/h-tetra-client
python3 tools/patch_client.py ~/h-tetra-client ~/h-tetra-client-patched
python3 tools/live_check.py --client-dir ~/h-tetra-client-patched --out ~/live-runs/first
```

The startup string is `tools/bootstrap-sample.txt` (test account, local servers). The
script starts the servers from this repository, starts `wf-recorder`, then the client.
Close the game when you are done: the recording stops after Wine exits. The output
directory gets `session.mp4` and `frames/` (one PNG per visual change).
