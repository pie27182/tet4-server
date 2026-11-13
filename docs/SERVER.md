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

- `--channel-mode full` (default): answer implemented channel messages, including
  the live-accepted empty member, room and item-state replies.
- `--channel-mode discovery-only`: perform only the secure channel handshake and
  deliberately send no application-level reply.
- `--capture-dir PATH`: save decoded game-socket frame bodies as binary files.
  Default: `live-runs/server/game-frames`.
- `--log-level DEBUG|INFO|WARNING|ERROR`: set log verbosity.

For a real-client run with screen recording, use `tools/live_check.py` as described
in [`REPRODUCE.md`](REPRODUCE.md).

For protocol debugging, set `TET4_TRACE_JSONL=live-runs/traces/session.jsonl`
before starting the server. This records decrypted inbound and outbound channel/game
message batches without disabling the secure transport. See [`DEBUGGING.md`](DEBUGGING.md)
for the full workflow and Wine/GDB breakpoints.

## Current Single Mode boundary

Live-client evidence confirms these channel steps:

- channel authorization and user-id replies are accepted;
- the zero/default channel-entry reply advances to the member-list request;
- empty member and room lists are accepted;
- the empty item-state response is accepted. With it the client stayed in the channel
  for more than two minutes; without it the observed client exited about three seconds
  after requesting item state.

The 2026-11-13 PCAP contains the AutoEnter request (`0x031AC76A`) inside an XLBP
message batch preceded by three empty `Cmd_LayerAlignment` markers
(`0x09D0057A`). The client protocol converter inserts these markers for null message
slots; the matching receiver consumes them before dispatching the next message.
The server now strips leading markers and reaches the existing AutoEnter handler.
That handler returns a response routing to `127.0.0.1:15002`.

The captured run predates this parser fix, so it correctly has no 15002 connection.
The next live run must verify that the new response is accepted and that the client
connects and completes the game-socket handshake. Room metadata beyond host/port
still defaults to constructor values.

`single_mode_room_info_to_c` serializes the recovered top-level layout
`u32 id | string | u32 | u8` from `Tet4.exe:0x00443D90`; the role and field
semantics are not yet confirmed. It is deliberately not sent automatically.

The game listener completes the secure handshake, parses known client-to-server
`PolyMinoPutToS` and `GameReportToS` request layouts, and can save decoded frame
bodies. It does not send the nested start-game state or per-turn updates.

The independent Tetris engine is not connected to the wire protocol. The nested
`StartNewGameToC` messages, `_SingleModeInfo`, `_TetrisMemberInfo`, board
encoding, authoritative updates and game-end flow remain to be recovered. This is a
runnable protocol server with a verified channel path, not a playable Single Mode
implementation.

See [`ROADMAP.md`](ROADMAP.md) for the live acceptance criteria. Serializer tests and
a successful socket handshake alone do not establish gameplay.
