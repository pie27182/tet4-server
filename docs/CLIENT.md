# How the Tet4 client works

This document describes the original 2012 Hangame Tetris client (`Tet4.exe`, module
set `h-tetra-client`) as far as it has been reverse engineered. Every statement is
tagged:

- **[wire]** seen in captured bytes from the real client talking to our server;
- **[static]** read from decompiled or disassembled code, not yet confirmed on the wire.

Client binaries are not part of this repository.

## 1. Startup chain

1. `h-tetra.exe` is a .NET launcher. It checks that local ports 15000 and 15001 are free,
   then starts the game with a bootstrap string. It contains no CDS, channel or game
   protocol logic. **[static]**
2. `Tet4.exe` is started as `Tet4.exe "<bootstrap>"`. The bootstrap begins with
   `metp://127.0.0.1:15000/` (the CDS directory) and carries `key=value` pairs, e.g.
   `k602e=10454` (TPack port), `k140e=01D0`, and the account name. **[static, ports wire]**
3. The client connects to TPack (login/account service), then to CDS (channel
   directory), then to the channel server it was told about by CDS.

## 2. Ports and services

| Service | Address | Protocol | Status |
|---|---|---|---|
| TPack | `127.0.0.1:10454` | framed TPack messages, plain | **[wire]** AuthSession, LoginTPack |
| CDS | `127.0.0.1:15000` | framed CDS messages, plain | **[wire]** select table `COMMON` |
| Channel | address from CDS row (`127.0.0.1:15001`) | secure socket (section 5) | **[wire]** handshake and first frame |

## 3. Framing

- Every message batch on the secure channel: `uint32be length | "XLBP" | message stream`,
  where `length` is the body size after the length field.
- The message stream may contain multiple 32-bit message IDs and their fields.
  `Cmd_LayerAlignment` (`0x09D0057A`) is an empty marker; it is not necessarily the
  application command for that batch.
- Strings: `uint32be length | bytes`. No padding, no terminator.
- Integers are big-endian. Message IDs are 32-bit values, matching `GetID()` of each
  message class, read from MSVC RTTI with `tools/tet4_rtti_extract.py`: channel
  messages from `HgCom3.dll`, Single Mode messages from `Tet4.exe`.

## 4. TPack (account)

Request body: `id | string method | u32 ctx | fields...`.
Response body: `id | string method | u32 ctx | string a | string b | i32 result [| extra]`.
The method name and `ctx` are echoed back.

| Request | ID | Response | Notes |
|---|---|---|---|
| AuthSession | `0x0CF7BD9A` | `0x0A36B7BA` | **[wire]** byte-checked in `tests/test_tpack.py` |
| LoginTPack | `0x0B60835A` | `0x05E78E3A` | **[wire]** response has three trailing fields: string, i32, int64 |
| LogoutTPack | — | `0x0BDD2B3A` | **[static]** response ID only; request not captured |

Both captured responses use `result = 0`. Unknown TPack requests get no reply here, so
the server never sends a made-up answer.

## 5. CDS (channel directory)

Request `CDS_ReqSelect`, ID `0x05740F6A`: `id | u32 tid | string table | ...`.
Captured with table `COMMON`. **[wire]**

Response `CDS_AnsSelect`, ID `0x08D1A6DA`: `id | u32 tid | i32 error | columns | rows`.

- `tid` must echo the request. The client keeps pending requests in a map keyed by `tid`;
  a different key is dropped (`no tid in wait queue`) and the client waits about 20 s.
  **[static, wire]**
- `error` is `0` on success. **[wire]**
- `columns` is `u32 count` plus strings. `rows` is `u32 count`, then per row `u32 n` plus
  `n` strings. **[wire]**

Columns used by the default row:

`GameID, SubID, ChannelID, ChannelIP, ChannelPort, ChannelName, MaxMember, MaxRoom, MemberCnt`

The default row is `TET4, 01D0A, 1, 127.0.0.1, 15001, 1, 100, 10, 0`.

