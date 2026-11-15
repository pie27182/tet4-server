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
individual field meanings are not yet established. The listener parses both
requests and logs only numeric fields and string lengths (not string contents).

A recovered `Cmd_Room_EnterRoomToC` serializer (`0x0974DCEA`) replies to
`EnterRoomToS` with `k1e | failcode | k2e`; the converter at
`HgCom3.dll:0x6013C940` writes exactly those fields.

The local server now replies to the Single Mode auto-create path with:

- `Cmd_Channel_CreateRoomToC` (`0x0A80143A`): `failcode=0`, room id `1`,
  room option `N000S`, GameID `TET4`, and the local game endpoint.
- `Cmd_Channel_RoomInfoToC` (`0x0A680DDA`): one `_RoomInfo` with room id `1`,
  host `test`, room option `N000S`. The wire form is
  `u32 id | u32 dummy | _RoomInfo fields`; the dummy absorbs the redundant id
  read performed by `_RoomInfo::vfunction7` after `PC_ConvertX2M` has already
  consumed the real message id.
- `Cmd_Room_StartNewGameToC` (`0x0F809B5A`) with the Korean
  `_MemberInfoStartNewGame` vector (`str member | 00 00 00`), which the live
  client dispatches through `FUN_60147870` and
  `CF5GameWnd::Evt_OnStartNewGame`.

Live winedbg checks on the current build:

- `Msg_FillRoomList` (`HgModel3.dll:0x60909BE0`) runs for the returned room.
- `Cmd_Channel_RoomInfoToC` reaches `Cmd_Channel_RoomInfoToC::Converter`
  (`0x6013B850`) and `CChannelLobbyModel::SetRoomInfo`
  (`HgModel3.dll:0x6090A650`).
- `Cmd_Room_EnterRoomToS` is parsed and `EnterRoomToC` is delivered.
- `Cmd_Room_OrderTypeStartNewGameTetrisToC` (`0x06FE5D0A`) with the
  `_AliasInfo` vector is not dispatched on this service path. Its converter
  `FUN_00459BD0` is registered under `0x0F809B5A`, where the HgCom3 SvcKor
  converter wins.

The remaining fault is not a missing reply field. After the Single Mode button
creates `CTetSingleScene`, `CTetSingleScene::Update` (`FUN_00462600`) calls
`FUN_00461E70` and `FUN_00461FA0` against empty step vectors and faults at
`Tet4.exe:0x461E9D` (and at `0x462009` when the first call is skipped).
`CTetSingleMainBody::Start` (`FUN_00460DD0`, vtable slot 12) is never called in
the live flow, so the vectors that those update functions index are never
initialized. The next recovery target is the client transition that calls
`CTetSingleMainBody::Start`, together with the exact `_RoomInfo` fields the room
list/view expects.

The independent Tetris engine is not connected to the wire protocol. The
room-to-game transition, `_SingleModeInfo`, `_TetrisMemberInfo`, board encoding,
authoritative updates and game-end flow remain to be recovered. This is a
runnable protocol server with a verified channel path, not a playable Single Mode
implementation.

See [`ROADMAP.md`](ROADMAP.md) for the live acceptance criteria. Serializer tests and
a successful socket handshake alone do not establish gameplay.


## 2026-11-15 — live-isolated AddMemberToC wire

The AddMemberToC experiment has a corrected, live-accepted wire candidate. Its
layer-3 application body is:

    0x0AB84D0A | XDR string(member_id) | 87-byte opaque profile suffix

The previous candidate incorrectly inserted the command tag 0x005216CA and
the _TetrisMemberInfo type ID 0x0FFA613A before the member string. WineDbg
showed the client then treating one of those words as the string length. The
corrected fixture omits both words. The nested suffix is intentionally kept
opaque: its internal fields have not been recovered, and the only live-tested
member ID is "test".

With the corrected message on the game socket (15002), WineDbg confirmed:

- the converter at Tet4.exe:0x00456BC0 runs;
- the first member string is decoded as "test";
- FUN_004EC400 inserts the local member;
- FUN_00461C50 is called again and refills the main-body vector.

The isolation runs distinguish three cases:

- Old tagged/type-ID candidate, AddMember only: the second stop at
  0x004FBBB4 has EAX=0 and faults.
- SvcKor only: both observed 0x004FBBB4 stops have non-null EAX; execution
  proceeds to the separate scene-update fault at 0x00461E9D.
- Corrected AddMember only (TET4_SKIP_SVCKOR=1): insertion and vector refill
  are reached without the later null 0x004FBBB4 stop in that run.
- Corrected AddMember followed by SvcKor: insertion/refill occur, then a
  subsequent 0x004FBBB4 stop has EAX=0. The failing event is therefore an
  interaction in the combined sequence; the exact event source is unresolved.
- Sending the corrected Tetris-specific message on the channel connection
  also inserts the member, but then crashes in msvcr90+0x3B9F0 through
  msvcp90/HgCom3. Keep this Tetris-specific layer-3 message on game port 15002.

The server keeps AddMemberToC opt-in with
TET4_EXPERIMENTAL_ADD_MEMBER_BOOTSTRAP=1. Set TET4_SKIP_SVCKOR=1 as well to
reproduce the corrected AddMember-only case. Without these variables, the
server's existing SvcKor-only behavior is unchanged.

This does not yet start CTetSingleMainBody::Start (0x00460DD0), and it does
not establish a playable game. The next task is to isolate the null event in
the corrected AddMember + SvcKor sequence, then return to the independent
0x00461E9D scene-initialization blocker.


For the ordering probe, set TET4_SVCKOR_BEFORE_ADD_MEMBER=1 together with
TET4_EXPERIMENTAL_ADD_MEMBER_BOOTSTRAP=1 to send SvcKor before AddMemberToC.
The default order remains AddMemberToC then SvcKor. TET4_SKIP_SVCKOR=1 still
suppresses SvcKor entirely. These switches are for isolating the event-parser
fault and do not change the default server behavior.

### Early AddMember ordering (diagnostic)

`TET4_EARLY_ADD_MEMBER_ID=<local-member-id>` sends the experimental
AddMemberToC after EnterRoomToS and before EnterRoomToC. The ID is compared
with EnterRoomToS `final_strings[0]`; on mismatch nothing is sent and the
normal post-EnterRoom AddMemberToC is suppressed. The default behavior is
unchanged when the variable is absent.

`TET4_EARLY_ADD_MEMBER_BASE=1` additionally selects the unverified two-layer
candidate: a layer-0 `Cmd_Room_AddMemberToC` base followed by two alignment
markers and the layer-3 87-byte extension. Live GDB shows that the layer-0
room converter and the `s4e`/`c5e` dispatcher run, but the layer-3 converter
is not reached in the same frame. This candidate does not start the game and
must not be described as a working room/game bootstrap.

The complete live scenario is
`tools/debug/game-event-dispatch.gdb`. It captures the dispatcher registration,
the AddMember insert/refill, the registered `CFunctor::Call` at 0x602091AF
(not the fallback), the null service read and `CTetSingleMainBody::Start`.
