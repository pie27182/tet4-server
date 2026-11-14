// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace CDSClientConnector {

class IMessage;
class Socket;
class bad_alloc;
class bad_exception;
class exception;
class length_error;
class logic_error;
class out_of_range;

class CDS_AnsSelect : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10007500
    virtual void vfunc_1(); // slot 1, 0x10007260
    virtual void vfunc_2(); // slot 2, 0x100072f0
    virtual void vfunc_3(); // slot 3, 0x10007300
    virtual void vfunc_4(); // slot 4, 0x10007310
    virtual void vfunc_5(); // slot 5, 0x100073a0
    virtual void vfunc_6(); // slot 6, 0x10007450
    virtual void vfunc_7(); // slot 7, 0x100070a0
    virtual void vfunc_8(); // slot 8, 0x10001c80
};

class CDS_ReqSelect : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x10001ca0
    virtual void vfunc_1(); // slot 1, 0x10001940
    virtual void vfunc_2(); // slot 2, 0x100019a0
    virtual void vfunc_3(); // slot 3, 0x100019b0
    virtual void vfunc_4(); // slot 4, 0x100019c0
    virtual void vfunc_5(); // slot 5, 0x10001a80
    virtual void vfunc_6(); // slot 6, 0x10001b80
    virtual void vfunc_7(); // slot 7, 0x100070a0
    virtual void vfunc_8(); // slot 8, 0x10001c80
};

class IMessage@XDR : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100016a0
    virtual void vfunc_1(); // slot 1, 0x1000af2a
    virtual void vfunc_2(); // slot 2, 0x1000af2a
    virtual void vfunc_3(); // slot 3, 0x1000af2a
    virtual void vfunc_4(); // slot 4, 0x1000af2a
    virtual void vfunc_5(); // slot 5, 0x1000af2a
    virtual void vfunc_6(); // slot 6, 0x1000af2a
    virtual void vfunc_7(); // slot 7, 0x1000af2a
    virtual void vfunc_8(); // slot 8, 0x1000af2a
};

class Socket@Impl@ClientConnector@CDS : public Socket {
public:
    virtual void vfunc_0(); // slot 0, 0x10006d30
};

class StrList : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x100070c0
    virtual void vfunc_1(); // slot 1, 0x10006f50
    virtual void vfunc_2(); // slot 2, 0x10006f70
    virtual void vfunc_3(); // slot 3, 0x10006f80
    virtual void vfunc_4(); // slot 4, 0x10006f90
    virtual void vfunc_5(); // slot 5, 0x10006fe0
    virtual void vfunc_6(); // slot 6, 0x10007040
    virtual void vfunc_7(); // slot 7, 0x100070a0
    virtual void vfunc_8(); // slot 8, 0x10001c80
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100010b0
    virtual void vfunc_1(); // slot 1, 0x1000aab9
};

class bad_exception@std : public bad_exception, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10010226
    virtual void vfunc_1(); // slot 1, 0x1000aab9
};

class exception@std : public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x1000aac6
    virtual void vfunc_1(); // slot 1, 0x1000aab9
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001380
    virtual void what(); // slot 1, 0x100012e0
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001300
    virtual void what(); // slot 1, 0x100012e0
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001400
    virtual void what(); // slot 1, 0x100012e0
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x1000afe1
};

}  // namespace CDSClientConnector
