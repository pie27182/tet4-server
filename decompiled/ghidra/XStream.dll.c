// Module: XStream.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- bad_alloc @ 10001000 size=25 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_1000fd5c,1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_10001020 @ 10001020 size=11 ---- */

void __fastcall FUN_10001020(undefined4 *param_1)

{
  *param_1 = &std::bad_alloc::vftable;
  *param_1 = &std::exception::vftable;
  if (param_1[2] != 0) {
    _free((void *)param_1[1]);
  }
  return;
}



/* ---- scalar_deleting_destructor @ 10001030 size=36 ---- */

exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1)

{
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  this->vftablePtr = &vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- FUN_10001060 @ 10001060 size=25 ---- */

exception * __thiscall FUN_10001060(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  param_1->vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
  return param_1;
}



/* ---- ~IXStream @ 10001080 size=7 ---- */

/* public: virtual __thiscall IXStream::~IXStream(void) */

void __thiscall IXStream::~IXStream(IXStream *this)

{
                    /* 0x1080  7  ??1IXStream@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~IXStream @ 10001090 size=9 ---- */

/* public: __thiscall IXStream::IXStream(void) */

void __thiscall IXStream::~IXStream(IXStream *this)

{
                    /* 0x1090  2  ??0IXStream@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~IXStream @ 100010a0 size=11 ---- */

/* public: __thiscall IXStream::IXStream(class IXStream const &) */

void __thiscall IXStream::~IXStream(IXStream *this,IXStream *param_1)

{
                    /* 0x10a0  1  ??0IXStream@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- operator= @ 100010b0 size=5 ---- */

/* public: class IXStream & __thiscall IXStream::operator=(class IXStream const &) */

IXStream * __thiscall IXStream::operator=(IXStream *this,IXStream *param_1)

{
                    /* 0x10b0  10  ??4IXStream@@QAEAAV0@ABV0@@Z */
  return (IXStream *)this;
}



/* ---- scalar_deleting_destructor @ 100010c0 size=83 ---- */

undefined4 * __thiscall IXStream::scalar_deleting_destructor(IXStream *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: IXStream::~IXStream */
    this->vftablePtr = &_vftable_;
    if ((param_1 & 1) != 0) {
      _free(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_(this,4,(int)this[-1].vftablePtr,~IXStream);
  if ((param_1 & 1) != 0) {
    _free(this + -1);
  }
  return this + -1;
}



/* ---- XDequeStream @ 10001120 size=21 ---- */

/* public: __thiscall XDequeStream::XDequeStream(class XDequeStream const &) */

void __thiscall XDequeStream::XDequeStream(XDequeStream *this,XDequeStream *param_1)

{
                    /* 0x1120  3  ??0XDequeStream@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XDequeStream_data).offset_0x0 = *(int *)(param_1 + 4);
  return;
}



/* ---- operator= @ 10001140 size=15 ---- */

/* public: class XDequeStream & __thiscall XDequeStream::operator=(class XDequeStream const &) */

XDequeStream * __thiscall XDequeStream::operator=(XDequeStream *this,XDequeStream *param_1)

{
                    /* 0x1140  11  ??4XDequeStream@@QAEAAV0@ABV0@@Z */
  (this->XDequeStream_data).offset_0x0 = *(int *)(param_1 + 4);
  return (XDequeStream *)this;
}



/* ---- scalar_deleting_destructor @ 10001150 size=118 ---- */

undefined4 * __thiscall XDequeStream::scalar_deleting_destructor(XDequeStream *this,byte param_1)

{
  void *_Memory;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,8,this[-1].XDequeStream_data.offset_0x0,~XDequeStream);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].XDequeStream_data);
    }
    return &this[-1].XDequeStream_data;
  }
  _Memory = (void *)(this->XDequeStream_data).offset_0x0;
                    /* inlined destructor: XDequeStream::~XDequeStream */
  this->vftablePtr = &_vftable_;
  if (_Memory != (void *)0x0) {
    FUN_10001740();
    _free(_Memory);
    (this->XDequeStream_data).offset_0x0 = 0;
  }
                    /* inlined destructor: IXStream::~IXStream */
  this->vftablePtr = (XDequeStream_vftable *)&IXStream::_vftable_;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- logic_error @ 100011d0 size=107 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000adf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception((exception *)this);
  local_4 = 0;
  this->vftablePtr = &vftable;
  (this->logic_error_data).offset_0x14 = 0;
  (this->logic_error_data).offset_0x18 = 0xf;
  *(undefined1 *)&(this->logic_error_data).offset_0x4 = 0;
  FUN_100014e0(&this->logic_error_data,param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- ~logic_error @ 10001240 size=50 ---- */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  if (0xf < (this->logic_error_data).offset_0x18) {
    _free((this->logic_error_data).offset_0x4);
  }
  (this->logic_error_data).offset_0x18 = 0xf;
  (this->logic_error_data).offset_0x14 = 0;
  *(undefined1 *)&(this->logic_error_data).offset_0x4 = 0;
  exception::~exception((exception *)this);
  return;
}



/* ---- vfunction2 @ 10001280 size=14 ---- */

/* std::logic_error member function inherited by std::out_of_range
   std::logic_error member function inherited by std::length_error */

int __thiscall std::logic_error::vfunction2(logic_error *this)

{
  if ((this->logic_error_data).offset_0x18 < 0x10) {
    return (int)&(this->logic_error_data).offset_0x4;
  }
  return (int)(this->logic_error_data).offset_0x4;
}



/* ---- scalar_deleting_destructor @ 10001290 size=71 ---- */

exception * __thiscall
std::length_error::scalar_deleting_destructor(length_error *this,byte param_1)

{
                    /* inlined destructor: std::logic_error::~logic_error */
  this->vftablePtr = (length_error_vftable *)&logic_error::vftable;
  if (0xf < (this->logic_error_data).offset_0x18) {
    _free((this->logic_error_data).offset_0x4);
  }
  (this->logic_error_data).offset_0x18 = 0xf;
  (this->logic_error_data).offset_0x14 = 0;
  *(undefined1 *)&(this->logic_error_data).offset_0x4 = 0;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- FUN_100012e0 @ 100012e0 size=38 ---- */

void __fastcall FUN_100012e0(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ---- FUN_10001310 @ 10001310 size=455 ---- */

void FUN_10001310(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5
                 ,int param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(uint *)(unaff_ESI + 0xc);
  if (*(int *)(unaff_ESI + 0x10) + uVar1 < uVar1) {
    FUN_10002586();
  }
  if ((param_3 == 0) || (param_3 != unaff_ESI)) {
    FUN_10002586();
  }
  uVar1 = param_4 - uVar1;
  if ((param_6 == 0) || (param_6 != param_3)) {
    FUN_10002586();
  }
  iVar2 = param_7 - param_4;
  uVar4 = *(int *)(unaff_ESI + 0x10) + *(uint *)(unaff_ESI + 0xc);
  if (uVar4 < *(uint *)(unaff_ESI + 0xc)) {
    FUN_10002586();
  }
  if (unaff_ESI != param_6) {
    FUN_10002586();
  }
  uVar7 = 0;
  if (uVar1 < uVar4 - param_7) {
    uVar6 = 0;
    uVar4 = *(uint *)(unaff_ESI + 0xc);
    uVar5 = 0;
    if ((uVar4 < *(uint *)(unaff_ESI + 0xc)) ||
       (*(int *)(unaff_ESI + 0x10) + *(uint *)(unaff_ESI + 0xc) < uVar4)) {
      FUN_10002586();
    }
    FUN_10001c60(uVar5,unaff_ESI,uVar4,uVar6,param_3,param_4,uVar7,param_6,param_7);
    if (iVar2 != 0) {
      iVar3 = *(int *)(unaff_ESI + 0x10);
      do {
        if (iVar3 != 0) {
          *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + 1;
          if ((uint)(*(int *)(unaff_ESI + 8) * 0x10) <= *(uint *)(unaff_ESI + 0xc)) {
            *(undefined4 *)(unaff_ESI + 0xc) = 0;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            *(undefined4 *)(unaff_ESI + 0xc) = 0;
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(int *)(unaff_ESI + 0x10) = iVar3;
    }
  }
  else {
    uVar4 = *(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0xc);
    uVar5 = 0;
    if ((uVar4 < *(uint *)(unaff_ESI + 0xc)) ||
       (*(int *)(unaff_ESI + 0x10) + *(uint *)(unaff_ESI + 0xc) < uVar4)) {
      FUN_10002586();
    }
    FUN_10001cd0(0,param_6,param_7,uVar5,unaff_ESI,uVar4,uVar7,param_3,param_4);
    if (iVar2 != 0) {
      iVar3 = *(int *)(unaff_ESI + 0x10);
      do {
        if ((iVar3 != 0) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
          *(undefined4 *)(unaff_ESI + 0xc) = 0;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(int *)(unaff_ESI + 0x10) = iVar3;
    }
  }
  uVar4 = *(uint *)(unaff_ESI + 0xc);
  if (*(int *)(unaff_ESI + 0x10) + uVar4 < uVar4) {
    FUN_10002586();
  }
  uVar4 = uVar4 + uVar1;
  if ((*(int *)(unaff_ESI + 0x10) + *(uint *)(unaff_ESI + 0xc) < uVar4) ||
     (uVar4 < *(uint *)(unaff_ESI + 0xc))) {
    FUN_10002586();
  }
  param_1[2] = uVar4;
  *param_1 = 0;
  param_1[1] = unaff_ESI;
  return;
}



/* ---- FUN_100014e0 @ 100014e0 size=218 ---- */

void * __thiscall FUN_100014e0(void *this,void *param_1,uint param_2,uint param_3)

{
  undefined4 *_Dst;
  length_error *extraout_ECX;
  length_error *this_00;
  int iVar1;
  undefined4 *puVar2;
  uint _MaxCount;
  
  this_00 = this;
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    std::out_of_range::out_of_range(this);
    this_00 = extraout_ECX;
  }
  _MaxCount = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < _MaxCount) {
    _MaxCount = param_3;
  }
  if (this == param_1) {
    FUN_100017c0(this,(undefined4 *)(_MaxCount + param_2),0xffffffff);
    FUN_100017c0(this,(undefined4 *)0x0,param_2);
    return this;
  }
  if (_MaxCount == 0xffffffff) {
    std::length_error::length_error(this_00);
  }
  if (*(uint *)((int)this + 0x18) < _MaxCount) {
    FUN_100019b0(this,_MaxCount);
  }
  else if (_MaxCount == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(uint *)((int)this + 0x18) < 0x10) {
      *(undefined1 *)((int)this + 4) = 0;
      return this;
    }
    **(undefined1 **)((int)this + 4) = 0;
    return this;
  }
  if (_MaxCount != 0) {
    if (*(uint *)((int)param_1 + 0x18) < 0x10) {
      iVar1 = (int)param_1 + 4;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 4);
    }
    puVar2 = (undefined4 *)((int)this + 4);
    if (*(uint *)((int)this + 0x18) < 0x10) {
      _Dst = puVar2;
    }
    else {
      _Dst = (undefined4 *)*puVar2;
    }
    _memcpy_s(_Dst,*(uint *)((int)this + 0x18),(void *)(iVar1 + param_2),_MaxCount);
    *(uint *)((int)this + 0x14) = _MaxCount;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    *(undefined1 *)((int)puVar2 + _MaxCount) = 0;
  }
  return this;
}



/* ---- FUN_100015c0 @ 100015c0 size=375 ---- */

void FUN_100015c0(uint param_1)

{
  void *pvVar1;
  rsize_t _DstSize;
  uint uVar2;
  uint extraout_EAX;
  HANDLE pvVar3;
  undefined4 *_Dst;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  SIZE_T dwBytes;
  LPVOID lpMem;
  
  uVar2 = param_1;
  uVar6 = *(uint *)(param_1 + 8);
  param_1 = 1;
  if (uVar6 == 0xfffffff) {
    std::length_error::length_error((length_error *)0x0);
    uVar6 = extraout_EAX;
  }
  uVar5 = uVar6 >> 1;
  if (uVar5 < 8) {
    uVar5 = 8;
LAB_100015fc:
    if (uVar6 <= 0xfffffff - uVar5) {
      param_1 = uVar5;
    }
  }
  else if (1 < uVar5) goto LAB_100015fc;
  dwBytes = (uVar6 + param_1) * 4;
  DVar9 = 8;
  uVar6 = *(uint *)(uVar2 + 0xc) >> 4;
  pvVar3 = GetProcessHeap();
  _Dst = HeapAlloc(pvVar3,DVar9,dwBytes);
  iVar7 = uVar6 * 4;
  pvVar1 = (void *)(iVar7 + *(int *)(uVar2 + 4));
  iVar4 = (*(int *)(uVar2 + 8) * 4 - (int)pvVar1) + *(int *)(uVar2 + 4) >> 2;
  puVar8 = _Dst + uVar6 + iVar4;
  if (iVar4 != 0) {
    _memmove_s(_Dst + uVar6,iVar4 * 4,pvVar1,iVar4 * 4);
  }
  if (param_1 < uVar6) {
    iVar4 = (int)(param_1 * 4) >> 2;
    if (iVar4 != 0) {
      _DstSize = iVar4 * 4;
      _memmove_s(puVar8,_DstSize,*(void **)(uVar2 + 4),_DstSize);
    }
    pvVar1 = (void *)(param_1 * 4 + *(int *)(uVar2 + 4));
    iVar7 = (iVar7 - (int)pvVar1) + *(int *)(uVar2 + 4) >> 2;
    puVar8 = _Dst + iVar7;
    if (iVar7 != 0) {
      _memmove_s(_Dst,iVar7 * 4,pvVar1,iVar7 * 4);
    }
    if (param_1 == 0) goto LAB_1000170c;
    uVar6 = param_1;
  }
  else {
    iVar7 = iVar7 >> 2;
    if (iVar7 != 0) {
      _memmove_s(puVar8,iVar7 * 4,*(void **)(uVar2 + 4),iVar7 * 4);
    }
    iVar4 = param_1 - uVar6;
    if (iVar4 != 0) {
      puVar8 = puVar8 + iVar7;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    if (uVar6 == 0) goto LAB_1000170c;
    puVar8 = _Dst;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
LAB_1000170c:
  lpMem = *(LPVOID *)(uVar2 + 4);
  if (lpMem != (LPVOID)0x0) {
    DVar9 = 0;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,DVar9,lpMem);
  }
  *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + param_1;
  *(undefined4 **)(uVar2 + 4) = _Dst;
  return;
}



/* ---- FUN_10001740 @ 10001740 size=114 ---- */

void FUN_10001740(void)

{
  int iVar1;
  HANDLE pvVar2;
  int unaff_ESI;
  DWORD DVar3;
  LPVOID pvVar4;
  
  iVar1 = *(int *)(unaff_ESI + 0x10);
  while (iVar1 != 0) {
    if ((*(int *)(unaff_ESI + 0x10) != 0) &&
       (iVar1 = *(int *)(unaff_ESI + 0x10) + -1, *(int *)(unaff_ESI + 0x10) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
    iVar1 = *(int *)(unaff_ESI + 0x10);
  }
  iVar1 = *(int *)(unaff_ESI + 8);
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*(int *)(*(int *)(unaff_ESI + 4) + iVar1 * 4) != 0) {
      pvVar4 = *(LPVOID *)(*(int *)(unaff_ESI + 4) + iVar1 * 4);
      DVar3 = 0;
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,DVar3,pvVar4);
    }
  }
  pvVar4 = *(LPVOID *)(unaff_ESI + 4);
  if (pvVar4 != (LPVOID)0x0) {
    DVar3 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar3,pvVar4);
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  return;
}



/* ---- FUN_100017c0 @ 100017c0 size=131 ---- */

int __thiscall FUN_100017c0(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = param_1;
  if (*(undefined4 **)((int)this + 0x14) < param_1) {
    std::out_of_range::out_of_range(this);
  }
  uVar2 = *(int *)((int)this + 0x14) - (int)param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)((int)this + 4);
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar4 = puVar5;
      param_1 = puVar5;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
      param_1 = (undefined4 *)*puVar5;
    }
    _memmove_s((void *)((int)puVar4 + (int)puVar1),*(uint *)((int)this + 0x18) - (int)puVar1,
               (void *)((int)param_1 + (int)puVar1 + param_2),uVar2 - param_2);
    iVar3 = *(int *)((int)this + 0x14) - param_2;
    *(int *)((int)this + 0x14) = iVar3;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)(iVar3 + (int)puVar5) = 0;
  }
  return (int)this;
}



/* ---- length_error @ 10001850 size=117 ---- */

void __thiscall std::length_error::length_error(length_error *this)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  logic_error local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000ae58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10001b90(local_50,(undefined4 *)"deque<T> too long",0x11);
  local_4 = 0;
  logic_error::logic_error(&local_34,local_50);
  local_34.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_34,&DAT_1000d488);
}



/* ---- FUN_100018d0 @ 100018d0 size=25 ---- */

logic_error * __thiscall FUN_100018d0(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
  return param_1;
}



/* ---- logic_error @ 100018f0 size=113 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000ae28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception((exception *)this,param_1);
  local_4 = 0;
  this->vftablePtr = &vftable;
  (this->logic_error_data).offset_0x18 = 0xf;
  (this->logic_error_data).offset_0x14 = 0;
  *(undefined1 *)&(this->logic_error_data).offset_0x4 = 0;
  FUN_100014e0(&this->logic_error_data,param_1 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_10001970 @ 10001970 size=59 ---- */

void * __thiscall FUN_10001970(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_10001b90(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}



/* ---- FUN_100019b0 @ 100019b0 size=175 ---- */

void __thiscall FUN_100019b0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_3c;
  exception local_2c;
  char *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000add0;
  local_10 = ExceptionList;
  uStack_3c = DAT_1000f060 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  uVar3 = param_1 | 0xf;
  if (uVar3 == 0xffffffff) {
    uVar3 = param_1;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar2 = uVar1 >> 1;
    if ((uVar3 / 3 < uVar2) && (uVar1 <= -uVar2 - 2)) {
      uVar3 = uVar2 + uVar1;
    }
  }
  uVar3 = uVar3 + 1;
  local_8 = 0;
  local_18 = this;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else if ((int)(0xffffffff / (ulonglong)uVar3) == 0) {
    local_1c = (char *)0x0;
                    /* inlined constructor: std::bad_alloc::bad_alloc */
    std::exception::exception(&local_2c,&local_1c);
    local_2c.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2c,&DAT_1000d430);
  }
  local_14 = (undefined1 *)&uStack_3c;
  FUN_100025f6(uVar3);
  FUN_10001a87();
  return;
}



/* ---- Catch_All@10001a5f @ 10001a5f size=34 ---- */

undefined * Catch_All_10001a5f(void)

