# Reproducing the work from this repository

Step by step: what to install, which client files are needed, how to decompile, how to
run the local servers against the real client, and what you should see. Every other
document refers here for the procedure. The project status is in `README.md`, the
plan in `docs/ROADMAP.md`.

## 0. Requirements

Versions are the ones this work was done with. Other versions were not tested.

| Need | Used for | Tested with |
|---|---|---|
| Linux, Wayland session | recording and screenshots | niri, kernel 7.2 |
| Wine | running `Tet4.exe` | wine-11.21 |
| Python 3 (standard library only for the repository) | servers, tests, tools | 3.14.10 |
| `wf-recorder` | screen recording in `live_check.py` | 0.6.0 |
| `ffmpeg` | frame extraction, scene detection | n9.0.2 |
| `grim` | screenshots (`tools/` and ad-hoc checks) | any recent version |
| Ghidra 12.2 (package or zip) | decompilation (`tools/export_all.sh`) | 12.2, package `ghidra` in `/opt/ghidra` |
| OpenJDK (for Ghidra) | Ghidra runtime | 27.0.1 |
| `pefile`, `capstone` (in `.venv`) | `tools/disasm.py` | pefile 2024.8.26, capstone 5.0.7 |

The client files are needed for everything except the tests. See section 2.

Set up the Python environment for the disassembler once (the repository has no other
dependencies):

```
python3 -m venv .venv
.venv/bin/pip install pefile capstone
```

Use `.venv/bin/python` for `tools/disasm.py`. Other tools use plain `python3`.

Disk space, all inside the repository (git-ignored): the client folder about 190 MB, a
patched copy another 190 MB, the decompiled output about 40 MB, and Ghidra projects
several hundred MB while an export runs (Ghidra itself is installed outside). The export tools
write only inside `work/`. The live run uses Wine's default prefix, `~/.wine`, which is
outside the repository (section 5). Section 8 explains the quota errors that `/tmp` can
cause.

## 1. Tests

```
python3 -m unittest discover -s tests -t .
```

Expected: `OK`, 45 tests. The protocol-layout and game-engine tests do not need the client.

## 2. Client files

The client is the official Hangame Tetris distribution, version 1.3.4. The repository
does not contain it and cannot. Copy the whole contents of your client folder into `client/` in the repository, so that
`client/Tet4.exe` exists and the DLLs, `Tet4/`, `common/` and `Sysfiles/` sit directly
under `client/`. Do not link it from elsewhere: a copy in place is what the tools expect.
The folder is git-ignored; nothing in `client/` is committed or put into the bundle.
Every tool reads from there by default.

- `files.sha256.json` in the folder lists every file (2068 entries) with its sha256.
- `tools/check_client.py` verifies them:

  ```
  python3 tools/check_client.py
  ```

  Expected: `missing: 0  changed: 0`, `OK`, exit status 0. Otherwise you do not have the
  original client and the results will not match.

What the work used: the whole folder. We never tested a smaller set. `docs/FILES.md`
describes what each file is. Files needed to start the game: `Tet4.exe`, the DLLs, and
the `Tet4/`, `common/` and `Sysfiles/` folders.

## 3. Patched copy

```
python3 tools/patch_client.py
python3 tools/check_client.py client-patched
```

The first command reads `client/` and writes `client-patched/` (both git-ignored), then
checks the result against the sha256 of the patched `Tet4.exe` used in the experiments.
The second command, run on `client-patched/`, must report only `changed: 1` (`Tet4.exe`).

Why: in our runs the unmodified client sends no TPack requests to `127.0.0.1:10454`
(`docs/CLIENT.md`, section 4). The patch replaces three TPack hostnames with
`127.0.0.1` (three byte ranges, see `tools/patch_client.py`). Both copies go on to the
channel stage and both end in the crash described in section 7, so the patch does not
explain the crash.

## 4. Startup string

Nothing to do. `tools/live_check.py` uses `tools/bootstrap-sample.txt` by default.

The launcher `h-tetra.exe` reads the same kind of string from `bootstrap.txt` in the
client folder. The string is a sequence of `key:length=value` fields separated by `&`
after a `metp://127.0.0.1:15000//go/go;` header. It must start with
`metp://127.0.0.1:15000/` and include the TPack port `k602e:5=10454`. `k3e` is the
account name (`test`), `k8e` the ticket.

## 5. Live run

```
python3 tools/live_check.py
```

The default client is `client-patched/`, and the output goes to `live-runs/<time>/`
(both git-ignored). Wine uses its default prefix, `~/.wine`; the repository does not
create or change a prefix of its own.

The script starts the TPack, CDS, channel and local game-socket servers from this repository, starts
`wf-recorder` (region `0,0 1536x864`, 15 fps, 1280x720 output), then starts the client
under Wine. Close the game when you are done: the recording stops after Wine has
exited, and the script saves `session.mp4` and `frames/` (one PNG per visual change).
Options: `--client-dir`, `--out`, `--bootstrap`, `--geometry`, `--fps`, `--scene` (the
frame-change threshold, default 0.02). Run `python3 tools/live_check.py --help`.

