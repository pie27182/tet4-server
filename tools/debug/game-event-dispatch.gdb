# Full game-event dispatch probe for Tet4.exe under Wine.
#
# Corrected object model:
#   SGlobalInfo is the static object at 0x60199318.
#   SGlobalInfo::GameEvent() returns *(CGlobalGameEvent **)(SGlobalInfo+0xec).
#   CGlobalGameEvent is heap-allocated by the SGlobalInfo constructor.
#   FntDispatchService is CGlobalGameEvent+0x18.
#   CGlobalGameEvent::FntDispatchService is aliased at 0x60112AA0 with
#   SGlobalInfo::ChannelDataList, so ECX alone does not identify the caller.
#
# This script captures the real CGlobalGameEvent instance at its constructor
# (0x60112660), then sets a hardware write watchpoint on its +0x18 functor
# target. That catches the actual registration/clear without stopping on every
# ChannelDataList accessor call.
#
# 0x602091AF is the registered game-dispatcher CFunctor::Call, not the
# God()->Call fallback. The true fallback branch starts at 0x602091BA. At
# 0x602091AF the AddMember event reaches the registered target with its parser
# service/command still null, and FUN_004FBB90 faults at 0x004FBBB4.
#
# TET4_GDB_ADD_MEMBER_HEADER=1 applies a memory-only diagnostic patch that
# sets the missing parser header to "s1e"/"c5e" before the dispatcher runs.

set pagination off
set confirm off
set width 0
set height 0
set print thread-events off
set print frame-arguments all
set print entry-values both
set backtrace limit 0
set backtrace past-main on
set backtrace past-entry on
set disassembly-flavor intel
set remotetimeout 20
set tcp auto-retry on
set tcp connect-timeout 30
set remote hardware-breakpoint-limit 4
set remote hardware-watchpoint-limit 4
handle SIGABRT nostop noprint pass
handle SIGUSR1 nostop noprint pass
handle SIGUSR2 nostop noprint pass
handle SIGSEGV stop print pass

python
import gdb
import os
import struct
import time

def out(text):
    gdb.write(text)

def now():
    return time.strftime("%H:%M:%S")

def reg(name):
    try:
        return int(gdb.parse_and_eval("$" + name)) & 0xFFFFFFFF
    except Exception:
        return None

def u32(addr):
    if addr is None:
        return None
    try:
        return struct.unpack("<I", gdb.selected_inferior().read_memory(addr, 4).tobytes())[0]
    except Exception:
        return None

def w32(addr, value):
    if addr is None:
        return False
    try:
        gdb.selected_inferior().write_memory(addr, struct.pack("<I", value))
        return True
    except Exception as exc:
        out(f"[{now()}] write 0x{addr:08x} failed: {exc}\n")
        return False

def safe(cmd, default=""):
    try:
        return gdb.execute(cmd, to_string=True)
    except Exception as exc:
        return default + f"[gdb error: {exc}]\n"

def bt(limit=None, full=True):
    cmd = "bt"
    if full:
        cmd += " -full"
    if limit:
        cmd += f" {limit}"
    return safe(cmd)

def all_bt(limit=8):
    return safe(f"thread apply all bt {limit}")

def regs():
    return safe("info registers")

def stack(n=48):
    esp = reg("esp")
    if esp is None:
        return ""
    return safe(f"x/{n}x 0x{esp:08x}")

def string_at(addr):
    if not addr:
        return ""
    return safe(f"x/1s 0x{addr:08x}")

STATE = {
    "game_event": None,
    "dispatcher": None,
    "last_target": 0,
    "game_wnd": None,
    "controller": None,
    "controller_name": None,
    "controller_names": set(),
    "hits": {},
}

def controller_name(this):
    """Read the MSVC std::string name stored at CNetworkController+4."""
    if not this:
        return ""
    capacity = u32(this + 0x1c)
    if capacity is None:
        return ""
    chars = this + 8 if capacity < 0x10 else u32(this + 8)
    return string_at(chars).strip()

def hit(name):
    STATE["hits"][name] = STATE["hits"].get(name, 0) + 1
    return STATE["hits"][name]