{
  undefined4 extraout_EAX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  std::bad_alloc::bad_alloc(*(bad_alloc **)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + 8) = extraout_EAX;
  return &DAT_10001a81;
}



/* ---- FUN_10001a87 @ 10001a87 size=105 ---- */

void FUN_10001a87(void)

{
  rsize_t _MaxCount;
  undefined4 *puVar1;
  void *_Src;
  undefined4 *puVar2;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  _MaxCount = *(rsize_t *)(unaff_EBP + 0xc);
  if (_MaxCount != 0) {
    if (*(uint *)(unaff_EDI + 0x18) < 0x10) {
      _Src = (void *)(unaff_EDI + 4);
    }
    else {
      _Src = *(void **)(unaff_EDI + 4);
    }
    _memcpy_s(*(void **)(unaff_EBP + 8),unaff_ESI + 1,_Src,_MaxCount);
  }
  if (0xf < *(uint *)(unaff_EDI + 0x18)) {
    _free(*(void **)(unaff_EDI + 4));
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = (undefined4 *)(unaff_EDI + 4);
  *(undefined1 *)puVar2 = 0;
  *puVar2 = puVar1;
  *(uint *)(unaff_EDI + 0x18) = unaff_ESI;
  *(rsize_t *)(unaff_EDI + 0x14) = _MaxCount;
  if (0xf < unaff_ESI) {
    puVar2 = puVar1;
  }
  *(undefined1 *)((int)puVar2 + _MaxCount) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- Catch_All@10001af0 @ 10001af0 size=48 ---- */

void Catch_All_10001af0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    _free(*(void **)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- bad_alloc @ 10001b30 size=85 ---- */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  char *pcStack00000004;
  exception local_c;
  
  if (pcStack00000004 == (char *)0x0) {
    pcStack00000004 = (char *)0x0;
  }
  else if ((int)(0xffffffff / ZEXT48(pcStack00000004)) == 0) {
    pcStack00000004 = (char *)0x0;
    exception::exception(&local_c,&pcStack00000004);
    local_c.vftablePtr = (exception_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_c,&DAT_1000d430);
  }
  FUN_100025f6((size_t)pcStack00000004);
  return;
}



/* ---- FUN_10001b90 @ 10001b90 size=193 ---- */

void * __thiscall FUN_10001b90(void *this,undefined4 *param_1,uint param_2)

{
  length_error *this_00;
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  this_00 = *(length_error **)((int)this + 0x18);
  puVar3 = (undefined4 *)((int)this + 4);
  if (this_00 < (length_error *)0x10) {
    puVar2 = puVar3;
  }
  else {
    puVar2 = (undefined4 *)*puVar3;
  }
  if (puVar2 <= param_1) {
    if (this_00 < (length_error *)0x10) {
      puVar2 = puVar3;
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar2)) {
      if ((length_error *)0xf < this_00) {
        puVar3 = (undefined4 *)*puVar3;
      }
      pvVar1 = FUN_100014e0(this,this,(int)param_1 - (int)puVar3,param_2);
      return pvVar1;
    }
  }
  if (param_2 == 0xffffffff) {
    std::length_error::length_error(this_00);
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_100019b0(this,param_2);
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
    return this;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar2 = puVar3;
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
    }
    _memcpy_s(puVar2,*(uint *)((int)this + 0x18),param_1,param_2);
    *(uint *)((int)this + 0x14) = param_2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined1 *)((int)puVar3 + param_2) = 0;
  }
  return this;
}



/* ---- FUN_10001c60 @ 10001c60 size=112 ---- */

void __cdecl
FUN_10001c60(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
            uint param_6,undefined4 param_7,int param_8,uint param_9)

{
  FUN_10001d40(0,param_2,param_3,0,param_5,param_6,0,param_8,param_9);
  return;
}



/* ---- FUN_10001cd0 @ 10001cd0 size=112 ---- */

void __cdecl
FUN_10001cd0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,int param_8,uint param_9)

{
  FUN_10001e00(0,param_2,param_3,0,param_5,param_6,0,param_8,param_9);
  return;
}



/* ---- FUN_10001d40 @ 10001d40 size=182 ---- */

void __cdecl
FUN_10001d40(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
            uint param_6,uint param_7,int param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EDI;
  
  iVar1 = param_8;
  iVar3 = param_6 - param_3;
  if (param_8 == 0) {
    FUN_10002586();
  }
  uVar2 = param_9;
  uVar4 = param_9 - iVar3;
  if ((*(int *)(iVar1 + 0x10) + *(uint *)(iVar1 + 0xc) < uVar4) || (uVar4 < *(uint *)(iVar1 + 0xc)))
  {
    FUN_10002586();
  }
  param_7 = param_7 & 0xffffff00;
  *unaff_EDI = 0;
  unaff_EDI[1] = iVar1;
  unaff_EDI[2] = uVar4;
  FUN_10001ec0(&param_4,0,param_2,param_3,0,param_5,param_6,0,iVar1,uVar2);
  return;
}



/* ---- FUN_10001e00 @ 10001e00 size=188 ---- */

void __cdecl
FUN_10001e00(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,int param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *unaff_ESI;
  
  iVar1 = param_8;
  iVar2 = param_6 - param_3;
  if (param_8 == 0) {
    FUN_10002586();
  }
  uVar3 = iVar2 + param_9;
  if ((*(int *)(iVar1 + 0x10) + *(uint *)(iVar1 + 0xc) < uVar3) || (uVar3 < *(uint *)(iVar1 + 0xc)))
  {
    FUN_10002586();
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = uVar3;
  FUN_10001f90(&param_4,0,param_2,param_3,0,param_5,param_6,0,iVar1,param_9);
  return;
}



/* ---- FUN_10001ec0 @ 10001ec0 size=189 ---- */

void __cdecl
FUN_10001ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,int param_6,uint param_7,undefined4 param_8,int param_9,uint param_10
            )

{
  int iVar1;
  uint uVar2;
  
  while (param_4 != param_7) {
    param_7 = param_7 - 1;
    uVar2 = param_7 >> 4;
    if (param_6 == 0) {
      FUN_10002586();
    }
    if ((uint)(*(int *)(param_6 + 0x10) + *(int *)(param_6 + 0xc)) <= param_7) {
      FUN_10002586();
    }
    if (*(uint *)(param_6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_6 + 8);
    }
    iVar1 = *(int *)(*(int *)(param_6 + 4) + uVar2 * 4);
    param_10 = param_10 - 1;
    uVar2 = param_10 >> 4;
    if (param_9 == 0) {
      FUN_10002586();
    }
    if ((uint)(*(int *)(param_9 + 0x10) + *(int *)(param_9 + 0xc)) <= param_10) {
      FUN_10002586();
    }
    if (*(uint *)(param_9 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_9 + 8);
    }
    *(undefined1 *)((param_10 & 0xf) + *(int *)(*(int *)(param_9 + 4) + uVar2 * 4)) =
         *(undefined1 *)(iVar1 + (param_7 & 0xf));
  }
  param_1[2] = param_10;
  *param_1 = 0;
  param_1[1] = param_9;
  return;
}



/* ---- FUN_10001f90 @ 10001f90 size=187 ---- */

void __cdecl
FUN_10001f90(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,int param_9,uint param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  while (param_4 != param_7) {
    uVar3 = param_4 >> 4;
    uVar2 = param_4 & 0xf;
    if (param_3 == 0) {
      FUN_10002586();
    }
    if ((uint)(*(int *)(param_3 + 0x10) + *(int *)(param_3 + 0xc)) <= param_4) {
      FUN_10002586();
    }
    if (*(uint *)(param_3 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_3 + 8);
    }
    iVar1 = *(int *)(*(int *)(param_3 + 4) + uVar3 * 4);
    uVar4 = param_10 >> 4;
    uVar3 = param_10 & 0xf;
    if (param_9 == 0) {
      FUN_10002586();
    }
    if ((uint)(*(int *)(param_9 + 0x10) + *(int *)(param_9 + 0xc)) <= param_10) {
      FUN_10002586();
    }
    if (*(uint *)(param_9 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(param_9 + 8);
    }
    param_10 = param_10 + 1;
    param_4 = param_4 + 1;
    *(undefined1 *)(uVar3 + *(int *)(*(int *)(param_9 + 4) + uVar4 * 4)) =
         *(undefined1 *)(iVar1 + uVar2);
  }
  param_1[2] = param_10;
  *param_1 = 0;
  param_1[1] = param_9;
  return;
}



/* ---- XMemoryStream @ 10002060 size=92 ---- */

/* public: __thiscall XMemoryStream::XMemoryStream(class XMemoryStream const &) */

XMemoryStream * __thiscall XMemoryStream::XMemoryStream(XMemoryStream *this,XMemoryStream *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2060  5  ??0XMemoryStream@@QAE@ABV0@@Z */
  puStack_8 = &LAB_1000ada8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  XMemory::XMemory((XMemory *)&this->XMemoryStream_data,(XMemory *)(param_1 + 4));
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 100020c0 size=26 ---- */

/* public: class XMemoryStream & __thiscall XMemoryStream::operator=(class XMemoryStream const &) */

XMemoryStream * __thiscall XMemoryStream::operator=(XMemoryStream *this,XMemoryStream *param_1)

{
                    /* 0x20c0  12  ??4XMemoryStream@@QAEAAV0@ABV0@@Z */
  XMemory::operator=((XMemory *)&this->XMemoryStream_data,(XMemory *)(param_1 + 4));
  return (XMemoryStream *)this;
}



/* ---- scalar_deleting_destructor @ 100020e0 size=82 ---- */

XMemoryStream * __thiscall
XMemoryStream::scalar_deleting_destructor(XMemoryStream *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    IXStream::IXStream((IXStream *)this);
    if ((param_1 & 1) != 0) {
      _free(this);
    }
    return (XMemoryStream *)this;
  }
  _eh_vector_destructor_iterator_(this,8,(int)this[-1].XMemoryStream_data,IXStream::IXStream);
  if ((param_1 & 1) != 0) {
    _free(&this[-1].XMemoryStream_data);
  }
  return (XMemoryStream *)&this[-1].XMemoryStream_data;
}



/* ---- set_new_handler @ 1000213c size=58 ---- */

/* Library Function - Single Match
    void (__cdecl*__cdecl std::set_new_handler(void (__cdecl*)(void)))(void)
   
   Library: Visual Studio 2005 Release */

_func_void * __cdecl std::set_new_handler(_func_void *param_1)

{
  _func_void *p_Var1;
  _Lockit local_8 [4];
  
  _Lockit::_Lockit(local_8,1);
  p_Var1 = DAT_1000fe40;
  DAT_1000fe40 = param_1;
  _set_new_handler((_func_int_uint *)(-(uint)(param_1 != (_func_void *)0x0) & 0x10002132));
  FUN_100022b7((int *)local_8);
  return p_Var1;
}



/* ---- FUN_10002176 @ 10002176 size=11 ---- */

void __fastcall FUN_10002176(exception *param_1)

{
  param_1->vftablePtr = (exception_vftable *)&std::out_of_range::vftable;
  param_1->vftablePtr = (exception_vftable *)&std::logic_error::vftable;
  if ((exception_vftable *)0xf < param_1[3].vftablePtr) {
    _free(param_1[1].exception_data.offset_0x0);
  }
  param_1[3].vftablePtr = (exception_vftable *)0xf;
  param_1[2].exception_data.offset_0x4 = 0;
  *(undefined1 *)&param_1[1].exception_data.offset_0x0 = 0;
  std::exception::~exception(param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 10002181 size=34 ---- */

exception * __thiscall
std::out_of_range::scalar_deleting_destructor(out_of_range *this,byte param_1)

{
                    /* inlined destructor: std::out_of_range::~out_of_range */
  this->vftablePtr = &vftable;
  logic_error::~logic_error((logic_error *)this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- length_error @ 100021a3 size=62 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void __thiscall std::length_error::length_error(length_error *this)

{
  logic_error local_54;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x100021af;
  FUN_10001970(local_2c,"string too long");
  local_8 = 0;
  logic_error::logic_error(&local_54,local_2c);
  local_54.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_54,&DAT_1000d488);
}



/* ---- out_of_range @ 100021e2 size=62 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void __thiscall std::out_of_range::out_of_range(out_of_range *this)

{
  logic_error local_54;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x100021ee;
  FUN_10001970(local_2c,"invalid string position");
  local_8 = 0;
  logic_error::logic_error(&local_54,local_2c);
  local_54.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_54,&DAT_1000cf40);
}



/* ---- FUN_10002221 @ 10002221 size=24 ---- */

logic_error * __thiscall FUN_10002221(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
  return param_1;
}



/* ---- thunk_FUN_100025f6 @ 10002239 size=5 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl thunk_FUN_100025f6(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  exception eStack_10;
  
  do {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if ((_DAT_1000febc & 1) == 0) {
    _DAT_1000febc = _DAT_1000febc | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_1000feb0);
    _atexit(std::bad_alloc::~bad_alloc);
  }
  std::exception::exception(&eStack_10,(exception *)&DAT_1000feb0);
  eStack_10.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&eStack_10,&DAT_1000d430);
}



/* ---- _Init_locks @ 1000223e size=47 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&DAT_1000f02c);
  if (LVar1 == 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_1000fe48;
    do {
      FUN_100022c9(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x1000fea8);
  }
  return this;
}



/* ---- _Lockit @ 10002296 size=33 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Lockit::_Lockit(int)
   
   Library: Visual Studio 2005 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(uint *)this = param_1 & 3U;
  FUN_100022df((LPCRITICAL_SECTION)(&DAT_1000fe48 + (param_1 & 3U) * 0x18));
  return this;
}



/* ---- FUN_100022b7 @ 100022b7 size=18 ---- */

void __fastcall FUN_100022b7(int *param_1)

{
  FUN_100022ea((LPCRITICAL_SECTION)(&DAT_1000fe48 + *param_1 * 0x18));
  return;
}



/* ---- FUN_100022c9 @ 100022c9 size=11 ---- */

void __cdecl FUN_100022c9(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



/* ---- FUN_100022d4 @ 100022d4 size=11 ---- */

void __cdecl FUN_100022d4(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



/* ---- FUN_100022df @ 100022df size=11 ---- */

void __cdecl FUN_100022df(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



/* ---- FUN_100022ea @ 100022ea size=11 ---- */

void __cdecl FUN_100022ea(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



/* ---- exception @ 100022f5 size=17 ---- */

void __thiscall std::exception::exception(exception *this)

{
  (this->exception_data).offset_0x0 = (char *)0x0;
  (this->exception_data).offset_0x4 = 0;
  this->vftablePtr = &vftable;
  return;
}



/* ---- exception @ 10002306 size=78 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  this->vftablePtr = &vftable;
  if (*param_1 == (char *)0x0) {
    (this->exception_data).offset_0x0 = (char *)0x0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    (this->exception_data).offset_0x0 = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  (this->exception_data).offset_0x4 = 1;
  return this;
}



/* ---- exception @ 10002354 size=24 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  this->vftablePtr = &vftable;
  pcVar1 = *param_1;
  (this->exception_data).offset_0x4 = 0;
  (this->exception_data).offset_0x0 = pcVar1;
  return;
}



/* ---- exception @ 1000236c size=88 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  this->vftablePtr = &vftable;
  iVar1 = *(int *)(param_1 + 8);
  (this->exception_data).offset_0x4 = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    (this->exception_data).offset_0x0 = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    (this->exception_data).offset_0x0 = (char *)0x0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    (this->exception_data).offset_0x0 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/* ---- ~exception @ 100023c4 size=22 ---- */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall std::exception::~exception(exception *this)

{
  int iVar1;
  
  iVar1 = (this->exception_data).offset_0x4;
  this->vftablePtr = &vftable;
  if (iVar1 != 0) {
    _free((this->exception_data).offset_0x0);
  }
  return;
}



/* ---- vfunction2 @ 100023da size=13 ---- */

/* std::exception member function inherited by std::bad_exception
   std::exception member function inherited by std::bad_alloc */

char * __thiscall std::exception::vfunction2(exception *this)

{
  char *pcVar1;
  
  pcVar1 = (this->exception_data).offset_0x0;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/* ---- scalar_deleting_destructor @ 100023e7 size=28 ---- */

exception * __thiscall std::exception::scalar_deleting_destructor(exception *this,byte param_1)

{
  ~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- _free @ 10002403 size=5 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_10010980 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000668b(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10003328();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10010694,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10003fb0();
      DVar4 = GetLastError();
      DVar4 = FUN_10003f75(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- __security_check_cookie @ 10002408 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_1000f060) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- ~type_info @ 10002417 size=14 ---- */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  this->vftablePtr = &vftable;
  _Type_info_dtor((type_info *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 10002425 size=28 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::scalar_deleting_destructor(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- operator== @ 10002441 size=27 ---- */

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)((int)&this[1].vftablePtr + 1));
  return (bool)('\x01' - (iVar1 != 0));
}



/* ---- FUN_1000245c @ 1000245c size=10 ---- */

void __cdecl FUN_1000245c(undefined4 param_1)

{
  DAT_1000feac = param_1;
  return;
}



/* ---- __invoke_watson @ 10002466 size=252 ---- */

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  int iVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4 [39];
  
  iVar1 = DAT_1000f060;
  local_2d4[0] = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_10003568();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/* ---- FUN_10002562 @ 10002562 size=36 ---- */

void __cdecl
FUN_10002562(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_100036cd(DAT_1000feac);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_10003568();
                    /* WARNING: Subroutine does not return */
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x10002576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- FUN_10002586 @ 10002586 size=16 ---- */

void FUN_10002586(void)

{
  FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



/* ---- _memmove_s @ 10002596 size=91 ---- */

/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  DWORD *pDVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_100025eb:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      pDVar1 = FUN_10003fb0();
      eVar2 = 0x16;
      *pDVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_100025eb;
      }
      pDVar1 = FUN_10003fb0();
      eVar2 = 0x22;
      *pDVar1 = 0x22;
    }
    FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar2;
}



/* ---- _free @ 100025f1 size=5 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_10010980 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000668b(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10003328();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10010694,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10003fb0();
      DVar4 = GetLastError();
      DVar4 = FUN_10003f75(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- FUN_100025f6 @ 100025f6 size=105 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100025f6(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  exception local_10;
  
  do {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if ((_DAT_1000febc & 1) == 0) {
    _DAT_1000febc = _DAT_1000febc | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_1000feb0);
    _atexit(std::bad_alloc::~bad_alloc);
  }
                    /* inlined constructor: std::bad_alloc::bad_alloc */
  std::exception::exception(&local_10,(exception *)&DAT_1000feb0);
  local_10.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_10,&DAT_1000d430);
}



/* ---- __purecall @ 10002660 size=42 ---- */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __thiscall __purecall(void *this)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_100036cd(DAT_10010534);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_100040d4(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* ---- __ArrayUnwind @ 1000268a size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 100026e8 size=75 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_10002733();
  return;
}



/* ---- FUN_10002733 @ 10002733 size=24 ---- */

void FUN_10002733(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- _memcpy_s @ 1000274b size=123 ---- */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  DWORD *pDVar2;
  
  if (_MaxCount == 0) {
LAB_10002759:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_10002762:
      pDVar2 = FUN_10003fb0();
      eVar1 = 0x16;
      *pDVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_10002759;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_10002762;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      pDVar2 = FUN_10003fb0();
      eVar1 = 0x22;
      *pDVar2 = 0x22;
    }
    FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/* ---- __CRT_INIT@12 @ 100027c6 size=473 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2005 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar5;
  int iVar6;
  DWORD *_Memory;
  code *pcVar7;
  uint uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  SIZE_T dwBytes;
  DWORD *pDVar11;
  
  if (param_2 == 1) {
    dwBytes = 0x94;
    DVar9 = 0;
    pvVar4 = GetProcessHeap();
    lpVersionInformation = HeapAlloc(pvVar4,DVar9,dwBytes);
    if (lpVersionInformation != (LPOSVERSIONINFOA)0x0) {
      lpVersionInformation->dwOSVersionInfoSize = 0x94;
      BVar5 = GetVersionExA(lpVersionInformation);
      DVar9 = 0;
      if (BVar5 == 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
      }
      else {
        DVar1 = lpVersionInformation->dwPlatformId;
        DVar2 = lpVersionInformation->dwMajorVersion;
        DVar3 = lpVersionInformation->dwMinorVersion;
        uVar8 = lpVersionInformation->dwBuildNumber & 0x7fff;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
        if (DVar1 != 2) {
          uVar8 = uVar8 | 0x8000;
        }
        _DAT_10010548 = DVar2 * 0x100 + DVar3;
        DAT_10010540 = DVar1;
        _DAT_10010544 = uVar8;
        DAT_1001054c = DVar2;
        _DAT_10010550 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_10010abc = GetCommandLineA();
            DAT_1000fec4 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_1000fec0 = DAT_1000fec0 + 1;
                return 1;
              }
              __ioterm();
            }
            __mtterm();
          }
          __heap_term();
        }
      }
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_1000fec0) {
      DAT_1000fec0 = DAT_1000fec0 + -1;
      if (DAT_1001057c == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        __freeptd((_ptiddata)0x0);
        return 1;
      }
      return 1;
    }
    FUN_10003744();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_1000f070;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_100036cd(DAT_1001020c);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_100037b3((int)_Memory,0);
        DVar9 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar9;
        return 1;
      }
      _free(_Memory);
    }
  }
  return 0;
}



/* ---- ___DllMainCRTStartup @ 1000299f size=226 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_1000fec0 == 0)) {
LAB_10002a8d:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_1000b21c != (undefined *)0x0) {
        local_20 = (*(code *)PTR_1000b21c)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_10002a8d;
    }
    local_20 = FUN_1000565c();
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_1000565c();
      __CRT_INIT_12(param_3,0,param_1);
      if (PTR_1000b21c != (undefined *)0x0) {
        (*(code *)PTR_1000b21c)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (PTR_1000b21c != (undefined *)0x0)) {
        local_20 = (*(code *)PTR_1000b21c)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/* ---- entry @ 10002a95 size=33 ---- */

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- FUN_10002ab6 @ 10002ab6 size=10 ---- */

void __cdecl FUN_10002ab6(undefined4 param_1)

{
  DAT_1000fed4 = param_1;
  return;
}



/* ---- _set_new_handler @ 10002ac0 size=49 ---- */

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2005 Release */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  __lock(4);
  p_Var1 = (_func_int_uint *)FUN_100036cd(DAT_1000fed4);
  DAT_1000fed4 = FUN_10003656((int)param_1);
  FUN_10005794(4);
  return p_Var1;
}



/* ---- __callnewh @ 10002af1 size=34 ---- */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_100036cd(DAT_1000fed4);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ---- _strlen @ 10002b20 size=139 ---- */

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  if (((uint)_Str & 3) != 0) {
    do {
      uVar1 = *puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
      if ((char)uVar1 == '\0') goto LAB_10002b83;
    } while (((uint)puVar2 & 3) != 0);
  }
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
LAB_10002b83:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* ---- __CxxThrowException@8 @ 10002bab size=74 ---- */

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2005 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_1000b220;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



/* ---- _JumpToContinuation @ 10002bf5 size=43 ---- */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10002c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/* ---- FID_conflict:_CallMemberFunction1 @ 10002c25 size=7 ---- */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10002c2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}



/* ---- _UnwindNestedFrames @ 10002c2c size=82 ---- */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10002c55,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* ---- FID_conflict:___CxxFrameHandler3 @ 10002c7e size=54 ---- */

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}



/* ---- _CallSETranslator @ 10002ce4 size=213 ---- */

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  undefined4 local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_c = (undefined1 *)((int)register0x00000010 + -4);
  local_10 = (undefined1 *)((int)register0x00000010 + -0x40);
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x10002d8d;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_1000f060 ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}



/* ---- TranslatorGuardHandler @ 10002db9 size=152 ---- */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x10002e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/* ---- _GetRangeOfTrysToCheck @ 10002e56 size=115 ---- */

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}



/* ---- __CreateFrameInfo @ 10002ec9 size=40 ---- */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}



/* ---- __IsExceptionObjectToBeDestroyed @ 10002ef1 size=33 ---- */

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}



/* ---- __FindAndUnlinkFrame @ 10002f12 size=76 ---- */

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  _ptiddata p_Var1;
  void *pvVar2;
  
  p_Var1 = __getptd();
  if (param_1 == p_Var1->_pFrameInfoChain) {
    p_Var1 = __getptd();
    p_Var1->_pFrameInfoChain = *(void **)((int)param_1 + 4);
    return;
  }
  p_Var1 = __getptd();
  pvVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (*(int *)((int)pvVar2 + 4) == 0) {
      _inconsistency();
      return;
    }
    if (param_1 == *(void **)((int)pvVar2 + 4)) break;
    pvVar2 = *(void **)((int)pvVar2 + 4);
  }
  *(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)((int)param_1 + 4);
  return;
}



