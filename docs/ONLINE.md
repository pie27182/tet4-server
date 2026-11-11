# How the online service worked (from the launcher code)

Sources: the decompiled C# of `h-tetra.exe` (kept in the research folder, not in
this repository: `decompiled-launcher/RemoteGateway.cs`, `HtetraLauncher.cs`,
`WebLogin.cs`, `ClientUpdater.cs`, `ClientRelease.cs`) and the client folder
(`launcher-login.json`, `urlhgc*.cfg`). Everything below is read from that code, not
from a live server.

## 1. Two modes of the launcher

`HtetraLauncher.cs` decides how the game gets its startup string:

- **Remote (online) mode.** If `launcher-login.json` is present, the launcher opens a
  web login (`WebLogin.Prompt`). The website returns a session with a `Bootstrap`
  string and a `Connection` (server host, port, certificate pin). If there is no web
  session, a `client-connection.json` file is read instead.
- **Local mode.** Otherwise the launcher requires the bootstrap to start with
  `metp://127.0.0.1:15000/`. If ports 15000 and 15001 are not already listening, it
  starts `tools\run_local_server.py` from the release folder. That script is not in
  the client folder and is not in this repository.

The launcher's own website is `https://h-tetra.online/` (`launcher-login.json`,
`ClientRelease.cs`). On the day this was checked it returned HTTP 503, so the live
service cannot be queried now.

## 2. Remote gateway: the outer layer

`RemoteGateway` turns the remote service into the same local interface the game
already uses:

1. It opens two local listeners on random ports (`directory` and `game`).
2. It rewrites the bootstrap: `metp://127.0.0.1:<directory port>/...`. The game then
   talks to local ports only.
3. For every local connection it opens a **new TLS 1.2 connection** to
   `server_host:server_port` and relays bytes both ways (`Relay`, `Copy`).

The TLS connection is set up as follows:

- The server certificate is **pinned**: its SHA-256 must equal `certificate_sha256`
  (64 lowercase hex characters). The launcher also checks that the certificate is
  within its validity dates.
- `server_host` may be a DNS name or an IPv4 address, and `server_port` is 1024–65535.
- Before any game data, the launcher sends a hello: a 4-byte big-endian length, then
  a JSON object (`Tunnel`, RemoteGateway.cs):

  ```
  version          1
  client_version   "1.3.4"
  service          "directory" or "game"
  member           the account name (bootstrap field k3e)
  ticket           the account ticket (bootstrap field k8e, 32..128 characters)
  launch           random 32 bytes as 64 hex characters, new for each run
  port             the local port of the listener
  input_settings   from controls.json
  ```

- The server answers with **one byte**: `0` accepts the tunnel, `2` means the client is
  too old (the launcher shows a download link), anything else means the account or
  connection file was rejected.

After `0`, the TCP stream is the game's own protocol, unchanged.

## 3. What this means for us

- The **inner** protocol (metp directory and channel, TPack, CDS, the secure channel)
  is the same as the one we reproduce locally. The gateway only adds a TLS wrapper
  and a JSON hello. We do not need that wrapper to run the game: `Tet4.exe` connects
  straight to our local ports, which is what the current tools do.
- The **ticket** and the **web login** were the authentication of the online
  service. Locally, TPack (port 10454) accepts any account, so this part is not
  needed for the emulator.
- The original server's answers (what `directory` and `game` replied) are not in the
  client. They can only be reconstructed from the client code and from captures.

## 4. Possible local gateway (not implemented)

To reproduce the online flow end to end, a local gateway could:

1. generate a self-signed certificate and compute its SHA-256;
2. write `client-connection.json` with `server_host` `127.0.0.1`, a free port,
   and that fingerprint in `certificate_sha256`;
3. accept the TLS connection, read the length-prefixed JSON hello, check `member`
   and `ticket`, and answer `0`;
4. pass the rest of the stream to the local directory or channel server
   (`tet4server/cds.py`, `tpack.py`, `channel.py`) as if it were the local socket.

The launcher must then run without `launcher-login.json` (otherwise it opens the web
login). The test copy `~/h-tetra-launcher-test` was set up that way. This is a
possible next step, not a verified one: the TLS and JSON steps are backed by the code
above, but the gateway has not been run.

## 5. Prior work

A forum thread (tetrisonline.pl, "Hangame Tetris server development", 2012) says the
author worked out the networking encryption and started a server, then stopped. The
thread has no protocol details. No other open source server was found.
