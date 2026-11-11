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
| Ghidra (`analyzeHeadless`) | decompilation (`tools/export.sh`) | 12.2 PUBLIC |
| OpenJDK (for Ghidra) | Ghidra runtime | 27.0.1 |
| `pefile`, `capstone` | disassembly checks in ad-hoc analysis (not used by any repo tool) | pefile 2024.8.26, capstone 5.0.7 |

The client files are needed for everything except the tests. See section 2.

Disk space: the client folder is about 190 MB, a patched copy of it another 190 MB,
and the decompiled output about 40 MB. Ghidra projects are several hundred MB while
an export runs. `/tmp` is often a small tmpfs with a per-user quota; use a directory on
a disk with room (see section 8).

## 1. Tests

```
python3 -m unittest discover -s tests -t .
```

Expected: `OK`, 17 tests. The tests use byte vectors from captured runs and do not need
the client.

## 2. Client files

The client is the official Hangame Tetris distribution, version 1.3.4. The repository
does not contain it and cannot. You need your own copy of the folder.

- `files.sha256.json` in the folder lists every file (2068 entries) with its sha256.
- `tools/check_client.py` verifies them:

  ```
  python3 tools/check_client.py ~/h-tetra-client
  ```

  Expected: `missing: 0  changed: 0`, `OK`, exit status 0. Otherwise you do not have the
  original client and the results will not match.

What the work used: the whole folder. We never tested a smaller set. `docs/FILES.md`
describes what each file is. Files needed to start the game: `Tet4.exe`, the DLLs, and
the `Tet4/`, `common/` and `Sysfiles/` folders.

## 3. Patched copy

```
python3 tools/patch_client.py ~/h-tetra-client ~/h-tetra-client-patched
python3 tools/check_client.py ~/h-tetra-client-patched
```

The first command writes a new folder and checks the result against the sha256 of the
patched `Tet4.exe` used in the experiments. The second must report only `changed: 1`
(`Tet4.exe`).

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
python3 tools/live_check.py --client-dir ~/h-tetra-client-patched --out ~/live-runs/first
```

The script starts the TPack, CDS and channel servers from this repository, starts
`wf-recorder` (region `0,0 1536x864`, 15 fps, 1280x720 output), then starts the client
under Wine. Close the game when you are done: the recording stops after Wine has
exited, and the script saves `session.mp4` and `frames/` (one PNG per visual change).
Options: `--geometry`, `--fps`, `--scene` (the frame-change threshold, default 0.02).

Expected in the console, in this order (timestamps will differ):

```
TPack 0x0cf7bd9a ... AuthSession ctx=1
TPack 0x0b60835a ... LoginTPack ctx=2
CDS select table=COMMON tid=1
channel frame id=0x0365c03a          -> sent Cmd_AuthToC
channel frame id=0x0fab330a          -> sent Cmd_Channel_GetUserIdToC for member b'test'
channel frame id=0x0696068a          (Cmd_Channel_EnterChannelByUserIdToS, no reply sent)
channel frame id=0x09d0057a          (Cmd_LayerAlignment)
channel frame id=0x0a75af8a          (Cmd_Channel_ExitChannelToS)
```

Expected on screen: the lobby (buttons 내 아이템, 상점, 싱글모드, the room list) with
the channel group header "초보~고수 등급 입장 가능". Depending on the client's state, the
channel row "1 (0/100)" with an enter button may appear under it, and a "connecting"
dialog with a cancel button may cover the lobby. `docs/CLIENT.md` describes both.

If the client never reaches `CDS select`, check that `--client-dir` is the patched copy
and that no Wine process is still running (`wineserver -k`).

## 6. Decompilation

Every address in `docs/CLIENT.md` and `docs/ADDRESSES.md` comes from these exports.

```
export GHIDRA=~/ghidra_12.2_PUBLIC/support/analyzeHeadless
OUT=~/tet4-clean-re/decompiled
for m in Tet4.exe HgSock3.dll HgCom3.dll HgModel3.dll HgCtr3.dll CDSClientConnector.dll \
         TPackClientConnector.dll XInNetwork.dll XStream.dll XSystem.dll XPlatform.dll \
         CasualComm.dll GAS.dll HgAvtr3.dll HgBoard3.dll HgDlg3.dll HGF5V.dll HgFrm3.dll \
         HgKor3.dll HgSoundOut.exe HgTool3.dll HgView3.dll ipcHani.dll IRIA.dll \
         HgAniGm3.dll HgAniGm3_16Bit.dll GcDxbase.dll GcDxbase_3d.dll XDebug.dll; do
  tools/export.sh ~/h-tetra-client/$m $OUT
done
```

`tools/export.sh` runs Ghidra headless, imports the module with its default analysis,
and runs `tools/ExportAllFunctions.java`. For each module it writes `<module>.c` (the
decompiled C) and `<module>.index.tsv` (entry, size, name, signature) into `OUT`.

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
tools/find_function.py ~/tet4-clean-re/decompiled 0x606041d0 --show
tools/find_function.py ~/tet4-clean-re/decompiled GenerateKey
```

Names given by this project (for example `BuildChannelList`) are not in the export.
The export has `FUN_60903600`; `docs/ADDRESSES.md` gives both where they matter.

Ghidra's decompiler is not always right about constants: `0x60928388` is a `double`
(0.1) although Ghidra prints it as a float. Check the instructions when a constant
matters (`tools/` has no disassembler script; `capstone` was used ad hoc).

## 7. Known problems

- **The client crashes after the channel exchange.** In the runs we checked in detail
  (patched and unmodified copies, `docs/CLIENT.md`), `Tet4.exe` ended about 2–3 s
  after it sent `Cmd_LayerAlignment` and `Cmd_Channel_ExitChannelToS`. Not every run
  was checked this way. Wine shows "Tet4.exe has
  stopped working" with `Exception c0000005` (access violation). This happened with
  both the unmodified and the patched copy. Symbols of the modules are not loaded, so
  the faulting function is not known. The most likely cause is the missing
  `Cmd_Channel_EnterChannelByUserIdToS` reply: the client waits for it, gives up, and
  then crashes. This is a hypothesis.
- **No reply to `EnterChannelByUserIdToS`.** Nothing answers it, so the client waits.
- **Single Mode is not implemented.** The online path (the launcher's remote gateway)
  is described in `docs/ONLINE.md` but not implemented.
- **Some runs show the channel row and some do not.** The CDS reply is byte-identical
  in both cases; the difference comes from the client's state (see `docs/CLIENT.md`).
  The cause is not known.

## 8. Troubleshooting

- **`Disk quota exceeded` or `Unable to lock project` during an export.** Both mean the
  user quota is used up. `/tmp` is a tmpfs with a user quota, so the first thing to
  check is `df -h /tmp` and your own files there. Ghidra projects can be placed
  elsewhere with `TMPDIR`; the path must not start a directory name with a dot,
  because Ghidra rejects it.
- **Old Wine processes.** If the client does not start, or starts with a stale
  session, run `wineserver -k` and check that the ports 10454, 15000 and 15001 are free
  (`ss -ltn`).
- **`live_check.py` stops with `No such file or directory`.** The startup string is
  read from `--bootstrap` (default `tools/bootstrap-sample.txt`). Give a path that
  exists.

## 9. Recording a different session

Use the same command with another `--out`. Use a test account. Do not commit recordings,
screenshots or logs containing real data.
