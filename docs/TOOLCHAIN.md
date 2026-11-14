# VC9 compiler for function-level matching

`Tet4.exe` was built with **MSVC 9.0.30729.01** (Visual C++ 2008 SP1, 32-bit).
MinGW-w64 or a modern clang-cl cannot replace it for byte-level comparison: the
code generator and ABI differ even when the C++ source is equivalent. A standalone
reimplementation may use MinGW, but matching decompilation needs the original
compiler family and build.

The local setup is compile-only. It provides `cl.exe`, `c1.dll`, `c2.dll`, the VC9
headers, the VC9 CRT libraries and the Windows SDK 6.0A headers/import libraries.
It does not contain MFC/ATL headers, so a method that uses MFC types needs those
headers supplied separately or reconstructed.

## Fetch

```
https_proxy=http://127.0.0.1:10808 tools/fetch_msvc9.sh
```

The script downloads to `work/toolchains/` (gitignored), verifies:

| Component | SHA-256 |
|---|---|
| wibo 1.2.0 x86_64 | `13f86a2d618f0dbe67179d349625345eabf9b46450295cb4c904e49f6aff85af` |
| VC9 SP1 pack | `2544e8fb817421bd5a09fd4cc243ff0a0db6049cf1a15b92a7b4a3f1f6568e69` |

Nothing proprietary is stored in git or in the bundle. You are responsible for
being licensed to use the compiler.

## Verify

```
cd work/toolchains/msvc900sp1
PATH=/usr/bin:/bin ../wibo-x86_64 VC/bin/cl.exe
```

Expected banner:

```
Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 15.00.30729.01 for 80x86
```

Compile a Win32 translation unit:

```
TC="$PWD"
PATH=/usr/bin:/bin ../wibo-x86_64 "$TC/VC/bin/cl.exe" /c /O2 /MT /Z7 \
  "/I$TC/VC/include" \
  "/I$TC/Microsoft SDKs/Windows/v6.0A/Include" \
  source.cpp
```

The result is an i386 COFF object; `objdump -f` reports `pe-i386`.

## Limits

- wibo 1.2.0 cannot run `link.exe` (it aborts on `kernel32!lstrcmpiW`). Use `/c`
  and compare object code function by function; link in a native Windows VM only
  when a full executable is needed.
- The pack has no MFC/ATL headers. `CF5GameWnd`/`CTetSceneManager` methods that
  depend on MFC types need the original MFC 9 headers or a reconstructed subset.
- A byte match proves the generated instruction stream matches with relocations
  normalized; it does not prove the original source text.
