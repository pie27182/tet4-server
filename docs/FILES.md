# The client folder: what each file is

The client is the official Hangame Tetris distribution (version 1.3.4,
`client-version.txt`). It is not part of this repository. `files.sha256.json` in
the folder lists the sha256 of all 2068 files; `tools/check_client.py` verifies them.

Confidence labels:

- **code**: read in decompiled code or disassembly during this project.
- **exports**: only the exported symbol names were read; the role is inferred from them.
- **not studied**: nothing has been checked yet.

## Launcher and game executable

| File | Role | Confidence |
|---|---|---|
| `h-tetra.exe` | .NET launcher. Checks that ports 15000 and 15001 are free, reads `bootstrap.txt` from its own folder (or `--profile account.bootstrap`), requires the string to start with `metp://127.0.0.1:15000/`, then starts `Tet4.exe` with it. Also contains the update code (`ClientUpdater`). It has no CDS, channel or game protocol logic. | code (decompiled C# in `tet4-evidence`) |
| `Tet4.exe` | The game itself (MFC). Reads the startup string, talks to TPack (10454), CDS (15000) and the channel server, and runs the lobby and the Tetris game. Its three TPack hostnames are the only thing `tools/patch_client.py` changes. | code (startup, TPack hosts) |
| `Tet4/` | Game resources: images, sounds, XML. | not studied |
| `Sysfiles/` | Game system files. | not studied |

## Network protocol (our main subject)

| File | Role | Confidence |
|---|---|---|
| `HgSock3.dll` | Secure socket `CHgSecureSocket` and `CHgtpSocket`: 48-byte handshake (`GenerateKey`, `OnConnect`, `OnReceive`, `MakeKey`), TEA, MT19937 stream filters, length framing (`ReadPacket`). | code |
| `HgCom3.dll` | Message classes `Cmd_*` (about 120, with `GetID`, `Serialize`, `Deserialize`), XDR converters registered with `PC_RegisterX2M`, and the dispatcher that checks the `XLBP` magic and reads the id. | code |
| `HgModel3.dll` | Lobby and channel model. Channel list (`FUN_60903600`, our name `BuildChannelList`), channel selection, the `Msg_*` handlers that send and receive `channel/*` events (`Msg_SendAuth`, `Msg_GetAuth`, `Msg_GetUserId`, ...). | code |
| `HgCtr3.dll` | Controllers that forward `channel/*` events to the network layer (`Net_GetAuth`, `Net_GetUserId`, ...). | code (in part) |
| `CDSClientConnector.dll` | CDS client: creates the request id (tid), keeps pending requests, waits 20 s for a reply, parses `CDS_AnsSelect` (`FUN_100153A0`). | code |
| `TPackClientConnector.dll` | TPack client (`TPACK::Connector`): `AuthSession`, `Connect`, `LoginTPack`. | exports + the TPack captures |
| `XInNetwork.dll`, `XStream.dll`, `XSystem.dll`, `XPlatform.dll` | Network links, byte streams (`XMemoryStream`, `XDequeStream`), threads and critical sections, Windows error codes. | exports |
| `CasualComm.dll` | `CasualNet` and `ChatParser`: the platform messaging layer. | exports |

## Lobby, UI and game screens

| File | Role | Confidence |
|---|---|---|
| `HgView3.dll`, `HgFrm3.dll`, `HgDlg3.dll`, `HGF5V.dll`, `HgTool3.dll` | Views, the main frame application (`CBaseApp`), dialogs, lobby windows, shared UI helpers. | exports |
| `HgBoard3.dll` | Game board (`CHgBoard`, game info and end-of-game info). | exports |
| `HgAniGm3.dll`, `HgAniGm3_16Bit.dll` | Animated game window and graphic controls (chat box, edit box). The 16-bit variant has 947 functions, decompiled. | code (decompiled) |
| `HgAvtr3.dll` | Avatar classes (`CAvtr2004`, `CAvtrId`). | exports |
| `GcDxbase.dll`, `GcDxbase_3d.dll` | DirectX-based lobby and game views (468 functions each, decompiled; not analysed for the protocol). | code (decompiled) |
| `HanVM2d.dll`, `HanVM3d.dll` | 2D and 3D graphics engine (`CGsSprite2`, `CGsAvatar`, `CGsMove`). | exports |
| `HgKor3.dll` | Korean string table (`HgLoadString`). | exports |
| `ipcHani.dll` | Messenger IPC (`HaniMgrSink`, `GetBuddyListData`). | exports |
| `IRIA.dll`, `IRIA_Init.lua` | `IRIA` module with its own thread class; the Lua file is its init script. | exports (role not established) |
| `GAS.dll` | Advertising client (`ConnectToAdServer`, `GetAdUnit`). Not needed for the game protocol. | exports |

## Audio

| File | Role | Confidence |
|---|---|---|
| `HgSoundOut.exe` | Sound output helper. | not studied |
| `fmod.dll` | FMOD audio library (third party). | name |
| `neon4.dll`, `neon9.dll` | Sound mixer (`CMixer`, `CSound`). | exports |

## Runtime, third party and system

| File | Role | Confidence |
|---|---|---|
| `mfc90.dll`, `mfc90u.dll`, `mfcm90.dll`, `mfcm90u.dll`, `msvcm90.dll`, `msvcp90.dll`, `msvcr90.dll`, `Microsoft.VC90.CRT.manifest`, `Microsoft.VC90.MFC.manifest` | Visual C++ 2008 runtime (Microsoft). | name |
| `gdiplus.dll` | Windows GDI+ (system library shipped with the client). | name |
| `ijl15.dll` | Intel JPEG library (third party). | name |
| `dbghelp.dll` | Windows debug helper. | name |
| `XDebug.dll` | Diagnostic logging (`DiagOutput`, `XLogError`, `XLogFatal`). Decompiled; not analysed for the protocol. | code (decompiled) |
| `GameGuard.des` | Anti-cheat data. Not analysed; not needed for the protocol. | not studied |

## Data and configuration

| File | Role |
|---|---|
| `common/` | Shared resources: `Channel.hml` (channel list layout), `GameWarpInfo.ini`, `hgaud.hdc`, `images/` (`.him` and `.ico`), `sounds/` (`.hso`), `xml/`, `Tet4Channel/`, `Shop/`. |
| `controls.json` | Keyboard controls and timing for the Tetris game (`das_ms`, `arr_ms`, key bindings). |
| `urlhgc.cfg`, `urlhgc3.cfg`, `urlhgb3.cfg` | URL settings (`[URLs]` section with `k…e` keys, e.g. advertising and mileage pages). |
| `itemhgc.cfg`, `tet4hgc.hsp` | Item and game settings. Not studied in detail. |
| `launcher-login.json` | Login state written by the launcher. Not studied in detail. |
| `client-version.txt` | Client version (`1.3.4`). |
| `files.sha256.json` | Manifest: sha256 of every file above. |
| `게임 실행방법.txt` | Vendor instructions (Korean). |

## What is not in this repository

Every file above. The repository contains only our own code, tests and documentation.
The only derived artifact that is shipped is the description of the three-host patch
in `tools/patch_client.py` (offsets and expected bytes, no binary).
