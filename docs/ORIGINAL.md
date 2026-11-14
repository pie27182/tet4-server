# What the original client is

## The game

Hangame Tetris launched on 23 October 2008. NHN stated that it developed the
online version in-house, including planning, design, sound and the client, and
that the release added a Single Mode for solo practice:

- NHN press release, 2008-10-15:
  <https://www.navercorp.com/media/pressReleasesDetail?seq=26819>
- Hard Drop wiki, game rules and platform:
  <https://harddrop.com/wiki/Tetris_Hangame> (10x22 playfield, SRS, six next
  pieces, Windows 2000/XP/Vista)

No public source code or official PDB is available. The reverse-engineering
material is the shipped 1.3.4 client.

## The binary stack

| Component | What the binary shows |
|---|---|
| `Tet4.exe` | native 32-bit PE, C++ with MFC 9.0, MSVC 9.0.30729.01 (Visual C++ 2008 SP1), VC90 CRT |
| `h-tetra.exe` | .NET launcher (C#), 54 types / 278 methods |
| RTTI | MSVC `.?AV...` type descriptors, complete object locators, class hierarchies and vtables |
| Debug info | CodeView RSDS path `i:\KOREA_HANGAME\output\Tet4.pdb`, GUID `cd88edc5-1b86-674b-987b-408950a7e71d`, age 1; the PDB itself is missing |
| Graphics | `GcDxbase.dll`, `GcDxbase_3d.dll`, `HanVM2d.dll`, `HanVM3d.dll`, `neon4.dll`, `neon9.dll`, `HgAniGm3*.dll` |
| Audio | FMOD plus `HgSoundOut.exe` |
| Network | `HgSock3.dll`, `HgCom3.dll`, `HgModel3.dll`, `HgCtr3.dll`, `CDSClientConnector.dll`, `TPackClientConnector.dll`, `XInNetwork.dll`, `XStream.dll` |

The client is therefore not a Unity/Unreal application and not a browser game.
It is an MSVC C++/MFC desktop program with Hangame's own graphics and network
libraries.

## Reconstruction method

Exact source restoration is impossible: the binary does not contain comments,
local names, macros or the original file layout, and different source texts can
compile to the same instructions. The practical target is a **matching
decompilation**:

1. recover functions, strings, xrefs and call graphs;
2. recover classes, inheritance, vtables and fields from MSVC RTTI and call sites;
3. write C++ and compile it with the original compiler;
4. compare the generated code with the original function, with addresses and
   relocations normalised;
5. keep names and types only when an artifact or a live trace supports them.

Quality levels used in this repository:

| Level | Meaning |
|---|---|
| readable | the pseudocode is understandable |
| typed | `this`, arguments, fields and containers are recovered |
| semantic | the same operations, operands and control flow are present |
| machine-match | the function's machine code matches after normalisation |

The active matching-decompilation workbench is `decomp.anything` (a fork of the
discontinued decomp.wtf), which supports PE32/MSVC and an REA bridge:
<https://github.com/giveen/decomp.anything>. For class recovery, the relevant
Ghidra implementation is `RTTIWindowsClassRecoverer`:
<https://github.com/NationalSecurityAgency/ghidra/blob/master/Ghidra/Features/Decompiler/ghidra_scripts/classrecovery/RTTIWindowsClassRecoverer.java>.
The general MSVC RTTI layout is summarised at
<https://reverseengineering.wiki/index.php/Technique:Recovering_C%2B%2B_class_metadata>.

## Pipeline in this repository

1. Full REA/Ghidra dump of every native module: `docs/DECOMPILATION.md`.
2. RTTI class/vtable inventory: `docs/RTTI.md`.
3. Ghidra class recovery for fields, `this` types and method signatures:
   `tools/recover_classes.sh`.
4. Exact VC9 SP1 compiler for `/c` matching: `docs/TOOLCHAIN.md`.
5. Curated `src/`/`include/` tree only after the metadata is reviewed.

The raw dumps and generated headers stay in `work/` and never enter git.
