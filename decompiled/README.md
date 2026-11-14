# Decompilation output

This directory is a snapshot of the analysis of the original Hangame Tetris
1.3.4 client. It is **derived output**, not original source code. The client
binaries themselves are not in this repository (see `client/` locally and
`docs/FILES.md`).

The snapshot was produced from the unmodified PE files with:

- Ghidra headless (REA provider) for the full function dump;
- Ghidra `RecoverClassesFromRTTIScript` for class/field recovery;
- the repository's RTTI parser (`tools/rtti_inventory.py`) for vtables and
  class hierarchies;
- name maps from RTTI, exports and MFC metadata (`tools/rtti_names.py`,
  `tools/scan_mfc.py`).

No PDB was available (`Tet4.pdb` is absent), so names and types are recovered,
not exact.

## Contents

| Path | What it is | Size |
|---|---|---|
| `rea-full.tar.gz` | Complete REA per-function dump for all 33 native modules | 24 MB compressed |
| `rea-metadata/` | `all-functions.tsv` and `SUMMARY.md` from the same dump | 6.2 MB |
| `ghidra/` | Consolidated Ghidra C/H/index for the key modules, including `Tet4.exe`, `HgCom3.dll`, `HgCtr3.dll`, `HgModel3.dll`, `HgSock3.dll`, `HgKor3.dll`, `TPackClientConnector.dll`, `XInNetwork.dll`, `XStream.dll`, `CDSClientConnector.dll` | 26 MB |
| `ghidra-extra/` | Consolidated `.c`/`.index.tsv` for the 19 remaining modules (older export; no `.h`), so every native module has a single-file text dump | 16 MB |
| `framework/` | Focused decompilation of `PC_ConvertM2X` / `PC_ConvertX2M` and the batch-format note | 16 KB |
| `classes/` | Per-DLL class recovery: `*.h`, `*.c`, `*.index.tsv` for 32 modules | 71 MB |
| `rtti/` | Class/vtable inventory, all 2,352 vtables and 33,871 slots, plus 30 generated skeleton headers and name maps | 5.9 MB |

The full REA archive contains:

- 79,521 indexed functions;
- 68,470 written function bodies;
- 11,049 external/thunk entries;
- 2 functions whose bodies could not be written
  (`HgTool3.dll CMyInfoCtrl::OnPaint` at `0x60721170` and
  `IRIA.dll FUN_10002430` at `0x10002430`).

`rea-full.tar.gz` SHA-256:
`725a2c88266849778fd70a42a533d16f2ce3561575a10ae400ac2b4ae1a42d8b`.

Extract it with:

```sh
tar -xzf decompiled/rea-full.tar.gz -C work/
```

That recreates `work/decompiled-rea/` with one directory per module,
`all-functions.tsv` and `SUMMARY.md`.

## Class recovery coverage

All 32 DLLs completed with `rc=0`. The `Tet4.exe` class-recovery pass was
still running when this snapshot was taken, so `classes/` does **not** contain
`Tet4.exe.h`/`.c`/`.index.tsv`. The `Tet4.exe` function bodies and the RTTI
class hierarchy are present in `ghidra/` and `rtti/`; only the Ghidra
field/`this` recovery for `Tet4.exe` is missing.

The largest class files are `HanVM3d.dll.h` (about 1.7 MB / 1,068 classes) and
`HgCom3.dll.h` (about 1.2 MB / 757 classes).

## Reading order

1. `rtti/all-classes.tsv`, `rtti/all-slots.tsv` — class list, bases, vtable
   addresses and every virtual slot.
2. `ghidra/Tet4.exe.h` and `ghidra/Tet4.exe.index.tsv` — class/function index.
3. `ghidra/Tet4.exe.c` — the main client logic.
4. `ghidra/HgCom3.dll.c`, `HgModel3.dll.c`, `HgCtr3.dll.c` — protocol classes,
   lobby models and controllers.
5. `ghidra-extra/<module>.c` — consolidated text for the remaining 19 modules
   (`GAS`, `HGF5V`, `HgView3`, `HgDlg3`, `IRIA`, `neon`, DirectX wrappers, etc.).
6. `classes/<module>.h` — recovered fields, `this` types and signatures for a
   specific DLL.
7. `rea-full.tar.gz` — per-function fallback when the consolidated file is
   hard to navigate.

The REA dump is the canonical per-function record. The consolidated `ghidra/`
files are easier to browse but cover only the ten key modules.

## Reproducing

```sh
tools/export_decompilation.sh        # refresh this directory from work/
tools/rea_summary.py                 # rebuild all-functions.tsv + SUMMARY.md
tools/reconstruct_all.sh             # Ghidra consolidated export
tools/recover_all_dlls.sh            # RTTI class recovery, all modules
```

The exact client hashes are listed in `client/files.sha256.json`; the toolchain
is documented in `docs/TOOLCHAIN.md`.

## Legal note

The decompiled text is a transformation of the user's own copy of the client
for interoperability and preservation. It is not the original source, it is not
guaranteed to compile, and it must not be presented as official Hangame code.
Do not commit the original executables, DLLs, captures or session material.