class WatchDispatcher(gdb.Breakpoint):
    def __init__(self, addr):
        super().__init__(f"*(unsigned int*)0x{addr:08x}", gdb.BP_WATCHPOINT, internal=False)
        self.addr = addr
        self.silent = True

    def stop(self):
        n = hit("dispatcher-write")
        new = u32(self.addr)
        out(
            f"\n[{now()}] === FntDispatchService TARGET WRITE hit#{n} "
            f"addr=0x{self.addr:08x} old=0x{(STATE['last_target'] or 0):08x} "
            f"new=0x{(new or 0):08x} ===\n"
        )
        out(bt(30))
        out(regs())
        out(stack(32))
        out(all_bt(8))
        STATE["last_target"] = new
        return False

class GameEventCtor(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x60112660", internal=False)
        self.silent = True

    def stop(self):
        n = hit("CGlobalGameEvent ctor")
        this = reg("ecx")
        out(f"\n[{now()}] === CGlobalGameEvent ctor hit#{n} this=0x{this:08x} ===\n")
        out(bt(30))
        out(regs())
        out(stack(32))
        if this is not None:
            STATE["game_event"] = this
            STATE["dispatcher"] = (this + 0x18) & 0xFFFFFFFF
            out(f"[{now()}] dispatcher functor = 0x{STATE['dispatcher']:08x}\n")
            WatchDispatcher(STATE["dispatcher"])
        return False

class GameWndCtor(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x004FF390", internal=False)
        self.silent = True

    def stop(self):
        n = hit("CTetGameWnd ctor")
        this = reg("ecx")
        STATE["game_wnd"] = this
        out(f"\n[{now()}] === CTetGameWnd ctor hit#{n} this=0x{this:08x} ===\n")
        out(bt(30))
        out(regs())
        out(stack(48))
        out(all_bt(8))
        return False

class OnSocketReceive(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x60208ED0", internal=False)
        self.silent = True

    def stop(self):
        n = hit("OnSocketReceive")
        this = reg("ecx")
        name = controller_name(this)
        STATE["controller"] = this
        STATE["controller_name"] = name
        if name not in STATE["controller_names"]:
            STATE["controller_names"].add(name)
            out(
                f"\n[{now()}] === OnSocketReceive controller hit#{n} "
                f"this=0x{(this or 0):08x} name={name!r} ===\n"
            )
            out(bt(20))
            out(regs())
            out(stack(32))
        elif n <= 4:
            out(
                f"[{now()}] [OnSocketReceive] hit#{n} "
                f"this=0x{(this or 0):08x} name={name!r}\n"
            )
        return False

class AddMember(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x00456BC0", internal=False)
        self.silent = True

    def stop(self):
        n = hit("AddMember")
        esp = reg("esp")
        stream = u32((esp + 4) & 0xFFFFFFFF) if esp else None
        out(
            f"\n[{now()}] === AddMemberToC converter hit#{n} "
            f"stream=0x{(stream or 0):08x} ===\n"
        )
        out(bt(30))
        out(regs())
        out(stack(48))
        if stream:
            out(safe(f"x/16x 0x{stream:08x}"))
        out(all_bt(8))
        return False

class LayerConverter(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x6012085D", internal=False)
        self.silent = True

    def stop(self):
        n = hit("PC_ConvertX2M layer")
        layer = reg("edi")
        converter = reg("eax")
        stream = reg("ebx")
        out(
            f"\n[{now()}] === PC_ConvertX2M layer converter hit#{n} "
            f"layer={layer} converter=0x{(converter or 0):08x} "
            f"stream=0x{(stream or 0):08x} ===\n"
        )
        if n <= 8:
            out(bt(15))
            out(regs())
            out(stack(24))
        return False

class GameModelInsert(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x004EC400", internal=False)
        self.silent = True

    def stop(self):
        n = hit("FUN_004EC400")
        esp = reg("esp")
        arg = u32((esp + 4) & 0xFFFFFFFF) if esp else None
        out(
            f"\n[{now()}] === FUN_004EC400 game-model insert hit#{n} "
            f"arg=0x{(arg or 0):08x} ===\n"
        )
        if n <= 4:
            out(bt(25))
            out(regs())
            out(stack(32))
            if arg:
                out(safe(f"x/16x 0x{arg:08x}"))
        return False

class VectorRefill(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x00461C50", internal=False)
        self.silent = True

    def stop(self):
        n = hit("FUN_00461C50")
        this = reg("ecx")
        out(
            f"\n[{now()}] === FUN_00461C50 vector refill hit#{n} "
            f"this=0x{(this or 0):08x} ===\n"
        )
        if n <= 4:
            out(bt(25))
            out(regs())
            out(stack(32))
        return False

class GameDispatch(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x602091AF", internal=False)
        self.silent = True

    def stop(self):
        n = hit("game-dispatch")
        parser = u32(reg("esp"))
        svc = u32((parser + 0x24) & 0xFFFFFFFF) if parser else None
        cmd = u32((parser + 0x28) & 0xFFFFFFFF) if parser else None
        target = u32(STATE["dispatcher"]) if STATE["dispatcher"] else None
        out(
            f"\n[{now()}] === GAME DISPATCHER CFunctor::Call hit#{n} "
            f"parser=0x{(parser or 0):08x} "
            f"parser+0x24=0x{(svc or 0):08x} parser+0x28=0x{(cmd or 0):08x} "
            f"dispatcher_target=0x{(target or 0):08x} "
            f"controller=0x{(STATE['controller'] or 0):08x} "
            f"controller_name={STATE['controller_name']!r} ===\n"
        )
        if os.environ.get("TET4_GDB_ADD_MEMBER_HEADER") == "1" and parser and not svc and not cmd:
            # Diagnostic only: prove that the AddMember crash is caused by the
            # missing parser header. The layer-0 Cmd_Channel_AddMemberToC
            # converter normally calls ApplyHeader("s1e", "c5e").
            if w32(parser + 0x24, 0x6017663C) and w32(parser + 0x28, 0x601766E0):
                svc = 0x6017663C
                cmd = 0x601766E0
                out(
                    f"[{now()}] DIAGNOSTIC PATCH: parser header set to "
                    f"\"s1e\"/\"c5e\" for AddMember\n"
                )
        out(bt(30))
        out(regs())
        out(stack(48))
        out(string_at(svc))
        out(string_at(cmd))
        out(all_bt(8))
        return False

class NullRead(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x004FBBB4", internal=False)
        self.silent = True

    def stop(self):
        n = hit("null-read")
        eax = reg("eax")
        ebx = reg("ebx")
        edi = reg("edi")
        target = u32(STATE["dispatcher"]) if STATE["dispatcher"] else None
        out(
            f"\n[{now()}] === FUN_004FBB90 0x4FBBB4 hit#{n} "
            f"eax=0x{(eax or 0):08x} ebx=0x{(ebx or 0):08x} edi=0x{(edi or 0):08x} "
            f"dispatcher_target=0x{(target or 0):08x} "
            f"controller_name={STATE['controller_name']!r} ===\n"
        )
        out(regs())
        out(stack(48))
        if eax == 0:
            out(f"[{now()}] NULL service pointer -> stop\n")
            out(bt(30))
            out(all_bt(10))
            return True
        out(string_at(ebx))
        return False

class Start(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x00460DD0", internal=False)
        self.silent = True

    def stop(self):
        n = hit("start")
        out(f"\n[{now()}] === CTetSingleMainBody::Start hit#{n} ===\n")
        out(bt(30))
        out(regs())
        out(stack(48))
        out(all_bt(10))
        return True

def on_stop(event):
    if isinstance(event, gdb.SignalEvent):
        sig = event.stop_signal
        if sig in ("SIGSEGV", "SIGABRT", "SIGILL", "SIGBUS"):
            out(f"\n[{now()}] === SIGNAL {sig} ===\n")
            out(safe("p $_siginfo"))
            try:
                addr = gdb.parse_and_eval("$_siginfo._sifields._sigfault.si_addr")
                out(f"fault_address={addr}\n")
            except Exception as exc:
                out(f"fault_address unavailable: {exc}\n")
            out(regs())
            out(bt(30))
            out(all_bt(10))

gdb.events.stop.connect(on_stop)

out(f"[{now()}] connecting to winedbg GDB proxy\n")
out(safe("target remote localhost:31337"))

GameEventCtor()
GameWndCtor()
OnSocketReceive()
LayerConverter()
AddMember()
GameModelInsert()
VectorRefill()
GameDispatch()
NullRead()
Start()

out(f"[{now()}] breakpoints installed; continuing\n")
try:
    gdb.execute("maintenance packet Hc-1", to_string=True)
except Exception as exc:
    out(f"[{now()}] Hc-1 failed: {exc}\n")
try:
    gdb.execute("continue")
except gdb.error as exc:
    out(f"[{now()}] continue error: {exc}\n")

out(f"\n[{now()}] === FINAL STOP ===\n")
out(bt(30))
out(regs())
out(stack(64))
out(all_bt(10))
try:
    gdb.execute("detach")
except Exception:
    pass
gdb.execute("quit")
end
