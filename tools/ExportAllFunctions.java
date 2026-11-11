// Exports every function of the current program as Ghidra decompiled C,
// plus a function index (name, entry, size, calling-convention signature).
// Usage: -postScript ExportAllFunctions.java <outdir>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.File;
import java.io.PrintWriter;

public class ExportAllFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("usage: -postScript ExportAllFunctions.java <outdir>");
        String outDir = args[0];
        String mod = currentProgram.getName();
        File dir = new File(outDir);
        dir.mkdirs();

        DecompInterface di = new DecompInterface();
        di.toggleCCode(true);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(currentProgram)) {
            println("open failed " + mod);
            return;
        }

        PrintWriter c = new PrintWriter(new File(dir, mod + ".c"), "UTF-8");
        PrintWriter idx = new PrintWriter(new File(dir, mod + ".index.tsv"), "UTF-8");
        c.println("// Module: " + mod);
        c.println("// ImageBase: " + currentProgram.getImageBase());
        c.println("// Decompiled by Ghidra " + ghidra.framework.Application.getApplicationVersion() + " (headless, default analysis)");
        c.println("// Functions below are in address order. Each block header gives the entry address and size.");
        idx.println("entry\tsize\tname\tsignature");

        int ok = 0, fail = 0, total = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            total++;
            long size = f.getBody().getNumAddresses();
            idx.println(f.getEntryPoint() + "\t" + size + "\t" + f.getName() + "\t" + f.getSignature().toString().replace("\t", " "));
            c.println("");
            c.println("/* ---- " + f.getName() + " @ " + f.getEntryPoint() + " size=" + size + " ---- */");
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                c.println(r.getDecompiledFunction().getC());
                ok++;
            } else {
                c.println("// DECOMPILE FAILED: " + (r == null ? "null" : r.getErrorMessage()));
                fail++;
            }
            if (total % 500 == 0) println(mod + " progress " + total);
        }
        c.println("// total=" + total + " ok=" + ok + " failed=" + fail);
        c.close();
        idx.close();
        di.dispose();
        println("ExportAllFunctions " + mod + " total=" + total + " ok=" + ok + " failed=" + fail);
    }
}
