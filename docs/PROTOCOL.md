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
sends one populated slot per batch, except GetMemberInfoToC, which fills layers 0
and 3 (section 6). **live**

## 6. Channel messages

The client's sequence on the channel socket and the server's replies, all at
layer 0 except AutoEnter: **live**

```
AuthToS                           -> AuthToC
GetUserIdByMemberIdToS            -> GetUserIdToC
EnterChannelByUserIdToS           -> EnterChannelToC, GetMemberInfoToC   layers 0 and 3
GetMemberListToS                  -> GetMemberListToC
GetRoomListToS                    -> GetRoomListToC
GetItemStateToS                   -> GetItemStateToC
  (Single Mode button, Tet4.exe 0x0049D0A0)
AutoEnterSingleModeRoomTetrisToS  -> AutoEnterSingleModeRoomTetrisToC   layer 3
CreateRoomToS                     -> CreateRoomToC, RoomInfoToC
```

The client then connects to the game socket (section 7).

**Cmd_AuthToS** 0x0365C03A: `u32 id | i64 | str account | i64 | str | str TET4 |
str ticket | str TicketAuthByMemberId`, the ticket being the bootstrap's `k300e`.
**wire** Without a database the server does not check it; with one, the ticket
must be one the account service issued to that account (`tet4server/accounts.py`).
**Cmd_AuthToC** 0x008500CA: `u32 id | i64 | str | i64 | str | str | str | str |
i32 k161e`, the five fields after the ID being a `_KeyType` (Serialize 0x601356E0).
k161e 0 is success (converter 0x6013F8B0); with any other value the client stops
at an empty `알려드립니다` notice. Sent zero and empty, or k161e 1 for a refused
ticket, after which the server closes the connection. **live**

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
where CChannelLobbyModel::Msg_SendEnterRoom (0x6090B480) reads them. The keys follow
the fields in order (`k3e k22e k23e k60e k73e k61e k62e k69e k70e k63e k129e k130e
k128e k24e k99e k35e k154e k1e`); k62e, the second number, is a room's size, which
_UpdateRoomMembers (0x60911D00) reads to seat the members a room info lists, and the
create dialog offers as the player limit. With 0 no member is ever seated, so every
player stays in the waiting room for the others. The server echoes the request's
k23e and k24e and sends k62e 6. **live**

**Cmd_Channel_GetMemberInfoToC** 0x060BC39A, sent after EnterChannelToC:
`u32 id | str k3e | str x3 | u32 | str | u64 | u32 x7 | str | u32 x2 | str | u64 |
u32 x2 | str x2 | u32 | str | vector | str k1e` (Serialize 0x6012DCE0, converter
0x601391A0). Net_GetMemberInfo, Msg_GetMemberInfo and Msg_AddMember create the
client's own CMemberData from k3e. SGlobalInfo::MyData() finds that record by
GData `k602e`; without it MyData() is null and Msg_SendEnterRoom faults. The member
list cannot stand in: Msg_FillMemberList skips the own row while MyData() is null.
Sent with k3e = the member id, everything else empty. **live**
Its layer-3 slot, in the same batch, is Tet4.exe's
Cmd_Channel_OrderTypeGetMemberInfoTetrisToC (Deserialize 0x004598C0, converter
0x00459E20): `u32 id | _TetrisMemberInfo | _EmblemInventoryInfo |
_AliasInventoryInfo | vector | vector`. _TetrisMemberInfo is `str member |
_TetrisSchoolInfo (u8 | str | u32 | u16) | u32 x2 | str | 12 bytes | str x2 | u64 |
vector<_SingleModeInfo>`, an inventory `vector | str | u32`. The converter stores
the Tetris profile in the game model (FUN_004EC400); the Single Mode scene reads
one _SingleModeInfo per mode every frame (FUN_00461E70, FUN_00461FA0) and faults at
0x00461E9D without them. Sent with the player's records (section 10). **live**

