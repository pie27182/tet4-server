// Module: CasualComm.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- GFtp @ 10001000 size=16 ---- */

/* public: __thiscall GFtp::GFtp(void) */

void __thiscall GFtp::GFtp(GFtp *this)

{
                    /* 0x1000  7  ??0GFtp@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ---- ~GFtp @ 10001010 size=45 ---- */

/* public: __thiscall GFtp::~GFtp(void) */

void __thiscall GFtp::~GFtp(GFtp *this)

{
                    /* 0x1010  19  ??1GFtp@@QAE@XZ
                       0x1010  225  ?closeFtp@GFtp@@QAEXXZ */
  if (*(int *)this != 0) {
    InternetCloseHandle(*(int *)this);
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 4) != 0) {
    InternetCloseHandle(*(int *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}



/* ---- openFtp @ 10001040 size=120 ---- */

/* public: bool __thiscall GFtp::openFtp(char const *,int,char const *,char const *) */

bool __thiscall GFtp::openFtp(GFtp *this,char *param_1,int param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x1040  232  ?openFtp@GFtp@@QAE_NPBDH00@Z */
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  iVar1 = InternetOpenA(&DAT_1000f2ec,0,0,0,0);
  *(int *)(this + 4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = InternetConnectA(iVar1,uVar2,uVar3,uVar4,unaff_ESI,1,0,0);
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return true;
    }
  }
  if (*(int *)this != 0) {
    InternetCloseHandle(*(int *)this);
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 4) != 0) {
    InternetCloseHandle(*(int *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return false;
}



/* ---- sendFile @ 100010c0 size=62 ---- */

/* public: bool __thiscall GFtp::sendFile(char const *,char const *,char const *) */

bool __thiscall GFtp::sendFile(GFtp *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
                    /* 0x10c0  236  ?sendFile@GFtp@@QAE_NPBD00@Z */
  iVar1 = FtpSetCurrentDirectoryA(*(undefined4 *)this,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FtpPutFileA(*(undefined4 *)this,unaff_ESI,unaff_retaddr,0x80000002,0);
  return iVar1 != 0;
}



/* ---- vfunction7 @ 10001100 size=8 ---- */

undefined4 __thiscall CCriticalSection::vfunction7(CCriticalSection *this)

{
  return 1;
}



/* ---- FUN_10001110 @ 10001110 size=103 ---- */

undefined4 FUN_10001110(int param_1)

{
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_1000d4f5;
  local_14 = ExceptionList;
  local_c = DAT_10015018 ^ 0x1000ff50;
  ExceptionList = &local_14;
  local_8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  ExceptionList = local_14;
  return 1;
}



/* ---- scalar_deleting_destructor @ 100011b0 size=48 ---- */

CSyncObject * __thiscall
CCriticalSection::scalar_deleting_destructor(CCriticalSection *this,byte param_1)

{
                    /* inlined destructor: CCriticalSection::~CCriticalSection */
  this->vftablePtr = &vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 2));
  CSyncObject::~CSyncObject((CSyncObject *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CSyncObject *)this;
}



/* ---- FUN_100011e0 @ 100011e0 size=103 ---- */

undefined4 FUN_100011e0(int param_1)

{
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_1000d4f5;
  local_14 = ExceptionList;
  local_c = DAT_10015018 ^ 0x1000ff30;
  ExceptionList = &local_14;
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  ExceptionList = local_14;
  return 1;
}



/* ---- vfunction6 @ 10001270 size=9 ---- */

void __thiscall CCriticalSection::vfunction6(CCriticalSection *this)

{
  FUN_100011e0((int)this);
  return;
}



/* ---- vfunction8 @ 10001280 size=16 ---- */

undefined4 __thiscall CCriticalSection::vfunction8(CCriticalSection *this)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 2));
  return 1;
}



/* ---- _GLogIndent @ 10001290 size=20 ---- */

/* public: __thiscall _GLogIndent::_GLogIndent(class _GLogIndent const &) */

_GLogIndent * __thiscall _GLogIndent::_GLogIndent(_GLogIndent *this,_GLogIndent *param_1)

{
                    /* 0x1290  13  ??0_GLogIndent@@QAE@ABV0@@Z */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)param_1);
  return this;
}



/* ---- operator= @ 100012b0 size=20 ---- */

/* public: class _GLogIndent & __thiscall _GLogIndent::operator=(class _GLogIndent const &) */

_GLogIndent * __thiscall _GLogIndent::operator=(_GLogIndent *this,_GLogIndent *param_1)

{
                    /* 0x12b0  31  ??4_GLogIndent@@QAEAAV0@ABV0@@Z */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)param_1);
  return this;
}



/* ---- FUN_100012d0 @ 100012d0 size=489 ---- */

void __cdecl FUN_100012d0(undefined4 param_1,char *param_2)

{
  errno_t eVar1;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this;
  int unaff_EDI;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_38 [4];
  LPCSTR pCStack_34;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_30 [4];
  _SYSTEMTIME local_2c;
  _SYSTEMTIME local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000daab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_38,"");
  local_4 = 0;
  if (DAT_10015104 != '\0') {
    GetSystemTime(&local_1c);
    SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_1c,&local_2c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               (uint)local_2c.wMinute,(char *)local_38);
  }
  if (DAT_100155dc != '\0') {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_30);
    GetTickCount();
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (local_30,(char *)local_30);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
              (local_30,(CSimpleStringT<char,1> *)&local_2c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_2c);
  }
  if (DAT_100155dd != '\0') {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_30);
    GetCurrentThreadId();
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this,(char *)local_30);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
              (local_30,(CSimpleStringT<char,1> *)&local_2c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_2c);
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pCStack_34,
             (CSimpleStringT<char,1> *)&DAT_100155fc);
  if (unaff_EDI != -1) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pCStack_34,
               (CSimpleStringT<char,1> *)(&DAT_10015640 + unaff_EDI * 4));
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pCStack_34,param_2);
  if (DAT_100150cf != '\0') {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pCStack_34,"\r\n");
  }
  OutputDebugStringA(pCStack_34);
  if (DAT_100155d4 != (code *)0x0) {
    (*DAT_100155d4)(pCStack_34,DAT_100155d8);
  }
  eVar1 = fopen_s((FILE **)&local_2c,DAT_10015654,"a");
  if (eVar1 == 0) {
    fprintf((FILE *)local_2c._0_4_,pCStack_34);
    fclose((FILE *)local_2c._0_4_);
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pCStack_34);
  ExceptionList = puStack_8;
  return;
}



/* ---- GLog_Output @ 100014c0 size=156 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl GLog_Output(char const *,char *) */

void __cdecl GLog_Output(char *param_1,char *param_2)

{
  char *_Dst;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0x14c0  78  ?GLog_Output@@YAXPBDPAD@Z */
  local_4 = DAT_10015018 ^ (uint)local_1004;
  if (DAT_10015105 != '\0') {
    FUN_100011e0(0x10015658);
    vsprintf_s(local_1004 + _GLogIndent::s_nIndent,0x1000 - _GLogIndent::s_nIndent,param_1,param_2);
    _Dst = local_1004;
    memset(_Dst,0x20,_GLogIndent::s_nIndent);
    FUN_100012d0(local_1004,_Dst);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015660);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}



/* ---- GLog_Output @ 10001560 size=28 ---- */

/* void __cdecl GLog_Output(char const *,...) */

void __cdecl GLog_Output(char *param_1,...)

{
  char cStack00000008;
  
                    /* 0x1560  79  ?GLog_Output@@YAXPBDZZ */
  if (DAT_10015105 != '\0') {
    GLog_Output(param_1,&cStack00000008);
  }
  return;
}



/* ---- GLog_Output @ 10001580 size=191 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl GLog_Output(enum GLOG_PREFIX_TYPE,bool,char const *,char *) */

void __cdecl GLog_Output(GLOG_PREFIX_TYPE param_1,bool param_2,char *param_3,char *param_4)

{
  char *unaff_EDI;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0x1580  80  ?GLog_Output@@YAXW4GLOG_PREFIX_TYPE@@_NPBDPAD@Z */
  local_4 = DAT_10015018 ^ (uint)local_1004;
  if (DAT_10015105 != '\0') {
    FUN_100011e0(0x10015658);
    if (param_2) {
      vsprintf_s(local_1004 + _GLogIndent::s_nIndent,0x1000 - _GLogIndent::s_nIndent,param_3,param_4
                );
      memset(local_1004,0x20,_GLogIndent::s_nIndent);
    }
    else {
      vsprintf_s(local_1004,0x1000,param_3,param_4);
    }
    FUN_100012d0(local_1004,unaff_EDI);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015660);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}



/* ---- GLog_Output @ 10001640 size=38 ---- */

/* void __cdecl GLog_Output(enum GLOG_PREFIX_TYPE,bool,char const *,...) */

void __cdecl GLog_Output(GLOG_PREFIX_TYPE param_1,bool param_2,char *param_3,...)

{
  char cStack00000010;
  
                    /* 0x1640  81  ?GLog_Output@@YAXW4GLOG_PREFIX_TYPE@@_NPBDZZ */
  if (DAT_10015105 != '\0') {
    GLog_Output(param_1,param_2,param_3,&cStack00000010);
  }
  return;
}



/* ---- GLog_Output_Prefix1 @ 10001670 size=32 ---- */

/* void __cdecl GLog_Output_Prefix1(char const *,...) */

void __cdecl GLog_Output_Prefix1(char *param_1,...)

{
  char cStack00000008;
  
                    /* 0x1670  82  ?GLog_Output_Prefix1@@YAXPBDZZ */
  if (DAT_10015105 != '\0') {
    GLog_Output(1,true,param_1,&cStack00000008);
  }
  return;
}



/* ---- GLog_Output_Prefix2 @ 10001690 size=32 ---- */

/* void __cdecl GLog_Output_Prefix2(char const *,...) */

void __cdecl GLog_Output_Prefix2(char *param_1,...)

{
  char cStack00000008;
  
                    /* 0x1690  84  ?GLog_Output_Prefix2@@YAXPBDZZ */
  if (DAT_10015105 != '\0') {
    GLog_Output(2,true,param_1,&cStack00000008);
  }
  return;
}



/* ---- GLog_Output_Prefix3 @ 100016b0 size=32 ---- */

/* void __cdecl GLog_Output_Prefix3(char const *,...) */

void __cdecl GLog_Output_Prefix3(char *param_1,...)

{
  char cStack00000008;
  
                    /* 0x16b0  86  ?GLog_Output_Prefix3@@YAXPBDZZ */
  if (DAT_10015105 != '\0') {
    GLog_Output(3,true,param_1,&cStack00000008);
  }
  return;
}



/* ---- GLog_Output_Prefix4 @ 100016d0 size=32 ---- */

/* void __cdecl GLog_Output_Prefix4(char const *,...) */

void __cdecl GLog_Output_Prefix4(char *param_1,...)

{
  char cStack00000008;
  
                    /* 0x16d0  88  ?GLog_Output_Prefix4@@YAXPBDZZ */
  if (DAT_10015105 != '\0') {
    GLog_Output(4,true,param_1,&cStack00000008);
  }
  return;
}



/* ---- GLog_Output_Prefix1_NoIndent @ 100016f0 size=129 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl GLog_Output_Prefix1_NoIndent(char const *,...) */

void __cdecl GLog_Output_Prefix1_NoIndent(char *param_1,...)

{
  char cStack00000008;
  char *_DstBuf;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0x16f0  83  ?GLog_Output_Prefix1_NoIndent@@YAXPBDZZ */
  local_4 = DAT_10015018 ^ (uint)local_1004;
  if (DAT_10015105 != '\0') {
    FUN_100011e0(0x10015658);
    _DstBuf = local_1004;
    vsprintf_s(_DstBuf,0x1000,param_1,&cStack00000008);
    FUN_100012d0(local_1004,_DstBuf);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015660);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}



/* ---- GLog_Output_Prefix2_NoIndent @ 10001780 size=129 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl GLog_Output_Prefix2_NoIndent(char const *,...) */

void __cdecl GLog_Output_Prefix2_NoIndent(char *param_1,...)

{
  char cStack00000008;
  char *_DstBuf;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0x1780  85  ?GLog_Output_Prefix2_NoIndent@@YAXPBDZZ */
  local_4 = DAT_10015018 ^ (uint)local_1004;
  if (DAT_10015105 != '\0') {
    FUN_100011e0(0x10015658);
    _DstBuf = local_1004;
    vsprintf_s(_DstBuf,0x1000,param_1,&cStack00000008);
    FUN_100012d0(local_1004,_DstBuf);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015660);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}



/* ---- GLog_Output_Prefix3_NoIndent @ 10001810 size=129 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl GLog_Output_Prefix3_NoIndent(char const *,...) */

void __cdecl GLog_Output_Prefix3_NoIndent(char *param_1,...)

{
  char cStack00000008;
  char *_DstBuf;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0x1810  87  ?GLog_Output_Prefix3_NoIndent@@YAXPBDZZ */
  local_4 = DAT_10015018 ^ (uint)local_1004;
  if (DAT_10015105 != '\0') {
    FUN_100011e0(0x10015658);
    _DstBuf = local_1004;
    vsprintf_s(_DstBuf,0x1000,param_1,&cStack00000008);
    FUN_100012d0(local_1004,_DstBuf);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015660);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}



/* ---- GLog_Output_Prefix4_NoIndent @ 100018a0 size=129 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl GLog_Output_Prefix4_NoIndent(char const *,...) */

void __cdecl GLog_Output_Prefix4_NoIndent(char *param_1,...)

{
  char cStack00000008;
  char *_DstBuf;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0x18a0  89  ?GLog_Output_Prefix4_NoIndent@@YAXPBDZZ */
  local_4 = DAT_10015018 ^ (uint)local_1004;
  if (DAT_10015105 != '\0') {
    FUN_100011e0(0x10015658);
    _DstBuf = local_1004;
    vsprintf_s(_DstBuf,0x1000,param_1,&cStack00000008);
    FUN_100012d0(local_1004,_DstBuf);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015660);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}



/* ---- GLog_SetFileName @ 10001930 size=38 ---- */

/* void __cdecl GLog_SetFileName(char const *) */

void __cdecl GLog_SetFileName(char *param_1)

{
                    /* 0x1930  92  ?GLog_SetFileName@@YAXPBD@Z */
  FUN_100011e0(0x10015620);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015654,param_1)
  ;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_GetFileName @ 10001960 size=6 ---- */

/* char * __cdecl GLog_GetFileName(void) */

char * __cdecl GLog_GetFileName(void)

{
                    /* 0x1960  77  ?GLog_GetFileName@@YAPADXZ */
  return DAT_10015654;
}



/* ---- GLog_SetHeader @ 10001970 size=38 ---- */

/* void __cdecl GLog_SetHeader(char const *) */

void __cdecl GLog_SetHeader(char *param_1)

{
                    /* 0x1970  93  ?GLog_SetHeader@@YAXPBD@Z */
  FUN_100011e0(0x10015620);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_100155fc,param_1)
  ;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_SetCallback @ 100019a0 size=41 ---- */

/* void __cdecl GLog_SetCallback(void (__cdecl*)(char const *,void const *),void *) */

void __cdecl GLog_SetCallback(_func_void_char_ptr_void_ptr *param_1,void *param_2)

{
                    /* 0x19a0  90  ?GLog_SetCallback@@YAXP6AXPBDPBX@ZPAX@Z */
  FUN_100011e0(0x10015620);
  DAT_100155d4 = param_1;
  DAT_100155d8 = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_EnableNewLine @ 100019d0 size=31 ---- */

/* void __cdecl GLog_EnableNewLine(bool) */

void __cdecl GLog_EnableNewLine(bool param_1)

{
                    /* 0x19d0  72  ?GLog_EnableNewLine@@YAX_N@Z */
  FUN_100011e0(0x10015620);
  DAT_100150cf = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_EnableTime @ 100019f0 size=31 ---- */

/* void __cdecl GLog_EnableTime(bool) */

void __cdecl GLog_EnableTime(bool param_1)

{
                    /* 0x19f0  75  ?GLog_EnableTime@@YAX_N@Z */
  FUN_100011e0(0x10015620);
  DAT_10015104 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_EnableTick @ 10001a10 size=31 ---- */

/* void __cdecl GLog_EnableTick(bool) */

void __cdecl GLog_EnableTick(bool param_1)

{
                    /* 0x1a10  74  ?GLog_EnableTick@@YAX_N@Z */
  FUN_100011e0(0x10015620);
  DAT_100155dc = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_EnableLog @ 10001a30 size=31 ---- */

/* void __cdecl GLog_EnableLog(bool) */

void __cdecl GLog_EnableLog(bool param_1)

{
                    /* 0x1a30  71  ?GLog_EnableLog@@YAX_N@Z */
  FUN_100011e0(0x10015620);
  DAT_10015105 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_EnableThreadID @ 10001a50 size=31 ---- */

/* void __cdecl GLog_EnableThreadID(bool) */

void __cdecl GLog_EnableThreadID(bool param_1)

{
                    /* 0x1a50  73  ?GLog_EnableThreadID@@YAX_N@Z */
  FUN_100011e0(0x10015620);
  DAT_100155dd = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return;
}



/* ---- GLog_SetPrefix @ 10001a70 size=58 ---- */

/* bool __cdecl GLog_SetPrefix(enum GLOG_PREFIX_TYPE,char *) */

bool __cdecl GLog_SetPrefix(GLOG_PREFIX_TYPE param_1,char *param_2)

{
                    /* 0x1a70  94  ?GLog_SetPrefix@@YA_NW4GLOG_PREFIX_TYPE@@PAD@Z */
  FUN_100011e0(0x10015620);
  if (((int)param_1 < 0) || (4 < (int)param_1)) {
    return false;
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (&DAT_10015640 + param_1 * 4),param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return true;
}



/* ---- GLog_SetCurrentPrefix @ 10001ab0 size=33 ---- */

/* bool __cdecl GLog_SetCurrentPrefix(enum GLOG_PREFIX_TYPE) */

bool __cdecl GLog_SetCurrentPrefix(GLOG_PREFIX_TYPE param_1)

{
                    /* 0x1ab0  91  ?GLog_SetCurrentPrefix@@YA_NW4GLOG_PREFIX_TYPE@@@Z */
  FUN_100011e0(0x10015620);
  DAT_10015148 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  return true;
}



/* ---- GLog_GetCurrentPrefix @ 10001ae0 size=6 ---- */

/* enum GLOG_PREFIX_TYPE __cdecl GLog_GetCurrentPrefix(void) */

GLOG_PREFIX_TYPE __cdecl GLog_GetCurrentPrefix(void)

{
                    /* 0x1ae0  76  ?GLog_GetCurrentPrefix@@YA?AW4GLOG_PREFIX_TYPE@@XZ */
  return DAT_10015148;
}



/* ---- _GLogIndent @ 10001af0 size=239 ---- */

/* public: __thiscall _GLogIndent::_GLogIndent(char const *) */

_GLogIndent * __thiscall _GLogIndent::_GLogIndent(_GLogIndent *this,char *param_1)

{
  uint uVar1;
  undefined4 local_14;
  _GLogIndent *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1af0  14  ??0_GLogIndent@@QAE@PBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000de52;
  local_c = ExceptionList;
  uVar1 = DAT_10015018 ^ (int)register0x00000010 - 0x18U;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this);
  local_4 = 0;
  FUN_100011e0(0x10015600);
  if (s_nIndent < 0) {
    s_nIndent = 0;
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_14,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_14,"()");
  if (DAT_10015148 != -1) {
    GLog_Output(0,true,local_14,uVar1);
    if (DAT_10015148 != -1) {
      GLog_Output(0,true,"{");
    }
  }
  s_nIndent = s_nIndent + s_nIndentUnit;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this,"}");
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015608);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_14);
  ExceptionList = local_c;
  return this;
}



/* ---- _GLogIndent @ 10001be0 size=130 ---- */

/* public: __thiscall _GLogIndent::_GLogIndent(void) */

_GLogIndent * __thiscall _GLogIndent::_GLogIndent(_GLogIndent *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1be0  15  ??0_GLogIndent@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000db69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this);
  local_4 = 0;
  FUN_100011e0(0x10015600);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this,"");
  s_nIndent = s_nIndent + s_nIndentUnit;
  if (s_nIndent < 0) {
    s_nIndent = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015608);
  ExceptionList = local_c;
  return this;
}



/* ---- ~_GLogIndent @ 10001c70 size=135 ---- */

/* public: __thiscall _GLogIndent::~_GLogIndent(void) */

void __thiscall _GLogIndent::~_GLogIndent(_GLogIndent *this)

{
  uint uVar1;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1c70  23  ??1_GLogIndent@@QAE@XZ */
  puStack_8 = &LAB_1000db69;
  local_c = ExceptionList;
  uVar1 = DAT_10015018 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_100011e0(0x10015600);
  s_nIndent = s_nIndent - s_nIndentUnit;
  if ((0 < *(int *)(*(char **)this + -0xc)) && (DAT_10015148 != -1)) {
    GLog_Output(0,true,*(char **)this,uVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015608);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this);
  ExceptionList = local_c;
  return;
}



/* ---- setLength @ 10001d00 size=31 ---- */

/* public: static void __cdecl _GLogIndent::setLength(unsigned long) */

void __cdecl _GLogIndent::setLength(ulong param_1)

{
                    /* 0x1d00  238  ?setLength@_GLogIndent@@SAXK@Z */
  FUN_100011e0(0x10015600);
  s_nIndentUnit = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10015608);
  return;
}



/* ---- FUN_10001d20 @ 10001d20 size=20 ---- */

void FUN_10001d20(void)

{
  undefined1 local_4 [4];
  
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_4,(ThrowInfo *)&DAT_1000fdd0);
}



/* ---- SetFTPEnable @ 10001d40 size=10 ---- */

/* public: void __thiscall GMiniDump::SetFTPEnable(bool) */

void __thiscall GMiniDump::SetFTPEnable(GMiniDump *this,bool param_1)

{
                    /* 0x1d40  213  ?SetFTPEnable@GMiniDump@@QAEX_N@Z */
  this[8] = (GMiniDump)param_1;
  return;
}



/* ---- SetHeadless @ 10001d50 size=13 ---- */

/* public: void __thiscall GMiniDump::SetHeadless(bool) */

void __thiscall GMiniDump::SetHeadless(GMiniDump *this,bool param_1)

{
                    /* 0x1d50  217  ?SetHeadless@GMiniDump@@QAEX_N@Z */
  this[0x45c] = (GMiniDump)param_1;
  return;
}



/* ---- SetFlag @ 10001d60 size=13 ---- */

/* public: void __thiscall GMiniDump::SetFlag(unsigned long) */

void __thiscall GMiniDump::SetFlag(GMiniDump *this,ulong param_1)

{
                    /* 0x1d60  216  ?SetFlag@GMiniDump@@QAEXK@Z */
  *(uint *)(this + 0x860) = *(uint *)(this + 0x860) | param_1;
  return;
}



/* ---- operator= @ 10001d70 size=22 ---- */

/* public: class GMiniDump & __thiscall GMiniDump::operator=(class GMiniDump const &) */

GMiniDump * __thiscall GMiniDump::operator=(GMiniDump *this,GMiniDump *param_1)

{
  int iVar1;
  GMiniDump *pGVar2;
  
                    /* 0x1d70  28  ??4GMiniDump@@QAEAAV0@ABV0@@Z */
  pGVar2 = this;
  for (iVar1 = 0x21a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pGVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pGVar2 = pGVar2 + 4;
  }
  return this;
}



/* ---- GMiniDump @ 10001d90 size=114 ---- */

/* public: __thiscall GMiniDump::GMiniDump(void) */

GMiniDump * __thiscall GMiniDump::GMiniDump(GMiniDump *this)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    /* 0x1d90  8  ??0GMiniDump@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (s_pMiniDump == (GMiniDump *)0x0) {
    pPVar1 = SetUnhandledExceptionFilter(CustomHandler);
    *(LPTOP_LEVEL_EXCEPTION_FILTER *)(this + 0x864) = pPVar1;
    s_pMiniDump = this;
  }
  else {
    *(undefined4 *)(this + 0x864) = 0;
  }
  this[8] = (GMiniDump)0x0;
  this[9] = (GMiniDump)0x0;
  this[0x20e] = (GMiniDump)0x0;
  this[0x22f] = (GMiniDump)0x0;
  this[0x254] = (GMiniDump)0x0;
  this[0x358] = (GMiniDump)0x0;
  this[0x45d] = (GMiniDump)0x0;
  *(undefined4 *)(this + 0x860) = 0;
  *(undefined4 *)(this + 0x250) = 0xffffffff;
  this[0x45c] = (GMiniDump)0x1;
  return this;
}



/* ---- ~GMiniDump @ 10001e10 size=90 ---- */

/* public: __thiscall GMiniDump::~GMiniDump(void) */

void __thiscall GMiniDump::~GMiniDump(GMiniDump *this)

{
                    /* 0x1e10  20  ??1GMiniDump@@QAE@XZ */
  if (this == s_pMiniDump) {
    if (*(LPTOP_LEVEL_EXCEPTION_FILTER *)(this + 0x864) != (LPTOP_LEVEL_EXCEPTION_FILTER)0x0) {
      SetUnhandledExceptionFilter(*(LPTOP_LEVEL_EXCEPTION_FILTER *)(this + 0x864));
      *(undefined4 *)(this + 0x864) = 0;
    }
    s_pMiniDump = (GMiniDump *)0x0;
  }
  if (*(int *)this != 0) {
    InternetCloseHandle(*(int *)this);
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 4) != 0) {
    InternetCloseHandle(*(int *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}



/* ---- SetFTPEnv @ 10001e70 size=128 ---- */

/* public: bool __thiscall GMiniDump::SetFTPEnv(char *,int,char *,char *,char *) */

bool __thiscall
GMiniDump::SetFTPEnv
          (GMiniDump *this,char *param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  errno_t eVar1;
  
                    /* 0x1e70  214  ?SetFTPEnv@GMiniDump@@QAE_NPADH000@Z */
  eVar1 = strcpy_s((char *)(this + 9),0x101,param_1);
  if (eVar1 == 0) {
    *(int *)(this + 0x250) = param_2;
    eVar1 = strcpy_s((char *)(this + 0x20e),0x21,param_3);
    if (eVar1 == 0) {
      eVar1 = strcpy_s((char *)(this + 0x22f),0x21,param_4);
      if (eVar1 == 0) {
        eVar1 = strcpy_s((char *)(this + 0x10a),0x104,param_5);
        return eVar1 == 0;
      }
    }
  }
  return false;
}



/* ---- SetFTPLog @ 10001ef0 size=75 ---- */

/* public: bool __thiscall GMiniDump::SetFTPLog(char *,char *) */

bool __thiscall GMiniDump::SetFTPLog(GMiniDump *this,char *param_1,char *param_2)

{
  errno_t eVar1;
  
                    /* 0x1ef0  215  ?SetFTPLog@GMiniDump@@QAE_NPAD0@Z */
  eVar1 = strcpy_s((char *)(this + 0x254),0x104,param_1);
  if (eVar1 == 0) {
    eVar1 = strcpy_s((char *)(this + 0x358),0x104,param_2);
    return eVar1 == 0;
  }
  return false;
}



/* ---- SetMessage @ 10001f40 size=34 ---- */

/* public: bool __thiscall GMiniDump::SetMessage(char *) */

bool __thiscall GMiniDump::SetMessage(GMiniDump *this,char *param_1)

{
  errno_t eVar1;
  
                    /* 0x1f40  219  ?SetMessage@GMiniDump@@QAE_NPAD@Z */
  eVar1 = strcpy_s((char *)(this + 0x45d),0x401,param_1);
  return eVar1 == 0;
}



/* ---- CustomHandler @ 10001f70 size=20 ---- */

/* public: static long __stdcall GMiniDump::CustomHandler(struct _EXCEPTION_POINTERS *) */

long GMiniDump::CustomHandler(_EXCEPTION_POINTERS *param_1)

{
  long lVar1;
  
                    /* 0x1f70  52  ?CustomHandler@GMiniDump@@SGJPAU_EXCEPTION_POINTERS@@@Z */
  if (s_pMiniDump == (GMiniDump *)0x0) {
    return 0;
  }
  lVar1 = ExceptionHandler(s_pMiniDump,param_1);
  return lVar1;
}



/* ---- GetPathNameExt @ 10001f90 size=171 ---- */

/* protected: bool __thiscall GMiniDump::GetPathNameExt(char *,char *,char *,unsigned long) */

bool __thiscall
GMiniDump::GetPathNameExt(GMiniDump *this,char *param_1,char *param_2,char *param_3,ulong param_4)

{
  undefined1 uVar1;
  DWORD DVar2;
  uchar *puVar3;
  errno_t eVar4;
  GMiniDump *local_10c;
  char local_108 [260];
  uint local_4;
  
                    /* 0x1f90  98  ?GetPathNameExt@GMiniDump@@IAE_NPAD00K@Z */
  local_4 = DAT_10015018 ^ (uint)&local_10c;
  local_10c = this;
  if ((((param_1 != (char *)0x0) && (param_3 != (char *)0x0)) && (param_2 != (char *)0x0)) &&
     (((DVar2 = GetModuleFileNameA((HMODULE)0x0,param_1,param_4), DVar2 != 0 &&
       (puVar3 = _mbsrchr((uchar *)param_1,0x5c), puVar3 != (uchar *)0x0)) &&
      (eVar4 = strcpy_s(local_108,param_4,(char *)(puVar3 + 1)), eVar4 == 0)))) {
    GetNameExt(local_10c,local_108,param_2,param_3,param_4);
  }
  uVar1 = __security_check_cookie(local_4 ^ (uint)&local_10c);
  return (bool)uVar1;
}



/* ---- GetNameExt @ 10002040 size=135 ---- */

/* protected: bool __thiscall GMiniDump::GetNameExt(char const *,char *,char *,unsigned long) */

bool __thiscall
GMiniDump::GetNameExt(GMiniDump *this,char *param_1,char *param_2,char *param_3,ulong param_4)

{
  errno_t eVar1;
  uchar *puVar2;
  
                    /* 0x2040  97  ?GetNameExt@GMiniDump@@IAE_NPBDPAD1K@Z */
  if (param_1 == (char *)0x0) {
    return false;
  }
  if (param_2 == (char *)0x0) {
    return false;
  }
  if (param_3 == (char *)0x0) {
    return false;
  }
  eVar1 = strcpy_s(param_2,param_4,param_1);
  if (eVar1 == 0) {
    puVar2 = _mbsrchr((uchar *)param_2,0x2e);
    if (puVar2 == (uchar *)0x0) {
      *param_3 = '\0';
      return true;
    }
    eVar1 = strcpy_s(param_3,param_4,(char *)(puVar2 + 1));
    if (eVar1 == 0) {
      *puVar2 = '\0';
      return true;
    }
  }
  return false;
}



/* ---- ExceptionHandler @ 100020d0 size=1271 ---- */

/* protected: long __thiscall GMiniDump::ExceptionHandler(struct _EXCEPTION_POINTERS *) */

long __thiscall GMiniDump::ExceptionHandler(GMiniDump *this,_EXCEPTION_POINTERS *param_1)

{
  int *piVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  errno_t eVar5;
  HANDLE hProcess;
  long lVar6;
  UINT uExitCode;
  undefined4 uStack_644;
  char *pcStack_640;
  char *pcStack_63c;
  int iStack_638;
  char *pcStack_634;
  __time64_t _Stack_630;
  uint uStack_628;
  _EXCEPTION_POINTERS *local_624;
  tm tStack_620;
  tm tStack_5fc;
  tm tStack_5d8;
  tm tStack_5b4;
  tm tStack_590;
  tm tStack_56c;
  char acStack_548 [264];
  char acStack_440 [264];
  char acStack_338 [264];
  char acStack_230 [264];
  char acStack_128 [268];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
                    /* 0x20d0  58  ?ExceptionHandler@GMiniDump@@IAEJPAU_EXCEPTION_POINTERS@@@Z */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_1000e107;
  local_14 = ExceptionList;
  local_1c = DAT_10015018 ^ (uint)&uStack_644;
  ExceptionList = &local_14;
  local_624 = param_1;
  iVar4 = (**(code **)(DAT_100155b8 + 0xc))(DAT_10015018 ^ (int)register0x00000010 - 0x650U);
  pcStack_634 = (char *)(iVar4 + 0x10);
  uStack_c = 0;
  iStack_638 = (**(code **)(DAT_100155b8 + 0xc))();
  iStack_638 = iStack_638 + 0x10;
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  _Stack_630 = _time64((__time64_t *)0x0);
  eVar5 = _localtime64_s(&tStack_56c,&_Stack_630);
  if (eVar5 == 0) {
    pcStack_63c = (char *)tStack_56c.tm_sec;
  }
  else {
    pcStack_63c = (char *)0xffffffff;
  }
  eVar5 = _localtime64_s(&tStack_620,&_Stack_630);
  if (eVar5 == 0) {
    pcStack_640 = (char *)tStack_620.tm_min;
  }
  else {
    pcStack_640 = (char *)0xffffffff;
  }
  eVar5 = _localtime64_s(&tStack_590,&_Stack_630);
  if (eVar5 == 0) {
    uStack_644 = tStack_590.tm_hour;
  }
  else {
    uStack_644 = -1;
  }
  eVar5 = _localtime64_s(&tStack_5d8,&_Stack_630);
  uStack_628 = ~-(uint)(eVar5 != 0) & tStack_5d8.tm_mday;
  _localtime64_s(&tStack_5b4,&_Stack_630);
  eVar5 = _localtime64_s(&tStack_5fc,&_Stack_630);
  if (eVar5 == 0) {
    tStack_5fc.tm_year._0_1_ = (char)tStack_5fc.tm_year + 'l';
  }
  else {
    tStack_5fc.tm_year._0_1_ = '\0';
  }
  FUN_100028e0("%d%02d%02d_%02d%02d%02d",(char)tStack_5fc.tm_year);
  if (this[0x45c] == (GMiniDump)0x0) {
    iVar4 = MessageBoxA((HWND)0x0,(LPCSTR)(this + 0x45d),(LPCSTR)0x0,0x14);
    if (iVar4 != 7) goto LAB_10002295;
  }
  else {
LAB_10002295:
    GetPathNameExt(this,acStack_128,acStack_548,acStack_230,0x104);
    if (((byte)this[0x860] & 1) == 0) {
      FUN_100028e0("%s.%s.dmp",(char)acStack_548);
    }
    else {
      FUN_100028e0("%s.%s_%s.dmp",(char)acStack_548);
    }
    bVar3 = WriteMiniDump(this,local_624,pcStack_634,acStack_128);
    if (bVar3) {
      if (this[8] == (GMiniDump)0x0) goto LAB_1000253a;
      uStack_644 = (**(code **)(DAT_100155b8 + 0xc))();
      pcVar2 = pcStack_634;
      uStack_644 = uStack_644 + 0x10;
      uStack_c._0_1_ = 2;
      iVar4 = GetFileSize(this,pcStack_634);
      FUN_100028e0(&DAT_1000f3a8,(char)iVar4);
      bVar3 = GFtp::openFtp((GFtp *)this,(char *)(this + 9),*(int *)(this + 0x250),
                            (char *)(this + 0x20e),(char *)(this + 0x22f));
      if (bVar3) {
        iVar4 = (**(code **)(DAT_100155b8 + 0xc))();
        pcStack_640 = (char *)(iVar4 + 0x10);
        uStack_c = CONCAT31(uStack_c._1_3_,3);
        if (((byte)this[0x860] & 1) == 0) {
          FUN_100028e0("%s_%s.dmp",(char)acStack_548);
        }
        else {
          FUN_100028e0("%s_%s_%s.dmp",(char)acStack_548);
        }
        bVar3 = GFtp::sendFile((GFtp *)this,pcVar2,pcStack_640,(char *)(this + 0x10a));
        if ((bVar3) && (this[0x254] != (GMiniDump)0x0)) {
          GetNameExt(this,(char *)(this + 0x254),acStack_338,acStack_440,0x104);
          FUN_10002790();
          uStack_c = CONCAT31(uStack_c._1_3_,4);
          if (((byte)this[0x860] & 1) == 0) {
            FUN_100028e0("%s_%s.%s",(char)acStack_338);
          }
          else {
            FUN_100028e0("%s_%s_%s.%s",(char)acStack_338);
          }
          GFtp::sendFile((GFtp *)this,(char *)(this + 0x254),pcStack_63c,(char *)(this + 0x358));
          FUN_100027b0((int *)&pcStack_63c);
        }
        FUN_100027b0((int *)&pcStack_640);
        FUN_100027b0(&uStack_644);
      }
      else {
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        piVar1 = (int *)(uStack_644 + -4);
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 + -1 < 1) {
          (**(code **)(**(int **)(uStack_644 + -0x10) + 4))((undefined4 *)(uStack_644 + -0x10));
        }
      }
    }
  }
  if (this[8] != (GMiniDump)0x0) {
    if (*(int *)this != 0) {
      InternetCloseHandle(*(int *)this);
      *(undefined4 *)this = 0;
    }
    if (*(int *)(this + 4) != 0) {
      InternetCloseHandle(*(int *)(this + 4));
      *(undefined4 *)(this + 4) = 0;
    }
  }
LAB_1000253a:
  uExitCode = 0;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  uStack_c = uStack_c & 0xffffff00;
  piVar1 = (int *)(iStack_638 + -4);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 + -1 < 1) {
    (**(code **)(**(int **)(iStack_638 + -0x10) + 4))((undefined4 *)(iStack_638 + -0x10));
  }
  uStack_c = 0xffffffff;
  piVar1 = (int *)(pcStack_634 + -4);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 + -1 < 1) {
    (**(code **)(**(int **)(pcStack_634 + -0x10) + 4))(pcStack_634 + -0x10);
  }
  ExceptionList = local_14;
  lVar6 = __security_check_cookie(local_1c ^ (uint)&uStack_644);
  return lVar6;
}



/* ---- ShowQuestion @ 100025d0 size=38 ---- */

/* protected: bool __thiscall GMiniDump::ShowQuestion(void) */

bool __thiscall GMiniDump::ShowQuestion(GMiniDump *this)

{
  int iVar1;
  
                    /* 0x25d0  222  ?ShowQuestion@GMiniDump@@IAE_NXZ */
  if (this[0x45c] == (GMiniDump)0x0) {
    iVar1 = MessageBoxA((HWND)0x0,(LPCSTR)(this + 0x45d),(LPCSTR)0x0,0x14);
    return iVar1 != 7;
  }
  return true;
}



/* ---- WriteMiniDump @ 10002600 size=304 ---- */

/* protected: bool __thiscall GMiniDump::WriteMiniDump(struct _EXCEPTION_POINTERS *,char const
   *,char const *) */

bool __thiscall
GMiniDump::WriteMiniDump(GMiniDump *this,_EXCEPTION_POINTERS *param_1,char *param_2,char *param_3)

{
  undefined1 uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  HANDLE hObject;
  HANDLE pvVar5;
  undefined4 uVar6;
  DWORD *pDVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_11c [3];
  undefined1 local_119;
  _EXCEPTION_POINTERS *local_118;
  DWORD local_114;
  _EXCEPTION_POINTERS *local_110;
  undefined4 local_10c;
  char local_108 [260];
  uint local_4;
  
                    /* 0x2600  224  ?WriteMiniDump@GMiniDump@@IAE_NPAU_EXCEPTION_POINTERS@@PBD1@Z */
  local_4 = DAT_10015018 ^ (uint)auStack_11c;
  local_118 = param_1;
  local_119 = 0;
  hObject = (HANDLE)0x0;
  strcpy_s(local_108,0x104,param_3);
  strcat_s(local_108,0x104,"dbghelp.dll");
  hModule = LoadLibraryA(local_108);
  if ((hModule != (HMODULE)0x0) || (hModule = LoadLibraryA("dbghelp.dll"), hModule != (HMODULE)0x0))
  {
    pFVar2 = GetProcAddress(hModule,"MiniDumpWriteDump");
    if ((pFVar2 != (FARPROC)0x0) &&
       (hObject = CreateFileA(param_2,0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0),
       hObject != (HANDLE)0xffffffff)) {
      local_114 = GetCurrentThreadId();
      uVar9 = 0;
      uVar8 = 0;
      pDVar7 = &local_114;
      uVar6 = 0;
      local_110 = local_118;
      local_10c = 0;
      pvVar5 = hObject;
      DVar3 = GetCurrentProcessId();
      pvVar4 = GetCurrentProcess();
      (*pFVar2)(pvVar4,DVar3,pvVar5,uVar6,pDVar7,uVar8,uVar9);
    }
    if (hModule != (HMODULE)0x0) {
      FreeLibrary(hModule);
    }
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
    }
  }
  uVar1 = __security_check_cookie(local_4 ^ (uint)auStack_11c);
  return (bool)uVar1;
}



/* ---- GetFileSize @ 10002730 size=83 ---- */

/* protected: int __thiscall GMiniDump::GetFileSize(char const *) */

int __thiscall GMiniDump::GetFileSize(GMiniDump *this,char *param_1)

{
  errno_t eVar1;
  long lVar2;
  
                    /* 0x2730  96  ?GetFileSize@GMiniDump@@IAEHPBD@Z */
  eVar1 = fopen_s((FILE **)&param_1,param_1,"r");
  if (eVar1 == 0) {
    fseek((FILE *)param_1,0,2);
    lVar2 = ftell((FILE *)param_1);
    fclose((FILE *)param_1);
    return lVar2;
  }
  return -1;
}



/* ---- FUN_10002790 @ 10002790 size=23 ---- */

void FUN_10002790(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(DAT_100155b8 + 0xc))();
  *unaff_ESI = iVar1 + 0x10;
  return;
}



/* ---- FUN_100027b0 @ 100027b0 size=31 ---- */

void __fastcall FUN_100027b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*param_1 + -0x10);
  piVar1 = (int *)(*param_1 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  return;
}



/* ---- FUN_100027d0 @ 100027d0 size=72 ---- */

void __fastcall FUN_100027d0(int param_1)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = *in_EAX;
  if (param_1 < *(int *)(iVar1 + -0xc)) {
    param_1 = *(int *)(iVar1 + -0xc);
  }
  if (1 < *(int *)(iVar1 + -4)) {
    FUN_10002830(in_EAX,param_1);
    return;
  }
  iVar1 = *(int *)(iVar1 + -8);
  if (iVar1 < param_1) {
    if (iVar1 < 0x401) {
      iVar1 = iVar1 * 2;
    }
    else {
      iVar1 = iVar1 + 0x400;
    }
    if (iVar1 < param_1) {
      iVar1 = param_1;
    }
    FUN_100028b0(param_1,iVar1);
  }
  return;
}



/* ---- FUN_10002820 @ 10002820 size=10 ---- */

void FUN_10002820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10001d20();
}



/* ---- FUN_10002830 @ 10002830 size=121 ---- */

void FUN_10002830(undefined4 *param_1,int param_2)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  
  _Src = (void *)*param_1;
  iVar2 = *(int *)((int)_Src + -0xc);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)_Src + -0x10) + 0x10))();
  iVar4 = (**(code **)*puVar3)(param_2,1);
  if (iVar4 == 0) {
    FUN_10002820();
  }
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  memcpy_s((void *)(iVar4 + 0x10),param_2 + 1U,_Src,param_2 + 1U);
  *(int *)(iVar4 + 4) = iVar2;
  piVar1 = (int *)((int)_Src + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)((int)_Src + -0x10) + 4))((undefined4 *)((int)_Src + -0x10));
  }
  *unaff_EBX = (void *)(iVar4 + 0x10);
  return;
}



/* ---- FUN_100028b0 @ 100028b0 size=45 ---- */

void __fastcall FUN_100028b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if ((*(int *)(iVar1 + -8) < param_2) && (0 < param_2)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + -0x10) + 8))(iVar1 + -0x10,param_2,1);
    if (iVar1 != 0) goto LAB_100028d7;
  }
  iVar1 = FUN_10002820();
LAB_100028d7:
  *unaff_ESI = iVar1 + 0x10;
  return;
}



/* ---- FUN_100028e0 @ 100028e0 size=17 ---- */

void __cdecl FUN_100028e0(undefined4 param_1,char param_2)

{
  FUN_10002900(&param_2);
  return;
}



/* ---- FUN_10002900 @ 10002900 size=117 ---- */

void FUN_10002900(va_list param_1)

{
  int iVar1;
  char *unaff_EBX;
  int *unaff_EDI;
  
  if (unaff_EBX == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001d20();
  }
  iVar1 = _vscprintf(unaff_EBX,param_1);
  if ((int)(1U - *(int *)(*unaff_EDI + -4) | *(int *)(*unaff_EDI + -8) - iVar1) < 0) {
    FUN_100027d0(iVar1);
  }
  vsprintf_s((char *)*unaff_EDI,iVar1 + 1,unaff_EBX,param_1);
  if ((iVar1 < 0) || (*(int *)(*unaff_EDI + -8) < iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_10001d20();
  }
  *(int *)(*unaff_EDI + -0xc) = iVar1;
  *(undefined1 *)(iVar1 + *unaff_EDI) = 0;
  return;
}



/* ---- FUN_10002980 @ 10002980 size=12 ---- */

void __fastcall FUN_10002980(exception *param_1)

{
  *param_1 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x10002986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 10002990 size=37 ---- */

exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1)

{
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  this->vftablePtr = &vftable;
  std::exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* ---- vfunction2 @ 100029c0 size=14 ---- */

/* std::logic_error member function inherited by std::out_of_range
   std::logic_error member function inherited by std::length_error */

int __thiscall std::logic_error::vfunction2(logic_error *this)

{
  if (*(uint *)&this[2].logic_error_data < 0x10) {
    return (int)(this + 1);
  }
  return (int)this[1].vftablePtr;
}



/* ---- scalar_deleting_destructor @ 100029d0 size=48 ---- */

exception * __thiscall
std::length_error::scalar_deleting_destructor(length_error *this,byte param_1)

{
                    /* inlined destructor: std::logic_error::~logic_error */
  this->vftablePtr = (length_error_vftable *)&logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
  std::exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* ---- ~logic_error @ 10002a00 size=27 ---- */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
                    /* WARNING: Could not recover jumptable at 0x10002a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)this);
  return;
}



/* ---- IsCreated @ 10002a20 size=7 ---- */

/* public: bool __thiscall SockNet::IsCreated(void) */

bool __thiscall SockNet::IsCreated(SockNet *this)

{
                    /* 0x2a20  108  ?IsCreated@SockNet@@QAE_NXZ */
  return (bool)(this->SockNet_data).offset_0x10c;
}



/* ---- ChatParser::~ChatParser @ 10002a30 size=1 ---- */

/* public: __thiscall ChatParser::~ChatParser(void) */

void __thiscall ChatParser::ChatParser___ChatParser(ChatParser *this)

{
                    /* 0x2a30  18  ??1ChatParser@@QAE@XZ
                       0x2a30  150  ?OnConnect@SockNet@@MAEXXZ
                       0x2a30  153  ?OnConnectError@SockNet@@MAEXXZ
                       0x2a30  161  ?OnDisconnect@SockNet@@MAEXXZ
                       0x2a30  171  ?OnReceive@SockNet@@MAEXXZ
                       0x2a30  176  ?OnWrite@SockNet@@MAEXXZ */
  return;
}



/* ---- SockNet @ 10002a40 size=82 ---- */

/* public: __thiscall SockNet::SockNet(class SockNet const &) */

void __thiscall SockNet::SockNet(SockNet *this,SockNet *param_1)

{
  int iVar1;
  SockNet *pSVar2;
  SockNet *pSVar3;
  
                    /* 0x2a40  11  ??0SockNet@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  iVar1 = 0x40;
  pSVar2 = param_1;
  pSVar3 = this;
  while( true ) {
    pSVar3 = (SockNet *)&pSVar3->SockNet_data;
    pSVar2 = pSVar2 + 4;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    ((SockNet_data *)pSVar3)->offset_0x0 = *(undefined4 *)pSVar2;
  }
  (this->SockNet_data).offset_0x100 = *(undefined2 *)(param_1 + 0x104);
  (this->SockNet_data).offset_0x104 = *(undefined4 *)(param_1 + 0x108);
  (this->SockNet_data).offset_0x108 = *(undefined4 *)(param_1 + 0x10c);
  (this->SockNet_data).offset_0x10c = param_1[0x110];
  return;
}



/* ---- operator= @ 10002aa0 size=88 ---- */

/* public: class SockNet & __thiscall SockNet::operator=(class SockNet const &) */

SockNet * __thiscall SockNet::operator=(SockNet *this,SockNet *param_1)

{
  SockNet_data *pSVar1;
  int iVar2;
  
                    /* 0x2aa0  30  ??4SockNet@@QAEAAV0@ABV0@@Z */
  pSVar1 = &this->SockNet_data;
  iVar2 = 0x100;
  do {
    *(undefined1 *)&pSVar1->offset_0x0 = *(undefined1 *)(((int)param_1 - (int)this) + (int)pSVar1);
    pSVar1 = (SockNet_data *)((int)&pSVar1->offset_0x0 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (this->SockNet_data).offset_0x100 = *(undefined2 *)(param_1 + 0x104);
  (this->SockNet_data).offset_0x104 = *(undefined4 *)(param_1 + 0x108);
  (this->SockNet_data).offset_0x108 = *(undefined4 *)(param_1 + 0x10c);
  (this->SockNet_data).offset_0x10c = param_1[0x110];
  return (SockNet *)this;
}



/* ---- scalar_deleting_destructor @ 10002b00 size=86 ---- */

undefined4 * __thiscall SockNet::scalar_deleting_destructor(SockNet *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: SockNet::~SockNet */
    this->vftablePtr = &_vftable_;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return &this->vftablePtr;
  }
  puVar1 = &this[-1].SockNet_data.field_0x140;
  _eh_vector_destructor_iterator_(this,0x114,*(int *)&this[-1].SockNet_data.field_0x140,~SockNet);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (undefined4 *)puVar1;
}



/* ---- PMLNet @ 10002b60 size=246 ---- */

/* public: __thiscall PMLNet::PMLNet(class PMLNet const &) */

PMLNet * __thiscall PMLNet::PMLNet(PMLNet *this,PMLNet *param_1)

{
  int iVar1;
  PMLNet *pPVar2;
  PMLNet *pPVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2b60  9  ??0PMLNet@@QAE@ABV0@@Z */
  puStack_8 = &LAB_1000dd87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: SockNet::SockNet */
  this->vftablePtr = (PMLNet_vftable *)&SockNet::_vftable_;
  iVar1 = 0x40;
  pPVar2 = param_1;
  pPVar3 = this;
  while( true ) {
    pPVar3 = (PMLNet *)&pPVar3->SockNet_data;
    pPVar2 = pPVar2 + 4;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    ((SockNet_data *)pPVar3)->offset_0x0 = *(undefined4 *)pPVar2;
  }
  (this->SockNet_data).offset_0x100 = *(undefined2 *)(param_1 + 0x104);
  (this->SockNet_data).offset_0x104 = *(undefined4 *)(param_1 + 0x108);
  (this->SockNet_data).offset_0x108 = *(undefined4 *)(param_1 + 0x10c);
  (this->SockNet_data).offset_0x10c = param_1[0x110];
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  FUN_10007d90(param_1 + 0x114,&(this->SockNet_data).offset_0x110);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10007d90(param_1 + 300,&(this->SockNet_data).offset_0x128);
  memcpy(&(this->SockNet_data).field_0x140,param_1 + 0x144,0x1000);
  *(undefined4 *)&this[0xd].SockNet_data.field_0x98 = *(undefined4 *)(param_1 + 0x1144);
  *(undefined4 *)&this[0xd].SockNet_data.field_0x9c = *(undefined4 *)(param_1 + 0x1148);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 10002c60 size=109 ---- */

/* public: class PMLNet & __thiscall PMLNet::operator=(class PMLNet const &) */

PMLNet * __thiscall PMLNet::operator=(PMLNet *this,PMLNet *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
                    /* 0x2c60  29  ??4PMLNet@@QAEAAV0@ABV0@@Z */
  SockNet::operator=((SockNet *)this,(SockNet *)param_1);
  FUN_10007ed0();
  FUN_10007ed0();
  puVar1 = &(this->SockNet_data).field_0x140;
  iVar2 = 0x1000;
  do {
    *puVar1 = puVar1[(int)param_1 - (int)this];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)&this[0xd].SockNet_data.field_0x98 = *(undefined4 *)(param_1 + 0x1144);
  *(undefined4 *)&this[0xd].SockNet_data.field_0x9c = *(undefined4 *)(param_1 + 0x1148);
  return (PMLNet *)this;
}



/* ---- scalar_deleting_destructor @ 10002cd0 size=85 ---- */

PMLNet * __thiscall PMLNet::scalar_deleting_destructor(PMLNet *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
    SockNet::SockNet((SockNet *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (PMLNet *)this;
  }
  puVar1 = &this[-1].SockNet_data.field_0x140;
  _eh_vector_destructor_iterator_
            (this,0x114c,*(int *)&this[-1].SockNet_data.field_0x140,SockNet::SockNet);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (PMLNet *)puVar1;
}



/* ---- FUN_10002d30 @ 10002d30 size=25 ---- */

logic_error * __thiscall FUN_10002d30(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
  return param_1;
}



/* ---- logic_error @ 10002d50 size=101 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000da69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception((exception *)this,param_1);
  local_4 = 0;
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  ExceptionList = local_c;
  return this;
}



/* ---- SetPingInterval @ 10002dc0 size=13 ---- */

/* public: void __thiscall CasualNet::SetPingInterval(unsigned long) */

void __thiscall CasualNet::SetPingInterval(CasualNet *this,ulong param_1)

{
                    /* 0x2dc0  220  ?SetPingInterval@CasualNet@@QAEXK@Z */
  *(ulong *)&this[0x40].SockNet_data.field_0xa0 = param_1;
  return;
}



/* ---- SetReloginInterval @ 10002dd0 size=13 ---- */

/* public: void __thiscall CasualNet::SetReloginInterval(unsigned long) */

void __thiscall CasualNet::SetReloginInterval(CasualNet *this,ulong param_1)

{
                    /* 0x2dd0  221  ?SetReloginInterval@CasualNet@@QAEXK@Z */
  *(ulong *)&this[0x40].SockNet_data.field_0xa8 = param_1;
  return;
}



/* ---- SetAutoLogin @ 10002de0 size=13 ---- */

/* public: void __thiscall CasualNet::SetAutoLogin(bool) */

void __thiscall CasualNet::SetAutoLogin(CasualNet *this,bool param_1)

{
                    /* 0x2de0  211  ?SetAutoLogin@CasualNet@@QAEX_N@Z */
  this[0x40].SockNet_data.field_0x94 = param_1;
  return;
}



/* ---- GetState @ 10002df0 size=7 ---- */

/* public: enum CC_STATE __thiscall CasualNet::GetState(void) */

CC_STATE __thiscall CasualNet::GetState(CasualNet *this)

{
                    /* 0x2df0  99  ?GetState@CasualNet@@QAE?AW4CC_STATE@@XZ */
  return *(CC_STATE *)&this[0x40].SockNet_data.field_0x98;
}



/* ---- CasualNet::OnAcceptBuddyAck @ 10002e00 size=3 ---- */

/* protected: virtual void __thiscall CasualNet::OnAcceptBuddyAck(struct CC_BUDDY *,char)
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2 */

void __thiscall
CasualNet::CasualNet__OnAcceptBuddyAck(CasualNet *this,CC_BUDDY *param_1,char param_2)

{
                    /* 0x2e00  114  ?OnAcceptBuddyAck@CasualNet@@MAEXPAUCC_BUDDY@@D@Z
                       0x2e00  116  ?OnAddBlackAck@CasualNet@@MAEXPAUCC_BLACK@@D@Z
                       0x2e00  117  ?OnAddBuddyAccepted@CasualNet@@MAEXPAUCC_BUDDY@@D@Z
                       0x2e00  119  ?OnAddBuddyAck@CasualNet@@MAEXPAUCC_BUDDY@@D@Z
                       0x2e00  143  ?OnChangeBuddyStatus@CasualNet@@MAEXPAUCC_BUDDY@@D@Z
                       0x2e00  147  ?OnChatMsgAck@CasualNet@@MAEXPAUCC_PARAM_CHAT@@D@Z
                       0x2e00  148  ?OnConnect@CasualNet@@MAEXW4CC_STATE@@D@Z
                       0x2e00  154  ?OnDeleteBlackAck@CasualNet@@MAEXPAUCC_BLACK@@D@Z
                       0x2e00  155  ?OnDeleteBuddyAck@CasualNet@@MAEXPAUCC_BUDDY@@D@Z
                       0x2e00  157  ?OnDeleteNewWatcherAck@CasualNet@@MAEXPAUCC_WATCHER@@D@Z
                       0x2e00  158  ?OnDisconnect@CasualNet@@MAEXW4CC_STATE@@D@Z
                       0x2e00  164  ?OnGetUserInfoAck@CasualNet@@MAEXPAUCC_USER@@D@Z
                       0x2e00  168  ?OnPMLReceive@PMLNet@@MAEXPAVCPML@@PAUPMLRELAY@@@Z
                       0x2e00  173  ?OnSetRecvPrefAck@CasualNet@@MAEXPAUCC_PARAM_RECV_PREF@@D@Z */
  return;
}



/* ---- CasualNet::GLogDscUserDefineddata @ 10002e10 size=3 ---- */

/* protected: void __thiscall CasualNet::GLogDscUserDefineddata(unsigned char *)
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2
   CasualNet member function inherited by CasualNetV2 */

void __thiscall CasualNet::CasualNet__GLogDscUserDefineddata(CasualNet *this,uchar *param_1)

{
                    /* 0x2e10  70  ?GLogDscUserDefineddata@CasualNet@@IAEXPAE@Z
                       0x2e10  145  ?OnChangeNickNameAck@CasualNet@@MAEXD@Z
                       0x2e10  146  ?OnChatMsg@CasualNet@@MAEXPAUCC_PARAM_CHAT@@@Z
                       0x2e10  151  ?OnConnectError@CasualNet@@MAEXW4CC_STATE@@@Z
                       0x2e10  162  ?OnGetCMSAck@CasualNet@@MAEXD@Z
                       0x2e10  163  ?OnGetNewWatcherListAck@CasualNet@@MAEXD@Z
                       0x2e10  165  ?OnKickOut@CasualNet@@MAEXD@Z
                       0x2e10  166  ?OnNewWatcher@CasualNet@@MAEXPAUCC_WATCHER@@@Z
                       0x2e10  169  ?OnPingAck@CasualNet@@MAEXD@Z
                       0x2e10  174  ?OnWebLoginAck@CasualNet@@MAEXD@Z */
  return;
}



/* ---- CasualNet @ 10002e20 size=359 ---- */

/* public: __thiscall CasualNet::CasualNet(class CasualNet const &) */

CasualNet * __thiscall CasualNet::CasualNet(CasualNet *this,CasualNet *param_1)

{
  int iVar1;
  CasualNet *pCVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2e20  1  ??0CasualNet@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000df02;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PMLNet::PMLNet((PMLNet *)this,(PMLNet *)param_1);
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  FUN_100084d0((undefined4 *)&this[0xd].SockNet_data.field_0xa0);
  local_4._0_1_ = 1;
  FUN_100084d0((undefined4 *)&this[0xd].SockNet_data.field_0xc0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_100084d0((undefined4 *)&this[0xd].SockNet_data.field_0xe0);
  pCVar2 = param_1 + 0x11ac;
  puVar3 = (undefined4 *)&this[0xd].SockNet_data.offset_0x100;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pCVar2;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x4 = *(undefined4 *)(param_1 + 0x11f8);
  *(undefined4 *)&this[0xe].SockNet_data.field_0x8 = *(undefined4 *)(param_1 + 0x11fc);
  *(undefined4 *)&this[0xe].SockNet_data.field_0xc = *(undefined4 *)(param_1 + 0x1200);
  *(undefined4 *)&this[0xe].SockNet_data.field_0x10 = *(undefined4 *)(param_1 + 0x1204);
  memcpy(&this[0xe].SockNet_data.field_0x14,param_1 + 0x1208,0x4090);
  this[0x40].SockNet_data.field_0x94 = param_1[0x5298];
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = *(undefined4 *)(param_1 + 0x529c);
  *(undefined4 *)&this[0x40].SockNet_data.field_0x9c = *(undefined4 *)(param_1 + 0x52a0);
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa0 = *(undefined4 *)(param_1 + 0x52a4);
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa4 = *(undefined4 *)(param_1 + 0x52a8);
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa8 = *(undefined4 *)(param_1 + 0x52ac);
  pCVar2 = param_1 + 0x52b0;
  puVar3 = (undefined4 *)&this[0x40].SockNet_data.field_0xac;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)&this[0x41].SockNet_data.field_0x64 = *(undefined2 *)(param_1 + 0x53b0);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 10002f90 size=424 ---- */

/* public: class CasualNet & __thiscall CasualNet::operator=(class CasualNet const &) */

CasualNet * __thiscall CasualNet::operator=(CasualNet *this,CasualNet *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  CasualNet *pCVar4;
  undefined4 *puVar5;
  int local_10 [3];
  
                    /* 0x2f90  24  ??4CasualNet@@QAEAAV0@ABV0@@Z */
  PMLNet::operator=((PMLNet *)this,(PMLNet *)param_1);
  puVar2 = &this[0xd].SockNet_data.field_0xa0;
  if ((CasualNet *)puVar2 != param_1 + 0x114c) {
    piVar1 = *(int **)&this[0xd].SockNet_data.field_0xb8;
    iVar3 = *(int *)puVar2;
    FUN_10008960(local_10,iVar3,(int *)*piVar1,iVar3,piVar1);
    FUN_10008610();
  }
  puVar2 = &this[0xd].SockNet_data.field_0xc0;
  if ((CasualNet *)puVar2 != param_1 + 0x116c) {
    piVar1 = *(int **)&this[0xd].SockNet_data.field_0xd8;
    iVar3 = *(int *)puVar2;
    FUN_10008960(local_10,iVar3,(int *)*piVar1,iVar3,piVar1);
    FUN_10008610();
  }
  puVar2 = &this[0xd].SockNet_data.field_0xe0;
  if ((CasualNet *)puVar2 != param_1 + 0x118c) {
    piVar1 = *(int **)&this[0xd].SockNet_data.field_0xf8;
    iVar3 = *(int *)puVar2;
    FUN_10008960(local_10,iVar3,(int *)*piVar1,iVar3,piVar1);
    FUN_10008610();
  }
  pCVar4 = param_1 + 0x11ac;
  puVar5 = (undefined4 *)&this[0xd].SockNet_data.offset_0x100;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pCVar4;
    pCVar4 = pCVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pCVar4;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x4 = *(undefined4 *)(param_1 + 0x11f8);
  *(undefined4 *)&this[0xe].SockNet_data.field_0x8 = *(undefined4 *)(param_1 + 0x11fc);
  *(undefined4 *)&this[0xe].SockNet_data.field_0xc = *(undefined4 *)(param_1 + 0x1200);
  *(undefined4 *)&this[0xe].SockNet_data.field_0x10 = *(undefined4 *)(param_1 + 0x1204);
  memcpy(&this[0xe].SockNet_data.field_0x14,param_1 + 0x1208,0x4090);
  this[0x40].SockNet_data.field_0x94 = param_1[0x5298];
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = *(undefined4 *)(param_1 + 0x529c);
  *(undefined4 *)&this[0x40].SockNet_data.field_0x9c = *(undefined4 *)(param_1 + 0x52a0);
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa0 = *(undefined4 *)(param_1 + 0x52a4);
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa4 = *(undefined4 *)(param_1 + 0x52a8);
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa8 = *(undefined4 *)(param_1 + 0x52ac);
  puVar2 = &this[0x40].SockNet_data.field_0xac;
  iVar3 = 0x100;
  do {
    *puVar2 = puVar2[(int)param_1 - (int)this];
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)&this[0x41].SockNet_data.field_0x64 = *(undefined2 *)(param_1 + 0x53b0);
  return (CasualNet *)this;
}



/* ---- scalar_deleting_destructor @ 10003140 size=85 ---- */

CasualNet * __thiscall CasualNet::scalar_deleting_destructor(CasualNet *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CasualNet(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CasualNet *)this;
  }
  puVar1 = &this[-1].SockNet_data.field_0x140;
  _eh_vector_destructor_iterator_(this,0x53b4,*(int *)&this[-1].SockNet_data.field_0x140,~CasualNet)
  ;
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CasualNet *)puVar1;
}



/* ---- FUN_100031a0 @ 100031a0 size=7 ---- */

void FUN_100031a0(void)

{
  undefined4 *in_EAX;
  
  FUN_100080e0(in_EAX);
  return;
}



/* ---- CasualNet @ 100031b0 size=204 ---- */

/* public: __thiscall CasualNet::CasualNet(void) */

CasualNet * __thiscall CasualNet::CasualNet(CasualNet *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x31b0  2  ??0CasualNet@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e0af;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PMLNet::PMLNet((PMLNet *)this);
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  FUN_10008b80((undefined4 *)&this[0xd].SockNet_data.field_0xa0);
  local_4._0_1_ = 1;
  FUN_10008b80((undefined4 *)&this[0xd].SockNet_data.field_0xc0);
  local_4._0_1_ = 2;
  FUN_10008b80((undefined4 *)&this[0xd].SockNet_data.field_0xe0);
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)&this[0x40].SockNet_data.field_0x9c = 0;
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa0 = 180000;
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa4 = 0;
  *(undefined4 *)&this[0x40].SockNet_data.field_0xa8 = 10000;
  this[0x40].SockNet_data.field_0x94 = 0;
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x4 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x8 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x10 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0xc = 0;
  ResetData(this);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CasualNet @ 10003280 size=175 ---- */

/* public: virtual __thiscall CasualNet::~CasualNet(void) */

void __thiscall CasualNet::~CasualNet(CasualNet *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x3280  16  ??1CasualNet@@UAE@XZ */
  puStack_8 = &LAB_1000e0af;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 3;
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x4 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x8 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x10 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0xc = 0;
  ResetData(this);
  local_4._0_1_ = 2;
  FUN_100080e0((undefined4 *)&this[0xd].SockNet_data.field_0xe0);
  local_4._0_1_ = 1;
  FUN_100080e0((undefined4 *)&this[0xd].SockNet_data.field_0xc0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100080e0((undefined4 *)&this[0xd].SockNet_data.field_0xa0);
  local_4 = 0xffffffff;
  SockNet::SockNet((SockNet *)this);
  ExceptionList = local_c;
  return;
}



/* ---- ResetObject @ 10003330 size=33 ---- */

/* protected: void __thiscall CasualNet::ResetObject(void) */

void __thiscall CasualNet::ResetObject(CasualNet *this)

{
                    /* 0x3330  188  ?ResetObject@CasualNet@@IAEXXZ */
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x4 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x8 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x10 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0xc = 0;
  return;
}



/* ---- ResetData @ 10003360 size=93 ---- */

/* protected: void __thiscall CasualNet::ResetData(void) */

void __thiscall CasualNet::ResetData(CasualNet *this)

{
                    /* 0x3360  187  ?ResetData@CasualNet@@IAEXXZ */
  this[0x40].SockNet_data.field_0xac = 0;
  *(undefined2 *)&this[0x41].SockNet_data.field_0x64 = 0xffff;
  memset(&this[0xd].SockNet_data.offset_0x100,0,0x4a);
  memset(&this[0xe].SockNet_data.field_0x14,0,0x4090);
  ClearBlackList(this);
  ClearWatcherList(this);
  ClearBuddyList(this);
  return;
}



/* ---- CasualNet::Create @ 100033c0 size=5 ---- */

/* public: virtual bool __thiscall CasualNet::Create(void)
   CasualNet member function inherited by CasualNetV2 */

bool __thiscall CasualNet::CasualNet__Create(CasualNet *this)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puStack_1ac;
  undefined1 auStack_1a4 [4];
  undefined1 auStack_1a0 [396];
  uint uStack_14;
  uint uStack_c;
  
                    /* 0x33c0  48  ?Create@CasualNet@@UAE_NXZ
                       0x33c0  49  ?Create@PMLNet@@UAE_NXZ */
  uStack_c = DAT_10015018 ^ (uint)auStack_1a4;
  puStack_1ac = auStack_1a0;
  iVar2 = Ordinal_115(0x202);
  if (iVar2 == 0) {
    (this->SockNet_data).offset_0x10c = 1;
    uVar1 = __security_check_cookie(uStack_14 ^ (uint)&puStack_1ac);
    return (bool)uVar1;
  }
  uVar1 = __security_check_cookie(uStack_14 ^ (uint)&puStack_1ac);
  return (bool)uVar1;
}



/* ---- CasualNet::Destroy @ 100033d0 size=37 ---- */

/* public: virtual void __thiscall CasualNet::Destroy(void) */

void __thiscall CasualNet::CasualNet__Destroy(CasualNet *this)

{
                    /* 0x33d0  53  ?Destroy@CasualNet@@UAEXXZ */
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x4 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x8 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x10 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0xc = 0;
  ResetData(this);
  return;
}



/* ---- Login @ 10003400 size=178 ---- */

/* public: bool __thiscall CasualNet::Login(bool) */

bool __thiscall CasualNet::Login(CasualNet *this,bool param_1)

{
  undefined1 *_Dst;
  ushort uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  DWORD DVar5;
  
                    /* 0x3400  110  ?Login@CasualNet@@QAE_N_N@Z */
  iVar2 = *(int *)&this[0x40].SockNet_data.field_0x98;
  this[0x40].SockNet_data.field_0x94 = param_1;
  if ((iVar2 == 0) && (*(int *)&this[0xe].SockNet_data.field_0x8 != 0)) {
    _Dst = &this[0xe].SockNet_data.field_0x14;
    memset(_Dst,0,0x4090);
    cVar3 = (**(code **)&this[0xe].SockNet_data.field_0x8)
                      (0xcc010001,_Dst,0,*(undefined4 *)&this[0xe].SockNet_data.field_0x10);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)&this[0x27].SockNet_data.field_0xe;
      this[0x40].SockNet_data.field_0xac = 0;
      *(undefined2 *)&this[0x41].SockNet_data.field_0x64 = 0xffff;
      *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 1;
      bVar4 = SockNet::Connect((SockNet *)this,_Dst,uVar1);
      if (bVar4) {
        DVar5 = GetTickCount();
        *(DWORD *)&this[0x40].SockNet_data.field_0xa4 = DVar5;
        return true;
      }
      *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
    }
  }
  DVar5 = GetTickCount();
  *(DWORD *)&this[0x40].SockNet_data.field_0xa4 = DVar5;
  return false;
}



/* ---- Logout @ 100034c0 size=96 ---- */

/* public: void __thiscall CasualNet::Logout(bool) */

void __thiscall CasualNet::Logout(CasualNet *this,bool param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x34c0  111  ?Logout@CasualNet@@QAEX_N@Z */
  this[0x40].SockNet_data.field_0x94 = param_1;
  SendLogout(this);
  iVar1 = (this->SockNet_data).offset_0x104;
  if (iVar1 != -1) {
    Ordinal_3(iVar1);
    (this->SockNet_data).offset_0x104 = 0xffffffff;
  }
  iVar2 = (this->SockNet_data).offset_0x108;
  if (iVar2 != 0) {
    WSACloseEvent(iVar2);
    (this->SockNet_data).offset_0x108 = 0;
  }
  if (iVar1 != -1) {
    (*this->vftablePtr->OnDisconnect)(this);
  }
  return;
}



/* ---- SetEventCallback @ 10003520 size=23 ---- */

/* public: void __thiscall CasualNet::SetEventCallback(void (__stdcall*)(enum CC_EVENT_TYPE,void
   *,unsigned long,void *),void *) */

void __thiscall
CasualNet::SetEventCallback
          (CasualNet *this,_func_void_CC_EVENT_TYPE_void_ptr_ulong_void_ptr *param_1,void *param_2)

{
                    /* 0x3520  212  ?SetEventCallback@CasualNet@@QAEXP6GXW4CC_EVENT_TYPE@@PAXK1@Z1@Z
                        */
  *(_func_void_CC_EVENT_TYPE_void_ptr_ulong_void_ptr **)&this[0xe].SockNet_data.field_0x4 = param_1;
  *(void **)&this[0xe].SockNet_data.field_0xc = param_2;
  return;
}



/* ---- SetInfoCallback @ 10003540 size=23 ---- */

/* public: void __thiscall CasualNet::SetInfoCallback(bool (__stdcall*)(enum CC_INFO_TYPE,void
   *,void *,void *),void *) */

void __thiscall
CasualNet::SetInfoCallback
          (CasualNet *this,_func_bool_CC_INFO_TYPE_void_ptr_void_ptr_void_ptr *param_1,void *param_2
          )

{
                    /* 0x3540  218  ?SetInfoCallback@CasualNet@@QAEXP6G_NW4CC_INFO_TYPE@@PAX11@Z1@Z
                        */
  *(_func_bool_CC_INFO_TYPE_void_ptr_void_ptr_void_ptr **)&this[0xe].SockNet_data.field_0x8 =
       param_1;
  *(void **)&this[0xe].SockNet_data.field_0x10 = param_2;
  return;
}



/* ---- Loop @ 10003560 size=107 ---- */

/* public: void __thiscall CasualNet::Loop(void) */

void __thiscall CasualNet::Loop(CasualNet *this)

{
  DWORD DVar1;
  
                    /* 0x3560  112  ?Loop@CasualNet@@QAEXXZ */
  SockNet::Loop((SockNet *)this);
  if (*(int *)&this[0x40].SockNet_data.field_0x98 == 7) {
    DVar1 = GetTickCount();
    if (*(uint *)&this[0x40].SockNet_data.field_0xa0 <
        DVar1 - *(int *)&this[0x40].SockNet_data.field_0x9c) {
      SendPing(this);
      DVar1 = GetTickCount();
      *(DWORD *)&this[0x40].SockNet_data.field_0x9c = DVar1;
    }
  }
  if ((*(int *)&this[0x40].SockNet_data.field_0x98 == 0) &&
     (this[0x40].SockNet_data.field_0x94 != '\0')) {
    DVar1 = GetTickCount();
    if (*(uint *)&this[0x40].SockNet_data.field_0xa8 <
        DVar1 - *(int *)&this[0x40].SockNet_data.field_0xa4) {
      Login(this,(bool)this[0x40].SockNet_data.field_0x94);
    }
  }
  return;
}



/* ---- ClearBlackList @ 100035d0 size=261 ---- */

/* protected: void __thiscall CasualNet::ClearBlackList(void) */

void __thiscall CasualNet::ClearBlackList(CasualNet *this)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
                    /* 0x35d0  42  ?ClearBlackList@CasualNet@@IAEXXZ */
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xc0;
  piVar7 = (int *)**(undefined4 **)&this[0xd].SockNet_data.field_0xd8;
  while( true ) {
    piVar3 = *(int **)&this[0xd].SockNet_data.field_0xd8;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0xd].SockNet_data.field_0xc0)) {
      _invalid_parameter_noinfo();
    }
    if (piVar7 == piVar3) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    if (piVar7 == *(int **)(iVar6 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    if (piVar7[10] != 0) {
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if (piVar7 == *(int **)(iVar6 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      operator_delete((void *)piVar7[10]);
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar7 + 0x2d) == '\0') {
      piVar3 = (int *)piVar7[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar7 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar7 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar7[1] + 0x2d);
        piVar5 = (int *)piVar7[1];
        piVar3 = piVar7;
        while ((piVar7 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
          cVar1 = *(char *)(piVar7[1] + 0x2d);
          piVar5 = (int *)piVar7[1];
          piVar3 = piVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  FUN_10008ab0(*(int **)(*(int *)&this[0xd].SockNet_data.field_0xd8 + 4));
  iVar6 = *(int *)&this[0xd].SockNet_data.field_0xd8;
  *(int *)(iVar6 + 4) = iVar6;
  uVar4 = *(undefined4 *)&this[0xd].SockNet_data.field_0xd8;
  *(undefined4 *)&this[0xd].SockNet_data.field_0xdc = 0;
  *(undefined4 *)uVar4 = uVar4;
  iVar6 = *(int *)&this[0xd].SockNet_data.field_0xd8;
  *(int *)(iVar6 + 8) = iVar6;
  return;
}



/* ---- AddBlack @ 100036e0 size=220 ---- */

/* protected: bool __thiscall CasualNet::AddBlack(struct CC_BLACK *) */

bool __thiscall CasualNet::AddBlack(CasualNet *this,CC_BLACK *param_1)

{
  CC_BLACK *pCVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffff64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_99 [25];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [28];
  undefined4 local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x36e0  36  ?AddBlack@CasualNet@@IAE_NPAUCC_BLACK@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pCVar1 = FindBlack_Key(this,(char *)param_1);
  if (pCVar1 == (CC_BLACK *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_99 + -3,(char *)param_1)
    ;
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_10009160(in_stack_ffffff64);
    local_c = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58,pbVar2);
    local_3c = *(undefined4 *)(pbVar2 + 0x1c);
    local_c._0_1_ = 1;
    FUN_10007fd0(local_58);
    local_c = (uint)local_c._1_3_ << 8;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58);
    local_c = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
    ExceptionList = local_14;
    return true;
  }
  ExceptionList = local_14;
  return false;
}



/* ---- RemoveBlack_Key @ 100037c0 size=238 ---- */

/* protected: bool __thiscall CasualNet::RemoveBlack_Key(char const *) */

bool __thiscall CasualNet::RemoveBlack_Key(CasualNet *this,char *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int *local_3c;
  int *local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x37c0  181  ?RemoveBlack_Key@CasualNet@@IAE_NPBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  puVar4 = &this[0xd].SockNet_data.field_0xc0;
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  piVar1 = *(int **)puVar4;
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xd8;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (piVar2 == local_38) {
    ExceptionList = local_14;
    return false;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *local_3c;
  }
  if (local_38 == *(int **)(iVar3 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  operator_delete((void *)local_38[10]);
  FUN_10008140((undefined4 *)puVar4,&local_3c,local_3c,local_38);
  ExceptionList = local_14;
  return true;
}



/* ---- FindBlack_Key @ 100038b0 size=212 ---- */

/* public: struct CC_BLACK * __thiscall CasualNet::FindBlack_Key(char const *) */

CC_BLACK * __thiscall CasualNet::FindBlack_Key(CasualNet *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_3c;
  int local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x38b0  59  ?FindBlack_Key@CasualNet@@QAEPAUCC_BLACK@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  iVar2 = *(int *)&this[0xd].SockNet_data.field_0xd8;
  piVar1 = *(int **)&this[0xd].SockNet_data.field_0xc0;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (iVar2 == local_38) {
    ExceptionList = local_14;
    return (CC_BLACK *)0x0;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *local_3c;
  }
  if (local_38 == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  ExceptionList = local_14;
  return *(CC_BLACK **)(local_38 + 0x28);
}



/* ---- FindBlack_Nick @ 10003990 size=243 ---- */

/* public: struct CC_BLACK * __thiscall CasualNet::FindBlack_Nick(char const *) */

CC_BLACK * __thiscall CasualNet::FindBlack_Nick(CasualNet *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
                    /* 0x3990  60  ?FindBlack_Nick@CasualNet@@QAEPAUCC_BLACK@@PBD@Z */
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xc0;
  piVar6 = (int *)**(undefined4 **)&this[0xd].SockNet_data.field_0xd8;
  while( true ) {
    piVar3 = *(int **)&this[0xd].SockNet_data.field_0xd8;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0xd].SockNet_data.field_0xc0)) {
      _invalid_parameter_noinfo();
    }
    if (piVar6 == piVar3) {
      return (CC_BLACK *)0x0;
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (piVar6 == *(int **)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = _mbscmp((uchar *)(piVar6[10] + 0x15),(uchar *)param_1);
    if (iVar5 == 0) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      piVar3 = (int *)piVar6[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar6 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0x2d);
        piVar4 = (int *)piVar6[1];
        piVar3 = piVar6;
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x2d);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if (piVar6 == *(int **)(iVar5 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  return (CC_BLACK *)piVar6[10];
}



/* ---- ClearWatcherList @ 10003a90 size=261 ---- */

/* protected: void __thiscall CasualNet::ClearWatcherList(void) */

void __thiscall CasualNet::ClearWatcherList(CasualNet *this)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
                    /* 0x3a90  46  ?ClearWatcherList@CasualNet@@IAEXXZ */
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xe0;
  piVar7 = (int *)**(undefined4 **)&this[0xd].SockNet_data.field_0xf8;
  while( true ) {
    piVar3 = *(int **)&this[0xd].SockNet_data.field_0xf8;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0xd].SockNet_data.field_0xe0)) {
      _invalid_parameter_noinfo();
    }
    if (piVar7 == piVar3) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    if (piVar7 == *(int **)(iVar6 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    if (piVar7[10] != 0) {
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if (piVar7 == *(int **)(iVar6 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      operator_delete((void *)piVar7[10]);
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar7 + 0x2d) == '\0') {
      piVar3 = (int *)piVar7[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar7 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar7 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar7[1] + 0x2d);
        piVar5 = (int *)piVar7[1];
        piVar3 = piVar7;
        while ((piVar7 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
          cVar1 = *(char *)(piVar7[1] + 0x2d);
          piVar5 = (int *)piVar7[1];
          piVar3 = piVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  FUN_10008ab0(*(int **)(*(int *)&this[0xd].SockNet_data.field_0xf8 + 4));
  iVar6 = *(int *)&this[0xd].SockNet_data.field_0xf8;
  *(int *)(iVar6 + 4) = iVar6;
  uVar4 = *(undefined4 *)&this[0xd].SockNet_data.field_0xf8;
  *(undefined4 *)&this[0xd].SockNet_data.field_0xfc = 0;
  *(undefined4 *)uVar4 = uVar4;
  iVar6 = *(int *)&this[0xd].SockNet_data.field_0xf8;
  *(int *)(iVar6 + 8) = iVar6;
  return;
}



/* ---- AddWatcher @ 10003ba0 size=220 ---- */

/* protected: bool __thiscall CasualNet::AddWatcher(struct CC_WATCHER *) */

bool __thiscall CasualNet::AddWatcher(CasualNet *this,CC_WATCHER *param_1)

{
  CC_WATCHER *pCVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffff64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_99 [25];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [28];
  undefined4 local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x3ba0  40  ?AddWatcher@CasualNet@@IAE_NPAUCC_WATCHER@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pCVar1 = FindWatcher_Key(this,(char *)param_1);
  if (pCVar1 == (CC_WATCHER *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_99 + -3,(char *)param_1)
    ;
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_10009160(in_stack_ffffff64);
    local_c = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58,pbVar2);
    local_3c = *(undefined4 *)(pbVar2 + 0x1c);
    local_c._0_1_ = 1;
    FUN_10007fd0(local_58);
    local_c = (uint)local_c._1_3_ << 8;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58);
    local_c = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
    ExceptionList = local_14;
    return true;
  }
  ExceptionList = local_14;
  return false;
}



/* ---- ~basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 10003c80 size=6 ---- */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
~basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  return;
}



/* ---- RemoveWatcher_Key @ 10003c90 size=238 ---- */

/* protected: bool __thiscall CasualNet::RemoveWatcher_Key(char const *) */

bool __thiscall CasualNet::RemoveWatcher_Key(CasualNet *this,char *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int *local_3c;
  int *local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x3c90  184  ?RemoveWatcher_Key@CasualNet@@IAE_NPBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  puVar4 = &this[0xd].SockNet_data.field_0xe0;
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  piVar1 = *(int **)puVar4;
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xf8;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (piVar2 == local_38) {
    ExceptionList = local_14;
    return false;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *local_3c;
  }
  if (local_38 == *(int **)(iVar3 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  operator_delete((void *)local_38[10]);
  FUN_10008140((undefined4 *)puVar4,&local_3c,local_3c,local_38);
  ExceptionList = local_14;
  return true;
}



/* ---- FindWatcher_Key @ 10003d80 size=212 ---- */

/* public: struct CC_WATCHER * __thiscall CasualNet::FindWatcher_Key(char const *) */

CC_WATCHER * __thiscall CasualNet::FindWatcher_Key(CasualNet *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_3c;
  int local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x3d80  68  ?FindWatcher_Key@CasualNet@@QAEPAUCC_WATCHER@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  iVar2 = *(int *)&this[0xd].SockNet_data.field_0xf8;
  piVar1 = *(int **)&this[0xd].SockNet_data.field_0xe0;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (iVar2 == local_38) {
    ExceptionList = local_14;
    return (CC_WATCHER *)0x0;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *local_3c;
  }
  if (local_38 == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  ExceptionList = local_14;
  return *(CC_WATCHER **)(local_38 + 0x28);
}



/* ---- FindWatcher_Nick @ 10003e60 size=243 ---- */

/* public: struct CC_WATCHER * __thiscall CasualNet::FindWatcher_Nick(char const *) */

CC_WATCHER * __thiscall CasualNet::FindWatcher_Nick(CasualNet *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
                    /* 0x3e60  69  ?FindWatcher_Nick@CasualNet@@QAEPAUCC_WATCHER@@PBD@Z */
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xe0;
  piVar6 = (int *)**(undefined4 **)&this[0xd].SockNet_data.field_0xf8;
  while( true ) {
    piVar3 = *(int **)&this[0xd].SockNet_data.field_0xf8;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0xd].SockNet_data.field_0xe0)) {
      _invalid_parameter_noinfo();
    }
    if (piVar6 == piVar3) {
      return (CC_WATCHER *)0x0;
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (piVar6 == *(int **)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = _mbscmp((uchar *)(piVar6[10] + 0x15),(uchar *)param_1);
    if (iVar5 == 0) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      piVar3 = (int *)piVar6[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar6 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0x2d);
        piVar4 = (int *)piVar6[1];
        piVar3 = piVar6;
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x2d);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if (piVar6 == *(int **)(iVar5 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  return (CC_WATCHER *)piVar6[10];
}



/* ---- ClearBuddyList @ 10003f60 size=261 ---- */

/* protected: void __thiscall CasualNet::ClearBuddyList(void) */

void __thiscall CasualNet::ClearBuddyList(CasualNet *this)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
                    /* 0x3f60  43  ?ClearBuddyList@CasualNet@@IAEXXZ */
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xa0;
  piVar7 = (int *)**(undefined4 **)&this[0xd].SockNet_data.field_0xb8;
  while( true ) {
    piVar3 = *(int **)&this[0xd].SockNet_data.field_0xb8;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0xd].SockNet_data.field_0xa0)) {
      _invalid_parameter_noinfo();
    }
    if (piVar7 == piVar3) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    if (piVar7 == *(int **)(iVar6 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    if (piVar7[10] != 0) {
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if (piVar7 == *(int **)(iVar6 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      operator_delete((void *)piVar7[10]);
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar7 + 0x2d) == '\0') {
      piVar3 = (int *)piVar7[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar7 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar7 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar7[1] + 0x2d);
        piVar5 = (int *)piVar7[1];
        piVar3 = piVar7;
        while ((piVar7 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
          cVar1 = *(char *)(piVar7[1] + 0x2d);
          piVar5 = (int *)piVar7[1];
          piVar3 = piVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  FUN_10008ab0(*(int **)(*(int *)&this[0xd].SockNet_data.field_0xb8 + 4));
  iVar6 = *(int *)&this[0xd].SockNet_data.field_0xb8;
  *(int *)(iVar6 + 4) = iVar6;
  uVar4 = *(undefined4 *)&this[0xd].SockNet_data.field_0xb8;
  *(undefined4 *)&this[0xd].SockNet_data.field_0xbc = 0;
  *(undefined4 *)uVar4 = uVar4;
  iVar6 = *(int *)&this[0xd].SockNet_data.field_0xb8;
  *(int *)(iVar6 + 8) = iVar6;
  return;
}



/* ---- AddBuddy @ 10004070 size=220 ---- */

/* protected: bool __thiscall CasualNet::AddBuddy(struct CC_BUDDY *) */

bool __thiscall CasualNet::AddBuddy(CasualNet *this,CC_BUDDY *param_1)

{
  CC_BUDDY *pCVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffff64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_99 [25];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [28];
  undefined4 local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x4070  37  ?AddBuddy@CasualNet@@IAE_NPAUCC_BUDDY@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pCVar1 = FindBuddy_Key(this,(char *)param_1);
  if (pCVar1 == (CC_BUDDY *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_99 + -3,(char *)param_1)
    ;
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_10009160(in_stack_ffffff64);
    local_c = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58,pbVar2);
    local_3c = *(undefined4 *)(pbVar2 + 0x1c);
    local_c._0_1_ = 1;
    FUN_10007fd0(local_58);
    local_c = (uint)local_c._1_3_ << 8;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58);
    local_c = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
    ExceptionList = local_14;
    return true;
  }
  ExceptionList = local_14;
  return false;
}



/* ---- RemoveBuddy_Key @ 10004150 size=238 ---- */

/* protected: bool __thiscall CasualNet::RemoveBuddy_Key(char const *) */

bool __thiscall CasualNet::RemoveBuddy_Key(CasualNet *this,char *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int *local_3c;
  int *local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x4150  183  ?RemoveBuddy_Key@CasualNet@@IAE_NPBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  puVar4 = &this[0xd].SockNet_data.field_0xa0;
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  piVar1 = *(int **)puVar4;
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xb8;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (piVar2 == local_38) {
    ExceptionList = local_14;
    return false;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *local_3c;
  }
  if (local_38 == *(int **)(iVar3 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  operator_delete((void *)local_38[10]);
  FUN_10008140((undefined4 *)puVar4,&local_3c,local_3c,local_38);
  ExceptionList = local_14;
  return true;
}



/* ---- ReplaceBuddy @ 10004240 size=245 ---- */

/* protected: struct CC_BUDDY * __thiscall CasualNet::ReplaceBuddy(struct CC_BUDDY *) */

CC_BUDDY * __thiscall CasualNet::ReplaceBuddy(CasualNet *this,CC_BUDDY *param_1)

{
  int *piVar1;
  CC_BUDDY *pCVar2;
  int iVar3;
  int *local_3c;
  int local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x4240  185  ?ReplaceBuddy@CasualNet@@IAEPAUCC_BUDDY@@PAU2@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,(char *)param_1);
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  iVar3 = *(int *)&this[0xd].SockNet_data.field_0xb8;
  piVar1 = *(int **)&this[0xd].SockNet_data.field_0xa0;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (iVar3 == local_38) {
    ExceptionList = local_14;
    return (CC_BUDDY *)0x0;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *local_3c;
  }
  if (local_38 == *(int *)(iVar3 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  pCVar2 = *(CC_BUDDY **)(local_38 + 0x28);
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *local_3c;
  }
  if (local_38 == *(int *)(iVar3 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  *(CC_BUDDY **)(local_38 + 0x28) = param_1;
  ExceptionList = local_14;
  return pCVar2;
}



/* ---- FindBuddy_Key @ 10004340 size=212 ---- */

/* public: struct CC_BUDDY * __thiscall CasualNet::FindBuddy_Key(char const *) */

CC_BUDDY * __thiscall CasualNet::FindBuddy_Key(CasualNet *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_3c;
  int local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x4340  66  ?FindBuddy_Key@CasualNet@@QAEPAUCC_BUDDY@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  iVar2 = *(int *)&this[0xd].SockNet_data.field_0xb8;
  piVar1 = *(int **)&this[0xd].SockNet_data.field_0xa0;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (iVar2 == local_38) {
    ExceptionList = local_14;
    return (CC_BUDDY *)0x0;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *local_3c;
  }
  if (local_38 == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  ExceptionList = local_14;
  return *(CC_BUDDY **)(local_38 + 0x28);
}



/* ---- FindBuddy_Nick @ 10004420 size=243 ---- */

/* public: struct CC_BUDDY * __thiscall CasualNet::FindBuddy_Nick(char const *) */

CC_BUDDY * __thiscall CasualNet::FindBuddy_Nick(CasualNet *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
                    /* 0x4420  67  ?FindBuddy_Nick@CasualNet@@QAEPAUCC_BUDDY@@PBD@Z */
  piVar2 = *(int **)&this[0xd].SockNet_data.field_0xa0;
  piVar6 = (int *)**(undefined4 **)&this[0xd].SockNet_data.field_0xb8;
  while( true ) {
    piVar3 = *(int **)&this[0xd].SockNet_data.field_0xb8;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0xd].SockNet_data.field_0xa0)) {
      _invalid_parameter_noinfo();
    }
    if (piVar6 == piVar3) {
      return (CC_BUDDY *)0x0;
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (piVar6 == *(int **)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = _mbscmp((uchar *)(piVar6[10] + 0x15),(uchar *)param_1);
    if (iVar5 == 0) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      piVar3 = (int *)piVar6[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar6 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0x2d);
        piVar4 = (int *)piVar6[1];
        piVar3 = piVar6;
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x2d);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if (piVar6 == *(int **)(iVar5 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  return (CC_BUDDY *)piVar6[10];
}



/* ---- ChangeState @ 10004520 size=19 ---- */

/* protected: enum CC_STATE __thiscall CasualNet::ChangeState(enum CC_STATE) */

CC_STATE __thiscall CasualNet::ChangeState(CasualNet *this,CC_STATE param_1)

{
  CC_STATE CVar1;
  
                    /* 0x4520  41  ?ChangeState@CasualNet@@IAE?AW4CC_STATE@@W42@@Z */
  CVar1 = *(CC_STATE *)&this[0x40].SockNet_data.field_0x98;
  *(CC_STATE *)&this[0x40].SockNet_data.field_0x98 = param_1;
  return CVar1;
}



/* ---- OnCL2CMReceive @ 10004540 size=165 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMReceive(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  int iVar1;
  
                    /* 0x4540  133  ?OnCL2CMReceive@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  if (param_1 != (CPML *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 < 0x1000010a) {
      if (iVar1 == 0x10000109) {
        OnCL2CMGetUserInfoAck(this,param_1,param_2);
        return;
      }
      switch(iVar1) {
      case 0x10000007:
        OnCL2CMWebLoginAck(this,param_1,param_2);
        return;
      case 0x10000009:
        OnCL2CMPingAck(this,param_1,param_2);
        return;
      case 0x10000011:
        OnCL2CMAddBlackAck(this,param_1,param_2);
        return;
      case 0x10000013:
        OnCL2CMAddBuddyAck(this,param_1,param_2);
        return;
      case 0x10000017:
        OnCL2CMChangeNickNameAck(this,param_1,param_2);
        return;
      case 0x10000023:
        OnCL2CMDeleteBlackAck(this,param_1,param_2);
        return;
      case 0x10000025:
        OnCL2CMDeleteBuddyAck(this,param_1,param_2);
        return;
      case 0x10000031:
        OnCL2CMDeleteNewWatcherAck(this,param_1,param_2);
        return;
      case 0x10000033:
        OnCL2CMGetNewWatcherListAck(this,param_1,param_2);
        return;
      case 0x10000053:
        OnCL2CMSetRecvPrefAck(this,param_1,param_2);
        return;
      case 0x10000085:
        OnCL2CMAcceptBuddyAck(this,param_1,param_2);
        return;
      }
    }
  }
  return;
}



/* ---- OnCL2GMReceive @ 100046a0 size=29 ---- */

/* protected: void __thiscall CasualNet::OnCL2GMReceive(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2GMReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
                    /* 0x46a0  137  ?OnCL2GMReceive@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  if ((param_1 == (CPML *)0x0) || (*(int *)(param_1 + 0x18) != 0x11000001)) {
    return;
  }
  OnCL2GMGetCMSAck(this,param_1,param_2);
  return;
}



/* ---- OnCM2CLReceive @ 100046c0 size=75 ---- */

/* protected: void __thiscall CasualNet::OnCM2CLReceive(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCM2CLReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
                    /* 0x46c0  142  ?OnCM2CLReceive@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  if (param_1 != (CPML *)0x0) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 0x13000000:
      OnCM2CLKickOut(this,param_1,param_2);
      return;
    case 0x13000003:
      OnCM2CLChangeBuddyStatus(this,param_1,param_2);
      return;
    case 0x13000004:
      OnCM2CLNewWatcher(this,param_1,param_2);
      return;
    case 0x13000021:
      OnCM2CLAddBuddyAccepted(this,param_1,param_2);
      return;
    }
  }
  return;
}



/* ---- OnRelayReceive @ 10004750 size=48 ---- */

/* protected: void __thiscall CasualNet::OnRelayReceive(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnRelayReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
                    /* 0x4750  172  ?OnRelayReceive@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  if (param_1 != (CPML *)0x0) {
    if (*(int *)(param_1 + 0x18) == -0x5ffffff4) {
      OnCL2CLChatMsg(this,param_1,param_2);
      return;
    }
    if (*(int *)(param_1 + 0x18) == -0x5ffffff3) {
      OnCL2CLChatMsgAck(this,param_1,param_2);
      return;
    }
  }
  return;
}



/* ---- CasualNet::OnPMLReceive @ 10004780 size=101 ---- */

/* protected: virtual void __thiscall CasualNet::OnPMLReceive(class CPML *,struct PMLRELAY *)
   CasualNet member function inherited by CasualNetV2 */

void __thiscall CasualNet::CasualNet__OnPMLReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  uint uVar1;
  
                    /* 0x4780  167  ?OnPMLReceive@CasualNet@@MAEXPAVCPML@@PAUPMLRELAY@@@Z */
  if (param_1 != (CPML *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x18) & 0xffff0000;
    if ((int)uVar1 < 0x11000001) {
      if (uVar1 == 0x11000000) {
        if (*(uint *)(param_1 + 0x18) == 0x11000001) {
          OnCL2GMGetCMSAck(this,param_1,param_2);
          return;
        }
      }
      else {
        if (uVar1 == 0xa0000000) {
          OnRelayReceive(this,param_1,param_2);
          return;
        }
        if (uVar1 == 0x10000000) {
          OnCL2CMReceive(this,param_1,param_2);
          return;
        }
      }
    }
    else if (uVar1 == 0x13000000) {
      OnCM2CLReceive(this,param_1,param_2);
      return;
    }
  }
  return;
}



/* ---- CasualNet::OnConnect @ 100047f0 size=164 ---- */

/* protected: virtual void __thiscall CasualNet::OnConnect(void)
   CasualNet member function inherited by CasualNetV2 */

void __thiscall CasualNet::CasualNet__OnConnect(CasualNet *this)

{
  code *pcVar1;
  CC_SEND_RESULT CVar2;
  char local_8;
  CC_BUDDY *local_4;
  
                    /* 0x47f0  149  ?OnConnect@CasualNet@@MAEXXZ */
  local_4 = *(CC_BUDDY **)&this[0x40].SockNet_data.field_0x98;
  local_8 = '0';
  if (local_4 == (CC_BUDDY *)0x1) {
    *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 2;
    CVar2 = SendGetCMS(this);
    if (CVar2 != 0) {
      SockNet::Disconnect((SockNet *)this);
      local_8 = 'A';
    }
  }
  else if (local_4 == (CC_BUDDY *)0x5) {
    *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 6;
    CVar2 = SendWebLogin(this,(CC_PARAM_LOGIN *)&this[0xe].SockNet_data.field_0x14);
    if (CVar2 != 0) {
      SockNet::Disconnect((SockNet *)this);
      local_8 = 'B';
    }
  }
  else {
    local_8 = 'C';
  }
  (*this->vftablePtr->OnAcceptBuddyAck)(this,local_4,local_8);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000027,&local_4,local_8,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  return;
}



/* ---- CasualNet::OnDisconnect @ 100048a0 size=170 ---- */

/* protected: virtual void __thiscall CasualNet::OnDisconnect(void)
   CasualNet member function inherited by CasualNetV2 */

void __thiscall CasualNet::CasualNet__OnDisconnect(CasualNet *this)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  char cVar5;
  CC_BUDDY *local_4;
  
                    /* 0x48a0  159  ?OnDisconnect@CasualNet@@MAEXXZ */
  local_4 = *(CC_BUDDY **)&this[0x40].SockNet_data.field_0x98;
  if (local_4 == (CC_BUDDY *)0x4) {
    uVar1 = *(ushort *)&this[0x41].SockNet_data.field_0x64;
    *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 5;
    bVar3 = SockNet::Connect((SockNet *)this,&this[0x40].SockNet_data.field_0xac,uVar1);
    if (bVar3) {
      cVar5 = '0';
      goto LAB_10004904;
    }
    cVar5 = 'A';
  }
  else {
    cVar5 = '0';
    if (local_4 != (CC_BUDDY *)0x7) {
      cVar5 = 'B';
    }
  }
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
  ResetData(this);
LAB_10004904:
  (*this->vftablePtr->OnAcceptBuddyAck)(this,local_4,cVar5);
  pcVar2 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(0xcc000028,&local_4,cVar5,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  DVar4 = GetTickCount();
  *(DWORD *)&this[0x40].SockNet_data.field_0xa4 = DVar4;
  return;
}



/* ---- CasualNet::OnConnectError @ 10004950 size=85 ---- */

/* protected: virtual void __thiscall CasualNet::OnConnectError(void)
   CasualNet member function inherited by CasualNetV2 */

void __thiscall CasualNet::CasualNet__OnConnectError(CasualNet *this)

{
  GLogDscUserDefineddata *pGVar1;
  code *pcVar2;
  DWORD DVar3;
  CasualNet *local_4;
  
  local_4 = this;
                    /* 0x4950  152  ?OnConnectError@CasualNet@@MAEXXZ */
  ResetData(this);
  local_4 = *(CasualNet **)&this[0x40].SockNet_data.field_0x98;
  pGVar1 = this->vftablePtr->GLogDscUserDefineddata;
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
  (*pGVar1)(this,(uchar *)local_4);
  pcVar2 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(0xcc000032,&local_4,0x30,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  DVar3 = GetTickCount();
  *(DWORD *)&this[0x40].SockNet_data.field_0xa4 = DVar3;
  return;
}



/* ---- SendGetCMS @ 100049b0 size=177 ---- */

/* protected: enum CC_SEND_RESULT __thiscall CasualNet::SendGetCMS(void) */

CC_SEND_RESULT __thiscall CasualNet::SendGetCMS(CasualNet *this)

{
  CPML local_28 [24];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x49b0  202  ?SendGetCMS@CasualNet@@IAE?AW4CC_SEND_RESULT@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000de18;
  local_c = ExceptionList;
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 2) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_c;
  FUN_1000aa80((undefined4 *)local_28);
  local_10 = 0x11000000;
  local_4 = 0;
  PMLNet::SendPML((PMLNet *)this,local_28,(PMLRELAY *)0x0);
  local_4 = 0xffffffff;
  FUN_10007e60((undefined4 *)local_28);
  ExceptionList = local_c;
  return 0;
}



/* ---- FUN_10004a70 @ 10004a70 size=7 ---- */

void FUN_10004a70(void)

{
  undefined4 *in_EAX;
  
  FUN_10007e60(in_EAX);
  return;
}



/* ---- SendWebLogin @ 10004a80 size=566 ---- */

/* protected: enum CC_SEND_RESULT __thiscall CasualNet::SendWebLogin(struct CC_PARAM_LOGIN *) */

CC_SEND_RESULT __thiscall CasualNet::SendWebLogin(CasualNet *this,CC_PARAM_LOGIN *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  CC_PARAM_LOGIN *pCVar3;
  SockNet_data *pSVar4;
  uint uVar5;
  undefined1 local_44 [4];
  CasualNet *local_40;
  int local_3c [2];
  int local_34 [3];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x4a80  210
                       ?SendWebLogin@CasualNet@@IAE?AW4CC_SEND_RESULT@@PAUCC_PARAM_LOGIN@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000e058;
  local_14 = ExceptionList;
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 6) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_14;
  local_40 = this;
  FUN_1000aa80(local_34);
  local_1c = 0x10000006;
  pCVar3 = param_1 + 0x2004;
  local_c = 0;
  if (pCVar3 == (CC_PARAM_LOGIN *)0x0) {
    pCVar3 = (CC_PARAM_LOGIN *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar3);
  pCVar3 = param_1 + 0x2019;
  if (pCVar3 == (CC_PARAM_LOGIN *)0x0) {
    pCVar3 = (CC_PARAM_LOGIN *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar3);
  pSVar4 = &this->SockNet_data;
  if (pSVar4 == (SockNet_data *)0x0) {
    pSVar4 = (SockNet_data *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pSVar4);
  pCVar3 = param_1 + 0x401a;
  if (pCVar3 == (CC_PARAM_LOGIN *)0x0) {
    pCVar3 = (CC_PARAM_LOGIN *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar3);
  puVar2 = local_24;
  uVar1 = *(undefined4 *)(param_1 + 0x403c);
  local_44[0] = 0xcc;
  if (local_28 == (undefined1 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = local_20 - (int)local_28;
  }
  if ((uint)((int)local_24 - (int)local_28) < uVar5) {
    *local_24 = 0xcc;
    local_24 = local_24 + 1;
  }
  else {
    if (local_24 < local_28) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_3c,local_44,local_34[0],puVar2);
  }
  FUN_10009fd0(6);
  FUN_1000a0e0(uVar1);
  pCVar3 = param_1 + 0x4040;
  if (pCVar3 == (CC_PARAM_LOGIN *)0x0) {
    pCVar3 = (CC_PARAM_LOGIN *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar3);
  pCVar3 = param_1 + 0x4055;
  if (pCVar3 == (CC_PARAM_LOGIN *)0x0) {
    pCVar3 = (CC_PARAM_LOGIN *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar3);
  pCVar3 = param_1 + 0x406a;
  if (pCVar3 == (CC_PARAM_LOGIN *)0x0) {
    pCVar3 = (CC_PARAM_LOGIN *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0x10,(char *)pCVar3);
  pCVar3 = param_1 + 0x407a;
  if (pCVar3 == (CC_PARAM_LOGIN *)0x0) {
    pCVar3 = (CC_PARAM_LOGIN *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar3);
  PMLNet::SendPML((PMLNet *)local_40,(CPML *)local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60(local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendLogout @ 10004cc0 size=282 ---- */

/* protected: enum CC_SEND_RESULT __thiscall CasualNet::SendLogout(void) */

CC_SEND_RESULT __thiscall CasualNet::SendLogout(CasualNet *this)

{
  char *pcVar1;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x4cc0  205  ?SendLogout@CasualNet@@IAE?AW4CC_SEND_RESULT@@XZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000e028;
  local_14 = ExceptionList;
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_14;
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000004;
  pcVar1 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar1);
  pcVar1 = &this[0xd].SockNet_data.field_0x115;
  if (pcVar1 == (undefined1 *)0x0) {
    pcVar1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar1);
  pcVar1 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar1);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendAddBuddy_Nick @ 10004de0 size=538 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendAddBuddy_Nick(char const *,char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendAddBuddy_Nick(CasualNet *this,char *param_1,char *param_2)

{
  CC_BUDDY *pCVar1;
  CC_BLACK *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x4de0  193  ?SendAddBuddy_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD0@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if (199 < *(uint *)&this[0xd].SockNet_data.field_0xbc) {
    return 0xc;
  }
  ExceptionList = &local_14;
  pCVar1 = FindBuddy_Nick(this,param_1);
  if (pCVar1 != (CC_BUDDY *)0x0) {
    ExceptionList = local_14;
    return 4;
  }
  pCVar2 = FindBlack_Nick(this,param_1);
  if (pCVar2 != (CC_BLACK *)0x0) {
    ExceptionList = local_14;
    return 2;
  }
  pcVar5 = &this[0xd].SockNet_data.field_0x115;
  iVar3 = _mbscmp((uchar *)param_1,(uchar *)pcVar5);
  if (iVar3 == 0) {
    ExceptionList = local_14;
    return 8;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    ExceptionList = local_14;
    return 9;
  }
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000012;
  pcVar4 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar4);
  if (pcVar5 == (undefined1 *)0x0) {
    pcVar5 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar5);
  pcVar5 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2);
  pcVar4 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar4);
  FUN_1000a2a0((void *)0xffffffff,param_1);
  if ((param_2 == (char *)0x0) && (param_2 = pcVar5, pcVar5 == (char *)0x0)) {
    param_2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,param_2);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendDeleteBuddy_Nick @ 10005000 size=51 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendDeleteBuddy_Nick(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendDeleteBuddy_Nick(CasualNet *this,char *param_1)

{
  CC_BUDDY *pCVar1;
  CC_SEND_RESULT CVar2;
  
                    /* 0x5000  199  ?SendDeleteBuddy_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  pCVar1 = FindBuddy_Nick(this,param_1);
  if (pCVar1 == (CC_BUDDY *)0x0) {
    return 5;
  }
  CVar2 = SendDeleteBuddy_Key(this,(char *)pCVar1);
  return CVar2;
}



/* ---- SendDeleteBuddy_Key @ 10005040 size=374 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendDeleteBuddy_Key(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendDeleteBuddy_Key(CasualNet *this,char *param_1)

{
  CC_BUDDY *pCVar1;
  char *pcVar2;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x5040  198  ?SendDeleteBuddy_Key@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  ExceptionList = &local_14;
  pCVar1 = FindBuddy_Key(this,param_1);
  if (pCVar1 == (CC_BUDDY *)0x0) {
    ExceptionList = local_14;
    return 5;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    ExceptionList = local_14;
    return 9;
  }
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000024;
  pcVar2 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar2);
  pcVar2 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar2);
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar1);
  pCVar1 = pCVar1 + 0x15;
  if (pCVar1 == (CC_BUDDY *)0x0) {
    pCVar1 = (CC_BUDDY *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar1);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendAcceptBuddy_Nick @ 100051c0 size=51 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendAcceptBuddy_Nick(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendAcceptBuddy_Nick(CasualNet *this,char *param_1)

{
  CC_WATCHER *pCVar1;
  CC_SEND_RESULT CVar2;
  
                    /* 0x51c0  191  ?SendAcceptBuddy_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  pCVar1 = FindWatcher_Nick(this,param_1);
  if (pCVar1 == (CC_WATCHER *)0x0) {
    return 7;
  }
  CVar2 = SendAcceptBuddy_Key(this,(char *)pCVar1);
  return CVar2;
}



/* ---- SendAcceptBuddy_Key @ 10005200 size=568 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendAcceptBuddy_Key(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendAcceptBuddy_Key(CasualNet *this,char *param_1)

{
  CC_BUDDY *pCVar1;
  CC_BLACK *pCVar2;
  int iVar3;
  CC_WATCHER *pCVar4;
  char *pcVar5;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x5200  190  ?SendAcceptBuddy_Key@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if (199 < *(uint *)&this[0xd].SockNet_data.field_0xbc) {
    return 0xc;
  }
  ExceptionList = &local_14;
  pCVar1 = FindBuddy_Key(this,param_1);
  if (pCVar1 != (CC_BUDDY *)0x0) {
    ExceptionList = local_14;
    return 4;
  }
  pCVar2 = FindBlack_Key(this,param_1);
  if (pCVar2 != (CC_BLACK *)0x0) {
    ExceptionList = local_14;
    return 2;
  }
  pcVar5 = (char *)&this[0xd].SockNet_data.offset_0x100;
  iVar3 = _mbscmp((uchar *)param_1,(uchar *)pcVar5);
  if (iVar3 == 0) {
    ExceptionList = local_14;
    return 8;
  }
  pCVar4 = FindWatcher_Key(this,param_1);
  if (pCVar4 == (CC_WATCHER *)0x0) {
    ExceptionList = local_14;
    return 7;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    ExceptionList = local_14;
    return 9;
  }
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000084;
  local_c = 0;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar5);
  pcVar5 = &this[0xd].SockNet_data.field_0x115;
  if (pcVar5 == (undefined1 *)0x0) {
    pcVar5 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar5);
  pcVar5 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar5);
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar4);
  pCVar4 = pCVar4 + 0x15;
  if (pCVar4 == (CC_WATCHER *)0x0) {
    pCVar4 = (CC_WATCHER *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar4);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendGetNewWatcherList @ 10005440 size=216 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendGetNewWatcherList(void) */

CC_SEND_RESULT __thiscall CasualNet::SendGetNewWatcherList(CasualNet *this)

{
  char *pcVar1;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x5440  203  ?SendGetNewWatcherList@CasualNet@@QAE?AW4CC_SEND_RESULT@@XZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000e028;
  local_14 = ExceptionList;
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_14;
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000032;
  pcVar1 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar1);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendDeleteNewWatcher_Nick @ 10005520 size=51 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendDeleteNewWatcher_Nick(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendDeleteNewWatcher_Nick(CasualNet *this,char *param_1)

{
  CC_WATCHER *pCVar1;
  CC_SEND_RESULT CVar2;
  
                    /* 0x5520  201
                       ?SendDeleteNewWatcher_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  pCVar1 = FindWatcher_Nick(this,param_1);
  if (pCVar1 == (CC_WATCHER *)0x0) {
    return 5;
  }
  CVar2 = SendDeleteNewWatcher_Key(this,(char *)pCVar1);
  return CVar2;
}



/* ---- SendDeleteNewWatcher_Key @ 10005560 size=328 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendDeleteNewWatcher_Key(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendDeleteNewWatcher_Key(CasualNet *this,char *param_1)

{
  CC_WATCHER *pCVar1;
  char *pcVar2;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x5560  200
                       ?SendDeleteNewWatcher_Key@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  ExceptionList = &local_14;
  pCVar1 = FindWatcher_Key(this,param_1);
  if (pCVar1 == (CC_WATCHER *)0x0) {
    ExceptionList = local_14;
    return 7;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    ExceptionList = local_14;
    return 9;
  }
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000030;
  pcVar2 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar2);
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,param_1);
  pCVar1 = pCVar1 + 0x15;
  if (pCVar1 == (CC_WATCHER *)0x0) {
    pCVar1 = (CC_WATCHER *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar1);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendAddBlack_Nick @ 100056b0 size=509 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendAddBlack_Nick(char const *,char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendAddBlack_Nick(CasualNet *this,char *param_1,char *param_2)

{
  CC_BUDDY *pCVar1;
  CC_BLACK *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x56b0  192  ?SendAddBlack_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD0@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if (199 < *(uint *)&this[0xd].SockNet_data.field_0xdc) {
    return 0xd;
  }
  ExceptionList = &local_14;
  pCVar1 = FindBuddy_Nick(this,param_1);
  if (pCVar1 != (CC_BUDDY *)0x0) {
    ExceptionList = local_14;
    return 4;
  }
  pCVar2 = FindBlack_Nick(this,param_1);
  if (pCVar2 != (CC_BLACK *)0x0) {
    ExceptionList = local_14;
    return 2;
  }
  iVar3 = _mbscmp((uchar *)param_1,&this[0xd].SockNet_data.field_0x115);
  if (iVar3 == 0) {
    ExceptionList = local_14;
    return 8;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    ExceptionList = local_14;
    return 9;
  }
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000010;
  pcVar4 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar4);
  pcVar4 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2);
  pcVar5 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar5);
  FUN_1000a2a0((void *)0xffffffff,param_1);
  if ((param_2 == (char *)0x0) && (param_2 = pcVar4, pcVar4 == (char *)0x0)) {
    param_2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,param_2);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendDeleteBlack_Nick @ 100058b0 size=51 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendDeleteBlack_Nick(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendDeleteBlack_Nick(CasualNet *this,char *param_1)

{
  CC_BLACK *pCVar1;
  CC_SEND_RESULT CVar2;
  
                    /* 0x58b0  197  ?SendDeleteBlack_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  pCVar1 = FindBlack_Nick(this,param_1);
  if (pCVar1 == (CC_BLACK *)0x0) {
    return 3;
  }
  CVar2 = SendDeleteBlack_Key(this,(char *)pCVar1);
  return CVar2;
}



/* ---- SendDeleteBlack_Key @ 100058f0 size=374 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendDeleteBlack_Key(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendDeleteBlack_Key(CasualNet *this,char *param_1)

{
  CC_BLACK *pCVar1;
  char *pcVar2;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x58f0  196  ?SendDeleteBlack_Key@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  ExceptionList = &local_14;
  pCVar1 = FindBlack_Key(this,param_1);
  if (pCVar1 == (CC_BLACK *)0x0) {
    ExceptionList = local_14;
    return 3;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    ExceptionList = local_14;
    return 9;
  }
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000022;
  pcVar2 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar2);
  pcVar2 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar2);
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar1);
  pCVar1 = pCVar1 + 0x15;
  if (pCVar1 == (CC_BLACK *)0x0) {
    pCVar1 = (CC_BLACK *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar1);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendPing @ 10005a70 size=177 ---- */

/* protected: enum CC_SEND_RESULT __thiscall CasualNet::SendPing(void) */

CC_SEND_RESULT __thiscall CasualNet::SendPing(CasualNet *this)

{
  CPML local_28 [24];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5a70  207  ?SendPing@CasualNet@@IAE?AW4CC_SEND_RESULT@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000de18;
  local_c = ExceptionList;
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_c;
  FUN_1000aa80((undefined4 *)local_28);
  local_10 = 0x10000008;
  local_4 = 0;
  PMLNet::SendPML((PMLNet *)this,local_28,(PMLRELAY *)0x0);
  local_4 = 0xffffffff;
  FUN_10007e60((undefined4 *)local_28);
  ExceptionList = local_c;
  return 0;
}



/* ---- SendSetUserInfo @ 10005b30 size=972 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendSetUserInfo(struct CC_PARAM_USER_INFO *) */

CC_SEND_RESULT __thiscall CasualNet::SendSetUserInfo(CasualNet *this,CC_PARAM_USER_INFO *param_1)

{
  CC_PARAM_USER_INFO CVar1;
  ushort uVar2;
  CasualNet *this_00;
  CasualNet *pCVar3;
  undefined1 *puVar4;
  char *pcVar5;
  CC_PARAM_USER_INFO *pCVar6;
  uint uVar7;
  int iVar8;
  undefined1 local_90 [4];
  int local_8c [2];
  CasualNet *local_84;
  int local_80;
  CC_PARAM_USER_INFO *local_7c [2];
  int local_74 [2];
  int local_6c [3];
  undefined1 *local_60;
  undefined1 *local_5c;
  int local_58;
  undefined4 local_54;
  int local_50 [6];
  undefined4 local_38;
  int local_34 [6];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
                    /* 0x5b30  209
                       ?SendSetUserInfo@CasualNet@@QAE?AW4CC_SEND_RESULT@@PAUCC_PARAM_USER_INFO@@@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dff8;
  local_14 = ExceptionList;
  if (param_1 == (CC_PARAM_USER_INFO *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_14;
  local_84 = this;
  FUN_1000aa80(local_6c);
  local_54 = 0x10000106;
  pcVar5 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar5);
  puVar4 = local_5c;
  CVar1 = *param_1;
  local_90[0] = 0x78;
  if (local_60 == (undefined1 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = local_58 - (int)local_60;
  }
  if ((uint)((int)local_5c - (int)local_60) < uVar7) {
    *local_5c = 0x78;
    local_5c = local_5c + 1;
  }
  else {
    if (local_5c < local_60) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00((int *)local_7c,local_90,local_6c[0],puVar4);
  }
  FUN_10009fd0(1);
  FUN_10009fd0(CVar1);
  local_7c[0] = param_1 + 1;
  pCVar6 = local_7c[0];
  if (local_7c[0] == (CC_PARAM_USER_INFO *)0x0) {
    pCVar6 = (CC_PARAM_USER_INFO *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0xffffffff,(char *)pCVar6);
  puVar4 = local_5c;
  uVar2 = *(ushort *)(param_1 + 0x20);
  local_90[0] = 0xcb;
  if (local_60 == (undefined1 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = local_58 - (int)local_60;
  }
  if ((uint)((int)local_5c - (int)local_60) < uVar7) {
    *local_5c = 0xcb;
    local_5c = local_5c + 1;
  }
  else {
    if (local_5c < local_60) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_8c,local_90,local_6c[0],puVar4);
  }
  FUN_10009fd0(5);
  FUN_1000a030((uint)uVar2);
  puVar4 = local_5c;
  local_8c[0] = *(int *)(param_1 + 0x24);
  local_90[0] = 0xcc;
  if (local_60 == (undefined1 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = local_58 - (int)local_60;
  }
  if ((uint)((int)local_5c - (int)local_60) < uVar7) {
    *local_5c = 0xcc;
    local_5c = local_5c + 1;
  }
  else {
    if (local_5c < local_60) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_74,local_90,local_6c[0],puVar4);
  }
  FUN_10009fd0(6);
  FUN_1000a0e0(local_8c[0]);
  pCVar6 = param_1 + 0x28;
  if (pCVar6 == (CC_PARAM_USER_INFO *)0x0) {
    pCVar6 = (CC_PARAM_USER_INFO *)&DAT_1000f326;
  }
  FUN_1000a2a0((void *)0x10,(char *)pCVar6);
  FUN_1000aa80(local_34);
  this_00 = local_84;
  local_1c = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  local_80 = **(int **)&local_84[0xd].SockNet_data.field_0xb8;
  local_84 = *(CasualNet **)&local_84[0xd].SockNet_data.field_0xa0;
  while( true ) {
    pCVar3 = local_84;
    iVar8 = *(int *)&this_00[0xd].SockNet_data.field_0xb8;
    if ((local_84 == (CasualNet *)0x0) ||
       (local_84 != (CasualNet *)*(int **)&this_00[0xd].SockNet_data.field_0xa0)) {
      _invalid_parameter_noinfo();
    }
    if (local_80 == iVar8) break;
    if (pCVar3 == (CasualNet *)0x0) {
      _invalid_parameter_noinfo();
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)pCVar3;
    }
    if (local_80 == *(int *)(iVar8 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    pcVar5 = *(char **)(local_80 + 0x28);
    if (pcVar5[0x48] == '1') {
      FUN_1000aa80(local_50);
      local_38 = 0;
      local_c._0_1_ = 2;
      FUN_1000a2a0((void *)0xffffffff,pcVar5);
      FUN_1000a6b0(local_50,local_34);
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_10007e60(local_50);
    }
    FUN_10009060();
  }
  FUN_1000a6b0(local_34,local_6c);
  PMLNet::SendPML((PMLNet *)this_00,(CPML *)local_6c,(PMLRELAY *)0x0);
  lstrcpynA((LPSTR)((int)&this_00[0xd].SockNet_data.offset_0x128 + 2),(LPCSTR)local_7c[0],0x1f);
  local_c = local_c & 0xffffff00;
  FUN_10007e60(local_34);
  local_c = 0xffffffff;
  FUN_10007e60(local_6c);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendGetUserInfo_Nick @ 10005f00 size=314 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendGetUserInfo_Nick(char const *,char const *)
    */

CC_SEND_RESULT __thiscall
CasualNet::SendGetUserInfo_Nick(CasualNet *this,char *param_1,char *param_2)

{
  char *pcVar1;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x5f00  204  ?SendGetUserInfo_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD0@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_14;
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000108;
  pcVar1 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar1);
  FUN_1000a2a0((void *)0xffffffff,param_1);
  if ((param_2 == (char *)0x0) &&
     (param_2 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2), param_2 == (char *)0x0)) {
    param_2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,param_2);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendSetRecvPref @ 10006040 size=367 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendSetRecvPref(struct CC_PARAM_RECV_PREF *) */

CC_SEND_RESULT __thiscall CasualNet::SendSetRecvPref(CasualNet *this,CC_PARAM_RECV_PREF *param_1)

{
  CC_PARAM_RECV_PREF CVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 local_44 [4];
  CasualNet *local_40;
  int local_3c [2];
  int local_34 [3];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x6040  208
                       ?SendSetRecvPref@CasualNet@@QAE?AW4CC_SEND_RESULT@@PAUCC_PARAM_RECV_PREF@@@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000e058;
  local_14 = ExceptionList;
  if (param_1 == (CC_PARAM_RECV_PREF *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_14;
  local_40 = this;
  FUN_1000aa80(local_34);
  local_1c = 0x10000052;
  pcVar3 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar3);
  puVar2 = local_24;
  CVar1 = *param_1;
  local_44[0] = 0x22;
  if (local_28 == (undefined1 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = local_20 - (int)local_28;
  }
  if ((uint)((int)local_24 - (int)local_28) < uVar4) {
    *local_24 = 0x22;
    local_24 = local_24 + 1;
  }
  else {
    if (local_24 < local_28) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_3c,local_44,local_34[0],puVar2);
  }
  FUN_10009fd0(6);
  FUN_1000a0e0((int)(char)CVar1);
  PMLNet::SendPML((PMLNet *)local_40,(CPML *)local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendChangeNickName @ 100061b0 size=307 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendChangeNickName(char const *) */

CC_SEND_RESULT __thiscall CasualNet::SendChangeNickName(CasualNet *this,char *param_1)

{
  char *pcVar1;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x61b0  194  ?SendChangeNickName@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  ExceptionList = &local_14;
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0x10000016;
  pcVar1 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar1);
  FUN_1000a2a0((void *)0xffffffff,param_1);
  pcVar1 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar1);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- SendChatMsg_Nick @ 100062f0 size=427 ---- */

/* public: enum CC_SEND_RESULT __thiscall CasualNet::SendChatMsg_Nick(char const *,char const *,char
   const *) */

CC_SEND_RESULT __thiscall
CasualNet::SendChatMsg_Nick(CasualNet *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  CPML local_34 [24];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x62f0  195  ?SendChatMsg_Nick@CasualNet@@QAE?AW4CC_SEND_RESULT@@PBD00@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dfb8;
  local_14 = ExceptionList;
  if ((param_1 == (char *)0x0) || (param_3 == (char *)0x0)) {
    return 0xe;
  }
  if (*(int *)&this[0x40].SockNet_data.field_0x98 != 7) {
    return 0xb;
  }
  if ((this->SockNet_data).offset_0x104 == -1) {
    return 9;
  }
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (0x1000 < (int)(pcVar2 + (1 - (int)(param_3 + 1)))) {
    return 10;
  }
  ExceptionList = &local_14;
  FUN_1000aa80((undefined4 *)local_34);
  local_1c = 0xa000000c;
  pcVar2 = (char *)&this[0xd].SockNet_data.offset_0x100;
  local_c = 0;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar2);
  pcVar2 = &this[0xd].SockNet_data.field_0x115;
  if (pcVar2 == (undefined1 *)0x0) {
    pcVar2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,pcVar2);
  FUN_1000a2a0((void *)0xffffffff,param_1);
  if ((param_2 == (char *)0x0) &&
     (param_2 = (char *)((int)&this[0xd].SockNet_data.offset_0x128 + 2), param_2 == (char *)0x0)) {
    param_2 = "";
  }
  FUN_1000a2a0((void *)0xffffffff,param_2);
  FUN_1000a2a0((void *)0xffffffff,param_3);
  PMLNet::SendPML((PMLNet *)this,local_34,(PMLRELAY *)0x0);
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_34);
  ExceptionList = local_14;
  return 0;
}



/* ---- InitMeByPML @ 100064a0 size=167 ---- */

/* protected: bool __thiscall CasualNet::InitMeByPML(class CPML *,struct CC_ME *) */

bool __thiscall CasualNet::InitMeByPML(CasualNet *this,CPML *param_1,CC_ME *param_2)

{
  undefined2 *lpString1;
  undefined1 uVar1;
  byte *pbVar2;
  
                    /* 0x64a0  103  ?InitMeByPML@CasualNet@@IAE_NPAVCPML@@PAUCC_ME@@@Z */
  if (param_1 == (CPML *)0x0) {
    return false;
  }
  lpString1 = &this[0xd].SockNet_data.offset_0x100;
  memset(lpString1,0,0x4a);
  pbVar2 = FUN_1000a830(0xd0);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)lpString1,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a830(0xd1);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA(&this[0xd].SockNet_data.field_0x115,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a830(0xca);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)((int)&this[0xd].SockNet_data.offset_0x128 + 2),(LPCSTR)pbVar2,0x1f);
  }
  uVar1 = FUN_1000a790(0x22);
  *(undefined1 *)((int)&this[0xe].SockNet_data.offset_0x0 + 1) = uVar1;
  return true;
}



/* ---- InitBlackByNode @ 10006550 size=144 ---- */

/* protected: bool __thiscall CasualNet::InitBlackByNode(class CPMLNode *,struct CC_BLACK *) */

bool __thiscall CasualNet::InitBlackByNode(CasualNet *this,CPMLNode *param_1,CC_BLACK *param_2)

{
  byte *pbVar1;
  
                    /* 0x6550  100  ?InitBlackByNode@CasualNet@@IAE_NPAVCPMLNode@@PAUCC_BLACK@@@Z */
  if (param_1 == (CPMLNode *)0x0) {
    return false;
  }
  if (((param_2 == (CC_BLACK *)0x0) || (**(char **)param_1 != '\b')) ||
     (*(char **)param_1 == (char *)0x0)) {
    return false;
  }
  memset(param_2,0,0x3f);
  pbVar1 = FUN_1000a5d0();
  if (pbVar1 != (byte *)0x0) {
    lstrcpynA((LPSTR)param_2,(LPCSTR)pbVar1,0x15);
  }
  pbVar1 = FUN_1000a5d0();
  if (pbVar1 != (byte *)0x0) {
    lstrcpynA((LPSTR)(param_2 + 0x15),(LPCSTR)pbVar1,0x15);
  }
  pbVar1 = FUN_1000a5d0();
  if (pbVar1 != (byte *)0x0) {
    lstrcpynA((LPSTR)(param_2 + 0x2a),(LPCSTR)pbVar1,0x15);
  }
  return true;
}



/* ---- InitBuddyByNode @ 100065e0 size=336 ---- */

/* protected: bool __thiscall CasualNet::InitBuddyByNode(class CPMLNode *,struct CC_BUDDY *) */

bool __thiscall CasualNet::InitBuddyByNode(CasualNet *this,CPMLNode *param_1,CC_BUDDY *param_2)

{
  CC_BUDDY CVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  CPMLNodeList local_30 [28];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x65e0  101  ?InitBuddyByNode@CasualNet@@IAE_NPAVCPMLNode@@PAUCC_BUDDY@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000df88;
  local_14 = ExceptionList;
  if ((((param_1 == (CPMLNode *)0x0) || (param_2 == (CC_BUDDY *)0x0)) ||
      (*(char **)param_1 == (char *)0x0)) || (**(char **)param_1 != '\x16')) {
    return false;
  }
  ExceptionList = &local_14;
  memset(param_2,0,0x7c);
  pbVar2 = FUN_1000a5d0();
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)param_2,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a5d0();
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)(param_2 + 0x15),(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a5d0();
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)(param_2 + 0x2a),(LPCSTR)pbVar2,0x15);
  }
  CVar1 = (CC_BUDDY)FUN_1000a570();
  param_2[0x3f] = CVar1;
  CVar1 = (CC_BUDDY)FUN_1000a570();
  param_2[0x40] = CVar1;
  uVar3 = FUN_1000a570();
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  FUN_1000aa80((undefined4 *)local_30);
  local_c = 0;
  iVar4 = FUN_1000a670(extraout_ECX,0x48);
  if (iVar4 != 0) {
    InitBuddyOnlineInfoByNodeList(this,local_30,(CC_ONLINE_INFO *)(param_2 + 0x48));
  }
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_30);
  ExceptionList = local_14;
  return true;
}



/* ---- InitBuddyOnlineInfoByNodeList @ 10006730 size=210 ---- */

/* protected: bool __thiscall CasualNet::InitBuddyOnlineInfoByNodeList(class CPMLNodeList *,struct
   CC_ONLINE_INFO *) */

bool __thiscall
CasualNet::InitBuddyOnlineInfoByNodeList
          (CasualNet *this,CPMLNodeList *param_1,CC_ONLINE_INFO *param_2)

{
  CC_ONLINE_INFO CVar1;
  undefined2 uVar2;
  byte *pbVar3;
  
                    /* 0x6730  102
                       ?InitBuddyOnlineInfoByNodeList@CasualNet@@IAE_NPAVCPMLNodeList@@PAUCC_ONLINE_INFO@@@Z
                       0x6730  105
                       ?InitUserOnlineInfoByNodeList@CasualNet@@IAE_NPAVCPMLNodeList@@PAUCC_ONLINE_INFO@@@Z
                        */
  if (param_1 == (CPMLNodeList *)0x0) {
    return false;
  }
  if (param_2 == (CC_ONLINE_INFO *)0x0) {
    return false;
  }
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 == 0) {
    _invalid_parameter_noinfo();
  }
  CVar1 = (CC_ONLINE_INFO)FUN_1000a570();
  *param_2 = CVar1;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 == 0) {
    _invalid_parameter_noinfo();
  }
  uVar2 = FUN_1000a570();
  *(undefined2 *)(param_2 + 2) = uVar2;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 == 0) {
    _invalid_parameter_noinfo();
  }
  pbVar3 = FUN_1000a5d0();
  if (pbVar3 != (byte *)0x0) {
    lstrcpynA((LPSTR)(param_2 + 4),(LPCSTR)pbVar3,0x1f);
  }
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 == 0) {
    _invalid_parameter_noinfo();
  }
  pbVar3 = FUN_1000a5d0();
  if (pbVar3 != (byte *)0x0) {
    *(undefined4 *)(param_2 + 0x23) = *(undefined4 *)pbVar3;
    *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(pbVar3 + 4);
    *(undefined4 *)(param_2 + 0x2b) = *(undefined4 *)(pbVar3 + 8);
    *(undefined4 *)(param_2 + 0x2f) = *(undefined4 *)(pbVar3 + 0xc);
  }
  return true;
}



/* ---- InitUserByNode @ 10006810 size=336 ---- */

/* protected: bool __thiscall CasualNet::InitUserByNode(class CPMLNode *,struct CC_USER *) */

bool __thiscall CasualNet::InitUserByNode(CasualNet *this,CPMLNode *param_1,CC_USER *param_2)

{
  CC_USER CVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  CPMLNodeList local_30 [28];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x6810  104  ?InitUserByNode@CasualNet@@IAE_NPAVCPMLNode@@PAUCC_USER@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000df88;
  local_14 = ExceptionList;
  if ((((param_1 == (CPMLNode *)0x0) || (param_2 == (CC_USER *)0x0)) ||
      (**(char **)param_1 != '\x16')) || (*(char **)param_1 == (char *)0x0)) {
    return false;
  }
  ExceptionList = &local_14;
  memset(param_2,0,0x7c);
  pbVar2 = FUN_1000a5d0();
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)param_2,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a5d0();
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)(param_2 + 0x15),(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a5d0();
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)(param_2 + 0x2a),(LPCSTR)pbVar2,0x15);
  }
  CVar1 = (CC_USER)FUN_1000a570();
  param_2[0x40] = CVar1;
  CVar1 = (CC_USER)FUN_1000a570();
  param_2[0x3f] = CVar1;
  uVar3 = FUN_1000a570();
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  FUN_1000aa80((undefined4 *)local_30);
  local_c = 0;
  iVar4 = FUN_1000a670(extraout_ECX,0x48);
  if (iVar4 != 0) {
    InitBuddyOnlineInfoByNodeList(this,local_30,(CC_ONLINE_INFO *)(param_2 + 0x48));
  }
  local_c = 0xffffffff;
  FUN_10007e60((undefined4 *)local_30);
  ExceptionList = local_14;
  return true;
}



/* ---- IsBudddyOnline @ 10006960 size=23 ---- */

/* protected: bool __thiscall CasualNet::IsBudddyOnline(struct CC_BUDDY *) */

bool __thiscall CasualNet::IsBudddyOnline(CasualNet *this,CC_BUDDY *param_1)

{
                    /* 0x6960  106  ?IsBudddyOnline@CasualNet@@IAE_NPAUCC_BUDDY@@@Z */
  if (param_1 == (CC_BUDDY *)0x0) {
    return false;
  }
  return param_1[0x48] == (CC_BUDDY)0x31;
}



/* ---- PrintAckResult @ 10006980 size=38 ---- */

/* protected: char __thiscall CasualNet::PrintAckResult(class CPML *) */

char __thiscall CasualNet::PrintAckResult(CasualNet *this,CPML *param_1)

{
  char cVar1;
  
                    /* 0x6980  178  ?PrintAckResult@CasualNet@@IAEDPAVCPML@@@Z */
  cVar1 = FUN_1000a790(0x4c);
  if (cVar1 != '0') {
    FUN_1000a830(0x2e);
  }
  return cVar1;
}



/* ---- OnCL2GMGetCMSAck @ 100069b0 size=163 ---- */

/* protected: void __thiscall CasualNet::OnCL2GMGetCMSAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2GMGetCMSAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  byte *lpString2;
  
                    /* 0x69b0  136  ?OnCL2GMGetCMSAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  cVar2 = FUN_1000a790(0x4c);
  param_1 = (CPML *)CONCAT31(param_1._1_3_,cVar2);
  if (cVar2 == '0') {
    lpString2 = FUN_1000a830(0x62);
    if (lpString2 != (byte *)0x0) {
      lstrcpynA(&this[0x40].SockNet_data.field_0xac,(LPCSTR)lpString2,0x100);
    }
    uVar3 = FUN_1000a790(99);
    *(undefined2 *)&this[0x41].SockNet_data.field_0x64 = uVar3;
    *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 4;
  }
  else {
    FUN_1000a830(0x2e);
    *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 3;
  }
  SockNet::Disconnect((SockNet *)this);
  (*this->vftablePtr->GLogDscUserDefineddata)(this,(uchar *)param_1);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000001,0,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  return;
}



/* ---- OnCL2CMWebLoginAck @ 10006a60 size=710 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMWebLoginAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMWebLoginAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  undefined2 *_Dst;
  code *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  CC_BUDDY *pCVar6;
  CC_BLACK *pCVar7;
  void *pvVar8;
  uint uVar9;
  uchar *local_50;
  int local_4c;
  void *local_48 [3];
  void *local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30 [3];
  int local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x6a60  135  ?OnCL2CMWebLoginAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000e1b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar3 = FUN_1000a790(0x4c);
  if (cVar3 != '0') {
    FUN_1000a830(0x2e);
  }
  local_50 = (uchar *)CONCAT31(local_50._1_3_,cVar3);
  if (cVar3 == '0') {
    _Dst = &this[0xd].SockNet_data.offset_0x100;
    *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 7;
    *(undefined4 *)&this[0x40].SockNet_data.field_0x9c = 0;
    memset(_Dst,0,0x4a);
    InitMeByPML(this,param_1,(CC_ME *)_Dst);
    ClearBuddyList(this);
    FUN_1000a920(&local_4c,0x17);
    if (local_4c != 0) {
      FUN_1000aa80(local_30);
      pvVar8 = (void *)0x0;
      local_c = 0;
      cVar3 = *(char *)(local_4c + 1);
      if (cVar3 == ' ') {
        pvVar8 = (void *)(local_4c + 3);
      }
      else if (cVar3 == '!') {
        pvVar8 = (void *)(local_4c + 4);
      }
      else if (cVar3 == '\"') {
        pvVar8 = (void *)(local_4c + 6);
      }
      uVar9 = 0x16;
      pbVar5 = (byte *)FUN_1000a360(local_4c);
      local_4c = FUN_1000a490(pvVar8,pbVar5,uVar9);
      uVar9 = 0;
      if (0 < local_4c) {
        do {
          pCVar6 = operator_new(0x7c);
          if ((uint)(local_20 - local_24 >> 2) <= uVar9) {
            _invalid_parameter_noinfo();
          }
          InitBuddyByNode(this,(CPMLNode *)(local_24 + uVar9 * 4),pCVar6);
          bVar4 = AddBuddy(this,pCVar6);
          if (!bVar4) {
            local_50 = (uchar *)CONCAT31(local_50._1_3_,0x42);
            if (pCVar6 != (CC_BUDDY *)0x0) {
              operator_delete(pCVar6);
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_4c);
      }
      local_c = 0xffffffff;
      FUN_10007e60(local_30);
    }
    ClearBlackList(this);
    FUN_1000a920(&local_4c,9);
    iVar2 = local_4c;
    if (local_4c != 0) {
      FUN_1000aa80(local_48);
      local_c = 1;
      cVar3 = *(char *)(iVar2 + 1);
      pvVar8 = (void *)0x0;
      if (cVar3 == ' ') {
        pvVar8 = (void *)(iVar2 + 3);
      }
      else if (cVar3 == '!') {
        pvVar8 = (void *)(iVar2 + 4);
      }
      else if (cVar3 == '\"') {
        pvVar8 = (void *)(iVar2 + 6);
      }
      uVar9 = 8;
      pbVar5 = (byte *)FUN_1000a360(iVar2);
      local_4c = FUN_1000a490(pvVar8,pbVar5,uVar9);
      uVar9 = 0;
      if (0 < local_4c) {
        do {
          pCVar7 = operator_new(0x3f);
          if ((uint)(local_38 - (int)local_3c >> 2) <= uVar9) {
            _invalid_parameter_noinfo();
          }
          InitBlackByNode(this,(CPMLNode *)((int)local_3c + uVar9 * 4),pCVar7);
          bVar4 = AddBlack(this,pCVar7);
          if (!bVar4) {
            local_50 = (uchar *)CONCAT31(local_50._1_3_,0x43);
            if (pCVar7 != (CC_BLACK *)0x0) {
              operator_delete(pCVar7);
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_4c);
      }
      local_c = 2;
      if (local_3c != (void *)0x0) {
        operator_delete(local_3c);
      }
      local_c = 0xffffffff;
      local_3c = (void *)0x0;
      local_38 = 0;
      local_34 = 0;
      operator_delete(local_48[0]);
    }
  }
  else {
    *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 8;
    SockNet::Disconnect((SockNet *)this);
  }
  (*this->vftablePtr->GLogDscUserDefineddata)(this,local_50);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000002,0,(int)(char)local_50,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  ExceptionList = local_14;
  return;
}



/* ---- OnCL2CMAddBuddyAck @ 10006d30 size=312 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMAddBuddyAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMAddBuddyAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  char cVar1;
  bool bVar2;
  CPMLNode *pCVar3;
  CC_BUDDY *pCVar4;
  code *pcVar5;
  CC_BUDDY *pCVar6;
  undefined4 uVar7;
  CPML *local_9c;
  char local_98;
  undefined3 uStack_97;
  char local_94;
  undefined3 uStack_93;
  CC_BUDDY local_90 [132];
  uint local_c;
  
                    /* 0x6d30  125  ?OnCL2CMAddBuddyAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_c = DAT_10015018 ^ (uint)&local_9c;
  local_9c = param_1;
  cVar1 = FUN_1000a790(0x4c);
  _local_94 = CONCAT31(uStack_93,cVar1);
  if (cVar1 != '0') {
    FUN_1000a830(0x2e);
  }
  local_98 = cVar1;
  if ((cVar1 == '0') || (cVar1 == '4')) {
    pCVar4 = operator_new(0x7c);
    pCVar6 = pCVar4;
    pCVar3 = (CPMLNode *)FUN_1000a920(&local_9c,0x16);
    InitBuddyByNode(this,pCVar3,pCVar6);
    bVar2 = AddBuddy(this,pCVar4);
    if (!bVar2) {
      cVar1 = 'A';
      local_98 = 'A';
      if (pCVar4 != (CC_BUDDY *)0x0) {
        operator_delete(pCVar4);
        pCVar4 = (CC_BUDDY *)0x0;
      }
    }
    RemoveWatcher_Key(this,(char *)pCVar4);
    (*this->vftablePtr->OnAcceptBuddyAck)(this,pCVar4,local_98);
    pcVar5 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar5 == (code *)0x0) goto LAB_10006e51;
    uVar7 = *(undefined4 *)&this[0xe].SockNet_data.field_0xc;
  }
  else {
    pCVar4 = local_90;
    pCVar3 = (CPMLNode *)FUN_1000a920(&local_9c,0x16);
    InitBuddyByNode(this,pCVar3,pCVar4);
    (*this->vftablePtr->OnAcceptBuddyAck)(this,local_90,(char)_local_94);
    pcVar5 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar5 == (code *)0x0) goto LAB_10006e51;
    uVar7 = *(undefined4 *)&this[0xe].SockNet_data.field_0xc;
    pCVar4 = local_90;
  }
  (*pcVar5)(0xcc000003,pCVar4,(int)cVar1,uVar7);
LAB_10006e51:
  __security_check_cookie(local_c ^ (uint)&local_9c);
  return;
}



/* ---- OnCL2CMDeleteBuddyAck @ 10006e70 size=252 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMDeleteBuddyAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMDeleteBuddyAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  char local_94 [4];
  CC_BUDDY local_90 [21];
  CHAR local_7b [111];
  uint local_c;
  
                    /* 0x6e70  128  ?OnCL2CMDeleteBuddyAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z
                        */
  local_c = DAT_10015018 ^ (uint)local_94;
  memset(local_90,0,0x7c);
  FUN_1000a830(0xd0);
  pbVar4 = FUN_1000a830(0xd3);
  if (pbVar4 != (byte *)0x0) {
    lstrcpynA((LPSTR)local_90,(LPCSTR)pbVar4,0x15);
  }
  pbVar4 = FUN_1000a830(0xd4);
  if (pbVar4 != (byte *)0x0) {
    lstrcpynA(local_7b,(LPCSTR)pbVar4,0x15);
  }
  cVar2 = FUN_1000a790(0x4c);
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  local_94[0] = cVar2;
  if (cVar2 == '0') {
    bVar3 = RemoveBuddy_Key(this,(char *)local_90);
    if (!bVar3) {
      cVar2 = 'A';
      local_94[0] = 'A';
    }
  }
  (*this->vftablePtr->OnAcceptBuddyAck)(this,local_90,local_94[0]);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000004,local_90,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  __security_check_cookie(local_c ^ (uint)local_94);
  return;
}



/* ---- OnCL2CMAcceptBuddyAck @ 10006f70 size=258 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMAcceptBuddyAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMAcceptBuddyAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  CC_BUDDY *pCVar4;
  CPMLNode *pCVar5;
  CC_BUDDY *pCVar6;
  char local_10;
  char local_c [8];
  
                    /* 0x6f70  123  ?OnCL2CMAcceptBuddyAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z
                        */
  cVar2 = FUN_1000a790(0x4c);
  local_c[0] = cVar2;
  if (cVar2 == '0') {
    pCVar4 = operator_new(0x7c);
    pCVar6 = pCVar4;
    pCVar5 = (CPMLNode *)FUN_1000a920((undefined4 *)local_c,0x16);
    InitBuddyByNode(this,pCVar5,pCVar6);
    bVar3 = AddBuddy(this,pCVar4);
    local_10 = '0';
    if (!bVar3) {
      if (pCVar4 != (CC_BUDDY *)0x0) {
        operator_delete(pCVar4);
        pCVar4 = (CC_BUDDY *)0x0;
      }
      local_10 = 'A';
    }
    bVar3 = RemoveWatcher_Key(this,(char *)pCVar4);
    if (!bVar3) {
      local_10 = 'B';
    }
    (*this->vftablePtr->OnAcceptBuddyAck)(this,pCVar4,local_10);
    pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(0xcc000006,pCVar4,local_10,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
    }
  }
  else {
    FUN_1000a830(0x2e);
    (*this->vftablePtr->OnAcceptBuddyAck)(this,(CC_BUDDY *)0x0,local_c[0]);
    pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(0xcc000006,0,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
      return;
    }
  }
  return;
}



/* ---- OnCM2CLChangeBuddyStatus @ 10007080 size=173 ---- */

/* protected: void __thiscall CasualNet::OnCM2CLChangeBuddyStatus(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCM2CLChangeBuddyStatus(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  OnAcceptBuddyAck *pOVar1;
  code *pcVar2;
  CC_BUDDY *pCVar3;
  CPMLNode *pCVar4;
  CC_BUDDY *pCVar5;
  CasualNet *local_c [2];
  
  local_c[0] = this;
                    /* 0x7080  139
                       ?OnCM2CLChangeBuddyStatus@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  pCVar3 = operator_new(0x7c);
  pCVar5 = pCVar3;
  pCVar4 = (CPMLNode *)FUN_1000a920(local_c,0x16);
  InitBuddyByNode(this,pCVar4,pCVar5);
  pCVar5 = ReplaceBuddy(this,pCVar3);
  pOVar1 = this->vftablePtr->OnAcceptBuddyAck;
  if (pCVar5 == (CC_BUDDY *)0x0) {
    (*pOVar1)(this,pCVar3,'A');
    pcVar2 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(0xcc000007,pCVar3,0x41,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
    }
    operator_delete(pCVar3);
    return;
  }
  (*pOVar1)(this,pCVar3,'0');
  pcVar2 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(0xcc000007,pCVar3,0x30,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  operator_delete(pCVar5);
  return;
}



/* ---- OnCM2CLAddBuddyAccepted @ 10007130 size=173 ---- */

/* protected: void __thiscall CasualNet::OnCM2CLAddBuddyAccepted(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCM2CLAddBuddyAccepted(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  OnAcceptBuddyAck *pOVar1;
  code *pcVar2;
  CC_BUDDY *pCVar3;
  CPMLNode *pCVar4;
  CC_BUDDY *pCVar5;
  CasualNet *local_c [2];
  
  local_c[0] = this;
                    /* 0x7130  138  ?OnCM2CLAddBuddyAccepted@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z
                        */
  pCVar3 = operator_new(0x7c);
  pCVar5 = pCVar3;
  pCVar4 = (CPMLNode *)FUN_1000a920(local_c,0x16);
  InitBuddyByNode(this,pCVar4,pCVar5);
  pCVar5 = ReplaceBuddy(this,pCVar3);
  pOVar1 = this->vftablePtr->OnAcceptBuddyAck;
  if (pCVar5 == (CC_BUDDY *)0x0) {
    (*pOVar1)(this,pCVar3,'A');
    pcVar2 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(0xcc000008,pCVar3,0x41,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
    }
    operator_delete(pCVar3);
    return;
  }
  (*pOVar1)(this,pCVar3,'0');
  pcVar2 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(0xcc000008,pCVar3,0x30,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  operator_delete(pCVar5);
  return;
}



/* ---- OnCL2CMDeleteNewWatcherAck @ 100071e0 size=231 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMDeleteNewWatcherAck(class CPML *,struct PMLRELAY *)
    */

void __thiscall
CasualNet::OnCL2CMDeleteNewWatcherAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  char local_6c [4];
  CC_BUDDY local_68 [21];
  CHAR local_53 [71];
  uint local_c;
  
                    /* 0x71e0  129
                       ?OnCL2CMDeleteNewWatcherAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_c = DAT_10015018 ^ (uint)local_6c;
  memset(local_68,0,0x56);
  pbVar4 = FUN_1000a830(0xde);
  if (pbVar4 != (byte *)0x0) {
    lstrcpynA((LPSTR)local_68,(LPCSTR)pbVar4,0x15);
  }
  pbVar4 = FUN_1000a830(0xdf);
  if (pbVar4 != (byte *)0x0) {
    lstrcpynA(local_53,(LPCSTR)pbVar4,0x15);
  }
  cVar2 = FUN_1000a790(0x4c);
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  local_6c[0] = cVar2;
  if (cVar2 == '0') {
    bVar3 = RemoveWatcher_Key(this,(char *)local_68);
    if (!bVar3) {
      cVar2 = 'A';
      local_6c[0] = 'A';
    }
  }
  (*this->vftablePtr->OnAcceptBuddyAck)(this,local_68,local_6c[0]);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000010,local_68,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  __security_check_cookie(local_c ^ (uint)local_6c);
  return;
}



/* ---- OnCL2CMGetNewWatcherListAck @ 100072d0 size=723 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMGetNewWatcherListAck(class CPML *,struct PMLRELAY *)
    */

void __thiscall
CasualNet::OnCL2CMGetNewWatcherListAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  CC_WATCHER CVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  CC_WATCHER *lpString1;
  void *this_00;
  uint uVar7;
  uchar *local_3c;
  void *local_38;
  int local_34;
  void *local_30 [3];
  void *local_24;
  int local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x72d0  130
                       ?OnCL2CMGetNewWatcherListAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000df60;
  local_14 = ExceptionList;
  uVar5 = DAT_10015018 ^ (uint)(local_30 + -6);
  ExceptionList = &local_14;
  cVar2 = FUN_1000a790(0x4c);
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  local_3c = (uchar *)CONCAT31(local_3c._1_3_,cVar2);
  if (cVar2 == '0') {
    ClearWatcherList(this);
    FUN_1000a920(&local_34,0x7c);
    this_00 = (void *)0x0;
    if (local_34 == 0) {
      local_3c = (uchar *)CONCAT31(local_3c._1_3_,0x42);
    }
    else {
      FUN_1000aa80(local_30);
      local_c = 0;
      cVar2 = *(char *)(local_34 + 1);
      if (cVar2 == ' ') {
        this_00 = (void *)(local_34 + 3);
      }
      else if (cVar2 == '!') {
        this_00 = (void *)(local_34 + 4);
      }
      else if (cVar2 == '\"') {
        this_00 = (void *)(local_34 + 6);
      }
      uVar7 = 0x7b;
      pbVar6 = (byte *)FUN_1000a360(local_34);
      local_34 = FUN_1000a490(this_00,pbVar6,uVar7);
      uVar7 = 0;
      if (0 < local_34) {
        do {
          lpString1 = operator_new(0x56);
          if (lpString1 == (CC_WATCHER *)0x0) {
            local_3c = (uchar *)CONCAT31(local_3c._1_3_,0x43);
            break;
          }
          memset(lpString1,0,0x56);
          if ((uint)(local_20 - (int)local_24 >> 2) <= uVar7) {
            _invalid_parameter_noinfo();
          }
          pbVar6 = FUN_1000a5d0();
          if (pbVar6 != (byte *)0x0) {
            lstrcpynA((LPSTR)lpString1,(LPCSTR)pbVar6,0x15);
          }
          if ((uint)(local_20 - (int)local_24 >> 2) <= uVar7) {
            _invalid_parameter_noinfo();
          }
          pbVar6 = FUN_1000a5d0();
          if (pbVar6 != (byte *)0x0) {
            lstrcpynA((LPSTR)(lpString1 + 0x15),(LPCSTR)pbVar6,0x15);
          }
          if ((uint)(local_20 - (int)local_24 >> 2) <= uVar7) {
            _invalid_parameter_noinfo();
          }
          pbVar6 = FUN_1000a5d0();
          if (pbVar6 != (byte *)0x0) {
            lstrcpynA((LPSTR)(lpString1 + 0x2a),(LPCSTR)pbVar6,0x15);
          }
          if ((uint)(local_20 - (int)local_24 >> 2) <= uVar7) {
            _invalid_parameter_noinfo();
          }
          CVar3 = (CC_WATCHER)FUN_1000a570();
          lpString1[0x3f] = CVar3;
          if ((uint)(local_20 - (int)local_24 >> 2) <= uVar7) {
            _invalid_parameter_noinfo();
          }
          CVar3 = (CC_WATCHER)FUN_1000a570();
          lpString1[0x40] = CVar3;
          if ((uint)(local_20 - (int)local_24 >> 2) <= uVar7) {
            _invalid_parameter_noinfo();
          }
          pbVar6 = FUN_1000a5d0();
          if (pbVar6 != (byte *)0x0) {
            lstrcpynA((LPSTR)(lpString1 + 0x41),(LPCSTR)pbVar6,0x15);
          }
          bVar4 = AddWatcher(this,lpString1);
          if (!bVar4) {
            local_3c = (uchar *)CONCAT31(local_3c._1_3_,0x41);
            operator_delete(lpString1);
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < local_34);
      }
      local_c = 1;
      if (local_24 != (void *)0x0) {
        operator_delete(local_24);
      }
      local_c = 0xffffffff;
      local_24 = (void *)0x0;
      local_20 = 0;
      local_1c = 0;
      operator_delete(local_30[0]);
    }
  }
  (*this->vftablePtr->GLogDscUserDefineddata)(this,local_3c);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000009,0,(int)(char)local_3c,*(undefined4 *)&this[0xe].SockNet_data.field_0xc,
              uVar5);
  }
  ExceptionList = local_14;
  return;
}



/* ---- OnCM2CLNewWatcher @ 100075b0 size=249 ---- */

/* protected: void __thiscall CasualNet::OnCM2CLNewWatcher(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCM2CLNewWatcher(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  CC_WATCHER CVar2;
  bool bVar3;
  CC_WATCHER *lpString1;
  byte *pbVar4;
  undefined1 local_9;
  
                    /* 0x75b0  141  ?OnCM2CLNewWatcher@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_9 = 0x30;
  lpString1 = operator_new(0x56);
  if (lpString1 == (CC_WATCHER *)0x0) {
    local_9 = 0x42;
  }
  else {
    memset(lpString1,0,0x56);
    pbVar4 = FUN_1000a830(0xde);
    if (pbVar4 != (byte *)0x0) {
      lstrcpynA((LPSTR)lpString1,(LPCSTR)pbVar4,0x15);
    }
    pbVar4 = FUN_1000a830(0xdf);
    if (pbVar4 != (byte *)0x0) {
      lstrcpynA((LPSTR)(lpString1 + 0x15),(LPCSTR)pbVar4,0x15);
    }
    pbVar4 = FUN_1000a830(0x7a);
    if (pbVar4 != (byte *)0x0) {
      lstrcpynA((LPSTR)(lpString1 + 0x2a),(LPCSTR)pbVar4,0x15);
    }
    CVar2 = (CC_WATCHER)FUN_1000a790(0x93);
    lpString1[0x3f] = CVar2;
    CVar2 = (CC_WATCHER)FUN_1000a790(0x92);
    lpString1[0x40] = CVar2;
    bVar3 = AddWatcher(this,lpString1);
    if (!bVar3) {
      local_9 = 0x41;
      operator_delete(lpString1);
      lpString1 = (CC_WATCHER *)0x0;
    }
  }
  (*this->vftablePtr->GLogDscUserDefineddata)(this,(uchar *)lpString1);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000011,lpString1,local_9,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  return;
}



/* ---- OnCL2CMAddBlackAck @ 100076b0 size=384 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMAddBlackAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMAddBlackAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  CC_BUDDY *lpString1;
  code *pcVar4;
  undefined4 uVar5;
  char local_54 [4];
  char local_50;
  undefined3 uStack_4f;
  CC_BUDDY local_4c [21];
  CHAR local_37 [43];
  uint local_c;
  
                    /* 0x76b0  124  ?OnCL2CMAddBlackAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_c = DAT_10015018 ^ (uint)local_54;
  cVar1 = FUN_1000a790(0x4c);
  _local_50 = CONCAT31(uStack_4f,cVar1);
  if (cVar1 != '0') {
    FUN_1000a830(0x2e);
    cVar1 = local_50;
  }
  local_54[0] = cVar1;
  if (cVar1 == '0') {
    lpString1 = operator_new(0x3f);
    if (lpString1 == (CC_BUDDY *)0x0) {
      local_54[0] = 'B';
    }
    else {
      memset(lpString1,0,0x3f);
      pbVar3 = FUN_1000a830(0xd6);
      if (pbVar3 != (byte *)0x0) {
        lstrcpynA((LPSTR)lpString1,(LPCSTR)pbVar3,0x15);
      }
      pbVar3 = FUN_1000a830(0xd7);
      if (pbVar3 != (byte *)0x0) {
        lstrcpynA((LPSTR)(lpString1 + 0x15),(LPCSTR)pbVar3,0x15);
      }
      bVar2 = AddBlack(this,(CC_BLACK *)lpString1);
      if (!bVar2) {
        local_54[0] = 'A';
        operator_delete(lpString1);
        lpString1 = (CC_BUDDY *)0x0;
      }
    }
    (*this->vftablePtr->OnAcceptBuddyAck)(this,lpString1,local_54[0]);
    pcVar4 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar4 == (code *)0x0) goto LAB_1000781c;
    uVar5 = *(undefined4 *)&this[0xe].SockNet_data.field_0xc;
    cVar1 = local_54[0];
  }
  else {
    memset(local_4c,0,0x3f);
    pbVar3 = FUN_1000a830(0xd6);
    if (pbVar3 != (byte *)0x0) {
      lstrcpynA((LPSTR)local_4c,(LPCSTR)pbVar3,0x15);
    }
    pbVar3 = FUN_1000a830(0xd7);
    if (pbVar3 != (byte *)0x0) {
      lstrcpynA(local_37,(LPCSTR)pbVar3,0x15);
    }
    (*this->vftablePtr->OnAcceptBuddyAck)(this,local_4c,(char)_local_50);
    pcVar4 = *(code **)&this[0xe].SockNet_data.field_0x4;
    if (pcVar4 == (code *)0x0) goto LAB_1000781c;
    uVar5 = *(undefined4 *)&this[0xe].SockNet_data.field_0xc;
    lpString1 = local_4c;
    cVar1 = local_50;
  }
  (*pcVar4)(0xcc000012,lpString1,(int)cVar1,uVar5);
LAB_1000781c:
  __security_check_cookie(local_c ^ (uint)local_54);
  return;
}



/* ---- OnCL2CMDeleteBlackAck @ 10007830 size=243 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMDeleteBlackAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMDeleteBlackAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined1 auStack_54 [4];
  char local_50;
  undefined3 uStack_4f;
  CC_BUDDY local_4c [21];
  CHAR local_37 [43];
  uint local_c;
  
                    /* 0x7830  127  ?OnCL2CMDeleteBlackAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z
                        */
  local_c = DAT_10015018 ^ (uint)auStack_54;
  memset(local_4c,0,0x3f);
  FUN_1000a830(0xd0);
  pbVar4 = FUN_1000a830(0xd6);
  if (pbVar4 != (byte *)0x0) {
    lstrcpynA((LPSTR)local_4c,(LPCSTR)pbVar4,0x15);
  }
  pbVar4 = FUN_1000a830(0xd7);
  if (pbVar4 != (byte *)0x0) {
    lstrcpynA(local_37,(LPCSTR)pbVar4,0x15);
  }
  cVar2 = FUN_1000a790(0x4c);
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  local_50 = cVar2;
  if (cVar2 == '0') {
    bVar3 = RemoveBlack_Key(this,(char *)local_4c);
    if (!bVar3) {
      cVar2 = 'A';
      local_50 = 'A';
    }
  }
  (*this->vftablePtr->OnAcceptBuddyAck)(this,local_4c,local_50);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000013,local_4c,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  __security_check_cookie(local_c ^ (uint)auStack_54);
  return;
}



/* ---- OnCL2CLChatMsg @ 10007930 size=265 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* protected: void __thiscall CasualNet::OnCL2CLChatMsg(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CLChatMsg(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  byte *pbVar2;
  undefined1 auStack_106c [4];
  uchar local_1068 [21];
  CHAR local_1053 [21];
  CHAR local_103e [21];
  CHAR local_1029 [21];
  CHAR local_1014 [4104];
  uint local_c;
  
                    /* 0x7930  121  ?OnCL2CLChatMsg@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_c = DAT_10015018 ^ (uint)auStack_106c;
  memset(local_1068,0,0x1054);
  pbVar2 = FUN_1000a830(0xd0);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA((LPSTR)local_1068,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a830(0xd1);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA(local_1053,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a830(0xda);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA(local_103e,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a830(0xdb);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA(local_1029,(LPCSTR)pbVar2,0x15);
  }
  pbVar2 = FUN_1000a830(0x84);
  if (pbVar2 != (byte *)0x0) {
    lstrcpynA(local_1014,(LPCSTR)pbVar2,0x1000);
  }
  (*this->vftablePtr->GLogDscUserDefineddata)(this,local_1068);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000019,local_1068,0x30,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  __security_check_cookie(local_c ^ (uint)auStack_106c);
  return;
}



/* ---- OnCL2CLChatMsgAck @ 10007a40 size=223 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* protected: void __thiscall CasualNet::OnCL2CLChatMsgAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CLChatMsgAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  byte *pbVar3;
  char local_105c [4];
  CC_BUDDY local_1058 [42];
  CHAR local_102e [21];
  CHAR local_1019 [4117];
  uint local_4;
  
                    /* 0x7a40  122  ?OnCL2CLChatMsgAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  local_4 = DAT_10015018 ^ (uint)local_105c;
  cVar2 = FUN_1000a790(0x4c);
  local_105c[0] = cVar2;
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  memset(local_1058,0,0x1054);
  pbVar3 = FUN_1000a830(0xda);
  if (pbVar3 != (byte *)0x0) {
    lstrcpynA(local_102e,(LPCSTR)pbVar3,0x15);
  }
  pbVar3 = FUN_1000a830(0xdb);
  if (pbVar3 != (byte *)0x0) {
    lstrcpynA(local_1019,(LPCSTR)pbVar3,0x15);
  }
  (*this->vftablePtr->OnAcceptBuddyAck)(this,local_1058,local_105c[0]);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000020,local_1058,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  __security_check_cookie(local_4 ^ (uint)local_105c);
  return;
}



/* ---- OnCL2CMPingAck @ 10007b20 size=88 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMPingAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMPingAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  
                    /* 0x7b20  132  ?OnCL2CMPingAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  cVar2 = FUN_1000a790(0x4c);
  param_1 = (CPML *)CONCAT31(param_1._1_3_,cVar2);
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  (*this->vftablePtr->GLogDscUserDefineddata)(this,(uchar *)param_1);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000021,0,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  return;
}



/* ---- OnCL2CMGetUserInfoAck @ 10007b80 size=169 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMGetUserInfoAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMGetUserInfoAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  CC_USER *pCVar3;
  undefined1 auStack_9c [4];
  char local_98;
  undefined3 uStack_97;
  CPMLNode local_94 [4];
  CC_USER local_90 [132];
  uint local_c;
  
                    /* 0x7b80  131  ?OnCL2CMGetUserInfoAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z
                        */
  local_c = DAT_10015018 ^ (uint)auStack_9c;
  cVar2 = FUN_1000a790(0x4c);
  _local_98 = CONCAT31(uStack_97,cVar2);
  if (cVar2 == '0') {
    FUN_1000a920((undefined4 *)local_94,0x16);
    InitUserByNode(this,local_94,local_90);
    pCVar3 = local_90;
  }
  else {
    FUN_1000a830(0x2e);
    pCVar3 = (CC_USER *)0x0;
  }
  (*this->vftablePtr->OnAcceptBuddyAck)(this,(CC_BUDDY *)pCVar3,(char)_local_98);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000022,pCVar3,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  __security_check_cookie(local_c ^ (uint)auStack_9c);
  return;
}



/* ---- OnCL2CMSetRecvPrefAck @ 10007c30 size=122 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMSetRecvPrefAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMSetRecvPrefAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  CC_BUDDY *pCVar4;
  undefined4 uStack_4;
  
                    /* 0x7c30  134  ?OnCL2CMSetRecvPrefAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z
                        */
  pCVar4 = (CC_BUDDY *)0x0;
  uStack_4 = (uint)this & 0xffffff;
  cVar2 = FUN_1000a790(0x4c);
  if (cVar2 == '0') {
    uVar3 = FUN_1000a790(0x22);
    uStack_4 = CONCAT13(uVar3,(undefined3)uStack_4);
    *(undefined1 *)((int)&this[0xe].SockNet_data.offset_0x0 + 1) = uVar3;
    pCVar4 = (CC_BUDDY *)((int)&uStack_4 + 3);
  }
  else {
    FUN_1000a830(0x2e);
  }
  (*this->vftablePtr->OnAcceptBuddyAck)(this,pCVar4,cVar2);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000026,pCVar4,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  return;
}



/* ---- OnCL2CMChangeNickNameAck @ 10007cb0 size=123 ---- */

/* protected: void __thiscall CasualNet::OnCL2CMChangeNickNameAck(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCL2CMChangeNickNameAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  byte *lpString2;
  
                    /* 0x7cb0  126
                       ?OnCL2CMChangeNickNameAck@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  lpString2 = FUN_1000a830(0xd1);
  if (lpString2 != (byte *)0x0) {
    lstrcpynA(&this[0xd].SockNet_data.field_0x115,(LPCSTR)lpString2,0x15);
  }
  cVar2 = FUN_1000a790(0x4c);
  param_1 = (CPML *)CONCAT31(param_1._1_3_,cVar2);
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  (*this->vftablePtr->GLogDscUserDefineddata)(this,(uchar *)param_1);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000033,lpString2,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  return;
}



/* ---- OnCM2CLKickOut @ 10007d30 size=88 ---- */

/* protected: void __thiscall CasualNet::OnCM2CLKickOut(class CPML *,struct PMLRELAY *) */

void __thiscall CasualNet::OnCM2CLKickOut(CasualNet *this,CPML *param_1,PMLRELAY *param_2)

{
  code *pcVar1;
  char cVar2;
  
                    /* 0x7d30  140  ?OnCM2CLKickOut@CasualNet@@IAEXPAVCPML@@PAUPMLRELAY@@@Z */
  cVar2 = FUN_1000a790(0x4c);
  param_1 = (CPML *)CONCAT31(param_1._1_3_,cVar2);
  if (cVar2 != '0') {
    FUN_1000a830(0x2e);
  }
  (*this->vftablePtr->GLogDscUserDefineddata)(this,(uchar *)param_1);
  pcVar1 = *(code **)&this[0xe].SockNet_data.field_0x4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0xcc000030,0,(int)cVar2,*(undefined4 *)&this[0xe].SockNet_data.field_0xc);
  }
  return;
}



/* ---- FUN_10007d90 @ 10007d90 size=193 ---- */

/* WARNING: Removing unreachable block (ram,0x10007dec) */

undefined4 * __thiscall FUN_10007d90(void *this,undefined4 *param_1)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  int extraout_EAX;
  uint uVar2;
  rsize_t _DstSize;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000dce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  local_4 = 0;
  uVar2 = *(int *)((int)this + 0x10) - *(int *)((int)this + 0xc);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar2 != 0) {
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar2);
    param_1[3] = extraout_EAX;
    param_1[4] = extraout_EAX;
    param_1[5] = extraout_EAX + uVar2;
    uVar2 = *(uint *)((int)this + 0x10);
    if (uVar2 < *(uint *)((int)this + 0xc)) {
      _invalid_parameter_noinfo();
    }
    _Src = *(void **)((int)this + 0xc);
    if (*(void **)((int)this + 0x10) < _Src) {
      _invalid_parameter_noinfo();
    }
    _Dst = (void *)param_1[3];
    _DstSize = uVar2 - (int)_Src;
    if (_DstSize != 0) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = _DstSize + (int)_Dst;
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10007e60 @ 10007e60 size=108 ---- */

void FUN_10007e60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000db38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  local_4 = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10007ed0 @ 10007ed0 size=248 ---- */

/* WARNING: Removing unreachable block (ram,0x10007f9a) */

void FUN_10007ed0(void)

{
  void *pvVar1;
  void *_Dst;
  int in_EAX;
  rsize_t rVar2;
  uint uVar3;
  void *extraout_EAX;
  int iVar4;
  void *pvVar5;
  int unaff_EDI;
  
  if (unaff_EDI != in_EAX) {
    pvVar5 = *(void **)(in_EAX + 0x10);
    pvVar1 = *(void **)(in_EAX + 0xc);
    if (pvVar5 == pvVar1) {
      FUN_100085c0();
      return;
    }
    _Dst = *(void **)(unaff_EDI + 0xc);
    if ((uint)((int)pvVar5 - (int)pvVar1) <= (uint)(*(int *)(unaff_EDI + 0x10) - (int)_Dst)) {
      rVar2 = (int)pvVar5 - (int)pvVar1;
      if (0 < (int)rVar2) {
        memmove_s(_Dst,rVar2,pvVar1,rVar2);
      }
      *(int *)(unaff_EDI + 0x10) =
           (*(int *)(unaff_EDI + 0xc) - *(int *)(in_EAX + 0xc)) + *(int *)(in_EAX + 0x10);
      return;
    }
    if (_Dst == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(unaff_EDI + 0x14) - (int)_Dst;
    }
    if ((uint)((int)pvVar5 - (int)pvVar1) <= uVar3) {
      pvVar5 = (void *)((int)pvVar1 + (*(int *)(unaff_EDI + 0x10) - (int)_Dst));
      rVar2 = (int)pvVar5 - (int)pvVar1;
      if (0 < (int)rVar2) {
        memmove_s(_Dst,rVar2,pvVar1,rVar2);
      }
      pvVar1 = *(void **)(unaff_EDI + 0x10);
      rVar2 = *(int *)(in_EAX + 0x10) - (int)pvVar5;
      if (rVar2 != 0) {
        memmove_s(pvVar1,rVar2,pvVar5,rVar2);
      }
      *(rsize_t *)(unaff_EDI + 0x10) = rVar2 + (int)pvVar1;
      return;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar3 = *(int *)(in_EAX + 0x10) - *(int *)(in_EAX + 0xc);
    *(undefined4 *)(unaff_EDI + 0xc) = 0;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
    if (uVar3 != 0) {
      std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar3);
      *(uint *)(unaff_EDI + 0x14) = (int)extraout_EAX + uVar3;
      *(void **)(unaff_EDI + 0xc) = extraout_EAX;
      *(void **)(unaff_EDI + 0x10) = extraout_EAX;
      iVar4 = FUN_100091e0(extraout_EAX,*(void **)(in_EAX + 0xc));
      *(int *)(unaff_EDI + 0x10) = iVar4;
    }
  }
  return;
}



/* ---- FUN_10007fd0 @ 10007fd0 size=260 ---- */

void FUN_10007fd0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *this;
  bool bVar4;
  int *piVar5;
  int *unaff_EBX;
  undefined4 *puVar6;
  int *unaff_EDI;
  bool local_14;
  undefined4 local_8;
  undefined4 *local_4;
  
  puVar2 = (undefined4 *)((undefined4 *)unaff_EBX[6])[1];
  cVar1 = *(char *)((int)puVar2 + 0x2d);
  local_14 = true;
  this = (undefined4 *)unaff_EBX[6];
  while (cVar1 == '\0') {
    local_14 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                         (param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )(puVar2 + 3));
    if (local_14) {
      puVar6 = (undefined4 *)*puVar2;
    }
    else {
      puVar6 = (undefined4 *)puVar2[2];
    }
    this = puVar2;
    puVar2 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x2d);
  }
  iVar3 = *unaff_EBX;
  if (local_14 != false) {
    local_4 = *(undefined4 **)unaff_EBX[6];
    if (iVar3 == 0) {
      _invalid_parameter_noinfo();
    }
    if (this == local_4) {
      piVar5 = FUN_10008680(this,unaff_EBX,&local_8,'\x01',param_1);
      iVar3 = piVar5[1];
      *unaff_EDI = *piVar5;
      unaff_EDI[1] = iVar3;
      *(undefined1 *)(unaff_EDI + 2) = 1;
      return;
    }
    FUN_100090d0();
  }
  bVar4 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 3),
                     param_1);
  if (bVar4) {
    piVar5 = FUN_10008680(this,unaff_EBX,&local_8,local_14,param_1);
    iVar3 = *piVar5;
    unaff_EDI[1] = piVar5[1];
    *unaff_EDI = iVar3;
    *(undefined1 *)(unaff_EDI + 2) = 1;
    return;
  }
  *unaff_EDI = iVar3;
  unaff_EDI[1] = (int)this;
  *(undefined1 *)(unaff_EDI + 2) = 0;
  return;
}



/* ---- FUN_100080e0 @ 100080e0 size=88 ---- */

void FUN_100080e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000dc88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10008b40();
  local_4 = 0xffffffff;
  operator_delete((void *)*param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10008140 @ 10008140 size=770 ---- */

/* WARNING: Removing unreachable block (ram,0x10008272) */
/* WARNING: Removing unreachable block (ram,0x10008283) */
/* WARNING: Removing unreachable block (ram,0x1000828c) */
/* WARNING: Removing unreachable block (ram,0x1000828f) */
/* WARNING: Removing unreachable block (ram,0x1000827f) */
/* WARNING: Removing unreachable block (ram,0x1000829c) */
/* WARNING: Removing unreachable block (ram,0x100082ad) */
/* WARNING: Removing unreachable block (ram,0x100082b8) */
/* WARNING: Removing unreachable block (ram,0x100082b4) */
/* WARNING: Removing unreachable block (ram,0x100082a8) */
/* WARNING: Removing unreachable block (ram,0x100082bb) */
/* WARNING: Removing unreachable block (ram,0x100082cb) */

undefined4 * FUN_10008140(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  exception local_34 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000dcc2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x2d) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_50,"invalid map/set<T> iterator");
    local_4 = 0;
    std::exception::exception(local_34);
    local_4._0_1_ = 1;
                    /* inlined constructor or destructor (approx location) for std::logic_error */
    local_34[0] = (exception)&std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_28,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_4 = (uint)local_4._1_3_ << 8;
                    /* inlined constructor or destructor (approx location) for std::out_of_range */
    local_34[0] = (exception)&std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_1000fe44);
  }
  FUN_10009060();
  piVar8 = (int *)*param_4;
  if (*(char *)((int)piVar8 + 0x2d) == '\0') {
    if (*(char *)(param_4[2] + 0x2d) == '\0') {
      piVar8 = (int *)param_4[2];
    }
  }
  else {
    piVar8 = (int *)param_4[2];
  }
  piVar6 = (int *)param_4[1];
  if (*(char *)((int)piVar8 + 0x2d) == '\0') {
    piVar8[1] = (int)piVar6;
  }
  if (*(int **)(param_1[6] + 4) == param_4) {
    *(int **)(param_1[6] + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if (*(int **)param_1[6] == param_4) {
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0x2d);
      piVar7 = (int *)*piVar8;
      piVar5 = piVar8;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar7 + 0x2d);
        piVar5 = piVar3;
      }
    }
    else {
      piVar5 = piVar6;
    }
    *(int **)param_1[6] = piVar5;
  }
  iVar2 = param_1[6];
  if (*(int **)(iVar2 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      uVar4 = FUN_10008c00();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[0xb] == '\x01') {
    if (piVar8 != *(int **)(param_1[6] + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[0xb] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_10008910(piVar7,(int)param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(*piVar6 + 0x2c) == '\x01') && (*(char *)(piVar6[2] + 0x2c) == '\x01'))
            goto LAB_100083a5;
            if (*(char *)(piVar6[2] + 0x2c) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              *(undefined1 *)(piVar6 + 0xb) = 0;
              FUN_10008af0(piVar6,(int)param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar6[2] + 0x2c) = 1;
            FUN_10008910(piVar7,(int)param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_10008af0(piVar7,(int)param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x2c) != '\x01') || (*(char *)(*piVar6 + 0x2c) != '\x01')) {
              if (*(char *)(*piVar6 + 0x2c) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x2c) = 1;
                *(undefined1 *)(piVar6 + 0xb) = 0;
                FUN_10008910(piVar6,(int)param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
              *(undefined1 *)(piVar7 + 0xb) = 1;
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              FUN_10008af0(piVar7,(int)param_1);
              break;
            }
LAB_100083a5:
            *(undefined1 *)(piVar6 + 0xb) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(param_1[6] + 4));
    }
    *(undefined1 *)(piVar8 + 0xb) = 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_4 + 3));
  operator_delete(param_4);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  uVar4 = *param_1;
  param_2[1] = param_4;
  *param_2 = uVar4;
  ExceptionList = local_c;
  return param_2;
}



/* ---- FUN_10008450 @ 10008450 size=127 ---- */

int * FUN_10008450(int *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_ESI;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puVar4 = FUN_10008ef0(param_2);
  local_10 = puVar4;
  if (unaff_ESI == (int *)0x0) {
    _invalid_parameter_noinfo();
  }
  puVar1 = (undefined4 *)unaff_ESI[6];
  local_14 = *unaff_ESI;
  if (*unaff_ESI == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) ||
     (bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (puVar4 + 3)), bVar3)) {
    local_8 = unaff_ESI[6];
    local_c = *unaff_ESI;
    piVar5 = &local_c;
  }
  else {
    piVar5 = &local_14;
  }
  iVar2 = *piVar5;
  param_1[1] = piVar5[1];
  *param_1 = iVar2;
  return param_1;
}



/* ---- FUN_100084d0 @ 100084d0 size=145 ---- */

undefined4 * FUN_100084d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000deb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  local_8 = 0;
  iVar2 = FUN_10008f40();
  param_1[6] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(undefined4 *)(param_1[6] + 4) = param_1[6];
  *(undefined4 *)param_1[6] = param_1[6];
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10008610();
  ExceptionList = local_10;
  return param_1;
}



/* ---- Catch_All@10008561 @ 10008561 size=17 ---- */

void Catch_All_10008561(void)

{
  FUN_10008b40();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_10008580 @ 10008580 size=45 ---- */

int FUN_10008580(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    piVar1 = (int *)*unaff_ESI;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
      goto LAB_1000859b;
    }
  }
  iVar2 = *piVar1;
LAB_1000859b:
  if (unaff_ESI[1] == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  return unaff_ESI[1] + 0xc;
}



/* ---- FUN_100085b0 @ 100085b0 size=10 ---- */

void FUN_100085b0(void)

{
  undefined4 *in_EAX;
  
  operator_delete((void *)*in_EAX);
  return;
}



/* ---- FUN_100085c0 @ 100085c0 size=74 ---- */

void FUN_100085c0(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  
  pvVar1 = (void *)in_EAX[4];
  if (pvVar1 < (void *)in_EAX[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = in_EAX[3];
  uVar3 = *in_EAX;
  if ((uint)in_EAX[4] < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_10008c40(*in_EAX,uVar2,uVar3,pvVar1);
  return;
}



/* ---- FUN_10008610 @ 10008610 size=108 ---- */

void FUN_10008610(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *in_EAX;
  undefined4 *puVar7;
  int unaff_EBX;
  
  iVar2 = *(int *)((int)in_EAX + 0x18);
  puVar7 = FUN_10008da0(in_EAX,*(undefined4 **)(*(int *)(unaff_EBX + 0x18) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)((int)in_EAX + 0x18);
  *(undefined4 *)((int)in_EAX + 0x1c) = *(undefined4 *)(unaff_EBX + 0x1c);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x2d) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)((int)in_EAX + 0x18) + 8) = *(int *)((int)in_EAX + 0x18);
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0x2d);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x2d);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)((int)in_EAX + 0x18) + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x2d);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x2d);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)((int)in_EAX + 0x18) + 8) = iVar2;
  return;
}



/* ---- FUN_10008680 @ 10008680 size=655 ---- */

undefined4 * __thiscall
FUN_10008680(void *this,undefined4 *param_1,undefined4 *param_2,char param_3,void *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  exception local_34 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000dcc2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < (uint)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"map/set<T> too long");
    local_4 = 0;
    std::exception::exception(local_34);
    local_4._0_1_ = 1;
                    /* inlined constructor or destructor (approx location) for std::logic_error */
    local_34[0] = (exception)&std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_28,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_4 = (uint)local_4._1_3_ << 8;
                    /* inlined constructor or destructor (approx location) for std::length_error */
    local_34[0] = (exception)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_1000fe80);
  }
  piVar3 = FUN_10008e50(param_4,param_1[6],this,param_1[6],0);
  param_1[7] = param_1[7] + 1;
  if (this == (void *)param_1[6]) {
    *(int **)((int)param_1[6] + 4) = piVar3;
    *(int **)param_1[6] = piVar3;
    iVar4 = param_1[6];
  }
  else {
    if (param_3 != '\0') {
      *(int **)this = piVar3;
      if (this == *(void **)param_1[6]) {
        *(int **)param_1[6] = piVar3;
      }
      goto LAB_10008761;
    }
    *(int **)((int)this + 8) = piVar3;
    iVar4 = param_1[6];
    if (this != *(void **)(iVar4 + 8)) goto LAB_10008761;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_10008761:
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(param_1[6] + 4) + 0x2c) = 1;
      param_2[1] = piVar3;
      *param_2 = *param_1;
      ExceptionList = local_c;
      return param_2;
    }
    piVar5 = piVar6 + 1;
    piVar7 = (int *)*piVar5;
    piVar2 = (int *)piVar7[1];
    if (piVar7 == (int *)*piVar2) {
      iVar4 = piVar2[2];
      if (*(char *)(iVar4 + 0x2c) != '\0') {
        if (piVar6 == (int *)piVar7[2]) {
          piVar6 = (int *)piVar7[2];
          piVar7[2] = *piVar6;
          if (*(char *)(*piVar6 + 0x2d) == '\0') {
            *(int **)(*piVar6 + 4) = piVar7;
          }
          piVar5 = piVar7 + 1;
          piVar6[1] = piVar7[1];
          if (piVar7 == *(int **)(param_1[6] + 4)) {
            *(int **)(param_1[6] + 4) = piVar6;
          }
          else {
            piVar2 = (int *)*piVar5;
            if (piVar7 == (int *)*piVar2) {
              *piVar2 = (int)piVar6;
            }
            else {
              piVar2[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar7;
          *piVar5 = (int)piVar6;
          piVar6 = piVar7;
        }
        *(undefined1 *)(*piVar5 + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
        piVar5 = *(int **)(*piVar5 + 4);
        piVar7 = (int *)*piVar5;
        *piVar5 = piVar7[2];
        if (*(char *)(piVar7[2] + 0x2d) == '\0') {
          *(int **)(piVar7[2] + 4) = piVar5;
        }
        piVar7[1] = piVar5[1];
        if (piVar5 == *(int **)(param_1[6] + 4)) {
          *(int **)(param_1[6] + 4) = piVar7;
          piVar7[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar7;
            piVar7[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar7;
            piVar7[2] = (int)piVar5;
          }
        }
        goto LAB_100088cc;
      }
LAB_1000882a:
      *(undefined1 *)(piVar7 + 0xb) = 1;
      *(undefined1 *)(iVar4 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar6 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x2c) == '\0') goto LAB_1000882a;
      if (piVar6 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0x2d) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        piVar5 = piVar7 + 1;
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(param_1[6] + 4)) {
          *(int *)(param_1[6] + 4) = iVar4;
        }
        else {
          piVar6 = (int *)*piVar5;
          if (piVar7 == (int *)piVar6[2]) {
            piVar6[2] = iVar4;
          }
          else {
            *piVar6 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        *piVar5 = iVar4;
        piVar6 = piVar7;
      }
      *(undefined1 *)(*piVar5 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar5 = *(int **)(*piVar5 + 4);
      piVar7 = (int *)piVar5[2];
      piVar5[2] = *piVar7;
      if (*(char *)(*piVar7 + 0x2d) == '\0') {
        *(int **)(*piVar7 + 4) = piVar5;
      }
      piVar7[1] = piVar5[1];
      if (piVar5 == *(int **)(param_1[6] + 4)) {
        *(int **)(param_1[6] + 4) = piVar7;
      }
      else {
        piVar2 = (int *)piVar5[1];
        if (piVar5 == (int *)*piVar2) {
          *piVar2 = (int)piVar7;
        }
        else {
          piVar2[2] = (int)piVar7;
        }
      }
      *piVar7 = (int)piVar5;
LAB_100088cc:
      piVar5[1] = (int)piVar7;
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}



/* ---- FUN_10008910 @ 10008910 size=76 ---- */

void __thiscall FUN_10008910(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)this + 8);
  *(int *)((int)this + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
    *(void **)(*piVar1 + 4) = this;
  }
  piVar1[1] = *(int *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 0x18) + 4)) {
    *(int **)(*(int *)(param_1 + 0x18) + 4) = piVar1;
    *piVar1 = (int)this;
    *(int **)((int)this + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)((int)this + 4);
  if (this == (void *)*piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = (int)this;
    *(int **)((int)this + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)this;
  *(int **)((int)this + 4) = piVar1;
  return;
}



/* ---- FUN_10008960 @ 10008960 size=327 ---- */

int * FUN_10008960(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *in_EAX;
  undefined4 local_8 [2];
  
  piVar2 = *(int **)in_EAX[6];
  if ((param_2 == 0) || (param_2 != *in_EAX)) {
    _invalid_parameter_noinfo();
  }
  if (param_3 == piVar2) {
    piVar2 = (int *)in_EAX[6];
    if ((param_4 == 0) || (param_4 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    if (param_5 == piVar2) {
      FUN_10008ab0(*(int **)(in_EAX[6] + 4));
      *(int *)(in_EAX[6] + 4) = in_EAX[6];
      in_EAX[7] = 0;
      *(int *)in_EAX[6] = in_EAX[6];
      *(int *)(in_EAX[6] + 8) = in_EAX[6];
      iVar3 = *(int *)in_EAX[6];
      *param_1 = *in_EAX;
      param_1[1] = iVar3;
      return param_1;
    }
  }
  while( true ) {
    piVar2 = param_3;
    if ((param_2 == 0) || (param_2 != param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3 == param_5) break;
    if (param_2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)param_3 + 0x2d) == '\0') {
      piVar4 = (int *)param_3[2];
      if (*(char *)((int)piVar4 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        param_3 = piVar4;
        piVar4 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x2d);
          param_3 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x2d);
        piVar5 = (int *)param_3[1];
        piVar4 = param_3;
        while ((param_3 = piVar5, cVar1 == '\0' && (piVar4 == (int *)param_3[2]))) {
          cVar1 = *(char *)(param_3[1] + 0x2d);
          piVar5 = (int *)param_3[1];
          piVar4 = param_3;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
    FUN_10008140(in_EAX,local_8,param_2,piVar2);
  }
  *param_1 = *in_EAX;
  param_1[1] = (int)param_3;
  return param_1;
}



/* ---- FUN_10008ab0 @ 10008ab0 size=62 ---- */

void FUN_10008ab0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x2d);
  while (cVar1 == '\0') {
    FUN_10008ab0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 3));
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}



/* ---- FUN_10008af0 @ 10008af0 size=80 ---- */

void __thiscall FUN_10008af0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = this;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 0x18) + 4)) {
    *(int *)(*(int *)(param_1 + 0x18) + 4) = iVar1;
    *(void **)(iVar1 + 8) = this;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  piVar2 = *(int **)((int)this + 4);
  if (this == (void *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(void **)(iVar1 + 8) = this;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(void **)(iVar1 + 8) = this;
  *(int *)((int)this + 4) = iVar1;
  return;
}



/* ---- FUN_10008b40 @ 10008b40 size=56 ---- */

void FUN_10008b40(void)

{
  int *unaff_ESI;
  int local_10 [3];
  
  FUN_10008960(local_10,*unaff_ESI,*(int **)unaff_ESI[6],*unaff_ESI,(int *)unaff_ESI[6]);
  operator_delete((void *)unaff_ESI[6]);
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  return;
}



/* ---- FUN_10008b80 @ 10008b80 size=124 ---- */

undefined4 * FUN_10008b80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000dc88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  local_4 = 0;
  iVar2 = FUN_10008f40();
  param_1[6] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(undefined4 *)(param_1[6] + 4) = param_1[6];
  *(undefined4 *)param_1[6] = param_1[6];
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10008c00 @ 10008c00 size=28 ---- */

void FUN_10008c00(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  return;
}



/* ---- FUN_10008c20 @ 10008c20 size=25 ---- */

logic_error * __thiscall FUN_10008c20(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
  return param_1;
}



/* ---- FUN_10008c40 @ 10008c40 size=121 ---- */

void FUN_10008c40(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4)

{
  void *_Dst;
  rsize_t _DstSize;
  int *unaff_EBX;
  int *unaff_ESI;
  
  *unaff_EBX = 0;
  if (((unaff_ESI == (int *)0x0) || (param_2 < (uint)unaff_ESI[3])) ||
     ((uint)unaff_ESI[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  *unaff_EBX = *unaff_ESI;
  unaff_EBX[1] = param_2;
  if ((param_4 < (void *)unaff_ESI[3]) || ((void *)unaff_ESI[4] < param_4)) {
    _invalid_parameter_noinfo();
  }
  if ((*unaff_EBX == 0) || (*unaff_EBX != *unaff_ESI)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)unaff_EBX[1];
  if (_Dst != param_4) {
    _DstSize = unaff_ESI[4] - (int)param_4;
    if (0 < (int)_DstSize) {
      memmove_s(_Dst,_DstSize,param_4,_DstSize);
    }
    unaff_ESI[4] = _DstSize + (int)_Dst;
  }
  return;
}



/* ---- FUN_10008cc0 @ 10008cc0 size=130 ---- */

void FUN_10008cc0(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c [28];
  exception local_40 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dc62;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_5c,"vector<T> too long");
  local_c = 0;
  std::exception::exception(local_40);
  local_c._0_1_ = 1;
                    /* inlined constructor or destructor (approx location) for std::logic_error */
  local_40[0] = (exception)&std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_5c);
  local_c = (uint)local_c._1_3_ << 8;
                    /* inlined constructor or destructor (approx location) for std::length_error */
  local_40[0] = (exception)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_40,(ThrowInfo *)&DAT_1000fe80);
}



/* ---- bad_alloc_Constructor_or_Destructor @ 10008d50 size=79 ---- */

void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1)

{
  char *local_10;
  exception local_c [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((int)(0xffffffff / (ulonglong)param_1) == 0) {
    local_10 = (char *)0x0;
    std::exception::exception(local_c,&local_10);
    local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000feb8);
  }
  operator_new(param_1);
  return;
}



/* ---- FUN_10008da0 @ 10008da0 size=154 ---- */

undefined4 * __thiscall FUN_10008da0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000dc30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(undefined4 **)((int)this + 0x18);
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    puVar1 = FUN_10008e50(param_1 + 3,local_18,param_2,local_18,*(undefined1 *)(param_1 + 0xb));
    if (*(char *)((int)local_18 + 0x2d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_10008da0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_10008da0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



/* ---- Catch_All@10008e3a @ 10008e3a size=21 ---- */

void Catch_All_10008e3a(void)

{
  int unaff_EBP;
  
  FUN_10008ab0(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_10008e50 @ 10008e50 size=138 ---- */

undefined4 * __thiscall
FUN_10008e50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000db15;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    puVar1[2] = param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 3),this)
    ;
    puVar1[10] = *(undefined4 *)((int)this + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = param_4;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@10008eda @ 10008eda size=21 ---- */

void Catch_All_10008eda(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_10008ef0 @ 10008ef0 size=70 ---- */

undefined4 * FUN_10008ef0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  bool bVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(in_EAX + 0x18);
  puVar3 = (undefined4 *)puVar2[1];
  if (*(char *)((int)puVar3 + 0x2d) == '\0') {
    do {
      bVar1 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (puVar3 + 3),param_1);
      if (bVar1) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar2 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x2d) == '\0');
  }
  return puVar2;
}



/* ---- FUN_10008f40 @ 10008f40 size=55 ---- */

void FUN_10008f40(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  return;
}



/* ---- FUN_10008f80 @ 10008f80 size=124 ---- */

void FUN_10008f80(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  exception local_34 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000dc12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"vector<T> too long");
  local_4 = 0;
  std::exception::exception(local_34);
  local_4._0_1_ = 1;
                    /* inlined constructor or destructor (approx location) for std::logic_error */
  local_34[0] = (exception)&std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_28,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_50);
  local_4 = (uint)local_4._1_3_ << 8;
                    /* inlined constructor or destructor (approx location) for std::length_error */
  local_34[0] = (exception)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_1000fe80);
}



/* ---- bad_alloc_Constructor_or_Destructor @ 10009000 size=86 ---- */

void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1)

{
  char *local_10;
  exception local_c [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    local_10 = (char *)0x0;
    std::exception::exception(local_c,&local_10);
    local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000feb8);
  }
  operator_new(param_1 * 4);
  return;
}



/* ---- FUN_10009060 @ 10009060 size=99 ---- */

void FUN_10009060(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    _invalid_parameter_noinfo();
  }
  iVar2 = unaff_ESI[1];
  if (*(char *)(iVar2 + 0x2d) != '\0') {
    _invalid_parameter_noinfo();
    return;
  }
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0x2d) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x2d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x2d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    unaff_ESI[1] = (int)piVar3;
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while ((cVar1 == '\0' && (unaff_ESI[1] == *(int *)(iVar2 + 8)))) {
    unaff_ESI[1] = iVar2;
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  unaff_ESI[1] = iVar2;
  return;
}



/* ---- FUN_100090d0 @ 100090d0 size=125 ---- */

void FUN_100090d0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    _invalid_parameter_noinfo();
  }
  piVar2 = (int *)unaff_ESI[1];
  if (*(char *)((int)piVar2 + 0x2d) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x2d);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      unaff_ESI[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x2d);
    while ((cVar1 == '\0' && (unaff_ESI[1] == *piVar2))) {
      unaff_ESI[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x2d);
    }
    if (*(char *)(unaff_ESI[1] + 0x2d) == '\0') {
      unaff_ESI[1] = (int)piVar2;
      return;
    }
  }
  else {
    iVar3 = piVar2[2];
    unaff_ESI[1] = iVar3;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      return;
    }
  }
  _invalid_parameter_noinfo();
  return;
}



/* ---- FUN_10009160 @ 10009160 size=116 ---- */

void __cdecl FUN_10009160(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  undefined4 in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1000daf2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (unaff_ESI,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_1);
  *(undefined4 *)(unaff_ESI + 0x1c) = in_stack_00000020;
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_100091e0 @ 100091e0 size=25 ---- */

int __fastcall FUN_100091e0(void *param_1,void *param_2)

{
  int in_EAX;
  rsize_t _DstSize;
  
  _DstSize = in_EAX - (int)param_2;
  if (_DstSize != 0) {
    memmove_s(param_1,_DstSize,param_2,_DstSize);
  }
  return _DstSize + (int)param_1;
}



/* ---- FUN_10009200 @ 10009200 size=26 ---- */

exception * __thiscall FUN_10009200(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *param_1 = (exception)&std::bad_alloc::vftable;
  return param_1;
}



/* ---- CasualNetV2 @ 10009220 size=130 ---- */

/* public: __thiscall CasualNetV2::CasualNetV2(class CasualNetV2 const &) */

CasualNetV2 * __thiscall CasualNetV2::CasualNetV2(CasualNetV2 *this,CasualNetV2 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9220  3  ??0CasualNetV2@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e185;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CasualNet::CasualNet((CasualNet *)this,(CasualNet *)param_1);
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  FUN_100084d0((undefined4 *)&this[0x41].SockNet_data.field_0x68);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100084d0((undefined4 *)&this[0x41].SockNet_data.field_0x88);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 100092b0 size=129 ---- */

/* public: class CasualNetV2 & __thiscall CasualNetV2::operator=(class CasualNetV2 const &) */

CasualNetV2 * __thiscall CasualNetV2::operator=(CasualNetV2 *this,CasualNetV2 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int local_10 [3];
  
                    /* 0x92b0  25  ??4CasualNetV2@@QAEAAV0@ABV0@@Z */
  CasualNet::operator=((CasualNet *)this,(CasualNet *)param_1);
  puVar1 = &this[0x41].SockNet_data.field_0x68;
  if ((CasualNetV2 *)puVar1 != param_1 + 0x53b4) {
    piVar2 = *(int **)&this[0x41].SockNet_data.field_0x80;
    iVar3 = *(int *)puVar1;
    FUN_10008960(local_10,iVar3,(int *)*piVar2,iVar3,piVar2);
    FUN_10008610();
  }
  puVar1 = &this[0x41].SockNet_data.field_0x88;
  if ((CasualNetV2 *)puVar1 != param_1 + 0x53d4) {
    piVar2 = *(int **)&this[0x41].SockNet_data.field_0xa0;
    iVar3 = *(int *)puVar1;
    FUN_10008960(local_10,iVar3,(int *)*piVar2,iVar3,piVar2);
    FUN_10008610();
  }
  return (CasualNetV2 *)this;
}



/* ---- scalar_deleting_destructor @ 10009340 size=85 ---- */

CasualNetV2 * __thiscall CasualNetV2::scalar_deleting_destructor(CasualNetV2 *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CasualNetV2(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CasualNetV2 *)this;
  }
  puVar1 = &this[-1].SockNet_data.field_0x140;
  _eh_vector_destructor_iterator_
            (this,0x53f4,*(int *)&this[-1].SockNet_data.field_0x140,~CasualNetV2);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CasualNetV2 *)puVar1;
}



/* ---- CasualNetV2 @ 100093a0 size=107 ---- */

/* public: __thiscall CasualNetV2::CasualNetV2(void) */

CasualNetV2 * __thiscall CasualNetV2::CasualNetV2(CasualNetV2 *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x93a0  4  ??0CasualNetV2@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e155;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CasualNet::CasualNet((CasualNet *)this);
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  FUN_10008b80((undefined4 *)&this[0x41].SockNet_data.field_0x68);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10008b80((undefined4 *)&this[0x41].SockNet_data.field_0x88);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CasualNetV2 @ 10009410 size=115 ---- */

/* public: virtual __thiscall CasualNetV2::~CasualNetV2(void) */

void __thiscall CasualNetV2::~CasualNetV2(CasualNetV2 *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x9410  17  ??1CasualNetV2@@UAE@XZ */
  puStack_8 = &LAB_1000e155;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 1;
  FUN_100080e0((undefined4 *)&this[0x41].SockNet_data.field_0x88);
  local_4 = local_4 & 0xffffff00;
  FUN_100080e0((undefined4 *)&this[0x41].SockNet_data.field_0x68);
  local_4 = 0xffffffff;
  CasualNet::~CasualNet((CasualNet *)this);
  ExceptionList = local_c;
  return;
}



/* ---- CasualNetV2::Destroy @ 10009490 size=48 ---- */

/* public: virtual void __thiscall CasualNetV2::Destroy(void) */

void __thiscall CasualNetV2::CasualNetV2__Destroy(CasualNetV2 *this)

{
                    /* 0x9490  54  ?Destroy@CasualNetV2@@UAEXXZ */
  ClearBuddyOnOffList(this);
  *(undefined4 *)&this[0x40].SockNet_data.field_0x98 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x4 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x8 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0x10 = 0;
  *(undefined4 *)&this[0xe].SockNet_data.field_0xc = 0;
  CasualNet::ResetData((CasualNet *)this);
  return;
}



/* ---- FindBuddyOn_Nick @ 100094c0 size=243 ---- */

/* public: struct CC_BUDDY * __thiscall CasualNetV2::FindBuddyOn_Nick(char const *) */

CC_BUDDY * __thiscall CasualNetV2::FindBuddyOn_Nick(CasualNetV2 *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
                    /* 0x94c0  65  ?FindBuddyOn_Nick@CasualNetV2@@QAEPAUCC_BUDDY@@PBD@Z */
  piVar2 = *(int **)&this[0x41].SockNet_data.field_0x68;
  piVar6 = (int *)**(undefined4 **)&this[0x41].SockNet_data.field_0x80;
  while( true ) {
    piVar3 = *(int **)&this[0x41].SockNet_data.field_0x80;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0x41].SockNet_data.field_0x68)) {
      _invalid_parameter_noinfo();
    }
    if (piVar6 == piVar3) {
      return (CC_BUDDY *)0x0;
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (piVar6 == *(int **)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = _mbscmp((uchar *)(piVar6[10] + 0x15),(uchar *)param_1);
    if (iVar5 == 0) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      piVar3 = (int *)piVar6[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar6 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0x2d);
        piVar4 = (int *)piVar6[1];
        piVar3 = piVar6;
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x2d);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if (piVar6 == *(int **)(iVar5 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  return (CC_BUDDY *)piVar6[10];
}



/* ---- FindBuddyOff_Nick @ 100095c0 size=243 ---- */

/* public: struct CC_BUDDY * __thiscall CasualNetV2::FindBuddyOff_Nick(char const *) */

CC_BUDDY * __thiscall CasualNetV2::FindBuddyOff_Nick(CasualNetV2 *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
                    /* 0x95c0  63  ?FindBuddyOff_Nick@CasualNetV2@@QAEPAUCC_BUDDY@@PBD@Z */
  piVar2 = *(int **)&this[0x41].SockNet_data.field_0x88;
  piVar6 = (int *)**(undefined4 **)&this[0x41].SockNet_data.field_0xa0;
  while( true ) {
    piVar3 = *(int **)&this[0x41].SockNet_data.field_0xa0;
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)&this[0x41].SockNet_data.field_0x88)) {
      _invalid_parameter_noinfo();
    }
    if (piVar6 == piVar3) {
      return (CC_BUDDY *)0x0;
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (piVar6 == *(int **)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = _mbscmp((uchar *)(piVar6[10] + 0x15),(uchar *)param_1);
    if (iVar5 == 0) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      piVar3 = (int *)piVar6[2];
      if (*(char *)((int)piVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x2d);
        piVar6 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0x2d);
        piVar4 = (int *)piVar6[1];
        piVar3 = piVar6;
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x2d);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if (piVar6 == *(int **)(iVar5 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  return (CC_BUDDY *)piVar6[10];
}



/* ---- FindBuddyOn_Key @ 100096c0 size=212 ---- */

/* public: struct CC_BUDDY * __thiscall CasualNetV2::FindBuddyOn_Key(char const *) */

CC_BUDDY * __thiscall CasualNetV2::FindBuddyOn_Key(CasualNetV2 *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_3c;
  int local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x96c0  64  ?FindBuddyOn_Key@CasualNetV2@@QAEPAUCC_BUDDY@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  iVar2 = *(int *)&this[0x41].SockNet_data.field_0x80;
  piVar1 = *(int **)&this[0x41].SockNet_data.field_0x68;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (iVar2 == local_38) {
    ExceptionList = local_14;
    return (CC_BUDDY *)0x0;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *local_3c;
  }
  if (local_38 == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  ExceptionList = local_14;
  return *(CC_BUDDY **)(local_38 + 0x28);
}



/* ---- FindBuddyOff_Key @ 100097a0 size=212 ---- */

/* public: struct CC_BUDDY * __thiscall CasualNetV2::FindBuddyOff_Key(char const *) */

CC_BUDDY * __thiscall CasualNetV2::FindBuddyOff_Key(CasualNetV2 *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_3c;
  int local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x97a0  62  ?FindBuddyOff_Key@CasualNetV2@@QAEPAUCC_BUDDY@@PBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
  local_c = 0;
  FUN_10008450((int *)&local_3c,local_34);
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  iVar2 = *(int *)&this[0x41].SockNet_data.field_0xa0;
  piVar1 = *(int **)&this[0x41].SockNet_data.field_0x88;
  if ((piVar1 == (int *)0x0) || (piVar1 != local_3c)) {
    _invalid_parameter_noinfo();
  }
  if (iVar2 == local_38) {
    ExceptionList = local_14;
    return (CC_BUDDY *)0x0;
  }
  if (local_3c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *local_3c;
  }
  if (local_38 == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  ExceptionList = local_14;
  return *(CC_BUDDY **)(local_38 + 0x28);
}



/* ---- ClearBuddyOnOffList @ 10009880 size=101 ---- */

/* protected: void __thiscall CasualNetV2::ClearBuddyOnOffList(void) */

void __thiscall CasualNetV2::ClearBuddyOnOffList(CasualNetV2 *this)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x9880  44  ?ClearBuddyOnOffList@CasualNetV2@@IAEXXZ */
  FUN_10008ab0(*(int **)(*(int *)&this[0x41].SockNet_data.field_0x80 + 4));
  iVar1 = *(int *)&this[0x41].SockNet_data.field_0x80;
  *(int *)(iVar1 + 4) = iVar1;
  uVar2 = *(undefined4 *)&this[0x41].SockNet_data.field_0x80;
  *(undefined4 *)&this[0x41].SockNet_data.field_0x84 = 0;
  *(undefined4 *)uVar2 = uVar2;
  iVar1 = *(int *)&this[0x41].SockNet_data.field_0x80;
  *(int *)(iVar1 + 8) = iVar1;
  FUN_10008ab0(*(int **)(*(int *)&this[0x41].SockNet_data.field_0xa0 + 4));
  iVar1 = *(int *)&this[0x41].SockNet_data.field_0xa0;
  *(int *)(iVar1 + 4) = iVar1;
  uVar2 = *(undefined4 *)&this[0x41].SockNet_data.field_0xa0;
  *(undefined4 *)&this[0x41].SockNet_data.field_0xa4 = 0;
  *(undefined4 *)uVar2 = uVar2;
  iVar1 = *(int *)&this[0x41].SockNet_data.field_0xa0;
  *(int *)(iVar1 + 8) = iVar1;
  return;
}



/* ---- AddBuddyToOnOffList @ 100098f0 size=52 ---- */

/* protected: bool __thiscall CasualNetV2::AddBuddyToOnOffList(struct CC_BUDDY *) */

bool __thiscall CasualNetV2::AddBuddyToOnOffList(CasualNetV2 *this,CC_BUDDY *param_1)

{
  bool bVar1;
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
  *pmVar2;
  
                    /* 0x98f0  39  ?AddBuddyToOnOffList@CasualNetV2@@IAE_NPAUCC_BUDDY@@@Z */
  if (param_1 == (CC_BUDDY *)0x0) {
    return false;
  }
  pmVar2 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
            *)&this[0x41].SockNet_data.field_0x68;
  if (param_1[0x48] != (CC_BUDDY)0x31) {
    pmVar2 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x88;
  }
  bVar1 = AddBuddyToAnyList(this,param_1,pmVar2);
  return bVar1;
}



/* ---- ReplaceBuddyInOnOffList @ 10009930 size=521 ---- */

/* protected: bool __thiscall CasualNetV2::ReplaceBuddyInOnOffList(struct CC_BUDDY *) */

bool __thiscall CasualNetV2::ReplaceBuddyInOnOffList(CasualNetV2 *this,CC_BUDDY *param_1)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
  *pmVar2;
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
  *pmVar3;
  int *local_60;
  int local_5c;
  int local_54;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x9930  186  ?ReplaceBuddyInOnOffList@CasualNetV2@@IAE_NPAUCC_BUDDY@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000ddf4;
  local_14 = ExceptionList;
  if (param_1 == (CC_BUDDY *)0x0) {
    return false;
  }
  ExceptionList = &local_14;
  if (param_1[0x48] == (CC_BUDDY)0x31) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,(char *)param_1);
    pmVar2 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x68;
    local_c = 0;
    FUN_10008450((int *)&local_60,local_50);
    local_c = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50);
    iVar1 = *(int *)&this[0x41].SockNet_data.field_0x80;
    if ((*(int **)pmVar2 == (int *)0x0) || (*(int **)pmVar2 != local_60)) {
      _invalid_parameter_noinfo();
    }
    if (iVar1 != local_5c) {
LAB_10009a73:
      if (local_60 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar1 = 0;
      }
      else {
        iVar1 = *local_60;
      }
      if (local_5c == *(int *)(iVar1 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      *(CC_BUDDY **)(local_5c + 0x28) = param_1;
      ExceptionList = local_14;
      return true;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,(char *)param_1);
    pmVar3 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x88;
    local_c = 1;
    FUN_10008450((int *)&local_60,local_50);
    this_00 = local_50;
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,(char *)param_1);
    pmVar2 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x88;
    local_c = 2;
    FUN_10008450((int *)&local_60,local_50);
    local_c = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50);
    iVar1 = *(int *)&this[0x41].SockNet_data.field_0xa0;
    if ((*(int **)pmVar2 == (int *)0x0) || (*(int **)pmVar2 != local_60)) {
      _invalid_parameter_noinfo();
    }
    if (iVar1 != local_5c) goto LAB_10009a73;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,(char *)param_1);
    pmVar3 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x68;
    local_c = 3;
    FUN_10008450((int *)&local_60,local_34);
    this_00 = local_34;
  }
  local_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this_00);
  local_54 = *(int *)(pmVar3 + 0x18);
  if ((*(int **)pmVar3 == (int *)0x0) || (*(int **)pmVar3 != local_60)) {
    _invalid_parameter_noinfo();
  }
  if (local_54 != local_5c) {
    iVar1 = FUN_10008580();
    RemoveBuddyFromAnyList(this,*(char **)(iVar1 + 0x1c),pmVar3);
    AddBuddyToAnyList(this,param_1,pmVar2);
  }
  ExceptionList = local_14;
  return true;
}



/* ---- AddBuddyToAnyList @ 10009b40 size=220 ---- */

/* protected: bool __thiscall CasualNetV2::AddBuddyToAnyList(struct CC_BUDDY *,class std::map<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct CC_BUDDY
   *,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > >,class std::allocator<struct std::pair<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,struct
   CC_BUDDY *> > > *) */

bool __thiscall
CasualNetV2::AddBuddyToAnyList
          (CasualNetV2 *this,CC_BUDDY *param_1,
          map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
          *param_2)

{
  CC_BUDDY *pCVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffff64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_99 [21];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [28];
  undefined4 local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x9b40  38
                       ?AddBuddyToAnyList@CasualNetV2@@IAE_NPAUCC_BUDDY@@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCC_BUDDY@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCC_BUDDY@@@std@@@2@@std@@@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_2 !=
      (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
       *)0x0) {
    pCVar1 = FindBuddyInAnyList(this,(char *)param_1,param_2);
    if (pCVar1 == (CC_BUDDY *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_99 + -3,(char *)param_1);
      pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_10009160(in_stack_ffffff64);
      local_c = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58,pbVar2);
      local_3c = *(undefined4 *)(pbVar2 + 0x1c);
      local_c._0_1_ = 1;
      FUN_10007fd0(local_58);
      local_c = (uint)local_c._1_3_ << 8;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_58);
      local_c = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
      ExceptionList = local_14;
      return true;
    }
  }
  ExceptionList = local_14;
  return false;
}



/* ---- RemoveBuddyFromAnyList @ 10009c20 size=196 ---- */

/* protected: bool __thiscall CasualNetV2::RemoveBuddyFromAnyList(char const *,class std::map<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct CC_BUDDY
   *,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > >,class std::allocator<struct std::pair<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,struct
   CC_BUDDY *> > > *) */

bool __thiscall
CasualNetV2::RemoveBuddyFromAnyList
          (CasualNetV2 *this,char *param_1,
          map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
          *param_2)

{
  int *piVar1;
  int local_3c;
  int *local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x9c20  182
                       ?RemoveBuddyFromAnyList@CasualNetV2@@IAE_NPBDPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCC_BUDDY@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCC_BUDDY@@@std@@@2@@std@@@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_2 !=
      (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
       *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
    local_c = 0;
    FUN_10008450(&local_3c,local_34);
    local_c = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
    piVar1 = *(int **)(param_2 + 0x18);
    if ((*(int *)param_2 == 0) || (*(int *)param_2 != local_3c)) {
      _invalid_parameter_noinfo();
    }
    if (piVar1 != local_38) {
      FUN_10008140((undefined4 *)param_2,&local_3c,local_3c,local_38);
      ExceptionList = local_14;
      return true;
    }
  }
  ExceptionList = local_14;
  return false;
}



/* ---- FindBuddyInAnyList @ 10009cf0 size=211 ---- */

/* protected: struct CC_BUDDY * __thiscall CasualNetV2::FindBuddyInAnyList(char const *,class
   std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,struct CC_BUDDY *,struct std::less<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,struct
   CC_BUDDY *> > > *) */

CC_BUDDY * __thiscall
CasualNetV2::FindBuddyInAnyList
          (CasualNetV2 *this,char *param_1,
          map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
          *param_2)

{
  int iVar1;
  int *local_3c;
  int local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x9cf0  61
                       ?FindBuddyInAnyList@CasualNetV2@@IAEPAUCC_BUDDY@@PBDPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCC_BUDDY@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCC_BUDDY@@@std@@@2@@std@@@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dd49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_2 !=
      (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
       *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
    local_c = 0;
    FUN_10008450((int *)&local_3c,local_34);
    local_c = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
    iVar1 = *(int *)(param_2 + 0x18);
    if ((*(int **)param_2 == (int *)0x0) || (*(int **)param_2 != local_3c)) {
      _invalid_parameter_noinfo();
    }
    if (iVar1 != local_38) {
      if (local_3c == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar1 = 0;
      }
      else {
        iVar1 = *local_3c;
      }
      if (local_38 == *(int *)(iVar1 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      ExceptionList = local_14;
      return *(CC_BUDDY **)(local_38 + 0x28);
    }
  }
  ExceptionList = local_14;
  return (CC_BUDDY *)0x0;
}



/* ---- CasualNetV2::OnDisconnect @ 10009dd0 size=24 ---- */

/* public: virtual void __thiscall CasualNetV2::OnDisconnect(enum CC_STATE,char) */

void __thiscall
CasualNetV2::CasualNetV2__OnDisconnect(CasualNetV2 *this,CC_STATE param_1,char param_2)

{
                    /* 0x9dd0  160  ?OnDisconnect@CasualNetV2@@UAEXW4CC_STATE@@D@Z */
  if ((*(int *)&this[0x40].SockNet_data.field_0x98 != 5) || (param_2 != '0')) {
    ClearBuddyOnOffList(this);
  }
  return;
}



/* ---- CasualNetV2::OnWebLoginAck @ 10009df0 size=176 ---- */

/* public: virtual void __thiscall CasualNetV2::OnWebLoginAck(char) */

void __thiscall CasualNetV2::CasualNetV2__OnWebLoginAck(CasualNetV2 *this,char param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  CC_BUDDY *pCVar4;
  int iVar5;
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
  *pmVar6;
  
                    /* 0x9df0  175  ?OnWebLoginAck@CasualNetV2@@UAEXD@Z */
  if (param_1 == '0') {
    iVar1 = **(int **)&this[0xd].SockNet_data.field_0xb8;
    piVar2 = *(int **)&this[0xd].SockNet_data.field_0xa0;
    while( true ) {
      piVar3 = *(int **)&this[0xd].SockNet_data.field_0xa0;
      iVar5 = *(int *)&this[0xd].SockNet_data.field_0xb8;
      if ((piVar3 == (int *)0x0) || (piVar3 != piVar2)) {
        _invalid_parameter_noinfo();
      }
      if (iVar5 == iVar1) break;
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
      if (iVar1 == *(int *)(iVar5 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      pCVar4 = *(CC_BUDDY **)(iVar1 + 0x28);
      if (pCVar4 != (CC_BUDDY *)0x0) {
        if (pCVar4[0x48] == (CC_BUDDY)0x31) {
          pmVar6 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
                    *)&this[0x41].SockNet_data.field_0x68;
        }
        else {
          pmVar6 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
                    *)&this[0x41].SockNet_data.field_0x88;
        }
        AddBuddyToAnyList(this,pCVar4,pmVar6);
      }
      FUN_10009060();
    }
  }
  return;
}



/* ---- CasualNetV2::OnAddBuddyAck @ 10009ea0 size=55 ---- */

/* public: virtual void __thiscall CasualNetV2::OnAddBuddyAck(struct CC_BUDDY *,char) */

void __thiscall
CasualNetV2::CasualNetV2__OnAddBuddyAck(CasualNetV2 *this,CC_BUDDY *param_1,char param_2)

{
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
  *pmVar1;
  
                    /* 0x9ea0  120  ?OnAddBuddyAck@CasualNetV2@@UAEXPAUCC_BUDDY@@D@Z */
  if (((param_2 == '0') || (param_2 == '4')) && (param_1 != (CC_BUDDY *)0x0)) {
    pmVar1 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x68;
    if (param_1[0x48] != (CC_BUDDY)0x31) {
      pmVar1 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
                *)&this[0x41].SockNet_data.field_0x88;
    }
    AddBuddyToAnyList(this,param_1,pmVar1);
  }
  return;
}



/* ---- CasualNetV2::OnDeleteBuddyAck @ 10009ee0 size=75 ---- */

/* public: virtual void __thiscall CasualNetV2::OnDeleteBuddyAck(struct CC_BUDDY *,char) */

void __thiscall
CasualNetV2::CasualNetV2__OnDeleteBuddyAck(CasualNetV2 *this,CC_BUDDY *param_1,char param_2)

{
  CC_BUDDY *pCVar1;
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
  *pmVar2;
  
                    /* 0x9ee0  156  ?OnDeleteBuddyAck@CasualNetV2@@UAEXPAUCC_BUDDY@@D@Z */
  if (param_2 == '0') {
    pmVar2 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x68;
    pCVar1 = FindBuddyInAnyList(this,(char *)param_1,pmVar2);
    if (pCVar1 == (CC_BUDDY *)0x0) {
      pmVar2 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
                *)&this[0x41].SockNet_data.field_0x88;
      pCVar1 = FindBuddyInAnyList(this,(char *)param_1,pmVar2);
      if (pCVar1 == (CC_BUDDY *)0x0) {
        return;
      }
    }
    RemoveBuddyFromAnyList(this,(char *)param_1,pmVar2);
  }
  return;
}



/* ---- CasualNetV2::OnAcceptBuddyAck @ 10009f30 size=50 ---- */

/* public: virtual void __thiscall CasualNetV2::OnAcceptBuddyAck(struct CC_BUDDY *,char) */

void __thiscall
CasualNetV2::CasualNetV2__OnAcceptBuddyAck(CasualNetV2 *this,CC_BUDDY *param_1,char param_2)

{
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
  *pmVar1;
  
                    /* 0x9f30  115  ?OnAcceptBuddyAck@CasualNetV2@@UAEXPAUCC_BUDDY@@D@Z */
  if ((param_2 == '0') && (param_1 != (CC_BUDDY *)0x0)) {
    pmVar1 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
              *)&this[0x41].SockNet_data.field_0x68;
    if (param_1[0x48] != (CC_BUDDY)0x31) {
      pmVar1 = (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>
                *)&this[0x41].SockNet_data.field_0x88;
    }
    AddBuddyToAnyList(this,param_1,pmVar1);
  }
  return;
}



/* ---- CasualNetV2::OnAddBuddyAccepted @ 10009f70 size=20 ---- */

/* public: virtual void __thiscall CasualNetV2::OnAddBuddyAccepted(struct CC_BUDDY *,char) */

void __thiscall
CasualNetV2::CasualNetV2__OnAddBuddyAccepted(CasualNetV2 *this,CC_BUDDY *param_1,char param_2)

{
                    /* 0x9f70  118  ?OnAddBuddyAccepted@CasualNetV2@@UAEXPAUCC_BUDDY@@D@Z
                       0x9f70  144  ?OnChangeBuddyStatus@CasualNetV2@@UAEXPAUCC_BUDDY@@D@Z */
  if (param_2 == '0') {
    ReplaceBuddyInOnOffList(this,param_1);
  }
  return;
}



/* ---- FUN_10009f90 @ 10009f90 size=62 ---- */

void FUN_10009f90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  
  puVar1 = (undefined4 *)in_EAX[4];
  if (puVar1 < (undefined4 *)in_EAX[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = in_EAX[3];
  uVar3 = *in_EAX;
  if ((uint)in_EAX[4] < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_1000aba0(*in_EAX,uVar2,uVar3,puVar1);
  return;
}



/* ---- FUN_10009fd0 @ 10009fd0 size=90 ---- */

void FUN_10009fd0(undefined1 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *unaff_EDI;
  int local_10 [3];
  
  puVar1 = (undefined1 *)unaff_EDI[3];
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_EDI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_EDI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = param_1;
    unaff_EDI[4] = (int)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_1000ad00(local_10,&param_1,*unaff_EDI,puVar2);
  return;
}



/* ---- FUN_1000a030 @ 1000a030 size=174 ---- */

void FUN_1000a030(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *unaff_ESI;
  undefined1 local_11;
  int local_10 [3];
  
  puVar1 = (undefined1 *)unaff_ESI[3];
  local_11 = (undefined1)((uint)param_1 >> 8);
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_ESI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_ESI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = local_11;
    unaff_ESI[4] = (int)(puVar2 + 1);
  }
  else {
    if (puVar2 < puVar1) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_10,&local_11,*unaff_ESI,puVar2);
  }
  puVar1 = (undefined1 *)unaff_ESI[3];
  local_11 = (undefined1)param_1;
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_ESI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_ESI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = (undefined1)param_1;
    unaff_ESI[4] = (int)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_1000ad00(local_10,&local_11,*unaff_ESI,puVar2);
  return;
}



/* ---- FUN_1000a0e0 @ 1000a0e0 size=326 ---- */

void FUN_1000a0e0(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *unaff_ESI;
  undefined1 local_11;
  int local_10 [3];
  
  puVar1 = (undefined1 *)unaff_ESI[3];
  local_11 = (undefined1)((uint)param_1 >> 0x18);
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_ESI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_ESI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = local_11;
    unaff_ESI[4] = (int)(puVar2 + 1);
  }
  else {
    if (puVar2 < puVar1) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_10,&local_11,*unaff_ESI,puVar2);
  }
  puVar1 = (undefined1 *)unaff_ESI[3];
  local_11 = (undefined1)((uint)param_1 >> 0x10);
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_ESI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_ESI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = local_11;
    unaff_ESI[4] = (int)(puVar2 + 1);
  }
  else {
    if (puVar2 < puVar1) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_10,&local_11,*unaff_ESI,puVar2);
  }
  puVar1 = (undefined1 *)unaff_ESI[3];
  local_11 = (undefined1)((uint)param_1 >> 8);
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_ESI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_ESI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = local_11;
    unaff_ESI[4] = (int)(puVar2 + 1);
  }
  else {
    if (puVar2 < puVar1) {
      _invalid_parameter_noinfo();
    }
    FUN_1000ad00(local_10,&local_11,*unaff_ESI,puVar2);
  }
  puVar1 = (undefined1 *)unaff_ESI[3];
  local_11 = (undefined1)param_1;
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_ESI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_ESI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = (undefined1)param_1;
    unaff_ESI[4] = (int)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_1000ad00(local_10,&local_11,*unaff_ESI,puVar2);
  return;
}



/* ---- FUN_1000a230 @ 1000a230 size=106 ---- */

void FUN_1000a230(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EDI;
  int local_10 [3];
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      puVar1 = (undefined1 *)unaff_EDI[3];
      if (puVar1 == (undefined1 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = unaff_EDI[5] - (int)puVar1;
      }
      puVar2 = (undefined1 *)unaff_EDI[4];
      if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
        *puVar2 = *(undefined1 *)(iVar4 + param_1);
        unaff_EDI[4] = (int)(puVar2 + 1);
      }
      else {
        if (puVar2 < puVar1) {
          _invalid_parameter_noinfo();
        }
        FUN_1000ad00(local_10,(undefined1 *)(iVar4 + param_1),*unaff_EDI,puVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return;
}



/* ---- FUN_1000a2a0 @ 1000a2a0 size=184 ---- */

void __thiscall FUN_1000a2a0(void *this,char *param_1)

{
  char cVar1;
  undefined1 in_AL;
  char *pcVar2;
  
  FUN_10009fd0(in_AL);
  if ((int)this < 0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    this = pcVar2 + -(int)(param_1 + 1);
  }
  pcVar2 = (char *)((int)this + 1);
  if ((int)pcVar2 < 0x100) {
    FUN_10009fd0(0x10);
    FUN_10009fd0((char)pcVar2);
    FUN_1000a230((int)param_1,(int)pcVar2);
    return;
  }
  if ((int)pcVar2 < 0x10000) {
    FUN_10009fd0(0x11);
    FUN_1000a030(pcVar2);
    FUN_1000a230((int)param_1,(int)pcVar2);
    return;
  }
  if (((int)pcVar2 >> 0x1f < 2) && ((int)pcVar2 >> 0x1f < 1)) {
    FUN_10009fd0(0x12);
    FUN_1000a0e0(pcVar2);
    FUN_1000a230((int)param_1,(int)pcVar2);
    return;
  }
  FUN_10009fd0(0x10);
  FUN_10009fd0(1);
  FUN_10009fd0(0);
  return;
}



/* ---- FUN_1000a360 @ 1000a360 size=110 ---- */

int __fastcall FUN_1000a360(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(*(undefined1 *)(param_1 + 1)) {
  case 1:
  case 4:
    return param_1 + 3;
  case 5:
    return param_1 + 4;
  case 6:
    return param_1 + 6;
  case 7:
    return param_1 + 10;
  case 8:
  case 0x10:
  case 0x20:
    return *(byte *)(param_1 + 2) + 3 + param_1;
  case 9:
  case 0x11:
  case 0x21:
    return CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)) + 4 + param_1;
  case 10:
  case 0x12:
  case 0x22:
    iVar1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                              *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5)) + 6 +
            param_1;
  }
  return iVar1;
}



/* ---- FUN_1000a420 @ 1000a420 size=79 ---- */

uint __fastcall FUN_1000a420(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 1)) {
    case 1:
    case 4:
      return (uint)*(byte *)(param_1 + 2);
    case 5:
      return (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
    case 6:
      uVar1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                                *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
    }
  }
  return uVar1;
}



/* ---- FUN_1000a490 @ 1000a490 size=99 ---- */

int __thiscall FUN_1000a490(void *this,byte *param_1,uint param_2)

{
  int in_EAX;
  
  if ((this == (void *)0x0) || (param_1 == (byte *)0x0)) {
    return 0;
  }
  FUN_10009f90();
  do {
    if (param_1 <= this) break;
    if ((*(byte *)this == param_2) || (param_2 == 0)) {
      FUN_1000aa10();
    }
    this = (void *)FUN_1000a360((int)this);
  } while (this != (byte *)0x0);
  return *(int *)(in_EAX + 0x10) - *(int *)(in_EAX + 0xc) >> 2;
}



/* ---- FUN_1000a500 @ 1000a500 size=109 ---- */

uint FUN_1000a500(uint param_1,uint param_2)

{
  uint in_EAX;
  int extraout_ECX;
  uint uVar1;
  
  do {
    do {
      if (param_2 < param_1) goto LAB_1000a55d;
      if (param_1 == param_2) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      param_1 = FUN_1000a360(param_1);
      in_EAX = 0;
      if (param_1 == 0) goto LAB_1000a55d;
      in_EAX = (uint)*(byte *)(extraout_ECX + 1);
    } while (2 < in_EAX - 0x20);
    uVar1 = 0;
    if (in_EAX == 0x20) {
      uVar1 = extraout_ECX + 3;
    }
    else if (in_EAX == 0x21) {
      uVar1 = extraout_ECX + 4;
    }
    else if (in_EAX == 0x22) {
      uVar1 = extraout_ECX + 6;
    }
    in_EAX = FUN_1000a500(uVar1,param_1);
  } while ((char)in_EAX != '\0');
LAB_1000a55d:
  return in_EAX & 0xffffff00;
}



/* ---- FUN_1000a570 @ 1000a570 size=88 ---- */

void FUN_1000a570(void)

{
  char cVar1;
  int iVar2;
  int *in_EAX;
  byte *pbVar3;
  byte *pbVar4;
  uint unaff_EBX;
  byte *pbVar5;
  
  iVar2 = *in_EAX;
  cVar1 = *(char *)(iVar2 + 1);
  pbVar5 = (byte *)0x0;
  if (cVar1 == ' ') {
    pbVar5 = (byte *)(iVar2 + 3);
  }
  else if (cVar1 == '!') {
    pbVar5 = (byte *)(iVar2 + 4);
  }
  else if (cVar1 == '\"') {
    pbVar5 = (byte *)(iVar2 + 6);
  }
  pbVar3 = (byte *)FUN_1000a360(iVar2);
  pbVar4 = pbVar3;
  if (pbVar5 != (byte *)0x0) {
    while ((pbVar4 != (byte *)0x0 && (pbVar5 < pbVar3))) {
      if (*pbVar5 == unaff_EBX) goto LAB_1000a5bf;
      pbVar5 = (byte *)FUN_1000a360((int)pbVar5);
      pbVar4 = pbVar5;
    }
  }
  pbVar5 = (byte *)0x0;
LAB_1000a5bf:
  FUN_1000a420((int)pbVar5);
  return;
}



/* ---- FUN_1000a5d0 @ 1000a5d0 size=132 ---- */

byte * FUN_1000a5d0(void)

{
  char cVar1;
  int iVar2;
  int *in_EAX;
  byte *pbVar3;
  byte *pbVar4;
  uint unaff_EBX;
  byte *pbVar5;
  
  iVar2 = *in_EAX;
  cVar1 = *(char *)(iVar2 + 1);
  pbVar5 = (byte *)0x0;
  if (cVar1 == ' ') {
    pbVar5 = (byte *)(iVar2 + 3);
  }
  else if (cVar1 == '!') {
    pbVar5 = (byte *)(iVar2 + 4);
  }
  else if (cVar1 == '\"') {
    pbVar5 = (byte *)(iVar2 + 6);
  }
  pbVar3 = (byte *)FUN_1000a360(iVar2);
  pbVar4 = pbVar3;
  if (pbVar5 != (byte *)0x0) {
    while ((pbVar4 != (byte *)0x0 && (pbVar5 < pbVar3))) {
      if (*pbVar5 == unaff_EBX) goto LAB_1000a61f;
      pbVar5 = (byte *)FUN_1000a360((int)pbVar5);
      pbVar4 = pbVar5;
    }
  }
  pbVar5 = (byte *)0x0;
LAB_1000a61f:
  if (pbVar5 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pbVar4 = (byte *)0x0;
  switch(pbVar5[1]) {
  case 8:
  case 0x10:
    return pbVar5 + 3;
  case 9:
  case 0x11:
    return pbVar5 + 4;
  case 10:
  case 0x12:
    pbVar4 = pbVar5 + 6;
  }
  return pbVar4;
}



/* ---- FUN_1000a670 @ 1000a670 size=61 ---- */

void __fastcall FUN_1000a670(undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *in_EAX;
  byte *pbVar3;
  void *this;
  
  iVar2 = *in_EAX;
  cVar1 = *(char *)(iVar2 + 1);
  this = (void *)0x0;
  if (cVar1 == ' ') {
    this = (void *)(iVar2 + 3);
  }
  else if (cVar1 == '!') {
    this = (void *)(iVar2 + 4);
  }
  else if (cVar1 == '\"') {
    this = (void *)(iVar2 + 6);
  }
  pbVar3 = (byte *)FUN_1000a360(iVar2);
  FUN_1000a490(this,pbVar3,param_2);
  return;
}



/* ---- FUN_1000a6b0 @ 1000a6b0 size=219 ---- */

void __fastcall FUN_1000a6b0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined1 in_AL;
  int iVar5;
  
  FUN_10009fd0(in_AL);
  iVar5 = param_1[4] - param_1[3];
  if (iVar5 < 0x100) {
    FUN_10009fd0(0x20);
    FUN_10009fd0((char)iVar5);
  }
  else if (iVar5 < 0x10000) {
    FUN_10009fd0(0x21);
    FUN_1000a030(iVar5);
  }
  else {
    if ((1 < iVar5 >> 0x1f) || (0 < iVar5 >> 0x1f)) {
      FUN_10009fd0(0x20);
      FUN_10009fd0(0);
      return;
    }
    FUN_10009fd0(0x22);
    FUN_1000a0e0(iVar5);
  }
  uVar1 = param_2[4];
  if (uVar1 < (uint)param_2[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = param_1[4];
  uVar3 = *param_2;
  if (uVar2 < (uint)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  pvVar4 = (void *)param_1[3];
  iVar5 = *param_1;
  if ((void *)param_1[4] < pvVar4) {
    _invalid_parameter_noinfo();
  }
  FUN_1000b270((int)param_2,uVar1,uVar3,(undefined1 *)uVar1,*param_1,pvVar4,iVar5,uVar2);
  return;
}



/* ---- FUN_1000a790 @ 1000a790 size=155 ---- */

void FUN_1000a790(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *in_EAX;
  int iVar4;
  byte *pbVar5;
  
  uVar1 = in_EAX[3];
  if (in_EAX[4] != uVar1) {
    if ((uint)in_EAX[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((int *)*in_EAX == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)*in_EAX;
    }
    if (*(uint *)(iVar4 + 0x10) <= uVar1) {
      _invalid_parameter_noinfo();
    }
    pbVar2 = (byte *)in_EAX[4];
    pbVar5 = (byte *)in_EAX[3];
    if (pbVar2 < pbVar5) {
      _invalid_parameter_noinfo();
    }
    if ((int *)*in_EAX == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)*in_EAX;
    }
    if (*(byte **)(iVar4 + 0x10) <= pbVar5) {
      _invalid_parameter_noinfo();
    }
    pbVar2 = pbVar2 + (uVar1 - (int)pbVar5);
    pbVar3 = pbVar2;
    if (pbVar5 != (byte *)0x0) {
      while ((pbVar3 != (byte *)0x0 && (pbVar5 < pbVar2))) {
        if (*pbVar5 == param_1) goto LAB_1000a815;
        pbVar5 = (byte *)FUN_1000a360((int)pbVar5);
        pbVar3 = pbVar5;
      }
    }
  }
  pbVar5 = (byte *)0x0;
LAB_1000a815:
  FUN_1000a420((int)pbVar5);
  return;
}



/* ---- FUN_1000a830 @ 1000a830 size=198 ---- */

byte * FUN_1000a830(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  int *in_EAX;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar1 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  if ((int *)*in_EAX == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)*in_EAX;
  }
  if (*(uint *)(iVar3 + 0x10) <= uVar1) {
    _invalid_parameter_noinfo();
  }
  pbVar5 = (byte *)in_EAX[4];
  pbVar4 = (byte *)in_EAX[3];
  if (pbVar5 < pbVar4) {
    _invalid_parameter_noinfo();
  }
  if ((int *)*in_EAX == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)*in_EAX;
  }
  if (*(byte **)(iVar3 + 0x10) <= pbVar4) {
    _invalid_parameter_noinfo();
  }
  pbVar5 = pbVar5 + (uVar1 - (int)pbVar4);
  pbVar2 = pbVar5;
  if (pbVar4 != (byte *)0x0) {
    while ((pbVar2 != (byte *)0x0 && (pbVar4 < pbVar5))) {
      if (*pbVar4 == param_1) {
        pbVar5 = (byte *)0x0;
        switch(pbVar4[1]) {
        case 8:
        case 0x10:
          return pbVar4 + 3;
        case 9:
        case 0x11:
          return pbVar4 + 4;
        case 10:
        case 0x12:
          pbVar5 = pbVar4 + 6;
        }
        return pbVar5;
      }
      pbVar4 = (byte *)FUN_1000a360((int)pbVar4);
      pbVar2 = pbVar4;
    }
  }
  return (byte *)0x0;
}



/* ---- FUN_1000a920 @ 1000a920 size=148 ---- */

undefined4 * FUN_1000a920(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *in_EAX;
  int iVar4;
  byte *pbVar5;
  
  uVar1 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  if ((int *)*in_EAX == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)*in_EAX;
  }
  if (*(uint *)(iVar4 + 0x10) <= uVar1) {
    _invalid_parameter_noinfo();
  }
  pbVar2 = (byte *)in_EAX[4];
  pbVar5 = (byte *)in_EAX[3];
  if (pbVar2 < pbVar5) {
    _invalid_parameter_noinfo();
  }
  if ((int *)*in_EAX == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)*in_EAX;
  }
  if (*(byte **)(iVar4 + 0x10) <= pbVar5) {
    _invalid_parameter_noinfo();
  }
  pbVar2 = pbVar2 + (uVar1 - (int)pbVar5);
  pbVar3 = pbVar2;
  if (pbVar5 != (byte *)0x0) {
    while ((pbVar3 != (byte *)0x0 && (pbVar5 < pbVar2))) {
      if (*pbVar5 == param_2) goto LAB_1000a99d;
      pbVar5 = (byte *)FUN_1000a360((int)pbVar5);
      pbVar3 = pbVar5;
    }
  }
  pbVar5 = (byte *)0x0;
LAB_1000a99d:
  *param_1 = pbVar5;
  return param_1;
}



/* ---- FUN_1000a9c0 @ 1000a9c0 size=77 ---- */

bool FUN_1000a9c0(void *param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  uint unaff_EDI;
  
  uVar1 = FUN_1000a500((uint)param_1,unaff_EDI + (int)param_1);
  if (((char)uVar1 != '\0') && (0 < (int)unaff_EDI)) {
    FUN_1000ac30(unaff_EDI);
    if (*(int *)(unaff_ESI + 0x10) == *(int *)(unaff_ESI + 0xc)) {
      _invalid_parameter_noinfo();
    }
    memcpy(*(void **)(unaff_ESI + 0xc),param_1,unaff_EDI);
  }
  return (char)uVar1 == '\x01';
}



/* ---- FUN_1000aa10 @ 1000aa10 size=112 ---- */

void FUN_1000aa10(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_EBX;
  int *unaff_EDI;
  uint local_c [3];
  
  piVar1 = (int *)unaff_EDI[3];
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_EDI[5] - (int)piVar1 >> 2;
  }
  piVar2 = (int *)unaff_EDI[4];
  if ((uint)((int)piVar2 - (int)piVar1 >> 2) < uVar3) {
    local_c[0] = local_c[0] & 0xffffff00;
    FUN_1000b420(piVar2,unaff_EBX);
    unaff_EDI[4] = (int)(piVar2 + 1);
    return;
  }
  if (piVar2 < piVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_1000aae0((int *)local_c,unaff_EBX,*unaff_EDI,piVar2);
  return;
}



/* ---- FUN_1000aa80 @ 1000aa80 size=92 ---- */

undefined4 * FUN_1000aa80(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000db38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_1000aae0 @ 1000aae0 size=178 ---- */

void FUN_1000aae0(int *param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  
  uVar1 = in_EAX[3];
  if ((in_EAX[4] - uVar1 & 0xfffffffc) == 0) {
    iVar4 = 0;
  }
  else {
    if ((uint)in_EAX[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    iVar4 = (int)((int)param_4 - uVar1) >> 2;
  }
  FUN_1000ade0(in_EAX,param_2,param_3,param_4);
  uVar1 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  piVar2 = (int *)*in_EAX;
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  uVar1 = uVar1 + iVar4 * 4;
  if (uVar1 <= *(uint *)(iVar3 + 0x10)) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_1000ab7f;
  }
  _invalid_parameter_noinfo();
LAB_1000ab7f:
  param_1[1] = uVar1;
  *param_1 = (int)piVar2;
  return;
}



/* ---- FUN_1000aba0 @ 1000aba0 size=131 ---- */

void FUN_1000aba0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  int *unaff_EDI;
  
  *unaff_EBX = 0;
  if (((unaff_EDI == (int *)0x0) || (param_2 < (uint)unaff_EDI[3])) ||
     ((uint)unaff_EDI[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  *unaff_EBX = *unaff_EDI;
  unaff_EBX[1] = param_2;
  if ((param_4 < (undefined4 *)unaff_EDI[3]) || ((undefined4 *)unaff_EDI[4] < param_4)) {
    _invalid_parameter_noinfo();
  }
  if ((*unaff_EBX == 0) || (*unaff_EBX != *unaff_EDI)) {
    _invalid_parameter_noinfo();
  }
  puVar1 = (undefined4 *)unaff_EBX[1];
  if (puVar1 != param_4) {
    puVar2 = (undefined4 *)unaff_EDI[4];
    iVar3 = (int)puVar2 - (int)param_4;
    if (param_4 != puVar2) {
      iVar4 = (int)puVar1 - (int)param_4;
      do {
        *(undefined4 *)(iVar4 + (int)param_4) = *param_4;
        param_4 = param_4 + 1;
      } while (param_4 != puVar2);
    }
    unaff_EDI[4] = (int)(puVar1 + (iVar3 >> 2));
  }
  return;
}



/* ---- FUN_1000ac30 @ 1000ac30 size=205 ---- */

void FUN_1000ac30(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  int *piVar3;
  int *in_EAX;
  int iVar4;
  uint uVar5;
  undefined1 local_20 [4];
  void *local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  
  pvVar1 = (void *)in_EAX[3];
  pvVar2 = (void *)in_EAX[4];
  local_20[0] = 0;
  local_1c = pvVar2;
  if ((uint)((int)pvVar2 - (int)pvVar1) < param_1) {
    if (pvVar2 < pvVar1) {
      _invalid_parameter_noinfo();
    }
    FUN_1000b040((uint)in_EAX,local_20,*in_EAX,pvVar2);
    return;
  }
  if ((uint)((int)pvVar2 - (int)pvVar1) <= param_1) {
    return;
  }
  if (pvVar2 < pvVar1) {
    _invalid_parameter_noinfo();
  }
  uVar5 = in_EAX[3];
  local_10 = *in_EAX;
  if ((uint)in_EAX[4] < uVar5) {
    _invalid_parameter_noinfo();
  }
  piVar3 = (int *)*in_EAX;
  local_18 = piVar3;
  local_14 = uVar5;
  if (piVar3 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar5 = uVar5 + param_1;
  if (uVar5 <= *(uint *)(iVar4 + 0x10)) {
    if (piVar3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar5) goto LAB_1000acdb;
  }
  _invalid_parameter_noinfo();
LAB_1000acdb:
  FUN_10008c40(local_18,uVar5,local_10,local_1c);
  return;
}



/* ---- FUN_1000ad00 @ 1000ad00 size=172 ---- */

void FUN_1000ad00(int *param_1,undefined1 *param_2,int param_3,void *param_4)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = in_EAX[3];
  if (in_EAX[4] == uVar4) {
    iVar3 = 0;
  }
  else {
    if ((uint)in_EAX[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    iVar3 = (int)param_4 - uVar4;
  }
  FUN_1000b040((uint)in_EAX,param_2,param_3,param_4);
  uVar4 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  piVar1 = (int *)*in_EAX;
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  uVar4 = uVar4 + iVar3;
  if (uVar4 <= *(uint *)(iVar2 + 0x10)) {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar4) goto LAB_1000ad99;
  }
  _invalid_parameter_noinfo();
LAB_1000ad99:
  param_1[1] = uVar4;
  *param_1 = (int)piVar1;
  return;
}



/* ---- FUN_1000adb0 @ 1000adb0 size=33 ---- */

undefined1 * FUN_1000adb0(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  
  if (unaff_ESI != 0) {
    iVar1 = unaff_ESI;
    puVar2 = param_1;
    do {
      *puVar2 = *unaff_EDI;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  return param_1 + unaff_ESI;
}



/* ---- FUN_1000ade0 @ 1000ade0 size=587 ---- */

void __thiscall FUN_1000ade0(void *this,int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int extraout_EAX;
  undefined4 uVar7;
  int *piVar8;
  uint extraout_ECX;
  uint uStack_30;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ddb0;
  local_10 = ExceptionList;
  uStack_30 = DAT_10015018 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  iVar5 = *(int *)((int)this + 0xc);
  if (iVar5 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(int *)((int)this + 0x14) - iVar5 >> 2;
  }
  puVar2 = *(undefined4 **)((int)this + 0x10);
  iVar5 = (int)puVar2 - iVar5 >> 2;
  puVar4 = &uStack_30;
  if (iVar5 == 0x3fffffff) {
    iVar5 = FUN_10008f80();
    local_18 = extraout_ECX;
    puVar4 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar4;
  uVar6 = iVar5 + 1;
  if (local_18 < uVar6) {
    if (0x3fffffff - (local_18 >> 1) < local_18) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 + (local_18 >> 1);
    }
    if (local_18 < uVar6) {
      local_18 = uVar6;
    }
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(local_18);
    local_8 = 0;
    local_1c = local_1c & 0xffffff00;
    FUN_1000b420((undefined4 *)(extraout_EAX + ((int)param_3 - *(int *)((int)this + 0xc) >> 2) * 4),
                 param_1);
    FUN_1000b440(*(undefined4 **)((int)this + 0xc),param_3);
    FUN_1000b440(param_3,*(undefined4 **)((int)this + 0x10));
    local_8 = 0xffffffff;
    pvVar3 = *(void **)((int)this + 0xc);
    iVar5 = *(int *)((int)this + 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    *(uint *)((int)this + 0x14) = extraout_EAX + local_18 * 4;
    *(int *)((int)this + 0x10) = extraout_EAX + ((iVar5 - (int)pvVar3 >> 2) + 1) * 4;
    *(int *)((int)this + 0xc) = extraout_EAX;
    ExceptionList = local_10;
    return;
  }
  if ((int)puVar2 - (int)param_3 >> 2 == 0) {
    iVar5 = *param_1;
    local_20 = iVar5;
    FUN_1000b440(param_3,puVar2);
    local_8 = 2;
    FUN_1000b420(*(undefined4 **)((int)this + 0x10),&local_20);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 4;
    piVar8 = (int *)(*(int *)((int)this + 0x10) + -4);
    if (param_3 != piVar8) {
      do {
        *param_3 = iVar5;
        param_3 = param_3 + 1;
      } while (param_3 != piVar8);
      ExceptionList = local_10;
      return;
    }
  }
  else {
    local_20 = *param_1;
    piVar8 = puVar2 + -1;
    uVar7 = FUN_1000b440(piVar8,puVar2);
    *(undefined4 *)((int)this + 0x10) = uVar7;
    if (param_3 != piVar8) {
      iVar5 = (int)puVar2 - (int)piVar8;
      do {
        piVar1 = piVar8 + -1;
        piVar8 = piVar8 + -1;
        *(int *)(iVar5 + (int)piVar8) = *piVar1;
      } while (piVar8 != param_3);
    }
    piVar8 = param_3 + 1;
    for (; param_3 != piVar8; param_3 = param_3 + 1) {
      *param_3 = local_20;
    }
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@1000af28 @ 1000af28 size=12 ---- */

void Catch_All_1000af28(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- Catch_All@1000af34 @ 1000af34 size=9 ---- */

void Catch_All_1000af34(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_1000b040 @ 1000b040 size=473 ---- */

void FUN_1000b040(uint param_1,undefined1 *param_2,undefined4 param_3,void *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint in_EAX;
  int iVar3;
  void *_Dst;
  rsize_t rVar4;
  rsize_t _DstSize;
  uint uVar5;
  uint extraout_ECX;
  void *pvVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar7 = param_1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0x14) - iVar3;
  }
  if (in_EAX != 0) {
    pvVar6 = *(void **)(param_1 + 0x10);
    if ((iVar3 - (int)pvVar6) - 1U < in_EAX) {
      iVar3 = FUN_10008cc0();
      uVar5 = extraout_ECX;
    }
    uVar1 = (int)pvVar6 + (in_EAX - iVar3);
    if (uVar5 < uVar1) {
      if (-(uVar5 >> 1) - 1 < uVar5) {
        param_1 = 0;
      }
      else {
        param_1 = uVar5 + (uVar5 >> 1);
      }
      if (param_1 < uVar1) {
        param_1 = uVar1;
      }
      std::bad_alloc::bad_alloc_Constructor_or_Destructor(param_1);
      puVar2 = (undefined1 *)(((int)param_4 - *(int *)(uVar7 + 0xc)) + (int)_Dst);
      puVar8 = puVar2;
      for (uVar5 = in_EAX; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *param_2;
        puVar8 = puVar8 + 1;
      }
      rVar4 = (int)param_4 - (int)*(void **)(uVar7 + 0xc);
      if (rVar4 != 0) {
        memmove_s(_Dst,rVar4,*(void **)(uVar7 + 0xc),rVar4);
      }
      rVar4 = *(int *)(uVar7 + 0x10) - (int)param_4;
      if (rVar4 != 0) {
        memmove_s(puVar2 + in_EAX,rVar4,param_4,rVar4);
      }
      pvVar6 = *(void **)(uVar7 + 0xc);
      iVar3 = *(int *)(uVar7 + 0x10);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      *(uint *)(uVar7 + 0x14) = (int)_Dst + param_1;
      *(uint *)(uVar7 + 0x10) = (int)_Dst + in_EAX + (iVar3 - (int)pvVar6);
      *(void **)(uVar7 + 0xc) = _Dst;
      return;
    }
    uVar7 = (int)pvVar6 - (int)param_4;
    if (uVar7 < in_EAX) {
      param_2 = (undefined1 *)CONCAT31(param_2._1_3_,*param_2);
      if (uVar7 != 0) {
        memmove_s((void *)((int)param_4 + in_EAX),uVar7,param_4,uVar7);
      }
      FUN_1000adb0(*(undefined1 **)(param_1 + 0x10));
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + in_EAX;
      pvVar6 = (void *)(*(int *)(param_1 + 0x10) - in_EAX);
      if (param_4 != pvVar6) {
        memset(param_4,(int)param_2,(int)pvVar6 - (int)param_4);
        return;
      }
    }
    else {
      param_2 = (undefined1 *)CONCAT31(param_2._1_3_,*param_2);
      rVar4 = (int)pvVar6 - (int)((int)pvVar6 - in_EAX);
      if (rVar4 != 0) {
        memmove_s(pvVar6,rVar4,(void *)((int)pvVar6 - in_EAX),rVar4);
      }
      _DstSize = (int)pvVar6 + (-in_EAX - (int)param_4);
      *(rsize_t *)(param_1 + 0x10) = rVar4 + (int)pvVar6;
      if (0 < (int)_DstSize) {
        memmove_s((void *)((int)pvVar6 - _DstSize),_DstSize,param_4,_DstSize);
      }
      if (param_4 != (void *)((int)param_4 + in_EAX)) {
        memset(param_4,(int)param_2,(int)((int)param_4 + in_EAX) - (int)param_4);
      }
    }
  }
  return;
}



/* ---- FUN_1000b220 @ 1000b220 size=67 ---- */

void FUN_1000b220(int param_1)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  uint uVar4;
  
  piVar1 = (int *)*in_EAX;
  iVar3 = in_EAX[1];
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  uVar4 = iVar3 + param_1;
  if (uVar4 <= *(uint *)(iVar2 + 0x10)) {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar4) goto LAB_1000b256;
  }
  _invalid_parameter_noinfo();
LAB_1000b256:
  unaff_EBX[1] = uVar4;
  *unaff_EBX = (int)piVar1;
  return;
}



/* ---- FUN_1000b270 @ 1000b270 size=432 ---- */

void FUN_1000b270(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,int param_5,
                 void *param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  rsize_t rVar4;
  rsize_t _DstSize;
  rsize_t _DstSize_00;
  undefined1 *puVar5;
  void *extraout_ECX;
  void *pvVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  if ((param_7 == 0) || (param_7 != param_5)) {
    _invalid_parameter_noinfo();
  }
  iVar2 = *(int *)(param_1 + 0xc);
  uVar9 = param_8 - (int)param_6;
  if (iVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(int *)(param_1 + 0x14) - iVar2;
  }
  if (uVar9 != 0) {
    pvVar6 = *(void **)(param_1 + 0x10);
    iVar8 = param_8;
    if ((iVar2 - (int)pvVar6) - 1U < uVar9) {
      uVar11 = FUN_10008cc0();
      iVar8 = (int)((ulonglong)uVar11 >> 0x20);
      iVar2 = (int)uVar11;
      pvVar6 = extraout_ECX;
    }
    uVar3 = (int)pvVar6 + (uVar9 - iVar2);
    if (uVar10 < uVar3) {
      if (-(uVar10 >> 1) - 1 < uVar10) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar10 + (uVar10 >> 1);
      }
      if (uVar10 < uVar3) {
        uVar10 = uVar3;
      }
      std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar10);
      rVar4 = (int)param_4 - (int)*(void **)(param_1 + 0xc);
      if (rVar4 != 0) {
        memmove_s(_Dst,rVar4,*(void **)(param_1 + 0xc),rVar4);
      }
      _DstSize = param_8 - (int)param_6;
      if (_DstSize != 0) {
        memmove_s((void *)(rVar4 + (int)_Dst),_DstSize,param_6,_DstSize);
      }
      _DstSize_00 = *(int *)(param_1 + 0x10) - (int)param_4;
      if (_DstSize_00 != 0) {
        memmove_s((void *)(_DstSize + (int)(rVar4 + (int)_Dst)),_DstSize_00,param_4,_DstSize_00);
      }
      pvVar6 = *(void **)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x10);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      *(uint *)(param_1 + 0x14) = (int)_Dst + uVar10;
      *(uint *)(param_1 + 0x10) = (int)_Dst + uVar9 + (iVar2 - (int)pvVar6);
      *(void **)(param_1 + 0xc) = _Dst;
      return;
    }
    rVar4 = iVar8 - (int)param_6;
    if (rVar4 != 0) {
      memmove_s(pvVar6,rVar4,param_6,rVar4);
    }
    puVar5 = *(undefined1 **)(param_1 + 0x10);
    puVar7 = param_4;
    if (param_4 != puVar5) {
      do {
        puVar5 = puVar5 + -1;
        if (puVar7 == puVar5) break;
        uVar1 = *puVar7;
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
      } while (puVar7 != puVar5);
    }
    puVar7 = *(undefined1 **)(param_1 + 0x10);
    puVar5 = puVar7 + uVar9;
    if (puVar7 != puVar5) {
      do {
        puVar5 = puVar5 + -1;
        if (puVar7 == puVar5) break;
        uVar1 = *puVar7;
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
      } while (puVar7 != puVar5);
    }
    puVar5 = (undefined1 *)(*(int *)(param_1 + 0x10) + uVar9);
    if (param_4 != puVar5) {
      do {
        puVar5 = puVar5 + -1;
        if (param_4 == puVar5) break;
        uVar1 = *param_4;
        *param_4 = *puVar5;
        param_4 = param_4 + 1;
        *puVar5 = uVar1;
      } while (param_4 != puVar5);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar9;
  }
  return;
}



/* ---- FUN_1000b420 @ 1000b420 size=23 ---- */

void __fastcall FUN_1000b420(undefined4 *param_1,undefined4 *param_2)

{
  int in_EAX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_2;
    }
    param_1 = param_1 + 1;
  }
  return;
}



/* ---- FUN_1000b440 @ 1000b440 size=25 ---- */

void __fastcall FUN_1000b440(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
    }
    in_EAX = in_EAX + 1;
  }
  return;
}



/* ---- PMLNet @ 1000b460 size=144 ---- */

/* public: __thiscall PMLNet::PMLNet(void) */

PMLNet * __thiscall PMLNet::PMLNet(PMLNet *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb460  10  ??0PMLNet@@QAE@XZ */
  puStack_8 = &LAB_1000de87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->SockNet_data).offset_0x104 = 0xffffffff;
  (this->SockNet_data).offset_0x108 = 0;
  *(undefined1 *)&(this->SockNet_data).offset_0x0 = 0;
  (this->SockNet_data).offset_0x100 = 0xffff;
  (this->SockNet_data).offset_0x10c = 0;
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  FUN_1000aa80(&(this->SockNet_data).offset_0x110);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1000aa80(&(this->SockNet_data).offset_0x128);
  ClearObject(this);
  ExceptionList = local_c;
  return this;
}



/* ---- SockNet @ 1000b4f0 size=111 ---- */

/* public: virtual __thiscall PMLNet::~PMLNet(void) */

void __thiscall SockNet::SockNet(SockNet *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xb4f0  21  ??1PMLNet@@UAE@XZ */
  puStack_8 = &LAB_1000de87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: PMLNet::PMLNet */
  this->vftablePtr = (SockNet_vftable *)&PMLNet::_vftable_;
  local_4 = 1;
  PMLNet::ClearObject((PMLNet *)this);
  FUN_10007e60(&(this->SockNet_data).offset_0x128);
  local_4 = local_4 & 0xffffff00;
  FUN_10007e60(&(this->SockNet_data).offset_0x110);
  this->vftablePtr = &_vftable_;
  ExceptionList = local_c;
  return;
}



/* ---- PMLNet::Destroy @ 1000b560 size=16 ---- */

/* public: virtual void __thiscall PMLNet::Destroy(void) */

void __thiscall PMLNet::PMLNet__Destroy(PMLNet *this)

{
                    /* 0xb560  55  ?Destroy@PMLNet@@UAEXXZ */
  ClearObject(this);
  SockNet::SockNet__Destroy((SockNet *)this);
  return;
}



/* ---- SendPML @ 1000b570 size=418 ---- */

/* public: enum NET_RESULT __thiscall PMLNet::SendPML(class CPML *,struct PMLRELAY *) */

NET_RESULT __thiscall PMLNet::SendPML(PMLNet *this,CPML *param_1,PMLRELAY *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  CPML *pCVar4;
  int iVar5;
  NET_RESULT NVar6;
  int iVar7;
  void *pvVar8;
  undefined1 auStack_34 [4];
  CPML *local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  CPML local_1c [16];
  uint local_c;
  
                    /* 0xb570  206  ?SendPML@PMLNet@@QAE?AW4NET_RESULT@@PAVCPML@@PAUPMLRELAY@@@Z */
  local_c = DAT_10015018 ^ (uint)auStack_34;
  local_30 = param_1;
  CreatePMLHeader(this,local_1c,(PMLRELAY *)param_1,(int)param_2);
  local_2c = *(int **)&(this->SockNet_data).field_0x120;
  puVar1 = &(this->SockNet_data).offset_0x110;
  if (local_2c < *(undefined1 **)&(this->SockNet_data).field_0x11c) {
    _invalid_parameter_noinfo();
  }
  FUN_1000bd50((int)puVar1,local_1c,local_30,*puVar1,(undefined1 *)local_2c);
  if (param_2 != (PMLRELAY *)0x0) {
    local_2c = *(int **)&(this->SockNet_data).field_0x120;
    if (local_2c < *(undefined1 **)&(this->SockNet_data).field_0x11c) {
      _invalid_parameter_noinfo();
    }
    FUN_1000bd50((int)puVar1,param_2,local_30,*puVar1,(undefined1 *)local_2c);
  }
  pCVar4 = local_30;
  local_2c = (int *)(*(int *)(local_30 + 0x10) - *(int *)(local_30 + 0xc));
  if (local_2c == (int *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    if (local_2c == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    pvVar8 = *(void **)(pCVar4 + 0xc);
  }
  local_30 = *(CPML **)&(this->SockNet_data).field_0x120;
  if (local_30 < *(CPML **)&(this->SockNet_data).field_0x11c) {
    _invalid_parameter_noinfo();
  }
  FUN_1000bd50((int)puVar1,pvVar8,local_30,*puVar1,local_30);
  iVar5 = *(int *)&(this->SockNet_data).field_0x120;
  iVar2 = *(int *)&(this->SockNet_data).field_0x11c;
  if (*(int *)&(this->SockNet_data).field_0x120 == *(int *)&(this->SockNet_data).field_0x11c) {
    _invalid_parameter_noinfo();
  }
  local_30 = (CPML *)SockNet::Send((SockNet *)this,*(uchar **)&(this->SockNet_data).field_0x11c,
                                   iVar5 - iVar2,(int *)&local_30);
  iVar5 = *(int *)&(this->SockNet_data).field_0x120;
  uVar3 = *(uint *)&(this->SockNet_data).field_0x11c;
  iVar2 = *(int *)&(this->SockNet_data).field_0x11c;
  if (*(uint *)&(this->SockNet_data).field_0x120 < uVar3) {
    _invalid_parameter_noinfo();
  }
  local_2c = (int *)*puVar1;
  local_28 = uVar3;
  local_24 = local_2c;
  if (local_2c == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar7 = 0;
  }
  else {
    iVar7 = *local_2c;
  }
  pvVar8 = (void *)(uVar3 + (iVar5 - iVar2));
  if (pvVar8 <= *(void **)(iVar7 + 0x10)) {
    if (local_24 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *local_24;
    }
    if (*(void **)(iVar5 + 0xc) <= pvVar8) goto LAB_1000b6d9;
  }
  _invalid_parameter_noinfo();
LAB_1000b6d9:
  uVar3 = *(uint *)&(this->SockNet_data).field_0x11c;
  if (*(uint *)&(this->SockNet_data).field_0x120 < uVar3) {
    _invalid_parameter_noinfo();
  }
  FUN_10008c40(*puVar1,uVar3,local_2c,pvVar8);
  NVar6 = __security_check_cookie(local_c ^ (uint)auStack_34);
  return NVar6;
}



/* ---- PMLNet::OnReceive @ 1000b720 size=117 ---- */

/* protected: virtual void __thiscall PMLNet::OnReceive(void)
   PMLNet member function inherited by CasualNet
   PMLNet member function inherited by CasualNetV2 */

void __thiscall PMLNet::PMLNet__OnReceive(PMLNet *this)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  NET_RESULT NVar4;
  int local_c [2];
  
                    /* 0xb720  170  ?OnReceive@PMLNet@@MAEXXZ */
  puVar1 = &(this->SockNet_data).field_0x140;
  local_c[0] = 0;
  NVar4 = SockNet::Recv((SockNet *)this,puVar1,0x1000,local_c);
  if (NVar4 == 0) {
    puVar3 = *(undefined1 **)&(this->SockNet_data).field_0x138;
    puVar2 = &(this->SockNet_data).offset_0x128;
    if (puVar3 < *(undefined1 **)&(this->SockNet_data).field_0x134) {
      _invalid_parameter_noinfo();
    }
    FUN_1000bd50((int)puVar2,puVar1,local_c[0],*puVar2,puVar3);
    ParseReceived(this);
  }
  return;
}



/* ---- ClearObject @ 1000b7a0 size=153 ---- */

/* protected: void __thiscall PMLNet::ClearObject(void) */

void __thiscall PMLNet::ClearObject(PMLNet *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
                    /* 0xb7a0  45  ?ClearObject@PMLNet@@IAEXXZ */
  puVar1 = &(this->SockNet_data).offset_0x110;
  *(undefined4 *)&this[0xd].SockNet_data.field_0x98 = 0xffffffff;
  *(undefined4 *)&this[0xd].SockNet_data.field_0x9c = 0;
  pvVar2 = *(void **)&(this->SockNet_data).field_0x120;
  if (pvVar2 < *(void **)&(this->SockNet_data).field_0x11c) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *(uint *)&(this->SockNet_data).field_0x11c;
  uVar4 = *puVar1;
  if (*(uint *)&(this->SockNet_data).field_0x120 < uVar3) {
    _invalid_parameter_noinfo();
  }
  FUN_10008c40(*puVar1,uVar3,uVar4,pvVar2);
  puVar1 = &(this->SockNet_data).offset_0x128;
  pvVar2 = *(void **)&(this->SockNet_data).field_0x138;
  if (pvVar2 < *(void **)&(this->SockNet_data).field_0x134) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *(uint *)&(this->SockNet_data).field_0x134;
  uVar4 = *puVar1;
  if (*(uint *)&(this->SockNet_data).field_0x138 < uVar3) {
    _invalid_parameter_noinfo();
  }
  FUN_10008c40(*puVar1,uVar3,uVar4,pvVar2);
  return;
}



/* ---- IsRelayPacket @ 1000b840 size=43 ---- */

/* protected: bool __thiscall PMLNet::IsRelayPacket(struct PMLHEADER *) */

bool __thiscall PMLNet::IsRelayPacket(PMLNet *this,PMLHEADER *param_1)

{
                    /* 0xb840  109  ?IsRelayPacket@PMLNet@@IAE_NPAUPMLHEADER@@@Z */
  if (param_1 == (PMLHEADER *)0x0) {
    return false;
  }
  return CONCAT11(*param_1,param_1[1]) == 0x5252;
}



/* ---- GetDataSizeFromHeader @ 1000b870 size=139 ---- */

/* protected: int __thiscall PMLNet::GetDataSizeFromHeader(struct PMLHEADER *) */

int __thiscall PMLNet::GetDataSizeFromHeader(PMLNet *this,PMLHEADER *param_1)

{
  short sVar1;
  
                    /* 0xb870  95  ?GetDataSizeFromHeader@PMLNet@@IAEHPAUPMLHEADER@@@Z */
  if (param_1 == (PMLHEADER *)0x0) {
    return -2;
  }
  sVar1 = CONCAT11(*param_1,param_1[1]);
  if (sVar1 == 0x4e4e) {
    return CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  }
  if ((sVar1 == 0x5252) || (sVar1 == 0x6262)) {
    return CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]) + 0x5a;
  }
  return -1;
}



/* ---- CreatePMLHeader @ 1000b900 size=211 ---- */

/* protected: struct PMLHEADER __thiscall PMLNet::CreatePMLHeader(class CPML *,struct PMLRELAY
   *,int) */

CPML * __thiscall PMLNet::CreatePMLHeader(PMLNet *this,CPML *param_1,PMLRELAY *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  
                    /* 0xb900  51
                       ?CreatePMLHeader@PMLNet@@IAE?AUPMLHEADER@@PAVCPML@@PAUPMLRELAY@@H@Z */
  iVar2 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  if ((iVar2 != 0) && (iVar2 == 0)) {
    _invalid_parameter_noinfo();
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = SUB41(uVar1,0);
  param_1[4] = SUB41((uint)uVar1 >> 0x18,0);
  param_1[5] = SUB41((uint)uVar1 >> 0x10,0);
  param_1[6] = SUB41((uint)uVar1 >> 8,0);
  param_1[8] = SUB41((uint)in_stack_00000010 >> 0x18,0);
  param_1[0xb] = SUB41(in_stack_00000010,0);
  param_1[9] = SUB41((uint)in_stack_00000010 >> 0x10,0);
  param_1[10] = SUB41((uint)in_stack_00000010 >> 8,0);
  param_1[2] = (CPML)0x0;
  param_1[3] = (CPML)0x0;
  param_1[0xc] = SUB41((uint)iVar2 >> 0x18,0);
  param_1[0xd] = SUB41((uint)iVar2 >> 0x10,0);
  param_1[0xe] = SUB41((uint)iVar2 >> 8,0);
  param_1[0xf] = SUB41(iVar2,0);
  if (param_3 == 0) {
    *param_1 = (CPML)0x4e;
    param_1[1] = (CPML)0x4e;
    return param_1;
  }
  if ((LPCSTR)(param_3 + 0x2d) != (LPCSTR)0x0) {
    iVar2 = lstrlenA((LPCSTR)(param_3 + 0x2d));
    if (iVar2 != 0) {
      *param_1 = (CPML)0x52;
      param_1[1] = (CPML)0x52;
      return param_1;
    }
  }
  *param_1 = (CPML)0x62;
  param_1[1] = (CPML)0x62;
  return param_1;
}



/* ---- ParseReceived @ 1000b9e0 size=383 ---- */

/* protected: bool __thiscall PMLNet::ParseReceived(void) */

bool __thiscall PMLNet::ParseReceived(PMLNet *this)

{
  undefined1 *puVar1;
  PMLHEADER *pPVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
                    /* 0xb9e0  177  ?ParseReceived@PMLNet@@IAE_NXZ */
  if (0xf < (uint)(*(int *)&(this->SockNet_data).field_0x138 -
                  *(int *)&(this->SockNet_data).field_0x134)) {
    if (*(int *)&this[0xd].SockNet_data.field_0x98 < 0) {
      if (*(int *)&(this->SockNet_data).field_0x138 == *(int *)&(this->SockNet_data).field_0x134) {
        _invalid_parameter_noinfo();
      }
      iVar7 = GetDataSizeFromHeader(this,*(PMLHEADER **)&(this->SockNet_data).field_0x134);
      *(int *)&this[0xd].SockNet_data.field_0x98 = iVar7;
      if (iVar7 < 0) {
        return false;
      }
    }
    if (*(int *)&this[0xd].SockNet_data.field_0x98 + 0x10U <=
        (uint)(*(int *)&(this->SockNet_data).field_0x138 - *(int *)&(this->SockNet_data).field_0x134
              )) {
      if (*(int *)&(this->SockNet_data).field_0x138 == *(int *)&(this->SockNet_data).field_0x134) {
        _invalid_parameter_noinfo();
      }
      puVar1 = *(undefined1 **)&(this->SockNet_data).field_0x134;
      if ((puVar1 == (undefined1 *)0x0) || (CONCAT11(*puVar1,puVar1[1]) != 0x5252)) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0x5a;
      }
      if (*(int *)&(this->SockNet_data).field_0x138 == *(int *)&(this->SockNet_data).field_0x134) {
        _invalid_parameter_noinfo();
      }
      pPVar2 = *(PMLHEADER **)&(this->SockNet_data).field_0x134;
      if ((uint)(*(int *)&(this->SockNet_data).field_0x138 - (int)pPVar2) < 0x11) {
        _invalid_parameter_noinfo();
      }
      iVar3 = *(int *)&(this->SockNet_data).field_0x134;
      if ((uint)(*(int *)&(this->SockNet_data).field_0x138 -
                *(int *)&(this->SockNet_data).field_0x134) <= iVar7 + 0x10U) {
        _invalid_parameter_noinfo();
      }
      ProcessPML(this,pPVar2,(PMLRELAY *)(iVar3 + 0x10),
                 (void *)(*(int *)&(this->SockNet_data).field_0x134 + iVar7 + 0x10U),
                 *(int *)&this[0xd].SockNet_data.field_0x98);
      if (*(uint *)&(this->SockNet_data).field_0x138 < *(uint *)&(this->SockNet_data).field_0x134) {
        _invalid_parameter_noinfo();
      }
      iVar7 = 0x10;
      FUN_1000b220(*(int *)&this[0xd].SockNet_data.field_0x98);
      puVar8 = (undefined4 *)FUN_1000b220(iVar7);
      uVar4 = *(uint *)&(this->SockNet_data).field_0x134;
      pvVar5 = (void *)puVar8[1];
      uVar6 = *puVar8;
      if (*(uint *)&(this->SockNet_data).field_0x138 < uVar4) {
        _invalid_parameter_noinfo();
      }
      FUN_10008c40((this->SockNet_data).offset_0x128,uVar4,uVar6,pvVar5);
      *(undefined4 *)&this[0xd].SockNet_data.field_0x98 = 0xffffffff;
      if (*(int *)&(this->SockNet_data).field_0x138 != *(int *)&(this->SockNet_data).field_0x134) {
        ParseReceived(this);
      }
    }
  }
  return true;
}



/* ---- ProcessPML @ 1000bb60 size=487 ---- */

/* protected: bool __thiscall PMLNet::ProcessPML(struct PMLHEADER *,struct PMLRELAY *,void *,int) */

bool __thiscall
PMLNet::ProcessPML(PMLNet *this,PMLHEADER *param_1,PMLRELAY *param_2,void *param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  CC_BUDDY *pCVar2;
  CC_BUDDY local_44 [24];
  undefined4 local_2c;
  CC_BUDDY local_28 [24];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xbb60  179  ?ProcessPML@PMLNet@@IAE_NPAUPMLHEADER@@PAUPMLRELAY@@PAXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000df30;
  local_c = ExceptionList;
  if (param_1 != (PMLHEADER *)0x0) {
    if (CONCAT11(*param_1,param_1[1]) == 0x4e4e) {
      ExceptionList = &local_c;
      *(uint *)&this[0xd].SockNet_data.field_0x9c =
           CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
      FUN_1000aa80((undefined4 *)local_44);
      local_4 = 0;
      local_2c = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
      pCVar2 = local_44;
      bVar1 = FUN_1000a9c0(param_3);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        (*this->vftablePtr->OnAcceptBuddyAck)(this,pCVar2,'\0');
        local_4 = 0xffffffff;
        FUN_10007e60((undefined4 *)pCVar2);
        ExceptionList = local_c;
        return true;
      }
    }
    else {
      if (CONCAT11(*param_1,param_1[1]) != 0x5252) {
        return false;
      }
      ExceptionList = &local_c;
      FUN_1000aa80((undefined4 *)local_28);
      local_4 = 1;
      local_10 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
      pCVar2 = local_28;
      bVar1 = FUN_1000a9c0(param_3);
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        (*this->vftablePtr->OnAcceptBuddyAck)(this,pCVar2,(char)param_2);
        local_4 = 0xffffffff;
        FUN_10007e60((undefined4 *)pCVar2);
        ExceptionList = local_c;
        return true;
      }
    }
    local_4 = 0xffffffff;
    FUN_10007e60((undefined4 *)pCVar2);
  }
  ExceptionList = local_c;
  return false;
}



/* ---- FUN_1000bd50 @ 1000bd50 size=374 ---- */

void FUN_1000bd50(int param_1,void *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  void *_Dst;
  rsize_t _DstSize;
  rsize_t _DstSize_00;
  undefined1 *puVar4;
  void *extraout_ECX;
  void *pvVar5;
  undefined1 *puVar6;
  void *_Src;
  uint _DstSize_01;
  uint uVar7;
  undefined8 uVar8;
  
  iVar2 = *(int *)(param_1 + 0xc);
  _DstSize_01 = in_EAX - (int)param_2;
  if (iVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)(param_1 + 0x14) - iVar2;
  }
  if (_DstSize_01 != 0) {
    pvVar5 = *(void **)(param_1 + 0x10);
    _Src = param_2;
    if ((iVar2 - (int)pvVar5) - 1U < _DstSize_01) {
      uVar8 = FUN_10008cc0();
      _Src = (void *)((ulonglong)uVar8 >> 0x20);
      iVar2 = (int)uVar8;
      pvVar5 = extraout_ECX;
    }
    uVar3 = (int)pvVar5 + (_DstSize_01 - iVar2);
    if (uVar7 < uVar3) {
      if (-(uVar7 >> 1) - 1 < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (uVar7 < uVar3) {
        uVar7 = uVar3;
      }
      std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar7);
      _DstSize = (int)param_5 - (int)*(void **)(param_1 + 0xc);
      if (_DstSize != 0) {
        memmove_s(_Dst,_DstSize,*(void **)(param_1 + 0xc),_DstSize);
      }
      if (_DstSize_01 != 0) {
        memmove_s((void *)(_DstSize + (int)_Dst),_DstSize_01,param_2,_DstSize_01);
      }
      _DstSize_00 = *(int *)(param_1 + 0x10) - (int)param_5;
      if (_DstSize_00 != 0) {
        memmove_s((void *)(_DstSize_01 + (int)(_DstSize + (int)_Dst)),_DstSize_00,param_5,
                  _DstSize_00);
      }
      pvVar5 = *(void **)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x10);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      *(uint *)(param_1 + 0x14) = (int)_Dst + uVar7;
      *(uint *)(param_1 + 0x10) = (int)_Dst + _DstSize_01 + (iVar2 - (int)pvVar5);
      *(void **)(param_1 + 0xc) = _Dst;
      return;
    }
    if (_DstSize_01 != 0) {
      memmove_s(pvVar5,_DstSize_01,_Src,_DstSize_01);
    }
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    puVar6 = param_5;
    if (param_5 != puVar4) {
      do {
        puVar4 = puVar4 + -1;
        if (puVar6 == puVar4) break;
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        puVar6 = puVar6 + 1;
        *puVar4 = uVar1;
      } while (puVar6 != puVar4);
    }
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    puVar6 = puVar4 + _DstSize_01;
    if (puVar4 != puVar6) {
      do {
        puVar6 = puVar6 + -1;
        if (puVar4 == puVar6) break;
        uVar1 = *puVar4;
        *puVar4 = *puVar6;
        puVar4 = puVar4 + 1;
        *puVar6 = uVar1;
      } while (puVar4 != puVar6);
    }
    puVar4 = (undefined1 *)(*(int *)(param_1 + 0x10) + _DstSize_01);
    if (param_5 != puVar4) {
      do {
        puVar4 = puVar4 + -1;
        if (param_5 == puVar4) break;
        uVar1 = *param_5;
        *param_5 = *puVar4;
        param_5 = param_5 + 1;
        *puVar4 = uVar1;
      } while (param_5 != puVar4);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + _DstSize_01;
  }
  return;
}



/* ---- SockNet @ 1000bed0 size=48 ---- */

/* public: __thiscall SockNet::SockNet(void) */

void __thiscall SockNet::SockNet(SockNet *this)

{
                    /* 0xbed0  12  ??0SockNet@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->SockNet_data).offset_0x104 = 0xffffffff;
  (this->SockNet_data).offset_0x108 = 0;
  *(undefined1 *)&(this->SockNet_data).offset_0x0 = 0;
  (this->SockNet_data).offset_0x100 = 0xffff;
  (this->SockNet_data).offset_0x10c = 0;
  return;
}



/* ---- ~SockNet @ 1000bf00 size=7 ---- */

/* public: virtual __thiscall SockNet::~SockNet(void) */

void __thiscall SockNet::~SockNet(SockNet *this)

{
                    /* 0xbf00  22  ??1SockNet@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- SockNet::Create @ 1000bf10 size=97 ---- */

/* public: virtual bool __thiscall SockNet::Create(void) */

bool __thiscall SockNet::SockNet__Create(SockNet *this)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puStack_1ac;
  undefined1 auStack_1a4 [4];
  undefined1 local_1a0 [396];
  uint uStack_14;
  uint local_c;
  
                    /* 0xbf10  50  ?Create@SockNet@@UAE_NXZ */
  local_c = DAT_10015018 ^ (uint)auStack_1a4;
  puStack_1ac = local_1a0;
  iVar2 = Ordinal_115(0x202);
  if (iVar2 == 0) {
    (this->SockNet_data).offset_0x10c = 1;
    uVar1 = __security_check_cookie(uStack_14 ^ (uint)&puStack_1ac);
    return (bool)uVar1;
  }
  uVar1 = __security_check_cookie(uStack_14 ^ (uint)&puStack_1ac);
  return (bool)uVar1;
}



/* ---- SockNet::Destroy @ 1000bf80 size=108 ---- */

/* public: virtual void __thiscall SockNet::Destroy(void) */

void __thiscall SockNet::SockNet__Destroy(SockNet *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0xbf80  56  ?Destroy@SockNet@@UAEXXZ */
  iVar1 = (this->SockNet_data).offset_0x104;
  if (iVar1 != -1) {
    Ordinal_3(iVar1);
    (this->SockNet_data).offset_0x104 = 0xffffffff;
  }
  iVar2 = (this->SockNet_data).offset_0x108;
  if (iVar2 != 0) {
    WSACloseEvent(iVar2);
    (this->SockNet_data).offset_0x108 = 0;
  }
  if (iVar1 != -1) {
    (*this->vftablePtr->~ChatParser)(this);
  }
  Ordinal_116();
  *(undefined1 *)&(this->SockNet_data).offset_0x0 = 0;
  (this->SockNet_data).offset_0x100 = 0xffff;
  (this->SockNet_data).offset_0x10c = 0;
  return;
}



/* ---- Connect @ 1000bff0 size=328 ---- */

/* public: bool __thiscall SockNet::Connect(char const *,unsigned short) */

bool __thiscall SockNet::Connect(SockNet *this,char *param_1,ushort param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 in_stack_0000000a;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
                    /* 0xbff0  47  ?Connect@SockNet@@QAE_NPBDG@Z */
  local_4 = DAT_10015018 ^ (uint)&uStack_14;
  if ((param_1 != (char *)0x0) && ((this->SockNet_data).offset_0x104 == -1)) {
    iVar2 = Ordinal_23(2,1,0);
    (this->SockNet_data).offset_0x104 = iVar2;
    if (iVar2 != -1) {
      iVar2 = WSACreateEvent();
      (this->SockNet_data).offset_0x108 = iVar2;
      if (iVar2 != 0) {
        iVar2 = WSAEventSelect((this->SockNet_data).offset_0x104,iVar2,0x33);
        if (iVar2 != -1) {
          iStack_10 = 0;
          uStack_c = 0;
          uStack_8 = 0;
          uStack_14 = 2;
          Ordinal_9(_param_2);
          iStack_10 = Ordinal_11(param_1);
          if (iStack_10 == -1) {
            iVar2 = Ordinal_52(param_1);
            if (iVar2 == 0) goto LAB_1000c0d7;
            iStack_10 = *(int *)**(undefined4 **)(iVar2 + 0xc);
          }
          iVar2 = Ordinal_4((this->SockNet_data).offset_0x104,&uStack_14,0x10);
          if (iVar2 == -1) {
            iVar2 = Ordinal_111();
            if (iVar2 != 0x2733) goto LAB_1000c0d7;
          }
          uVar1 = __security_check_cookie(local_4 ^ (uint)&uStack_14);
          return (bool)uVar1;
        }
      }
    }
  }
LAB_1000c0d7:
  iVar2 = (this->SockNet_data).offset_0x104;
  if (iVar2 != -1) {
    Ordinal_3(iVar2);
    (this->SockNet_data).offset_0x104 = 0xffffffff;
  }
  iVar2 = (this->SockNet_data).offset_0x108;
  if (iVar2 != 0) {
    WSACloseEvent(iVar2);
    (this->SockNet_data).offset_0x108 = 0;
  }
  uVar1 = __security_check_cookie(local_4 ^ (uint)&uStack_14);
  return (bool)uVar1;
}



/* ---- Disconnect @ 1000c140 size=81 ---- */

/* public: void __thiscall SockNet::Disconnect(void) */

void __thiscall SockNet::Disconnect(SockNet *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0xc140  57  ?Disconnect@SockNet@@QAEXXZ */
  iVar1 = (this->SockNet_data).offset_0x104;
  if (iVar1 != -1) {
    Ordinal_3(iVar1);
    (this->SockNet_data).offset_0x104 = 0xffffffff;
  }
  iVar2 = (this->SockNet_data).offset_0x108;
  if (iVar2 != 0) {
    WSACloseEvent(iVar2);
    (this->SockNet_data).offset_0x108 = 0;
  }
  if (iVar1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x1000c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->vftablePtr->~ChatParser)(this);
    return;
  }
  return;
}



/* ---- SocketRelease @ 1000c1a0 size=60 ---- */

/* protected: void __thiscall SockNet::SocketRelease(void) */

void __thiscall SockNet::SocketRelease(SockNet *this)

{
  int iVar1;
  
                    /* 0xc1a0  223  ?SocketRelease@SockNet@@IAEXXZ */
  iVar1 = (this->SockNet_data).offset_0x104;
  if (iVar1 != -1) {
    Ordinal_3(iVar1);
    (this->SockNet_data).offset_0x104 = 0xffffffff;
  }
  iVar1 = (this->SockNet_data).offset_0x108;
  if (iVar1 != 0) {
    WSACloseEvent(iVar1);
    (this->SockNet_data).offset_0x108 = 0;
  }
  return;
}



/* ---- Send @ 1000c1e0 size=98 ---- */

/* public: enum NET_RESULT __thiscall SockNet::Send(unsigned char *,int,int *) */

NET_RESULT __thiscall SockNet::Send(SockNet *this,uchar *param_1,int param_2,int *param_3)

{
  int iVar1;
  
                    /* 0xc1e0  189  ?Send@SockNet@@QAE?AW4NET_RESULT@@PAEHPAH@Z */
  if (param_1 == (uchar *)0x0) {
    return 4;
  }
  if (param_3 == (int *)0x0) {
    return 4;
  }
  *param_3 = 0;
  iVar1 = Ordinal_19((this->SockNet_data).offset_0x104,param_1,param_2,0);
  if (iVar1 == -1) {
    iVar1 = Ordinal_111();
    return (uint)(iVar1 == 0x2733) * 2 + 1;
  }
  *param_3 = iVar1;
  return 0;
}



/* ---- Recv @ 1000c250 size=126 ---- */

/* public: enum NET_RESULT __thiscall SockNet::Recv(unsigned char *,int,int *) */

NET_RESULT __thiscall SockNet::Recv(SockNet *this,uchar *param_1,int param_2,int *param_3)

{
  int iVar1;
  DWORD DVar2;
  
                    /* 0xc250  180  ?Recv@SockNet@@QAE?AW4NET_RESULT@@PAEHPAH@Z */
  if (param_1 == (uchar *)0x0) {
    return 4;
  }
  if (param_3 == (int *)0x0) {
    return 4;
  }
  *param_3 = 0;
  iVar1 = Ordinal_16((this->SockNet_data).offset_0x104,param_1,param_2,0);
  if (iVar1 == 0) {
    Disconnect(this);
    return 2;
  }
  if (iVar1 == -1) {
    DVar2 = GetLastError();
    return (uint)(DVar2 == 0x2733) * 2 + 1;
  }
  *param_3 = iVar1;
  return 0;
}



/* ---- IsConnected @ 1000c2d0 size=11 ---- */

/* public: bool __thiscall SockNet::IsConnected(void) */

bool __thiscall SockNet::IsConnected(SockNet *this)

{
                    /* 0xc2d0  107  ?IsConnected@SockNet@@QAE_NXZ */
  return (this->SockNet_data).offset_0x104 != -1;
}



/* ---- Loop @ 1000c2e0 size=313 ---- */

/* public: void __thiscall SockNet::Loop(void) */

void __thiscall SockNet::Loop(SockNet *this)

{
  undefined4 *puVar1;
  int iVar2;
  LPCSTR lpString2;
  undefined4 uStack_44;
  byte abStack_40 [4];
  int iStack_3c;
  int iStack_38;
  int iStack_2c;
  undefined1 auStack_14 [2];
  undefined2 uStack_12;
  undefined4 uStack_10;
  uint local_4;
  
                    /* 0xc2e0  113  ?Loop@SockNet@@QAEXXZ */
  local_4 = DAT_10015018 ^ (uint)&uStack_44;
  puVar1 = &(this->SockNet_data).offset_0x108;
  if ((this->SockNet_data).offset_0x108 != 0) {
    iVar2 = WSAWaitForMultipleEvents(1,puVar1,0,0,0);
    if ((iVar2 != 0x102) && (iVar2 != -1)) {
      iVar2 = WSAEnumNetworkEvents((this->SockNet_data).offset_0x104,*puVar1,abStack_40);
      if (iVar2 != -1) {
        if ((abStack_40[0] & 0x10) != 0) {
          if (iStack_2c == 0) {
            uStack_44 = 0x10;
            (this->SockNet_data).offset_0x100 = 0xffff;
            *(undefined1 *)&(this->SockNet_data).offset_0x0 = 0;
            iVar2 = Ordinal_6((this->SockNet_data).offset_0x104,auStack_14,&uStack_44);
            if (iVar2 == 0) {
              lpString2 = (LPCSTR)Ordinal_12(uStack_10);
              if (lpString2 != (LPCSTR)0x0) {
                lstrcpynA((LPSTR)&this->SockNet_data,lpString2,0x100);
              }
              (this->SockNet_data).offset_0x100 = uStack_12;
            }
            (*this->vftablePtr->~ChatParser)(this);
          }
          else {
            SocketRelease(this);
            (*this->vftablePtr->~ChatParser)(this);
          }
        }
        if (((abStack_40[0] & 1) != 0) && (iStack_3c == 0)) {
          (*this->vftablePtr->~ChatParser)(this);
        }
        if (((abStack_40[0] & 2) != 0) && (iStack_38 == 0)) {
          (*this->vftablePtr->~ChatParser)(this);
        }
        if ((abStack_40[0] & 0x20) != 0) {
          Disconnect(this);
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&uStack_44);
  return;
}



/* ---- operator= @ 1000c420 size=19 ---- */

/* public: class ChatParser & __thiscall ChatParser::operator=(class ChatParser const &) */

ChatParser * __thiscall ChatParser::operator=(ChatParser *this,ChatParser *param_1)

{
                    /* 0xc420  26  ??4ChatParser@@QAEAAV0@ABV0@@Z
                       0xc420  27  ??4GFtp@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}



/* ---- ChatParser @ 1000c440 size=16 ---- */

/* public: __thiscall ChatParser::ChatParser(void) */

void __thiscall ChatParser::ChatParser(ChatParser *this)

{
                    /* 0xc440  6  ??0ChatParser@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}



/* ---- ChatParser @ 1000c450 size=22 ---- */

/* public: __thiscall ChatParser::ChatParser(char *) */

void __thiscall ChatParser::ChatParser(ChatParser *this,char *param_1)

{
                    /* 0xc450  5  ??0ChatParser@@QAE@PAD@Z */
  if (param_1 != (char *)0x0) {
    *(char **)this = param_1;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}



/* ---- setBuffer @ 1000c470 size=27 ---- */

/* public: bool __thiscall ChatParser::setBuffer(char *) */

bool __thiscall ChatParser::setBuffer(ChatParser *this,char *param_1)

{
                    /* 0xc470  237  ?setBuffer@ChatParser@@QAE_NPAD@Z */
  if (param_1 == (char *)0x0) {
    return false;
  }
  *(char **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  return true;
}



/* ---- getCharType @ 1000c490 size=38 ---- */

/* protected: int __thiscall ChatParser::getCharType(char) */

int __thiscall ChatParser::getCharType(ChatParser *this,char param_1)

{
                    /* 0xc490  228  ?getCharType@ChatParser@@IAEHD@Z */
  if ((((param_1 == ' ') || (param_1 == '\t')) || (param_1 == '\r')) || (param_1 == '\n')) {
    return 0;
  }
  return (param_1 == '\0') + 1;
}



/* ---- isFinished @ 1000c4c0 size=24 ---- */

/* protected: bool __thiscall ChatParser::isFinished(enum FST_STATE) */

bool __thiscall ChatParser::isFinished(ChatParser *this,FST_STATE param_1)

{
                    /* 0xc4c0  231  ?isFinished@ChatParser@@IAE_NW4FST_STATE@@@Z */
  if ((param_1 == 3) || (param_1 == 4)) {
    return true;
  }
  return false;
}



/* ---- getNextParam @ 1000c4e0 size=174 ---- */

/* public: enum CHATPARSER_RESULT __thiscall ChatParser::getNextParam(unsigned long *,unsigned long
   *) */

CHATPARSER_RESULT __thiscall
ChatParser::getNextParam(ChatParser *this,ulong *param_1,ulong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xc4e0  230  ?getNextParam@ChatParser@@QAE?AW4CHATPARSER_RESULT@@PAK0@Z */
  if ((param_1 == (ulong *)0x0) || (param_2 == (ulong *)0x0)) {
    return 3;
  }
  if (*(int *)this == 0) {
    return 4;
  }
  *param_1 = 0xffffffff;
  *param_2 = 0;
  iVar3 = 0;
  while( true ) {
    cVar1 = *(char *)(*(ulong *)(this + 4) + *(int *)this);
    if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\r')) || (cVar1 == '\n')) {
      iVar2 = 0;
    }
    else {
      iVar2 = (cVar1 == '\0') + 1;
    }
    iVar2 = iVar2 + iVar3 * 2;
    cVar1 = *(char *)(iVar2 + 0x100150c0 + iVar3);
    iVar2 = *(int *)(&DAT_10015084 + (iVar2 + iVar3) * 4);
    if (iVar2 == 2) {
      if (iVar3 != 2) {
        *param_1 = *(ulong *)(this + 4);
      }
      *param_2 = *param_2 + 1;
    }
    if (cVar1 == '\0') {
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
    }
    if (iVar2 == 3) break;
    iVar3 = iVar2;
    if (iVar2 == 4) {
      return 0;
    }
  }
  return 1;
}



/* ---- getNextParam @ 1000c590 size=92 ---- */

/* public: enum CHATPARSER_RESULT __thiscall ChatParser::getNextParam(char *,unsigned long) */

CHATPARSER_RESULT __thiscall ChatParser::getNextParam(ChatParser *this,char *param_1,ulong param_2)

{
  char *_Dest;
  char *pcVar1;
  CHATPARSER_RESULT CVar2;
  int *extraout_ECX;
  ChatParser *local_4;
  
                    /* 0xc590  229  ?getNextParam@ChatParser@@QAE?AW4CHATPARSER_RESULT@@PADK@Z */
  _Dest = param_1;
  if (param_1 == (char *)0x0) {
    return 3;
  }
  local_4 = this;
  CVar2 = getNextParam(this,(ulong *)&local_4,(ulong *)&param_1);
  pcVar1 = param_1;
  if (CVar2 == 0) {
    if (param_2 < param_1 + 1) {
      return 2;
    }
    _mbsnbcpy((uchar *)_Dest,(uchar *)(local_4 + *extraout_ECX),(size_t)param_1);
    pcVar1[(int)_Dest] = '\0';
    CVar2 = 0;
  }
  return CVar2;
}



/* ---- createParamVector @ 1000c5f0 size=286 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: class std::vector<struct CHAT_PARAM_INFO,class std::allocator<struct CHAT_PARAM_INFO> > *
   __thiscall ChatParser::createParamVector(void) */

vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> * __thiscall
ChatParser::createParamVector(ChatParser *this)

{
  undefined4 *puVar1;
  uint uVar2;
  CHATPARSER_RESULT CVar3;
  vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> *pvVar4;
  undefined4 *local_1034;
  undefined4 *local_1030;
  uint local_102c;
  uchar local_1028 [4096];
  undefined4 *local_28;
  uint local_24;
  uint local_1c;
  ChatParser *pCStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xc5f0  226
                       ?createParamVector@ChatParser@@QAEPAV?$vector@UCHAT_PARAM_INFO@@V?$allocator@UCHAT_PARAM_INFO@@@std@@@std@@XZ
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1000dbce;
  local_14 = ExceptionList;
  local_1c = DAT_10015018 ^ (uint)&local_1034;
  ExceptionList = &local_14;
  *(undefined4 *)(this + 4) = 0;
  pCStack_18 = this;
  local_1030 = operator_new(0x18);
  local_c = 0;
  if (local_1030 == (undefined4 *)0x0) {
    local_1034 = (undefined4 *)0x0;
  }
  else {
    local_1034 = FUN_1000aa80(local_1030);
  }
  local_c = 0xffffffff;
  if (local_1034 != (undefined4 *)0x0) {
    while ((CVar3 = getNextParam(this,(ulong *)&local_1030,&local_102c), uVar2 = local_102c,
           puVar1 = local_1030, CVar3 == 0 && (local_102c + 1 < 0x1001))) {
      if (local_102c < 0x1000) {
        _mbsnbcpy(local_1028,(uchar *)(*(int *)this + (int)local_1030),local_102c);
        local_1028[uVar2] = '\0';
      }
      else {
        local_1028[0] = '\0';
      }
      local_28 = puVar1;
      local_24 = uVar2;
      FUN_1000c740();
    }
  }
  ExceptionList = local_14;
  pvVar4 = (vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> *)
           __security_check_cookie(local_1c ^ (uint)&local_1034);
  return pvVar4;
}



/* ---- destroyParamVector @ 1000c720 size=28 ---- */

/* public: void __thiscall ChatParser::destroyParamVector(class std::vector<struct
   CHAT_PARAM_INFO,class std::allocator<struct CHAT_PARAM_INFO> > *) */

void __thiscall
ChatParser::destroyParamVector
          (ChatParser *this,vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> *param_1)

{
                    /* 0xc720  227
                       ?destroyParamVector@ChatParser@@QAEXPAV?$vector@UCHAT_PARAM_INFO@@V?$allocator@UCHAT_PARAM_INFO@@@std@@@std@@@Z
                        */
  if (param_1 != (vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> *)0x0) {
    FUN_10007e60((undefined4 *)param_1);
    operator_delete(param_1);
  }
  return;
}



/* ---- FUN_1000c740 @ 1000c740 size=149 ---- */

void FUN_1000c740(void)

{
  void *pvVar1;
  void *pvVar2;
  void *in_EAX;
  uint uVar3;
  int *unaff_EDI;
  uint local_c [3];
  
  pvVar1 = (void *)unaff_EDI[3];
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (unaff_EDI[5] - (int)pvVar1) / 0x1008;
  }
  pvVar2 = (void *)unaff_EDI[4];
  if ((uint)(((int)pvVar2 - (int)pvVar1) / 0x1008) < uVar3) {
    local_c[0] = local_c[0] & 0xffffff00;
    FUN_1000cc80(pvVar2);
    unaff_EDI[4] = (int)pvVar2 + 0x1008;
    return;
  }
  if (pvVar2 < pvVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_1000c7e0((int *)local_c,in_EAX,*unaff_EDI,pvVar2);
  return;
}



/* ---- FUN_1000c7e0 @ 1000c7e0 size=208 ---- */

void FUN_1000c7e0(int *param_1,void *param_2,int param_3,void *param_4)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = in_EAX[3];
  iVar2 = in_EAX[4] - uVar4;
  iVar3 = iVar2 >> 0x1f;
  if (iVar2 / 0x1008 + iVar3 == iVar3) {
    iVar3 = 0;
  }
  else {
    if ((uint)in_EAX[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    iVar3 = (int)((int)param_4 - uVar4) / 0x1008;
  }
  FUN_1000c8b0(in_EAX,param_2,param_3,param_4);
  uVar4 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  piVar1 = (int *)*in_EAX;
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  uVar4 = iVar3 * 0x1008 + uVar4;
  if (uVar4 <= *(uint *)(iVar2 + 0x10)) {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar4) goto LAB_1000c89d;
  }
  _invalid_parameter_noinfo();
LAB_1000c89d:
  param_1[1] = uVar4;
  *param_1 = (int)piVar1;
  return;
}



/* ---- FUN_1000c8b0 @ 1000c8b0 size=797 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_1000c8b0(void *this,void *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_EAX;
  undefined4 uVar5;
  uint uVar6;
  uint uStack_1048;
  undefined1 local_1028 [4108];
  uint local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000db90;
  local_10 = ExceptionList;
  uStack_18 = 0x1000c8cc;
  uStack_1048 = DAT_10015018 ^ (uint)(local_1028 + 0x1024);
  local_14 = (undefined1 *)&uStack_1048;
  ExceptionList = &local_10;
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0x14) - iVar3) / 0x1008;
  }
  iVar1 = *(int *)((int)this + 0x10);
  iVar3 = (iVar1 - iVar3) / 0x1008;
  local_1c = uStack_1048;
  puVar2 = &uStack_1048;
  if (iVar3 == 0xff803) {
    iVar3 = FUN_10008f80();
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  uVar4 = iVar3 + 1;
  if (uVar6 < uVar4) {
    if (0xff803 - (uVar6 >> 1) < uVar6) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 + (uVar6 >> 1);
    }
    if (uVar6 < uVar4) {
      uVar6 = uVar4;
    }
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar6);
    local_8 = 0;
    FUN_1000cc80((void *)((((int)param_3 - *(int *)((int)this + 0xc)) / 0x1008) * 0x1008 +
                         extraout_EAX));
    FUN_1000cd20(*(void **)((int)this + 0xc));
    FUN_1000cd20(param_3);
    local_8 = 0xffffffff;
    iVar3 = *(int *)((int)this + 0xc);
    iVar1 = *(int *)((int)this + 0x10);
    if (*(void **)((int)this + 0xc) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0xc));
    }
    *(uint *)((int)this + 0x14) = uVar6 * 0x1008 + extraout_EAX;
    *(int *)((int)this + 0x10) = ((iVar1 - iVar3) / 0x1008 + 1) * 0x1008 + extraout_EAX;
    *(int *)((int)this + 0xc) = extraout_EAX;
  }
  else {
    iVar3 = iVar1 - (int)param_3 >> 0x1f;
    if ((iVar1 - (int)param_3) / 0x1008 + iVar3 == iVar3) {
      memcpy(local_1028,param_1,0x1008);
      FUN_1000cd20(param_3);
      local_8 = 2;
      FUN_1000cc80(*(void **)((int)this + 0x10));
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 0x1008;
    }
    else {
      memcpy(local_1028,param_1,0x1008);
      uVar5 = FUN_1000cd20((void *)(iVar1 + -0x1008));
      *(undefined4 *)((int)this + 0x10) = uVar5;
      FUN_1000ccc0(iVar1);
    }
    FUN_1000cc50();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)(local_1028 + 0x1024));
  return;
}



/* ---- Catch_All@1000ca77 @ 1000ca77 size=15 ---- */

void Catch_All_1000ca77(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x102c));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- Catch_All@1000ca86 @ 1000ca86 size=9 ---- */

void Catch_All_1000ca86(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- bad_alloc_Constructor_or_Destructor @ 1000cbf0 size=87 ---- */

void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1)

{
  char *local_10;
  exception local_c [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x1008) {
    local_10 = (char *)0x0;
    std::exception::exception(local_c,&local_10);
    local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000feb8);
  }
  operator_new(param_1 * 0x1008);
  return;
}



/* ---- FUN_1000cc50 @ 1000cc50 size=34 ---- */

void FUN_1000cc50(void)

{
  void *in_EAX;
  void *unaff_EBX;
  void *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = (void *)((int)in_EAX + 0x1008)) {
    memcpy(in_EAX,unaff_EBX,0x1008);
  }
  return;
}



/* ---- FUN_1000cc80 @ 1000cc80 size=49 ---- */

void __fastcall FUN_1000cc80(void *param_1)

{
  int in_EAX;
  void *unaff_EBX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    if (param_1 != (void *)0x0) {
      memcpy(param_1,unaff_EBX,0x1008);
    }
    param_1 = (void *)((int)param_1 + 0x1008);
  }
  return;
}



/* ---- FUN_1000ccc0 @ 1000ccc0 size=82 ---- */

int __cdecl FUN_1000ccc0(int param_1)

{
  void *in_EAX;
  int iVar1;
  int iVar2;
  void *unaff_EDI;
  
  iVar1 = (int)in_EAX - (int)unaff_EDI;
  if (unaff_EDI != in_EAX) {
    iVar2 = param_1 - (int)in_EAX;
    do {
      in_EAX = (void *)((int)in_EAX + -0x1008);
      memcpy((void *)((int)in_EAX + iVar2),in_EAX,0x1008);
    } while (in_EAX != unaff_EDI);
  }
  return param_1 + (iVar1 / 0x1008) * -0x1008;
}



/* ---- FUN_1000cd20 @ 1000cd20 size=56 ---- */

void __fastcall FUN_1000cd20(void *param_1)

{
  void *in_EAX;
  void *unaff_EBX;
  
  for (; param_1 != unaff_EBX; param_1 = (void *)((int)param_1 + 0x1008)) {
    if (in_EAX != (void *)0x0) {
      memcpy(in_EAX,param_1,0x1008);
    }
    in_EAX = (void *)((int)in_EAX + 0x1008);
  }
  return;
}



/* ---- FUN_1000cd60 @ 1000cd60 size=40 ---- */

undefined4 FUN_1000cd60(undefined4 param_1,int param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  if (param_2 == 1) {
    pAVar1 = AfxGetModuleState();
    *(undefined4 *)(pAVar1 + 0x1c) = *(undefined4 *)(pAVar1 + 0x20);
    *(undefined4 *)(pAVar1 + 0x28) = *(undefined4 *)(pAVar1 + 0x2c);
    *(undefined4 *)(pAVar1 + 0x20) = 0;
    *(undefined4 *)(pAVar1 + 0x2c) = 0;
  }
  return 1;
}



/* ---- FUN_1000cd90 @ 1000cd90 size=90 ---- */

undefined4 FUN_1000cd90(HINSTANCE__ *param_1,int param_2)

{
  int iVar1;
  CDynLinkLibrary *this;
  
  if (param_2 == 1) {
    iVar1 = AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_100155e8,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    this = operator_new(0x40);
    if (this != (CDynLinkLibrary *)0x0) {
      CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_100155e8,0);
      return 1;
    }
  }
  else if (param_2 == 0) {
    AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_100155e8,0);
  }
  return 1;
}



/* ---- __security_check_cookie @ 1000cdea size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_10015018) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- operator_delete @ 1000cdfa size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000cdfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- __ArrayUnwind @ 1000ce00 size=50 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}



/* ---- `eh_vector_destructor_iterator' @ 1000ce5e size=75 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_1000cea9();
  return;
}



/* ---- FUN_1000cea9 @ 1000cea9 size=24 ---- */

void FUN_1000cea9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- __onexit @ 1000cec1 size=156 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __cdecl __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1000fd48;
  uStack_c = 0x1000cecd;
  local_20[0] = decode_pointer(DAT_1001568c);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_1001568c);
    local_24 = decode_pointer(DAT_10015688);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_1001568c = encode_pointer(local_20[0]);
    DAT_10015688 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_1000cf5d();
  }
  return p_Var1;
}



/* ---- FUN_1000cf5d @ 1000cf5d size=9 ---- */

void FUN_1000cf5d(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 1000cf66 size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 1000cf7d size=76 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CDaoRelationFieldInfo::`vector deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall logic_error::`vector deleting destructor'(unsigned int)
     5 names - too many to list
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __thiscall FID_conflict__vector_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    _eh_vector_destructor_iterator_(this,0xc,*piVar1,type_info::_type_info_dtor_internal_method);
    if ((param_1 & 1) != 0) {
      operator_delete(piVar1);
    }
    this = piVar1;
  }
  return this;
}



/* ---- std::exception::what @ 1000cfca size=6 ---- */

char * __thiscall std::exception::std__exception__what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000cfca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* ---- operator_delete[] @ 1000cfd6 size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000cfd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- operator_new @ 1000cfdc size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000cfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- __CRT_INIT@12 @ 1000d031 size=550 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2008 Release */

undefined4 __CRT_INIT_12(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  LONG LVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_2 == (int *)0x0) {
    if (DAT_10015270 < 1) {
      return 0;
    }
    DAT_10015270 = DAT_10015270 + -1;
  }
  _DAT_10015678 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_10015680,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1001567c == 0) {
      DAT_1001567c = 1;
      iVar3 = initterm_e(&DAT_1000f244,&DAT_1000f24c);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_1000f21c,&DAT_1000f240);
      DAT_1001567c = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_10015680,0);
    }
    if ((DAT_10015684 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10015684), BVar4 != 0)) {
      (*DAT_10015684)(param_1,2,param_3);
    }
    DAT_10015270 = DAT_10015270 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_10015680,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1001567c == 2) {
      param_2 = (int *)decode_pointer(DAT_1001568c);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_10015688);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_1001568c);
            piVar8 = (int *)decode_pointer(DAT_10015688);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_10015688 = encoded_null();
        DAT_1001568c = DAT_10015688;
      }
      DAT_1001567c = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_10015680,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 1000d257 size=240 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  _DAT_10015020 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_10015270 == 0)) {
    local_20 = 0;
    goto LAB_1000d349;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_FUN_1000f810 != (undefined *)0x0) {
      local_20 = (*(code *)PTR_FUN_1000f810)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_1000d349;
    local_20 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (local_20 == 0) goto LAB_1000d349;
  }
  local_20 = FUN_1000cd90(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_1000cd90(param_3,0);
    __CRT_INIT_12(&param_3->unused,(int *)0x0,param_1);
    if (PTR_FUN_1000f810 != (undefined *)0x0) {
      (*(code *)PTR_FUN_1000f810)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_FUN_1000f810 != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_FUN_1000f810)(param_3,param_2,param_1);
    }
  }
LAB_1000d349:
  FUN_1000d362();
  return local_20;
}



/* ---- FUN_1000d362 @ 1000d362 size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d362(void)

{
  _DAT_10015020 = 0xffffffff;
  return;
}



/* ---- entry @ 1000d36d size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- ___report_gsfailure @ 1000d390 size=262 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 local_res0;
  undefined1 uStack00000004;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  undefined1 local_324 [800];
  
  _DAT_10015390 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10015394 = &uStack00000004;
  _DAT_100152d0 = 0x10001;
  _DAT_10015278 = 0xc0000409;
  _DAT_1001527c = 1;
  local_32c = DAT_10015018;
  local_328 = DAT_1001501c;
  _DAT_10015284 = _local_res0;
  _DAT_1001535c = in_GS;
  _DAT_10015360 = in_FS;
  _DAT_10015364 = in_ES;
  _DAT_10015368 = in_DS;
  _DAT_1001536c = unaff_EDI;
  _DAT_10015370 = unaff_ESI;
  _DAT_10015374 = unaff_EBX;
  _DAT_10015378 = in_EDX;
  _DAT_1001537c = in_ECX;
  _DAT_10015380 = in_EAX;
  _DAT_10015384 = unaff_EBP;
  DAT_10015388 = _local_res0;
  _DAT_1001538c = in_CS;
  _DAT_10015398 = in_SS;
  DAT_100152c8 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1000f278);
  if (DAT_100152c8 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- terminate @ 1000d496 size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000d496. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- __SEH_prolog4 @ 1000d49c size=69 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10015018 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 1000d4e1 size=20 ---- */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* ---- FUN_1000d4f5 @ 1000d4f5 size=37 ---- */

void __cdecl
FUN_1000d4f5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_10015018,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- _unlock @ 1000d51a size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x1000d51a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 1000d520 size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000d520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 1000d526 size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x1000d526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __ValidateImageBase @ 1000d590 size=53 ---- */

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



/* ---- __FindPESection @ 1000d5d0 size=68 ---- */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2008 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



/* ---- __IsNonwritableInCurrentImage @ 1000d620 size=166 ---- */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_1000d4f5;
  local_14 = ExceptionList;
  local_c = DAT_10015018 ^ 0x1000fd90;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 1000d6de size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000d6de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 1000d6e4 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000d6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 1000d6ea size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000d6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 1000d6f0 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 1000d6f6 size=150 ---- */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2008 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_10015018 == 0xbb40e64e) || ((DAT_10015018 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10015018 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10015018 == 0xbb40e64e) {
      DAT_10015018 = 0xbb40e64f;
    }
    else if ((DAT_10015018 & 0xffff0000) == 0) {
      DAT_10015018 = DAT_10015018 | DAT_10015018 << 0x10;
    }
  }
  DAT_1001501c = ~DAT_10015018;
  return;
}



/* ---- _crt_debugger_hook @ 1000d78c size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000d78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- except_handler4_common @ 1000d792 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000d792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _type_info_dtor_internal_method @ 1000d798 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000d798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- AfxThrowMemoryException @ 1000d7a4 size=6 ---- */

void AfxThrowMemoryException(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000d7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxThrowMemoryException();
  return;
}



/* ---- CCriticalSection::GetRuntimeClass @ 1000d7aa size=6 ---- */

CRuntimeClass * __thiscall
CCriticalSection::CCriticalSection__GetRuntimeClass(CCriticalSection *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000d7aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- ~CSyncObject @ 1000d7b0 size=6 ---- */

void __thiscall CSyncObject::~CSyncObject(CSyncObject *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CSyncObject(this);
  return;
}



/* ---- CSyncObject @ 1000d7b6 size=6 ---- */

void __thiscall CSyncObject::CSyncObject(CSyncObject *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000d7b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CSyncObject(this,param_1);
  return;
}



/* ---- CDynLinkLibrary @ 1000d7bc size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000d7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxInitExtensionModule @ 1000d7c2 size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000d7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- AfxGetModuleState @ 1000d7c8 size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000d7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- AfxTermExtensionModule @ 1000d7ce size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000d7ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- ~CWin32Heap @ 1000d7d4 size=27 ---- */

/* Library Function - Single Match
    public: virtual __thiscall ATL::CWin32Heap::~CWin32Heap(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall ATL::CWin32Heap::~CWin32Heap(CWin32Heap *this)

{
  *(undefined ***)this = &PTR_FUN_1000f2c0;
  if ((this[8] != (CWin32Heap)0x0) && (*(HANDLE *)(this + 4) != (HANDLE)0x0)) {
    HeapDestroy(*(HANDLE *)(this + 4));
  }
  return;
}



/* ---- FUN_1000d7ef @ 1000d7ef size=23 ---- */

void __thiscall FUN_1000d7ef(void *this,SIZE_T param_1)

{
  HeapAlloc(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* ---- FUN_1000d806 @ 1000d806 size=29 ---- */

void __thiscall FUN_1000d806(void *this,LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}



/* ---- Reallocate @ 1000d823 size=58 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall ATL::CWin32Heap::Reallocate(void *,unsigned int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __thiscall ATL::CWin32Heap::Reallocate(CWin32Heap *this,void *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = (void *)(*(code *)**(undefined4 **)this)(param_2);
  }
  else if (param_2 == 0) {
    (**(code **)(*(int *)this + 4))(param_1);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = HeapReAlloc(*(HANDLE *)(this + 4),0,param_1,param_2);
  }
  return pvVar1;
}



/* ---- FUN_1000d85d @ 1000d85d size=23 ---- */

void __thiscall FUN_1000d85d(void *this,LPCVOID param_1)

{
  HeapSize(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* ---- `scalar_deleting_destructor' @ 1000d874 size=33 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall ATL::CWin32Heap::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __thiscall ATL::CWin32Heap::_scalar_deleting_destructor_(CWin32Heap *this,uint param_1)

{
  ~CWin32Heap(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- CAtlStringMgr @ 1000d895 size=49 ---- */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlStringMgr::CAtlStringMgr(struct ATL::IAtlMemMgr *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall ATL::CAtlStringMgr::CAtlStringMgr(CAtlStringMgr *this,IAtlMemMgr *param_1)

{
  *(IAtlMemMgr **)(this + 4) = param_1;
  *(undefined ***)this = &PTR_Allocate_1000f2d4;
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x1a) = 0;
  *(CAtlStringMgr **)(this + 8) = this;
  return;
}



/* ---- AtlMultiply<unsigned_long> @ 1000d8c6 size=36 ---- */

/* Library Function - Single Match
    long __cdecl ATL::AtlMultiply<unsigned long>(unsigned long *,unsigned long,unsigned long)
   
   Library: Visual Studio 2008 Release */

long __cdecl ATL::AtlMultiply<unsigned_long>(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
    *param_1 = (ulong)((ulonglong)param_2 * (ulonglong)param_3);
    return 0;
  }
  return -0x7ff8ffa9;
}



/* ---- FUN_1000d8ea @ 1000d8ea size=14 ---- */

void __fastcall FUN_1000d8ea(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000d8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return;
}



/* ---- FUN_1000d909 @ 1000d909 size=34 ---- */

undefined4 * __thiscall FUN_1000d909(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_Allocate_1000f2d4;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- AtlAdd<unsigned_int> @ 1000d92b size=38 ---- */

/* Library Function - Single Match
    long __cdecl ATL::AtlAdd<unsigned int>(unsigned int *,unsigned int,unsigned int)
   
   Library: Visual Studio 2008 Release */

long __cdecl ATL::AtlAdd<unsigned_int>(uint *param_1,uint param_2,uint param_3)

{
  if (-param_2 - 1 < param_3) {
    return -0x7ff8ffa9;
  }
  *param_1 = param_2 + param_3;
  return 0;
}



/* ---- Allocate @ 1000d951 size=100 ---- */

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall ATL::CAtlStringMgr::Allocate(int,int)
   
   Library: Visual Studio 2008 Release */

CStringData * __thiscall ATL::CAtlStringMgr::Allocate(CAtlStringMgr *this,int param_1,int param_2)

{
  long lVar1;
  CStringData *pCVar2;
  uint uVar3;
  
  uVar3 = param_1 + 8U & 0xfffffff8;
  lVar1 = AtlMultiply<unsigned_long>((ulong *)&param_1,uVar3,param_2);
  if (((lVar1 < 0) || (lVar1 = AtlAdd<unsigned_int>((uint *)&param_1,0x10,param_1), lVar1 < 0)) ||
     (pCVar2 = (CStringData *)(**(code **)**(undefined4 **)(this + 4))(param_1),
     pCVar2 == (CStringData *)0x0)) {
    return (CStringData *)0x0;
  }
  *(undefined4 *)(pCVar2 + 4) = 0;
  *(CAtlStringMgr **)pCVar2 = this;
  *(undefined4 *)(pCVar2 + 0xc) = 1;
  *(uint *)(pCVar2 + 8) = uVar3 - 1;
  return pCVar2;
}



/* ---- Reallocate @ 1000d9b5 size=91 ---- */

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall ATL::CAtlStringMgr::Reallocate(struct
   ATL::CStringData *,int,int)
   
   Library: Visual Studio 2008 Release */

CStringData * __thiscall
ATL::CAtlStringMgr::Reallocate(CAtlStringMgr *this,CStringData *param_1,int param_2,int param_3)

{
  long lVar1;
  CStringData *pCVar2;
  uint uVar3;
  
  uVar3 = param_2 + 8U & 0xfffffff8;
  lVar1 = AtlMultiply<unsigned_long>((ulong *)&param_2,uVar3,param_3);
  if (((lVar1 < 0) || (lVar1 = AtlAdd<unsigned_int>((uint *)&param_2,0x10,param_2), lVar1 < 0)) ||
     (pCVar2 = (CStringData *)(**(code **)(**(int **)(this + 4) + 8))(param_1,param_2),
     pCVar2 == (CStringData *)0x0)) {
    return (CStringData *)0x0;
  }
  *(uint *)(pCVar2 + 8) = uVar3 - 1;
  return pCVar2;
}



/* ---- memcpy @ 1000da10 size=6 ---- */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* ---- memset @ 1000da16 size=6 ---- */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000da16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ---- _CxxThrowException @ 1000da22 size=6 ---- */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x1000da22. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* ---- __alloca_probe @ 1000da30 size=43 ---- */

/* WARNING: This is an inlined function */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_res0;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&local_res0 - (int)in_EAX & ~-(uint)(&local_res0 < in_EAX));
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = _local_res0;
  return;
}



/* ---- Unwind@1000da60 @ 1000da60 size=9 ---- */

void Unwind_1000da60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000da63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000da90 @ 1000da90 size=9 ---- */

void Unwind_1000da90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000da93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x38));
  return;
}



/* ---- Unwind@1000da99 @ 1000da99 size=9 ---- */

void Unwind_1000da99(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000da9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@1000daa2 @ 1000daa2 size=9 ---- */

void Unwind_1000daa2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000daa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@1000dad0 @ 1000dad0 size=9 ---- */

void Unwind_1000dad0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1000dad9 @ 1000dad9 size=25 ---- */

void Unwind_1000dad9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000db10 @ 1000db10 size=5 ---- */

void __thiscall ChatParser::Unwind_1000db10(ChatParser *this)

{
  return;
}



/* ---- Unwind@1000db30 @ 1000db30 size=8 ---- */

void Unwind_1000db30(void)

{
  FUN_100085b0();
  return;
}



/* ---- Unwind@1000db60 @ 1000db60 size=9 ---- */

void Unwind_1000db60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000db63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            (*(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> **)(unaff_EBP + -0x10))
  ;
  return;
}



/* ---- Unwind@1000dbc0 @ 1000dbc0 size=14 ---- */

void Unwind_1000dbc0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1028));
  return;
}



/* ---- Unwind@1000dc00 @ 1000dc00 size=9 ---- */

void Unwind_1000dc00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dc03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@1000dc09 @ 1000dc09 size=9 ---- */

void Unwind_1000dc09(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@1000dc50 @ 1000dc50 size=9 ---- */

void Unwind_1000dc50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dc53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x54))
  ;
  return;
}



/* ---- Unwind@1000dc59 @ 1000dc59 size=9 ---- */

void Unwind_1000dc59(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)(unaff_EBP + -0x38));
  return;
}



/* ---- Unwind@1000dc80 @ 1000dc80 size=8 ---- */

void Unwind_1000dc80(void)

{
  FUN_100085b0();
  return;
}



/* ---- Unwind@1000dcb0 @ 1000dcb0 size=9 ---- */

void Unwind_1000dcb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dcb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@1000dcb9 @ 1000dcb9 size=9 ---- */

void Unwind_1000dcb9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@1000dce0 @ 1000dce0 size=8 ---- */

void Unwind_1000dce0(void)

{
  FUN_100085b0();
  return;
}



/* ---- Unwind@1000dd10 @ 1000dd10 size=8 ---- */

void Unwind_1000dd10(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x30))
  ;
  return;
}



/* ---- Unwind@1000dd18 @ 1000dd18 size=8 ---- */

void Unwind_1000dd18(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@1000dd40 @ 1000dd40 size=9 ---- */

void Unwind_1000dd40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dd43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@1000dd70 @ 1000dd70 size=8 ---- */

void Unwind_1000dd70(void)

{
  int unaff_EBP;
  
  SockNet::~SockNet(*(SockNet **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000dd78 @ 1000dd78 size=15 ---- */

void Unwind_1000dd78(void)

{
  int unaff_EBP;
  
  FUN_10007e60((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}



/* ---- Unwind@1000ddd0 @ 1000ddd0 size=9 ---- */

void Unwind_1000ddd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000ddd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x48))
  ;
  return;
}



/* ---- Unwind@1000ddd9 @ 1000ddd9 size=9 ---- */

void Unwind_1000ddd9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x48))
  ;
  return;
}



/* ---- Unwind@1000dde2 @ 1000dde2 size=9 ---- */

void Unwind_1000dde2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000dde5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x48))
  ;
  return;
}



/* ---- Unwind@1000ddeb @ 1000ddeb size=9 ---- */

void Unwind_1000ddeb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000ddee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@1000de10 @ 1000de10 size=8 ---- */

void Unwind_1000de10(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000de40 @ 1000de40 size=9 ---- */

void Unwind_1000de40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000de43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            (*(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> **)(unaff_EBP + -0x10))
  ;
  return;
}



/* ---- Unwind@1000de49 @ 1000de49 size=9 ---- */

void Unwind_1000de49(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000de4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000de70 @ 1000de70 size=8 ---- */

void Unwind_1000de70(void)

{
  int unaff_EBP;
  
  SockNet::~SockNet(*(SockNet **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000de78 @ 1000de78 size=15 ---- */

void Unwind_1000de78(void)

{
  int unaff_EBP;
  
  FUN_10007e60((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}



/* ---- Unwind@1000deb0 @ 1000deb0 size=8 ---- */

void Unwind_1000deb0(void)

{
  FUN_100085b0();
  return;
}



/* ---- Unwind@1000dee0 @ 1000dee0 size=8 ---- */

void Unwind_1000dee0(void)

{
  int unaff_EBP;
  
  SockNet::SockNet(*(SockNet **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000dee8 @ 1000dee8 size=13 ---- */

void Unwind_1000dee8(void)

{
  FUN_100031a0();
  return;
}



/* ---- Unwind@1000def5 @ 1000def5 size=13 ---- */

void Unwind_1000def5(void)

{
  FUN_100031a0();
  return;
}



/* ---- Unwind@1000df20 @ 1000df20 size=8 ---- */

void Unwind_1000df20(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000df28 @ 1000df28 size=8 ---- */

void Unwind_1000df28(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000df50 @ 1000df50 size=8 ---- */

void Unwind_1000df50(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000df58 @ 1000df58 size=8 ---- */

void Unwind_1000df58(void)

{
  FUN_100085b0();
  return;
}



/* ---- Unwind@1000df80 @ 1000df80 size=8 ---- */

void Unwind_1000df80(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000dfb0 @ 1000dfb0 size=8 ---- */

void Unwind_1000dfb0(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000dfe0 @ 1000dfe0 size=8 ---- */

void Unwind_1000dfe0(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000dfe8 @ 1000dfe8 size=8 ---- */

void Unwind_1000dfe8(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000dff0 @ 1000dff0 size=8 ---- */

void Unwind_1000dff0(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000e020 @ 1000e020 size=8 ---- */

void Unwind_1000e020(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000e050 @ 1000e050 size=8 ---- */

void Unwind_1000e050(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000e080 @ 1000e080 size=8 ---- */

void Unwind_1000e080(void)

{
  int unaff_EBP;
  
  SockNet::SockNet(*(SockNet **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000e088 @ 1000e088 size=13 ---- */

void Unwind_1000e088(void)

{
  FUN_100031a0();
  return;
}



/* ---- Unwind@1000e095 @ 1000e095 size=13 ---- */

void Unwind_1000e095(void)

{
  FUN_100031a0();
  return;
}



/* ---- Unwind@1000e0a2 @ 1000e0a2 size=13 ---- */

void Unwind_1000e0a2(void)

{
  FUN_100031a0();
  return;
}



/* ---- Unwind@1000e0d0 @ 1000e0d0 size=11 ---- */

void Unwind_1000e0d0(void)

{
  int unaff_EBP;
  
  FUN_100027b0((int *)(unaff_EBP + -0x62c));
  return;
}



/* ---- Unwind@1000e0db @ 1000e0db size=11 ---- */

void Unwind_1000e0db(void)

{
  int unaff_EBP;
  
  FUN_100027b0((int *)(unaff_EBP + -0x630));
  return;
}



/* ---- Unwind@1000e0e6 @ 1000e0e6 size=11 ---- */

void Unwind_1000e0e6(void)

{
  int unaff_EBP;
  
  FUN_100027b0((int *)(unaff_EBP + -0x63c));
  return;
}



/* ---- Unwind@1000e0f1 @ 1000e0f1 size=11 ---- */

void Unwind_1000e0f1(void)

{
  int unaff_EBP;
  
  FUN_100027b0((int *)(unaff_EBP + -0x638));
  return;
}



/* ---- Unwind@1000e0fc @ 1000e0fc size=11 ---- */

void Unwind_1000e0fc(void)

{
  int unaff_EBP;
  
  FUN_100027b0((int *)(unaff_EBP + -0x634));
  return;
}



/* ---- Unwind@1000e140 @ 1000e140 size=8 ---- */

void Unwind_1000e140(void)

{
  int unaff_EBP;
  
  CasualNet::~CasualNet(*(CasualNet **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000e148 @ 1000e148 size=13 ---- */

void Unwind_1000e148(void)

{
  FUN_100031a0();
  return;
}



/* ---- Unwind@1000e170 @ 1000e170 size=8 ---- */

void Unwind_1000e170(void)

{
  int unaff_EBP;
  
  CasualNet::~CasualNet(*(CasualNet **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000e178 @ 1000e178 size=13 ---- */

void Unwind_1000e178(void)

{
  FUN_100031a0();
  return;
}



/* ---- Unwind@1000e1a0 @ 1000e1a0 size=8 ---- */

void Unwind_1000e1a0(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000e1a8 @ 1000e1a8 size=8 ---- */

void Unwind_1000e1a8(void)

{
  FUN_10004a70();
  return;
}



/* ---- Unwind@1000e1b0 @ 1000e1b0 size=8 ---- */

void Unwind_1000e1b0(void)

{
  FUN_100085b0();
  return;
}



/* ---- Unwind@1000e1e0 @ 1000e1e0 size=10 ---- */

void Unwind_1000e1e0(void)

{
  CSyncObject::~CSyncObject((CSyncObject *)&DAT_10015620);
  return;
}



/* ---- Unwind@1000e210 @ 1000e210 size=10 ---- */

void Unwind_1000e210(void)

{
  CSyncObject::~CSyncObject((CSyncObject *)&DAT_10015658);
  return;
}



/* ---- Unwind@1000e240 @ 1000e240 size=10 ---- */

void Unwind_1000e240(void)

{
  CSyncObject::~CSyncObject((CSyncObject *)&DAT_10015600);
  return;
}



/* ---- Unwind@1000e270 @ 1000e270 size=11 ---- */

void Unwind_1000e270(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000e275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015640);
  return;
}



/* ---- Unwind@1000e27b @ 1000e27b size=11 ---- */

void Unwind_1000e27b(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000e280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015644);
  return;
}



/* ---- Unwind@1000e286 @ 1000e286 size=11 ---- */

void Unwind_1000e286(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000e28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015648);
  return;
}



/* ---- Unwind@1000e291 @ 1000e291 size=11 ---- */

void Unwind_1000e291(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000e296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_1001564c);
  return;
}



/* ---- ~CCriticalSection @ 1000e2c0 size=110 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CCriticalSection::~CCriticalSection(CCriticalSection *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e1ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSyncObject::CSyncObject((CSyncObject *)&DAT_10015620,(char *)0x0);
  local_4 = 0;
  _DAT_10015620 = &vftable;
  iVar1 = FUN_10001110(0x10015620);
  if (iVar1 == 0) {
    AfxThrowMemoryException();
  }
  _atexit(~CCriticalSection);
  ExceptionList = local_c;
  return;
}



/* ---- ~CCriticalSection @ 1000e330 size=110 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CCriticalSection::~CCriticalSection(CCriticalSection *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e21a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSyncObject::CSyncObject((CSyncObject *)&DAT_10015658,(char *)0x0);
  local_4 = 0;
  _DAT_10015658 = &vftable;
  iVar1 = FUN_10001110(0x10015658);
  if (iVar1 == 0) {
    AfxThrowMemoryException();
  }
  _atexit(~CCriticalSection);
  ExceptionList = local_c;
  return;
}



/* ---- ~CCriticalSection @ 1000e3a0 size=110 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CCriticalSection::~CCriticalSection(CCriticalSection *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e24a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSyncObject::CSyncObject((CSyncObject *)&DAT_10015600,(char *)0x0);
  local_4 = 0;
  _DAT_10015600 = &vftable;
  iVar1 = FUN_10001110(0x10015600);
  if (iVar1 == 0) {
    AfxThrowMemoryException();
  }
  _atexit(~CCriticalSection);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000e410 @ 1000e410 size=28 ---- */

void FUN_1000e410(void)

{
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015654,"");
  _atexit(FUN_1000e5a0);
  return;
}



/* ---- FUN_1000e430 @ 1000e430 size=28 ---- */

void FUN_1000e430(void)

{
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_100155fc,"");
  _atexit(FUN_1000e5b0);
  return;
}



/* ---- FUN_1000e450 @ 1000e450 size=164 ---- */

void FUN_1000e450(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e29c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015640,"[   ]")
  ;
  local_4 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015644,"[   ]")
  ;
  local_4._0_1_ = 1;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015648,"[ERR]")
  ;
  local_4._0_1_ = 2;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_1001564c,"[WRN]")
  ;
  local_4 = CONCAT31(local_4._1_3_,3);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015650,"[DSC]")
  ;
  _atexit((_func_4879 *)&LAB_1000e5c0);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000e4f4 @ 1000e4f4 size=40 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e4f4(void)

{
  _DAT_100155b0 = GetProcessHeap();
  _DAT_100155ac = &PTR_FUN_1000f2c0;
  DAT_100155b4 = 0;
  _atexit(FUN_1000e5d5);
  return;
}



/* ---- FUN_1000e51c @ 1000e51c size=27 ---- */

void FUN_1000e51c(void)

{
  ATL::CAtlStringMgr::CAtlStringMgr((CAtlStringMgr *)&DAT_100155b8,(IAtlMemMgr *)&DAT_100155ac);
  _atexit(FUN_1000e5df);
  return;
}



/* ---- ~CCriticalSection @ 1000e540 size=31 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CCriticalSection::~CCriticalSection(void)

{
  _DAT_10015600 = &vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10015608);
  CSyncObject::~CSyncObject((CSyncObject *)&DAT_10015600);
  return;
}



/* ---- ~CCriticalSection @ 1000e560 size=31 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CCriticalSection::~CCriticalSection(void)

{
  _DAT_10015658 = &vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10015660);
  CSyncObject::~CSyncObject((CSyncObject *)&DAT_10015658);
  return;
}



/* ---- ~CCriticalSection @ 1000e580 size=31 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CCriticalSection::~CCriticalSection(void)

{
  _DAT_10015620 = &vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10015628);
  CSyncObject::~CSyncObject((CSyncObject *)&DAT_10015620);
  return;
}



/* ---- FUN_1000e5a0 @ 1000e5a0 size=11 ---- */

void FUN_1000e5a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000e5a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_10015654);
  return;
}



/* ---- FUN_1000e5b0 @ 1000e5b0 size=11 ---- */

void FUN_1000e5b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000e5b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&DAT_100155fc);
  return;
}



/* ---- FUN_1000e5d5 @ 1000e5d5 size=10 ---- */

void FUN_1000e5d5(void)

{
  ATL::CWin32Heap::~CWin32Heap((CWin32Heap *)&DAT_100155ac);
  return;
}



/* ---- FUN_1000e5df @ 1000e5df size=11 ---- */

void FUN_1000e5df(void)

{
  DAT_100155b8 = &PTR_Allocate_1000f2d4;
  return;
}


// total=458 ok=458 failed=0
