import importlib.util
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def load_tool(name: str):
    spec = importlib.util.spec_from_file_location(name, ROOT / "tools" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


class DocsTest(unittest.TestCase):
    def test_the_message_reference_is_current(self):
        # docs/MESSAGES.md is generated from the server; run tools/messages.py after
        # adding or removing a handler.
        written = (ROOT / "docs" / "MESSAGES.md").read_text(encoding="utf-8")
        self.assertEqual(written, load_tool("messages").document())


if __name__ == "__main__":
    unittest.main()
