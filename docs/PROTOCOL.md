# The Tet4 protocol

What the 2012 Hangame Tetris client (`Tet4.exe` 1.3.4) speaks, written so that a
server can be built from this document and [`MESSAGES.md`](MESSAGES.md) alone.
MESSAGES.md lists every one of the client's 233 messages field by field; this
document tells how they fit together, what the fields mean, what the client does
with each reply, and what is known of the features this server does not
implement.

Every fact carries its evidence:

- **wire**: seen in bytes captured from the real client;
- **live**: observed in the running client against this server (it accepted a reply
  and went on, or a debugger breakpoint was hit);
- **code**: read from the decompiled client, not yet confirmed in a live run.

Addresses are image addresses in the unmodified 1.3.4 client (`Tet4.exe` at
0x00400000, every DLL at its preferred base). They appear only here and in
[`DEBUGGING.md`](DEBUGGING.md); the server's code describes behavior instead.

**Contents.** 1 The client and its services · 2 Wire primitives · 3 TPack · 4 The
channel directory · 5 The secure socket · 6 Frames, batches and layers · 7 Entering
a channel · 8 The lobby · 9 Rooms · 10 Games · 11 The shop, items and profiles ·
12 Accounts · 13 Not implemented · 14 What the client sends · 15 Corrected
conclusions

## 1. The client and its services

`Tet4.exe` is started as `Tet4.exe "<bootstrap>"`. The bootstrap is
`metp://<cds host>:<cds port>//go/go;` followed by `key:length=value` fields joined
by `&` (`tools/bootstrap-sample.txt`): `k3e` is the account, `k8e` and `k300e` the
login ticket (32 characters each), `k602e` the TPack port, `k22e` the game (`TET4`).
It also carries member fields under the keys the member rows use (`k10e` 31,
`k11e` M, `k13e` 1000000, `k31e` 1360, `k37e` 999999), which look like age, sex,
money and ratings; nothing the server sends depends on them. The distribution's
.NET launcher `h-tetra.exe` only builds this string and starts the game; it has no
protocol code (its online mode wraps the same streams in a TLS tunnel). **code**

The client then talks to four services, in this order:

| Service | Transport | Port | What for |
|---|---|---|---|
| TPack | plain frames | 10454, the bootstrap's `k602e` | a first login step (section 3) |
| CDS | plain frames | 15000, the bootstrap's URL | the channel directory (section 4) |
| Channel | secure socket | from the directory (15001) | lobby, rooms, shop, profiles |
| Game | secure socket | from the room replies (15002) | one room and its games |

The unmodified client connects to three hard-coded TPack hosts
(`tpacksvr.tp.casual.hangame.com` and its `dev-` and `alpha-` variants, at file
offsets 0x1F9520, 0x1F9544 and 0x1F956C) and never reaches another TPack server;
`tools/client.py patch` writes a copy with those names pointing at the server.
**live** Everything else follows from the bootstrap and the replies, so a server
can run on any host. A player's own launcher (here `tools/client.py play`) logs in
to the server's account service first and puts the ticket in the bootstrap
(section 12).

Every channel has its own channel and game sockets; this server gives channel n
ports 15001 + 2(n − 1) and 15002 + 2(n − 1) (`tet4server/config.py`).

## 2. Wire primitives

Integers are big-endian: `u8 u16 u32 u64`, signed `i32 i64`, and `f32` (IEEE 754).
A string is a u32 byte count and the bytes, with no terminator or padding; its text
is CP949 (Korean). A vector is a u32 element count and the elements; a structure is
its fields in order. A frame, on every socket, is a u32 byte count and the body.
**wire**

Every message body starts with its u32 message ID. A nested structure has no ID of
its own: its Deserialize sets a "nested" flag that skips the ID (`Channel_RoomInfoToC`
is its ID followed directly by a `_RoomInfo`). **live**

## 3. TPack (TPackClientConnector.dll)

Plain frames, one message each. A request is `u32 id | str method | u32 context |
...`; the reply echoes the method and the context. **wire**

| Request | ID | Reply | ID and fields |
|---|---|---|---|
| `TPACK::Connector::Impl::Connector::AuthSession` | 0x0CF7BD9A | AuthSession | 0x0A36B7BA: `str method · u32 context · str · str · i32 result` |
| `TPACK::Connector::Impl::Connector::LoginTPack` | 0x0B60835A | LoginTPack | 0x05E78E3A: the same, then `str · i32 · i64` |

Result 0 with empty strings is accepted (`tests/test_tpack.py` holds replies the
client accepted, byte for byte). **live** Other requests get no reply. Accounts are
not checked here: the channel checks the ticket (section 7).

## 4. The channel directory (CDSClientConnector.dll)

Plain frames. `CDS_ReqSelect` 0x05740F6A: `u32 id | u32 transaction | str table |
...`, the table `COMMON`. `CDS_AnsSelect` 0x08D1A6DA: `u32 id | u32 transaction |
i32 error | [str] columns | [[str]] rows`. **wire**

- The transaction must be the request's: the client looks the pending request up by
  it (0x100153A0) and otherwise logs `no tid in wait queue` and gives up after 20
  seconds. **code**
- The client reads a channel's address by column position, not by name (HgModel3
  0x60903600): column 3 is the host, column 4 the port. **live**: with the host in
  column 2 the client dialed 0.0.58.153, which is `inet_addr("15001")`.
- Columns `GameID SubID ChannelID ChannelIP ChannelPort ChannelName MaxMember
  MaxRoom MemberCnt`; one row per channel: `TET4 01D0A <n> <host> <port> <n> 300
  100 <players now>`. The lobby's channel list shows the counts. **live**

