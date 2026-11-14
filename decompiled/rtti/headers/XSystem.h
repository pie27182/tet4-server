// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace XSystem {

class ?$XObjectHolder;
class ?$XObjectPool;
class ?$XReusableObjectPool;
class IIOCompletionPort;
class IOCompletionPortNT;
class IOCompletionPortWin98;
class ITimer;
class ReqItem;
class Thread;
class Timer;
class TimerQueue;
class bad_alloc;
class bad_exception;
class exception;
class length_error;
class logic_error;
class out_of_range;

class ?$XObjectHolder@VXEventA@@ : public ?$XObjectHolder {
public:
    virtual void vfunc_0(); // slot 0, 0x10007910
    virtual void vfunc_1(); // slot 1, 0x100070e0
    virtual void vfunc_2(); // slot 2, 0x10007180
    virtual void vfunc_3(); // slot 3, 0x100071a0
    virtual void vfunc_4(); // slot 4, 0x100071b0
    virtual void vfunc_5(); // slot 5, 0x100071c0
    virtual void vfunc_6(); // slot 6, 0x100071f0
};

class ?$XObjectPool@UXWorkItem@XThreadPool@@ : public ?$XObjectPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10005220
};

class ?$XObjectPool@VReqItem@XSignals@@ : public ?$XObjectPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10007990
};

class ?$XReusableObjectPool@VXEventA@@VXEventObjHolder@@ : public ?$XReusableObjectPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10007950
};

class IIOCompletionPort@ThreadPoolImpl@XSystem : public IIOCompletionPort {
public:
    virtual void vfunc_0(); // slot 0, 0x10008a74
    virtual void vfunc_1(); // slot 1, 0x10008a74
    virtual void vfunc_2(); // slot 2, 0x10008a74
    virtual void vfunc_3(); // slot 3, 0x10008a74
    virtual void vfunc_4(); // slot 4, 0x10008a74
};

class IOCompletionPortNT@ThreadPoolImpl@XSystem : public IOCompletionPortNT, public IIOCompletionPort {
public:
    virtual void vfunc_0(); // slot 0, 0x100024f0
    virtual void vfunc_1(); // slot 1, 0x10002460
    virtual void vfunc_2(); // slot 2, 0x10002490
    virtual void vfunc_3(); // slot 3, 0x100024a0
    virtual void vfunc_4(); // slot 4, 0x100024c0
};

class IOCompletionPortWin98@ThreadPoolImpl@XSystem : public IOCompletionPortWin98, public IIOCompletionPort {
public:
    virtual void vfunc_0(); // slot 0, 0x10002900
    virtual void vfunc_1(); // slot 1, 0x10002680
    virtual void vfunc_2(); // slot 2, 0x10002690
    virtual void vfunc_3(); // slot 3, 0x100026a0
    virtual void vfunc_4(); // slot 4, 0x10002770
};

class ITimer@TimerImpl@XSystem : public ITimer {
public:
    virtual void vfunc_0(); // slot 0, 0x100033c0
    virtual void vfunc_1(); // slot 1, 0x10008a74
};

class IXTimer {
public:
    virtual void vfunc_0(); // slot 0, 0x10008a74
    virtual void vfunc_1(); // slot 1, 0x10008a74
    virtual void vfunc_2(); // slot 2, 0x10008a74
    virtual void vfunc_3(); // slot 3, 0x10008a74
    virtual void vfunc_4(); // slot 4, 0x10008a74
    virtual void vfunc_5(); // slot 5, 0x10008a74
    virtual void vfunc_6(); // slot 6, 0x10008a74
    virtual void vfunc_7(); // slot 7, 0x10008a74
};

class ReqItem@XSignals : public ReqItem {
public:
    virtual void vfunc_0(); // slot 0, 0x10005e30
};

class Thread@Threading@XSystem : public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x10001df0
    virtual void vfunc_1(); // slot 1, 0x10008a74
};

class Timer@TimerImpl@XSystem : public Timer, public ITimer {
public:
    virtual void vfunc_0(); // slot 0, 0x10003bc0
    virtual void vfunc_1(); // slot 1, 0x10003b20
};

class TimerQueue@TimerImpl@XSystem : public TimerQueue, public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x100038c0
    virtual void vfunc_1(); // slot 1, 0x10003750
};

class XCriticalSection : public XSyncObject {
public:
    virtual void Lock(); // slot 0, 0x10013e20
    virtual void Unlock(); // slot 1, 0x10013e00
    virtual void vfunc_2(); // slot 2, 0x10004180
};

