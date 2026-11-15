# The Tet4 protocol

What the client speaks, as far as the server needs it. Every fact carries its
evidence:

- **wire**: seen in bytes captured from the real client;
- **live**: observed in the running client against this server (it accepted a
  reply and sent its next request, or a debugger breakpoint was hit);
- **code**: read from the decompiled client, not yet confirmed in a live run.

Addresses are image addresses in the unmodified 1.3.4 client (`Tet4.exe` at
0x00400000, every DLL at its preferred base). Message names are the client's
class names from MSVC RTTI; the server uses them too (`tet4server/messages.py`).

## 1. Services

`Tet4.exe` is started as `Tet4.exe "<bootstrap>"`. The bootstrap is
`metp://127.0.0.1:15000//go/go;` followed by `key:length=value` fields joined by
`&`; `k3e` is the account, `k8e` the ticket and `k602e` the TPack port (see
`tools/bootstrap-sample.txt`). The distribution's .NET launcher `h-tetra.exe`
only builds this string and starts the game; it has no protocol code (its
online mode wraps the same streams in a TLS tunnel). Start `Tet4.exe` directly.
**code**

| Service | Port | Transport |
|---|---|---|
| TPack | 10454, bootstrap `k602e` | plain frames |
| CDS | 15000, bootstrap URL | plain frames |
| Channel | announced by CDS (15001) | secure socket |
| Game | announced by AutoEnter and CreateRoom (15002) | secure socket |

The unmodified client connects to three hard-coded TPack hosts
(`tpacksvr.tp.casual.hangame.com` and its `dev-` and `alpha-` variants, at file
offsets 0x1F9520, 0x1F9544 and 0x1F956C) and never reaches a local TPack server.
`tools/client.py patch` points them at 127.0.0.1 in a copy. **live**

Integers are big-endian. A string is a u32 byte count and the bytes, with no
terminator or padding; a vector is a u32 count and its elements. `str x3` below
means three strings.

## 2. TPack (TPackClientConnector.dll)

Frames are `u32 length | body`. A request is `u32 id | str method | u32 ctx | ...`;
the reply is `u32 id | str method | u32 ctx | str | str | i32 result`, echoing the
method and ctx. **wire**

| Method | Request | Reply |
|---|---|---|
| `TPACK::Connector::Impl::Connector::AuthSession` | 0x0CF7BD9A | 0x0A36B7BA |
| `TPACK::Connector::Impl::Connector::LoginTPack` | 0x0B60835A | 0x05E78E3A, then `str \| i32 \| i64` |

The server answers both with result 0 and empty strings, the replies the client
accepted (`tests/test_tpack.py`). **live** Other requests get no reply.

## 3. CDS (CDSClientConnector.dll)

Frames as for TPack.

- `CDS_ReqSelect` 0x05740F6A: `u32 id | u32 tid | str table | ...`, table `COMMON`. **wire**
- `CDS_AnsSelect` 0x08D1A6DA: `u32 id | u32 tid | i32 error | vector<str> columns |
  vector<vector<str>> rows`. **wire**

The tid must be the request's: the client looks the pending request up by tid
(0x100153A0) and otherwise logs `no tid in wait queue` and gives up after 20 s.
**code** The channel address is read by column position, not by name (HgModel3
0x60903600): column 3 is the host, column 4 the port. **live**: with the host in
column 2 the client dialed 0.0.58.153, which is `inet_addr("15001")`.

The server sends one row. Columns `GameID SubID ChannelID ChannelIP ChannelPort
ChannelName MaxMember MaxRoom MemberCnt`, values `TET4 01D0A 1 <host> <port> 1
100 10 0`. **live**

## 4. Secure socket (HgSock3.dll, CHgSecureSocket)

Before any frame the client sends 48 bytes and the server answers with 48. Each
side's plaintext is 24 random u16 (GenerateKey 0x606041D0: `rand() % 0xFFFF`),
sent as twelve little-endian dwords TEA-encrypted under the fixed key
`21F72C9D CAE2A54B DE8F1DCA 97D23A1C`. The client accepts any share. Both sides
compute `master[i] = client[i] ^ server[i]` over the twelve plaintext dwords
(MakeKey 0x606042C0). **wire**

Each direction has its own cipher state:

