// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace TPackClientConnector {

class Delivery;
class Dispatcher;
class IMessage;
class Socket;
class TCPSocket;
class XDRDelivery;
class XDRDispatcher;
class bad_alloc;
class exception;
class length_error;
class logic_error;
class out_of_range;

class Delivery@Impl@Connector@TPACK : public Delivery {
public:
    virtual void vfunc_0(); // slot 0, 0x10007060
    virtual void purecall(); // slot 1, 0x100088a4
    virtual void purecall(); // slot 2, 0x100088a4
    virtual void purecall(); // slot 3, 0x100088a4
    virtual void purecall(); // slot 4, 0x100088a4
};

class Dispatcher@Impl@Connector@TPACK : public Dispatcher {
public:
    virtual void vfunc_0(); // slot 0, 0x10007c90
    virtual void purecall(); // slot 1, 0x100088a4
    virtual void purecall(); // slot 2, 0x100088a4
};

class IMessage@XDR : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100013d0
    virtual void purecall(); // slot 1, 0x100088a4
    virtual void purecall(); // slot 2, 0x100088a4
    virtual void purecall(); // slot 3, 0x100088a4
    virtual void purecall(); // slot 4, 0x100088a4
    virtual void purecall(); // slot 5, 0x100088a4
    virtual void purecall(); // slot 6, 0x100088a4
    virtual void purecall(); // slot 7, 0x100088a4
    virtual void purecall(); // slot 8, 0x100088a4
};

class Socket@Impl@Connector@TPACK : public Socket {
public:
    virtual void vfunc_0(); // slot 0, 0x10006c30
    virtual void purecall(); // slot 1, 0x100088a4
    virtual void purecall(); // slot 2, 0x100088a4
    virtual void purecall(); // slot 3, 0x100088a4
};

class TCPSocket@Impl@Connector@TPACK : public TCPSocket, public Socket {
public:
    virtual void vfunc_0(); // slot 0, 0x10006db0
    virtual void vfunc_1(); // slot 1, 0x10009a20
    virtual void vfunc_2(); // slot 2, 0x10009970
    virtual void vfunc_3(); // slot 3, 0x10009890
};

class XDRAuthSessionRequest : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100076e0
    virtual void vfunc_1(); // slot 1, 0x10007500
    virtual void vfunc_2(); // slot 2, 0x10007530
    virtual void vfunc_3(); // slot 3, 0x10007540
    virtual void vfunc_4(); // slot 4, 0x10007550
    virtual void vfunc_5(); // slot 5, 0x100075c0
    virtual void vfunc_6(); // slot 6, 0x10007640
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRAuthSessionResponse : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10007ef0
    virtual void vfunc_1(); // slot 1, 0x10007da0
    virtual void vfunc_2(); // slot 2, 0x10007dc0
    virtual void vfunc_3(); // slot 3, 0x10007dd0
    virtual void vfunc_4(); // slot 4, 0x10007de0
    virtual void vfunc_5(); // slot 5, 0x10007e30
    virtual void vfunc_6(); // slot 6, 0x10007e90
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRDelivery@Impl@Connector@TPACK : public XDRDelivery, public Delivery {
public:
    virtual void vfunc_0(); // slot 0, 0x10007bb0
    virtual void vfunc_1(); // slot 1, 0x1000b1b0
    virtual void vfunc_2(); // slot 2, 0x1000b0f0
    virtual void vfunc_3(); // slot 3, 0x1000b030
    virtual void vfunc_4(); // slot 4, 0x1000afc0
};

class XDRDetectGhostCheckRequest : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10008340
    virtual void vfunc_1(); // slot 1, 0x10008250
    virtual void vfunc_2(); // slot 2, 0x10008270
    virtual void vfunc_3(); // slot 3, 0x10008280
    virtual void vfunc_4(); // slot 4, 0x10008290
    virtual void vfunc_5(); // slot 5, 0x100082e0
    virtual void vfunc_6(); // slot 6, 0x10007b20
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRDetectGhostCheckResponse : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10007b80
    virtual void vfunc_1(); // slot 1, 0x10008250
    virtual void vfunc_2(); // slot 2, 0x10007b00
    virtual void vfunc_3(); // slot 3, 0x10007b10
    virtual void vfunc_4(); // slot 4, 0x10008290
    virtual void vfunc_5(); // slot 5, 0x100082e0
    virtual void vfunc_6(); // slot 6, 0x10007b20
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRDispatcher@Impl@Connector@TPACK : public XDRDispatcher, public Dispatcher {
public:
    virtual void vfunc_0(); // slot 0, 0x10008770
    virtual void vfunc_1(); // slot 1, 0x1000abf0
    virtual void vfunc_2(); // slot 2, 0x1000ab70
};

