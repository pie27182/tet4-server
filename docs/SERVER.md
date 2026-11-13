# Running the local server

Start all four local listeners from the repository root:

```sh
python3 -m tet4server
```

| Service | Address |
|---|---|
| TPack | `127.0.0.1:10454` |
| CDS | `127.0.0.1:15000` |
| Channel | `127.0.0.1:15001` |
| Single Mode game socket | `127.0.0.1:15002` |

Stop the foreground process with Ctrl+C. The server uses only the Python standard
library. The command starts listeners; it does not launch Wine or the game client.

Options:

- `--channel-mode full` (default): answer the implemented channel messages,
  including the live-accepted empty member, room and item-state replies.
- `--channel-mode discovery-only`: perform only the secure channel handshake and
  deliberately send no application-level reply.
- `--capture-dir PATH`: save decoded game-socket frame bodies as binary files.
  Default: `live-runs/server/game-frames`.
- `--log-level DEBUG|INFO|WARNING|ERROR`: set log verbosity.

For a real-client run with screen recording, use `tools/live_check.py` as described
in [`REPRODUCE.md`](REPRODUCE.md).

## Current Single Mode boundary

The client has been observed accepting:
- channel authorization and user-id replies;
- the zero/default channel-entry probe, advancing to the member list;
- empty member and room lists;
- the empty item-state response. The client stayed in the channel for more than
  two minutes with this response, whereas without it the observed client exited
  about three seconds after requesting item state.

The channel also has a statically recovered AutoEnter response that points at the
local game socket. Its successful live acceptance and the subsequent game handshake
have not yet been established. The game listener currently captures known inbound
frames and does not send the start-game or per-turn messages.

`single_mode_room_info_to_c` is a byte-layout serializer based on
`Tet4.exe:0x00443D90`; it is deliberately not dispatched because the role and field
semantics have not been confirmed in a live exchange.

The independent Tetris engine remains disconnected from the network protocol. The
nested `StartNewGameToC` messages, `_SingleModeInfo`, `_TetrisMemberInfo`,
board encoding and authoritative update messages are still unknown. Therefore this
is a runnable local protocol server, not yet a playable Single Mode implementation.

See [`ROADMAP.md`](ROADMAP.md) for live acceptance criteria. Serializer tests and a
successful socket handshake alone do not establish gameplay.
