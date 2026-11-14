// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace XInNetwork {

class ?$XObjectPool;
class ?$XThreadSafeObject;
class Acceptor;
class AcceptorThread;
class Address;
class AsyncConnectThread;
class AsyncIOThread_AsyncEvent;
class AsyncIOThread_IOCP;
class AsyncResult;
class AsyncResultConnect;
class AsyncResultConnectError;
class AsyncResultConnectErrorEx;
class AsyncResultConnectEx;
class AsyncResultDisconnect;
class AsyncResultInterrupt;
class AsyncResultInterruptEx;
class AsyncResultRecv;
class AsyncResultSend;
class AsyncResultTimeout;
class AsyncResultTimeoutEx;
class AsyncResultUDP;
class AsyncResultUDPICMPPortUnreachable;
class AsyncResultUDPRecv;
class AsyncResultUDPRecvEx;
class AsyncResultUDPSend;
class AsyncResultUDPSendEx;
class Connector;
class Filter;
class IAcceptor;
class IAddress;
class IAsyncIOThread;
class IConnector;
class IFilter;
class IInterrupter;
class ILink;
class IPendingConnet;
class IUDPListener;
class IUDPListenerEx;
class IWSAInterrupter;
class Impl;
class Interrupter;
class PendingConnet;
class PendingConnetEx;
class PreActiveList;
class TCPLink;
class Thread;
class UDPListener;
class UDPListenerEx;
class WSAInterrupter;
class XSyncObject;
class XThread;
class XWaitableObject;
class _OVERLAPPED;
class bad_alloc;
class bad_exception;
class exception;
class length_error;
class logic_error;
class out_of_range;

class ?$XObjectPool@VXInAsyncResultTCP@@ : public ?$XObjectPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10006520
};

class ?$XObjectPool@VXInAsyncResultUDP@@ : public ?$XObjectPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10008610
};

class ?$XObjectPool@VXInPeer@@ : public ?$XObjectPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10007790
};

class ?$XObjectPool@VXInTCPLink@@ : public ?$XObjectPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10007410
};

class ?$XThreadSafeObject@V?$list@PAVIXInLink@@V?$allocator@PAVIXInLink@@@std@@@std@@ : public ?$XThreadSafeObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10005c90
};

class ?$XThreadSafeObject@VXMemoryStream@@ : public ?$XThreadSafeObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10008270
};

class Acceptor@Impl@XInNetwork : public Acceptor, public IAcceptor {
public:
    virtual void vfunc_0(); // slot 0, 0x100027b0
    virtual void vfunc_1(); // slot 1, 0x10023810
    virtual void vfunc_2(); // slot 2, 0x10023720
    virtual void vfunc_3(); // slot 3, 0x10023630
    virtual void vfunc_4(); // slot 4, 0x10023600
    virtual void vfunc_5(); // slot 5, 0x10023f90
    virtual void vfunc_6(); // slot 6, 0x10023dd0
    virtual void vfunc_7(); // slot 7, 0x100234e0
    virtual void vfunc_8(); // slot 8, 0x10023150
    virtual void vfunc_9(); // slot 9, 0x10023130
    virtual void vfunc_10(); // slot 10, 0x10023460
    virtual void vfunc_11(); // slot 11, 0x100233e0
    virtual void vfunc_12(); // slot 12, 0x10023360
    virtual void vfunc_13(); // slot 13, 0x100232e0
};

class AcceptorThread@Impl@XInNetwork : public AcceptorThread, public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x100030f0
    virtual void vfunc_1(); // slot 1, 0x10022c70
};

class Address@Impl@XInNetwork : public Address, public IAddress {
public:
    virtual void vfunc_0(); // slot 0, 0x10001100
    virtual void vfunc_1(); // slot 1, 0x10025020
    virtual void vfunc_2(); // slot 2, 0x10024ff0
    virtual void vfunc_3(); // slot 3, 0x10024fb0
    virtual void vfunc_4(); // slot 4, 0x10024f80
    virtual void vfunc_5(); // slot 5, 0x10024f60
    virtual void vfunc_6(); // slot 6, 0x10024f70
};