**Channel host and port are taken by position, not by name.** `FUN_60903600`
(`HgModel3.dll`; the name `BuildChannelList` is ours, Ghidra leaves it unnamed) runs a switch whose counter starts at -1, so column `k`
feeds case `k-1` and column 0 is skipped. Host goes into column 3 (`ChannelIP`,
member `+0x71`) and port into column 4 (`ChannelPort`, member `+0xA4`). **[static, wire]**
Earlier experiments that put the host in column 2 made the client connect to
`0.0.58.153`, which is `inet_addr("15001")`, so this is the cause of that result.

## 6. Secure channel socket

Implemented in `HgSock3.dll` as `CHgSecureSocket` on top of `CHgtpSocket`.

### 6.1 Handshake **[wire]**

1. Client sends 48 bytes with no header: `TEA_encrypt(12 dwords of random plain)`,
   using the fixed key `K = 21F72C9D CAE2A54B DE8F1DCA 97D23A1C` (`GenerateKey`, `0x606041D0`).
2. Server replies with 48 bytes: `TEA_encrypt(server plain)` with the same key.
   The client accepts any 48-byte reply.
3. Both sides compute the 12-dword **master**:
   `master = client_plain XOR TEA_decrypt(server_wire)`.
4. Client then sends its first framed message on its own (108 bytes in run16).

Our reply's plain content is part of the master, so the server must use the same
plain value it sent when it builds the streams.

### 6.2 Stream cipher **[wire for decryption]**

Two context objects, each 0xA00 bytes, one per direction (`MakeKey`, `0x606042C0`):

| Client object | Buffer and dynamic block | MT19937 key | Use |
|---|---|---|---|
| `this+0x140` (receive) | `master[0..1]` | `master[2..5]` | encrypts data to the client on the server side |
| `this+0x13C` (send) | `master[6..7]` | `master[8..11]` | decrypts client data on the server side |

Setup of each context:

- MT19937 is seeded with `init_by_array(key)` (`FUN_60605A70`), not `init_genrand`.
- Keystream: two 32-bit MT outputs per 8-byte block, little-endian.
- Per byte `j` (0..7 inside a block), with `chain` the 8-byte buffer:
  - decrypt: `plain = cipher ^ chain[j] ^ ks[j]`
  - encrypt: `cipher = plain ^ chain[j] ^ ks[j]`
  - then `chain[j] = plain`.
- At the end of each 8-byte block: `dynamic = TEA_encrypt(dynamic, key=(chain0, chain1, chain0, chain1))`,
  `chain = dynamic`, and two new MT words form the next keystream.

Verified: run16's 108 bytes decrypt with the send-context mirror to
`00000068 | "XLBP" | 0365C03A | ...`. Frame length 104 equals the payload size.

Server-to-client direction (`encrypt`, master words 0..5): **[wire]** verified. The client
decrypts our frame, dispatches it by id, and reacts (see section 7).

## 7. Channel messages

Frame body after decryption: `u32be length | "XLBP" | serialized IMessage batch`.
The 4-byte length counts the body after itself. The batch serializer is
`PC_ConvertM2X` (`HgCom3.dll:0x601203B0`, implementation `FUN_601204A0`).
When the message collection contains null slots, it serializes one empty
`Cmd_LayerAlignment` ID (`0x09D0057A`) for each slot before the next populated
message. The corresponding `PC_ConvertX2M` receiver (`FUN_601206E0`) consumes
these markers and continues dispatching the next message. Thus the first ID after
`XLBP` is not always the application command.

