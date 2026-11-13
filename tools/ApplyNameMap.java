// Rename functions from a tab-separated map: <image address> <TAB> <name>.
// Usage as a Ghidra postScript: ApplyNameMap.java /path/to/name-map.tsv
// Addresses are image addresses (the ones in docs/ADDRESSES.md and the exports).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;

public class ApplyNameMap extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: ApplyNameMap.java <name-map.tsv>");
            return;
        }
        List<String> lines = Files.readAllLines(Paths.get(args[0]));
        int renamed = 0;
        int missing = 0;
        for (String raw : lines) {
            String line = raw.trim();
            if (line.isEmpty() || line.startsWith("#")) {
                continue;
            }
            String[] parts = line.split("\\t");
            if (parts.length < 2) {
                continue;
            }
            String text = parts[0].trim();
            if (text.startsWith("0x") || text.startsWith("0X")) {
                text = text.substring(2);
            }
            Address address;
            try {
                address = toAddr(Long.parseLong(text, 16));
            } catch (NumberFormatException e) {
                continue;
            }
            Function function = getFunctionAt(address);
            if (function == null) {
                function = getFunctionContaining(address);
            }
            if (function == null) {
                missing++;
                continue;
            }
            try {
                function.setName(parts[1].trim(), SourceType.USER_DEFINED);
                renamed++;
            } catch (Exception e) {
                println("rename failed at " + address + ": " + e.getMessage());
            }
        }
        println("ApplyNameMap: renamed=" + renamed + " missing=" + missing);
    }
}
