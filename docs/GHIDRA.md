# Documentation used for the reconstruction

Everything below was checked to resolve (HTTP 200) and is what the tools in this
repository rely on. Grouped by the question each source answers.

## Ghidra: API reference

- <https://ghidra.re/ghidra_docs/api/> — Javadoc root, all classes and scripts.
- [`HeadlessAnalyzer`](https://ghidra.re/ghidra_docs/api/ghidra/app/util/headless/HeadlessAnalyzer.html)
  — `analyzeHeadless`, `processLocal`, pre/post scripts. What `tools/export.sh` and
  `tools/recover_classes.sh` call.
- [`HeadlessOptions`](https://ghidra.re/ghidra_docs/api/ghidra/app/util/headless/HeadlessOptions.html)
  — `setPostScripts`, `setRunScriptsNoImport`; explains why `-process -noanalysis`
  works for re-running a script on an existing project.
- [`CppExporter`](https://ghidra.re/ghidra_docs/api/ghidra/app/util/exporter/CppExporter.html)
  — constructor `(DecompileOptions, createHeader, createFile, emitTypes, emitGlobals,
  excludeTags, tags)` and `export(File, DomainObject, AddressSetView, TaskMonitor)`.
  Used by `tools/ExportHeaders.java`.
- [`DemanglerUtil`](https://ghidra.re/ghidra_docs/api/ghidra/app/util/demangler/package-summary.html)
  — MSVC demangling package. Names such as `?Add@CMemberDataList@@...` come from here.
- `support/analyzeHeadlessREADME.md` inside the Ghidra install — the CLI manual that
  ships with the release.

## Ghidra: guides and class recovery

- [Improving Disassembly and Decompilation (PDF)](https://ghidra.re/ghidra_docs/GhidraClass/Advanced/improvingDisassemblyAndDecompilation.pdf)
  — official class: data types, vftables, `Auto Fill in Class Structure`, function
  definitions for virtual calls. The method behind `docs/READING.md`.
- [`RecoverClassesFromRTTIScript.java`](https://github.com/NationalSecurityAgency/ghidra/blob/master/Ghidra/Features/Decompiler/ghidra_scripts/RecoverClassesFromRTTIScript.java)
  — what the class recovery actually does: RTTI parsing, inheritance, member layout,
  typing `this`.
- [`RTTIWindowsClassRecoverer.java`](https://github.com/NationalSecurityAgency/ghidra/blob/master/Ghidra/Features/Decompiler/ghidra_scripts/classrecovery/RTTIWindowsClassRecoverer.java)
  — MSVC RTTI layout (`RTTICompleteObjectLocator`, class hierarchy descriptor, base
  class array) used to rebuild the class tree.
- [`FixUpRttiAnalysisScript.java`](https://github.com/NationalSecurityAgency/ghidra/blob/master/Ghidra/Features/MicrosoftCodeAnalyzer/ghidra_scripts/FixUpRttiAnalysisScript.java)
  — fills missing RTTI structures before recovery.
- [ghidra-data](https://github.com/NationalSecurityAgency/ghidra-data) — official Data
  Type Archives and Function ID databases (Win32/VS types, library signatures).
- Ghidra Change History (`Configurations/Public_Release/src/global/docs/ChangeHistory.md`)
  — behaviour changes of the RTTI scripts per release; important when upgrading.

## MFC and MSVC specifics

- [Reverse Engineering wiki: MFC](https://reverseengineering.wiki/index.php/Library:MFC)
  — `CRuntimeClass` layout, `AFX_MSGMAP`, ordinal imports from `mfcNN.dll`, `Afx:`
  window classes. Basis for `tools/scan_mfc.py`.
- [IDA Class Informer](https://github.com/kweatherman/IDA_ClassInformer_PlugIn) —
  reference implementation for scanning RTTI and MFC `CRuntimeClass`; the behaviour our
  Python scanner reproduces without IDA.
- [OOAnalyzer / Kaiju](https://github.com/CERTCC/kaiju) — class recovery when RTTI is
  absent. Not needed here (the client keeps RTTI), but the documented fallback.

## r2 and r2ghidra

- [r2ghidra](https://github.com/radareorg/r2ghidra) — the `pdg` command; class-qualified
  virtual methods such as `method.Cmd_Channel_GetMemberListToC.virtual_20`.
- [radare2 book](https://book.rada.re/) — `aaa`, `s`, `pdf`, `pdg`, scripting.

## Ordinal imports (checked)

Ghidra 12.2 already ships ordinal maps in
`Ghidra/Features/Base/data/symbols/win32/` (`mfc90.exports`, `mfc90u.exports`, ...) and
applies them when a module is imported. In `HgCom3.dll` the 56 `mfc90.dll` imports are
therefore already readable: the export contains `CStringT`, `AfxMessageBox`, `CWnd::*`
and similar names (1130 `CStringT` occurrences).

`tools/ApplyOrdinalExports.java` exists for the remaining cases: a runtime whose
`.exports` file is missing or whose DLL timestamp does not match, so every import still
shows as `Ordinal_N`. It reads the same XML and renames `Ordinal_<n>` symbols, demangling
the result:

```
analyzeHeadless <proj> <name> -process <module> -noanalysis -scriptPath tools \
    -postScript ApplyOrdinalExports.java mfc90.dll \
    /opt/ghidra/Ghidra/Features/Base/data/symbols/win32/mfc90.exports [dry]
```

A dry run on `HgCom3.dll` reports 6566 ordinals in the map and zero `Ordinal_N` symbols
left for `mfc90.dll`, which confirms the built-in mapping is active. The 12 remaining
`Ordinal_N` names in that module do not belong to `mfc90.dll` (no matching import
ordinal in any client module), so they are left as is.

## Function ID databases

`ghidra-data` publishes `vsOlder_x86.fidb` (Visual Studio up to 2008) and newer ones.
They let Function ID recognise statically linked CRT/STL code. Installing one means
copying the `.fidb` into the Ghidra installation's `Features/FunctionID/data`, which is
root-owned with the package; on Arch this is a manual step, not a pacman package.

## How this repository uses them

| Tool | Documentation | Our script |
|---|---|---|
| Headless analysis, post scripts | `HeadlessAnalyzer`, `HeadlessOptions` | `tools/export.sh`, `tools/recover_classes.sh` |
| RTTI class recovery | `RecoverClassesFromRTTIScript`, `RTTIWindowsClassRecoverer` | `tools/recover_classes.sh` |
| C++ header export | `CppExporter` | `tools/ExportHeaders.java` |
| MFC metadata | RE wiki MFC page, Class Informer | `tools/scan_mfc.py` |
| Demangled names | `DemanglerUtil`, `ghidra-data` | Ghidra analysis; `names/*.tsv` |
| Spot decompilation | r2ghidra, radare2 book | `r2 -qc "...; pdg"` |