/* ---- _CallCatchBlock2 @ 10002f5e size=94 ---- */

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_1000f060 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_10002cb4;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/* ---- __EH_prolog3 @ 10002fbc size=51 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1000f060 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __EH_prolog3_catch @ 10002fef size=54 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1000f060 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- FUN_10003025 @ 10003025 size=185 ---- */

int __cdecl FUN_10003025(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_100036cd(DAT_10010aa8);
  piVar2 = (int *)FUN_100036cd(DAT_10010aa4);
  if (_Memory <= piVar2) {
    uVar1 = ((int)piVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        piVar2 = (int *)((int)pvVar5 + ((int)piVar2 - (int)_Memory >> 2) * 4);
        DAT_10010aa8 = FUN_10003656((int)pvVar5);
      }
      iVar6 = FUN_10003656(param_1);
      *piVar2 = iVar6;
      DAT_10010aa4 = FUN_10003656((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/* ---- __onexit @ 1000310d size=54 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_10004914();
  p_Var1 = (_onexit_t)FUN_10003025((int)_Func);
  FUN_10003143();
  return p_Var1;
}



/* ---- FUN_10003143 @ 10003143 size=6 ---- */

void FUN_10003143(void)

{
  FUN_1000491d();
  return;
}



/* ---- _atexit @ 10003149 size=18 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- _strcpy_s @ 1000315b size=101 ---- */

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar3 = _Dst;
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      pDVar2 = FUN_10003fb0();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000317a;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_10003fb0();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000317a:
  FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- _V6_HeapAlloc @ 100031c0 size=70 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  int *local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10010970) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_10003206();
  }
  return local_20;
}



/* ---- FUN_10003206 @ 10003206 size=9 ---- */

void FUN_10003206(void)

{
  FUN_10005794(4);
  return;
}



/* ---- _malloc @ 1000320f size=195 ---- */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  DWORD *pDVar4;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    pDVar4 = FUN_10003fb0();
    *pDVar4 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_10010694 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_100040d4(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_10010980 == 1) {
      if (_Size == 0) {
        sVar1 = 1;
      }
      else {
        sVar1 = _Size;
      }
LAB_10003280:
      piVar2 = HeapAlloc(DAT_10010694,0,sVar1);
    }
    else if ((DAT_10010980 != 3) || (piVar2 = _V6_HeapAlloc((uint *)_Size), piVar2 == (int *)0x0)) {
      sVar1 = _Size;
      if (_Size == 0) {
        sVar1 = 1;
      }
      sVar1 = sVar1 + 0xf & 0xfffffff0;
      goto LAB_10003280;
    }
    if (piVar2 != (int *)0x0) {
      return piVar2;
    }
    if (DAT_100107ec == 0) {
      pDVar4 = FUN_10003fb0();
      *pDVar4 = 0xc;
      goto LAB_100032ae;
    }
    iVar3 = __callnewh(_Size);
    if (iVar3 == 0) {
LAB_100032ae:
      pDVar4 = FUN_10003fb0();
      *pDVar4 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/* ---- _free @ 100032d2 size=133 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_10010980 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000668b(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10003328();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10010694,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10003fb0();
      DVar4 = GetLastError();
      DVar4 = FUN_10003f75(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- FUN_10003328 @ 10003328 size=9 ---- */

void FUN_10003328(void)

{
  FUN_10005794(4);
  return;
}



/* ---- ___report_gsfailure @ 10003360 size=260 ---- */

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
  
  _DAT_1000fff0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1000fff4 = &uStack00000004;
  _DAT_1000ff30 = 0x10001;
  _DAT_1000fed8 = 0xc0000409;
  _DAT_1000fedc = 1;
  local_32c = DAT_1000f060;
  local_328 = DAT_1000f064;
  _DAT_1000fee4 = _local_res0;
  _DAT_1000ffbc = in_GS;
  _DAT_1000ffc0 = in_FS;
  _DAT_1000ffc4 = in_ES;
  _DAT_1000ffc8 = in_DS;
  _DAT_1000ffcc = unaff_EDI;
  _DAT_1000ffd0 = unaff_ESI;
  _DAT_1000ffd4 = unaff_EBX;
  _DAT_1000ffd8 = in_EDX;
  _DAT_1000ffdc = in_ECX;
  _DAT_1000ffe0 = in_EAX;
  _DAT_1000ffe4 = unaff_EBP;
  DAT_1000ffe8 = _local_res0;
  _DAT_1000ffec = in_CS;
  _DAT_1000fff8 = in_SS;
  DAT_1000ff28 = IsDebuggerPresent();
  FUN_10003568();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1000b240);
  if (DAT_1000ff28 == 0) {
    FUN_10003568();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- _Type_info_dtor @ 10003464 size=103 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  
  __lock(0xe);
  _Memory = DAT_10010200;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_100101fc;
    while (DAT_10010200 != (int *)0x0) {
      if (*DAT_10010200 == *(int *)(param_1 + 4)) {
        piVar1[1] = DAT_10010200[1];
        _free(_Memory);
        break;
      }
      piVar1 = DAT_10010200;
    }
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_100034cb();
  return;
}



/* ---- FUN_100034cb @ 100034cb size=9 ---- */

void FUN_100034cb(void)

{
  FUN_10005794(0xe);
  return;
}



/* ---- _strcmp @ 100034e0 size=135 ---- */

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar3 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar4 = bVar3 < (byte)*_Str2;
      if (bVar3 != *_Str2) goto LAB_10003524;
      _Str2 = _Str2 + 1;
      if (bVar3 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100034f0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar3 = (byte)uVar1;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) goto LAB_10003524;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) goto LAB_10003524;
    if (bVar3 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100034f0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar3 = (byte)uVar2;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x10);
    bVar4 = bVar3 < (byte)_Str2[2];
    if (bVar3 != _Str2[2]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    bVar4 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10003524:
  return (uint)bVar4 * -2 + 1;
}



/* ---- FUN_10003568 @ 10003568 size=8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003568(void)

{
  _DAT_10010ab8 = 0;
  return;
}



/* ---- _memset @ 10003570 size=122 ---- */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *extraout_EAX;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10010964 != 0)) {
    __VEC_memzero(_Dst,_Val,_Size);
    return extraout_EAX;
  }
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(char *)puVar4 = (char)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* ---- FUN_100035ea @ 100035ea size=108 ---- */

undefined4 FUN_100035ea(void)

{
  int iVar1;
  HMODULE pHVar2;
  int iVar3;
  uint uVar4;
  char *_Str2;
  undefined4 local_c;
  int local_8;
  
  uVar4 = 0;
  local_c = 1;
  local_8 = 0;
  __get_winmajor(&local_8);
  if (local_8 < 6) {
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    iVar1 = pHVar2[0xf].unused;
    _Str2 = (char *)((int)&pHVar2[6].unused +
                    iVar1 + (uint)*(ushort *)((int)&pHVar2[5].unused + iVar1));
    if (*(short *)((int)&pHVar2[1].unused + iVar1 + 2) != 0) {
      do {
        iVar3 = _strcmp(".mixcrt",_Str2);
        if (iVar3 == 0) {
          local_c = 0;
          break;
        }
        uVar4 = uVar4 + 1;
        _Str2 = _Str2 + 0x28;
      } while (uVar4 < *(ushort *)((int)&pHVar2[1].unused + iVar1 + 2));
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}



/* ---- FUN_10003656 @ 10003656 size=110 ---- */

int __cdecl FUN_10003656(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1000f074);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1000f070 != -1)) {
    iVar3 = DAT_1000f070;
    pcVar2 = TlsGetValue(DAT_1000f074);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_100036b0;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_100035ea();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_100036b0:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- __encoded_null @ 100036c4 size=9 ---- */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_10003656(0);
  return;
}



/* ---- FUN_100036cd @ 100036cd size=110 ---- */

int __cdecl FUN_100036cd(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1000f074);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1000f070 != -1)) {
    iVar3 = DAT_1000f070;
    pcVar2 = TlsGetValue(DAT_1000f074);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_10003727;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_100035ea();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_10003727:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- FUN_10003744 @ 10003744 size=50 ---- */

LPVOID FUN_10003744(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1000f074);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_100036cd(DAT_10010208);
    TlsSetValue(DAT_1000f074,lpTlsValue);
  }
  return lpTlsValue;
}



/* ---- __mtterm @ 10003776 size=61 ---- */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1000f070 != -1) {
    iVar2 = DAT_1000f070;
    pcVar1 = (code *)FUN_100036cd(DAT_10010210);
    (*pcVar1)(iVar2);
    DAT_1000f070 = -1;
  }
  if (DAT_1000f074 != 0xffffffff) {
    TlsFree(DAT_1000f074);
    DAT_1000f074 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/* ---- FUN_100037b3 @ 100037b3 size=182 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_100037b3(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_1000f2f8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_100035ea();
    if (iVar1 != 0) {
      pFVar2 = GetProcAddress(hModule,"EncodePointer");
      *(FARPROC *)(param_1 + 0x1f8) = pFVar2;
      pFVar2 = GetProcAddress(hModule,"DecodePointer");
      *(FARPROC *)(param_1 + 0x1fc) = pFVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 200) = 0x43;
  *(undefined1 *)(param_1 + 0x14b) = 0x43;
  *(undefined **)(param_1 + 0x68) = &DAT_1000f5c8;
  InterlockedIncrement((LONG *)&DAT_1000f5c8);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_1000f5b8;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_10003869();
  return;
}



/* ---- FUN_10003869 @ 10003869 size=9 ---- */

void FUN_10003869(void)

{
  FUN_10005794(0xc);
  return;
}



/* ---- FUN_10003872 @ 10003872 size=119 ---- */

DWORD * FUN_10003872(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1000f070;
  pcVar1 = FUN_10003744();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_1000f070;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_100036cd(DAT_1001020c);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_100037b3((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}



/* ---- __getptd @ 100038e9 size=24 ---- */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_10003872();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/* ---- __freefls@4 @ 10003901 size=265 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_1000f2f8) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_1000f5c8)) {
        _free(pLVar1);
      }
    }
    FUN_10003a0d();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_1000f5b8) && (pLVar1 != (LONG *)&DAT_1000f4e0)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_10003a19();
    _free(param_1);
  }
  return;
}



/* ---- FUN_10003a0d @ 10003a0d size=9 ---- */

void FUN_10003a0d(void)

{
  FUN_10005794(0xd);
  return;
}



/* ---- FUN_10003a19 @ 10003a19 size=9 ---- */

void FUN_10003a19(void)

{
  FUN_10005794(0xc);
  return;
}



/* ---- __freeptd @ 10003a22 size=105 ---- */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1000f070 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1000f074), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1000f070;
      pcVar2 = TlsGetValue(DAT_1000f074);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_1000f070;
    pcVar2 = (code *)FUN_100036cd(DAT_1001020c);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1000f074 != 0xffffffff) {
    TlsSetValue(DAT_1000f074,(LPVOID)0x0);
  }
  return;
}



/* ---- __mtinit @ 10003a8b size=388 ---- */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  code *pcVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_10010204 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10010208 = GetProcAddress(hModule,"FlsGetValue");
  DAT_1001020c = GetProcAddress(hModule,"FlsSetValue");
  DAT_10010210 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10010204 == (FARPROC)0x0) || (DAT_10010208 == (FARPROC)0x0)) ||
      (DAT_1001020c == (FARPROC)0x0)) || (DAT_10010210 == (FARPROC)0x0)) {
    DAT_10010208 = TlsGetValue_exref;
    DAT_10010204 = (FARPROC)&LAB_1000373b;
    DAT_1001020c = TlsSetValue_exref;
    DAT_10010210 = TlsFree_exref;
  }
  DAT_1000f074 = TlsAlloc();
  if ((DAT_1000f074 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1000f074,DAT_10010208), BVar1 != 0))
  {
    __init_pointers();
    DAT_10010204 = (FARPROC)FUN_10003656((int)DAT_10010204);
    DAT_10010208 = (FARPROC)FUN_10003656((int)DAT_10010208);
    DAT_1001020c = (FARPROC)FUN_10003656((int)DAT_1001020c);
    DAT_10010210 = (FARPROC)FUN_10003656((int)DAT_10010210);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_100036cd((int)DAT_10010204);
      DAT_1000f070 = (*pcVar3)(pcVar6);
      if ((DAT_1000f070 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_1000f070;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_100036cd((int)DAT_1001020c);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_100037b3((int)pDVar4,0);
          DVar5 = GetCurrentThreadId();
          pDVar4[1] = 0xffffffff;
          *pDVar4 = DVar5;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}



/* ---- _memmove @ 10003c10 size=711 ---- */

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *extraout_EAX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10003df3_caseD_2;
        case 3:
          goto switchD_10003df3_caseD_3;
        }
        goto switchD_10003df3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10003df3_caseD_0;
      case 1:
        goto switchD_10003df3_caseD_1;
      case 2:
        goto switchD_10003df3_caseD_2;
      case 3:
        goto switchD_10003df3_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10003df3_caseD_2;
            case 3:
              goto switchD_10003df3_caseD_3;
            }
            goto switchD_10003df3_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10003df3_caseD_2;
            case 3:
              goto switchD_10003df3_caseD_3;
            }
            goto switchD_10003df3_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10003df3_caseD_2;
            case 3:
              goto switchD_10003df3_caseD_3;
            }
            goto switchD_10003df3_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10003df3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_10003df3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_10003df3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_10003df3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10010964 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    __VEC_memcpy(_Dst,_Src,_Size);
    return extraout_EAX;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_10003c6c_caseD_2;
      case 3:
        goto switchD_10003c6c_caseD_3;
      }
      goto switchD_10003c6c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_10003c6c_caseD_0;
    case 1:
      goto switchD_10003c6c_caseD_1;
    case 2:
      goto switchD_10003c6c_caseD_2;
    case 3:
      goto switchD_10003c6c_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10003c6c_caseD_2;
          case 3:
            goto switchD_10003c6c_caseD_3;
          }
          goto switchD_10003c6c_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10003c6c_caseD_2;
          case 3:
            goto switchD_10003c6c_caseD_3;
          }
          goto switchD_10003c6c_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_10003c6c_caseD_2;
          case 3:
            goto switchD_10003c6c_caseD_3;
          }
          goto switchD_10003c6c_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10003c6c_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_10003c6c_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_10003c6c_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_10003c6c_caseD_0:
  return _Dst;
}