| Message | ID | Direction | Status |
|---|---|---|---|
| `Cmd_AuthToS` | `0x0365C03A` | client to server | **[wire]** first message; fields not decoded |
| `Cmd_AuthToC` | `0x008500CA` | server to client | **[wire]** our empty reply (result 0) accepted |
| `Cmd_Channel_GetUserIdByMemberIdToS` | `0x0FAB330A` | client to server | **[wire]** sent after `Cmd_AuthToC`; body `string member_id` |
| `Cmd_Channel_GetUserIdToC` | `0x0A80E29A` | server to client | **[wire]** our reply accepted (k161e = 0) |
| `Cmd_Channel_EnterChannelByUserIdToS` | `0x0696068A` | client to server | **[wire]** request observed; request layout decoded from static analysis |
| `Cmd_Channel_EnterChannelToC` | `0x00C0FC8A` | server to client | **[wire, static]** accepted to member-list request; response strings 3 and 8 populate `MetpInfo(4).k23e/k24e` |
| `Cmd_Channel_GetMemberInfoToC` | `0x060BC39A` | server to client | **[static, experimental]** push path to seed local `CMemberData`; not yet live-verified |
| `Cmd_Channel_GetMemberListToS` | `0x0AE3BBDA` | client to server | **[wire]** observed after EnterChannelToC; request layout [static] |
| `Cmd_Channel_GetMemberListToC` | `0x06B816EA` | server to client | **[wire]** empty-vector reply accepted; the client then requests the room list |
| `Cmd_Channel_GetRoomListToS` | `0x0DDA299A` | client to server | **[wire]** `u32 id | string × 3`; no trailing integer |
| `Cmd_Channel_GetRoomListToC` | `0x0226968A` | server to client | **[wire]** empty-vector reply accepted; the client then requests the item state |
| `Cmd_Item_GetItemStateToS` | `0x075BAC2A` | client to server | **[wire]** `u32 id | string | u8`; sent after the room list |
| `Cmd_Item_GetItemStateToC` | `0x0C446ADA` | server to client | **[wire]** empty-vector reply accepted; the client stays in the channel |
| `Cmd_LayerAlignment` | `0x09D0057A` | client to server | **[wire, static]** empty batch marker; skip it to reach the next populated message |
| `Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToS` | `0x0E4772BA` | client to server | **[wire, static]** body `u32 id | string member_id | u32 option`; response structure not yet implemented |
| `Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToC` | `0x0C3B49AA` | server to client | **[static]** composite `TT_XDR` response; converter opens/fills `dlgMemberInfo`, distinct from `GetMemberInfoToC` |
| `Cmd_Channel_TicketReissueToS` | `0x0A101CBA` | client to server | **[wire, static]** periodic ticket refresh observed |
| `Cmd_Channel_TicketReissueToC` | `0x0C6600AA` | server to client | **[static]** response ID; payload handling not yet implemented |

`Cmd_AuthToS` fields seen in run16, in order: `test` (string), `TET4` (string), 32 bytes
of `A` (string), `TicketAuthByMemberId` (string), with zero dwords between them. Its
meaning is not established; the server does not read it.

**Server reply layouts** (wire evidence and static analysis, marked per message):

- `Cmd_AuthToC` = `u32 id | _KeyType (i64 | str | i64 | str | str) | str | str | i32`.
  The `i32` goes to key `k161e`; zero is success. Serialize `0x601356E0`, converter
  `FUN_6013F8B0`. Our reply: all strings empty, i32 0.
- `Cmd_Channel_GetUserIdToC` = `u32 id | i64 | str (k3e) | str (k2e) | i32 (k161e)`.
  Serialize `0x60135DA0`, converter `FUN_6013F9B0`, handler `Msg_GetUserId`
  (`HgModel3.dll`, `0x6090FFE0`). Our reply echoes the member id in `k3e`.
  The key meanings are taken from the handler, not confirmed by a successful session.
- `Cmd_Channel_GetUserIdByMemberIdToS` = `u32 id | str member_id`, read from the frame.

- `Cmd_Channel_EnterChannelByUserIdToS` = u32 id | u64 | str × 5 | u32 | str × 2 | u64.
  Static layout from Serialize FUN_6012cfd0 and Deserialize FUN_6012d0e0 (HgCom3.dll);
  the request is constructed by CChannelLobbyModel::Msg_EnterChannelByUserId
  (HgModel3.dll, 0x609083C0). The send-side converter `FUN_60138E50` is registered
  for `s1e::c602e` and maps its fields as `u64 k601e | str k3e | str k22e |
  str k23e | str k24e | str k149e | u32 k167e | str k442e | str k441e | u64`.
  Thus request string indices 2 and 3 (zero-based) are exactly `k23e` and `k24e`.
  In the supplied decrypted trace they are `b""` and `b"1"`, respectively.
