// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace CasualComm {

class CObject;
class CSyncObject;
class bad_alloc;
class exception;
class length_error;
class logic_error;
class out_of_range;

class CCriticalSection : public CSyncObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x1000d7aa
    virtual void vfunc_1(); // slot 1, 0x100011b0
    virtual void GLogDscUserDefineddata(); // slot 2, 0x10002e10
    virtual void vfunc_3(); // slot 3, 0x10002a30
    virtual void GLogDscUserDefineddata(); // slot 4, 0x10002e10
    virtual void vfunc_5(); // slot 5, 0x10001270
    virtual void vfunc_6(); // slot 6, 0x10001100
    virtual void vfunc_7(); // slot 7, 0x10001280
};

class CasualNet : public PMLNet, public SockNet {
public:
    virtual void vfunc_0(); // slot 0, 0x10003140
    virtual void Create(); // slot 1, 0x100033c0
    virtual void Destroy(); // slot 2, 0x100033d0
    virtual void OnConnect(); // slot 3, 0x100047f0
    virtual void OnConnectError(); // slot 4, 0x10004950
    virtual void OnDisconnect(); // slot 5, 0x100048a0
    virtual void OnReceive(); // slot 6, 0x1000b720
    virtual void vfunc_7(); // slot 7, 0x10002a30
    virtual void OnPMLReceive(); // slot 8, 0x10004780
    virtual void OnAcceptBuddyAck(); // slot 9, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 10, 0x10002e00
    virtual void GLogDscUserDefineddata(); // slot 11, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 12, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 13, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 14, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 15, 0x10002e10
    virtual void OnAcceptBuddyAck(); // slot 16, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 17, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 18, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 19, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 20, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 21, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 22, 0x10002e00
    virtual void GLogDscUserDefineddata(); // slot 23, 0x10002e10
    virtual void OnAcceptBuddyAck(); // slot 24, 0x10002e00
    virtual void GLogDscUserDefineddata(); // slot 25, 0x10002e10
    virtual void OnAcceptBuddyAck(); // slot 26, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 27, 0x10002e00
    virtual void GLogDscUserDefineddata(); // slot 28, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 29, 0x10002e10
    virtual void OnAcceptBuddyAck(); // slot 30, 0x10002e00
};

class CasualNetV2 : public CasualNet, public PMLNet, public SockNet {
public:
    virtual void vfunc_0(); // slot 0, 0x10009340
    virtual void Create(); // slot 1, 0x100033c0
    virtual void Destroy(); // slot 2, 0x10009490
    virtual void OnConnect(); // slot 3, 0x100047f0
    virtual void OnConnectError(); // slot 4, 0x10004950
    virtual void OnDisconnect(); // slot 5, 0x100048a0
    virtual void OnReceive(); // slot 6, 0x1000b720
    virtual void vfunc_7(); // slot 7, 0x10002a30
    virtual void OnPMLReceive(); // slot 8, 0x10004780
    virtual void OnAcceptBuddyAck(); // slot 9, 0x10002e00
    virtual void OnDisconnect(); // slot 10, 0x10009dd0
    virtual void GLogDscUserDefineddata(); // slot 11, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 12, 0x10002e10
    virtual void OnWebLoginAck(); // slot 13, 0x10009df0
    virtual void GLogDscUserDefineddata(); // slot 14, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 15, 0x10002e10
    virtual void OnAddBuddyAck(); // slot 16, 0x10009ea0
    virtual void OnAcceptBuddyAck(); // slot 17, 0x10009f30
    virtual void OnDeleteBuddyAck(); // slot 18, 0x10009ee0
    virtual void OnAddBuddyAccepted(); // slot 19, 0x10009f70
    virtual void OnAddBuddyAccepted(); // slot 20, 0x10009f70
    virtual void OnAcceptBuddyAck(); // slot 21, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 22, 0x10002e00
    virtual void GLogDscUserDefineddata(); // slot 23, 0x10002e10
    virtual void OnAcceptBuddyAck(); // slot 24, 0x10002e00
    virtual void GLogDscUserDefineddata(); // slot 25, 0x10002e10
    virtual void OnAcceptBuddyAck(); // slot 26, 0x10002e00
    virtual void OnAcceptBuddyAck(); // slot 27, 0x10002e00
    virtual void GLogDscUserDefineddata(); // slot 28, 0x10002e10
    virtual void GLogDscUserDefineddata(); // slot 29, 0x10002e10
    virtual void OnAcceptBuddyAck(); // slot 30, 0x10002e00
    virtual void vfunc_31(); // slot 31, 0x1000cd60
};

class PMLNet : public SockNet {
public:
    virtual void vfunc_0(); // slot 0, 0x10002cd0
    virtual void Create(); // slot 1, 0x100033c0
    virtual void Destroy(); // slot 2, 0x1000b560
    virtual void vfunc_3(); // slot 3, 0x10002a30
    virtual void vfunc_4(); // slot 4, 0x10002a30
    virtual void vfunc_5(); // slot 5, 0x10002a30
    virtual void OnReceive(); // slot 6, 0x1000b720
    virtual void vfunc_7(); // slot 7, 0x10002a30
    virtual void OnAcceptBuddyAck(); // slot 8, 0x10002e00
};

class SockNet {
public:
    virtual void vfunc_0(); // slot 0, 0x10002b00
    virtual void Create(); // slot 1, 0x1000bf10
    virtual void Destroy(); // slot 2, 0x1000bf80
    virtual void vfunc_3(); // slot 3, 0x10002a30
    virtual void vfunc_4(); // slot 4, 0x10002a30
    virtual void vfunc_5(); // slot 5, 0x10002a30
    virtual void vfunc_6(); // slot 6, 0x10002a30
    virtual void vfunc_7(); // slot 7, 0x10002a30
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10002990
    virtual void what(); // slot 1, 0x1000cfca
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100029d0
    virtual void vfunc_1(); // slot 1, 0x100029c0
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100029d0
    virtual void vfunc_1(); // slot 1, 0x100029c0
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100029d0
    virtual void vfunc_1(); // slot 1, 0x100029c0
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x1000cf7d
};

}  // namespace CasualComm