**Cmd_Channel_GetMemberListToS** 0x0AE3BBDA: `u32 id | str k22e | str k23e |
str k24e`. **wire**
**Cmd_Channel_GetMemberListToC** 0x06B816EA: `u32 id | str x3 | vector<_MemberInfo> |
str` (Serialize 0x601301D0), one row per player in the channel. Msg_FillMemberList
(0x60908F60) splits each row into fields in order; the 21st, k151e, is the room the
player is in (CMemberData+0x338, 0 for the waiting room): the member list shows it,
and accepting an invitation finds the inviter's room by it. Its layer-3 slot is
Tet4.exe's GetMemberListTetrisToC, the players' Tetris profiles. **live**

**Cmd_Channel_GetRoomListToS** 0x0DDA299A: `u32 id | str x3`, captured as `TET4`
and two empty strings; its Serialize (0x60129450) has a trailing byte the capture
lacks. **wire**
**Cmd_Channel_GetRoomListToC** 0x0226968A: `u32 id | str x3 | u32 k51e | str |
vector<_RoomInfo>` (Serialize 0x60130630). Msg_FillRoomList (0x60909BE0) reads k51e
rooms, not the vector's length, and a later RoomInfoToC only updates a room already
listed, so the server lists all 100 slots, an empty one with only its number. **live**

**Cmd_Item_GetItemStateToS** 0x075BAC2A: `u32 id | str member | u8`. **wire**
**Cmd_Item_GetItemStateToC** 0x0C446ADA: `u32 id | u8 | str | vector<item>`
(Serialize 0x60130CF0). Sent empty. Without it the client sends ExitChannelToS
about three seconds later. **live**

**Room fields**, shared by AutoEnterToS and CreateRoomToS (Serialize 0x004A18F0):
`str member | u32 k42e | str k67e | str k45e | str k46e | u32 k127e | u32 k66e |
str k200e | u32 | str k22e | str k23e | str k24e`. k42e is the room number (-1 for
any), k67e the password, k45e the title, k46e the room option (a mode letter, the
map and flags: `Y000MNN` item battle, `N000MNN` no items, `R...` race, `S` at index
4 Single Mode) and k66e the player limit (SetLimitCnt). **live**

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

**Cmd_Channel_CreateRoomToS** 0x0CA9895A, sent right after AutoEnter (also when
AutoEnter names a room): the room fields, captured with the member, the title
`행복한 하루되세요` in k45e (CP949), an **empty** k46e, k200e `G`, `TET4`, an empty
k23e and k24e `1`. **wire** The server gives the room the k46e of the preceding
AutoEnter request; with an empty option the client fails to enter the room. **live**
**Cmd_Channel_CreateRoomToC** 0x0A80143A (Tet4.exe converter 0x00441E90): `u32 id |
str | u32 failcode | str k2e | str k3e | u32 k42e | str k67e | str k45e | str k46e |
u32 k127e | u32 k66e | str k200e | u32 k69e | str k22e | str k23e | str k24e |
str | str k52e | u32 k53e | str k82e` (Deserialize 0x0043F580). The host is the
string right before the port, as in the AutoEnter reply: with it one string earlier
the client reconnected to an empty host, which resolves to its own machine name.
Sent with failcode 0, the room fields, a new room number and the game server.
**live**: the client reconnects to the game socket and enters the room.
**Cmd_Channel_RoomInfoToC** 0x0A680DDA, sent next: `u32 id | _RoomInfo`. Its
Deserialize (0x601309F0) sets the embedded _RoomInfo's nested flag, so no second ID
follows. Converter 0x6013B850 (header `s1e/c13e`) leads to SetRoomInfo
(0x6090A650), which adds the room to the client's room list. **code**; the client
accepts it and enters the room. **live**

**_RoomInfo**, always nested (Serialize 0x60126AC0, Deserialize 0x60126C10, keys
from 0x6013B850): `u32 k42e | str k45e | u32 k127e | u32 k66e | u8 k68e | str k46e |
str k200e | u32 k47e | str k116e | str k50e | u32 k143e | vector k48e | vector k49e |
vector`. **code**