class AsyncConnectThread@Impl@XInNetwork : public AsyncConnectThread, public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x10003130
    virtual void vfunc_1(); // slot 1, 0x10022b60
};

class AsyncIOThread_AsyncEvent@Impl@XInNetwork : public AsyncIOThread_AsyncEvent, public IAsyncIOThread {
public:
    virtual void vfunc_0(); // slot 0, 0x10001c40
    virtual void vfunc_1(); // slot 1, 0x10029650
    virtual void vfunc_2(); // slot 2, 0x10029640
    virtual void vfunc_3(); // slot 3, 0x10029720
    virtual void vfunc_4(); // slot 4, 0x100296e0
    virtual void vfunc_5(); // slot 5, 0x10029700
    virtual void vfunc_6(); // slot 6, 0x100296c0
};

class AsyncIOThread_IOCP@Impl@XInNetwork : public AsyncIOThread_IOCP, public IAsyncIOThread {
public:
    virtual void vfunc_0(); // slot 0, 0x100026c0
    virtual void vfunc_1(); // slot 1, 0x10024470
    virtual void vfunc_2(); // slot 2, 0x10024460
    virtual void vfunc_3(); // slot 3, 0x10024440
    virtual void vfunc_4(); // slot 4, 0x10024420
    virtual void vfunc_5(); // slot 5, 0x10024400
    virtual void vfunc_6(); // slot 6, 0x100243e0
};

class AsyncResult@Impl@XInNetwork : public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x10008afe
};

class AsyncResultConnect@Impl@XInNetwork : public AsyncResultConnect, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x100294a0
};

class AsyncResultConnectError@Impl@XInNetwork : public AsyncResultConnectError, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x10029170
};

class AsyncResultConnectErrorEx@Impl@XInNetwork : public AsyncResultConnectErrorEx, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x10029080
};

class AsyncResultConnectEx@Impl@XInNetwork : public AsyncResultConnectEx, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x100293b0
};

class AsyncResultDisconnect@Impl@XInNetwork : public AsyncResultDisconnect, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004840
    virtual void vfunc_1(); // slot 1, 0x10028ff0
};

class AsyncResultInterrupt@Impl@XInNetwork : public AsyncResultInterrupt, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x10028dd0
};

class AsyncResultInterruptEx@Impl@XInNetwork : public AsyncResultInterruptEx, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x10028cf0
};

class AsyncResultRecv@Impl@XInNetwork : public AsyncResultRecv, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004870
    virtual void vfunc_1(); // slot 1, 0x100286f0
};

class AsyncResultSend@Impl@XInNetwork : public AsyncResultSend, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cc0
    virtual void vfunc_1(); // slot 1, 0x100283d0
};

class AsyncResultTimeout@Impl@XInNetwork : public AsyncResultTimeout, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x10028190
};

class AsyncResultTimeoutEx@Impl@XInNetwork : public AsyncResultTimeoutEx, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004cf0
    virtual void vfunc_1(); // slot 1, 0x100280b0
};

class AsyncResultUDP@Impl@XInNetwork : public AsyncResultUDP, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x100026e0
    virtual void vfunc_1(); // slot 1, 0x10008afe
};

class AsyncResultUDPICMPPortUnreachable@Impl@XInNetwork : public AsyncResultUDPICMPPortUnreachable, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004df0
    virtual void vfunc_1(); // slot 1, 0x10027f00
};

class AsyncResultUDPRecv@Impl@XInNetwork : public AsyncResultUDPRecv, public AsyncResultUDP, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004e20
    virtual void vfunc_1(); // slot 1, 0x100175a0
};