- `Cmd_Channel_EnterChannelToC` = u32 id | str × 5 | u32 × 3 | u8 | str | u32 × 2 |
  str × 2 | u32 × 3 | str. Static layout from Serialize FUN_6012e4a0 and
  Deserialize FUN_6012e600 (HgCom3.dll). Its converter is `FUN_60139620`:
  response string 3 (index 2) becomes `k23e`, and response string 8 (index 7)
  becomes `k24e`. The final string is exposed as `k1e`. GetResultKeyState
  (HgCom3.dll, `0x60111AC0`) requires `k1e` to be present and rejects `v2e`.
  On success, `Net_Channel_EnterChannel` (HgCtr3.dll, `0x60206420`) calls
  `fillChannelInfo` and then `sendGetMemberList`.
- `Msg_FillChannelInfo` (HgModel3.dll, `0x609077E0`) copies those converter values
  into `SGlobalInfo::MetpInfo(4)` under `k23e` and `k24e`. Later,
  `Msg_SendEnterRoom` (HgModel3.dll, `0x6090B480`) reads both keys from
  `MetpInfo(4)`. The RoomInfoToC converter does not write these keys.

The wire layout for the separate `Cmd_Channel_GetMemberInfoToC`
(`0x060BC39A`) is:
`u32 id | str × 4 | u32 | str | u64 | u32 × 7 | str | u32 × 2 |
str | u64 | u32 × 2 | str × 2 | u32 | str | vector | str`.
This order is from HgCom3.dll serializer `FUN_6012dce0` and matching
deserializer `FUN_6012df00`; converter `FUN_601391a0` supplies the Metp
keys. Its first string maps to `k3e`.

The live WineDbg stop at `Msg_SendEnterRoom` was not caused by reading those
MetpInfo keys. The faulting expression is `AddValue("k3e", MyData()+0x10)`:
`SGlobalInfo::MyData()` looks up `GData["k602e"]` in the local
`CMemberDataList`. `Msg_GetUserId` stores the member id from `GetUserIdToC`
under `GData["k601e"]` and then copies that value into `GData["k602e"]`
(the GData vtable slot `+0x70` copies by source key). The lookup key is
therefore the member id itself, not the literal string `"k601e"`. A live stop
at `MyData`'s inner `FindMemberData` showed the key `"test"` and a null result
while the member list held `"k601e"`. `Msg_FillMemberList` compares the self
row against this key, but skips it when `MyData()` is still null; adding only
the self row to the ordinary member vector therefore does not seed the object.

The statically recovered server-to-client message `Cmd_Channel_GetMemberInfoToC`
(`0x060BC39A`) is registered to converter `FUN_601391A0`. Its controller path is
`Net_GetMemberInfo -> channel/getMemInfo -> Msg_GetMemberInfo -> Msg_AddMember`;
there is no prerequisite client request in this path. Its first wire string maps
to `k3e`, which `Msg_AddMember` copies into `CMemberData`'s member key. The
server sends this push after `EnterChannelToC` with `k3e` equal to the member id
from `EnterChannelByUserIdToS`, other fields zero/empty and a present empty
`k1e` result string. A live run with `k3e="test"` completed the whole path:
`Msg_GetMemberInfo` and `Msg_AddMember` ran, `MyData()` returned a non-null
record, `Msg_SendEnterRoom` passed, and the client connected to port 15002 and
completed the 48-byte secure handshake. The earlier `unknown` trace label was
only a missing entry in the decoder's message-name table.

The generic HgCom3 `Cmd_Channel_GetMemberInfoToC` is registered in
layer 0 as converter `FUN_601391A0`. Tet4.exe additionally registers the same
outer message ID `0x060BC39A` in layer 3 to a different converter
`FUN_00459E20` for a Tetris-specific class. The XLBP layer is therefore part
of message identity here: the experimental self-member record is intentionally
sent in layer 0, while layer-3 Tetris messages require three alignment markers.