Expected in the console, in this order (timestamps will differ):

```
TPack 0x0cf7bd9a ... AuthSession ctx=1
TPack 0x0b60835a ... LoginTPack ctx=2
CDS select table=COMMON tid=1
channel frame id=0x0365c03a          -> sent Cmd_AuthToC
channel frame id=0x0fab330a          -> sent Cmd_Channel_GetUserIdToC for member b'test'
channel frame id=0x0696068a          -> sent Cmd_Channel_EnterChannelToC probe
channel frame id=0x09d0057a          (Cmd_LayerAlignment)
channel frame id=0x0ae3bbda          -> sent empty Cmd_Channel_GetMemberListToC
channel frame id=0x0dda299a          -> sent empty Cmd_Channel_GetRoomListToC
```

Expected on screen: the lobby (buttons 내 아이템, 상점, 싱글모드, the room list) with
the channel group header "초보~고수 등급 입장 가능". Depending on the client's state, the
channel row "1 (0/100)" with an enter button may appear under it, and a "connecting"
dialog with a cancel button may cover the lobby. `docs/CLIENT.md` describes both.


### Reproduce the old channel-row refresh behavior

The earlier run that showed the channel row `1 (0/100)` used a channel endpoint that
completed the 48-byte secure handshake but sent **no channel application replies**.
The client then abandoned that connection and requested the CDS directory again
(observed as `tid=2`); the row appeared after that second CDS response. This is a
UI-refresh fallback, not proof that channel entry or the lobby works.

To reproduce that exact server behavior without changing the normal full mode:

```sh
python3 tools/live_check.py --channel-mode discovery-only --out live-runs/channel-row-refresh
```

Expected sequence: CDS `tid=1`, channel handshake response, no `AuthToC` or other
channel reply, client closes the channel socket, then CDS `tid=2`. Check the recorded
frames for the channel row `1 (0/100)` and its `입장` button. The old run showed this
result; the mode is now available for a fresh confirmation against the current client.
Use `--channel-mode full` (the default) for the newer channel/member/room-list path.

After the room list loads, click the client's Single Mode button. The next expected
server-side observations are an AutoEnter request, the server reply pointing at
`127.0.0.1:15002`, a new game-socket connection and its secure handshake. The game
listener currently saves decoded frame bodies as binary files in
`live-runs/<run>/game-frames/` without replying; those files are the evidence needed to
implement the game login/start sequence. They are local and ignored by Git. Use a test
account because captured frames may contain session data.

If the client never reaches `CDS select`, check that `--client-dir` is the patched copy
and that no Wine process is still running (`wineserver -k`).

## 6. Decompilation

Every address in `docs/CLIENT.md` and `docs/ADDRESSES.md` comes from these exports.

### 6.1 Ghidra

Install Ghidra 12.2 with your package manager (Arch: `pacman -S ghidra`, which puts it in
`/opt/ghidra`) or unzip the release from
<https://github.com/NationalSecurityAgency/ghidra/releases> into `work/`. The work was
done with OpenJDK 27.0.1; other versions were not tested.

`tools/export.sh` looks for `$GHIDRA`, then `/opt/ghidra/support/analyzeHeadless`, then
`work/ghidra_12.2_PUBLIC/support/analyzeHeadless`. Nothing is installed by the
repository: Ghidra's settings and cache go to `work/xdg/`, and the Ghidra projects to
`work/ghidra/` (both git-ignored).

### 6.2 Readable C++: class recovery

Ghidra can restore C++ classes, vtables and `this` types from the MSVC RTTI that
survives in these binaries:

```
tools/recover_classes.sh client/HgCom3.dll
```

Output goes to `work/decompiled-classes/` in the same `.c` + `.index.tsv` format.
The script runs, headless: `FixUpRttiAnalysisScript` (fills missing MSVC RTTI),
`RecoverClassesFromRTTIScript` (classes, vtables, member structs, typed `this`) and
`ExportAllFunctions`. Example effect: `FUN_601301d0(void *this, ...)` becomes
`vfunction6(Cmd_Channel_GetMemberListToC *this, ...)`.

`recover_classes.sh` also applies `fields/<module>.tsv` when it exists (structure
field names) and uses the script directories of the installed Ghidra.

Names that did not survive in the binary are reconstructed in `names/<module>.tsv`
(`<image address> <TAB> <name>`), and `recover_classes.sh` applies them when the file
exists. `names/HgCom3.dll.tsv` covers the serializers, deserializers and converters of
the protocol messages. These are our names, not original symbols; the header of each
map says so. Add an entry after identifying a function and the name appears in the
export and at every call site.

For quick spot reads, `r2` with the r2ghidra plugin prints the same functions with
class-qualified names:

```
r2 -e bin.relocs.apply=true -qc "aaa; s 0x601301d0; pdg" client/HgCom3.dll
```

### 6.3 Export every module

```
tools/export_all.sh
```

This runs `tools/export.sh` for the 29 modules in the list (see the script) and writes:

- `work/decompiled/<module>.c`: the decompiled C of every function;
- `work/decompiled/<module>.index.tsv`: entry address, size, name and signature;
- `work/logs/export-<module>.log`: the Ghidra output for each module.

