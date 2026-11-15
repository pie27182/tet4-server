# Catch the AddMember profile fast-fail (0xC0000409).
#
# Runtime MSVCR90 base in this prefix is 0x78370000. The fail reporters are:
#   __report_gsfailure 0x783E0B5A
#   _invoke_watson     0x783DCB13
#   abort              0x783E254B
# They are installed only after CGameLobbyModel::Msg_AddRoomMember is reached,
# so the normal startup SIGABRT path is not stopped.

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
handle SIGABRT nostop noprint pass
handle SIGSEGV stop print pass

python
import gdb
import time

def out(text):
    gdb.write(text)

def now():
    return time.strftime("%H:%M:%S")

def safe(cmd, default=""):
    try:
        return gdb.execute(cmd, to_string=True)
    except Exception as exc:
        return default + f"[gdb error: {exc}]\n"

def bt(limit=40):
    return safe(f"bt -full {limit}")

def all_bt(limit=15):
    return safe(f"thread apply all bt {limit}")

def regs():
    return safe("info registers")

def stack(n=64):
    return safe(f"x/{n}x $esp")

def stop_and_report(name):
    out(f"\n[{now()}] ===== {name} =====\n")
    out(bt(40))
    out(regs())
    out(stack(64))
    out(all_bt(15))
    return True

class FailureReporter(gdb.Breakpoint):
    def __init__(self, addr, name):
        super().__init__(f"*0x{addr:08x}", internal=False)
        self.reporter_name = name
        self.silent = True

    def stop(self):
        return stop_and_report(self.reporter_name)

class MsgAddRoomMember(gdb.Breakpoint):
    def __init__(self):
        super().__init__("*0x60915600", internal=False)
        self.silent = True
        self.installed = False

    def stop(self):
        out(f"\n[{now()}] ===== Msg_AddRoomMember =====\n")
        out(bt(30))
        out(regs())
        out(stack(48))
        if not self.installed:
            self.installed = True
            FailureReporter(0x783E0B5A, "__report_gsfailure")
            FailureReporter(0x783DCB13, "_invoke_watson")
            FailureReporter(0x783E254B, "abort")
            out(f"[{now()}] installed MSVCR90 fail reporters\n")
        return False

out(f"[{now()}] connecting\n")
out(safe("target remote localhost:31337"))
MsgAddRoomMember()
out(f"[{now()}] breakpoints installed; continuing\n")
try:
    gdb.execute("maintenance packet Hc-1", to_string=True)
except Exception as exc:
    out(f"[{now()}] Hc-1 failed: {exc}\n")
try:
    gdb.execute("continue")
except gdb.error as exc:
    out(f"[{now()}] continue error: {exc}\n")
out(f"\n[{now()}] ===== FINAL STOP =====\n")
out(bt(40))
out(regs())
out(stack(64))
out(all_bt(15))
try:
    gdb.execute("detach")
except Exception:
    pass
gdb.execute("quit")
end
