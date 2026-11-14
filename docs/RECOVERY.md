# Readable recovery order

The readable C++ tree is built from metadata, not from hand-written guesses.
DLLs come first; `Tet4.exe` is recovered last, when the shared libraries and the
name/field maps are already stable.

## Queue

`tools/recover_all_dlls.sh` runs two Ghidra workers with separate projects and a
2 GiB heap each:

```
JOBS=2 HEAP=2048M GHIDRA_MAX_CPU=2 tools/recover_all_dlls.sh
```

Order: protocol and small modules first, UI next, graphics/audio and the largest
modules last. `Tet4.exe` is deliberately excluded and run separately.

Current logs:

```
work/logs/recover-dlls.status
work/logs/recover-<module>.log
```

## Per-module pipeline

For every module `tools/recover_classes.sh` runs, headless:

1. `FixUpRttiAnalysisScript` — fills missing MSVC RTTI structures;
2. `RecoverClassesFromRTTIScript` — class names, inheritance, vtables, `this`
   types, constructor/destructor candidates and member structs;
3. `ApplyNameMap` — applies the per-module name map;
4. `ApplyFieldNames` — applies the per-module field map;
5. `ExportAllFunctions` — decompiled C and an address index;
6. `ExportHeaders` — a C++ header with the recovered classes and fields.

Output: `work/decompiled-classes/<module>.c`, `.index.tsv`, `.h`.

## Name maps

`tools/rtti_names.py` merges the RTTI slot inventory with the curated
`names/<module>.tsv` maps. Curated names win; RTTI fills the rest. Example:

```
0x609010e0  CBaseLobbyModel::OnAttached
0x60903110  CChannelListLobbyModel::_SelectChannel_Tetris
```

`tools/scan_mfc.py` appends MFC handlers recovered from `AFX_MSGMAP_ENTRY`
records (`OnPaint`, `OnTimer`, ...). The generated maps live in
`work/rtti/names/<module>.tsv` and are passed to class recovery through
`NAMEMAP`.

## Readability rules

- Class names come from MSVC RTTI; method names from vtables, exports/imports
  and MFC message maps.
- Fields are named only when a constructor, a call site or a live trace supports
  the meaning. Wrong names are worse than `field_0x...`.
- Keep `__thiscall`/`this` types from Ghidra class recovery; do not transplant
  x86 conventions from another ABI.
- Apply data types before judging the pseudocode: a typed struct removes
  `*(Type *)&this->field_0x...` casts.
- Duplicate Ghidra structs are a known problem; field names can stay in the
  header while the function body still shows offsets. Fix the duplicates before
  exporting the readable source.
- Verify important functions with the exact VC9 SP1 compiler (`docs/TOOLCHAIN.md`);
  a readable function is not automatically a machine match.

## Sources

- Ghidra RTTI recovery, `RTTIWindowsClassRecoverer`:
  <https://github.com/NationalSecurityAgency/ghidra/blob/master/Ghidra/Features/Decompiler/ghidra_scripts/classrecovery/RTTIWindowsClassRecoverer.java>
- Ghidra class recovery overview:
  <https://deepwiki.com/NationalSecurityAgency/ghidra/2.7-c++-class-recovery-from-rtti>
- `CppExporter` and per-function exporters:
  <https://github.com/edmcman/GhidraFunctionCPPExporter>
- Matching decompilation workbench:
  <https://github.com/giveen/decomp.anything>
- MSVC class/vtable recovery notes:
  <https://reverseengineering.wiki/index.php/Technique:Recovering_C%2B%2B_class_metadata>