It takes a long time (the 18683 functions of `Tet4.exe` are the largest part) and about
40 MB of disk. It prints `ok` or `FAIL` for each module and exits non-zero if any failed.

### 6.4 One module

```
tools/export.sh client/HgSock3.dll                 # output: work/decompiled
tools/export.sh client/HgSock3.dll /some/outdir    # another output folder
```

`tools/export.sh` runs Ghidra headless with this command, which is the exact one used:

```
work/ghidra_12.2_PUBLIC/support/analyzeHeadless work/ghidra <module> \
    -import client/<module> -overwrite \
    -scriptPath tools -postScript ExportAllFunctions.java work/decompiled
```

The script imports the module with Ghidra's default analysis and runs
`tools/ExportAllFunctions.java`, which writes `<module>.c` and `<module>.index.tsv` for
every function. A second export of `HgSoundOut.exe` gave an identical index; the other
modules were not compared this way.

Expected function counts (lines of the index minus the header):

| Module | Functions | Module | Functions |
|---|---|---|---|
| Tet4.exe | 18683 | HgKor3.dll | 27 |
| HgCom3.dll | 4219 | HgModel3.dll | 798 |
| HgTool3.dll | 3176 | HgSock3.dll | 211 |
| HgView3.dll | 1262 | HgCtr3.dll | 351 |
| HgDlg3.dll | 1387 | CDSClientConnector.dll | 888 |
| HGF5V.dll | 918 | TPackClientConnector.dll | 552 |
| HgFrm3.dll | 515 | XInNetwork.dll | 1731 |
| HgAniGm3.dll | 956 | XSystem.dll | 930 |
| HgAniGm3_16Bit.dll | 947 | XStream.dll | 346 |
| GAS.dll | 804 | XPlatform.dll | 182 |
| IRIA.dll | 1261 | XDebug.dll | 639 |
| CasualComm.dll | 447 | GcDxbase.dll, GcDxbase_3d.dll | 468 each |
| HgAvtr3.dll | 688 | HgSoundOut.exe | 110 |
| HgBoard3.dll | 393 | ipcHani.dll | 226 |

Two functions fail to decompile, both outside the protocol: `HgTool3.dll` (`OnPaint`,
window drawing) and `IRIA.dll` (an advertising function). The export writes the line
`DECOMPILE FAILED` for them.

Look up an address or a name:

```
tools/find_function.py 0x606041d0 --show
tools/find_function.py GenerateKey
```

Names given by this project (for example `BuildChannelList`) are not in the export.
The export has `FUN_60903600`; `docs/ADDRESSES.md` gives both where they matter.

Ghidra's decompiler is not always right about constants: `0x60928388` is a `double`
(0.1) although Ghidra prints it as a float. Check the instructions when a constant
matters, with `tools/disasm.py`:

```
.venv/bin/python tools/disasm.py client/HgSock3.dll 0x606041d0 --count 20
```

## 7. Known problems

- **The client crash is not yet explained.** Earlier runs of the old server
  (before the EnterChannelToC reply) ended about 2–3 s after
  `Cmd_LayerAlignment` and `Cmd_Channel_ExitChannelToS`, with Wine
  `Exception c0000005`. The updated server progresses to GetMemberListToS, but the
  full member/room-list response path has not yet been live-verified. Repeat the run
  with the current branch before deciding whether the crash remains.
- **Empty member and room lists are probes.** Their top-level serializers and vector
  counts are recovered, but the client must be run to confirm it accepts the empty
  vectors and proceeds to Single Mode entry.
- **Single Mode is not implemented yet.** The roadmap tracks room entry, game-state
  initialization, gameplay and game-end messages. The remote TLS gateway is not needed
  for the local protocol path.
- **Some runs show the channel row and some do not.** The CDS reply is byte-identical
  in both cases. In the historical handshake-only run, the client issued a second CDS
  request (`tid=2`) after abandoning the channel socket, and the row appeared after
  that response. This correlates visibility with the refresh but does not prove the
  exact UI invalidation mechanism; reproduce it with `--channel-mode discovery-only`
  as described in section 5.

## 8. Troubleshooting

- **`Disk quota exceeded` or `Unable to lock project` during an export.** Both mean the
  user quota is used up. `/tmp` is a tmpfs with a user quota, so the first thing to
  check is `df -h /tmp` and your own files there. The tools use `work/` only, so the
  quota is for the disk the repository is on. Ghidra also rejects project paths with a
  dot-prefixed name, so do not put the repository in such a folder.
- **Old Wine processes.** If the client does not start, or starts with a stale
  session, run `wineserver -k` and check that the ports 10454, 15000, 15001 and 15002 are free
  (`ss -ltn`).
- **`live_check.py` stops with `No such file or directory`.** The startup string is
  read from `--bootstrap` (default `tools/bootstrap-sample.txt`). Give a path that
  exists.

## 9. Recording a different session

Use the same command with another `--out`. Use a test account. Do not commit recordings,
screenshots or logs containing real data.
