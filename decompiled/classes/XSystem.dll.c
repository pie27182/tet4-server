// Module: XSystem.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- `default_constructor_closure' @ 10001000 size=11 ---- */

/* public: void __thiscall XSystem::Threading::CriticalSection::`default constructor closure'(void)
    */

void __thiscall
XSystem::Threading::CriticalSection::_default_constructor_closure_(CriticalSection *this)

{
                    /* 0x1000  129  ??_FCriticalSection@Threading@XSystem@@QAEXXZ */
  CriticalSection(this,4000);
  return;
}



/* ---- `default_constructor_closure' @ 10001010 size=69 ---- */

/* public: void __thiscall XSystem::Threading::Mutex::`default constructor closure'(void) */

void __thiscall XSystem::Threading::Mutex::_default_constructor_closure_(Mutex *this)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x1010  131  ??_FMutex@Threading@XSystem@@QAEXXZ */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- `default_constructor_closure' @ 10001060 size=71 ---- */

/* public: void __thiscall XSystem::Threading::AutoResetEvent::`default constructor closure'(void)
    */

void __thiscall
XSystem::Threading::AutoResetEvent::_default_constructor_closure_(AutoResetEvent *this)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x1060  128  ??_FAutoResetEvent@Threading@XSystem@@QAEXXZ */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- `default_constructor_closure' @ 100010b0 size=71 ---- */

/* public: void __thiscall XSystem::Threading::ManualResetEvent::`default constructor closure'(void)
    */

void __thiscall
XSystem::Threading::ManualResetEvent::_default_constructor_closure_(ManualResetEvent *this)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x10b0  130  ??_FManualResetEvent@Threading@XSystem@@QAEXXZ */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- operator= @ 10001100 size=13 ---- */

/* public: class XSystem::Threading::Barrier & __thiscall
   XSystem::Threading::Barrier::operator=(class XSystem::Threading::Barrier const &) */

Barrier * __thiscall XSystem::Threading::Barrier::operator=(Barrier *this,Barrier *param_1)

{
                    /* 0x1100  79  ??4Barrier@Threading@XSystem@@QAEAAV012@ABV012@@Z
                       0x1100  80  ??4CondVar@Threading@XSystem@@QAEAAV012@ABV012@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}



/* ---- bad_alloc @ 10001110 size=25 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_10022d7c,1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_10001130 @ 10001130 size=11 ---- */

void __fastcall FUN_10001130(undefined4 *param_1)

{
  *param_1 = &std::bad_alloc::vftable;
  *param_1 = &std::exception::vftable;
  if (param_1[2] != 0) {
    _free((void *)param_1[1]);
  }
  return;
}



/* ---- vfunction1 @ 10001140 size=36 ---- */

exception * __thiscall std::bad_alloc::vfunction1(bad_alloc *this,byte param_1)

{
  this->vftablePtr = &vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- logic_error @ 10001170 size=107 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100168c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception((exception *)this);
  local_4 = 0;
  this->vftablePtr = &vftable;
  (this->logic_error_data).offset_0x14 = 0;
  (this->logic_error_data).offset_0x18 = 0xf;
  *(undefined1 *)&(this->logic_error_data).offset_0x4 = 0;
  FUN_10001470(&this->logic_error_data,param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- ~logic_error @ 100011e0 size=50 ---- */

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



/* ---- vfunction2 @ 10001220 size=14 ---- */

/* std::logic_error member function inherited by std::length_error
   std::logic_error member function inherited by std::out_of_range */

int __thiscall std::logic_error::vfunction2(logic_error *this)

{
  if ((this->logic_error_data).offset_0x18 < 0x10) {
    return (int)&(this->logic_error_data).offset_0x4;
  }
  return (int)(this->logic_error_data).offset_0x4;
}



/* ---- vfunction1 @ 10001230 size=71 ---- */

/* std::logic_error member function inherited by std::length_error */

exception * __thiscall std::logic_error::vfunction1(logic_error *this,byte param_1)

{
  this->vftablePtr = &vftable;
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



/* ---- FUN_10001280 @ 10001280 size=52 ---- */

undefined4 * FUN_10001280(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  undefined4 unaff_EDI;
  
  if ((*in_EAX == 0) && (DAT_10023e78 == 0)) {
    FUN_100031c0();
  }
  puVar1 = FUN_100030e0();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 1;
  puVar1[1] = unaff_EDI;
  return puVar1 + 2;
}



/* ---- FUN_100012c0 @ 100012c0 size=87 ---- */

void __fastcall FUN_100012c0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  if ((in_EAX != 0) && (piVar1 = (int *)(in_EAX + -8), piVar1 != (int *)0x0)) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      *piVar1 = 0;
      *(undefined4 *)(in_EAX + -4) = 0;
      if ((*param_2 == 0) && (DAT_10023e78 == 0)) {
        FUN_100031c0();
      }
      if (*(void **)(in_EAX + -0x14) != (void *)0x0) {
        FUN_10002d10(*(void **)(in_EAX + -0x14),(undefined4 *)(in_EAX + -0x14));
        return;
      }
      _free((undefined4 *)(in_EAX + -0x14));
    }
  }
  return;
}



/* ---- FUN_10001320 @ 10001320 size=184 ---- */

undefined4 * __thiscall FUN_10001320(void *this,void *param_1)

{
  uint in_EAX;
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int *unaff_EBX;
  
  if (in_EAX == 0) {
    FUN_100012c0(this,unaff_EBX);
    return (undefined4 *)0x0;
  }
  if (param_1 == (void *)0x0) {
    if ((*unaff_EBX == 0) && (DAT_10023e78 == 0)) {
      FUN_100031c0();
    }
    puVar1 = FUN_100030e0();
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
LAB_10001388:
    *puVar1 = 1;
    puVar1[1] = in_EAX;
    return puVar1 + 2;
  }
  if (*(int *)((int)param_1 + -8) == 1) {
    puVar1 = XSystem::MPHeap::Realloc((_THandle *)*unaff_EBX,(void *)((int)param_1 + -8),in_EAX + 8)
    ;
    if (puVar1 != (undefined4 *)0x0) goto LAB_10001388;
  }
  else {
    puVar1 = FUN_10001280();
    if (puVar1 != (undefined4 *)0x0) {
      if (*(uint *)((int)param_1 + -4) <= in_EAX) {
        in_EAX = *(uint *)((int)param_1 + -4);
      }
      _memcpy(puVar1,param_1,in_EAX);
      FUN_100012c0(extraout_ECX,unaff_EBX);
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}



/* ---- FUN_100013e0 @ 100013e0 size=95 ---- */

undefined4 * FUN_100013e0(int *param_1)

{
  undefined4 *_Dst;
  size_t _Size;
  undefined4 *puVar1;
  void *unaff_EBX;
  
  if (unaff_EBX == (void *)0x0) {
    return (undefined4 *)0x0;
  }
  _Size = *(size_t *)((int)unaff_EBX + -4);
  if ((*param_1 == 0) && (DAT_10023e78 == 0)) {
    FUN_100031c0();
  }
  puVar1 = FUN_100030e0();
  if (puVar1 != (undefined4 *)0x0) {
    _Dst = puVar1 + 2;
    *puVar1 = 1;
    puVar1[1] = _Size;
    if (_Dst != (undefined4 *)0x0) {
      _memcpy(_Dst,unaff_EBX,_Size);
      return _Dst;
    }
  }
  return (undefined4 *)0x0;
}



/* ---- FUN_10001440 @ 10001440 size=38 ---- */

void __fastcall FUN_10001440(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ---- FUN_10001470 @ 10001470 size=218 ---- */

void * __thiscall FUN_10001470(void *this,void *param_1,uint param_2,uint param_3)

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
    FUN_10001660(this,(undefined4 *)(_MaxCount + param_2),0xffffffff);
    FUN_10001660(this,(undefined4 *)0x0,param_2);
    return this;
  }
  if (_MaxCount == 0xffffffff) {
    std::length_error::length_error(this_00);
  }
  if (*(uint *)((int)this + 0x18) < _MaxCount) {
    FUN_10001820(this,_MaxCount);
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



/* ---- FUN_10001550 @ 10001550 size=239 ---- */

void FUN_10001550(void)

{
  undefined4 *puVar1;
  _THandle *p_Var2;
  exception local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016f23;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection(DAT_10023ea0);
  local_c = 0;
  if (DAT_10023e70 == (undefined4 *)0x0) {
    if (DAT_10023e74 == '\x01') {
      FUN_10003340();
      return;
    }
    puVar1 = (undefined4 *)FUN_100086ab(4);
    local_c._0_1_ = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      p_Var2 = XSystem::MPHeap::CreateHandle(0);
      *puVar1 = p_Var2;
    }
    local_c = (uint)local_c._1_3_ << 8;
    DAT_10023e70 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
                    /* inlined constructor: std::bad_alloc::bad_alloc */
      std::exception::exception(&local_24,&PTR_s_bad_allocation_10022d7c,1);
      local_24.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_24,&DAT_1001b4c0);
    }
    _atexit((_func_4879 *)&LAB_100016f0);
  }
  LeaveCriticalSection(DAT_10023ea0);
  ExceptionList = local_14;
  return;
}



/* ---- FUN_10001640 @ 10001640 size=25 ---- */

exception * __thiscall FUN_10001640(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  param_1->vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
  return param_1;
}



/* ---- FUN_10001660 @ 10001660 size=131 ---- */

int __thiscall FUN_10001660(void *this,undefined4 *param_1,uint param_2)

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



/* ---- FUN_10001740 @ 10001740 size=22 ---- */

void FUN_10001740(void)

{
  undefined4 *in_EAX;
  
  if (*(char *)(in_EAX + 1) == '\x01') {
    *(undefined1 *)(in_EAX + 1) = 0;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)*in_EAX);
  }
  return;
}



/* ---- logic_error @ 10001760 size=113 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception((exception *)this,param_1);
  local_4 = 0;
  this->vftablePtr = &vftable;
  (this->logic_error_data).offset_0x18 = 0xf;
  (this->logic_error_data).offset_0x14 = 0;
  *(undefined1 *)&(this->logic_error_data).offset_0x4 = 0;
  FUN_10001470(&this->logic_error_data,param_1 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_100017e0 @ 100017e0 size=59 ---- */

int __thiscall FUN_100017e0(void *this,char *param_1)

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
  FUN_10001a00(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (int)this;
}



/* ---- FUN_10001820 @ 10001820 size=175 ---- */

void __thiscall FUN_10001820(void *this,uint param_1)

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
  
  puStack_c = &LAB_100168a0;
  local_10 = ExceptionList;
  uStack_3c = DAT_10022024 ^ (int)register0x00000010 - 4U;
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
    __CxxThrowException_8(&local_2c,&DAT_1001b4c0);
  }
  local_14 = (undefined1 *)&uStack_3c;
  FUN_100086ab(uVar3);
  FUN_100018f7();
  return;
}



/* ---- Catch_All@100018cf @ 100018cf size=34 ---- */

undefined * Catch_All_100018cf(void)

{
  undefined4 extraout_EAX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  std::bad_alloc::bad_alloc(*(bad_alloc **)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + 8) = extraout_EAX;
  return &DAT_100018f1;
}



/* ---- FUN_100018f7 @ 100018f7 size=105 ---- */

void FUN_100018f7(void)

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



/* ---- Catch_All@10001960 @ 10001960 size=48 ---- */

void Catch_All_10001960(void)

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



/* ---- bad_alloc @ 100019a0 size=85 ---- */

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
    __CxxThrowException_8(&local_c,&DAT_1001b4c0);
  }
  FUN_100086ab((size_t)pcStack00000004);
  return;
}



/* ---- FUN_10001a00 @ 10001a00 size=193 ---- */

void * __thiscall FUN_10001a00(void *this,undefined4 *param_1,uint param_2)

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
      pvVar1 = FUN_10001470(this,this,(int)param_1 - (int)puVar3,param_2);
      return pvVar1;
    }
  }
  if (param_2 == 0xffffffff) {
    std::length_error::length_error(this_00);
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_10001820(this,param_2);
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



/* ---- FUN_10001ad0 @ 10001ad0 size=214 ---- */

undefined4 * FUN_10001ad0(undefined4 *param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016876;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)(param_1 + 3),4000);
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  param_1[4] = puVar1;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)param_1[4] = pvVar2;
  if (*(int *)param_1[4] == 0) {
    _free((int *)param_1[4]);
    param_1[4] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  param_1[5] = puVar1;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)param_1[5] = pvVar2;
  if (*(int *)param_1[5] == 0) {
    _free((int *)param_1[5]);
    param_1[5] = 0;
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10001bb0 @ 10001bb0 size=92 ---- */

void FUN_10001bb0(void)

{
  int unaff_ESI;
  
  CloseHandle((HANDLE)**(undefined4 **)(unaff_ESI + 0x14));
  _free(*(void **)(unaff_ESI + 0x14));
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  CloseHandle((HANDLE)**(undefined4 **)(unaff_ESI + 0x10));
  _free(*(void **)(unaff_ESI + 0x10));
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  DeleteCriticalSection(*(LPCRITICAL_SECTION *)(unaff_ESI + 0xc));
  _free(*(void **)(unaff_ESI + 0xc));
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}



/* ---- FUN_10001c10 @ 10001c10 size=163 ---- */

undefined1 * FUN_10001c10(undefined1 *param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001683b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)(param_1 + 4),4000);
  local_4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)(param_1 + 0x14) = puVar1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  **(undefined4 **)(param_1 + 0x14) = pvVar2;
  if (**(int **)(param_1 + 0x14) == 0) {
    _free(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 1;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10001cc0 @ 10001cc0 size=152 ---- */

undefined4 * FUN_10001cc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *param_1 = puVar1;
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)*param_1 = pvVar2;
  if (*(int *)*param_1 == 0) {
    _free((int *)*param_1);
    *param_1 = 0;
  }
  local_4 = 0;
  XSystem::Threading::CondVar::CondVar((CondVar *)(param_1 + 1));
  param_1[2] = 0;
  param_1[3] = param_2;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10001d60 @ 10001d60 size=100 ---- */

void FUN_10001d60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  XSystem::Threading::CondVar::~CondVar((CondVar *)(param_1 + 1));
  CloseHandle(*(HANDLE *)*param_1);
  _free((void *)*param_1);
  *param_1 = 0;
  ExceptionList = local_c;
  return;
}



/* ---- Thread @ 10001dd0 size=21 ---- */

/* public: __thiscall XSystem::Threading::Thread::Thread(class XSystem::Threading::Thread const &)
    */

void __thiscall XSystem::Threading::Thread::Thread(Thread *this,Thread *param_1)

{
                    /* 0x1dd0  11  ??0Thread@Threading@XSystem@@QAE@ABV012@@Z */
  this->vftablePtr = &_vftable_;
  (this->Thread_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  return;
}



/* ---- vfunction1 @ 10001df0 size=82 ---- */

Thread * __thiscall XSystem::Threading::Thread::vfunction1(Thread *this,byte param_1)

{
  undefined1 *_Memory;
  
  if ((param_1 & 2) == 0) {
    ~Thread(this);
    if ((param_1 & 1) != 0) {
      _free(this);
    }
    return (Thread *)this;
  }
  _Memory = &this[-1].Thread_data.field_0x1c;
  _eh_vector_destructor_iterator_(this,8,*(int *)&this[-1].Thread_data.field_0x1c,~Thread);
  if ((param_1 & 1) != 0) {
    _free(_Memory);
  }
  return (Thread *)_Memory;
}



/* ---- FUN_10001e50 @ 10001e50 size=106 ---- */

void FUN_10001e50(void)

{
  undefined4 *puVar1;
  _func_void *p_Var2;
  exception local_c;
  
  while( true ) {
    if (DAT_10023e78 == 0) {
      FUN_100031c0();
    }
    puVar1 = FUN_100030e0();
    if (puVar1 != (undefined4 *)0x0) break;
    p_Var2 = std::set_new_handler((_func_void *)0x0);
    std::set_new_handler(p_Var2);
    if (p_Var2 == (_func_void *)0x0) {
                    /* inlined constructor: std::bad_alloc::bad_alloc */
      std::exception::exception(&local_c,&PTR_s_bad_allocation_10022d7c,1);
      local_c.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_c,&DAT_1001b4c0);
    }
    (*p_Var2)();
  }
  return;
}



/* ---- FUN_10001ec0 @ 10001ec0 size=186 ---- */

undefined4 * __thiscall FUN_10001ec0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  void *local_18;
  uint local_14;
  uintptr_t local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016f6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_4 = 0;
  puVar1 = FUN_100145b0();
  *param_1 = puVar1;
  if (this < (void *)0x400) {
    bVar3 = this == (void *)0x0;
    if (!bVar3) goto LAB_10001f28;
    uVar2 = XPlatform::GetProcessorCount();
    this = (void *)(uVar2 + 3);
  }
  else {
    this = (void *)0x400;
  }
  bVar3 = this == (void *)0x0;
LAB_10001f28:
  if (!bVar3) {
    local_18 = this;
    do {
      local_14 = 0;
      local_10 = __beginthreadex((void *)0x0,0,FUN_10002110,param_1,0,&local_14);
      if (local_10 != 0) {
        FUN_10002280();
      }
      local_18 = (void *)((int)local_18 + -1);
    } while (local_18 != (void *)0x0);
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10001f80 @ 10001f80 size=398 ---- */

void FUN_10001f80(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint nCount;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100167ab;
  local_c = ExceptionList;
  uVar2 = DAT_10022024 ^ (uint)(auStack_e + -0x12);
  ExceptionList = &local_c;
  local_4 = 0;
  for (uVar3 = 0; (iVar1 = param_1[2], iVar1 != 0 && (uVar3 < (uint)(param_1[3] - iVar1 >> 2)));
      uVar3 = uVar3 + 1) {
    (**(code **)(*(int *)*param_1 + 0xc))(0xffffffff,0,0,uVar2);
  }
  if ((iVar1 != 0) && (param_1[3] - iVar1 >> 2 != 0)) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1[3] - iVar1 >> 2;
    }
    uVar3 = uVar2 >> 6;
    nCount = uVar2 & 0x3f;
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if ((param_1[2] == 0) || ((uint)(param_1[3] - param_1[2] >> 2) <= uVar4)) {
          FUN_10008e31();
        }
        WaitForMultipleObjects(0x40,(HANDLE *)(param_1[2] + uVar4 * 4),1,0xffffffff);
        uVar4 = uVar4 + 0x40;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (nCount != 0) {
      if ((param_1[2] == 0) || ((uint)(param_1[3] - param_1[2] >> 2) <= uVar2 - nCount)) {
        FUN_10008e31();
      }
      WaitForMultipleObjects(nCount,(HANDLE *)(param_1[2] + (uVar2 - nCount) * 4),1,0xffffffff);
    }
  }
  for (uVar2 = 0; (iVar1 = param_1[2], iVar1 != 0 && (uVar2 < (uint)(param_1[3] - iVar1 >> 2)));
      uVar2 = uVar2 + 1) {
    if ((iVar1 == 0) || ((uint)(param_1[3] - iVar1 >> 2) <= uVar2)) {
      FUN_10008e31();
    }
    CloseHandle(*(HANDLE *)(param_1[2] + uVar2 * 4));
  }
  FUN_100022e0();
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  *param_1 = 0;
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10002110 @ 10002110 size=243 ---- */

undefined4 FUN_10002110(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  HRESULT HVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  puVar1 = param_1;
  if ((param_1 == (undefined *)0x0) || (HVar4 = CoInitializeEx((LPVOID)0x0,0), HVar4 < 0)) {
    return 1;
  }
  while( true ) {
    while( true ) {
      local_4 = 0;
      param_1 = (undefined *)0x0;
      local_8 = 0;
      cVar3 = (**(code **)(**(int **)puVar1 + 0x10))(&local_4,&param_1,&local_8,0xffffffff);
      puVar2 = param_1;
      if (cVar3 == '\x01') break;
      if (local_8 == 0) goto LAB_100021f1;
      if (param_1 != (undefined *)0x0) {
        iVar6 = local_4;
        iVar7 = local_8;
        DVar5 = GetLastError();
        (*(code *)puVar2)(DVar5,iVar6,iVar7);
      }
    }
    if (local_4 == -1) break;
    if (local_4 == -2) {
      if (param_1 != (undefined *)0x0) {
        (*(code *)param_1)(local_8);
      }
    }
    else if (local_4 == -3) {
      if (param_1 != (undefined *)0x0) {
        if (*(code **)param_1 != (code *)0x0) {
          (**(code **)param_1)
                    (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
        }
        FUN_10002210();
      }
    }
    else if (param_1 != (undefined *)0x0) {
      (*(code *)param_1)(0,local_4,local_8);
    }
  }
LAB_100021f1:
  CoUninitialize();
  return 0;
}



/* ---- FUN_10002210 @ 10002210 size=51 ---- */

void FUN_10002210(void)

{
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    if (DAT_10023e78 == 0) {
      FUN_100031c0();
    }
    if (*(void **)(unaff_ESI + -0xc) != (void *)0x0) {
      FUN_10002d10(*(void **)(unaff_ESI + -0xc),(undefined4 *)(unaff_ESI + -0xc));
      return;
    }
    _free((undefined4 *)(unaff_ESI + -0xc));
  }
  return;
}



/* ---- FUN_10002250 @ 10002250 size=38 ---- */

void FUN_10002250(void)

{
  int unaff_ESI;
  
  if (*(void **)(unaff_ESI + 4) != (void *)0x0) {
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}



/* ---- FUN_10002280 @ 10002280 size=95 ---- */

void FUN_10002280(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  void *unaff_ESI;
  undefined4 local_10 [3];
  
  puVar1 = *(undefined4 **)((int)unaff_ESI + 4);
  if ((puVar1 != (undefined4 *)0x0) &&
     ((uint)(*(int *)((int)unaff_ESI + 8) - (int)puVar1 >> 2) <
      (uint)(*(int *)((int)unaff_ESI + 0xc) - (int)puVar1 >> 2))) {
    puVar1 = *(undefined4 **)((int)unaff_ESI + 8);
    *puVar1 = *unaff_EBX;
    *(undefined4 **)((int)unaff_ESI + 8) = puVar1 + 1;
    return;
  }
  puVar2 = *(undefined4 **)((int)unaff_ESI + 8);
  if (puVar2 < puVar1) {
    FUN_10008e31();
  }
  FUN_10003d20(local_10,unaff_EBX,unaff_ESI,puVar2);
  return;
}



/* ---- FUN_100022e0 @ 100022e0 size=92 ---- */

void FUN_100022e0(void)

{
  rsize_t _DstSize;
  void *_Src;
  void *_Dst;
  int iVar1;
  int unaff_EBX;
  
  _Src = *(void **)(unaff_EBX + 8);
  if (_Src < *(void **)(unaff_EBX + 4)) {
    FUN_10008e31();
  }
  _Dst = *(void **)(unaff_EBX + 4);
  if (*(void **)(unaff_EBX + 8) < _Dst) {
    FUN_10008e31();
  }
  if (_Dst != _Src) {
    iVar1 = *(int *)(unaff_EBX + 8) - (int)_Src >> 2;
    _DstSize = iVar1 * 4;
    if (0 < iVar1) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(unaff_EBX + 8) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}



/* ---- FUN_10002340 @ 10002340 size=35 ---- */

undefined4 * __fastcall FUN_10002340(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  puVar2 = unaff_EDI;
  for (iVar1 = unaff_ESI; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  return unaff_EDI + unaff_ESI;
}



/* ---- FUN_10002370 @ 10002370 size=25 ---- */

logic_error * __thiscall FUN_10002370(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
  return param_1;
}



/* ---- FUN_10002390 @ 10002390 size=34 ---- */

void * __fastcall FUN_10002390(void *param_1,void *param_2)

{
  rsize_t _DstSize;
  int in_EAX;
  int iVar1;
  
  iVar1 = in_EAX - (int)param_2 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_1,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (int)param_1);
}



/* ---- IOCompletionPortNT @ 100023c0 size=156 ---- */

IOCompletionPortNT * __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortNT::IOCompletionPortNT(IOCompletionPortNT *this)

{
  HMODULE pHVar1;
  void *pvVar2;
  FARPROC pFVar3;
  int iVar4;
  IOCompletionPortNT *in_stack_00000004;
  undefined1 auStack_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pHVar1 = DAT_10023e04;
  puStack_8 = &LAB_10016778;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_10022024 ^ (uint)(auStack_1c + 4));
  ExceptionList = &local_c;
  local_4 = 0;
  in_stack_00000004->vftablePtr = &vftable;
  (in_stack_00000004->IOCompletionPortNT_data).offset_0x0 = 0;
  (in_stack_00000004->IOCompletionPortNT_data).offset_0x4 = (FARPROC)0x0;
  (in_stack_00000004->IOCompletionPortNT_data).offset_0x8 = (FARPROC)0x0;
  (in_stack_00000004->IOCompletionPortNT_data).offset_0xc = (FARPROC)0x0;
  pFVar3 = GetProcAddress(pHVar1,"CreateIoCompletionPort");
  pHVar1 = DAT_10023e04;
  (in_stack_00000004->IOCompletionPortNT_data).offset_0x4 = pFVar3;
  pFVar3 = GetProcAddress(pHVar1,"GetQueuedCompletionStatus");
  pHVar1 = DAT_10023e04;
  (in_stack_00000004->IOCompletionPortNT_data).offset_0x8 = pFVar3;
  pFVar3 = GetProcAddress(pHVar1,"PostQueuedCompletionStatus");
  (in_stack_00000004->IOCompletionPortNT_data).offset_0xc = pFVar3;
  iVar4 = (*(in_stack_00000004->IOCompletionPortNT_data).offset_0x4)(0xffffffff,0,0,0xffffffff);
  (in_stack_00000004->IOCompletionPortNT_data).offset_0x0 = iVar4;
  ExceptionList = pvVar2;
  return in_stack_00000004;
}



/* ---- vfunction2 @ 10002460 size=34 ---- */

bool __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction2
          (IOCompletionPortNT *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(this->IOCompletionPortNT_data).offset_0x4)
                    (param_1,(this->IOCompletionPortNT_data).offset_0x0,param_2,0);
  return (this->IOCompletionPortNT_data).offset_0x0 == iVar1;
}



/* ---- vfunction3 @ 10002490 size=5 ---- */

undefined1 __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction3(IOCompletionPortNT *this)

{
  return 1;
}



/* ---- vfunction4 @ 100024a0 size=32 ---- */

bool __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction4
          (IOCompletionPortNT *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(this->IOCompletionPortNT_data).offset_0xc)
                    ((this->IOCompletionPortNT_data).offset_0x0,param_1,param_2,param_3);
  return iVar1 != 0;
}



/* ---- vfunction5 @ 100024c0 size=38 ---- */

bool __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction5
          (IOCompletionPortNT *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (*(this->IOCompletionPortNT_data).offset_0x8)
                    ((this->IOCompletionPortNT_data).offset_0x0,param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}



/* ---- vfunction1 @ 100024f0 size=67 ---- */

undefined4 * __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction1(IOCompletionPortNT *this,byte param_1)

{
  HANDLE hObject;
  
  hObject = (HANDLE)(this->IOCompletionPortNT_data).offset_0x0;
  this->vftablePtr = &vftable;
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
    (this->IOCompletionPortNT_data).offset_0x0 = 0;
  }
  (this->IOCompletionPortNT_data).offset_0x4 = (FARPROC)0x0;
  (this->IOCompletionPortNT_data).offset_0x8 = (FARPROC)0x0;
  (this->IOCompletionPortNT_data).offset_0xc = (FARPROC)0x0;
  this->vftablePtr = (IOCompletionPortNT_vftable *)&IIOCompletionPort::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10002540 @ 10002540 size=106 ---- */

void FUN_10002540(void)

{
  undefined4 *puVar1;
  _func_void *p_Var2;
  exception local_c;
  
  while( true ) {
    if (DAT_10023e78 == 0) {
      FUN_100031c0();
    }
    puVar1 = FUN_100030e0();
    if (puVar1 != (undefined4 *)0x0) break;
    p_Var2 = std::set_new_handler((_func_void *)0x0);
    std::set_new_handler(p_Var2);
    if (p_Var2 == (_func_void *)0x0) {
                    /* inlined constructor: std::bad_alloc::bad_alloc */
      std::exception::exception(&local_c,&PTR_s_bad_allocation_10022d7c,1);
      local_c.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_c,&DAT_1001b4c0);
    }
    (*p_Var2)();
  }
  return;
}



/* ---- FUN_100025b0 @ 100025b0 size=42 ---- */

void FUN_100025b0(void)

{
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    if (DAT_10023e78 == 0) {
      FUN_100031c0();
    }
    if (*(void **)(unaff_ESI + -0xc) != (void *)0x0) {
      FUN_10002d10(*(void **)(unaff_ESI + -0xc),(undefined4 *)(unaff_ESI + -0xc));
      return;
    }
    _free((undefined4 *)(unaff_ESI + -0xc));
  }
  return;
}



/* ---- IOCompletionPortWin98 @ 100025e0 size=159 ---- */

IOCompletionPortWin98 * __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortWin98::IOCompletionPortWin98(IOCompletionPortWin98 *this)

{
  HANDLE *ppvVar1;
  HANDLE pvVar2;
  IOCompletionPortWin98 *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016813;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  in_stack_00000004->vftablePtr = &vftable;
  ppvVar1 = (HANDLE *)FUN_100086ab(4);
  if (ppvVar1 == (HANDLE *)0x0) {
    ppvVar1 = (HANDLE *)0x0;
  }
  else {
    *ppvVar1 = (HANDLE)0x0;
  }
  (in_stack_00000004->IOCompletionPortWin98_data).offset_0x0 = ppvVar1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(in_stack_00000004->IOCompletionPortWin98_data).offset_0x0 = pvVar2;
  ppvVar1 = (in_stack_00000004->IOCompletionPortWin98_data).offset_0x0;
  if (*ppvVar1 == (HANDLE)0x0) {
    _free(ppvVar1);
    (in_stack_00000004->IOCompletionPortWin98_data).offset_0x0 = (HANDLE *)0x0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  Threading::CriticalSection::CriticalSection
            ((CriticalSection *)&(in_stack_00000004->IOCompletionPortWin98_data).field_0x4,4000);
  (in_stack_00000004->IOCompletionPortWin98_data).offset_0xc = 0;
  (in_stack_00000004->IOCompletionPortWin98_data).offset_0x10 = 0;
  (in_stack_00000004->IOCompletionPortWin98_data).offset_0x14 = 0;
  (in_stack_00000004->IOCompletionPortWin98_data).offset_0x18 = 0;
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- vfunction2 @ 10002680 size=13 ---- */

undefined1 __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction2(IOCompletionPortWin98 *this)

{
  SetLastError(0x78);
  return 0;
}



/* ---- vfunction3 @ 10002690 size=13 ---- */

undefined1 __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction3(IOCompletionPortWin98 *this)

{
  SetLastError(0x78);
  return 0;
}



/* ---- vfunction4 @ 100026a0 size=162 ---- */

undefined4 __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction4
          (IOCompletionPortWin98 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  uint uStack_30;
  undefined4 local_20;
  undefined4 *local_1c;
  IOCompletionPortWin98 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016f40;
  local_10 = ExceptionList;
  uStack_30 = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_18 = this;
  local_1c = (undefined4 *)FUN_10002540();
  if (local_1c == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    *local_1c = param_1;
    local_1c[1] = param_3;
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4);
  local_8 = 0;
  local_20 = param_2;
  FUN_10002970(&local_20);
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4);
  BVar1 = SetEvent(*(this->IOCompletionPortWin98_data).offset_0x0);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}



/* ---- Catch_All@10002742 @ 10002742 size=34 ---- */

void Catch_All_10002742(void)

{
  int unaff_EBP;
  
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)(unaff_EBP + -0x14) + 8));
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_100025b0();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- vfunction5 @ 10002770 size=385 ---- */

uint __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction5
          (IOCompletionPortWin98 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
          DWORD param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_EAX;
  DWORD DVar5;
  int iVar6;
  undefined4 extraout_EAX;
  uint uVar7;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
     (param_3 == (undefined4 *)0x0)) {
    return in_EAX & 0xffffff00;
  }
  while (EnterCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4),
        (this->IOCompletionPortWin98_data).offset_0x18 == 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4);
    DVar5 = WaitForSingleObject(*(this->IOCompletionPortWin98_data).offset_0x0,param_4);
    if (((DVar5 != 0x102) == 0x102) || ((DVar5 != 0x102) == 0xffffffff)) {
      *param_1 = 0;
      *param_2 = 0;
      *param_3 = 0;
      return (uint)param_3 & 0xffffff00;
    }
    EnterCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4);
    if ((this->IOCompletionPortWin98_data).offset_0x18 != 0) break;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4);
  }
  uVar2 = (this->IOCompletionPortWin98_data).offset_0x14;
  if ((this->IOCompletionPortWin98_data).offset_0x18 + uVar2 < uVar2) {
    FUN_10008e31();
  }
  uVar7 = uVar2 >> 1;
  if ((uint)((this->IOCompletionPortWin98_data).offset_0x18 +
            (this->IOCompletionPortWin98_data).offset_0x14) <= uVar2) {
    FUN_10008e31();
  }
  uVar3 = (this->IOCompletionPortWin98_data).offset_0x10;
  if (uVar3 <= uVar7) {
    uVar7 = uVar7 - uVar3;
  }
  iVar4 = *(int *)((this->IOCompletionPortWin98_data).offset_0xc + uVar7 * 4);
  iVar6 = iVar4 + (uVar2 & 1) * 8;
  *param_2 = *(undefined4 *)(iVar4 + (uVar2 & 1) * 8);
  *param_1 = **(undefined4 **)(iVar6 + 4);
  *param_3 = *(undefined4 *)(*(int *)(iVar6 + 4) + 4);
  iVar6 = *(int *)(iVar6 + 4);
  if (iVar6 != 0) {
    if (DAT_10023e78 == 0) {
      FUN_100031c0();
    }
    if (*(void **)(iVar6 + -0xc) == (void *)0x0) {
      _free((undefined4 *)(iVar6 + -0xc));
    }
    else {
      FUN_10002d10(*(void **)(iVar6 + -0xc),(undefined4 *)(iVar6 + -0xc));
    }
  }
  iVar6 = (this->IOCompletionPortWin98_data).offset_0x18;
  if (iVar6 != 0) {
    puVar1 = &(this->IOCompletionPortWin98_data).offset_0x14;
    *puVar1 = *puVar1 + 1;
    if ((uint)((this->IOCompletionPortWin98_data).offset_0x10 * 2) <=
        (uint)(this->IOCompletionPortWin98_data).offset_0x14) {
      (this->IOCompletionPortWin98_data).offset_0x14 = 0;
    }
    iVar6 = iVar6 + -1;
    (this->IOCompletionPortWin98_data).offset_0x18 = iVar6;
    if (iVar6 == 0) {
      (this->IOCompletionPortWin98_data).offset_0x14 = 0;
    }
  }
  if ((this->IOCompletionPortWin98_data).offset_0x18 != 0) {
    SetEvent(*(this->IOCompletionPortWin98_data).offset_0x0);
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}



/* ---- vfunction1 @ 10002900 size=101 ---- */

undefined4 * __thiscall
XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction1(IOCompletionPortWin98 *this,byte param_1)

{
  this->vftablePtr = &vftable;
  FUN_10002b50();
  DeleteCriticalSection(*(LPCRITICAL_SECTION *)&(this->IOCompletionPortWin98_data).field_0x4);
  _free(*(void **)&(this->IOCompletionPortWin98_data).field_0x4);
  *(undefined4 *)&(this->IOCompletionPortWin98_data).field_0x4 = 0;
  CloseHandle(*(this->IOCompletionPortWin98_data).offset_0x0);
  _free((this->IOCompletionPortWin98_data).offset_0x0);
  (this->IOCompletionPortWin98_data).offset_0x0 = (HANDLE *)0x0;
  this->vftablePtr = (IOCompletionPortWin98_vftable *)&IIOCompletionPort::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10002970 @ 10002970 size=123 ---- */

void FUN_10002970(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10) & 1U) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 2U >> 1)) {
    FUN_100029f0();
  }
  uVar4 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  uVar3 = uVar4 >> 1;
  if (*(uint *)(in_EAX + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) == 0) {
    uVar2 = FUN_100086ab(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar3 * 4) = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (uVar4 & 1) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}



/* ---- FUN_100029f0 @ 100029f0 size=338 ---- */

void FUN_100029f0(void)

{
  void *pvVar1;
  uint uVar2;
  rsize_t _DstSize;
  undefined4 *_Dst;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 *puVar6;
  uint local_c;
  
  uVar2 = *(uint *)(unaff_EBX + 8);
  local_c = 1;
  if (uVar2 == 0xfffffff) {
    std::length_error::length_error((length_error *)0x0);
    return;
  }
  uVar4 = uVar2 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
LAB_10002a23:
    if (uVar2 <= 0xfffffff - uVar4) {
      local_c = uVar4;
    }
  }
  else if (1 < uVar4) goto LAB_10002a23;
  uVar4 = *(uint *)(unaff_EBX + 0xc) >> 1;
  std::bad_alloc::bad_alloc((bad_alloc *)(local_c + uVar2));
  iVar5 = uVar4 * 4;
  pvVar1 = (void *)(iVar5 + *(int *)(unaff_EBX + 4));
  iVar3 = (*(int *)(unaff_EBX + 8) * 4 - (int)pvVar1) + *(int *)(unaff_EBX + 4) >> 2;
  puVar6 = _Dst + uVar4 + iVar3;
  if (iVar3 != 0) {
    _memmove_s(_Dst + uVar4,iVar3 * 4,pvVar1,iVar3 * 4);
  }
  if (local_c < uVar4) {
    iVar3 = (int)(local_c * 4) >> 2;
    if (iVar3 != 0) {
      _DstSize = iVar3 * 4;
      _memmove_s(puVar6,_DstSize,*(void **)(unaff_EBX + 4),_DstSize);
    }
    pvVar1 = (void *)(*(int *)(unaff_EBX + 4) + local_c * 4);
    iVar5 = (iVar5 - (int)pvVar1) + *(int *)(unaff_EBX + 4) >> 2;
    puVar6 = _Dst + iVar5;
    if (iVar5 != 0) {
      _memmove_s(_Dst,iVar5 * 4,pvVar1,iVar5 * 4);
    }
    if (local_c == 0) goto LAB_10002b21;
    uVar4 = local_c;
  }
  else {
    iVar5 = iVar5 >> 2;
    if (iVar5 != 0) {
      _memmove_s(puVar6,iVar5 * 4,*(void **)(unaff_EBX + 4),iVar5 * 4);
    }
    iVar3 = local_c - uVar4;
    if (iVar3 != 0) {
      puVar6 = puVar6 + iVar5;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    if (uVar4 == 0) goto LAB_10002b21;
    puVar6 = _Dst;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
LAB_10002b21:
  if (*(void **)(unaff_EBX + 4) != (void *)0x0) {
    _free(*(void **)(unaff_EBX + 4));
  }
  *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + local_c;
  *(undefined4 **)(unaff_EBX + 4) = _Dst;
  return;
}



/* ---- FUN_10002b50 @ 10002b50 size=102 ---- */

void FUN_10002b50(void)

{
  int iVar1;
  int unaff_ESI;
  
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
      _free(*(void **)(*(int *)(unaff_ESI + 4) + iVar1 * 4));
    }
  }
  if (*(void **)(unaff_ESI + 4) != (void *)0x0) {
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  return;
}



/* ---- length_error @ 10002bc0 size=123 ---- */

void __thiscall std::length_error::length_error(length_error *this)

{
  undefined1 local_5c [4];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  logic_error local_40;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016bb8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = 0;
  FUN_10001a00(local_5c,(undefined4 *)"deque<T> too long",0x11);
  local_c = 0;
  logic_error::logic_error(&local_40,local_5c);
  local_40.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_40,&DAT_1001b534);
}



/* ---- FUN_10002c40 @ 10002c40 size=208 ---- */

undefined4 * FUN_10002c40(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_EDI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)unaff_EDI[6]);
  uVar1 = unaff_EDI[3];
  if ((uVar1 == 0) || ((int)(unaff_EDI[4] - uVar1) >> 2 == 0)) {
    iVar3 = *unaff_EDI;
    puVar4 = _malloc(iVar3 + 0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = iVar3;
      *puVar4 = unaff_EDI;
      puVar4[2] = 0;
    }
    puVar4[2] = param_1;
  }
  else {
    uVar2 = unaff_EDI[4];
    if (uVar2 < uVar1) {
      FUN_10008e31();
    }
    if (((uint)unaff_EDI[4] < uVar2 - 4) || (uVar2 - 4 < (uint)unaff_EDI[3])) {
      FUN_10008e31();
    }
    if ((int *)unaff_EDI[4] <= (int *)(uVar2 - 4)) {
      FUN_10008e31();
    }
    puVar4 = *(undefined4 **)(uVar2 - 4);
    if ((unaff_EDI[3] != 0) && (unaff_EDI[4] - unaff_EDI[3] >> 2 != 0)) {
      unaff_EDI[4] = unaff_EDI[4] + -4;
    }
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar3 = *unaff_EDI;
      *puVar4 = unaff_EDI;
      puVar4[1] = iVar3;
      puVar4[2] = param_1;
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    unaff_EDI[1] = unaff_EDI[1] + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)unaff_EDI[6]);
  return puVar4;
}



/* ---- FUN_10002d10 @ 10002d10 size=139 ---- */

void __thiscall FUN_10002d10(void *this,undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016cf8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)this + 0x18));
  local_c = 0;
  if (param_1 == (undefined4 *)0x0) {
    lpCriticalSection = *(LPCRITICAL_SECTION *)((int)this + 0x18);
  }
  else {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10003160();
    lpCriticalSection = *(LPCRITICAL_SECTION *)((int)this + 0x18);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_14;
  return;
}



/* ---- FUN_10002da0 @ 10002da0 size=202 ---- */

/* WARNING: Removing unreachable block (ram,0x10002dd8) */

void FUN_10002da0(int param_1)

{
  rsize_t _DstSize;
  undefined4 *puVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x18));
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  if (*(undefined4 **)(param_1 + 0x10) < puVar3) {
    FUN_10008e31();
  }
  while( true ) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    if (puVar1 < *(undefined4 **)(param_1 + 0xc)) {
      FUN_10008e31();
    }
    if (puVar3 == puVar1) break;
    if (*(undefined4 **)(param_1 + 0x10) <= puVar3) {
      FUN_10008e31();
    }
    if ((void *)*puVar3 != (void *)0x0) {
      _free((void *)*puVar3);
    }
    if (*(undefined4 **)(param_1 + 0x10) <= puVar3) {
      FUN_10008e31();
    }
    puVar3 = puVar3 + 1;
  }
  _Src = *(void **)(param_1 + 0x10);
  if (_Src < *(void **)(param_1 + 0xc)) {
    FUN_10008e31();
  }
  _Dst = *(void **)(param_1 + 0xc);
  if (*(void **)(param_1 + 0x10) < _Dst) {
    FUN_10008e31();
  }
  if (_Dst != _Src) {
    iVar2 = *(int *)(param_1 + 0x10) - (int)_Src >> 2;
    _DstSize = iVar2 * 4;
    if (0 < iVar2) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 0x10) = (void *)(_DstSize + (int)_Dst);
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x18));
  return;
}



/* ---- FUN_10002e70 @ 10002e70 size=360 ---- */

void FUN_10002e70(uint param_1)

{
  FARPROC pFVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *unaff_EBX;
  int iVar6;
  bool bVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016ea6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *unaff_EBX = 0;
  unaff_EBX[1] = 0;
  unaff_EBX[2] = 0;
  if (param_1 == 0) {
    uVar2 = XPlatform::GetProcessorCount();
    param_1 = uVar2 + 3;
  }
  unaff_EBX[1] = param_1;
  uVar3 = thunk_FUN_100086ab(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_1 * 4));
  unaff_EBX[2] = uVar3;
  param_1 = 0;
  if (unaff_EBX[1] != 0) {
    do {
      iVar6 = 4;
      uVar3 = thunk_FUN_100086ab(0x3c);
      *(undefined4 *)(unaff_EBX[2] + param_1 * 4) = uVar3;
      uVar2 = 0;
      do {
        piVar4 = (int *)FUN_100086ab(0x1c);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iVar6;
          piVar4[1] = 0;
          piVar4[3] = 0;
          piVar4[4] = 0;
          piVar4[5] = 0;
          local_4 = 1;
          iVar5 = FUN_100086ab(0x18);
          pFVar1 = DAT_10023e08;
          bVar7 = DAT_10023e08 == (FARPROC)0x0;
          piVar4[6] = iVar5;
          if (bVar7) {
            bVar7 = XPlatform::IsWindows2000();
            if (bVar7) {
              DAT_10023e08 = GetProcAddress(DAT_10023e04,"InitializeCriticalSectionAndSpinCount");
              if (DAT_10023e08 != (FARPROC)0x0) {
                (*DAT_10023e08)(piVar4[6],4000);
                goto LAB_10002f8d;
              }
            }
            InitializeCriticalSection((LPCRITICAL_SECTION)piVar4[6]);
          }
          else {
            (*pFVar1)(iVar5,4000);
          }
        }
LAB_10002f8d:
        local_4 = 0xffffffff;
        *(int **)(uVar2 + *(int *)(unaff_EBX[2] + param_1 * 4)) = piVar4;
        uVar2 = uVar2 + 4;
        iVar6 = iVar6 * 4;
      } while (uVar2 < 0x3c);
      param_1 = param_1 + 1;
    } while (param_1 < (uint)unaff_EBX[1]);
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10002fe0 @ 10002fe0 size=254 ---- */

void FUN_10002fe0(int param_1)

{
  void *_Memory;
  uint uVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016a46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      uVar2 = 0;
      do {
        _Memory = *(void **)(uVar2 + *(int *)(*(int *)(param_1 + 8) + uVar1 * 4));
        if (_Memory != (void *)0x0) {
          local_4 = 1;
          FUN_10002da0((int)_Memory);
          DeleteCriticalSection(*(LPCRITICAL_SECTION *)((int)_Memory + 0x18));
          _free(*(void **)((int)_Memory + 0x18));
          *(undefined4 *)((int)_Memory + 0x18) = 0;
          local_4 = 0xffffffff;
          if (*(void **)((int)_Memory + 0xc) != (void *)0x0) {
            _free(*(void **)((int)_Memory + 0xc));
          }
          *(undefined4 *)((int)_Memory + 0xc) = 0;
          *(undefined4 *)((int)_Memory + 0x10) = 0;
          *(undefined4 *)((int)_Memory + 0x14) = 0;
          _free(_Memory);
        }
        *(undefined4 *)(uVar2 + *(int *)(*(int *)(param_1 + 8) + uVar1 * 4)) = 0;
        uVar2 = uVar2 + 4;
      } while (uVar2 < 0x3c);
      _free(*(void **)(*(int *)(param_1 + 8) + uVar1 * 4));
      *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  _free(*(void **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_100030e0 @ 100030e0 size=128 ---- */

undefined4 * FUN_100030e0(void)

{
  uint uVar1;
  uint *in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_ESI;
  
  LOCK();
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + 1;
  UNLOCK();
  uVar4 = 4;
  if (unaff_ESI != 0) {
    uVar3 = 0;
    do {
      if (unaff_ESI <= uVar4) {
        if ((uVar3 < 0xf) &&
           (*(int *)(*(int *)(in_EAX[2] + (uVar1 % in_EAX[1]) * 4) + uVar3 * 4) != 0)) {
          puVar2 = FUN_10002c40(unaff_ESI);
          return puVar2 + 3;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 * 4;
    } while (uVar3 < 0xf);
  }
  puVar2 = _malloc(unaff_ESI + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0xc;
  }
  *puVar2 = 0;
  puVar2[1] = unaff_ESI;
  puVar2[2] = 0;
  return puVar2 + 3;
}



/* ---- FUN_10003160 @ 10003160 size=89 ---- */

void FUN_10003160(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  void *unaff_ESI;
  undefined4 local_c [3];
  
  puVar1 = *(undefined4 **)((int)unaff_ESI + 4);
  if ((puVar1 != (undefined4 *)0x0) &&
     ((uint)(*(int *)((int)unaff_ESI + 8) - (int)puVar1 >> 2) <
      (uint)(*(int *)((int)unaff_ESI + 0xc) - (int)puVar1 >> 2))) {
    puVar1 = *(undefined4 **)((int)unaff_ESI + 8);
    *puVar1 = *unaff_EBX;
    *(undefined4 **)((int)unaff_ESI + 8) = puVar1 + 1;
    return;
  }
  puVar2 = *(undefined4 **)((int)unaff_ESI + 8);
  if (puVar2 < puVar1) {
    FUN_10008e31();
  }
  FUN_10003d20(local_c,unaff_EBX,unaff_ESI,puVar2);
  return;
}



/* ---- FUN_100031c0 @ 100031c0 size=236 ---- */

void FUN_100031c0(void)

{
  int iVar1;
  exception local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016f23;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection(DAT_10023ea4);
  local_c = 0;
  if (DAT_10023e78 == 0) {
    if (DAT_10023e7c == '\x01') {
      FUN_10003340();
      return;
    }
    iVar1 = FUN_100086ab(0xc);
    local_c._0_1_ = 1;
    if (iVar1 == 0) {
      DAT_10023e78 = 0;
    }
    else {
      DAT_10023e78 = FUN_10002e70(0);
    }
    local_c = (uint)local_c._1_3_ << 8;
    if (DAT_10023e78 == 0) {
                    /* inlined constructor: std::bad_alloc::bad_alloc */
      std::exception::exception(&local_24,&PTR_s_bad_allocation_10022d7c,1);
      local_24.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_24,&DAT_1001b4c0);
    }
    _atexit((_func_4879 *)&LAB_10003310);
  }
  LeaveCriticalSection(DAT_10023ea4);
  ExceptionList = local_14;
  return;
}



/* ---- bad_alloc @ 100032b0 size=85 ---- */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  char *local_10;
  exception local_c;
  
  if (this == (bad_alloc *)0x0) {
    this = (bad_alloc *)0x0;
  }
  else if ((uint)(0xffffffff / ZEXT48(this)) < 4) {
    local_10 = (char *)0x0;
    exception::exception(&local_c,&local_10);
    local_c.vftablePtr = (exception_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_c,&DAT_1001b4c0);
  }
  FUN_100086ab((int)this * 4);
  return;
}



/* ---- FUN_10003340 @ 10003340 size=109 ---- */

void FUN_10003340(void)

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
  puStack_8 = &LAB_10016cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10001a00(local_50,(undefined4 *)"[XSystem::XTL::Singleton] Dead reference detected.",0x32);
  local_4 = 0;
  std::logic_error::logic_error(&local_34,local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_34,&DAT_1001b4f8);
}



/* ---- ~ITimer @ 100033b0 size=7 ---- */

void __thiscall XSystem::TimerImpl::ITimer::~ITimer(ITimer *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- vfunction1 @ 100033c0 size=31 ---- */

undefined4 * __thiscall XSystem::TimerImpl::ITimer::vfunction1(ITimer *this,byte param_1)

{
  this->vftablePtr = &vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_100033e0 @ 100033e0 size=61 ---- */

void FUN_100033e0(void)

{
  _THandle *p_Var1;
  undefined4 *unaff_ESI;
  exception local_c;
  
  p_Var1 = XSystem::ThreadPool::CreateHandle(0);
  *unaff_ESI = p_Var1;
  if (p_Var1 == (_THandle *)0x0) {
                    /* inlined constructor: std::bad_alloc::bad_alloc */
    std::exception::exception(&local_c,&PTR_s_bad_allocation_10022d7c,1);
    local_c.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_c,&DAT_1001b4c0);
  }
  return;
}



/* ---- TimerQueue @ 10003420 size=270 ---- */

TimerQueue * __thiscall
XSystem::TimerImpl::TimerQueue::TimerQueue(TimerQueue *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016fc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: XSystem::Threading::Thread::Thread */
  *param_1 = &Threading::Thread::_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 7) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  param_1[1] = puVar1;
  local_4 = 0;
  *param_1 = &vftable;
  param_1[2] = in_stack_00000008;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100086ab(4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *puVar1 = puVar2;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)*puVar1 = pvVar3;
    if (*(int *)*puVar1 == 0) {
      _free((int *)*puVar1);
      *puVar1 = 0;
    }
  }
  param_1[3] = puVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_4._0_1_ = 3;
  Threading::RWCriticalSection::RWCriticalSection((RWCriticalSection *)(param_1 + 8));
  local_4 = CONCAT31(local_4._1_3_,4);
  if (param_1[2] == 0) {
    if (DAT_10023e80 == (undefined4 *)0x0) {
      FUN_10003c30();
    }
    param_1[2] = *DAT_10023e80;
  }
  ExceptionList = local_c;
  return (TimerQueue *)param_1;
}



/* ---- ~TimerQueue @ 10003530 size=175 ---- */

void __thiscall XSystem::TimerImpl::TimerQueue::~TimerQueue(TimerQueue *this)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  
  puVar1 = (this->Thread_data).offset_0x8;
  this->vftablePtr = &vftable;
  SetEvent(*(HANDLE *)*puVar1);
  puVar1 = (this->Thread_data).offset_0x0;
  if ((puVar1[3] != 0) && (*(char *)((int)puVar1 + 7) == '\0')) {
    *(undefined1 *)((int)puVar1 + 6) = 1;
    WaitForSingleObject((HANDLE)*(this->Thread_data).offset_0x0,0xffffffff);
  }
  piVar2 = (this->Thread_data).offset_0x0;
  if (*piVar2 != 0) {
    CloseHandle((HANDLE)*piVar2);
    *(this->Thread_data).offset_0x0 = 0;
  }
  pvVar3 = *(void **)&(this->Thread_data).field_0x1c;
  if (pvVar3 != (void *)0x0) {
    FUN_10001bb0();
    _free(pvVar3);
  }
  *(undefined4 *)&(this->Thread_data).field_0x1c = 0;
  pvVar3 = (void *)(this->Thread_data).offset_0x10;
  if (pvVar3 != (void *)0x0) {
    _free(pvVar3);
  }
  (this->Thread_data).offset_0x10 = 0;
  (this->Thread_data).offset_0x14 = 0;
  (this->Thread_data).offset_0x18 = 0;
  puVar1 = (this->Thread_data).offset_0x8;
  if (puVar1 != (undefined4 *)0x0) {
    CloseHandle(*(HANDLE *)*puVar1);
    _free((void *)*puVar1);
    *puVar1 = 0;
    _free(puVar1);
  }
  Threading::Thread::~Thread((Thread *)this);
  return;
}



/* ---- FUN_100035e0 @ 100035e0 size=188 ---- */

void __thiscall FUN_100035e0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016c98;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  XSystem::Threading::RWCriticalSection::WriteLock((RWCriticalSection *)((int)this + 0x20));
  local_c = 0;
  puVar1 = *(undefined4 **)((int)this + 0x14);
  if ((puVar1 == (undefined4 *)0x0) ||
     ((uint)(*(int *)((int)this + 0x1c) - (int)puVar1 >> 2) <=
      (uint)(*(int *)((int)this + 0x18) - (int)puVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x18);
    if (puVar2 < puVar1) {
      FUN_10008e31();
    }
    FUN_10003d20(local_20,&param_1,(void *)((int)this + 0x10),puVar2);
  }
  else {
    puVar1 = *(undefined4 **)((int)this + 0x18);
    *puVar1 = param_1;
    *(undefined4 **)((int)this + 0x18) = puVar1 + 1;
  }
  XSystem::Threading::RWCriticalSection::InternalUnlock((RWCriticalSection *)((int)this + 0x20));
  ExceptionList = local_14;
  return;
}



/* ---- FUN_100036a0 @ 100036a0 size=163 ---- */

void FUN_100036a0(int param_1)

{
  int *piVar1;
  rsize_t _DstSize;
  int in_EAX;
  int iVar2;
  int *_Dst;
  
  XSystem::Threading::RWCriticalSection::WriteLock((RWCriticalSection *)(in_EAX + 0x20));
  piVar1 = *(int **)(in_EAX + 0x18);
  if (piVar1 < *(int **)(in_EAX + 0x14)) {
    FUN_10008e31();
  }
  _Dst = *(int **)(in_EAX + 0x14);
  if (*(int **)(in_EAX + 0x18) < _Dst) {
    FUN_10008e31();
  }
  for (; (_Dst != piVar1 && (*_Dst != param_1)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)(in_EAX + 0x18);
  if (piVar1 < *(int **)(in_EAX + 0x14)) {
    FUN_10008e31();
  }
  if (in_EAX == -0x10) {
    FUN_10008e31();
  }
  if (_Dst != piVar1) {
    iVar2 = *(int *)(in_EAX + 0x18) - (int)(_Dst + 1) >> 2;
    if (0 < iVar2) {
      _DstSize = iVar2 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)(in_EAX + 0x18) = *(int *)(in_EAX + 0x18) + -4;
  }
  XSystem::Threading::RWCriticalSection::InternalUnlock((RWCriticalSection *)(in_EAX + 0x20));
  return;
}



/* ---- vfunction2 @ 10003750 size=357 ---- */

/* WARNING: Removing unreachable block (ram,0x1000383b) */

void __thiscall XSystem::TimerImpl::TimerQueue::vfunction2(TimerQueue *this)

{
  undefined1 *this_00;
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016a08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  DVar4 = WaitForSingleObject(*(HANDLE *)*(this->Thread_data).offset_0x8,100);
  if (DVar4 == 0x102) {
    this_00 = &(this->Thread_data).field_0x1c;
    do {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this_00 + 0xc));
      piVar1 = *(int **)this_00;
      if ((piVar1[1] == 0) && (-1 < piVar1[2])) {
        bVar3 = false;
        piVar1[2] = piVar1[2] + 1;
      }
      else {
        *piVar1 = *piVar1 + 1;
        bVar3 = true;
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this_00 + 0xc));
      if (bVar3) {
        WaitForSingleObject((HANDLE)**(undefined4 **)(*(int *)this_00 + 0x10),0xffffffff);
      }
      local_c = 0;
      puVar5 = (undefined4 *)(this->Thread_data).offset_0x10;
      if ((undefined4 *)(this->Thread_data).offset_0x14 < puVar5) {
        FUN_10008e31();
      }
      while( true ) {
        puVar2 = (undefined4 *)(this->Thread_data).offset_0x14;
        if (puVar2 < (undefined4 *)(this->Thread_data).offset_0x10) {
          FUN_10008e31();
        }
        if (puVar5 == puVar2) break;
        if ((undefined4 *)(this->Thread_data).offset_0x14 <= puVar5) {
          FUN_10008e31();
        }
        (**(code **)(*(int *)*puVar5 + 4))();
        if ((undefined4 *)(this->Thread_data).offset_0x14 <= puVar5) {
          FUN_10008e31();
        }
        puVar5 = puVar5 + 1;
      }
      local_c = 0xffffffff;
      Threading::RWCriticalSection::InternalUnlock((RWCriticalSection *)this_00);
      DVar4 = WaitForSingleObject(*(HANDLE *)*(this->Thread_data).offset_0x8,100);
    } while (DVar4 == 0x102);
  }
  ExceptionList = local_14;
  return;
}



/* ---- vfunction1 @ 100038c0 size=30 ---- */

Thread * __thiscall XSystem::TimerImpl::TimerQueue::vfunction1(TimerQueue *this,byte param_1)

{
  ~TimerQueue(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (Thread *)this;
}



/* ---- FUN_100038e0 @ 100038e0 size=147 ---- */

void FUN_100038e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  TimerQueue *_ArgList;
  uintptr_t uVar3;
  TimerQueue *this;
  undefined4 *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016feb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_100086ab(0x24);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    _ArgList = (TimerQueue *)0x0;
  }
  else {
    _ArgList = XSystem::TimerImpl::TimerQueue::TimerQueue(this,puVar2);
  }
  *unaff_EDI = _ArgList;
  uVar3 = __beginthreadex((void *)0x0,0,XSystem::Threading::Thread::InternalThreadProc,_ArgList,0,
                          (_ArgList->Thread_data).offset_0x0 + 3);
  *(_ArgList->Thread_data).offset_0x0 = uVar3;
  piVar1 = (_ArgList->Thread_data).offset_0x0;
  if (*piVar1 != 0) {
    *(undefined1 *)((int)piVar1 + 6) = 0;
    *(undefined1 *)((int)(_ArgList->Thread_data).offset_0x0 + 7) = 0;
    (_ArgList->Thread_data).offset_0x0[2] = 0;
  }
  ExceptionList = local_c;
  return;
}



/* ---- Timer @ 10003980 size=241 ---- */

Timer * __thiscall
XSystem::TimerImpl::Timer::Timer
          (Timer *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  undefined4 in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001702e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  *param_1 = &vftable;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100086ab(4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *puVar1 = puVar2;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    *(HANDLE *)*puVar1 = pvVar3;
    if (*(int *)*puVar1 == 0) {
      _free((int *)*puVar1);
      *puVar1 = 0;
    }
  }
  param_1[1] = puVar1;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[3] = param_2;
  param_1[2] = 0;
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[6] = param_4;
  param_1[7] = in_stack_00000014;
  param_1[8] = 0;
  if (param_1[3] == 0) {
    if (DAT_10023e88 == (undefined4 *)0x0) {
      FUN_10003db0();
    }
    param_1[3] = *DAT_10023e88;
  }
  FUN_100035e0((void *)param_1[3],param_1);
  ExceptionList = local_c;
  return (Timer *)param_1;
}



/* ---- FUN_10003a80 @ 10003a80 size=145 ---- */

void __fastcall FUN_10003a80(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016c73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor or destructor (approx location) for
                       XSystem::TimerImpl::Timer */
  *param_1 = &XSystem::TimerImpl::Timer::vftable;
  local_4 = 1;
  FUN_100036a0((int)param_1);
  WaitForSingleObject((HANDLE)**(undefined4 **)param_1[1],0xffffffff);
  _Memory = (undefined4 *)param_1[1];
  if (_Memory != (undefined4 *)0x0) {
    CloseHandle(*(HANDLE *)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
  }
                    /* inlined constructor or destructor (approx location) for
                       XSystem::TimerImpl::ITimer */
  *param_1 = &XSystem::TimerImpl::ITimer::vftable;
  ExceptionList = local_c;
  return;
}



/* ---- vfunction2 @ 10003b20 size=96 ---- */

undefined4 * __thiscall XSystem::TimerImpl::Timer::vfunction2(Timer *this)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = &(this->Timer_data).offset_0x10;
  *puVar3 = *puVar3 + 1;
  uVar1 = (this->Timer_data).offset_0xc;
  puVar3 = (undefined4 *)(uVar1 * 0x51eb851f);
  if (uVar1 / 100 <= (uint)(this->Timer_data).offset_0x10) {
    (this->Timer_data).offset_0x10 = 0;
    ResetEvent(*(HANDLE *)*(this->Timer_data).offset_0x0);
    puVar3 = &(this->Timer_data).offset_0x4;
    LOCK();
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    puVar2 = *(undefined4 **)((int)(this->Timer_data).offset_0x8 + 8);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*(int *)*puVar2 + 0xc))(0xfffffffe,FUN_10003b80,this);
    }
  }
  return puVar3;
}



/* ---- FUN_10003b80 @ 10003b80 size=51 ---- */

undefined4 FUN_10003b80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
    piVar1 = (int *)(param_1 + 8);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      SetEvent(*(HANDLE *)**(undefined4 **)(param_1 + 4));
    }
  }
  return 0;
}



/* ---- vfunction1 @ 10003bc0 size=30 ---- */

undefined4 * __thiscall XSystem::TimerImpl::Timer::vfunction1(Timer *this,byte param_1)

{
  FUN_10003a80(&this->vftablePtr);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10003be0 @ 10003be0 size=32 ---- */

void __fastcall FUN_10003be0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      XSystem::Threading::RWCriticalSection::InternalUnlock((RWCriticalSection *)*param_1);
      return;
    }
    if (iVar1 == 2) {
      XSystem::Threading::RWCriticalSection::InternalUnlock((RWCriticalSection *)*param_1);
      return;
    }
  }
  return;
}



/* ---- FUN_10003c00 @ 10003c00 size=43 ---- */

void FUN_10003c00(void)

{
  undefined4 *_Memory;
  undefined4 *in_EAX;
  
  _Memory = (undefined4 *)*in_EAX;
  if (_Memory != (undefined4 *)0x0) {
    CloseHandle(*(HANDLE *)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
  }
  return;
}



/* ---- FUN_10003c30 @ 10003c30 size=228 ---- */

void FUN_10003c30(void)

{
  int iVar1;
  exception local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016f23;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection(DAT_10023eac);
  local_c = 0;
  if (DAT_10023e80 == 0) {
    if (DAT_10023e84 == '\x01') {
      FUN_10003340();
      return;
    }
    iVar1 = FUN_100086ab(4);
    local_c._0_1_ = 1;
    if (iVar1 == 0) {
      DAT_10023e80 = 0;
    }
    else {
      DAT_10023e80 = FUN_100033e0();
    }
    local_c = (uint)local_c._1_3_ << 8;
    if (DAT_10023e80 == 0) {
                    /* inlined constructor: std::bad_alloc::bad_alloc */
      std::exception::exception(&local_24,&PTR_s_bad_allocation_10022d7c,1);
      local_24.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_24,&DAT_1001b4c0);
    }
    _atexit((_func_4879 *)&LAB_10003ea0);
  }
  LeaveCriticalSection(DAT_10023eac);
  ExceptionList = local_14;
  return;
}



/* ---- FUN_10003d20 @ 10003d20 size=134 ---- */

void FUN_10003d20(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *in_EAX;
  int iVar2;
  
  uVar1 = *(uint *)((int)in_EAX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)((int)in_EAX + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)((int)in_EAX + 8) < uVar1) {
      FUN_10008e31();
    }
    if ((param_3 == (void *)0x0) || (param_3 != in_EAX)) {
      FUN_10008e31();
    }
    iVar2 = (int)((int)param_4 - uVar1) >> 2;
  }
  FUN_10003ef0(in_EAX,param_3,param_4);
  uVar1 = *(uint *)((int)in_EAX + 4);
  if (*(uint *)((int)in_EAX + 8) < uVar1) {
    FUN_10008e31();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)((int)in_EAX + 8) < uVar1) || (uVar1 < *(uint *)((int)in_EAX + 4))) {
    FUN_10008e31();
  }
  param_1[1] = uVar1;
  *param_1 = in_EAX;
  return;
}



/* ---- FUN_10003db0 @ 10003db0 size=228 ---- */

void FUN_10003db0(void)

{
  int iVar1;
  exception local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016f23;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection(DAT_10023ea8);
  local_c = 0;
  if (DAT_10023e88 == 0) {
    if (DAT_10023e8c == '\x01') {
      FUN_10003340();
      return;
    }
    iVar1 = FUN_100086ab(4);
    local_c._0_1_ = 1;
    if (iVar1 == 0) {
      DAT_10023e88 = 0;
    }
    else {
      DAT_10023e88 = FUN_100038e0();
    }
    local_c = (uint)local_c._1_3_ << 8;
    if (DAT_10023e88 == 0) {
                    /* inlined constructor: std::bad_alloc::bad_alloc */
      std::exception::exception(&local_24,&PTR_s_bad_allocation_10022d7c,1);
      local_24.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_24,&DAT_1001b4c0);
    }
    _atexit((_func_4879 *)&LAB_100040f0);
  }
  LeaveCriticalSection(DAT_10023ea8);
  ExceptionList = local_14;
  return;
}



/* ---- FUN_10003ef0 @ 10003ef0 size=498 ---- */

void __thiscall FUN_10003ef0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  rsize_t _DstSize;
  void *pvVar2;
  rsize_t _DstSize_00;
  undefined4 *in_EAX;
  int extraout_EAX;
  void *_Dst;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint extraout_EDX;
  bad_alloc *local_8;
  undefined4 local_4;
  
  local_4 = *in_EAX;
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 == 0) {
    uVar6 = 0;
    iVar4 = 0;
  }
  else {
    uVar6 = *(int *)((int)this + 0xc) - iVar5 >> 2;
    iVar4 = *(int *)((int)this + 8) - iVar5 >> 2;
  }
  if (iVar4 == 0x3fffffff) {
    std::length_error::length_error((length_error *)0x3fffffff);
    iVar5 = extraout_EAX;
    uVar6 = extraout_EDX;
  }
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 8) - iVar5 >> 2;
  }
  if (uVar6 < iVar4 + 1U) {
    if (0x3fffffff - (uVar6 >> 1) < uVar6) {
      local_8 = (bad_alloc *)0x0;
    }
    else {
      local_8 = (bad_alloc *)(uVar6 + (uVar6 >> 1));
    }
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (local_8 < (bad_alloc *)(iVar4 + 1U)) {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
      }
      local_8 = (bad_alloc *)(iVar5 + 1);
    }
    std::bad_alloc::bad_alloc(local_8);
    iVar5 = (int)param_2 - (int)*(void **)((int)this + 4) >> 2;
    _DstSize = iVar5 * 4;
    if (iVar5 != 0) {
      _memmove_s(_Dst,_DstSize,*(void **)((int)this + 4),_DstSize);
    }
    *(undefined4 *)(_DstSize + (int)_Dst) = local_4;
    iVar5 = *(int *)((int)this + 8) - (int)param_2 >> 2;
    if (iVar5 != 0) {
      _DstSize_00 = iVar5 * 4;
      _memmove_s((void *)(_DstSize + 4 + (int)_Dst),_DstSize_00,param_2,_DstSize_00);
    }
    pvVar2 = *(void **)((int)this + 4);
    if (pvVar2 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - (int)pvVar2 >> 2;
      _free(pvVar2);
    }
    *(void **)((int)this + 0xc) = (void *)((int)_Dst + (int)local_8 * 4);
    *(int *)((int)this + 8) = (int)_Dst + iVar5 * 4 + 4;
    *(void **)((int)this + 4) = _Dst;
    return;
  }
  pvVar2 = *(void **)((int)this + 8);
  if ((int)pvVar2 - (int)param_2 >> 2 == 0) {
    FUN_10002390(param_2 + 1,param_2);
    FUN_10002340(extraout_ECX,&local_4);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
    puVar1 = (undefined4 *)(*(int *)((int)this + 8) + -4);
    if (param_2 != puVar1) {
      do {
        *param_2 = local_4;
        param_2 = param_2 + 1;
      } while (param_2 != puVar1);
      return;
    }
  }
  else {
    pvVar3 = FUN_10002390(pvVar2,(void *)((int)pvVar2 + -4));
    iVar5 = ((int)pvVar2 + -4) - (int)param_2 >> 2;
    *(void **)((int)this + 8) = pvVar3;
    if (0 < iVar5) {
      _memmove_s((void *)((int)pvVar2 + iVar5 * -4),iVar5 * 4,param_2,iVar5 * 4);
    }
    puVar1 = param_2 + 1;
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      *param_2 = local_4;
    }
  }
  return;
}



/* ---- ~XSyncObject @ 10004130 size=9 ---- */

/* public: __thiscall XSyncObject::XSyncObject(void) */

void __thiscall XSyncObject::~XSyncObject(XSyncObject *this)

{
                    /* 0x4130  45  ??0XSyncObject@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~XSyncObject @ 10004140 size=11 ---- */

/* public: __thiscall XSyncObject::XSyncObject(class XSyncObject const &) */

void __thiscall XSyncObject::~XSyncObject(XSyncObject *this,XSyncObject *param_1)

{
                    /* 0x4140  44  ??0XSyncObject@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- XCriticalSection @ 10004150 size=21 ---- */

/* public: __thiscall XCriticalSection::XCriticalSection(class XCriticalSection const &) */

void __thiscall XCriticalSection::XCriticalSection(XCriticalSection *this,XCriticalSection *param_1)

{
                    /* 0x4150  13  ??0XCriticalSection@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XCriticalSection_data).offset_0x0 = *(CriticalSection **)(param_1 + 4);
  return;
}



/* ---- `default_constructor_closure' @ 10004170 size=11 ---- */

/* public: void __thiscall XCriticalSection::`default constructor closure'(void) */

void __thiscall XCriticalSection::_default_constructor_closure_(XCriticalSection *this)

{
                    /* 0x4170  132  ??_FXCriticalSection@@QAEXXZ */
  XCriticalSection(this,4000);
  return;
}



/* ---- vfunction3 @ 10004180 size=130 ---- */

undefined4 * __thiscall XCriticalSection::vfunction3(XCriticalSection *this,byte param_1)

{
  CriticalSection *_Memory;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,8,(int)this[-1].XCriticalSection_data.offset_0x0,~XCriticalSection);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].XCriticalSection_data);
    }
    return &this[-1].XCriticalSection_data;
  }
  _Memory = (this->XCriticalSection_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (_Memory != (CriticalSection *)0x0) {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)_Memory);
    _free(*(void **)_Memory);
    *(undefined4 *)_Memory = 0;
    _free(_Memory);
    (this->XCriticalSection_data).offset_0x0 = (CriticalSection *)0x0;
  }
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XWaitableObject @ 10004210 size=21 ---- */

/* public: __thiscall XWaitableObject::XWaitableObject(class XWaitableObject const &) */

void __thiscall XWaitableObject::XWaitableObject(XWaitableObject *this,XWaitableObject *param_1)

{
                    /* 0x4210  50  ??0XWaitableObject@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XWaitableObject_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  return;
}



/* ---- vfunction1 @ 10004230 size=125 ---- */

undefined4 * __thiscall XWaitableObject::vfunction1(XWaitableObject *this,byte param_1)

{
  undefined1 *_Memory;
  int *piVar1;
  
  if ((param_1 & 2) != 0) {
    _Memory = &this[-1].XWaitableObject_data.field_0x14;
    _eh_vector_destructor_iterator_
              (this,8,*(int *)&this[-1].XWaitableObject_data.field_0x14,~XWaitableObject);
    if ((param_1 & 1) != 0) {
      _free(_Memory);
    }
    return (undefined4 *)_Memory;
  }
  piVar1 = (this->XWaitableObject_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *(this->XWaitableObject_data).offset_0x0 = 0;
  }
  _free((this->XWaitableObject_data).offset_0x0);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XMutexA @ 100042b0 size=52 ---- */

/* public: __thiscall XMutexA::XMutexA(void) */

XMutexA * __thiscall XMutexA::XMutexA(XMutexA *this)

{
  undefined4 *puVar1;
  
                    /* 0x42b0  30  ??0XMutexA@@QAE@XZ */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XMutexA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  this->offset_0x0 = puVar1;
  *puVar1 = 0;
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XMutexA_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return this;
}



/* ---- ~XMutexA @ 100042f0 size=60 ---- */

/* public: virtual __thiscall XMutexA::~XMutexA(void) */

void __thiscall XMutexA::~XMutexA(XMutexA *this)

{
  int *piVar1;
  
                    /* 0x42f0  67  ??1XMutexA@@UAE@XZ */
  piVar1 = this->offset_0x0;
                    /* inlined constructor or destructor (approx location) for XMutexA */
  this->vftablePtr = &vftable_for_XSyncObject;
                    /* inlined constructor or destructor (approx location) for XWaitableObject */
  this->vftablePtr = (XMutexA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  return;
}



/* ---- XMutexA @ 10004330 size=41 ---- */

/* public: __thiscall XMutexA::XMutexA(class XMutexA const &) */

void __thiscall XMutexA::XMutexA(XMutexA *this,XMutexA *param_1)

{
                    /* 0x4330  29  ??0XMutexA@@QAE@ABV0@@Z */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XMutexA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  this->offset_0x0 = *(undefined4 **)(param_1 + 4);
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XMutexA_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return;
}



/* ---- vfunction1_for_XWaitableObject @ 10004360 size=132 ---- */

undefined4 * __thiscall XMutexA::vfunction1_for_XWaitableObject(XMutexA *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xc,*(int *)&this[-1].field_0x18,~XMutexA);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].field_0x18);
    }
    return (undefined4 *)&this[-1].field_0x18;
  }
  piVar1 = this->offset_0x0;
  this->vftablePtr = &vftable_for_XSyncObject;
  this->vftablePtr = (XMutexA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XMutexW @ 100043f0 size=52 ---- */

/* public: __thiscall XMutexW::XMutexW(void) */

XMutexW * __thiscall XMutexW::XMutexW(XMutexW *this)

{
  undefined4 *puVar1;
  
                    /* 0x43f0  32  ??0XMutexW@@QAE@XZ */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XMutexW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  this->offset_0x0 = puVar1;
  *puVar1 = 0;
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XMutexW_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return this;
}



/* ---- ~XMutexW @ 10004430 size=60 ---- */

/* public: virtual __thiscall XMutexW::~XMutexW(void) */

void __thiscall XMutexW::~XMutexW(XMutexW *this)

{
  int *piVar1;
  
                    /* 0x4430  68  ??1XMutexW@@UAE@XZ */
  piVar1 = this->offset_0x0;
                    /* inlined constructor or destructor (approx location) for XMutexW */
  this->vftablePtr = &vftable_for_XSyncObject;
                    /* inlined constructor or destructor (approx location) for XWaitableObject */
  this->vftablePtr = (XMutexW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  return;
}



/* ---- XMutexW @ 10004470 size=41 ---- */

/* public: __thiscall XMutexW::XMutexW(class XMutexW const &) */

void __thiscall XMutexW::XMutexW(XMutexW *this,XMutexW *param_1)

{
                    /* 0x4470  31  ??0XMutexW@@QAE@ABV0@@Z */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XMutexW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  this->offset_0x0 = *(undefined4 **)(param_1 + 4);
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XMutexW_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return;
}



/* ---- vfunction1_for_XWaitableObject @ 100044a0 size=132 ---- */

undefined4 * __thiscall XMutexW::vfunction1_for_XWaitableObject(XMutexW *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xc,*(int *)&this[-1].field_0x18,~XMutexW);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].field_0x18);
    }
    return (undefined4 *)&this[-1].field_0x18;
  }
  piVar1 = this->offset_0x0;
  this->vftablePtr = &vftable_for_XSyncObject;
  this->vftablePtr = (XMutexW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XSemaphoreA @ 10004530 size=52 ---- */

/* public: __thiscall XSemaphoreA::XSemaphoreA(void) */

XSemaphoreA * __thiscall XSemaphoreA::XSemaphoreA(XSemaphoreA *this)

{
  undefined4 *puVar1;
  
                    /* 0x4530  39  ??0XSemaphoreA@@QAE@XZ */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XSemaphoreA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  this->offset_0x0 = puVar1;
  *puVar1 = 0;
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XSemaphoreA_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return this;
}



/* ---- ~XSemaphoreA @ 10004570 size=60 ---- */

/* public: virtual __thiscall XSemaphoreA::~XSemaphoreA(void) */

void __thiscall XSemaphoreA::~XSemaphoreA(XSemaphoreA *this)

{
  int *piVar1;
  
                    /* 0x4570  71  ??1XSemaphoreA@@UAE@XZ */
  piVar1 = this->offset_0x0;
                    /* inlined constructor or destructor (approx location) for XSemaphoreA */
  this->vftablePtr = &vftable_for_XSyncObject;
                    /* inlined constructor or destructor (approx location) for XWaitableObject */
  this->vftablePtr = (XSemaphoreA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  return;
}



/* ---- XSemaphoreA @ 100045b0 size=41 ---- */

/* public: __thiscall XSemaphoreA::XSemaphoreA(class XSemaphoreA const &) */

void __thiscall XSemaphoreA::XSemaphoreA(XSemaphoreA *this,XSemaphoreA *param_1)

{
                    /* 0x45b0  38  ??0XSemaphoreA@@QAE@ABV0@@Z */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XSemaphoreA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  this->offset_0x0 = *(undefined4 **)(param_1 + 4);
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XSemaphoreA_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return;
}



/* ---- vfunction1_for_XWaitableObject @ 100045e0 size=132 ---- */

undefined4 * __thiscall XSemaphoreA::vfunction1_for_XWaitableObject(XSemaphoreA *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xc,*(int *)&this[-1].field_0x18,~XSemaphoreA);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].field_0x18);
    }
    return (undefined4 *)&this[-1].field_0x18;
  }
  piVar1 = this->offset_0x0;
  this->vftablePtr = &vftable_for_XSyncObject;
  this->vftablePtr = (XSemaphoreA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XSemaphoreW @ 10004670 size=52 ---- */

/* public: __thiscall XSemaphoreW::XSemaphoreW(void) */

XSemaphoreW * __thiscall XSemaphoreW::XSemaphoreW(XSemaphoreW *this)

{
  undefined4 *puVar1;
  
                    /* 0x4670  41  ??0XSemaphoreW@@QAE@XZ */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XSemaphoreW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  this->offset_0x0 = puVar1;
  *puVar1 = 0;
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XSemaphoreW_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return this;
}



/* ---- ~XSemaphoreW @ 100046b0 size=60 ---- */

/* public: virtual __thiscall XSemaphoreW::~XSemaphoreW(void) */

void __thiscall XSemaphoreW::~XSemaphoreW(XSemaphoreW *this)

{
  int *piVar1;
  
                    /* 0x46b0  72  ??1XSemaphoreW@@UAE@XZ */
  piVar1 = this->offset_0x0;
                    /* inlined constructor or destructor (approx location) for XSemaphoreW */
  this->vftablePtr = &vftable_for_XSyncObject;
                    /* inlined constructor or destructor (approx location) for XWaitableObject */
  this->vftablePtr = (XSemaphoreW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  return;
}



/* ---- XSemaphoreW @ 100046f0 size=41 ---- */

/* public: __thiscall XSemaphoreW::XSemaphoreW(class XSemaphoreW const &) */

void __thiscall XSemaphoreW::XSemaphoreW(XSemaphoreW *this,XSemaphoreW *param_1)

{
                    /* 0x46f0  40  ??0XSemaphoreW@@QAE@ABV0@@Z */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XSemaphoreW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  this->offset_0x0 = *(undefined4 **)(param_1 + 4);
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XSemaphoreW_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return;
}



/* ---- operator= @ 10004720 size=15 ---- */

/* public: class XSystem::Threading::Thread & __thiscall XSystem::Threading::Thread::operator=(class
   XSystem::Threading::Thread const &) */

Thread * __thiscall XSystem::Threading::Thread::operator=(Thread *this,Thread *param_1)

{
                    /* 0x4720  81  ??4Thread@Threading@XSystem@@QAEAAV012@ABV012@@Z
                       0x4720  82  ??4XCriticalSection@@QAEAAV0@ABV0@@Z
                       0x4720  83  ??4XEventA@@QAEAAV0@ABV0@@Z
                       0x4720  84  ??4XEventW@@QAEAAV0@ABV0@@Z
                       0x4720  88  ??4XMutexA@@QAEAAV0@ABV0@@Z
                       0x4720  89  ??4XMutexW@@QAEAAV0@ABV0@@Z
                       0x4720  90  ??4XRWCriticalSection@@QAEAAV0@ABV0@@Z
                       0x4720  92  ??4XSemaphoreA@@QAEAAV0@ABV0@@Z
                       0x4720  93  ??4XSemaphoreW@@QAEAAV0@ABV0@@Z
                       0x4720  96  ??4XThread@@QAEAAV0@ABV0@@Z
                       0x4720  97  ??4XWaitableCollection@@QAEAAV0@ABV0@@Z
                       0x4720  98  ??4XWaitableObject@@QAEAAV0@ABV0@@Z */
  (this->Thread_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  return (Thread *)this;
}



/* ---- vfunction1_for_XWaitableObject @ 10004730 size=132 ---- */

undefined4 * __thiscall XSemaphoreW::vfunction1_for_XWaitableObject(XSemaphoreW *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xc,*(int *)&this[-1].field_0x18,~XSemaphoreW);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].field_0x18);
    }
    return (undefined4 *)&this[-1].field_0x18;
  }
  piVar1 = this->offset_0x0;
  this->vftablePtr = &vftable_for_XSyncObject;
  this->vftablePtr = (XSemaphoreW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XEventA @ 100047c0 size=52 ---- */

/* public: __thiscall XEventA::XEventA(void) */

XEventA * __thiscall XEventA::XEventA(XEventA *this)

{
  undefined4 *puVar1;
  
                    /* 0x47c0  16  ??0XEventA@@QAE@XZ */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XEventA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  this->offset_0x0 = puVar1;
  *puVar1 = 0;
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XEventA_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return this;
}



/* ---- ~XEventA @ 10004800 size=60 ---- */

/* public: virtual __thiscall XEventA::~XEventA(void) */

void __thiscall XEventA::~XEventA(XEventA *this)

{
  int *piVar1;
  
                    /* 0x4800  62  ??1XEventA@@UAE@XZ */
  piVar1 = this->offset_0x0;
                    /* inlined constructor or destructor (approx location) for XEventA */
  this->vftablePtr = &vftable_for_XSyncObject;
                    /* inlined constructor or destructor (approx location) for XWaitableObject */
  this->vftablePtr = (XEventA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  return;
}



/* ---- XEventA @ 10004840 size=41 ---- */

/* public: __thiscall XEventA::XEventA(class XEventA const &) */

void __thiscall XEventA::XEventA(XEventA *this,XEventA *param_1)

{
                    /* 0x4840  15  ??0XEventA@@QAE@ABV0@@Z */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XEventA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  this->offset_0x0 = *(undefined4 **)(param_1 + 4);
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XEventA_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return;
}



/* ---- vfunction1_for_XWaitableObject @ 10004870 size=132 ---- */

undefined4 * __thiscall XEventA::vfunction1_for_XWaitableObject(XEventA *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xc,*(int *)&this[-1].field_0x18,~XEventA);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].field_0x18);
    }
    return (undefined4 *)&this[-1].field_0x18;
  }
  piVar1 = this->offset_0x0;
  this->vftablePtr = &vftable_for_XSyncObject;
  this->vftablePtr = (XEventA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XEventW @ 10004900 size=52 ---- */

/* public: __thiscall XEventW::XEventW(void) */

XEventW * __thiscall XEventW::XEventW(XEventW *this)

{
  undefined4 *puVar1;
  
                    /* 0x4900  18  ??0XEventW@@QAE@XZ */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XEventW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  this->offset_0x0 = puVar1;
  *puVar1 = 0;
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XEventW_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return this;
}



/* ---- ~XEventW @ 10004940 size=60 ---- */

/* public: virtual __thiscall XEventW::~XEventW(void) */

void __thiscall XEventW::~XEventW(XEventW *this)

{
  int *piVar1;
  
                    /* 0x4940  63  ??1XEventW@@UAE@XZ */
  piVar1 = this->offset_0x0;
                    /* inlined constructor or destructor (approx location) for XEventW */
  this->vftablePtr = &vftable_for_XSyncObject;
                    /* inlined constructor or destructor (approx location) for XWaitableObject */
  this->vftablePtr = (XEventW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  return;
}



/* ---- XEventW @ 10004980 size=41 ---- */

/* public: __thiscall XEventW::XEventW(class XEventW const &) */

void __thiscall XEventW::XEventW(XEventW *this,XEventW *param_1)

{
                    /* 0x4980  17  ??0XEventW@@QAE@ABV0@@Z */
                    /* inlined constructor: XWaitableObject::XWaitableObject */
  this->vftablePtr = (XEventW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  this->offset_0x0 = *(undefined4 **)(param_1 + 4);
                    /* inlined constructor: XSyncObject::XSyncObject */
  this->vftablePtr = (XEventW_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  this->vftablePtr = &vftable_for_XWaitableObject;
  this->vftablePtr = &vftable_for_XSyncObject;
  return;
}



/* ---- vfunction1_for_XWaitableObject @ 100049b0 size=132 ---- */

undefined4 * __thiscall XEventW::vfunction1_for_XWaitableObject(XEventW *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xc,*(int *)&this[-1].field_0x18,~XEventW);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].field_0x18);
    }
    return (undefined4 *)&this[-1].field_0x18;
  }
  piVar1 = this->offset_0x0;
  this->vftablePtr = &vftable_for_XSyncObject;
  this->vftablePtr = (XEventW_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *this->offset_0x0 = 0;
  }
  _free(this->offset_0x0);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XRWCriticalSection @ 10004a40 size=21 ---- */

/* public: __thiscall XRWCriticalSection::XRWCriticalSection(class XRWCriticalSection const &) */

void __thiscall
XRWCriticalSection::XRWCriticalSection(XRWCriticalSection *this,XRWCriticalSection *param_1)

{
                    /* 0x4a40  33  ??0XRWCriticalSection@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XRWCriticalSection_data).offset_0x0 = *(void **)(param_1 + 4);
  return;
}



/* ---- vfunction1 @ 10004a60 size=112 ---- */

undefined4 * __thiscall XRWCriticalSection::vfunction1(XRWCriticalSection *this,byte param_1)

{
  void *_Memory;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,8,(int)this[-1].XRWCriticalSection_data.offset_0x0,~XRWCriticalSection);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].XRWCriticalSection_data);
    }
    return &this[-1].XRWCriticalSection_data;
  }
  _Memory = (this->XRWCriticalSection_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (_Memory != (void *)0x0) {
    FUN_10004dd0();
    _free(_Memory);
    (this->XRWCriticalSection_data).offset_0x0 = (void *)0x0;
  }
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XLock @ 10004ad0 size=35 ---- */

/* public: __thiscall XLock::XLock(class XLock const &) */

void __thiscall XLock::XLock(XLock *this,XLock *param_1)

{
                    /* 0x4ad0  20  ??0XLock@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XLock_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  (this->XLock_data).offset_0x4 = *(uint *)(param_1 + 8);
  (this->XLock_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  return;
}



/* ---- operator= @ 10004b00 size=36 ---- */

/* public: class XLock & __thiscall XLock::operator=(class XLock const &) */

XLock * __thiscall XLock::operator=(XLock *this,XLock *param_1)

{
  XLock_data *pXVar1;
  int iVar2;
  
                    /* 0x4b00  85  ??4XLock@@QAEAAV0@ABV0@@Z
                       0x4b00  91  ??4XRWLock@@QAEAAV0@ABV0@@Z */
  pXVar1 = &this->XLock_data;
  iVar2 = 0xc;
  do {
    *(undefined1 *)&pXVar1->offset_0x0 = *(undefined1 *)(((int)param_1 - (int)this) + (int)pXVar1);
    pXVar1 = (XLock_data *)((int)&pXVar1->offset_0x0 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (XLock *)this;
}



/* ---- vfunction1 @ 10004b30 size=119 ---- */

undefined4 * __thiscall XLock::vfunction1(XLock *this,byte param_1)

{
  undefined4 *_Memory;
  int *piVar1;
  int iVar2;
  
  if ((param_1 & 2) != 0) {
    _Memory = &this[-1].XLock_data.offset_0x8;
    _eh_vector_destructor_iterator_(this,0x10,this[-1].XLock_data.offset_0x8,~XLock);
    if ((param_1 & 1) != 0) {
      _free(_Memory);
    }
    return _Memory;
  }
  this->vftablePtr = &_vftable_;
  if (((&this->XLock_data != (XLock_data *)0x0) &&
      (piVar1 = (this->XLock_data).offset_0x0, piVar1 != (int *)0x0)) &&
     ((this->XLock_data).offset_0x4 != 0)) {
    iVar2 = (**(code **)(*piVar1 + 4))();
    (this->XLock_data).offset_0x4 = (uint)(iVar2 == 0);
  }
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XRWLock @ 10004bb0 size=35 ---- */

/* public: __thiscall XRWLock::XRWLock(class XRWLock const &) */

void __thiscall XRWLock::XRWLock(XRWLock *this,XRWLock *param_1)

{
                    /* 0x4bb0  36  ??0XRWLock@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XRWLock_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  (this->XRWLock_data).offset_0x4 = *(int *)(param_1 + 8);
  (this->XRWLock_data).offset_0x8 = *(int *)(param_1 + 0xc);
  return;
}



/* ---- vfunction1 @ 10004be0 size=137 ---- */

undefined4 * __thiscall XRWLock::vfunction1(XRWLock *this,byte param_1)

{
  int *_Memory;
  XRWCriticalSection *this_00;
  int iVar1;
  
  if ((param_1 & 2) != 0) {
    _Memory = &this[-1].XRWLock_data.offset_0x8;
    _eh_vector_destructor_iterator_(this,0x10,this[-1].XRWLock_data.offset_0x8,~XRWLock);
    if ((param_1 & 1) != 0) {
      _free(_Memory);
    }
    return _Memory;
  }
  this_00 = (XRWCriticalSection *)(this->XRWLock_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if ((this_00 != (XRWCriticalSection *)0x0) && ((this->XRWLock_data).offset_0x8 != 0)) {
    if ((this->XRWLock_data).offset_0x4 == 0) {
      iVar1 = XRWCriticalSection::UnlockReader(this_00);
    }
    else {
      iVar1 = ReleaseMutex((HANDLE)**(undefined4 **)
                                     ((int)(this_00->XRWCriticalSection_data).offset_0x0 + 0x10));
    }
    (this->XRWLock_data).offset_0x8 = (uint)(iVar1 == 0);
  }
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XWaitableCollection @ 10004c70 size=21 ---- */

/* public: __thiscall XWaitableCollection::XWaitableCollection(class XWaitableCollection const &) */

void __thiscall
XWaitableCollection::XWaitableCollection(XWaitableCollection *this,XWaitableCollection *param_1)

{
                    /* 0x4c70  48  ??0XWaitableCollection@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XWaitableCollection_data).offset_0x0 = *(int *)(param_1 + 4);
  return;
}



/* ---- vfunction1 @ 10004c90 size=137 ---- */

undefined4 * __thiscall XWaitableCollection::vfunction1(XWaitableCollection *this,byte param_1)

{
  void *_Memory;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,8,this[-1].XWaitableCollection_data.offset_0x0,~XWaitableCollection);
    if ((param_1 & 1) != 0) {
      _free(&this[-1].XWaitableCollection_data);
    }
    return &this[-1].XWaitableCollection_data;
  }
  _Memory = (void *)(this->XWaitableCollection_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (_Memory != (void *)0x0) {
    if (*(void **)((int)_Memory + 4) != (void *)0x0) {
      _free(*(void **)((int)_Memory + 4));
    }
    *(undefined4 *)((int)_Memory + 4) = 0;
    *(undefined4 *)((int)_Memory + 8) = 0;
    *(undefined4 *)((int)_Memory + 0xc) = 0;
    _free(_Memory);
  }
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XMutexA @ 10004d20 size=173 ---- */

XMutexA * __thiscall XMutexA::XMutexA(XMutexA *this)

{
  undefined4 *puVar1;
  XMutexA *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016c43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: XWaitableObject::XWaitableObject
                       inlined constructor: XEventA::XEventA */
  in_stack_00000004->vftablePtr = (XMutexA_vftable_for_XWaitableObject *)&XWaitableObject::_vftable_
  ;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  in_stack_00000004->offset_0x0 = puVar1;
  *puVar1 = 0;
                    /* inlined constructor: XSyncObject::XSyncObject */
  in_stack_00000004->vftablePtr = (XMutexA_vftable_for_XSyncObject *)&XSyncObject::_vftable_;
  in_stack_00000004->vftablePtr =
       (XMutexA_vftable_for_XWaitableObject *)&XEventA::vftable_for_XWaitableObject;
  in_stack_00000004->vftablePtr =
       (XMutexA_vftable_for_XSyncObject *)&XEventA::vftable_for_XSyncObject;
  local_4 = 0;
  in_stack_00000004->offset_0x8 = &XWaitableObject::_vftable_.vfunction1;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  in_stack_00000004->offset_0xc = puVar1;
  *puVar1 = 0;
  in_stack_00000004->offset_0x10 = &XSyncObject::_vftable_.Lock;
  in_stack_00000004->offset_0x8 = &vftable_for_XWaitableObject.vfunction1_for_XWaitableObject;
  in_stack_00000004->offset_0x10 = &vftable_for_XSyncObject.Lock;
  local_4 = CONCAT31(local_4._1_3_,1);
  XCriticalSection::XCriticalSection((XCriticalSection *)&in_stack_00000004->field_0x18,4000);
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- FUN_10004dd0 @ 10004dd0 size=165 ---- */

void FUN_10004dd0(void)

{
  undefined4 *_Memory;
  int *piVar1;
  undefined4 *unaff_ESI;
  
  _Memory = (undefined4 *)unaff_ESI[7];
                    /* inlined constructor or destructor (approx location) for XCriticalSection */
  unaff_ESI[6] = &XCriticalSection::_vftable_;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    unaff_ESI[7] = 0;
  }
  piVar1 = (int *)unaff_ESI[4];
                    /* inlined constructor or destructor (approx location) for XMutexA */
  unaff_ESI[5] = &XMutexA::vftable_for_XSyncObject;
                    /* inlined constructor or destructor (approx location) for XWaitableObject */
  unaff_ESI[3] = &XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *(undefined4 *)unaff_ESI[4] = 0;
  }
  _free((void *)unaff_ESI[4]);
  piVar1 = (int *)unaff_ESI[1];
                    /* inlined constructor or destructor (approx location) for XEventA */
  unaff_ESI[2] = &XEventA::vftable_for_XSyncObject;
  *unaff_ESI = &XWaitableObject::_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *(undefined4 *)unaff_ESI[1] = 0;
  }
  _free((void *)unaff_ESI[1]);
  return;
}



/* ---- XThread @ 10004e80 size=21 ---- */

/* public: __thiscall XThread::XThread(class XThread const &) */

void __thiscall XThread::XThread(XThread *this,XThread *param_1)

{
                    /* 0x4e80  46  ??0XThread@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->XThread_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  return;
}



/* ---- vfunction1 @ 10004ea0 size=82 ---- */

XThread * __thiscall XThread::vfunction1(XThread *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    ~XThread(this);
    if ((param_1 & 1) != 0) {
      _free(this);
    }
    return (XThread *)this;
  }
  _eh_vector_destructor_iterator_(this,8,(int)this[-1].XThread_data.offset_0x0,~XThread);
  if ((param_1 & 1) != 0) {
    _free(&this[-1].XThread_data);
  }
  return (XThread *)&this[-1].XThread_data;
}



/* ---- vfunction1 @ 10004f00 size=30 ---- */

undefined4 * __thiscall XThreadPool::vfunction1(XThreadPool *this,byte param_1)

{
  XThreadPool_Constructor_or_Destructor(&this->vftablePtr);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XObjectPool<XThreadPool::XWorkItem> @ 10004f20 size=99 ---- */

XObjectPool<XThreadPool::XWorkItem> * __thiscall
XObjectPool<XThreadPool::XWorkItem>::XObjectPool<XThreadPool::XWorkItem>
          (XObjectPool<XThreadPool::XWorkItem> *this)

{
  XObjectPool<XThreadPool::XWorkItem> *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016e6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_stack_00000004->vftablePtr = &vftable;
  (in_stack_00000004->XObjectPool<XThreadPool::XWorkItem>_data).offset_0x0 = 0xffffffff;
  (in_stack_00000004->XObjectPool<XThreadPool::XWorkItem>_data).offset_0x8 = 0;
  (in_stack_00000004->XObjectPool<XThreadPool::XWorkItem>_data).offset_0xc = 0;
  (in_stack_00000004->XObjectPool<XThreadPool::XWorkItem>_data).offset_0x10 = 0;
  local_4 = 0;
  XCriticalSection::XCriticalSection
            ((XCriticalSection *)
             &(in_stack_00000004->XObjectPool<XThreadPool::XWorkItem>_data).field_0x14,4000);
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- FUN_10004f90 @ 10004f90 size=152 ---- */

void __fastcall FUN_10004f90(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016966;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor or destructor (approx location) for
                       XObjectPool<XThreadPool::XWorkItem> */
  *param_1 = &XObjectPool<XThreadPool::XWorkItem>::vftable;
  local_4 = 1;
  FUN_10005240((int)param_1);
  _Memory = (undefined4 *)param_1[7];
                    /* inlined constructor or destructor (approx location) for XCriticalSection */
  param_1[6] = &XCriticalSection::_vftable_;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    param_1[7] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10005030 @ 10005030 size=243 ---- */

void __fastcall FUN_10005030(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 uStack00000000;
  undefined1 auStack_24 [4];
  uint uStack_20;
  int *local_18;
  int local_14;
  uint local_c;
  
  local_c = DAT_10022024 ^ (uint)auStack_24;
  piVar4 = (int *)(param_1 + 0x18);
  local_14 = 0;
  local_18 = piVar4;
  if ((&uStack00000000 != (undefined1 *)0x18) && (piVar4 != (int *)0x0)) {
    local_14 = (**(code **)*piVar4)(0xffffffff);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 == 0) || ((int)(*(int *)(param_1 + 0x10) - uVar1) >> 2 == 0)) {
    puVar3 = _malloc(0x10);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x10);
    if (uVar2 < uVar1) {
      FUN_10008e31();
    }
    uStack_20 = uVar2;
    if ((*(uint *)(param_1 + 0x10) < uVar2 - 4) || (uVar2 - 4 < *(uint *)(param_1 + 0xc))) {
      FUN_10008e31();
      piVar4 = local_18;
    }
    if (*(undefined4 **)(param_1 + 0x10) <= (undefined4 *)(uVar2 - 4)) {
      FUN_10008e31();
    }
    puVar3 = *(undefined4 **)(uVar2 - 4);
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 != 0)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -4;
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  if (((&uStack00000000 != (undefined1 *)0x18) && (piVar4 != (int *)0x0)) && (local_14 != 0)) {
    (**(code **)(*piVar4 + 4))();
  }
  __security_check_cookie(local_c ^ (uint)auStack_24);
  return;
}



/* ---- XLock_Constructor_or_Destructor @ 10005130 size=235 ---- */

void __fastcall XLock::XLock_Constructor_or_Destructor(int param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 uStack00000000;
  undefined1 auStackY_c0 [128];
  undefined1 auStack_28 [4];
  void *pvStack_24;
  XLock_vftable *local_20;
  int *local_1c;
  int local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016e38;
  local_c = ExceptionList;
  local_10 = DAT_10022024 ^ (uint)auStack_28;
  ExceptionList = &local_c;
  if (param_2 == (void *)0x0) goto LAB_100051fc;
  piVar1 = (int *)(param_1 + 0x18);
  local_20 = &_vftable_;
  local_18 = 0;
  local_1c = piVar1;
  if ((&uStack00000000 != (undefined1 *)0x1c) && (piVar1 != (int *)0x0)) {
    local_18 = (**(code **)*piVar1)(0xffffffff,DAT_10022024 ^ (uint)(auStackY_c0 + 0x88));
  }
  iVar2 = local_18;
  uVar3 = 0;
  local_4 = 0;
  if (*(uint *)(param_1 + 4) == 0xffffffff) {
LAB_100051cb:
    pvStack_24 = param_2;
    FUN_10002280();
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
    }
    if (uVar3 < *(uint *)(param_1 + 4)) goto LAB_100051cb;
    _free(param_2);
  }
  local_4 = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x1c) && (piVar1 != (int *)0x0)) && (iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))();
  }
LAB_100051fc:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_28);
  return;
}



/* ---- vfunction1 @ 10005220 size=30 ---- */

undefined4 * __thiscall
XObjectPool<XThreadPool::XWorkItem>::vfunction1
          (XObjectPool<XThreadPool::XWorkItem> *this,byte param_1)

{
  FUN_10004f90(&this->vftablePtr);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10005240 @ 10005240 size=225 ---- */

void __fastcall FUN_10005240(int param_1)

{
  uint uVar1;
  uint uVar2;
  void *_Memory;
  int *piVar3;
  undefined1 uStack00000000;
  undefined1 auStack_24 [4];
  uint uStack_20;
  int *local_18;
  int local_14;
  uint local_c;
  
  local_c = DAT_10022024 ^ (uint)auStack_24;
  piVar3 = (int *)(param_1 + 0x18);
  local_14 = 0;
  local_18 = piVar3;
  if ((&uStack00000000 != (undefined1 *)0x18) && (piVar3 != (int *)0x0)) {
    local_14 = (**(code **)*piVar3)(0xffffffff);
  }
  while ((uVar1 = *(uint *)(param_1 + 0xc), uVar1 != 0 &&
         ((int)(*(int *)(param_1 + 0x10) - uVar1) >> 2 != 0))) {
    uVar2 = *(uint *)(param_1 + 0x10);
    if (uVar2 < uVar1) {
      FUN_10008e31();
    }
    uStack_20 = uVar2;
    if ((*(uint *)(param_1 + 0x10) < uVar2 - 4) || (uVar2 - 4 < *(uint *)(param_1 + 0xc))) {
      FUN_10008e31();
      piVar3 = local_18;
    }
    if (*(undefined4 **)(param_1 + 0x10) <= (undefined4 *)(uVar2 - 4)) {
      FUN_10008e31();
    }
    _Memory = *(void **)(uVar2 - 4);
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 != 0)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -4;
    }
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
  }
  if (((&uStack00000000 != (undefined1 *)0x18) && (piVar3 != (int *)0x0)) && (local_14 != 0)) {
    (**(code **)(*piVar3 + 4))();
  }
  __security_check_cookie(local_c ^ (uint)auStack_24);
  return;
}



/* ---- InternalAlloc @ 10005330 size=35 ---- */

/* private: static struct MEMORY_BLOCK * __cdecl XMemory::InternalAlloc(unsigned long) */

MEMORY_BLOCK * __cdecl XMemory::InternalAlloc(ulong param_1)

{
  MEMORY_BLOCK *extraout_EAX;
  
                    /* 0x5330  211  ?InternalAlloc@XMemory@@CAPAUMEMORY_BLOCK@@K@Z */
  if (param_1 != 0) {
    XLock::XLock_Constructor_or_Destructor(param_1);
    if (extraout_EAX != (MEMORY_BLOCK *)0x0) {
      *(ulong *)(extraout_EAX + 8) = param_1;
      *(undefined4 *)extraout_EAX = 1;
      return extraout_EAX;
    }
  }
  return (MEMORY_BLOCK *)0x0;
}



/* ---- vfunction1 @ 10005360 size=75 ---- */

undefined4 * __thiscall
XFixedSizeMemoryBlockPool::vfunction1(XFixedSizeMemoryBlockPool *this,byte param_1)

{
  void *_Memory;
  
  this->vftablePtr = &vftable;
  FUN_100113b0();
  _Memory = (this->XFixedSizeMemoryBlockPool_data).offset_0x8;
  if (_Memory != (void *)0x0) {
    _free(_Memory);
  }
  (this->XFixedSizeMemoryBlockPool_data).offset_0x8 = (void *)0x0;
  (this->XFixedSizeMemoryBlockPool_data).offset_0xc = 0;
  (this->XFixedSizeMemoryBlockPool_data).offset_0x10 = 0;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_100053b0 @ 100053b0 size=152 ---- */

undefined4 * __fastcall FUN_100053b0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 == 0) || ((int)(*(int *)(param_1 + 0x10) - uVar1) >> 2 == 0)) {
    iVar2 = *(int *)(param_1 + 4);
    puVar4 = _malloc(iVar2 + 0xc);
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar4[1] = iVar2;
    puVar4[2] = 0;
    *puVar4 = 0;
    return puVar4;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < uVar1) {
    FUN_10008e31();
  }
  if ((*(uint *)(param_1 + 0x10) < uVar3 - 4) || (uVar3 - 4 < *(uint *)(param_1 + 0xc))) {
    FUN_10008e31();
  }
  if (*(undefined4 **)(param_1 + 0x10) <= (undefined4 *)(uVar3 - 4)) {
    FUN_10008e31();
  }
  puVar4 = *(undefined4 **)(uVar3 - 4);
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 != 0)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -4;
  }
  return puVar4;
}



/* ---- FUN_10005450 @ 10005450 size=113 ---- */

void __fastcall FUN_10005450(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_8 [2];
  
  puVar1 = *(undefined4 **)(param_2 + 0xc);
  if ((puVar1 != (undefined4 *)0x0) &&
     ((uint)(*(int *)(param_2 + 0x10) - (int)puVar1 >> 2) <
      (uint)(*(int *)(param_2 + 0x14) - (int)puVar1 >> 2))) {
    puVar1 = *(undefined4 **)(param_2 + 0x10);
    *puVar1 = param_3;
    *(undefined4 **)(param_2 + 0x10) = puVar1 + 1;
    return;
  }
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  if (puVar2 < puVar1) {
    FUN_10008e31();
  }
  FUN_10005600(local_8,&param_3,(void *)(param_2 + 8),puVar2);
  return;
}



/* ---- vfunction1 @ 100054d0 size=30 ---- */

undefined4 * __thiscall XMemoryPool::vfunction1(XMemoryPool *this,byte param_1)

{
  FUN_100116a0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_100054f0 @ 100054f0 size=104 ---- */

undefined4 FUN_100054f0(void)

{
  int iVar1;
  uint uVar2;
  uint unaff_EBX;
  uint uVar3;
  
  uVar2 = 0x400;
  if (DAT_10023e18 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_10023e1c - DAT_10023e18 >> 2;
  }
  if (unaff_EBX == 0) {
    return 0;
  }
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      if (unaff_EBX <= uVar2) {
        if (iVar1 <= (int)uVar3) {
          return 0;
        }
        if ((DAT_10023e18 == 0) || ((uint)(DAT_10023e1c - DAT_10023e18 >> 2) <= uVar3)) {
          FUN_10008e31();
        }
        return *(undefined4 *)(DAT_10023e18 + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 * 4;
    } while ((int)uVar3 < iVar1);
  }
  return 0;
}



/* ---- FUN_10005560 @ 10005560 size=1 ---- */

void FUN_10005560(void)

{
  return;
}



/* ---- FUN_10005570 @ 10005570 size=139 ---- */

void FUN_10005570(void)

{
  rsize_t _DstSize;
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  int unaff_ESI;
  int iVar3;
  
  if ((*(int *)(unaff_ESI + 4) == 0) ||
     ((uint)(*(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 4) >> 2) < 0xc)) {
    std::bad_alloc::bad_alloc((bad_alloc *)0xc);
    uVar1 = *(uint *)(unaff_ESI + 8);
    if (uVar1 < *(uint *)(unaff_ESI + 4)) {
      FUN_10008e31();
    }
    pvVar2 = *(void **)(unaff_ESI + 4);
    if (*(void **)(unaff_ESI + 8) < pvVar2) {
      FUN_10008e31();
    }
    iVar3 = (int)(uVar1 - (int)pvVar2) >> 2;
    if (iVar3 != 0) {
      _DstSize = iVar3 * 4;
      _memmove_s(_Dst,_DstSize,pvVar2,_DstSize);
    }
    pvVar2 = *(void **)(unaff_ESI + 4);
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(unaff_ESI + 8) - (int)pvVar2 >> 2;
      _free(pvVar2);
    }
    *(int *)(unaff_ESI + 0xc) = (int)_Dst + 0x30;
    *(void **)(unaff_ESI + 8) = (void *)((int)_Dst + iVar3 * 4);
    *(void **)(unaff_ESI + 4) = _Dst;
  }
  return;
}



/* ---- FUN_10005600 @ 10005600 size=134 ---- */

void FUN_10005600(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *in_EAX;
  int iVar2;
  
  uVar1 = *(uint *)((int)in_EAX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)((int)in_EAX + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)((int)in_EAX + 8) < uVar1) {
      FUN_10008e31();
    }
    if ((param_3 == (void *)0x0) || (param_3 != in_EAX)) {
      FUN_10008e31();
    }
    iVar2 = (int)((int)param_4 - uVar1) >> 2;
  }
  FUN_10005710(in_EAX,param_3,param_4);
  uVar1 = *(uint *)((int)in_EAX + 4);
  if (*(uint *)((int)in_EAX + 8) < uVar1) {
    FUN_10008e31();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)((int)in_EAX + 8) < uVar1) || (uVar1 < *(uint *)((int)in_EAX + 4))) {
    FUN_10008e31();
  }
  param_1[1] = uVar1;
  *param_1 = in_EAX;
  return;
}



/* ---- length_error @ 10005690 size=117 ---- */

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
  puStack_8 = &LAB_10016cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10001a00(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  logic_error::logic_error(&local_34,local_50);
  local_34.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_34,&DAT_1001b534);
}



/* ---- FUN_10005710 @ 10005710 size=498 ---- */

void __thiscall FUN_10005710(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  rsize_t _DstSize;
  void *pvVar2;
  rsize_t _DstSize_00;
  undefined4 *in_EAX;
  int extraout_EAX;
  void *_Dst;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint extraout_EDX;
  bad_alloc *local_8;
  undefined4 local_4;
  
  local_4 = *in_EAX;
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 == 0) {
    uVar6 = 0;
    iVar4 = 0;
  }
  else {
    uVar6 = *(int *)((int)this + 0xc) - iVar5 >> 2;
    iVar4 = *(int *)((int)this + 8) - iVar5 >> 2;
  }
  if (iVar4 == 0x3fffffff) {
    std::length_error::length_error((length_error *)0x3fffffff);
    iVar5 = extraout_EAX;
    uVar6 = extraout_EDX;
  }
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 8) - iVar5 >> 2;
  }
  if (uVar6 < iVar4 + 1U) {
    if (0x3fffffff - (uVar6 >> 1) < uVar6) {
      local_8 = (bad_alloc *)0x0;
    }
    else {
      local_8 = (bad_alloc *)(uVar6 + (uVar6 >> 1));
    }
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (local_8 < (bad_alloc *)(iVar4 + 1U)) {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
      }
      local_8 = (bad_alloc *)(iVar5 + 1);
    }
    std::bad_alloc::bad_alloc(local_8);
    iVar5 = (int)param_2 - (int)*(void **)((int)this + 4) >> 2;
    _DstSize = iVar5 * 4;
    if (iVar5 != 0) {
      _memmove_s(_Dst,_DstSize,*(void **)((int)this + 4),_DstSize);
    }
    *(undefined4 *)(_DstSize + (int)_Dst) = local_4;
    iVar5 = *(int *)((int)this + 8) - (int)param_2 >> 2;
    if (iVar5 != 0) {
      _DstSize_00 = iVar5 * 4;
      _memmove_s((void *)(_DstSize + 4 + (int)_Dst),_DstSize_00,param_2,_DstSize_00);
    }
    pvVar2 = *(void **)((int)this + 4);
    if (pvVar2 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - (int)pvVar2 >> 2;
      _free(pvVar2);
    }
    *(void **)((int)this + 0xc) = (void *)((int)_Dst + (int)local_8 * 4);
    *(int *)((int)this + 8) = (int)_Dst + iVar5 * 4 + 4;
    *(void **)((int)this + 4) = _Dst;
    return;
  }
  pvVar2 = *(void **)((int)this + 8);
  if ((int)pvVar2 - (int)param_2 >> 2 == 0) {
    FUN_10002390(param_2 + 1,param_2);
    FUN_10002340(extraout_ECX,&local_4);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
    puVar1 = (undefined4 *)(*(int *)((int)this + 8) + -4);
    if (param_2 != puVar1) {
      do {
        *param_2 = local_4;
        param_2 = param_2 + 1;
      } while (param_2 != puVar1);
      return;
    }
  }
  else {
    pvVar3 = FUN_10002390(pvVar2,(void *)((int)pvVar2 + -4));
    iVar5 = ((int)pvVar2 + -4) - (int)param_2 >> 2;
    *(void **)((int)this + 8) = pvVar3;
    if (0 < iVar5) {
      _memmove_s((void *)((int)pvVar2 + iVar5 * -4),iVar5 * 4,param_2,iVar5 * 4);
    }
    puVar1 = param_2 + 1;
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      *param_2 = local_4;
    }
  }
  return;
}



/* ---- ~XSmallObject @ 10005910 size=9 ---- */

/* public: __thiscall XSmallObject::XSmallObject(void) */

void __thiscall XSmallObject::~XSmallObject(XSmallObject *this)

{
                    /* 0x5910  43  ??0XSmallObject@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~XSmallObject @ 10005920 size=11 ---- */

/* public: __thiscall XSmallObject::XSmallObject(class XSmallObject const &) */

void __thiscall XSmallObject::~XSmallObject(XSmallObject *this,XSmallObject *param_1)

{
                    /* 0x5920  42  ??0XSmallObject@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- operator= @ 10005930 size=5 ---- */

/* public: class XSmallObject & __thiscall XSmallObject::operator=(class XSmallObject const &) */

XSmallObject * __thiscall XSmallObject::operator=(XSmallObject *this,XSmallObject *param_1)

{
                    /* 0x5930  94  ??4XSmallObject@@QAEAAV0@ABV0@@Z
                       0x5930  95  ??4XSyncObject@@QAEAAV0@ABV0@@Z */
  return (XSmallObject *)this;
}



/* ---- scalar_deleting_destructor @ 10005940 size=85 ---- */

undefined4 * __thiscall XSmallObject::scalar_deleting_destructor(XSmallObject *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: XSmallObject::~XSmallObject */
    this->vftablePtr = &_vftable_;
    if ((param_1 & 1) != 0) {
      XLock::XLock((XLock *)this,(uint)this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_(this,4,(int)this[-1].vftablePtr,~XSmallObject);
  if ((param_1 & 1) != 0) {
    _free(this + -1);
  }
  return this + -1;
}



/* ---- FUN_100059a0 @ 100059a0 size=156 ---- */

/* WARNING: Removing unreachable block (ram,0x10005a08) */

void FUN_100059a0(int param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  
  if (*(int *)(param_1 + 0x20) == param_1) {
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    if (*(undefined4 **)(param_1 + 0x10) < puVar3) {
      FUN_10008e31();
    }
    while( true ) {
      puVar1 = *(undefined4 **)(param_1 + 0x10);
      if (puVar1 < *(undefined4 **)(param_1 + 0xc)) {
        FUN_10008e31();
      }
      if (puVar3 == puVar1) break;
      if (*(undefined4 **)(param_1 + 0x10) <= puVar3) {
        FUN_10008e31();
      }
      pvVar5 = (LPVOID)*puVar3;
      DVar4 = 0;
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,DVar4,pvVar5);
      if (*(undefined4 **)(param_1 + 0x10) <= puVar3) {
        FUN_10008e31();
      }
      puVar3 = puVar3 + 2;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = *(undefined4 *)(param_1 + 0x20);
  }
  pvVar5 = *(LPVOID *)(param_1 + 0xc);
  if (pvVar5 != (LPVOID)0x0) {
    DVar4 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar4,pvVar5);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* ---- FUN_10005a40 @ 10005a40 size=107 ---- */

int FUN_10005a40(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x1000;
  *(undefined4 *)(param_1 + 0x1c) = 0x40;
  local_4 = 0;
  XCriticalSection::XCriticalSection((XCriticalSection *)(param_1 + 0x20),4000);
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10005ab0 @ 10005ab0 size=65 ---- */

void FUN_10005ab0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_10005d60();
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}



/* ---- bad_alloc @ 10005b00 size=313 ---- */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  int iVar1;
  undefined1 uStack00000000;
  undefined1 auStack_34 [4];
  exception eStack_30;
  int iStack_24;
  XLock_vftable *local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016ee3;
  local_c = ExceptionList;
  local_10 = DAT_10022024 ^ (uint)auStack_34;
  ExceptionList = &local_c;
                    /* inlined constructor: XLock::XLock */
  local_20 = &XLock::_vftable_;
  local_1c = &DAT_10023eb0;
  local_18 = 0;
  if (&uStack00000000 != (undefined1 *)0x1c) {
    local_18 = (*(code *)*DAT_10023eb0)(0xffffffff);
  }
  iVar1 = local_18;
  local_4 = 0;
  if (DAT_10023e90 == 0) {
    if (DAT_10023e94 != 0) {
      FUN_10005c80();
      return;
    }
    iStack_24 = FUN_100086ab(0x28);
    local_4._0_1_ = 1;
    if (iStack_24 == 0) {
      DAT_10023e90 = 0;
    }
    else {
      DAT_10023e90 = FUN_10005a40(iStack_24);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (DAT_10023e90 == 0) {
      exception::exception(&eStack_30,&PTR_s_bad_allocation_10022d7c,1);
      eStack_30.vftablePtr = (exception_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&eStack_30,&DAT_1001b4c0);
    }
    _atexit((_func_4879 *)&LAB_10005c40);
  }
  local_4 = 0xffffffff;
  if ((&uStack00000000 != (undefined1 *)0x1c) && (iVar1 != 0)) {
    (*(code *)DAT_10023eb0[1])();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_34);
  return;
}



/* ---- FUN_10005c80 @ 10005c80 size=109 ---- */

void FUN_10005c80(void)

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
  puStack_8 = &LAB_10016cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_10001a00(local_50,(undefined4 *)"Dead Reference Detected",0x17);
  local_4 = 0;
  std::logic_error::logic_error(&local_34,local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_34,&DAT_1001b4f8);
}



/* ---- ~XCriticalSection @ 10005cf0 size=101 ---- */

void __thiscall XCriticalSection::~XCriticalSection(XCriticalSection *this)

{
  undefined4 *_Memory;
  int unaff_ESI;
  
  _Memory = *(undefined4 **)(unaff_ESI + 0x24);
  *(XCriticalSection_vftable **)(unaff_ESI + 0x20) = &_vftable_;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_10005d60();
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}



/* ---- FUN_10005d60 @ 10005d60 size=34 ---- */

void FUN_10005d60(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x28) {
    FUN_100059a0(in_EAX);
  }
  return;
}



/* ---- vfunction2 @ 10005d90 size=73 ---- */

undefined4 __thiscall XEventObjHolder::vfunction2(XEventObjHolder *this)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  HANDLE pvVar3;
  
  bVar2 = XObjectHolder<XEventA>::vfunction2((XObjectHolder<XEventA> *)this);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar1 = (int *)(this->XObjectHolder<XEventA>_data).offset_0x4;
    (**(code **)(*piVar1 + 4))();
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)piVar1[1] = pvVar3;
    if (*(int *)piVar1[1] != 0) {
      return 1;
    }
    (*this->vftablePtr->vfunction3)(this);
  }
  return 0;
}



/* ---- vfunction3 @ 10005de0 size=41 ---- */

void __thiscall XEventObjHolder::vfunction3(XEventObjHolder *this)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(this->XObjectHolder<XEventA>_data).offset_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  puVar2 = (undefined4 *)(this->XObjectHolder<XEventA>_data).offset_0x4;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
    (this->XObjectHolder<XEventA>_data).offset_0x4 = 0;
  }
  return;
}



/* ---- vfunction4 @ 10005e10 size=24 ---- */

int __thiscall XEventObjHolder::vfunction4(XEventObjHolder *this)

{
  int iVar1;
  
  iVar1 = (this->XObjectHolder<XEventA>_data).offset_0x4;
  if (iVar1 != 0) {
    ResetEvent((HANDLE)**(undefined4 **)(iVar1 + 4));
  }
  return iVar1;
}



/* ---- vfunction1 @ 10005e30 size=64 ---- */

undefined4 * __thiscall XSignals::ReqItem::vfunction1(ReqItem *this,byte param_1)

{
  XEventObjHolder *this_00;
  
  this_00 = (this->ReqItem_data).offset_0x4;
  this->vftablePtr = &vftable;
  (this->ReqItem_data).offset_0x0 = 0;
  if (this_00 != (XEventObjHolder *)0x0) {
    XEventObjHolder::XEventObjHolder(this_00);
    (this->ReqItem_data).offset_0x4 = (void *)0x0;
  }
  (this->ReqItem_data).offset_0x8 = 0;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- vfunction1 @ 10005e70 size=30 ---- */

undefined4 * __thiscall XSignals::vfunction1(XSignals *this,byte param_1)

{
  FUN_10010800(&this->vftablePtr);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10005e90 @ 10005e90 size=50 ---- */

void FUN_10005e90(void)

{
  int in_EAX;
  
  if (*(void **)(in_EAX + 0x14) != (void *)0x0) {
    _free(*(void **)(in_EAX + 0x14));
  }
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  FUN_10006a90();
  return;
}



/* ---- FUN_10005ed0 @ 10005ed0 size=1246 ---- */

/* WARNING: Removing unreachable block (ram,0x100060cb) */
/* WARNING: Removing unreachable block (ram,0x10006057) */
/* WARNING: Removing unreachable block (ram,0x100061b6) */

void FUN_10005ed0(int param_1,int *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  uint uVar7;
  int extraout_EDX_00;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int local_20;
  
  uVar8 = *(uint *)(param_1 + 0x24);
  if (uVar8 <= *(uint *)(param_1 + 0xc) >> 2) {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18) - iVar5 >> 3;
    }
    if (uVar8 < iVar6 - 1U) {
      if (*(uint *)(param_1 + 0x20) < uVar8) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) * 2 + 1;
      }
    }
    else {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x18) - iVar5 >> 3;
      }
      *(int *)(param_1 + 0x20) = iVar5 * 2 + -3;
      FUN_100068a0((void *)(param_1 + 0x10),param_1 + 4,*(uint *)(param_1 + 8));
    }
    uVar8 = *(int *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x20) >> 1);
    uVar9 = uVar8 - 1;
    if ((*(int *)(param_1 + 0x14) == 0) ||
       ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar9)) {
      FUN_10008e31();
    }
    puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 4 + uVar9 * 8);
    iVar5 = param_1 + 4;
    if (iVar5 == 0) {
      FUN_10008e31();
    }
    while( true ) {
      if ((*(int *)(param_1 + 0x14) == 0) ||
         ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar8)) {
        FUN_10008e31();
      }
      if (*(undefined4 **)(*(int *)(param_1 + 0x14) + 0xc + uVar9 * 8) == puVar10) break;
      if (iVar5 == 0) {
        FUN_10008e31();
      }
      if (puVar10 == *(undefined4 **)(param_1 + 8)) {
        FUN_10008e31();
      }
      iVar6 = FUN_10008feb(puVar10[2] ^ 0xdeadbeef,0x1f31d);
      uVar7 = extraout_EDX * 0x41a7 + iVar6 * -0xb14;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 0x7fffffff;
      }
      if ((uVar7 & *(uint *)(param_1 + 0x20)) == uVar9) {
        if (puVar10 == *(undefined4 **)(param_1 + 8)) {
          FUN_10008e31();
        }
        puVar10 = (undefined4 *)*puVar10;
      }
      else {
        puVar1 = *(undefined4 **)(param_1 + 8);
        if (puVar10 == *(undefined4 **)(param_1 + 8)) {
          FUN_10008e31();
        }
        puVar2 = (undefined4 *)*puVar10;
        if (puVar2 != puVar1) {
          uVar7 = uVar9;
          while( true ) {
            if ((*(int *)(param_1 + 0x14) == 0) ||
               ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar7)) {
              FUN_10008e31();
            }
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(undefined4 **)(iVar6 + 4 + uVar7 * 8) != puVar10) break;
            if ((iVar6 == 0) || ((uint)(*(int *)(param_1 + 0x18) - iVar6 >> 3) <= uVar7)) {
              FUN_10008e31();
            }
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(iVar6 + uVar7 * 8) = iVar5;
            *(undefined4 **)(iVar6 + 4 + uVar7 * 8) = puVar2;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
          }
          iVar6 = *(int *)(param_1 + 8);
          *(undefined4 **)puVar10[1] = puVar2;
          *(int *)puVar2[1] = iVar6;
          **(undefined4 **)(iVar6 + 4) = puVar10;
          uVar3 = *(undefined4 *)(iVar6 + 4);
          *(undefined4 *)(iVar6 + 4) = puVar2[1];
          puVar2[1] = puVar10[1];
          puVar10[1] = uVar3;
          puVar10 = (undefined4 *)(*(undefined4 **)(param_1 + 8))[1];
          if (puVar10 == *(undefined4 **)(param_1 + 8)) {
            FUN_10008e31();
          }
          uVar3 = *(undefined4 *)(param_1 + 8);
          uVar7 = *(int *)(param_1 + 0x24) + 1;
          if ((*(int *)(param_1 + 0x14) == 0) ||
             ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar7)) {
            FUN_10008e31();
          }
          iVar6 = *(int *)(param_1 + 0x14);
          *(int *)(iVar6 + uVar7 * 8) = param_1 + 4;
          *(undefined4 *)(iVar6 + 4 + uVar7 * 8) = uVar3;
        }
        local_20 = param_1 + 4;
        for (uVar7 = *(uint *)(param_1 + 0x24); uVar9 < uVar7; uVar7 = uVar7 - 1) {
          iVar6 = *(int *)(param_1 + 8);
          if ((*(int *)(param_1 + 0x14) == 0) ||
             ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar7)) {
            FUN_10008e31();
          }
          iVar4 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar4 + 4 + uVar7 * 8) != iVar6) break;
          if ((iVar4 == 0) || ((uint)(*(int *)(param_1 + 0x18) - iVar4 >> 3) <= uVar7)) {
            FUN_10008e31();
          }
          iVar6 = *(int *)(param_1 + 0x14);
          *(int *)(iVar6 + uVar7 * 8) = local_20;
          *(undefined4 **)(iVar6 + 4 + uVar7 * 8) = puVar10;
        }
        if (puVar2 == *(undefined4 **)(param_1 + 8)) break;
        puVar10 = puVar2;
      }
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  iVar5 = FUN_10008feb(*param_3 ^ 0xdeadbeef,0x1f31d);
  uVar8 = extraout_EDX_00 * 0x41a7 + iVar5 * -0xb14;
  if ((int)uVar8 < 0) {
    uVar8 = uVar8 + 0x7fffffff;
  }
  uVar8 = uVar8 & *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x24) <= uVar8) {
    uVar8 = uVar8 + (-1 - (*(uint *)(param_1 + 0x20) >> 1));
  }
  if ((*(int *)(param_1 + 0x14) == 0) ||
     ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar8 + 1)) {
    FUN_10008e31();
  }
  puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 4 + (uVar8 + 1) * 8);
  iVar5 = param_1 + 4;
  if (iVar5 == 0) {
    FUN_10008e31();
  }
  do {
    if ((*(int *)(param_1 + 0x14) == 0) ||
       ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar8)) {
      FUN_10008e31();
    }
    if (*(undefined4 **)(*(int *)(param_1 + 0x14) + 4 + uVar8 * 8) == puVar10) goto LAB_100062dd;
    if (iVar5 == 0) {
      FUN_10008e31();
    }
    puVar10 = (undefined4 *)puVar10[1];
    if ((puVar10 == *(undefined4 **)(param_1 + 8)) &&
       (FUN_10008e31(), puVar10 == *(undefined4 **)(param_1 + 8))) {
      FUN_10008e31();
    }
  } while (*param_3 < (uint)puVar10[2]);
  if (puVar10 == *(undefined4 **)(param_1 + 8)) {
    FUN_10008e31();
  }
  if (*param_3 <= (uint)puVar10[2]) {
    *param_2 = iVar5;
    param_2[1] = (int)puVar10;
    *(undefined1 *)(param_2 + 2) = 0;
    return;
  }
  if (puVar10 == *(undefined4 **)(param_1 + 8)) {
    FUN_10008e31();
  }
  puVar10 = (undefined4 *)*puVar10;
LAB_100062dd:
  iVar6 = FUN_10006f20(puVar10,puVar10[1]);
  FUN_10006ae0(1,param_1 + 4);
  puVar10[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  if (iVar5 == 0) {
    FUN_10008e31();
  }
  iVar6 = puVar10[1];
  if (iVar6 == *(int *)(param_1 + 8)) {
    FUN_10008e31();
  }
  while( true ) {
    if ((*(int *)(param_1 + 0x14) == 0) ||
       ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= uVar8)) {
      FUN_10008e31();
    }
    iVar4 = *(int *)(param_1 + 0x14);
    if (*(undefined4 **)(iVar4 + 4 + uVar8 * 8) != puVar10) break;
    if ((iVar4 == 0) || ((uint)(*(int *)(param_1 + 0x18) - iVar4 >> 3) <= uVar8)) {
      FUN_10008e31();
    }
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(iVar4 + uVar8 * 8) = iVar5;
    *(int *)(iVar4 + 4 + uVar8 * 8) = iVar6;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
  }
  param_2[1] = iVar6;
  *param_2 = iVar5;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}



/* ---- FUN_100063c0 @ 100063c0 size=98 ---- */

undefined4 FUN_100063c0(void)

{
  uint *in_EAX;
  int unaff_ESI;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  FUN_10006720(&local_14,in_EAX);
  FUN_10007d40(local_14,local_10,local_c,local_8);
  FUN_10006510(unaff_ESI,&local_14,local_14,local_10,local_c,local_8);
  return 0;
}



/* ---- FUN_10006430 @ 10006430 size=91 ---- */

void FUN_10006430(void)

{
  int *piVar1;
  int *_Memory;
  int unaff_EBX;
  
  piVar1 = *(int **)(unaff_EBX + 8);
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(unaff_EBX + 8) + 4) = *(int *)(unaff_EBX + 8);
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  if (_Memory != *(int **)(unaff_EBX + 8)) {
    do {
      piVar1 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBX + 8));
  }
  FUN_10006bf0((void *)(unaff_EBX + 0x10));
  *(undefined4 *)(unaff_EBX + 0x20) = 1;
  *(undefined4 *)(unaff_EBX + 0x24) = 1;
  return;
}



/* ---- FUN_10006490 @ 10006490 size=127 ---- */

undefined1 * FUN_10006490(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016ddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar1 = FUN_10006f00();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  local_10 = *(undefined4 *)(param_1 + 8);
  local_14 = param_1 + 4;
  FUN_10006f60((int)(param_1 + 0x10),&local_14);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10006510 @ 10006510 size=180 ---- */

void FUN_10006510(int param_1,int *param_2,int param_3,int *param_4,int param_5,int *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = param_3;
  piVar1 = (int *)**(int **)(param_1 + 8);
  iVar3 = param_1 + 4;
  if ((param_3 == 0) || (param_3 != iVar3)) {
    FUN_10008e31();
  }
  piVar4 = param_4;
  if (param_4 == piVar1) {
    piVar1 = *(int **)(param_1 + 8);
    if ((param_5 == 0) || (param_5 != iVar3)) {
      FUN_10008e31();
    }
    if (param_6 == piVar1) {
      FUN_10006430();
      param_2[1] = **(int **)(param_1 + 8);
      *param_2 = iVar3;
      return;
    }
  }
  while( true ) {
    if ((iVar2 == 0) || (iVar2 != param_5)) {
      FUN_10008e31();
    }
    if (piVar4 == param_6) break;
    if (iVar2 == 0) {
      FUN_10008e31();
    }
    if (piVar4 == *(int **)(iVar2 + 4)) {
      FUN_10008e31();
    }
    piVar1 = (int *)*piVar4;
    FUN_10006950(&param_3,iVar2,piVar4);
    piVar4 = piVar1;
  }
  param_2[1] = (int)piVar4;
  *param_2 = iVar2;
  return;
}



/* ---- FUN_100065d0 @ 100065d0 size=333 ---- */

int * FUN_100065d0(int *param_1,uint *param_2)

{
  int iVar1;
  int extraout_EDX;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  iVar1 = FUN_10008feb(*param_2 ^ 0xdeadbeef,0x1f31d);
  uVar2 = extraout_EDX * 0x41a7 + iVar1 * -0xb14;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x7fffffff;
  }
  uVar2 = *(uint *)(unaff_EDI + 0x20) & uVar2;
  if (*(uint *)(unaff_EDI + 0x24) <= uVar2) {
    uVar2 = uVar2 + (-1 - (*(uint *)(unaff_EDI + 0x20) >> 1));
  }
  if ((*(int *)(unaff_EDI + 0x14) == 0) ||
     ((uint)(*(int *)(unaff_EDI + 0x18) - *(int *)(unaff_EDI + 0x14) >> 3) <= uVar2)) {
    FUN_10008e31();
  }
  puVar3 = *(undefined4 **)(*(int *)(unaff_EDI + 0x14) + 4 + uVar2 * 8);
  iVar1 = unaff_EDI + 4;
  if (iVar1 == 0) {
    FUN_10008e31();
  }
  while( true ) {
    if ((*(int *)(unaff_EDI + 0x14) == 0) ||
       ((uint)(*(int *)(unaff_EDI + 0x18) - *(int *)(unaff_EDI + 0x14) >> 3) <= uVar2 + 1)) {
      FUN_10008e31();
    }
    if (*(undefined4 **)(*(int *)(unaff_EDI + 0x14) + 4 + (uVar2 + 1) * 8) == puVar3) {
      param_1[1] = *(int *)(unaff_EDI + 8);
      *param_1 = iVar1;
      return param_1;
    }
    if (iVar1 == 0) {
      FUN_10008e31();
    }
    if (puVar3 == *(undefined4 **)(unaff_EDI + 8)) {
      FUN_10008e31();
    }
    if (*param_2 <= (uint)puVar3[2]) break;
    if (puVar3 == *(undefined4 **)(unaff_EDI + 8)) {
      FUN_10008e31();
    }
    puVar3 = (undefined4 *)*puVar3;
  }
  if (puVar3 == *(undefined4 **)(unaff_EDI + 8)) {
    FUN_10008e31();
  }
  if (*param_2 < (uint)puVar3[2]) {
    param_1[1] = *(int *)(unaff_EDI + 8);
    *param_1 = iVar1;
    return param_1;
  }
  param_1[1] = (int)puVar3;
  *param_1 = iVar1;
  return param_1;
}



/* ---- FUN_10006720 @ 10006720 size=361 ---- */

void FUN_10006720(int *param_1,uint *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_EDX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_10008feb(*param_2 ^ 0xdeadbeef,0x1f31d);
  uVar3 = extraout_EDX * 0x41a7 + iVar2 * -0xb14;
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 0x7fffffff;
  }
  uVar3 = *(uint *)(in_EAX + 0x20) & uVar3;
  if (*(uint *)(in_EAX + 0x24) <= uVar3) {
    uVar3 = uVar3 + (-1 - (*(uint *)(in_EAX + 0x20) >> 1));
  }
  if ((*(int *)(in_EAX + 0x14) == 0) ||
     ((uint)(*(int *)(in_EAX + 0x18) - *(int *)(in_EAX + 0x14) >> 3) <= uVar3)) {
    FUN_10008e31();
  }
  puVar4 = *(undefined4 **)(*(int *)(in_EAX + 0x14) + 4 + uVar3 * 8);
  iVar2 = in_EAX + 4;
  if (iVar2 == 0) {
    FUN_10008e31();
  }
  uVar3 = uVar3 + 1;
  while( true ) {
    if ((*(int *)(in_EAX + 0x14) == 0) ||
       ((uint)(*(int *)(in_EAX + 0x18) - *(int *)(in_EAX + 0x14) >> 3) <= uVar3)) {
      FUN_10008e31();
    }
    if (*(undefined4 **)(*(int *)(in_EAX + 0x14) + 4 + uVar3 * 8) == puVar4) goto LAB_10006869;
    if (iVar2 == 0) {
      FUN_10008e31();
    }
    if (puVar4 == *(undefined4 **)(in_EAX + 8)) {
      FUN_10008e31();
    }
    if (*param_2 <= (uint)puVar4[2]) break;
    if (puVar4 == *(undefined4 **)(in_EAX + 8)) {
      FUN_10008e31();
    }
    puVar4 = (undefined4 *)*puVar4;
  }
  puVar5 = puVar4;
  while( true ) {
    if ((*(int *)(in_EAX + 0x14) == 0) ||
       ((uint)(*(int *)(in_EAX + 0x18) - *(int *)(in_EAX + 0x14) >> 3) <= uVar3)) {
      FUN_10008e31();
    }
    if (*(undefined4 **)(*(int *)(in_EAX + 0x14) + 4 + uVar3 * 8) == puVar5) break;
    if (puVar5 == *(undefined4 **)(in_EAX + 8)) {
      FUN_10008e31();
    }
    if (*param_2 < (uint)puVar5[2]) break;
    if (puVar5 == *(undefined4 **)(in_EAX + 8)) {
      FUN_10008e31();
    }
    puVar5 = (undefined4 *)*puVar5;
  }
  if (iVar2 == 0) {
    FUN_10008e31();
  }
  if (puVar4 != puVar5) {
    *param_1 = iVar2;
    param_1[1] = (int)puVar4;
    param_1[2] = iVar2;
    param_1[3] = (int)puVar5;
    return;
  }
LAB_10006869:
  iVar1 = *(int *)(in_EAX + 8);
  param_1[1] = iVar1;
  *param_1 = iVar2;
  param_1[2] = iVar2;
  param_1[3] = iVar1;
  return;
}



/* ---- thunk_FUN_10006a90 @ 10006890 size=5 ---- */

void thunk_FUN_10006a90(void)

{
  int *piVar1;
  int *_Memory;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 4);
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
  *(undefined4 *)(unaff_ESI + 8) = 0;
  if (_Memory != *(int **)(unaff_ESI + 4)) {
    do {
      piVar1 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_ESI + 4));
  }
  _free(*(void **)(unaff_ESI + 4));
  *(undefined4 *)(unaff_ESI + 4) = 0;
  return;
}



/* ---- FUN_100068a0 @ 100068a0 size=172 ---- */

void __thiscall FUN_100068a0(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 8) - (int)puVar1 >> 3;
  }
  if (uVar3 < in_EAX) {
    puVar2 = *(undefined4 **)((int)this + 8);
    if (puVar2 < puVar1) {
      FUN_10008e31();
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 3;
    }
    FUN_10006c60(this,in_EAX - iVar4,&param_1,this,puVar2);
    return;
  }
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar2 = *(undefined4 **)((int)this + 8), in_EAX < (uint)((int)puVar2 - (int)puVar1 >> 3))) {
    if (puVar2 < puVar1) {
      FUN_10008e31();
    }
    uVar3 = *(uint *)((int)this + 4);
    if (*(uint *)((int)this + 8) < uVar3) {
      FUN_10008e31();
    }
    puVar1 = (undefined4 *)(uVar3 + in_EAX * 8);
    param_2 = uVar3;
    if ((*(undefined4 **)((int)this + 8) < puVar1) || (puVar1 < *(undefined4 **)((int)this + 4))) {
      FUN_10008e31();
    }
    FUN_10006b80(&param_1,(int)this,puVar1,(int)this,puVar2);
  }
  return;
}



/* ---- FUN_10006950 @ 10006950 size=306 ---- */

void FUN_10006950(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_EDX;
  uint uVar4;
  int unaff_ESI;
  
  if (param_2 == 0) {
    FUN_10008e31();
  }
  if (param_3 == *(int **)(param_2 + 4)) {
    FUN_10008e31();
  }
  iVar3 = FUN_10008feb(param_3[2] ^ 0xdeadbeef,0x1f31d);
  uVar4 = extraout_EDX * 0x41a7 + iVar3 * -0xb14;
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + 0x7fffffff;
  }
  uVar4 = *(uint *)(unaff_ESI + 0x20) & uVar4;
  if (*(uint *)(unaff_ESI + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (*(uint *)(unaff_ESI + 0x20) >> 1));
  }
  while( true ) {
    if ((*(int *)(unaff_ESI + 0x14) == 0) ||
       ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 3) <= uVar4)) {
      FUN_10008e31();
    }
    iVar3 = *(int *)(unaff_ESI + 0x14);
    if (*(int **)(iVar3 + 4 + uVar4 * 8) != param_3) break;
    if ((iVar3 == 0) || ((uint)(*(int *)(unaff_ESI + 0x18) - iVar3 >> 3) <= uVar4)) {
      FUN_10008e31();
    }
    puVar1 = *(undefined4 **)(*(int *)(unaff_ESI + 0x14) + 4 + uVar4 * 8);
    if (unaff_ESI + 4 == 0) {
      FUN_10008e31();
      FUN_10008e31();
    }
    if (puVar1 == *(undefined4 **)(unaff_ESI + 8)) {
      FUN_10008e31();
    }
    uVar2 = *puVar1;
    if ((*(int *)(unaff_ESI + 0x14) == 0) ||
       ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 3) <= uVar4)) {
      FUN_10008e31();
    }
    iVar3 = *(int *)(unaff_ESI + 0x14);
    *(int *)(iVar3 + uVar4 * 8) = unaff_ESI + 4;
    *(undefined4 *)(iVar3 + 4 + uVar4 * 8) = uVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
  }
  if (param_3 == *(int **)(param_2 + 4)) {
    FUN_10008e31();
  }
  iVar3 = *param_3;
  if (param_3 != *(int **)(unaff_ESI + 8)) {
    *(int *)param_3[1] = iVar3;
    *(int *)(*param_3 + 4) = param_3[1];
    _free(param_3);
    *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + -1;
  }
  param_1[1] = iVar3;
  *param_1 = param_2;
  return;
}



/* ---- FUN_10006a90 @ 10006a90 size=71 ---- */

void FUN_10006a90(void)

{
  int *piVar1;
  int *_Memory;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 4);
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
  *(undefined4 *)(unaff_ESI + 8) = 0;
  if (_Memory != *(int **)(unaff_ESI + 4)) {
    do {
      piVar1 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_ESI + 4));
  }
  _free(*(void **)(unaff_ESI + 4));
  *(undefined4 *)(unaff_ESI + 4) = 0;
  return;
}



/* ---- FUN_10006ae0 @ 10006ae0 size=154 ---- */

void __fastcall FUN_10006ae0(uint param_1,int param_2)

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
  puStack_8 = &LAB_10016c08;
  local_c = ExceptionList;
  if (0x1fffffffU - *(int *)(param_2 + 8) < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_10001a00(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
                    /* inlined constructor: std::length_error::length_error */
    std::logic_error::logic_error(&local_34,local_50);
    local_34.vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_1001b534);
  }
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + param_1;
  return;
}



/* ---- FUN_10006b80 @ 10006b80 size=105 ---- */

int * FUN_10006b80(int *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_10008e31();
  }
  if (param_3 != param_5) {
    puVar1 = *(undefined4 **)(unaff_EBX + 8);
    iVar2 = (int)puVar1 - (int)param_5;
    if (param_5 != puVar1) {
      iVar3 = (int)param_3 - (int)param_5;
      do {
        *(undefined4 *)(iVar3 + (int)param_5) = *param_5;
        *(undefined4 *)(iVar3 + 4 + (int)param_5) = param_5[1];
        param_5 = param_5 + 2;
      } while (param_5 != puVar1);
    }
    *(undefined4 **)(unaff_EBX + 8) = param_3 + (iVar2 >> 3) * 2;
  }
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  return param_1;
}



/* ---- FUN_10006bf0 @ 10006bf0 size=97 ---- */

void __fastcall FUN_10006bf0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  undefined4 local_14;
  undefined4 local_10;
  int local_c [3];
  
  local_10 = in_EAX[1];
  local_14 = *in_EAX;
  puVar1 = *(undefined4 **)((int)param_1 + 8);
  if (puVar1 < *(undefined4 **)((int)param_1 + 4)) {
    FUN_10008e31();
  }
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) < puVar2) {
    FUN_10008e31();
  }
  FUN_10006b80(local_c,(int)param_1,puVar2,(int)param_1,puVar1);
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (*(undefined4 **)((int)param_1 + 8) < puVar1) {
    FUN_10008e31();
  }
  FUN_10006c60(param_1,9,&local_14,param_1,puVar1);
  return;
}



/* ---- FUN_10006c60 @ 10006c60 size=645 ---- */

void __thiscall
FUN_10006c60(void *this,uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  void *_Memory;
  uint *puVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 uVar2;
  length_error *this_00;
  int iVar3;
  int iVar4;
  uint extraout_EDX;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uStack_34;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016be0;
  local_10 = ExceptionList;
  uStack_34 = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_24 = *param_2;
  local_20 = param_2[1];
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)((int)this + 0xc) - iVar4 >> 3;
  }
  if (param_1 != 0) {
    if (iVar4 == 0) {
      this_00 = (length_error *)0x0;
    }
    else {
      this_00 = (length_error *)(*(int *)((int)this + 8) - iVar4 >> 3);
    }
    uVar5 = param_1;
    puVar1 = &uStack_34;
    if (0x1fffffffU - (int)this_00 < param_1) {
      std::length_error::length_error(this_00);
      iVar4 = extraout_EAX;
      uVar5 = extraout_EDX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 8) - iVar4 >> 3;
    }
    if (uVar6 < iVar3 + uVar5) {
      if (0x1fffffff - (uVar6 >> 1) < uVar6) {
        param_2 = (undefined4 *)0x0;
      }
      else {
        param_2 = (undefined4 *)(uVar6 + (uVar6 >> 1));
      }
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - iVar4 >> 3;
      }
      if (param_2 < (undefined4 *)(iVar3 + uVar5)) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((int)this + 8) - iVar4 >> 3;
        }
        param_2 = (undefined4 *)(iVar4 + uVar5);
      }
      std::bad_alloc::bad_alloc((bad_alloc *)param_2);
      local_8 = 0;
      local_1c = local_1c & 0xffffff00;
      local_18 = extraout_EAX_00;
      FUN_10007e30(*(undefined4 **)((int)this + 4),param_4);
      local_1c = local_1c & 0xffffff00;
      FUN_10007d90(param_1,&local_24);
      FUN_10007e30(param_4,*(undefined4 **)((int)this + 8));
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)_Memory >> 3;
      }
      if (_Memory != (void *)0x0) {
        _free(_Memory);
      }
      *(int *)((int)this + 0xc) = local_18 + (int)param_2 * 8;
      *(uint *)((int)this + 8) = local_18 + (param_1 + iVar4) * 8;
      *(int *)((int)this + 4) = local_18;
      ExceptionList = local_10;
      return;
    }
    puVar7 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar7 - (int)param_4 >> 3) < uVar5) {
      FUN_10007e30(param_4,puVar7);
      local_8 = 2;
      FUN_10007d90(param_1 - (*(int *)((int)this + 8) - (int)param_4 >> 3),&local_24);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + uVar5 * 8;
      puVar7 = (undefined4 *)(*(int *)((int)this + 8) + uVar5 * -8);
      if (param_4 != puVar7) {
        do {
          *param_4 = local_24;
          param_4[1] = local_20;
          param_4 = param_4 + 2;
        } while (param_4 != puVar7);
        ExceptionList = local_10;
        return;
      }
    }
    else {
      uVar2 = FUN_10007e30(puVar7 + uVar5 * -2,puVar7);
      *(undefined4 *)((int)this + 8) = uVar2;
      FUN_100078d0((int)(puVar7 + uVar5 * -2),(int)puVar7);
      puVar7 = param_4 + uVar5 * 2;
      for (; param_4 != puVar7; param_4 = param_4 + 2) {
        *param_4 = local_24;
        param_4[1] = local_20;
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@10006df5 @ 10006df5 size=12 ---- */

void Catch_All_10006df5(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- Catch_All@10006e01 @ 10006e01 size=9 ---- */

void Catch_All_10006e01(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10006f00 @ 10006f00 size=26 ---- */

void FUN_10006f00(void)

{
  int iVar1;
  
  iVar1 = FUN_100086ab(0x10);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}



/* ---- FUN_10006f20 @ 10006f20 size=53 ---- */

void FUN_10006f20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_100086ab(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *unaff_ESI;
    puVar1[3] = unaff_ESI[1];
  }
  return;
}



/* ---- FUN_10006f60 @ 10006f60 size=135 ---- */

void FUN_10006f60(int param_1,undefined4 *param_2)

{
  int extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016db0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  std::bad_alloc::bad_alloc((bad_alloc *)0x9);
  local_8 = 0;
  *(int *)(param_1 + 0xc) = extraout_EAX + 0x48;
  *(int *)(param_1 + 4) = extraout_EAX;
  *(int *)(param_1 + 8) = extraout_EAX;
  FUN_10007d90(9,param_2);
  *(int *)(param_1 + 8) = extraout_EAX + 0x48;
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@10006fe7 @ 10006fe7 size=17 ---- */

void Catch_All_10006fe7(void)

{
  FUN_10002250();
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- length_error @ 10007000 size=123 ---- */

void __thiscall std::length_error::length_error(length_error *this)

{
  undefined1 local_5c [4];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  logic_error local_40;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016bb8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = 0;
  FUN_10001a00(local_5c,(undefined4 *)"vector<T> too long",0x12);
  local_c = 0;
  logic_error::logic_error(&local_40,local_5c);
  local_40.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_40,&DAT_1001b534);
}



/* ---- bad_alloc @ 10007080 size=85 ---- */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  char *local_10;
  exception local_c;
  
  if (this == (bad_alloc *)0x0) {
    this = (bad_alloc *)0x0;
  }
  else if ((uint)(0xffffffff / ZEXT48(this)) < 8) {
    local_10 = (char *)0x0;
    exception::exception(&local_c,&local_10);
    local_c.vftablePtr = (exception_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_c,&DAT_1001b4c0);
  }
  FUN_100086ab((int)this * 8);
  return;
}



/* ---- vfunction2 @ 100070e0 size=149 ---- */

bool __thiscall XObjectHolder<XEventA>::vfunction2(XObjectHolder<XEventA> *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016feb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((this->XObjectHolder<XEventA>_data).offset_0x4 == 0) {
    puVar1 = (undefined4 *)FUN_100086ab(0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &XWaitableObject::_vftable_;
      puVar2 = (undefined4 *)FUN_100086ab(4);
      puVar1[1] = puVar2;
      *puVar2 = 0;
      puVar1[2] = &XSyncObject::_vftable_;
      *puVar1 = &XEventA::vftable_for_XWaitableObject;
      puVar1[2] = &XEventA::vftable_for_XSyncObject;
    }
    (this->XObjectHolder<XEventA>_data).offset_0x4 = puVar1;
  }
  ExceptionList = local_c;
  return (this->XObjectHolder<XEventA>_data).offset_0x4 != 0;
}



/* ---- vfunction3 @ 10007180 size=27 ---- */

void __thiscall XObjectHolder<XEventA>::vfunction3(XObjectHolder<XEventA> *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(this->XObjectHolder<XEventA>_data).offset_0x4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    (this->XObjectHolder<XEventA>_data).offset_0x4 = 0;
  }
  return;
}



/* ---- vfunction4 @ 100071a0 size=4 ---- */

undefined4 __thiscall XObjectHolder<XEventA>::vfunction4(XObjectHolder<XEventA> *this)

{
  return (this->XObjectHolder<XEventA>_data).offset_0x4;
}



/* ---- vfunction5 @ 100071b0 size=10 ---- */

/* XObjectHolder<XEventA> member function inherited by XEventObjHolder */

void __thiscall XObjectHolder<XEventA>::vfunction5(XObjectHolder<XEventA> *this,undefined4 param_1)

{
  (this->XObjectHolder<XEventA>_data).offset_0x4 = param_1;
  return;
}



/* ---- vfunction6 @ 100071c0 size=48 ---- */

/* XObjectHolder<XEventA> member function inherited by XEventObjHolder */

undefined4 __thiscall
XObjectHolder<XEventA>::vfunction6
          (XObjectHolder<XEventA> *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (param_2 - this[1].XObjectHolder<XEventA>_data.offset_0x4) -
          (uint)(param_1 < *(uint *)&this[1].XObjectHolder<XEventA>_data);
  if ((iVar1 < (int)param_3 >> 0x1f) ||
     ((iVar1 <= (int)param_3 >> 0x1f &&
      (param_1 - *(int *)&this[1].XObjectHolder<XEventA>_data <= param_3)))) {
    return 0;
  }
  return 1;
}



/* ---- vfunction7 @ 100071f0 size=17 ---- */

/* XObjectHolder<XEventA> member function inherited by XEventObjHolder */

void __thiscall
XObjectHolder<XEventA>::vfunction7
          (XObjectHolder<XEventA> *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)&this[1].XObjectHolder<XEventA>_data = param_1;
  this[1].XObjectHolder<XEventA>_data.offset_0x4 = param_2;
  return;
}



/* ---- XReusableObjectPool<XEventA,XEventObjHolder> @ 10007210 size=138 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XReusableObjectPool<XEventA,XEventObjHolder> * __thiscall
XReusableObjectPool<XEventA,XEventObjHolder>::XReusableObjectPool<XEventA,XEventObjHolder>
          (XReusableObjectPool<XEventA,XEventObjHolder> *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _DAT_10023e4c = &vftable;
  DAT_10023e50 = 0;
  DAT_10023e54 = 0xffffffff;
  _DAT_10023e58 = 0xffffffff;
  DAT_10023e60 = FUN_100079d0();
  DAT_10023e64 = 0;
  local_4 = 0;
  XCriticalSection::XCriticalSection((XCriticalSection *)&DAT_10023e68,4000);
  ExceptionList = local_c;
  return (XReusableObjectPool<XEventA,XEventObjHolder> *)&DAT_10023e4c;
}



/* ---- FUN_100072a0 @ 100072a0 size=168 ---- */

void __fastcall FUN_100072a0(undefined4 *param_1)

{
  undefined4 *_Memory;
  XObjectHolder<XEventA> *extraout_ECX;
  XObjectHolder<XEventA> *extraout_ECX_00;
  XObjectHolder<XEventA> *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100169d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor or destructor (approx location) for
                       XReusableObjectPool<XEventA,XEventObjHolder> */
  *param_1 = &XReusableObjectPool<XEventA,XEventObjHolder>::vftable;
  local_4 = 1;
  XLock::XLock_Constructor_or_Destructor();
  _Memory = (undefined4 *)param_1[8];
                    /* inlined constructor or destructor (approx location) for XCriticalSection */
  param_1[7] = &XCriticalSection::_vftable_;
  this = extraout_ECX;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    param_1[8] = 0;
    this = extraout_ECX_00;
  }
  local_4 = 0xffffffff;
  XObjectHolder<XEventA>::~XObjectHolder<XEventA>(this);
  _free((void *)param_1[5]);
  param_1[5] = 0;
  ExceptionList = local_c;
  return;
}



/* ---- XLock_Constructor_or_Destructor @ 10007350 size=238 ---- */

void XLock::XLock_Constructor_or_Destructor(void)

{
  int iVar1;
  int iVar2;
  XEventObjHolder *pXVar3;
  undefined1 uStack00000000;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016998;
  local_c = ExceptionList;
  local_10 = DAT_10022024 ^ (uint)&local_20;
  ExceptionList = &local_c;
  local_20 = &_vftable_;
  local_1c = &DAT_10023e68;
  local_18 = 0;
  if (&uStack00000000 != (undefined1 *)0x1c) {
    local_18 = (*(code *)*DAT_10023e68)(0xffffffff,DAT_10022024 ^ (int)register0x00000010 - 0x28U);
  }
  iVar1 = local_18;
  local_4 = 0;
  iVar2 = FUN_10007cc0();
  if ((iVar2 != 0) ||
     ((DAT_10023e50 < DAT_10023e54 &&
      (pXVar3 = XEventObjHolder::XEventObjHolder(DAT_10023e50), pXVar3 != (XEventObjHolder *)0x0))))
  {
    DAT_10023e50 = (XEventObjHolder *)((int)&DAT_10023e50->vftablePtr + 1);
  }
  local_4 = 0xffffffff;
  if ((&uStack00000000 != (undefined1 *)0x1c) && (iVar1 != 0)) {
    (*(code *)DAT_10023e68[1])();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_20);
  return;
}



/* ---- XEventObjHolder @ 10007440 size=288 ---- */

void __thiscall XEventObjHolder::XEventObjHolder(XEventObjHolder *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uStack00000000;
  undefined1 auStack_4c [2];
  undefined1 auStack_4a [2];
  XEventObjHolder_vftable *local_48;
  XEventObjHolder *local_40;
  undefined8 uStack_38;
  XLock_vftable *local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016b50;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)auStack_4c;
  ExceptionList = &local_14;
  if (this != (XEventObjHolder *)0x0) {
                    /* inlined constructor: XLock::XLock */
    local_2c = &XLock::_vftable_;
    local_28 = &DAT_10023e68;
    local_24 = 0;
    if (&uStack00000000 != (undefined1 *)0x28) {
      local_24 = (*(code *)*DAT_10023e68)(0xffffffff,DAT_10022024 ^ (uint)(auStack_4c + -0xc));
    }
    iVar2 = local_24;
    local_48 = &vftable;
    local_c = 1;
    DAT_10023e50 = DAT_10023e50 + -1;
    local_40 = this;
    uStack_38 = __time64((__time64_t *)0x0);
    piVar1 = (int *)(DAT_10023e60 + 4);
    iVar3 = FUN_10007a50(DAT_10023e60,*(undefined4 *)(DAT_10023e60 + 4));
    FUN_10007aa0(0x10023e5c);
    *piVar1 = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    local_c = 0xffffffff;
    if ((&uStack00000000 != (undefined1 *)0x28) && (iVar2 != 0)) {
      (*(code *)DAT_10023e68[1])();
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_4c);
  return;
}



/* ---- XObjectPool<XSignals::ReqItem> @ 10007560 size=118 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XObjectPool<XSignals::ReqItem> * __thiscall
XObjectPool<XSignals::ReqItem>::XObjectPool<XSignals::ReqItem>(XObjectPool<XSignals::ReqItem> *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _DAT_10023e2c = &vftable;
  DAT_10023e30 = 0xffffffff;
  DAT_10023e38 = 0;
  DAT_10023e3c = 0;
  _DAT_10023e40 = 0;
  local_4 = 0;
  XCriticalSection::XCriticalSection((XCriticalSection *)&DAT_10023e44,4000);
  ExceptionList = local_c;
  return (XObjectPool<XSignals::ReqItem> *)&DAT_10023e2c;
}



/* ---- FUN_100075e0 @ 100075e0 size=152 ---- */

void __fastcall FUN_100075e0(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016966;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor or destructor (approx location) for
                       XObjectPool<XSignals::ReqItem> */
  *param_1 = &XObjectPool<XSignals::ReqItem>::vftable;
  local_4 = 1;
  FUN_10005240((int)param_1);
  _Memory = (undefined4 *)param_1[7];
                    /* inlined constructor or destructor (approx location) for XCriticalSection */
  param_1[6] = &XCriticalSection::_vftable_;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    param_1[7] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10007680 @ 10007680 size=294 ---- */

void FUN_10007680(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uStack00000000;
  undefined1 auStack_18 [4];
  undefined4 *local_14;
  uint local_8;
  
  local_8 = DAT_10022024 ^ (uint)auStack_18;
  iVar2 = 0;
  if (&uStack00000000 != (undefined1 *)0x14) {
    iVar2 = (*(code *)*DAT_10023e44)(0xffffffff);
  }
  puVar1 = DAT_10023e3c;
  if ((DAT_10023e38 == (undefined4 *)0x0) || ((int)DAT_10023e3c - (int)DAT_10023e38 >> 2 == 0)) {
    puVar1 = _malloc(0x10);
  }
  else {
    if (DAT_10023e3c < DAT_10023e38) {
      FUN_10008e31();
    }
    local_14 = puVar1;
    if ((DAT_10023e3c < puVar1 + -1) || (puVar1 + -1 < DAT_10023e38)) {
      FUN_10008e31();
    }
    if (DAT_10023e3c <= puVar1 + -1) {
      FUN_10008e31();
    }
    puVar1 = (undefined4 *)puVar1[-1];
    if ((DAT_10023e38 != (undefined4 *)0x0) && ((int)DAT_10023e3c - (int)DAT_10023e38 >> 2 != 0)) {
      DAT_10023e3c = DAT_10023e3c + -1;
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
                    /* inlined constructor: XSignals::ReqItem::ReqItem */
    *puVar1 = &XSignals::ReqItem::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  if ((&uStack00000000 != (undefined1 *)0x14) && (iVar2 != 0)) {
    (*(code *)DAT_10023e44[1])();
  }
  __security_check_cookie(local_8 ^ (uint)auStack_18);
  return;
}



/* ---- XLock_Constructor_or_Destructor @ 100077b0 size=283 ---- */

void __fastcall XLock::XLock_Constructor_or_Destructor(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uStack00000000;
  undefined1 auStackY_b8 [128];
  undefined4 *puStack_24;
  XLock_vftable *local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016d58;
  local_c = ExceptionList;
  local_10 = DAT_10022024 ^ (uint)&puStack_24;
  ExceptionList = &local_c;
  if (param_1 == (undefined4 *)0x0) goto LAB_100078ad;
  local_20 = &_vftable_;
  local_1c = &DAT_10023e44;
  local_18 = 0;
  if (&uStack00000000 != (undefined1 *)0x1c) {
    local_18 = (*(code *)*DAT_10023e44)(0xffffffff,DAT_10022024 ^ (uint)(auStackY_b8 + 0x88));
  }
  iVar1 = local_18;
  local_4 = 0;
  (**(code **)*param_1)(0);
  if (DAT_10023e30 == 0xffffffff) {
LAB_1000786e:
    puStack_24 = param_1;
    FUN_10002280();
  }
  else {
    if (DAT_10023e38 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = DAT_10023e3c - DAT_10023e38 >> 2;
    }
    if (uVar2 < DAT_10023e30) goto LAB_1000786e;
    _free(param_1);
  }
  local_4 = 0xffffffff;
  if ((&uStack00000000 != (undefined1 *)0x1c) && (iVar1 != 0)) {
    (*(code *)DAT_10023e44[1])();
  }
LAB_100078ad:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&puStack_24);
  return;
}



/* ---- FUN_100078d0 @ 100078d0 size=54 ---- */

int __fastcall FUN_100078d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (unaff_ESI != param_1) {
    iVar1 = param_1;
    do {
      iVar2 = iVar1 + -8;
      *(undefined4 *)((param_2 - param_1) + iVar2) = *(undefined4 *)(iVar1 + -8);
      *(undefined4 *)((param_2 - param_1) + 4 + iVar2) = *(undefined4 *)(iVar1 + -4);
      iVar1 = iVar2;
    } while (iVar2 != unaff_ESI);
  }
  return param_2 + (param_1 - unaff_ESI >> 3) * -8;
}



/* ---- vfunction1 @ 10007910 size=53 ---- */

/* XObjectHolder<XEventA> member function inherited by XEventObjHolder */

undefined4 * __thiscall
XObjectHolder<XEventA>::vfunction1(XObjectHolder<XEventA> *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(this->XObjectHolder<XEventA>_data).offset_0x4;
  this->vftablePtr = &vftable;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    (this->XObjectHolder<XEventA>_data).offset_0x4 = 0;
  }
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- vfunction1 @ 10007950 size=30 ---- */

undefined4 * __thiscall
XReusableObjectPool<XEventA,XEventObjHolder>::vfunction1
          (XReusableObjectPool<XEventA,XEventObjHolder> *this,byte param_1)

{
  FUN_100072a0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- XObjectHolder<XEventA>_Constructor_or_Destructor @ 10007970 size=29 ---- */

void XObjectHolder<XEventA>::XObjectHolder<XEventA>_Constructor_or_Destructor(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &vftable;
  if ((undefined4 *)unaff_ESI[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)unaff_ESI[2])(1);
    unaff_ESI[2] = 0;
  }
  return;
}



/* ---- vfunction1 @ 10007990 size=30 ---- */

undefined4 * __thiscall
XObjectPool<XSignals::ReqItem>::vfunction1(XObjectPool<XSignals::ReqItem> *this,byte param_1)

{
  FUN_100075e0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_100079b0 @ 100079b0 size=29 ---- */

void FUN_100079b0(void)

{
  int in_EAX;
  XObjectHolder<XEventA> *in_ECX;
  
  XObjectHolder<XEventA>::~XObjectHolder<XEventA>(in_ECX);
  _free(*(void **)(in_EAX + 4));
  *(undefined4 *)(in_EAX + 4) = 0;
  return;
}



/* ---- FUN_100079d0 @ 100079d0 size=26 ---- */

void FUN_100079d0(void)

{
  int iVar1;
  
  iVar1 = FUN_100086ab(0x20);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}



/* ---- ~XObjectHolder<XEventA> @ 100079f0 size=79 ---- */

void __thiscall XObjectHolder<XEventA>::~XObjectHolder<XEventA>(XObjectHolder<XEventA> *this)

{
  int *piVar1;
  int unaff_EBX;
  int *_Memory;
  
  piVar1 = *(int **)(unaff_EBX + 4);
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(unaff_EBX + 4) + 4) = *(int *)(unaff_EBX + 4);
  *(undefined4 *)(unaff_EBX + 8) = 0;
  if (_Memory != *(int **)(unaff_EBX + 4)) {
    do {
      piVar1 = (int *)*_Memory;
      _Memory[2] = (int)&vftable;
      if ((undefined4 *)_Memory[4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)_Memory[4])(1);
        _Memory[4] = 0;
      }
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBX + 4));
  }
  return;
}



/* ---- FUN_10007a50 @ 10007a50 size=73 ---- */

void FUN_10007a50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  
  puVar2 = (undefined4 *)FUN_100086ab(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  if (puVar2 + 1 != (undefined4 *)0x0) {
    puVar2[1] = param_2;
  }
  puVar1 = puVar2 + 2;
  if (puVar1 != (undefined4 *)0x0) {
                    /* inlined constructor: XObjectHolder<XEventA>::XObjectHolder<XEventA>
                       inlined constructor: XEventObjHolder::XEventObjHolder */
    *puVar1 = &XObjectHolder<XEventA>::vftable;
    puVar2[4] = *(undefined4 *)(unaff_ESI + 8);
    puVar2[6] = *(undefined4 *)(unaff_ESI + 0x10);
    puVar2[7] = *(undefined4 *)(unaff_ESI + 0x14);
    *puVar1 = &XEventObjHolder::vftable;
  }
  return;
}



/* ---- FUN_10007aa0 @ 10007aa0 size=154 ---- */

void __fastcall FUN_10007aa0(int param_1)

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
  puStack_8 = &LAB_10016cc8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0xaaaaaaa) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_10001a00(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
                    /* inlined constructor: std::length_error::length_error */
    std::logic_error::logic_error(&local_34,local_50);
    local_34.vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_1001b534);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* ---- XLock_Constructor_or_Destructor @ 10007b40 size=178 ---- */

void XLock::XLock_Constructor_or_Destructor(void)

{
  int *piVar1;
  int iVar2;
  XObjectHolder<XEventA> *in_ECX;
  XObjectHolder<XEventA> *extraout_ECX;
  int unaff_ESI;
  undefined1 uStack00000000;
  undefined1 auStackY_b4 [128];
  XLock_vftable *local_20;
  int *local_1c;
  int local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016928;
  local_c = ExceptionList;
  local_10 = DAT_10022024 ^ (uint)&local_20;
  ExceptionList = &local_c;
  piVar1 = (int *)(unaff_ESI + 0x1c);
  local_20 = &_vftable_;
  local_18 = 0;
  local_1c = piVar1;
  if ((&uStack00000000 != (undefined1 *)0x1c) && (piVar1 != (int *)0x0)) {
    local_18 = (**(code **)*piVar1)(0xffffffff,DAT_10022024 ^ (uint)(auStackY_b4 + 0x88));
    in_ECX = extraout_ECX;
  }
  iVar2 = local_18;
  local_4 = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  XObjectHolder<XEventA>::~XObjectHolder<XEventA>(in_ECX);
  local_4 = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x1c) && (piVar1 != (int *)0x0)) && (iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_20);
  return;
}



/* ---- XEventObjHolder @ 10007c00 size=178 ---- */

XEventObjHolder * __thiscall XEventObjHolder::XEventObjHolder(XEventObjHolder *this)

{
  XEventObjHolder *pXVar1;
  bool bVar2;
  undefined3 extraout_var;
  HANDLE pvVar3;
  XObjectHolder<XEventA> local_28;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100168f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  local_28.XObjectHolder<XEventA>_data.offset_0x4 = (XEventObjHolder *)0x0;
  local_28.vftablePtr = (XObjectHolder<XEventA>_vftable *)&vftable;
  local_4 = 0;
  bVar2 = XObjectHolder<XEventA>::vfunction2(&local_28);
  pXVar1 = local_28.XObjectHolder<XEventA>_data.offset_0x4;
  if (CONCAT31(extraout_var,bVar2) != 0) {
    (*(local_28.XObjectHolder<XEventA>_data.offset_0x4)->vftablePtr->vfunction2)
              (local_28.XObjectHolder<XEventA>_data.offset_0x4);
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    **(undefined4 **)&pXVar1->XObjectHolder<XEventA>_data = pvVar3;
    if (**(int **)&pXVar1->XObjectHolder<XEventA>_data == 0) {
      (*(local_28.vftablePtr)->vfunction3)(&local_28);
    }
  }
  pXVar1 = local_28.XObjectHolder<XEventA>_data.offset_0x4;
  if (local_28.XObjectHolder<XEventA>_data.offset_0x4 != (XEventObjHolder *)0x0) {
    ResetEvent((HANDLE)**(undefined4 **)
                         &(local_28.XObjectHolder<XEventA>_data.offset_0x4)->
                          XObjectHolder<XEventA>_data);
  }
  ExceptionList = local_c;
  return pXVar1;
}



/* ---- FUN_10007cc0 @ 10007cc0 size=128 ---- */

undefined4 FUN_10007cc0(void)

{
  int iVar1;
  undefined4 uVar2;
  XObjectHolder<XEventA> *extraout_ECX;
  XObjectHolder<XEventA> *extraout_ECX_00;
  XObjectHolder<XEventA> *this;
  undefined1 auStack_10 [16];
  
  if (DAT_10023e64 == 0) {
    return 0;
  }
  iVar1 = *(int *)(DAT_10023e60 + 4);
  if (iVar1 == DAT_10023e60) {
    FUN_10008e31();
    if (iVar1 == DAT_10023e60) {
      FUN_10008e31();
    }
  }
  uVar2 = (**(code **)(*(int *)(iVar1 + 8) + 0xc))();
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))(0);
  this = extraout_ECX;
  if (*(int *)(DAT_10023e60 + 4) == DAT_10023e60) {
    FUN_10008e31();
    this = extraout_ECX_00;
  }
  XObjectHolder<XEventA>::~XObjectHolder<XEventA>(this,(int)auStack_10,(int *)&DAT_10023e5c);
  return uVar2;
}



/* ---- FUN_10007d40 @ 10007d40 size=65 ---- */

void __cdecl FUN_10007d40(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int *unaff_EBX;
  
  while( true ) {
    if ((param_1 == 0) || (param_1 != param_3)) {
      FUN_10008e31();
    }
    if (param_2 == param_4) break;
    *unaff_EBX = *unaff_EBX + 1;
    if (param_1 == 0) {
      FUN_10008e31();
    }
    if (param_2 == *(undefined4 **)(param_1 + 4)) {
      FUN_10008e31();
    }
    param_2 = (undefined4 *)*param_2;
  }
  return;
}



/* ---- FUN_10007d90 @ 10007d90 size=31 ---- */

void __fastcall FUN_10007d90(int param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_2;
      in_EAX[1] = param_2[1];
    }
    in_EAX = in_EAX + 2;
  }
  return;
}



/* ---- ~XObjectHolder<XEventA> @ 10007db0 size=119 ---- */

void __thiscall
XObjectHolder<XEventA>::~XObjectHolder<XEventA>
          (XObjectHolder<XEventA> *this,int param_1,int *param_2)

{
  int iVar1;
  int unaff_EBX;
  int *in_stack_0000000c;
  
  if (param_2 == (int *)0x0) {
    FUN_10008e31();
  }
  if (in_stack_0000000c == (int *)param_2[1]) {
    FUN_10008e31();
  }
  iVar1 = *in_stack_0000000c;
  if (in_stack_0000000c != *(int **)(unaff_EBX + 4)) {
    *(int *)in_stack_0000000c[1] = iVar1;
    *(int *)(*in_stack_0000000c + 4) = in_stack_0000000c[1];
    in_stack_0000000c[2] = (int)&vftable;
    if ((undefined4 *)in_stack_0000000c[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_stack_0000000c[4])(1);
      in_stack_0000000c[4] = 0;
    }
    _free(in_stack_0000000c);
    *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -1;
  }
  *(int **)param_1 = param_2;
  *(int *)(param_1 + 4) = iVar1;
  return;
}



/* ---- FUN_10007e30 @ 10007e30 size=31 ---- */

void __fastcall FUN_10007e30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
    }
    in_EAX = in_EAX + 2;
  }
  return;
}



/* ---- XTimerQueue @ 10007e50 size=158 ---- */

void __thiscall XTimerQueue::XTimerQueue(XTimerQueue *this)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  
  pHVar1 = DAT_10023e04;
  *unaff_ESI = &vftable;
  pFVar2 = GetProcAddress(pHVar1,"CreateTimerQueue");
  pHVar1 = DAT_10023e04;
  unaff_ESI[1] = pFVar2;
  pFVar2 = GetProcAddress(pHVar1,"CreateTimerQueueTimer");
  pHVar1 = DAT_10023e04;
  unaff_ESI[2] = pFVar2;
  pFVar2 = GetProcAddress(pHVar1,"ChangeTimerQueueTimer");
  unaff_ESI[3] = pFVar2;
  pFVar2 = GetProcAddress(DAT_10023e04,"DeleteTimerQueueTimer");
  pHVar1 = DAT_10023e04;
  unaff_ESI[4] = pFVar2;
  pFVar2 = GetProcAddress(pHVar1,"DeleteTimerQueueEx");
  pHVar1 = DAT_10023e04;
  unaff_ESI[5] = pFVar2;
  pFVar2 = GetProcAddress(pHVar1,"SetTimerQueueTimer");
  unaff_ESI[6] = pFVar2;
  pFVar2 = GetProcAddress(DAT_10023e04,"CancelTimerQueueTimer");
  pHVar1 = DAT_10023e04;
  unaff_ESI[7] = pFVar2;
  pFVar2 = GetProcAddress(pHVar1,"DeleteTimerQueue");
  unaff_ESI[8] = pFVar2;
  uVar3 = (*(code *)unaff_ESI[1])();
  unaff_ESI[9] = uVar3;
  return;
}



/* ---- vfunction1 @ 10007ef0 size=75 ---- */

undefined4 * __thiscall XTimerQueue::vfunction1(XTimerQueue *this,byte param_1)

{
  int iVar1;
  
  iVar1 = (this->XTimerQueue_data).offset_0x20;
  this->vftablePtr = &vftable;
  if (iVar1 != 0) {
    (*(this->XTimerQueue_data).offset_0x1c)(iVar1);
    (this->XTimerQueue_data).offset_0x20 = 0;
  }
  (this->XTimerQueue_data).offset_0x0 = (FARPROC)0x0;
  (this->XTimerQueue_data).offset_0x4 = (FARPROC)0x0;
  (this->XTimerQueue_data).offset_0x8 = (FARPROC)0x0;
  (this->XTimerQueue_data).offset_0xc = (FARPROC)0x0;
  (this->XTimerQueue_data).offset_0x10 = (FARPROC)0x0;
  (this->XTimerQueue_data).offset_0x14 = (FARPROC)0x0;
  (this->XTimerQueue_data).offset_0x18 = (FARPROC)0x0;
  (this->XTimerQueue_data).offset_0x1c = (FARPROC)0x0;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- XTimerQueueTimer @ 10007f40 size=107 ---- */

XTimerQueueTimer * __thiscall XTimerQueueTimer::XTimerQueueTimer(XTimerQueueTimer *this)

{
  XTimerQueueTimer *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  in_stack_00000004->vftablePtr = &vftable;
  (in_stack_00000004->XTimerQueueTimer_data).offset_0x0 = 0;
  (in_stack_00000004->XTimerQueueTimer_data).offset_0x4 = 0;
  (in_stack_00000004->XTimerQueueTimer_data).offset_0x8 = 1;
  (in_stack_00000004->XTimerQueueTimer_data).offset_0xc = 0;
  XCriticalSection::XCriticalSection
            ((XCriticalSection *)&(in_stack_00000004->XTimerQueueTimer_data).offset_0x10,4000);
  (in_stack_00000004->XTimerQueueTimer_data).offset_0x18 = 0;
  (in_stack_00000004->XTimerQueueTimer_data).offset_0x1c = 0;
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- ~XTimerQueueTimer @ 10007fb0 size=73 ---- */

void __thiscall XTimerQueueTimer::~XTimerQueueTimer(XTimerQueueTimer *this)

{
  IXTimer *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100167e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 2;
  (*(code *)PTR_XLock_1001a0ac)();
  IXTimer::~IXTimer(this_00);
  return;
}



/* ---- Catch_All@10007ff9 @ 10007ff9 size=6 ---- */

undefined * Catch_All_10007ff9(void)

{
  return &DAT_10007fff;
}



/* ---- ~IXTimer @ 10008002 size=77 ---- */

void __thiscall IXTimer::~IXTimer(IXTimer *this)

{
  undefined4 *_Memory;
  int unaff_EBP;
  undefined4 *unaff_EDI;
  
  _Memory = (undefined4 *)unaff_EDI[6];
                    /* inlined constructor or destructor (approx location) for XCriticalSection */
  unaff_EDI[5] = &XCriticalSection::_vftable_;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    unaff_EDI[6] = 0;
  }
                    /* inlined constructor or destructor (approx location) for IXTimer */
  *unaff_EDI = &vftable;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- vfunction2 @ 10008050 size=285 ---- */

void __thiscall XTimerQueueTimer::vfunction2(XTimerQueueTimer *this)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uStack00000000;
  XLock local_2c;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016d28;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_2c;
  ExceptionList = &local_14;
  pppuVar1 = &(this->XTimerQueueTimer_data).offset_0x10;
  local_2c.vftablePtr = &XLock::_vftable_;
  local_2c.XLock_data.offset_0x4 = 0;
  local_2c.XLock_data.offset_0x0 = pppuVar1;
  if ((&uStack00000000 != (undefined1 *)0x28) && (pppuVar1 != (undefined ***)0x0)) {
    local_2c.XLock_data.offset_0x4 =
         (*(code *)**pppuVar1)(0xffffffff,DAT_10022024 ^ (int)register0x00000010 - 0x38U);
  }
  local_c = 0;
  if ((((this->XTimerQueueTimer_data).offset_0x0 == 0) &&
      ((this->XTimerQueueTimer_data).offset_0x4 != 0)) &&
     ((this->XTimerQueueTimer_data).offset_0xc != 1)) {
    if (DAT_10023e98 == 0) {
      std::bad_alloc::bad_alloc((bad_alloc *)0x0);
    }
    uVar2 = (this->XTimerQueueTimer_data).offset_0x4;
    iVar3 = (**(code **)(DAT_10023e98 + 8))
                      (&this->XTimerQueueTimer_data,*(undefined4 *)(DAT_10023e98 + 0x24),
                       &LAB_100084f0,this,uVar2,uVar2,0);
    local_c = 0xffffffff;
    if (iVar3 == 0) {
      XLock::~XLock(&local_2c);
    }
    else {
      (this->XTimerQueueTimer_data).offset_0xc = 1;
      XLock::~XLock(&local_2c);
    }
  }
  else {
    local_c = 0xffffffff;
    if (((&uStack00000000 != (undefined1 *)0x28) && (pppuVar1 != (undefined ***)0x0)) &&
       (local_2c.XLock_data.offset_0x4 != 0)) {
      (*(code *)(*pppuVar1)[1])();
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_2c);
  return;
}



/* ---- XLock @ 10008170 size=229 ---- */

void __thiscall XLock::XLock(XLock *this)

{
  XLock_data *pXVar1;
  int iVar2;
  undefined1 uStack00000000;
  undefined4 local_2c;
  XLock_data *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016d28;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_2c;
  ExceptionList = &local_14;
  pXVar1 = &this[1].XLock_data;
  local_2c = &_vftable_;
  local_24 = 0;
  local_28 = pXVar1;
  if ((&uStack00000000 != (undefined1 *)0x28) && (pXVar1 != (XLock_data *)0x0)) {
    local_24 = (*(code *)*pXVar1->offset_0x0)
                         (0xffffffff,DAT_10022024 ^ (int)register0x00000010 - 0x38U);
  }
  iVar2 = local_24;
  local_c = 0;
  this[1].vftablePtr = (XLock_vftable *)0x0;
  if ((this->XLock_data).offset_0x0 != (undefined4 *)0x0) {
    if (DAT_10023e98 == 0) {
      std::bad_alloc::bad_alloc((bad_alloc *)0x0);
    }
    (**(code **)(DAT_10023e98 + 0x10))
              (*(undefined4 *)(DAT_10023e98 + 0x24),(this->XLock_data).offset_0x0,0xffffffff);
    (this->XLock_data).offset_0x0 = (undefined4 *)0x0;
  }
  local_c = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x28) && (pXVar1 != (XLock_data *)0x0)) && (iVar2 != 0)) {
    (*(code *)pXVar1->offset_0x0[1])();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_2c);
  return;
}



/* ---- XLock @ 10008260 size=230 ---- */

void __thiscall XLock::XLock(XLock *this,uint param_1)

{
  XLock_data *pXVar1;
  XLock_vftable *pXVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack00000000;
  undefined4 local_2c;
  XLock_data *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016d28;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_2c;
  ExceptionList = &local_14;
  pXVar1 = &this[1].XLock_data;
  local_2c = &_vftable_;
  local_24 = 0;
  local_28 = pXVar1;
  if ((&uStack00000000 != (undefined1 *)0x28) && (pXVar1 != (XLock_data *)0x0)) {
    local_24 = (*(code *)*pXVar1->offset_0x0)
                         (0xffffffff,DAT_10022024 ^ (int)register0x00000010 - 0x38U);
  }
  iVar4 = local_24;
  local_c = 0;
  pXVar2 = this[1].vftablePtr;
  (this->XLock_data).offset_0x4 = param_1;
  if (pXVar2 == (XLock_vftable *)0x1) {
    if (DAT_10023e98 == 0) {
      std::bad_alloc::bad_alloc((bad_alloc *)0x0);
    }
    uVar3 = (this->XLock_data).offset_0x4;
    (**(code **)(DAT_10023e98 + 0xc))
              (*(undefined4 *)(DAT_10023e98 + 0x24),(this->XLock_data).offset_0x0,uVar3,uVar3);
  }
  local_c = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x28) && (pXVar1 != (XLock_data *)0x0)) && (iVar4 != 0)) {
    (*(code *)pXVar1->offset_0x0[1])();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_2c);
  return;
}



/* ---- FUN_10008350 @ 10008350 size=92 ---- */

void __fastcall FUN_10008350(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uStack00000000;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_10022024 ^ (uint)auStack_14;
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x14);
  if ((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)*piVar1)(0xffffffff);
  }
  if (((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) && (iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))();
  }
  __security_check_cookie(local_4 ^ (uint)auStack_14);
  return;
}



/* ---- FUN_100083b0 @ 100083b0 size=108 ---- */

void __thiscall FUN_100083b0(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uStack00000000;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_10022024 ^ (uint)auStack_14;
  if (*(int *)((int)this + 0x10) == 0) {
    iVar2 = 0;
    piVar1 = (int *)((int)this + 0x14);
    if ((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)*piVar1)(0xffffffff);
    }
    if (*(int *)((int)this + 0x10) == 0) {
      *(undefined4 *)((int)this + 0xc) = param_1;
    }
    if (((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) && (iVar2 != 0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_14);
  return;
}



/* ---- FUN_10008420 @ 10008420 size=92 ---- */

void __fastcall FUN_10008420(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uStack00000000;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_10022024 ^ (uint)auStack_14;
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x14);
  if ((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)*piVar1)(0xffffffff);
  }
  if (((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) && (iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))();
  }
  __security_check_cookie(local_4 ^ (uint)auStack_14);
  return;
}



/* ---- FUN_10008480 @ 10008480 size=105 ---- */

void __thiscall FUN_10008480(void *this,undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uStack00000000;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_10022024 ^ (uint)auStack_14;
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0x14);
  if ((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)*piVar1)(0xffffffff);
  }
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  if (((&uStack00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) && (iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))();
  }
  __security_check_cookie(local_4 ^ (uint)auStack_14);
  return;
}



/* ---- vfunction1 @ 10008510 size=30 ---- */

undefined4 * __thiscall XTimerQueueTimer::vfunction1(XTimerQueueTimer *this,byte param_1)

{
  ~XTimerQueueTimer(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return &this->vftablePtr;
}



/* ---- bad_alloc @ 10008530 size=313 ---- */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  int iVar1;
  int extraout_EAX;
  XTimerQueue *this_00;
  undefined1 uStack00000000;
  undefined1 auStack_40 [4];
  exception eStack_3c;
  int iStack_30;
  XLock_vftable *local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016ae3;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)auStack_40;
  ExceptionList = &local_14;
                    /* inlined constructor: XLock::XLock */
  local_2c = &XLock::_vftable_;
  local_28 = &DAT_10023eb8;
  local_24 = 0;
  if (&uStack00000000 != (undefined1 *)0x28) {
    local_24 = (*(code *)*DAT_10023eb8)(0xffffffff);
  }
  iVar1 = local_24;
  local_c = 0;
  if (DAT_10023e98 == 0) {
    if (DAT_10023e9c != 0) {
      FUN_10005c80();
      return;
    }
    iStack_30 = FUN_100086ab(0x28);
    local_c._0_1_ = 1;
    if (iStack_30 == 0) {
      DAT_10023e98 = 0;
    }
    else {
      XTimerQueue::XTimerQueue(this_00);
      DAT_10023e98 = extraout_EAX;
    }
    local_c = (uint)local_c._1_3_ << 8;
    if (DAT_10023e98 == 0) {
      exception::exception(&eStack_3c,&PTR_s_bad_allocation_10022d7c,1);
      eStack_3c.vftablePtr = (exception_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&eStack_3c,&DAT_1001b4c0);
    }
    _atexit((_func_4879 *)&LAB_10008670);
  }
  local_c = 0xffffffff;
  if ((&uStack00000000 != (undefined1 *)0x28) && (iVar1 != 0)) {
    (*(code *)DAT_10023eb8[1])();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_40);
  return;
}



/* ---- __security_check_cookie @ 10008697 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_10022024) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- _free @ 100086a6 size=5 ---- */

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
    if (DAT_10023ff8 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000b4e9(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10008ea1();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100239bc,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10009900();
      DVar4 = GetLastError();
      DVar4 = FUN_100098c5(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- FUN_100086ab @ 100086ab size=105 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100086ab(size_t param_1)

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
  if ((_DAT_100232ec & 1) == 0) {
    _DAT_100232ec = _DAT_100232ec | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_100232e0);
    _atexit(std::bad_alloc::~bad_alloc);
  }
                    /* inlined constructor: std::bad_alloc::bad_alloc */
  std::exception::exception(&local_10,(exception *)&DAT_100232e0);
  local_10.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_10,&DAT_1001b4c0);
}



/* ---- _memcpy_s @ 10008715 size=123 ---- */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  DWORD *pDVar2;
  
  if (_MaxCount == 0) {
LAB_10008723:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1000872c:
      pDVar2 = FUN_10009900();
      eVar1 = 0x16;
      *pDVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_10008723;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1000872c;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      pDVar2 = FUN_10009900();
      eVar1 = 0x22;
      *pDVar2 = 0x22;
    }
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/* ---- FUN_10008790 @ 10008790 size=185 ---- */

int __cdecl FUN_10008790(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_10009a27(DAT_10024008);
  piVar2 = (int *)FUN_10009a27(DAT_10024004);
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
        DAT_10024008 = FUN_100099b0((int)pvVar5);
      }
      iVar6 = FUN_100099b0(param_1);
      *piVar2 = iVar6;
      DAT_10024004 = FUN_100099b0((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/* ---- __onexit @ 10008878 size=54 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1000a172();
  p_Var1 = (_onexit_t)FUN_10008790((int)_Func);
  FUN_100088ae();
  return p_Var1;
}



/* ---- FUN_100088ae @ 100088ae size=6 ---- */

void FUN_100088ae(void)

{
  FUN_1000a17b();
  return;
}



/* ---- _atexit @ 100088b4 size=18 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- _memmove_s @ 100088c6 size=91 ---- */

/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  DWORD *pDVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_1000891b:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      pDVar1 = FUN_10009900();
      eVar2 = 0x16;
      *pDVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_1000891b;
      }
      pDVar1 = FUN_10009900();
      eVar2 = 0x22;
      *pDVar1 = 0x22;
    }
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar2;
}



/* ---- exception @ 10008921 size=17 ---- */

void __thiscall std::exception::exception(exception *this)

{
  (this->exception_data).offset_0x0 = (char *)0x0;
  (this->exception_data).offset_0x4 = 0;
  this->vftablePtr = &vftable;
  return;
}



/* ---- exception @ 10008932 size=78 ---- */

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



/* ---- exception @ 10008980 size=24 ---- */

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



/* ---- exception @ 10008998 size=88 ---- */

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



/* ---- ~exception @ 100089f0 size=22 ---- */

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



/* ---- vfunction2 @ 10008a06 size=13 ---- */

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



/* ---- vfunction1 @ 10008a13 size=28 ---- */

exception * __thiscall std::exception::vfunction1(exception *this,byte param_1)

{
  ~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- ~type_info @ 10008a2f size=14 ---- */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  this->vftablePtr = &vftable;
  _Type_info_dtor((type_info *)this);
  return;
}



/* ---- type_info::`scalar_deleting_destructor' @ 10008a3d size=28 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::type_info___scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- operator== @ 10008a59 size=27 ---- */

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)((int)&this[1].vftablePtr + 1));
  return (bool)('\x01' - (iVar1 != 0));
}



/* ---- __purecall @ 10008a74 size=42 ---- */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __thiscall __purecall(void *this)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10009a27(DAT_100239b4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_1000ac79(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* ---- __ArrayUnwind @ 10008a9e size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 10008afc size=75 ---- */

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
  FUN_10008b47();
  return;
}



/* ---- FUN_10008b47 @ 10008b47 size=24 ---- */

void FUN_10008b47(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- __endthreadex @ 10008b5f size=56 ---- */

/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2005 Release */

void __cdecl __endthreadex(uint _Retval)

{
  BOOL BVar1;
  _ptiddata _Ptd;
  
  if (DAT_1002401c != (code *)0x0) {
    BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1002401c);
    if (BVar1 != 0) {
      (*DAT_1002401c)();
    }
  }
  _Ptd = (_ptiddata)FUN_10009c00();
  if (_Ptd != (_ptiddata)0x0) {
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}



/* ---- __callthreadstartex @ 10008b98 size=53 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __callthreadstartex
   
   Library: Visual Studio 2005 Release */

void __callthreadstartex(void)

{
  _ptiddata p_Var1;
  uint _Retval;
  undefined4 *local_18;
  
  p_Var1 = __getptd();
  _Retval = (*p_Var1->_initaddr)(p_Var1->_initarg);
  __endthreadex(_Retval);
  FUN_1000b02c(*(int *)*local_18,(DWORD)local_18);
  return;
}



/* ---- __beginthreadex @ 10008c59 size=174 ---- */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2005 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  DWORD *pDVar2;
  void *lpParameter;
  _ptiddata p_Var3;
  _StartAddress **lpThreadId;
  HANDLE pvVar4;
  DWORD local_8;
  
  p_Var1 = _StartAddress;
  local_8 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    pDVar2 = FUN_10009900();
    *pDVar2 = 0x16;
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    FUN_10009ab9();
    lpParameter = __calloc_crt(1,0x214);
    if (lpParameter != (void *)0x0) {
      p_Var3 = __getptd();
      FUN_10009b41((int)lpParameter,(int)p_Var3->ptlocinfo);
      *(undefined4 *)((int)lpParameter + 4) = 0xffffffff;
      *(void **)((int)lpParameter + 0x58) = _ArgList;
      *(_StartAddress **)((int)lpParameter + 0x54) = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar4 = CreateThread(_Security,_StackSize,(LPTHREAD_START_ROUTINE)&LAB_10008bd9,lpParameter,
                            _InitFlag,(LPDWORD)lpThreadId);
      if (pvVar4 != (HANDLE)0x0) {
        return (uintptr_t)pvVar4;
      }
      local_8 = GetLastError();
    }
    _free(lpParameter);
    if (local_8 != 0) {
      FUN_10009926(local_8);
    }
  }
  return 0;
}



/* ---- FUN_10008d07 @ 10008d07 size=10 ---- */

void __cdecl FUN_10008d07(undefined4 param_1)

{
  DAT_100232f0 = param_1;
  return;
}



/* ---- __invoke_watson @ 10008d11 size=252 ---- */

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
  
  iVar1 = DAT_10022024;
  local_2d4[0] = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1000b1a5();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/* ---- FUN_10008e0d @ 10008e0d size=36 ---- */

void __cdecl
FUN_10008e0d(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_10009a27(DAT_100232f0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_1000b1a5();
                    /* WARNING: Subroutine does not return */
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x10008e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- FUN_10008e31 @ 10008e31 size=16 ---- */

void FUN_10008e31(void)

{
  FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



/* ---- _free @ 10008e41 size=5 ---- */

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
    if (DAT_10023ff8 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000b4e9(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10008ea1();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100239bc,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10009900();
      DVar4 = GetLastError();
      DVar4 = FUN_100098c5(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- thunk_FUN_100086ab @ 10008e46 size=5 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl thunk_FUN_100086ab(size_t param_1)

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
  if ((_DAT_100232ec & 1) == 0) {
    _DAT_100232ec = _DAT_100232ec | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_100232e0);
    _atexit(std::bad_alloc::~bad_alloc);
  }
  std::exception::exception(&eStack_10,(exception *)&DAT_100232e0);
  eStack_10.vftablePtr = (exception_vftable *)&std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&eStack_10,&DAT_1001b4c0);
}



/* ---- _free @ 10008e4b size=133 ---- */

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
    if (DAT_10023ff8 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000b4e9(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10008ea1();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100239bc,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10009900();
      DVar4 = GetLastError();
      DVar4 = FUN_100098c5(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- FUN_10008ea1 @ 10008ea1 size=9 ---- */

void FUN_10008ea1(void)

{
  FUN_1000b374(4);
  return;
}



/* ---- _V6_HeapAlloc @ 10008ed9 size=70 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  int *local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10023fe8) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_10008f1f();
  }
  return local_20;
}



/* ---- FUN_10008f1f @ 10008f1f size=9 ---- */

void FUN_10008f1f(void)

{
  FUN_1000b374(4);
  return;
}



/* ---- _malloc @ 10008f28 size=195 ---- */

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
    pDVar4 = FUN_10009900();
    *pDVar4 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_100239bc == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_1000ac79(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_10023ff8 == 1) {
      if (_Size == 0) {
        sVar1 = 1;
      }
      else {
        sVar1 = _Size;
      }
LAB_10008f99:
      piVar2 = HeapAlloc(DAT_100239bc,0,sVar1);
    }
    else if ((DAT_10023ff8 != 3) || (piVar2 = _V6_HeapAlloc((uint *)_Size), piVar2 == (int *)0x0)) {
      sVar1 = _Size;
      if (_Size == 0) {
        sVar1 = 1;
      }
      sVar1 = sVar1 + 0xf & 0xfffffff0;
      goto LAB_10008f99;
    }
    if (piVar2 != (int *)0x0) {
      return piVar2;
    }
    if (DAT_10023b14 == 0) {
      pDVar4 = FUN_10009900();
      *pDVar4 = 0xc;
      goto LAB_10008fc7;
    }
    iVar3 = __callnewh(_Size);
    if (iVar3 == 0) {
LAB_10008fc7:
      pDVar4 = FUN_10009900();
      *pDVar4 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/* ---- FUN_10008feb @ 10008feb size=26 ---- */

int __cdecl FUN_10008feb(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ---- __time64 @ 10009005 size=60 ---- */

/* Library Function - Single Match
    __time64
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__time64_t __cdecl __time64(__time64_t *_Time)

{
  __time64_t _Var1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  _Var1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (_Time != (__time64_t *)0x0) {
    *_Time = _Var1;
  }
  return _Var1;
}



/* ---- __CRT_INIT@12 @ 10009041 size=473 ---- */

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
        _DAT_10023650 = DVar2 * 0x100 + DVar3;
        DAT_10023648 = DVar1;
        _DAT_1002364c = uVar8;
        DAT_10023654 = DVar2;
        _DAT_10023658 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_10024018 = GetCommandLineA();
            DAT_100232f8 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_100232f4 = DAT_100232f4 + 1;
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
    if (0 < DAT_100232f4) {
      DAT_100232f4 = DAT_100232f4 + -1;
      if (DAT_10023684 == 0) {
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
    FUN_10009ab9();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_100221a0;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_10009a27(DAT_10023638);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_10009b41((int)_Memory,0);
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



/* ---- ___DllMainCRTStartup @ 1000921a size=226 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_100232f4 == 0)) {
LAB_10009308:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_10018270 != (undefined *)0x0) {
        local_20 = (*(code *)PTR_10018270)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_10009308;
    }
    local_20 = FUN_10015f10(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10015f10(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (PTR_10018270 != (undefined *)0x0) {
        (*(code *)PTR_10018270)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (PTR_10018270 != (undefined *)0x0)) {
        local_20 = (*(code *)PTR_10018270)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/* ---- entry @ 10009310 size=33 ---- */

void entry(HMODULE param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- ___report_gsfailure @ 10009331 size=260 ---- */

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
  
  _DAT_10023420 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10023424 = &uStack00000004;
  _DAT_10023360 = 0x10001;
  _DAT_10023308 = 0xc0000409;
  _DAT_1002330c = 1;
  local_32c = DAT_10022024;
  local_328 = DAT_10022028;
  _DAT_10023314 = _local_res0;
  _DAT_100233ec = in_GS;
  _DAT_100233f0 = in_FS;
  _DAT_100233f4 = in_ES;
  _DAT_100233f8 = in_DS;
  _DAT_100233fc = unaff_EDI;
  _DAT_10023400 = unaff_ESI;
  _DAT_10023404 = unaff_EBX;
  _DAT_10023408 = in_EDX;
  _DAT_1002340c = in_ECX;
  _DAT_10023410 = in_EAX;
  _DAT_10023414 = unaff_EBP;
  DAT_10023418 = _local_res0;
  _DAT_1002341c = in_CS;
  _DAT_10023428 = in_SS;
  DAT_10023358 = IsDebuggerPresent();
  FUN_1000b1a5();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_10018274);
  if (DAT_10023358 == 0) {
    FUN_1000b1a5();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- FUN_10009435 @ 10009435 size=10 ---- */

void __cdecl FUN_10009435(undefined4 param_1)

{
  DAT_1002362c = param_1;
  return;
}



/* ---- _set_new_handler @ 1000943f size=49 ---- */

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2005 Release */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  __lock(4);
  p_Var1 = (_func_int_uint *)FUN_10009a27(DAT_1002362c);
  DAT_1002362c = FUN_100099b0((int)param_1);
  FUN_1000b374(4);
  return p_Var1;
}



/* ---- __callnewh @ 10009470 size=34 ---- */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_10009a27(DAT_1002362c);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ---- __CxxThrowException@8 @ 10009492 size=74 ---- */

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
  
  pDVar2 = &DAT_1001827c;
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



/* ---- _memset @ 100094e0 size=122 ---- */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10023ec4 != 0)) {
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



/* ---- _memcpy @ 10009560 size=711 ---- */

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
          goto switchD_10009743_caseD_2;
        case 3:
          goto switchD_10009743_caseD_3;
        }
        goto switchD_10009743_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10009743_caseD_0;
      case 1:
        goto switchD_10009743_caseD_1;
      case 2:
        goto switchD_10009743_caseD_2;
      case 3:
        goto switchD_10009743_caseD_3;
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
              goto switchD_10009743_caseD_2;
            case 3:
              goto switchD_10009743_caseD_3;
            }
            goto switchD_10009743_caseD_1;
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
              goto switchD_10009743_caseD_2;
            case 3:
              goto switchD_10009743_caseD_3;
            }
            goto switchD_10009743_caseD_1;
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
              goto switchD_10009743_caseD_2;
            case 3:
              goto switchD_10009743_caseD_3;
            }
            goto switchD_10009743_caseD_1;
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
switchD_10009743_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_10009743_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_10009743_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_10009743_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10023ec4 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_100095bc_caseD_2;
      case 3:
        goto switchD_100095bc_caseD_3;
      }
      goto switchD_100095bc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100095bc_caseD_0;
    case 1:
      goto switchD_100095bc_caseD_1;
    case 2:
      goto switchD_100095bc_caseD_2;
    case 3:
      goto switchD_100095bc_caseD_3;
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
            goto switchD_100095bc_caseD_2;
          case 3:
            goto switchD_100095bc_caseD_3;
          }
          goto switchD_100095bc_caseD_1;
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
            goto switchD_100095bc_caseD_2;
          case 3:
            goto switchD_100095bc_caseD_3;
          }
          goto switchD_100095bc_caseD_1;
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
            goto switchD_100095bc_caseD_2;
          case 3:
            goto switchD_100095bc_caseD_3;
          }
          goto switchD_100095bc_caseD_1;
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
switchD_100095bc_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100095bc_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100095bc_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100095bc_caseD_0:
  return _Dst;
}



/* ---- FUN_100098c5 @ 100098c5 size=59 ---- */

int __cdecl FUN_100098c5(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10022030)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10022034);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/* ---- FUN_10009900 @ 10009900 size=19 ---- */

DWORD * FUN_10009900(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10009c00();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10022198;
  }
  return pDVar1 + 2;
}



/* ---- FUN_10009913 @ 10009913 size=19 ---- */

DWORD * FUN_10009913(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10009c00();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1002219c;
  }
  return pDVar1 + 3;
}



/* ---- FUN_10009926 @ 10009926 size=30 ---- */

void __cdecl FUN_10009926(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_10009913();
  *pDVar1 = param_1;
  DVar2 = FUN_100098c5(param_1);
  pDVar1 = FUN_10009900();
  *pDVar1 = DVar2;
  return;
}



/* ---- FUN_10009944 @ 10009944 size=108 ---- */

undefined4 FUN_10009944(void)

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



/* ---- FUN_100099b0 @ 100099b0 size=110 ---- */

int __cdecl FUN_100099b0(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_100221a4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_100221a0 != -1)) {
    iVar3 = DAT_100221a0;
    pcVar2 = TlsGetValue(DAT_100221a4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_10009a0a;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10009944();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_10009a0a:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- __encoded_null @ 10009a1e size=9 ---- */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_100099b0(0);
  return;
}



/* ---- FUN_10009a27 @ 10009a27 size=110 ---- */

int __cdecl FUN_10009a27(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_100221a4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_100221a0 != -1)) {
    iVar3 = DAT_100221a0;
    pcVar2 = TlsGetValue(DAT_100221a4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_10009a81;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10009944();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_10009a81:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- FUN_10009a9e @ 10009a9e size=21 ---- */

void FUN_10009a9e(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = TlsGetValue(DAT_100221a4);
  (*pcVar1)(param_1);
  return;
}



/* ---- FUN_10009ab3 @ 10009ab3 size=6 ---- */

undefined4 FUN_10009ab3(void)

{
  return DAT_100221a0;
}



/* ---- FUN_10009ab9 @ 10009ab9 size=50 ---- */

LPVOID FUN_10009ab9(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_100221a4);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_10009a27(DAT_10023634);
    TlsSetValue(DAT_100221a4,lpTlsValue);
  }
  return lpTlsValue;
}



/* ---- FUN_10009aeb @ 10009aeb size=25 ---- */

void FUN_10009aeb(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10009a27(DAT_10023638);
  (*pcVar1)(param_1,param_2);
  return;
}



/* ---- __mtterm @ 10009b04 size=61 ---- */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_100221a0 != -1) {
    iVar2 = DAT_100221a0;
    pcVar1 = (code *)FUN_10009a27(DAT_1002363c);
    (*pcVar1)(iVar2);
    DAT_100221a0 = -1;
  }
  if (DAT_100221a4 != 0xffffffff) {
    TlsFree(DAT_100221a4);
    DAT_100221a4 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/* ---- FUN_10009b41 @ 10009b41 size=182 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_10009b41(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10022280;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10009944();
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
  *(undefined **)(param_1 + 0x68) = &DAT_10022560;
  InterlockedIncrement((LONG *)&DAT_10022560);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10022550;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_10009bf7();
  return;
}



/* ---- FUN_10009bf7 @ 10009bf7 size=9 ---- */

void FUN_10009bf7(void)

{
  FUN_1000b374(0xc);
  return;
}



/* ---- FUN_10009c00 @ 10009c00 size=119 ---- */

DWORD * FUN_10009c00(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_100221a0;
  pcVar1 = FUN_10009ab9();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_100221a0;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_10009a27(DAT_10023638);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_10009b41((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}



/* ---- __getptd @ 10009c77 size=24 ---- */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_10009c00();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/* ---- __freefls@4 @ 10009c8f size=265 ---- */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10022280) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10022560)) {
        _free(pLVar1);
      }
    }
    FUN_10009d9b();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10022550) && (pLVar1 != (LONG *)&DAT_10022478)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_10009da7();
    _free(param_1);
  }
  return;
}



/* ---- FUN_10009d9b @ 10009d9b size=9 ---- */

void FUN_10009d9b(void)

{
  FUN_1000b374(0xd);
  return;
}



/* ---- FUN_10009da7 @ 10009da7 size=9 ---- */

void FUN_10009da7(void)

{
  FUN_1000b374(0xc);
  return;
}



/* ---- __freeptd @ 10009db0 size=105 ---- */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_100221a0 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_100221a4), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_100221a0;
      pcVar2 = TlsGetValue(DAT_100221a4);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_100221a0;
    pcVar2 = (code *)FUN_10009a27(DAT_10023638);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_100221a4 != 0xffffffff) {
    TlsSetValue(DAT_100221a4,(LPVOID)0x0);
  }
  return;
}



/* ---- __mtinit @ 10009e19 size=388 ---- */

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
  DAT_10023630 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10023634 = GetProcAddress(hModule,"FlsGetValue");
  DAT_10023638 = GetProcAddress(hModule,"FlsSetValue");
  DAT_1002363c = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10023630 == (FARPROC)0x0) || (DAT_10023634 == (FARPROC)0x0)) ||
      (DAT_10023638 == (FARPROC)0x0)) || (DAT_1002363c == (FARPROC)0x0)) {
    DAT_10023634 = TlsGetValue_exref;
    DAT_10023630 = (FARPROC)&LAB_10009a95;
    DAT_10023638 = TlsSetValue_exref;
    DAT_1002363c = TlsFree_exref;
  }
  DAT_100221a4 = TlsAlloc();
  if ((DAT_100221a4 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_100221a4,DAT_10023634), BVar1 != 0))
  {
    __init_pointers();
    DAT_10023630 = (FARPROC)FUN_100099b0((int)DAT_10023630);
    DAT_10023634 = (FARPROC)FUN_100099b0((int)DAT_10023634);
    DAT_10023638 = (FARPROC)FUN_100099b0((int)DAT_10023638);
    DAT_1002363c = (FARPROC)FUN_100099b0((int)DAT_1002363c);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_10009a27((int)DAT_10023630);
      DAT_100221a0 = (*pcVar3)(pcVar6);
      if ((DAT_100221a0 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_100221a0;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_10009a27((int)DAT_10023638);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_10009b41((int)pDVar4,0);
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



/* ---- __malloc_crt @ 10009f9d size=64 ---- */

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
    if (DAT_10023640 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10023640 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __calloc_crt @ 10009fdd size=72 ---- */

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
    if (DAT_10023640 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10023640 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __realloc_crt @ 1000a025 size=75 ---- */

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
    if (DAT_10023640 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10023640 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* ---- __msize @ 1000a070 size=146 ---- */

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
    pDVar1 = FUN_10009900();
    *pDVar1 = 0x16;
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  if (DAT_10023ff8 == 3) {
    this = (void *)0x4;
    __lock(4);
    iVar2 = thunk_FUN_1000b4e9(this,(int)_Memory);
    if (iVar2 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_1000a10a();
    if (iVar2 != 0) {
      return local_20;
    }
  }
  SVar3 = HeapSize(DAT_100239bc,0,_Memory);
  return SVar3;
}



/* ---- FUN_1000a10a @ 1000a10a size=9 ---- */

void FUN_1000a10a(void)

{
  FUN_1000b374(4);
  return;
}



/* ---- __amsg_exit @ 1000a113 size=36 ---- */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_1000ac79(param_1);
  pcVar1 = (code *)FUN_10009a27((int)PTR___exit_100221a8);
  (*pcVar1)(0xff);
  return;
}



/* ---- FUN_1000a137 @ 1000a137 size=38 ---- */

void __cdecl FUN_1000a137(undefined4 param_1)

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



/* ---- ___crtExitProcess @ 1000a15d size=20 ---- */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_1000a137(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ---- FUN_1000a172 @ 1000a172 size=9 ---- */

void FUN_1000a172(void)

{
  __lock(8);
  return;
}



/* ---- FUN_1000a17b @ 1000a17b size=9 ---- */

void FUN_1000a17b(void)

{
  FUN_1000b374(8);
  return;
}



/* ---- FUN_1000a184 @ 1000a184 size=24 ---- */

void __cdecl FUN_1000a184(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/* ---- __initterm_e @ 1000a19c size=32 ---- */

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



/* ---- __get_osplatform @ 1000a1bc size=55 ---- */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 == (int *)0x0) || (DAT_10023648 == 0)) {
    pDVar1 = FUN_10009900();
    *pDVar1 = 0x16;
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10023648;
  return 0;
}



/* ---- __get_winmajor @ 1000a1f3 size=60 ---- */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (DAT_10023648 == 0)) {
    pDVar1 = FUN_10009900();
    *pDVar1 = 0x16;
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10023654;
  return 0;
}



/* ---- __cinit @ 1000a22f size=146 ---- */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((DAT_10024010 != (code *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10024010), BVar1 != 0)) {
    (*DAT_10024010)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_100181e8,(undefined4 *)&DAT_100181fc);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_1000c6f9);
    puVar3 = &DAT_100181a8;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_100181e4);
    if ((DAT_10024014 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10024014), BVar1 != 0)) {
      (*DAT_10024014)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ---- FUN_1000a2c1 @ 1000a2c1 size=211 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1000a394) */

void __cdecl FUN_1000a2c1(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10023688 != 1) {
    DAT_10023684 = 1;
    DAT_10023680 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_10009a27(DAT_10024008);
      piVar3 = (int *)FUN_10009a27(DAT_10024004);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_10009a27(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_1000a184((undefined4 *)&DAT_10018204);
    }
    FUN_1000a184((undefined4 *)&DAT_1001820c);
  }
  FUN_1000a38e();
  if (param_3 == 0) {
    DAT_10023688 = 1;
    FUN_1000b374(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



/* ---- FUN_1000a38e @ 1000a38e size=15 ---- */

void FUN_1000a38e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1000b374(8);
  }
  return;
}



/* ---- __exit @ 1000a3a3 size=17 ---- */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000a2c1(_Code,1,0);
  return;
}



/* ---- __cexit @ 1000a3b4 size=15 ---- */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1000a2c1(0,0,1);
  return;
}



/* ---- __init_pointers @ 1000a3c3 size=76 ---- */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_10009435(uVar1);
  FUN_1000d9c6(uVar1);
  FUN_10008d07(uVar1);
  FUN_1000ae52(uVar1);
  FUN_1000d9bc(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_1000b02b();
  __initp_eh_hooks();
  PTR___exit_100221a8 = (undefined *)FUN_100099b0(0x1000a3a3);
  return;
}



/* ---- __SEH_prolog4 @ 1000a410 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10022024 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 1000a455 size=20 ---- */

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



/* ---- __except_handler4 @ 1000a470 size=406 ---- */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_10022024);
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
          goto LAB_1000a51b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_10019aec != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_10019aec)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_10019aec)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_10022024);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_10022024);
  }
LAB_1000a51b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/* ---- _memmove @ 1000a610 size=711 ---- */

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
          goto switchD_1000a7f3_caseD_2;
        case 3:
          goto switchD_1000a7f3_caseD_3;
        }
        goto switchD_1000a7f3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000a7f3_caseD_0;
      case 1:
        goto switchD_1000a7f3_caseD_1;
      case 2:
        goto switchD_1000a7f3_caseD_2;
      case 3:
        goto switchD_1000a7f3_caseD_3;
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
              goto switchD_1000a7f3_caseD_2;
            case 3:
              goto switchD_1000a7f3_caseD_3;
            }
            goto switchD_1000a7f3_caseD_1;
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
              goto switchD_1000a7f3_caseD_2;
            case 3:
              goto switchD_1000a7f3_caseD_3;
            }
            goto switchD_1000a7f3_caseD_1;
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
              goto switchD_1000a7f3_caseD_2;
            case 3:
              goto switchD_1000a7f3_caseD_3;
            }
            goto switchD_1000a7f3_caseD_1;
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
switchD_1000a7f3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_1000a7f3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_1000a7f3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_1000a7f3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10023ec4 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000a66c_caseD_2;
      case 3:
        goto switchD_1000a66c_caseD_3;
      }
      goto switchD_1000a66c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000a66c_caseD_0;
    case 1:
      goto switchD_1000a66c_caseD_1;
    case 2:
      goto switchD_1000a66c_caseD_2;
    case 3:
      goto switchD_1000a66c_caseD_3;
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
            goto switchD_1000a66c_caseD_2;
          case 3:
            goto switchD_1000a66c_caseD_3;
          }
          goto switchD_1000a66c_caseD_1;
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
            goto switchD_1000a66c_caseD_2;
          case 3:
            goto switchD_1000a66c_caseD_3;
          }
          goto switchD_1000a66c_caseD_1;
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
            goto switchD_1000a66c_caseD_2;
          case 3:
            goto switchD_1000a66c_caseD_3;
          }
          goto switchD_1000a66c_caseD_1;
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
switchD_1000a66c_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000a66c_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000a66c_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000a66c_caseD_0:
  return _Dst;
}



/* ---- _strcpy_s @ 1000a975 size=101 ---- */

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
      pDVar2 = FUN_10009900();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000a994;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_10009900();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000a994:
  FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- _strlen @ 1000a9e0 size=139 ---- */

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
      if ((char)uVar1 == '\0') goto LAB_1000aa43;
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
LAB_1000aa43:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* ---- _Type_info_dtor @ 1000aa6b size=103 ---- */

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
  _Memory = DAT_10023690;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1002368c;
    while (DAT_10023690 != (int *)0x0) {
      if (*DAT_10023690 == *(int *)(param_1 + 4)) {
        piVar1[1] = DAT_10023690[1];
        _free(_Memory);
        break;
      }
      piVar1 = DAT_10023690;
    }
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_1000aad2();
  return;
}



/* ---- FUN_1000aad2 @ 1000aad2 size=9 ---- */

void FUN_1000aad2(void)

{
  FUN_1000b374(0xe);
  return;
}



/* ---- _strcmp @ 1000aae0 size=135 ---- */

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
      if (bVar3 != *_Str2) goto LAB_1000ab24;
      _Str2 = _Str2 + 1;
      if (bVar3 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000aaf0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar3 = (byte)uVar1;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) goto LAB_1000ab24;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) goto LAB_1000ab24;
    if (bVar3 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000aaf0:
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
LAB_1000ab24:
  return (uint)bVar4 * -2 + 1;
}



/* ---- _abort @ 1000ab68 size=242 ---- */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4 [39];
  
  if (((byte)DAT_100221c0 & 1) != 0) {
    FUN_1000ac79(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_100221c0 & 2) != 0) {
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



/* ---- __set_abort_behavior @ 1000ac5b size=30 ---- */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_100221c0;
  DAT_100221c0 = ~_Mask & DAT_100221c0 | _Flags & _Mask;
  return uVar1;
}



/* ---- FUN_1000ac79 @ 1000ac79 size=399 ---- */

void __cdecl FUN_1000ac79(int param_1)

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
    if (param_1 == (&DAT_100221c8)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_10023304 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x100221cc);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10023698,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_100237b5 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_100236b1,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_100236b1,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_100236b1);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_100236b1);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x10023676),
                           (int)&DAT_100239ac - (int)(sVar5 + 0x10023676),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10023698,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10023698,0x314,*(char **)(uVar6 * 8 + 0x100221cc));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1000dbfb(&DAT_10023698,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ---- __FF_MSGBANNER @ 1000ae19 size=57 ---- */

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
    if (DAT_10023304 != 1) {
      return;
    }
  }
  FUN_1000ac79(0xfc);
  FUN_1000ac79(0xff);
  return;
}



/* ---- FUN_1000ae52 @ 1000ae52 size=10 ---- */

void __cdecl FUN_1000ae52(undefined4 param_1)

{
  DAT_100239b4 = param_1;
  return;
}



/* ---- terminate @ 1000ae5c size=44 ---- */

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



/* ---- unexpected @ 1000ae95 size=19 ---- */

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



/* ---- _inconsistency @ 1000aea8 size=48 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10009a27(DAT_100239b8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/* ---- __initp_eh_hooks @ 1000aedf size=17 ---- */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_100239b8 = FUN_100099b0(0x1000ae5c);
  return;
}



/* ---- __ValidateImageBase @ 1000aef0 size=41 ---- */

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



/* ---- __FindPESection @ 1000af20 size=66 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 1000af70 size=164 ---- */

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
  local_c = DAT_10022024 ^ 0x1001b178;
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



/* ---- FUN_1000b02b @ 1000b02b size=1 ---- */

void FUN_1000b02b(void)

{
  return;
}



/* ---- FUN_1000b02c @ 1000b02c size=350 ---- */

undefined4 __cdecl FUN_1000b02c(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_10009c00();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_10022304 * 3);
    if ((piVar1 + DAT_10022304 * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_100222f8 < DAT_100222fc + DAT_100222f8) {
            iVar8 = DAT_100222f8 * 0xc;
            iVar9 = DAT_100222f8;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_100222fc + DAT_100222f8);
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



/* ---- FUN_1000b1a5 @ 1000b1a5 size=8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b1a5(void)

{
  _DAT_10023ffc = 0;
  return;
}



/* ---- ___heap_select @ 1000b1ad size=85 ---- */

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



/* ---- __heap_init @ 1000b208 size=90 ---- */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_100239bc = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_100239bc == (HANDLE)0x0) {
    return 0;
  }
  DAT_10023ff8 = ___heap_select();
  if ((DAT_10023ff8 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_100239bc);
    DAT_100239bc = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/* ---- __heap_term @ 1000b262 size=116 ---- */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10023ff8 == 3) {
    iVar2 = 0;
    if (0 < DAT_10023fe0) {
      puVar1 = (undefined4 *)((int)DAT_10023fe4 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_100239bc,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10023fe0);
    }
    HeapFree(DAT_100239bc,0,DAT_10023fe4);
  }
  HeapDestroy(DAT_100239bc);
  DAT_100239bc = (HANDLE)0x0;
  return;
}



/* ---- __mtinitlocks @ 1000b2d6 size=73 ---- */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_100239c0;
  do {
    if ((&DAT_10022314)[iVar2 * 2] == 1) {
      (&DAT_10022310)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10022310)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10022310)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/* ---- __mtdeletelocks @ 1000b31f size=85 ---- */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10022310;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10022430);
  puVar1 = &DAT_10022310;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10022430);
  return;
}



/* ---- FUN_1000b374 @ 1000b374 size=21 ---- */

void __cdecl FUN_1000b374(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10022310)[param_1 * 2]);
  return;
}



/* ---- __mtinitlocknum @ 1000b389 size=186 ---- */

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
  if (DAT_100239bc == 0) {
    __FF_MSGBANNER();
    FUN_1000ac79(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10022310 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_10009900();
      *pDVar2 = 0xc;
      local_20 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_10009900();
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
      FUN_1000b443();
    }
  }
  else {
    local_20 = 1;
  }
  return local_20;
}



/* ---- FUN_1000b443 @ 1000b443 size=9 ---- */

void FUN_1000b443(void)

{
  FUN_1000b374(10);
  return;
}



/* ---- __lock @ 1000b44c size=49 ---- */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10022310)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10022310)[_File * 2]);
  return;
}



/* ---- ___sbh_heap_init @ 1000b47d size=72 ---- */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_10023fe4 = HeapAlloc(DAT_100239bc,0,0x140);
  if (DAT_10023fe4 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10023b10 = 0;
  DAT_10023fe0 = 0;
  DAT_10023fec = DAT_10023fe4;
  DAT_10023fe8 = param_1;
  DAT_10023ff0 = 0x10;
  return 1;
}



/* ---- thunk_FUN_1000b4e9 @ 1000b4c5 size=18 ---- */

void __thiscall thunk_FUN_1000b4e9(void *this,int param_1)

{
  FUN_1000b4e9((void *)(DAT_10023fe0 * 0x14 + DAT_10023fe4),param_1);
  return;
}



/* ---- FUN_1000b4e9 @ 1000b4e9 size=25 ---- */

void __thiscall FUN_1000b4e9(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/* ---- ___sbh_free_block @ 1000b4f0 size=788 ---- */

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
      if (DAT_10023b10 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10023ff4 * 0x8000 + DAT_10023b10[3]),0x8000,0x4000);
        DAT_10023b10[2] = DAT_10023b10[2] | 0x80000000U >> ((byte)DAT_10023ff4 & 0x1f);
        *(undefined4 *)(DAT_10023b10[4] + 0xc4 + DAT_10023ff4 * 4) = 0;
        *(char *)(DAT_10023b10[4] + 0x43) = *(char *)(DAT_10023b10[4] + 0x43) + -1;
        if (*(char *)(DAT_10023b10[4] + 0x43) == '\0') {
          DAT_10023b10[1] = DAT_10023b10[1] & 0xfffffffe;
        }
        if (DAT_10023b10[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10023b10[3],0,0x8000);
          HeapFree(DAT_100239bc,0,(LPVOID)DAT_10023b10[4]);
          _memmove(DAT_10023b10,DAT_10023b10 + 5,
                   (DAT_10023fe0 * 0x14 - (int)DAT_10023b10) + -0x14 + DAT_10023fe4);
          DAT_10023fe0 = DAT_10023fe0 + -1;
          if (DAT_10023b10 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10023fec = DAT_10023fe4;
        }
      }
      DAT_10023b10 = param_1;
      DAT_10023ff4 = uVar14;
    }
  }
  return;
}



/* ---- ___sbh_alloc_new_region @ 1000b804 size=176 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10023fe0 == DAT_10023ff0) {
    pvVar1 = HeapReAlloc(DAT_100239bc,0,DAT_10023fe4,(DAT_10023ff0 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10023ff0 = DAT_10023ff0 + 0x10;
    DAT_10023fe4 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10023fe0 * 0x14 + (int)DAT_10023fe4);
  pvVar1 = HeapAlloc(DAT_100239bc,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10023fe0 = DAT_10023fe0 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_100239bc,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/* ---- ___sbh_alloc_new_group @ 1000b8b4 size=262 ---- */

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



/* ---- ___sbh_resize_block @ 1000b9ba size=735 ---- */

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



/* ---- ___sbh_alloc_block @ 1000bc99 size=739 ---- */

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
  
  puVar11 = DAT_10023fe4 + DAT_10023fe0 * 5;
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
  for (param_1 = DAT_10023fec;
      (param_1 < puVar11 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  if (param_1 == puVar11) {
    for (param_1 = DAT_10023fe4;
        (param_1 < DAT_10023fec && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
        param_1 = param_1 + 5) {
    }
    if (param_1 == DAT_10023fec) {
      for (; (param_1 < puVar11 && (param_1[2] == 0)); param_1 = param_1 + 5) {
      }
      if (param_1 == puVar11) {
        for (param_1 = DAT_10023fe4; (param_1 < DAT_10023fec && (param_1[2] == 0));
            param_1 = param_1 + 5) {
        }
        if ((param_1 == DAT_10023fec) &&
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
  DAT_10023fec = param_1;
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
    if (iVar12 == 0) goto LAB_1000bf39;
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
LAB_1000bf39:
  piVar14 = (int *)((int)piVar14 + iVar12);
  *piVar14 = uVar8 + 1;
  *(uint *)((int)piVar14 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar4;
  *piVar4 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_10023b10)) && (local_8 == DAT_10023ff4)) {
    DAT_10023b10 = (uint *)0x0;
  }
  *piVar6 = local_8;
  return piVar14 + 1;
}



/* ---- __aulldiv @ 1000bf80 size=104 ---- */

/* Library Function - Single Match
    __aulldiv
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    uVar8 = param_1;
    uVar6 = param_4;
    uVar7 = param_2;
    uVar4 = param_3;
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar7 & 1;
      uVar7 = uVar7 >> 1;
      uVar8 = (uint)(CONCAT14(uVar3 != 0,uVar8) >> 1);
    } while (uVar6 != 0);
    uVar1 = CONCAT44(uVar7,uVar8) / (ulonglong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar4 + iVar5 * param_4;
    if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  return CONCAT44(uVar4,iVar5);
}



/* ---- __ioinit @ 1000bfe8 size=562 ---- */

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
  
  uStack_c = 0x1000bff4;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1000c21f:
    iVar7 = -1;
  }
  else {
    DAT_10023ec8 = 0x20;
    DAT_10023ee0 = puVar2;
    for (; puVar2 < DAT_10023ee0 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((int)DAT_10023ec8 < (int)UVar9) {
        puVar2 = __calloc_crt(0x20,0x38);
        if (puVar2 == (undefined4 *)0x0) {
          UVar9 = DAT_10023ec8;
          break;
        }
        (&DAT_10023ee0)[iVar7] = puVar2;
        DAT_10023ec8 = DAT_10023ec8 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_10023ee0)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_10023ee0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_1000c21f;
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
      piVar8 = DAT_10023ee0 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_1000c21f;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10023ec8);
    iVar7 = 0;
  }
  return iVar7;
}



/* ---- __ioterm @ 1000c228 size=76 ---- */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10023ee0;
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
  } while ((int)puVar2 < 0x10023fe0);
  return;
}



/* ---- __setenvp @ 1000c274 size=216 ---- */

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
  
  if (DAT_1002400c == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_100232f8;
  if (DAT_100232f8 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    DAT_10023668 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar4 = DAT_100232f8;
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_100232f8);
          DAT_100232f8 = (char *)0x0;
          *puVar1 = 0;
          _DAT_10024000 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10023668);
            DAT_10023668 = (undefined4 *)0x0;
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



/* ---- parse_cmdline @ 1000c34f size=408 ---- */

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
        goto LAB_1000c3e1;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1000c3e1:
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



/* ---- __setargv @ 1000c4e7 size=185 ---- */

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
  
  if (DAT_1002400c == 0) {
    ___initmbctable();
  }
  DAT_10023c1c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10023b18,0x104);
  _DAT_10023678 = &DAT_10023b18;
  if ((DAT_10024018 == (char *)0x0) || (local_8 = DAT_10024018, *DAT_10024018 == '\0')) {
    local_8 = &DAT_10023b18;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_1002365c = local_c - 1;
      _DAT_10023660 = puVar2;
      return 0;
    }
  }
  return -1;
}



/* ---- ___crtGetEnvironmentStringsA @ 1000c5a0 size=309 ---- */

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
  if (DAT_10023c20 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10023c20 = 1;
      goto LAB_1000c5f2;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10023c20 = 2;
    }
  }
  if (DAT_10023c20 != 1) {
    if ((DAT_10023c20 != 2) && (DAT_10023c20 != 0)) {
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
LAB_1000c5f2:
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



/* ---- __RTC_Initialize @ 1000c6d5 size=36 ---- */

/* WARNING: Removing unreachable block (ram,0x1000c6e7) */
/* WARNING: Removing unreachable block (ram,0x1000c6ed) */
/* WARNING: Removing unreachable block (ram,0x1000c6ef) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/* ---- ___security_init_cookie @ 1000c71d size=148 ---- */

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
  if ((DAT_10022024 == 0xbb40e64e) || ((DAT_10022024 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10022024 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10022024 == 0xbb40e64e) {
      DAT_10022024 = 0xbb40e64f;
    }
    else if ((DAT_10022024 & 0xffff0000) == 0) {
      DAT_10022024 = DAT_10022024 | DAT_10022024 << 0x10;
    }
  }
  DAT_10022028 = ~DAT_10022024;
  return;
}



/* ---- fastzero_I @ 1000c7b1 size=79 ---- */

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



/* ---- __VEC_memzero @ 1000c808 size=143 ---- */

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



/* ---- FUN_1000c8ab @ 1000c8ab size=129 ---- */

void __cdecl FUN_1000c8ab(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



/* ---- __VEC_memcpy @ 1000c932 size=227 ---- */

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
      FUN_1000c8ab(param_1,param_2,param_3 - uVar3);
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



/* ---- ___freetlocinfo @ 1000ca15 size=320 ---- */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10022b70)) &&
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
  if ((ppuVar2 != &PTR_DAT_10022ab0) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10022470) &&
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



/* ---- ___addlocaleref @ 1000cb55 size=134 ---- */

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
    if (((undefined *)pLVar1[-2] != &DAT_10022470) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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



/* ---- ___removelocaleref @ 1000cbdb size=140 ---- */

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
      if (((undefined *)pLVar1[-2] != &DAT_10022470) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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



/* ---- __updatetlocinfoEx_nolock @ 1000cc67 size=62 ---- */

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
      if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10022478)) {
        ___freetlocinfo(pLVar1);
      }
    }
  }
  return unaff_EDI;
}



/* ---- ___updatetlocinfo @ 1000cca5 size=106 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10022ba4) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1000cd0f();
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



/* ---- FUN_1000cd0f @ 1000cd0f size=12 ---- */

void FUN_1000cd0f(void)

{
  FUN_1000b374(0xc);
  return;
}



/* ---- FUN_1000cd1b @ 1000cd1b size=47 ---- */

undefined4 FUN_1000cd1b(void)

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



/* ---- setSBCS @ 1000cd4a size=85 ---- */

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
    *puVar1 = puVar1[(int)&DAT_10022560 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10022560 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* ---- setSBUpLow @ 1000cd9f size=394 ---- */

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
  
  local_8 = DAT_10022024 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1000cf06:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1000cf06;
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
          goto LAB_1000cead;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_1000cead:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/* ---- ___updatetmbcinfo @ 1000cf29 size=152 ---- */

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
  if (((p_Var1->_ownlocale & DAT_10022ba4) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10022988) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10022560)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10022988;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10022988;
      InterlockedIncrement((LONG *)PTR_DAT_10022988);
    }
    FUN_1000cfc4();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



/* ---- FUN_1000cfc4 @ 1000cfc4 size=9 ---- */

void FUN_1000cfc4(void)

{
  FUN_1000b374(0xd);
  return;
}



/* ---- _LocaleUpdate @ 1000cfcd size=130 ---- */

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
    if ((*(undefined **)this != PTR_DAT_10022550) && ((p_Var2->_ownlocale & DAT_10022ba4) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10022988) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10022ba4) == 0)) {
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



/* ---- getSystemCP @ 1000d04f size=122 ---- */

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
  DAT_10023c48 = 0;
  if (unaff_ESI == -2) {
    DAT_10023c48 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10023c48 = 1;
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
    DAT_10023c48 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/* ---- FUN_1000d0c9 @ 1000d0c9 size=473 ---- */

void __cdecl FUN_1000d0c9(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_10022024 ^ (uint)(&local_1c)[1].DefaultChar;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1000d105:
    if (*(uint *)((int)&DAT_10022990 + uVar5) != uVar4) goto code_r0x1000d111;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_100229a0 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1002298c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_1000cd1b();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10022994 + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_1000d236;
  }
LAB_1000d0f2:
  setSBCS(unaff_EDI);
LAB_1000d293:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
code_r0x1000d111:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x1000d11e;
  goto LAB_1000d105;
code_r0x1000d11e:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_1000d293;
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
      uVar9 = FUN_1000cd1b();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1000d236:
    setSBUpLow(unaff_EDI);
    goto LAB_1000d293;
  }
  if (DAT_10023c48 == 0) goto LAB_1000d293;
  goto LAB_1000d0f2;
}



/* ---- __setmbcp @ 1000d2a2 size=399 ---- */

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
      local_24 = FUN_1000d0c9(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10022560)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10022ba4 & 1) == 0)) {
          __lock(0xd);
          _DAT_10023c58 = ptVar3->mbcodepage;
          _DAT_10023c5c = ptVar3->ismbcodepage;
          _DAT_10023c60 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10023c4c)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10022780)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10022888)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10022988);
          if ((LVar4 == 0) && (PTR_DAT_10022988 != &DAT_10022560)) {
            _free(PTR_DAT_10022988);
          }
          PTR_DAT_10022988 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1000d403();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10022560) {
          _free(ptVar3);
        }
        pDVar5 = FUN_10009900();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/* ---- FUN_1000d403 @ 1000d403 size=9 ---- */

void FUN_1000d403(void)

{
  FUN_1000b374(0xd);
  return;
}



/* ---- ___initmbctable @ 1000d43c size=30 ---- */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1002400c == 0) {
    __setmbcp(-3);
    DAT_1002400c = 1;
  }
  return 0;
}



/* ---- __calloc_impl @ 1000d45a size=272 ---- */

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
        if ((DAT_10023ff8 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10023fe8)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1000d556();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_1000d50b;
          }
        }
        else {
LAB_1000d50b:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_100239bc,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_10023b14 == 0) {
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
    pDVar1 = FUN_10009900();
    *pDVar1 = 0xc;
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/* ---- FUN_1000d556 @ 1000d556 size=9 ---- */

void FUN_1000d556(void)

{
  FUN_1000b374(4);
  return;
}



/* ---- _realloc @ 1000d578 size=524 ---- */

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
  if (DAT_10023ff8 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000d751;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1000b4e9(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10023fe8) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1000b4e9(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_100239bc,0,_NewSize);
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
      FUN_1000d6bc();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_100239bc,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10023b14 == 0) {
        pDVar4 = FUN_10009900();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1000d77e;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_10009900();
    if (local_24 != (uint *)0x0) goto LAB_1000d75d;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000d751;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_100239bc,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10023b14 == 0) {
        pDVar4 = FUN_10009900();
LAB_1000d77e:
        DVar5 = GetLastError();
        DVar5 = FUN_100098c5(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_10009900();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_100098c5(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_1000d751:
  __callnewh(_NewSize);
  pDVar4 = FUN_10009900();
LAB_1000d75d:
  *pDVar4 = 0xc;
  return (void *)0x0;
}



/* ---- FUN_1000d6bc @ 1000d6bc size=9 ---- */

void FUN_1000d6bc(void)

{
  FUN_1000b374(4);
  return;
}



/* ---- __initp_misc_cfltcvt_tab @ 1000d793 size=31 ---- */

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
    piVar1 = (int *)((int)&PTR_LAB_10022a80 + uVar3);
    iVar2 = FUN_100099b0(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/* ---- __initp_misc_winsig @ 1000d7b2 size=25 ---- */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_10023c64 = param_1;
  DAT_10023c68 = param_1;
  DAT_10023c6c = param_1;
  DAT_10023c70 = param_1;
  return;
}



/* ---- siglookup @ 1000d7cb size=52 ---- */

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
  } while (uVar1 < DAT_10022304 * 0xc + param_1);
  if ((DAT_10022304 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- ___get_sigabrt @ 1000d7ff size=13 ---- */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_10009a27(DAT_10023c6c);
  return p_Var1;
}



/* ---- _raise @ 1000d80c size=411 ---- */

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
        puVar6 = &DAT_10023c64;
        iVar3 = DAT_10023c64;
        goto LAB_1000d8c1;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_1000d89f;
        if (_SigNum != 8) goto LAB_1000d883;
      }
    }
    pDVar7 = FUN_10009c00();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10023c70;
      iVar3 = DAT_10023c70;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10023c68;
      iVar3 = DAT_10023c68;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1000d883:
        pDVar7 = FUN_10009900();
        *pDVar7 = 0x16;
        FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_1000d89f:
      puVar6 = &DAT_10023c6c;
      iVar3 = DAT_10023c6c;
    }
LAB_1000d8c1:
    bVar1 = true;
    pcVar4 = (code *)FUN_10009a27(iVar3);
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
      goto LAB_1000d925;
    }
  }
  else {
LAB_1000d925:
    if (_SigNum == 8) {
      for (local_28 = DAT_100222f8; local_28 < DAT_100222fc + DAT_100222f8; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_1000d95f;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_1000d95f:
  FUN_1000d980();
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



/* ---- FUN_1000d980 @ 1000d980 size=15 ---- */

void FUN_1000d980(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1000b374(0);
  }
  return;
}



/* ---- FUN_1000d9bc @ 1000d9bc size=10 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000d9bc(undefined4 param_1)

{
  _DAT_10023c78 = param_1;
  return;
}



/* ---- FUN_1000d9c6 @ 1000d9c6 size=10 ---- */

void __cdecl FUN_1000d9c6(undefined4 param_1)

{
  DAT_10023c7c = param_1;
  return;
}



/* ---- ___crtInitCritSecNoSpinCount@8 @ 1000d9d0 size=16 ---- */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/* ---- ___crtInitCritSecAndSpinCount @ 1000d9e0 size=147 ---- */

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
  
  local_8 = &DAT_1001b298;
  uStack_c = 0x1000d9ec;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_10009a27(DAT_10023c7c);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1000da56;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1000da45:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1000da45;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1000da45;
  }
  DAT_10023c7c = FUN_100099b0((int)pcVar1);
LAB_1000da56:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/* ---- __local_unwind4 @ 1000daa8 size=144 ---- */

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
  puStack_24 = &LAB_1000db38;
  pvStack_28 = ExceptionList;
  local_20 = DAT_10022024 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_1000ea64();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/* ---- FUN_1000db7e @ 1000db7e size=28 ---- */

void FUN_1000db7e(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/* ---- _EH4_CallFilterFunc @ 1000db9a size=23 ---- */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/* ---- _EH4_TransferToHandler @ 1000dbb1 size=25 ---- */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1000dbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- _EH4_GlobalUnwind @ 1000dbca size=26 ---- */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000dbdf,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- _EH4_LocalUnwind @ 1000dbe4 size=23 ---- */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/* ---- FUN_1000dbfb @ 1000dbfb size=439 ---- */

undefined4 __cdecl FUN_1000dbfb(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_10023cbc == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10023cbc = FUN_100099b0((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_10023cc0 = FUN_100099b0((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10023cc4 = FUN_100099b0((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10023ccc = FUN_100099b0((int)pFVar1);
      if (DAT_10023ccc != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_10023cc8 = FUN_100099b0((int)pFVar1);
      }
    }
  }
  if ((DAT_10023cc8 != local_c) && (DAT_10023ccc != local_c)) {
    pcVar3 = (code *)FUN_10009a27(DAT_10023cc8);
    pcVar4 = (code *)FUN_10009a27(DAT_10023ccc);
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
      goto LAB_1000dd91;
    }
  }
  if ((((DAT_10023cc0 != local_c) &&
       (pcVar3 = (code *)FUN_10009a27(DAT_10023cc0), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10023cc4 != local_c &&
      (pcVar3 = (code *)FUN_10009a27(DAT_10023cc4), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1000dd91:
  pcVar3 = (code *)FUN_10009a27(DAT_10023cbc);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/* ---- _strcat_s @ 1000ddb8 size=113 ---- */

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
        pDVar2 = FUN_10009900();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_1000ddd7;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_10009900();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000ddd7:
  FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- _strncpy_s @ 1000de29 size=179 ---- */

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
LAB_1000de4d:
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
          pDVar2 = FUN_10009900();
          eVar4 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_1000de5e;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_1000de4d;
  pDVar2 = FUN_10009900();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000de5e:
  FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- __set_error_mode @ 1000dedc size=70 ---- */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_10023300;
      DAT_10023300 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_10023300;
    }
  }
  pDVar2 = FUN_10009900();
  *pDVar2 = 0x16;
  FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/* ---- __freea @ 1000df22 size=27 ---- */

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



/* ---- x_ismbbtype_l @ 1000df3d size=81 ---- */

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
    if (uVar1 == 0) goto LAB_1000df7f;
  }
  iVar2 = 1;
LAB_1000df7f:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/* ---- __ismbblead @ 1000df8e size=19 ---- */

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/* ---- FUN_1000dfa1 @ 1000dfa1 size=45 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_1000dfa1(void)

{
  return 1;
}



/* ---- __get_sse2_info @ 1000dff1 size=96 ---- */

/* WARNING: Removing unreachable block (ram,0x1000e02c) */
/* WARNING: Removing unreachable block (ram,0x1000e019) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_1000dfa1(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ---- ___free_lc_time @ 1000e05e size=400 ---- */

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



/* ---- ___free_lconv_num @ 1000e1ee size=64 ---- */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10022b70) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10022b74) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10022b78) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/* ---- ___free_lconv_mon @ 1000e22e size=137 ---- */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10022b7c) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10022b80) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10022b84) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10022b88) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10022b8c) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10022b90) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10022b94) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/* ---- _strcspn @ 1000e2c0 size=70 ---- */

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



/* ---- __crtGetStringTypeA_stat @ 1000e306 size=440 ---- */

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
  
  local_8 = DAT_10022024 ^ (int)register0x00000010 - 4U;
  lpWideCharStr = (LPWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10023cd4 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10023cd4 = 2;
      }
      goto LAB_1000e35f;
    }
    DAT_10023cd4 = 1;
  }
  else {
LAB_1000e35f:
    if ((DAT_10023cd4 == 2) || (DAT_10023cd4 == 0)) {
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
          if (_Memory == (void *)0x0) goto LAB_1000e4ac;
          param_2 = (ulong)_Memory;
        }
        GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4);
        if (_Memory != (void *)0x0) {
          _free(_Memory);
        }
      }
      goto LAB_1000e4ac;
    }
    if (DAT_10023cd4 != 1) goto LAB_1000e4ac;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000e4ac;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      lpWideCharStr = (LPWSTR)((int)register0x00000010 + -0x18);
      puVar3 = (undefined4 *)((int)register0x00000010 + -0x18);
      if (&uStack00000000 != (undefined1 *)0x18) goto LAB_1000e3ef;
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
LAB_1000e3ef:
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
LAB_1000e4ac:
  iVar4 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar4;
}



/* ---- ___crtGetStringTypeA @ 1000e4be size=64 ---- */

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



/* ---- _strpbrk @ 1000e500 size=64 ---- */

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



/* ---- __crtLCMapStringA_stat @ 1000e540 size=930 ---- */

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
  
  local_8 = DAT_10022024 ^ (int)register0x00000010 - 4U;
  if (DAT_10023cd8 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_10023cd8 = 2;
      }
    }
    else {
      DAT_10023cd8 = 1;
    }
  }
  if (0 < (int)param_4) {
    pcVar5 = (char *)param_3;
    pcVar8 = param_4;
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000e5af;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000e5af:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_10023cd8 == 2) || (DAT_10023cd8 == 0)) {
    local_10 = (LPWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1000e8d0;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPWSTR)0x0) goto LAB_1000e8d0;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar9 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_1000e8ad;
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
LAB_1000e8ad:
    if (local_10 != (LPWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1000e8d0;
  }
  if (DAT_10023cd8 != 1) goto LAB_1000e8d0;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000e8d0;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      local_10 = (LPWSTR)((int)register0x00000010 + -0x24);
      puVar6 = (undefined4 *)((int)register0x00000010 + -0x24);
      if (&uStack00000000 != (undefined1 *)0x24) goto LAB_1000e657;
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
LAB_1000e657:
        local_10 = (LPWSTR)(puVar6 + 2);
      }
    }
  }
  if (local_10 == (LPWSTR)0x0) goto LAB_1000e8d0;
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
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_1000e766;
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
LAB_1000e766:
  __freea(local_10);
LAB_1000e8d0:
  iVar3 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar3;
}



/* ---- ___crtLCMapStringA @ 1000e8e2 size=67 ---- */

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



/* ---- __global_unwind2 @ 1000e930 size=32 ---- */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000e948,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- __local_unwind2 @ 1000e995 size=132 ---- */

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
  puStack_1c = &LAB_1000e950;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_1000ea64();
    }
  }
  ExceptionList = local_20;
  return;
}



/* ---- __NLG_Notify1 @ 1000ea3c size=9 ---- */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10022bc8 = param_1;
  DAT_10022bc4 = in_EAX;
  DAT_10022bcc = unaff_EBP;
  return in_EAX;
}



/* ---- __NLG_Notify @ 1000ea45 size=31 ---- */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10022bc8 = param_1;
  DAT_10022bc4 = in_EAX;
  DAT_10022bcc = unaff_EBP;
  return;
}



/* ---- FUN_1000ea64 @ 1000ea64 size=3 ---- */

void FUN_1000ea64(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/* ---- _atol @ 1000eb44 size=17 ---- */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/* ---- __isctype_l @ 1000eb55 size=182 ---- */

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



/* ---- __alloca_probe_16 @ 1000ec10 size=22 ---- */

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



/* ---- __alloca_probe_8 @ 1000ec26 size=22 ---- */

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



/* ---- __isleadbyte_l @ 1000ec3c size=54 ---- */

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



/* ---- ___ansicp @ 1000ec72 size=71 ---- */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  undefined4 local_8;
  
  local_8 = DAT_10022024 ^ (uint)(local_10 + 0xc);
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)(local_10 + 0xc));
  return;
}



/* ---- ___convertcp @ 1000ecb9 size=434 ---- */

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
  
  local_8 = DAT_10022024 ^ (uint)(&local_1c)[1].DefaultChar;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1000ee59;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1000ee59;
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
      if (&uStack00000000 != (undefined1 *)0x44) goto LAB_1000ed99;
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
LAB_1000ed99:
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
LAB_1000ee59:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
}



/* ---- strtoxl @ 1000ee6b size=555 ---- */

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
    pDVar3 = FUN_10009900();
    *pDVar3 = 0x16;
    FUN_10008e0d((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_1000ef22:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_1000ef22;
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
      goto LAB_1000ef88;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_1000ef88;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_1000ef88;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_1000ef88:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_1000efe2:
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
          pDVar3 = FUN_10009900();
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
    if ((uint)param_4 <= uVar6) goto LAB_1000efe2;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_1000efe2;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* ---- _strtol @ 1000f096 size=41 ---- */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10023c24 == 0) {
    ppuVar2 = &PTR_DAT_10022558;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/* ---- __alloca_probe @ 1000f0c0 size=43 ---- */

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



/* ---- ___ascii_strnicmp @ 1000f0f0 size=97 ---- */

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
      if (bVar2 != (byte)uVar3) goto LAB_1000f141;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1000f141:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/* ---- FUN_1000f160 @ 1000f160 size=5 ---- */

int __fastcall FUN_1000f160(undefined4 param_1,int param_2)

{
  return param_2 + -1;
}



/* ---- FUN_1000f165 @ 1000f165 size=201 ---- */

uint * FUN_1000f165(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* ---- FUN_1000f22e @ 1000f22e size=11 ---- */

void __fastcall FUN_1000f22e(exception *param_1)

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



/* ---- vfunction1 @ 1000f239 size=34 ---- */

exception * __thiscall std::out_of_range::vfunction1(out_of_range *this,byte param_1)

{
  this->vftablePtr = &vftable;
  logic_error::~logic_error((logic_error *)this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- length_error @ 1000f25b size=62 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void __thiscall std::length_error::length_error(length_error *this)

{
  logic_error local_54;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1000f267;
  FUN_100017e0(local_2c,"string too long");
  local_8 = 0;
  logic_error::logic_error(&local_54,local_2c);
  local_54.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_54,&DAT_1001b534);
}



/* ---- out_of_range @ 1000f29a size=62 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void __thiscall std::out_of_range::out_of_range(out_of_range *this)

{
  logic_error local_54;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1000f2a6;
  FUN_100017e0(local_2c,"invalid string position");
  local_8 = 0;
  logic_error::logic_error(&local_54,local_2c);
  local_54.vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_54,&DAT_1001b2d4);
}



/* ---- FUN_1000f2d9 @ 1000f2d9 size=24 ---- */

logic_error * __thiscall FUN_1000f2d9(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
  return param_1;
}



/* ---- set_new_handler @ 1000f2fb size=58 ---- */

/* Library Function - Single Match
    void (__cdecl*__cdecl std::set_new_handler(void (__cdecl*)(void)))(void)
   
   Library: Visual Studio 2005 Release */

_func_void * __cdecl std::set_new_handler(_func_void *param_1)

{
  _func_void *p_Var1;
  _Lockit local_8 [4];
  
  _Lockit::_Lockit(local_8,1);
  p_Var1 = DAT_10023d98;
  DAT_10023d98 = param_1;
  _set_new_handler((_func_int_uint *)(-(uint)(param_1 != (_func_void *)0x0) & 0x1000f2f1));
  FUN_1000f3ae((int *)local_8);
  return p_Var1;
}



/* ---- _Init_locks @ 1000f335 size=47 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&DAT_10022d18);
  if (LVar1 == 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_10023da0;
    do {
      FUN_1000f3c0(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x10023e00);
  }
  return this;
}



/* ---- FUN_1000f364 @ 1000f364 size=41 ---- */

void FUN_1000f364(void)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_10022d18);
  if (LVar1 < 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_10023da0;
    do {
      FUN_1000f3cb(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x10023e00);
  }
  return;
}



/* ---- _Lockit @ 1000f38d size=33 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Lockit::_Lockit(int)
   
   Library: Visual Studio 2005 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(uint *)this = param_1 & 3U;
  FUN_1000f3d6((LPCRITICAL_SECTION)(&DAT_10023da0 + (param_1 & 3U) * 0x18));
  return this;
}



/* ---- FUN_1000f3ae @ 1000f3ae size=18 ---- */

void __fastcall FUN_1000f3ae(int *param_1)

{
  FUN_1000f3e1((LPCRITICAL_SECTION)(&DAT_10023da0 + *param_1 * 0x18));
  return;
}



/* ---- FUN_1000f3c0 @ 1000f3c0 size=11 ---- */

void __cdecl FUN_1000f3c0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



/* ---- FUN_1000f3cb @ 1000f3cb size=11 ---- */

void __cdecl FUN_1000f3cb(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



/* ---- FUN_1000f3d6 @ 1000f3d6 size=11 ---- */

void __cdecl FUN_1000f3d6(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



/* ---- FUN_1000f3e1 @ 1000f3e1 size=11 ---- */

void __cdecl FUN_1000f3e1(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



/* ---- _AtlGetThreadACPFake @ 1000f3ec size=101 ---- */

/* Library Function - Single Match
    unsigned int __stdcall ATL::_AtlGetThreadACPFake(void)
   
   Library: Visual Studio 2005 Release */

uint ATL::_AtlGetThreadACPFake(void)

{
  LCID Locale;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char local_10;
  char local_f [7];
  undefined4 local_8;
  
  local_8 = DAT_10022024 ^ (uint)(local_f + 0xb);
  iVar4 = 0;
  Locale = GetThreadLocale();
  iVar1 = GetLocaleInfoA(Locale,0x1004,&local_10,7);
  if (iVar1 != 0) {
    pcVar2 = &local_10;
    if (local_10 != '\0') {
      do {
        pcVar2 = pcVar2 + 1;
        iVar4 = iVar4 * 10 + -0x30 + (int)local_10;
        local_10 = *pcVar2;
      } while (local_10 != '\0');
      if (iVar4 != 0) goto LAB_1000f442;
    }
  }
  GetACP();
LAB_1000f442:
  uVar3 = __security_check_cookie(local_8 ^ (uint)(local_f + 0xb));
  return uVar3;
}



/* ---- _AtlGetThreadACPThunk @ 1000f455 size=100 ---- */

/* Library Function - Single Match
    unsigned int __stdcall ATL::_AtlGetThreadACPThunk(void)
   
   Library: Visual Studio 2005 Release */

uint ATL::_AtlGetThreadACPThunk(void)

{
  code *Value;
  uint uVar1;
  _OSVERSIONINFOA local_9c;
  DWORD local_8;
  
  local_8 = DAT_10022024 ^ (uint)&(&local_9c)[1].dwMajorVersion;
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  if ((local_9c.dwPlatformId != 2) || (Value = (code *)&LAB_1000f451, local_9c.dwMajorVersion < 5))
  {
    Value = _AtlGetThreadACPFake;
  }
  InterlockedExchange((LONG *)&PTR__AtlGetThreadACPThunk_10022d1c,(LONG)Value);
  (*(code *)PTR__AtlGetThreadACPThunk_10022d1c)();
  uVar1 = __security_check_cookie(local_8 ^ (uint)&(&local_9c)[1].dwMajorVersion);
  return uVar1;
}



/* ---- RtlUnwind @ 1000f4ba size=6 ---- */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000f4ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ---- _JumpToContinuation @ 1000f4c0 size=43 ---- */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000f4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/* ---- FID_conflict:_CallMemberFunction1 @ 1000f4f0 size=7 ---- */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000f4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}



/* ---- _UnwindNestedFrames @ 1000f4f7 size=82 ---- */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000f520,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* ---- FID_conflict:___CxxFrameHandler3 @ 1000f549 size=54 ---- */

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



/* ---- _CallSETranslator @ 1000f5af size=213 ---- */

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
    *(undefined4 *)param_2 = 0x1000f658;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_10022024 ^ (uint)&local_2c;
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



/* ---- TranslatorGuardHandler @ 1000f684 size=152 ---- */

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
                    /* WARNING: Could not recover jumptable at 0x1000f719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/* ---- _GetRangeOfTrysToCheck @ 1000f721 size=115 ---- */

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



/* ---- __CreateFrameInfo @ 1000f794 size=40 ---- */

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



/* ---- __IsExceptionObjectToBeDestroyed @ 1000f7bc size=33 ---- */

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



/* ---- __FindAndUnlinkFrame @ 1000f7dd size=76 ---- */

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



/* ---- _CallCatchBlock2 @ 1000f829 size=94 ---- */

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
  
  local_14 = DAT_10022024 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1000f57f;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/* ---- __EH_prolog3 @ 1000f887 size=51 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10022024 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __EH_prolog3_catch @ 1000f8ba size=54 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10022024 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- FUN_1000f8f0 @ 1000f8f0 size=11 ---- */

void __fastcall FUN_1000f8f0(undefined4 *param_1)

{
  *param_1 = &std::bad_exception::vftable;
  *param_1 = &std::exception::vftable;
  if (param_1[2] != 0) {
    _free((void *)param_1[1]);
  }
  return;
}



/* ---- vfunction1 @ 1000f8fb size=34 ---- */

exception * __thiscall std::bad_exception::vfunction1(bad_exception *this,byte param_1)

{
  this->vftablePtr = &vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (exception *)this;
}



/* ---- ___TypeMatch @ 1000f91d size=92 ---- */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1000f973:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000f951:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1000f973;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000f951;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- ___FrameUnwindToState @ 1000f9bd size=166 ---- */

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
  FUN_1000fa83();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/* ---- FUN_1000fa83 @ 1000fa83 size=27 ---- */

void FUN_1000fa83(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/* ---- ___DestructExceptionObject @ 1000fae3 size=67 ---- */

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



/* ---- ___AdjustPointer @ 1000fb37 size=37 ---- */

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



/* ---- IsInExceptionSpec @ 1000fb5c size=121 ---- */

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



/* ---- CallUnexpected @ 1000fbd5 size=49 ---- */

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



/* ---- Catch_All@1000fc06 @ 1000fc06 size=23 ---- */

void Catch_All_1000fc06(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- CallCatchBlock @ 1000fc1e size=172 ---- */

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
  
  local_8 = &DAT_1001b3e0;
  uStack_c = 0x1000fc2a;
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
  FUN_1000fd44();
  return local_20;
}



/* ---- FUN_1000fd44 @ 1000fd44 size=118 ---- */

void FUN_1000fd44(void)

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



/* ---- ___BuildCatchObjectHelper @ 1000fdba size=371 ---- */

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
        goto LAB_1000fe3f;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_1000fe3f:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/* ---- ___BuildCatchObject @ 1000ff39 size=133 ---- */

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



/* ---- CatchIt @ 1000ffca size=108 ---- */

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



/* ---- FindHandlerForForeignException @ 10010036 size=242 ---- */

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



/* ---- FindHandler @ 10010128 size=854 ---- */

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
                param_1 = (EHExceptionRecord *)s_bad_exception_10019afc;
                    /* inlined constructor: std::bad_exception::bad_exception */
                std::exception::exception((exception *)(auStack_2d + -3),(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(auStack_2d + -3,&DAT_1001b444);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_10010266;
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
                  goto LAB_10010390;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_10010390:
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
         uVar3 != '\0')) goto LAB_10010466;
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
LAB_10010266:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_10010466:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/* ---- FUN_1001047e @ 1001047e size=24 ---- */

exception * __thiscall FUN_1001047e(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  param_1->vftablePtr = (exception_vftable *)&std::bad_exception::vftable;
  return param_1;
}



/* ---- ___InternalCxxFrameHandler @ 10010496 size=228 ---- */

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



/* ---- __CallSettingFrame@12 @ 10010580 size=76 ---- */

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



/* ---- _ValidateRead @ 100105cc size=13 ---- */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/* ---- XDestroyTimer @ 100105e0 size=35 ---- */

/* void __stdcall XDestroyTimer(class IXTimer *) */

void XDestroyTimer(IXTimer *param_1)

{
  bool bVar1;
  
                    /* 0x105e0  340  ?XDestroyTimer@@YGXPAVIXTimer@@@Z */
  bVar1 = XPlatform::IsWindows2000();
  if ((bVar1) && (param_1 != (IXTimer *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100105fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1)();
    return;
  }
  return;
}



/* ---- ~IXTimer @ 10010610 size=7 ---- */

void __thiscall IXTimer::~IXTimer(IXTimer *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- XChangeTimerQueueTimer @ 10010620 size=69 ---- */

/* int __stdcall XChangeTimerQueueTimer(void *,unsigned long,unsigned long) */

int XChangeTimerQueueTimer(void *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  bad_alloc *this;
  
                    /* 0x10620  333  ?XChangeTimerQueueTimer@@YGHPAXKK@Z */
  bVar1 = XPlatform::IsWindows2000();
  if (bVar1) {
    if (DAT_10023e98 == 0) {
      std::bad_alloc::bad_alloc(this);
    }
    iVar2 = (**(code **)(DAT_10023e98 + 0xc))
                      (*(undefined4 *)(DAT_10023e98 + 0x24),param_1,param_2,param_3);
    return iVar2;
  }
  SetLastError(0x78);
  return 0;
}



/* ---- XDestroyTimerQueueTimer @ 10010670 size=61 ---- */

/* int __stdcall XDestroyTimerQueueTimer(void *,void *) */

int XDestroyTimerQueueTimer(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  bad_alloc *this;
  
                    /* 0x10670  341  ?XDestroyTimerQueueTimer@@YGHPAX0@Z */
  bVar1 = XPlatform::IsWindows2000();
  if (bVar1) {
    if (DAT_10023e98 == 0) {
      std::bad_alloc::bad_alloc(this);
    }
    iVar2 = (**(code **)(DAT_10023e98 + 0x10))
                      (*(undefined4 *)(DAT_10023e98 + 0x24),param_1,0xffffffff);
    return iVar2;
  }
  SetLastError(0x78);
  return 0;
}



/* ---- XCreateTimerQueueTimer @ 100106b0 size=110 ---- */

/* void * __stdcall XCreateTimerQueueTimer(void (__stdcall*)(void *,unsigned char),void *,unsigned
   long,int,unsigned long) */

void * XCreateTimerQueueTimer
                 (_func_void_void_ptr_uchar *param_1,void *param_2,ulong param_3,int param_4,
                 ulong param_5)

{
  bool bVar1;
  int iVar2;
  bad_alloc *this;
  uint uVar3;
  undefined4 local_4;
  
                    /* 0x106b0  337  ?XCreateTimerQueueTimer@@YGPAXP6GXPAXE@Z0KHK@Z */
  bVar1 = XPlatform::IsWindows2000();
  if (bVar1) {
    local_4 = 0;
    if (DAT_10023e98 == 0) {
      std::bad_alloc::bad_alloc(this);
    }
    uVar3 = *(uint *)(DAT_10023e98 + 0x24);
    iVar2 = (**(code **)(DAT_10023e98 + 8))
                      (&local_4,uVar3,param_1,param_2,param_3,-(uint)(param_4 != 0) & param_3,
                       param_5);
    return (void *)(-(uint)(iVar2 != 0) & uVar3);
  }
  SetLastError(0x78);
  return (void *)0x0;
}



/* ---- XCreateTimer @ 10010720 size=171 ---- */

/* class IXTimer * __stdcall XCreateTimer(void) */

IXTimer * XCreateTimer(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  XTimerQueueTimer *this;
  XTimerQueueTimer *this_00;
  bad_alloc *this_01;
  undefined1 auStack_1b [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10720  336  ?XCreateTimer@@YGPAVIXTimer@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016530;
  local_c = ExceptionList;
  bVar1 = (byte)DAT_10022024;
  ExceptionList = &local_c;
  bVar2 = XPlatform::IsWindows2000();
  if (bVar2) {
    iVar3 = FUN_100086ab(0x24);
    local_4 = 0;
    if (iVar3 == 0) {
      this = (XTimerQueueTimer *)0x0;
    }
    else {
      this = XTimerQueueTimer::XTimerQueueTimer(this_00);
    }
    local_4 = 0xffffffff;
    (*this->vftablePtr[1].vfunction1)(this,bVar1 ^ (char)auStack_1b + 3U);
    if (DAT_10023e98 == 0) {
      std::bad_alloc::bad_alloc(this_01);
    }
    if (*(int *)(DAT_10023e98 + 0x24) != 0) {
      ExceptionList = puStack_8;
      return (IXTimer *)this;
    }
    (*this->vftablePtr->vfunction1)(this,1);
  }
  ExceptionList = puStack_8;
  return (IXTimer *)0x0;
}



/* ---- FUN_100107d0 @ 100107d0 size=18 ---- */

void FUN_100107d0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &XSignals::ReqItem::vftable;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  return;
}



/* ---- FUN_10010800 @ 10010800 size=95 ---- */

void __fastcall FUN_10010800(undefined4 *param_1)

{
  undefined4 *_Memory;
  
                    /* inlined constructor or destructor (approx location) for XSignals */
  *param_1 = &XSignals::vftable;
  _Memory = (undefined4 *)param_1[0xc];
                    /* inlined constructor or destructor (approx location) for XCriticalSection */
  param_1[0xb] = &XCriticalSection::_vftable_;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    param_1[0xc] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    _free((void *)param_1[6]);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10006a90();
  return;
}



/* ---- FUN_10010860 @ 10010860 size=308 ---- */

void __thiscall FUN_10010860(void *this,uint param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uStack00000000;
  undefined4 local_3c;
  int iStack_38;
  int iStack_30;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_100163b9;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_3c;
  ExceptionList = &local_14;
  piVar1 = (int *)((int)this + 0x2c);
  local_24 = 0;
  if ((&uStack00000000 != (undefined1 *)0x28) && (piVar1 != (int *)0x0)) {
    local_24 = (**(code **)*piVar1)(0xffffffff,DAT_10022024 ^ (int)register0x00000010 - 0x48U);
  }
  FUN_100065d0(&local_3c,&param_1);
  iStack_30 = *(int *)((int)this + 0xc);
  if ((local_3c == 0) || (local_3c != (int)this + 8)) {
    FUN_10008e31();
  }
  if (iStack_38 != iStack_30) {
    if (local_3c == 0) {
      FUN_10008e31();
    }
    if (iStack_38 == *(int *)(local_3c + 4)) {
      FUN_10008e31();
    }
    iVar2 = *(int *)(*(int *)(iStack_38 + 0xc) + 8);
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(iStack_38 + 0xc) + 0xc) = param_2;
      SetEvent((HANDLE)**(undefined4 **)(iVar2 + 4));
      uStack_c = 0xffffffff;
      if (((&uStack00000000 != (undefined1 *)0x28) && (piVar1 != (int *)0x0)) && (local_24 != 0)) {
        (**(code **)(*piVar1 + 4))();
      }
      goto LAB_10010974;
    }
  }
  uStack_c = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x28) && (piVar1 != (int *)0x0)) && (local_24 != 0)) {
    (**(code **)(*piVar1 + 4))();
  }
LAB_10010974:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_3c);
  return;
}



/* ---- FUN_100109a0 @ 100109a0 size=275 ---- */

void __thiscall FUN_100109a0(void *this,uint param_1,DWORD param_2,undefined4 *param_3)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 uStack00000000;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int iStack_28;
  int iStack_20;
  int local_14;
  uint local_c;
  
  local_c = DAT_10022024 ^ (uint)&local_34;
  local_30 = param_3;
  local_34 = 0;
  piVar1 = (int *)((int)this + 0x2c);
  local_14 = 0;
  if ((&uStack00000000 != (undefined1 *)0x18) && (piVar1 != (int *)0x0)) {
    local_14 = (**(code **)*piVar1)(0xffffffff);
  }
  FUN_100065d0(&local_2c,&param_1);
  iStack_20 = *(int *)((int)this + 0xc);
  if ((local_2c == 0) || (local_2c != (int)this + 8)) {
    FUN_10008e31();
  }
  if (iStack_28 == iStack_20) {
    iVar3 = local_34;
  }
  else {
    if (local_2c == 0) {
      FUN_10008e31();
    }
    if (iStack_28 == *(int *)(local_2c + 4)) {
      FUN_10008e31();
    }
    iVar3 = *(int *)(iStack_28 + 0xc);
  }
  if (((&uStack00000000 != (undefined1 *)0x18) && (piVar1 != (int *)0x0)) && (local_14 != 0)) {
    (**(code **)(*piVar1 + 4))();
  }
  if ((((iVar3 == 0) || (*(int *)(iVar3 + 8) == 0)) ||
      ((DVar2 = WaitForSingleObject((HANDLE)**(undefined4 **)(*(int *)(iVar3 + 8) + 4),param_2),
       DVar2 != 0 && (DVar2 != 0x80)))) || (local_30 == (undefined4 *)0x0)) {
    __security_check_cookie(local_c ^ (uint)&local_34);
    return;
  }
  *local_30 = *(undefined4 *)(iVar3 + 0xc);
  __security_check_cookie(local_c ^ (uint)&local_34);
  return;
}



/* ---- ReqItem @ 10010b10 size=36 ---- */

void __thiscall XSignals::ReqItem::ReqItem(ReqItem *this)

{
  XEventObjHolder *this_00;
  
  this_00 = (this->ReqItem_data).offset_0x4;
  this->vftablePtr = &vftable;
  (this->ReqItem_data).offset_0x0 = 0;
  if (this_00 != (XEventObjHolder *)0x0) {
    XEventObjHolder::XEventObjHolder(this_00);
    (this->ReqItem_data).offset_0x4 = (void *)0x0;
  }
  (this->ReqItem_data).offset_0x8 = 0;
  return;
}



/* ---- XWaitSignal @ 10010b40 size=36 ---- */

/* unsigned long __stdcall XWaitSignal(void *,unsigned long,void * *,unsigned long) */

ulong XWaitSignal(void *param_1,ulong param_2,void **param_3,ulong param_4)

{
  ulong uVar1;
  
                    /* 0x10b40  355  ?XWaitSignal@@YGKPAXKPAPAXK@Z */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_100109a0(param_1,param_2,param_4,param_3);
  return uVar1;
}



/* ---- XSetSignal @ 10010b70 size=31 ---- */

/* int __stdcall XSetSignal(void *,unsigned long,void *) */

int XSetSignal(void *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  
                    /* 0x10b70  352  ?XSetSignal@@YGHPAXK0@Z */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_10010860(param_1,param_2,param_3);
  return iVar1;
}



/* ---- FUN_10010b90 @ 10010b90 size=506 ---- */

void __fastcall FUN_10010b90(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *_Memory;
  undefined4 *puVar5;
  int iVar6;
  void *this;
  undefined1 uStack00000000;
  undefined4 local_3c;
  int iStack_38;
  undefined4 *local_34;
  undefined4 *puStack_30;
  XLock_vftable *local_2c;
  int *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1001640f;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_3c;
  ExceptionList = &local_14;
  local_28 = (int *)(param_1 + 0x2c);
                    /* inlined constructor or destructor (approx location) for XLock */
  local_2c = &XLock::_vftable_;
  local_24 = 0;
  local_3c = param_1;
  if ((&uStack00000000 != (undefined1 *)0x28) && (local_28 != (int *)0x0)) {
    local_24 = (**(code **)*local_28)(0xffffffff,DAT_10022024 ^ (int)register0x00000010 - 0x48U);
  }
  local_c = 0;
  puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0xc);
  iVar6 = param_1;
  while( true ) {
    local_34 = *(undefined4 **)(iVar6 + 0xc);
    if ((param_1 == -8) || (param_1 + 8 != iVar6 + 8)) {
      FUN_10008e31();
    }
    if (puVar5 == local_34) break;
    if (param_1 == -8) {
      FUN_10008e31();
    }
    if (puVar5 == *(undefined4 **)(param_1 + 0xc)) {
      FUN_10008e31();
    }
    puVar1 = (undefined4 *)puVar5[3];
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      if ((XEventObjHolder *)puVar1[2] != (XEventObjHolder *)0x0) {
        XEventObjHolder::XEventObjHolder((XEventObjHolder *)puVar1[2]);
        puVar1[2] = 0;
      }
      puVar1[3] = 0;
      XLock::XLock_Constructor_or_Destructor(puVar1);
    }
    if (puVar5 == *(undefined4 **)(param_1 + 0xc)) {
      FUN_10008e31();
    }
    puVar5 = (undefined4 *)*puVar5;
    iVar6 = local_3c;
  }
  piVar2 = *(int **)(iVar6 + 0xc);
  _Memory = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(int *)(*(int *)(iVar6 + 0xc) + 4) = *(int *)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 0x10) = 0;
  if (_Memory != *(int **)(iVar6 + 0xc)) {
    do {
      piVar2 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar2;
    } while (piVar2 != (int *)*(int *)(iVar6 + 0xc));
  }
  iVar4 = local_3c;
  local_34 = *(undefined4 **)(iVar6 + 0xc);
  this = (void *)(local_3c + 0x14);
  puVar5 = *(undefined4 **)(local_3c + 0x1c);
  iStack_38 = iVar6 + 8;
  if (puVar5 < *(undefined4 **)(local_3c + 0x18)) {
    FUN_10008e31();
  }
  puVar1 = *(undefined4 **)(iVar4 + 0x18);
  if (*(undefined4 **)(iVar4 + 0x1c) < puVar1) {
    FUN_10008e31();
  }
  if (puVar1 != puVar5) {
    puVar3 = *(undefined4 **)(iVar4 + 0x1c);
    puStack_30 = puVar1 + ((int)puVar3 - (int)puVar5 >> 3) * 2;
    if (puVar5 != puVar3) {
      iVar6 = (int)puVar1 - (int)puVar5;
      do {
        *(undefined4 *)(iVar6 + (int)puVar5) = *puVar5;
        *(undefined4 *)(iVar6 + 4 + (int)puVar5) = puVar5[1];
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar3);
    }
    *(undefined4 **)(iVar4 + 0x1c) = puStack_30;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x18);
  if (*(undefined4 **)(iVar4 + 0x1c) < puVar5) {
    FUN_10008e31();
  }
  FUN_10006c60(this,9,&iStack_38,this,puVar5);
  *(undefined4 *)(local_3c + 0x24) = 1;
  *(undefined4 *)(local_3c + 0x28) = 1;
  local_c = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x28) && (local_28 != (int *)0x0)) && (local_24 != 0)) {
    (**(code **)(*local_28 + 4))();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_3c);
  return;
}



/* ---- FUN_10010d90 @ 10010d90 size=354 ---- */

void __thiscall FUN_10010d90(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_EAX;
  undefined1 uStack00000000;
  undefined1 auStack_44 [2];
  undefined1 auStack_42 [2];
  uint local_40;
  undefined4 *puStack_3c;
  int aiStack_38 [3];
  XLock local_2c;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1001643f;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)auStack_44;
  ExceptionList = &local_14;
  if (param_1 != 0) {
    piVar1 = (int *)((int)this + 0x2c);
                    /* inlined constructor or destructor (approx location) for XLock */
    local_2c.vftablePtr = &XLock::_vftable_;
    local_2c.XLock_data.offset_0x4 = 0;
    local_2c.XLock_data.offset_0x0 = piVar1;
    if ((&uStack00000000 != (undefined1 *)0x28) && (piVar1 != (int *)0x0)) {
      local_2c.XLock_data.offset_0x4 =
           (**(code **)*piVar1)(0xffffffff,DAT_10022024 ^ (uint)(auStack_44 + -0xc));
    }
    local_c = 0;
    FUN_100065d0((int *)&local_40,&param_1);
    puVar3 = *(undefined4 **)((int)this + 0xc);
    if ((local_40 == 0) || (local_40 != (int)this + 8U)) {
      FUN_10008e31();
    }
    if ((puStack_3c == puVar3) &&
       (puVar3 = (undefined4 *)FUN_10007680(), uVar2 = param_1, puVar3 != (undefined4 *)0x0)) {
      puVar3[1] = param_1;
      XLock::XLock_Constructor_or_Destructor();
      puVar3[2] = extraout_EAX;
      puVar3[3] = 0;
      if (extraout_EAX == 0) {
        puVar3[1] = 0;
        XLock::XLock_Constructor_or_Destructor(puVar3);
        local_c = 0xffffffff;
        XLock::~XLock(&local_2c);
      }
      else {
        local_40 = uVar2;
        puStack_3c = puVar3;
        FUN_10005ed0((int)this + 4,aiStack_38,&local_40);
        local_c = 0xffffffff;
        XLock::~XLock(&local_2c);
      }
    }
    else {
      local_c = 0xffffffff;
      if (((&uStack00000000 != (undefined1 *)0x28) && (piVar1 != (int *)0x0)) &&
         (local_2c.XLock_data.offset_0x4 != 0)) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_44);
  return;
}



/* ---- XSignals @ 10010f00 size=99 ---- */

XSignals * __thiscall XSignals::XSignals(XSignals *this)

{
  undefined4 uStack00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016472;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uStack00000004->vftablePtr = &vftable;
  FUN_10006490(&(uStack00000004->XSignals_data).offset_0x0,(undefined1 *)&uStack00000004);
  local_4 = 0;
  XCriticalSection::XCriticalSection
            ((XCriticalSection *)&(uStack00000004->XSignals_data).field_0x28,4000);
  ExceptionList = local_c;
  return uStack00000004;
}



/* ---- XAddSignal @ 10010f70 size=26 ---- */

/* int __stdcall XAddSignal(void *,unsigned long) */

int XAddSignal(void *param_1,ulong param_2)

{
  int iVar1;
  
                    /* 0x10f70  331  ?XAddSignal@@YGHPAXK@Z */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_10010d90(param_1,param_2);
  return iVar1;
}



/* ---- XDestroySignals @ 10010f90 size=41 ---- */

/* int __stdcall XDestroySignals(void *) */

int XDestroySignals(void *param_1)

{
                    /* 0x10f90  338  ?XDestroySignals@@YGHPAX@Z */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  FUN_10010b90((int)param_1);
  (*(code *)**(undefined4 **)param_1)(1);
  return 1;
}



/* ---- XCreateSignals @ 10010fc0 size=99 ---- */

/* void * __stdcall XCreateSignals(void) */

void * XCreateSignals(void)

{
  int iVar1;
  XSignals *pXVar2;
  XSignals *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10fc0  334  ?XCreateSignals@@YGPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016556;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_100086ab(0x34);
  local_4 = 0;
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pXVar2 = XSignals::XSignals(this);
  ExceptionList = local_c;
  return pXVar2;
}



/* ---- XLock @ 10011030 size=299 ---- */

void __thiscall XLock::XLock(XLock *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uStack00000000;
  undefined1 auStack_3c [2];
  undefined1 auStack_3a [2];
  XLock_data *local_38;
  undefined1 *local_34;
  int iStack_30;
  XLock_vftable *local_2c;
  int *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016579;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)auStack_3c;
  ExceptionList = &local_14;
  local_28 = &this[2].XLock_data.offset_0x8;
  local_2c = &_vftable_;
  local_24 = 0;
  if ((&uStack00000000 != (undefined1 *)0x28) && (local_28 != (undefined4 *)0x0)) {
    local_24 = (**(code **)*local_28)(0xffffffff,DAT_10022024 ^ (uint)(auStack_3c + -0xc));
  }
  local_38 = &this->XLock_data;
  local_c = 0;
  FUN_100065d0((int *)&local_34,&param_1);
  iVar1 = (this->XLock_data).offset_0x8;
  if ((local_34 == (undefined1 *)0x0) || ((uint *)local_34 != &(this->XLock_data).offset_0x4)) {
    FUN_10008e31();
  }
  if (iStack_30 != iVar1) {
    if (local_34 == (undefined1 *)0x0) {
      FUN_10008e31();
    }
    if (iStack_30 == *(int *)(local_34 + 4)) {
      FUN_10008e31();
    }
    puVar2 = *(undefined4 **)(iStack_30 + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      if ((XEventObjHolder *)puVar2[2] != (XEventObjHolder *)0x0) {
        XEventObjHolder::XEventObjHolder((XEventObjHolder *)puVar2[2]);
        puVar2[2] = 0;
      }
      puVar2[3] = 0;
      XLock_Constructor_or_Destructor(puVar2);
    }
    FUN_100063c0();
  }
  local_c = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x28) && (local_28 != (int *)0x0)) && (local_24 != 0)) {
    (**(code **)(*local_28 + 4))();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_3c);
  return;
}



/* ---- XRemoveSignal @ 10011160 size=31 ---- */

/* int __stdcall XRemoveSignal(void *,unsigned long) */

int XRemoveSignal(void *param_1,ulong param_2)

{
                    /* 0x11160  351  ?XRemoveSignal@@YGHPAXK@Z */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  XLock::XLock(param_1,param_2);
  return 1;
}



/* ---- ~XSmallObject @ 10011180 size=7 ---- */

/* public: virtual __thiscall XSmallObject::~XSmallObject(void) */

void __thiscall XSmallObject::~XSmallObject(XSmallObject *this)

{
                    /* 0x11180  73  ??1XSmallObject@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- XLock @ 10011190 size=228 ---- */

/* public: static void __cdecl XSmallObject::operator delete(void *,unsigned int) */

void __thiscall XLock::XLock(XLock *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  HANDLE hHeap;
  XLock *extraout_ECX;
  XLock *extraout_ECX_00;
  int *piVar3;
  undefined1 uStack00000000;
  DWORD dwFlags;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x11190  78  ??3XSmallObject@@SAXPAXI@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_100165a9;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_2c;
  uVar2 = DAT_10022024 ^ (int)register0x00000010 - 0x38U;
  ExceptionList = &local_14;
  if (DAT_10023e90 == 0) {
    std::bad_alloc::bad_alloc((bad_alloc *)this);
    this = extraout_ECX;
  }
  piVar3 = (int *)(DAT_10023e90 + 0x20);
  local_2c = &_vftable_;
  local_24 = 0;
  local_28 = piVar3;
  if ((&uStack00000000 != (undefined1 *)0x28) && (piVar3 != (int *)0x0)) {
    local_24 = (**(code **)*piVar3)(0xffffffff,uVar2);
    this = extraout_ECX_00;
  }
  iVar1 = local_24;
  local_c = 0;
  if (DAT_10023e90 == 0) {
    std::bad_alloc::bad_alloc((bad_alloc *)this);
  }
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,(LPVOID)param_1);
  local_c = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x28) && (piVar3 != (int *)0x0)) && (iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_2c);
  return;
}



/* ---- XLock @ 10011280 size=232 ---- */

/* public: static void * __cdecl XSmallObject::operator new(unsigned int) */

XLock * __thiscall XLock::XLock(XLock *this)

{
  int iVar1;
  uint uVar2;
  HANDLE hHeap;
  XLock *pXVar3;
  XLock *extraout_ECX;
  XLock *extraout_ECX_00;
  int *piVar4;
  undefined1 uStack00000000;
  SIZE_T in_stack_00000004;
  DWORD dwFlags;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x11280  77  ??2XSmallObject@@SAPAXI@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_100165d9;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_2c;
  uVar2 = DAT_10022024 ^ (int)register0x00000010 - 0x38U;
  ExceptionList = &local_14;
  if (DAT_10023e90 == 0) {
    std::bad_alloc::bad_alloc((bad_alloc *)this);
    this = extraout_ECX;
  }
  piVar4 = (int *)(DAT_10023e90 + 0x20);
  local_2c = &_vftable_;
  local_24 = 0;
  local_28 = piVar4;
  if ((&uStack00000000 != (undefined1 *)0x28) && (piVar4 != (int *)0x0)) {
    local_24 = (**(code **)*piVar4)(0xffffffff,uVar2);
    this = extraout_ECX_00;
  }
  iVar1 = local_24;
  local_c = 0;
  if (DAT_10023e90 == 0) {
    std::bad_alloc::bad_alloc((bad_alloc *)this);
  }
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,dwFlags,in_stack_00000004);
  local_c = 0xffffffff;
  if (((&uStack00000000 != (undefined1 *)0x28) && (piVar4 != (int *)0x0)) && (iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))();
  }
  ExceptionList = local_14;
  pXVar3 = (XLock *)__security_check_cookie(local_1c ^ (uint)&local_2c);
  return pXVar3;
}



/* ---- FUN_100113b0 @ 100113b0 size=128 ---- */

void FUN_100113b0(void)

{
  uint uVar1;
  uint uVar2;
  void *_Memory;
  int in_EAX;
  
  while ((uVar1 = *(uint *)(in_EAX + 0xc), uVar1 != 0 &&
         ((int)(*(int *)(in_EAX + 0x10) - uVar1) >> 2 != 0))) {
    uVar2 = *(uint *)(in_EAX + 0x10);
    if (uVar2 < uVar1) {
      FUN_10008e31();
    }
    if ((*(uint *)(in_EAX + 0x10) < uVar2 - 4) || (uVar2 - 4 < *(uint *)(in_EAX + 0xc))) {
      FUN_10008e31();
    }
    if (*(undefined4 **)(in_EAX + 0x10) <= (undefined4 *)(uVar2 - 4)) {
      FUN_10008e31();
    }
    _Memory = *(void **)(uVar2 - 4);
    if ((*(int *)(in_EAX + 0xc) != 0) &&
       (*(int *)(in_EAX + 0x10) - *(int *)(in_EAX + 0xc) >> 2 != 0)) {
      *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + -4;
    }
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
  }
  return;
}



/* ---- XFixedSizeMemoryBlockPool_Constructor_or_Destructor @ 10011430 size=55 ---- */

void __fastcall
XFixedSizeMemoryBlockPool::XFixedSizeMemoryBlockPool_Constructor_or_Destructor(undefined4 *param_1)

{
  *param_1 = &vftable;
  FUN_100113b0();
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* ---- XLock_Constructor_or_Destructor @ 10011470 size=271 ---- */

void __fastcall XLock::XLock_Constructor_or_Destructor(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uStack00000000;
  undefined1 auStackY_c0 [128];
  XLock_vftable *local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_100161fe;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_2c;
  ExceptionList = &local_14;
  if (param_1 != 0) {
    local_2c = &_vftable_;
    local_28 = &DAT_10023e24;
    local_24 = 0;
    if (&uStack00000000 != (undefined1 *)0x28) {
      local_24 = (*(code *)*DAT_10023e24)(0xffffffff,DAT_10022024 ^ (uint)(auStackY_c0 + 0x88));
    }
    iVar1 = local_24;
    iVar2 = FUN_100054f0();
    if (iVar2 == 0) {
      puVar3 = _malloc(param_1 + 0xc);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[2] = 0;
        puVar3[1] = param_1;
        *puVar3 = 0;
      }
    }
    else {
      FUN_100053b0(iVar2);
    }
    uStack_c = 0xffffffff;
    if ((&uStack00000000 != (undefined1 *)0x28) && (uStack_c = 0xffffffff, iVar1 != 0)) {
      (*(code *)DAT_10023e24[1])();
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_2c);
  return;
}



/* ---- XLock_Constructor_or_Destructor @ 10011580 size=286 ---- */

void __fastcall XLock::XLock_Constructor_or_Destructor(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 uStack00000000;
  undefined1 auStackY_c8 [128];
  undefined1 auStack_34 [4];
  uint uStack_30;
  XLock_vftable *local_2c;
  int *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1001622e;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)auStack_34;
  ExceptionList = &local_14;
  piVar4 = (int *)(param_1 + 0x14);
  local_2c = &_vftable_;
  local_24 = 0;
  local_28 = piVar4;
  if ((&uStack00000000 != (undefined1 *)0x28) && (piVar4 != (int *)0x0)) {
    local_24 = (**(code **)*piVar4)(0xffffffff,DAT_10022024 ^ (uint)(auStackY_c8 + 0x88));
  }
  local_c = 0;
  while ((uVar1 = *(uint *)(param_1 + 8), uVar1 != 0 &&
         ((int)(*(int *)(param_1 + 0xc) - uVar1) >> 2 != 0))) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 < uVar1) {
      FUN_10008e31();
    }
    uStack_30 = uVar2;
    if ((*(uint *)(param_1 + 0xc) < uVar2 - 4) || (uVar2 - 4 < *(uint *)(param_1 + 8))) {
      FUN_10008e31();
      piVar4 = local_28;
    }
    if (*(int **)(param_1 + 0xc) <= (int *)(uVar2 - 4)) {
      FUN_10008e31();
    }
    puVar3 = *(undefined4 **)(uVar2 - 4);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 != 0))
    {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
    }
  }
  local_c = 0xffffffff;
  if ((&uStack00000000 != (undefined1 *)0x28) && ((piVar4 != (int *)0x0 && (local_24 != 0)))) {
    (**(code **)(*piVar4 + 4))();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_34);
  return;
}



/* ---- FUN_100116a0 @ 100116a0 size=152 ---- */

void __fastcall FUN_100116a0(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001626c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor or destructor (approx location) for XMemoryPool */
  *param_1 = &XMemoryPool::vftable;
  local_4 = 1;
  XLock::XLock_Constructor_or_Destructor((int)param_1);
  _Memory = (undefined4 *)param_1[6];
                    /* inlined constructor or destructor (approx location) for XCriticalSection */
  param_1[5] = &XCriticalSection::_vftable_;
  if (_Memory != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*_Memory);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    param_1[6] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}



/* ---- XFixedSizeMemoryBlockPool @ 10011740 size=91 ---- */

XFixedSizeMemoryBlockPool * __thiscall
XFixedSizeMemoryBlockPool::XFixedSizeMemoryBlockPool
          (XFixedSizeMemoryBlockPool *this,undefined4 *param_1)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10016498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = in_stack_00000008;
  *param_1 = &vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0;
  FUN_10005560();
  ExceptionList = local_c;
  return (XFixedSizeMemoryBlockPool *)param_1;
}



/* ---- XLock_Constructor_or_Destructor @ 100117a0 size=274 ---- */

void XLock::XLock_Constructor_or_Destructor(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  void *unaff_ESI;
  undefined1 uStack00000000;
  undefined1 auStack_30 [2];
  undefined1 auStack_2e [2];
  XLock_vftable *local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10016609;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)auStack_30;
  ExceptionList = &local_14;
  if (unaff_ESI != (void *)0x0) {
    local_2c = &_vftable_;
    local_28 = &DAT_10023e24;
    local_24 = 0;
    if (&uStack00000000 != (undefined1 *)0x28) {
      local_24 = (*(code *)*DAT_10023e24)(0xffffffff,DAT_10022024 ^ (uint)(auStack_30 + -8));
    }
    iVar1 = local_24;
    local_c = 0;
    iVar2 = FUN_100054f0();
    if (iVar2 == 0) {
      _free(unaff_ESI);
      local_c = 0xffffffff;
      if ((&uStack00000000 != (undefined1 *)0x28) && (iVar1 != 0)) {
        (*(code *)DAT_10023e24[1])();
      }
    }
    else {
      FUN_10005450(extraout_ECX,iVar2,unaff_ESI);
      local_c = 0xffffffff;
      if ((&uStack00000000 != (undefined1 *)0x28) && (iVar1 != 0)) {
        (*(code *)DAT_10023e24[1])();
      }
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_30);
  return;
}



/* ---- FUN_100118c0 @ 100118c0 size=450 ---- */

void FUN_100118c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uStack00000000;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 auStack_34 [2];
  XLock_vftable *local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1001664f;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&puStack_3c;
  ExceptionList = &local_14;
                    /* inlined constructor or destructor (approx location) for XLock */
  local_2c = &XLock::_vftable_;
  local_28 = &DAT_10023e24;
  local_24 = 0;
  if (&uStack00000000 != (undefined1 *)0x28) {
    local_24 = (*(code *)*DAT_10023e24)(0xffffffff,DAT_10022024 ^ (uint)(auStack_34 + -5));
  }
  local_c = 0;
  iVar3 = 0x400;
  FUN_10005570();
  iStack_38 = 0;
  do {
    puVar2 = (undefined4 *)FUN_100086ab(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
                    /* inlined constructor or destructor (approx location) for
                       XFixedSizeMemoryBlockPool */
      *puVar2 = &XFixedSizeMemoryBlockPool::vftable;
      puVar2[1] = iVar3;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      local_c = CONCAT31(local_c._1_3_,2);
      puStack_3c = puVar2;
      FUN_10005560();
    }
    puVar1 = DAT_10023e1c;
    local_c = local_c & 0xffffff00;
    puStack_3c = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      local_c = 0xffffffff;
      if ((&uStack00000000 != (undefined1 *)0x28) && (local_24 != 0)) {
        (*(code *)DAT_10023e24[1])();
      }
      goto LAB_10011a31;
    }
    if ((DAT_10023e18 == (undefined4 *)0x0) ||
       ((uint)(DAT_10023e20 - (int)DAT_10023e18 >> 2) <=
        (uint)((int)DAT_10023e1c - (int)DAT_10023e18 >> 2))) {
      if (DAT_10023e1c < DAT_10023e18) {
        FUN_10008e31();
      }
      FUN_10003d20(auStack_34,&puStack_3c,&DAT_10023e14,puVar1);
    }
    else {
      *DAT_10023e1c = puVar2;
      DAT_10023e1c = DAT_10023e1c + 1;
    }
    iStack_38 = iStack_38 + 1;
    iVar3 = iVar3 * 4;
  } while (iStack_38 < 0xc);
  local_c = 0xffffffff;
  if ((&uStack00000000 != (undefined1 *)0x28) && (local_24 != 0)) {
    (*(code *)DAT_10023e24[1])();
  }
LAB_10011a31:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&puStack_3c);
  return;
}



/* ---- XMemoryPool @ 10011a90 size=118 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XMemoryPool * __thiscall XMemoryPool::XMemoryPool(XMemoryPool *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001668d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _DAT_10023e10 = &vftable;
  DAT_10023e18 = 0;
  DAT_10023e1c = 0;
  DAT_10023e20 = 0;
  local_4 = 0;
  XCriticalSection::XCriticalSection((XCriticalSection *)&DAT_10023e24,4000);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100118c0();
  ExceptionList = local_c;
  return (XMemoryPool *)&DAT_10023e10;
}



/* ---- operator_void* @ 10011b10 size=11 ---- */

/* public: __thiscall XMemory::operator void *(void) */

void * __thiscall XMemory::operator_void_(XMemory *this)

{
                    /* 0x11b10  102  ??BXMemory@@QAEPAXXZ */
  if (*(int *)this == 0) {
    return (void *)0x0;
  }
  return (void *)(*(int *)this + 0xc);
}



/* ---- operator_void_const* @ 10011b20 size=11 ---- */

/* public: __thiscall XMemory::operator void const *(void)const  */

void * __thiscall XMemory::operator_void_const_(XMemory *this)

{
                    /* 0x11b20  103  ??BXMemory@@QBEPBXXZ */
  if (*(int *)this == 0) {
    return (void *)0x0;
  }
  return (void *)(*(int *)this + 0xc);
}



/* ---- operator!= @ 10011b30 size=16 ---- */

/* public: int __thiscall XMemory::operator!=(class XMemory const &)const  */

int __thiscall XMemory::operator!=(XMemory *this,XMemory *param_1)

{
                    /* 0x11b30  100  ??9XMemory@@QBEHABV0@@Z */
  return (uint)(*(int *)param_1 != *(int *)this);
}



/* ---- operator== @ 10011b40 size=16 ---- */

/* public: int __thiscall XMemory::operator==(class XMemory const &)const  */

int __thiscall XMemory::operator==(XMemory *this,XMemory *param_1)

{
                    /* 0x11b40  99  ??8XMemory@@QBEHABV0@@Z */
  return (uint)(*(int *)param_1 == *(int *)this);
}



/* ---- IsEmpty @ 10011b50 size=8 ---- */

/* public: int __thiscall XMemory::IsEmpty(void)const  */

int __thiscall XMemory::IsEmpty(XMemory *this)

{
                    /* 0x11b50  215  ?IsEmpty@XMemory@@QBEHXZ */
  return (uint)(*(int *)this == 0);
}



/* ---- GetSize @ 10011b60 size=11 ---- */

/* public: unsigned long __thiscall XMemory::GetSize(void)const  */

ulong __thiscall XMemory::GetSize(XMemory *this)

{
                    /* 0x11b60  202  ?GetSize@XMemory@@QBEKXZ */
  if (*(int *)this == 0) {
    return 0;
  }
  return *(ulong *)(*(int *)this + 8);
}



/* ---- GetData @ 10011b70 size=11 ---- */

/* public: void * __thiscall XMemory::GetData(void) */

void * __thiscall XMemory::GetData(XMemory *this)

{
                    /* 0x11b70  185  ?GetData@XMemory@@QAEPAXXZ */
  if (*(int *)this == 0) {
    return (void *)0x0;
  }
  return (void *)(*(int *)this + 0xc);
}



/* ---- GetData @ 10011b80 size=11 ---- */

/* public: void const * __thiscall XMemory::GetData(void)const  */

void * __thiscall XMemory::GetData(XMemory *this)

{
                    /* 0x11b80  186  ?GetData@XMemory@@QBEPBXXZ */
  if (*(int *)this == 0) {
    return (void *)0x0;
  }
  return (void *)(*(int *)this + 0xc);
}



/* ---- XMemory @ 10011b90 size=11 ---- */

/* private: __thiscall XMemory::XMemory(struct MEMORY_BLOCK *) */

void __thiscall XMemory::XMemory(XMemory *this,MEMORY_BLOCK *param_1)

{
                    /* 0x11b90  22  ??0XMemory@@AAE@PAUMEMORY_BLOCK@@@Z */
  *(MEMORY_BLOCK **)this = param_1;
  return;
}



/* ---- XMemory @ 10011ba0 size=9 ---- */

/* public: __thiscall XMemory::XMemory(void) */

void __thiscall XMemory::XMemory(XMemory *this)

{
                    /* 0x11ba0  24  ??0XMemory@@QAE@XZ */
  *(undefined4 *)this = 0;
  return;
}



/* ---- XMemorySize @ 10011bb0 size=19 ---- */

/* unsigned long __stdcall XMemorySize(class XMemory &) */

ulong XMemorySize(XMemory *param_1)

{
                    /* 0x11bb0  348  ?XMemorySize@@YGKAAVXMemory@@@Z */
  if (*(int *)param_1 == 0) {
    return 0;
  }
  return *(ulong *)(*(int *)param_1 + 8);
}



/* ---- Free @ 10011bd0 size=37 ---- */

/* private: void __thiscall XMemory::Free(void) */

void __thiscall XMemory::Free(XMemory *this)

{
  LONG LVar1;
  
                    /* 0x11bd0  183  ?Free@XMemory@@AAEXXZ */
  if (*(LONG **)this != (LONG *)0x0) {
    LVar1 = InterlockedDecrement(*(LONG **)this);
    if (LVar1 == 0) {
      XLock::XLock_Constructor_or_Destructor();
    }
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- Alloc @ 10011c00 size=101 ---- */

/* private: int __thiscall XMemory::Alloc(unsigned long) */

int __thiscall XMemory::Alloc(XMemory *this,ulong param_1)

{
  LONG LVar1;
  undefined4 *extraout_EAX;
  
                    /* 0x11c00  136  ?Alloc@XMemory@@AAEHK@Z */
  if (*(LONG **)this != (LONG *)0x0) {
    LVar1 = InterlockedDecrement(*(LONG **)this);
    if (LVar1 == 0) {
      XLock::XLock_Constructor_or_Destructor();
    }
    *(undefined4 *)this = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  XLock::XLock_Constructor_or_Destructor(param_1);
  if (extraout_EAX == (undefined4 *)0x0) {
    *(undefined4 *)this = 0;
    return 0;
  }
  extraout_EAX[2] = param_1;
  *extraout_EAX = 1;
  *(undefined4 **)this = extraout_EAX;
  return (uint)(extraout_EAX != (undefined4 *)0x0);
}



/* ---- ~XMemory @ 10011c70 size=37 ---- */

/* public: __thiscall XMemory::~XMemory(void) */

void __thiscall XMemory::~XMemory(XMemory *this)

{
  LONG LVar1;
  
                    /* 0x11c70  65  ??1XMemory@@QAE@XZ */
  if (*(LONG **)this != (LONG *)0x0) {
    LVar1 = InterlockedDecrement(*(LONG **)this);
    if (LVar1 == 0) {
      XLock::XLock_Constructor_or_Destructor();
    }
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- XMemoryFree @ 10011ca0 size=41 ---- */

/* void __stdcall XMemoryFree(class XMemory &) */

void XMemoryFree(XMemory *param_1)

{
  LONG LVar1;
  
                    /* 0x11ca0  346  ?XMemoryFree@@YGXAAVXMemory@@@Z */
  if (*(LONG **)param_1 != (LONG *)0x0) {
    LVar1 = InterlockedDecrement(*(LONG **)param_1);
    if (LVar1 == 0) {
      XLock::XLock_Constructor_or_Destructor();
    }
    *(undefined4 *)param_1 = 0;
  }
  return;
}



/* ---- XMemoryAlloc @ 10011cd0 size=64 ---- */

/* class XMemory __stdcall XMemoryAlloc(unsigned long) */

ulong XMemoryAlloc(ulong param_1)

{
  undefined4 *extraout_EAX;
  int in_stack_00000008;
  
                    /* 0x11cd0  344  ?XMemoryAlloc@@YG?AVXMemory@@K@Z */
  if (in_stack_00000008 != 0) {
    XLock::XLock_Constructor_or_Destructor(in_stack_00000008);
    if (extraout_EAX != (undefined4 *)0x0) {
      extraout_EAX[2] = in_stack_00000008;
      *extraout_EAX = 1;
      *(undefined4 **)param_1 = extraout_EAX;
      return param_1;
    }
  }
  *(undefined4 *)param_1 = 0;
  return param_1;
}



/* ---- Clone @ 10011d10 size=101 ---- */

/* private: class XMemory __thiscall XMemory::Clone(void) */

void __thiscall XMemory::Clone(XMemory *this)

{
  int iVar1;
  undefined4 *extraout_EAX;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  
                    /* 0x11d10  146  ?Clone@XMemory@@AAE?AV1@XZ */
  if (*(int *)this == 0) {
    *in_stack_00000004 = 0;
    return;
  }
  iVar1 = *(int *)(*(int *)this + 8);
  if (iVar1 != 0) {
    XLock::XLock_Constructor_or_Destructor(iVar1);
    if (extraout_EAX != (undefined4 *)0x0) {
      extraout_EAX[2] = iVar1;
      *extraout_EAX = 1;
      puVar2 = extraout_EAX;
      goto LAB_10011d53;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_10011d53:
  _memcpy(puVar2 + 3,(void *)(*(int *)this + 0xc),*(size_t *)(*(int *)this + 8));
  *in_stack_00000004 = puVar2;
  return;
}



/* ---- operator= @ 10011d80 size=70 ---- */

/* public: class XMemory & __thiscall XMemory::operator=(class XMemory const &) */

XMemory * __thiscall XMemory::operator=(XMemory *this,XMemory *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
                    /* 0x11d80  86  ??4XMemory@@QAEAAV0@ABV0@@Z */
  if ((this != param_1) && (pLVar1 = *(LONG **)this, *(LONG **)param_1 != pLVar1)) {
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if (LVar2 == 0) {
        XLock::XLock_Constructor_or_Destructor();
      }
      *(undefined4 *)this = 0;
    }
    pLVar1 = *(LONG **)param_1;
    if (pLVar1 != (LONG *)0x0) {
      *(LONG **)this = pLVar1;
      InterlockedIncrement(pLVar1);
    }
  }
  return this;
}



/* ---- Realloc @ 10011dd0 size=196 ---- */

/* private: int __thiscall XMemory::Realloc(unsigned long) */

int __thiscall XMemory::Realloc(XMemory *this,ulong param_1)

{
  LONG *lpAddend;
  uint uVar1;
  LONG LVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  undefined4 *puVar4;
  
                    /* 0x11dd0  254  ?Realloc@XMemory@@AAEHK@Z */
  lpAddend = *(LONG **)this;
  if (param_1 == 0) {
    if (lpAddend != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(lpAddend);
      if (LVar2 == 0) {
        XLock::XLock_Constructor_or_Destructor();
      }
      *(undefined4 *)this = 0;
      return 1;
    }
  }
  else {
    if (lpAddend == (LONG *)0x0) {
      iVar3 = Alloc(this,param_1);
      return iVar3;
    }
    if ((*lpAddend == 1) && (param_1 <= *(uint *)(*(int *)this + 4))) {
      *(ulong *)(*(int *)this + 8) = param_1;
      return 1;
    }
    XLock::XLock_Constructor_or_Destructor(param_1);
    if (extraout_EAX == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      extraout_EAX[2] = param_1;
      *extraout_EAX = 1;
      puVar4 = extraout_EAX;
    }
    uVar1 = *(uint *)(*(int *)this + 8);
    if (uVar1 <= param_1) {
      param_1 = uVar1;
    }
    _memcpy(puVar4 + 3,(void *)(*(int *)this + 0xc),param_1);
    if (*(LONG **)this != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(*(LONG **)this);
      if (LVar2 == 0) {
        XLock::XLock_Constructor_or_Destructor();
      }
      *(undefined4 *)this = 0;
    }
    *(undefined4 **)this = puVar4;
  }
  return 1;
}



/* ---- XMemory @ 10011ea0 size=38 ---- */

/* public: __thiscall XMemory::XMemory(class XMemory const &) */

XMemory * __thiscall XMemory::XMemory(XMemory *this,XMemory *param_1)

{
  LONG *lpAddend;
  
                    /* 0x11ea0  23  ??0XMemory@@QAE@ABV0@@Z */
  *(undefined4 *)this = 0;
  if ((this != param_1) && (lpAddend = *(LONG **)param_1, lpAddend != (LONG *)0x0)) {
    *(LONG **)this = lpAddend;
    InterlockedIncrement(lpAddend);
  }
  return this;
}



/* ---- XMemoryRealloc @ 10011ed0 size=64 ---- */

/* class XMemory __stdcall XMemoryRealloc(class XMemory &,unsigned long) */

XMemory * XMemoryRealloc(XMemory *param_1,ulong param_2)

{
  LONG *lpAddend;
  ulong in_stack_0000000c;
  
                    /* 0x11ed0  347  ?XMemoryRealloc@@YG?AVXMemory@@AAV1@K@Z */
  XMemory::Realloc((XMemory *)param_2,in_stack_0000000c);
  *(undefined4 *)param_1 = 0;
  if ((param_1 != (XMemory *)param_2) && (lpAddend = *(LONG **)param_2, lpAddend != (LONG *)0x0)) {
    *(LONG **)param_1 = lpAddend;
    InterlockedIncrement(lpAddend);
  }
  return param_1;
}



/* ---- XMemoryClone @ 10011f10 size=31 ---- */

/* class XMemory __stdcall XMemoryClone(class XMemory &) */

XMemory * XMemoryClone(XMemory *param_1)

{
  XMemory *in_stack_00000008;
  
                    /* 0x11f10  345  ?XMemoryClone@@YG?AVXMemory@@AAV1@@Z */
  XMemory::Clone(in_stack_00000008);
  return param_1;
}



/* ---- XDestroyThreadPool @ 10011f30 size=37 ---- */

/* int __stdcall XDestroyThreadPool(void *) */

int XDestroyThreadPool(void *param_1)

{
                    /* 0x11f30  339  ?XDestroyThreadPool@@YGHPAX@Z */
  if (param_1 == (void *)0x0) {
    SetLastError(0x57);
    return 0;
  }
  (*(code *)**(undefined4 **)param_1)(1);
  return 1;
}



/* ---- XBindCompletionCallback @ 10011fd0 size=68 ---- */

/* int __stdcall XBindCompletionCallback(void *,void *,void (__stdcall*)(unsigned long,unsigned
   long,struct _OVERLAPPED *)) */

int XBindCompletionCallback
              (void *param_1,void *param_2,_func_void_ulong_ulong__OVERLAPPED_ptr *param_3)

{
  uint uVar1;
  
                    /* 0x11fd0  332  ?XBindCompletionCallback@@YGHPAX0P6GXKKPAU_OVERLAPPED@@@Z@Z */
  if ((((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 4) == 0)) || (param_2 == (void *)0x0))
     || ((param_2 == (void *)0xffffffff ||
         (param_3 == (_func_void_ulong_ulong__OVERLAPPED_ptr *)0x0)))) {
    SetLastError(6);
    return 0;
  }
  uVar1 = (**(code **)(**(int **)((int)param_1 + 4) + 4))(param_2,param_3);
  return uVar1 & 0xff;
}



/* ---- XQueueWorkItem @ 10012020 size=74 ---- */

/* int __stdcall XQueueWorkItem(void *,unsigned long (__stdcall*)(void *),void *) */

int XQueueWorkItem(void *param_1,_func_ulong_void_ptr *param_2,void *param_3)

{
  uint uVar1;
  
                    /* 0x12020  349  ?XQueueWorkItem@@YGHPAXP6GK0@Z0@Z */
  if ((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 4) == 0)) {
    SetLastError(6);
    return 0;
  }
  if (param_2 == (_func_ulong_void_ptr *)0x0) {
    SetLastError(0x57);
    return 0;
  }
  uVar1 = (**(code **)(**(int **)((int)param_1 + 4) + 0xc))(0xfffffffe,param_2,param_3);
  return uVar1 & 0xff;
}



/* ---- XGetThreadPoolSize @ 10012090 size=45 ---- */

/* int __stdcall XGetThreadPoolSize(void *) */

int XGetThreadPoolSize(void *param_1)

{
                    /* 0x12090  342  ?XGetThreadPoolSize@@YGHPAX@Z */
  if (param_1 == (void *)0x0) {
    SetLastError(0x57);
    return -1;
  }
  if (*(int *)((int)param_1 + 0xc) == 0) {
    return 0;
  }
  return *(int *)((int)param_1 + 0x10) - *(int *)((int)param_1 + 0xc) >> 2;
}



/* ---- FUN_100120c0 @ 100120c0 size=88 ---- */

undefined1 FUN_100120c0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    SetLastError(6);
    return 0;
  }
  if (unaff_EDI == 0) {
    SetLastError(0x57);
    return 0;
  }
  piVar2 = (int *)FUN_10005030(unaff_ESI + 0x1c);
  piVar2[1] = param_1;
  *piVar2 = unaff_EDI;
  piVar2[2] = param_2;
  piVar2[3] = param_3;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0xc))(0xfffffffc,piVar2,0);
  return uVar1;
}



/* ---- FUN_10012120 @ 10012120 size=345 ---- */

void FUN_10012120(int param_1)

{
  HANDLE *lpHandles;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = 0;
    while( true ) {
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x10) - iVar3 >> 2;
      }
      if (iVar1 <= iVar4) break;
      (**(code **)(**(int **)(param_1 + 4) + 0xc))(0xffffffff,0,0);
      iVar4 = iVar4 + 1;
    }
    if ((iVar3 == 0) || (*(int *)(param_1 + 0x10) - iVar3 >> 2 == 0)) {
      FUN_10008e31();
    }
    lpHandles = *(HANDLE **)(param_1 + 0xc);
    if (lpHandles == (HANDLE *)0x0) {
      DVar2 = 0;
    }
    else {
      DVar2 = *(int *)(param_1 + 0x10) - (int)lpHandles >> 2;
    }
    DVar2 = WaitForMultipleObjects(DVar2,lpHandles,1,0xffffffff);
    uVar5 = 0;
    if (DVar2 == 0x102) {
      while( true ) {
        iVar4 = *(int *)(param_1 + 0xc);
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x10) - iVar4 >> 2;
        }
        if (iVar3 <= (int)uVar5) break;
        if ((iVar4 == 0) || ((uint)(*(int *)(param_1 + 0x10) - iVar4 >> 2) <= uVar5)) {
          FUN_10008e31();
        }
        TerminateThread(*(HANDLE *)(*(int *)(param_1 + 0xc) + uVar5 * 4),0xffffffff);
        if ((*(int *)(param_1 + 0xc) == 0) ||
           ((uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2) <= uVar5)) {
          FUN_10008e31();
        }
        CloseHandle(*(HANDLE *)(*(int *)(param_1 + 0xc) + uVar5 * 4));
        uVar5 = uVar5 + 1;
      }
    }
    else {
      while( true ) {
        iVar4 = *(int *)(param_1 + 0xc);
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x10) - iVar4 >> 2;
        }
        if (iVar3 <= (int)uVar5) break;
        if ((iVar4 == 0) || ((uint)(*(int *)(param_1 + 0x10) - iVar4 >> 2) <= uVar5)) {
          FUN_10008e31();
        }
        CloseHandle(*(HANDLE *)(*(int *)(param_1 + 0xc) + uVar5 * 4));
        uVar5 = uVar5 + 1;
      }
    }
    FUN_100022e0();
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* ---- XQueueWorkItem @ 10012280 size=53 ---- */

/* int __stdcall XQueueWorkItem(void *,void (__stdcall*)(unsigned long,unsigned long,struct
   _OVERLAPPED *),unsigned long,unsigned long,struct _OVERLAPPED *) */

int XQueueWorkItem(void *param_1,_func_void_ulong_ulong__OVERLAPPED_ptr *param_2,ulong param_3,
                  ulong param_4,_OVERLAPPED *param_5)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  
                    /* 0x12280  350  ?XQueueWorkItem@@YGHPAXP6GXKKPAU_OVERLAPPED@@@ZKK1@Z */
  if (param_1 == (void *)0x0) {
    SetLastError(6);
    return 0;
  }
  uVar1 = FUN_100120c0(param_3,param_4,(int)param_5);
  return CONCAT31(extraout_var,uVar1);
}



/* ---- XThreadPool_Constructor_or_Destructor @ 100122c0 size=118 ---- */

void __fastcall XThreadPool::XThreadPool_Constructor_or_Destructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_100162f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &vftable;
  local_4 = 1;
  FUN_10012120((int)param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_10004f90(param_1 + 7);
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10012340 @ 10012340 size=290 ---- */

undefined4 FUN_10012340(int param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  code *local_1c;
  int local_18;
  int local_14;
  LONG *local_10;
  int *local_c;
  
  local_c = *(int **)(param_1 + 4);
  local_10 = (LONG *)(param_1 + 0x18);
  local_14 = 0;
  local_1c = (code *)0x0;
  local_18 = 0;
  do {
    InterlockedIncrement(local_10);
LAB_10012372:
    do {
      while( true ) {
        local_14 = 0;
        local_1c = (code *)0x0;
        local_18 = 0;
        cVar3 = (**(code **)(*local_c + 0x10))(&local_14,&local_1c,&local_18,0xffffffff);
        iVar2 = local_18;
        pcVar1 = local_1c;
        if (cVar3 == '\x01') break;
        DVar4 = GetLastError();
        if (local_18 == 0) {
LAB_1001244c:
          InterlockedDecrement(local_10);
          return 0;
        }
        if (local_1c != (code *)0x0) {
          (*local_1c)(DVar4,local_14,local_18);
        }
      }
      if (local_14 == -1) goto LAB_1001244c;
      if (local_14 != -2) {
        if (local_14 == -4) {
          if (local_1c != (code *)0x0) {
            if (*(code **)local_1c != (code *)0x0) {
              (**(code **)local_1c)
                        (*(undefined4 *)(local_1c + 4),*(undefined4 *)(local_1c + 8),
                         *(undefined4 *)(local_1c + 0xc));
            }
            XLock::XLock_Constructor_or_Destructor(param_1 + 0x1c,pcVar1);
          }
        }
        else if (local_1c != (code *)0x0) {
          (*local_1c)(0,local_14,local_18);
        }
        goto LAB_10012372;
      }
    } while (local_1c == (code *)0x0);
    InterlockedDecrement(local_10);
    (*pcVar1)(iVar2);
  } while( true );
}



/* ---- XThreadPool @ 10012470 size=94 ---- */

XThreadPool * __thiscall XThreadPool::XThreadPool(XThreadPool *this)

{
  XThreadPool *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100164be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_stack_00000004->vftablePtr = &vftable;
  (in_stack_00000004->XThreadPool_data).offset_0x0 = (int *)0x0;
  (in_stack_00000004->XThreadPool_data).offset_0x8 = (void *)0x0;
  (in_stack_00000004->XThreadPool_data).offset_0xc = 0;
  (in_stack_00000004->XThreadPool_data).offset_0x10 = 0;
  local_4 = 0;
  (in_stack_00000004->XThreadPool_data).offset_0x14 = 0;
  XObjectPool<XThreadPool::XWorkItem>::XObjectPool<XThreadPool::XWorkItem>
            ((XObjectPool<XThreadPool::XWorkItem> *)this);
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- FUN_100124d0 @ 100124d0 size=50 ---- */

undefined4 FUN_100124d0(int param_1)

{
  HRESULT HVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    HVar1 = CoInitializeEx((LPVOID)0x0,0);
    if (-1 < HVar1) {
      uVar2 = FUN_10012340(param_1);
      CoUninitialize();
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* ---- FUN_10012510 @ 10012510 size=251 ---- */

undefined4 FUN_10012510(uint param_1)

{
  uintptr_t *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *unaff_EBX;
  int local_1c;
  uint local_18;
  uintptr_t local_14;
  undefined4 local_10 [3];
  
  FUN_10012120((int)unaff_EBX);
  puVar3 = FUN_100145b0();
  *(undefined4 **)((int)unaff_EBX + 4) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    if (0x3ff < param_1) {
      param_1 = 0x400;
    }
    local_1c = 0;
    if (0 < (int)param_1) {
      do {
        local_18 = 0;
        local_14 = __beginthreadex((void *)0x0,0,FUN_100124d0,unaff_EBX,0,&local_18);
        if (local_14 == 0) break;
        puVar3 = *(undefined4 **)((int)unaff_EBX + 0xc);
        if ((puVar3 == (undefined4 *)0x0) ||
           ((uint)(*(int *)((int)unaff_EBX + 0x14) - (int)puVar3 >> 2) <=
            (uint)(*(int *)((int)unaff_EBX + 0x10) - (int)puVar3 >> 2))) {
          puVar2 = *(undefined4 **)((int)unaff_EBX + 0x10);
          if (puVar2 < puVar3) {
            FUN_10008e31();
          }
          FUN_10003d20(local_10,&local_14,(void *)((int)unaff_EBX + 8),puVar2);
        }
        else {
          puVar1 = *(uintptr_t **)((int)unaff_EBX + 0x10);
          *puVar1 = local_14;
          *(uintptr_t **)((int)unaff_EBX + 0x10) = puVar1 + 1;
        }
        local_1c = local_1c + 1;
      } while (local_1c < (int)param_1);
    }
    if (*(int *)((int)unaff_EBX + 0xc) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)((int)unaff_EBX + 0x10) - *(int *)((int)unaff_EBX + 0xc) >> 2;
    }
    if (param_1 == uVar4) {
      return 1;
    }
    FUN_10012120((int)unaff_EBX);
  }
  return 0;
}



/* ---- XCreateThreadPool @ 10012610 size=178 ---- */

/* void * __stdcall XCreateThreadPool(unsigned long) */

void * XCreateThreadPool(ulong param_1)

{
  int iVar1;
  XThreadPool *this;
  XThreadPool *this_00;
  DWORD dwErrCode;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12610  335  ?XCreateThreadPool@@YGPAXK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100166d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_1 == 0) || (0x400 < param_1)) {
    dwErrCode = 0x57;
  }
  else {
    iVar1 = FUN_100086ab(0x3c);
    local_4 = 0;
    if (iVar1 == 0) {
      this = (XThreadPool *)0x0;
    }
    else {
      this = XThreadPool::XThreadPool(this_00);
    }
    local_4 = 0xffffffff;
    if (this != (XThreadPool *)0x0) {
      iVar1 = FUN_10012510(param_1);
      if (iVar1 == 0) {
        (*this->vftablePtr->vfunction1)(this,1);
        ExceptionList = local_c;
        return (void *)0x0;
      }
      ExceptionList = local_c;
      return this;
    }
    dwErrCode = 0xe;
  }
  local_4 = 0xffffffff;
  SetLastError(dwErrCode);
  ExceptionList = local_c;
  return (void *)0x0;
}



/* ---- XSetThreadNameA @ 100126d0 size=157 ---- */

/* int __stdcall XSetThreadNameA(unsigned long,char const *) */

int XSetThreadNameA(ulong param_1,char *param_2)

{
  uint uStack_3c;
  ULONG_PTR local_2c;
  char *local_28;
  ulong local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x126d0  353  ?XSetThreadNameA@@YGHKPBD@Z */
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10022024 ^ 0x1001b548;
  uStack_3c = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_1c = (undefined1 *)&uStack_3c;
  local_2c = 0x1000;
  local_28 = param_2;
  local_24 = param_1;
  local_20 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  RaiseException(0x406d1388,0,4,&local_2c);
  ExceptionList = local_14;
  return 1;
}



/* ---- GetReturnValue @ 10012790 size=7 ---- */

/* protected: int __thiscall XThread::GetReturnValue(void)const  */

int __thiscall XThread::GetReturnValue(XThread *this)

{
                    /* 0x12790  199  ?GetReturnValue@XThread@@IBEHXZ */
  return (this->XThread_data).offset_0x0[2];
}



/* ---- SetReturnValue @ 100127a0 size=13 ---- */

/* protected: void __thiscall XThread::SetReturnValue(int) */

void __thiscall XThread::SetReturnValue(XThread *this,int param_1)

{
                    /* 0x127a0  281  ?SetReturnValue@XThread@@IAEXH@Z */
  (this->XThread_data).offset_0x0[2] = param_1;
  return;
}



/* ---- SetThreadName @ 100127b0 size=127 ---- */

/* protected: void __thiscall XThread::SetThreadName(char const *) */

void __thiscall XThread::SetThreadName(XThread *this,char *param_1)

{
  uint uStack_3c;
  ULONG_PTR local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x127b0  286  ?SetThreadName@XThread@@IAEXPBD@Z */
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10022024 ^ 0x1001b568;
  uStack_3c = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_1c = (undefined1 *)&uStack_3c;
  ExceptionList = &local_14;
  local_2c = 0x1000;
  local_28 = param_1;
  local_24 = 0xffffffff;
  local_20 = 0;
  local_8 = 0;
  RaiseException(0x406d1388,0,4,&local_2c);
  ExceptionList = local_14;
  return;
}



/* ---- Terminated @ 10012840 size=7 ---- */

/* protected: bool __thiscall XThread::Terminated(void)const  */

bool __thiscall XThread::Terminated(XThread *this)

{
                    /* 0x12840  297  ?Terminated@XThread@@IBE_NXZ */
  return (bool)*(undefined1 *)((this->XThread_data).offset_0x0 + 4);
}



/* ---- operator_void* @ 10012850 size=6 ---- */

/* public: __thiscall XThread::operator void *(void) */

void * __thiscall XThread::operator_void_(XThread *this)

{
                    /* 0x12850  104  ??BXThread@@QAEPAXXZ */
  return (void *)*(this->XThread_data).offset_0x0;
}



/* ---- GetHandle @ 10012860 size=6 ---- */

/* public: void * __thiscall XThread::GetHandle(void)const  */

void * __thiscall XThread::GetHandle(XThread *this)

{
                    /* 0x12860  192  ?GetHandle@XThread@@QBEPAXXZ */
  return (void *)*(this->XThread_data).offset_0x0;
}



/* ---- Join @ 10012870 size=25 ---- */

/* public: bool __thiscall XThread::Join(void) */

bool __thiscall XThread::Join(XThread *this)

{
  DWORD DVar1;
  
                    /* 0x12870  219  ?Join@XThread@@QAE_NXZ */
  DVar1 = WaitForSingleObject((HANDLE)*(this->XThread_data).offset_0x0,0xffffffff);
  return DVar1 != 0xffffffff;
}



/* ---- GetThreadID @ 10012890 size=7 ---- */

/* public: unsigned int __thiscall XThread::GetThreadID(void)const  */

uint __thiscall XThread::GetThreadID(XThread *this)

{
                    /* 0x12890  207  ?GetThreadID@XThread@@QBEIXZ */
  return (this->XThread_data).offset_0x0[3];
}



/* ---- GetSuspended @ 100128a0 size=7 ---- */

/* public: bool __thiscall XThread::GetSuspended(void)const  */

bool __thiscall XThread::GetSuspended(XThread *this)

{
                    /* 0x128a0  205  ?GetSuspended@XThread@@QBE_NXZ */
  return (bool)*(undefined1 *)((int)(this->XThread_data).offset_0x0 + 5);
}



/* ---- GetPriority @ 100128b0 size=13 ---- */

/* public: int __thiscall XThread::GetPriority(void) */

int __thiscall XThread::GetPriority(XThread *this)

{
  int iVar1;
  
                    /* 0x128b0  196  ?GetPriority@XThread@@QAEHXZ */
  iVar1 = GetThreadPriority((HANDLE)*(this->XThread_data).offset_0x0);
  return iVar1;
}



/* ---- SetPriority @ 100128c0 size=26 ---- */

/* public: bool __thiscall XThread::SetPriority(int) */

bool __thiscall XThread::SetPriority(XThread *this,int param_1)

{
  BOOL BVar1;
  
                    /* 0x128c0  279  ?SetPriority@XThread@@QAE_NH@Z */
  BVar1 = SetThreadPriority((HANDLE)*(this->XThread_data).offset_0x0,param_1);
  return BVar1 == 1;
}



/* ---- GetFinished @ 100128e0 size=7 ---- */

/* public: bool __thiscall XThread::GetFinished(void)const  */

bool __thiscall XThread::GetFinished(XThread *this)

{
                    /* 0x128e0  188  ?GetFinished@XThread@@QBE_NXZ */
  return (bool)*(undefined1 *)((int)(this->XThread_data).offset_0x0 + 6);
}



/* ---- SetFinished @ 100128f0 size=13 ---- */

/* public: void __thiscall XThread::SetFinished(bool) */

void __thiscall XThread::SetFinished(XThread *this,bool param_1)

{
                    /* 0x128f0  275  ?SetFinished@XThread@@QAEX_N@Z */
  *(bool *)((int)(this->XThread_data).offset_0x0 + 6) = param_1;
  return;
}



/* ---- GetFreeOnTerminate @ 10012900 size=7 ---- */

/* public: bool __thiscall XThread::GetFreeOnTerminate(void)const  */

bool __thiscall XThread::GetFreeOnTerminate(XThread *this)

{
                    /* 0x12900  190  ?GetFreeOnTerminate@XThread@@QBE_NXZ */
  return (bool)*(undefined1 *)((int)(this->XThread_data).offset_0x0 + 7);
}



/* ---- SetFreeOnTerminate @ 10012910 size=13 ---- */

/* public: void __thiscall XThread::SetFreeOnTerminate(bool) */

void __thiscall XThread::SetFreeOnTerminate(XThread *this,bool param_1)

{
                    /* 0x12910  277  ?SetFreeOnTerminate@XThread@@QAEX_N@Z */
  *(bool *)((int)(this->XThread_data).offset_0x0 + 7) = param_1;
  return;
}



/* ---- WaitFor @ 10012920 size=56 ---- */

/* public: unsigned int __thiscall XThread::WaitFor(unsigned long,bool) */

uint __thiscall XThread::WaitFor(XThread *this,ulong param_1,bool param_2)

{
  undefined3 in_stack_00000009;
  
                    /* 0x12920  328  ?WaitFor@XThread@@QAEIK_N@Z */
  WaitForSingleObjectEx((HANDLE)*(this->XThread_data).offset_0x0,param_1,(uint)param_2);
  GetExitCodeThread((HANDLE)*(this->XThread_data).offset_0x0,(LPDWORD)&param_2);
  return _param_2;
}



/* ---- Terminate @ 10012960 size=8 ---- */

/* public: void __thiscall XThread::Terminate(void) */

void __thiscall XThread::Terminate(XThread *this)

{
                    /* 0x12960  295  ?Terminate@XThread@@QAEXXZ */
  *(undefined1 *)((this->XThread_data).offset_0x0 + 4) = 1;
  return;
}



/* ---- Resume @ 10012970 size=40 ---- */

/* public: bool __thiscall XThread::Resume(void) */

bool __thiscall XThread::Resume(XThread *this)

{
  DWORD DVar1;
  
                    /* 0x12970  268  ?Resume@XThread@@QAE_NXZ */
  DVar1 = ResumeThread((HANDLE)*(this->XThread_data).offset_0x0);
  if (DVar1 == 0xffffffff) {
    return false;
  }
  if (DVar1 == 1) {
    *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 5) = 0;
  }
  return true;
}



/* ---- Suspend @ 100129a0 size=47 ---- */

/* public: bool __thiscall XThread::Suspend(void) */

bool __thiscall XThread::Suspend(XThread *this)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
                    /* 0x129a0  293  ?Suspend@XThread@@QAE_NXZ */
  puVar2 = (this->XThread_data).offset_0x0;
  uVar1 = *(undefined1 *)((int)puVar2 + 5);
  *(undefined1 *)((int)puVar2 + 5) = 1;
  DVar3 = SuspendThread((HANDLE)*(this->XThread_data).offset_0x0);
  if (DVar3 == 0xffffffff) {
    *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 5) = uVar1;
    return false;
  }
  return true;
}



/* ---- Destroy @ 100129d0 size=122 ---- */

/* public: void __thiscall XThread::Destroy(void) */

void __thiscall XThread::Destroy(XThread *this)

{
  undefined4 *puVar1;
  int *piVar2;
  DWORD DVar3;
  XThread *local_4;
  
                    /* 0x129d0  167  ?Destroy@XThread@@QAEXXZ */
  puVar1 = (this->XThread_data).offset_0x0;
  local_4 = this;
  if ((puVar1[3] != 0) && (*(char *)((int)puVar1 + 6) == '\0')) {
    *(undefined1 *)(puVar1 + 4) = 1;
    puVar1 = (this->XThread_data).offset_0x0;
    if (*(char *)(puVar1 + 1) == '\x01') {
      DVar3 = ResumeThread((HANDLE)*puVar1);
      if ((DVar3 != 0xffffffff) && (DVar3 == 1)) {
        *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 5) = 0;
      }
    }
    WaitForSingleObjectEx((HANDLE)*(this->XThread_data).offset_0x0,0xffffffff,0);
    GetExitCodeThread((HANDLE)*(this->XThread_data).offset_0x0,(LPDWORD)&local_4);
  }
  piVar2 = (this->XThread_data).offset_0x0;
  if (*piVar2 != 0) {
    CloseHandle((HANDLE)*piVar2);
    *(this->XThread_data).offset_0x0 = 0;
  }
  return;
}



/* ---- ~XThread @ 10012a50 size=39 ---- */

/* public: virtual __thiscall XThread::~XThread(void) */

void __thiscall XThread::~XThread(XThread *this)

{
  undefined4 *_Memory;
  
                    /* 0x12a50  74  ??1XThread@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  Destroy(this);
  _Memory = (this->XThread_data).offset_0x0;
  if (_Memory != (undefined4 *)0x0) {
    _free(_Memory);
    (this->XThread_data).offset_0x0 = (undefined4 *)0x0;
  }
  return;
}



/* ---- XThread @ 10012a80 size=74 ---- */

/* public: __thiscall XThread::XThread(void) */

XThread * __thiscall XThread::XThread(XThread *this)

{
  undefined4 *puVar1;
  
                    /* 0x12a80  47  ??0XThread@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(0x14);
  (this->XThread_data).offset_0x0 = puVar1;
  *puVar1 = 0;
  *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 5) = 1;
  *(undefined1 *)((this->XThread_data).offset_0x0 + 1) = 1;
  *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 7) = 0;
  *(undefined1 *)((this->XThread_data).offset_0x0 + 4) = 0;
  *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 6) = 0;
  (this->XThread_data).offset_0x0[2] = 0;
  (this->XThread_data).offset_0x0[3] = 0;
  return this;
}



/* ---- XSetThreadNameW @ 10012ad0 size=245 ---- */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* int __stdcall XSetThreadNameW(unsigned long,wchar_t const *) */

int XSetThreadNameW(ulong param_1,wchar_t *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 uStack00000000;
  uint local_44;
  ULONG_PTR local_34;
  uint local_30;
  ulong local_2c;
  undefined4 local_28;
  UINT local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x12ad0  354  ?XSetThreadNameW@@YGHKPB_W@Z */
  local_8 = 0xfffffffe;
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10022024 ^ 0x1001b5c8;
  local_44 = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_1c = (undefined1 *)&local_44;
  ExceptionList = &local_14;
  local_20 = local_44;
  local_24 = (*(code *)PTR__AtlGetThreadACPThunk_10022d1c)();
  local_34 = 0x1000;
  if (param_2 == (wchar_t *)0x0) {
    local_30 = 0;
  }
  else {
    iVar2 = lstrlenW(param_2);
    puVar1 = (uint *)local_1c;
    if (iVar2 + 1 < 0x40000000) {
      local_1c = (undefined1 *)&local_44;
      puVar1 = &local_44;
      if (&uStack00000000 != (undefined1 *)0x44) {
        local_44 = local_44 & 0xffffff00;
        iVar2 = WideCharToMultiByte(local_24,0,param_2,-1,(LPSTR)&local_44,(iVar2 + 1) * 2,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        local_30 = -(uint)(iVar2 != 0) & (uint)&local_44;
        goto LAB_10012b6f;
      }
    }
    local_1c = (undefined1 *)puVar1;
    local_30 = 0;
  }
LAB_10012b6f:
  local_2c = param_1;
  local_28 = 0;
  if (param_1 != 0) {
    local_8 = 0;
    RaiseException(0x406d1388,0,4,&local_34);
    local_8 = 0xfffffffe;
  }
  ExceptionList = local_14;
  iVar2 = __security_check_cookie(local_20 ^ (int)register0x00000010 - 4U);
  return iVar2;
}



/* ---- FUN_10012bd0 @ 10012bd0 size=57 ---- */

void FUN_10012bd0(void)

{
  char cVar1;
  int *unaff_ESI;
  
  cVar1 = *(char *)(*(int *)(*unaff_ESI + 4) + 7);
  *(undefined4 *)unaff_ESI[1] = *(undefined4 *)(*(int *)(*unaff_ESI + 4) + 8);
  *(undefined1 *)(*(int *)(*unaff_ESI + 4) + 6) = 1;
  if ((cVar1 == '\x01') && ((undefined4 *)*unaff_ESI != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)*unaff_ESI)(1);
  }
  __endthreadex(*(uint *)unaff_ESI[1]);
  return;
}



/* ---- InternalThreadProc @ 10012c10 size=182 ---- */

/* private: static unsigned int __stdcall XThread::InternalThreadProc(class XThread *) */

uint XThread::InternalThreadProc(XThread *param_1)

{
  char cVar1;
  uint _Retval;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x12c10  213  ?InternalThreadProc@XThread@@CGIPAV1@@Z */
  puStack_c = &LAB_10016158;
  local_10 = ExceptionList;
  if (param_1 == (XThread *)0x0) {
    return 0;
  }
  local_8 = 1;
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(param_1 + 4) + 0x10) == '\0') {
    (**(code **)(*(int *)param_1 + 4))();
  }
  local_8 = local_8 & 0xffffff00;
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 7);
  _Retval = *(uint *)(*(int *)(param_1 + 4) + 8);
  *(undefined1 *)(*(int *)(param_1 + 4) + 6) = 1;
  if (cVar1 == '\x01') {
    (*(code *)**(undefined4 **)param_1)(1);
  }
  __endthreadex(_Retval);
  ExceptionList = local_10;
  return _Retval;
}



/* ---- Catch_All@10012cc6 @ 10012cc6 size=9 ---- */

void Catch_All_10012cc6(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- SetSuspended @ 10012cd0 size=85 ---- */

/* public: void __thiscall XThread::SetSuspended(bool) */

void __thiscall XThread::SetSuspended(XThread *this,bool param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
                    /* 0x12cd0  283  ?SetSuspended@XThread@@QAEX_N@Z */
  puVar2 = (this->XThread_data).offset_0x0;
  if ((bool)*(char *)((int)puVar2 + 5) != param_1) {
    if (param_1) {
      uVar1 = *(undefined1 *)((int)puVar2 + 5);
      *(undefined1 *)((int)puVar2 + 5) = 1;
      DVar3 = SuspendThread((HANDLE)*(this->XThread_data).offset_0x0);
      if (DVar3 == 0xffffffff) {
        *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 5) = uVar1;
      }
    }
    else {
      DVar3 = ResumeThread((HANDLE)*puVar2);
      if ((DVar3 != 0xffffffff) && (DVar3 == 1)) {
        *(undefined1 *)((int)(this->XThread_data).offset_0x0 + 5) = 0;
        return;
      }
    }
  }
  return;
}



/* ---- Create @ 10012d30 size=65 ---- */

/* public: void __thiscall XThread::Create(bool) */

void __thiscall XThread::Create(XThread *this,bool param_1)

{
  uintptr_t uVar1;
  
                    /* 0x12d30  159  ?Create@XThread@@QAEX_N@Z */
  uVar1 = __beginthreadex((void *)0x0,0,InternalThreadProc,this,(-(uint)!param_1 & 0xfffffffc) + 4,
                          (this->XThread_data).offset_0x0 + 3);
  *(this->XThread_data).offset_0x0 = uVar1;
  *(bool *)((this->XThread_data).offset_0x0 + 1) = param_1;
  return;
}



/* ---- Detach @ 10012d80 size=12 ---- */

/* public: class XRWCriticalSection * __thiscall XRWLock::Detach(void) */

XRWCriticalSection * __thiscall XRWLock::Detach(XRWLock *this)

{
  XRWCriticalSection *pXVar1;
  
                    /* 0x12d80  175  ?Detach@XRWLock@@QAEPAVXRWCriticalSection@@XZ */
  pXVar1 = (XRWCriticalSection *)(this->XRWLock_data).offset_0x0;
  (this->XRWLock_data).offset_0x0 = (undefined4 *)0x0;
  (this->XRWLock_data).offset_0x8 = 0;
  return pXVar1;
}



/* ---- Attach @ 10012d90 size=27 ---- */

/* public: void __thiscall XRWLock::Attach(class XRWCriticalSection *,int) */

void __thiscall XRWLock::Attach(XRWLock *this,XRWCriticalSection *param_1,int param_2)

{
                    /* 0x12d90  140  ?Attach@XRWLock@@QAEXPAVXRWCriticalSection@@H@Z */
  (this->XRWLock_data).offset_0x4 = param_2;
  (this->XRWLock_data).offset_0x0 = (undefined4 *)param_1;
  (this->XRWLock_data).offset_0x8 = (uint)(param_1 != (XRWCriticalSection *)0x0);
  return;
}



/* ---- IsLocked @ 10012db0 size=4 ---- */

/* public: int __thiscall XRWLock::IsLocked(void) */

int __thiscall XRWLock::IsLocked(XRWLock *this)

{
                    /* 0x12db0  217  ?IsLocked@XRWLock@@QAEHXZ */
  return (this->XRWLock_data).offset_0x8;
}



/* ---- Detach @ 10012dc0 size=26 ---- */

/* public: class XSyncObject * __thiscall XLock::Detach(void) */

XSyncObject * __thiscall XLock::Detach(XLock *this)

{
  XLock_data *pXVar1;
  XSyncObject *pXVar2;
  
                    /* 0x12dc0  173  ?Detach@XLock@@QAEPAVXSyncObject@@XZ */
  pXVar1 = &this->XLock_data;
  if (pXVar1 == (XLock_data *)0x0) {
    return (XSyncObject *)0x0;
  }
  pXVar2 = (XSyncObject *)pXVar1->offset_0x0;
  pXVar1->offset_0x0 = (undefined4 *)0x0;
  (this->XLock_data).offset_0x4 = 0;
  return pXVar2;
}



/* ---- Attach @ 10012de0 size=26 ---- */

/* public: void __thiscall XLock::Attach(class XSyncObject *) */

void __thiscall XLock::Attach(XLock *this,XSyncObject *param_1)

{
                    /* 0x12de0  138  ?Attach@XLock@@QAEXPAVXSyncObject@@@Z */
  if (&this->XLock_data != (XLock_data *)0x0) {
    (this->XLock_data).offset_0x0 = (undefined4 *)param_1;
    (this->XLock_data).offset_0x4 = (uint)(param_1 != (XSyncObject *)0x0);
  }
  return;
}



/* ---- IsLocked @ 10012e00 size=12 ---- */

/* public: int __thiscall XLock::IsLocked(void) */

int __thiscall XLock::IsLocked(XLock *this)

{
                    /* 0x12e00  216  ?IsLocked@XLock@@QAEHXZ */
  if (this == (XLock *)0xfffffffc) {
    return 0;
  }
  return (this->XLock_data).offset_0x4;
}



/* ---- Unlock @ 10012e10 size=53 ---- */

/* public: int __thiscall XLock::Unlock(void) */

int __thiscall XLock::Unlock(XLock *this)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x12e10  306  ?Unlock@XLock@@QAEHXZ */
  if ((&this->XLock_data == (XLock_data *)0x0) ||
     (piVar1 = (this->XLock_data).offset_0x0, piVar1 == (int *)0x0)) {
    return 0;
  }
  if ((this->XLock_data).offset_0x4 != 0) {
    iVar2 = (**(code **)(*piVar1 + 4))();
    (this->XLock_data).offset_0x4 = (uint)(iVar2 == 0);
  }
  return (uint)((this->XLock_data).offset_0x4 == 0);
}



/* ---- Lock @ 10012e50 size=40 ---- */

/* public: int __thiscall XLock::Lock(unsigned long) */

int __thiscall XLock::Lock(XLock *this,ulong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
                    /* 0x12e50  228  ?Lock@XLock@@QAEHK@Z */
  if ((&this->XLock_data == (XLock_data *)0x0) ||
     (puVar1 = (this->XLock_data).offset_0x0, puVar1 == (undefined4 *)0x0)) {
    return 0;
  }
  uVar2 = (**(code **)*puVar1)(param_1);
  (this->XLock_data).offset_0x4 = uVar2;
  return uVar2;
}



/* ---- ~XLock @ 10012e80 size=47 ---- */

/* public: virtual __thiscall XLock::~XLock(void) */

void __thiscall XLock::~XLock(XLock *this)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x12e80  64  ??1XLock@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  if (((&this->XLock_data != (XLock_data *)0x0) &&
      (piVar1 = (this->XLock_data).offset_0x0, piVar1 != (int *)0x0)) &&
     ((this->XLock_data).offset_0x4 != 0)) {
    iVar2 = (**(code **)(*piVar1 + 4))();
    (this->XLock_data).offset_0x4 = (uint)(iVar2 == 0);
  }
  return;
}



/* ---- XLock @ 10012eb0 size=53 ---- */

/* public: __thiscall XLock::XLock(class XSyncObject *,unsigned long) */

XLock * __thiscall XLock::XLock(XLock *this,XSyncObject *param_1,ulong param_2)

{
  uint uVar1;
  
                    /* 0x12eb0  21  ??0XLock@@QAE@PAVXSyncObject@@K@Z */
  this->vftablePtr = &_vftable_;
  (this->XLock_data).offset_0x0 = (undefined4 *)param_1;
  (this->XLock_data).offset_0x4 = 0;
  if ((&this->XLock_data != (XLock_data *)0x0) && (param_1 != (XSyncObject *)0x0)) {
    uVar1 = (*(code *)**(undefined4 **)param_1)(param_2);
    (this->XLock_data).offset_0x4 = uVar1;
  }
  return this;
}



/* ---- XLock @ 10012ef0 size=53 ---- */

/* public: __thiscall XLock::XLock(class XSyncObject &,unsigned long) */

XLock * __thiscall XLock::XLock(XLock *this,XSyncObject *param_1,ulong param_2)

{
  uint uVar1;
  
                    /* 0x12ef0  19  ??0XLock@@QAE@AAVXSyncObject@@K@Z */
  this->vftablePtr = &_vftable_;
  (this->XLock_data).offset_0x0 = (undefined4 *)param_1;
  (this->XLock_data).offset_0x4 = 0;
  if ((&this->XLock_data != (XLock_data *)0x0) && (param_1 != (XSyncObject *)0x0)) {
    uVar1 = (*(code *)**(undefined4 **)param_1)(param_2);
    (this->XLock_data).offset_0x4 = uVar1;
  }
  return this;
}



/* ---- XRWCriticalSection @ 10012f30 size=16 ---- */

/* public: __thiscall XRWCriticalSection::XRWCriticalSection(void) */

void __thiscall XRWCriticalSection::XRWCriticalSection(XRWCriticalSection *this)

{
                    /* 0x12f30  34  ??0XRWCriticalSection@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->XRWCriticalSection_data).offset_0x0 = (void *)0x0;
  return;
}



/* ---- XEventW::Unlock @ 10012f40 size=6 ---- */

/* public: virtual int __thiscall XEventW::Unlock(void) */

int __thiscall XEventW::XEventW__Unlock(XEventW *this)

{
                    /* 0x12f40  305  ?Unlock@XEventW@@UAEHXZ */
  return 1;
}



/* ---- Pulse @ 10012f50 size=13 ---- */

/* public: int __thiscall XEventW::Pulse(void) */

int __thiscall XEventW::Pulse(XEventW *this)

{
  BOOL BVar1;
  
                    /* 0x12f50  247  ?Pulse@XEventW@@QAEHXZ */
  BVar1 = PulseEvent((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Reset @ 10012f60 size=13 ---- */

/* public: int __thiscall XEventW::Reset(void) */

int __thiscall XEventW::Reset(XEventW *this)

{
  BOOL BVar1;
  
                    /* 0x12f60  266  ?Reset@XEventW@@QAEHXZ */
  BVar1 = ResetEvent((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Set @ 10012f70 size=13 ---- */

/* public: int __thiscall XEventW::Set(void) */

int __thiscall XEventW::Set(XEventW *this)

{
  BOOL BVar1;
  
                    /* 0x12f70  273  ?Set@XEventW@@QAEHXZ */
  BVar1 = SetEvent((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Open @ 10012f80 size=50 ---- */

/* public: int __thiscall XEventW::Open(wchar_t const *,unsigned long,int) */

int __thiscall XEventW::Open(XEventW *this,wchar_t *param_1,ulong param_2,int param_3)

{
  HANDLE pvVar1;
  
                    /* 0x12f80  239  ?Open@XEventW@@QAEHPB_WKH@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = OpenEventW(param_2,param_3,param_1);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Create @ 10012fc0 size=55 ---- */

/* public: int __thiscall XEventW::Create(int,int,wchar_t const *,struct _SECURITY_ATTRIBUTES *) */

int __thiscall
XEventW::Create(XEventW *this,int param_1,int param_2,wchar_t *param_3,_SECURITY_ATTRIBUTES *param_4
               )

{
  HANDLE pvVar1;
  
                    /* 0x12fc0  153  ?Create@XEventW@@QAEHHHPB_WPAU_SECURITY_ATTRIBUTES@@@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = CreateEventW(param_4,param_1,param_2,param_3);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- XEventA::Unlock @ 10013000 size=6 ---- */

/* public: virtual int __thiscall XEventA::Unlock(void) */

int __thiscall XEventA::XEventA__Unlock(XEventA *this)

{
                    /* 0x13000  304  ?Unlock@XEventA@@UAEHXZ */
  return 1;
}



/* ---- Pulse @ 10013010 size=13 ---- */

/* public: int __thiscall XEventA::Pulse(void) */

int __thiscall XEventA::Pulse(XEventA *this)

{
  BOOL BVar1;
  
                    /* 0x13010  246  ?Pulse@XEventA@@QAEHXZ */
  BVar1 = PulseEvent((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Reset @ 10013020 size=13 ---- */

/* public: int __thiscall XEventA::Reset(void) */

int __thiscall XEventA::Reset(XEventA *this)

{
  BOOL BVar1;
  
                    /* 0x13020  265  ?Reset@XEventA@@QAEHXZ */
  BVar1 = ResetEvent((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Set @ 10013030 size=13 ---- */

/* public: int __thiscall XEventA::Set(void) */

int __thiscall XEventA::Set(XEventA *this)

{
  BOOL BVar1;
  
                    /* 0x13030  272  ?Set@XEventA@@QAEHXZ */
  BVar1 = SetEvent((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Open @ 10013040 size=50 ---- */

/* public: int __thiscall XEventA::Open(char const *,unsigned long,int) */

int __thiscall XEventA::Open(XEventA *this,char *param_1,ulong param_2,int param_3)

{
  HANDLE pvVar1;
  
                    /* 0x13040  238  ?Open@XEventA@@QAEHPBDKH@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = OpenEventA(param_2,param_3,param_1);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Create @ 10013080 size=55 ---- */

/* public: int __thiscall XEventA::Create(int,int,char const *,struct _SECURITY_ATTRIBUTES *) */

int __thiscall
XEventA::Create(XEventA *this,int param_1,int param_2,char *param_3,_SECURITY_ATTRIBUTES *param_4)

{
  HANDLE pvVar1;
  
                    /* 0x13080  152  ?Create@XEventA@@QAEHHHPBDPAU_SECURITY_ATTRIBUTES@@@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = CreateEventA(param_4,param_1,param_2,param_3);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Release @ 100130c0 size=51 ---- */

/* public: int __thiscall XSemaphoreW::Release(long,long *) */

int __thiscall XSemaphoreW::Release(XSemaphoreW *this,long param_1,long *param_2)

{
  BOOL BVar1;
  long local_4;
  
                    /* 0x130c0  261  ?Release@XSemaphoreW@@QAEHJPAJ@Z */
  local_4 = 0;
  BVar1 = ReleaseSemaphore((HANDLE)*this->offset_0x0,param_1,&local_4);
  if ((BVar1 != 0) && (param_2 != (long *)0x0)) {
    *param_2 = local_4;
  }
  return BVar1;
}



/* ---- Open @ 10013100 size=50 ---- */

/* public: int __thiscall XSemaphoreW::Open(wchar_t const *,unsigned long,int) */

int __thiscall XSemaphoreW::Open(XSemaphoreW *this,wchar_t *param_1,ulong param_2,int param_3)

{
  HANDLE pvVar1;
  
                    /* 0x13100  243  ?Open@XSemaphoreW@@QAEHPB_WKH@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = OpenSemaphoreW(param_2,param_3,param_1);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Create @ 10013140 size=55 ---- */

/* public: int __thiscall XSemaphoreW::Create(int,int,wchar_t const *,struct _SECURITY_ATTRIBUTES *)
    */

int __thiscall
XSemaphoreW::Create(XSemaphoreW *this,int param_1,int param_2,wchar_t *param_3,
                   _SECURITY_ATTRIBUTES *param_4)

{
  HANDLE pvVar1;
  
                    /* 0x13140  158  ?Create@XSemaphoreW@@QAEHHHPB_WPAU_SECURITY_ATTRIBUTES@@@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = CreateSemaphoreW(param_4,param_1,param_2,param_3);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Release @ 10013180 size=51 ---- */

/* public: int __thiscall XSemaphoreA::Release(long,long *) */

int __thiscall XSemaphoreA::Release(XSemaphoreA *this,long param_1,long *param_2)

{
  BOOL BVar1;
  long local_4;
  
                    /* 0x13180  260  ?Release@XSemaphoreA@@QAEHJPAJ@Z */
  local_4 = 0;
  BVar1 = ReleaseSemaphore((HANDLE)*this->offset_0x0,param_1,&local_4);
  if ((BVar1 != 0) && (param_2 != (long *)0x0)) {
    *param_2 = local_4;
  }
  return BVar1;
}



/* ---- Open @ 100131c0 size=50 ---- */

/* public: int __thiscall XSemaphoreA::Open(char const *,unsigned long,int) */

int __thiscall XSemaphoreA::Open(XSemaphoreA *this,char *param_1,ulong param_2,int param_3)

{
  HANDLE pvVar1;
  
                    /* 0x131c0  242  ?Open@XSemaphoreA@@QAEHPBDKH@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = OpenSemaphoreA(param_2,param_3,param_1);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Create @ 10013200 size=55 ---- */

/* public: int __thiscall XSemaphoreA::Create(int,int,char const *,struct _SECURITY_ATTRIBUTES *) */

int __thiscall
XSemaphoreA::Create(XSemaphoreA *this,int param_1,int param_2,char *param_3,
                   _SECURITY_ATTRIBUTES *param_4)

{
  HANDLE pvVar1;
  
                    /* 0x13200  157  ?Create@XSemaphoreA@@QAEHHHPBDPAU_SECURITY_ATTRIBUTES@@@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = CreateSemaphoreA(param_4,param_1,param_2,param_3);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Release @ 10013240 size=13 ---- */

/* public: int __thiscall XMutexW::Release(void) */

int __thiscall XMutexW::Release(XMutexW *this)

{
  BOOL BVar1;
  
                    /* 0x13240  259  ?Release@XMutexW@@QAEHXZ */
  BVar1 = ReleaseMutex((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Open @ 10013250 size=50 ---- */

/* public: int __thiscall XMutexW::Open(wchar_t const *,unsigned long,int) */

int __thiscall XMutexW::Open(XMutexW *this,wchar_t *param_1,ulong param_2,int param_3)

{
  HANDLE pvVar1;
  
                    /* 0x13250  241  ?Open@XMutexW@@QAEHPB_WKH@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = OpenMutexW(param_2,param_3,param_1);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Create @ 10013290 size=50 ---- */

/* public: int __thiscall XMutexW::Create(int,wchar_t const *,struct _SECURITY_ATTRIBUTES *) */

int __thiscall
XMutexW::Create(XMutexW *this,int param_1,wchar_t *param_2,_SECURITY_ATTRIBUTES *param_3)

{
  HANDLE pvVar1;
  
                    /* 0x13290  155  ?Create@XMutexW@@QAEHHPB_WPAU_SECURITY_ATTRIBUTES@@@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = CreateMutexW(param_3,param_1,param_2);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Release @ 100132d0 size=13 ---- */

/* public: int __thiscall XMutexA::Release(void) */

int __thiscall XMutexA::Release(XMutexA *this)

{
  BOOL BVar1;
  
                    /* 0x132d0  258  ?Release@XMutexA@@QAEHXZ */
  BVar1 = ReleaseMutex((HANDLE)*this->offset_0x0);
  return BVar1;
}



/* ---- Open @ 100132e0 size=50 ---- */

/* public: int __thiscall XMutexA::Open(char const *,unsigned long,int) */

int __thiscall XMutexA::Open(XMutexA *this,char *param_1,ulong param_2,int param_3)

{
  HANDLE pvVar1;
  
                    /* 0x132e0  240  ?Open@XMutexA@@QAEHPBDKH@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = OpenMutexA(param_2,param_3,param_1);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- Create @ 10013320 size=50 ---- */

/* public: int __thiscall XMutexA::Create(int,char const *,struct _SECURITY_ATTRIBUTES *) */

int __thiscall
XMutexA::Create(XMutexA *this,int param_1,char *param_2,_SECURITY_ATTRIBUTES *param_3)

{
  HANDLE pvVar1;
  
                    /* 0x13320  154  ?Create@XMutexA@@QAEHHPBDPAU_SECURITY_ATTRIBUTES@@@Z */
  (*this->vftablePtr->Close)(this);
  pvVar1 = CreateMutexA(param_3,param_1,param_2);
  *this->offset_0x0 = pvVar1;
  return (uint)(*this->offset_0x0 != 0);
}



/* ---- XWaitableObject::Detach @ 10013360 size=12 ---- */

/* public: virtual void * __thiscall XWaitableObject::Detach(void)
   XWaitableObject member function inherited by XEventW
   XWaitableObject member function inherited by XEventA
   XWaitableObject member function inherited by XSemaphoreW
   XWaitableObject member function inherited by XSemaphoreA
   XWaitableObject member function inherited by XMutexW
   XWaitableObject member function inherited by XMutexA */

void * __thiscall XWaitableObject::XWaitableObject__Detach(XWaitableObject *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  
                    /* 0x13360  176  ?Detach@XWaitableObject@@UAEPAXXZ */
  puVar1 = (this->XWaitableObject_data).offset_0x0;
  pvVar2 = (void *)*puVar1;
  *puVar1 = 0;
  return pvVar2;
}



/* ---- XWaitableObject::Attach @ 10013370 size=23 ---- */

/* public: virtual void __thiscall XWaitableObject::Attach(void *)
   XWaitableObject member function inherited by XEventW
   XWaitableObject member function inherited by XEventA
   XWaitableObject member function inherited by XSemaphoreW
   XWaitableObject member function inherited by XSemaphoreA
   XWaitableObject member function inherited by XMutexW
   XWaitableObject member function inherited by XMutexA */

void __thiscall XWaitableObject::XWaitableObject__Attach(XWaitableObject *this,void *param_1)

{
                    /* 0x13370  141  ?Attach@XWaitableObject@@UAEXPAX@Z */
  (*this->vftablePtr->Close)(this);
  *(this->XWaitableObject_data).offset_0x0 = param_1;
  return;
}



/* ---- Wait @ 10013390 size=20 ---- */

/* public: unsigned long __thiscall XWaitableObject::Wait(unsigned long) */

ulong __thiscall XWaitableObject::Wait(XWaitableObject *this,ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x13390  321  ?Wait@XWaitableObject@@QAEKK@Z */
  DVar1 = WaitForSingleObject((HANDLE)*(this->XWaitableObject_data).offset_0x0,param_1);
  return DVar1;
}



/* ---- GetHandle @ 100133b0 size=13 ---- */

/* public: void * __thiscall XWaitableObject::GetHandle(void)const  */

void * __thiscall XWaitableObject::GetHandle(XWaitableObject *this)

{
  undefined4 *puVar1;
  
                    /* 0x133b0  193  ?GetHandle@XWaitableObject@@QBEPAXXZ */
  puVar1 = (this->XWaitableObject_data).offset_0x0;
  if (puVar1 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  return (void *)*puVar1;
}



/* ---- XWaitableObject::Close @ 100133c0 size=35 ---- */

/* public: virtual void __thiscall XWaitableObject::Close(void)
   XWaitableObject member function inherited by XEventW
   XWaitableObject member function inherited by XEventA
   XWaitableObject member function inherited by XSemaphoreW
   XWaitableObject member function inherited by XSemaphoreA
   XWaitableObject member function inherited by XMutexW
   XWaitableObject member function inherited by XMutexA */

void __thiscall XWaitableObject::XWaitableObject__Close(XWaitableObject *this)

{
  int *piVar1;
  
                    /* 0x133c0  148  ?Close@XWaitableObject@@UAEXXZ */
  piVar1 = (this->XWaitableObject_data).offset_0x0;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *(this->XWaitableObject_data).offset_0x0 = 0;
  }
  return;
}



/* ---- IsOpen @ 100133f0 size=21 ---- */

/* public: int __thiscall XWaitableObject::IsOpen(void)const  */

int __thiscall XWaitableObject::IsOpen(XWaitableObject *this)

{
  int *piVar1;
  
                    /* 0x133f0  218  ?IsOpen@XWaitableObject@@QBEHXZ */
  piVar1 = (this->XWaitableObject_data).offset_0x0;
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* ---- ~XWaitableObject @ 10013410 size=53 ---- */

/* public: virtual __thiscall XWaitableObject::~XWaitableObject(void) */

void __thiscall XWaitableObject::~XWaitableObject(XWaitableObject *this)

{
  int *piVar1;
  
                    /* 0x13410  76  ??1XWaitableObject@@UAE@XZ */
  piVar1 = (this->XWaitableObject_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    CloseHandle((HANDLE)*piVar1);
    *(this->XWaitableObject_data).offset_0x0 = 0;
  }
  _free((this->XWaitableObject_data).offset_0x0);
  return;
}



/* ---- XWaitableObject @ 10013450 size=32 ---- */

/* public: __thiscall XWaitableObject::XWaitableObject(void) */

XWaitableObject * __thiscall XWaitableObject::XWaitableObject(XWaitableObject *this)

{
  undefined4 *puVar1;
  
                    /* 0x13450  51  ??0XWaitableObject@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(4);
  (this->XWaitableObject_data).offset_0x0 = puVar1;
  *puVar1 = 0;
  return this;
}



/* ---- Detach @ 10013470 size=26 ---- */

/* public: struct _RTL_CRITICAL_SECTION __thiscall XCriticalSection::Detach(void) */

_RTL_CRITICAL_SECTION * __thiscall
XCriticalSection::Detach(XCriticalSection *this,_RTL_CRITICAL_SECTION *__return_storage_ptr__)

{
                    /* 0x13470  172  ?Detach@XCriticalSection@@QAE?AU_RTL_CRITICAL_SECTION@@XZ */
  __return_storage_ptr__->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  __return_storage_ptr__->LockCount = 0;
  __return_storage_ptr__->RecursionCount = 0;
  __return_storage_ptr__->OwningThread = (HANDLE)0x0;
  __return_storage_ptr__->LockSemaphore = (HANDLE)0x0;
  __return_storage_ptr__->SpinCount = 0;
  return __return_storage_ptr__;
}



/* ---- Attach @ 10013490 size=3 ---- */

/* public: void __thiscall XCriticalSection::Attach(struct _RTL_CRITICAL_SECTION *) */

void __thiscall XCriticalSection::Attach(XCriticalSection *this,_RTL_CRITICAL_SECTION *param_1)

{
                    /* 0x13490  137  ?Attach@XCriticalSection@@QAEXPAU_RTL_CRITICAL_SECTION@@@Z */
  return;
}



/* ---- operator_struct__RTL_CRITICAL_SECTION* @ 100134a0 size=3 ---- */

/* public: __thiscall XCriticalSection::operator struct _RTL_CRITICAL_SECTION *(void) */

_RTL_CRITICAL_SECTION * __thiscall
XCriticalSection::operator_struct__RTL_CRITICAL_SECTION_(XCriticalSection *this)

{
                    /* 0x134a0  101  ??BXCriticalSection@@QAEPAU_RTL_CRITICAL_SECTION@@XZ */
  return (_RTL_CRITICAL_SECTION *)0x0;
}



/* ---- GetCount @ 100134b0 size=22 ---- */

/* public: int __thiscall XWaitableCollection::GetCount(void)const  */

int __thiscall XWaitableCollection::GetCount(XWaitableCollection *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x134b0  184  ?GetCount@XWaitableCollection@@QBEHXZ */
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 == 0) {
    return 0;
  }
  return *(int *)(iVar1 + 8) - iVar2 >> 2;
}



/* ---- ~XWaitableCollection @ 100134d0 size=62 ---- */

/* public: virtual __thiscall XWaitableCollection::~XWaitableCollection(void) */

void __thiscall XWaitableCollection::~XWaitableCollection(XWaitableCollection *this)

{
  void *_Memory;
  
                    /* 0x134d0  75  ??1XWaitableCollection@@UAE@XZ */
  _Memory = (void *)(this->XWaitableCollection_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (_Memory != (void *)0x0) {
    if (*(void **)((int)_Memory + 4) != (void *)0x0) {
      _free(*(void **)((int)_Memory + 4));
    }
    *(undefined4 *)((int)_Memory + 4) = 0;
    *(undefined4 *)((int)_Memory + 8) = 0;
    *(undefined4 *)((int)_Memory + 0xc) = 0;
    _free(_Memory);
  }
  return;
}



/* ---- UnlockWriter @ 10013510 size=19 ---- */

/* public: int __thiscall XRWCriticalSection::UnlockWriter(void) */

int __thiscall XRWCriticalSection::UnlockWriter(XRWCriticalSection *this)

{
  BOOL BVar1;
  
                    /* 0x13510  313  ?UnlockWriter@XRWCriticalSection@@QAEHXZ */
  BVar1 = ReleaseMutex((HANDLE)**(undefined4 **)
                                 ((int)(this->XRWCriticalSection_data).offset_0x0 + 0x10));
  return BVar1;
}



/* ---- LockWriter @ 10013530 size=76 ---- */

/* public: int __thiscall XRWCriticalSection::LockWriter(unsigned long) */

int __thiscall XRWCriticalSection::LockWriter(XRWCriticalSection *this,ulong param_1)

{
  int iVar1;
  DWORD DVar2;
  
                    /* 0x13530  235  ?LockWriter@XRWCriticalSection@@QAEHK@Z */
  iVar1 = (*(code *)**(undefined4 **)((int)(this->XRWCriticalSection_data).offset_0x0 + 0x14))
                    (param_1);
  if (iVar1 != 0) {
    DVar2 = WaitForSingleObject((HANDLE)**(undefined4 **)
                                          ((int)(this->XRWCriticalSection_data).offset_0x0 + 4),
                                param_1);
    if (DVar2 == 0) {
      return 1;
    }
    (**(code **)(*(int *)((int)(this->XRWCriticalSection_data).offset_0x0 + 0x14) + 4))();
  }
  return 0;
}



/* ---- UnlockReader @ 10013580 size=214 ---- */

/* public: int __thiscall XRWCriticalSection::UnlockReader(void) */

int __thiscall XRWCriticalSection::UnlockReader(XRWCriticalSection *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 uStack00000000;
  undefined1 auStackY_b4 [128];
  undefined1 auStack_20 [16];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x13580  312  ?UnlockReader@XRWCriticalSection@@QAEHXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1001617b;
  local_c = ExceptionList;
  local_10 = DAT_10022024 ^ (uint)auStack_20;
  ExceptionList = &local_c;
  piVar3 = (int *)((int)(this->XRWCriticalSection_data).offset_0x0 + 0x18);
  iVar2 = 0;
  if ((&uStack00000000 != (undefined1 *)0x1c) && (piVar3 != (int *)0x0)) {
    iVar2 = (**(code **)*piVar3)(0xffffffff,DAT_10022024 ^ (uint)(auStackY_b4 + 0x88));
  }
  piVar1 = (int *)((int)(this->XRWCriticalSection_data).offset_0x0 + 0x20);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    SetEvent((HANDLE)**(undefined4 **)((int)(this->XRWCriticalSection_data).offset_0x0 + 4));
    uStack_4 = 0xffffffff;
    if (((&uStack00000000 != (undefined1 *)0x1c) && (piVar3 != (int *)0x0)) && (iVar2 != 0)) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  else {
    uStack_4 = 0xffffffff;
    if (((&uStack00000000 != (undefined1 *)0x1c) && (piVar3 != (int *)0x0)) && (iVar2 != 0)) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  ExceptionList = local_c;
  iVar2 = __security_check_cookie(local_10 ^ (uint)auStack_20);
  return iVar2;
}



/* ---- LockReader @ 10013660 size=334 ---- */

/* public: int __thiscall XRWCriticalSection::LockReader(unsigned long) */

int __thiscall XRWCriticalSection::LockReader(XRWCriticalSection *this,ulong param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 uStack00000000;
  undefined1 auStackY_d0 [128];
  XLock_vftable *local_3c;
  int *local_38;
  int local_34;
  int iStack_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x13660  234  ?LockReader@XRWCriticalSection@@QAEHK@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_100161ab;
  local_14 = ExceptionList;
  local_1c = DAT_10022024 ^ (uint)&local_3c;
  ExceptionList = &local_14;
  pvVar2 = (this->XRWCriticalSection_data).offset_0x0;
  if (pvVar2 == (void *)0xfffffff4) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)((int)pvVar2 + 0x14);
  }
                    /* inlined constructor or destructor (approx location) for XLock */
  local_3c = &XLock::_vftable_;
  local_34 = 0;
  local_38 = piVar4;
  if ((&uStack00000000 != (undefined1 *)0x38) && (piVar4 != (int *)0x0)) {
    local_34 = (**(code **)*piVar4)(param_1,DAT_10022024 ^ (uint)(auStackY_d0 + 0x88));
  }
  local_c = 0;
  if ((&uStack00000000 == (undefined1 *)0x38) || (local_34 == 0)) {
    local_c = 0xffffffff;
    if ((&uStack00000000 != (undefined1 *)0x38) && ((piVar4 != (int *)0x0 && (local_34 != 0)))) {
      (**(code **)(*piVar4 + 4))();
    }
  }
  else {
    piVar5 = (int *)((int)(this->XRWCriticalSection_data).offset_0x0 + 0x18);
    iStack_24 = 0;
    if ((&uStack00000000 != (undefined1 *)0x28) && (piVar5 != (int *)0x0)) {
      iStack_24 = (**(code **)*piVar5)(0xffffffff);
    }
    pvVar2 = (this->XRWCriticalSection_data).offset_0x0;
    piVar1 = (int *)((int)pvVar2 + 0x20);
    *piVar1 = *piVar1 + 1;
    if (*(int *)((int)pvVar2 + 0x20) == 1) {
      ResetEvent((HANDLE)**(undefined4 **)((int)(this->XRWCriticalSection_data).offset_0x0 + 4));
    }
    if (((&uStack00000000 != (undefined1 *)0x28) && (piVar5 != (int *)0x0)) && (iStack_24 != 0)) {
      (**(code **)(*piVar5 + 4))();
    }
    local_c = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }
  ExceptionList = local_14;
  iVar3 = __security_check_cookie(local_1c ^ (uint)&local_3c);
  return iVar3;
}



/* ---- XEventW::Lock @ 100137b0 size=27 ---- */

/* public: virtual int __thiscall XEventW::Lock(unsigned long) */

int __thiscall XEventW::XEventW__Lock(XEventW *this,ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x137b0  227  ?Lock@XEventW@@UAEHK@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)&this[-1].field_0x18,param_1);
  return (uint)(DVar1 == 0);
}



/* ---- XEventA::Lock @ 100137d0 size=27 ---- */

/* public: virtual int __thiscall XEventA::Lock(unsigned long) */

int __thiscall XEventA::XEventA__Lock(XEventA *this,ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x137d0  226  ?Lock@XEventA@@UAEHK@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)&this[-1].field_0x18,param_1);
  return (uint)(DVar1 == 0);
}



/* ---- XSemaphoreW::Unlock @ 100137f0 size=29 ---- */

/* public: virtual int __thiscall XSemaphoreW::Unlock(void) */

int __thiscall XSemaphoreW::XSemaphoreW__Unlock(XSemaphoreW *this)

{
  BOOL BVar1;
  long local_4;
  
                    /* 0x137f0  311  ?Unlock@XSemaphoreW@@UAEHXZ */
  local_4 = 0;
  BVar1 = ReleaseSemaphore((HANDLE)**(undefined4 **)&this[-1].field_0x18,1,&local_4);
  return BVar1;
}



/* ---- XSemaphoreW::Lock @ 10013810 size=41 ---- */

/* public: virtual int __thiscall XSemaphoreW::Lock(unsigned long) */

int __thiscall XSemaphoreW::XSemaphoreW__Lock(XSemaphoreW *this,ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x13810  233  ?Lock@XSemaphoreW@@UAEHK@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)&this[-1].field_0x18,param_1);
  if ((DVar1 == 0) || (DVar1 == 0x80)) {
    return 1;
  }
  return 0;
}



/* ---- XSemaphoreA::Unlock @ 10013840 size=29 ---- */

/* public: virtual int __thiscall XSemaphoreA::Unlock(void) */

int __thiscall XSemaphoreA::XSemaphoreA__Unlock(XSemaphoreA *this)

{
  BOOL BVar1;
  long local_4;
  
                    /* 0x13840  310  ?Unlock@XSemaphoreA@@UAEHXZ */
  local_4 = 0;
  BVar1 = ReleaseSemaphore((HANDLE)**(undefined4 **)&this[-1].field_0x18,1,&local_4);
  return BVar1;
}



/* ---- XSemaphoreA::Lock @ 10013860 size=41 ---- */

/* public: virtual int __thiscall XSemaphoreA::Lock(unsigned long) */

int __thiscall XSemaphoreA::XSemaphoreA__Lock(XSemaphoreA *this,ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x13860  232  ?Lock@XSemaphoreA@@UAEHK@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)&this[-1].field_0x18,param_1);
  if ((DVar1 == 0) || (DVar1 == 0x80)) {
    return 1;
  }
  return 0;
}



/* ---- XMutexW::Unlock @ 10013890 size=13 ---- */

/* public: virtual int __thiscall XMutexW::Unlock(void) */

int __thiscall XMutexW::XMutexW__Unlock(XMutexW *this)

{
  BOOL BVar1;
  
                    /* 0x13890  308  ?Unlock@XMutexW@@UAEHXZ */
  BVar1 = ReleaseMutex((HANDLE)**(undefined4 **)&this[-1].field_0x18);
  return BVar1;
}



/* ---- XMutexW::Lock @ 100138a0 size=41 ---- */

/* public: virtual int __thiscall XMutexW::Lock(unsigned long) */

int __thiscall XMutexW::XMutexW__Lock(XMutexW *this,ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x138a0  230  ?Lock@XMutexW@@UAEHK@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)&this[-1].field_0x18,param_1);
  if ((DVar1 == 0) || (DVar1 == 0x80)) {
    return 1;
  }
  return 0;
}



/* ---- XMutexA::Unlock @ 100138d0 size=13 ---- */

/* public: virtual int __thiscall XMutexA::Unlock(void) */

int __thiscall XMutexA::XMutexA__Unlock(XMutexA *this)

{
  BOOL BVar1;
  
                    /* 0x138d0  307  ?Unlock@XMutexA@@UAEHXZ */
  BVar1 = ReleaseMutex((HANDLE)**(undefined4 **)&this[-1].field_0x18);
  return BVar1;
}



/* ---- XMutexA::Lock @ 100138e0 size=41 ---- */

/* public: virtual int __thiscall XMutexA::Lock(unsigned long) */

int __thiscall XMutexA::XMutexA__Lock(XMutexA *this,ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x138e0  229  ?Lock@XMutexA@@UAEHK@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)&this[-1].field_0x18,param_1);
  if ((DVar1 == 0) || (DVar1 == 0x80)) {
    return 1;
  }
  return 0;
}



/* ---- operator_void* @ 10013910 size=13 ---- */

/* public: __thiscall XWaitableObject::operator void *(void)const  */

void * __thiscall XWaitableObject::operator_void_(XWaitableObject *this)

{
  undefined4 *puVar1;
  
                    /* 0x13910  105  ??BXWaitableObject@@QBEPAXXZ */
  puVar1 = (this->XWaitableObject_data).offset_0x0;
  if (puVar1 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  return (void *)*puVar1;
}



/* ---- Leave @ 10013920 size=13 ---- */

/* public: void __thiscall XCriticalSection::Leave(void) */

void __thiscall XCriticalSection::Leave(XCriticalSection *this)

{
                    /* 0x13920  221  ?Leave@XCriticalSection@@QAEXXZ */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(this->XCriticalSection_data).offset_0x0);
  return;
}



/* ---- Enter @ 10013930 size=13 ---- */

/* public: void __thiscall XCriticalSection::Enter(void) */

void __thiscall XCriticalSection::Enter(XCriticalSection *this)

{
                    /* 0x13930  178  ?Enter@XCriticalSection@@QAEXXZ */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(this->XCriticalSection_data).offset_0x0);
  return;
}



/* ---- ~XCriticalSection @ 10013940 size=59 ---- */

/* public: virtual __thiscall XCriticalSection::~XCriticalSection(void) */

void __thiscall XCriticalSection::~XCriticalSection(XCriticalSection *this)

{
  CriticalSection *_Memory;
  
                    /* 0x13940  61  ??1XCriticalSection@@UAE@XZ */
  _Memory = (this->XCriticalSection_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (_Memory != (CriticalSection *)0x0) {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)_Memory);
    _free(*(void **)_Memory);
    *(undefined4 *)_Memory = 0;
    _free(_Memory);
    (this->XCriticalSection_data).offset_0x0 = (CriticalSection *)0x0;
  }
  return;
}



/* ---- MsgWaitEx @ 10013980 size=115 ---- */

/* public: unsigned long __thiscall XWaitableCollection::MsgWaitEx(unsigned long,unsigned
   long,unsigned long) */

ulong __thiscall
XWaitableCollection::MsgWaitEx(XWaitableCollection *this,ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  
                    /* 0x13980  237  ?MsgWaitEx@XWaitableCollection@@QAEKKKK@Z */
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  iVar2 = *(int *)(iVar1 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    SetLastError(6);
    return 0xffffffff;
  }
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    FUN_10008e31();
  }
  iVar2 = (this->XWaitableCollection_data).offset_0x0;
  iVar3 = *(int *)(iVar2 + 4);
  if (iVar3 == 0) {
    DVar4 = 0;
  }
  else {
    DVar4 = *(int *)(iVar2 + 8) - iVar3 >> 2;
  }
  DVar4 = MsgWaitForMultipleObjectsEx(DVar4,*(HANDLE **)(iVar1 + 4),param_3,param_2,param_1);
  return DVar4;
}



/* ---- MsgWait @ 10013a00 size=115 ---- */

/* public: unsigned long __thiscall XWaitableCollection::MsgWait(unsigned long,int,unsigned long) */

ulong __thiscall
XWaitableCollection::MsgWait(XWaitableCollection *this,ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  
                    /* 0x13a00  236  ?MsgWait@XWaitableCollection@@QAEKKHK@Z */
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  iVar2 = *(int *)(iVar1 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    SetLastError(6);
    return 0xffffffff;
  }
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    FUN_10008e31();
  }
  iVar2 = (this->XWaitableCollection_data).offset_0x0;
  iVar3 = *(int *)(iVar2 + 4);
  if (iVar3 == 0) {
    DVar4 = 0;
  }
  else {
    DVar4 = *(int *)(iVar2 + 8) - iVar3 >> 2;
  }
  DVar4 = MsgWaitForMultipleObjects(DVar4,*(HANDLE **)(iVar1 + 4),param_2,param_3,param_1);
  return DVar4;
}



/* ---- WaitEx @ 10013a80 size=115 ---- */

/* public: unsigned long __thiscall XWaitableCollection::WaitEx(int,int,unsigned long) */

ulong __thiscall
XWaitableCollection::WaitEx(XWaitableCollection *this,int param_1,int param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  
                    /* 0x13a80  326  ?WaitEx@XWaitableCollection@@QAEKHHK@Z */
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  iVar2 = *(int *)(iVar1 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    SetLastError(6);
    return 0xffffffff;
  }
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    FUN_10008e31();
  }
  iVar2 = (this->XWaitableCollection_data).offset_0x0;
  iVar3 = *(int *)(iVar2 + 4);
  if (iVar3 == 0) {
    DVar4 = 0;
  }
  else {
    DVar4 = *(int *)(iVar2 + 8) - iVar3 >> 2;
  }
  DVar4 = WaitForMultipleObjectsEx(DVar4,*(HANDLE **)(iVar1 + 4),param_2,param_3,param_1);
  return DVar4;
}



/* ---- Wait @ 10013b00 size=110 ---- */

/* public: unsigned long __thiscall XWaitableCollection::Wait(int,unsigned long) */

ulong __thiscall XWaitableCollection::Wait(XWaitableCollection *this,int param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  
                    /* 0x13b00  320  ?Wait@XWaitableCollection@@QAEKHK@Z */
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  iVar2 = *(int *)(iVar1 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    SetLastError(6);
    return 0xffffffff;
  }
  if ((iVar2 == 0) || (*(int *)(iVar1 + 8) - iVar2 >> 2 == 0)) {
    FUN_10008e31();
  }
  iVar2 = (this->XWaitableCollection_data).offset_0x0;
  iVar3 = *(int *)(iVar2 + 4);
  if (iVar3 == 0) {
    DVar4 = 0;
  }
  else {
    DVar4 = *(int *)(iVar2 + 8) - iVar3 >> 2;
  }
  DVar4 = WaitForMultipleObjects(DVar4,*(HANDLE **)(iVar1 + 4),param_1,param_2);
  return DVar4;
}



/* ---- Remove @ 10013b70 size=170 ---- */

/* public: void __thiscall XWaitableCollection::Remove(void *) */

void __thiscall XWaitableCollection::Remove(XWaitableCollection *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  rsize_t _DstSize;
  int iVar3;
  int *_Dst;
  
                    /* 0x13b70  262  ?Remove@XWaitableCollection@@QAEXPAX@Z */
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  piVar2 = *(int **)(iVar1 + 8);
  if (piVar2 < *(int **)(iVar1 + 4)) {
    FUN_10008e31();
  }
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  _Dst = *(int **)(iVar1 + 4);
  if (*(int **)(iVar1 + 8) < _Dst) {
    FUN_10008e31();
  }
  for (; (_Dst != piVar2 && ((void *)*_Dst != param_1)); _Dst = _Dst + 1) {
  }
  iVar3 = (this->XWaitableCollection_data).offset_0x0;
  piVar2 = *(int **)(iVar3 + 8);
  if (piVar2 < *(int **)(iVar3 + 4)) {
    FUN_10008e31();
  }
  if ((iVar1 == 0) || (iVar1 != iVar3)) {
    FUN_10008e31();
  }
  if (_Dst != piVar2) {
    iVar1 = (this->XWaitableCollection_data).offset_0x0;
    iVar3 = *(int *)(iVar1 + 8) - (int)(_Dst + 1) >> 2;
    if (0 < iVar3) {
      _DstSize = iVar3 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    piVar2 = (int *)(iVar1 + 8);
    *piVar2 = *piVar2 + -4;
  }
  return;
}



/* ---- Unlock @ 10013c20 size=71 ---- */

/* public: int __thiscall XRWLock::Unlock(void) */

int __thiscall XRWLock::Unlock(XRWLock *this)

{
  XRWCriticalSection *this_00;
  int iVar1;
  
                    /* 0x13c20  309  ?Unlock@XRWLock@@QAEHXZ */
  this_00 = (XRWCriticalSection *)(this->XRWLock_data).offset_0x0;
  if (this_00 == (XRWCriticalSection *)0x0) {
    return 0;
  }
  if ((this->XRWLock_data).offset_0x8 != 0) {
    if ((this->XRWLock_data).offset_0x4 == 0) {
      iVar1 = XRWCriticalSection::UnlockReader(this_00);
    }
    else {
      iVar1 = ReleaseMutex((HANDLE)**(undefined4 **)
                                     ((int)(this_00->XRWCriticalSection_data).offset_0x0 + 0x10));
    }
    (this->XRWLock_data).offset_0x8 = (uint)(iVar1 == 0);
  }
  return (uint)((this->XRWLock_data).offset_0x8 == 0);
}



/* ---- Lock @ 10013c70 size=56 ---- */

/* public: int __thiscall XRWLock::Lock(unsigned long) */

int __thiscall XRWLock::Lock(XRWLock *this,ulong param_1)

{
  XRWCriticalSection *this_00;
  int iVar1;
  
                    /* 0x13c70  231  ?Lock@XRWLock@@QAEHK@Z */
  this_00 = (XRWCriticalSection *)(this->XRWLock_data).offset_0x0;
  if (this_00 == (XRWCriticalSection *)0x0) {
    return 0;
  }
  if ((this->XRWLock_data).offset_0x4 == 0) {
    iVar1 = XRWCriticalSection::LockReader(this_00,param_1);
    (this->XRWLock_data).offset_0x8 = iVar1;
    return iVar1;
  }
  iVar1 = XRWCriticalSection::LockWriter(this_00,param_1);
  (this->XRWLock_data).offset_0x8 = iVar1;
  return iVar1;
}



/* ---- ~XRWLock @ 10013cb0 size=75 ---- */

/* public: virtual __thiscall XRWLock::~XRWLock(void) */

void __thiscall XRWLock::~XRWLock(XRWLock *this)

{
  XRWCriticalSection *this_00;
  BOOL BVar1;
  int iVar2;
  
                    /* 0x13cb0  70  ??1XRWLock@@UAE@XZ */
  this_00 = (XRWCriticalSection *)(this->XRWLock_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if ((this_00 != (XRWCriticalSection *)0x0) && ((this->XRWLock_data).offset_0x8 != 0)) {
    if ((this->XRWLock_data).offset_0x4 != 0) {
      BVar1 = ReleaseMutex((HANDLE)**(undefined4 **)
                                     ((int)(this_00->XRWCriticalSection_data).offset_0x0 + 0x10));
      (this->XRWLock_data).offset_0x8 = (uint)(BVar1 == 0);
      return;
    }
    iVar2 = XRWCriticalSection::UnlockReader(this_00);
    (this->XRWLock_data).offset_0x8 = (uint)(iVar2 == 0);
  }
  return;
}



/* ---- XRWLock @ 10013d00 size=76 ---- */

/* public: __thiscall XRWLock::XRWLock(class XRWCriticalSection &,int,unsigned long) */

XRWLock * __thiscall
XRWLock::XRWLock(XRWLock *this,XRWCriticalSection *param_1,int param_2,ulong param_3)

{
  int iVar1;
  
                    /* 0x13d00  35  ??0XRWLock@@QAE@AAVXRWCriticalSection@@HK@Z */
  this->vftablePtr = &_vftable_;
  (this->XRWLock_data).offset_0x0 = (undefined4 *)param_1;
  (this->XRWLock_data).offset_0x4 = param_2;
  (this->XRWLock_data).offset_0x8 = 0;
  if (param_1 != (XRWCriticalSection *)0x0) {
    if (param_2 != 0) {
      iVar1 = XRWCriticalSection::LockWriter((XRWCriticalSection *)param_1,param_3);
      (this->XRWLock_data).offset_0x8 = iVar1;
      return this;
    }
    iVar1 = XRWCriticalSection::LockReader((XRWCriticalSection *)param_1,param_3);
    (this->XRWLock_data).offset_0x8 = iVar1;
  }
  return this;
}



/* ---- XRWLock @ 10013d50 size=76 ---- */

/* public: __thiscall XRWLock::XRWLock(class XRWCriticalSection *,int,unsigned long) */

XRWLock * __thiscall
XRWLock::XRWLock(XRWLock *this,XRWCriticalSection *param_1,int param_2,ulong param_3)

{
  int iVar1;
  
                    /* 0x13d50  37  ??0XRWLock@@QAE@PAVXRWCriticalSection@@HK@Z */
  this->vftablePtr = &_vftable_;
  (this->XRWLock_data).offset_0x0 = (undefined4 *)param_1;
  (this->XRWLock_data).offset_0x4 = param_2;
  (this->XRWLock_data).offset_0x8 = 0;
  if (param_1 != (XRWCriticalSection *)0x0) {
    if (param_2 != 0) {
      iVar1 = XRWCriticalSection::LockWriter((XRWCriticalSection *)param_1,param_3);
      (this->XRWLock_data).offset_0x8 = iVar1;
      return this;
    }
    iVar1 = XRWCriticalSection::LockReader((XRWCriticalSection *)param_1,param_3);
    (this->XRWLock_data).offset_0x8 = iVar1;
  }
  return this;
}



/* ---- Destroy @ 10013da0 size=40 ---- */

/* public: int __thiscall XRWCriticalSection::Destroy(void) */

int __thiscall XRWCriticalSection::Destroy(XRWCriticalSection *this)

{
  void *_Memory;
  
                    /* 0x13da0  166  ?Destroy@XRWCriticalSection@@QAEHXZ */
  _Memory = (this->XRWCriticalSection_data).offset_0x0;
  if (_Memory != (void *)0x0) {
    FUN_10004dd0();
    _free(_Memory);
    (this->XRWCriticalSection_data).offset_0x0 = (void *)0x0;
  }
  return 1;
}



/* ---- ~XRWCriticalSection @ 10013dd0 size=41 ---- */

/* public: virtual __thiscall XRWCriticalSection::~XRWCriticalSection(void) */

void __thiscall XRWCriticalSection::~XRWCriticalSection(XRWCriticalSection *this)

{
  void *_Memory;
  
                    /* 0x13dd0  69  ??1XRWCriticalSection@@UAE@XZ */
  _Memory = (this->XRWCriticalSection_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (_Memory != (void *)0x0) {
    FUN_10004dd0();
    _free(_Memory);
    (this->XRWCriticalSection_data).offset_0x0 = (void *)0x0;
  }
  return;
}



/* ---- XCriticalSection::Unlock @ 10013e00 size=18 ---- */

/* public: virtual int __thiscall XCriticalSection::Unlock(void) */

int __thiscall XCriticalSection::XCriticalSection__Unlock(XCriticalSection *this)

{
                    /* 0x13e00  303  ?Unlock@XCriticalSection@@UAEHXZ */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(this->XCriticalSection_data).offset_0x0);
  return 1;
}



/* ---- XCriticalSection::Lock @ 10013e20 size=20 ---- */

/* public: virtual int __thiscall XCriticalSection::Lock(unsigned long) */

int __thiscall XCriticalSection::XCriticalSection__Lock(XCriticalSection *this,ulong param_1)

{
                    /* 0x13e20  225  ?Lock@XCriticalSection@@UAEHK@Z */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(this->XCriticalSection_data).offset_0x0);
  return 1;
}



/* ---- TryEnter @ 10013e40 size=81 ---- */

/* public: int __thiscall XCriticalSection::TryEnter(void) */

int __thiscall XCriticalSection::TryEnter(XCriticalSection *this)

{
  CriticalSection *pCVar1;
  bool bVar2;
  int iVar3;
  
                    /* 0x13e40  299  ?TryEnter@XCriticalSection@@QAEHXZ */
  pCVar1 = (this->XCriticalSection_data).offset_0x0;
  if (DAT_10023e0c != (FARPROC)0x0) {
LAB_10013e4d:
    iVar3 = (*DAT_10023e0c)(*(undefined4 *)pCVar1);
    return (uint)(iVar3 == 1);
  }
  bVar2 = XPlatform::IsWindows2000();
  if (bVar2) {
    DAT_10023e0c = GetProcAddress(DAT_10023e04,"TryEnterCriticalSection");
    if (DAT_10023e0c != (FARPROC)0x0) goto LAB_10013e4d;
  }
  SetLastError(0x78);
  return 0;
}



/* ---- XCriticalSection @ 10013ea0 size=111 ---- */

/* public: __thiscall XCriticalSection::XCriticalSection(unsigned long) */

XCriticalSection * __thiscall
XCriticalSection::XCriticalSection(XCriticalSection *this,ulong param_1)

{
  CriticalSection *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13ea0  14  ??0XCriticalSection@@QAE@K@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016319;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  this_00 = (CriticalSection *)FUN_100086ab(4);
  local_4 = 0;
  if (this_00 == (CriticalSection *)0x0) {
    (this->XCriticalSection_data).offset_0x0 = (CriticalSection *)0x0;
  }
  else {
    XSystem::Threading::CriticalSection::CriticalSection(this_00,param_1);
    (this->XCriticalSection_data).offset_0x0 = this_00;
  }
  ExceptionList = local_c;
  return this;
}



/* ---- Create @ 10013f10 size=258 ---- */

/* public: int __thiscall XRWCriticalSection::Create(void) */

int __thiscall XRWCriticalSection::Create(XRWCriticalSection *this)

{
  int iVar1;
  XMutexA *this_00;
  HANDLE pvVar2;
  XMutexA *this_01;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13f10  156  ?Create@XRWCriticalSection@@QAEHXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100163ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar3 = (this->XRWCriticalSection_data).offset_0x0;
  if (pvVar3 != (void *)0x0) {
    FUN_10004dd0();
    _free(pvVar3);
    (this->XRWCriticalSection_data).offset_0x0 = (void *)0x0;
  }
  iVar1 = FUN_100086ab(0x24);
  local_4 = 0;
  if (iVar1 == 0) {
    this_00 = (XMutexA *)0x0;
  }
  else {
    this_00 = XMutexA::XMutexA(this_01);
  }
  local_4 = 0xffffffff;
  (this->XRWCriticalSection_data).offset_0x0 = this_00;
  if (this_00 != (XMutexA *)0x0) {
    (*this_00->vftablePtr->Close)(this_00);
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    *this_00->offset_0x0 = pvVar2;
    pvVar3 = (this->XRWCriticalSection_data).offset_0x0;
    if (*this_00->offset_0x0 != 0) {
      (**(code **)(*(int *)((int)pvVar3 + 0xc) + 4))();
      pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
      **(undefined4 **)((int)pvVar3 + 0x10) = pvVar2;
      if (**(int **)((int)pvVar3 + 0x10) != 0) {
        *(undefined4 *)((int)(this->XRWCriticalSection_data).offset_0x0 + 0x20) = 0;
        ExceptionList = local_c;
        return 1;
      }
      pvVar3 = (this->XRWCriticalSection_data).offset_0x0;
    }
    if (pvVar3 != (void *)0x0) {
      FUN_10004dd0();
      _free(pvVar3);
      (this->XRWCriticalSection_data).offset_0x0 = (void *)0x0;
    }
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- Add @ 10014020 size=178 ---- */

/* public: int __thiscall XWaitableCollection::Add(void *) */

int __thiscall XWaitableCollection::Add(XWaitableCollection *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0x14020  133  ?Add@XWaitableCollection@@QAEHPAX@Z */
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  piVar4 = *(int **)(iVar1 + 4);
  if ((piVar4 != (int *)0x0) && (0x3f < (uint)(*(int *)(iVar1 + 8) - (int)piVar4 >> 2))) {
    return 0;
  }
  piVar2 = *(int **)(iVar1 + 8);
  if (piVar2 < piVar4) {
    FUN_10008e31();
  }
  iVar1 = (this->XWaitableCollection_data).offset_0x0;
  piVar4 = *(int **)(iVar1 + 4);
  if (*(int **)(iVar1 + 8) < piVar4) {
    FUN_10008e31();
  }
  for (; (piVar4 != piVar2 && ((void *)*piVar4 != param_1)); piVar4 = piVar4 + 1) {
  }
  iVar3 = (this->XWaitableCollection_data).offset_0x0;
  piVar2 = *(int **)(iVar3 + 8);
  if (piVar2 < *(int **)(iVar3 + 4)) {
    FUN_10008e31();
  }
  if ((iVar1 == 0) || (iVar1 != iVar3)) {
    FUN_10008e31();
  }
  if (piVar4 == piVar2) {
    FUN_10002280();
  }
  return 1;
}



/* ---- XWaitableCollection @ 100140e0 size=93 ---- */

/* public: __thiscall XWaitableCollection::XWaitableCollection(void) */

XWaitableCollection * __thiscall XWaitableCollection::XWaitableCollection(XWaitableCollection *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x140e0  49  ??0XWaitableCollection@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100164e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  iVar1 = FUN_100086ab(0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  (this->XWaitableCollection_data).offset_0x0 = iVar1;
  ExceptionList = local_c;
  return this;
}



/* ---- XIsWindows2000 @ 10014140 size=16 ---- */

/* int __stdcall XIsWindows2000(void) */

int XIsWindows2000(void)

{
  bool bVar1;
  
                    /* 0x14140  343  ?XIsWindows2000@@YGHXZ */
  bVar1 = XPlatform::IsWindows2000();
  return (uint)bVar1;
}



/* ---- DestroyHandle @ 10014150 size=25 ---- */

/* void __stdcall XSystem::Timers::Timer::DestroyHandle(struct XSystem::Timers::Timer::_Handle *) */

void XSystem::Timers::Timer::DestroyHandle(_Handle *param_1)

{
                    /* 0x14150  170  ?DestroyHandle@Timer@Timers@XSystem@@YGXPAU_Handle@123@@Z */
  if (param_1 == (_Handle *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10014164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* ---- DestroyHandle @ 10014170 size=25 ---- */

/* void __stdcall XSystem::Timers::TimerQueue::DestroyHandle(struct
   XSystem::Timers::TimerQueue::_THandle *) */

void XSystem::Timers::TimerQueue::DestroyHandle(_THandle *param_1)

{
                    /* 0x14170  171  ?DestroyHandle@TimerQueue@Timers@XSystem@@YGXPAU_THandle@123@@Z
                        */
  if (param_1 == (_THandle *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10014184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* ---- StopTimer @ 10014190 size=47 ---- */

/* bool __stdcall XSystem::Timers::Timer::StopTimer(struct XSystem::Timers::Timer::_Handle *) */

bool XSystem::Timers::Timer::StopTimer(_Handle *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x14190  291  ?StopTimer@Timer@Timers@XSystem@@YG_NPAU_Handle@123@@Z */
  if (param_1 != (_Handle *)0x0) {
    iVar2 = 0;
    LOCK();
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x20) = 1;
    }
    else {
      iVar2 = iVar1;
    }
    UNLOCK();
    if (iVar2 == 0) {
      FUN_100036a0((int)param_1);
      return true;
    }
  }
  return false;
}



/* ---- ResumeTimer @ 100141c0 size=48 ---- */

/* bool __stdcall XSystem::Timers::Timer::ResumeTimer(struct XSystem::Timers::Timer::_Handle *) */

bool XSystem::Timers::Timer::ResumeTimer(_Handle *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x141c0  269  ?ResumeTimer@Timer@Timers@XSystem@@YG_NPAU_Handle@123@@Z */
  if (param_1 != (_Handle *)0x0) {
    iVar2 = 1;
    LOCK();
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 1) {
      *(int *)(param_1 + 0x20) = 0;
    }
    else {
      iVar2 = iVar1;
    }
    UNLOCK();
    if (iVar2 == 1) {
      FUN_100035e0(*(void **)(param_1 + 0xc),param_1);
      return true;
    }
  }
  return false;
}



/* ---- CreateHandle @ 100141f0 size=200 ---- */

/* struct XSystem::Timers::TimerQueue::_THandle * __stdcall
   XSystem::Timers::TimerQueue::CreateHandle(struct XSystem::ThreadPool::_THandle *) */

_THandle * XSystem::Timers::TimerQueue::CreateHandle(_THandle *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  TimerQueue *_ArgList;
  uintptr_t uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x141f0  163
                       ?CreateHandle@TimerQueue@Timers@XSystem@@YGPAU_THandle@123@PAU4ThreadPool@3@@Z
                        */
  puStack_c = &LAB_10016725;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_100086ab(0x24);
  local_8._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    _ArgList = (TimerQueue *)0x0;
  }
  else {
    _ArgList = TimerImpl::TimerQueue::TimerQueue((TimerQueue *)param_1,puVar2);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar3 = __beginthreadex((void *)0x0,0,Threading::Thread::InternalThreadProc,_ArgList,0,
                          (_ArgList->Thread_data).offset_0x0 + 3);
  *(_ArgList->Thread_data).offset_0x0 = uVar3;
  piVar1 = (_ArgList->Thread_data).offset_0x0;
  if (*piVar1 == 0) {
    (*_ArgList->vftablePtr->vfunction1)(_ArgList,1);
    ExceptionList = local_10;
    return (_THandle *)0x0;
  }
  *(undefined1 *)((int)piVar1 + 6) = 0;
  *(undefined1 *)((int)(_ArgList->Thread_data).offset_0x0 + 7) = 0;
  (_ArgList->Thread_data).offset_0x0[2] = 0;
  ExceptionList = local_10;
  return (_THandle *)_ArgList;
}



/* ---- Catch_All@100142b8 @ 100142b8 size=6 ---- */

undefined1 * Catch_All_100142b8(void)

{
  return &LAB_100142be;
}



/* ---- CreateHandle @ 100142e0 size=136 ---- */

/* struct XSystem::Timers::Timer::_Handle * __stdcall XSystem::Timers::Timer::CreateHandle(struct
   XSystem::Timers::TimerQueue::_THandle *,unsigned int,void (__stdcall*)(void *),void *) */

_Handle * XSystem::Timers::Timer::CreateHandle
                    (_THandle *param_1,uint param_2,_func_void_void_ptr *param_3,void *param_4)

{
  undefined4 *puVar1;
  Timer *pTVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x142e0  162
                       ?CreateHandle@Timer@Timers@XSystem@@YGPAU_Handle@123@PAU_THandle@TimerQueue@23@IP6GXPAX@Z1@Z
                        */
  puStack_c = &LAB_1001674b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_100086ab(0x24);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return (_Handle *)0x0;
  }
  pTVar2 = TimerImpl::Timer::Timer((Timer *)param_2,puVar1,param_1,param_2,param_3);
  ExceptionList = local_10;
  return (_Handle *)pTVar2;
}



/* ---- Catch_All@10014368 @ 10014368 size=6 ---- */

undefined1 * Catch_All_10014368(void)

{
  return &LAB_1001436e;
}



/* ---- GetSize @ 10014390 size=17 ---- */

/* unsigned int __stdcall XSystem::MPHeap::GetSize(struct XSystem::MPHeap::_THandle *,void const *)
    */

uint XSystem::MPHeap::GetSize(_THandle *param_1,void *param_2)

{
                    /* 0x14390  200  ?GetSize@MPHeap@XSystem@@YGIPAU_THandle@12@PBX@Z */
  if (param_2 == (void *)0x0) {
    return 0;
  }
  return *(uint *)((int)param_2 + -4);
}



/* ---- DestroyHandle @ 100143b0 size=30 ---- */

/* void __stdcall XSystem::MPHeap::DestroyHandle(struct XSystem::MPHeap::_THandle *) */

void XSystem::MPHeap::DestroyHandle(_THandle *param_1)

{
                    /* 0x143b0  168  ?DestroyHandle@MPHeap@XSystem@@YGXPAU_THandle@12@@Z */
  if (param_1 != (_THandle *)0x0) {
    FUN_10002fe0((int)param_1);
    _free(param_1);
  }
  return;
}



/* ---- Free @ 100143d0 size=62 ---- */

/* void __stdcall XSystem::MPHeap::Free(struct XSystem::MPHeap::_THandle *,void *) */

void XSystem::MPHeap::Free(_THandle *param_1,void *param_2)

{
                    /* 0x143d0  181  ?Free@MPHeap@XSystem@@YGXPAU_THandle@12@PAX@Z */
  if ((param_1 == (_THandle *)0x0) && (DAT_10023e78 == 0)) {
    FUN_100031c0();
  }
  if (param_2 != (void *)0x0) {
    if (*(void **)((int)param_2 + -0xc) != (void *)0x0) {
      FUN_10002d10(*(void **)((int)param_2 + -0xc),(undefined4 *)((int)param_2 + -0xc));
      return;
    }
    _free((undefined4 *)((int)param_2 + -0xc));
  }
  return;
}



/* ---- Alloc @ 10014410 size=40 ---- */

/* void * __stdcall XSystem::MPHeap::Alloc(struct XSystem::MPHeap::_THandle *,unsigned int) */

void * XSystem::MPHeap::Alloc(_THandle *param_1,uint param_2)

{
  undefined4 *puVar1;
  
                    /* 0x14410  134  ?Alloc@MPHeap@XSystem@@YGPAXPAU_THandle@12@I@Z */
  if ((param_1 == (_THandle *)0x0) && (DAT_10023e78 == 0)) {
    FUN_100031c0();
  }
  puVar1 = FUN_100030e0();
  return puVar1;
}



/* ---- CreateHandle @ 10014440 size=112 ---- */

/* struct XSystem::MPHeap::_THandle * __stdcall XSystem::MPHeap::CreateHandle(unsigned int) */

_THandle * XSystem::MPHeap::CreateHandle(uint param_1)

{
  int iVar1;
  _THandle *p_Var2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x14440  160  ?CreateHandle@MPHeap@XSystem@@YGPAU_THandle@12@I@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100166b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_100086ab(0xc);
  local_4 = 0;
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return (_THandle *)0x0;
  }
  p_Var2 = (_THandle *)FUN_10002e70(param_1);
  ExceptionList = local_c;
  return p_Var2;
}



/* ---- Realloc @ 100144b0 size=218 ---- */

/* void * __stdcall XSystem::MPHeap::Realloc(struct XSystem::MPHeap::_THandle *,void *,unsigned int)
    */

void * XSystem::MPHeap::Realloc(_THandle *param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  
                    /* 0x144b0  252  ?Realloc@MPHeap@XSystem@@YGPAXPAU_THandle@12@PAXI@Z */
  if (param_3 == 0) {
    if ((param_1 == (_THandle *)0x0) && (DAT_10023e78 == 0)) {
      FUN_100031c0();
    }
    if (param_2 != (void *)0x0) {
      if (*(void **)((int)param_2 + -0xc) != (void *)0x0) {
        FUN_10002d10(*(void **)((int)param_2 + -0xc),(undefined4 *)((int)param_2 + -0xc));
        return (void *)0x0;
      }
      _free((undefined4 *)((int)param_2 + -0xc));
    }
    return (void *)0x0;
  }
  if (param_2 == (void *)0x0) {
    if ((param_1 == (_THandle *)0x0) && (DAT_10023e78 == 0)) {
      FUN_100031c0();
    }
    puVar1 = FUN_100030e0();
    return puVar1;
  }
  if (param_3 <= *(uint *)((int)param_2 + -8)) {
    *(uint *)((int)param_2 + -4) = param_3;
    return param_2;
  }
  if ((param_1 == (_THandle *)0x0) && (DAT_10023e78 == 0)) {
    FUN_100031c0();
  }
  puVar1 = FUN_100030e0();
  if (puVar1 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  if (*(uint *)((int)param_2 + -4) <= param_3) {
    param_3 = *(uint *)((int)param_2 + -4);
  }
  _memcpy(puVar1,param_2,param_3);
  Free(param_1,param_2);
  return puVar1;
}



/* ---- ~IIOCompletionPort @ 100145a0 size=7 ---- */

void __thiscall
XSystem::ThreadPoolImpl::IIOCompletionPort::~IIOCompletionPort(IIOCompletionPort *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- FUN_100145b0 @ 100145b0 size=157 ---- */

undefined4 * FUN_100145b0(void)

{
  bool bVar1;
  int iVar2;
  IOCompletionPortWin98 *pIVar3;
  IOCompletionPortNT *pIVar4;
  IOCompletionPortWin98 *this;
  IOCompletionPortNT *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001634a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = XPlatform::IsWindows2000();
  if (bVar1) {
    iVar2 = FUN_100086ab(0x14);
    local_4 = 1;
    if (iVar2 != 0) {
      pIVar4 = XSystem::ThreadPoolImpl::IOCompletionPortNT::IOCompletionPortNT(this_00);
      ExceptionList = local_c;
      return &pIVar4->vftablePtr;
    }
  }
  else {
    iVar2 = FUN_100086ab(0x20);
    local_4 = 0;
    if (iVar2 != 0) {
      pIVar3 = XSystem::ThreadPoolImpl::IOCompletionPortWin98::IOCompletionPortWin98(this);
      ExceptionList = local_c;
      return &pIVar3->vftablePtr;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



/* ---- SetThreadName @ 10014650 size=154 ---- */

/* bool __stdcall XSystem::Threading::SetThreadName(unsigned int,char const *) */

bool XSystem::Threading::SetThreadName(uint param_1,char *param_2)

{
  uint uStack_3c;
  ULONG_PTR local_2c;
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x14650  285  ?SetThreadName@Threading@XSystem@@YG_NIPBD@Z */
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10022024 ^ 0x1001b588;
  uStack_3c = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_1c = (undefined1 *)&uStack_3c;
  local_2c = 0x1000;
  local_28 = param_2;
  local_24 = param_1;
  local_20 = 0;
  if (param_1 == 0) {
    return false;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  RaiseException(0x406d1388,0,4,&local_2c);
  ExceptionList = local_14;
  return true;
}



/* ---- GetReturnValue @ 10014710 size=7 ---- */

/* protected: int __thiscall XSystem::Threading::Thread::GetReturnValue(void)const  */

int __thiscall XSystem::Threading::Thread::GetReturnValue(Thread *this)

{
                    /* 0x14710  198  ?GetReturnValue@Thread@Threading@XSystem@@IBEHXZ */
  return (this->Thread_data).offset_0x0[2];
}



/* ---- SetReturnValue @ 10014720 size=13 ---- */

/* protected: void __thiscall XSystem::Threading::Thread::SetReturnValue(int) */

void __thiscall XSystem::Threading::Thread::SetReturnValue(Thread *this,int param_1)

{
                    /* 0x14720  280  ?SetReturnValue@Thread@Threading@XSystem@@IAEXH@Z */
  (this->Thread_data).offset_0x0[2] = param_1;
  return;
}



/* ---- SetThreadName @ 10014730 size=127 ---- */

/* protected: void __thiscall XSystem::Threading::Thread::SetThreadName(char const *) */

void __thiscall XSystem::Threading::Thread::SetThreadName(Thread *this,char *param_1)

{
  uint uStack_3c;
  ULONG_PTR local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x14730  284  ?SetThreadName@Thread@Threading@XSystem@@IAEXPBD@Z */
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10022024 ^ 0x1001b5a8;
  uStack_3c = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_1c = (undefined1 *)&uStack_3c;
  ExceptionList = &local_14;
  local_2c = 0x1000;
  local_28 = param_1;
  local_24 = 0xffffffff;
  local_20 = 0;
  local_8 = 0;
  RaiseException(0x406d1388,0,4,&local_2c);
  ExceptionList = local_14;
  return;
}



/* ---- Terminated @ 100147c0 size=7 ---- */

/* protected: bool __thiscall XSystem::Threading::Thread::Terminated(void)const  */

bool __thiscall XSystem::Threading::Thread::Terminated(Thread *this)

{
                    /* 0x147c0  296  ?Terminated@Thread@Threading@XSystem@@IBE_NXZ */
  return (bool)*(undefined1 *)((int)(this->Thread_data).offset_0x0 + 6);
}



/* ---- GetThreadID @ 100147d0 size=7 ---- */

/* public: unsigned int __thiscall XSystem::Threading::Thread::GetThreadID(void)const  */

uint __thiscall XSystem::Threading::Thread::GetThreadID(Thread *this)

{
                    /* 0x147d0  206  ?GetThreadID@Thread@Threading@XSystem@@QBEIXZ */
  return (this->Thread_data).offset_0x0[3];
}



/* ---- GetHandle @ 100147e0 size=6 ---- */

/* public: void * __thiscall XSystem::Threading::Thread::GetHandle(void)const  */

void * __thiscall XSystem::Threading::Thread::GetHandle(Thread *this)

{
                    /* 0x147e0  191  ?GetHandle@Thread@Threading@XSystem@@QBEPAXXZ */
  return (void *)*(this->Thread_data).offset_0x0;
}



/* ---- GetSuspended @ 100147f0 size=7 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::GetSuspended(void)const  */

bool __thiscall XSystem::Threading::Thread::GetSuspended(Thread *this)

{
                    /* 0x147f0  204  ?GetSuspended@Thread@Threading@XSystem@@QBE_NXZ */
  return (bool)*(undefined1 *)((this->Thread_data).offset_0x0 + 1);
}



/* ---- GetPriority @ 10014800 size=13 ---- */

/* public: int __thiscall XSystem::Threading::Thread::GetPriority(void) */

int __thiscall XSystem::Threading::Thread::GetPriority(Thread *this)

{
  int iVar1;
  
                    /* 0x14800  195  ?GetPriority@Thread@Threading@XSystem@@QAEHXZ */
  iVar1 = GetThreadPriority((HANDLE)*(this->Thread_data).offset_0x0);
  return iVar1;
}



/* ---- SetPriority @ 10014810 size=26 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::SetPriority(int) */

bool __thiscall XSystem::Threading::Thread::SetPriority(Thread *this,int param_1)

{
  BOOL BVar1;
  
                    /* 0x14810  278  ?SetPriority@Thread@Threading@XSystem@@QAE_NH@Z */
  BVar1 = SetThreadPriority((HANDLE)*(this->Thread_data).offset_0x0,param_1);
  return BVar1 == 1;
}



/* ---- GetFinished @ 10014830 size=7 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::GetFinished(void)const  */

bool __thiscall XSystem::Threading::Thread::GetFinished(Thread *this)

{
                    /* 0x14830  187  ?GetFinished@Thread@Threading@XSystem@@QBE_NXZ */
  return (bool)*(undefined1 *)((int)(this->Thread_data).offset_0x0 + 7);
}



/* ---- SetFinished @ 10014840 size=13 ---- */

/* public: void __thiscall XSystem::Threading::Thread::SetFinished(bool) */

void __thiscall XSystem::Threading::Thread::SetFinished(Thread *this,bool param_1)

{
                    /* 0x14840  274  ?SetFinished@Thread@Threading@XSystem@@QAEX_N@Z */
  *(bool *)((int)(this->Thread_data).offset_0x0 + 7) = param_1;
  return;
}



/* ---- GetFreeOnTerminate @ 10014850 size=7 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::GetFreeOnTerminate(void)const  */

bool __thiscall XSystem::Threading::Thread::GetFreeOnTerminate(Thread *this)

{
                    /* 0x14850  189  ?GetFreeOnTerminate@Thread@Threading@XSystem@@QBE_NXZ */
  return (bool)*(undefined1 *)((int)(this->Thread_data).offset_0x0 + 5);
}



/* ---- SetFreeOnTerminate @ 10014860 size=13 ---- */

/* public: void __thiscall XSystem::Threading::Thread::SetFreeOnTerminate(bool) */

void __thiscall XSystem::Threading::Thread::SetFreeOnTerminate(Thread *this,bool param_1)

{
                    /* 0x14860  276  ?SetFreeOnTerminate@Thread@Threading@XSystem@@QAEX_N@Z */
  *(bool *)((int)(this->Thread_data).offset_0x0 + 5) = param_1;
  return;
}



/* ---- WaitFor @ 10014870 size=41 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::WaitFor(unsigned int) */

bool __thiscall XSystem::Threading::Thread::WaitFor(Thread *this,uint param_1)

{
  DWORD DVar1;
  
                    /* 0x14870  327  ?WaitFor@Thread@Threading@XSystem@@QAE_NI@Z */
  DVar1 = WaitForSingleObject((HANDLE)*(this->Thread_data).offset_0x0,param_1);
  if ((DVar1 == 0x80) || (DVar1 == 0x102)) {
    return false;
  }
  return true;
}



/* ---- Terminate @ 100148a0 size=8 ---- */

/* public: void __thiscall XSystem::Threading::Thread::Terminate(void) */

void __thiscall XSystem::Threading::Thread::Terminate(Thread *this)

{
                    /* 0x148a0  294  ?Terminate@Thread@Threading@XSystem@@QAEXXZ */
  *(undefined1 *)((int)(this->Thread_data).offset_0x0 + 6) = 1;
  return;
}



/* ---- Resume @ 100148b0 size=40 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::Resume(void) */

bool __thiscall XSystem::Threading::Thread::Resume(Thread *this)

{
  DWORD DVar1;
  
                    /* 0x148b0  267  ?Resume@Thread@Threading@XSystem@@QAE_NXZ */
  DVar1 = ResumeThread((HANDLE)*(this->Thread_data).offset_0x0);
  if (DVar1 == 0xffffffff) {
    return false;
  }
  if (DVar1 == 1) {
    *(undefined1 *)((this->Thread_data).offset_0x0 + 1) = 0;
  }
  return true;
}



/* ---- Suspend @ 100148e0 size=47 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::Suspend(void) */

bool __thiscall XSystem::Threading::Thread::Suspend(Thread *this)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
                    /* 0x148e0  292  ?Suspend@Thread@Threading@XSystem@@QAE_NXZ */
  puVar2 = (this->Thread_data).offset_0x0;
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *(undefined1 *)(puVar2 + 1) = 1;
  DVar3 = SuspendThread((HANDLE)*(this->Thread_data).offset_0x0);
  if (DVar3 == 0xffffffff) {
    *(undefined1 *)((this->Thread_data).offset_0x0 + 1) = uVar1;
    return false;
  }
  return true;
}



/* ---- Stop @ 10014910 size=64 ---- */

/* public: void __thiscall XSystem::Threading::Thread::Stop(void) */

void __thiscall XSystem::Threading::Thread::Stop(Thread *this)

{
  undefined4 *puVar1;
  int *piVar2;
  
                    /* 0x14910  290  ?Stop@Thread@Threading@XSystem@@QAEXXZ */
  puVar1 = (this->Thread_data).offset_0x0;
  if ((puVar1[3] != 0) && (*(char *)((int)puVar1 + 7) == '\0')) {
    *(undefined1 *)((int)puVar1 + 6) = 1;
    WaitForSingleObject((HANDLE)*(this->Thread_data).offset_0x0,0xffffffff);
  }
  piVar2 = (this->Thread_data).offset_0x0;
  if (*piVar2 != 0) {
    CloseHandle((HANDLE)*piVar2);
    *(this->Thread_data).offset_0x0 = 0;
  }
  return;
}



/* ---- ~Thread @ 10014950 size=89 ---- */

/* public: virtual __thiscall XSystem::Threading::Thread::~Thread(void) */

void __thiscall XSystem::Threading::Thread::~Thread(Thread *this)

{
  undefined4 *puVar1;
  int *piVar2;
  
                    /* 0x14950  60  ??1Thread@Threading@XSystem@@UAE@XZ */
  puVar1 = (this->Thread_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if ((puVar1[3] != 0) && (*(char *)((int)puVar1 + 7) == '\0')) {
    *(undefined1 *)((int)puVar1 + 6) = 1;
    WaitForSingleObject((HANDLE)*(this->Thread_data).offset_0x0,0xffffffff);
  }
  piVar2 = (this->Thread_data).offset_0x0;
  if (*piVar2 != 0) {
    CloseHandle((HANDLE)*piVar2);
    *(this->Thread_data).offset_0x0 = 0;
  }
  _free((this->Thread_data).offset_0x0);
  (this->Thread_data).offset_0x0 = (undefined4 *)0x0;
  return;
}



/* ---- FUN_100149b0 @ 100149b0 size=57 ---- */

void FUN_100149b0(void)

{
  char cVar1;
  int *unaff_ESI;
  
  cVar1 = *(char *)(*(int *)(*unaff_ESI + 4) + 5);
  *(undefined4 *)unaff_ESI[1] = *(undefined4 *)(*(int *)(*unaff_ESI + 4) + 8);
  *(undefined1 *)(*(int *)(*unaff_ESI + 4) + 7) = 1;
  if ((cVar1 == '\x01') && ((undefined4 *)*unaff_ESI != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)*unaff_ESI)(1);
  }
  __endthreadex(*(uint *)unaff_ESI[1]);
  return;
}



/* ---- InternalThreadProc @ 100149f0 size=174 ---- */

/* private: static unsigned int __stdcall XSystem::Threading::Thread::InternalThreadProc(class
   XSystem::Threading::Thread *) */

uint XSystem::Threading::Thread::InternalThreadProc(Thread *param_1)

{
  char cVar1;
  uint _Retval;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x149f0  212  ?InternalThreadProc@Thread@Threading@XSystem@@CGIPAV123@@Z */
  puStack_c = &LAB_100161db;
  local_10 = ExceptionList;
  if (param_1 == (Thread *)0x0) {
    return 0;
  }
  local_8 = 1;
  ExceptionList = &local_10;
  (**(code **)(*(int *)param_1 + 4))();
  local_8 = local_8 & 0xffffff00;
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 5);
  _Retval = *(uint *)(*(int *)(param_1 + 4) + 8);
  *(undefined1 *)(*(int *)(param_1 + 4) + 7) = 1;
  if (cVar1 == '\x01') {
    (*(code *)**(undefined4 **)param_1)(1);
  }
  __endthreadex(_Retval);
  ExceptionList = local_10;
  return _Retval;
}



/* ---- Catch_All@10014a9e @ 10014a9e size=9 ---- */

void Catch_All_10014a9e(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- SetSuspended @ 10014ab0 size=85 ---- */

/* public: void __thiscall XSystem::Threading::Thread::SetSuspended(bool) */

void __thiscall XSystem::Threading::Thread::SetSuspended(Thread *this,bool param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
                    /* 0x14ab0  282  ?SetSuspended@Thread@Threading@XSystem@@QAEX_N@Z */
  puVar2 = (this->Thread_data).offset_0x0;
  if ((bool)*(char *)(puVar2 + 1) != param_1) {
    if (param_1) {
      uVar1 = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)(puVar2 + 1) = 1;
      DVar3 = SuspendThread((HANDLE)*(this->Thread_data).offset_0x0);
      if (DVar3 == 0xffffffff) {
        *(undefined1 *)((this->Thread_data).offset_0x0 + 1) = uVar1;
      }
    }
    else {
      DVar3 = ResumeThread((HANDLE)*puVar2);
      if ((DVar3 != 0xffffffff) && (DVar3 == 1)) {
        *(undefined1 *)((this->Thread_data).offset_0x0 + 1) = 0;
        return;
      }
    }
  }
  return;
}



/* ---- Start @ 10014b10 size=74 ---- */

/* public: bool __thiscall XSystem::Threading::Thread::Start(void) */

bool __thiscall XSystem::Threading::Thread::Start(Thread *this)

{
  int *piVar1;
  uintptr_t uVar2;
  
                    /* 0x14b10  289  ?Start@Thread@Threading@XSystem@@QAE_NXZ */
  uVar2 = __beginthreadex((void *)0x0,0,InternalThreadProc,this,0,(this->Thread_data).offset_0x0 + 3
                         );
  *(this->Thread_data).offset_0x0 = uVar2;
  piVar1 = (this->Thread_data).offset_0x0;
  if (*piVar1 == 0) {
    return false;
  }
  *(undefined1 *)((int)piVar1 + 6) = 0;
  *(undefined1 *)((int)(this->Thread_data).offset_0x0 + 7) = 0;
  (this->Thread_data).offset_0x0[2] = 0;
  return true;
}



/* ---- Thread @ 10014b60 size=60 ---- */

/* public: __thiscall XSystem::Threading::Thread::Thread(void) */

Thread * __thiscall XSystem::Threading::Thread::Thread(Thread *this)

{
  undefined4 *puVar1;
  
                    /* 0x14b60  12  ??0Thread@Threading@XSystem@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  puVar1 = (undefined4 *)FUN_100086ab(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    (this->Thread_data).offset_0x0 = (undefined4 *)0x0;
    return this;
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  (this->Thread_data).offset_0x0 = puVar1;
  return this;
}



/* ---- WaitEx @ 10014ba0 size=37 ---- */

/* public: bool __thiscall XSystem::Threading::ManualResetEvent::WaitEx(bool,unsigned int) */

bool __thiscall
XSystem::Threading::ManualResetEvent::WaitEx(ManualResetEvent *this,bool param_1,uint param_2)

{
  DWORD DVar1;
  
                    /* 0x14ba0  323  ?WaitEx@ManualResetEvent@Threading@XSystem@@QAE_N_NI@Z */
  DVar1 = WaitForSingleObjectEx((HANDLE)**(undefined4 **)this,param_2,(uint)param_1);
  return DVar1 != 0x102;
}



/* ---- Wait @ 10014bd0 size=31 ---- */

/* public: bool __thiscall XSystem::Threading::ManualResetEvent::Wait(unsigned int) */

bool __thiscall XSystem::Threading::ManualResetEvent::Wait(ManualResetEvent *this,uint param_1)

{
  DWORD DVar1;
  
                    /* 0x14bd0  317  ?Wait@ManualResetEvent@Threading@XSystem@@QAE_NI@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)this,param_1);
  return DVar1 != 0x102;
}



/* ---- Pulse @ 10014bf0 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::ManualResetEvent::Pulse(void) */

bool __thiscall XSystem::Threading::ManualResetEvent::Pulse(ManualResetEvent *this)

{
  BOOL BVar1;
  
                    /* 0x14bf0  245  ?Pulse@ManualResetEvent@Threading@XSystem@@QAE_NXZ */
  BVar1 = PulseEvent((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- Reset @ 10014c10 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::ManualResetEvent::Reset(void) */

bool __thiscall XSystem::Threading::ManualResetEvent::Reset(ManualResetEvent *this)

{
  BOOL BVar1;
  
                    /* 0x14c10  264  ?Reset@ManualResetEvent@Threading@XSystem@@QAE_NXZ */
  BVar1 = ResetEvent((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- Set @ 10014c30 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::ManualResetEvent::Set(void) */

bool __thiscall XSystem::Threading::ManualResetEvent::Set(ManualResetEvent *this)

{
  BOOL BVar1;
  
                    /* 0x14c30  271  ?Set@ManualResetEvent@Threading@XSystem@@QAE_NXZ */
  BVar1 = SetEvent((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- ~ManualResetEvent @ 10014c50 size=33 ---- */

/* public: __thiscall XSystem::Threading::ManualResetEvent::~ManualResetEvent(void) */

void __thiscall XSystem::Threading::ManualResetEvent::~ManualResetEvent(ManualResetEvent *this)

{
                    /* 0x14c50  56  ??1ManualResetEvent@Threading@XSystem@@QAE@XZ */
  CloseHandle((HANDLE)**(undefined4 **)this);
  _free(*(void **)this);
  *(undefined4 *)this = 0;
  return;
}



/* ---- WaitEx @ 10014c80 size=37 ---- */

/* public: bool __thiscall XSystem::Threading::AutoResetEvent::WaitEx(bool,unsigned int) */

bool __thiscall
XSystem::Threading::AutoResetEvent::WaitEx(AutoResetEvent *this,bool param_1,uint param_2)

{
  DWORD DVar1;
  
                    /* 0x14c80  322  ?WaitEx@AutoResetEvent@Threading@XSystem@@QAE_N_NI@Z */
  DVar1 = WaitForSingleObjectEx((HANDLE)**(undefined4 **)this,param_2,(uint)param_1);
  return DVar1 != 0x102;
}



/* ---- Wait @ 10014cb0 size=31 ---- */

/* public: bool __thiscall XSystem::Threading::AutoResetEvent::Wait(unsigned int) */

bool __thiscall XSystem::Threading::AutoResetEvent::Wait(AutoResetEvent *this,uint param_1)

{
  DWORD DVar1;
  
                    /* 0x14cb0  314  ?Wait@AutoResetEvent@Threading@XSystem@@QAE_NI@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)this,param_1);
  return DVar1 != 0x102;
}



/* ---- Pulse @ 10014cd0 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::AutoResetEvent::Pulse(void) */

bool __thiscall XSystem::Threading::AutoResetEvent::Pulse(AutoResetEvent *this)

{
  BOOL BVar1;
  
                    /* 0x14cd0  244  ?Pulse@AutoResetEvent@Threading@XSystem@@QAE_NXZ */
  BVar1 = PulseEvent((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- Reset @ 10014cf0 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::AutoResetEvent::Reset(void) */

bool __thiscall XSystem::Threading::AutoResetEvent::Reset(AutoResetEvent *this)

{
  BOOL BVar1;
  
                    /* 0x14cf0  263  ?Reset@AutoResetEvent@Threading@XSystem@@QAE_NXZ */
  BVar1 = ResetEvent((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- Set @ 10014d10 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::AutoResetEvent::Set(void) */

bool __thiscall XSystem::Threading::AutoResetEvent::Set(AutoResetEvent *this)

{
  BOOL BVar1;
  
                    /* 0x14d10  270  ?Set@AutoResetEvent@Threading@XSystem@@QAE_NXZ */
  BVar1 = SetEvent((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- ~AutoResetEvent @ 10014d30 size=33 ---- */

/* public: __thiscall XSystem::Threading::AutoResetEvent::~AutoResetEvent(void) */

void __thiscall XSystem::Threading::AutoResetEvent::~AutoResetEvent(AutoResetEvent *this)

{
                    /* 0x14d30  52  ??1AutoResetEvent@Threading@XSystem@@QAE@XZ */
  CloseHandle((HANDLE)**(undefined4 **)this);
  _free(*(void **)this);
  *(undefined4 *)this = 0;
  return;
}



/* ---- WaitEx @ 10014d60 size=37 ---- */

/* public: bool __thiscall XSystem::Threading::Semaphore::WaitEx(bool,unsigned int) */

bool __thiscall XSystem::Threading::Semaphore::WaitEx(Semaphore *this,bool param_1,uint param_2)

{
  DWORD DVar1;
  
                    /* 0x14d60  325  ?WaitEx@Semaphore@Threading@XSystem@@QAE_N_NI@Z */
  DVar1 = WaitForSingleObjectEx((HANDLE)**(undefined4 **)this,param_2,(uint)param_1);
  return DVar1 != 0x102;
}



/* ---- Wait @ 10014d90 size=31 ---- */

/* public: bool __thiscall XSystem::Threading::Semaphore::Wait(unsigned int) */

bool __thiscall XSystem::Threading::Semaphore::Wait(Semaphore *this,uint param_1)

{
  DWORD DVar1;
  
                    /* 0x14d90  319  ?Wait@Semaphore@Threading@XSystem@@QAE_NI@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)this,param_1);
  return DVar1 != 0x102;
}



/* ---- Release @ 10014db0 size=56 ---- */

/* public: bool __thiscall XSystem::Threading::Semaphore::Release(int,int *) */

bool __thiscall XSystem::Threading::Semaphore::Release(Semaphore *this,int param_1,int *param_2)

{
  BOOL BVar1;
  long local_4;
  
                    /* 0x14db0  257  ?Release@Semaphore@Threading@XSystem@@QAE_NHPAH@Z */
  local_4 = 0;
  BVar1 = ReleaseSemaphore((HANDLE)**(undefined4 **)this,param_1,&local_4);
  if ((BVar1 == 1) && (param_2 != (int *)0x0)) {
    *param_2 = local_4;
  }
  return BVar1 == 1;
}



/* ---- ~Semaphore @ 10014df0 size=33 ---- */

/* public: __thiscall XSystem::Threading::Semaphore::~Semaphore(void) */

void __thiscall XSystem::Threading::Semaphore::~Semaphore(Semaphore *this)

{
                    /* 0x14df0  59  ??1Semaphore@Threading@XSystem@@QAE@XZ */
  CloseHandle((HANDLE)**(undefined4 **)this);
  _free(*(void **)this);
  *(undefined4 *)this = 0;
  return;
}



/* ---- WaitEx @ 10014e20 size=37 ---- */

/* public: bool __thiscall XSystem::Threading::Mutex::WaitEx(bool,unsigned int) */

bool __thiscall XSystem::Threading::Mutex::WaitEx(Mutex *this,bool param_1,uint param_2)

{
  DWORD DVar1;
  
                    /* 0x14e20  324  ?WaitEx@Mutex@Threading@XSystem@@QAE_N_NI@Z */
  DVar1 = WaitForSingleObjectEx((HANDLE)**(undefined4 **)this,param_2,(uint)param_1);
  return DVar1 != 0x102;
}



/* ---- Wait @ 10014e50 size=31 ---- */

/* public: bool __thiscall XSystem::Threading::Mutex::Wait(unsigned int) */

bool __thiscall XSystem::Threading::Mutex::Wait(Mutex *this,uint param_1)

{
  DWORD DVar1;
  
                    /* 0x14e50  318  ?Wait@Mutex@Threading@XSystem@@QAE_NI@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)this,param_1);
  return DVar1 != 0x102;
}



/* ---- Release @ 10014e70 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::Mutex::Release(void) */

bool __thiscall XSystem::Threading::Mutex::Release(Mutex *this)

{
  BOOL BVar1;
  
                    /* 0x14e70  256  ?Release@Mutex@Threading@XSystem@@QAE_NXZ */
  BVar1 = ReleaseMutex((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- ~Mutex @ 10014e90 size=33 ---- */

/* public: __thiscall XSystem::Threading::Mutex::~Mutex(void) */

void __thiscall XSystem::Threading::Mutex::~Mutex(Mutex *this)

{
                    /* 0x14e90  57  ??1Mutex@Threading@XSystem@@QAE@XZ */
  CloseHandle((HANDLE)**(undefined4 **)this);
  _free(*(void **)this);
  *(undefined4 *)this = 0;
  return;
}



/* ---- Leave @ 10014ec0 size=10 ---- */

/* public: void __thiscall XSystem::Threading::CriticalSection::Leave(void) */

void __thiscall XSystem::Threading::CriticalSection::Leave(CriticalSection *this)

{
                    /* 0x14ec0  220  ?Leave@CriticalSection@Threading@XSystem@@QAEXXZ */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)this);
  return;
}



/* ---- Enter @ 10014ed0 size=10 ---- */

/* public: void __thiscall XSystem::Threading::CriticalSection::Enter(void) */

void __thiscall XSystem::Threading::CriticalSection::Enter(CriticalSection *this)

{
                    /* 0x14ed0  177  ?Enter@CriticalSection@Threading@XSystem@@QAEXXZ */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)this);
  return;
}



/* ---- ~CriticalSection @ 10014ee0 size=31 ---- */

/* public: __thiscall XSystem::Threading::CriticalSection::~CriticalSection(void) */

void __thiscall XSystem::Threading::CriticalSection::~CriticalSection(CriticalSection *this)

{
                    /* 0x14ee0  55  ??1CriticalSection@Threading@XSystem@@QAE@XZ */
  DeleteCriticalSection(*(LPCRITICAL_SECTION *)this);
  _free(*(void **)this);
  *(undefined4 *)this = 0;
  return;
}



/* ---- Sleep @ 10014f00 size=6 ---- */

/* void __stdcall XSystem::Threading::Sleep(unsigned long) */

void XSystem::Threading::Sleep(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10014f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x14f00  288  ?Sleep@Threading@XSystem@@YGXK@Z */
  ::Sleep(param_1);
  return;
}



/* ---- ManualResetEvent @ 10014f10 size=79 ---- */

/* public: __thiscall XSystem::Threading::ManualResetEvent::ManualResetEvent(bool) */

ManualResetEvent * __thiscall
XSystem::Threading::ManualResetEvent::ManualResetEvent(ManualResetEvent *this,bool param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x14f10  5  ??0ManualResetEvent@Threading@XSystem@@QAE@_N@Z */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,(uint)param_1,(LPCSTR)0x0);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return this;
}



/* ---- AutoResetEvent @ 10014f60 size=79 ---- */

/* public: __thiscall XSystem::Threading::AutoResetEvent::AutoResetEvent(bool) */

AutoResetEvent * __thiscall
XSystem::Threading::AutoResetEvent::AutoResetEvent(AutoResetEvent *this,bool param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x14f60  1  ??0AutoResetEvent@Threading@XSystem@@QAE@_N@Z */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,(uint)param_1,(LPCSTR)0x0);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return this;
}



/* ---- Unlock @ 10014fb0 size=34 ---- */

/* public: bool __thiscall XSystem::Threading::Semaphore::Unlock(void) */

bool __thiscall XSystem::Threading::Semaphore::Unlock(Semaphore *this)

{
  BOOL BVar1;
  long local_4;
  
                    /* 0x14fb0  302  ?Unlock@Semaphore@Threading@XSystem@@QAE_NXZ */
  local_4 = 0;
  BVar1 = ReleaseSemaphore((HANDLE)**(undefined4 **)this,1,&local_4);
  return BVar1 == 1;
}



/* ---- Lock @ 10014fe0 size=31 ---- */

/* public: bool __thiscall XSystem::Threading::Semaphore::Lock(unsigned int) */

bool __thiscall XSystem::Threading::Semaphore::Lock(Semaphore *this,uint param_1)

{
  DWORD DVar1;
  
                    /* 0x14fe0  224  ?Lock@Semaphore@Threading@XSystem@@QAE_NI@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)this,param_1);
  return DVar1 != 0x102;
}



/* ---- Semaphore @ 10015000 size=83 ---- */

/* public: __thiscall XSystem::Threading::Semaphore::Semaphore(char const *,unsigned int,bool) */

Semaphore * __thiscall
XSystem::Threading::Semaphore::Semaphore(Semaphore *this,char *param_1,uint param_2,bool param_3)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x15000  10  ??0Semaphore@Threading@XSystem@@QAE@PBDI_N@Z */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = OpenSemaphoreA(param_2,(uint)param_3,param_1);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return this;
}



/* ---- Semaphore @ 10015060 size=87 ---- */

/* public: __thiscall XSystem::Threading::Semaphore::Semaphore(int,int,char const *,struct
   _SECURITY_ATTRIBUTES *) */

Semaphore * __thiscall
XSystem::Threading::Semaphore::Semaphore
          (Semaphore *this,int param_1,int param_2,char *param_3,_SECURITY_ATTRIBUTES *param_4)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x15060  9
                       ??0Semaphore@Threading@XSystem@@QAE@HHPBDPAU_SECURITY_ATTRIBUTES@@@Z */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = CreateSemaphoreA(param_4,param_1,param_2,param_3);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return this;
}



/* ---- Unlock @ 100150c0 size=22 ---- */

/* public: bool __thiscall XSystem::Threading::Mutex::Unlock(void) */

bool __thiscall XSystem::Threading::Mutex::Unlock(Mutex *this)

{
  BOOL BVar1;
  
                    /* 0x150c0  301  ?Unlock@Mutex@Threading@XSystem@@QAE_NXZ */
  BVar1 = ReleaseMutex((HANDLE)**(undefined4 **)this);
  return (bool)('\x01' - (BVar1 != 1));
}



/* ---- Lock @ 100150e0 size=31 ---- */

/* public: bool __thiscall XSystem::Threading::Mutex::Lock(unsigned int) */

bool __thiscall XSystem::Threading::Mutex::Lock(Mutex *this,uint param_1)

{
  DWORD DVar1;
  
                    /* 0x150e0  223  ?Lock@Mutex@Threading@XSystem@@QAE_NI@Z */
  DVar1 = WaitForSingleObject((HANDLE)**(undefined4 **)this,param_1);
  return DVar1 != 0x102;
}



/* ---- Mutex @ 10015100 size=83 ---- */

/* public: __thiscall XSystem::Threading::Mutex::Mutex(char const *,unsigned int,bool) */

Mutex * __thiscall
XSystem::Threading::Mutex::Mutex(Mutex *this,char *param_1,uint param_2,bool param_3)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x15100  6  ??0Mutex@Threading@XSystem@@QAE@PBDI_N@Z */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = OpenMutexA(param_2,(uint)param_3,param_1);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return this;
}



/* ---- Mutex @ 10015160 size=83 ---- */

/* public: __thiscall XSystem::Threading::Mutex::Mutex(bool,char const *,struct _SECURITY_ATTRIBUTES
   *) */

Mutex * __thiscall
XSystem::Threading::Mutex::Mutex
          (Mutex *this,bool param_1,char *param_2,_SECURITY_ATTRIBUTES *param_3)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* 0x15160  7  ??0Mutex@Threading@XSystem@@QAE@_NPBDPAU_SECURITY_ATTRIBUTES@@@Z
                        */
  puVar1 = (undefined4 *)FUN_100086ab(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this = puVar1;
  pvVar2 = CreateMutexA(param_3,(uint)param_1,param_2);
  **(undefined4 **)this = pvVar2;
  if (**(int **)this == 0) {
    _free(*(int **)this);
    *(undefined4 *)this = 0;
  }
  return this;
}



/* ---- Unlock @ 100151c0 size=10 ---- */

/* public: void __thiscall XSystem::Threading::CriticalSection::Unlock(void) */

void __thiscall XSystem::Threading::CriticalSection::Unlock(CriticalSection *this)

{
                    /* 0x151c0  300  ?Unlock@CriticalSection@Threading@XSystem@@QAEXXZ */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)this);
  return;
}



/* ---- Lock @ 100151d0 size=10 ---- */

/* public: void __thiscall XSystem::Threading::CriticalSection::Lock(void) */

void __thiscall XSystem::Threading::CriticalSection::Lock(CriticalSection *this)

{
                    /* 0x151d0  222  ?Lock@CriticalSection@Threading@XSystem@@QAEXXZ */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)this);
  return;
}



/* ---- TryEnter @ 100151e0 size=78 ---- */

/* public: bool __thiscall XSystem::Threading::CriticalSection::TryEnter(void) */

bool __thiscall XSystem::Threading::CriticalSection::TryEnter(CriticalSection *this)

{
  bool bVar1;
  int iVar2;
  
                    /* 0x151e0  298  ?TryEnter@CriticalSection@Threading@XSystem@@QAE_NXZ */
  if (DAT_10023e0c != (FARPROC)0x0) {
LAB_100151ec:
    iVar2 = (*DAT_10023e0c)(*(undefined4 *)this);
    return (bool)('\x01' - (iVar2 != 1));
  }
  bVar1 = XPlatform::IsWindows2000();
  if (bVar1) {
    DAT_10023e0c = GetProcAddress(DAT_10023e04,"TryEnterCriticalSection");
    if (DAT_10023e0c != (FARPROC)0x0) goto LAB_100151ec;
  }
  SetLastError(0x78);
  return false;
}



/* ---- CriticalSection @ 10015230 size=106 ---- */

/* public: __thiscall XSystem::Threading::CriticalSection::CriticalSection(unsigned int) */

CriticalSection * __thiscall
XSystem::Threading::CriticalSection::CriticalSection(CriticalSection *this,uint param_1)

{
  FARPROC pFVar1;
  undefined4 uVar2;
  bool bVar3;
  
                    /* 0x15230  4  ??0CriticalSection@Threading@XSystem@@QAE@I@Z */
  uVar2 = FUN_100086ab(0x18);
  pFVar1 = DAT_10023e08;
  bVar3 = DAT_10023e08 != (FARPROC)0x0;
  *(undefined4 *)this = uVar2;
  if (bVar3) {
    (*pFVar1)(uVar2,param_1);
    return this;
  }
  bVar3 = XPlatform::IsWindows2000();
  if (bVar3) {
    DAT_10023e08 = GetProcAddress(DAT_10023e04,"InitializeCriticalSectionAndSpinCount");
    if (DAT_10023e08 != (FARPROC)0x0) {
      (*DAT_10023e08)(*(undefined4 *)this,param_1);
      return this;
    }
  }
  InitializeCriticalSection(*(LPCRITICAL_SECTION *)this);
  return this;
}



/* ---- Broadcast @ 100152a0 size=65 ---- */

/* public: void __thiscall XSystem::Threading::CondVar::Broadcast(void) */

void __thiscall XSystem::Threading::CondVar::Broadcast(CondVar *this)

{
  int iVar1;
  
                    /* 0x152a0  143  ?Broadcast@CondVar@Threading@XSystem@@QAEXXZ */
  iVar1 = *(int *)this;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 4));
  if (*(int *)(*(int *)this + 8) != 0) {
    SetEvent((HANDLE)**(undefined4 **)(*(int *)this + 0x14));
    *(undefined4 *)(*(int *)this + 0xc) = *(undefined4 *)(*(int *)this + 8);
    *(int *)(*(int *)this + 0x10) = *(int *)(*(int *)this + 0x10) + 1;
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 4));
  return;
}



/* ---- Signal @ 100152f0 size=68 ---- */

/* public: void __thiscall XSystem::Threading::CondVar::Signal(void) */

void __thiscall XSystem::Threading::CondVar::Signal(CondVar *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x152f0  287  ?Signal@CondVar@Threading@XSystem@@QAEXXZ */
  iVar1 = *(int *)this;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 4));
  iVar2 = *(int *)this;
  if (*(uint *)(iVar2 + 0xc) < *(uint *)(iVar2 + 8)) {
    SetEvent((HANDLE)**(undefined4 **)(iVar2 + 0x14));
    *(int *)(*(int *)this + 0xc) = *(int *)(*(int *)this + 0xc) + 1;
    *(int *)(*(int *)this + 0x10) = *(int *)(*(int *)this + 0x10) + 1;
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 4));
  return;
}



/* ---- Wait @ 10015340 size=372 ---- */

/* public: bool __thiscall XSystem::Threading::CondVar::Wait(class XSystem::Threading::Mutex *) */

bool __thiscall XSystem::Threading::CondVar::Wait(CondVar *this,Mutex *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 *puVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* 0x15340  316  ?Wait@CondVar@Threading@XSystem@@QAE_NPAVMutex@23@@Z */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_10016297;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar5 = (undefined4 *)(*(int *)this + 4);
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this + 4));
  if (**(char **)this == '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)*puVar5);
  }
  else {
    piVar1 = (int *)(*(char **)this + 8);
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(*(int *)this + 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)*puVar5);
    if (param_1 != (Mutex *)0x0) {
      ReleaseMutex((HANDLE)**(undefined4 **)param_1);
      while( true ) {
        WaitForSingleObject((HANDLE)**(undefined4 **)(*(int *)this + 0x14),0xffffffff);
        puVar5 = (undefined4 *)(*(int *)this + 4);
        EnterCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this + 4));
        pcVar3 = *(char **)this;
        if ((*(int *)(pcVar3 + 0xc) == 0) || (bVar4 = true, iVar2 == *(int *)(pcVar3 + 0x10))) {
          bVar4 = false;
        }
        if ((bVar4) || (*pcVar3 == '\0')) break;
        LeaveCriticalSection((LPCRITICAL_SECTION)*puVar5);
        ::Sleep(0);
      }
      *(int *)(*(int *)this + 0xc) = *(int *)(*(int *)this + 0xc) + -1;
      if (*(int *)(*(int *)this + 0xc) == 0) {
        ResetEvent((HANDLE)**(undefined4 **)(*(int *)this + 0x14));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)*puVar5);
      WaitForSingleObject((HANDLE)**(undefined4 **)param_1,0xffffffff);
      iVar2 = *(int *)this;
      puVar5 = (undefined4 *)0x0;
      EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 4));
      *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + -1;
      if (*(int *)(*(int *)this + 8) == 0) {
        puVar5 = *(undefined4 **)(*(int *)this + 0x18);
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 4));
      if (puVar5 != (undefined4 *)0x0) {
        SetEvent(*(HANDLE *)*puVar5);
      }
      ExceptionList = local_14;
      return bVar4;
    }
  }
  ExceptionList = local_14;
  return false;
}



/* ---- ~CondVar @ 100154c0 size=374 ---- */

/* public: __thiscall XSystem::Threading::CondVar::~CondVar(void) */

void __thiscall XSystem::Threading::CondVar::~CondVar(CondVar *this)

{
  int iVar1;
  int iVar2;
  void *_Memory;
  HANDLE pvVar3;
  uint uStack_34;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x154c0  54  ??1CondVar@Threading@XSystem@@QAE@XZ */
  puStack_c = &LAB_100162c2;
  local_10 = ExceptionList;
  uStack_34 = DAT_10022024 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)this;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 4));
  local_8 = CONCAT31(local_8._1_3_,1);
  **(undefined1 **)this = 0;
  if (*(int *)(*(int *)this + 8) != 0) {
    local_18 = (int *)FUN_100086ab(4);
    if (local_18 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      *local_18 = 0;
    }
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *local_18 = (int)pvVar3;
    if (*local_18 == 0) {
      _free(local_18);
      local_18 = (int *)0x0;
    }
    ResetEvent((HANDLE)*local_18);
    *(int ***)(*(int *)this + 0x18) = &local_18;
    iVar2 = *(int *)this;
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 4));
    if (*(int *)(*(int *)this + 8) != 0) {
      SetEvent((HANDLE)**(undefined4 **)(*(int *)this + 0x14));
      *(undefined4 *)(*(int *)this + 0xc) = *(undefined4 *)(*(int *)this + 8);
      *(int *)(*(int *)this + 0x10) = *(int *)(*(int *)this + 0x10) + 1;
    }
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 4));
    WaitForSingleObject((HANDLE)*local_18,0xffffffff);
    CloseHandle((HANDLE)*local_18);
    _free(local_18);
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar1 + 4));
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    CloseHandle((HANDLE)**(undefined4 **)((int)_Memory + 0x14));
    _free(*(void **)((int)_Memory + 0x14));
    *(undefined4 *)((int)_Memory + 0x14) = 0;
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)((int)_Memory + 4));
    _free(*(void **)((int)_Memory + 4));
    *(undefined4 *)((int)_Memory + 4) = 0;
    _free(_Memory);
  }
  *(undefined4 *)this = 0;
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@10015636 @ 10015636 size=6 ---- */

undefined * Catch_All_10015636(void)

{
  return &DAT_1001563c;
}



/* ---- InternalUnlock @ 10015650 size=136 ---- */

/* private: void __thiscall XSystem::Threading::RWCriticalSection::InternalUnlock(void) */

void __thiscall XSystem::Threading::RWCriticalSection::InternalUnlock(RWCriticalSection *this)

{
  int iVar1;
  int *piVar2;
  int lReleaseCount;
  int *piVar3;
  RWCriticalSection *local_4;
  
                    /* 0x15650  214  ?InternalUnlock@RWCriticalSection@Threading@XSystem@@AAEXXZ */
  local_4 = this;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this + 0xc));
  iVar1 = *(int *)this;
  lReleaseCount = 1;
  if (*(int *)(iVar1 + 8) < 1) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  else {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  }
  piVar2 = *(int **)this;
  piVar3 = (int *)0x0;
  if (piVar2[2] == 0) {
    if (piVar2[1] < 1) {
      if (0 < *piVar2) {
        piVar2[2] = *piVar2;
        **(undefined4 **)this = 0;
        piVar2 = *(int **)this;
        lReleaseCount = piVar2[2];
        piVar3 = piVar2 + 4;
      }
    }
    else {
      piVar2[2] = -1;
      *(int *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + -1;
      piVar2 = *(int **)this;
      piVar3 = piVar2 + 5;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)piVar2[3]);
  if (piVar3 != (int *)0x0) {
    local_4 = (RWCriticalSection *)0x0;
    ReleaseSemaphore(*(HANDLE *)*piVar3,lReleaseCount,(LPLONG)&local_4);
  }
  return;
}



/* ---- WriteUnlock @ 100156e0 size=5 ---- */

/* public: void __thiscall XSystem::Threading::RWCriticalSection::WriteUnlock(void) */

void __thiscall XSystem::Threading::RWCriticalSection::WriteUnlock(RWCriticalSection *this)

{
                    /* 0x156e0  330  ?WriteUnlock@RWCriticalSection@Threading@XSystem@@QAEXXZ */
  InternalUnlock(this);
  return;
}



/* ---- WriteLock @ 100156f0 size=79 ---- */

/* public: void __thiscall XSystem::Threading::RWCriticalSection::WriteLock(void) */

void __thiscall XSystem::Threading::RWCriticalSection::WriteLock(RWCriticalSection *this)

{
  int iVar1;
  bool bVar2;
  
                    /* 0x156f0  329  ?WriteLock@RWCriticalSection@Threading@XSystem@@QAEXXZ */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this + 0xc));
  iVar1 = *(int *)this;
  bVar2 = *(int *)(iVar1 + 8) == 0;
  if (bVar2) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  else {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this + 0xc));
  if (!bVar2) {
    WaitForSingleObject((HANDLE)**(undefined4 **)(*(int *)this + 0x14),0xffffffff);
  }
  return;
}



/* ---- ReadUnlock @ 10015740 size=5 ---- */

/* public: void __thiscall XSystem::Threading::RWCriticalSection::ReadUnlock(void) */

void __thiscall XSystem::Threading::RWCriticalSection::ReadUnlock(RWCriticalSection *this)

{
                    /* 0x15740  251  ?ReadUnlock@RWCriticalSection@Threading@XSystem@@QAEXXZ */
  InternalUnlock(this);
  return;
}



/* ---- ReadLock @ 10015750 size=79 ---- */

/* public: void __thiscall XSystem::Threading::RWCriticalSection::ReadLock(void) */

void __thiscall XSystem::Threading::RWCriticalSection::ReadLock(RWCriticalSection *this)

{
  int *piVar1;
  bool bVar2;
  
                    /* 0x15750  250  ?ReadLock@RWCriticalSection@Threading@XSystem@@QAEXXZ */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this + 0xc));
  piVar1 = *(int **)this;
  if ((piVar1[1] == 0) && (-1 < piVar1[2])) {
    bVar2 = false;
    piVar1[2] = piVar1[2] + 1;
  }
  else {
    *piVar1 = *piVar1 + 1;
    bVar2 = true;
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(*(int *)this + 0xc));
  if (bVar2) {
    WaitForSingleObject((HANDLE)**(undefined4 **)(*(int *)this + 0x10),0xffffffff);
  }
  return;
}



/* ---- ~RWCriticalSection @ 100157a0 size=33 ---- */

/* public: __thiscall XSystem::Threading::RWCriticalSection::~RWCriticalSection(void) */

void __thiscall XSystem::Threading::RWCriticalSection::~RWCriticalSection(RWCriticalSection *this)

{
  void *_Memory;
  
                    /* 0x157a0  58  ??1RWCriticalSection@Threading@XSystem@@QAE@XZ */
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    FUN_10001bb0();
    _free(_Memory);
  }
  *(undefined4 *)this = 0;
  return;
}



/* ---- Wait @ 100157d0 size=158 ---- */

/* public: bool __thiscall XSystem::Threading::Barrier::Wait(void) */

bool __thiscall XSystem::Threading::Barrier::Wait(Barrier *this)

{
  Mutex *pMVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
                    /* 0x157d0  315  ?Wait@Barrier@Threading@XSystem@@QAE_NXZ */
  bVar3 = true;
  WaitForSingleObject(*(HANDLE *)**(undefined4 **)this,0xffffffff);
  *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + 1;
  pMVar1 = *(Mutex **)this;
  if (*(uint *)(pMVar1 + 8) < *(uint *)(pMVar1 + 0xc)) {
    bVar3 = CondVar::Wait((CondVar *)(pMVar1 + 4),pMVar1);
  }
  else {
    *(undefined4 *)(pMVar1 + 8) = 0;
    iVar2 = *(int *)(*(int *)this + 4);
    piVar4 = (int *)(*(int *)this + 4);
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 4));
    if (*(int *)(*piVar4 + 8) != 0) {
      SetEvent((HANDLE)**(undefined4 **)(*piVar4 + 0x14));
      *(undefined4 *)(*piVar4 + 0xc) = *(undefined4 *)(*piVar4 + 8);
      *(int *)(*piVar4 + 0x10) = *(int *)(*piVar4 + 0x10) + 1;
    }
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 4));
  }
  ReleaseMutex(*(HANDLE *)**(undefined4 **)this);
  return bVar3;
}



/* ---- ~Barrier @ 10015870 size=34 ---- */

/* public: __thiscall XSystem::Threading::Barrier::~Barrier(void) */

void __thiscall XSystem::Threading::Barrier::~Barrier(Barrier *this)

{
  undefined4 *_Memory;
  
                    /* 0x15870  53  ??1Barrier@Threading@XSystem@@QAE@XZ */
  _Memory = *(undefined4 **)this;
  if (_Memory != (undefined4 *)0x0) {
    FUN_10001d60(_Memory);
    _free(_Memory);
  }
  *(undefined4 *)this = 0;
  return;
}



/* ---- CondVar @ 100158a0 size=111 ---- */

/* public: __thiscall XSystem::Threading::CondVar::CondVar(void) */

CondVar * __thiscall XSystem::Threading::CondVar::CondVar(CondVar *this)

{
  undefined1 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x158a0  3  ??0CondVar@Threading@XSystem@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016370;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined1 *)FUN_100086ab(0x1c);
  local_4 = 0;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = FUN_10001c10(puVar1);
  }
  *(undefined1 **)this = puVar1;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(*(int *)this + 0xc) = 0;
  *(undefined4 *)(*(int *)this + 0x10) = 0;
  **(undefined1 **)this = 1;
  ExceptionList = local_c;
  return this;
}



/* ---- RWCriticalSection @ 10015910 size=112 ---- */

/* public: __thiscall XSystem::Threading::RWCriticalSection::RWCriticalSection(void) */

RWCriticalSection * __thiscall
XSystem::Threading::RWCriticalSection::RWCriticalSection(RWCriticalSection *this)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15910  8  ??0RWCriticalSection@Threading@XSystem@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10016396;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_100086ab(0x18);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)this = 0;
    ExceptionList = local_c;
    return this;
  }
  puVar1 = FUN_10001ad0(puVar1);
  *(undefined4 **)this = puVar1;
  ExceptionList = local_c;
  return this;
}



/* ---- Barrier @ 10015980 size=100 ---- */

/* public: __thiscall XSystem::Threading::Barrier::Barrier(unsigned int) */

Barrier * __thiscall XSystem::Threading::Barrier::Barrier(Barrier *this,uint param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15980  2  ??0Barrier@Threading@XSystem@@QAE@I@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001650a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_100086ab(0x10);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_10001cc0(puVar1,param_1);
  }
  *(undefined4 **)this = puVar1;
  ExceptionList = local_c;
  return this;
}



/* ---- CompareExchange @ 100159f0 size=19 ---- */

/* unsigned int __stdcall XSystem::Threading::Interlocked::CompareExchange(unsigned int volatile
   *,unsigned int,unsigned int) */

uint XSystem::Threading::Interlocked::CompareExchange(uint *param_1,uint param_2,uint param_3)

{
                    /* 0x159f0  150  ?CompareExchange@Interlocked@Threading@XSystem@@YGIPCIII@Z */
  LOCK();
  if (param_3 == *param_1) {
    *param_1 = param_2;
  }
  else {
    param_3 = *param_1;
  }
  UNLOCK();
  return param_3;
}



/* ---- CompareExchange @ 10015a10 size=19 ---- */

/* int __stdcall XSystem::Threading::Interlocked::CompareExchange(int volatile *,int,int) */

int XSystem::Threading::Interlocked::CompareExchange(int *param_1,int param_2,int param_3)

{
                    /* 0x15a10  149  ?CompareExchange@Interlocked@Threading@XSystem@@YGHPCHHH@Z */
  LOCK();
  if (param_3 == *param_1) {
    *param_1 = param_2;
  }
  else {
    param_3 = *param_1;
  }
  UNLOCK();
  return param_3;
}



/* ---- Exchange @ 10015a30 size=13 ---- */

/* unsigned int __stdcall XSystem::Threading::Interlocked::Exchange(unsigned int volatile *,unsigned
   int) */

uint XSystem::Threading::Interlocked::Exchange(uint *param_1,uint param_2)

{
  uint uVar1;
  
                    /* 0x15a30  180  ?Exchange@Interlocked@Threading@XSystem@@YGIPCII@Z */
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}



/* ---- Exchange @ 10015a40 size=13 ---- */

/* int __stdcall XSystem::Threading::Interlocked::Exchange(int volatile *,int) */

int XSystem::Threading::Interlocked::Exchange(int *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x15a40  179  ?Exchange@Interlocked@Threading@XSystem@@YGHPCHH@Z */
  LOCK();
  iVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return iVar1;
}



/* ---- Decrement @ 10015a50 size=17 ---- */

/* unsigned int __stdcall XSystem::Threading::Interlocked::Decrement(unsigned int volatile *) */

uint XSystem::Threading::Interlocked::Decrement(uint *param_1)

{
  uint uVar1;
  
                    /* 0x15a50  165  ?Decrement@Interlocked@Threading@XSystem@@YGIPCI@Z */
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 1;
  UNLOCK();
  return uVar1 - 1;
}



/* ---- Decrement @ 10015a70 size=17 ---- */

/* int __stdcall XSystem::Threading::Interlocked::Decrement(int volatile *) */

int XSystem::Threading::Interlocked::Decrement(int *param_1)

{
  int iVar1;
  
                    /* 0x15a70  164  ?Decrement@Interlocked@Threading@XSystem@@YGHPCH@Z */
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return iVar1 + -1;
}



/* ---- Increment @ 10015a90 size=19 ---- */

/* unsigned int __stdcall XSystem::Threading::Interlocked::Increment(unsigned int volatile *) */

uint XSystem::Threading::Interlocked::Increment(uint *param_1)

{
  uint uVar1;
  
                    /* 0x15a90  210  ?Increment@Interlocked@Threading@XSystem@@YGIPCI@Z */
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  return uVar1 + 1;
}



/* ---- Increment @ 10015ab0 size=19 ---- */

/* int __stdcall XSystem::Threading::Interlocked::Increment(int volatile *) */

int XSystem::Threading::Interlocked::Increment(int *param_1)

{
  int iVar1;
  
                    /* 0x15ab0  209  ?Increment@Interlocked@Threading@XSystem@@YGHPCH@Z */
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* ---- GetXMemory @ 10015ad0 size=3 ---- */

/* public: struct XSystem::MemoryPool::_XMemory * __thiscall
   XSystem::MemoryPool::XMemoryPtr::GetXMemory(void)const  */

_XMemory * __thiscall XSystem::MemoryPool::XMemoryPtr::GetXMemory(XMemoryPtr *this)

{
                    /* 0x15ad0  208  ?GetXMemory@XMemoryPtr@MemoryPool@XSystem@@QBEPAU_XMemory@23@XZ
                        */
  return *(_XMemory **)this;
}



/* ---- GetRawPtr @ 10015ae0 size=3 ---- */

/* public: void * __thiscall XSystem::MemoryPool::XMemoryPtr::GetRawPtr(void)const  */

void * __thiscall XSystem::MemoryPool::XMemoryPtr::GetRawPtr(XMemoryPtr *this)

{
                    /* 0x15ae0  197  ?GetRawPtr@XMemoryPtr@MemoryPool@XSystem@@QBEPAXXZ */
  return *(void **)this;
}



/* ---- Detach @ 10015af0 size=9 ---- */

/* public: struct XSystem::MemoryPool::_XMemory * __thiscall
   XSystem::MemoryPool::XMemoryPtr::Detach(void) */

_XMemory * __thiscall XSystem::MemoryPool::XMemoryPtr::Detach(XMemoryPtr *this)

{
  _XMemory *p_Var1;
  
                    /* 0x15af0  174  ?Detach@XMemoryPtr@MemoryPool@XSystem@@QAEPAU_XMemory@23@XZ */
  p_Var1 = *(_XMemory **)this;
  *(undefined4 *)this = 0;
  return p_Var1;
}



/* ---- XMemoryPtr @ 10015b00 size=11 ---- */

/* public: __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(struct
   XSystem::MemoryPool::_XMemory * const) */

void __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this,_XMemory *param_1)

{
                    /* 0x15b00  27  ??0XMemoryPtr@MemoryPool@XSystem@@QAE@QAU_XMemory@12@@Z */
  *(_XMemory **)this = param_1;
  return;
}



/* ---- XMemoryPtr @ 10015b10 size=9 ---- */

/* public: __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(void) */

void __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this)

{
                    /* 0x15b10  28  ??0XMemoryPtr@MemoryPool@XSystem@@QAE@XZ */
  *(undefined4 *)this = 0;
  return;
}



/* ---- Copy @ 10015b20 size=44 ---- */

/* struct XSystem::MemoryPool::_XMemory * __stdcall XSystem::MemoryPool::Copy(struct
   XSystem::MemoryPool::_XMemory * const) */

_XMemory * XSystem::MemoryPool::Copy(_XMemory *param_1)

{
  _XMemory *p_Var1;
  
                    /* 0x15b20  151  ?Copy@MemoryPool@XSystem@@YGPAU_XMemory@12@QAU312@@Z */
  if (DAT_10023e70 == 0) {
    FUN_10001550();
  }
  if (param_1 == (_XMemory *)0x0) {
    return param_1;
  }
  p_Var1 = param_1 + -8;
  if (p_Var1 != (_XMemory *)0x0) {
    LOCK();
    *(int *)p_Var1 = *(int *)p_Var1 + 1;
    UNLOCK();
  }
  return param_1;
}



/* ---- GetSize @ 10015b50 size=31 ---- */

/* unsigned int __stdcall XSystem::MemoryPool::GetSize(struct XSystem::MemoryPool::_XMemory * const)
    */

uint XSystem::MemoryPool::GetSize(_XMemory *param_1)

{
                    /* 0x15b50  201  ?GetSize@MemoryPool@XSystem@@YGIQAU_XMemory@12@@Z */
  if (DAT_10023e70 == 0) {
    FUN_10001550();
  }
  if (param_1 == (_XMemory *)0x0) {
    return 0;
  }
  return *(uint *)(param_1 + -4);
}



/* ---- Free @ 10015b70 size=133 ---- */

/* void __stdcall XSystem::MemoryPool::Free(struct XSystem::MemoryPool::_XMemory *) */

void XSystem::MemoryPool::Free(_XMemory *param_1)

{
  _XMemory *p_Var1;
  int iVar2;
  int *piVar3;
  
                    /* 0x15b70  182  ?Free@MemoryPool@XSystem@@YGXPAU_XMemory@12@@Z */
  if (DAT_10023e70 == (int *)0x0) {
    FUN_10001550();
  }
  piVar3 = DAT_10023e70;
  if ((param_1 != (_XMemory *)0x0) && (p_Var1 = param_1 + -8, p_Var1 != (_XMemory *)0x0)) {
    LOCK();
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      *(int *)p_Var1 = 0;
      *(undefined4 *)(param_1 + -4) = 0;
      if (*piVar3 == 0) {
        if (DAT_10023e78 == 0) {
          FUN_100031c0();
        }
        if (*(void **)(param_1 + -0x14) != (void *)0x0) {
          FUN_10002d10(*(void **)(param_1 + -0x14),(undefined4 *)(param_1 + -0x14));
          return;
        }
      }
      else if (*(void **)(param_1 + -0x14) != (void *)0x0) {
        FUN_10002d10(*(void **)(param_1 + -0x14),(undefined4 *)(param_1 + -0x14));
        return;
      }
      _free(param_1 + -0x14);
    }
  }
  return;
}



/* ---- Alloc @ 10015c00 size=83 ---- */

/* struct XSystem::MemoryPool::_XMemory * __stdcall XSystem::MemoryPool::Alloc(unsigned int) */

_XMemory * XSystem::MemoryPool::Alloc(uint param_1)

{
  undefined4 *puVar1;
  
                    /* 0x15c00  135  ?Alloc@MemoryPool@XSystem@@YGPAU_XMemory@12@I@Z */
  if (DAT_10023e70 == (int *)0x0) {
    FUN_10001550();
  }
  if ((*DAT_10023e70 == 0) && (DAT_10023e78 == 0)) {
    FUN_100031c0();
  }
  puVar1 = FUN_100030e0();
  if (puVar1 == (undefined4 *)0x0) {
    return (_XMemory *)0x0;
  }
  puVar1[1] = param_1;
  *puVar1 = 1;
  return (_XMemory *)(puVar1 + 2);
}



/* ---- operator= @ 10015c60 size=76 ---- */

/* public: class XSystem::MemoryPool::XMemoryPtr & __thiscall
   XSystem::MemoryPool::XMemoryPtr::operator=(class XSystem::MemoryPool::XMemoryPtr const &) */

XMemoryPtr * __thiscall
XSystem::MemoryPool::XMemoryPtr::operator=(XMemoryPtr *this,XMemoryPtr *param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x15c60  87  ??4XMemoryPtr@MemoryPool@XSystem@@QAEAAV012@ABV012@@Z */
  if (*(_XMemory **)this != (_XMemory *)0x0) {
    Free(*(_XMemory **)this);
  }
  iVar2 = *(int *)param_1;
  if (DAT_10023e70 == 0) {
    FUN_10001550();
  }
  if (iVar2 == 0) {
    *(undefined4 *)this = 0;
    return this;
  }
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(int *)this = iVar2;
  return this;
}



/* ---- GetSize @ 10015cb0 size=34 ---- */

/* public: unsigned int __thiscall XSystem::MemoryPool::XMemoryPtr::GetSize(void)const  */

uint __thiscall XSystem::MemoryPool::XMemoryPtr::GetSize(XMemoryPtr *this)

{
  int iVar1;
  
                    /* 0x15cb0  203  ?GetSize@XMemoryPtr@MemoryPool@XSystem@@QBEIXZ */
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (DAT_10023e70 == 0) {
      FUN_10001550();
    }
    if (iVar1 != 0) {
      return *(uint *)(iVar1 + -4);
    }
  }
  return 0;
}



/* ---- Clear @ 10015ce0 size=23 ---- */

/* public: void __thiscall XSystem::MemoryPool::XMemoryPtr::Clear(void) */

void __thiscall XSystem::MemoryPool::XMemoryPtr::Clear(XMemoryPtr *this)

{
                    /* 0x15ce0  144  ?Clear@XMemoryPtr@MemoryPool@XSystem@@QAEXXZ */
  if (*(_XMemory **)this != (_XMemory *)0x0) {
    Free(*(_XMemory **)this);
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- Attach @ 10015d00 size=45 ---- */

/* public: bool __thiscall XSystem::MemoryPool::XMemoryPtr::Attach(struct
   XSystem::MemoryPool::_XMemory * const) */

bool __thiscall XSystem::MemoryPool::XMemoryPtr::Attach(XMemoryPtr *this,_XMemory *param_1)

{
                    /* 0x15d00  139  ?Attach@XMemoryPtr@MemoryPool@XSystem@@QAE_NQAU_XMemory@23@@Z
                        */
  if (*(_XMemory **)this == (_XMemory *)0x0) {
    *(_XMemory **)this = param_1;
    return true;
  }
  Free(*(_XMemory **)this);
  *(undefined4 *)this = 0;
  *(_XMemory **)this = param_1;
  return true;
}



/* ---- ~XMemoryPtr @ 10015d30 size=23 ---- */

/* public: __thiscall XSystem::MemoryPool::XMemoryPtr::~XMemoryPtr(void) */

void __thiscall XSystem::MemoryPool::XMemoryPtr::~XMemoryPtr(XMemoryPtr *this)

{
                    /* 0x15d30  66  ??1XMemoryPtr@MemoryPool@XSystem@@QAE@XZ */
  if (*(_XMemory **)this != (_XMemory *)0x0) {
    Free(*(_XMemory **)this);
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- XMemoryPtr @ 10015d50 size=70 ---- */

/* public: __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(class
   XSystem::MemoryPool::XMemoryPtr const &) */

XMemoryPtr * __thiscall
XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this,XMemoryPtr *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
                    /* 0x15d50  25  ??0XMemoryPtr@MemoryPool@XSystem@@QAE@ABV012@@Z */
  bVar3 = DAT_10023e70 == 0;
  *(undefined4 *)this = 0;
  iVar2 = *(int *)param_1;
  if (bVar3) {
    FUN_10001550();
  }
  if (iVar2 == 0) {
    *(undefined4 *)this = 0;
    return this;
  }
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(int *)this = iVar2;
  return this;
}



/* ---- XMemoryPtr @ 10015da0 size=102 ---- */

/* public: __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(unsigned int) */

XMemoryPtr * __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this,uint param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
                    /* 0x15da0  26  ??0XMemoryPtr@MemoryPool@XSystem@@QAE@I@Z */
  bVar2 = DAT_10023e70 == (int *)0x0;
  *(undefined4 *)this = 0;
  if (bVar2) {
    FUN_10001550();
  }
  if ((*DAT_10023e70 == 0) && (DAT_10023e78 == 0)) {
    FUN_100031c0();
  }
  puVar1 = FUN_100030e0();
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)this = 0;
    return this;
  }
  puVar1[1] = param_1;
  *puVar1 = 1;
  *(undefined4 **)this = puVar1 + 2;
  return this;
}



/* ---- Clone @ 10015e10 size=34 ---- */

/* struct XSystem::MemoryPool::_XMemory * __stdcall XSystem::MemoryPool::Clone(struct
   XSystem::MemoryPool::_XMemory * const) */

_XMemory * XSystem::MemoryPool::Clone(_XMemory *param_1)

{
  _XMemory *p_Var1;
  
                    /* 0x15e10  145  ?Clone@MemoryPool@XSystem@@YGPAU_XMemory@12@QAU312@@Z */
  if (DAT_10023e70 == (int *)0x0) {
    FUN_10001550();
  }
  p_Var1 = (_XMemory *)FUN_100013e0(DAT_10023e70);
  return p_Var1;
}



/* ---- Realloc @ 10015e40 size=39 ---- */

/* struct XSystem::MemoryPool::_XMemory * __stdcall XSystem::MemoryPool::Realloc(struct
   XSystem::MemoryPool::_XMemory *,unsigned int) */

_XMemory * XSystem::MemoryPool::Realloc(_XMemory *param_1,uint param_2)

{
  _XMemory *p_Var1;
  void *in_ECX;
  void *extraout_ECX;
  
                    /* 0x15e40  253  ?Realloc@MemoryPool@XSystem@@YGPAU_XMemory@12@PAU312@I@Z */
  if (DAT_10023e70 == 0) {
    FUN_10001550();
    in_ECX = extraout_ECX;
  }
  p_Var1 = (_XMemory *)FUN_10001320(in_ECX,param_1);
  return p_Var1;
}



/* ---- Clone @ 10015e70 size=50 ---- */

/* public: class XSystem::MemoryPool::XMemoryPtr __thiscall
   XSystem::MemoryPool::XMemoryPtr::Clone(void) */

undefined4 * __thiscall XSystem::MemoryPool::XMemoryPtr::Clone(XMemoryPtr *this)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x15e70  147  ?Clone@XMemoryPtr@MemoryPool@XSystem@@QAE?AV123@XZ */
  if (DAT_10023e70 == (int *)0x0) {
    FUN_10001550();
  }
  puVar1 = FUN_100013e0(DAT_10023e70);
  *in_stack_00000004 = puVar1;
  return in_stack_00000004;
}



/* ---- Realloc @ 10015eb0 size=54 ---- */

/* public: bool __thiscall XSystem::MemoryPool::XMemoryPtr::Realloc(unsigned int) */

bool __thiscall XSystem::MemoryPool::XMemoryPtr::Realloc(XMemoryPtr *this,uint param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  XMemoryPtr *extraout_ECX;
  XMemoryPtr *this_00;
  
                    /* 0x15eb0  255  ?Realloc@XMemoryPtr@MemoryPool@XSystem@@QAE_NI@Z */
  pvVar1 = *(void **)this;
  this_00 = this;
  if (DAT_10023e70 == 0) {
    FUN_10001550();
    this_00 = extraout_ECX;
  }
  puVar2 = FUN_10001320(this_00,pvVar1);
  *(undefined4 **)this = puVar2;
  return puVar2 != (undefined4 *)0x0;
}



/* ---- FUN_10015f10 @ 10015f10 size=87 ---- */

undefined4 FUN_10015f10(HMODULE param_1,int param_2)

{
  HMODULE pHVar1;
  
  if (param_2 == 0) {
    FreeLibrary(DAT_10023e04);
    DAT_10023e04 = (HMODULE)0x0;
  }
  else if (param_2 == 1) {
    pHVar1 = LoadLibraryA("Kernel32.dll");
    if (pHVar1 == (HMODULE)0x0) {
      return 0;
    }
    DAT_10023e04 = pHVar1;
    DisableThreadLibraryCalls(param_1);
    return 1;
  }
  return 1;
}



/* ---- QueueWorkItem @ 10015f70 size=43 ---- */

/* bool __stdcall XSystem::ThreadPool::QueueWorkItem(struct XSystem::ThreadPool::_THandle *,unsigned
   int (__stdcall*)(void *),void *) */

bool XSystem::ThreadPool::QueueWorkItem
               (_THandle *param_1,_func_uint_void_ptr *param_2,void *param_3)

{
  undefined1 uVar1;
  
                    /* 0x15f70  248
                       ?QueueWorkItem@ThreadPool@XSystem@@YG_NPAU_THandle@12@P6GIPAX@Z1@Z */
  if ((param_1 == (_THandle *)0x0) || (param_2 == (_func_uint_void_ptr *)0x0)) {
    return false;
  }
  uVar1 = (**(code **)(**(int **)param_1 + 0xc))(0xfffffffe,param_2,param_3);
  return (bool)uVar1;
}



/* ---- BindCompletionCallback @ 10015fa0 size=50 ---- */

/* bool __stdcall XSystem::ThreadPool::BindCompletionCallback(struct XSystem::ThreadPool::_THandle
   *,void *,void (__stdcall*)(unsigned int,unsigned int,void *)) */

bool XSystem::ThreadPool::BindCompletionCallback
               (_THandle *param_1,void *param_2,_func_void_uint_uint_void_ptr *param_3)

{
  undefined1 uVar1;
  
                    /* 0x15fa0  142
                       ?BindCompletionCallback@ThreadPool@XSystem@@YG_NPAU_THandle@12@PAXP6GXII1@Z@Z
                        */
  if ((((param_1 == (_THandle *)0x0) || (param_2 == (void *)0x0)) || (param_2 == (void *)0xffffffff)
      ) || (param_3 == (_func_void_uint_uint_void_ptr *)0x0)) {
    return false;
  }
  uVar1 = (**(code **)(**(int **)param_1 + 4))(param_2,param_3);
  return (bool)uVar1;
}



/* ---- GetPoolSize @ 10015fe0 size=37 ---- */

/* unsigned int __stdcall XSystem::ThreadPool::GetPoolSize(struct XSystem::ThreadPool::_THandle *)
    */

uint XSystem::ThreadPool::GetPoolSize(_THandle *param_1)

{
                    /* 0x15fe0  194  ?GetPoolSize@ThreadPool@XSystem@@YGIPAU_THandle@12@@Z */
  if (param_1 == (_THandle *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
}



/* ---- DestroyHandle @ 10016010 size=30 ---- */

/* void __stdcall XSystem::ThreadPool::DestroyHandle(struct XSystem::ThreadPool::_THandle *) */

void XSystem::ThreadPool::DestroyHandle(_THandle *param_1)

{
                    /* 0x16010  169  ?DestroyHandle@ThreadPool@XSystem@@YGXPAU_THandle@12@@Z */
  if (param_1 != (_THandle *)0x0) {
    FUN_10001f80((int *)param_1);
    _free(param_1);
  }
  return;
}



/* ---- QueueWorkItem @ 10016030 size=102 ---- */

/* bool __stdcall XSystem::ThreadPool::QueueWorkItem(struct XSystem::ThreadPool::_THandle *,void
   (__stdcall*)(unsigned int,unsigned int,void *),unsigned int,unsigned int,void *) */

bool XSystem::ThreadPool::QueueWorkItem
               (_THandle *param_1,_func_void_uint_uint_void_ptr *param_2,uint param_3,uint param_4,
               void *param_5)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
                    /* 0x16030  249
                       ?QueueWorkItem@ThreadPool@XSystem@@YG_NPAU_THandle@12@P6GXIIPAX@ZII1@Z */
  if (param_1 == (_THandle *)0x0) {
    return false;
  }
  if (param_2 == (_func_void_uint_uint_void_ptr *)0x0) {
    return false;
  }
  puVar2 = (undefined4 *)FUN_10001e50();
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = (**(code **)(**(int **)param_1 + 0xc))(0xfffffffd,0,0);
    return (bool)uVar1;
  }
  puVar2[1] = param_3;
  *puVar2 = param_2;
  puVar2[2] = param_4;
  puVar2[3] = param_5;
  uVar1 = (**(code **)(**(int **)param_1 + 0xc))(0xfffffffd,puVar2,0);
  return (bool)uVar1;
}



/* ---- CreateHandle @ 100160a0 size=109 ---- */

/* struct XSystem::ThreadPool::_THandle * __stdcall XSystem::ThreadPool::CreateHandle(unsigned int)
    */

_THandle * XSystem::ThreadPool::CreateHandle(uint param_1)

{
  undefined4 *puVar1;
  _THandle *p_Var2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x160a0  161  ?CreateHandle@ThreadPool@XSystem@@YGPAU_THandle@12@I@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100166ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_100086ab(0x14);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (_THandle *)0x0;
  }
  p_Var2 = (_THandle *)FUN_10001ec0((void *)param_1,puVar1);
  ExceptionList = local_c;
  return p_Var2;
}



/* ---- Unwind@10016110 @ 10016110 size=8 ---- */

void Unwind_10016110(void)

{
  int unaff_EBP;
  
  FUN_10001440(unaff_EBP + -0x28);
  return;
}



/* ---- Unwind@10016150 @ 10016150 size=8 ---- */

void Unwind_10016150(void)

{
  FUN_10012bd0();
  return;
}



/* ---- Unwind@10016173 @ 10016173 size=8 ---- */

void Unwind_10016173(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@100161a3 @ 100161a3 size=8 ---- */

void Unwind_100161a3(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@100161d3 @ 100161d3 size=8 ---- */

void Unwind_100161d3(void)

{
  FUN_100149b0();
  return;
}



/* ---- Unwind@100161f6 @ 100161f6 size=8 ---- */

void Unwind_100161f6(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016226 @ 10016226 size=8 ---- */

void Unwind_10016226(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016256 @ 10016256 size=11 ---- */

void Unwind_10016256(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016261 @ 10016261 size=11 ---- */

void Unwind_10016261(void)

{
  int unaff_EBP;
  
  XCriticalSection::~XCriticalSection((XCriticalSection *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@10016287 @ 10016287 size=8 ---- */

void Unwind_10016287(void)

{
  FUN_10001740();
  return;
}



/* ---- Unwind@1001628f @ 1001628f size=8 ---- */

void Unwind_1001628f(void)

{
  FUN_10001740();
  return;
}



/* ---- Unwind@100162b2 @ 100162b2 size=8 ---- */

void Unwind_100162b2(void)

{
  FUN_10001740();
  return;
}



/* ---- Unwind@100162ba @ 100162ba size=8 ---- */

void Unwind_100162ba(void)

{
  int unaff_EBP;
  
  XSystem::Threading::ManualResetEvent::~ManualResetEvent((ManualResetEvent *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100162dd @ 100162dd size=11 ---- */

void Unwind_100162dd(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@100162e8 @ 100162e8 size=11 ---- */

void Unwind_100162e8(void)

{
  int unaff_EBP;
  
  FUN_10004f90((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@1001630e @ 1001630e size=11 ---- */

void Unwind_1001630e(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016334 @ 10016334 size=11 ---- */

void Unwind_10016334(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001633f @ 1001633f size=11 ---- */

void Unwind_1001633f(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016365 @ 10016365 size=11 ---- */

void Unwind_10016365(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001638b @ 1001638b size=11 ---- */

void Unwind_1001638b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100163b1 @ 100163b1 size=8 ---- */

void Unwind_100163b1(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@100163e1 @ 100163e1 size=11 ---- */

void Unwind_100163e1(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016407 @ 10016407 size=8 ---- */

void Unwind_10016407(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016437 @ 10016437 size=8 ---- */

void Unwind_10016437(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016467 @ 10016467 size=11 ---- */

void Unwind_10016467(void)

{
  FUN_10005e90();
  return;
}



/* ---- Unwind@1001648d @ 1001648d size=11 ---- */

void Unwind_1001648d(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@100164b3 @ 100164b3 size=11 ---- */

void Unwind_100164b3(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@100164d9 @ 100164d9 size=11 ---- */

void Unwind_100164d9(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100164ff @ 100164ff size=11 ---- */

void Unwind_100164ff(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016525 @ 10016525 size=11 ---- */

void Unwind_10016525(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001654b @ 1001654b size=11 ---- */

void Unwind_1001654b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016571 @ 10016571 size=8 ---- */

void Unwind_10016571(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@100165a1 @ 100165a1 size=8 ---- */

void Unwind_100165a1(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@100165d1 @ 100165d1 size=8 ---- */

void Unwind_100165d1(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016601 @ 10016601 size=8 ---- */

void Unwind_10016601(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016631 @ 10016631 size=8 ---- */

void Unwind_10016631(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016639 @ 10016639 size=11 ---- */

void Unwind_10016639(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@10016644 @ 10016644 size=11 ---- */

void Unwind_10016644(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016677 @ 10016677 size=11 ---- */

void Unwind_10016677(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016682 @ 10016682 size=11 ---- */

void Unwind_10016682(void)

{
  int unaff_EBP;
  
  XCriticalSection::~XCriticalSection((XCriticalSection *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@100166a8 @ 100166a8 size=11 ---- */

void Unwind_100166a8(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100166ce @ 100166ce size=11 ---- */

void Unwind_100166ce(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@100166f4 @ 100166f4 size=11 ---- */

void Unwind_100166f4(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001671a @ 1001671a size=11 ---- */

void Unwind_1001671a(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10016740 @ 10016740 size=11 ---- */

void Unwind_10016740(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10016770 @ 10016770 size=8 ---- */

void Unwind_10016770(void)

{
  int unaff_EBP;
  
  XSystem::ThreadPoolImpl::IIOCompletionPort::~IIOCompletionPort
            (*(IIOCompletionPort **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@100167a0 @ 100167a0 size=11 ---- */

void Unwind_100167a0(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@100167d0 @ 100167d0 size=8 ---- */

void Unwind_100167d0(void)

{
  int unaff_EBP;
  
  IXTimer::~IXTimer(*(IXTimer **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100167d8 @ 100167d8 size=11 ---- */

void Unwind_100167d8(void)

{
  int unaff_EBP;
  
  XCriticalSection::~XCriticalSection((XCriticalSection *)(*(int *)(unaff_EBP + -0x14) + 0x14));
  return;
}



/* ---- Unwind@10016800 @ 10016800 size=8 ---- */

void Unwind_10016800(void)

{
  int unaff_EBP;
  
  XSystem::ThreadPoolImpl::IIOCompletionPort::~IIOCompletionPort
            (*(IIOCompletionPort **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10016808 @ 10016808 size=11 ---- */

void Unwind_10016808(void)

{
  int unaff_EBP;
  
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + 4) + 4));
  return;
}



/* ---- Unwind@10016830 @ 10016830 size=11 ---- */

void Unwind_10016830(void)

{
  int unaff_EBP;
  
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + 4) + 4));
  return;
}



/* ---- Unwind@10016860 @ 10016860 size=11 ---- */

void Unwind_10016860(void)

{
  int unaff_EBP;
  
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + 4) + 0xc));
  return;
}



/* ---- Unwind@1001686b @ 1001686b size=11 ---- */

void Unwind_1001686b(void)

{
  int unaff_EBP;
  
  XSystem::Threading::Semaphore::~Semaphore((Semaphore *)(*(int *)(unaff_EBP + 4) + 0x10));
  return;
}



/* ---- Unwind@100168c0 @ 100168c0 size=8 ---- */

void Unwind_100168c0(void)

{
  int unaff_EBP;
  
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100168f0 @ 100168f0 size=8 ---- */

void Unwind_100168f0(void)

{
  XObjectHolder<XEventA>::XObjectHolder<XEventA>_Constructor_or_Destructor();
  return;
}



/* ---- Unwind@10016920 @ 10016920 size=8 ---- */

void Unwind_10016920(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10016950 @ 10016950 size=11 ---- */

void Unwind_10016950(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@1001695b @ 1001695b size=11 ---- */

void Unwind_1001695b(void)

{
  int unaff_EBP;
  
  XCriticalSection::~XCriticalSection((XCriticalSection *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}



/* ---- Unwind@10016990 @ 10016990 size=8 ---- */

void Unwind_10016990(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@100169c0 @ 100169c0 size=11 ---- */

void Unwind_100169c0(void)

{
  FUN_100079b0();
  return;
}



/* ---- Unwind@100169cb @ 100169cb size=11 ---- */

void Unwind_100169cb(void)

{
  int unaff_EBP;
  
  XCriticalSection::~XCriticalSection((XCriticalSection *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@10016a00 @ 10016a00 size=8 ---- */

void Unwind_10016a00(void)

{
  int unaff_EBP;
  
  FUN_10003be0((undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10016a30 @ 10016a30 size=11 ---- */

void Unwind_10016a30(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016a3b @ 10016a3b size=11 ---- */

void Unwind_10016a3b(void)

{
  int unaff_EBP;
  
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + 4) + 0x18));
  return;
}



/* ---- Unwind@10016a70 @ 10016a70 size=8 ---- */

void Unwind_10016a70(void)

{
  int unaff_EBP;
  
  XSystem::Threading::Mutex::~Mutex(*(Mutex **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10016aa0 @ 10016aa0 size=8 ---- */

void Unwind_10016aa0(void)

{
  int unaff_EBP;
  
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016ad0 @ 10016ad0 size=8 ---- */

void Unwind_10016ad0(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016ad8 @ 10016ad8 size=11 ---- */

void Unwind_10016ad8(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@10016b10 @ 10016b10 size=8 ---- */

void Unwind_10016b10(void)

{
  int unaff_EBP;
  
  IXTimer::~IXTimer(*(IXTimer **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10016b40 @ 10016b40 size=8 ---- */

void Unwind_10016b40(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016b48 @ 10016b48 size=8 ---- */

void Unwind_10016b48(void)

{
  XObjectHolder<XEventA>::XObjectHolder<XEventA>_Constructor_or_Destructor();
  return;
}



/* ---- Unwind@10016b80 @ 10016b80 size=11 ---- */

void Unwind_10016b80(void)

{
  FUN_100079b0();
  return;
}



/* ---- Unwind@10016bb0 @ 10016bb0 size=8 ---- */

void Unwind_10016bb0(void)

{
  int unaff_EBP;
  
  FUN_10001440(unaff_EBP + -0x54);
  return;
}



/* ---- Unwind@10016c00 @ 10016c00 size=8 ---- */

void Unwind_10016c00(void)

{
  int unaff_EBP;
  
  FUN_10001440(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@10016c30 @ 10016c30 size=8 ---- */

void Unwind_10016c30(void)

{
  int unaff_EBP;
  
  XEventA::~XEventA(*(XEventA **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10016c38 @ 10016c38 size=11 ---- */

void Unwind_10016c38(void)

{
  int unaff_EBP;
  
  XMutexA::~XMutexA((XMutexA *)(*(int *)(unaff_EBP + 4) + 0xc));
  return;
}



/* ---- Unwind@10016c60 @ 10016c60 size=8 ---- */

void Unwind_10016c60(void)

{
  int unaff_EBP;
  
  XSystem::TimerImpl::ITimer::~ITimer(*(ITimer **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016c68 @ 10016c68 size=11 ---- */

void Unwind_10016c68(void)

{
  FUN_10003c00();
  return;
}



/* ---- Unwind@10016c90 @ 10016c90 size=8 ---- */

void Unwind_10016c90(void)

{
  int unaff_EBP;
  
  FUN_10003be0((undefined4 *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10016cc0 @ 10016cc0 size=8 ---- */

void Unwind_10016cc0(void)

{
  int unaff_EBP;
  
  FUN_10001440(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@10016cf0 @ 10016cf0 size=8 ---- */

void Unwind_10016cf0(void)

{
  FUN_10001740();
  return;
}



/* ---- Unwind@10016d20 @ 10016d20 size=8 ---- */

void Unwind_10016d20(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016d50 @ 10016d50 size=8 ---- */

void Unwind_10016d50(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10016d80 @ 10016d80 size=11 ---- */

void Unwind_10016d80(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016dd0 @ 10016dd0 size=11 ---- */

void Unwind_10016dd0(void)

{
  thunk_FUN_10006a90();
  return;
}



/* ---- Unwind@10016e00 @ 10016e00 size=8 ---- */

void Unwind_10016e00(void)

{
  FUN_10005ab0();
  return;
}



/* ---- Unwind@10016e30 @ 10016e30 size=8 ---- */

void Unwind_10016e30(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10016e60 @ 10016e60 size=11 ---- */

void Unwind_10016e60(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016e90 @ 10016e90 size=11 ---- */

void Unwind_10016e90(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016e9b @ 10016e9b size=11 ---- */

void Unwind_10016e9b(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016ed0 @ 10016ed0 size=8 ---- */

void Unwind_10016ed0(void)

{
  int unaff_EBP;
  
  XLock::~XLock((XLock *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10016ed8 @ 10016ed8 size=11 ---- */

void Unwind_10016ed8(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10016f10 @ 10016f10 size=8 ---- */

void Unwind_10016f10(void)

{
  FUN_10001740();
  return;
}



/* ---- Unwind@10016f18 @ 10016f18 size=11 ---- */

void Unwind_10016f18(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@10016f60 @ 10016f60 size=11 ---- */

void Unwind_10016f60(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016f90 @ 10016f90 size=8 ---- */

void Unwind_10016f90(void)

{
  int unaff_EBP;
  
  XSystem::Threading::Thread::~Thread(*(Thread **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10016f98 @ 10016f98 size=11 ---- */

void Unwind_10016f98(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@10016fa3 @ 10016fa3 size=11 ---- */

void Unwind_10016fa3(void)

{
  FUN_10003c00();
  return;
}



/* ---- Unwind@10016fae @ 10016fae size=11 ---- */

void Unwind_10016fae(void)

{
  FUN_10002250();
  return;
}



/* ---- Unwind@10016fb9 @ 10016fb9 size=11 ---- */

void Unwind_10016fb9(void)

{
  int unaff_EBP;
  
  XSystem::Threading::RWCriticalSection::~RWCriticalSection
            ((RWCriticalSection *)(*(int *)(unaff_EBP + 4) + 0x20));
  return;
}



/* ---- Unwind@10016fe0 @ 10016fe0 size=11 ---- */

void Unwind_10016fe0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10017010 @ 10017010 size=8 ---- */

void Unwind_10017010(void)

{
  int unaff_EBP;
  
  XSystem::TimerImpl::ITimer::~ITimer(*(ITimer **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10017018 @ 10017018 size=11 ---- */

void Unwind_10017018(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10017023 @ 10017023 size=11 ---- */

void Unwind_10017023(void)

{
  FUN_10003c00();
  return;
}



/* ---- FUN_10017050 @ 10017050 size=27 ---- */

void FUN_10017050(void)

{
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)&DAT_10023ea0,4000);
  _atexit((_func_4879 *)&LAB_10017190);
  return;
}



/* ---- FUN_10017070 @ 10017070 size=27 ---- */

void FUN_10017070(void)

{
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)&DAT_10023ea4,4000);
  _atexit((_func_4879 *)&LAB_100171c0);
  return;
}



/* ---- FUN_10017090 @ 10017090 size=27 ---- */

void FUN_10017090(void)

{
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)&DAT_10023eac,4000);
  _atexit((_func_4879 *)&LAB_10017220);
  return;
}



/* ---- FUN_100170b0 @ 100170b0 size=27 ---- */

void FUN_100170b0(void)

{
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)&DAT_10023ea8,4000);
  _atexit((_func_4879 *)&LAB_100171f0);
  return;
}



/* ---- FUN_100170d0 @ 100170d0 size=17 ---- */

void __fastcall FUN_100170d0(XMemoryPool *param_1)

{
  XMemoryPool::XMemoryPool(param_1);
  _atexit((_func_4879 *)&LAB_10017250);
  return;
}



/* ---- FUN_100170f0 @ 100170f0 size=27 ---- */

void FUN_100170f0(void)

{
  XCriticalSection::XCriticalSection((XCriticalSection *)&DAT_10023eb0,4000);
  _atexit(XCriticalSection::~XCriticalSection);
  return;
}



/* ---- FUN_10017110 @ 10017110 size=17 ---- */

void __fastcall FUN_10017110(XReusableObjectPool<XEventA,XEventObjHolder> *param_1)

{
  XReusableObjectPool<XEventA,XEventObjHolder>::XReusableObjectPool<XEventA,XEventObjHolder>
            (param_1);
  _atexit(FUN_100172b0);
  return;
}



/* ---- FUN_10017130 @ 10017130 size=17 ---- */

void __fastcall FUN_10017130(XObjectPool<XSignals::ReqItem> *param_1)

{
  XObjectPool<XSignals::ReqItem>::XObjectPool<XSignals::ReqItem>(param_1);
  _atexit(FUN_100172c0);
  return;
}



/* ---- FUN_10017150 @ 10017150 size=27 ---- */

void FUN_10017150(void)

{
  XCriticalSection::XCriticalSection((XCriticalSection *)&DAT_10023eb8,4000);
  _atexit(XCriticalSection::~XCriticalSection);
  return;
}



/* ---- FUN_1001716b @ 1001716b size=22 ---- */

void FUN_1001716b(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_10023e00);
  _atexit((_func_4879 *)&LAB_10017325);
  return;
}



/* ---- ~XCriticalSection @ 10017260 size=65 ---- */

void XCriticalSection::~XCriticalSection(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_10023eb4;
  DAT_10023eb0 = &_vftable_;
  if (DAT_10023eb4 != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*DAT_10023eb4);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    DAT_10023eb4 = (undefined4 *)0x0;
  }
  return;
}



/* ---- FUN_100172b0 @ 100172b0 size=10 ---- */

void FUN_100172b0(void)

{
  FUN_100072a0((undefined4 *)&DAT_10023e4c);
  return;
}



/* ---- FUN_100172c0 @ 100172c0 size=10 ---- */

void FUN_100172c0(void)

{
  FUN_100075e0((undefined4 *)&DAT_10023e2c);
  return;
}



/* ---- ~XCriticalSection @ 100172d0 size=65 ---- */

void XCriticalSection::~XCriticalSection(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_10023ebc;
  DAT_10023eb8 = &_vftable_;
  if (DAT_10023ebc != (undefined4 *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)*DAT_10023ebc);
    _free((void *)*_Memory);
    *_Memory = 0;
    _free(_Memory);
    DAT_10023ebc = (undefined4 *)0x0;
  }
  return;
}



/* ---- ~bad_alloc @ 10017311 size=20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall std::bad_alloc::~bad_alloc(void)

{
  _DAT_100232e0 = &vftable;
  exception::~exception((exception *)&DAT_100232e0);
  return;
}


// total=951 ok=951 failed=0