class AsyncResultUDPRecvEx@Impl@XInNetwork : public AsyncResultUDPRecvEx, public AsyncResultUDP, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004e50
    virtual void vfunc_1(); // slot 1, 0x100174d0
};

class AsyncResultUDPSend@Impl@XInNetwork : public AsyncResultUDPSend, public AsyncResultUDP, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004e80
    virtual void vfunc_1(); // slot 1, 0x10017190
};

class AsyncResultUDPSendEx@Impl@XInNetwork : public AsyncResultUDPSendEx, public AsyncResultUDP, public AsyncResult, public _OVERLAPPED {
public:
    virtual void vfunc_0(); // slot 0, 0x10004eb0
    virtual void vfunc_1(); // slot 1, 0x10017160
};

class Connector@Impl@XInNetwork : public Connector, public IConnector {
public:
    virtual void vfunc_0(); // slot 0, 0x10003910
    virtual void vfunc_1(); // slot 1, 0x10020150
    virtual void vfunc_2(); // slot 2, 0x100204f0
    virtual void vfunc_3(); // slot 3, 0x100207b0
    virtual void vfunc_4(); // slot 4, 0x100215e0
    virtual void vfunc_5(); // slot 5, 0x10021930
    virtual void vfunc_6(); // slot 6, 0x1001f820
    virtual void vfunc_7(); // slot 7, 0x1001fbe0
    virtual void vfunc_8(); // slot 8, 0x1001fec0
    virtual void vfunc_9(); // slot 9, 0x10020ff0
    virtual void vfunc_10(); // slot 10, 0x10021350
    virtual void vfunc_11(); // slot 11, 0x1001ef40
    virtual void vfunc_12(); // slot 12, 0x1001ef20
    virtual void vfunc_13(); // slot 13, 0x1001f7a0
    virtual void vfunc_14(); // slot 14, 0x1001f720
    virtual void vfunc_15(); // slot 15, 0x1001f6a0
    virtual void vfunc_16(); // slot 16, 0x1001f620
    virtual void vfunc_17(); // slot 17, 0x1001f5a0
    virtual void vfunc_18(); // slot 18, 0x1001f520
    virtual void vfunc_19(); // slot 19, 0x1001f4a0
    virtual void vfunc_20(); // slot 20, 0x1001f420
    virtual void vfunc_21(); // slot 21, 0x1001f270
    virtual void vfunc_22(); // slot 22, 0x1001f390
    virtual void vfunc_23(); // slot 23, 0x1001f300
};

class Filter@Impl@XInNetwork : public Filter, public IFilter {
public:
    virtual void vfunc_0(); // slot 0, 0x10003930
    virtual void vfunc_1(); // slot 1, 0x1001ed30
    virtual void vfunc_2(); // slot 2, 0x1001ece0
    virtual void vfunc_3(); // slot 3, 0x1001edf0
    virtual void vfunc_4(); // slot 4, 0x1001ecf0
    virtual void vfunc_5(); // slot 5, 0x1001ecd0
    virtual void vfunc_6(); // slot 6, 0x1001eca0
};

class IAcceptor@Impl@XInNetwork : public IAcceptor {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
};

class IAddress@Impl@XInNetwork : public IAddress {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
};

class IAsyncIOThread@Impl@XInNetwork : public IAsyncIOThread {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
};

class IConnector@Impl@XInNetwork : public IConnector {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
    virtual void vfunc_15(); // slot 15, 0x10008afe
    virtual void vfunc_16(); // slot 16, 0x10008afe
    virtual void vfunc_17(); // slot 17, 0x10008afe
    virtual void vfunc_18(); // slot 18, 0x10008afe
    virtual void vfunc_19(); // slot 19, 0x10008afe
    virtual void vfunc_20(); // slot 20, 0x10008afe
    virtual void vfunc_21(); // slot 21, 0x10008afe
    virtual void vfunc_22(); // slot 22, 0x10008afe
    virtual void vfunc_23(); // slot 23, 0x10008afe
};

