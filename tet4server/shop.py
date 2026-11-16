"""The shop (상점) and the players' wallets: Tetris Points (TP), earned in games and
spent on products, and the items those products put in the inventory (내 아이템).

A product code is P, a kind letter, 0, two letters, a five-digit number and a
period; the item it puts in the inventory is T and the same five digits, so
PU0HT10003D007 is seven days of T10003 (plus room host). Periods: Dnnn days, Hnnn
hours, Cnnn uses; D000 and U000 never run out. The client shows every product with
the name, icon, description and price of its own catalog
(Tet4/Shop/Data/ShopDataList.xml); the prices here are the ones it shows.
"""
import asyncio
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
# Emblems (2xxxx) and titles (3xxxx), sold as PD0TT<number>: number -> (name, period,
# TP). The emblem and title lists show the names (an emblem's picture is the client's).
DECORATION_NAMES: dict[str, str] = {}
for number, (name, period, price) in {
    20014: ("2009신인상수상자", "U000", 200), 20015: ("모드탐험가", "U000", 200),
    20016: ("콤보귀신", "U000", 200), 20017: ("콤보로먹고사는", "U000", 200),
    20018: ("T스핀의 달인", "U000", 200), 20019: ("1만승기록보유고객님", "U000", 200),
    20020: ("테트쫌했다.1000승", "U000", 200), 20021: ("테트범생이군", "U000", 200),
    20022: ("테트범생인걸", "U000", 200), 20023: ("섹시녀", "D030", 200),
    20024: ("섹시남", "D030", 200), 20025: ("깜찍녀", "D030", 200),
    20026: ("깜찍남", "D030", 200), 20028: ("스마트걸", "D030", 200),
    20029: ("카우보이", "D030", 200), 20030: ("프리티걸", "D030", 200),
    20031: ("프리티보이", "D030", 200), 20032: ("티맨", "D030", 200),
    20036: ("포포리", "U000", 200), 20037: ("이몽룡", "D030", 200),
    20038: ("성춘향", "D030", 200), 20039: ("황금동전", "D007", 200),
    20040: ("슬롯플러스", "D007", 200), 20041: ("주사위", "D007", 200),
    20046: ("우울모드", "D030", 200), 20047: ("쉼표G", "D030", 200),
    20048: ("내일은축구왕", "D030", 200), 20049: ("태극기", "D000", 200),
    20050: ("so HOT!", "D030", 200), 20051: ("T-Spin 달인", "D030", 200),
    20052: ("하트", "D000", 200), 20053: ("테트챔피온", "D000", 200),
    20054: ("칠전팔기", "D030", 200), 20055: ("일반 개근상", "D030", 200),
    20056: ("특수 개근상", "D030", 200), 20058: ("BOOK", "D030", 200),
    20059: ("커피 한잔의 여유", "D030", 200), 20060: ("가나다", "D030", 200),
    20062: ("골목대장", "D000", 200), 20063: ("인기쟁이", "D000", 200),
    20064: ("마당발", "D000", 200), 20065: ("슈퍼스타", "D000", 200),
    30001: ("2009신인상수상자", "U000", 100), 30002: ("모드탐험가", "U000", 100),
    30003: ("콤보귀신", "U000", 100), 30004: ("콤보로먹고사는", "U000", 100),
    30005: ("콤보쫌하는", "U000", 100), 30006: ("T스핀의 달인", "U000", 100),
    30007: ("1만승기록보유고객님", "U000", 100), 30008: ("테트쫌했다.1000승", "U000", 100),
    30009: ("테트범생이군", "U000", 100), 30010: ("테트범생인걸", "U000", 100),
    30011: ("솔로인지10년", "D030", 100), 30012: ("솔로천국커플지옥", "D030", 100),
    30014: ("꽃미남", "D030", 100), 30015: ("꽃미녀", "D030", 100),
    30016: ("완소볼매", "D030", 100), 30017: ("남성인권보장위원회", "D030", 100),
    30018: ("신년엔로또맞을", "D030", 100), 30019: ("오프라인", "D030", 100),
    30020: ("자리비움", "D030", 100), 30021: ("공부의 신", "D030", 100),
    30022: ("엣지 있는", "D030", 100), 30023: ("간지 좀 흐르는", "D030", 100),
    30024: ("새해복많이받으세요", "D030", 100), 30025: ("새뱃돈으로 차를 산", "D030", 100),
    30049: ("쿨하지못해미안해", "D030", 100), 30050: ("so cool", "D030", 100),
    30051: ("대한민국4강기원", "D030", 100), 30052: ("난! NY스타일", "D030", 100),
    30053: ("Republic of Korea", "D100", 100), 30054: ("노맵이 좋아", "D030", 100),
    30055: ("무조건 아템전!", "D030", 100), 30056: ("절대신", "D030", 100),
    30057: ("모태평민", "D030", 99), 30058: ("다음판에잘할게", "D030", 99),
    30059: ("테트잉여인증", "D030", 99), 30060: ("마음만은절대신", "D030", 99),
    30061: ("가을남자", "D030", 100), 30062: ("따라올테면따라와봐", "D030", 100),
    30063: ("너를원해", "D030", 100), 30064: ("실패를 모르는 자", "D030", 100),
    30065: ("출석의 달인", "D030", 100), 30066: ("난 테트만했어", "D030", 100),
    30067: ("SDF쇼퍼홀릭", "D000", 200), 30068: ("SDF모범생", "D000", 200),
    30069: ("SDF환경운동가", "D000", 200), 30070: ("슈퍼스타 TETRIS", "D030", 100),
    30071: ("매너 방장", "D030", 100), 30072: ("매너 플레이", "D030", 100),
    30073: ("테트가좋아", "D030", 200), 30074: ("골목대장", "D000", 200),
    30075: ("인기쟁이", "D000", 200), 30076: ("마당발", "D000", 200),
    30077: ("슈퍼스타", "D000", 200),
}.items():
    GROUPS[f"PD0TT{number}"] = (DECORATIONS, {period: price})
    DECORATION_NAMES[f"T{number}"] = name

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
    title: str = ""            # the title (T3xxxx) and emblem (T2xxxx) the player shows
    emblem: str = ""

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
        if self.title not in self.items:
            self.title = ""
        if self.emblem not in self.items:
            self.emblem = ""


