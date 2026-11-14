# Alternatives for MSVC class recovery

The bottleneck is not finding RTTI classes — that takes seconds. The bottleneck is
building fields, `this` types and signatures, which needs a decompiler.

## Tested locally

### SuperGhidra (free, AGPL-3.0)

Standalone Python; no Ghidra or JVM for RTTI/MFC recovery:

```
python3 -m venv /tmp/sg-venv
. /tmp/sg-venv/bin/activate
pip install superghidra
superghidra rtti-recover client/Tet4.exe -o tet4-classes.json
```

Measured on `Tet4.exe` (Python 3.14): **1 second**, 441 KB JSON,
**552 RTTI classes + 1 MFC runtime class**. The JSON has class name, mangled name,
type descriptor, bases, multiple/virtual inheritance, object size (often null),
vtable address, offset in class and function addresses.

It does **not** recover method names, fields or signatures. It is the fastest
free way to get the class/vtable hierarchy and MFC `CRuntimeClass` records.

## Comparison

| Tool | License | Hierarchy/vtables | Methods/fields | Speed | Notes |
|---|---|---|---|---|---|
| **SuperGhidra** | AGPL-3.0 | yes | no | seconds | standalone Python, no JVM |
| **IDA Pro + built-in RTTI + PyClassInformer/Class Informer** | commercial | yes | vtable structs + HexRaysPyTools | seconds/minutes | best MSVC RTTI workflow if licensed |
| **Binary Ninja 4.2+** | commercial | yes | class types + ClassyPP/Class Informer port | seconds/minutes | built-in MSVC RTTI extraction |
| **Ghidra RecoverClassesFromRTTIScript** | Apache-2.0 | yes | fields, `this`, ctors/dtors | hours on this binary | free; can hang in `createMissingFunctions` |
| **OOAnalyzer / Pharos / Kaiju** | free | yes | classes, methods, fields | 30 s–22.7 h; median 0.2 h | 32-bit MSVC; Prolog; can be slower than Ghidra |
| **PDB + llvm-pdbutil** | free | exact | exact names/types | seconds | only if `Tet4.pdb` exists; it does not |
| **CLASScanner** | research | yes | fields/methods/inheritance | ~10% of prior tools | 2026 paper; not a public tool |
| **decomp.anything** | MIT | matching workbench | no class recovery | n/a | uses Ghidra/REA for analysis |

## Recommendation

1. Use **SuperGhidra** for the class/vtable/MFC map (seconds).
2. Use **Ghidra fast** (`work/recovery-kit/run-fast.sh`, `FIXUP_PROGRAM=false`)
   for fields and `this` types without the pathological pseudo-disassembly.
3. If the friend has **IDA Pro**, use its RTTI plugin plus PyClassInformer/
   Class Informer; this is the fastest path to a named class tree.
4. **Binary Ninja 4.2+** is a strong alternative if already licensed.
5. Try **OOAnalyzer** only for missing fields, and only with a time budget; it is
   not guaranteed to be faster.
6. A matching PDB remains the best possible shortcut.

The current Ghidra `Tet4.exe` process is not affected by these tests; it keeps
running in the background.