The separate `Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToS`
(`0x0E4772BA`) request is not the trigger for this model path. It is itself
a layer-3 message and has a different layer-3 response,
`Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToC` (`0x0C3B49AA`),
implemented in `Tet4.exe`. Its converter `FUN_00459EF0` applies a
`TT_XDR` header and obtains the `dlgMemberInfo` dialog; the response object
contains several nested containers and strings. This is a display/profile
dialog flow, not the `Net_GetMemberInfo -> Msg_GetMemberInfo -> Msg_AddMember`
path which creates `CMemberData`.
- The previous server sent empty strings in both response positions. It now echoes
  request strings 3/4 into response strings 3/8. This is grounded by the request
  converter, response converter and the actual trace values; live confirmation that
  the null dereference is gone is still pending.
- The live trace shows that after this response the client sends
  `Cmd_LayerAlignment` and then `Cmd_Channel_GetMemberListToS`. This proves the
  response is accepted far enough to advance into the channel model, but does not
  by itself prove all room-entry metadata is correct. **[wire]**

The item-state path is decoded from HgCom3.dll:
- `Cmd_Item_GetItemStateToS` (`0x075BAC2A`): observed payload
  `075bac2a 00000004 "test" 01`, that is `u32 id | string | u8`.
- `Cmd_Item_GetItemStateToC` (`0x0C446ADA`): `u32 id | u8 | string | vector<Item>`.
  Constructor `FUN_60130A90`, Serialize `FUN_60130CF0` (vtable slot 5 of vtable
  `0x60177140`), Deserialize `FUN_60130D70`, converter `FUN_6013BCD0` with header
  `s1e/c48e`. The converter uses keys `failcode`, `k127e`, `k200e`.
  The empty-vector reply is accepted: without it the client sends
  `Cmd_Channel_ExitChannelToS` about 3 s later; with it the client stays in the
  channel for at least 2 minutes. **[wire]** Whether `Evt_ChannelView_OnGetItemState`
  (`HgCtr3.dll`, `0x60204500`) runs was not confirmed by a breakpoint.

The member-list path is decoded from HgCom3.dll:
- `Cmd_Channel_GetMemberListToS` (`0x0AE3BBDA`): `u32 id | string × 3`.
- `Cmd_Channel_GetMemberListToC` (`0x06B816EA`): `u32 id | string × 3 | vector<Member> | string`.
  The client accepts the empty-vector reply and immediately sends the room-list request. **[wire]**
  Serialize `FUN_601301D0`, Deserialize `FUN_60130260`, converter
  `FUN_6013A4E0`; the client controller's `Net_GetMemberList` fills the member list
  and then sends the room-list request.
- `Cmd_Channel_GetRoomListToS` (`0x0DDA299A`): `u32 id | string × 3`. The wire capture
  (`0dda299a 00000004 TET4 00000000 00000000`) has no trailing integer although
  Serialize `FUN_60129450` writes one byte; a single trailing byte is accepted.
- `Cmd_Channel_GetRoomListToC` (`0x0226968A`): `u32 id | string × 3 | u32 | string | vector<Room>`.
  Serialize `FUN_60130630`, Deserialize `FUN_601306D0`, converter
  `FUN_6013B1D0`.

The server returns zero-length member and room vectors. A live run accepted both
empty-vector replies far enough for the client to request item state. Member and room
record serialization is still unimplemented; the empty replies are sufficient for the
observed no-room channel path, not evidence that non-empty records are correct. **[wire]**

The channel model's request builders (`HgModel3.dll`) use `k22e` (GameID), `k23e`,
and `k24e` for the three string fields. The room-list request adds `k64e = 0`.
The member-list controller handler calls `fillMemberList` and then requests the room
list. **[static]**

The client's dispatcher reads the 4-byte magic `XLBP` (consumed), then peeks the id
(`+0x0C`, not consumed), so the id is read again by the message's own `Deserialize`.
The converters are registered with `PC_RegisterX2M` (`FUN_60121A40`) from an init routine
in `HgCom3.dll`, which maps `0x0A80E29A` to `FUN_6013F9B0` and `0x008500CA` to `FUN_6013F8B0`.

Live run progression after the EnterChannel probe:

`EnterChannelToC -> LayerAlignment -> GetMemberListToS ->
GetMemberListToC (empty) -> GetRoomListToS -> GetRoomListToC (empty) ->
GetItemStateToS -> GetItemStateToC (empty)`.

