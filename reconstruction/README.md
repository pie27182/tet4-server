# Reconstruction

Goal: a structured, readable C++ reconstruction of the original Hangame Tetris
client, not a dump of Ghidra pseudocode. This tree holds only reviewed source and
metadata; generated pseudocode, objects and toolchains stay in `work/` (gitignored).

The reconstruction is built one vertical slice at a time. The first slice is the
scene chain that controls Single Mode: `CTetSceneManager`, its `Shadow` subclass,
the mode factory and the game-window crash site.

## Layout

```
reconstruction/
  include/tet4/scene/      reviewed headers
  src/scene/               reviewed C++ for the scene slice
  metadata/                address, role and provenance tables
  build/                   compile checks that use the original VC9 toolchain
```

Planned slices, in order:

1. scene manager and game window (this pilot);
2. game-room and start-game messages;
3. Tetris board and game loop;
4. protocol/model/controller classes;
5. UI, MFC message maps and remaining modules.

## Provenance

Every row in `metadata/*.tsv` has one of these levels:

| Level | Meaning |
|---|---|
| `observed` | read directly from bytes, RTTI, a vtable, or an exported symbol |
| `derived` | follows from observed facts, for example a role inferred from a vtable slot |
| `provisional` | working name for the reconstruction; the role is not proven |
| `inferred` | hypothesis that still needs a live or static confirmation |

Names recovered from MSVC RTTI keep their original spelling. Names invented for the
reconstruction are marked `provisional` and must not be presented as original.

## Build check

The client was built with MSVC 9.0.30729.01 (VC9 SP1). Fetch the exact compiler
once; see [`docs/TOOLCHAIN.md`](../docs/TOOLCHAIN.md):

```
https_proxy=http://127.0.0.1:10808 tools/fetch_msvc9.sh
```

Compile the pilot:

```
reconstruction/build/compile_pilot.sh
```

The result is an i386 COFF object in `work/reconstruction-pilot/`. wibo 1.2.0 is
compile-only: `link.exe` does not work, so functions are checked one at a time.
Address operands are checked with relocations normalised; a match is evidence for
the instruction stream, not for the original source text.

## Pilot result

`GetTetSceneManager` (original `FUN_005810D0`) is the first reconstructed
function. The original bytes are:

```
a1 e8 eb 64 00   mov eax, ds:0x64EBE8
c3               ret
```

VC9 SP1 compiles the C++03 pilot to:

```
a1 00 00 00 00   mov eax, ds:<relocation to g_tet_scene_manager>
c3               ret
```

The opcode and operand shape match after normalising the absolute address. This
is the pilot for the matching workflow; it does not yet prove the class layout.

## Rules

- Do not invent fields, offsets or message keys. Mark them `provisional` until a
  decompiler, a vtable or a live trace supports them.
- Do not commit generated `.c`, `.obj`, `.exe`, `.dll`, PDB or client files.
- A function enters `src/` only after its address, signature and role are in the
  metadata table.
- Prefer the original name from RTTI or a decorated export; otherwise use a
  descriptive provisional name.
