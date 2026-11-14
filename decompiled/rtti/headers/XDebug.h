// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace XDebug {

class ?$_Iosb;
class ?$basic_filebuf;
class ?$basic_ios;
class ?$basic_ostream;
class ?$basic_streambuf;
class ?$codecvt;
class ?$ctype;
class _Locimp;
class bad_alloc;
class codecvt_base;
class ctype_base;
class facet;
class failure;
class ios_base;
class length_error;
class logic_error;
class out_of_range;
class runtime_error;

class ?$basic_filebuf@DU?$char_traits@D@std@@@std : public ?$basic_filebuf, public ?$basic_streambuf {
public:
    virtual void vfunc_0(); // slot 0, 0x67405e70
    virtual void vfunc_1(); // slot 1, 0x67405210
    virtual void vfunc_2(); // slot 2, 0x67404690
    virtual void vfunc_3(); // slot 3, 0x67403ab0
    virtual void vfunc_4(); // slot 4, 0x67404740
    virtual void vfunc_5(); // slot 5, 0x67404c30
    virtual void vfunc_6(); // slot 6, 0x67403b20
    virtual void vfunc_7(); // slot 7, 0x67403bc0
    virtual void vfunc_8(); // slot 8, 0x67405410
    virtual void vfunc_9(); // slot 9, 0x67405550
    virtual void vfunc_10(); // slot 10, 0x67404610
    virtual void vfunc_11(); // slot 11, 0x67404660
    virtual void vfunc_12(); // slot 12, 0x67404930
};

class ?$basic_ios@DU?$char_traits@D@std@@@std : public ?$basic_ios, public ios_base, public ?$_Iosb {
public:
    virtual void vfunc_0(); // slot 0, 0x674035d0
};

class ?$basic_ostream@DU?$char_traits@D@std@@@std : public ?$basic_ostream, public ?$basic_ios, public ios_base, public ?$_Iosb {
public:
    virtual void vfunc_0(); // slot 0, 0x67403cd0
};

class ?$basic_streambuf@DU?$char_traits@D@std@@@std : public ?$basic_streambuf {
public:
    virtual void vfunc_0(); // slot 0, 0x67403d00
    virtual void vfunc_1(); // slot 1, 0x67403aa0
    virtual void vfunc_2(); // slot 2, 0x67403aa0
    virtual void vfunc_3(); // slot 3, 0x67403ab0
    virtual void vfunc_4(); // slot 4, 0x67403ac0
    virtual void uflow(); // slot 5, 0x67403af0
    virtual void vfunc_6(); // slot 6, 0x67403b20
    virtual void vfunc_7(); // slot 7, 0x67403bc0
    virtual void vfunc_8(); // slot 8, 0x67403c70
    virtual void vfunc_9(); // slot 9, 0x67403ca0
    virtual void vfunc_10(); // slot 10, 0x67403ad0
    virtual void vfunc_11(); // slot 11, 0x67403ab0
    virtual void vfunc_12(); // slot 12, 0x67403ae0
};

class ?$codecvt@DDH@std : public ?$codecvt, public codecvt_base, public facet {
public:
    virtual void vfunc_0(); // slot 0, 0x67403fe0
    virtual void vfunc_1(); // slot 1, 0x67403510
    virtual void vfunc_2(); // slot 2, 0x67403520
    virtual void vfunc_3(); // slot 3, 0x67403520
    virtual void vfunc_4(); // slot 4, 0x67403f90
    virtual void vfunc_5(); // slot 5, 0x67403f90
    virtual void vfunc_6(); // slot 6, 0x67403fb0
    virtual void vfunc_7(); // slot 7, 0x67403fc0
};

class ?$ctype@D@std : public ?$ctype, public ctype_base, public facet {
public:
    virtual void vfunc_0(); // slot 0, 0x67403970
    virtual void vfunc_1(); // slot 1, 0x67403800
    virtual void vfunc_2(); // slot 2, 0x674037e0
    virtual void vfunc_3(); // slot 3, 0x67403850
    virtual void vfunc_4(); // slot 4, 0x67403830
    virtual void vfunc_5(); // slot 5, 0x67403890
    virtual void vfunc_6(); // slot 6, 0x67403880
    virtual void vfunc_7(); // slot 7, 0x674038d0
    virtual void vfunc_8(); // slot 8, 0x674038c0
};

class _Locimp@locale@std : public _Locimp, public facet {
public:
    virtual void vfunc_0(); // slot 0, 0x67407d4f
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x674084d8
    virtual void vfunc_1(); // slot 1, 0x674092f7
};

class bad_cast : public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x6740935c
    virtual void vfunc_1(); // slot 1, 0x674092f7
};

class exception {
public:
    virtual void vfunc_0(); // slot 0, 0x67409340
    virtual void vfunc_1(); // slot 1, 0x674092f7
};

class facet@locale@std : public facet {
public:
    virtual void vfunc_0(); // slot 0, 0x674034e0
};

class failure@ios_base@std : public failure, public runtime_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x67408078
    virtual void vfunc_1(); // slot 1, 0x67408012
};

class ios_base@std : public ios_base, public ?$_Iosb {
public:
    virtual void vfunc_0(); // slot 0, 0x67403570
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x674025f0
    virtual void vfunc_1(); // slot 1, 0x674023f0
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x674025f0
    virtual void vfunc_1(); // slot 1, 0x674023f0
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x67407798
    virtual void vfunc_1(); // slot 1, 0x674023f0
};

class runtime_error@std : public runtime_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x67408020
    virtual void vfunc_1(); // slot 1, 0x67408012
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x674093be
};

}  // namespace XDebug
