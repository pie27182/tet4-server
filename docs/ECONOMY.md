# Economy, passes, items and competitive progression

This document describes two different things separately:

1. **The legacy Hangame service economy** as it evolved from launch in 2008 through
   the 2012-era Tet4 client.
2. **What this repository actually enforces today** in branch `test`.

A code comment is not proof of an item's original effect. Product IDs and TP prices
below are taken from `tet4server/domain/shop.py`; where the exact original behaviour
has not been verified against `ShopDataList.xml` or Tet4.exe, that is stated.

## 1. The economy is several systems, not one currency

| System | What it represents | Current server |
|---|---|---|
| TP (Tetris Points) | Earnable in-game currency used by the shop | Implemented |
| HanCoin / WON | Hangame real-money payment currencies | Not implemented; all products are reported as TP |
| Play passes / club packs | Access for a time or number of matches, plus feature bundles | Some product codes exist; entitlements are not consistently enforced |
| Gameplay feature items | Hold, Next, private rooms, ladder access, etc. | Hold and Next are partially wired; most gates are client-only |
| 내공 and 24 grades | Competitive multiplayer score and grade | A provisional server rating exists; original score rules/grades are not recovered |
| Single Mode records | Global best scores/times for Marathon, 40 Lines and Ultra | Implemented separately from 내공 |
| Emblems and titles | Visible identity/cosmetic items | Buying, displaying, expiry and deletion are implemented |
| Missions / Happy Cube / gifts / coupons | Reward and promotion systems | Mostly absent |

Important distinction: **TP is not 내공**. TP is a spendable balance. 내공 is competitive rating. A player can spend TP without improving their current rating in this server, and the server's provisional Elo update does not consume TP.

## 2. Historical Hangame model

### 2008 launch: competitive grade and community

NHN launched the service on 23 October 2008 with a Tetris grade system: 내공 increased or decreased according to a player's skill. The same release included Single Mode and Tetris Family. This establishes that the competitive rating was a core progression system, not just a lobby decoration.

### February 2009: paid access passes

The initial personal monetization model was a play allowance:

- Multiplayer: 30 games per day free.
- Beyond that: either a time-based free-play pass or a pass for a fixed number of games.
- Single Mode remained unlimited.
- Reported prices at that time: 1 day 2,000 KRW, 7 days 3,500 KRW, 30 days 7,000 KRW (5,500 KRW with automatic payment); game-count passes 20 / 50 / 100 for 500 / 1,200 / 2,400 KRW.

These are **February 2009 historical prices**, not the TP prices in the current repository and not proof that the same price list was active in the 1.3.4 client.

### March 2009: PC bang T-pack

Hangame's official PC bang notice says that the T-pack commercial service provided:

- unlimited game count;
- unlimited Hold;
- all six Next preview slots;
- entry one grade above the player's normal arena;
- the ability to create private rooms.

This is a separate PC bang business entitlement. It must not be confused with a personal TP purchase or with a normal room password.

### 2009 Season 2: TP and mission-driven rewards

The November 2009 Season 2 update introduced TP as the currency for buying useful items such as Hold and Next. The same announcement described TP as obtainable by completing in-game missions and gave all users 1,000 TP as a launch promotion. Thus the historical loop became:

`play -> complete missions / earn TP -> buy feature items and cosmetics -> play`

The current server does **not** implement the mission side of that loop. Its TP inflows are only the starting balance, multiplayer placement rewards and a few package bonuses.

### 2013: a later system, not the Tet4 1.3.4 system

In March 2013 NHN announced that the old service would close and be replaced by Tetris Star. The new version replaced the old 내공 system with skill points and opponent-relative automatic matchmaking. That later design is useful historical context, but should not be copied into the 1.3.4 server as if it were the old grade system.

## 3. TP ledger in the current server

### Inflows

Defined in `tet4server/config.py` and `tet4server/services/game.py`:

- New wallet: **10,000 TP**.
- A finished multiplayer game lasting at least **30 seconds**:
  - 1st place: **30 TP**
  - 2nd place: **20 TP**
  - 3rd place and later: **10 TP each**
- No TP entry fee is charged.
- Single Mode reports update records, but do not award TP.
- Mission rewards, Happy Cube rewards, coupons, gifts and paid TP top-ups are not implemented.

The payout is positive-sum, not a transfer between players. For example, a two-player qualifying match creates 50 TP in total; a six-player match creates 90 TP in total. The economy therefore inflates as players complete matches.

