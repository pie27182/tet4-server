# tet4-server

Play the 2012 Hangame Tetris (`Tet4.exe` 1.3.4) online again: this project is a
server for the original game, and a launcher that connects your copy of the game to
it. Accounts, the lobby and chat, multiplayer rooms, Single Mode with records ranked
across all players, and the shop all work.

The game itself is **not included**: you need your own copy of the original game
folder, the one that contains `Tet4.exe`.

## Play on Windows

1. Download **Tet4Launcher.exe** from the
   [latest release](https://github.com/pie27182/tet4-server/releases/latest) and run
   it. Nothing else needs to be installed. Windows may warn about an unknown
   publisher: click **More info**, then **Run anyway**.
2. Click **Browse...** and choose your game folder (the one with `Tet4.exe`).
3. Type an account name and a password, then click **Play**. The launcher first
   tries to log in; if the login is refused, it offers to create the account (the
   name must be available).

**Keys and speed...** sets your keys (up to three per action, items included) and
the movement speeds: DAS, the wait before a held key repeats; ARR, the time between
repeated moves (0 sends a piece straight to the wall); SDF, the time between soft
drop steps. *Original speed* restores the game's 145, 33 and 33 ms. Changes apply
from the next game start.

The launcher remembers the server, the game folder, your account name and keys. After
a successful login it saves the password in the OS credential store (Windows Credential
Manager or Linux Secret Service), keyed by server and account. On Linux this needs
`python-keyring` and an unlocked Secret Service provider; without one, the launcher
continues to ask for the password. The first time you play on a server it makes a copy
of the game that connects there, in `%LOCALAPPDATA%\Tet4`; your own game folder is
never changed. The launcher closes once the game starts.

## Play on Linux

You need Python 3.10 or newer (with Tk for the window: `python3-tk` on Debian and
Ubuntu) and Wine:

```bash
sudo apt install python3 python3-tk wine git
```

```bash
git clone https://github.com/pie27182/tet4-server.git
```

```bash
python3 tet4-server/tools/client.py
```

The same window opens; the copies of the game go to `~/.local/share/tet4`. For
password saving on Arch Linux, install `python-keyring` and a Secret Service provider
such as GNOME Keyring (`sudo pacman -S python-keyring gnome-keyring`). Without an
available keyring, the launcher still works but asks for the password each time.
Without a display, `--console` asks the same questions in the terminal.

## If something goes wrong

| What you see | What to do |
|---|---|
| "Could not reach the server" | The server may be offline, or a firewall blocks it. Check the address and try again later. |
| "Wrong name or password" | Check both; names are lower case. "Name taken" when creating an account means someone has it: choose another. |
| "...is not the original Hangame Tetris 1.3.4 file" | Choose the original game folder, not a copy or another version. |
| The game window shows broken text | Set Windows' *Language for non-Unicode programs* to Korean (Settings, Time & language, Language & region, Administrative language settings) and restart. |
| The game closes at once | Its log is `%LOCALAPPDATA%\Tet4\game.log` (Linux: `~/.local/share/tet4/game.log`). |

Use a password you use nowhere else: the server keeps it safely, but the game's own
traffic is only lightly encrypted.

## What works

Tested with two real clients at once, button by button:

- **Lobby**: the player list with the room each player is in, chat, the room list,
  quick join (바로입장), player profiles, emblems and titles, and reports (신고),
  which the server keeps for its operators.
- **Rooms**: item battle (with teams), no-item battle, race, survival and painting;
  passwords, joining, quick join, invitations (초대), the host's settings and map,
  games to the end with the ranking and TP, leaving (also after the game, 나가기
  예약), and sending a player away (강퇴, tested with scripted clients).
- **Single Mode**: Marathon, 40 lines and Ultra, with the five best results per mode
  and ranks among all players.
- **Shop (상점) and My Items (내 아이템)**: buying with TP. Players start with 10,000
  TP and earn 30, 20 or 10 TP per multiplayer game by rank.

Not yet:

- ratings and records: 내공, grades, arenas by grade, wins and losses (shown as 0);
- friends, whispers and blocking, which went through Hangame's separate messenger;
- visiting a player (게임 신청하기 in a player's menu): it does nothing, and the
  room list's 입장 buttons then stop working until the game is restarted;
- watching a room, nicknames, gifts and coupons, the Happy Cube, missions;
- the effects of items that are used up (they can be bought but do nothing);
- paying with real money: the game's top-up and club pages were Hangame's web site.

## Run a server

Python 3.10 or newer, nothing else. To try it on one machine:

```bash
python3 -m tet4server --db tet4.db
```

```bash
python3 tools/client.py --insecure play --server 127.0.0.1 --game ~/Tet4 --register
```

(`~/Tet4` being your game folder; `--insecure` because this test server has no TLS
certificate.)

For a public server with accounts and TLS, follow [`docs/DEPLOY.md`](docs/DEPLOY.md).
Every setting (ports, players per channel, the TP economy, account rules) is in
[`tet4server/config.py`](tet4server/config.py). The tests:

```bash
python3 -m unittest discover -s tests -t .
```

## Documentation

- [`docs/DEPLOY.md`](docs/DEPLOY.md): run a server on a VPS.
- [`docs/PROTOCOL.md`](docs/PROTOCOL.md): the game's protocol as a specification a
  server can be built from, with the evidence for every fact and what is known of
  the features not implemented yet.
- [`docs/MESSAGES.md`](docs/MESSAGES.md): all 233 messages of the game, field by
  field, and what the server does with each.
- [`docs/ARCHITECTURE.md`](docs/ARCHITECTURE.md): how the server is built and how to
  extend it.
- [`docs/DEBUGGING.md`](docs/DEBUGGING.md): recording and debugging the real client.
- [`CONTRIBUTING.md`](CONTRIBUTING.md): the rules for changes.

## Releasing

Push a tag such as `v1.2.0`: the
[Release workflow](.github/workflows/release.yml) tests everything, builds
`Tet4Launcher.exe` on Windows, checks that it starts, and publishes it with the
notes in [`.github/release-notes.md`](.github/release-notes.md).

The game's files, captures, traces and real credentials never go into this
repository.