class IFilter@Impl@XInNetwork : public IFilter {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
};

class IInterrupter@Impl@XInNetwork : public IInterrupter {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
};

class ILink@Impl@XInNetwork : public ILink {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
    virtual void vfunc_15(); // slot 15, 0x10008afe
    virtual void vfunc_16(); // slot 16, 0x10008afe
    virtual void vfunc_17(); // slot 17, 0x10008afe
    virtual void vfunc_18(); // slot 18, 0x10008afe
    virtual void vfunc_19(); // slot 19, 0x10008afe
    virtual void vfunc_20(); // slot 20, 0x10008afe
    virtual void vfunc_21(); // slot 21, 0x10008afe
    virtual void vfunc_22(); // slot 22, 0x10008afe
    virtual void vfunc_23(); // slot 23, 0x10008afe
    virtual void vfunc_24(); // slot 24, 0x10008afe
    virtual void vfunc_25(); // slot 25, 0x10008afe
    virtual void vfunc_26(); // slot 26, 0x10008afe
    virtual void vfunc_27(); // slot 27, 0x10008afe
    virtual void vfunc_28(); // slot 28, 0x10008afe
};

class IPendingConnet@Connector@Impl@XInNetwork : public IPendingConnet {
public:
    virtual void vfunc_0(); // slot 0, 0x100038d0
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
};

class IUDPListener@Impl@XInNetwork : public IUDPListener {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
    virtual void vfunc_15(); // slot 15, 0x10008afe
    virtual void vfunc_16(); // slot 16, 0x10008afe
    virtual void vfunc_17(); // slot 17, 0x10008afe
};

class IUDPListenerEx@Impl@XInNetwork : public IUDPListenerEx {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
    virtual void vfunc_15(); // slot 15, 0x10008afe
    virtual void vfunc_16(); // slot 16, 0x10008afe
    virtual void vfunc_17(); // slot 17, 0x10008afe
    virtual void vfunc_18(); // slot 18, 0x10008afe
    virtual void vfunc_19(); // slot 19, 0x10008afe
    virtual void vfunc_20(); // slot 20, 0x10008afe
    virtual void vfunc_21(); // slot 21, 0x10008afe
    virtual void vfunc_22(); // slot 22, 0x10008afe
    virtual void vfunc_23(); // slot 23, 0x10008afe
    virtual void vfunc_24(); // slot 24, 0x10008afe
};

class IWSAInterrupter@Impl@XInNetwork : public IWSAInterrupter {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
};

class IXInAcceptor {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
};

class IXInAsyncIOEngine {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
};

class IXInConnector {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
    virtual void vfunc_15(); // slot 15, 0x10008afe
    virtual void vfunc_16(); // slot 16, 0x10008afe
    virtual void vfunc_17(); // slot 17, 0x10008afe
    virtual void vfunc_18(); // slot 18, 0x10008afe
    virtual void vfunc_19(); // slot 19, 0x10008afe
    virtual void vfunc_20(); // slot 20, 0x10008afe
    virtual void vfunc_21(); // slot 21, 0x10008afe
    virtual void vfunc_22(); // slot 22, 0x10008afe
    virtual void vfunc_23(); // slot 23, 0x10008afe
};

class IXInLink {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
    virtual void vfunc_15(); // slot 15, 0x10008afe
    virtual void vfunc_16(); // slot 16, 0x10008afe
    virtual void vfunc_17(); // slot 17, 0x10008afe
    virtual void vfunc_18(); // slot 18, 0x10008afe
};

class IXInPeer {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
};