The 30-second rule only gates TP. In the current code the provisional multiplayer rating is updated before that check, so a short match can change 내공 while paying no TP. This is an important anti-farming inconsistency to resolve.

### Outflows

TP is deducted when buying an item:

- exact product code must exist in `PRODUCTS`;
- quantity must be 1–99;
- wallet must have `price × quantity`;
- the charge and inventory update run in one SQLite transaction.

There is no fee for entering a room or playing Single Mode. Deleting an emblem/title does not refund TP. The database stores a current balance and a JSON inventory, not a transaction ledger.

### Package rebates

The three club/pack products return some TP after charging the listed price:

| Product code | Label in source comments | Listed TP | TP returned | Net TP cost | Period |
|---|---|---:|---:|---:|---|
| `PM0HT10002D030` | Free Club | 5,500 | 1,000 | **4,500** | 30 days |
| `PM0HT10001D030` | Royal Club | 9,900 | 1,500 | **8,400** | 30 days |
| `PP0HT10006D030` | Super Pack | 19,800 | 2,000 | **17,800** | 30 days |

Those package labels and bundles are source-code annotations. The exact client-facing names and descriptions belong to the original `Tet4/Shop/Data/ShopDataList.xml`, which is not in this repository.

### How much playing buys a package?

At the current fixed TP payout, ignoring all other purchases:

| Net cost | 30 TP finishes (1st) | 20 TP finishes (2nd) | 10 TP finishes (3rd+) |
|---:|---:|---:|---:|
| Free Club: 4,500 | 150 | 225 | 450 |
| Royal Club: 8,400 | 280 | 420 | 840 |
| Super Pack: 17,800 | 594 | 890 | 1,780 |

These are arithmetic break-even counts, not a prediction of a player's average result. In a six-player room the mean payout across the six seats is 15 TP per player per match; in a two-player room it is 25 TP.

## 4. Product catalog reconstructed from the code

Period suffixes:

- `Dnnn`: nnn days.
- `Hnnn`: nnn hours.
- `Cnnn`: nnn consumable uses.
- `D000` and `U000`: treated as permanent by the wallet code.

| Inventory item | Current code annotation / likely role | Products and TP prices | Current implementation |
|---|---|---|---|
| `T10003` | Plus room-host / access entitlement | 1d 1,500; 7d 3,500; 30d 7,000 | Not checked by room creation |
| `T10014` | Room-host item | 1d 400; 7d 2,000 | Not checked by room creation |
| `T10006` | Ultra unlock; included in Super Pack | Super Pack 30d | Client-side gate; server does not validate |
| `T10004` | Unlimited Hold | 3d 250; 7d 750; 30d 1,750 | Sent as `hold=1` at game start when owned |
| `T10005` | Expanded Next preview | 3d 150; 7d 350; 30d 750 | Sent as `next=1` at game start when owned |
| `T10007` | Ladder: one grade higher arena access | 1d 4,000; also in Super Pack | No grade-gated arena implementation |
| `T10008` | Private-room entitlement | 1d 500 | Server uses the password flag, not item ownership |
| `T10020` | Nickname change | 1 use 4,800 | No nickname-change handler |
| `T10021` | Source comment: rating-time item | 3h 100; 6h 300; 24h 500 | Effect not implemented; exact behaviour unverified |
| `T10022` | Source comment: rating-time item | 1d 500; 7d 1,000; 30d 4,000 | Effect not implemented; exact behaviour unverified |
| `T10015` | Happy Cube hammer | 1 use 300 | Purchase possible; cube/hammer use not implemented |
| `T10017` | Source comment: rating +1,000 | 1 use 3,000 | Purchase possible; rating is not changed |
| `T10018` | Source comment: rating +2,000 | 1 use 5,000 | Purchase possible; rating is not changed |
| `T10019` | Source comment: rating reset | 1 use 3,000 | Purchase possible; rating is not reset |
| `T10016` | Source comment: record eraser | 1 use 4,000 | Purchase possible; no record deletion |
| `T90002` | Four extra emblem slots | Permanent 1,000 | Slot count expands from 4 to 8 |
| `T90003` | Four extra title slots | Permanent 1,000 | Slot count expands from 4 to 8 |

The package bundles are:

