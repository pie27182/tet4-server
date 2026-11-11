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

- Every message on every socket: `uint32be length | body`, where `length` is the body size.
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

**Channel host and port are taken by position, not by name.** `BuildChannelList`
(`HgModel3.dll`, `0x60903600`) runs a switch whose counter starts at -1, so column `k`
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

Not yet verified: the server-to-client direction (`encrypt`). It mirrors the client
receive filter in code, but the client has not yet accepted one of our encrypted
replies.

## 7. Channel messages

Frame body after decryption: `u32be length | "XLBP" | u32be message ID | fields`.
The 4-byte length counts the body after itself.

| Message | ID | Direction | Status |
|---|---|---|---|
| `Cmd_AuthToS` | `0x0365C03A` | client to server | **[wire]** first message on the channel |
| `Cmd_AuthToC` | `0x008500CA` | server to client | **[static]** ID only |
| `Msg_GetAuth` (`channel/getAuth`) | — | handler in `HgModel3.dll` | **[static]** reads field `k161e`; shows a dialog |

`Cmd_AuthToS` fields seen in run16, in order: `test` (string), `TET4` (string), 32 bytes
of `A` (string), `TicketAuthByMemberId` (string), with zero dwords between them.
**The meaning of each field is not yet established** (account, game ID, ticket, auth
method). The client's serializer for `Cmd_AuthToS` and the reply format for `Cmd_AuthToC`
are the next static tasks.

After the handshake the client shows a "connecting" dialog with a cancel button.
Without a valid reply it closes the channel socket after about 66 s. **[wire]**

## 8. Single Mode (not yet started)

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

Their fields and the order in which the client expects them are unknown.