class IXInUDPListener {
public:
    virtual void vfunc_0(); // slot 0, 0x10008afe
    virtual void vfunc_1(); // slot 1, 0x10008afe
    virtual void vfunc_2(); // slot 2, 0x10008afe
    virtual void vfunc_3(); // slot 3, 0x10008afe
    virtual void vfunc_4(); // slot 4, 0x10008afe
    virtual void vfunc_5(); // slot 5, 0x10008afe
    virtual void vfunc_6(); // slot 6, 0x10008afe
    virtual void vfunc_7(); // slot 7, 0x10008afe
    virtual void vfunc_8(); // slot 8, 0x10008afe
    virtual void vfunc_9(); // slot 9, 0x10008afe
    virtual void vfunc_10(); // slot 10, 0x10008afe
    virtual void vfunc_11(); // slot 11, 0x10008afe
    virtual void vfunc_12(); // slot 12, 0x10008afe
    virtual void vfunc_13(); // slot 13, 0x10008afe
    virtual void vfunc_14(); // slot 14, 0x10008afe
};

class Impl@AsyncIOThread_AsyncEvent@0XInNetwork : public Impl, public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x10001c20
    virtual void vfunc_1(); // slot 1, 0x100019a0
};

class Interrupter@Impl@XInNetwork : public Interrupter, public IInterrupter {
public:
    virtual void vfunc_0(); // slot 0, 0x10001080
    virtual void vfunc_1(); // slot 1, 0x10025500
    virtual void vfunc_2(); // slot 2, 0x10025480
    virtual void vfunc_3(); // slot 3, 0x10025470
};

class PendingConnet@Connector@Impl@XInNetwork : public PendingConnet, public IPendingConnet {
public:
    virtual void vfunc_0(); // slot 0, 0x100038d0
    virtual void vfunc_1(); // slot 1, 0x100032b0
    virtual void vfunc_2(); // slot 2, 0x10003370
    virtual void vfunc_3(); // slot 3, 0x10003430
    virtual void vfunc_4(); // slot 4, 0x100034f0
};

class PendingConnetEx@Connector@Impl@XInNetwork : public PendingConnetEx, public IPendingConnet {
public:
    virtual void vfunc_0(); // slot 0, 0x100038d0
    virtual void vfunc_1(); // slot 1, 0x100035c0
    virtual void vfunc_2(); // slot 2, 0x10003680
    virtual void vfunc_3(); // slot 3, 0x10003740
    virtual void vfunc_4(); // slot 4, 0x10003800
};

class PreActiveList@Impl@XInNetwork : public PreActiveList {
public:
    virtual void vfunc_0(); // slot 0, 0x10003950
};

class TCPLink@Impl@XInNetwork : public TCPLink, public ILink {
public:
    virtual void vfunc_0(); // slot 0, 0x10003a60
    virtual void vfunc_1(); // slot 1, 0x1001b590
    virtual void vfunc_2(); // slot 2, 0x1001b560
    virtual void vfunc_3(); // slot 3, 0x1001c440
    virtual void vfunc_4(); // slot 4, 0x1001b550
    virtual void vfunc_5(); // slot 5, 0x1001b540
    virtual void vfunc_6(); // slot 6, 0x1001d710
    virtual void vfunc_7(); // slot 7, 0x1001b4a0
    virtual void vfunc_8(); // slot 8, 0x1001b4d0
    virtual void vfunc_9(); // slot 9, 0x1001e510
    virtual void vfunc_10(); // slot 10, 0x1001b450
    virtual void vfunc_11(); // slot 11, 0x1001b480
    virtual void vfunc_12(); // slot 12, 0x1001b440
    virtual void vfunc_13(); // slot 13, 0x1001b410
    virtual void vfunc_14(); // slot 14, 0x1001b3e0
    virtual void vfunc_15(); // slot 15, 0x1001b3b0
    virtual void vfunc_16(); // slot 16, 0x1001b360
    virtual void vfunc_17(); // slot 17, 0x1001b340
    virtual void vfunc_18(); // slot 18, 0x1001bd60
    virtual void vfunc_19(); // slot 19, 0x1001bc60
    virtual void vfunc_20(); // slot 20, 0x1001bb80
    virtual void vfunc_21(); // slot 21, 0x1001ba80
    virtual void vfunc_22(); // slot 22, 0x1001b9a0
    virtual void vfunc_23(); // slot 23, 0x1001b8c0
    virtual void vfunc_24(); // slot 24, 0x1001b810
    virtual void vfunc_25(); // slot 25, 0x1001b2d0
    virtual void vfunc_26(); // slot 26, 0x1001b2b0
    virtual void vfunc_27(); // slot 27, 0x1001b290
    virtual void vfunc_28(); // slot 28, 0x1001b270
};