class XEventA : public XWaitableObject, public XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10004870
    virtual void Close(); // slot 1, 0x100133c0
    virtual void Attach(); // slot 2, 0x10013370
    virtual void Detach(); // slot 3, 0x10013360
};

class XEventObjHolder : public ?$XObjectHolder {
public:
    virtual void vfunc_0(); // slot 0, 0x10007910
    virtual void vfunc_1(); // slot 1, 0x10005d90
    virtual void vfunc_2(); // slot 2, 0x10005de0
    virtual void vfunc_3(); // slot 3, 0x10005e10
    virtual void vfunc_4(); // slot 4, 0x100071b0
    virtual void vfunc_5(); // slot 5, 0x100071c0
    virtual void vfunc_6(); // slot 6, 0x100071f0
};

class XEventW : public XWaitableObject, public XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x100049b0
    virtual void Close(); // slot 1, 0x100133c0
    virtual void Attach(); // slot 2, 0x10013370
    virtual void Detach(); // slot 3, 0x10013360
};

class XFixedSizeMemoryBlockPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10005360
};

class XLock {
public:
    virtual void vfunc_0(); // slot 0, 0x10004b30
};

class XMemoryPool {
public:
    virtual void vfunc_0(); // slot 0, 0x100054d0
};

class XMutexA : public XWaitableObject, public XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10004360
    virtual void Close(); // slot 1, 0x100133c0
    virtual void Attach(); // slot 2, 0x10013370
    virtual void Detach(); // slot 3, 0x10013360
};

class XMutexW : public XWaitableObject, public XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x100044a0
    virtual void Close(); // slot 1, 0x100133c0
    virtual void Attach(); // slot 2, 0x10013370
    virtual void Detach(); // slot 3, 0x10013360
};

class XRWCriticalSection {
public:
    virtual void vfunc_0(); // slot 0, 0x10004a60
};

class XRWLock {
public:
    virtual void vfunc_0(); // slot 0, 0x10004be0
};

class XSemaphoreA : public XWaitableObject, public XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x100045e0
    virtual void Close(); // slot 1, 0x100133c0
    virtual void Attach(); // slot 2, 0x10013370
    virtual void Detach(); // slot 3, 0x10013360
};

class XSemaphoreW : public XWaitableObject, public XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10004730
    virtual void Close(); // slot 1, 0x100133c0
    virtual void Attach(); // slot 2, 0x10013370
    virtual void Detach(); // slot 3, 0x10013360
};

class XSignals {
public:
    virtual void vfunc_0(); // slot 0, 0x10005e70
};

class XSmallObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10005940
};

class XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10008a74
    virtual void vfunc_1(); // slot 1, 0x10008a74
};

class XThread {
public:
    virtual void vfunc_0(); // slot 0, 0x10004ea0
    virtual void vfunc_1(); // slot 1, 0x10008a74
};

class XThreadPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10004f00
};

class XTimerQueue {
public:
    virtual void vfunc_0(); // slot 0, 0x10007ef0
};

class XTimerQueueTimer : public IXTimer {
public:
    virtual void vfunc_0(); // slot 0, 0x10008510
    virtual void vfunc_1(); // slot 1, 0x10008050
    virtual void vfunc_2(); // slot 2, 0x10008170
    virtual void vfunc_3(); // slot 3, 0x10008260
    virtual void vfunc_4(); // slot 4, 0x10008350
    virtual void vfunc_5(); // slot 5, 0x100083b0
    virtual void vfunc_6(); // slot 6, 0x10008420
    virtual void vfunc_7(); // slot 7, 0x10008480
};

class XWaitableCollection {
public:
    virtual void vfunc_0(); // slot 0, 0x10004c90
};

class XWaitableObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10004230
    virtual void Close(); // slot 1, 0x100133c0
    virtual void Attach(); // slot 2, 0x10013370
    virtual void Detach(); // slot 3, 0x10013360
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001140
    virtual void vfunc_1(); // slot 1, 0x10008a06
};

class bad_exception@std : public bad_exception, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x1000f8fb
    virtual void vfunc_1(); // slot 1, 0x10008a06
};

class exception@std : public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10008a13
    virtual void vfunc_1(); // slot 1, 0x10008a06
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001230
    virtual void vfunc_1(); // slot 1, 0x10001220
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001230
    virtual void vfunc_1(); // slot 1, 0x10001220
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x1000f239
    virtual void vfunc_1(); // slot 1, 0x10001220
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x10008a3d
};

}  // namespace XSystem