class Shop:
    """Players' wallets. With a database, the database holds them: every change reads
    the wallet, changes it and writes it back in one transaction, so channels in other
    processes never undo each other's changes, and the wallets of the players in this
    channel are kept here to read. Without one, wallets last until the server stops."""

    def __init__(self, db: Database | None = None):
        self._db = db
        self._wallets: dict[bytes, Wallet] = {}

    async def load(self, member_id: bytes) -> None:
        """Read a player's wallet, on entering the channel."""
        if self._db:
            row = await asyncio.to_thread(self._db.load_wallet, member_id.decode("latin-1"))
            self._wallets[member_id] = _wallet(row)

    def forget(self, member_id: bytes) -> None:
        """A player left the channel: the database keeps the wallet."""
        if self._db:
            self._wallets.pop(member_id, None)

    def wallet(self, member_id: bytes) -> Wallet:
        """A player's wallet to read; one never changed is a new player's."""
        wallet = self._wallets.get(member_id) or Wallet()
        wallet.expire(time.time())
        return wallet

    def owns(self, member_id: bytes, item: str) -> bool:
        return item in self.wallet(member_id).items

    async def _change(self, member_id: bytes, change):
        """change(wallet) on the player's current wallet, kept; its result."""
        if self._db is None:
            wallet = self._wallets.setdefault(member_id, Wallet())
            wallet.expire(time.time())
            return change(wallet)
        name = member_id.decode("latin-1")

        def read_change_write():
            wallet = _wallet(self._db.load_wallet(name))
            wallet.expire(time.time())
            result = change(wallet)
            self._db.save_wallet(name, wallet.points, json.dumps(
                [asdict(i) for i in wallet.items.values()]), wallet.title, wallet.emblem)
            return result, wallet

        result, self._wallets[member_id] = await self._db.write(
            self._db.transaction, read_change_write)
        return result

    async def buy(self, member_id: bytes, code: str, quantity: int) -> str | None:
        """Buy `quantity` of a product with TP. None when bought, else why not, in the
        words the client shows."""
        product = PRODUCTS.get(code)
        if product is None or not 1 <= quantity <= 99:
            return "판매하지 않는 상품입니다."

        def pay(wallet: Wallet) -> str | None:
            if wallet.points < product.price * quantity:
                return "TP가 부족합니다."
            wallet.points -= product.price * quantity
            wallet.add(product, quantity, time.time())
            return None

        error = await self._change(member_id, pay)
        if error is None:
            log.info("%r bought %d x %s", member_id, quantity, code)
        return error

    async def show(self, member_id: bytes, title: str, emblem: str) -> bool:
        """Show an owned title and emblem; an empty code shows none."""
        def choose(wallet: Wallet) -> bool:
            if any(code and (code not in wallet.items or code[1] != kind)
                   for code, kind in ((title, "3"), (emblem, "2"))):
                return False
            wallet.title, wallet.emblem = title, emblem
            return True
        return await self._change(member_id, choose)

    async def discard(self, member_id: bytes, code: str, kind: str) -> tuple[bool, bool]:
        """Throw away an owned emblem (kind "2") or title ("3"): whether it was thrown
        away, and whether it was the one shown (then none is)."""
        def remove(wallet: Wallet) -> tuple[bool, bool]:
            if code[1:2] != kind or code not in wallet.items:
                return False, False
            del wallet.items[code]
            shown = code in (wallet.emblem, wallet.title)
            wallet.expire(time.time())          # forgets the shown one
            return True, shown
        return await self._change(member_id, remove)

    async def earn(self, member_id: bytes, points: int) -> tuple[int, int]:
        """Add TP; the balance before and after."""
        def add(wallet: Wallet) -> tuple[int, int]:
            wallet.points += points
            return wallet.points - points, wallet.points
        return await self._change(member_id, add)


def _wallet(row: tuple | None) -> Wallet:
    """A wallet from its database row; none is a new player's."""
    if row is None:
        return Wallet()
    points, items, title, emblem = row
    return Wallet(points, {i["code"]: Item(**i) for i in json.loads(items)}, title, emblem)


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