class UDPListener@Impl@XInNetwork : public UDPListener, public IUDPListener {
public:
    virtual void vfunc_0(); // slot 0, 0x10004da0
    virtual void vfunc_1(); // slot 1, 0x100182e0
    virtual void vfunc_2(); // slot 2, 0x100184f0
    virtual void vfunc_3(); // slot 3, 0x10018220
    virtual void vfunc_4(); // slot 4, 0x10017a90
    virtual void vfunc_5(); // slot 5, 0x100181a0
    virtual void vfunc_6(); // slot 6, 0x10018170
    virtual void vfunc_7(); // slot 7, 0x10017a40
    virtual void vfunc_8(); // slot 8, 0x100179f0
    virtual void vfunc_9(); // slot 9, 0x10018bd0
    virtual void vfunc_10(); // slot 10, 0x10017920
    virtual void vfunc_11(); // slot 11, 0x10017950
    virtual void vfunc_12(); // slot 12, 0x10018b80
    virtual void vfunc_13(); // slot 13, 0x10017e00
    virtual void vfunc_14(); // slot 14, 0x10017d20
    virtual void vfunc_15(); // slot 15, 0x10017c50
    virtual void vfunc_16(); // slot 16, 0x10017b70
    virtual void vfunc_17(); // slot 17, 0x10017af0
};

class UDPListenerEx@Impl@XInNetwork : public UDPListenerEx, public IUDPListenerEx {
public:
    virtual void vfunc_0(); // slot 0, 0x10004d10
    virtual void vfunc_1(); // slot 1, 0x10019ea0
    virtual void vfunc_2(); // slot 2, 0x1001a0b0
    virtual void vfunc_3(); // slot 3, 0x10019de0
    virtual void vfunc_4(); // slot 4, 0x10019d60
    virtual void vfunc_5(); // slot 5, 0x10019d30
    virtual void vfunc_6(); // slot 6, 0x10019110
    virtual void vfunc_7(); // slot 7, 0x100190c0
    virtual void vfunc_8(); // slot 8, 0x10019bd0
    virtual void vfunc_9(); // slot 9, 0x1001ac80
    virtual void vfunc_10(); // slot 10, 0x10018f90
    virtual void vfunc_11(); // slot 11, 0x10018fc0
    virtual void vfunc_12(); // slot 12, 0x1001aa40
    virtual void vfunc_13(); // slot 13, 0x1001ae50
    virtual void vfunc_14(); // slot 14, 0x10018ed0
    virtual void vfunc_15(); // slot 15, 0x10018f00
    virtual void vfunc_16(); // slot 16, 0x1001ae00
    virtual void vfunc_17(); // slot 17, 0x10019060
    virtual void vfunc_18(); // slot 18, 0x10019040
    virtual void vfunc_19(); // slot 19, 0x10019510
    virtual void vfunc_20(); // slot 20, 0x10019430
    virtual void vfunc_21(); // slot 21, 0x10019360
    virtual void vfunc_22(); // slot 22, 0x10019280
    virtual void vfunc_23(); // slot 23, 0x10019200
    virtual void vfunc_24(); // slot 24, 0x10019180
    virtual void vfunc_25(); // slot 25, 0x10019080
};

