import tempfile
import unittest
from pathlib import Path

from tools.check_reconstruction import COLUMNS, validate

ROOT = Path(__file__).resolve().parents[1]


class ReconstructionMetadataTest(unittest.TestCase):
    def test_scene_table_is_valid(self):
        self.assertEqual(
            validate(ROOT / "reconstruction/metadata/scene.tsv"), []
        )

    def test_rejects_unknown_provenance(self):
        with tempfile.TemporaryDirectory() as temp:
            table = Path(temp) / "bad.tsv"
            table.write_text(
                "\t".join(COLUMNS)
                + "\n"
                + "\t".join(
                    ["0x5810d0", "6", "f", "o", "r", "made-up", "e", "n"]
                )
                + "\n",
                encoding="utf-8",
            )
            self.assertTrue(validate(table))

    def test_rejects_duplicate_address_and_symbol(self):
        row = "\t".join(
            ["0x5810d0", "6", "f", "o", "r", "observed", "e", "n"]
        )
        with tempfile.TemporaryDirectory() as temp:
            table = Path(temp) / "dup.tsv"
            table.write_text(
                "\t".join(COLUMNS) + "\n" + row + "\n" + row + "\n",
                encoding="utf-8",
            )
            self.assertTrue(validate(table))


if __name__ == "__main__":
    unittest.main()