/* ---- FUN_10003f75 @ 10003f75 size=59 ---- */

int __cdecl FUN_10003f75(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1000f080)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1000f084);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/* ---- FUN_10003fb0 @ 10003fb0 size=19 ---- */

DWORD * FUN_10003fb0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10003872();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1000f1e8;
  }
  return pDVar1 + 2;
}



/* ---- _abort @ 10003fc3 size=242 ---- */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4 [39];
  
  if (((byte)DAT_1000f1f0 & 1) != 0) {
    FUN_100040d4(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_1000f1f0 & 2) != 0) {
    local_2d4[0] = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



/* ---- __set_abort_behavior @ 100040b6 size=30 ---- */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_1000f1f0;
  DAT_1000f1f0 = ~_Mask & DAT_1000f1f0 | _Flags & _Mask;
  return uVar1;
}



/* ---- FUN_100040d4 @ 100040d4 size=399 ---- */

void __cdecl FUN_100040d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_1000f1f8)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_1000fed0 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1000f1fc);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10010218,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10010335 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10010231,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10010231,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10010231);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10010231);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x100101f6),
                           (int)&DAT_1001052c - (int)(sVar5 + 0x100101f6),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10010218,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10010218,0x314,*(char **)(uVar6 * 8 + 0x1000f1fc));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10007fd1(&DAT_10010218,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ---- __FF_MSGBANNER @ 10004274 size=57 ---- */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_1000fed0 != 1) {
      return;
    }
  }
  FUN_100040d4(0xfc);
  FUN_100040d4(0xff);
  return;
}



/* ---- FUN_100042ad @ 100042ad size=10 ---- */

void __cdecl FUN_100042ad(undefined4 param_1)

{
  DAT_10010534 = param_1;
  return;
}



/* ---- terminate @ 100042b7 size=44 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* ---- unexpected @ 100042f0 size=19 ---- */

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}



/* ---- _inconsistency @ 10004303 size=48 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_100036cd(DAT_10010538);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/* ---- __initp_eh_hooks @ 1000433a size=17 ---- */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_10010538 = FUN_10003656(0x100042b7);
  return;
}



/* ---- __SEH_prolog4 @ 1000434c size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1000f060 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 10004391 size=20 ---- */

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



/* ---- __except_handler4 @ 100043b0 size=406 ---- */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1000f060);
  bVar3 = false;
  local_c = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)((int)param_2 + -4) = &local_8;
    uVar7 = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return 1;
    }
    do {
      uVar2 = piVar8[uVar7 * 3 + 4];
      if ((undefined *)piVar8[uVar7 * 3 + 5] != (undefined *)0x0) {
        iVar4 = _EH4_CallFilterFunc((undefined *)piVar8[uVar7 * 3 + 5]);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_1000445b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1000b888 != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1000b888)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1000b888)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_1000f060);
          }
          *(uint *)((int)param_2 + 0xc) = uVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((undefined *)(piVar8 + uVar7 * 3 + 4)[2]);
          return uVar6;
        }
      }
      uVar7 = uVar2;
    } while (uVar2 != 0xfffffffe);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_1000f060);
  }
LAB_1000445b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/* ---- _memcpy @ 10004550 size=711 ---- */

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *extraout_EAX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10004733_caseD_2;
        case 3:
          goto switchD_10004733_caseD_3;
        }
        goto switchD_10004733_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10004733_caseD_0;
      case 1:
        goto switchD_10004733_caseD_1;
      case 2:
        goto switchD_10004733_caseD_2;
      case 3:
        goto switchD_10004733_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10004733_caseD_2;
            case 3:
              goto switchD_10004733_caseD_3;
            }
            goto switchD_10004733_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10004733_caseD_2;
            case 3:
              goto switchD_10004733_caseD_3;
            }
            goto switchD_10004733_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10004733_caseD_2;
            case 3:
              goto switchD_10004733_caseD_3;
            }
            goto switchD_10004733_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10004733_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_10004733_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_10004733_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_10004733_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10010964 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    __VEC_memcpy(_Dst,_Src,_Size);
    return extraout_EAX;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100045ac_caseD_2;
      case 3:
        goto switchD_100045ac_caseD_3;
      }
      goto switchD_100045ac_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100045ac_caseD_0;
    case 1:
      goto switchD_100045ac_caseD_1;
    case 2:
      goto switchD_100045ac_caseD_2;
    case 3:
      goto switchD_100045ac_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100045ac_caseD_2;
          case 3:
            goto switchD_100045ac_caseD_3;
          }
          goto switchD_100045ac_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100045ac_caseD_2;
          case 3:
            goto switchD_100045ac_caseD_3;
          }
          goto switchD_100045ac_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100045ac_caseD_2;
          case 3:
            goto switchD_100045ac_caseD_3;
          }
          goto switchD_100045ac_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100045ac_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100045ac_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100045ac_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100045ac_caseD_0:
  return _Dst;
}



/* ---- __amsg_exit @ 100048b5 size=36 ---- */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_100040d4(param_1);
  pcVar1 = (code *)FUN_100036cd((int)PTR___exit_1000f2b0);
  (*pcVar1)(0xff);
  return;
}



/* ---- FUN_100048d9 @ 100048d9 size=38 ---- */

void __cdecl FUN_100048d9(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}



/* ---- ___crtExitProcess @ 100048ff size=20 ---- */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_100048d9(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ---- FUN_10004914 @ 10004914 size=9 ---- */

void FUN_10004914(void)

{
  __lock(8);
  return;
}



/* ---- FUN_1000491d @ 1000491d size=9 ---- */

void FUN_1000491d(void)

{
  FUN_10005794(8);
  return;
}



/* ---- FUN_10004926 @ 10004926 size=24 ---- */

void __cdecl FUN_10004926(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/* ---- __initterm_e @ 1000493e size=32 ---- */

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}



/* ---- __get_osplatform @ 1000495e size=55 ---- */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 == (int *)0x0) || (DAT_10010540 == 0)) {
    pDVar1 = FUN_10003fb0();
    *pDVar1 = 0x16;
    FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10010540;
  return 0;
}



/* ---- __get_winmajor @ 10004995 size=60 ---- */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (DAT_10010540 == 0)) {
    pDVar1 = FUN_10003fb0();
    *pDVar1 = 0x16;
    FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_1001054c;
  return 0;
}



/* ---- __cinit @ 100049d1 size=146 ---- */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((DAT_10010ab0 != (code *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10010ab0), BVar1 != 0)) {
    (*DAT_10010ab0)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1000b144,(undefined4 *)&DAT_1000b158);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10005395);
    puVar3 = &DAT_1000b138;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1000b140);
    if ((DAT_10010ab4 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10010ab4), BVar1 != 0)) {
      (*DAT_10010ab4)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ---- FUN_10004a63 @ 10004a63 size=211 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10004b36) */

void __cdecl FUN_10004a63(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10010580 != 1) {
    DAT_1001057c = 1;
    DAT_10010578 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_100036cd(DAT_10010aa8);
      piVar3 = (int *)FUN_100036cd(DAT_10010aa4);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_100036cd(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_10004926((undefined4 *)&DAT_1000b160);
    }
    FUN_10004926((undefined4 *)&DAT_1000b168);
  }
  FUN_10004b30();
  if (param_3 == 0) {
    DAT_10010580 = 1;
    FUN_10005794(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



/* ---- FUN_10004b30 @ 10004b30 size=15 ---- */

void FUN_10004b30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10005794(8);
  }
  return;
}



/* ---- __exit @ 10004b45 size=17 ---- */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_10004a63(_Code,1,0);
  return;
}



/* ---- __cexit @ 10004b56 size=15 ---- */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_10004a63(0,0,1);
  return;
}



/* ---- __init_pointers @ 10004b65 size=76 ---- */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_10002ab6(uVar1);
  FUN_100085d4(uVar1);
  FUN_1000245c(uVar1);
  FUN_100042ad(uVar1);
  FUN_100085ca(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_100054e2();
  __initp_eh_hooks();
  PTR___exit_1000f2b0 = (undefined *)FUN_10003656(0x10004b45);
  return;
}



/* ---- __malloc_crt @ 10004bb1 size=64 ---- */

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_10010584 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10010584 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __calloc_crt @ 10004bf1 size=72 ---- */

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10010584 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10010584 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __realloc_crt @ 10004c39 size=75 ---- */

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_10010584 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10010584 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* ---- __ioinit @ 10004c84 size=562 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x10004c90;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10004ebb:
    iVar7 = -1;
  }
  else {
    DAT_10010984 = 0x20;
    DAT_100109a0 = puVar2;
    for (; puVar2 < DAT_100109a0 + 0x1c0; puVar2 = puVar2 + 0xe) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      iVar7 = 1;
      while ((int)DAT_10010984 < (int)UVar9) {
        puVar2 = __calloc_crt(0x20,0x38);
        if (puVar2 == (undefined4 *)0x0) {
          UVar9 = DAT_10010984;
          break;
        }
        (&DAT_100109a0)[iVar7] = puVar2;
        DAT_10010984 = DAT_10010984 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_100109a0)[iVar7];
        }
        iVar7 = iVar7 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar9) {
        do {
          pvVar4 = *(HANDLE *)local_20;
          if ((((pvVar4 != (HANDLE)0xffffffff) && (pvVar4 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar4), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_100109a0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10004ebb;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar9);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_100109a0 + iVar7 * 0xe;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar4 = GetStdHandle(DVar3);
        if (((pvVar4 == (HANDLE)0xffffffff) || (pvVar4 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar4), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar4;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          iVar5 = ___crtInitCritSecAndSpinCount(piVar8 + 3,4000);
          if (iVar5 == 0) goto LAB_10004ebb;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10010984);
    iVar7 = 0;
  }
  return iVar7;
}



/* ---- __ioterm @ 10004ec4 size=76 ---- */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_100109a0;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x700; uVar3 = uVar3 + 0x38) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x10010aa0);
  return;
}



/* ---- __setenvp @ 10004f10 size=216 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_10010aac == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_1000fec4;
  if (DAT_1000fec4 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    DAT_10010560 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar4 = DAT_1000fec4;
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_1000fec4);
          DAT_1000fec4 = (char *)0x0;
          *puVar1 = 0;
          _DAT_10010aa0 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10010560);
            DAT_10010560 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}



/* ---- parse_cmdline @ 10004feb size=408 ---- */

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2005 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_1000507d;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1000507d:
  bVar2 = false;
  while (*pbVar7 != 0) {
    while( true ) {
      if ((*pbVar7 != 0x20) && (*pbVar7 != 9)) break;
      pbVar7 = pbVar7 + 1;
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      if (uVar4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = 0x5c;
            pbVar5 = pbVar5 + 1;
          }
          *unaff_EDI = *unaff_EDI + 1;
        } while (uVar4 != 0);
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}



/* ---- __setargv @ 10005183 size=185 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_10010aac == 0) {
    ___initmbctable();
  }
  DAT_1001068c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10010588,0x104);
  _DAT_10010570 = &DAT_10010588;
  if ((DAT_10010abc == (char *)0x0) || (local_8 = DAT_10010abc, *DAT_10010abc == '\0')) {
    local_8 = &DAT_10010588;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_10010554 = local_c - 1;
      _DAT_10010558 = puVar2;
      return 0;
    }
  }
  return -1;
}



/* ---- ___crtGetEnvironmentStringsA @ 1000523c size=309 ---- */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2005 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar5;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar8;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_10010690 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10010690 = 1;
      goto LAB_1000528e;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10010690 = 2;
    }
  }
  if (DAT_10010690 != 1) {
    if ((DAT_10010690 != 2) && (DAT_10010690 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_1000528e:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((_Size != 0) && (lpMultiByteStr = __malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0)) {
    iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,(LPBOOL)0x0
                               );
    local_8 = lpMultiByteStr;
    if (iVar6 == 0) {
      _free(lpMultiByteStr);
      local_8 = (LPSTR)0x0;
    }
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}



/* ---- __RTC_Initialize @ 10005371 size=36 ---- */

/* WARNING: Removing unreachable block (ram,0x10005383) */
/* WARNING: Removing unreachable block (ram,0x10005389) */
/* WARNING: Removing unreachable block (ram,0x1000538b) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/* ---- ___heap_select @ 100053b9 size=85 ---- */

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2005 Release */

undefined4 ___heap_select(void)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = __get_osplatform(&local_8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar1 = __get_winmajor(&local_c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}



/* ---- __heap_init @ 10005414 size=90 ---- */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_10010694 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_10010694 == (HANDLE)0x0) {
    return 0;
  }
  DAT_10010980 = ___heap_select();
  if ((DAT_10010980 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_10010694);
    DAT_10010694 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/* ---- __heap_term @ 1000546e size=116 ---- */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10010980 == 3) {
    iVar2 = 0;
    if (0 < DAT_10010968) {
      puVar1 = (undefined4 *)((int)DAT_1001096c + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_10010694,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10010968);
    }
    HeapFree(DAT_10010694,0,DAT_1001096c);
  }
  HeapDestroy(DAT_10010694);
  DAT_10010694 = (HANDLE)0x0;
  return;
}



/* ---- FUN_100054e2 @ 100054e2 size=1 ---- */

void FUN_100054e2(void)

{
  return;
}



/* ---- FUN_100054e3 @ 100054e3 size=350 ---- */

undefined4 __cdecl FUN_100054e3(int param_1,DWORD param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  pDVar5 = FUN_10003872();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_1000f37c * 3);
    if ((piVar1 + DAT_1000f37c * 3 <= piVar6) || (*piVar6 != param_1)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 == (int *)0x0) || (pcVar2 = (code *)piVar6[2], pcVar2 == (code *)0x0)) {
      uVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar6[2] = 0;
      uVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        DVar3 = pDVar5[0x18];
        pDVar5[0x18] = param_2;
        if (piVar6[1] == 8) {
          if (DAT_1000f370 < DAT_1000f374 + DAT_1000f370) {
            iVar8 = DAT_1000f370 * 0xc;
            iVar9 = DAT_1000f370;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_1000f374 + DAT_1000f370);
          }
          iVar9 = *piVar6;
          DVar4 = pDVar5[0x19];
          if (iVar9 == -0x3fffff72) {
            pDVar5[0x19] = 0x83;
          }
          else if (iVar9 == -0x3fffff70) {
            pDVar5[0x19] = 0x81;
          }
          else if (iVar9 == -0x3fffff6f) {
            pDVar5[0x19] = 0x84;
          }
          else if (iVar9 == -0x3fffff6d) {
            pDVar5[0x19] = 0x85;
          }
          else if (iVar9 == -0x3fffff73) {
            pDVar5[0x19] = 0x82;
          }
          else if (iVar9 == -0x3fffff71) {
            pDVar5[0x19] = 0x86;
          }
          else if (iVar9 == -0x3fffff6e) {
            pDVar5[0x19] = 0x8a;
          }
          (*pcVar2)(8,pDVar5[0x19]);
          pDVar5[0x19] = DVar4;
        }
        else {
          piVar6[2] = 0;
          (*pcVar2)(piVar6[1]);
        }
        pDVar5[0x18] = DVar3;
      }
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}



/* ---- FUN_10005641 @ 10005641 size=27 ---- */

undefined4 __cdecl FUN_10005641(int param_1,DWORD param_2)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_100054e3(-0x1f928c9d,param_2);
    return uVar1;
  }
  return 0;
}



/* ---- FUN_1000565c @ 1000565c size=6 ---- */

undefined4 FUN_1000565c(void)

{
  return 1;
}



/* ---- ___security_init_cookie @ 10005662 size=148 ---- */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

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
  if ((DAT_1000f060 == 0xbb40e64e) || ((DAT_1000f060 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1000f060 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1000f060 == 0xbb40e64e) {
      DAT_1000f060 = 0xbb40e64f;
    }
    else if ((DAT_1000f060 & 0xffff0000) == 0) {
      DAT_1000f060 = DAT_1000f060 | DAT_1000f060 << 0x10;
    }
  }
  DAT_1000f064 = ~DAT_1000f060;
  return;
}



/* ---- __mtinitlocks @ 100056f6 size=73 ---- */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10010698;
  do {
    if ((&DAT_1000f384)[iVar2 * 2] == 1) {
      (&DAT_1000f380)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_1000f380)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_1000f380)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/* ---- __mtdeletelocks @ 1000573f size=85 ---- */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1000f380;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1000f4a0);
  puVar1 = &DAT_1000f380;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1000f4a0);
  return;
}



/* ---- FUN_10005794 @ 10005794 size=21 ---- */

void __cdecl FUN_10005794(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000f380)[param_1 * 2]);
  return;
}



/* ---- __mtinitlocknum @ 100057a9 size=186 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  DWORD *pDVar2;
  int iVar3;
  int local_20;
  
  local_20 = 1;
  if (DAT_10010694 == 0) {
    __FF_MSGBANNER();
    FUN_100040d4(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1000f380 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_10003fb0();
      *pDVar2 = 0xc;
      local_20 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_10003fb0();
          *pDVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_10005863();
    }
  }
  else {
    local_20 = 1;
  }
  return local_20;
}



/* ---- FUN_10005863 @ 10005863 size=9 ---- */

void FUN_10005863(void)

{
  FUN_10005794(10);
  return;
}



