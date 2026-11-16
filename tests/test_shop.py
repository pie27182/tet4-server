"""The shop: the catalog, buying with TP, the inventory, and wallets in the database."""
import tempfile
import time
import unittest
from pathlib import Path

from tet4server import schema, shop
from tet4server.accounts import Database
from tet4server.server import Ports, Services
from tet4server.xdr import Reader

from tests.test_multiplayer import ID, Player, fields


class WalletTest(unittest.TestCase):
    def test_catalog(self):
        info = schema.unpack("Shop_GetShopInfoToC", Reader(shop.SHOP_INFO[4:]))
        self.assertEqual([b["code"] for b in info["boards"]], [b"BDT001", b"BDT002", b"BDT003"])
        products = {p["code"]: p for p in info["products"]}
        # every group's products are in the catalog, priced in TP
        for group in info["groups"]:
            for code in group["products"]:
                self.assertEqual(products[code]["currency"], b"TP")
        self.assertEqual(products[b"PU0HT10003D007"]["price"], 3500)
        self.assertEqual(products[b"PF0HT10020C001"]["per_piece"], 1)

    def test_items(self):
        now = time.time()
        wallet = shop.Wallet()
        wallet.add(shop.PRODUCTS["PU0HT10003D007"], 2, now)       # fourteen days
        wallet.add(shop.PRODUCTS["PM0HT10001D030"], 1, now)       # a club: thirty more, TP back
        wallet.add(shop.PRODUCTS["PF0HT10020C001"], 3, now)       # three uses
        wallet.add(shop.PRODUCTS["PD0TT20062D000"], 1, now)       # a permanent emblem
        self.assertAlmostEqual(wallet.items["T10003"].end, now + 44 * 86400, delta=1)
        self.assertAlmostEqual(wallet.items["T10005"].end, now + 30 * 86400, delta=1)
        self.assertEqual(wallet.items["T10020"].count, 3)
        self.assertEqual(wallet.items["T20062"].end, shop.PERMANENT)
        self.assertEqual(wallet.points, shop.START_POINTS + 1500)
        wallet.expire(now + 31 * 86400)
        self.assertEqual(sorted(wallet.items), ["T10003", "T10020", "T20062"])

    def test_inventory_shelves(self):
        wallet = shop.Wallet()
        for code in ("PF0HT10004D003", "PD0TT20062D000", "PD0TT30074D000", "PI0TT90002U000"):
            wallet.add(shop.PRODUCTS[code], 1, time.time())
        r = Reader(shop.inventory_info_to_c(wallet))
        r.u32()
        inventory = schema.unpack("Shop_GetInventoryInfoToC", r)
        self.assertEqual([i["code"] for i in inventory["items"]["items"]], [b"T10004", b"T90002"])
        self.assertEqual([i["code"] for i in inventory["emblems"]["items"]], [b"T20062"])
        self.assertEqual([i["code"] for i in inventory["titles"]["items"]], [b"T30074"])
        hold = inventory["items"]["items"][0]
        self.assertEqual((hold["kind"], len(hold["start"]), len(hold["end"])), (b"T", 14, 14))
        self.assertEqual([(p["kind"], p["amount"]) for p in inventory["points"]],
                         [(b"TP", shop.START_POINTS)])


class ShopDatabaseTest(unittest.IsolatedAsyncioTestCase):
    async def test_wallets_persist(self):
        with tempfile.TemporaryDirectory() as tmp:
            db = Database(Path(tmp) / "tet4.db")
            store = shop.Shop(db)
            self.assertIsNone(await store.buy(b"alice", "PF0HT10005D007", 1))
            self.assertEqual(await store.earn(b"alice", 30), (9650, 9680))
            self.assertEqual(await store.buy(b"alice", "PP0HT10006D030", 1), "TP가 부족합니다.")
            db.close()
            db = Database(Path(tmp) / "tet4.db")
            again = shop.Shop(db)
            await again.load(b"alice")
            wallet = again.wallet(b"alice")
            self.assertEqual((wallet.points, sorted(wallet.items)), (9680, ["T10005"]))
            db.close()

    async def test_channels_sharing_the_database_keep_every_change(self):
        # Two channel processes, each with its own connection and its own copy of the
        # wallet: each change reads the database's, so neither undoes the other's.
        with tempfile.TemporaryDirectory() as tmp:
            one, two = Database(Path(tmp) / "tet4.db"), Database(Path(tmp) / "tet4.db")
            first, second = shop.Shop(one), shop.Shop(two)
            await first.load(b"alice")
            await second.load(b"alice")
            await first.earn(b"alice", 30)
            self.assertIsNone(await second.buy(b"alice", "PF0HT10005D007", 1))   # 350 TP
            await first.earn(b"alice", 20)
            self.assertEqual(first.wallet(b"alice").points, shop.START_POINTS + 30 - 350 + 20)
            self.assertIn("T10005", first.wallet(b"alice").items)
            one.close()
            two.close()


class ShopServiceTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(self.services.close)
        self.ports = self.services.ports

    async def test_buy(self):
        alice = Player(self, b"alice")
        await alice.enter_channel()
        await alice.channel.send(schema.pack("Shop_GetShopInfoToS"), layer=3)
        await alice.until(alice.channel, ID("Shop_GetShopInfoToC"), 3)

        await alice.channel.send(schema.pack("Shop_ReqBuyProductToS", code=b"PF0HT10004D007",
                                             quantity=1), layer=3)
        bought = fields(await alice.until(alice.channel, ID("Shop_ResBuyProductToC"), 3),
                        "Shop_ResBuyProductToC")
        self.assertEqual((bought["result"], bought["status"]), (0, b"C"))
        change = fields(await alice.until(alice.channel, ID("Shop_ChangePointInfoToC"), 3),
                        "Shop_ChangePointInfoToC")
        self.assertEqual((change["before"], change["amount"]), (10_000, 9250))
        inventory = fields(await alice.until(alice.channel, ID("Shop_GetInventoryInfoToC"), 3),
                           "Shop_GetInventoryInfoToC")
        self.assertEqual([i["code"] for i in inventory["items"]["items"]], [b"T10004"])

        # Too dear: refused with the reason the client shows.
        await alice.channel.send(schema.pack("Shop_ReqBuyProductToS", code=b"PP0HT10006D030",
                                             quantity=1), layer=3)
        refused = fields(await alice.until(alice.channel, ID("Shop_ResBuyProductToC"), 3),
                         "Shop_ResBuyProductToC")
        self.assertEqual((refused["result"], refused["error"].decode("cp949")),
                         (1, "TP가 부족합니다."))


if __name__ == "__main__":
    unittest.main()


class ProfileTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(self.services.close)
        self.ports = self.services.ports

    async def test_show_emblem_and_title(self):
        alice, bob = Player(self, b"alice"), Player(self, b"bob")
        await alice.enter_channel()
        await bob.enter_channel()
        store = self.services.lobby.shop
        for code in ("PD0TT20062D000", "PD0TT30077D000", "PI0TT90003U000"):
            self.assertIsNone(await store.buy(b"alice", code, 1))

        # bob looks at alice's profile: her emblems and titles, with their names
        await bob.channel.send(schema.pack("Channel_OrderTypeGetDisplayMemberInfoTetrisToS",
                                           k3e=b"alice"), layer=3)
        profile = fields(await bob.until(
            bob.channel, ID("Channel_OrderTypeGetDisplayMemberInfoTetrisToC"), 3),
            "Channel_OrderTypeGetDisplayMemberInfoTetrisToC")
        self.assertEqual([(e["code"], e["name"].decode("cp949"), e["mission"])
                          for e in profile["emblems"]["items"]],
                         [(b"T20062", "골목대장", 0xFFFFFFFF)])
        self.assertEqual((profile["emblems"]["slots"], profile["titles"]["slots"]), (4, 8))

        # alice shows them: everyone hears it, and her profile carries them
        await alice.channel.send(schema.pack("Channel_OrderTypeChangeDisplayMemberInfoToS",
                                             emblem=b"T20062", title=b"T30077"), layer=3)
        for player in (alice, bob):
            change = fields(await player.until(
                player.channel, ID("Channel_OrderTypeChangeDisplayMemberInfoToC"), 3),
                "Channel_OrderTypeChangeDisplayMemberInfoToC")
            self.assertEqual((change["k3e"], change["emblem"], change["title"]),
                             (b"alice", b"T20062", b"T30077"))
        wallet = store.wallet(b"alice")
        self.assertEqual((wallet.emblem, wallet.title), ("T20062", "T30077"))
        # one she does not own is refused
        self.assertFalse(await store.show(b"alice", "T30001", ""))
        self.assertEqual(store.wallet(b"alice").title, "T30077")

        # The trash button: the shown emblem goes, so she shows none, for everyone.
        await alice.channel.send(schema.pack("Channel_RequestDeleteEmblemToS", code=b"T20062"),
                                 layer=3)
        gone = fields(await alice.until(alice.channel, ID("Channel_ResponseDeleteEmblemToC"), 3),
                      "Channel_ResponseDeleteEmblemToC")
        self.assertEqual((gone["code"], gone["done"]), (b"T20062", 1))
        change = fields(await bob.until(
            bob.channel, ID("Channel_OrderTypeChangeDisplayMemberInfoToC"), 3),
            "Channel_OrderTypeChangeDisplayMemberInfoToC")
        self.assertEqual((change["emblem"], change["title"]), (b"", b"T30077"))
        await alice.channel.send(schema.pack("Channel_RequestDeleteAliasToS", code=b"T30001"),
                                 layer=3)
        kept = fields(await alice.until(alice.channel, ID("Channel_ResponseDeleteAliasToC"), 3),
                      "Channel_ResponseDeleteAliasToC")
        self.assertEqual(kept["done"], 0)                     # not hers