- Free Club: `T10003` for 30 days + 1,000 TP.
- Royal Club: `T10003`, `T10004`, `T10005` for 30 days + 1,500 TP.
- Super Pack: `T10006`, `T10004`, `T10005`, `T10007` for 30 days + 2,000 TP.

The product group names `BDT001`, `BDT002`, `BDT003` are sent as shop tabs: tickets/clubs, skill items, decorations.

### The current Hold/Next path

On `Room_StartNewGameToS`, the server checks whether each player owns `T10004` and `T10005`, then sends a layer-3 `_UseAbleItem` with `hold` and `next` flags. These are timed entitlement items, so the server does not decrement a use count per match. This is the one clearly wired paid/gameplay feature path.

Other in-game item actions (attack, send, steal, reflect, item use, etc.) are relayed unchanged between clients. The server does not check those gameplay messages against the shop inventory; the combat/item rules are mostly client-side.

## 5. Rating, ranks and the shop

There are three separate progression concepts:

1. **Single Mode rank:** each mode has a global best-score/time table. Five best results are stored per player/mode. No TP is awarded for Single Mode.
2. **Multiplayer placement:** the room result is determined by elimination order; winner first. The result board displays rank and the server awards 30/20/10 TP.
3. **내공 / grade:** the current `test` branch stores a provisional global multiplayer rating and lifetime wins/losses. Its Elo-style update is independent of TP and is not the recovered Hangame score algorithm.

The source catalog's rating-related products make the intended coupling explicit: `T10017` and `T10018` are annotated as direct rating increases; `T10019` as a reset; `T10021/22` as time-based rating products. These could alter competitive standing without winning matches. But the current server only stores these items; it does not apply them. Before implementing them, recover their actual client-side use handlers and determine whether they adjust 내공, protect it, or do something else.

The distinction between **grade title** and **shop title** is also important. The 24 competitive grades are calculated from 내공; `T3xxxx` titles are inventory decorations. A purchased title such as `절대신` or `1만승기록보유고객님` does not prove that the account reached that grade or won 10,000 games.

## 6. Emblems, titles and prestige

The code includes a static catalog of `T2xxxx` emblems and `T3xxxx` titles:

- Many cost 200 TP for emblems and 100 TP for titles (some titles cost 99 or 200).
- Periods include 7-day, 30-day, 100-day and permanent variants.
- Buying a decoration stores `mission=0xFFFFFFFF`; the client interprets that as a purchased item, not a mission reward.
- A player can choose which owned emblem/title is displayed. That selection is broadcast to the channel.
- The normal capacity is four emblems and four titles. `T90002` / `T90003` add four more slots.
- A player can discard an owned decoration, including the one currently shown; there is no TP refund.

Several names resemble achievements (10,000 wins, 1,000 wins, T-Spin master, Combo master, Absolute God). Since the server offers them as ordinary purchasable decorations, they should not be treated as verified achievement badges. Actual mission-earned emblems/titles require the mission subsystem and non-`0xFFFFFFFF` mission IDs, which are not implemented.

## 7. What is missing or misleading in the current implementation

### Purchases and real money

- `views.shop_info()` sets **every product currency to TP**. The protocol's product structure can carry other currencies, but this server has no HanCoin top-up, Won checkout or payment provider.
- The old shop's HanCoin recharge and club billing pages were Hangame web services. The repo does not reproduce them.
- Club renewal/payment-method and cancellation messages (`Shop_RequestChangeLiqidMethodToS`, `Shop_RequestReserveSurrenderToS`) are not implemented. The current club products behave as one 30-day TP purchase, not a recurring real-money subscription.
- The inventory response does not populate its gift-box or membership structures; those fields are left empty.
- `Shop_RequestCanPurchaseToS` always receives a success-shaped response; it does not perform a real payment/eligibility check.
- `Shop_ReqBuyProductToS` includes gift flag, receiver and message, but the handler ignores gift delivery. A gift-shaped request is charged to the caller and the item is added to the caller's wallet; the echoed receiver is not a transfer.
- Gift-box use, coupons and Happy Cube redemption are not implemented. Coupon count is hardcoded to zero.

### Entitlement enforcement