/* ---- __lock @ 1000586c size=49 ---- */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1000f380)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1000f380)[_File * 2]);
  return;
}



/* ---- FUN_1000589d @ 1000589d size=11 ---- */

void __fastcall FUN_1000589d(undefined4 *param_1)

{
  *param_1 = &std::bad_exception::vftable;
  *param_1 = &std::exception::vftable;
  if (param_1[2] != 0) {
    _free((void *)param_1[1]);
  }
  return;
}



/* ---- scalar_deleting_destructor @ 100058a8 size=34 ---- */

exception * __thiscall
std::bad_exception::scalar_deleting_destructor(bad_exception *this,byte param_1)

{
                    /* inlined destructor: std::bad_exception::~bad_exception */
  this->vftablePtr = &vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- ___TypeMatch @ 100058ca size=92 ---- */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_10005920:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100058fe:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10005920;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100058fe;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- FUN_10005926 @ 10005926 size=68 ---- */

undefined4 __cdecl FUN_10005926(undefined4 *param_1)

{
  _ptiddata p_Var1;
  undefined4 extraout_EAX;
  
  if (*(int *)*param_1 == -0x1fbcb0b3) {
    p_Var1 = __getptd();
    if (0 < p_Var1->_ProcessingThrow) {
      p_Var1 = __getptd();
      p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
    }
  }
  else if (*(int *)*param_1 == -0x1f928c9d) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = 0;
    terminate();
    return extraout_EAX;
  }
  return 0;
}



/* ---- ___FrameUnwindToState @ 1000596a size=166 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_10005a30();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/* ---- FUN_10005a30 @ 10005a30 size=27 ---- */

void FUN_10005a30(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/* ---- FUN_10005a4b @ 10005a4b size=69 ---- */

undefined4 FUN_10005a4b(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  _ptiddata p_Var3;
  
  piVar1 = (int *)*in_EAX;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
      ((iVar2 = piVar1[5], iVar2 == 0x19930520 || ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))
      ) && (piVar1[7] == 0)) {
    p_Var3 = __getptd();
    (p_Var3->_setloc_data)._cacheout[0x27] = L'\x01';
    (p_Var3->_setloc_data)._cacheout[0x28] = L'\0';
    return 1;
  }
  return 0;
}



/* ---- ___DestructExceptionObject @ 10005a90 size=67 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  void *pvVar1;
  int unaff_EDI;
  void *in_stack_ffffffd4;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (pvVar1 = *(void **)(param_1[7] + 4), pvVar1 != (void *)0x0)) {
    FID_conflict__CallMemberFunction1((void *)param_1[6],pvVar1,in_stack_ffffffd4,unaff_EDI);
  }
  return;
}



/* ---- ___AdjustPointer @ 10005ae4 size=37 ---- */

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}



/* ---- IsInExceptionSpec @ 10005b09 size=121 ---- */

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  uchar extraout_AL;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    return extraout_AL;
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}



/* ---- CallUnexpected @ 10005b82 size=49 ---- */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __cdecl CallUnexpected(struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl CallUnexpected(_s_ESTypeList *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
  terminate();
  return;
}



/* ---- Catch_All@10005bb3 @ 10005bb3 size=23 ---- */

void Catch_All_10005bb3(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- CallCatchBlock @ 10005bcb size=172 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1000d210;
  uStack_c = 0x10005bd7;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_10005cf1();
  return local_20;
}



/* ---- FUN_10005cf1 @ 10005cf1 size=118 ---- */

void FUN_10005cf1(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}



/* ---- ___BuildCatchObjectHelper @ 10005d67 size=371 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  uint in_stack_ffffffd0;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateRead(*(void **)(param_4 + 0x18),in_stack_ffffffd0), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_10005dec;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_10005dec:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/* ---- ___BuildCatchObject @ 10005ee6 size=133 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int in_stack_ffffffd4;
  
  if ((*param_3 & 0x80000000) == 0) {
    piVar3 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  else {
    piVar3 = param_2;
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar3,*(void **)(param_4 + 0x18),pvVar2,in_stack_ffffffd4);
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    iVar4 = 1;
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar3,*(void **)(param_4 + 0x18),pvVar2,iVar4);
  }
  return;
}



/* ---- CatchIt @ 10005f77 size=108 ---- */

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2005 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  else {
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}



/* ---- FindHandlerForForeignException @ 10005fe3 size=242 ---- */

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  uint in_ECX;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    local_8 = in_ECX;
    p_Var2 = __getptd();
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck
                       (param_5,param_7,param_6,&local_8,(uint *)((int)register0x00000010 + -0xc));
    if (local_8 < in_ECX) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)in_ECX);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < in_ECX);
    }
  }
  return;
}



/* ---- FindHandler @ 100060d5 size=854 ---- */

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  uchar uVar3;
  bool bVar4;
  _ptiddata p_Var5;
  int iVar6;
  _s_TryBlockMapEntry *p_Var7;
  EHRegistrationNode *unaff_EBX;
  int iVar8;
  HandlerType *pHVar9;
  _s_FuncInfo *p_Var10;
  int unaff_ESI;
  _s_FuncInfo *p_Var11;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar12;
  uchar in_stack_ffffffd0;
  undefined1 auStack_2d [9];
  exception local_24;
  uint local_18;
  char *local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var10 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var11 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar6 = *(int *)(param_1 + 0x14), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var5 = __getptd();
      if (p_Var5->_curexception == (void *)0x0) {
        return;
      }
      p_Var5 = __getptd();
      p_Var11 = p_Var5->_curexception;
      param_1 = (EHExceptionRecord *)p_Var11;
      p_Var5 = __getptd();
      param_3 = p_Var5->_curcontext;
      iVar6 = _ValidateRead(p_Var11,1);
      if (iVar6 == 0) {
        _inconsistency();
      }
      if ((((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var11->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var5 = __getptd();
      if (p_Var5->_curexcspec != (void *)0x0) {
        p_Var5 = __getptd();
        piVar2 = p_Var5->_curexcspec;
        p_Var5 = __getptd();
        iVar6 = 0;
        p_Var5->_curexcspec = (void *)0x0;
        uVar3 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
        if (uVar3 == '\0') {
          iVar8 = 0;
          if (0 < *piVar2) {
            do {
              bVar4 = type_info::operator==
                                (*(type_info **)(iVar8 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar4) {
                ___DestructExceptionObject((int *)param_1);
                param_1 = (EHExceptionRecord *)s_bad_exception_1000b898;
                    /* inlined constructor: std::bad_exception::bad_exception */
                std::exception::exception((exception *)(auStack_2d + -3),(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(auStack_2d + -3,&DAT_1000d274);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_10006213;
        }
        p_Var11 = (_s_FuncInfo *)param_1;
      }
    }
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck
                           (param_5,param_7,local_c,(uint *)&local_14,
                            (uint *)&local_24.exception_data);
        for (; local_14 < local_24.exception_data.offset_0x0; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            for (local_24.exception_data.offset_0x4 = p_Var7->nCatches;
                0 < local_24.exception_data.offset_0x4;
                local_24.exception_data.offset_0x4 = local_24.exception_data.offset_0x4 + -1) {
              pHVar9 = p_Var11->pESTypeList[1].pTypeArray;
              for (local_18 = pHVar9->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar9 = (HandlerType *)&pHVar9->pType;
                p_Var10 = *(_s_FuncInfo **)pHVar9;
                iVar6 = ___TypeMatch((byte *)local_10,(byte *)p_Var10,(uint *)p_Var11->pESTypeList);
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var11,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var10,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,in_stack_ffffffd0);
                  p_Var11 = (_s_FuncInfo *)param_1;
                  goto LAB_1000633d;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_1000633d:
          p_Var7 = p_Var7 + 1;
        }
      }
      p_Var10 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)p_Var11);
      }
      if ((((local_5 != '\0') || ((p_Var10->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var10->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar3 = IsInExceptionSpec((EHExceptionRecord *)p_Var11,(_s_ESTypeList *)unaff_EDI),
         uVar3 != '\0')) goto LAB_10006413;
      __getptd();
      __getptd();
      p_Var5 = __getptd();
      p_Var5->_curexception = p_Var11;
      p_Var5 = __getptd();
      p_Var5->_curcontext = param_3;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar12 = param_2;
      }
      else {
        pEVar12 = param_8;
      }
      _UnwindNestedFrames(pEVar12,(EHExceptionRecord *)p_Var11);
      p_Var11 = param_5;
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      CallUnexpected(p_Var11->pESTypeList);
    }
    p_Var10 = param_5;
  }
  if (p_Var10->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_10006213:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_10006413:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/* ---- FUN_1000642b @ 1000642b size=24 ---- */

exception * __thiscall FUN_1000642b(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  param_1->vftablePtr = (exception_vftable *)&std::bad_exception::vftable;
  return param_1;
}



/* ---- ___InternalCxxFrameHandler @ 10006443 size=228 ---- */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}



/* ---- __CallSettingFrame@12 @ 10006530 size=76 ---- */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



/* ---- __msize @ 1000657c size=146 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  DWORD *pDVar1;
  int iVar2;
  SIZE_T SVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    pDVar1 = FUN_10003fb0();
    *pDVar1 = 0x16;
    FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  if (DAT_10010980 == 3) {
    this = (void *)0x4;
    __lock(4);
    iVar2 = thunk_FUN_1000668b(this,(int)_Memory);
    if (iVar2 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_10006616();
    if (iVar2 != 0) {
      return local_20;
    }
  }
  SVar3 = HeapSize(DAT_10010694,0,_Memory);
  return SVar3;
}



/* ---- FUN_10006616 @ 10006616 size=9 ---- */

void FUN_10006616(void)

{
  FUN_10005794(4);
  return;
}



/* ---- ___sbh_heap_init @ 1000661f size=72 ---- */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1001096c = HeapAlloc(DAT_10010694,0,0x140);
  if (DAT_1001096c == (LPVOID)0x0) {
    return 0;
  }
  DAT_100107e8 = 0;
  DAT_10010968 = 0;
  DAT_10010974 = DAT_1001096c;
  DAT_10010970 = param_1;
  DAT_10010978 = 0x10;
  return 1;
}



/* ---- thunk_FUN_1000668b @ 10006667 size=18 ---- */

void __thiscall thunk_FUN_1000668b(void *this,int param_1)

{
  FUN_1000668b((void *)(DAT_10010968 * 0x14 + DAT_1001096c),param_1);
  return;
}



/* ---- FUN_1000668b @ 1000668b size=25 ---- */

void __thiscall FUN_1000668b(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/* ---- ___sbh_free_block @ 10006692 size=788 ---- */

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    else {
      puVar11 = param_1;
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_100107e8 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1001097c * 0x8000 + DAT_100107e8[3]),0x8000,0x4000);
        DAT_100107e8[2] = DAT_100107e8[2] | 0x80000000U >> ((byte)DAT_1001097c & 0x1f);
        *(undefined4 *)(DAT_100107e8[4] + 0xc4 + DAT_1001097c * 4) = 0;
        *(char *)(DAT_100107e8[4] + 0x43) = *(char *)(DAT_100107e8[4] + 0x43) + -1;
        if (*(char *)(DAT_100107e8[4] + 0x43) == '\0') {
          DAT_100107e8[1] = DAT_100107e8[1] & 0xfffffffe;
        }
        if (DAT_100107e8[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_100107e8[3],0,0x8000);
          HeapFree(DAT_10010694,0,(LPVOID)DAT_100107e8[4]);
          _memmove(DAT_100107e8,DAT_100107e8 + 5,
                   (DAT_10010968 * 0x14 - (int)DAT_100107e8) + -0x14 + DAT_1001096c);
          DAT_10010968 = DAT_10010968 + -1;
          if (DAT_100107e8 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10010974 = DAT_1001096c;
        }
      }
      DAT_100107e8 = param_1;
      DAT_1001097c = uVar14;
    }
  }
  return;
}



/* ---- ___sbh_alloc_new_region @ 100069a6 size=176 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10010968 == DAT_10010978) {
    pvVar1 = HeapReAlloc(DAT_10010694,0,DAT_1001096c,(DAT_10010978 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10010978 = DAT_10010978 + 0x10;
    DAT_1001096c = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10010968 * 0x14 + (int)DAT_1001096c);
  pvVar1 = HeapAlloc(DAT_10010694,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10010968 = DAT_10010968 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10010694,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/* ---- ___sbh_alloc_new_group @ 10006a56 size=262 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}



/* ---- ___sbh_resize_block @ 10006b5c size=735 ---- */

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}



/* ---- ___sbh_alloc_block @ 10006e3b size=739 ---- */

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint local_c;
  int local_8;
  
  puVar11 = DAT_1001096c + DAT_10010968 * 5;
  uVar8 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar9 = (int)((int)param_1 + 0x17U) >> 4;
  iVar10 = iVar9 + -1;
  if (iVar10 < 0x20) {
    uVar15 = 0xffffffff >> ((byte)iVar10 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> ((char)iVar9 - 0x21U & 0x1f);
  }
  for (param_1 = DAT_10010974;
      (param_1 < puVar11 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  if (param_1 == puVar11) {
    for (param_1 = DAT_1001096c;
        (param_1 < DAT_10010974 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
        param_1 = param_1 + 5) {
    }
    if (param_1 == DAT_10010974) {
      for (; (param_1 < puVar11 && (param_1[2] == 0)); param_1 = param_1 + 5) {
      }
      if (param_1 == puVar11) {
        for (param_1 = DAT_1001096c; (param_1 < DAT_10010974 && (param_1[2] == 0));
            param_1 = param_1 + 5) {
        }
        if ((param_1 == DAT_10010974) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar9 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar9;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar6 = (int *)param_1[4];
  local_8 = *piVar6;
  if ((local_8 == -1) ||
     ((piVar6[local_8 + 0x31] & local_c) == 0 && (piVar6[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar11 = (uint *)(piVar6 + 0x11);
    uVar13 = piVar6[0x31];
    while ((uVar13 & local_c) == 0 && (*puVar11 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar1 = puVar11 + 0x21;
      puVar11 = puVar11 + 1;
      uVar13 = *puVar1;
    }
  }
  piVar4 = piVar6 + local_8 * 0x81 + 0x51;
  iVar9 = 0;
  uVar15 = piVar6[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar6[local_8 + 0x31] & local_c;
    iVar9 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar9 = iVar9 + 1;
  }
  piVar14 = (int *)piVar4[iVar9 * 2 + 1];
  iVar12 = *piVar14 - uVar8;
  iVar10 = (iVar12 >> 4) + -1;
  if (0x3f < iVar10) {
    iVar10 = 0x3f;
  }
  DAT_10010974 = param_1;
  if (iVar10 != iVar9) {
    if (piVar14[1] == piVar14[2]) {
      if (iVar9 < 0x20) {
        pcVar3 = (char *)((int)piVar6 + iVar9 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar9 & 0x1f));
        piVar6[local_8 + 0x11] = uVar15 & piVar6[local_8 + 0x11];
        *pcVar3 = *pcVar3 + -1;
        if (*pcVar3 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar3 = (char *)((int)piVar6 + iVar9 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar9 - 0x20 & 0x1f));
        piVar6[local_8 + 0x31] = piVar6[local_8 + 0x31] & uVar15;
        *pcVar3 = *pcVar3 + -1;
        if (*pcVar3 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar14[2] + 4) = piVar14[1];
    *(int *)(piVar14[1] + 8) = piVar14[2];
    if (iVar12 == 0) goto LAB_100070db;
    piVar2 = piVar4 + iVar10 * 2;
    iVar9 = piVar2[1];
    piVar14[2] = (int)piVar2;
    piVar14[1] = iVar9;
    piVar2[1] = (int)piVar14;
    *(int **)(piVar14[1] + 8) = piVar14;
    if (piVar14[1] == piVar14[2]) {
      cVar5 = *(char *)(iVar10 + 4 + (int)piVar6);
      *(char *)(iVar10 + 4 + (int)piVar6) = cVar5 + '\x01';
      bVar7 = (byte)iVar10;
      if (iVar10 < 0x20) {
        if (cVar5 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        piVar6[local_8 + 0x11] = piVar6[local_8 + 0x11] | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        if (cVar5 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        piVar6[local_8 + 0x31] = piVar6[local_8 + 0x31] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar12 != 0) {
    *piVar14 = iVar12;
    *(int *)(iVar12 + -4 + (int)piVar14) = iVar12;
  }
LAB_100070db:
  piVar14 = (int *)((int)piVar14 + iVar12);
  *piVar14 = uVar8 + 1;
  *(uint *)((int)piVar14 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar4;
  *piVar4 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_100107e8)) && (local_8 == DAT_1001097c)) {
    DAT_100107e8 = (uint *)0x0;
  }
  *piVar6 = local_8;
  return piVar14 + 1;
}



/* ---- fastzero_I @ 1000711e size=79 ---- */

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



/* ---- __VEC_memzero @ 10007175 size=143 ---- */

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}



/* ---- ___freetlocinfo @ 10007218 size=320 ---- */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_1000fbe8)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_1000fb28) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1000f4d8) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _free(param_1);
  return;
}



/* ---- ___addlocaleref @ 10007358 size=134 ---- */

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar1 = param_1 + 0x14;
  iVar2 = 6;
  do {
    if (((undefined *)pLVar1[-2] != &DAT_1000f4d8) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar1);
    }
    if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar1[1]);
    }
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  InterlockedIncrement((LONG *)(param_1[0x35] + 0xb4));
  return;
}



/* ---- ___removelocaleref @ 100073de size=140 ---- */

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar1 = param_1 + 0x14;
    iVar2 = 6;
    do {
      if (((undefined *)pLVar1[-2] != &DAT_1000f4d8) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar1);
      }
      if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar1[1]);
      }
      pLVar1 = pLVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    InterlockedDecrement((LONG *)(param_1[0x35] + 0xb4));
  }
  return param_1;
}



/* ---- __updatetlocinfoEx_nolock @ 1000746a size=62 ---- */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI == (LONG *)0x0) || (in_EAX == (undefined4 *)0x0)) {
    return (LONG *)0x0;
  }
  pLVar1 = (LONG *)*in_EAX;
  if (pLVar1 != unaff_EDI) {
    *in_EAX = unaff_EDI;
    ___addlocaleref(unaff_EDI);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_1000f4e0)) {
        ___freetlocinfo(pLVar1);
      }
    }
  }
  return unaff_EDI;
}



/* ---- ___updatetlocinfo @ 100074a8 size=106 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1000fc1c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_10007512();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}



/* ---- FUN_10007512 @ 10007512 size=12 ---- */

void FUN_10007512(void)

{
  FUN_10005794(0xc);
  return;
}



/* ---- FUN_1000751e @ 1000751e size=47 ---- */

undefined4 FUN_1000751e(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX == 0x3b6) {
    return 0x404;
  }
  return 0;
}



