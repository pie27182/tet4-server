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

## Layout

```
tet4server/   protocol code (xdr, tpack, cds, crypto)
tests/        unittest tests; byte vectors come from captured runs
docs/         client description, method, roadmap
tools/        Ghidra export script, RTTI extractor for message IDs
```

## Requirements

- Python 3 (standard library only). Tested with Python 3.14.
- A legal copy of the original client files, placed locally. They are not included.
  Only needed to run the client itself, not the tests.

## Running the tests

```
python3 -m unittest discover -s tests -t .
```

## Running the live check

This starts the TPack, CDS and channel servers from this repository and launches the
real client under Wine. You need the client files, Wine, and a Wayland session for
screenshots (`grim`).

1. Put the client's startup string in a file, e.g. `~/tet4-bootstrap.txt`. It must
   begin with `metp://127.0.0.1:15000/` and include the TPack port (`k602e=10454`).
   Use a test account.
2. Run:

```
python3 tools/live_check.py --client-dir ~/h-tetra-client \
    --bootstrap ~/tet4-bootstrap.txt --seconds 60 --shots /tmp/shots
```

The script prints each request the servers receive and writes screenshots to
`--shots`. See `python3 tools/live_check.py --help` for all options.

## Legal and privacy notes

- This repository contains no game binaries, no captures, and no credentials.
  Captured byte vectors in tests are reduced to the minimum needed for the checks.
- Use only a test account with this server. Do not point the client at real accounts
  on third-party servers.