| Direction | Chain and block | MT19937 `init_by_array` key | Client object |
|---|---|---|---|
| client to server | `master[6..7]` | `master[8..11]` | send context `this+0x13C` |
| server to client | `master[0..1]` | `master[2..5]` | receive context `this+0x140` |

For byte j of each 8-byte block, `out = in ^ chain[j] ^ keystream[j]` and then
`chain[j]` = the plaintext byte. After the eighth byte the block is TEA-encrypted
under `(chain0, chain1, chain0, chain1)` and copied into the chain, and two
generator outputs, little-endian, form the next keystream (filters 0x606057A0 and
0x60605900, seeding 0x60605A70, generator 0x60605B20). **wire**: the first frame
of run16 decrypts to `Cmd_AuthToS` (`tests/test_crypto.py`); **live**: the client
decrypts the server's frames.

The key is fixed, so anyone holding both shares can decrypt a session.

## 5. XLBP frames, batches and layers (HgCom3.dll)

Every frame on a secure socket is `u32 length | "XLBP" | batch`, encrypted as a
whole; the length counts the magic and the batch. **wire**

A batch holds one message type in up to four layer slots. Each type has one
converter per layer: HgCom3 registers its generic messages at layer 0, and
Tet4.exe registers the Tetris messages, and Tetris extensions of generic ones,
at layer 3 (Tet4.exe 0x0045B410). **code**

- Sending (PC_ConvertM2X 0x601204A0): each populated slot follows one 4-byte
  `Cmd_LayerAlignment` (0x09D0057A) marker per empty slot before it; trailing empty
  slots are left out. The Metp header picks the layers: `TT_XDR_PLATFORM` 0,
  `TT_XDR_SERVICE` 1, `TT_XDR` 3. **code**; the Single Mode AutoEnter request
  arrives after three markers. **wire**
- Receiving (PC_ConvertX2M 0x601206E0): the client skips the markers, looks the
  first message ID up once, and runs that type's converter for each remaining
  slot; each converter reads its own ID and fields. **code**

So the pair (ID, layer) identifies a message (0x060BC39A at layer 0 is HgCom3's
GetMemberInfoToC, at layer 3 a Tet4.exe extension with another converter), one
batch cannot combine message types, and a slot whose converter is not registered
consumes nothing. The server reads the first populated slot of each batch and
sends one populated slot per batch.

## 6. Channel messages

The client's sequence on the channel socket and the server's replies, all at
layer 0 except AutoEnter: **live**

```
AuthToS                           -> AuthToC
GetUserIdByMemberIdToS            -> GetUserIdToC
EnterChannelByUserIdToS           -> EnterChannelToC, GetMemberInfoToC
GetMemberListToS                  -> GetMemberListToC
GetRoomListToS                    -> GetRoomListToC
GetItemStateToS                   -> GetItemStateToC
  (Single Mode button, Tet4.exe 0x0049D0A0)
AutoEnterSingleModeRoomTetrisToS  -> AutoEnterSingleModeRoomTetrisToC   layer 3
CreateRoomToS                     -> CreateRoomToC, RoomInfoToC
```

The client then connects to the game socket (section 7).

**Cmd_AuthToS** 0x0365C03A: the account, `TET4`, the bootstrap's 32-character
`k300e` and `TicketAuthByMemberId`, with u32 fields between them. **wire** The
server does not check it.
**Cmd_AuthToC** 0x008500CA: `u32 id | i64 | str | i64 | str | str | str | str |
i32 k161e`, the five fields after the ID being a `_KeyType` (Serialize 0x601356E0).
k161e 0 is success (converter 0x6013F8B0). Sent zero and empty. **live**

**Cmd_Channel_GetUserIdByMemberIdToS** 0x0FAB330A: `u32 id | str member`. **wire**
**Cmd_Channel_GetUserIdToC** 0x0A80E29A: `u32 id | i64 | str k3e | str k2e |
i32 k161e` (Serialize 0x60135DA0, converter 0x6013F9B0). k3e is the member id;
Msg_GetUserId (HgModel3 0x6090FFE0) stores it as GData `k601e` and copies it to
`k602e`. **live**

