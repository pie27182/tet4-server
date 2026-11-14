// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace IRIA {

class CAdWindow;
class CAgent;
class CLuaScript;
class CWindowMgr;
class bad_alloc;
class bad_exception;
class exception;
class length_error;
class logic_error;
class out_of_range;

class CAdWindow@IRIA : public CAdWindow {
public:
    virtual void vfunc_0(); // slot 0, 0x100025f0
};

class CAgent@IRIA : public CAgent {
public:
    virtual void vfunc_0(); // slot 0, 0x10001080
};

class CLuaScript@IRIA : public CLuaScript {
public:
    virtual void vfunc_0(); // slot 0, 0x100016f0
};

class CThread {
public:
    virtual void vfunc_0(); // slot 0, 0x10001a60
    virtual void vfunc_1(); // slot 1, 0x100224e8
};

class CWindowMgr@IRIA : public CWindowMgr {
public:
    virtual void vfunc_0(); // slot 0, 0x10002d70
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10002aa0
    virtual void vfunc_1(); // slot 1, 0x100225f7
};

class bad_exception@std : public bad_exception, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100378b8
    virtual void vfunc_1(); // slot 1, 0x100225f7
};

class exception@std : public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10022604
    virtual void vfunc_1(); // slot 1, 0x100225f7
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10002b50
    virtual void vfunc_1(); // slot 1, 0x10002b40
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10002b50
    virtual void vfunc_1(); // slot 1, 0x10002b40
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10002b50
    virtual void vfunc_1(); // slot 1, 0x10002b40
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x1002214c
};

}  // namespace IRIA