Received without a reply: Cmd_Channel_TicketReissueToS 0x0A101CBA, sent
periodically (its reply 0x0C6600AA is not recovered). The lobby's other messages are
in sections 8 and 9.

## 7. Game messages

The client opens the game socket twice for one room: the AutoEnter reply starts a
connection (`connGameSvr`), and CreateRoomToC closes it and connects again
(CSwitch2LobbyController::Net_Channel_CreateRoom, HgCtr3 0x6020A170). The secure
socket reports a connection only once it is keyed (CHgSecureSocket::OnReceive
0x606040C0 posts 0x7E9), and that report sends EnterRoomToS
(Net_Game_SocketConnect 0x6020A020). If the first connection is keyed before the
client handles CreateRoomToC, its report is still queued when the socket object
reconnects: EnterRoomToS goes out in plain on the new connection before its share,
the client enters twice, and an MFC exception shows `알수 없는 오류가 발생했습니다`.
**live**, in about half of the runs while the server answered shares at once. The
server answers game shares after 0.2 s (`GAME_HANDSHAKE_DELAY`), so the client
drops the first connection unkeyed, within milliseconds. **live**, every run since.
Plain frames before a share are still ignored.

```
EnterRoomToS                                -> EnterRoomToC, AddMemberToC
AlterRoomToS                                   (no reply)
StartNewGameToS                             -> StartNewGameToC
PolyMinoPutTetrisToS                layer 3    (no reply, one per piece)
SingleModeGameReportTetrisToS       layer 3 -> SingleModeGameReportTetrisToC  layer 3
GameReportToS                                  (no reply)
  (Enter or 다시도전: StartNewGameToS again; ESC or 확인: the mode selection)
ExitRoomToS                                 -> DeleteMemberToC
SetSpeedLevelTetris                 layer 3    (no reply); the client closes the socket
```

**Cmd_Room_EnterRoomToS** 0x09A5347A: `u32 id | u32 | str | str | u32 | u32 |
str k46e | str | str | str | u32 | str k3e | str | u32 | u32` (Serialize 0x6012AD90,
Deserialize 0x6012AEC0), sent by CGameLobbyModel::Msg_SendEnterRoom (0x60914FD0).
k46e (the room option) and k3e (the member id) are placed by their captured
values. **wire**
**Cmd_Room_EnterRoomToC** 0x0974DCEA: `u32 id | str k1e | u32 failcode | str k2e`
(converter 0x6013C940). Sent with failcode 0. **live**
**Cmd_Room_AddMemberToC** 0x0619233A, sent next: `u32 id | str k50e | str k57e |
u32 k58e | str k3e | str k7e | str k8e | str k11e | u32 k10e | str k12e | u64 k34e |
u64 k13e | u32 k26e-k31e | str k32e | u32 k33e | str k102e | str k37e | str k38e |
str k52e | u32 k53e | u32 k35e | vector k153e` (Deserialize 0x6012FC50, converter
0x6013A060, header `s4e/c5e`). k50e is the host, k58e the seat, k3e the member.
CGameLobbyModel::Msg_AddRoomMember (0x60915600) seats the player in the game
(CTetMainBody::AddGamer; without a player, Start faults at 0x004E0A00) and copies
its counts k26e-k31e into MetpInfo 3 and 7. CF5ChannelLobbyView::
Evt_ChannelLobby_OnUserExitGameRoom (HGF5V 0x60A06080) reads k26e from both when the
player leaves; without them it throws `CMetpParserRet.Get()::NoValue` and the client
quits. Cmd_Room_GetMemberListToC 0x03753C2A seats the player too but sets neither.
**live**
**Cmd_Room_AlterRoomToS** 0x0D31FDDA: `u32 id | u32 | str x4` (Serialize 0x6012BFE0,
Deserialize 0x6012C080). **wire**