The client requests the room list after the empty member reply, then requests item
state after the empty room reply. With the empty item-state reply the client stays
in the channel for more than two minutes; without it the observed client sends
`Cmd_Channel_ExitChannelToS` about three seconds after the item-state request. This
confirms acceptance of the empty response shapes and a stable channel interval, but
does not yet prove that the Single Mode button works. **[wire]**

## 8. Single Mode (AutoEnter request captured; response path under validation)

Message IDs, from RTTI in `Tet4.exe` **[static]**:

| Class | ID |
|---|---|
| `Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS` | `0x031AC76A` |
| `Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToC` | `0x0DF37B3A` |
| `Cmd_ChannelOrderTypeSingleModeRoomInfoTetrisToC` | `0x04B61A2A` |
| `Cmd_Channel_OrderTypeSingleModeResultMemberTetrisToC` | `0x0928E8BA` |
| `Cmd_Room_OrderTypeSingleModeGameReportTetrisToS` | `0x05BCDF3A` |
| `Cmd_Room_OrderTypeSingleModeGameReportTetrisToC` | `0x0EE1D56A` |
| `Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS` | `0x0CC4004A` |
| `_SingleModeInfo` | `0x0071FA1A` |

The extractor needs these names passed explicitly for `Tet4.exe` (its default list
covers exactly these classes): `tools/tet4_rtti_extract.py Tet4.exe --json`.

### Single Mode auto-enter request [static]

The Single Mode button path is `FUN_0049D0A0` in `Tet4.exe`. It constructs
`Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS` and sends it on the channel
connection through `FUN_00456160(..., "channel", 3)`.

Serialize `FUN_004A18F0` gives this request body:

`u32 id | str(+0x0c) | u32(+0x28) | str(+0x2c) | str(+0x48) | str(+0x64) |
u32(+0x80) | u32(+0x84) | str(+0x88) | u32(+0xa4) | str(+0xa8) | str(+0xc4) | str(+0xe0)`.

The button handler sets these values before serialization:
- `str(+0x0c)` = bootstrap value `k602e`;
- `str(+0x64)` = `N000S`;
- `str(+0xa8)` = GameID (`TET4`);
- `str(+0xc4)` and `str(+0xe0)` = `k23e` and `k24e` from MetpInfo(4);
- all other strings and uint32 fields remain constructor defaults (empty / zero).

The 2026-11-13 PCAP contains this request on the channel socket. It is not the first
ID in the XLBP batch: three `Cmd_LayerAlignment` markers precede
`0x031AC76A`. The old server reader selected only the first ID and therefore
silently skipped AutoEnter. The server now strips leading alignment markers and
dispatches the actual request. Its response serializer for
`Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToC` (`0x0DF37B3A`) already exists. Its
Serialize/Deserialize methods are `FUN_00442E90` / `FUN_00443080`; converter:
`FUN_00445F60`. The top-level field order is:

`u32 id | str | u32 | str | str | str | u32 | u32 | str | u32 |
str | str | str | str | u32 | str | str | u32 | str`.

The converter applies the `TT_XDR` header and maps the fields into MetpInfo(5).
In `Tet4.exe: FUN_0045B410` it is registered with
`PC_RegisterX2M(0x0DF37B3A, 3, FUN_00445F60, ...)`: **the response belongs
to XLBP layer 3** and must be preceded by three `Cmd_LayerAlignment` markers.
The observed request has those three markers. The earlier local server sent the
reply without them (layer 0), so the client's layer-3 AutoEnter converter could
not receive it. `tet4server.channel.layer_message(response, 3)` now preserves
the layer on the response. This is a statically established routing fix; live
acceptance is still pending.

It treats status string at offset `+0xfc` equal to `v2e` as failure; any other value
takes the success path. In particular:
- response string `+0xa8` becomes `k22e` and is also passed as `k42e` to
  `fillEnterRoomParameter`;
- response strings `+0xc4` and `+0xe0` become `k23e` and `k24e`;
- the button's ToS builder writes GameID, `k23e` and `k24e` to those same offsets.