**Cmd_Channel_EnterChannelByUserIdToS** 0x0696068A: `u32 id | u64 k601e | str k3e |
str k22e | str k23e | str k24e | str k149e | u32 k167e | str k442e | str k441e | u64`
(converter 0x60138E50), captured with k22e `TET4`, k23e empty and k24e `1`. **wire**
**Cmd_Channel_EnterChannelToC** 0x00C0FC8A: `u32 id | str x5 | u32 x3 | u8 | str |
u32 x2 | str x2 | u32 x3 | str k1e` (Serialize 0x6012E4A0). Converter 0x60139620
maps string 3 to k23e and string 8 to k24e; k1e must be present and not `v2e`
(0x60111AC0). Msg_FillChannelInfo (0x609077E0) stores k23e and k24e in MetpInfo(4),
where CChannelLobbyModel::Msg_SendEnterRoom (0x6090B480) reads them. The server
echoes the request's k23e and k24e. **live**

**Cmd_Channel_GetMemberInfoToC** 0x060BC39A, sent after EnterChannelToC:
`u32 id | str k3e | str x3 | u32 | str | u64 | u32 x7 | str | u32 x2 | str | u64 |
u32 x2 | str x2 | u32 | str | vector | str k1e` (Serialize 0x6012DCE0, converter
0x601391A0). Net_GetMemberInfo, Msg_GetMemberInfo and Msg_AddMember create the
client's own CMemberData from k3e. SGlobalInfo::MyData() finds that record by
GData `k602e`; without it MyData() is null and Msg_SendEnterRoom faults. The member
list cannot stand in: Msg_FillMemberList skips the own row while MyData() is null.
Sent with k3e = the member id, everything else empty. **live**

**Cmd_Channel_GetMemberListToS** 0x0AE3BBDA: `u32 id | str k22e | str k23e |
str k24e`. **wire**
**Cmd_Channel_GetMemberListToC** 0x06B816EA: `u32 id | str x3 | vector<member> |
str` (Serialize 0x601301D0). Sent empty. **live**

**Cmd_Channel_GetRoomListToS** 0x0DDA299A: `u32 id | str x3`, captured as `TET4`
and two empty strings; its Serialize (0x60129450) has a trailing byte the capture
lacks. **wire**
**Cmd_Channel_GetRoomListToC** 0x0226968A: `u32 id | str x3 | u32 | str |
vector<_RoomInfo>` (Serialize 0x60130630). The server lists the rooms that exist;
before a CreateRoomToS there are none. **live** for the empty list, **code** for
entries.

**Cmd_Item_GetItemStateToS** 0x075BAC2A: `u32 id | str member | u8`. **wire**
**Cmd_Item_GetItemStateToC** 0x0C446ADA: `u32 id | u8 | str | vector<item>`
(Serialize 0x60130CF0). Sent empty. Without it the client sends ExitChannelToS
about three seconds later. **live**

**Room fields**, shared by AutoEnterToS and CreateRoomToS (Serialize 0x004A18F0):
`str member | u32 k42e | str k67e | str k45e | str k46e | u32 k127e | u32 k66e |
str k200e | u32 | str k22e | str k23e | str k24e`. k46e is the room option, a mode
letter and flags, and k66e the room number. **code**, keys from the AutoEnter
converter.

**Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS** 0x031AC76A, layer 3: the
room fields, with k46e `N000S`, k22e `TET4` and k23e/k24e from MetpInfo(4); the
rest stays empty or zero. **wire**
**Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToC** 0x0DF37B3A, registered at
layer 3 only: `u32 id | str | u32 k42e | str k67e | str k45e | str k46e | u32 k127e |
u32 k66e | str k200e | u32 | str k22e | str k23e | str k24e | str status | u32 | str |
str k52e | u32 k53e | str k82e` (Deserialize 0x00443080, converter 0x00445F60). The
status `v2e` is failure; k52e and k53e are the game server, which
Msg_ConnectGameServer (0x60914950) connects to. DoExActive (0x004FDBC0) switches on
k46e's first letter, and with k46e empty the room scene stays null (fault at
0x004FE2D5). The server echoes the request's room fields, so the room number is 0.
**live**: the client then sends CreateRoomToS.