**Cmd_Room_StartNewGameToS** 0x072585BA: `u32 id | str k59e`. CTetSingleMainBody::
Start (0x00460DD0) calls CF5GameWnd::SendStartNewGame (HGF5V 0x60A09D70), and
Msg_SendRoomStartNewGame (HgModel3 0x609173F0) sends this with k59e `v6e`. **live**
**Cmd_Room_StartNewGameToC** 0x0F809B5A in HgCom3's layer-0 form (converter
0x60147870): `u32 id | vector<str member | u8 | u8 | u8>`, keys k25e (the count),
k3e<i>, k118e<i> and k119e<i>. It leads through Net_StartNewGame (HgCtr3 0x60207880)
to CF5GameWnd::Evt_OnStartNewGame (HGF5V 0x60A090D0). Sent with one entry, the
player. **live**: the game starts.

**Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS** 0x0CC4004A, layer 3: `u32 id |
u32 x4`, one per piece. **wire**

**Cmd_Room_OrderTypeSingleModeGameReportTetrisToS** 0x05BCDF3A, layer 3, built at game
over (FUN_00461CC0 → 0x00461770, Serialize 0x004623A0): `u32 id | str member |
str k23e | str k24e | str k42e | u32 mode | u32 value | u8 completed | u32 x3`. The
value is the score, in 40 lines the time in 1/100 s (the main body's timer at
+0x240); completed says whether 40 lines were cleared and is always set in the other
modes. **live**
**Cmd_Room_OrderTypeSingleModeGameReportTetrisToC** 0x0EE1D56A, layer 3 (Deserialize
0x00443BB0, converter 0x00450940): `u32 id | str | str | u32 result |
_TetrisMemberGameReport | _SingleModeInfo`. With result 0 the client replaces the
mode's records with the _SingleModeInfo, updates the profile (FUN_00432360) and
shows the result screen (0x0045CB30); it then sends GameReportToS. The
_TetrisMemberGameReport (`str | u32 x5 | u8 x5 | u32 x5 | f32 | u32 x2 | f32 |
u32 x3 | u8 | _TetrisSchoolInfo | u32 x4`, Deserialize 0x004436F0) is not read and
is sent empty. **live**
**Cmd_Room_GameReportToS** 0x0B81FF1A, HgCom3's generic report (`v11e`, score 0). Its
reply Cmd_Room_GameReportToC 0x0EC0F66A (`u32 id | str | u32 failcode |
vector<_MemberScoreReport>`, header `s4e/c32e`) only refreshes money and points
(Msg_GameReport, HgModel3 0x60918C70); the client goes on without it. **live**

**Cmd_Room_ExitRoomToS** 0x0510821A, the 나가기 button: `u32 id` and fields the
server does not read. **wire**
**Cmd_Room_DeleteMemberToC** 0x0E50895A: `u32 id | str k50e | str k57e | u32 k58e |
str k3e | str k8e` (Deserialize 0x60132A20, converter 0x6013CB60, header `s4e/c6e`).
When k3e is the player, Msg_DeleteRoomMember (0x60915FC0) disconnects the game
socket and returns to the lobby. **live**
Cmd_Room_OrderTypeSetSpeedLevelTetris 0x0F5DE7AA, layer 3, follows; no reply.
**wire**

## 8. Lobby and multiplayer rooms

All **live** with two clients unless marked. Every message's layout is in
`tet4server/catalog.py`, generated from the client's Serialize and Deserialize
functions; the field names there are the converters' keys.

**Presence and chat.** A player entering the channel is announced to the others with
Cmd_Channel_AddMemberToC 0x0AB84D0A (a member row, its Tetris profile at layer 3 as
AddMemberTetrisToC) and leaving with Cmd_Channel_DeleteMemberToC. Lobby chat is
Chatting_HanChatStringToS 0x08054C3A on the channel socket, echoed to everyone, the
sender included (the client shows its own line from the echo), with k3e set to the
sender; room chat is Chatting_ChatStringToS 0x0D14CF4A on the game socket, to the
room. Whispers (`/w name`) stay in the client: nothing is sent.

