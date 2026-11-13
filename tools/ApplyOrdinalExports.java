// Rename ordinal imports (Ordinal_1234) using a Ghidra .exports XML file.
// Usage: ApplyOrdinalExports.java <module.dll> <exports-file> [dry]
// Example: ApplyOrdinalExports.java mfc90.dll \
//          /opt/ghidra/Ghidra/Features/Base/data/symbols/win32/mfc90.exports
import ghidra.app.script.GhidraScript;
import ghidra.app.util.demangler.DemangledObject;
import ghidra.app.util.demangler.DemanglerUtil;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class ApplyOrdinalExports extends GhidraScript {
    private static final Pattern EXPORT =
        Pattern.compile("ORDINAL=\"(\\d+)\"\\s+NAME=\"([^\"]*)\"");

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: ApplyOrdinalExports.java <module.dll> <exports-file> [dry]");
            return;
        }
        String module = args[0].toLowerCase();
        boolean dry = args.length > 2 && args[2].equalsIgnoreCase("dry");

        Map<Integer, String> names = new HashMap<>();
        for (String line : Files.readAllLines(Paths.get(args[1]))) {
            Matcher m = EXPORT.matcher(line);
            if (m.find()) {
                names.put(Integer.parseInt(m.group(1)), m.group(2));
            }
        }
        println("ApplyOrdinalExports: " + names.size() + " ordinals for " + module);

        int renamed = 0;
        int unresolved = 0;
        SymbolIterator it = currentProgram.getSymbolTable().getAllSymbols(true);
        while (it.hasNext()) {
            Symbol symbol = it.next();
            String name = symbol.getName();
            if (!name.startsWith("Ordinal_")) {
                continue;
            }
            String parent = symbol.getParentNamespace() == null
                ? "" : symbol.getParentNamespace().getName(true).toLowerCase();
            if (!parent.contains(module.replace(".dll", ""))) {
                continue;
            }
            int ordinal;
            try {
                ordinal = Integer.parseInt(name.substring("Ordinal_".length()));
            } catch (NumberFormatException e) {
                continue;
            }
            String mangled = names.get(ordinal);
            if (mangled == null) {
                unresolved++;
                continue;
            }
            String newName = mangled;
            try {
                DemangledObject demangled = DemanglerUtil.demangle(currentProgram, mangled);
                if (demangled != null && demangled.getName() != null) {
                    newName = demangled.getName();
                }
            } catch (Exception e) {
                // keep the mangled name if demangling fails
            }
            if (dry) {
                if (renamed < 5) {
                    println("  " + name + " -> " + newName);
                }
                renamed++;
                continue;
            }
            try {
                symbol.setName(newName, SourceType.IMPORTED);
                renamed++;
            } catch (Exception e) {
                println("rename failed: " + name + " -> " + newName + ": " + e.getMessage());
            }
        }
        println("ApplyOrdinalExports: renamed=" + renamed + " unmapped=" + unresolved
            + (dry ? " (dry run)" : ""));
    }
}
