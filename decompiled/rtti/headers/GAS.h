// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace GAS {

class ?$CThreadSafe;
class CAgent;
class CSrc;
class CSrcMgr;
class CUnit;
class CUnitMgr;
class CXMLStream;
class Connector;
class EventCaller;
class EventHandler;
class FailedUnitList;
class HTTPSocket;
class HandlerOnNotify;
class ProtocolSocket;
class SrcDownloader;
class SrcSocket;
class Thread;
class bad_alloc;
class bad_exception;
class exception;
class length_error;
class logic_error;
class out_of_range;

class CAgent@GAS : public CAgent {
public:
    virtual void vfunc_0(); // slot 0, 0x10001210
};

class CSrc@GAS : public CSrc {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a140
};

class CSrcMgr@GAS : public CSrcMgr, public ?$CThreadSafe {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a680
};

class CUnit@GAS : public CUnit {
public:
    virtual void vfunc_0(); // slot 0, 0x1000b900
};

class CUnitMgr@GAS : public CUnitMgr, public ?$CThreadSafe {
public:
    virtual void vfunc_0(); // slot 0, 0x1000c9e0
};

class CXMLStream@GAS : public CXMLStream {
public:
    virtual void vfunc_0(); // slot 0, 0x1000d940
};

class Connector@GAS : public Connector, public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x10001be0
    virtual void vfunc_1(); // slot 1, 0x10001d20
};

class EventCaller@GAS : public EventCaller, public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x10001f60
    virtual void vfunc_1(); // slot 1, 0x10002010
};

class EventHandler@GAS : public EventHandler {
public:
    virtual void vfunc_0(); // slot 0, 0x10003160
    virtual void vfunc_1(); // slot 1, 0x10003130
};

class FailedUnitList@GAS : public FailedUnitList, public ?$CThreadSafe {
public:
    virtual void vfunc_0(); // slot 0, 0x10008a30
};

class HTTPSocket@GAS : public HTTPSocket {
public:
    virtual void vfunc_0(); // slot 0, 0x10003390
    virtual void vfunc_1(); // slot 1, 0x100049c0
};

class HandlerOnNotify@GAS : public HandlerOnNotify, public EventHandler {
public:
    virtual void vfunc_0(); // slot 0, 0x10003160
    virtual void vfunc_1(); // slot 1, 0x10003140
};

class ProtocolSocket@GAS : public ProtocolSocket, public HTTPSocket {
public:
    virtual void vfunc_0(); // slot 0, 0x10003760
    virtual void vfunc_1(); // slot 1, 0x100049c0
};

class SrcDownloader@GAS : public SrcDownloader, public Thread {
public:
    virtual void vfunc_0(); // slot 0, 0x10002560
    virtual void vfunc_1(); // slot 1, 0x100025f0
};

class SrcSocket@GAS : public SrcSocket, public HTTPSocket {
public:
    virtual void vfunc_0(); // slot 0, 0x10003390
    virtual void vfunc_1(); // slot 1, 0x100049c0
};

class TiXmlAttribute : public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100050b0
    virtual void vfunc_1(); // slot 1, 0x100050a0
    virtual void vfunc_2(); // slot 2, 0x10008160
};

class TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10004f50
    virtual void vfunc_1(); // slot 1, 0x1000e874
    virtual void vfunc_2(); // slot 2, 0x1000e874
};

class TiXmlComment : public TiXmlNode, public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10005170
    virtual void vfunc_1(); // slot 1, 0x100062a0
    virtual void vfunc_2(); // slot 2, 0x10007fa0
    virtual void vfunc_3(); // slot 3, 0x10004fa0
    virtual void vfunc_4(); // slot 4, 0x10004fa0
    virtual void vfunc_5(); // slot 5, 0x10004fa0
    virtual void vfunc_6(); // slot 6, 0x10004fa0
    virtual void vfunc_7(); // slot 7, 0x100052d0
    virtual void vfunc_8(); // slot 8, 0x100052d0
    virtual void vfunc_9(); // slot 9, 0x10004fa0
    virtual void vfunc_10(); // slot 10, 0x10004fa0
    virtual void vfunc_11(); // slot 11, 0x10004fa0
    virtual void vfunc_12(); // slot 12, 0x10004fa0
    virtual void vfunc_13(); // slot 13, 0x10004fa0
    virtual void vfunc_14(); // slot 14, 0x10004fa0
    virtual void vfunc_15(); // slot 15, 0x10006300
    virtual void vfunc_16(); // slot 16, 0x100062e0
};

