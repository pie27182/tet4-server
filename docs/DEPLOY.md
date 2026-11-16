# Running the server on a VPS

One server process serves every player: TPack, CDS, the channel and game
sockets, and the account service. It needs Python 3.10 or newer and nothing
else; accounts, records and wallets (TP, items, the emblem and title shown) live
in one SQLite file.

What players get: registration and login with a name and password, the lobby with
chat and the room list, multiplayer rooms (item battle, no-item battle, race) with
invitations and quick join, Single Mode in all three modes with records ranked
across all players on the server, and the shop, paid with TP won in games. The
README lists what is not implemented yet.

## 1. What you need

- A Linux VPS with a public IPv4 address (1 CPU and 512 MB are plenty).
- A domain name with an A record pointing at the VPS, for the TLS certificate of
  the account service, for example `tetris.example.org`.
- These TCP ports open to the internet:

| Port | Service |
|---|---|
| 10454 | TPack (login handshake) |
| 15000 | CDS (channel directory) |
| 15001 | channel |
| 15002 | game |
| 15010 | accounts (registration and login, TLS) |

## 2. Install

The commands are for Debian or Ubuntu, run as root.

```bash
apt-get update && apt-get install -y python3 git certbot ufw
```

```bash
useradd --system --home-dir /var/lib/tet4 --create-home --shell /usr/sbin/nologin tet4
```

```bash
git clone https://github.com/pie27182/tet4-server.git /opt/tet4-server
```

## 3. TLS certificate

Passwords travel only to the account service, so it must run with TLS. Get a
certificate (port 80 must be free for this step):

```bash
certbot certonly --standalone -d tetris.example.org
```

Let the `tet4` user read it, now and after every renewal:

```bash
cat > /etc/letsencrypt/renewal-hooks/deploy/tet4.sh <<'EOF'
#!/bin/sh
install -d -o tet4 -m 700 /var/lib/tet4/tls
install -o tet4 -m 600 /etc/letsencrypt/live/tetris.example.org/fullchain.pem /var/lib/tet4/tls/
install -o tet4 -m 600 /etc/letsencrypt/live/tetris.example.org/privkey.pem /var/lib/tet4/tls/
systemctl try-restart tet4
EOF
chmod +x /etc/letsencrypt/renewal-hooks/deploy/tet4.sh && /etc/letsencrypt/renewal-hooks/deploy/tet4.sh
```

## 4. Service

Replace `203.0.113.5` with the VPS's public IP. It is the address the server
announces to clients for the channel and game sockets.

```bash
cat > /etc/systemd/system/tet4.service <<'EOF'
[Unit]
Description=Tet4 server
After=network-online.target
Wants=network-online.target

[Service]
User=tet4
WorkingDirectory=/opt/tet4-server
ExecStart=/usr/bin/python3 -m tet4server --host 0.0.0.0 --public-host 203.0.113.5 \
    --db /var/lib/tet4/tet4.db \
    --tls-cert /var/lib/tet4/tls/fullchain.pem --tls-key /var/lib/tet4/tls/privkey.pem
Restart=on-failure
NoNewPrivileges=yes
ProtectSystem=strict
ProtectHome=yes
PrivateTmp=yes
ReadWritePaths=/var/lib/tet4
LimitNOFILE=65536

[Install]
WantedBy=multi-user.target
EOF
systemctl daemon-reload && systemctl enable --now tet4
```

Open the ports:

```bash
ufw allow OpenSSH && ufw allow 10454,15000,15001,15002,15010/tcp && ufw enable
```

Check it:

```bash
systemctl status tet4 && journalctl -u tet4 -n 20
```

The log should say `accounts required; account service on port 15010 with TLS`.

## 5. Players

Each player needs their own copy of the client (it is not distributed with
this repository) and Wine. They point a patched copy at the server once; the
TPack host has room for 30 characters, so use the domain or the IP:

```bash
python3 tools/client.py patch --host tetris.example.org
```

Then, the first time:

```bash
python3 tools/client.py play --server tetris.example.org --register
```

and afterwards:

```bash
python3 tools/client.py play --server tetris.example.org
```

`play` asks for the name and password, receives a ticket from the account service
over TLS, and starts the client with it. Names are 3 to 12 characters of `a-z`,
`0-9` and `_`; passwords at least 8 characters.

## 6. Upkeep

Update:

```bash
git -C /opt/tet4-server pull && systemctl restart tet4
```

Back up the database while the server runs:

```bash
sqlite3 /var/lib/tet4/tet4.db ".backup /var/lib/tet4/backup-$(date +%F).db"
```

A restart ends the players' sessions; they log in again with `play`.

## 7. Security and capacity

- Passwords are stored as scrypt hashes with a salt per account, and only travel
  to the account service, over TLS. Ten failed attempts in a minute from one
  address are refused for the rest of that minute.
- The game protocol itself is the client's: its cipher uses a fixed key, so
  anyone who captures a session can read it, including the login ticket. A ticket
  is valid for 12 hours and only for its account; a new login issues a new one.
- The game socket carries no ticket. The server accepts a player there only while
  the same account is logged in on a channel connection from the same address.
- One process, one thread for the network (asyncio) and a worker thread for
  database writes, which land in the order they were made. A player holds two TCP
  connections; `LimitNOFILE` above allows 65536 open sockets. Idle players in the
  lobby cost almost nothing, but in a multiplayer game the server passes every
  player's moves to the others in the room, and the client's stream cipher runs in
  pure Python: that relay is the main cost, so measure with the load you expect
  before counting on thousands of players in games at once.
- Messages to other players are queued without waiting; a connection that stops
  reading is dropped once a megabyte is waiting for it.