class WSAInterrupter@Impl@XInNetwork : public WSAInterrupter, public IWSAInterrupter {
public:
    virtual void vfunc_0(); // slot 0, 0x100010c0
    virtual void vfunc_1(); // slot 1, 0x10025400
    virtual void vfunc_2(); // slot 2, 0x100253e0
    virtual void vfunc_3(); // slot 3, 0x100253d0
    virtual void vfunc_4(); // slot 4, 0x100253a0
    virtual void vfunc_5(); // slot 5, 0x10025390
};

class XEventA : public XWaitableObject, public XSyncObject {
public:
    virtual void vfunc_0(); // slot 0, 0x10005a20
    virtual void Close(); // slot 1, 0x1000880c
    virtual void Attach(); // slot 2, 0x10008818
    virtual void Detach(); // slot 3, 0x10008812
};

class XInAcceptor : public IXInAcceptor {
public:
    virtual void vfunc_0(); // slot 0, 0x10005a40
    virtual void vfunc_1(); // slot 1, 0x10016430
    virtual void vfunc_2(); // slot 2, 0x10015b50
    virtual void vfunc_3(); // slot 3, 0x10015b30
    virtual void vfunc_4(); // slot 4, 0x10015b10
    virtual void vfunc_5(); // slot 5, 0x100161e0
    virtual void vfunc_6(); // slot 6, 0x10015f50
    virtual void vfunc_7(); // slot 7, 0x10015e90
    virtual void vfunc_8(); // slot 8, 0x10015ae0
    virtual void vfunc_9(); // slot 9, 0x10015ac0
    virtual void vfunc_10(); // slot 10, 0x10015ab0
    virtual void vfunc_11(); // slot 11, 0x10015aa0
    virtual void vfunc_12(); // slot 12, 0x10015a70
    virtual void vfunc_13(); // slot 13, 0x10015a40
    virtual void vfunc_14(); // slot 14, 0x10015a10
};

class XInAcceptorThread : public XThread {
public:
    virtual void vfunc_0(); // slot 0, 0x100060c0
    virtual void vfunc_1(); // slot 1, 0x100158b0
};

class XInAsyncIOEngineNT : public IXInAsyncIOEngine {
public:
    virtual void vfunc_0(); // slot 0, 0x10006aa0
    virtual void vfunc_1(); // slot 1, 0x10006a90
    virtual void vfunc_2(); // slot 2, 0x10006a90
};

class XInAsyncIOEngineWin98 : public IXInAsyncIOEngine {
public:
    virtual void vfunc_0(); // slot 0, 0x10006a60
    virtual void vfunc_1(); // slot 1, 0x10006a20
    virtual void vfunc_2(); // slot 2, 0x10006a40
};

class XInConnector : public IXInConnector {
public:
    virtual void vfunc_0(); // slot 0, 0x10006fc0
    virtual void vfunc_1(); // slot 1, 0x10014310
    virtual void vfunc_2(); // slot 2, 0x100144c0
    virtual void vfunc_3(); // slot 3, 0x100140b0
    virtual void vfunc_4(); // slot 4, 0x10014080
    virtual void vfunc_5(); // slot 5, 0x10013fa0
    virtual void vfunc_6(); // slot 6, 0x10013ee0
    virtual void vfunc_7(); // slot 7, 0x10013d40
    virtual void vfunc_8(); // slot 8, 0x10013e10
    virtual void vfunc_9(); // slot 9, 0x10013c70
    virtual void vfunc_10(); // slot 10, 0x10013bb0
    virtual void vfunc_11(); // slot 11, 0x10013b00
    virtual void vfunc_12(); // slot 12, 0x10013640
    virtual void vfunc_13(); // slot 13, 0x10013630
    virtual void vfunc_14(); // slot 14, 0x10013600
    virtual void vfunc_15(); // slot 15, 0x100135d0
    virtual void vfunc_16(); // slot 16, 0x100135a0
    virtual void vfunc_17(); // slot 17, 0x10013570
    virtual void vfunc_18(); // slot 18, 0x10013a30
    virtual void vfunc_19(); // slot 19, 0x10013970
    virtual void vfunc_20(); // slot 20, 0x100138a0
    virtual void vfunc_21(); // slot 21, 0x100137e0
    virtual void vfunc_22(); // slot 22, 0x10013710
    virtual void vfunc_23(); // slot 23, 0x10013650
};