class TiXmlDeclaration : public TiXmlNode, public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100052e0
    virtual void vfunc_1(); // slot 1, 0x100052b0
    virtual void vfunc_2(); // slot 2, 0x10008510
    virtual void vfunc_3(); // slot 3, 0x10004fa0
    virtual void vfunc_4(); // slot 4, 0x10004fa0
    virtual void vfunc_5(); // slot 5, 0x10004fa0
    virtual void vfunc_6(); // slot 6, 0x10004fa0
    virtual void vfunc_7(); // slot 7, 0x10004fa0
    virtual void vfunc_8(); // slot 8, 0x10004fa0
    virtual void vfunc_9(); // slot 9, 0x10004fa0
    virtual void vfunc_10(); // slot 10, 0x10004fa0
    virtual void vfunc_11(); // slot 11, 0x10004fa0
    virtual void vfunc_12(); // slot 12, 0x10004fa0
    virtual void vfunc_13(); // slot 13, 0x100052d0
    virtual void vfunc_14(); // slot 14, 0x100052d0
    virtual void vfunc_15(); // slot 15, 0x10006710
    virtual void vfunc_16(); // slot 16, 0x100066f0
    virtual void vfunc_17(); // slot 17, 0x10006550
};

class TiXmlDocument : public TiXmlNode, public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100053e0
    virtual void vfunc_1(); // slot 1, 0x100060a0
    virtual void vfunc_2(); // slot 2, 0x10007220
    virtual void vfunc_3(); // slot 3, 0x100052d0
    virtual void vfunc_4(); // slot 4, 0x100052d0
    virtual void vfunc_5(); // slot 5, 0x10004fa0
    virtual void vfunc_6(); // slot 6, 0x10004fa0
    virtual void vfunc_7(); // slot 7, 0x10004fa0
    virtual void vfunc_8(); // slot 8, 0x10004fa0
    virtual void vfunc_9(); // slot 9, 0x10004fa0
    virtual void vfunc_10(); // slot 10, 0x10004fa0
    virtual void vfunc_11(); // slot 11, 0x10004fa0
    virtual void vfunc_12(); // slot 12, 0x10004fa0
    virtual void vfunc_13(); // slot 13, 0x10004fa0
    virtual void vfunc_14(); // slot 14, 0x10004fa0
    virtual void vfunc_15(); // slot 15, 0x10006010
    virtual void vfunc_16(); // slot 16, 0x100060e0
};

class TiXmlElement : public TiXmlNode, public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10005960
    virtual void vfunc_1(); // slot 1, 0x10005bc0
    virtual void vfunc_2(); // slot 2, 0x10007790
    virtual void vfunc_3(); // slot 3, 0x10004fa0
    virtual void vfunc_4(); // slot 4, 0x10004fa0
    virtual void vfunc_5(); // slot 5, 0x100052d0
    virtual void vfunc_6(); // slot 6, 0x100052d0
    virtual void vfunc_7(); // slot 7, 0x10004fa0
    virtual void vfunc_8(); // slot 8, 0x10004fa0
    virtual void vfunc_9(); // slot 9, 0x10004fa0
    virtual void vfunc_10(); // slot 10, 0x10004fa0
    virtual void vfunc_11(); // slot 11, 0x10004fa0
    virtual void vfunc_12(); // slot 12, 0x10004fa0
    virtual void vfunc_13(); // slot 13, 0x10004fa0
    virtual void vfunc_14(); // slot 14, 0x10004fa0
    virtual void vfunc_15(); // slot 15, 0x10005e30
    virtual void vfunc_16(); // slot 16, 0x10005dd0
};

