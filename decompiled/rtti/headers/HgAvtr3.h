// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgAvtr3 {

class ?$tMapDeclare;
class CLsp;
class CLspDib;
class bad_alloc;
class exception;
class length_error;
class logic_error;
class out_of_range;

class CAvatarLayer {
public:
    virtual void vfunc_0(); // slot 0, 0x6050de90
};

class CAvtrId {
public:
    virtual void vfunc_0(); // slot 0, 0x605090b0
};

class CAvtrPartPool : public ?$tMapDeclare {
public:
    virtual void vfunc_0(); // slot 0, 0x60509350
};

class CGdiObject {
public:
    virtual void vfunc_0(); // slot 0, 0x6050e130
};

class CHgAImage {
public:
    virtual void vfunc_0(); // slot 0, 0x60502450
    virtual void Create(); // slot 1, 0x60502710
    virtual void Create(); // slot 2, 0x60502650
    virtual void Create(); // slot 3, 0x60502610
    virtual void Create(); // slot 4, 0x60502560
    virtual void Destroy(); // slot 5, 0x60502740
};

class CHgAvtr {
public:
    virtual void vfunc_0(); // slot 0, 0x60509850
};

class CLsp@lsp : public CLsp {
public:
    virtual void vfunc_0(); // slot 0, 0x6050e4e0
    virtual void vfunc_1(); // slot 1, 0x6050e560
    virtual void purecall(); // slot 2, 0x60516518
    virtual void vfunc_3(); // slot 3, 0x6050e620
};

class CLspDib@lsp : public CLspDib, public CLsp {
public:
    virtual void vfunc_0(); // slot 0, 0x6050eac0
    virtual void vfunc_1(); // slot 1, 0x6050e560
    virtual void vfunc_2(); // slot 2, 0x6050ec30
    virtual void vfunc_3(); // slot 3, 0x6050ebf0
    virtual void vfunc_4(); // slot 4, 0x6050eb40
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60502360
    virtual void what(); // slot 1, 0x60516328
};

class cHgAniDIBList {
public:
    virtual void vfunc_0(); // slot 0, 0x60503600
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60502310
    virtual void vfunc_1(); // slot 1, 0x60502340
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60502310
    virtual void vfunc_1(); // slot 1, 0x60502340
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60502310
    virtual void vfunc_1(); // slot 1, 0x60502340
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x605162dc
};

}  // namespace HgAvtr3