**Cmd_Channel_CreateRoomToS** 0x0CA9895A: the room fields, captured with the
member, `N000S`, `TET4`, an empty k23e and k24e `1`. **wire**
**Cmd_Channel_CreateRoomToC** 0x0A80143A (Tet4.exe converter 0x00441E90): `u32 id |
str | u32 failcode | str k2e | str k3e | u32 k42e | str k67e | str k45e | str k46e |
u32 k127e | u32 k66e | str k200e | u32 k69e | str k22e | str k23e | str k24e |
str k52e | str | u32 k53e | str k82e` (Deserialize 0x0043F580). Sent with failcode
0, the request's room fields, a new room number and the game server. **live**: the
client connects to the game socket. (Earlier versions sent k200e `G`, with no
recorded reason; it now echoes the client's value.)
**Cmd_Channel_RoomInfoToC** 0x0A680DDA, sent next: `u32 id | _RoomInfo`. Its
Deserialize (0x601309F0) sets the embedded _RoomInfo's nested flag, so no second ID
follows. Converter 0x6013B850 (header `s1e/c13e`) leads to SetRoomInfo
(0x6090A650), which adds the room to the client's room list. **code**

**_RoomInfo**, always nested (Serialize 0x60126AC0, Deserialize 0x60126C10, keys
from 0x6013B850): `u32 k42e | str k45e | u32 k127e | u32 k66e | u8 k68e | str k46e |
str k200e | u32 k47e | str k116e | str k50e | u32 k143e | vector k48e | vector k49e |
vector`. **code**

Received without a reply: Cmd_Channel_TicketReissueToS 0x0A101CBA, sent
periodically (its reply 0x0C6600AA is not recovered); layer-3
Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToS 0x0E4772BA, `u32 id | str member |
u32`, whose reply 0x0C3B49AA fills the profile dialog (Tet4.exe 0x00459EF0); and
Cmd_Shop_GetInventoryInfoToS 0x04762CEA.

## 7. Game messages

```
EnterRoomToS      -> EnterRoomToC
AlterRoomToS         (no reply)
StartNewGameToS   -> StartNewGameToC
```

**Cmd_Room_EnterRoomToS** 0x09A5347A: `u32 id | u32 | str | str | u32 | u32 |
str k46e | str | str | str | u32 | str k3e | str | u32 | u32` (Serialize 0x6012AD90,
Deserialize 0x6012AEC0), sent by CGameLobbyModel::Msg_SendEnterRoom (0x60914FD0).
k46e (the room option) and k3e (the member id) are placed by their captured
values. **wire**
**Cmd_Room_EnterRoomToC** 0x0974DCEA: `u32 id | str k1e | u32 failcode | str k2e`
(converter 0x6013C940). Sent with failcode 0. **live**: the client then sends
AlterRoomToS.
**Cmd_Room_AlterRoomToS** 0x0D31FDDA: `u32 id | u32 | str x4` (Serialize 0x6012BFE0,
Deserialize 0x6012C080). **wire**

**Cmd_Room_StartNewGameToS** 0x072585BA: `u32 id | str k59e`. CTetSingleMainBody::
Start (0x00460DD0) calls CF5GameWnd::SendStartNewGame (HGF5V 0x60A09D70), and
Msg_SendRoomStartNewGame (HgModel3 0x609173F0) sends this on the game socket with
k59e `v6e`. **code**
**Cmd_Room_StartNewGameToC** 0x0F809B5A in HgCom3's layer-0 form (converter
0x60147870): `u32 id | vector<str member | u8 | u8 | u8>`, keys k25e (the count),
k3e<i>, k118e<i> and k119e<i>. It leads through Net_StartNewGame (HgCtr3 0x60207880)
to CF5GameWnd::Evt_OnStartNewGame (HGF5V 0x60A090D0). The server answers
StartNewGameToS with one entry, the member who entered the room. **live** for the
layout (a copy pushed after EnterRoomToC reached both functions), **code** for
answering the request.

Received without a reply, both layer 3: Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS
0x0CC4004A, `u32 id | u32 x4`, and Cmd_Room_OrderTypeSingleModeGameReportTetrisToS
0x05BCDF3A, `u32 id | str x4 | u32 x2 | u8 | u32 x3`. Their counterparts
Cmd_Room_OrderTypeSingleModeGameReportTetrisToC 0x0EE1D56A (converter 0x00450940) and
Cmd_Channel_OrderTypeSingleModeResultMemberTetrisToC 0x0928E8BA are not recovered.
**code**

## 8. Where Single Mode stops

The client runs the game loop itself: its Single Mode scene has the mode
selection, HOLD and NEXT, and the score, and it reports pieces (PolyMinoPut) and
results (GameReport) to the server. Nothing recovered so far shows the server
computing the game.