## 5. The secure socket (HgSock3.dll, CHgSecureSocket)

Both the channel and the game socket. Before any frame each side sends a 48-byte
key share; after it every byte is encrypted, each direction with its own state.

### 5.1 Key exchange

A share's plaintext is 24 random u16 (GenerateKey 0x606041D0: `rand() % 0xFFFF`),
read as twelve little-endian u32 and TEA-encrypted in six 8-byte blocks under the
fixed key `21F72C9D CAE2A54B DE8F1DCA 97D23A1C`. TEA here is the standard
32-round cipher (delta 0x9E3779B9, the sum added before each round's two halves):

```
for 32 rounds: sum += delta
               v0 += ((v1 << 4) + k0) ^ ((v1 >> 5) + k1) ^ (sum + v1)
               v1 += ((v0 << 4) + k2) ^ ((v0 >> 5) + k3) ^ (sum + v0)    (all mod 2^32)
```

The client sends its share first and accepts any share back. Both sides decrypt
both shares and compute the master key `master[i] = client[i] ^ server[i]` over the
twelve plaintext u32 (MakeKey 0x606042C0). **wire** The key is fixed, so anyone who
sees both shares can decrypt the session.

### 5.2 Stream cipher

Each direction has a cipher state: an 8-byte chain, an 8-byte block (two u32) and
an MT19937 generator seeded with `init_by_array` (the reference mt19937ar.c):

| Direction | Chain and block from | Generator key | Client object |
|---|---|---|---|
| client to server | `master[6..7]` | `master[8..11]` | send context `this+0x13C` |
| server to client | `master[0..1]` | `master[2..5]` | receive context `this+0x140` |

The chain starts as the block's two u32, little-endian; the keystream is the next
two generator outputs, little-endian. For byte j (0-7) of each 8-byte step:

```
out = in ^ chain[j] ^ keystream[j]
chain[j] = the plaintext byte (in when encrypting, out when decrypting)
```

After the eighth byte the block is TEA-encrypted under the key `(chain0, chain1,
chain0, chain1)` (the chain's two little-endian u32), the result is the new block
and the new chain, and two more generator outputs form the next keystream. The
state carries over from frame to frame (filters 0x606057A0 and 0x60605900, seeding
0x60605A70, generator 0x60605B20). **wire**: the first frame of a capture decrypts to
`AuthToS` (`tests/test_cipher.py`); **live**: the client decrypts the server's
frames.

The cipher dominates a server's CPU: one TEA encryption per 8 bytes per recipient,
and every message to the lobby goes to every player in it.

### 5.3 A stale notice before the key exchange

The client opens the game socket twice for one room (section 9.5). If its first
connection is keyed before it handles the reply that replaces it, the first
connection's "connected" notice fires on the second one, whose `EnterRoomToS` then
goes out in the clear, before the share; the client enters twice and an MFC error
(`알수 없는 오류가 발생했습니다`) follows. **live**, in about half of the runs while
the server answered shares at once. The server answers game-socket shares after
0.2 seconds, so that the client drops the first connection unkeyed; **live**, every
run since. A plain frame before a share is recognized by its `XLBP` magic (bytes
4-7) and ignored: no reply, since until the exchange the client takes the first 48
bytes it receives as the server's share.

## 6. Frames, batches and layers (HgCom3.dll)

### 6.1 Frames

On a secure socket a frame is `u32 length | "XLBP" | batch`, encrypted as a whole;
the length counts the magic and the batch. **wire**

### 6.2 Batches and layers

A batch carries one message type in up to four layer slots:

- Sending (PC_ConvertM2X 0x601204A0): each filled slot follows one 4-byte
  `LayerAlignment` (ID 0x09D0057A, no fields) per empty slot before it; trailing
  empty slots are left out. **code**; the Single Mode request arrives after three
  markers. **wire**
- Receiving (PC_ConvertX2M 0x601206E0): for up to four slots, the client peeks the
  next u32. A marker is consumed and the slot is empty. Otherwise the first real ID
  is looked up once (an unknown one ends the batch) and the type's converter for
  this slot's layer runs, reading the message's own ID and fields; a slot without a
  converter consumes nothing, so its bytes are read again for the next slot. **code**

So the pair (ID, layer) identifies a message, a batch cannot mix message types, and
each slot's body must be exactly what that layer's converter reads, or the next
slot is read from the wrong place. The layers are the Metp header's: 0
`TT_XDR_PLATFORM` (HgCom3's generic messages), 1 `TT_XDR_SERVICE` (the Korean
services), 3 `TT_XDR` (Tetris). **code**

### 6.3 Converters, keys and extension classes

The client registers one converter per (ID, layer): HgCom3 its generic messages at
layer 0 and its Korean-service ones at layer 1 (0x60121A40 calls), Tet4.exe its
Tetris messages at layer 3 (FUN_0045B410, the shop's at FUN_005424A0). Tet4.exe
also replaces HgCom3's layer-0 converters of `Channel_CreateRoomToC`,
`Channel_GameJoinRoomToC` and `Channel_DeleteMemberToC` and registers the Gaea
messages at layer 1. MESSAGES.md gives each message's layer from these tables.
**code**

A converter turns a message into key/value pairs for the UI: `k3e` the member,
`k42e` the room number, and so on. The keys a field has are recorded in the catalog
(`name:type=key`); the same key may mean different things in different messages,
and in a vector the keys are numbered per element (`k3e0`, `k3e1`, ... with the
count under another key). **code**

Some classes are **extensions**: the client receives them under another message's
ID, in that message's batch, at their own layer. Their own class IDs never travel.

| Extension | Rides under | Layer |
|---|---|---|
| `Channel_OrderTypeGetMemberInfoTetrisToC` | `Channel_GetMemberInfoToC` | 3 |
| `Channel_OrderTypeGetMemberListTetrisToC` | `Channel_GetMemberListToC` | 3 |
| `Channel_OrderTypeAddMemberTetrisToC` | `Channel_AddMemberToC` | 3 |
| `Room_OrderTypeStartNewGameTetrisToC` | `Room_StartNewGameToC` | 3 |
| `Room_OrderTypeGameReportTetrisToC` | `Room_GameReportToC` | 3 |
| `...SvcKorToC` (ten classes) | the message of the same name without `SvcKor` | 1 |

The Tetris ones are registered at 0x0045B410 under the generic IDs; the SvcKor ones
are filled into empty layer-1 slots by HgCom3 (`Room_StartNewGameSvcKorToC` is
converter 0x60147870 under `Room_StartNewGameToC`). **code**; the Tetris ones the
server sends are **live**.

### 6.4 Names and IDs

Message names are the client's class names from MSVC RTTI without `Cmd_`
(`Cmd_Channel_CreateRoomToS`): `ToS` messages go to the server, `ToC` messages to
the client, and the in-game `Room_OrderType...Tetris` messages without a suffix go
from one client through the server to the others in the room. Each class's ID is
the constant its constructor stores; field layouts come from each class's
Serialize and Deserialize functions (extracted for all 233 into
`tet4server/protocol/catalog.py`). Two layouts were wrong in the extraction and are
corrected there: `AuthToS` and `AuthToC` open with a `_KeyType` (`u64 · str member
· u64 · str · str game`), the only two messages that embed one. **wire**: the
codec reproduces a captured `AuthToS` byte for byte.

## 7. Entering a channel

The client's sequence on the channel socket, all at layer 0 unless marked: **live**

```
AuthToS                          -> AuthToC
Channel_GetUserIdByMemberIdToS   -> Channel_GetUserIdToC
Channel_EnterChannelByUserIdToS  -> Channel_EnterChannelToC
                                    Channel_GetMemberInfoToC + its Tetris extension (0 and 3)
                                    Channel_OrderTypeDayCntInfoTetrisToC (3)
(a batch of one LayerAlignment marker: nothing to answer)
Channel_GetMemberListToS         -> Channel_GetMemberListToC + extension (0 and 3)
Channel_GetRoomListToS           -> Channel_GetRoomListToC
Item_GetItemStateToS             -> Item_GetItemStateToC
Shop_GetInventoryInfoToS (3)     -> Shop_GetInventoryInfoToC (3)
Channel_OrderTypeGetDisplayMemberInfoTetrisToS (3, kind 4)
                                 -> Channel_OrderTypeGetDisplayMemberInfoTetrisToC (3)
```

The server announces the newcomer to the others as it answers the entry (section 8.1).

**AuthToS** carries the account (`key.member`), the game and the ticket, the
bootstrap's `k300e`, with the method `TicketAuthByMemberId`. **wire** **AuthToC**'s
`login_result` (k161e) 0 lets the client in; any other value stops it at an empty
`알려드립니다` notice (converter 0x6013F8B0). **live** With accounts, the server checks
the ticket, answers 1 for a bad one and closes the connection.

**GetUserIdToC** returns the member id in `member` (k3e); Msg_GetUserId (HgModel3
0x6090FFE0) stores it as GData `k601e` and copies it to `k602e`, which every later
request uses as "me". **live**

**EnterChannelByUserIdToS** names the member, `TET4`, an empty sub id and the
channel id `1` (whichever channel it is), and the client version `7.8` (`k149e`).
**wire** **EnterChannelToC**'s keys follow its fields in order; converter 0x60139620
maps string 3 to `sub_id` (k23e) and string 8 to `channel_id` (k24e), which
Msg_FillChannelInfo (0x609077E0) stores and the room requests send back; `result`
(k1e) must not be `v2e` (0x60111AC0). `room_size` (k62e, the second number) is the
number of seats in a room: _UpdateRoomMembers (0x60911D00) seats a room's members
by it, and with 0 no member is ever seated, so every player stays in the waiting
room for the others. The server echoes the request's sub id and channel id and sends
6. A full channel answers `result` `v2e`. **live**

**GetMemberInfoToC** at layer 0 must carry the member id first: Msg_AddMember
creates the client's own member record from it, and SGlobalInfo::MyData() finds
that record by `k602e`; without it MyData() is null and entering a room faults.
The member list cannot stand in for it (Msg_FillMemberList skips the own row while
MyData() is null). Its layer-3 extension is the player's Tetris profile with the
emblem and title lists (section 11.5): the Single Mode scene reads the profile's
three record lists every frame and faults at 0x00461E9D without them. **live**

**DayCntInfoTetrisToC** (layer 3): `used` and `allowed` rooms today. The create
dialog opens only with `allowed - used > 0` (FUN_00491830), a room-host item or a
PC방. The server sends allowed 99. **live**

**GetItemStateToC**, sent empty: without it the client leaves the channel
(`ExitChannelToS`) about three seconds later. **live**

**Channel_CouponCountToS**, when the client asks, is answered with
**CouponCountToC** at layer 1, where HgCom3 registers it, `coupons` (k434e) 0.
**live** (At layer 0 it works too: that slot has no converter, so its bytes are
read again as layer 1.)

Received without a reply: `Channel_TicketReissueToS` (game, member, ticket),
periodically; the session goes on. **wire**

## 8. The lobby

### 8.1 Members and presence

**GetMemberListToC** (layer 0) holds one `_MemberInfo` row per player in the
channel; its layer-3 extension the players' Tetris profiles in the same order.
Msg_FillMemberList (0x60908F60) reads each row's fields in order; `member` (k3e) is
the name shown, and `room` (k151e, the 21st field, kept at CMemberData+0x338) the
room the player is in, 0 in the lobby: the list shows it, and accepting an
invitation finds the inviter's room by it. The rows the client accepted set `k7e`
to the member id again and `k11e` to `M`. **live**

A player entering is announced to the others with **Channel_AddMemberToC** (a row
with the channel's identity) and its Tetris profile at layer 3, leaving with
**Channel_DeleteMemberToC**. **live**

### 8.2 Chat

Lobby chat is **Chatting_HanChatStringToS** on the channel socket: a `_HanchatFormat`
whose `member` is the sender and `text.message` the line. The server sends it to
everyone in the channel as **HanChatStringToC**, the sender included (the client
shows its own line from the echo), with `member` set to the sender's real id.
Room chat is **Chatting_ChatStringToS** on the game socket, passed to the room as
ChatStringToC the same way. Whispers (`/w name`) stay in the client: nothing is
sent. **live**

### 8.3 The room list

**GetRoomListToC** lists `rooms` as `_RoomInfo` and `room_count` (k51e). Msg_FillRoomList
(0x60909BE0) reads `room_count` rooms, not the vector's length, and a later
**Channel_RoomInfoToC** only updates a room already listed (SetRoomInfo
0x6090A650 looks the number up), so the server lists all 100 slots, an empty one
with only its number. **live**

`_RoomInfo`: `room` (k42e) the number 1-100, `title` (k45e), `limit` (k66e) the
players allowed, `private` (k68e) 1 with a password, `options` (k46e), `state`
(k47e), `creator` (k116e), `host` (k50e), `playing` (k143e), `players` (k48e) as
`_MemberInfoShort` (member and seat), `watchers` (k49e), and `k127e` and `k200e`,
which the server sends back as the creator's request had them. The client turns the
players into `k48e` (the count) and `k3e<i>`/`k43e<i>`, from which
_UpdateRoomMembers seats them and records each member's room. **live**

States (`state`): 0 an empty slot (double-click creates a room there), 1, 2 and 4
joinable, 5 watch only. The server reports 4 while a room waits and 5 while it is
full or playing. Quick join (바로입장, HgModel3 CChannelLobbyModel::Msg_AutoEnterRoom
0x6090CD70) is the client's own: it picks the fullest room in state 4 that is
neither private nor playing and joins it (section 9.4). **live**

Every change to a room (created, a member in or out, its settings, a game started
or ended) goes to everyone in the channel as `Channel_RoomInfoToC`; a closed room
as its slot, empty again (`room` and state 0). **live**

## 9. Rooms

### 9.1 Room settings

The room requests (`Channel_CreateRoomToS`, `Room_OrderTypeAutoEnterSingleModeRoomTetrisToS`,
`Channel_AutoEnterRoomToS`) carry the settings (Serialize 0x004A18F0): **live**

- `room` (k42e): the slot asked for, 0 or 0xFFFFFFFF for any;
- `password` (k67e), empty for an open room;
- `title` (k45e), CP949;
- `options` (k46e): a mode letter, the map and flags — `Y000MNN` item battle,
  `N000MNN` no items, `R` race, `S` survival (its maps are `smquery1`), `H` painting
  (its map is `shadow`; the Shadow messages are its), `X` a custom board (the cells
  of LetsGameStart) — and `S` at index 4 for a Single Mode room (`N000S`). **code**
  for the letters (the map loader's switch, Tet4.exe 0x004AB626). The map is the
  second character; the client's scenes switch on the first (DoExActive 0x004FDBC0;
  with options empty the room scene stays null, fault at 0x004FE2D5);
- `limit` (k66e): players asked for (the create dialog offers 2 to `room_size`);
- `k127e`, `k200e` (`G` in captures; the create path checks an `S` there against
  an item, HgModel3 0x6090C638) and `k69e`: sent back as they came;
- `game_id`, `sub_id`, `channel_id`: TET4, empty and `1`.

The server keeps a room's player limit between 2 and 6, and 1 for Single Mode.

### 9.2 Creating a room: the create dialog

The create dialog (Msg_SetCreateRoomReturn, Tet4.exe 0x004CA230) sends
**Channel_AutoEnterRoomToS** with `room` 0xFFFFFFFF. The reply
**Channel_AutoEnterRoomToC** only reports success (`result` "" or `v2e`; HgCtr3
0x6020A4B0 acts on failure alone); the **Channel_CreateRoomToC** after it makes the
client connect to the game socket. **live**

**Channel_CreateRoomToC** (Tet4.exe converter 0x00441E90): `failcode` 0, `result`
"", `member`, the new `room` number, the settings, the player `limit`, the channel
identity, and the game socket in `game_host`/`game_port` (k52e/k53e): the host is the
string right before the port (with it one string earlier the client reconnected to
an empty host, its own machine). Failure: `failcode` 1 and `result` `v2e` (no free
slot). **live**

### 9.3 Single Mode's room

The 싱글모드 button (Tet4.exe 0x0049D0A0) sends
**Room_OrderTypeAutoEnterSingleModeRoomTetrisToS** at layer 3: the settings with
options `N000S`. **wire** The reply (layer 3, Deserialize 0x00443080, converter
0x00445F60) sends the request back with `member` empty, `room` 0, `result` "" (`v2e`
fails) and the game socket; Msg_ConnectGameServer (0x60914950) connects to it.
**live** The client then sends **Channel_CreateRoomToS** with an **empty** options
string, a title and `k200e` `G`; **wire** the server gives the room the options of
the Single Mode request (with empty options the client fails to enter the room),
answers CreateRoomToC with `limit` 1, and sends the creator alone its RoomInfoToC:
a Single Mode room is never listed to others. When it closes, the creator's slot is
freed with an empty RoomInfoToC, or the old title stays in that player's list.
**live**

### 9.4 Joining

From the room list (or quick join) the client sends **Channel_GameJoinRoomToS**
(`member`, `room`, `password`). **GameJoinRoomToC** (Tet4.exe converter
0x00442130) carries the room's settings and the game socket, or `failcode` 1 (no
such room, or the player was sent away from it), 2 (wrong password) or 3 (full or
playing) with `result` `v2e`. **live** The client then enters on the game socket.

### 9.5 The game socket: entering a room

The client opens the game socket twice for a room: the first reply naming it starts
a connection (`connGameSvr`), and CreateRoomToC closes it and connects again
(CSwitch2LobbyController::Net_Channel_CreateRoom, HgCtr3 0x6020A170). The secure
socket reports a connection only once keyed (CHgSecureSocket::OnReceive 0x606040C0
posts 0x7E9), and the report sends EnterRoomToS (Net_Game_SocketConnect
0x6020A020); see section 5.3. **live**

```
Room_EnterRoomToS    -> Room_EnterRoomToC, Room_AddMemberToC for every member
                        (and Room_AddMemberToC for the newcomer to the others)
```

**Room_EnterRoomToS** (Serialize 0x6012AD90): `room`, the settings, `k57e` (`v4e`),
`seat` 0xFFFFFFFF, `member`, and the client's own address and port in `k52e`/`k53e`.
**wire** The game socket carries no ticket: with accounts, the server accepts the
member only while it is logged in on a channel connection from the same address.
**Room_EnterRoomToC** (converter 0x6013C940): `failcode` 0; a refusal sends 1 with
`result` `v2e` and the server closes the connection. **live**

**Room_AddMemberToC** (Deserialize 0x6012FC50, converter 0x6013A060): `host` (k50e),
`seat` (k58e), `member` (k3e), with `k7e` the member and `k11e` `M` as in the
lobby rows. CGameLobbyModel::Msg_AddRoomMember (0x60915600) seats the player in the
game (CTetMainBody::AddGamer; without a player, starting faults at 0x004E0A00) and
copies the counts k26e-k31e into MetpInfo 3 and 7, which the lobby view reads when
the player leaves (HGF5V 0x60A06080; without them it throws
`CMetpParserRet.Get()::NoValue` and the client quits). **Room_GetMemberListToC**
seats players too but sets neither, so the server never sends it. **live**

### 9.6 In the room

- **Room_AlterRoomToS** (`room`, `title`, `password`, `options`): the host changes
  the room; the members get **Room_GetRoomInfoToC** and the lobby RoomInfoToC.
  Single Mode sends an empty one before every game, which is ignored. **live**
- **Room_OrderTypeMapSetTetrisToS** (layer 3, from the map packet 0x00425560):
  `seat`, `place` (the map's place in the client's list), `random` (1-3: a random
  map of that kind) and two bytes. The others get **MapSetTetrisToC** (converter
  0x00445E90, applied by 0x00576790), which carries the map by **name** (looked up
  in the client's encrypted map files): the server learns names from game starts
  (LetsGameStart carries the host's map name and place). **live**
- **Room_ReqBanishMemberToS** (`member`) from the host sends a member away (강퇴):
  the member gets **Room_ReqBanishMemberToC** (converter 0x6013E0B0), leaves as with
  the exit button, and cannot rejoin (GameJoinRoomToC `failcode` 1). **code**,
  tested with scripted clients only.
- **Room_ExitRoomToS** (the 나가기 button) → **Room_DeleteMemberToC** (`host`,
  `seat`, `member`) to everyone in the room, the leaver included: for the leaver
  Msg_DeleteRoomMember (0x60915FC0) disconnects the game socket and returns to the
  lobby. `Room_OrderTypeSetSpeedLevelTetris` follows (layer 3, no reply), then the
  client closes the socket. If the host leaves, the next member in seat order hosts.
  **live**

### 9.7 Invitations

The 초대 button lists the lobby's players; inviting sends
**Channel_InviteGameToMemberToS** (`member` the inviter, `room`, `message` the
invitation's text — `Would you play with me?` by default; the client fills it from
key k65e — and `target`). **wire** The target gets **InviteGameToMemberToC**
(`member` the inviter, `room`, `title`, `password` (k67e), `message`) and a dialog
with the room and the inviter's profile. Accepting or declining, it answers
**Channel_ResponseInviteGameToS** (`member` itself, `inviter`, and a byte keyed k64e,
0 either way); accepting, it then sends GameJoinRoomToS by itself. The server passes
the answer to the inviter as **ResponseInviteGameToC**, which closes its waiting
dialog. A target that cannot be asked (not in the lobby, or already in a room) is
answered at once with k64e 1. **live**

## 10. Games

### 10.1 Starting a game

`Room_StartNewGameToS` (`k59e` `v6e`; CTetSingleMainBody::Start 0x00460DD0 →
CF5GameWnd::SendStartNewGame, HGF5V 0x60A09D70) from the host, or the Single Mode
player, starts a game. **Room_StartNewGameToC** goes to every member: at layer 0
the bare ID (HgCom3's converter 0x6013EE70 reads nothing more), through
Net_StartNewGame (HgCtr3 0x60207880) to CF5GameWnd::Evt_OnStartNewGame (HGF5V
0x60A090D0); at layer 3 its extension, each member's `_UseAbleItem` (`member`,
`hold` unlimited hold, `next` more preview pieces; 0x00459BD0). **live**: the game
starts. (An earlier form put the Korean-service member list at layer 0: the game
started, but by the converter tables the layer-3 slot was then read from the wrong
place. **code**)

### 10.2 Multiplayer

```
Room_OrderTypeLetsGameStartTetris (host, layer 3)
                     -> Room_OrderTypeLetsGameStartOkTetris to every member, host included
in-game messages (layer 3), passed unchanged to the others in the room
Room_OrderTypeIWillDieTetris (layer 3), from each player out, passed on
                     -> when all are out: Room_OrderTypeLetsGameEndTetrisToC (3),
                        Room_GameReportToC + Room_OrderTypeGameReportTetrisToC (0 and 3),
                        Shop_ChangePointInfoToC (3) on each player's channel socket
```

**LetsGameStartTetris** (registered for receiving at 0x00458570): `kind`, `map` (the
host's map name, CP949; `노맵` for none), `place` in the map list, `cells` (200 bytes:
a custom board, copied when the mode letter is X), two unknown numbers, `players`
(the six seats' members, empty for free seats; a member in watch mode, 관전 모드,
is left out) and `flags` (one byte per seat). **LetsGameStartOkTetris** carries the
same fields without `kind`; every member starts on it (FUN_004586B0 stores the map
name, the cells, the players by seat), and the client never sends it itself. **live**

The in-game messages, which Tet4.exe registers for receiving at layer 3 under their
own IDs, go to the other members unchanged: pieces (`PolyMinoPut`, `PolyMinoPutPiece`),
garbage, combos, items (use, send, steal, reflect, ...), boards (`BasicData`,
`SwitchMatrix`), the map sync and speed level, team settings, and the like
(MESSAGES.md lists the 42 marked "passed on"). **live**

A player who tops out sends **IWillDieTetris** (`seat` and statistics); the last one
in sends it too. When every player of the game has, the game is over; a player who
leaves counts as out. The ranking is the reverse order of going out.
**LetsGameEndTetrisToC** (converter 0x00459B20; CTetMainBody slot 15, 0x005796C0)
shows the result board from one `_TetrisGameReport` per player, winner first:
`member`, `rank` (+0x28), `team` (+0x2C), levels before and after. Then
**Room_GameReportToC** (layer 0: `members`) with its extension
**GameReportTetrisToC** (layer 3: `room`, `reports`; converter 0x0045B070), which
checks the room number, resets every seat and closes the board five seconds later.
**live**

Players earn TP by rank (30, 20, then 10; games under 30 seconds earn nothing): the
server sends each **Shop_ChangePointInfoToC** on its channel socket, and the lobby
and room show the new balance. **live**

### 10.3 Single Mode

```
Room_StartNewGameToS                         -> Room_StartNewGameToC (0 and 3)
Room_OrderTypeSingleModePolyMinoPutTetrisToS (3), one per piece, no reply
Room_OrderTypeSingleModeGameReportTetrisToS (3) at game over
                                             -> Room_OrderTypeSingleModeGameReportTetrisToC (3)
Room_GameReportToS                           (HgCom3's generic report; no reply needed)
  Enter or 다시도전: StartNewGameToS again; ESC or 확인: the mode selection
```

**SingleModeGameReportTetrisToS** (FUN_00461CC0 → 0x00461770, Serialize
0x004623A0): `member`, `sub_id`, `channel_id`, `room` (as a string), `mode` (0
Marathon, 1 40 lines, 2 Ultra), `value` (the score; in 40 lines the time in 1/100 s,
the main body's timer at +0x240) and `completed` (40 lines cleared; always set in
the other modes). **live**

**SingleModeGameReportTetrisToC** (Deserialize 0x00443BB0, converter 0x00450940):
`member`, `result` 0, a `_TetrisMemberGameReport` the client ignores (sent with the
member only), and the mode's new standing, a `_SingleModeInfo`. With result 0 the
client takes it as the mode's records, updates the profile (FUN_00432360) and shows
the result screen (0x0045CB30). **live**

`_SingleModeInfo` (Deserialize 0x004596D0): **live** for each field's effect

- `mode`: 0, 1 or 2;
- the u32 after it only enters the 40 lines best-time display (FUN_00461E70); 0;
- `values` and `dates`: the best results, best first, as the 내기록 tab shows them
  (FUN_00461FA0 shows the dates as they are; the server writes `YYYY.MM.DD`). The
  client always reads five and compares a finished game with the first, so there
  are always five, 0 for an empty place. Higher scores are better; in 40 lines
  lower times are, and only cleared runs count. Game over shows NEW RECORD by the
  client's own comparison (FUN_00461CC0);
- `rank` and `ranked`: the player's place among everyone's bests and the number of
  players with one; the result screen shows the rank and a percentage from them
  (`%d`, `%0.2f`), the right panel the same;
- `result`: this game's score or time (FUN_0045CA20, 0x0045C200);
- `plays`: games played in the mode. FUN_00460230 adds every mode's plays to the
  multiplayer games (MyData +0x130, +0x134, +0x138); Ultra opens at 500, or with
  item T10006.

## 11. The shop, items and profiles

All at layer 3 of the channel socket; Tet4.exe registers the shop's converters at
0x005424A0, which hand each message to CShopData, CShopInventory and the shop
windows. **live** unless marked.

### 11.1 Products

A product code is `P`, a kind letter, `0`, two letters, five digits and a period
(`Dnnn` days, `Hnnn` hours, `Cnnn` uses, `D000` and `U000` for ever); the inventory
item is `T` and the five digits: PU0HT10003D007 is seven days of T10003. The client
takes names, descriptions, icons and the prices it shows from its own
`Tet4/Shop/Data/ShopDataList.xml`; the server's catalog (`domain/shop.py`) has the
same codes and prices.

**Shop_GetShopInfoToS** → **GetShopInfoToC** (CShopData::SetShopInfo 0x0051C750):
`boards` (BDT001 tickets and clubs, BDT002 items, BDT003 emblems and titles, each
listing group codes), `groups` (a code and its products' codes; the client drops a
group none of whose products it knows), `products` (`code`, `currency` TP, HANCOIN
or WON, `price`, `per_piece` 1 for products with uses) and missions.

### 11.2 Buying

**Shop_ReqBuyProductToS** (`code`, `quantity`, `gift`, `receiver`, `message`) →
**ResBuyProductToC**: `result` 0 and `status` `C` complete the purchase in the buy
window (0x0054DEB0); any other result shows `error`, CP949 text such as `TP가
부족합니다.` Then **ChangePointInfoToC** (`kind` TP, `before`, `amount` after) updates
the balance shown, and the inventory follows. `Shop_RequestCanPurchaseToS` →
`ResponseCanPurchaseToC` with result 0 lets the buy window open.

### 11.3 Inventory and TP

**Shop_GetInventoryInfoToS** (on entering the lobby and from the shop) →
**GetInventoryInfoToC** (CShopInventory 0x005113B0): three `_Inventory` (items,
emblems, titles: `items` and `slots`), the gift box, the club membership, `points`
(`kind` TP and `amount`; the lobby shows TP from it) and the time `now`. An
`_ItemInfo` is `code`, `kind` T with `start` and `end` dates (`YYYYMMDDHHMMSS`,
parsed by 0x0052A710) or C with a `count` of uses. `Shop_GetPointInfoToS` (`kind`) →
`GetPointInfoToC`.

### 11.4 Items

The client checks items by code itself: room creation by T10003, T10014, T10006 or a
club (FUN_00491830), Ultra by T10006. The server acts on two, in StartNewGameToC's
item list: T10004 unlimited hold and T10005 more preview pieces. Clubs and packs put
several items in the inventory and give TP back. Items with uses (nickname change,
rating changes, the record eraser, the Happy Cube hammer) can be bought but have no
effect yet.

### 11.5 Profiles, emblems and titles

**Channel_OrderTypeGetDisplayMemberInfoTetrisToS** (`member`, `kind`; on entering the
lobby with kind 4, and by the member info dialog and the 엠블럼 and 호칭 buttons) →
**GetDisplayMemberInfoTetrisToC**: the member, the Tetris profile, and the emblem and
title inventories, each `items` (`code`, `name`, `mission`), `shown` and `slots` (4,
8 with item T90002 for emblems or T90003 for titles). The emblem list looks up the
mission of any item whose mission is not 0xFFFFFFFF and faults when there is none
(0x004853C0): a bought one carries 0xFFFFFFFF. In the Tetris profile (`_TetrisMemberInfo`)
the string at +0x8C is the emblem shown and +0xA8 the title. **live**

Showing one: **Channel_OrderTypeChangeDisplayMemberInfoToS** (`emblem`, `title`, both
sent, the one changed and the one kept; 0x004E8660) → **ChangeDisplayMemberInfoToC**
(`member`, `emblem`, `title`) to everyone in the channel. The lists' trash button:
**Channel_RequestDeleteEmblemToS** / **RequestDeleteAliasToS** (`code`) →
**ResponseDeleteEmblemToC** / **ResponseDeleteAliasToC** (`code`, `done` 1; converters
0x004568F0, 0x00456630): the list drops the item; if it was shown, none is, for
everyone. **live**

## 12. Accounts

The client never sends a password: the ticket in its bootstrap is its proof. This
server's account service (not part of the client's protocol) listens beside the
directory: one JSON object per line each way, `{"op": "register" | "login", "name":
..., "password": ...}` → `{"ok": true, "ticket": ...}` or `{"ok": false, "error":
...}`. A launcher logs in, receives a 32-character ticket and starts the client with
it as `k8e` and `k300e`; AuthToS presents it. Tickets expire after 12 hours;
passwords are kept as scrypt hashes. The game protocol's cipher has a fixed key, so
a ticket can be read off the wire: run the account service behind TLS.

A player may be logged in once: entering a channel ends an earlier login of the same
account, in that channel at once and in the others within two seconds (they share
the database's presence table).

## 13. Not implemented

What is known of each feature the server leaves out, for whoever implements it.
MESSAGES.md has every layout.

- **Watching a room** (관전). The lobby's watch button sends `Channel_ViewRoomToS`
  (`str · u32 · str`, presumably member, room and password); its reply
  `Channel_ViewRoomToC` mirrors GameJoinRoomToC's layout (settings and the game
  socket). A watcher would enter the game socket and receive the room's in-game
  messages without a seat; `Room_ViewerToPlayerToS`/`ToC` move a watcher into a free
  seat. Rooms already list `watchers`, and LetsGameStart leaves members in watch
  mode out of a game. **code**
- **Nicknames.** `Channel_CheckUserIdToS`, `CheckCharacterIdExistToS`,
  `MakeUserIdToS` (choosing one) and `Channel_OrderTypeChangeUserIdTetrisToS` (the
  nickname change item T10020) with their replies. Here an account's name is its
  nickname. **code**
- **Friends.** `Channel_OrderTypeFriendMemberInfoTetrisToS` (`str · str`) →
  `...ToC`, a friend's profile; the lobby's 친구 tab. **code**
- **Gifts and coupons.** `Shop_ReqBuyProductToS` already carries `gift`, `receiver`
  and `message`; `Shop_RequestUseGiftToS` (`u64 · str · str`) →
  `ResponseUseGiftToC` takes one from the gift box (the inventory's `gifts`);
  `Shop_GetCouponListToC` lists coupons. **code**
- **The Happy Cube** (해피큐브). `Shop_RequestUseHappyCubeHammerToS` (no fields) →
  `ResponseUseHappyCubeHammerToC` (`str · str · str · u32`); the hammer is item
  T10015. **code**
- **Club payments.** `Shop_RequestChangeLiqidMethodToS` and
  `RequestReserveSurrenderToS` (cancelling) with their replies, for clubs paid
  monthly; here TP pays a club once. **code**
- **Missions and levels.** `_TetrisMissionMastInfo`/`_TetrisMissionUserInfo` in the
  profiles (sent empty), `Channel_OrderTypeMissionCompleteTetrisToC`,
  `Room_OrderTypeMissionCompleteTetrisToC`, `Room_OrderTypeSetEmblemTetrisToC` (an
  emblem earned in a game) and `Channel_LevelUpRewardToC`. The result board's levels
  are sent as 1. **code**
- **Room notices and states.** `Room_NoticeToS`, `Room_SetRoomStateToS`. **code**
- **Ghost check.** `Channel_DetectGhostToS`/`Room_DetectGhostToS` (`u32`) and their
  replies: Hangame's duplicate-client check. **code**
- **Operators.** `Notice_NoticeToC` (a notice to everyone), `Channel_ShutdownTimeToC`
  and `Room_ShutdownTimeToC` (a countdown), `Channel_BanishToC` and the
  `ReserveBanish` messages (sending a member out), `Channel_SendErrorToMemberToC`:
  could announce maintenance. **code**
- **Records and statistics.** `Channel_OrderTypeRefreshMemberToS`/`ToC` (refreshing
  a member's row), today's match counts (`TodayMatchInfo`), attack speeds
  (`Room_OrderTypeAvgAttackSpeedTetrisToS`, `TotalAvgAttackSpeedTetrisToC`), the
  mini game's report. **code**
- **Hangame's other services.** The SvcKor messages (avatars, complaints, client
  options, memberships, the Gaea promotions at layer 1) and HgCom3's generic room
  features (money, power and recovery items, zero-sum checks) are not part of this
  game. **code**

## 14. What the client sends

Values seen in traces of the real client (live), for the fields the server does not
interpret:

| Message | Fields |
|---|---|
| AuthToS | `key` (0, member, 0, "", TET4), ticket, method `TicketAuthByMemberId` |
| EnterChannelByUserIdToS | `k601e` 0, member, TET4, "", `1`, `k149e` `7.8`, `k167e` 0 |
| GetRoomListToS | TET4, "", `1`, without the trailing byte its Serialize writes |
| Item_GetItemStateToS | member, 1 |
| GetDisplayMemberInfoTetrisToS | member, `kind` 4 on entering the lobby |
| TicketReissueToS | TET4, member, the ticket |
| CreateRoomToS (Single Mode) | `limit` 6, `k200e` `G`, empty options, a random title |
| AutoEnterRoomToS (dialog) | `room` 0xFFFFFFFF, the options and limit chosen, `k200e` `G` |
| Room_EnterRoomToS | `k57e` `v4e`, `seat` 0xFFFFFFFF, the client's own address and port |
| StartNewGameToS | `k59e` `v6e` |
| GameReportToS | TET4, "", `1`, the room as a string, `v11e`, 0, 1, the member's score, `v6e` |
| LetsGameStartTetris | `kind` 0, `노맵`, place 0, no cells, 0, 1, the six seats, flags 0 |
| SetSpeedLevelTetris | 0, 0, 100, 0 |

Messages whose reading the client does not check at the end may come shorter than
their Serialize: a server should read the fields it needs and take missing trailing
ones as zero or empty.

## 15. Corrected conclusions

Notes in this repository's history concluded otherwise on these points:

- k42e is the room number and k66e the player limit (an earlier note had k66e as
  the room number); the mode is in k46e.
- Rooms only reach the other clients when the room list has every slot and k51e says
  how many, and members only show in their rooms when EnterChannelToC gives k62e.
- CreateRoomToC's host is the string right before the port, and its options come
  from the Single Mode request, not from CreateRoomToS.
- RoomInfoToC has no second ID before its _RoomInfo.
- The Single Mode scene does not need Channel_AddMemberToC: it needs the Tetris
  profile in layer 3 of GetMemberInfoToC, and the game socket's Room_AddMemberToC
  seats the player.
- The "unknown error" after entering Single Mode is the first game connection's
  stale connect notice, not a reply the server got wrong.
- The lobby row `1 (0/100)` appears when the client refreshes the directory after
  abandoning a channel connection; it does not mean the channel was entered.
- AuthToS and AuthToC open with a `_KeyType` the extracted layouts lacked.
- StartNewGameToC's layer-0 slot is the bare ID; the member list once sent there is
  the Korean-service extension's (layer 1).
- In the invitations, k64e is a byte, sent 0 for both answers, not the inviter or
  a declined flag; the invitation's text travels in the request's third field.
