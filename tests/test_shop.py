"""The shop: the catalog, buying with TP, the inventory, and wallets in the database."""
import asyncio
import tempfile
import time
import unittest
from dataclasses import replace
from pathlib import Path

from tet4server.config import START_POINTS
from tet4server.domain import shop
from tet4server.protocol import codec
from tet4server.protocol.codec import pack
from tet4server.server import Ports, Services
from tet4server.services import views
from tet4server.storage import Database

from tests.support import Player


class WalletTest(unittest.TestCase):
    def test_catalog(self):
        info = codec.unpack("Shop_GetShopInfoToC", views.shop_info().body)
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
        self.assertEqual(wallet.points, START_POINTS + 1500)
        wallet.expire(now + 31 * 86400)
        self.assertEqual(sorted(wallet.items), ["T10003", "T10020", "T20062"])

    def test_items_that_act_when_bought(self):
        store = shop.Shop()

        async def buy(code: str) -> str | None:
            return await store.buy(b"alice", code, 1)

        async def run():
            self.assertIsNone(await buy("PF0HT10018C001"))           # 내공 +2000
            self.assertIsNone(await buy("PF0HT10017C001"))           # 내공 +1000
            record = store.wallet(b"alice").record
            self.assertEqual((record.rating, record.best_grade), (4000, 1))
            self.assertNotIn("T10017", store.wallet(b"alice").items)
            store.wallet(b"alice").record = replace(record, rating=74000, wins=3, losses=2)
            store.wallet(b"alice").points = 100_000
            self.assertEqual(await buy("PF0HT10017C001"), "마왕 이하 등급에서만 구매 가능합니다.")
            self.assertEqual(await buy("PF0HT10021H003"), "초인 등급 미만만 구매하실 수 있습니다.")
            self.assertIsNone(await buy("PF0HT10019C001"))           # 내공 back to the start
            self.assertIsNone(await buy("PF0HT10016C001"))           # the record cleared
            record = store.wallet(b"alice").record
            self.assertEqual((record.rating, record.plays, record.best_grade), (1000, 0, 1))

        asyncio.run(run())

    def test_bulk_rating_boost_cannot_cross_the_mawang_purchase_limit(self):
        store = shop.Shop()
        wallet = store.wallet(b"alice")
        wallet.points = 100_000
        wallet.record = replace(wallet.record, rating=72_000)  # 제왕, below the limit

        async def run():
            # One +2,000 purchase is allowed from 제왕, even though it raises the
            # player's resulting grade above 마왕.
            self.assertIsNone(await store.buy(b"alice", "PF0HT10018C001", 1))
            self.assertEqual(wallet.record.rating, 74_000)

            # A second unit in the same request would be bought from 초급신, so the
            # entire bulk request is refused without charging or applying either unit.
            before = wallet.points
            self.assertEqual(
                await store.buy(b"alice", "PF0HT10018C001", 2),
                "마왕 이하 등급에서만 구매 가능합니다.")
            self.assertEqual((wallet.record.rating, wallet.points), (74_000, before))

        asyncio.run(run())

    def test_inventory_shelves(self):
        wallet = shop.Wallet()
        for code in ("PF0HT10004D003", "PD0TT20062D000", "PD0TT30074D000", "PI0TT90002U000"):
            wallet.add(shop.PRODUCTS[code], 1, time.time())
        inventory = codec.unpack("Shop_GetInventoryInfoToC", views.inventory(wallet).body)
        self.assertEqual([i["code"] for i in inventory["items"]["items"]], [b"T10004", b"T90002"])
        self.assertEqual([i["code"] for i in inventory["emblems"]["items"]], [b"T20062"])
        self.assertEqual([i["code"] for i in inventory["titles"]["items"]], [b"T30074"])
        hold = inventory["items"]["items"][0]
        self.assertEqual((hold["kind"], len(hold["start"]), len(hold["end"])), (b"T", 14, 14))
        self.assertEqual([(p["kind"], p["amount"]) for p in inventory["points"]],
                         [(b"TP", START_POINTS)])


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
            self.assertEqual(first.wallet(b"alice").points, START_POINTS + 30 - 350 + 20)
            self.assertIn("T10005", first.wallet(b"alice").items)
            one.close()
            two.close()


class ShopServiceTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(self.services.close)
        self.ports = self.services.ports

    async def test_buy(self):
        alice = Player(self, b"alice", self.ports)
        await alice.enter_channel()
        await alice.channel.send(pack("Shop_GetShopInfoToS"))
        await alice.message(alice.channel, "Shop_GetShopInfoToC")

        await alice.channel.send(pack("Shop_ReqBuyProductToS", code=b"PF0HT10004D007", quantity=1))
        bought = await alice.until(alice.channel, "Shop_ResBuyProductToC")
        self.assertEqual((bought["result"], bought["status"]), (0, b"C"))
        change = await alice.until(alice.channel, "Shop_ChangePointInfoToC")
        self.assertEqual((change["before"], change["amount"]), (10_000, 9250))
        inventory = await alice.until(alice.channel, "Shop_GetInventoryInfoToC")
        self.assertEqual([i["code"] for i in inventory["items"]["items"]], [b"T10004"])

        # Too dear: refused with the reason the client shows.
        await alice.channel.send(pack("Shop_ReqBuyProductToS", code=b"PP0HT10006D030", quantity=1))
        refused = await alice.until(alice.channel, "Shop_ResBuyProductToC")
        self.assertEqual((refused["result"], refused["error"].decode("cp949")),
                         (1, "TP가 부족합니다."))

        # The items for a game: unlimited hold, at layer 3 of StartNewGameToC.
        await alice.channel.send(pack("Room_OrderTypeAutoEnterSingleModeRoomTetrisToS",
                                      member=b"alice", options=b"N000S"))
        await alice.message(alice.channel, "Room_OrderTypeAutoEnterSingleModeRoomTetrisToC")
        await alice.channel.send(pack("Channel_CreateRoomToS", member=b"alice"))
        await alice.message(alice.channel, "Channel_CreateRoomToC")
        await alice.enter_game(1)
        await alice.game.send(pack("Room_StartNewGameToS"))
        start = await alice.message(alice.game, "Room_StartNewGameToC")
        items = codec.unpack("Room_OrderTypeStartNewGameTetrisToC", start.body[4 + 8:])
        self.assertEqual([(i["member"], i["hold"], i["next"]) for i in items["items"]],
                         [(b"alice", 1, 0)])


class ProfileTest(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.services = await Services(ports=Ports(0, 0, 0, 0, 0)).start()
        self.addAsyncCleanup(self.services.close)
        self.ports = self.services.ports

    async def test_show_emblem_and_title(self):
        alice, bob = Player(self, b"alice", self.ports), Player(self, b"bob", self.ports)
        await alice.enter_channel()
        await bob.enter_channel()
        store = self.services.lobby.shop
        for code in ("PD0TT20062D000", "PD0TT30077D000", "PI0TT90003U000"):
            self.assertIsNone(await store.buy(b"alice", code, 1))

        # bob looks at alice's profile: her emblems and titles, with their names
        await bob.channel.send(pack("Channel_OrderTypeGetDisplayMemberInfoTetrisToS",
                                    member=b"alice"))
        profile = await bob.until(bob.channel, "Channel_OrderTypeGetDisplayMemberInfoTetrisToC")
        self.assertEqual([(e["code"], e["name"].decode("cp949"), e["mission"])
                          for e in profile["emblems"]["items"]],
                         [(b"T20062", "골목대장", 0xFFFFFFFF)])
        self.assertEqual((profile["emblems"]["slots"], profile["titles"]["slots"]), (4, 8))

        # alice shows them: everyone hears it, and her profile carries them
        await alice.channel.send(pack("Channel_OrderTypeChangeDisplayMemberInfoToS",
                                      emblem=b"T20062", title=b"T30077"))
        for player in (alice, bob):
            change = await player.until(player.channel,
                                        "Channel_OrderTypeChangeDisplayMemberInfoToC")
            self.assertEqual((change["member"], change["emblem"], change["title"]),
                             (b"alice", b"T20062", b"T30077"))
        wallet = store.wallet(b"alice")
        self.assertEqual((wallet.emblem, wallet.title), ("T20062", "T30077"))
        # one she does not own is refused
        self.assertFalse(await store.show(b"alice", "", "T30001"))
        self.assertEqual(store.wallet(b"alice").title, "T30077")

        # The trash button: the shown emblem goes, so she shows none, for everyone.
        await alice.channel.send(pack("Channel_RequestDeleteEmblemToS", code=b"T20062"))
        gone = await alice.until(alice.channel, "Channel_ResponseDeleteEmblemToC")
        self.assertEqual((gone["code"], gone["done"]), (b"T20062", 1))
        change = await bob.until(bob.channel, "Channel_OrderTypeChangeDisplayMemberInfoToC")
        self.assertEqual((change["emblem"], change["title"]), (b"", b"T30077"))
        await alice.channel.send(pack("Channel_RequestDeleteAliasToS", code=b"T30001"))
        kept = await alice.until(alice.channel, "Channel_ResponseDeleteAliasToC")
        self.assertEqual(kept["done"], 0)                     # not hers


if __name__ == "__main__":
    unittest.main()
