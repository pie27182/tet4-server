import unittest
from pathlib import Path

from tet4server import channel, cds, game, tpack
from tet4server.server import build_parser, service_specs


class LocalServerConfigurationTest(unittest.TestCase):
    def test_default_plan_uses_bootstrap_loopback_ports(self):
        args = build_parser().parse_args([])
        specs = service_specs(args)

        self.assertEqual([name for name, _, _ in specs],
                         ["TPack", "CDS", "channel", "game"])
        self.assertEqual(specs[0][1:], (tpack.serve, ("127.0.0.1", 10454)))
        self.assertEqual(specs[1][1:], (cds.serve, ("127.0.0.1", 15000)))
        self.assertEqual(specs[2][1:], (channel.serve, ("127.0.0.1", 15001, False)))
        self.assertEqual(
            specs[3][1:],
            (game.serve, ("127.0.0.1", channel.GAME_SERVER_PORT,
                          Path("live-runs/server/game-frames"))),
        )

    def test_discovery_only_is_explicit_and_capture_dir_is_configurable(self):
        args = build_parser().parse_args([
            "--channel-mode", "discovery-only",
            "--capture-dir", "/tmp/tet4-captures",
        ])
        specs = service_specs(args)
        self.assertEqual(specs[2][2], ("127.0.0.1", 15001, True))
        self.assertEqual(specs[3][2][-1], Path("/tmp/tet4-captures"))


if __name__ == "__main__":
    unittest.main()
