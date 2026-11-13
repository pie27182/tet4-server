# Protocol tracing and debugging Tet4 under Wine

## Preferred approach: decrypt at the protocol boundary

Do **not** disable the secure socket on only one side. `Tet4.exe` always applies
its `CHgSecureSocket` stream filter; a plaintext reply from the server would be
fed into the client's decryptor and become garbage. The server must continue to
use the real handshake and stream cipher.

For live runs, set `TET4_TRACE_JSONL`. The optional trace tap records each inbound
message after decryption and each outbound message before encryption. It does not
change the bytes sent over TCP.

```sh
mkdir -p live-runs/traces
TET4_TRACE_JSONL=live-runs/traces/single-mode.jsonl python3 -m tet4server
```

Launch the client as usual in another terminal. The JSONL contains one event per
message with timestamp, service (`channel` or `game`), direction, peer, sequence,
message ID/name, alignment-marker count, and the exact plaintext message bytes in
hex. For an XLBP batch with `Cmd_LayerAlignment` prefixes, the trace also identifies
the first non-alignment message ID. This makes it possible to see whether a request
arrived, whether the server replied, and which service handled it without decrypting
the PCAP separately.

The trace can contain authentication tickets and other session data. Keep it under
`live-runs/` (already ignored by Git) and do not commit or publish it.

## Arch packages

The useful packages are in the official Extra repository:

```sh
sudo pacman -S wireshark-cli wireshark-qt tcpdump ghidra gdb wine-staging
```

- `wireshark-cli` provides `tshark`; `wireshark-qt` provides the GUI.
- `tcpdump` and `dumpcap` capture traffic.
- `ghidra` is the static decompiler.
- `wine-staging` includes `winedbg`, Wine's Win32 debugger.
- `gdb` is used as the front end for Wine's GDB proxy mode.

Optional, for Python-based packet crafting/inspection: `sudo pacman -S python-scapy`.
The live plaintext trace does not require Scapy.

## PCAP capture and Wireshark

Capture loopback traffic for all services:

```sh
sudo dumpcap -i lo -f 'tcp port 10454 or tcp port 15000 or tcp port 15001 or tcp port 15002' -w live-runs/traces/session.pcapng
```

Useful Wireshark display filter:

```
tcp.port == 10454 || tcp.port == 15000 || tcp.port == 15001 || tcp.port == 15002
```

Useful summaries:

```sh
tshark -r live-runs/traces/session.pcapng -q -z conv,tcp
tshark -r live-runs/traces/session.pcapng -Y 'tcp.port == 15001' -T fields -e frame.time -e tcp.stream -e tcp.len
```

The PCAP contains ciphertext on the secure channel/game sockets. Wireshark can
reassemble TCP and show packet timing, sequence numbers, retransmissions and
conversation boundaries, but it will not understand the Tet4 application messages
until the stream filter is decoded. Use the server-side JSONL tap for live message
inspection. For an existing PCAP/PCAPNG capture, use the standalone offline decoder
from the companion `tet4-protocol-tools.zip` bundle. It includes
`tools/decode_capture.py` and `tet4_stream_crypto.py`. Extract it, place the capture
beside its README, then run:

```sh
python3 tools/decode_capture.py capture.pcapng --ports 15001,15002
```


## Wine debugger + Ghidra

WineDbg can start the original executable and expose a GDB remote endpoint. From the
client directory:

```sh
winedbg --gdb --no-start --port 38002 Tet4.exe "$(cat bootstrap-stage1.txt)"
```

WineDbg prints a command like `target remote localhost:38002`. In another terminal:

```sh
gdb -q ./Tet4.exe
```

At the GDB prompt:

```gdb
set architecture i386
target remote localhost:38002
break *0x0049d0a0
continue
```

`0x0049D0A0` is the statically recovered Single Mode button handler in `Tet4.exe`.
After the relevant DLL has loaded, verify its actual base address against the Ghidra
image before setting DLL breakpoints. Useful decompilation targets include:

- `HgCom3.dll:0x601203D0` — `PC_ConvertX2M` wrapper;
- `HgCom3.dll:0x601206E0` — receive-side message-batch conversion and dispatch;
- `HgCom3.dll:0x601204A0` — send-side message-batch conversion;
- `HgSock3.dll:0x606057A0 / 0x60605900` — secure-socket stream filters;
- `Tet4.exe:0x0049D0A0` — Single Mode button handler;
- `HgCtr3.dll:0x60207880` — `CGameLobbyController::Net_StartNewGame`.

For the DLL addresses, first confirm the module is mapped at the preferred base used
by the decompilation; do not blindly set absolute breakpoints if Wine relocated it.

At a breakpoint, inspect the call stack, registers and message object fields. Use
Ghidra's pseudocode and disassembly side-by-side: the dynamic breakpoint answers
whether the function was reached and what values it received; the static view explains
what those values mean.

## Recommended order for Single Mode

1. Run with `TET4_TRACE_JSONL` and capture a fresh PCAPNG at the same time.
2. Confirm the client emits `AutoEnterSingleModeToS`; confirm the JSONL shows the
   matching server reply.
3. Confirm a TCP connection to `127.0.0.1:15002` and a successful game handshake.
4. If the client stops before a request/reply, put a GDB breakpoint on the relevant
   converter/handler and inspect the input fields and call stack.
5. Only implement a response after the matching client-side deserializer/converter
   and handler are understood from the decompilation.

This keeps the original encrypted transport intact while making the application
protocol observable and testable.