/* ---- setSBCS @ 1000754d size=85 ---- */

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x101;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  _memset(puVar1,0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  do {
    *puVar1 = puVar1[(int)&DAT_1000f5c8 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1000f5c8 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* ---- setSBUpLow @ 100075a2 size=394 ---- */

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [52];
  undefined1 local_4a0 [408];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_1000f060 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10007709:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10007709;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_100076b0;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_100076b0:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/* ---- ___updatetmbcinfo @ 1000772c size=152 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2005 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1000fc1c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1000f9f0) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1000f5c8)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1000f9f0;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1000f9f0;
      InterlockedIncrement((LONG *)PTR_DAT_1000f9f0);
    }
    FUN_100077c7();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



/* ---- FUN_100077c7 @ 100077c7 size=9 ---- */

void FUN_100077c7(void)

{
  FUN_10005794(0xd);
  return;
}



/* ---- _LocaleUpdate @ 100077d0 size=130 ---- */

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_1000f5b8) && ((p_Var2->_ownlocale & DAT_1000fc1c) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1000f9f0) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1000fc1c) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}



/* ---- getSystemCP @ 10007852 size=122 ---- */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_10010850 = 0;
  if (unaff_ESI == -2) {
    DAT_10010850 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10010850 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10010850 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/* ---- FUN_100078cc @ 100078cc size=473 ---- */

void __cdecl FUN_100078cc(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  undefined4 extraout_EDX;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_1000f060 ^ (uint)(&local_1c)[1].DefaultChar;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_10007908:
    if (*(uint *)((int)&DAT_1000f9f8 + uVar5) != uVar4) goto code_r0x10007914;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_1000fa08 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1000f9f4);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_1000751e();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1000f9fc + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_10007a39;
  }
LAB_100078f5:
  setSBCS(unaff_EDI);
LAB_10007a96:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
code_r0x10007914:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10007921;
  goto LAB_10007908;
code_r0x10007921:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10007a96;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar12 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar12;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar9 = FUN_1000751e();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_10007a39:
    setSBUpLow(unaff_EDI);
    goto LAB_10007a96;
  }
  if (DAT_10010850 == 0) goto LAB_10007a96;
  goto LAB_100078f5;
}



/* ---- __setmbcp @ 10007aa5 size=399 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  DWORD *pDVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = FUN_100078cc(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1000f5c8)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1000fc1c & 1) == 0)) {
          __lock(0xd);
          _DAT_10010860 = ptVar3->mbcodepage;
          _DAT_10010864 = ptVar3->ismbcodepage;
          _DAT_10010868 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10010854)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1000f7e8)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1000f8f0)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1000f9f0);
          if ((LVar4 == 0) && (PTR_DAT_1000f9f0 != &DAT_1000f5c8)) {
            _free(PTR_DAT_1000f9f0);
          }
          PTR_DAT_1000f9f0 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_10007c06();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1000f5c8) {
          _free(ptVar3);
        }
        pDVar5 = FUN_10003fb0();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/* ---- FUN_10007c06 @ 10007c06 size=9 ---- */

void FUN_10007c06(void)

{
  FUN_10005794(0xd);
  return;
}



/* ---- ___initmbctable @ 10007c3f size=30 ---- */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_10010aac == 0) {
    __setmbcp(-3);
    DAT_10010aac = 1;
  }
  return 0;
}



/* ---- FUN_10007c5d @ 10007c5d size=129 ---- */

void __cdecl FUN_10007c5d(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}



/* ---- __VEC_memcpy @ 10007ce4 size=227 ---- */

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_10007c5d(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}



/* ---- __initp_misc_winsig @ 10007dc7 size=25 ---- */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_1001086c = param_1;
  DAT_10010870 = param_1;
  DAT_10010874 = param_1;
  DAT_10010878 = param_1;
  return;
}



/* ---- siglookup @ 10007de0 size=52 ---- */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2005 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_1000f37c * 0xc + param_1);
  if ((DAT_1000f37c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- ___get_sigabrt @ 10007e14 size=13 ---- */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_100036cd(DAT_10010874);
  return p_Var1;
}



/* ---- _raise @ 10007e21 size=411 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD *pDVar7;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  
  pDVar7 = (DWORD *)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_1001086c;
        iVar3 = DAT_1001086c;
        goto LAB_10007ed6;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10007eb4;
        if (_SigNum != 8) goto LAB_10007e98;
      }
    }
    pDVar7 = FUN_10003872();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10010878;
      iVar3 = DAT_10010878;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10010870;
      iVar3 = DAT_10010870;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10007e98:
        pDVar7 = FUN_10003fb0();
        *pDVar7 = 0x16;
        FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10007eb4:
      puVar6 = &DAT_10010874;
      iVar3 = DAT_10010874;
    }
LAB_10007ed6:
    bVar1 = true;
    pcVar4 = (code *)FUN_100036cd(iVar3);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar7[0x18];
    pDVar7[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar7[0x19];
      pDVar7[0x19] = 0x8c;
      goto LAB_10007f3a;
    }
  }
  else {
LAB_10007f3a:
    if (_SigNum == 8) {
      for (local_28 = DAT_1000f370; local_28 < DAT_1000f374 + DAT_1000f370; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_10007f74;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10007f74:
  FUN_10007f95();
  if (_SigNum == 8) {
    (*pcVar4)(8,pDVar7[0x19]);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar7[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar7[0x19] = local_34;
  }
  return 0;
}



/* ---- FUN_10007f95 @ 10007f95 size=15 ---- */

void FUN_10007f95(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10005794(0);
  }
  return;
}



/* ---- FUN_10007fd1 @ 10007fd1 size=439 ---- */

undefined4 __cdecl FUN_10007fd1(undefined4 param_1,undefined4 param_2,uint param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = __encoded_null();
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  if (DAT_10010880 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10010880 = FUN_10003656((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_10010884 = FUN_10003656((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10010888 = FUN_10003656((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10010890 = FUN_10003656((int)pFVar1);
      if (DAT_10010890 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_1001088c = FUN_10003656((int)pFVar1);
      }
    }
  }
  if ((DAT_1001088c != local_c) && (DAT_10010890 != local_c)) {
    pcVar3 = (code *)FUN_100036cd(DAT_1001088c);
    pcVar4 = (code *)FUN_100036cd(DAT_10010890);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar2 = (*pcVar3)(), iVar2 == 0 ||
         (iVar2 = (*pcVar4)(iVar2,1,local_24,0xc,local_18), iVar2 == 0)) || ((local_1c & 1) == 0))))
    {
      iVar2 = __get_winmajor(&local_14);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_14 < 4) {
        param_3 = param_3 | 0x40000;
      }
      else {
        param_3 = param_3 | 0x200000;
      }
      goto LAB_10008167;
    }
  }
  if ((((DAT_10010884 != local_c) &&
       (pcVar3 = (code *)FUN_100036cd(DAT_10010884), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10010888 != local_c &&
      (pcVar3 = (code *)FUN_100036cd(DAT_10010888), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_10008167:
  pcVar3 = (code *)FUN_100036cd(DAT_10010880);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/* ---- _strcat_s @ 1000818e size=113 ---- */

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar3 = _Dst;
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        pDVar2 = FUN_10003fb0();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_100081ad;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_10003fb0();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_100081ad:
  FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- _strncpy_s @ 100081ff size=179 ---- */

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  rsize_t rVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_10008223:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar5 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar5 = rVar5 - 1;
            } while (rVar5 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar5 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          pDVar2 = FUN_10003fb0();
          eVar4 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_10008234;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_10008223;
  pDVar2 = FUN_10003fb0();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_10008234:
  FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- __set_error_mode @ 100082b2 size=70 ---- */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_1000fecc;
      DAT_1000fecc = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_1000fecc;
    }
  }
  pDVar2 = FUN_10003fb0();
  *pDVar2 = 0x16;
  FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/* ---- __freea @ 100082f8 size=27 ---- */

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2005 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}



/* ---- __local_unwind4 @ 10008314 size=144 ---- */

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_100083a4;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1000f060 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10008b94();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/* ---- FUN_100083ea @ 100083ea size=28 ---- */

void FUN_100083ea(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/* ---- _EH4_CallFilterFunc @ 10008406 size=23 ---- */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/* ---- _EH4_TransferToHandler @ 1000841d size=25 ---- */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x10008434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- _EH4_GlobalUnwind @ 10008436 size=26 ---- */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000844b,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- _EH4_LocalUnwind @ 10008450 size=23 ---- */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/* ---- __ValidateImageBase @ 10008470 size=41 ---- */

/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



/* ---- __FindPESection @ 100084a0 size=66 ---- */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2005 Release */

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



/* ---- __IsNonwritableInCurrentImage @ 100084f0 size=164 ---- */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_1000f060 ^ 0x1000d350;
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



/* ---- __initp_misc_cfltcvt_tab @ 100085ab size=31 ---- */

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_1000fae8 + uVar3);
    iVar2 = FUN_10003656(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/* ---- FUN_100085ca @ 100085ca size=10 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100085ca(undefined4 param_1)

{
  _DAT_10010894 = param_1;
  return;
}



/* ---- FUN_100085d4 @ 100085d4 size=10 ---- */

void __cdecl FUN_100085d4(undefined4 param_1)

{
  DAT_10010898 = param_1;
  return;
}



/* ---- ___crtInitCritSecNoSpinCount@8 @ 100085de size=16 ---- */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/* ---- ___crtInitCritSecAndSpinCount @ 100085ee size=147 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1000d370;
  uStack_c = 0x100085fa;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_100036cd(DAT_10010898);
  if (pcVar1 != (FARPROC)0x0) goto LAB_10008664;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_10008653:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_10008653;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_10008653;
  }
  DAT_10010898 = FUN_10003656((int)pcVar1);
LAB_10008664:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/* ---- __calloc_impl @ 100086b3 size=272 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  DWORD *pDVar1;
  int iVar2;
  uint *_Size;
  int *_Dst;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      _Dst = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_10010980 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10010970)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_100087af();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_10008764;
          }
        }
        else {
LAB_10008764:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_10010694,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_100107ec == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    pDVar1 = FUN_10003fb0();
    *pDVar1 = 0xc;
    FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/* ---- FUN_100087af @ 100087af size=9 ---- */

void FUN_100087af(void)

{
  FUN_10005794(4);
  return;
}



/* ---- _realloc @ 100087d1 size=524 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  void *this;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_10010980 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100089aa;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1000668b(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10010970) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1000668b(this,(int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_10010694,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_10008915();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_10010694,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_100107ec == 0) {
        pDVar4 = FUN_10003fb0();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_100089d7;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_10003fb0();
    if (local_24 != (uint *)0x0) goto LAB_100089b6;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100089aa;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_10010694,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_100107ec == 0) {
        pDVar4 = FUN_10003fb0();
LAB_100089d7:
        DVar5 = GetLastError();
        DVar5 = FUN_10003f75(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_10003fb0();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_10003f75(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_100089aa:
  __callnewh(_NewSize);
  pDVar4 = FUN_10003fb0();
LAB_100089b6:
  *pDVar4 = 0xc;
  return (void *)0x0;
}



/* ---- FUN_10008915 @ 10008915 size=9 ---- */

void FUN_10008915(void)

{
  FUN_10005794(4);
  return;
}



/* ---- x_ismbbtype_l @ 100089ec size=81 ---- */

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_10008a2e;
  }
  iVar2 = 1;
LAB_10008a2e:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/* ---- __ismbblead @ 10008a3d size=19 ---- */

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/* ---- _ValidateRead @ 10008a50 size=13 ---- */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/* ---- __global_unwind2 @ 10008a60 size=32 ---- */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10008a78,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- __local_unwind2 @ 10008ac5 size=132 ---- */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_10008a80;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10008b94();
    }
  }
  ExceptionList = local_20;
  return;
}



/* ---- __NLG_Notify1 @ 10008b6c size=9 ---- */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1000fb18 = param_1;
  DAT_1000fb14 = in_EAX;
  DAT_1000fb1c = unaff_EBP;
  return in_EAX;
}



/* ---- __NLG_Notify @ 10008b75 size=31 ---- */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1000fb18 = param_1;
  DAT_1000fb14 = in_EAX;
  DAT_1000fb1c = unaff_EBP;
  return;
}



/* ---- FUN_10008b94 @ 10008b94 size=3 ---- */

void FUN_10008b94(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/* ---- _atol @ 10008c74 size=17 ---- */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/* ---- FUN_10008c85 @ 10008c85 size=45 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10008c85(void)

{
  return 1;
}



/* ---- __get_sse2_info @ 10008cd5 size=96 ---- */

/* WARNING: Removing unreachable block (ram,0x10008d10) */
/* WARNING: Removing unreachable block (ram,0x10008cfd) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10008c85(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ---- ___free_lc_time @ 10008d42 size=400 ---- */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}



/* ---- ___free_lconv_num @ 10008ed2 size=64 ---- */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1000fbe8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1000fbec) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1000fbf0) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/* ---- ___free_lconv_mon @ 10008f12 size=137 ---- */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1000fbf4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1000fbf8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1000fbfc) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1000fc00) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1000fc04) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1000fc08) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1000fc0c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/* ---- _strcspn @ 10008fa0 size=70 ---- */

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/* ---- __crtGetStringTypeA_stat @ 10008fe6 size=440 ---- */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPWSTR lpWideCharStr;
  void *_Memory;
  undefined1 uStack00000000;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = DAT_1000f060 ^ (int)register0x00000010 - 4U;
  lpWideCharStr = (LPWSTR)0x0;
  local_c = in_ECX;
  if (DAT_100108a0 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_100108a0 = 2;
      }
      goto LAB_1000903f;
    }
    DAT_100108a0 = 1;
  }
  else {
LAB_1000903f:
    if ((DAT_100108a0 == 2) || (DAT_100108a0 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if (puVar5 != (ushort *)0xffffffff) {
        if (puVar5 != param_5) {
          _Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,(uint *)&param_3
                                         ,(LPSTR)0x0,0);
          if (_Memory == (void *)0x0) goto LAB_1000918c;
          param_2 = (ulong)_Memory;
        }
        GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4);
        if (_Memory != (void *)0x0) {
          _free(_Memory);
        }
      }
      goto LAB_1000918c;
    }
    if (DAT_100108a0 != 1) goto LAB_1000918c;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000918c;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      lpWideCharStr = (LPWSTR)((int)register0x00000010 + -0x18);
      puVar3 = (undefined4 *)((int)register0x00000010 + -0x18);
      if (&uStack00000000 != (undefined1 *)0x18) goto LAB_100090cf;
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
LAB_100090cf:
        lpWideCharStr = (LPWSTR)(puVar3 + 2);
      }
    }
  }
  if (lpWideCharStr != (LPWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_1000918c:
  iVar4 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar4;
}



/* ---- ___crtGetStringTypeA @ 1000919e size=64 ---- */

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  _LocaleUpdate a_Stack_e [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(a_Stack_e + -6,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* ---- _strpbrk @ 100091e0 size=64 ---- */

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/* ---- __crtLCMapStringA_stat @ 10009220 size=930 ---- */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPWSTR lpDestStr;
  LPSTR pCVar9;
  undefined1 uStack00000000;
  WCHAR WStack_16;
  void *local_14;
  LPWSTR local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = DAT_1000f060 ^ (int)register0x00000010 - 4U;
  if (DAT_100108a4 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_100108a4 = 2;
      }
    }
    else {
      DAT_100108a4 = 1;
    }
  }
  if (0 < (int)param_4) {
    pcVar5 = (char *)param_3;
    pcVar8 = param_4;
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000928f;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000928f:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_100108a4 == 2) || (DAT_100108a4 == 0)) {
    local_10 = (LPWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_100095b0;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPWSTR)0x0) goto LAB_100095b0;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar9 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_1000958d;
          pCVar9 = (LPSTR)((int)register0x00000010 + -0x1c);
        }
        else {
          pCVar9 = _malloc(local_c + 8);
          if (pCVar9 != (LPSTR)0x0) {
            pCVar9[0] = -0x23;
            pCVar9[1] = -0x23;
            pCVar9[2] = '\0';
            pCVar9[3] = '\0';
            pCVar9 = pCVar9 + 8;
          }
        }
        if (pCVar9 != (LPSTR)0x0) {
          _memset(pCVar9,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pCVar9,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pCVar9,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pCVar9);
        }
      }
    }
LAB_1000958d:
    if (local_10 != (LPWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_100095b0;
  }
  if (DAT_100108a4 != 1) goto LAB_100095b0;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_100095b0;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      local_10 = (LPWSTR)((int)register0x00000010 + -0x24);
      puVar6 = (undefined4 *)((int)register0x00000010 + -0x24);
      if (&uStack00000000 != (undefined1 *)0x24) goto LAB_10009337;
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
LAB_10009337:
        local_10 = (LPWSTR)(puVar6 + 2);
      }
    }
  }
  if (local_10 == (LPWSTR)0x0) goto LAB_100095b0;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_10009446;
          lpDestStr = (LPWSTR)((int)register0x00000010 + -0x1c);
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          if (param_6 == (char *)0x0) {
            pCVar9 = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          else {
            pCVar9 = (LPSTR)param_5;
            pcVar5 = param_6;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,pCVar9,(int)pcVar5,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_10009446:
  __freea(local_10);
LAB_100095b0:
  iVar3 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar3;
}



/* ---- ___crtLCMapStringA @ 100095c2 size=67 ---- */

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  _LocaleUpdate a_Stack_e [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(a_Stack_e + -6,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* ---- __isctype_l @ 10009605 size=182 ---- */

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}



/* ---- __alloca_probe_16 @ 100096c0 size=22 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2005 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* ---- __alloca_probe_8 @ 100096d6 size=22 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* ---- strtoxl @ 100096f5 size=555 ---- */

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  DWORD *pDVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    pDVar3 = FUN_10003fb0();
    *pDVar3 = 0x16;
    FUN_10002562((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = (byte)ptVar5[1].lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_100097ac:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_100097ac;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_10009812;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_10009812;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_10009812;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_10009812:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_1000986c:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          pDVar3 = FUN_10003fb0();
          *pDVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_1000986c;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_1000986c;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* ---- _strtol @ 10009920 size=41 ---- */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1001082c == 0) {
    ppuVar2 = &PTR_DAT_1000f5c0;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/* ---- __isleadbyte_l @ 10009949 size=54 ---- */

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}



/* ---- ___ansicp @ 1000997f size=71 ---- */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  undefined4 local_8;
  
  local_8 = DAT_1000f060 ^ (uint)(local_10 + 0xc);
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)(local_10 + 0xc));
  return;
}



