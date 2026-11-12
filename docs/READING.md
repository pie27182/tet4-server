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

## Current state of the reconstruction

`tools/recover_classes.sh` run on each protocol module, into
`work/decompiled-named/`:

| Module | Named functions | Unnamed | Typed `this` example |
|---|---|---|---|
| `HgCom3.dll` | 3007 | 1222 | `Cmd_Channel_GetMemberListToC::Serialize(Cmd_Channel_GetMemberListToC *this, ...)` |
| `HgCtr3.dll` | 327 | 28 | `Net_GetMemberList(CChannelLobbyController *this, IParam *param_1)` |
| `HgModel3.dll` | 697 | 107 | `Msg_FillMemberList(CChannelLobbyModel *this, IParam *param_1)` |

Unnamed entries are static helpers whose names never existed in the binary; they
become candidates for `names/<module>.tsv` as their role is understood.

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

## MFC metadata (implemented)

`tools/scan_mfc.py client/Tet4.exe` scans the PE file directly and writes
`names/<module>.tsv` entries:

- **CRuntimeClass** records: pointer to a class name, object size, schema. In this
  client only two are present (`TypeLib`, `CTetFrame` size 0x4c8); the DLLs do not
  use MFC dynamic creation, so RTTI is the main source of class names.
- **AFX_MSGMAP** entries: a handler pointer plus the window message. Known messages
  become `OnPaint`, `OnCreate`, `OnEraseBkgnd`, `OnLButtonDown`, `OnKeyDown` and so
  on. The scanner only accepts entries that form a real contiguous map, which keeps
  random data out (9 handlers in `Tet4.exe`).

`tools/ExportHeaders.java` writes the recovered classes as a C++ header
(`work/reconstructed/<module>.h`) using Ghidra's `CppExporter`, headless:

```
/opt/ghidra/support/analyzeHeadless work/ghidra <project> -process <module> \
    -noanalysis -scriptPath tools -postScript ExportHeaders.java "$PWD/work/reconstructed/<module>.h"
```

## Field and vtable names

`fields/<module>.tsv` (`struct <TAB> offset <TAB> name`) is applied by
`tools/ApplyFieldNames.java`. It works on the structures created by the RTTI
recovery. Vtable slots are the useful part: the recovered classes now show
`Serialize` and `Deserialize` instead of `vfunction6`/`vfunction7`, which also
appears at indirect call sites.

Ghidra keeps several structures with the same name: empty placeholders created by the
demangler and the real ones under `/ClassDataTypes`. `ApplyFieldNames` prefers the
`/ClassDataTypes` copy for that reason.

Extending a recovered structure in place fails with `Not enough undefined bytes to
fit`, because it is built from single-byte `undefined` components. `ApplyFieldNames`
rebuilds the structure instead: a new `StructureDataType` with the requested members
and gaps as `undefined` arrays, swapped in with
`DataTypeManager.replaceDataType(old, new, updateSymbols=true)`.

This names the structures in the header (all five `Cmd_Channel_GetMemberListToC`
fields, three for `Cmd_Item_GetItemStateToC`, 12 names, no misses), but **not** the
field accesses in the decompiled bodies: a class structure embeds its own copy of the
`_data` type, and the decompiler keeps reading that copy (`field_0x5c`). Rewriting the
embedding component does not change the result. This is the same duplicate-type
prototype limitation as above; the visible gain is limited to the header and to
structures that are used directly.

`tools/DumpTypes.java` shows the concrete case: the class structure embeds a
`Cmd_Channel_GetMemberListToC_data` with length 1440 (0x5a0), while the structure
rebuilt by `ApplyFieldNames` has length 124 (0x7c). They share a name and path, so
`replaceDataType` cannot tell them apart by name, and the decompiler keeps the
embedded copy. Naming fields in bodies would require removing the duplicate from the
project, which the prototype scripts do not support headlessly.

The duplicate types themselves remain (upstream discussion
<https://github.com/NationalSecurityAgency/ghidra/discussions/3431> describes them as a
prototype issue with only a manual GUI merge); the rebuild avoids them instead of
merging.

The `*_data` structures are a different story: the recovery creates them as
placeholder byte fields (`offset_0x0`, `field9_0xc`), not as typed members, because
the real members are `std::string`/`std::vector` objects. Naming those placeholders
changes nothing readable; they become useful only after the members are typed.

## What can still be improved, and how

- **MFC imports are by ordinal.** `mfc90.dll` imports have no names; mapping them
  requires the ordinal export list of that exact MFC build. Not implemented.
- **Local names in the recovered structures.** Fields are `field_0x10` until named.
- **Local variables.** Only by hand, per function, where it matters.

## Practical rules

- Trust the serializer, not the decompiler's types: the wire layout comes from the
  `Serialize`/`Deserialize` pair.
- When a name in `names/` disagrees with the code, fix the code reading first.
  No name in that file is an original symbol.
- Keep `docs/ADDRESSES.md` in sync when a function is renamed.