class TiXmlNode : public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100056d0
    virtual void vfunc_1(); // slot 1, 0x1000e874
    virtual void vfunc_2(); // slot 2, 0x1000e874
    virtual void vfunc_3(); // slot 3, 0x10004fa0
    virtual void vfunc_4(); // slot 4, 0x10004fa0
    virtual void vfunc_5(); // slot 5, 0x10004fa0
    virtual void vfunc_6(); // slot 6, 0x10004fa0
    virtual void vfunc_7(); // slot 7, 0x10004fa0
    virtual void vfunc_8(); // slot 8, 0x10004fa0
    virtual void vfunc_9(); // slot 9, 0x10004fa0
    virtual void vfunc_10(); // slot 10, 0x10004fa0
    virtual void vfunc_11(); // slot 11, 0x10004fa0
    virtual void vfunc_12(); // slot 12, 0x10004fa0
    virtual void vfunc_13(); // slot 13, 0x10004fa0
    virtual void vfunc_14(); // slot 14, 0x10004fa0
    virtual void vfunc_15(); // slot 15, 0x1000e874
    virtual void vfunc_16(); // slot 16, 0x1000e874
};

class TiXmlText : public TiXmlNode, public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10005240
    virtual void vfunc_1(); // slot 1, 0x10006390
    virtual void vfunc_2(); // slot 2, 0x100082e0
    virtual void vfunc_3(); // slot 3, 0x10004fa0
    virtual void vfunc_4(); // slot 4, 0x10004fa0
    virtual void vfunc_5(); // slot 5, 0x10004fa0
    virtual void vfunc_6(); // slot 6, 0x10004fa0
    virtual void vfunc_7(); // slot 7, 0x10004fa0
    virtual void vfunc_8(); // slot 8, 0x10004fa0
    virtual void vfunc_9(); // slot 9, 0x10004fa0
    virtual void vfunc_10(); // slot 10, 0x10004fa0
    virtual void vfunc_11(); // slot 11, 0x100052d0
    virtual void vfunc_12(); // slot 12, 0x100052d0
    virtual void vfunc_13(); // slot 13, 0x10004fa0
    virtual void vfunc_14(); // slot 14, 0x10004fa0
    virtual void vfunc_15(); // slot 15, 0x10006490
    virtual void vfunc_16(); // slot 16, 0x10006470
};

class TiXmlUnknown : public TiXmlNode, public TiXmlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10005380
    virtual void vfunc_1(); // slot 1, 0x10006770
    virtual void vfunc_2(); // slot 2, 0x10007e50
    virtual void vfunc_3(); // slot 3, 0x10004fa0
    virtual void vfunc_4(); // slot 4, 0x10004fa0
    virtual void vfunc_5(); // slot 5, 0x10004fa0
    virtual void vfunc_6(); // slot 6, 0x10004fa0
    virtual void vfunc_7(); // slot 7, 0x10004fa0
    virtual void vfunc_8(); // slot 8, 0x10004fa0
    virtual void vfunc_9(); // slot 9, 0x100052d0
    virtual void vfunc_10(); // slot 10, 0x100052d0
    virtual void vfunc_11(); // slot 11, 0x10004fa0
    virtual void vfunc_12(); // slot 12, 0x10004fa0
    virtual void vfunc_13(); // slot 13, 0x10004fa0
    virtual void vfunc_14(); // slot 14, 0x10004fa0
    virtual void vfunc_15(); // slot 15, 0x100067d0
    virtual void vfunc_16(); // slot 16, 0x100067b0
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001010
    virtual void vfunc_1(); // slot 1, 0x1000e5d8
};

class bad_exception@std : public bad_exception, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10015d93
    virtual void vfunc_1(); // slot 1, 0x1000e5d8
};

class exception@std : public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x1000e5e5
    virtual void vfunc_1(); // slot 1, 0x1000e5d8
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003500
    virtual void vfunc_1(); // slot 1, 0x100034f0
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003500
    virtual void vfunc_1(); // slot 1, 0x100034f0
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003500
    virtual void vfunc_1(); // slot 1, 0x100034f0
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x1000e68a
};

}  // namespace GAS