- The client checks certain item codes before showing Ultra, room creation, private rooms or higher arenas.
- The server's `ChannelConnection._create()` only creates a room; it does not check `T10003`, `T10014`, `T10006`, `T10007` or `T10008`.
- The server sends `DayCntInfo` with `used=0`, `allowed=99` on every channel entry. It does not count actual rooms created per day.
- There is no arena/rank gate to which `T10007` could be applied.
- Ultra's 500-play unlock is a client-side decision; the server does not validate the play-count or `T10006` when a Single Mode room is requested.
- Hold/Next is the exception: ownership is checked and flags are sent at game start.

### Competitive integrity and farming

- TP is minted on every qualifying multiplayer finish; there is no entry fee or zero-sum wallet transfer.
- The 30-second cutoff protects TP rewards from very short games, but the current rating update is not subject to the same duration cutoff. Very short matches can therefore alter the provisional rating without awarding TP.
- The rating update applies to every multiplayer room with at least two players; it does not distinguish item battle from no-item, race, survival or painting, nor does it use a team result.
- There is no daily TP earning limit, rematch cooldown, same-account-pair protection or other rating/TP farming control in the current economy.
- `T10017/18/19` are currently inert. If later activated, they would need to update the rating atomically and emit the same profile/member-row refresh that a normal match does. Rating purchases would also need to be reflected in the public Multi Ranking.
- The server has no TP transaction ledger, purchase receipt, refund path or operator audit report for wallet changes; only the current wallet and a purchase log line are kept.

## 8. Consequences for the current branch

The live implementation should be described as a **TP-only reconstructed shop**, not as a complete reproduction of Hangame microtransactions. The server's playable economy currently is:

`10,000 starting TP + multiplayer placement rewards + package rebates
   -> TP-only purchases -> timed items / decorations`

The original service had other sources and sinks: cash-paid access passes, T-pack PC bang entitlements, mission/event TP, club/billing pages, coupon/gift boxes and promotional rewards. Some of these later appeared as product codes in the 1.3.4 client, but the corresponding backend services are absent here.

This also means that the current catalog has unfinished Pay-to-Win hooks. The rating increase/reset items are not working today, but they are not harmless cosmetic products either. Their true effects need to be recovered before the server implements them or advertises them as working.

## 9. Recommended recovery order

1. **Recover the exact catalog.** Extract `Tet4/Shop/Data/ShopDataList.xml` from the matching 1.3.4 client. Record each product's Korean name, description, icon, currency, price, period and item code. This file is not present in the Git repository.
2. **Recover item-use handlers.** Find the client methods that consume `T10015–T10022`, especially the rating boost/reset/time items and record eraser. Establish precisely which field or table each item changes.
3. **Recover entitlement gates.** Trace client checks for `T10003`, `T10006`, `T10007`, `T10008`, `T10014`; enforce them server-side, including daily room counts and arena access, rather than trusting UI-only checks.
4. **Complete inventory features.** Reconstruct `_GiftInventory`, `_MemberShipInfo`, coupons, gift transfer, gift redemption and Happy Cube/Gaea flows.
5. **Choose the intended payment model explicitly.** Either keep this server TP-only and mark HanCoin/WON products unavailable, or implement a separate auditable external payment integration. Do not silently convert historical cash products into farmable TP items.
6. **Protect competition.** Decide which game modes affect 내공, apply a consistent minimum-match/result validation to rating and TP, add anti-farming controls, and make rating item effects visible in both profile and Multi Ranking.
7. **Add an economy ledger.** Persist every TP change with reason, source match, product and timestamp; this is necessary for refunds, auditing and abuse detection.

## Historical references

- NHN Tetris launch and introduction of skill-dependent grades (23 Oct 2008):
  https://www.etnews.com/200810230070
- Daily free-play limit and paid time/game-count passes (10 Feb 2009):
  https://www.yna.co.kr/view/AKR20090209211000017
- Official PC bang T-pack benefits (24 Feb 2009):
  https://notice.hangame.com/boards/game/pcbang_notice/61437
- Tetris mission event with a 7-day free-play pass, 30-day Hold and performance-based emblems (22 May 2009):
  https://navercorp.com/media/pressReleasesDetail?seq=26655
- Season 2 / TP introduction and TP promotion (23 Nov 2009):
  https://navercorp.com/media/pressReleasesDetail?seq=27804
- Tetris Star replaced the old service and changed 내공 to skill points (25 Mar 2013):
  https://www.inews24.com/view/733019
- NHN's grade-dependent scoring patent (filed 25 May 2010, published 1 Dec 2011):
  https://patents.google.com/patent/KR20110129185A/en