class XDRTPackLogOutUserNotice : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10008700
    virtual void vfunc_1(); // slot 1, 0x100084a0
    virtual void vfunc_2(); // slot 2, 0x100084f0
    virtual void vfunc_3(); // slot 3, 0x10008500
    virtual void vfunc_4(); // slot 4, 0x10008510
    virtual void vfunc_5(); // slot 5, 0x100085a0
    virtual void vfunc_6(); // slot 6, 0x10008650
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRTPackLoginRequest : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10007830
    virtual void vfunc_1(); // slot 1, 0x100077f0
    virtual void vfunc_2(); // slot 2, 0x10007810
    virtual void vfunc_3(); // slot 3, 0x10007820
    virtual void vfunc_4(); // slot 4, 0x10007960
    virtual void vfunc_5(); // slot 5, 0x100079b0
    virtual void vfunc_6(); // slot 6, 0x10007a10
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRTPackLoginResponse : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100020b0
    virtual void vfunc_1(); // slot 1, 0x10001e10
    virtual void vfunc_2(); // slot 2, 0x10001e70
    virtual void vfunc_3(); // slot 3, 0x10001e80
    virtual void vfunc_4(); // slot 4, 0x10001e90
    virtual void vfunc_5(); // slot 5, 0x10001f30
    virtual void vfunc_6(); // slot 6, 0x10001ff0
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRTPackLogoutRequest : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10007a70
    virtual void vfunc_1(); // slot 1, 0x100077f0
    virtual void vfunc_2(); // slot 2, 0x10007940
    virtual void vfunc_3(); // slot 3, 0x10007950
    virtual void vfunc_4(); // slot 4, 0x10007960
    virtual void vfunc_5(); // slot 5, 0x100079b0
    virtual void vfunc_6(); // slot 6, 0x10007a10
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class XDRTPackLogoutResponse : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100081c0
    virtual void vfunc_1(); // slot 1, 0x10008000
    virtual void vfunc_2(); // slot 2, 0x10008030
    virtual void vfunc_3(); // slot 3, 0x10008040
    virtual void vfunc_4(); // slot 4, 0x10008050
    virtual void vfunc_5(); // slot 5, 0x100080c0
    virtual void vfunc_6(); // slot 6, 0x10008140
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class _XDRCommonHeader : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100019c0
    virtual void vfunc_1(); // slot 1, 0x10001770
    virtual void vfunc_2(); // slot 2, 0x100017b0
    virtual void vfunc_3(); // slot 3, 0x100017c0
    virtual void vfunc_4(); // slot 4, 0x100017d0
    virtual void vfunc_5(); // slot 5, 0x10001860
    virtual void vfunc_6(); // slot 6, 0x10001910
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class _XDRRequestHeader : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100073c0
    virtual void vfunc_1(); // slot 1, 0x10007180
    virtual void vfunc_2(); // slot 2, 0x100071c0
    virtual void vfunc_3(); // slot 3, 0x100071d0
    virtual void vfunc_4(); // slot 4, 0x100071e0
    virtual void vfunc_5(); // slot 5, 0x10007260
    virtual void vfunc_6(); // slot 6, 0x10007300
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class _XDRResponseHeader : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10001cb0
    virtual void vfunc_1(); // slot 1, 0x10001af0
    virtual void vfunc_2(); // slot 2, 0x10001b20
    virtual void vfunc_3(); // slot 3, 0x10001b30
    virtual void vfunc_4(); // slot 4, 0x10001b40
    virtual void vfunc_5(); // slot 5, 0x10001bb0
    virtual void vfunc_6(); // slot 6, 0x10001c30
    virtual void vfunc_7(); // slot 7, 0x100073a0
    virtual void vfunc_8(); // slot 8, 0x100076c0
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001050
    virtual void what(); // slot 1, 0x10008898
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003bc0
    virtual void vfunc_1(); // slot 1, 0x10001230
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001250
    virtual void vfunc_1(); // slot 1, 0x10001230
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100012d0
    virtual void vfunc_1(); // slot 1, 0x10001230
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x100088b0
};

}  // namespace TPackClientConnector
