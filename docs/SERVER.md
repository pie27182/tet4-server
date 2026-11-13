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

The 2026-11-13 PCAP contains the AutoEnter request (`0x031AC76A`) after three
empty `Cmd_LayerAlignment` slots. The client sends GameID `TET4` in request
string +0xa8, then receives AutoEnterToC with host `127.0.0.1` and port `15002`.
The channel trace proves the response was written, but there are no packets to
15002 and the client closes the channel shortly afterward.

Static analysis of `Tet4.exe:0x00445F60` shows that response fields +0xa8/+0xc4/+0xe0
populate `k22e`/`k23e`/`k24e`; +0xa8 is additionally passed as `k42e` to
`fillEnterRoomParameter`. The button's ToS builder places GameID/`k23e`/`k24e`
at the same offsets. The previous server response left these fields empty. The
current branch fixes this mismatch by echoing request strings 5..7 into the response.
A fresh live run must verify that this corrected response reaches the game socket.
Other room metadata remains unverified.

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