/* ---- ___convertcp @ 100099c6 size=434 ---- */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  undefined1 uStack00000000;
  WCHAR WStack_36;
  undefined4 local_34 [5];
  LPWSTR local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_1000f060 ^ (uint)(&local_1c)[1].DefaultChar;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_10009b66;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_10009b66;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      local_20 = (LPWSTR)(local_34 + -4);
      puVar4 = local_34 + -4;
      if (&uStack00000000 != (undefined1 *)0x44) goto LAB_10009aa6;
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
LAB_10009aa6:
        local_20 = (LPWSTR)(puVar4 + 2);
      }
    }
  }
  if (local_20 != (LPWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_10009b66:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
}



/* ---- __alloca_probe @ 10009b80 size=43 ---- */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

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



/* ---- ___ascii_strnicmp @ 10009bb0 size=97 ---- */

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_10009c01;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_10009c01:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/* ---- RtlUnwind @ 10009cee size=6 ---- */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10009cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ---- GetXMemory @ 10009d00 size=33 ---- */

/* public: class XMemory __thiscall XMemoryStream::GetXMemory(void)const  */

XMemory * __thiscall XMemoryStream::GetXMemory(XMemoryStream *this)

{
  XMemory *in_stack_00000004;
  
                    /* 0x9d00  31  ?GetXMemory@XMemoryStream@@QBE?AVXMemory@@XZ */
  XMemory::XMemory(in_stack_00000004,(XMemory *)&this->XMemoryStream_data);
  return in_stack_00000004;
}



/* ---- Detach @ 10009d30 size=112 ---- */

/* public: class XMemory __thiscall XMemoryStream::Detach(void) */

XMemory * __thiscall XMemoryStream::Detach(XMemoryStream *this)

{
  XMemory *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9d30  26  ?Detach@XMemoryStream@@QAE?AVXMemory@@XZ */
  puStack_8 = &LAB_1000ac9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  XMemory::XMemory(in_stack_00000004,(XMemory *)&this->XMemoryStream_data);
  local_4 = 0;
  XMemoryFree((XMemory *)&this->XMemoryStream_data);
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- Attach @ 10009da0 size=9 ---- */

/* public: void __thiscall XMemoryStream::Attach(class XMemory const &) */

void __thiscall XMemoryStream::Attach(XMemoryStream *this,XMemory *param_1)

{
                    /* 0x9da0  16  ?Attach@XMemoryStream@@QAEXABVXMemory@@@Z */
                    /* WARNING: Could not recover jumptable at 0x10009da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XMemory::operator=((XMemory *)&this->XMemoryStream_data,param_1);
  return;
}



/* ---- LoadFromStream @ 10009db0 size=116 ---- */

/* public: virtual int __thiscall XMemoryStream::LoadFromStream(class IXStream *,int) */

int __thiscall XMemoryStream::LoadFromStream(XMemoryStream *this,IXStream *param_1,int param_2)

{
  int iVar1;
  void *_Memory;
  size_t sVar2;
  
                    /* 0x9db0  34  ?LoadFromStream@XMemoryStream@@UAEHPAVIXStream@@H@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0x1c))();
  if (iVar1 < param_2) {
    param_2 = (**(code **)(*(int *)param_1 + 0x1c))();
  }
  _Memory = (void *)thunk_FUN_100025f6(param_2);
  sVar2 = (**(code **)(*(int *)param_1 + 0xc))(_Memory,param_2);
  if ((sVar2 == param_2) &&
     (sVar2 = (*this->vftablePtr->Write)(this,_Memory,param_2), sVar2 == param_2)) {
    _free(_Memory);
    return param_2;
  }
  _free(_Memory);
  return 0;
}



/* ---- SaveToStream @ 10009e30 size=112 ---- */

/* public: virtual int __thiscall XMemoryStream::SaveToStream(class IXStream *,int)const  */

int __thiscall XMemoryStream::SaveToStream(XMemoryStream *this,IXStream *param_1,int param_2)

{
  ulong uVar1;
  void *_Memory;
  size_t sVar2;
  
                    /* 0x9e30  46  ?SaveToStream@XMemoryStream@@UBEHPAVIXStream@@H@Z */
  uVar1 = XMemory::GetSize((XMemory *)&this->XMemoryStream_data);
  if ((int)uVar1 < param_2) {
    param_2 = XMemory::GetSize((XMemory *)&this->XMemoryStream_data);
  }
  _Memory = (void *)thunk_FUN_100025f6(param_2);
  sVar2 = (*this->vftablePtr->CopyTo)(this,_Memory,param_2);
  if ((sVar2 == param_2) &&
     (sVar2 = (**(code **)(*(int *)param_1 + 8))(_Memory,param_2), sVar2 == param_2)) {
    _free(_Memory);
    return param_2;
  }
  _free(_Memory);
  return 0;
}



/* ---- GetLength @ 10009ea0 size=9 ---- */

/* public: virtual int __thiscall XMemoryStream::GetLength(void)const  */

int __thiscall XMemoryStream::GetLength(XMemoryStream *this)

{
  ulong uVar1;
  
                    /* 0x9ea0  29  ?GetLength@XMemoryStream@@UBEHXZ */
                    /* WARNING: Could not recover jumptable at 0x10009ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = XMemory::GetSize((XMemory *)&this->XMemoryStream_data);
  return uVar1;
}



/* ---- Clear @ 10009eb0 size=11 ---- */

/* public: virtual void __thiscall XMemoryStream::Clear(void) */

void __thiscall XMemoryStream::Clear(XMemoryStream *this)

{
                    /* 0x9eb0  19  ?Clear@XMemoryStream@@UAEXXZ */
  XMemoryFree((XMemory *)&this->XMemoryStream_data);
  return;
}



/* ---- RemoveRight @ 10009ec0 size=139 ---- */

/* public: virtual int __thiscall XMemoryStream::RemoveRight(int) */

int __thiscall XMemoryStream::RemoveRight(XMemoryStream *this,int param_1)

{
  XMemoryStream_data *this_00;
  ulong uVar1;
  ulong uVar2;
  XMemory *pXVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9ec0  43  ?RemoveRight@XMemoryStream@@UAEHH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000acbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = &this->XMemoryStream_data;
  uVar1 = XMemory::GetSize((XMemory *)this_00);
  uVar2 = param_1;
  if ((int)uVar1 < param_1) {
    uVar2 = XMemory::GetSize((XMemory *)this_00);
  }
  XMemory::GetSize((XMemory *)this_00);
  pXVar3 = (XMemory *)XMemoryRealloc((XMemory *)&param_1,(ulong)this_00);
  local_4 = 0;
  XMemory::operator=((XMemory *)this_00,pXVar3);
  local_4 = 0xffffffff;
  XMemory::~XMemory((XMemory *)&param_1);
  ExceptionList = local_c;
  return uVar2;
}



/* ---- RemoveLeft @ 10009f50 size=174 ---- */

/* public: virtual int __thiscall XMemoryStream::RemoveLeft(int) */

int __thiscall XMemoryStream::RemoveLeft(XMemoryStream *this,int param_1)

{
  XMemoryStream_data *this_00;
  ulong uVar1;
  ulong uVar2;
  size_t _Size;
  void *pvVar3;
  void *_Dst;
  XMemory *pXVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9f50  40  ?RemoveLeft@XMemoryStream@@UAEHH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000ace2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = &this->XMemoryStream_data;
  uVar1 = XMemory::GetSize((XMemory *)this_00);
  uVar2 = param_1;
  if ((int)uVar1 < param_1) {
    uVar2 = XMemory::GetSize((XMemory *)this_00);
  }
  uVar1 = XMemory::GetSize((XMemory *)this_00);
  _Size = uVar1 - uVar2;
  pvVar3 = XMemory::GetData((XMemory *)this_00);
  pvVar3 = (void *)((int)pvVar3 + uVar2);
  _Dst = XMemory::operator_void_((XMemory *)this_00);
  _memcpy(_Dst,pvVar3,_Size);
  XMemory::GetSize((XMemory *)this_00);
  pXVar4 = (XMemory *)XMemoryRealloc((XMemory *)&param_1,(ulong)this_00);
  local_4 = 0;
  XMemory::operator=((XMemory *)this_00,pXVar4);
  local_4 = 0xffffffff;
  XMemory::~XMemory((XMemory *)&param_1);
  ExceptionList = local_c;
  return uVar2;
}



/* ---- CopyTo @ 1000a000 size=61 ---- */

/* public: virtual int __thiscall XMemoryStream::CopyTo(void *,int)const  */

int __thiscall XMemoryStream::CopyTo(XMemoryStream *this,void *param_1,int param_2)

{
  XMemoryStream_data *this_00;
  ulong uVar1;
  void *_Src;
  
                    /* 0xa000  23  ?CopyTo@XMemoryStream@@UBEHPAXH@Z */
  this_00 = &this->XMemoryStream_data;
  uVar1 = XMemory::GetSize((XMemory *)this_00);
  if ((int)uVar1 < param_2) {
    param_2 = XMemory::GetSize((XMemory *)this_00);
  }
  uVar1 = param_2;
  _Src = XMemory::operator_void_const_((XMemory *)this_00);
  _memcpy(param_1,_Src,uVar1);
  return param_2;
}



/* ---- Write @ 1000a040 size=157 ---- */

/* public: virtual int __thiscall XMemoryStream::Write(void const *,int) */

int __thiscall XMemoryStream::Write(XMemoryStream *this,void *param_1,int param_2)

{
  XMemoryStream_data *this_00;
  ulong uVar1;
  XMemory *pXVar2;
  void *pvVar3;
  size_t _Size;
  XMemoryStream *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa040  48  ?Write@XMemoryStream@@UAEHPBXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000ad06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = &this->XMemoryStream_data;
  local_10 = this;
  uVar1 = XMemory::GetSize((XMemory *)this_00);
  XMemory::GetSize((XMemory *)this_00);
  pXVar2 = (XMemory *)XMemoryRealloc((XMemory *)&local_10,(ulong)this_00);
  local_4 = 0;
  XMemory::operator=((XMemory *)this_00,pXVar2);
  local_4 = 0xffffffff;
  XMemory::~XMemory((XMemory *)&local_10);
  _Size = param_2;
  pvVar3 = XMemory::GetData((XMemory *)this_00);
  _memcpy((void *)((int)pvVar3 + uVar1),param_1,_Size);
  ExceptionList = local_c;
  return param_2;
}



/* ---- Read @ 1000a0e0 size=42 ---- */

/* public: virtual int __thiscall XMemoryStream::Read(void *,int) */

int __thiscall XMemoryStream::Read(XMemoryStream *this,void *param_1,int param_2)

{
  int iVar1;
  
                    /* 0xa0e0  37  ?Read@XMemoryStream@@UAEHPAXH@Z */
  iVar1 = (*this->vftablePtr->CopyTo)(this,param_1,param_2);
  (*this->vftablePtr->RemoveLeft)(this,iVar1);
  return iVar1;
}



/* ---- IXStream @ 1000a110 size=102 ---- */

/* public: virtual __thiscall XMemoryStream::~XMemoryStream(void) */

void __thiscall IXStream::IXStream(IXStream *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xa110  9  ??1XMemoryStream@@UAE@XZ */
  puStack_8 = &LAB_1000ad35;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: XMemoryStream::XMemoryStream */
  this->vftablePtr = (IXStream_vftable *)&XMemoryStream::_vftable_;
  local_4 = 1;
  XMemoryFree((XMemory *)(this + 1));
  local_4 = local_4 & 0xffffff00;
  XMemory::~XMemory((XMemory *)(this + 1));
  this->vftablePtr = &_vftable_;
  ExceptionList = local_c;
  return;
}



/* ---- XMemoryStream @ 1000a180 size=82 ---- */

/* public: __thiscall XMemoryStream::XMemoryStream(void) */

XMemoryStream * __thiscall XMemoryStream::XMemoryStream(XMemoryStream *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa180  6  ??0XMemoryStream@@QAE@XZ */
  puStack_8 = &LAB_1000ad58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  XMemory::XMemory((XMemory *)&this->XMemoryStream_data);
  ExceptionList = local_c;
  return this;
}



/* ---- LoadFromStream @ 1000a1e0 size=116 ---- */

/* public: virtual int __thiscall XDequeStream::LoadFromStream(class IXStream *,int) */

int __thiscall XDequeStream::LoadFromStream(XDequeStream *this,IXStream *param_1,int param_2)

{
  int iVar1;
  void *_Memory;
  size_t sVar2;
  
                    /* 0xa1e0  33  ?LoadFromStream@XDequeStream@@UAEHPAVIXStream@@H@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0x1c))();
  if (iVar1 < param_2) {
    param_2 = (**(code **)(*(int *)param_1 + 0x1c))();
  }
  _Memory = (void *)thunk_FUN_100025f6(param_2);
  sVar2 = (**(code **)(*(int *)param_1 + 0xc))(_Memory,param_2);
  if ((sVar2 == param_2) &&
     (sVar2 = (*this->vftablePtr->Write)(this,_Memory,param_2), sVar2 == param_2)) {
    _free(_Memory);
    return param_2;
  }
  _free(_Memory);
  return 0;
}



/* ---- SaveToStream @ 1000a260 size=98 ---- */

/* public: virtual int __thiscall XDequeStream::SaveToStream(class IXStream *,int)const  */

int __thiscall XDequeStream::SaveToStream(XDequeStream *this,IXStream *param_1,int param_2)

{
  void *_Memory;
  size_t sVar1;
  
                    /* 0xa260  45  ?SaveToStream@XDequeStream@@UBEHPAVIXStream@@H@Z */
  sVar1 = *(size_t *)((this->XDequeStream_data).offset_0x0 + 0x10);
  if ((int)sVar1 < param_2) {
    param_2 = sVar1;
  }
  _Memory = (void *)thunk_FUN_100025f6(param_2);
  sVar1 = (*this->vftablePtr->CopyTo)(this,_Memory,param_2);
  if ((sVar1 == param_2) &&
     (sVar1 = (**(code **)(*(int *)param_1 + 8))(_Memory,param_2), sVar1 == param_2)) {
    _free(_Memory);
    return param_2;
  }
  _free(_Memory);
  return 0;
}



/* ---- GetLength @ 1000a2d0 size=7 ---- */

/* public: virtual int __thiscall XDequeStream::GetLength(void)const  */

int __thiscall XDequeStream::GetLength(XDequeStream *this)

{
                    /* 0xa2d0  28  ?GetLength@XDequeStream@@UBEHXZ */
  return *(int *)((this->XDequeStream_data).offset_0x0 + 0x10);
}



/* ---- Read @ 1000a2e0 size=42 ---- */

/* public: virtual int __thiscall XDequeStream::Read(void *,int) */

int __thiscall XDequeStream::Read(XDequeStream *this,void *param_1,int param_2)

{
  int iVar1;
  
                    /* 0xa2e0  36  ?Read@XDequeStream@@UAEHPAXH@Z */
  iVar1 = (*this->vftablePtr->CopyTo)(this,param_1,param_2);
  (*this->vftablePtr->RemoveLeft)(this,iVar1);
  return iVar1;
}



/* ---- Clear @ 1000a310 size=11 ---- */

/* public: virtual void __thiscall XDequeStream::Clear(void) */

void __thiscall XDequeStream::Clear(XDequeStream *this)

{
                    /* 0xa310  18  ?Clear@XDequeStream@@UAEXXZ */
  FUN_10001740();
  return;
}



/* ---- ~XDequeStream @ 1000a320 size=47 ---- */

/* public: virtual __thiscall XDequeStream::~XDequeStream(void) */

void __thiscall XDequeStream::~XDequeStream(XDequeStream *this)

{
  void *_Memory;
  
                    /* 0xa320  8  ??1XDequeStream@@UAE@XZ */
  _Memory = (void *)(this->XDequeStream_data).offset_0x0;
                    /* inlined constructor or destructor (approx location) for XDequeStream */
  this->vftablePtr = &_vftable_;
  if (_Memory != (void *)0x0) {
    FUN_10001740();
    _free(_Memory);
    (this->XDequeStream_data).offset_0x0 = 0;
  }
                    /* inlined constructor or destructor (approx location) for IXStream */
  this->vftablePtr = (XDequeStream_vftable *)&IXStream::_vftable_;
  return;
}



/* ---- XDequeStream @ 1000a350 size=125 ---- */

/* public: __thiscall XDequeStream::XDequeStream(void) */

XDequeStream * __thiscall XDequeStream::XDequeStream(XDequeStream *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa350  4  ??0XDequeStream@@QAE@XZ */
  puStack_8 = &LAB_1000ad7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  iVar1 = FUN_100025f6(0x14);
  if (iVar1 == 0) {
    (this->XDequeStream_data).offset_0x0 = 0;
    ExceptionList = local_c;
    return this;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  (this->XDequeStream_data).offset_0x0 = iVar1;
  ExceptionList = local_c;
  return this;
}



/* ---- CopyTo @ 1000a3d0 size=186 ---- */

/* public: virtual int __thiscall XDequeStream::CopyTo(void *,int)const  */

int __thiscall XDequeStream::CopyTo(XDequeStream *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_8;
  
                    /* 0xa3d0  22  ?CopyTo@XDequeStream@@UBEHPAXH@Z */
  iVar1 = (this->XDequeStream_data).offset_0x0;
  uVar3 = *(uint *)(iVar1 + 0xc);
  local_8 = 0;
  if (*(int *)(iVar1 + 0x10) + uVar3 < uVar3) {
    FUN_10002586();
  }
  while( true ) {
    iVar2 = (this->XDequeStream_data).offset_0x0;
    uVar4 = *(int *)(iVar2 + 0x10) + *(uint *)(iVar2 + 0xc);
    if (uVar4 < *(uint *)(iVar2 + 0xc)) {
      FUN_10002586();
    }
    if (iVar1 != iVar2) {
      FUN_10002586();
    }
    if (uVar3 == uVar4) break;
    uVar4 = uVar3 >> 4;
    if ((uint)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x10)) <= uVar3) {
      FUN_10002586();
    }
    if (*(uint *)(iVar1 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar1 + 8);
    }
    *(undefined1 *)(local_8 + (int)param_1) =
         *(undefined1 *)((uVar3 & 0xf) + *(int *)(*(int *)(iVar1 + 4) + uVar4 * 4));
    local_8 = local_8 + 1;
    if (local_8 == param_2) {
      return local_8;
    }
    if ((uint)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x10)) <= uVar3) {
      FUN_10002586();
    }
    uVar3 = uVar3 + 1;
  }
  return local_8;
}



/* ---- RemoveRight @ 1000a490 size=167 ---- */

/* public: virtual int __thiscall XDequeStream::RemoveRight(int) */

int __thiscall XDequeStream::RemoveRight(XDequeStream *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_c [3];
  
                    /* 0xa490  42  ?RemoveRight@XDequeStream@@UAEHH@Z */
  iVar6 = (this->XDequeStream_data).offset_0x0;
  iVar1 = *(int *)(iVar6 + 0x10);
  iVar2 = iVar1;
  if (param_1 <= iVar1) {
    iVar2 = param_1;
  }
  param_1 = iVar2;
  uVar3 = iVar1 + *(int *)(iVar6 + 0xc);
  uVar5 = 0;
  if ((uVar3 < *(uint *)(iVar6 + 0xc)) || (*(int *)(iVar6 + 0x10) + *(uint *)(iVar6 + 0xc) < uVar3))
  {
    FUN_10002586();
  }
  iVar1 = (this->XDequeStream_data).offset_0x0;
  uVar4 = *(int *)(iVar1 + 0x10) + *(uint *)(iVar1 + 0xc);
  if (uVar4 < *(uint *)(iVar1 + 0xc)) {
    FUN_10002586();
  }
  uVar4 = uVar4 - param_1;
  if ((*(int *)(iVar1 + 0x10) + *(uint *)(iVar1 + 0xc) < uVar4) || (uVar4 < *(uint *)(iVar1 + 0xc)))
  {
    FUN_10002586();
  }
  FUN_10001310(local_c,0,iVar1,uVar4,uVar5,iVar6,uVar3);
  return param_1;
}



/* ---- RemoveLeft @ 1000a540 size=160 ---- */

/* public: virtual int __thiscall XDequeStream::RemoveLeft(int) */

int __thiscall XDequeStream::RemoveLeft(XDequeStream *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_c [3];
  
                    /* 0xa540  39  ?RemoveLeft@XDequeStream@@UAEHH@Z */
  iVar7 = (this->XDequeStream_data).offset_0x0;
  iVar1 = *(int *)(iVar7 + 0x10);
  iVar3 = iVar1;
  if (param_1 <= iVar1) {
    iVar3 = param_1;
  }
  param_1 = iVar3;
  uVar4 = *(uint *)(iVar7 + 0xc);
  if (iVar1 + uVar4 < uVar4) {
    FUN_10002586();
  }
  uVar4 = uVar4 + param_1;
  if ((*(int *)(iVar7 + 0x10) + *(uint *)(iVar7 + 0xc) < uVar4) || (uVar4 < *(uint *)(iVar7 + 0xc)))
  {
    FUN_10002586();
  }
  uVar6 = 0;
  iVar1 = (this->XDequeStream_data).offset_0x0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar5 = 0;
  if ((uVar2 < *(uint *)(iVar1 + 0xc)) || (*(int *)(iVar1 + 0x10) + *(uint *)(iVar1 + 0xc) < uVar2))
  {
    FUN_10002586();
  }
  FUN_10001310(local_c,uVar5,iVar1,uVar2,uVar6,iVar7,uVar4);
  return param_1;
}



/* ---- Write @ 1000a5e0 size=182 ---- */

/* WARNING: Variable defined which should be unmapped: param_2 */
/* public: virtual int __thiscall XDequeStream::Write(void const *,int) */

int __thiscall XDequeStream::Write(XDequeStream *this,void *param_1,int param_2)

{
  uint uVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  DWORD dwFlags;
  SIZE_T dwBytes;
  int local_10;
  
                    /* 0xa5e0  47  ?Write@XDequeStream@@UAEHPBXH@Z */
  local_10 = 0;
  if (0 < param_2) {
    do {
      uVar1 = (this->XDequeStream_data).offset_0x0;
      if (((*(int *)(uVar1 + 0xc) + *(int *)(uVar1 + 0x10) & 0xfU) == 0) &&
         (*(uint *)(uVar1 + 8) <= *(int *)(uVar1 + 0x10) + 0x10U >> 4)) {
        FUN_100015c0(uVar1);
      }
      uVar4 = *(int *)(uVar1 + 0xc) + *(int *)(uVar1 + 0x10);
      uVar3 = uVar4 >> 4;
      if (*(uint *)(uVar1 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(uVar1 + 8);
      }
      if (*(int *)(*(int *)(uVar1 + 4) + uVar3 * 4) == 0) {
        dwBytes = 0x10;
        dwFlags = 8;
        hHeap = GetProcessHeap();
        pvVar2 = HeapAlloc(hHeap,dwFlags,dwBytes);
        *(LPVOID *)(*(int *)(uVar1 + 4) + uVar3 * 4) = pvVar2;
      }
      puVar5 = (undefined1 *)((uVar4 & 0xf) + *(int *)(*(int *)(uVar1 + 4) + uVar3 * 4));
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = *(undefined1 *)(local_10 + (int)param_1);
      }
      *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + 1;
      local_10 = local_10 + 1;
    } while (local_10 < param_2);
  }
  return param_2;
}



/* ---- GetXMemory @ 1000a6c0 size=16 ---- */

/* struct XSystem::MemoryPool::_XMemory * __stdcall XStream::GetXMemory(struct XStream::_THandle *)
    */

_XMemory * XStream::GetXMemory(_THandle *param_1)

{
                    /* 0xa6c0  32
                       ?GetXMemory@XStream@@YGPAU_XMemory@MemoryPool@XSystem@@PAU_THandle@1@@Z */
  if (param_1 == (_THandle *)0x0) {
    return (_XMemory *)0x0;
  }
  return *(_XMemory **)param_1;
}



/* ---- Detach @ 1000a6d0 size=24 ---- */

/* struct XSystem::MemoryPool::_XMemory * __stdcall XStream::Detach(struct XStream::_THandle *) */

_XMemory * XStream::Detach(_THandle *param_1)

{
  _XMemory *p_Var1;
  
                    /* 0xa6d0  27
                       ?Detach@XStream@@YGPAU_XMemory@MemoryPool@XSystem@@PAU_THandle@1@@Z */
  if (param_1 == (_THandle *)0x0) {
    return (_XMemory *)0x0;
  }
  p_Var1 = *(_XMemory **)param_1;
  *(undefined4 *)param_1 = 0;
  return p_Var1;
}



/* ---- Attach @ 1000a6f0 size=36 ---- */

/* bool __stdcall XStream::Attach(struct XStream::_THandle *,struct XSystem::MemoryPool::_XMemory *)
    */

bool XStream::Attach(_THandle *param_1,_XMemory *param_2)

{
                    /* 0xa6f0  17
                       ?Attach@XStream@@YG_NPAU_THandle@1@PAU_XMemory@MemoryPool@XSystem@@@Z */
  if (param_1 == (_THandle *)0x0) {
    return false;
  }
  XSystem::MemoryPool::Free(*(_XMemory **)param_1);
  *(_XMemory **)param_1 = param_2;
  return true;
}



/* ---- GetLength @ 1000a720 size=26 ---- */

/* int __stdcall XStream::GetLength(struct XStream::_THandle *) */

int XStream::GetLength(_THandle *param_1)

{
  uint uVar1;
  
                    /* 0xa720  30  ?GetLength@XStream@@YGHPAU_THandle@1@@Z */
  if (param_1 == (_THandle *)0x0) {
    return -1;
  }
                    /* WARNING: Could not recover jumptable at 0x1000a734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  return uVar1;
}



/* ---- Clear @ 1000a740 size=36 ---- */

/* bool __stdcall XStream::Clear(struct XStream::_THandle *) */

bool XStream::Clear(_THandle *param_1)

{
                    /* 0xa740  20  ?Clear@XStream@@YG_NPAU_THandle@1@@Z */
  if (param_1 == (_THandle *)0x0) {
    return false;
  }
  XSystem::MemoryPool::Free(*(_XMemory **)param_1);
  *(undefined4 *)param_1 = 0;
  return true;
}



/* ---- RemoveRight @ 1000a770 size=71 ---- */

/* int __stdcall XStream::RemoveRight(struct XStream::_THandle *,int) */

int XStream::RemoveRight(_THandle *param_1,int param_2)

{
  uint uVar1;
  _XMemory *p_Var2;
  
                    /* 0xa770  44  ?RemoveRight@XStream@@YGHPAU_THandle@1@H@Z */
  if (param_1 == (_THandle *)0x0) {
    return -1;
  }
  uVar1 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  if ((int)uVar1 < param_2) {
    param_2 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  }
  uVar1 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  p_Var2 = XSystem::MemoryPool::Realloc(*(_XMemory **)param_1,uVar1 - param_2);
  *(_XMemory **)param_1 = p_Var2;
  return param_2;
}



/* ---- RemoveLeft @ 1000a7c0 size=29 ---- */

/* int __stdcall XStream::RemoveLeft(struct XStream::_THandle *,int) */

int XStream::RemoveLeft(_THandle *param_1,int param_2)

{
  uint uVar1;
  
                    /* 0xa7c0  41  ?RemoveLeft@XStream@@YGHPAU_THandle@1@H@Z */
  if (param_1 == (_THandle *)0x0) {
    return -1;
  }
  uVar1 = FUN_1000aa00();
  return uVar1;
}



/* ---- Peek @ 1000a7e0 size=69 ---- */

/* int __stdcall XStream::Peek(struct XStream::_THandle *,void *,int) */

int XStream::Peek(_THandle *param_1,void *param_2,int param_3)

{
  uint uVar1;
  
                    /* 0xa7e0  35  ?Peek@XStream@@YGHPAU_THandle@1@PAXH@Z */
  if (param_1 == (_THandle *)0x0) {
    return -1;
  }
  uVar1 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  if ((int)uVar1 < param_3) {
    param_3 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  }
  _memcpy(param_2,*(void **)param_1,param_3);
  return param_3;
}



/* ---- Write @ 1000a830 size=79 ---- */

/* int __stdcall XStream::Write(struct XStream::_THandle *,void const *,int) */

int XStream::Write(_THandle *param_1,void *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  _XMemory *p_Var3;
  
                    /* 0xa830  49  ?Write@XStream@@YGHPAU_THandle@1@PBXH@Z */
  if (param_1 == (_THandle *)0x0) {
    return -1;
  }
  uVar1 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  uVar2 = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
  p_Var3 = XSystem::MemoryPool::Realloc(*(_XMemory **)param_1,uVar2 + param_3);
  *(_XMemory **)param_1 = p_Var3;
  _memcpy(p_Var3 + uVar1,param_2,param_3);
  return param_3;
}



/* ---- Read @ 1000a880 size=34 ---- */

/* int __stdcall XStream::Read(struct XStream::_THandle *,void *,int) */

int XStream::Read(_THandle *param_1,void *param_2,int param_3)

{
  size_t sVar1;
  
                    /* 0xa880  38  ?Read@XStream@@YGHPAU_THandle@1@PAXH@Z */
  if (param_1 == (_THandle *)0x0) {
    return -1;
  }
  sVar1 = FUN_1000aae0(param_2);
  return sVar1;
}



/* ---- DestroyHandle @ 1000a8b0 size=37 ---- */

/* void __stdcall XStream::DestroyHandle(struct XStream::_THandle *) */

void XStream::DestroyHandle(_THandle *param_1)

{
                    /* 0xa8b0  25  ?DestroyHandle@XStream@@YGXPAU_THandle@1@@Z */
  if (param_1 != (_THandle *)0x0) {
    XSystem::MemoryPool::Free(*(_XMemory **)param_1);
    *(undefined4 *)param_1 = 0;
    XSystem::MPHeap::Free((_THandle *)0x0,param_1);
  }
  return;
}



/* ---- CreateHandle @ 1000a8e0 size=19 ---- */

/* struct XStream::_THandle * __stdcall XStream::CreateHandle(void) */

_THandle * XStream::CreateHandle(void)

{
  _THandle *p_Var1;
  
                    /* 0xa8e0  24  ?CreateHandle@XStream@@YGPAU_THandle@1@XZ */
  p_Var1 = (_THandle *)FUN_1000abd0();
  if (p_Var1 == (_THandle *)0x0) {
    return (_THandle *)0x0;
  }
  *(undefined4 *)p_Var1 = 0;
  return p_Var1;
}



/* ---- Clone @ 1000a900 size=135 ---- */

/* struct XStream::_THandle * __stdcall XStream::Clone(struct XStream::_THandle *) */

_THandle * XStream::Clone(_THandle *param_1)

{
  _THandle *p_Var1;
  uint uVar2;
  uint uVar3;
  _XMemory *p_Var4;
  uint _Size;
  
                    /* 0xa900  21  ?Clone@XStream@@YGPAU_THandle@1@PAU21@@Z */
  p_Var1 = (_THandle *)FUN_1000abd0();
  if (p_Var1 == (_THandle *)0x0) {
    p_Var1 = (_THandle *)0x0;
  }
  else {
    *(undefined4 *)p_Var1 = 0;
  }
  if (param_1 == (_THandle *)0x0) {
    _Size = 0xffffffff;
    param_1 = (_THandle *)0x0;
  }
  else {
    _Size = XSystem::MemoryPool::GetSize(*(_XMemory **)param_1);
    param_1 = *(_THandle **)param_1;
  }
  if (p_Var1 == (_THandle *)0x0) {
    if (_Size != 0xffffffff) {
      return (_THandle *)0x0;
    }
  }
  else {
    uVar2 = XSystem::MemoryPool::GetSize(*(_XMemory **)p_Var1);
    uVar3 = XSystem::MemoryPool::GetSize(*(_XMemory **)p_Var1);
    p_Var4 = XSystem::MemoryPool::Realloc(*(_XMemory **)p_Var1,uVar3 + _Size);
    *(_XMemory **)p_Var1 = p_Var4;
    _memcpy(p_Var4 + uVar2,param_1,_Size);
  }
  return p_Var1;
}



/* ---- FUN_1000aa00 @ 1000aa00 size=90 ---- */

uint FUN_1000aa00(void)

{
  uint in_EAX;
  uint uVar1;
  _XMemory *p_Var2;
  undefined4 *unaff_ESI;
  
  uVar1 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  if ((int)uVar1 < (int)in_EAX) {
    in_EAX = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  }
  uVar1 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  p_Var2 = XSystem::MemoryPool::Realloc((_XMemory *)*unaff_ESI,uVar1);
  *unaff_ESI = p_Var2;
  uVar1 = XSystem::MemoryPool::GetSize(p_Var2);
  _memcpy(p_Var2,p_Var2 + in_EAX,uVar1 - in_EAX);
  uVar1 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  p_Var2 = XSystem::MemoryPool::Realloc((_XMemory *)*unaff_ESI,uVar1 - in_EAX);
  *unaff_ESI = p_Var2;
  return in_EAX;
}



/* ---- FUN_1000aae0 @ 1000aae0 size=133 ---- */

size_t FUN_1000aae0(void *param_1)

{
  size_t in_EAX;
  uint uVar1;
  size_t sVar2;
  _XMemory *p_Var3;
  undefined4 *unaff_ESI;
  
  uVar1 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  if ((int)uVar1 < (int)in_EAX) {
    in_EAX = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  }
  _memcpy(param_1,(void *)*unaff_ESI,in_EAX);
  uVar1 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  sVar2 = in_EAX;
  if ((int)uVar1 < (int)in_EAX) {
    sVar2 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  }
  uVar1 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  p_Var3 = XSystem::MemoryPool::Realloc((_XMemory *)*unaff_ESI,uVar1);
  *unaff_ESI = p_Var3;
  uVar1 = XSystem::MemoryPool::GetSize(p_Var3);
  _memcpy(p_Var3,p_Var3 + sVar2,uVar1 - sVar2);
  uVar1 = XSystem::MemoryPool::GetSize((_XMemory *)*unaff_ESI);
  p_Var3 = XSystem::MemoryPool::Realloc((_XMemory *)*unaff_ESI,uVar1 - sVar2);
  *unaff_ESI = p_Var3;
  return in_EAX;
}



/* ---- FUN_1000abd0 @ 1000abd0 size=100 ---- */

void FUN_1000abd0(void)

{
  void *pvVar1;
  _func_void *p_Var2;
  exception local_c;
  
  pvVar1 = XSystem::MPHeap::Alloc((_THandle *)0x0,4);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return;
    }
    p_Var2 = std::set_new_handler((_func_void *)0x0);
    std::set_new_handler(p_Var2);
    if (p_Var2 == (_func_void *)0x0) break;
    (*p_Var2)();
    pvVar1 = XSystem::MPHeap::Alloc((_THandle *)0x0,4);
  }
                    /* inlined constructor: std::bad_alloc::bad_alloc */
  std::exception::exception(&local_c,&PTR_s_bad_allocation_1000fd5c,1);
  local_c.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_c,&DAT_1000d430);
}



/* ---- Unwind@1000ac40 @ 1000ac40 size=8 ---- */

void Unwind_1000ac40(void)

{
  int unaff_EBP;
  
  FUN_100012e0(unaff_EBP + -0x28);
  return;
}



/* ---- Unwind@1000ac80 @ 1000ac80 size=26 ---- */

void Unwind_1000ac80(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x1000ac93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XMemory::~XMemory(*(XMemory **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1000acb5 @ 1000acb5 size=9 ---- */

void Unwind_1000acb5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000acb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XMemory::~XMemory((XMemory *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1000acd9 @ 1000acd9 size=9 ---- */

void Unwind_1000acd9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000acdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XMemory::~XMemory((XMemory *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1000acfd @ 1000acfd size=9 ---- */

void Unwind_1000acfd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XMemory::~XMemory((XMemory *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000ad21 @ 1000ad21 size=8 ---- */

void Unwind_1000ad21(void)

{
  int unaff_EBP;
  
  IXStream::~IXStream(*(IXStream **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000ad29 @ 1000ad29 size=12 ---- */

void Unwind_1000ad29(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XMemory::~XMemory((XMemory *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000ad50 @ 1000ad50 size=8 ---- */

void Unwind_1000ad50(void)

{
  int unaff_EBP;
  
  IXStream::~IXStream(*(IXStream **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000ad73 @ 1000ad73 size=8 ---- */

void Unwind_1000ad73(void)

{
  int unaff_EBP;
  
  IXStream::~IXStream(*(IXStream **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000ada0 @ 1000ada0 size=8 ---- */

void Unwind_1000ada0(void)

{
  int unaff_EBP;
  
  IXStream::~IXStream(*(IXStream **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000adf0 @ 1000adf0 size=8 ---- */

void Unwind_1000adf0(void)

{
  int unaff_EBP;
  
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000ae20 @ 1000ae20 size=8 ---- */

void Unwind_1000ae20(void)

{
  int unaff_EBP;
  
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000ae50 @ 1000ae50 size=8 ---- */

void Unwind_1000ae50(void)

{
  int unaff_EBP;
  
  FUN_100012e0(unaff_EBP + -0x50);
  return;
}



/* ---- FUN_1000ae73 @ 1000ae73 size=22 ---- */

void FUN_1000ae73(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_1000fea8);
  _atexit((_func_4879 *)&LAB_1000ae89);
  return;
}



/* ---- ~bad_alloc @ 1000ae93 size=20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall std::bad_alloc::~bad_alloc(void)

{
  _DAT_1000feb0 = &vftable;
  exception::~exception((exception *)&DAT_1000feb0);
  return;
}


// total=354 ok=354 failed=0
