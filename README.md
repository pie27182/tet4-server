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

The channel-entry response now has a statically derived zero/default probe, but its
acceptance and channel metadata are not yet verified with the real client. Single Mode
is not started. See [`docs/ROADMAP.md`](docs/ROADMAP.md).

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
- [`docs/ISSUES.md`](docs/ISSUES.md): known open problems, with stable IDs and fix criteria.
- [`CONTRIBUTING.md`](CONTRIBUTING.md): ground rules (no client files, test accounts only,
  evidence for every reply), branches, commits, and how an issue is closed.

## Layout

```
tet4server/   protocol code (xdr, tpack, cds, crypto)
tests/        unittest tests; byte vectors come from captured runs
docs/         client description, method, roadmap
tools/        client check and patch, live run, Ghidra export, function lookup,
              disassembler, RTTI extractor, sample startup string

Local data, all git-ignored and never in the bundle (created by you or the tools):
client/           your copy of the client folder (you put it here)
client-patched/   patched copy made by tools/patch_client.py
work/             Ghidra (unzipped here), decompiled output, Ghidra project, logs
live-runs/        recordings and frames from tools/live_check.py
.venv/            Python packages for tools/disasm.py
```

## Getting the code

From a bundle file (`tet4-server.bundle`):

```
git bundle verify tet4-server.bundle      # checks the bundle is complete
git clone tet4-server.bundle tet4-server
cd tet4-server
python3 -m unittest discover -s tests -t .  # should print OK; needs no client
```

The bundle has only tracked files. The client, the decompiled output and the recordings
are not in it; you add them yourself (below). Then:

1. Copy your client folder into `client/` (see "What you need").
2. `python3 -m venv .venv && .venv/bin/pip install pefile capstone` (only for `tools/disasm.py`).
3. Download Ghidra 12.2 PUBLIC from <https://github.com/NationalSecurityAgency/ghidra/releases>,
   unzip it into `work/` (so `work/ghidra_12.2_PUBLIC/` exists) and run `tools/export_all.sh`
   (only for decompiling).
4. Follow `docs/REPRODUCE.md` for the live run.

From the git hosting service, use `git clone <url>` instead of the first command.

## What you need

**Client files (not included).** Copy the whole contents of your official client folder,
version 1.3.4, into `client/` in the repository (git-ignored, never committed or bundled).
Put the files directly in `client/`, not in a subfolder, so `client/Tet4.exe` exists.
Check it with `tools/check_client.py`. The game needs `Tet4.exe`, all DLLs, and
the `Tet4/`, `common/` and `Sysfiles/` folders. `h-tetra.exe` is the launcher; the local
flow does not use it. For the experiments make a patched copy with
`tools/patch_client.py` (see `docs/REPRODUCE.md`, section 3).

**Tools.**
- Python 3 (standard library only) for the servers and tests.
- Wine, `wf-recorder`, `ffmpeg`, `grim` and a Wayland session, for live runs.
- Ghidra 12.2 PUBLIC (unzipped in `work/`) with OpenJDK, for decompiling the client (`tools/export.sh`).
- `pefile` and `capstone` in `.venv` for `tools/disasm.py`.

Versions, disk space and the decompilation list: [`docs/REPRODUCE.md`](docs/REPRODUCE.md).

## How the server is developed

1. **Capture.** Run the client against the local servers (`tools/live_check.py`) and
   read the server logs and the recording. Save byte captures as test vectors.
2. **Decompile.** Export the modules with `tools/export.sh` and look up addresses with
   `tools/find_function.py`. Message IDs come from `tools/tet4_rtti_extract.py`;
   field order comes from the `Serialize` and `Deserialize` functions.
3. **Implement** in `tet4server/`, with a byte-level test in `tests/` that uses a
   capture.
4. **Check.** Run the tests, then a live run. Compare what the client sends and does
   next with what the docs predict.
5. **Record.** Verified facts go in `docs/CLIENT.md`, marked as seen on the wire or
   read from code. Progress goes in `docs/ROADMAP.md`.

Rule: the server sends a reply only when a capture or the decompiled code supports
it. Requests with no known reply get no answer.

## Running the tests

```
python3 -m unittest discover -s tests -t .
```

## Running the live check

Full steps, with what you should see at each one, are in
[`docs/REPRODUCE.md`](docs/REPRODUCE.md). In short:

```
python3 tools/check_client.py          # client/ in the repository
python3 tools/patch_client.py          # writes client-patched/
python3 tools/live_check.py            # writes live-runs/<time>/
```

The startup string is `tools/bootstrap-sample.txt` (test account, local servers). The
script starts the servers from this repository, starts `wf-recorder`, then the client.
Close the game when you are done: the recording stops after Wine exits. The output
directory gets `session.mp4` and `frames/` (one PNG per visual change).
