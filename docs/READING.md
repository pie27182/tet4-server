# Reading the reconstructed code

How to go from `FUN_60908f60` to code that reads like the original project, and what
is real in the names you see.

## What the binaries still contain (verified)

- Built with Visual Studio 2008 SP1, MSVC 9.0.30729 (`RICH` header), MFC 9.0 and
  ATL 9.0 as DLLs (`mfc90.dll`), CRT 9.0 (`msvcr90.dll`, `msvcp90.dll`).
- MSVC RTTI: class names, vtables, inheritance.
- Exported C++ names in the DLLs (mangled, e.g. `?Clear@CMemberDataList@@QAEXXZ`).
- MFC `CRuntimeClass` records and `AFX_MSGMAP` tables (see the next section).
- String literals, message ids and serializer code.

Lost forever: local variable names, comments, macros, templates, original formatting,
inlined boundaries. No tool recovers those.

## Three layers of names

1. **Original, from the binary.** Class names from RTTI and exported method names.
   Applied automatically by Ghidra during analysis.
2. **Reconstructed by this project.** `names/<module>.tsv`, one line per function:
   `<image address> <TAB> <name>`. `tools/recover_classes.sh` applies the map before
   exporting, so the name appears in the signature and at every call site.
   The protocol serializers, deserializers and converters are named this way.
3. **Unknown.** Remaining `FUN_...` and `vfunctionN` names. Each one is a candidate
   for the map once its role is understood.

`tools/build_name_map.py` generates layer 2 for `HgCom3.dll` from two machine-readable
sources: message constructors (`param_1[2] = 0x<id>` next to `Cmd_*::vftable`) and the
`PC_RegisterX2M` registration table (`id -> converter`). Manual entries in the same
file are kept and win over generated ones. Re-run it after a new export:

```
tools/build_name_map.py HgCom3.dll
tools/recover_classes.sh client/HgCom3.dll
```

## Where the code lives

| Module | What it contains | Start reading at |
|---|---|---|
| `Tet4.exe` | application: lobby, channel model, game classes, Single Mode messages | `CChannelLobbyModel`, `Cmd_Room_*` |
| `HgCom3.dll` | protocol framework: message classes, serializers, converters, X2M dispatch | `Cmd_*::Serialize`, `Cmd_*::Converter` |
| `HgCtr3.dll` | channel/game controllers: what the client does after a message | `CChannelLobbyController::Net_*`, `Evt_*` |
| `HgModel3.dll` | model layer: `Msg_*` handlers filling UI data | `CChannelLobbyModel::Msg_*` |
| `HgSock3.dll` | secure socket, TEA, MT19937 stream cipher | `GenerateKey`, `MakeKey` |
| `CDSClientConnector.dll`, `TPackClientConnector.dll` | directory and account services | `Select`, `AuthSession` |
| `HgBoard3.dll` | generic Hangame board component (drawing/storage), not Tetris rules | `CHgBoard`, `CHgBoardLogic` |
| `HgTool3/View3/Dlg3/Frm3/HGF5V` | MFC UI toolkit of Hangame | message maps |

Protocol messages are named the same way as in the client: `Cmd_<Area>_<Name>ToS`
(client to server) and `...ToC` (server to client). Handlers on the client side are
`Net_*` (controller entry), `Msg_*` (model update) and `Evt_*` (view event).

## What can still be improved, and how

- **MFC class names and sizes.** Every `CObject`-derived class has a `CRuntimeClass`
  record: pointer to an ASCII class name, object size, schema, factory. Scanning for
  pointers to class-name strings in `.data` recovers names that RTTI alone may miss.
- **Message handlers.** `AFX_MSGMAP` entries contain `nMessage` (`WM_PAINT`, `WM_TIMER`,
  ...) and a function pointer. Their targets can be named `OnPaint`, `OnTimer`, which
  makes the UI modules readable.
- **MFC imports are by ordinal.** `mfc90.dll` imports have no names; mapping them
  requires the ordinal export list of that exact MFC build.
- **Local variables.** Only by hand, per function, where it matters.

## Practical rules

- Trust the serializer, not the decompiler's types: the wire layout comes from the
  `Serialize`/`Deserialize` pair.
- When a name in `names/` disagrees with the code, fix the code reading first.
  No name in that file is an original symbol.
- Keep `docs/ADDRESSES.md` in sync when a function is renamed.
