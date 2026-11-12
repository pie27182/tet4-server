# Running the local server

The repository can run the TPack, CDS, channel and game-socket listeners as one
foreground process. From the repository root:

```sh
python3 -m tet4server
```

The command uses the loopback endpoints expected by `tools/bootstrap-sample.txt`:

| Service | Address |
|---|---|
| TPack | `127.0.0.1:10454` |
| CDS | `127.0.0.1:15000` |
| Channel | `127.0.0.1:15001` |
| Single Mode game socket | `127.0.0.1:15002` |

Stop it with Ctrl+C. The server uses only the Python standard library.

Options:

- `--channel-mode full` (default): answer the channel message types currently
  implemented in `tet4server/channel.py`.
- `--channel-mode discovery-only`: diagnostic mode that performs only the secure
  channel handshake and deliberately sends no application-level replies.
- `--capture-dir PATH`: save decoded game-socket frame bodies as binary files. The
  default is `live-runs/server/game-frames`.
- `--log-level DEBUG|INFO|WARNING|ERROR`: change log verbosity.

Example:

```sh
python3 -m tet4server --log-level DEBUG --capture-dir live-runs/probe/game-frames
```

This starts the local protocol services; it does not start Wine or the game client.
To launch and record the original client as well, follow
[`REPRODUCE.md`](REPRODUCE.md) and use `tools/live_check.py`.

## Single Mode status

This is a runnable local protocol server, but Single Mode is **not yet playable**.
The current game listener completes the secure handshake, decodes the known
client-to-server request shapes and optionally saves them. It does not send the
server-to-client start-game or per-turn update messages.

The latest recorded channel progression reaches the empty member-list reply, then
the empty room-list reply, after which the client sends
`Cmd_Item_GetItemStateToS`. That item-state request is not yet decoded or answered.
The exact nested `StartNewGameToC` messages and the
`_SingleModeInfo` / `_TetrisMemberInfo` structures also remain to be recovered.
The independent Tetris engine is a prototype and is not connected to the wire
protocol, because the original client's piece IDs, timing, board state and update
serializer have not been established.

Do not treat a successful TCP connection, secure handshake, or byte-layout unit test
as proof that the client has entered a playable game. The live acceptance criteria are
tracked in [`ROADMAP.md`](ROADMAP.md).