After EnterRoomToC the client crashes in CTetSingleScene::Update (0x00462600):
FUN_00461E70 faults at 0x00461E9D (`mov edx,[ebp+0x2c]` with EBP 0), and
FUN_00461FA0 at 0x00462009 when the first call is skipped. **live** Both index the
main body's vectors at +0x268 and +0x29C, which FUN_00461C50 fills from the game
model's player map (FUN_004EB0C0). The map is empty: no player was registered.
**code**

Players are registered by the layer-3 Tet4.exe converter of
**Cmd_Channel_AddMemberToC** 0x0AB84D0A: FUN_00456BC0, FUN_00432280 and
FUN_004EC400, which inserts the local member and calls FUN_00461C50. The path reads
the keys k3e, k23e, k24e, k7e, k8e, k11e, k10e, k12e, k26e to k35e, k37e, k38e,
k102e, k151e, k201e and k153e<i>. **code** Experiments whose code was not kept:
**live**

- A layer-3-only batch `0x0AB84D0A | str member | 87 opaque bytes` on the game
  socket reaches FUN_00456BC0, inserts the member and refills the vectors. The next
  dispatch then faults at 0x004FBBB4: the layer-3 converter applies no Metp header,
  so the parser's service is null. Setting the header to `s1e/c5e` in the debugger
  got past the fault to CGameLobbyModel::Msg_AddRoomMember (0x60915600), which
  failed on a missing `k57e`.
- A batch of a layer-0 Cmd_Room_AddMemberToC (0x0619233A) and the layer-3 extension
  reached only the layer-0 converter. That follows from section 5: the receiver
  looked up 0x0619233A, which has no layer-3 converter.

The next candidate is therefore one batch with ID 0x0AB84D0A in both slots: a
layer-0 Cmd_Channel_AddMemberToC (HgCom3 converter 0x60139BC0, header `s1e/c5e`)
for the header and member keys, two markers, and the layer-3 extension for the
game model. Neither part's fields are recovered. **code**

StartNewGame has the same shape: Tet4.exe also registers 0x0F809B5A at layer 3
(FUN_00459BD0, `vector<_AliasInfo: str member | str option | u32>`). An earlier
test that sent this vector at layer 0 reached HgCom3's converter instead. **code**

Open:

1. The fields of both AddMemberToC layers, and when to send it (after EnterRoomToC
   is the natural point).
2. Why the client closed the game socket shortly after EnterRoomToC and showed
   `제한 시간에 걸렸습니다` ("time limit exceeded"). Those runs also pushed an
   unsolicited StartNewGameToC, which the server no longer does.
3. GameReportToC and the result message, once a game runs.

`tools/client.py patch --debug-single-scene` removes both update calls. The Single
Mode screen then renders with its start button (게임시작, or Enter). **live**
Starting should send StartNewGameToS, which the server now answers; not yet tried.

## 9. Debugging

- `python3 -m tet4server --trace traces/session.jsonl` appends every decrypted
  batch as one JSON line: time, service, peer, direction, layer, message name and
  the batch in hex. Traces contain the session ticket.
- winedbg runs the client under a debugger. Non-interactively:
  `winedbg --file cmds.txt Tet4.exe "<bootstrap>"` from the client folder, with
  lines such as `set $BreakOnFirstChance = 0`, `break *0x60147870`, `c` and `bt`.
  For gdb: `winedbg --gdb --no-start --port 38002 Tet4.exe "<bootstrap>"`, then
  `target remote localhost:38002` with `set architecture i386`. Check that a DLL
  is mapped at its preferred base before breaking on its addresses.
- Wine: run from the client folder with `LANG=ko_KR.UTF-8`. The client's own VC90
  DLLs must load; forcing builtin msvcr90, msvcp90 or mfc90 stops it from starting.
  The tested prefix had vcrun2008 and Korean fonts.

## 10. Corrected conclusions

Notes in this repository's history concluded otherwise on these points:

- k66e is the u32 room number, not a room-type string; the mode is in k46e.
- RoomInfoToC has no second ID before its _RoomInfo.
- 0x602091AF is the registered CFunctor::Call, returning to 0x602091B5; the
  God()->Call fallback starts at 0x602091BA. The AddMember fault is a missing
  parser header, not an unbound dispatcher.
- The `_AliasInfo` StartNewGame "never dispatches" result came from sending it at
  layer 0.
- The lobby row `1 (0/100)` appears when the client refreshes CDS after abandoning
  a channel connection; it does not mean the channel was entered.
