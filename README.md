# tet4-server

A local server for the 2012 Hangame Tetris client, `Tet4.exe` 1.3.4. The client
stays unmodified apart from its TPack host names. The server implements the
protocol the client already speaks, reconstructed from captured traffic and the
client's code. [`docs/PROTOCOL.md`](docs/PROTOCOL.md) describes the protocol and
the evidence for every reply.

## Status

Confirmed with the real client:

- TPack login, the CDS channel directory, and the secure socket in both directions;
- channel entry: authorization, user id, channel info, the player's own member
  record, and the member, room and item lists. The client reaches the lobby;
- Single Mode: AutoEnter, room creation, the game socket and EnterRoom.

Not working: the game does not start. After EnterRoomToC the client crashes in its
Single Mode scene (`Tet4.exe` 0x00461E9D) because nothing registers the player in
its game model. The message that should, a two-layer `Cmd_Channel_AddMemberToC`,
is not recovered yet; see [section 8](docs/PROTOCOL.md#8-where-single-mode-stops).

Changed to follow the client's code and not yet run against it: the `_RoomInfo`
record in `RoomInfoToC` and the room list, `CreateRoomToC` echoing the client's
`k200e`, and `StartNewGameToC` as the answer to `StartNewGameToS` instead of a push
after `EnterRoomToC`.

## Running

Python 3.10 or newer, standard library only.

```bash
python3 -m unittest discover -s tests -t .
```

```bash
python3 -m tet4server
```

This listens on 127.0.0.1: TPack 10454, CDS 15000, channel 15001, game 15002.
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
  lobby.py     rooms                    server.py   listeners and command line
tests/       captured vectors, layouts, and a scripted client session
tools/       client.py and the sample bootstrap
docs/        PROTOCOL.md
```

The decompiled client and the analysis scripts used to recover the protocol are
not in the tree; commit `7776802` is the last one that has them.

See [`CONTRIBUTING.md`](CONTRIBUTING.md) before changing the protocol.
