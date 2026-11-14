// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace XStream {

class bad_alloc;
class bad_exception;
class exception;
class length_error;
class logic_error;
class out_of_range;

class IXStream {
public:
    virtual void vfunc_0(); // slot 0, 0x100010c0
    virtual void vfunc_1(); // slot 1, 0x10002660
    virtual void vfunc_2(); // slot 2, 0x10002660
    virtual void vfunc_3(); // slot 3, 0x10002660
    virtual void vfunc_4(); // slot 4, 0x10002660
    virtual void vfunc_5(); // slot 5, 0x10002660
    virtual void vfunc_6(); // slot 6, 0x10002660
    virtual void vfunc_7(); // slot 7, 0x10002660
    virtual void vfunc_8(); // slot 8, 0x10002660
    virtual void vfunc_9(); // slot 9, 0x10002660
};

class XDequeStream : public IXStream {
public:
    virtual void vfunc_0(); // slot 0, 0x10001150
    virtual void Read(); // slot 1, 0x1000a2e0
    virtual void Write(); // slot 2, 0x1000a5e0
    virtual void CopyTo(); // slot 3, 0x1000a3d0
    virtual void RemoveLeft(); // slot 4, 0x1000a540
    virtual void RemoveRight(); // slot 5, 0x1000a490
    virtual void Clear(); // slot 6, 0x1000a310
    virtual void GetLength(); // slot 7, 0x1000a2d0
    virtual void SaveToStream(); // slot 8, 0x1000a260
    virtual void LoadFromStream(); // slot 9, 0x1000a1e0
};

class XMemoryStream : public IXStream {
public:
    virtual void vfunc_0(); // slot 0, 0x100020e0
    virtual void Read(); // slot 1, 0x1000a0e0
    virtual void Write(); // slot 2, 0x1000a040
    virtual void CopyTo(); // slot 3, 0x1000a000
    virtual void RemoveLeft(); // slot 4, 0x10009f50
    virtual void RemoveRight(); // slot 5, 0x10009ec0
    virtual void Clear(); // slot 6, 0x10009eb0
    virtual void GetLength(); // slot 7, 0x10009ea0
    virtual void SaveToStream(); // slot 8, 0x10009e30
    virtual void LoadFromStream(); // slot 9, 0x10009db0
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001030
    virtual void vfunc_1(); // slot 1, 0x100023da
};

class bad_exception@std : public bad_exception, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100058a8
    virtual void vfunc_1(); // slot 1, 0x100023da
};

class exception@std : public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100023e7
    virtual void vfunc_1(); // slot 1, 0x100023da
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001290
    virtual void vfunc_1(); // slot 1, 0x10001280
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10001290
    virtual void vfunc_1(); // slot 1, 0x10001280
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10002181
    virtual void vfunc_1(); // slot 1, 0x10001280
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x10002425
};

}  // namespace XStream
