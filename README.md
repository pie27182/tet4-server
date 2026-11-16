# tet4-server

An online server for the 2012 Hangame Tetris client, `Tet4.exe` 1.3.4. The server supports accounts, the lobby, multiplayer rooms, Single Mode records, and the shop. See the status and limitations below before playing.

## Launch the client

### Windows

1. Download `tet4-windows.zip` from the [latest release](https://github.com/pie27182/tet4-server/releases/latest) and extract the entire archive to a folder you can write to, such as `Documents\Tet4`. Do not run files directly from inside the ZIP archive.
2. You need your own legally obtained copy of the original Hangame Tet4 1.3.4 game. **The game is not included in this project.** You need the folder that contains `Tet4.exe`.
3. If the launcher says Python is missing, install Python 3 for Windows from the [official Python website](https://www.python.org/downloads/windows/). Keep the Python Launcher option enabled if the installer offers it. No additional Python packages are needed.
4. Double-click `start-client.bat` and follow the prompts. Enter a server address or press Enter to use the suggested address, then enter the path to the folder containing `Tet4.exe`. Password characters are not displayed while you type; this is normal.

To start the launcher from Command Prompt while in its folder:

```bat
start-client.bat
```

The launcher creates a separate `client-patched` folder and changes the server address only in that copy. Your original game folder is not modified. If `client-patched` already exists, the launcher uses it as-is. To create a fresh copy or switch servers, close the game and delete only `client-patched` before launching again.

If the game closes immediately, check `client-patched\tet4-launcher.log`. The server must be running and reachable; this project cannot guarantee that the suggested public server is always online.

### Linux

You need Python 3.10 or newer, Wine, and your own original copy of the game, version 1.3.4. On Debian or Ubuntu, install the required programs, download the project, and start the launcher:

```bash
sudo apt update && sudo apt install -y python3 wine git
git clone https://github.com/pie27182/tet4-server.git
cd tet4-server
python3 tools/client.py
```

The launcher asks for the server address and the path to the folder containing `Tet4.exe`, then lets you log in or create an account. Run `python3 tools/client.py` from the `tet4-server` folder. On other distributions, install Python and Wine with your distribution's package manager.

### Before you start

- This project provides a launcher, not the game files. Do not download unknown “prebuilt” game bundles.
- The launcher verifies `Tet4.exe` and stops if it does not match the expected original 1.3.4 file.
- Use a unique password that you do not use on other websites. The game protocol uses a fixed encryption key, so in-game traffic should not be considered fully private.
- For detailed instructions and troubleshooting, see [`docs/WINDOWS.md`](docs/WINDOWS.md).

## Project status

Tested with two real clients at once (Wine, headless under Xvfb):

- **Login and lobby**: TPack login, the CDS channel directory and secure socket; accounts and tickets with `--db`; the member list with each player's room, joins and leaves, lobby chat, the 100-slot room list, quick join (바로입장), the member info dialog, and emblems and titles.
- **Rooms**: item battle, no-item battle and race; passwords, joining from the room list, quick join and invitations (초대), host title, options and map choice, starting a game, passing in-game traffic, results and TP, and leaving. Host kick (강퇴) is tested with scripted clients only.
- **Single Mode**: Marathon, 40 lines and Ultra; game over, NEW RECORD, rank and the five best results per mode, retry, and returning to the lobby. Ultra opens after 500 games, as the client requires.
- **Shop (상점) and My Items (내 아이템)**: three tabs, buying with TP, and inventory with item period or uses. Players start with 10,000 TP and earn 30, 20 or 10 TP per multiplayer game by rank.

Not implemented yet: watching a room, nicknames, friends, gifts and coupons, the Happy Cube, club payments, missions and levels, room and operator notices, and effects for consumable items (rating, record and nickname-change items); these items can be bought but do nothing. Whispers never reach the server. Survival and painting rooms are created but untested. [`docs/PROTOCOL.md`](docs/PROTOCOL.md) section 13 records what is known of each missing feature.

The server keeps players, rooms, records and wallets, and relays game traffic between players in a room. To run your own server, see [`docs/DEPLOY.md`](docs/DEPLOY.md). Account names and passwords are handled by the server operator; use a unique password. The game protocol uses a fixed encryption key, so do not treat in-game traffic as fully private.

## Running the server

Python 3.10 or newer, standard library only.

```bash
python3 -m unittest discover -s tests -t .
python3 -m tet4server
```

By default it listens on 127.0.0.1: TPack 10454, CDS 15000, and one channel on 15001 (game 15002); every setting is in [`tet4server/config.py`](tet4server/config.py). `--db FILE` stores accounts, records and wallets in SQLite and requires login; `--channels N` runs N channels of up to 300 players each. `--host` and `--public-host` configure listening and advertised addresses. `--trace FILE` appends decrypted messages to a file; traces may contain sensitive session data and must be kept private.

## Documentation

- [`docs/WINDOWS.md`](docs/WINDOWS.md) — plain-language Windows player guide.
- [`docs/DEPLOY.md`](docs/DEPLOY.md) — run the server on a VPS.
- [`docs/PROTOCOL.md`](docs/PROTOCOL.md) — the protocol as a specification a server can be built from, with the evidence for each fact and what is known of the features not implemented yet.
- [`docs/MESSAGES.md`](docs/MESSAGES.md) — all 233 client messages field by field, and what the server does with each (generated from the code).
- [`docs/ARCHITECTURE.md`](docs/ARCHITECTURE.md) — how the server is built: its layout, processes, a message's path through the code, and how to extend it.
- [`docs/DEBUGGING.md`](docs/DEBUGGING.md) — developer diagnostics.
- [`CONTRIBUTING.md`](CONTRIBUTING.md) — protocol contribution rules.

The decompiled client and protocol-analysis scripts are not in this repository. Do not commit game files, captures, traces, or real credentials.
