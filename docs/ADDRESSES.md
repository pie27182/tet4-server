# Addresses used in the documentation

Each row was looked up with `tools/find_function.py` in a Ghidra export of the
unmodified client (`tools/export.sh`). Addresses are image addresses of the module
(the default image base of each DLL). The name column is the name in the export.
`FUN_xxxx` means Ghidra did not name the function; the role comes from the code.

`tools/find_function.py <export-dir> 0x<address> --show` prints the decompiled body.

## Secure socket, handshake and stream cipher (`HgSock3.dll`)

| Address | Name in export | Role |
|---|---|---|
| `0x606041D0` | `GenerateKey` | client's 48-byte share (24 × uint16, TEA with the fixed key) |
| `0x60603F70` | `OnConnect` | sends the 48 bytes after connect |
| `0x606040C0` | `OnReceive` | collects exactly 48 server bytes, then `MakeKey` |
| `0x606042C0` | `MakeKey` | decrypts the server share, XOR with the client share, builds both stream contexts |
| `0x60605580` | `FUN_60605580` | TEA encrypt, one 8-byte block (key in `EAX`) |
| `0x60605610` | `FUN_60605610` | TEA decrypt, one 8-byte block |
| `0x606057A0` | `FUN_606057A0` | send filter (encrypt direction) |
| `0x60605900` | `FUN_60605900` | receive filter (decrypt direction) |
| `0x60605A70` | `FUN_60605A70` | MT19937 seeding with `init_by_array`, 4 key words |
| `0x60605A30` | `FUN_60605A30` | `init_genrand`, used inside the seeding |
| `0x60605B20` | `FUN_60605B20` | MT19937 twist and temper, two outputs per block |

Fixed TEA key `K0..K3` = `21F72C9D CAE2A54B DE8F1DCA 97D23A1C` (`GenerateKey`).

## Messages, dispatch and serialization (`HgCom3.dll`)

| Address | Name in export | Role |
|---|---|---|
| `0x601356E0` | `FUN_601356e0` | `Cmd_AuthToC::Serialize` (id, `_KeyType`, two strings, i32) |
| `0x601357A0` | (next to it) | `Cmd_AuthToC::Deserialize` |
| `0x60128690` | `FUN_60128690` | `_KeyType::Serialize` (i64, string, i64, string, string) |
| `0x60135DA0` | `FUN_60135da0` | `Cmd_Channel_GetUserIdToC::Serialize` |
| `0x60135E40` | (next to it) | `Cmd_Channel_GetUserIdToC::Deserialize` |
| `0x6013F8B0` | `FUN_6013f8b0` | converter for `Cmd_AuthToC`: `i32 → k161e` |
| `0x6013F9B0` | `FUN_6013f9b0` | converter for `Cmd_Channel_GetUserIdToC`: `string → k3e`, `string → k2e`, `i32 → k161e` |
| `0x601206E0` | `FUN_601206e0` | dispatcher: reads 4 bytes, compares with `XLBP`, peeks the id, calls the class |
| `0x60121A40` | `FUN_60121a40` | `PC_RegisterX2M` implementation (registers converters by id) |

## Lobby, channel list and channel connection (`HgModel3.dll`)

| Address | Name in export | Role |
|---|---|---|
| `0x60904130` | `FUN_60904130` | sends `CDS_ReqSelect` (`SelectChannel`, 20 s), calls `BuildChannelList` only on success |
| `0x60904500` | `ConnectCdsServer` | caller of `FUN_60904130` |
| `0x60903600` | `FUN_60903600` | channel list; sends `manualSelectChannel`, `showWindow` or `autoSelectChannel`; the switch counter starts at -1 (host = column 3, port = column 4) |
| `0x60903110` | `_SelectChannel_Tetris` | channel choice for TET4 (ratio `+0xAC / +0xB0`, see `docs/CLIENT.md`) |
| `0x609024E0` | `Msg_AutoSelectChannel` | handler of `channel/autoSelectChannel` |
| `0x609026B0` | `Msg_ManualSelectChannel` | handler of `channel/manualSelectChannel` |
| `0x60908A20` | `Msg_ConnectChannelServer` | connects to the channel server |
| `0x6090FC70` | `Msg_SendAuth` | sends the authorization request (`TicketAuthByMemberId`) |
| `0x6090FDC0` | `Msg_GetAuth` | handler of `channel/getAuth` (`Cmd_AuthToC`) |
| `0x6090FF20` | `Msg_SendGetUserByMemberId` | sends `c601e` (the user-id request) |
| `0x6090FFE0` | `Msg_GetUserId` | handler of `channel/getUserId`; success is `k161e == 0` |

## CDS client (`CDSClientConnector.dll`)

| Address | Name in export | Role |
|---|---|---|
| `0x10016670` | `SelectChannel` (3 arguments) | public wrapper |
| `0x100166B0` | `SelectChannel` (int timeout) | public wrapper with timeout |
| `0x10015FB0` | `FUN_10015fb0` | sends the request and waits; returns `0x60005` on timeout |
| `0x100014D0` | `FUN_100014d0` | creates a request object and its tid (`InterlockedIncrement`) |
| `0x100155E0` | `FUN_100155e0` | dispatcher: accepts only id `0x08D1A6DA` |
| `0x100153A0` | `FUN_100153a0` | parses `CDS_AnsSelect`; prints `no tid in wait queue` when the key does not match |

## Game executable (`Tet4.exe`)

The three TPack hostnames that `tools/patch_client.py` replaces are at these **file
offsets** (not image addresses): `0x1F9520`, `0x1F9544`, `0x1F956C`.
