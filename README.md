# tet4-server

Multiplayer server for the 2012 Hangame Tetris client, `Tet4.exe` 1.3.4. The client
stays unmodified apart from its TPack host names. The server implements the
protocol the client already speaks, reconstructed from captured traffic and the
client's code. [`docs/PROTOCOL.md`](docs/PROTOCOL.md) describes the protocol and
the evidence for every reply.

## Status

Single Mode plays end to end with the real client (Wine, headless under Xvfb):

- TPack login, the CDS channel directory and the secure socket;
- the lobby: authorization, channel entry, the player's member record and Tetris
  profile, and the member, room and item lists;
- Single Mode: AutoEnter, room creation and entry, the game itself in Marathon,
  40 lines and Ultra, game over with NEW RECORD, rank and the player's five best
  results per mode, retry (Enter or 다시도전), back to the mode selection (ESC or
  확인), and 나가기 back to the lobby.

The client runs the game; the server keeps the records. Ultra opens after 500
games, counted over all modes, as the client requires.

## Running

Python 3.10 or newer, standard library only.

```bash
python3 -m unittest discover -s tests -t .
```

```bash
python3 -m tet4server
```

This listens on 127.0.0.1: TPack 10454, CDS 15000, channel 15001, game 15002.
`--records FILE` keeps the Single Mode records and play counts in FILE across
restarts; without it they last until the server stops. `--trace FILE` appends
every decrypted message to FILE.

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
writes `client-patched/`, whose `Tet4.exe` connects to the local TPack server.
`run` starts it with the test account in `tools/bootstrap-sample.txt` and the
Korean locale. The lobby shows the 내 아이템, 상점 and 싱글모드 (Single Mode) buttons.

## Layout

```
tet4server/  the server
  xdr.py       wire primitives          crypto.py   handshake and stream cipher
  xlbp.py      secure session, batches  messages.py message IDs and layouts
  tpack.py     account service          cds.py      channel directory
  channel.py   channel service          game.py     game service
  lobby.py     rooms, records           server.py   listeners and command line
tests/       captured vectors, layouts, and a scripted client session
tools/       client.py, the sample bootstrap, a winedbg command file
docs/        PROTOCOL.md, DEBUGGING.md
```

The decompiled client and the analysis scripts used to recover the protocol are
not in the tree; commit `7776802` is the last one that has them.

See [`CONTRIBUTING.md`](CONTRIBUTING.md) before changing the protocol.
