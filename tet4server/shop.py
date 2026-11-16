"""The shop (상점) and the players' wallets: Tetris Points (TP), earned in games and
spent on products, and the items those products put in the inventory (내 아이템).

A product code is P, a kind letter, 0, two letters, a five-digit number and a
period; the item it puts in the inventory is T and the same five digits, so
PU0HT10003D007 is seven days of T10003 (plus room host). Periods: Dnnn days, Hnnn
hours, Cnnn uses; D000 and U000 never run out. The client shows every product with
the name, icon, description and price of its own catalog
(Tet4/Shop/Data/ShopDataList.xml); the prices here are the ones it shows.
"""
import json
import logging
import time
from dataclasses import asdict, dataclass, field

from . import schema
from .accounts import Database

log = logging.getLogger("tet4.shop")

START_POINTS = 10_000          # a new player's TP, enough to try the shop
GAME_POINTS = (30, 20, 10)     # TP for a multiplayer game by rank; later ranks get the last
MIN_GAME_SECONDS = 30          # shorter games earn nothing
PERMANENT = time.mktime((2099, 12, 31, 23, 59, 59, 0, 0, -1))

# The shop's tabs (CShopData::SetShopInfo, Tet4.exe 0x0051C750, files each board's
# groups under a tab): room-host tickets, items for the game, emblems and titles.
TICKETS, SKILLS, DECORATIONS = "BDT001", "BDT002", "BDT003"

# Product groups: code -> (tab, {period: TP}).
GROUPS = {
    "PM0HT10002": (TICKETS, {"D030": 5500}),                             # Free Club
    "PM0HT10001": (TICKETS, {"D030": 9900}),                             # Royal Club
    "PP0HT10006": (TICKETS, {"D030": 19800}),                            # Super Pack
    "PU0HT10003": (TICKETS, {"D001": 1500, "D007": 3500, "D030": 7000}), # plus room host
    "PU0TT10014": (TICKETS, {"D001": 400, "D007": 2000}),                # room host
    "PF0HT10004": (SKILLS, {"D003": 250, "D007": 750, "D030": 1750}),    # unlimited hold
    "PF0HT10005": (SKILLS, {"D003": 150, "D007": 350, "D030": 750}),     # next
    "PF0HT10008": (SKILLS, {"D001": 500}),                               # private room
    "PF0HT10007": (SKILLS, {"D001": 4000}),                              # ladder
    "PF0HT10020": (SKILLS, {"C001": 4800}),                              # nickname change
    "PF0HT10021": (SKILLS, {"H003": 100, "H006": 300, "H024": 500}),     # rating time, hours
    "PF0HT10022": (SKILLS, {"D001": 500, "D007": 1000, "D030": 4000}),   # rating time, days
    "PF0TT10015": (SKILLS, {"C001": 300}),                               # Happy Cube hammer
    "PF0HT10017": (SKILLS, {"C001": 3000}),                              # rating +1000
    "PF0HT10018": (SKILLS, {"C001": 5000}),                              # rating +2000
    "PF0HT10019": (SKILLS, {"C001": 3000}),                              # rating reset
    "PF0HT10016": (SKILLS, {"C001": 4000}),                              # record eraser
    "PI0TT90002": (DECORATIONS, {"U000": 1000}),                         # four emblem slots
    "PI0TT90003": (DECORATIONS, {"U000": 1000}),                         # four title slots
}
# Emblems (2xxxx) and titles (3xxxx): (period, TP, numbers), sold as PD0TT<number>.
for period, price, numbers in (
    ("D000", 200, (20049, 20052, 20053, 20062, 20063, 20064, 20065,
                   30067, 30068, 30069, 30074, 30075, 30076, 30077)),
    ("U000", 200, (*range(20014, 20023), 20036)),
    ("D007", 200, (20039, 20040, 20041)),
    ("D030", 200, (20023, 20024, 20025, 20026, 20028, 20029, 20030, 20031, 20032, 20037,
                   20038, 20046, 20047, 20048, 20050, 20051, 20054, 20055, 20056, 20058,
                   20059, 20060, 30073)),
    ("U000", 100, tuple(range(30001, 30011))),
    ("D030", 100, (30011, 30012, *range(30014, 30026), *range(30049, 30053), 30054, 30055,
                   30056, *range(30061, 30067), 30070, 30071, 30072)),
    ("D100", 100, (30053,)),
    ("D030", 99, (30057, 30058, 30059, 30060)),
):
    for number in numbers:
        GROUPS[f"PD0TT{number}"] = (DECORATIONS, {period: price})

# Clubs and packs: their items for the period, and TP back.
PACKAGES = {
    "PM0HT10002": (("T10003",), 1000),
    "PM0HT10001": (("T10003", "T10004", "T10005"), 1500),
    "PP0HT10006": (("T10006", "T10004", "T10005", "T10007"), 2000),
}


@dataclass(frozen=True)
class Product:
    code: str
    group: str
    period: str
    price: int

    @property
    def items(self) -> tuple[str, ...]:
        return PACKAGES[self.group][0] if self.group in PACKAGES else ("T" + self.group[5:],)

    @property
    def bonus(self) -> int:
        return PACKAGES[self.group][1] if self.group in PACKAGES else 0

    @property
    def seconds(self) -> float | None:
        """How long the product lasts; None for permanent items and items with uses."""
        unit, n = self.period[0], int(self.period[1:])
        if unit in "DU" and n:
            return n * 86400.0
        return n * 3600.0 if unit == "H" else None


