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

Static analysis then explained the later `Msg_SendEnterRoom` crash. The request
converter `HgCom3.dll:0x60138E50` maps EnterChannelToS request strings 3/4 to
`k23e`/`k24e`; the response converter `HgCom3.dll:0x60139620` maps response
strings 3/8 back to those keys. `CChannelLobbyController::Net_Channel_EnterChannel`
calls `Msg_FillChannelInfo`, which stores them in `MetpInfo(4)`. The captured
request contains `k23e=b""` and `k24e=b"1"`. The server now echoes those exact
values into the corresponding response fields instead of returning empty strings.
The next live run must confirm that `Msg_SendEnterRoom` no longer faults.

The latest no-debug Wine run exits in the same way as the WineDbg run: AutoEnter is
sent, the channel connection closes, and no TCP packets reach port 15002. The
debugger is therefore not the cause. WineDbg identified the fault at
`CMetpParser::AddValue` while `Msg_SendEnterRoom` reads `SGlobalInfo::MyData()`.

Static analysis shows that `MyData()` looks up the current-member key from
`GData["k602e"]`, which `Msg_GetUserId` fills with the member id returned by
`GetUserIdToC` (a copy of `GData["k601e"]`), not with a literal.
`GetMemberListToC` does not initialize this object: `Msg_FillMemberList`
skips the own row if `MyData()` is still null. The separate
`Cmd_Channel_GetMemberInfoToC` (`0x060BC39A`) response follows
`Net_GetMemberInfo -> Msg_GetMemberInfo -> Msg_AddMember` and creates the
`CMemberData` entry from its first string (`k3e`).

The branch sends a minimal `GetMemberInfoToC` server push after
`EnterChannelToC`, with `k3e` set to the same member id that
`EnterChannelByUserIdToS` carries (`"test"` in the current test flow) and other
fields empty/zero. The original controller has a direct server-response path
`Net_GetMemberInfo -> channel/getMemInfo -> Msg_GetMemberInfo -> Msg_AddMember`;
a prior client request is not required. A live run confirmed this path:
`MyData()` returned a record, `Msg_SendEnterRoom` no longer faulted, and the
client connected to `127.0.0.1:15002` and completed the 48-byte secure
handshake. The previous JSONL label `unknown` was only a missing entry in our
trace-name table.
`Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToS` (`0x0E4772BA`) with
`member_id=test` is a different feature. Its `0x0C3B49AA` response is converted
in `Tet4.exe: FUN_00459EF0` into the `dlgMemberInfo` display dialog, not into
`CMemberDataList`. It must not be confused with `GetMemberInfoToC`.

The self-member push and the XLBP layer-3 framing are both live-verified: the
client processes the push, `MyData()` becomes non-null, `SendEnterRoom` passes,
and the game socket reaches 15002. The remaining work is the game protocol
inside port 15002, not the channel-to-game transition.

This is why `RoomInfoToC` is not currently the right fix for the missing MetpInfo
keys: its converter does not populate `MetpInfo(4).k23e/k24e`.

The 2026-11-13 PCAP contains the AutoEnter request (`0x031AC76A`) after three
empty `Cmd_LayerAlignment` slots. The client sends GameID `TET4` in request
string +0xa8, then the old server sent AutoEnterToC with host `127.0.0.1` and
port `15002` **without** alignment markers. The channel trace proves the
response bytes were written, but there were no packets to 15002 and the client
closed the channel shortly afterward.

A static registration-table check identified a concrete framing mismatch:
`Tet4.exe: FUN_0045B410` registers `0x0DF37B3A` to
`FUN_00445F60` in XLBP layer 3. The observed client request also arrived in
layer 3 (three `Cmd_LayerAlignment` markers), but the old server's reply was
layer 0. The branch now prefixes the AutoEnterToC response with three markers
using `layer_message(response, 3)`. A live trace confirmed the reply carries
`alignment_markers: 3` and that the client proceeds to the game socket. The
generic `GetMemberInfoToC` push remains layer 0; HgCom3 registers that generic
converter at layer 0.

Static analysis of `Tet4.exe:0x00445F60` shows that response fields +0xa8/+0xc4/+0xe0
populate `k22e`/`k23e`/`k24e`; +0xa8 is additionally passed as `k42e` to
`fillEnterRoomParameter`. The button's ToS builder places GameID/`k23e`/`k24e`
at the same offsets. The previous server response left these fields empty. The
current branch fixes this mismatch by echoing request strings 5..7 into the response.
A live run confirmed that the corrected response reaches the client and the game
socket connects; other room metadata remains unverified.

`single_mode_room_info_to_c` serializes the recovered top-level layout
`u32 id | string | u32 | u8` from `Tet4.exe:0x00443D90`; the role and field
semantics are not yet confirmed. It is deliberately not sent automatically.

The game listener completes the secure handshake and saves decoded game frame
bodies. It strictly parses the known `PolyMinoPutToS` and `GameReportToS`
requests. A repeat live Single Mode run also confirmed that
`Msg_SendEnterRoom` passes with non-null `MyData()`, `Msg_ConnectGameServer`
runs, and the client completes the game-socket handshake before sending:

- `Cmd_Room_EnterRoomToS` (`0x09A5347A`):
  `u32 | str | str | u32 | u32 | str x4 | u32 | str | str | u32 | u32`.
- `Cmd_Room_AlterRoomToS` (`0x0D31FDDA`):
  `u32 | u32 | str x4`.

These layouts come from the original `HgCom3.dll` serializer/deserializer pairs
(`FUN_6012ad90/FUN_6012aec0` and `FUN_6012bfe0/FUN_6012c080`). Their
individual field meanings are not yet established. The listener now parses these
two requests and logs only numeric fields and string lengths (not string contents).
It still sends no game-level response. The socket close is not a timeout: WineDbg
catches a page fault at `Tet4.exe:0x004FE2D5` inside `CF5GameWnd`
(`FUN_004fdbc0`), at `mov ecx,[eax+0x70]` with `EAX=0`. The dereferenced object is
`[0x64EBE8 + 0x8EC]`, the game scene, which is still null because no room-entry
reply has created it. The next target is `Cmd_Room_EnterRoomToC::Converter`
(`HgCom3.dll:0x6013C940`); the successful room-entry reply, initial board, and
per-turn updates remain to be recovered.

The independent Tetris engine is not connected to the wire protocol. The nested
`StartNewGameToC` messages, `_SingleModeInfo`, `_TetrisMemberInfo`, board
encoding, authoritative updates and game-end flow remain to be recovered. This is a
runnable protocol server with a verified channel path, not a playable Single Mode
implementation.

See [`ROADMAP.md`](ROADMAP.md) for the live acceptance criteria. Serializer tests and
a successful socket handshake alone do not establish gameplay.