class XInPeer : public IXInPeer {
public:
    virtual void vfunc_0(); // slot 0, 0x100077b0
    virtual void vfunc_1(); // slot 1, 0x10013240
    virtual void vfunc_2(); // slot 2, 0x10013290
    virtual void vfunc_3(); // slot 3, 0x10013260
    virtual void vfunc_4(); // slot 4, 0x10013220
    virtual void vfunc_5(); // slot 5, 0x10013230
};

class XInTCPLink : public IXInLink {
public:
    virtual void vfunc_0(); // slot 0, 0x10008140
    virtual void vfunc_1(); // slot 1, 0x10011720
    virtual void vfunc_2(); // slot 2, 0x10011fa0
    virtual void vfunc_3(); // slot 3, 0x10011dc0
    virtual void vfunc_4(); // slot 4, 0x10011da0
    virtual void vfunc_5(); // slot 5, 0x10011d80
    virtual void vfunc_6(); // slot 6, 0x10012300
    virtual void vfunc_7(); // slot 7, 0x10011cb0
    virtual void vfunc_8(); // slot 8, 0x100120b0
    virtual void vfunc_9(); // slot 9, 0x10011c90
    virtual void vfunc_10(); // slot 10, 0x10011c70
    virtual void vfunc_11(); // slot 11, 0x10011c40
    virtual void vfunc_12(); // slot 12, 0x10011c20
    virtual void vfunc_13(); // slot 13, 0x10011b40
    virtual void vfunc_14(); // slot 14, 0x10011a60
    virtual void vfunc_15(); // slot 15, 0x10011980
    virtual void vfunc_16(); // slot 16, 0x100118a0
    virtual void vfunc_17(); // slot 17, 0x100117c0
    virtual void vfunc_18(); // slot 18, 0x10011760
};

class XInUDPListener : public IXInUDPListener {
public:
    virtual void vfunc_0(); // slot 0, 0x100086f0
    virtual void vfunc_1(); // slot 1, 0x10010f50
    virtual void vfunc_2(); // slot 2, 0x10010ad0
    virtual void vfunc_3(); // slot 3, 0x10010ab0
    virtual void vfunc_4(); // slot 4, 0x10010a20
    virtual void vfunc_5(); // slot 5, 0x10010de0
    virtual void vfunc_6(); // slot 6, 0x10010960
    virtual void vfunc_7(); // slot 7, 0x10010c30
    virtual void vfunc_8(); // slot 8, 0x10010780
    virtual void vfunc_9(); // slot 9, 0x10010770
    virtual void vfunc_10(); // slot 10, 0x10010790
    virtual void vfunc_11(); // slot 11, 0x10010900
    virtual void vfunc_12(); // slot 12, 0x10010890
    virtual void vfunc_13(); // slot 13, 0x10010830
    virtual void vfunc_14(); // slot 14, 0x100107c0
};

class XRWCriticalSection {
public:
    virtual void vfunc_0(); // slot 0, 0x10006fe0
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001030
    virtual void vfunc_1(); // slot 1, 0x10008ad5
};

class bad_exception@std : public bad_exception, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x1000d84c
    virtual void vfunc_1(); // slot 1, 0x10008ad5
};

class exception@std : public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10008ae2
    virtual void vfunc_1(); // slot 1, 0x10008ad5
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100011a0
    virtual void vfunc_1(); // slot 1, 0x10001190
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100011a0
    virtual void vfunc_1(); // slot 1, 0x10001190
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100011a0
    virtual void vfunc_1(); // slot 1, 0x10001190
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x100089b9
};

}  // namespace XInNetwork