The previous local response incorrectly left all three response strings empty even
though the request carried GameID `TET4`. The server now echoes the ToS strings
5..7 into these three ToC fields. This fixes the request/response metadata mismatch
visible in the capture, but acceptance still needs a fresh live run.
After its field conversion the client calls `fillEnterRoomParameter`, then
`game.connGameSvr`.

The game endpoint is explicit in the response:
- string at `+0x138` becomes `k52e`, the game host;
- uint32 at `+0x154` becomes `k53e`, the game port.
  `CGameLobbyModel::Msg_ConnectGameServer` (`HgModel3.dll:0x60914950`) calls
  `CNetworkModel::Connect("game", k52e, k53e, ...)`.

For the local probe the server sets host `127.0.0.1`, port `15002`, leaves the status
field empty (not `v2e`), and leaves remaining room metadata at constructor defaults.
`tet4server/game.py` listens on that port, performs the secure handshake and logs
the first client frames. It deliberately sends no game-level acknowledgements yet.
The 2026-11-13 capture ended without any connection to port 15002 because the old
server did not dispatch the nested request. After the LayerAlignment fix, the next
live run must verify that the client accepts this response, connects to 15002, and
completes the game-socket handshake. This remains a structurally valid route, not a
verified playable room.

`Cmd_ChannelOrderTypeSingleModeRoomInfoTetrisToC` (`0x04B61A2A`) has a smaller
layout: `u32 id | string | u32 | u8` (`Serialize FUN_00443D90`). Its role in the
transition still needs to be confirmed from the live message sequence.

A byte-layout serializer for this shape exists as `channel.single_mode_room_info_to_c`,
but it is not sent automatically. The field semantics and dispatch point have not been
verified; sending guessed room metadata would not be justified by the current evidence.

### Start-game message container [static; dispatch relationship pending]

The client also has an XDR class `Cmd_Room_OrderTypeStartNewGameTetrisToC`
(`0x06FE5D0A`):
- constructor: `FUN_0044AD80`;
- GetSize: `FUN_0044ACA0`;
- serializer/deserializer pair: `FUN_0044ACF0` and `FUN_0044B1D0` (the latter validates
  the nested message vector plus scalar fields);
- body shape: `u32 id | vector<XDR::IMessage> | string | u32`.

The client controller has `CGameLobbyController::Net_StartNewGame`
(`HgCtr3.dll:0x60207880`), which dispatches `onStartNewGame` to the game view.
This is a strong candidate for the start event carried by the class above, but the
message-to-handler registration key is not yet confirmed from the stripped global
string reference. The vector's nested message types and required initial board
configuration are not yet decoded; do not send an empty vector as if it started a game.

### Single Mode game client-to-server messages [static]

The client sends game input/report messages over the separate `game` connection:
- `Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS` (`0x0CC4004A`):
  `u32 id | u32 × 4`. Constructor `FUN_00461A50` initializes four uint32 values
  and forwards the supplied values unchanged to `FUN_00456160(...,"game",3)`.
  Its GetSize method `FUN_004616F0` sums four 4-byte values.
- `Cmd_Room_OrderTypeSingleModeGameReportTetrisToS` (`0x05BCDF3A`):
  `u32 id | string × 4 | u32 × 2 | u8 | u32 × 3`.
  Constructor `FUN_00461470` and GetSize `FUN_00461AC0` establish four strings
  at offsets `+0x0c,+0x28,+0x44,+0x60`, two uint32s at `+0x7c,+0x80`,
  a one-byte bool at `+0x84` (size helper `FUN_0042B4A0` returns 1), then
  uint32s at `+0x88,+0x8c,+0x90`. Builder `FUN_00461770` fills the strings
  from `FUN_004e0ab0()`, `k23e`, `k24e`, `k42e`, and numeric fields from
  the current game state.
  
The game listener parses these two message layouts and records their original
wire bodies as local binary fixtures. It does not yet compute piece movement,
collision, line clears, score, or send authoritative updates. The four PolyMinoPut
integers and five GameReport counters are now available in server logs for diagnosis;
the GameReport strings are not printed because they may contain session data.