**Creating a room.** The create dialog (Msg_SetCreateRoomReturn, Tet4.exe 0x004CA230)
sends Channel_AutoEnterRoomToS 0x00233D9A with k42e -1 and the room fields; the reply
Channel_AutoEnterRoomToC only reports success (HgCtr3 0x6020A4B0 acts on failure
alone), and CreateRoomToC after it makes the client connect to the game socket. A
room may only be created when the player has room-creation days left
(Channel_OrderTypeDayCntInfoTetrisToC at layer 3: allowed - used > 0, FUN_00491830),
or a room-host item, or a PC방; the server sends allowed 99.

**Room states** (k47e): 0 an empty slot (double-click creates a room there), 1, 2
and 4 joinable, 5 watch only. Quick join (바로입장, HgModel3
CChannelLobbyModel::Msg_AutoEnterRoom 0x6090CD70) is the client's own: it picks the
fullest room in state 4 that is neither private nor playing and joins it, so the
server reports waiting rooms as 4.

**Joining.** Channel_GameJoinRoomToS 0x0AE830EA (`k3e k42e k67e`) → GameJoinRoomToC
with the room fields and the game endpoint; failcode 1 no such room (or sent away
from it), 2 wrong password, 3 full or playing. On the game socket EnterRoomToS, then
Room_AddMemberToC for every member to the newcomer and for the newcomer to the
others. The room info (RoomInfoToC, and Room_GetRoomInfoToC 0x02C1F9DA for the
members) lists the members as `str id | u32 seat`; the converter turns them into
k48e (the count) and k3e<i>/k43e<i>, from which _UpdateRoomMembers seats them and
records their room.

**Invitations** (초대). Channel_InviteGameToMemberToS 0x0264355A (`k3e inviter | u32 |
str message | str target | u8`) → Channel_InviteGameToMemberToC 0x08E980CA to the
target in the waiting room, with the room number (k42e), title (k65e) and password
(k67e). The answer Channel_ResponseInviteGameToS 0x02163F5A is `str invited | str
inviter | u8` (0 accepted); the server passes it to the inviter as
ResponseInviteGameToC, which closes the waiting dialog. Accepting, the invited
client joins the room by itself.