PRODUCTS = {group + period: Product(group + period, group, period, price)
            for group, (_, prices) in GROUPS.items() for period, price in prices.items()}


@dataclass
class Item:
    """An inventory item: a period item until `end`, or an item with `count` uses."""
    code: str
    start: float = 0.0
    end: float = 0.0
    count: int = 0


@dataclass
class Wallet:
    points: int = START_POINTS
    items: dict[str, Item] = field(default_factory=dict)

    def add(self, product: Product, quantity: int, now: float) -> None:
        for code in product.items:
            item = self.items.setdefault(code, Item(code, start=now))
            if product.period[0] == "C":
                item.count += int(product.period[1:]) * quantity
            elif product.seconds is None:
                item.end = PERMANENT
            else:
                item.end = max(item.end, now) + product.seconds * quantity
        self.points += product.bonus * quantity

    def expire(self, now: float) -> None:
        self.items = {code: item for code, item in self.items.items()
                      if item.count > 0 or item.end > now}


class Shop:
    def __init__(self, db: Database | None = None):
        """With `db`, wallets are loaded from and written to the database."""
        self._db = db
        self._wallets: dict[bytes, Wallet] = {}
        for name, points, items in db.load_wallets() if db else []:
            self._wallets[name.encode("latin-1")] = Wallet(
                points, {i["code"]: Item(**i) for i in json.loads(items)})

    def wallet(self, member_id: bytes) -> Wallet:
        wallet = self._wallets.setdefault(member_id, Wallet())
        wallet.expire(time.time())
        return wallet

    def owns(self, member_id: bytes, item: str) -> bool:
        return item in self.wallet(member_id).items

    def buy(self, member_id: bytes, code: str, quantity: int) -> str | None:
        """Buy `quantity` of a product with TP. None when bought, else why not, in the
        words the client shows."""
        product = PRODUCTS.get(code)
        if product is None or not 1 <= quantity <= 99:
            return "판매하지 않는 상품입니다."
        wallet = self.wallet(member_id)
        if wallet.points < product.price * quantity:
            return "TP가 부족합니다."
        wallet.points -= product.price * quantity
        wallet.add(product, quantity, time.time())
        log.info("%r bought %d x %s, %d TP left", member_id, quantity, code, wallet.points)
        self._save(member_id)
        return None

    def earn(self, member_id: bytes, points: int) -> tuple[int, int]:
        """Add TP; the balance before and after."""
        wallet = self.wallet(member_id)
        before = wallet.points
        wallet.points += points
        self._save(member_id)
        return before, wallet.points

    def _save(self, member_id: bytes) -> None:
        """Queue the wallet's write; writes reach the database in the order queued."""
        if self._db:
            wallet = self._wallets[member_id]
            self._db.submit(self._db.save_wallet, member_id.decode("latin-1"), wallet.points,
                            json.dumps([asdict(i) for i in wallet.items.values()]))


# Messages, all at layer 3 of the channel socket (Tet4.exe registers the shop's
# converters at 0x005424A0).

def _date(t: float) -> bytes:
    return time.strftime("%Y%m%d%H%M%S", time.localtime(t)).encode()


def _shop_info() -> bytes:
    tabs: dict[str, list[str]] = {}
    for group, (tab, _) in GROUPS.items():
        tabs.setdefault(tab, []).append(group)
    return schema.pack(
        "Shop_GetShopInfoToC",
        boards=[dict(code=tab, groups=groups) for tab, groups in tabs.items()],
        groups=[dict(code=group, products=[group + p for p in prices])
                for group, (_, prices) in GROUPS.items()],
        products=[dict(code=p.code, currency=b"TP", price=p.price, per_piece=p.period[0] == "C")
                  for p in PRODUCTS.values()])


SHOP_INFO = _shop_info()


def point_info_to_c(wallet: Wallet) -> bytes:
    return schema.pack("Shop_GetPointInfoToC", kind=b"TP", amount=wallet.points)


def change_point_info_to_c(before: int, after: int) -> bytes:
    return schema.pack("Shop_ChangePointInfoToC", kind=b"TP", before=before, amount=after)


def inventory_info_to_c(wallet: Wallet) -> bytes:
    """The inventory (CShopInventory::SetInventory, 0x005113B0): items, emblems and
    titles, each a period item (kind T, start and end dates) or one with uses (kind C)."""
    shelves: dict[str, list[dict]] = {"1": [], "2": [], "3": []}
    for item in wallet.items.values():
        timed = not item.count
        shelves.get(item.code[1], shelves["1"]).append(dict(
            code=item.code, kind=b"T" if timed else b"C", count=item.count,
            start=_date(item.start) if timed else b"", end=_date(item.end) if timed else b""))
    return schema.pack(
        "Shop_GetInventoryInfoToC",
        items=dict(items=shelves["1"]), emblems=dict(items=shelves["2"], slots=4),
        titles=dict(items=shelves["3"], slots=4),
        points=[dict(kind=b"TP", amount=wallet.points)], now=_date(time.time()))