**In the room.** The host's Room_AlterRoomToS 0x0D31FDDA (`k42e k45e k67e k46e`)
changes the title, password and options; the members get Room_GetRoomInfoToC and the
lobby RoomInfoToC. Single Mode sends an empty one before every game, which is
ignored. The host's map choice is Room_OrderTypeMapSetTetrisToS 0x05D396AA, layer 3
(`u8 seat | u32 place in the map list | u32 random kind | u8 | u8`, from the map
packet 0x00425560); the others get MapSetTetrisToC 0x017AC2FA, which carries the map
by name (`u8 | str name | u32 random | u8 | u8`, applied by 0x00576790; the name is
looked up in the client's encrypted map files). The server learns names from game
starts. Room_ReqBanishMemberToS 0x0A13C22A (`str member`) from the host sends a
member away (**scripted only**): the member gets ReqBanishMemberToC and leaves.

**A game.** The host's Room_OrderTypeLetsGameStartTetris 0x010016CA (layer 3: `u8 |
str map | u32 place | vector<u8> | u32 | u8 | vector<str> players | vector<u8>`) →
LetsGameStartOkTetris 0x008A128A to every member, the host included, which starts the
game on that map (FUN_004586B0). In the game the clients' OrderType messages are
passed unchanged to the others at layer 3 (Tet4.exe registers them at 0x0045B410).
A player who tops out sends IWillDieTetris 0x0FE1E36A (`u8 seat`); the last one in
sends it too. Then LetsGameEndTetrisToC (one _TetrisGameReport per player, winner
first: rank, team, name, levels) shows the result board, and Room_GameReportToC at
layer 0 with Tet4.exe's GameReportTetrisToC at layer 3 (`u32 room | reports`,
converter 0x0045B070) resets the seats and closes the board five seconds later.
Players then get TP (section 9).

## 9. Shop, items and profiles

All at layer 3 of the channel socket; Tet4.exe registers the shop's converters at
0x005424A0, and they hand each message to CShopData, CShopInventory and the shop
windows. All **live** unless marked.

**Catalog.** Shop_GetShopInfoToS 0x06AE698A → Shop_GetShopInfoToC 0x04441EBA:
`str | vector<_Board> | vector<_ProductGroup> | vector<_Product> |
vector<_MissionProduct>` (CShopData::SetShopInfo, 0x0051C750). Boards BDT001,
BDT002 and BDT003 are the tabs (tickets, items, emblems and titles), each a list of
group codes; a group is a code and its products' codes, dropped by the client when
none of them is known; a product is `str code | str name | str currency (HANCOIN, TP
or WON) | u64 price | u8 sold by the piece | u8 | u8 | vector<str> | vector<str> |
str`. The client takes names, descriptions and icons from its own
Tet4/Shop/Data/ShopDataList.xml. Product codes are P, a kind letter, 0, two letters,
five digits and a period (Dnnn days, Hnnn hours, Cnnn uses, D000 and U000 for
ever); the inventory item is T and the five digits.

**Buying.** Shop_ReqBuyProductToS 0x00ACFC7A (`str code | u32 quantity | str | u8 gift |
str receiver | str message`) → Shop_ResBuyProductToC 0x0808E5FA (`str code | u32 |
u8 | str | str | u32 result | str error | str status | str`): result 0 and status
`C` complete the purchase in the buy window (0x0054DEB0); any other result shows the
error text. Then Shop_ChangePointInfoToC 0x0F62BA9A (`str kind | str | u64 before |
u64 after`) updates the balance shown, and the inventory follows.

**Inventory.** Shop_GetInventoryInfoToS 0x04762CEA (on entering the lobby and from the
shop) → Shop_GetInventoryInfoToC 0x00A1CEBA: three `_Inventory` (items, emblems,
titles: `str | str | vector<_ItemInfo> | u32 slots`), the gift box, the club
membership, `vector<_Point>` (`str kind | str | u64 amount`; the lobby shows TP from
it) and the time now (CShopInventory, 0x005113B0). An _ItemInfo is `str code | str |
str kind | str start | str end | str | u32 count | u32`, kind T with dates
(`YYYYMMDDHHMMSS`, parsed by 0x0052A710) or C with uses. The client checks items by
code: room creation by T10003, T10014, T10006 or a club (FUN_00491830).
Single Mode's StartNewGameToC carries Tet4.exe's layer-3 part, each player's
`_UseAbleItem` (`str | u8 unlimited hold | u8 next | u8 | u8`, 0x00459BD0).

**Profiles.** Channel_OrderTypeGetDisplayMemberInfoTetrisToS 0x0E4772BA (`str member |
u32`), sent on entering the lobby and by the emblem and title buttons →
GetDisplayMemberInfoTetrisToC 0x0C3B49AA: the member, the Tetris profile, and the
emblem and title inventories (`vector<str code | str name | u32 mission> | str |
u32 slots`). The emblem list looks up the mission of any emblem whose mission is not
-1 and faults when there is none (0x004853C0). In the Tetris profile the string at
+0x8C is the emblem shown and at +0xA8 the title. Showing one:
Channel_OrderTypeChangeDisplayMemberInfoToS 0x08DB6E9A (`str emblem | str title`)
→ ChangeDisplayMemberInfoToC 0x0F6AFA1A (`str member | str emblem | str title`) to
everyone.

## 10. Single Mode records

**_SingleModeInfo**, nested (Deserialize 0x004596D0): `u32 mode | u32 | u32 rank |
u32 ranked | vector<u32> values | vector<str> dates | u32 result | u32 plays`. **code**
for the layout and the readers below, **live** for each field's effect.

- mode: 0 Marathon, 1 40 lines, 2 Ultra.
- values and dates: the best results, best first, as shown on the 내기록 tab
  (FUN_00461FA0, which shows the dates as they are). The client always reads five
  and compares a finished game with the first, so there are always five; 0 is an
  empty slot. Higher scores are better; in 40 lines lower times are, and game over
  shows NEW RECORD on its own comparison (FUN_00461CC0).
- rank and ranked: the result screen shows the rank and rank / ranked as a
  percentage (0x0045CB30, `%d`, `%0.2f`); the right panel shows the same.
- result: this game's score or time on the result screen (FUN_0045CA20, 0x0045C200).
- plays: games played in the mode. FUN_00460230 adds the plays of all modes to the
  multiplayer games (MyData +0x130, +0x134, +0x138); Ultra opens at 500, or with
  item T10006.
- The u32 after mode only enters the 40 lines best-time display (FUN_00461E70);
  sent as 0.

The server keeps, per player and mode, the plays and the best five; only 40 lines
runs that were cleared count as records. It ranks a player's best among the
players it knows and dates records `YYYY.MM.DD` (the client's own date format is
not known). Records live in memory, or in the SQLite database with `--db FILE`. The
profile at channel entry and every game report carry them.

## 11. Debugging

The full procedure for recording a run is in [`DEBUGGING.md`](DEBUGGING.md).

- `python3 -m tet4server --trace traces/session.jsonl` appends every decrypted
  batch as one JSON line: time, service, peer, direction, layer, message name and
  the batch in hex. Traces contain the session ticket.
- winedbg runs the client under a debugger. Non-interactively, from the client
  folder: `winedbg ./Tet4.exe "<bootstrap>" < cmds.txt`, with lines such as
  `set $BreakOnFirstChance = 0`, `break *0x60147870`, `c` and `bt` (Wine 9's
  `--file` fails to open the file, and the program needs the `./`).
  For gdb: `winedbg --gdb --no-start --port 38002 Tet4.exe "<bootstrap>"`, then
  `target remote localhost:38002` with `set architecture i386`. Check that a DLL
  is mapped at its preferred base before breaking on its addresses.
- Wine: run from the client folder with `LANG=ko_KR.UTF-8`. The client's own VC90
  DLLs must load; forcing builtin msvcr90, msvcp90 or mfc90 stops it from starting.
  The tested prefix had vcrun2008 and Korean fonts; a fresh Wine 9 prefix with no
  extras also runs it, headless under Xvfb included.
- Headless, under Xvfb, run a window manager (twm works). Outside a game the client
  reads Enter, ESC and the arrow keys with GetAsyncKeyState (FUN_00461930), and only
  while its main window is active.
- The text of a Windows message box: set `RelayInclude` under
  `HKCU\Software\Wine\Debug` to `user32.MessageBoxA;user32.MessageBoxW` and run
  with `WINEDEBUG=+relay`; the strings are CP949.

## 12. Corrected conclusions

Notes in this repository's history concluded otherwise on these points:

- k42e is the room number and k66e the player limit (an earlier note had k66e as
  the room number); the mode is in k46e.
- Rooms only reach the other clients when the room list has every slot and k51e says
  how many, and members only show in their rooms when EnterChannelToC gives k62e.
- CreateRoomToC's host is the string right before the port, and its room option
  comes from AutoEnter, not from CreateRoomToS.
- RoomInfoToC has no second ID before its _RoomInfo.
- The Single Mode scene does not need Cmd_Channel_AddMemberToC: it needs the Tetris
  profile in layer 3 of GetMemberInfoToC, and the game socket's Cmd_Room_AddMemberToC
  seats the player.
- The "unknown error" after entering Single Mode is the first game connection's
  stale connect report, not a reply the server got wrong.
- The lobby row `1 (0/100)` appears when the client refreshes CDS after abandoning
  a channel connection; it does not mean the channel was entered.
