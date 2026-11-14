// Module: GAS.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_10001010 @ 10001010 size=36 ---- */

exception * __thiscall FUN_10001010(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10001040 @ 10001040 size=38 ---- */

void FUN_10001040(void)

{
  int in_EAX;
  void *unaff_ESI;
  
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)((int)unaff_ESI + 4) = 0;
  FUN_10001670(unaff_ESI,(void *)(in_EAX + 4),0,0xffffffff);
  return;
}



/* ---- FUN_10001070 @ 10001070 size=118 ---- */

void FUN_10001070(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d47b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_10026434 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1000e6c1(0x38);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      DAT_10026434 = FUN_1000c900(puVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_10026434 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_100010f0 @ 100010f0 size=118 ---- */

void FUN_100010f0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d89b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_1002642c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1000e6c1(0x10);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      DAT_1002642c = FUN_10008990(puVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_1002642c = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10001170 @ 10001170 size=153 ---- */

void FUN_10001170(void)

{
  Thread *pTVar1;
  undefined4 *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d44b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *unaff_ESI = GAS::CAgent::vftable;
  *(undefined1 *)(unaff_ESI + 1) = 0;
  *(undefined1 *)((int)unaff_ESI + 5) = 0;
  unaff_ESI[0x42] = 0;
  unaff_ESI[0x43] = 0;
  _memset((void *)((int)unaff_ESI + 6),0,0xff);
  pTVar1 = (Thread *)FUN_1000e6c1(0x2c);
  local_4 = 0;
  if (pTVar1 == (Thread *)0x0) {
    unaff_ESI[0x43] = 0;
    ExceptionList = local_c;
    return;
  }
  pTVar1 = FUN_10001ab0(pTVar1);
  unaff_ESI[0x43] = pTVar1;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10001210 @ 10001210 size=30 ---- */

undefined4 * __thiscall FUN_10001210(void *this,byte param_1)

{
  FUN_10001230(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10001230 @ 10001230 size=175 ---- */

void __fastcall FUN_10001230(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = GAS::CAgent::vftable;
  if ((Thread *)param_1[0x43] != (Thread *)0x0) {
    XSystem::Threading::Thread::Terminate((Thread *)param_1[0x43]);
    if (*(char *)(param_1 + 1) != '\0') {
      iVar1 = param_1[0x43];
      XSystem::Threading::ManualResetEvent::Set((ManualResetEvent *)(iVar1 + 8));
      XSystem::Threading::ManualResetEvent::Set((ManualResetEvent *)(*(int *)(iVar1 + 0x24) + 0xc));
    }
    XSystem::Threading::Thread::WaitFor((Thread *)param_1[0x43],0xffffffff);
    if ((undefined4 *)param_1[0x43] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x43])(1);
    }
    param_1[0x43] = 0;
  }
  if (DAT_10026430 != (undefined4 *)0x0) {
    (**(code **)*DAT_10026430)(1);
    DAT_10026430 = (undefined4 *)0x0;
  }
  if (DAT_1002642c != (undefined4 *)0x0) {
    (**(code **)*DAT_1002642c)(1);
    DAT_1002642c = (undefined4 *)0x0;
  }
  if (DAT_10026434 != (undefined4 *)0x0) {
    (**(code **)*DAT_10026434)(1);
    DAT_10026434 = (undefined4 *)0x0;
  }
  return;
}



/* ---- FUN_100012e0 @ 100012e0 size=175 ---- */

uint __fastcall FUN_100012e0(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  char *pcVar3;
  uint uVar4;
  undefined3 extraout_var;
  
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)(param_2 + 1)) < 0x100) goto LAB_1000130a;
  }
  param_2 = "NHN_IGA_SERVICE";
LAB_1000130a:
  pcVar3 = (char *)(in_EAX + 6);
  uVar4 = _strcpy_s(pcVar3,0xff,param_2);
  if (*(char *)(in_EAX + 5) == '\0') {
    iVar2 = *(int *)(in_EAX + 0x10c);
    (**(code **)(**(int **)(iVar2 + 0x1c) + 4))(pcVar3);
    (**(code **)(**(int **)(*(int *)(iVar2 + 0x20) + 8) + 4))(pcVar3);
    uVar4 = FUN_10003820();
    if ((char)uVar4 != '\0') {
      *(undefined1 *)(in_EAX + 5) = 1;
      XSystem::Threading::Thread::Start(*(Thread **)(in_EAX + 0x10c));
      iVar2 = *(int *)(in_EAX + 0x10c);
      XSystem::Threading::ManualResetEvent::Set((ManualResetEvent *)(iVar2 + 8));
      XSystem::Threading::ManualResetEvent::Set((ManualResetEvent *)(*(int *)(iVar2 + 0x24) + 0xc));
      return CONCAT31(extraout_var,1);
    }
  }
  return uVar4 & 0xffffff00;
}



/* ---- FUN_10001390 @ 10001390 size=449 ---- */

uint __thiscall FUN_10001390(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_stack_ffffff88;
  uint in_stack_ffffff8c;
  void *pvVar9;
  undefined1 auStack_6e [6];
  undefined1 local_44 [28];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar9 = (void *)(in_stack_ffffff8c & 0xffffff00);
  pcVar5 = this;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_10001750(auStack_6e + -10,this,(int)pcVar5 - ((int)this + 1));
  local_4 = 0;
  iVar6 = FUN_10001070();
  local_4 = 0xffffffff;
  iVar6 = FUN_1000caa0(iVar6,in_stack_ffffff88,pvVar9);
  if (iVar6 != 0) {
    *(undefined1 *)(iVar6 + 0x39) = 1;
    iVar6 = FUN_1000bb90();
    if (((iVar6 != 0) && (iVar2 = *(int *)(iVar6 + 0x20), iVar2 != 0)) &&
       (*(char *)(iVar2 + 0x9c) != '\0')) {
      bVar4 = FUN_1000a210();
      if (bVar4) {
        iVar7 = FUN_10001040();
        if (*(uint *)(iVar7 + 0x18) < 0x10) {
          pcVar5 = (char *)(iVar7 + 4);
        }
        else {
          pcVar5 = *(char **)(iVar7 + 4);
        }
        _strcpy_s(param_1,0xff,pcVar5);
        FUN_10001640((int)local_44);
        if (*(uint *)(iVar6 + 0x18) < 0x10) {
          pcVar5 = (char *)(iVar6 + 4);
        }
        else {
          pcVar5 = *(char **)(iVar6 + 4);
        }
        _strcpy_s(param_1 + 0x100,0xff,pcVar5);
        iVar6 = FUN_10001040();
        if (*(uint *)(iVar6 + 0x18) < 0x10) {
          pcVar5 = (char *)(iVar6 + 4);
        }
        else {
          pcVar5 = *(char **)(iVar6 + 4);
        }
        _strcpy_s(param_1 + 0x1ff,0xff,pcVar5);
        FUN_10001640((int)local_28);
        if (*(uint *)(iVar2 + 0x8c) < 0x10) {
          pcVar5 = (char *)(iVar2 + 0x78);
        }
        else {
          pcVar5 = *(char **)(iVar2 + 0x78);
        }
        _strcpy_s(param_1 + 0x2fe,0x300,pcVar5);
        uVar3 = *(undefined4 *)(iVar2 + 0x90);
        *(undefined4 *)(param_1 + 0x600) = uVar3;
        *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(iVar2 + 0x94);
        *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(iVar2 + 0x98);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      *(undefined1 *)(iVar2 + 0x9c) = 0;
    }
  }
  iVar6 = FUN_100010f0();
  uVar8 = FUN_10008ae0(iVar6);
  ExceptionList = local_c;
  return uVar8 & 0xffffff00;
}



/* ---- FUN_10001560 @ 10001560 size=153 ---- */

undefined4 FUN_10001560(char *param_1)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  char *unaff_EBX;
  char *unaff_EDI;
  
  if (*(char *)(in_EAX + 5) == '\0') {
    return in_EAX & 0xffffff00;
  }
  uVar3 = *(uint *)(*(int *)(in_EAX + 0x10c) + 0x10);
  if ((((uVar3 != 0) && (uVar3 != 6)) && (param_1 != (char *)0x0)) &&
     ((unaff_EBX != (char *)0x0 && (unaff_EDI != (char *)0x0)))) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(param_1 + 1);
    if (uVar3 < 0x100) {
      pcVar2 = unaff_EBX;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar2 - (int)(unaff_EBX + 1);
      if (uVar3 < 0x100) {
        pcVar2 = unaff_EDI;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)(unaff_EDI + 1);
        if (uVar3 < 0x100) {
          uVar4 = FUN_10009bf0(*(undefined4 *)(*(int *)(in_EAX + 0x10c) + 0x28),param_1,unaff_EBX,
                               unaff_EDI);
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



/* ---- FUN_10001600 @ 10001600 size=59 ---- */

int __thiscall FUN_10001600(void *this,char *param_1)

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
  FUN_10001750(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (int)this;
}



/* ---- FUN_10001640 @ 10001640 size=38 ---- */

void __fastcall FUN_10001640(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ---- FUN_10001670 @ 10001670 size=218 ---- */

void * __thiscall FUN_10001670(void *this,void *param_1,uint param_2,uint param_3)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 *puVar2;
  uint _MaxCount;
  
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    FUN_1000e3b4();
  }
  _MaxCount = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < _MaxCount) {
    _MaxCount = param_3;
  }
  if (this == param_1) {
    FUN_10001820(this,(undefined4 *)(_MaxCount + param_2),0xffffffff);
    FUN_10001820(this,(undefined4 *)0x0,param_2);
    return this;
  }
  if (_MaxCount == 0xffffffff) {
    FUN_1000e375();
  }
  if (*(uint *)((int)this + 0x18) < _MaxCount) {
    FUN_100018b0(this,_MaxCount);
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



/* ---- FUN_10001750 @ 10001750 size=193 ---- */

void * __thiscall FUN_10001750(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)this + 0x18);
  puVar4 = (undefined4 *)((int)this + 4);
  if (uVar1 < 0x10) {
    puVar3 = puVar4;
  }
  else {
    puVar3 = (undefined4 *)*puVar4;
  }
  if (puVar3 <= param_1) {
    if (uVar1 < 0x10) {
      puVar3 = puVar4;
    }
    else {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar3)) {
      if (0xf < uVar1) {
        puVar4 = (undefined4 *)*puVar4;
      }
      pvVar2 = FUN_10001670(this,this,(int)param_1 - (int)puVar4,param_2);
      return pvVar2;
    }
  }
  if (param_2 == 0xffffffff) {
    FUN_1000e375();
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_100018b0(this,param_2);
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
    return this;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar3 = puVar4;
    }
    else {
      puVar3 = (undefined4 *)*puVar4;
    }
    _memcpy_s(puVar3,*(uint *)((int)this + 0x18),param_1,param_2);
    *(uint *)((int)this + 0x14) = param_2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined1 *)((int)puVar4 + param_2) = 0;
  }
  return this;
}



/* ---- FUN_10001820 @ 10001820 size=131 ---- */

int __thiscall FUN_10001820(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = param_1;
  if (*(undefined4 **)((int)this + 0x14) < param_1) {
    FUN_1000e3b4();
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



/* ---- FUN_100018b0 @ 100018b0 size=175 ---- */

void __thiscall FUN_100018b0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_3c;
  undefined **local_2c [4];
  char *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined **local_8;
  
  puStack_c = &LAB_1001c8a0;
  local_10 = ExceptionList;
  uStack_3c = DAT_100241b0 ^ (uint)(local_2c + 10);
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
  local_8 = (undefined **)0x0;
  local_18 = this;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else if ((int)(0xffffffff / (ulonglong)uVar3) == 0) {
    local_1c = (char *)0x0;
    std::exception::exception((exception *)local_2c,&local_1c);
    local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_2c,&DAT_10021a10);
  }
  local_14 = (undefined1 *)&uStack_3c;
  FUN_1000e6c1(uVar3);
  FUN_10001987();
  return;
}



/* ---- Catch_All@1000195f @ 1000195f size=34 ---- */

undefined * Catch_All_1000195f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_10001a30((char *)(*(int *)(unaff_EBP + 8) + 1));
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  return &DAT_10001981;
}



/* ---- FUN_10001987 @ 10001987 size=105 ---- */

void FUN_10001987(void)

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



/* ---- Catch_All@100019f0 @ 100019f0 size=48 ---- */

void Catch_All_100019f0(void)

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



/* ---- FUN_10001a30 @ 10001a30 size=85 ---- */

void FUN_10001a30(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((int)(0xffffffff / ZEXT48(param_1)) == 0) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_10021a10);
    }
  }
  FUN_1000e6c1((size_t)pcVar1);
  return;
}



/* ---- FUN_10001ab0 @ 10001ab0 size=291 ---- */

Thread * FUN_10001ab0(Thread *param_1)

{
  undefined4 *puVar1;
  Thread *pTVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d422;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  XSystem::Threading::Thread::Thread(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = GAS::Connector::vftable;
  XSystem::Threading::ManualResetEvent::ManualResetEvent((ManualResetEvent *)(param_1 + 8),false);
  local_4._0_1_ = 1;
  XSystem::Threading::AutoResetEvent::AutoResetEvent((AutoResetEvent *)(param_1 + 0xc),false);
  local_4._0_1_ = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x18] = (Thread)0x0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x2044);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_10003630(puVar1);
  }
  local_4._0_1_ = 2;
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pTVar2 = (Thread *)FUN_1000e6c1(0x110);
  local_4._0_1_ = 4;
  if (pTVar2 == (Thread *)0x0) {
    pTVar2 = (Thread *)0x0;
  }
  else {
    pTVar2 = FUN_10002490(pTVar2,param_1);
  }
  local_4._0_1_ = 2;
  *(Thread **)(param_1 + 0x20) = pTVar2;
  iVar3 = FUN_1000e6c1(0x14);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  *(int *)(param_1 + 0x28) = iVar3;
  pTVar2 = (Thread *)FUN_1000e6c1(0x14);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pTVar2 == (Thread *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    pTVar2 = FUN_10001ee0(pTVar2);
    *(Thread **)(param_1 + 0x24) = pTVar2;
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10001be0 @ 10001be0 size=30 ---- */

Thread * __thiscall FUN_10001be0(void *this,byte param_1)

{
  FUN_10001c00(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10001c00 @ 10001c00 size=286 ---- */

void __fastcall FUN_10001c00(Thread *param_1)

{
  void *_Memory;
  uint uVar1;
  undefined1 auStackY_a8 [128];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1001cbd1;
  local_c = ExceptionList;
  uVar1 = DAT_100241b0 ^ (uint)(auStackY_a8 + 0x88);
  ExceptionList = &local_c;
  *(undefined ***)param_1 = GAS::Connector::vftable;
  local_4 = 2;
  _Memory = *(void **)(param_1 + 0x28);
  if (_Memory != (void *)0x0) {
    FUN_10009af0();
    _free(_Memory);
  }
  if (*(Thread **)(param_1 + 0x24) != (Thread *)0x0) {
    XSystem::Threading::Thread::Terminate(*(Thread **)(param_1 + 0x24));
    XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(*(int *)(param_1 + 0x24) + 8));
    XSystem::Threading::ManualResetEvent::Set((ManualResetEvent *)(*(int *)(param_1 + 0x24) + 0xc));
    XSystem::Threading::Thread::WaitFor(*(Thread **)(param_1 + 0x24),0xffffffff);
    if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(Thread **)(param_1 + 0x20) != (Thread *)0x0) {
    XSystem::Threading::Thread::Terminate(*(Thread **)(param_1 + 0x20));
    XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(param_1 + 0xc));
    XSystem::Threading::Thread::WaitFor(*(Thread **)(param_1 + 0x20),0xffffffff);
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1,uVar1);
  }
  XSystem::Threading::Thread::Stop(param_1);
  local_4._0_1_ = 1;
  XSystem::Threading::AutoResetEvent::~AutoResetEvent((AutoResetEvent *)(param_1 + 0xc));
  local_4 = (uint)local_4._1_3_ << 8;
  XSystem::Threading::ManualResetEvent::~ManualResetEvent((ManualResetEvent *)(param_1 + 8));
  local_4 = 0xffffffff;
  XSystem::Threading::Thread::~Thread(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10001d20 @ 10001d20 size=436 ---- */

void __fastcall FUN_10001d20(Thread *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  clock_t cVar4;
  void *pvVar5;
  char *param3;
  char *param4;
  char *param5;
  code *pcVar6;
  code *pcVar7;
  undefined4 local_808;
  undefined1 auStack_7f4 [12];
  undefined1 auStack_7e8 [2020];
  uint local_4;
  
  pcVar6 = Terminated_exref;
  local_4 = DAT_100241b0 ^ (uint)&local_808;
  local_808 = 0;
  bVar2 = XSystem::Threading::Thread::Terminated(param_1);
  if (!bVar2) {
    pcVar7 = Sleep_exref;
    do {
      XSystem::Threading::ManualResetEvent::Wait((ManualResetEvent *)(param_1 + 8),0xffffffff);
      cVar3 = (*pcVar6)();
      if (cVar3 != '\0') break;
      if (*(int *)(param_1 + 0x10) == 0) {
        cVar3 = FUN_100038e0();
        if (cVar3 == '\0') {
          *(undefined4 *)(param_1 + 0x10) = 6;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 1;
          XSystem::Threading::Thread::Start(*(Thread **)(param_1 + 0x20));
        }
      }
      else if (*(int *)(param_1 + 0x10) == 1) {
        cVar4 = _clock();
        if (*(int *)(param_1 + 0x14) <= cVar4 - local_808) {
          *(int *)(param_1 + 0x14) = *(int *)(*(int *)(param_1 + 0x1c) + 0x20) * 1000;
          local_808 = _clock();
          iVar1 = *(int *)(param_1 + 0x1c);
          _sprintf_s(auStack_7f4 + -0x10,0x800,"/IGA01?svc=%s",*(char **)(iVar1 + 4));
          cVar3 = FUN_10003990(iVar1,iVar1 + 0x44,*(undefined4 *)(iVar1 + 0x24),auStack_7f4);
          if (cVar3 == '\0') break;
          XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(param_1 + 0xc));
          (*pcVar7)(500);
        }
        pvVar5 = (void *)FUN_10009c90();
        if (pvVar5 != (void *)0x0) {
          if (*(uint *)((int)pvVar5 + 0x50) < 0x10) {
            param5 = (char *)((int)pvVar5 + 0x3c);
          }
          else {
            param5 = *(char **)((int)pvVar5 + 0x3c);
          }
          if (*(uint *)((int)pvVar5 + 0x34) < 0x10) {
            param4 = (char *)((int)pvVar5 + 0x20);
          }
          else {
            param4 = *(char **)((int)pvVar5 + 0x20);
          }
          if (*(uint *)((int)pvVar5 + 0x18) < 0x10) {
            param3 = (char *)((int)pvVar5 + 4);
          }
          else {
            param3 = *(char **)((int)pvVar5 + 4);
          }
          iVar1 = *(int *)(param_1 + 0x1c);
          _sprintf_s(auStack_7f4 + -0x10,0x800,"/IGA04?unit=%s&ac=%s&src=%s&svc=%s",param3,param4,
                     param5,*(char **)(iVar1 + 4));
          local_808 = 0x10001e6d;
          FUN_10003990(iVar1,iVar1 + 0x44,*(undefined4 *)(iVar1 + 0x24),auStack_7e8);
          FUN_10009a00();
          local_808 = 0x10001e7b;
          XSystem::MPHeap::Free((_THandle *)0x0,pvVar5);
          pcVar6 = Terminated_exref;
          pcVar7 = Sleep_exref;
        }
      }
      (*pcVar7)(500);
      cVar3 = (*pcVar6)();
    } while (cVar3 == '\0');
  }
  __security_check_cookie(local_4 ^ (uint)&local_808);
  return;
}



/* ---- FUN_10001ee0 @ 10001ee0 size=114 ---- */

Thread * FUN_10001ee0(Thread *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c795;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  XSystem::Threading::Thread::Thread(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = GAS::EventCaller::vftable;
  XSystem::Threading::AutoResetEvent::AutoResetEvent((AutoResetEvent *)(param_1 + 8),false);
  local_4 = CONCAT31(local_4._1_3_,1);
  XSystem::Threading::ManualResetEvent::ManualResetEvent((ManualResetEvent *)(param_1 + 0xc),false);
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10001f60 @ 10001f60 size=30 ---- */

Thread * __thiscall FUN_10001f60(void *this,byte param_1)

{
  FUN_10001f80(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10001f80 @ 10001f80 size=138 ---- */

void __fastcall FUN_10001f80(Thread *param_1)

{
  uint uVar1;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1001c761;
  local_c = ExceptionList;
  uVar1 = DAT_100241b0 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  *(undefined ***)param_1 = GAS::EventCaller::vftable;
  local_4 = 2;
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x10))(1,uVar1);
  }
  XSystem::Threading::Thread::Stop(param_1);
  local_4._0_1_ = 1;
  XSystem::Threading::ManualResetEvent::~ManualResetEvent((ManualResetEvent *)(param_1 + 0xc));
  local_4 = (uint)local_4._1_3_ << 8;
  XSystem::Threading::AutoResetEvent::~AutoResetEvent((AutoResetEvent *)(param_1 + 8));
  local_4 = 0xffffffff;
  XSystem::Threading::Thread::~Thread(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10002010 @ 10002010 size=762 ---- */

void __fastcall FUN_10002010(Thread *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *local_44;
  undefined1 local_40 [4];
  int *local_3c;
  undefined4 local_38;
  void *pvStack_30;
  uint uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1001d86d;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_3c = (int *)FUN_10002370();
  local_38 = 0;
  local_c = 0;
  bVar4 = XSystem::Threading::Thread::Terminated(param_1);
  do {
    if (bVar4) {
      piVar7 = (int *)*local_3c;
      *local_3c = (int)local_3c;
      local_3c[1] = (int)local_3c;
      local_38 = 0;
      if (piVar7 != local_3c) {
        do {
          piVar3 = (int *)*piVar7;
          _free(piVar7);
          piVar7 = piVar3;
        } while (piVar3 != local_3c);
      }
LAB_1000227c:
      _free(local_3c);
      ExceptionList = local_14;
      return;
    }
    XSystem::Threading::AutoResetEvent::Wait((AutoResetEvent *)(param_1 + 8),0xffffffff);
    bVar4 = XSystem::Threading::Thread::Terminated(param_1);
    if (bVar4) {
      piVar7 = (int *)*local_3c;
      *local_3c = (int)local_3c;
      local_3c[1] = (int)local_3c;
      local_38 = 0;
      if (piVar7 != local_3c) {
        do {
          piVar3 = (int *)*piVar7;
          _free(piVar7);
          piVar7 = piVar3;
        } while (piVar3 != local_3c);
      }
      goto LAB_1000227c;
    }
    iVar5 = FUN_10001070();
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
    local_c._0_1_ = 1;
    puVar1 = *(undefined4 **)(iVar5 + 0x14);
    puVar2 = (undefined4 *)*puVar1;
    piVar7 = (int *)*local_3c;
    *local_3c = (int)local_3c;
    local_3c[1] = (int)local_3c;
    local_38 = 0;
    if (piVar7 != local_3c) {
      do {
        piVar3 = (int *)*piVar7;
        _free(piVar7);
        piVar7 = piVar3;
      } while (piVar3 != local_3c);
    }
    FUN_1000d7a0((int)local_40,param_1,local_40,*local_3c,iVar5 + 0x10,puVar2,iVar5 + 0x10,puVar1);
    local_c = (uint)local_c._1_3_ << 8;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
    for (local_44 = (int *)*local_3c; local_44 != local_3c; local_44 = (int *)*local_44) {
      iVar5 = local_44[2];
      if ((((*(char *)(iVar5 + 0x3a) != '\0') && (iVar6 = FUN_1000bb90(), iVar6 != 0)) &&
          (*(int *)(iVar6 + 0x20) != 0)) && (*(char *)(*(int *)(iVar6 + 0x20) + 0x9c) != '\0')) {
        *(undefined1 *)(iVar5 + 0x3a) = 0;
        iVar6 = FUN_10001040();
        local_c._0_1_ = 2;
        if (*(uint *)(iVar6 + 0x18) < 0x10) {
          iVar6 = iVar6 + 4;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        (**(code **)(**(int **)(param_1 + 0x10) + 4))(2,iVar6);
        local_c = (uint)local_c._1_3_ << 8;
        if (0xf < uStack_1c) {
          _free(pvStack_30);
        }
      }
      if (((*(char *)(iVar5 + 0x38) != '\0') && (iVar6 = FUN_1000bb90(), iVar6 != 0)) &&
         ((*(int *)(iVar6 + 0x20) != 0 && (*(char *)(*(int *)(iVar6 + 0x20) + 0x9c) != '\0')))) {
        *(undefined1 *)(iVar5 + 0x38) = 0;
        iVar5 = FUN_10001040();
        local_c._0_1_ = 3;
        if (*(uint *)(iVar5 + 0x18) < 0x10) {
          iVar5 = iVar5 + 4;
        }
        else {
          iVar5 = *(int *)(iVar5 + 4);
        }
        (**(code **)(**(int **)(param_1 + 0x10) + 4))(1,iVar5);
        local_c = (uint)local_c._1_3_ << 8;
        if (0xf < uStack_1c) {
          _free(pvStack_30);
        }
      }
      XSystem::Threading::ManualResetEvent::Wait((ManualResetEvent *)(param_1 + 0xc),0xffffffff);
      bVar4 = XSystem::Threading::Thread::Terminated(param_1);
      if (bVar4) {
        piVar7 = (int *)*local_3c;
        *local_3c = (int)local_3c;
        local_3c[1] = (int)local_3c;
        local_38 = 0;
        if (piVar7 != local_3c) {
          do {
            piVar3 = (int *)*piVar7;
            _free(piVar7);
            piVar7 = piVar3;
          } while (piVar3 != local_3c);
        }
        goto LAB_1000227c;
      }
      Sleep(10);
      if (local_44 == local_3c) {
        FUN_1000e9c8();
      }
    }
    bVar4 = XSystem::Threading::Thread::Terminated(param_1);
  } while( true );
}



/* ---- thunk_FUN_10002390 @ 10002310 size=5 ---- */

void thunk_FUN_10002390(void)

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



/* ---- FUN_10002320 @ 10002320 size=36 ---- */

void FUN_10002320(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_1000e9c8();
  }
  if (unaff_ESI[1] == *(int *)(*unaff_ESI + 4)) {
    FUN_1000e9c8();
  }
  unaff_ESI[1] = *(int *)unaff_ESI[1];
  return;
}



/* ---- FUN_10002350 @ 10002350 size=29 ---- */

undefined4 FUN_10002350(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  if ((*unaff_EDI == 0) || (*unaff_EDI != *unaff_ESI)) {
    FUN_1000e9c8();
  }
  return CONCAT31((int3)((uint)unaff_EDI[1] >> 8),unaff_EDI[1] != unaff_ESI[1]);
}



/* ---- FUN_10002370 @ 10002370 size=26 ---- */

void FUN_10002370(void)

{
  int iVar1;
  
  iVar1 = FUN_1000e6c1(0xc);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}



/* ---- FUN_10002390 @ 10002390 size=71 ---- */

void FUN_10002390(void)

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



/* ---- FUN_100023e0 @ 100023e0 size=38 ---- */

void FUN_100023e0(void)

{
  int in_EAX;
  void *unaff_ESI;
  
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)((int)unaff_ESI + 4) = 0;
  FUN_10001670(unaff_ESI,(void *)(in_EAX + 0x20),0,0xffffffff);
  return;
}



/* ---- FUN_10002410 @ 10002410 size=118 ---- */

void FUN_10002410(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d3bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_10026430 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1000e6c1(0x1c);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      DAT_10026430 = FUN_1000a5b0(puVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_10026430 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10002490 @ 10002490 size=202 ---- */

Thread * FUN_10002490(Thread *param_1,undefined4 param_2)

{
  Thread *lpBuffer;
  undefined4 *puVar1;
  DWORD DVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  XSystem::Threading::Thread::Thread(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = GAS::SrcDownloader::vftable;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  puVar1 = (undefined4 *)FUN_1000e6c1(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    *puVar1 = GAS::SrcSocket::vftable;
  }
  lpBuffer = param_1 + 0xc;
  *(undefined4 **)(param_1 + 8) = puVar1;
  _memset(lpBuffer,0,0x100);
  DVar2 = GetEnvironmentVariableA("TEMP",(LPSTR)lpBuffer,0x100);
  if (DVar2 == 0) {
    DVar2 = GetEnvironmentVariableA("TMP",(LPSTR)lpBuffer,0x100);
    if (DVar2 == 0) {
      _strcpy_s((char *)lpBuffer,0x100,".\\");
    }
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10002560 @ 10002560 size=30 ---- */

Thread * __thiscall FUN_10002560(void *this,byte param_1)

{
  FUN_10002580(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10002580 @ 10002580 size=110 ---- */

void __fastcall FUN_10002580(Thread *param_1)

{
  uint uVar1;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c719;
  local_c = ExceptionList;
  uVar1 = DAT_100241b0 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  *(undefined ***)param_1 = GAS::SrcDownloader::vftable;
  local_4 = 0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1,uVar1);
  }
  XSystem::Threading::Thread::Stop(param_1);
  local_4 = 0xffffffff;
  XSystem::Threading::Thread::~Thread(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_100025f0 @ 100025f0 size=101 ---- */

void __fastcall FUN_100025f0(Thread *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = XSystem::Threading::Thread::Terminated(param_1);
  do {
    if (bVar1) {
      return;
    }
    if (*(int *)(param_1 + 0x10c) != 0) {
      XSystem::Threading::AutoResetEvent::Wait
                ((AutoResetEvent *)(*(int *)(param_1 + 0x10c) + 0xc),0xffffffff);
      bVar1 = XSystem::Threading::Thread::Terminated(param_1);
      if (bVar1) {
        return;
      }
      cVar2 = FUN_10002a20(param_1);
      if (cVar2 == '\0') {
        return;
      }
      XSystem::Threading::AutoResetEvent::Set
                ((AutoResetEvent *)(*(int *)(*(int *)(param_1 + 0x10c) + 0x24) + 8));
    }
    bVar1 = XSystem::Threading::Thread::Terminated(param_1);
  } while( true );
}



/* ---- FUN_10002660 @ 10002660 size=948 ---- */

void __fastcall FUN_10002660(undefined4 param_1,LPCSTR param_2,int param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 ***pppuVar6;
  undefined4 ***pppuVar7;
  int local_c4;
  LPCSTR local_c0;
  undefined4 local_bc;
  void *local_b4;
  undefined4 local_a4;
  uint local_a0;
  void *local_98;
  uint local_84;
  undefined1 local_80 [4];
  undefined4 ***local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [4];
  undefined4 ***local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [4];
  void *local_44;
  int local_34;
  uint local_30;
  undefined1 local_2c [4];
  void *local_28;
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cdac;
  local_c = ExceptionList;
  local_10 = DAT_100241b0 ^ (uint)&local_c4;
  ExceptionList = &local_c;
  local_c4 = param_3;
  local_c0 = param_2;
  local_bc = param_1;
  if (*(int *)(param_3 + 8) != 0) {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    pcVar2 = param_4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_10001750(local_2c,(undefined4 *)param_4,(int)pcVar2 - (int)(param_4 + 1));
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = (undefined4 ***)((uint)local_7c[0] & 0xffffff00);
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (undefined4 ***)((uint)local_60[0] & 0xffffff00);
    local_4 = 3;
    uVar3 = FUN_10002e10((int)local_2c,"http://",7);
    pvVar4 = (void *)FUN_10002d60(uVar3,local_2c,local_18 - uVar3);
    local_4._0_1_ = 4;
    FUN_10001670(local_48,pvVar4,0,0xffffffff);
    local_4._0_1_ = 3;
    if (0xf < local_a0) {
      _free(local_b4);
    }
    uVar5 = FUN_10002d90((int)local_48,&DAT_1001fc90,1);
    pvVar4 = (void *)FUN_10002d60(uVar3,local_2c,uVar5);
    local_4._0_1_ = 5;
    FUN_10001670(local_64,pvVar4,0,0xffffffff);
    local_4._0_1_ = 3;
    if (0xf < local_a0) {
      _free(local_b4);
    }
    pvVar4 = (void *)FUN_10002d60(uVar5,local_48,local_34 - uVar3);
    local_4._0_1_ = 6;
    pvVar4 = (void *)FUN_10002e80(pvVar4);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_10001670(local_80,pvVar4,0,0xffffffff);
    if (0xf < local_a0) {
      _free(local_b4);
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = (void *)((uint)local_b4 & 0xffffff00);
    if (0xf < local_84) {
      _free(local_98);
    }
    pppuVar7 = local_7c[0];
    if (local_68 < 0x10) {
      pppuVar7 = local_7c;
    }
    pppuVar6 = local_60[0];
    if (local_4c < 0x10) {
      pppuVar6 = local_60;
    }
    cVar1 = FUN_100049f0(pppuVar6,pppuVar7,*(undefined4 *)(local_c4 + 8),local_c0);
    if (cVar1 == '\0') {
      if (0xf < local_4c) {
        _free(local_60[0]);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = (undefined4 ***)((uint)local_60[0] & 0xffffff00);
      if (0xf < local_68) {
        _free(local_7c[0]);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = (undefined4 ***)((uint)local_7c[0] & 0xffffff00);
      if (0xf < local_30) {
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      if (0xf < local_14) {
        _free(local_28);
      }
    }
    else {
      if (0xf < local_4c) {
        _free(local_60[0]);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = (undefined4 ***)((uint)local_60[0] & 0xffffff00);
      if (0xf < local_68) {
        _free(local_7c[0]);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = (undefined4 ***)((uint)local_7c[0] & 0xffffff00);
      if (0xf < local_30) {
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      if (0xf < local_14) {
        _free(local_28);
      }
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_c4);
  return;
}



/* ---- FUN_10002a20 @ 10002a20 size=826 ---- */

void FUN_10002a20(Thread *param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  char *_Memory;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_870 [4];
  char local_844 [4];
  undefined4 local_840;
  Thread *in_stack_fffff7c4;
  uint local_828;
  void *local_824 [5];
  uint uStack_810;
  char acStack_7f8 [212];
  char local_724 [44];
  char acStack_6f8 [212];
  char local_624 [64];
  char acStack_5e4 [192];
  char local_524 [24];
  char acStack_50c [20];
  char acStack_4f8 [20];
  undefined1 auStack_4e4 [480];
  char acStack_304 [20];
  char acStack_2f0 [20];
  CHAR aCStack_2dc [712];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d81b;
  local_c = ExceptionList;
  local_14 = DAT_100241b0 ^ (uint)(auStack_870 + 0x14);
  ExceptionList = &local_c;
  _Memory = (char *)FUN_10002370();
  local_4 = 0;
  iVar4 = FUN_10002410();
  FUN_1000ab70(iVar4);
  pcVar7 = *(char **)_Memory;
  do {
    if (pcVar7 == _Memory) {
      pcVar7 = *(char **)_Memory;
      *(char **)_Memory = _Memory;
      *(char **)(_Memory + 4) = _Memory;
      if (pcVar7 != _Memory) {
        do {
          pcVar6 = *(char **)pcVar7;
          _free(pcVar7);
          pcVar7 = pcVar6;
        } while (pcVar6 != _Memory);
      }
      _free(_Memory);
LAB_10002d30:
      ExceptionList = local_c;
      __security_check_cookie(local_14 ^ (uint)(auStack_870 + 0x14));
      return;
    }
    iVar4 = *(int *)(pcVar7 + 8);
    if ((iVar4 == 0) || (*(char *)(iVar4 + 0x9c) != '\0')) {
LAB_10002c6c:
      XSystem::Threading::ManualResetEvent::Wait
                ((ManualResetEvent *)(*(int *)(param_1 + 0x10c) + 8),0xffffffff);
      bVar2 = XSystem::Threading::Thread::Terminated(param_1);
      if (bVar2) {
        pcVar7 = *(char **)_Memory;
        *(char **)_Memory = _Memory;
        *(char **)(_Memory + 4) = _Memory;
        if (pcVar7 != _Memory) {
          do {
            pcVar6 = *(char **)pcVar7;
            _free(pcVar7);
            pcVar7 = pcVar6;
          } while (pcVar6 != _Memory);
        }
        _free(_Memory);
        goto LAB_10002d30;
      }
      Sleep(10);
    }
    else {
      iVar5 = FUN_100023e0();
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        pcVar6 = (char *)(iVar5 + 4);
      }
      else {
        pcVar6 = *(char **)(iVar5 + 4);
      }
      pcVar1 = pcVar6 + 1;
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      if (0xf < local_828) {
        _free(in_stack_fffff7c4);
      }
      if ((uint)((int)pcVar6 - (int)pcVar1) < 0x101) {
        iVar5 = FUN_100023e0();
        if (*(uint *)(iVar5 + 0x18) < 0x10) {
          pcVar7 = (char *)(iVar5 + 4);
        }
        else {
          pcVar7 = *(char **)(iVar5 + 4);
        }
        FUN_1000eaad(pcVar7,local_844,3,local_624,0x100,local_724,0x100,(char *)local_824,0x100);
        if (0xf < local_828) {
          _free(in_stack_fffff7c4);
        }
        iVar5 = FUN_10001040();
        if (*(uint *)(iVar5 + 0x18) < 0x10) {
          pcVar7 = (char *)(iVar5 + 4);
        }
        else {
          pcVar7 = *(char **)(iVar5 + 4);
        }
        _sprintf_s(local_524,0x203,"%s_%s%s",pcVar7,local_724,(char *)local_824);
        if (0xf < uStack_810) {
          _free(local_824[0]);
        }
        _sprintf_s(acStack_304,0x303,"%s\\%s",(char *)(param_1 + 0xc),acStack_50c);
        pcVar7 = acStack_2f0;
        do {
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        FUN_10001750((void *)(iVar4 + 0x74),(undefined4 *)acStack_2f0,
                     (int)pcVar7 - (int)(acStack_2f0 + 1));
        pcVar7 = acStack_7f8;
        _Memory = (char *)0x203;
        _sprintf_s(acStack_4f8,0x203,"%s%s",acStack_6f8,pcVar7);
        bVar2 = FUN_1000a210();
        if (!bVar2) {
          local_840 = 0x10002c61;
          in_stack_fffff7c4 = param_1;
          cVar3 = FUN_10002660(auStack_4e4,aCStack_2dc,(int)param_1,acStack_5e4);
          if (cVar3 == '\0') goto LAB_10002c6c;
        }
        *(undefined1 *)(iVar4 + 0x9c) = 1;
        goto LAB_10002c6c;
      }
    }
    if (pcVar7 == _Memory) {
      FUN_1000e9c8();
    }
    pcVar7 = *(char **)pcVar7;
  } while( true );
}



/* ---- FUN_10002d60 @ 10002d60 size=39 ---- */

void __fastcall FUN_10002d60(uint param_1,void *param_2,uint param_3)

{
  void *unaff_ESI;
  
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)((int)unaff_ESI + 4) = 0;
  FUN_10001670(unaff_ESI,param_2,param_1,param_3);
  return;
}



/* ---- FUN_10002d90 @ 10002d90 size=126 ---- */

int FUN_10002d90(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  
  if ((param_3 != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) {
    pcVar5 = (char *)(param_1 + 4);
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      pcVar3 = pcVar5;
    }
    else {
      pcVar3 = *(char **)pcVar5;
    }
    pcVar2 = pcVar5;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      pcVar2 = *(char **)pcVar5;
    }
    for (; pcVar2 < pcVar3 + iVar1; pcVar2 = pcVar2 + 1) {
      pvVar4 = _memchr(param_2,(int)*pcVar2,param_3);
      if (pvVar4 != (void *)0x0) {
        if (0xf < *(uint *)(param_1 + 0x18)) {
          pcVar5 = *(char **)pcVar5;
        }
        return (int)pcVar2 - (int)pcVar5;
      }
    }
  }
  return -1;
}



/* ---- FUN_10002e10 @ 10002e10 size=112 ---- */

int FUN_10002e10(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    pcVar5 = (char *)(param_1 + 4);
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      pcVar3 = pcVar5;
    }
    else {
      pcVar3 = *(char **)pcVar5;
    }
    pcVar2 = pcVar5;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      pcVar2 = *(char **)pcVar5;
    }
    for (; pcVar2 < pcVar3 + iVar1; pcVar2 = pcVar2 + 1) {
      pvVar4 = _memchr(param_2,(int)*pcVar2,param_3);
      if (pvVar4 == (void *)0x0) {
        if (0xf < *(uint *)(param_1 + 0x18)) {
          pcVar5 = *(char **)pcVar5;
        }
        return (int)pcVar2 - (int)pcVar5;
      }
    }
  }
  return -1;
}



/* ---- FUN_10002e80 @ 10002e80 size=171 ---- */

void __cdecl FUN_10002e80(void *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  void *unaff_ESI;
  char *unaff_EDI;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cb88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  FUN_10001670(local_28,param_1,0,0xffffffff);
  local_4 = 0;
  pcVar2 = unaff_EDI;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pvVar3 = (void *)FUN_10002f30((undefined4 *)unaff_EDI,(int)pcVar2 - (int)(unaff_EDI + 1));
  *(undefined4 *)((int)unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined1 *)((int)unaff_ESI + 4) = 0;
  FUN_10001670(unaff_ESI,pvVar3,0,0xffffffff);
  if (0xf < local_10) {
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10002f30 @ 10002f30 size=233 ---- */

void FUN_10002f30(undefined4 *param_1,uint param_2)

{
  void *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *unaff_retaddr;
  
  uVar3 = *(uint *)((int)in_EAX + 0x18);
  puVar2 = (undefined4 *)((int)in_EAX + 4);
  if (uVar3 < 0x10) {
    puVar1 = puVar2;
  }
  else {
    puVar1 = (undefined4 *)*puVar2;
  }
  if (puVar1 <= param_1) {
    if (uVar3 < 0x10) {
      puVar1 = puVar2;
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)in_EAX + 0x14) + (int)puVar1)) {
      if (0xf < uVar3) {
        puVar2 = (undefined4 *)*puVar2;
      }
      FUN_10003020((int)in_EAX,(int)param_1 - (int)puVar2);
      return;
    }
  }
  uVar3 = *(uint *)((int)in_EAX + 0x14);
  if ((-uVar3 - 1 <= param_2) || (uVar3 + param_2 < uVar3)) {
    FUN_1000e375();
  }
  if (param_2 != 0) {
    uVar3 = *(int *)((int)in_EAX + 0x14) + param_2;
    if (uVar3 == 0xffffffff) {
      FUN_1000e375();
    }
    if (*(uint *)((int)in_EAX + 0x18) < uVar3) {
      FUN_100018b0(in_EAX,uVar3);
    }
    else if (uVar3 == 0) {
      *(undefined4 *)((int)in_EAX + 0x14) = 0;
      if (0xf < *(uint *)((int)in_EAX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
      return;
    }
    if (uVar3 != 0) {
      if (*(uint *)((int)in_EAX + 0x18) < 0x10) {
        puVar1 = puVar2;
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
      _memcpy_s((void *)(*(int *)((int)in_EAX + 0x14) + (int)puVar1),
                *(uint *)((int)in_EAX + 0x18) - *(int *)((int)in_EAX + 0x14),unaff_retaddr,param_2);
      *(uint *)((int)in_EAX + 0x14) = uVar3;
      if (0xf < *(uint *)((int)in_EAX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)((int)puVar2 + uVar3) = 0;
    }
  }
  return;
}



/* ---- FUN_10003020 @ 10003020 size=238 ---- */

void FUN_10003020(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_1000e3b4();
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  uVar1 = *(uint *)((int)unaff_ESI + 0x14);
  if ((-uVar1 - 1 <= in_EAX) || (uVar1 + in_EAX < uVar1)) {
    FUN_1000e375();
  }
  if (in_EAX != 0) {
    uVar1 = *(int *)((int)unaff_ESI + 0x14) + in_EAX;
    if (uVar1 == 0xffffffff) {
      FUN_1000e375();
    }
    if (*(uint *)((int)unaff_ESI + 0x18) < uVar1) {
      FUN_100018b0(unaff_ESI,uVar1);
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
      if (*(uint *)((int)unaff_ESI + 0x18) < 0x10) {
        *(undefined1 *)((int)unaff_ESI + 4) = 0;
        return;
      }
      **(undefined1 **)((int)unaff_ESI + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar3 = param_1 + 4;
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
      }
      if (*(uint *)((int)unaff_ESI + 0x18) < 0x10) {
        iVar2 = (int)unaff_ESI + 4;
      }
      else {
        iVar2 = *(int *)((int)unaff_ESI + 4);
      }
      _memcpy_s((void *)(*(int *)((int)unaff_ESI + 0x14) + iVar2),
                *(uint *)((int)unaff_ESI + 0x18) - *(int *)((int)unaff_ESI + 0x14),
                (void *)(iVar3 + param_1),in_EAX);
      *(uint *)((int)unaff_ESI + 0x14) = uVar1;
      if (0xf < *(uint *)((int)unaff_ESI + 0x18)) {
        *(undefined1 *)(*(int *)((int)unaff_ESI + 4) + uVar1) = 0;
        return;
      }
      *(undefined1 *)((int)unaff_ESI + uVar1 + 4) = 0;
    }
  }
  return;
}



/* ---- FUN_10003110 @ 10003110 size=25 ---- */

BOOL FUN_10003110(HMODULE param_1,int param_2)

{
  BOOL BVar1;
  
  BVar1 = 0;
  if (param_2 == 1) {
    BVar1 = DisableThreadLibraryCalls(param_1);
  }
  return BVar1;
}



/* ---- FUN_10003130 @ 10003130 size=5 ---- */

undefined1 FUN_10003130(void)

{
  return 0;
}



/* ---- FUN_10003140 @ 10003140 size=24 ---- */

undefined4 __thiscall FUN_10003140(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)((int)this + 8))(*(undefined4 *)((int)this + 4),param_1,param_2);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



/* ---- FUN_10003160 @ 10003160 size=31 ---- */

undefined4 * __thiscall FUN_10003160(void *this,byte param_1)

{
  *(undefined ***)this = GAS::EventHandler::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- CreateHandle @ 10003180 size=93 ---- */

/* struct GAS::_Handle * __stdcall GAS::CreateHandle(void) */

_Handle * GAS::CreateHandle(void)

{
  int iVar1;
  _Handle *p_Var2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3180  2  ?CreateHandle@GAS@@YGPAU_Handle@1@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d7eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_1000e6c1(0x110);
  local_4 = 0;
  if ((iVar1 == 0) || (p_Var2 = (_Handle *)FUN_10001170(), p_Var2 == (_Handle *)0x0)) {
    ExceptionList = local_c;
    return (_Handle *)0x0;
  }
  ExceptionList = local_c;
  return p_Var2;
}



/* ---- DestroyHandle @ 100031e0 size=25 ---- */

/* void __stdcall GAS::DestroyHandle(struct GAS::_Handle *) */

void GAS::DestroyHandle(_Handle *param_1)

{
                    /* 0x31e0  3  ?DestroyHandle@GAS@@YGXPAU_Handle@1@@Z */
  if (param_1 == (_Handle *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100031f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* ---- ConnectToAdServer @ 10003200 size=30 ---- */

/* bool __stdcall GAS::ConnectToAdServer(struct GAS::_Handle *,char const *,struct GAS::InitInfo *)
    */

bool GAS::ConnectToAdServer(_Handle *param_1,char *param_2,InitInfo *param_3)

{
  uint uVar1;
  
                    /* 0x3200  1  ?ConnectToAdServer@GAS@@YG_NPAU_Handle@1@PBDPAUInitInfo@1@@Z */
  if (param_1 == (_Handle *)0x0) {
    return false;
  }
  uVar1 = FUN_100012e0(param_3,param_2);
  return SUB41(uVar1,0);
}



/* ---- SetCallbackNotify @ 10003220 size=87 ---- */

/* bool __stdcall GAS::SetCallbackNotify(struct GAS::_Handle *,void (__stdcall*)(struct GAS::_Handle
   *,int,void *)) */

bool GAS::SetCallbackNotify(_Handle *param_1,_func_void__Handle_ptr_int_void_ptr *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x3220  10  ?SetCallbackNotify@GAS@@YG_NPAU_Handle@1@P6GX0HPAX@Z@Z */
  if ((param_1 == (_Handle *)0x0) || (param_2 == (_func_void__Handle_ptr_int_void_ptr *)0x0)) {
    return false;
  }
  puVar2 = (undefined4 *)FUN_1000e6c1(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = HandlerOnNotify::vftable;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 **)(*(int *)(iVar1 + 0x24) + 0x10) = puVar2;
    XSystem::Threading::Thread::Start(*(Thread **)(iVar1 + 0x24));
  }
  return true;
}



/* ---- EnterDivision @ 10003280 size=28 ---- */

/* bool __stdcall GAS::EnterDivision(struct GAS::_Handle *,char const *) */

bool GAS::EnterDivision(_Handle *param_1,char *param_2)

{
                    /* 0x3280  4  ?EnterDivision@GAS@@YG_NPAU_Handle@1@PBD@Z */
  if (param_1 == (_Handle *)0x0) {
    return false;
  }
  *(char **)(param_1 + 0x108) = param_2;
  return true;
}



/* ---- ExitDivision @ 100032a0 size=11 ---- */

/* bool __stdcall GAS::ExitDivision(struct GAS::_Handle *,char const *) */

bool GAS::ExitDivision(_Handle *param_1,char *param_2)

{
                    /* 0x32a0  5  ?ExitDivision@GAS@@YG_NPAU_Handle@1@PBD@Z */
  return param_1 != (_Handle *)0x0;
}



/* ---- GetAdUnit @ 100032b0 size=36 ---- */

/* bool __stdcall GAS::GetAdUnit(struct GAS::_Handle *,char const *,struct GAS::Unit *) */

bool GAS::GetAdUnit(_Handle *param_1,char *param_2,Unit *param_3)

{
  uint uVar1;
  
                    /* 0x32b0  6  ?GetAdUnit@GAS@@YG_NPAU_Handle@1@PBDPAUUnit@1@@Z */
  if ((param_1 == (_Handle *)0x0) || (param_1[5] == (_Handle)0x0)) {
    return false;
  }
  uVar1 = FUN_10001390(param_2,(char *)param_3);
  return SUB41(uVar1,0);
}



/* ---- Pause @ 100032e0 size=51 ---- */

/* bool __stdcall GAS::Pause(struct GAS::_Handle *) */

bool GAS::Pause(_Handle *param_1)

{
  int iVar1;
  
                    /* 0x32e0  7  ?Pause@GAS@@YG_NPAU_Handle@1@@Z */
  if (param_1 == (_Handle *)0x0) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  param_1[4] = (_Handle)0x1;
  XSystem::Threading::ManualResetEvent::Reset((ManualResetEvent *)(iVar1 + 8));
  XSystem::Threading::ManualResetEvent::Reset((ManualResetEvent *)(*(int *)(iVar1 + 0x24) + 0xc));
  return true;
}



/* ---- Resume @ 10003320 size=51 ---- */

/* bool __stdcall GAS::Resume(struct GAS::_Handle *) */

bool GAS::Resume(_Handle *param_1)

{
  int iVar1;
  
                    /* 0x3320  9  ?Resume@GAS@@YG_NPAU_Handle@1@@Z */
  if (param_1 == (_Handle *)0x0) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  param_1[4] = (_Handle)0x0;
  XSystem::Threading::ManualResetEvent::Set((ManualResetEvent *)(iVar1 + 8));
  XSystem::Threading::ManualResetEvent::Set((ManualResetEvent *)(*(int *)(iVar1 + 0x24) + 0xc));
  return true;
}



/* ---- ReportImpression @ 10003360 size=38 ---- */

/* bool __stdcall GAS::ReportImpression(struct GAS::_Handle *,char const *,char const *,char const
   *) */

bool GAS::ReportImpression(_Handle *param_1,char *param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  
                    /* 0x3360  8  ?ReportImpression@GAS@@YG_NPAU_Handle@1@PBD11@Z */
  if (param_1 == (_Handle *)0x0) {
    return false;
  }
  uVar1 = FUN_10001560(param_2);
  return SUB41(uVar1,0);
}



/* ---- FUN_10003390 @ 10003390 size=41 ---- */

undefined4 * __fastcall FUN_10003390(undefined4 *param_1)

{
  byte unaff_retaddr;
  
  *param_1 = GAS::HTTPSocket::vftable;
  InternetCloseHandle(param_1[2]);
  if ((unaff_retaddr & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}



/* ---- FUN_100033c0 @ 100033c0 size=17 ---- */

void __fastcall FUN_100033c0(undefined4 *param_1)

{
  *param_1 = GAS::HTTPSocket::vftable;
  InternetCloseHandle(param_1[2]);
  return;
}



/* ---- FUN_100033e0 @ 100033e0 size=130 ---- */

undefined4 __fastcall FUN_100033e0(byte *param_1,byte *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  for (; 3 < in_EAX; in_EAX = in_EAX - 4) {
    if (*(int *)param_2 != *(int *)param_1) goto LAB_100033ff;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  if (in_EAX == 0) {
LAB_1000345d:
    uVar1 = 0;
  }
  else {
LAB_100033ff:
    iVar2 = (uint)*param_2 - (uint)*param_1;
    if (iVar2 == 0) {
      if (in_EAX == 1) goto LAB_1000345d;
      iVar2 = (uint)param_2[1] - (uint)param_1[1];
      if (iVar2 == 0) {
        if (in_EAX == 2) goto LAB_1000345d;
        iVar2 = (uint)param_2[2] - (uint)param_1[2];
        if (iVar2 == 0) {
          if ((in_EAX == 3) || (iVar2 = (uint)param_2[3] - (uint)param_1[3], iVar2 == 0))
          goto LAB_1000345d;
        }
      }
    }
    uVar1 = 1;
    if (iVar2 < 1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}



/* ---- FUN_10003470 @ 10003470 size=1 ---- */

void FUN_10003470(void)

{
  return;
}



/* ---- FUN_10003480 @ 10003480 size=107 ---- */

undefined4 * __thiscall FUN_10003480(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cb58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000e4f3(this);
  local_4 = 0;
  *(undefined ***)this = std::logic_error::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_10001670((void *)((int)this + 0xc),param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_100034f0 @ 100034f0 size=14 ---- */

int __fastcall FUN_100034f0(int param_1)

{
  if (*(uint *)(param_1 + 0x24) < 0x10) {
    return param_1 + 0x10;
  }
  return *(int *)(param_1 + 0x10);
}



/* ---- FUN_10003500 @ 10003500 size=71 ---- */

exception * __thiscall FUN_10003500(void *this,byte param_1)

{
  *(undefined ***)this = std::logic_error::vftable;
  if (0xf < *(uint *)((int)this + 0x24)) {
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10003550 @ 10003550 size=50 ---- */

void __fastcall FUN_10003550(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    _free(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x10] = (exception)0x0;
  exception::~exception(param_1);
  return;
}



/* ---- FUN_100035b0 @ 100035b0 size=113 ---- */

exception * __thiscall FUN_100035b0(void *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cb28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception(this,param_1);
  local_4 = 0;
  *(undefined ***)this = std::logic_error::vftable;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_10001670((void *)((int)this + 0xc),param_1 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_10003630 @ 10003630 size=289 ---- */

undefined4 * FUN_10003630(undefined4 *param_1)

{
  char *_Dst;
  int iVar1;
  _THandle *p_Var2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d38e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  local_4 = 0;
  *param_1 = GAS::ProtocolSocket::vftable;
  param_1[3] = 0;
  iVar1 = FUN_1000d760();
  param_1[5] = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  *(undefined4 *)param_1[5] = param_1[5];
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  param_1[6] = 0;
  local_4._0_1_ = 1;
  param_1[7] = 0;
  param_1[8] = 1000;
  _memset(param_1 + 0x211,0,0x800);
  _memset(param_1 + 0x411,0,0x800);
  _memset(param_1 + 0x611,0,0x800);
  _Dst = (char *)(param_1 + 10);
  _Dst[0] = '\0';
  _Dst[1] = '\0';
  _Dst[2] = '\0';
  _Dst[3] = '\0';
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  _strcpy_s(_Dst,0x14,"null");
  _memset(param_1 + 0x11,0,0x800);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_10003bf0((int)param_1);
  p_Var2 = XStream::CreateHandle();
  param_1[3] = p_Var2;
  puVar3 = (undefined4 *)FUN_1000e6c1(0x4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar3 == (undefined4 *)0x0) {
    param_1[7] = 0;
  }
  else {
    puVar3 = FUN_1000d8c0(puVar3);
    param_1[7] = puVar3;
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10003760 @ 10003760 size=30 ---- */

undefined4 * __thiscall FUN_10003760(void *this,byte param_1)

{
  FUN_10003790(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- thunk_FUN_10004330 @ 10003780 size=5 ---- */

void thunk_FUN_10004330(void)

{
  int in_EAX;
  int aiStack_10 [3];
  
  FUN_10004390(aiStack_10,in_EAX,(int *)**(int **)(in_EAX + 4),in_EAX,*(int **)(in_EAX + 4));
  _free(*(void **)(in_EAX + 4));
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  return;
}



/* ---- FUN_10003790 @ 10003790 size=139 ---- */

void __fastcall FUN_10003790(undefined4 *param_1)

{
  uint uVar1;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1001d7c3;
  local_c = ExceptionList;
  uVar1 = DAT_100241b0 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  *param_1 = GAS::ProtocolSocket::vftable;
  local_4 = 1;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1,uVar1);
  }
  if ((_THandle *)param_1[3] != (_THandle *)0x0) {
    XStream::Clear((_THandle *)param_1[3]);
    XStream::DestroyHandle((_THandle *)param_1[3]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_10004330();
  *param_1 = GAS::HTTPSocket::vftable;
  InternetCloseHandle(param_1[2]);
  ExceptionList = param_1;
  return;
}



/* ---- FUN_10003820 @ 10003820 size=188 ---- */

uint FUN_10003820(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint in_EAX;
  char *pcVar4;
  undefined3 uVar5;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  
  if (unaff_EDI == (undefined4 *)0x0) {
    return in_EAX & 0xffffff00;
  }
  pcVar2 = (char *)*unaff_EDI;
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    in_EAX = (int)pcVar4 - (int)(pcVar2 + 1);
    if (in_EAX < 0x800) {
      _sprintf_s((char *)(unaff_EBX + 0x44),0x800,"%s",pcVar2);
      iVar3 = unaff_EDI[3];
      if ((0 < iVar3) && (iVar3 < 0x96)) {
        *(int *)(unaff_EBX + 0x3c) = iVar3;
      }
      iVar3 = unaff_EDI[4];
      if ((0x100 < iVar3) && (iVar3 < 0x103)) {
        *(int *)(unaff_EBX + 0x40) = iVar3;
      }
      pcVar2 = (char *)unaff_EDI[2];
      if (pcVar2 != (char *)0x0) {
        pcVar4 = pcVar2;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if ((uint)((int)pcVar4 - (int)(pcVar2 + 1)) < 0x14) {
          _strcpy_s((char *)(unaff_EBX + 0x28),0x14,pcVar2);
        }
      }
      iVar3 = unaff_EDI[1];
      uVar5 = (undefined3)((uint)iVar3 >> 8);
      if ((iVar3 < 0) || (0xffff < iVar3)) {
        *(undefined4 *)(unaff_EBX + 0x24) = 0x50;
        return CONCAT31(uVar5,1);
      }
      *(int *)(unaff_EBX + 0x24) = iVar3;
      return CONCAT31(uVar5,1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* ---- FUN_100038e0 @ 100038e0 size=175 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100038e0(void)

{
  int unaff_ESI;
  uint in_stack_00000028;
  undefined1 local_1004 [4];
  undefined4 uStack_1000;
  char acStack_fea [2];
  char acStack_fe8 [4];
  undefined1 auStack_fd8 [2004];
  char local_804 [2048];
  uint local_4;
  
  local_4 = DAT_100241b0 ^ (uint)local_1004;
  _sprintf_s(local_804,0x800,"http://%s",(char *)(unaff_ESI + 0x44));
  _sprintf_s(acStack_fea + -10,0x800,"hgid=%s&sex=%d&age=%d",(char *)(unaff_ESI + 0x28),
             *(int *)(unaff_ESI + 0x40),*(int *)(unaff_ESI + 0x3c));
  acStack_fe8[0] = '\0';
  acStack_fe8[1] = '\0';
  acStack_fe8[2] = '\0';
  acStack_fe8[3] = '\0';
  InternetSetCookieA();
  uStack_1000 = 0x10003964;
  _sprintf_s(acStack_fe8,0x800,"/IGA00?svc=%s",*(char **)(unaff_ESI + 4));
  acStack_fe8[0] = 'y';
  acStack_fe8[1] = '9';
  acStack_fe8[2] = '\0';
  acStack_fe8[3] = '\x10';
  FUN_10003990(unaff_ESI,(char *)(unaff_ESI + 0x44),*(undefined4 *)(unaff_ESI + 0x24),auStack_fd8);
  __security_check_cookie(in_stack_00000028 ^ (uint)auStack_fd8);
  return;
}



/* ---- FUN_10003990 @ 10003990 size=308 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_10003990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack_1060;
  uint uStack_105c;
  undefined *puStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  undefined4 uStack_1028;
  undefined4 uStack_1024;
  undefined1 auStack_100c [4072];
  uint uStack_24;
  uint local_4;
  
  local_4 = DAT_100241b0 ^ (uint)auStack_100c;
  uStack_1024 = 0x100039c1;
  XStream::Clear(*(_THandle **)(param_1 + 0xc));
  uStack_103c = *(undefined4 *)(param_1 + 8);
  uStack_1024 = 0;
  uStack_1028 = 3;
  uStack_102c = 0;
  uStack_1030 = 0;
  uStack_1034 = param_3;
  uStack_1040 = 0x100039de;
  uStack_1038 = param_2;
  uVar2 = InternetConnectA();
  if (uVar2 != 0) {
    uStack_1040 = 0;
    uStack_1044 = 0x4000000;
    uStack_1048 = 0;
    uStack_104c = 0;
    uStack_1050 = 0;
    uStack_1054 = param_4;
    puStack_1058 = &DAT_1001fd50;
    uStack_1060 = 0x100039fe;
    uStack_105c = uVar2;
    iVar3 = HttpOpenRequestA();
    if (iVar3 == 0) {
      uStack_1060 = uVar2;
      InternetCloseHandle();
    }
    else {
      uStack_1060 = 0;
      iVar4 = HttpSendRequestA(iVar3,0,0,0);
      if (iVar4 == 0) {
        InternetCloseHandle(iVar3);
        InternetCloseHandle(uVar2);
      }
      while( true ) {
        iVar4 = InternetQueryDataAvailable(iVar3,&uStack_105c,0,0);
        if (iVar4 == 0) goto LAB_10003abb;
        if (uStack_105c == 0) break;
        if (0x1000 < uStack_105c) {
          uStack_105c = 0x1000;
        }
        iVar4 = InternetReadFile(iVar3,&puStack_1058,uStack_105c,&uStack_1060);
        if ((iVar4 == 0) ||
           (XStream::Write(*(_THandle **)(param_1 + 0xc),&puStack_1058,uStack_1060),
           uStack_1060 == 0)) break;
      }
      cVar1 = FUN_10003ad0();
      if (cVar1 == '\0') {
LAB_10003abb:
        InternetCloseHandle(iVar3);
        InternetCloseHandle(uVar2);
      }
      else {
        InternetCloseHandle(iVar3);
        InternetCloseHandle(uVar2);
      }
    }
  }
  uStack_1030 = 0x10003ab1;
  __security_check_cookie(uStack_24 ^ (uint)&uStack_102c);
  return;
}



/* ---- FUN_10003ad0 @ 10003ad0 size=227 ---- */

void FUN_10003ad0(void)

{
  bool bVar1;
  _XMemory *p_Var2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_ESI;
  char local_804 [2048];
  uint local_4;
  
  local_4 = DAT_100241b0 ^ (uint)local_804;
  p_Var2 = XStream::GetXMemory(*(_THandle **)(unaff_ESI + 0xc));
  bVar1 = FUN_1000d990(*(int *)(unaff_ESI + 0x1c),(int)p_Var2);
  if (bVar1) {
    uVar3 = FUN_1000daa0(local_804);
    if ((char)uVar3 != '\0') {
      iVar4 = FUN_10003dd0(extraout_ECX,local_804,unaff_ESI);
      if (iVar4 == 0) {
        uVar3 = FUN_10003bc0();
        if ((char)uVar3 != '\0') {
          FUN_1000d9f0("uinterval",(long *)(unaff_ESI + 0x20));
          FUN_1000db10();
          goto LAB_10003b9c;
        }
      }
      else {
        if (iVar4 != 1) {
          if (iVar4 == 4) {
            uVar3 = FUN_10003bc0();
            if ((char)uVar3 == '\0') goto LAB_10003b30;
          }
LAB_10003b9c:
          __security_check_cookie(local_4 ^ (uint)local_804);
          return;
        }
        uVar3 = FUN_10003bc0();
        if ((char)uVar3 != '\0') {
          FUN_1000dcb0();
          __security_check_cookie(local_4 ^ (uint)local_804);
          return;
        }
      }
    }
  }
LAB_10003b30:
  __security_check_cookie(local_4 ^ (uint)local_804);
  return;
}



/* ---- FUN_10003bc0 @ 10003bc0 size=41 ---- */

undefined4 FUN_10003bc0(void)

{
  undefined4 uVar1;
  uint3 uVar2;
  int local_4;
  
  uVar1 = FUN_1000d9f0(&DAT_1001fd78,&local_4);
  uVar2 = (uint3)((uint)uVar1 >> 8);
  if (((char)uVar1 == '\0') || (local_4 != 0)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}



/* ---- FUN_10003bf0 @ 10003bf0 size=474 ---- */

void __fastcall FUN_10003bf0(int param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  void *unaff_EBP;
  undefined1 auStackY_940 [128];
  undefined1 uVar4;
  uint uVar5;
  undefined1 auStack_894 [4];
  int local_890;
  undefined4 local_888;
  undefined1 auStack_884 [4];
  int iStack_880;
  undefined1 auStack_87c [4];
  void *local_878;
  undefined4 local_868;
  uint local_864;
  void *pvStack_860;
  undefined1 *puStack_85c;
  void *pvStack_854;
  uint uStack_840;
  undefined1 local_838 [12];
  undefined1 auStack_82c [4];
  void *local_828;
  undefined4 local_824;
  char local_820 [12];
  uint uStack_814;
  char acStack_810 [2036];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  puStack_10 = &LAB_1001d341;
  local_14 = ExceptionList;
  local_1c = DAT_100241b0 ^ (uint)auStack_894;
  ExceptionList = &local_14;
  local_824 = 0xf;
  local_828 = (void *)0x0;
  local_838[0] = 0;
  local_c = 0;
  FUN_1000be40(*(int **)(*(int *)(param_1 + 0x14) + 4));
  *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  local_890 = 0;
  do {
    pcVar2 = local_820;
    uVar5 = 0x800;
    _sprintf_s(pcVar2,0x800,"IGA0%d",local_890);
    uVar4 = SUB41(pcVar2,0);
    pcVar2 = acStack_810;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_10001750(auStack_82c,(undefined4 *)acStack_810,(int)pcVar2 - (int)(acStack_810 + 1));
    puStack_85c = auStackY_940 + 0x8c;
    pvVar3 = (void *)(uVar5 & 0xffffff00);
    FUN_10001670(auStackY_940 + 0x8c,auStack_82c,0,0xffffffff);
    pvVar3 = (void *)FUN_100048e0(uVar4,pvVar3);
    local_864 = 0xf;
    local_868 = 0;
    local_878 = (void *)((uint)local_878 & 0xffffff00);
    FUN_10001670(auStack_87c,pvVar3,0,0xffffffff);
    pvStack_860 = *(void **)((int)pvVar3 + 0x1c);
    FUN_10003ec0(pvStack_860,(undefined4 *)(param_1 + 0x10),(int *)local_838,auStack_87c);
    if (0xf < local_864) {
      _free(local_878);
    }
    local_864 = 0xf;
    local_868 = 0;
    local_878 = (void *)((uint)local_878 & 0xffffff00);
    if (0xf < uStack_840) {
      _free(pvStack_854);
    }
    iStack_880 = iStack_880 + 1;
  } while (iStack_880 < 6);
  if (0xf < uStack_814) {
    _free(local_828);
  }
  local_888 = 0x10003dc6;
  ExceptionList = unaff_EBP;
  __security_check_cookie(local_c ^ (uint)auStack_884);
  return;
}



/* ---- FUN_10003dd0 @ 10003dd0 size=230 ---- */

undefined4 __fastcall FUN_10003dd0(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1001cd38;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10001750(local_34,(undefined4 *)param_2,(int)pcVar3 - (int)(param_2 + 1));
  local_c = 0;
  FUN_10004030(&local_3c);
  if (0xf < local_1c) {
    _free(local_30);
  }
  iVar2 = *(int *)(param_3 + 0x14);
  if ((local_3c == 0) || (local_3c != param_3 + 0x10)) {
    FUN_1000e9c8();
  }
  if (local_38 == iVar2) {
    ExceptionList = local_14;
    return 6;
  }
  if (local_3c == 0) {
    FUN_1000e9c8();
  }
  if (local_38 == *(int *)(local_3c + 4)) {
    FUN_1000e9c8();
  }
  ExceptionList = local_14;
  return *(undefined4 *)(local_38 + 0x28);
}



/* ---- FUN_10003ec0 @ 10003ec0 size=362 ---- */

/* WARNING: Removing unreachable block (ram,0x10003f29) */

int * __thiscall FUN_10003ec0(void *this,undefined4 *param_1,int *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *this_00;
  bool local_18;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar10 = (undefined4 *)((undefined4 *)param_1[1])[1];
  local_18 = true;
  this_00 = (undefined4 *)param_1[1];
  if (*(char *)((int)puVar10 + 0x2d) == '\0') {
    uVar1 = *(uint *)((int)param_3 + 0x14);
    uVar2 = *(uint *)((int)param_3 + 0x18);
    do {
      uVar3 = puVar10[8];
      if ((uint)puVar10[9] < 0x10) {
        pbVar8 = (byte *)(puVar10 + 4);
      }
      else {
        pbVar8 = (byte *)puVar10[4];
      }
      pbVar9 = (byte *)((int)param_3 + 4);
      if (0xf < uVar2) {
        pbVar9 = *(byte **)pbVar9;
      }
      local_8 = puVar10;
      uVar6 = FUN_100033e0(pbVar8,pbVar9);
      if (uVar6 == 0) {
        if (uVar1 < uVar3) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar1 != uVar3);
        }
      }
      local_18 = (int)uVar6 < 0;
      if (local_18) {
        puVar10 = (undefined4 *)*puVar10;
      }
      else {
        puVar10 = (undefined4 *)puVar10[2];
      }
    } while (*(char *)((int)puVar10 + 0x2d) == '\0');
    this = extraout_ECX;
    this_00 = local_8;
  }
  local_8 = param_1;
  local_4 = this_00;
  if (local_18) {
    if (this_00 == *(undefined4 **)param_1[1]) {
      piVar7 = FUN_100040a0(this_00,(int)param_1,(int *)&local_8,'\x01',param_3);
      iVar4 = *piVar7;
      param_2[1] = piVar7[1];
      *param_2 = iVar4;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
    FUN_1000c810();
    this = extraout_ECX_00;
  }
  puVar10 = local_4;
  bVar5 = FUN_10004960(this,(int)(local_4 + 3));
  if (bVar5) {
    piVar7 = FUN_100040a0(this_00,(int)param_1,(int *)&local_8,local_18,param_3);
    iVar4 = piVar7[1];
    *param_2 = *piVar7;
    param_2[1] = iVar4;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  param_2[1] = (int)puVar10;
  *param_2 = (int)local_8;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



/* ---- FUN_10004030 @ 10004030 size=98 ---- */

undefined4 * FUN_10004030(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 local_c;
  
  puVar2 = FUN_1000c360(unaff_EBX);
  uVar3 = extraout_ECX;
  if (unaff_ESI == 0) {
    FUN_1000e9c8();
    uVar3 = extraout_ECX_00;
  }
  if (puVar2 != *(undefined4 **)(unaff_ESI + 4)) {
    bVar1 = FUN_10004960(uVar3,unaff_EBX);
    if (!bVar1) {
      puVar2 = (undefined4 *)((int)register0x00000010 + -0x10);
      goto LAB_1000407d;
    }
  }
  puVar2 = (undefined4 *)((int)register0x00000010 + -8);
LAB_1000407d:
  uVar3 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  return param_1;
}



/* ---- FUN_100040a0 @ 100040a0 size=641 ---- */

int * __thiscall FUN_100040a0(void *this,int param_1,int *param_2,char param_3,void *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d2f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < *(uint *)(param_1 + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  piVar3 = FUN_100044a0(*(undefined4 *)(param_1 + 4),this,*(undefined4 *)(param_1 + 4),param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (this == *(void **)(param_1 + 4)) {
    *(int **)((int)*(void **)(param_1 + 4) + 4) = piVar3;
    **(undefined4 **)(param_1 + 4) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    if (param_3 != '\0') {
      *(int **)this = piVar3;
      if (this == (void *)**(int **)(param_1 + 4)) {
        **(int **)(param_1 + 4) = (int)piVar3;
      }
      goto LAB_10004176;
    }
    *(int **)((int)this + 8) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
    if (this != *(void **)(iVar4 + 8)) goto LAB_10004176;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_10004176:
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2c) = 1;
      param_2[1] = (int)piVar3;
      *param_2 = param_1;
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
          if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
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
        if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
        goto LAB_100042e1;
      }
LAB_1000423f:
      *(undefined1 *)(piVar7 + 0xb) = 1;
      *(undefined1 *)(iVar4 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar6 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x2c) == '\0') goto LAB_1000423f;
      if (piVar6 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0x2d) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        piVar5 = piVar7 + 1;
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int *)(*(int *)(param_1 + 4) + 4) = iVar4;
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
      if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
        *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
LAB_100042e1:
      piVar5[1] = (int)piVar7;
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}



/* ---- FUN_10004330 @ 10004330 size=56 ---- */

void FUN_10004330(void)

{
  int in_EAX;
  int local_10 [3];
  
  FUN_10004390(local_10,in_EAX,(int *)**(int **)(in_EAX + 4),in_EAX,*(int **)(in_EAX + 4));
  _free(*(void **)(in_EAX + 4));
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  return;
}



/* ---- FUN_10004390 @ 10004390 size=265 ---- */

void FUN_10004390(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  undefined4 local_8 [2];
  
  piVar4 = (int *)**(int **)(unaff_EDI + 4);
  if ((param_2 == 0) || (param_2 != unaff_EDI)) {
    FUN_1000e9c8();
  }
  if (param_3 == piVar4) {
    piVar4 = *(int **)(unaff_EDI + 4);
    if ((param_4 == 0) || (param_4 != unaff_EDI)) {
      FUN_1000e9c8();
    }
    if (param_5 == piVar4) {
      FUN_1000be40(*(int **)(*(int *)(unaff_EDI + 4) + 4));
      *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
      *(undefined4 *)(unaff_EDI + 8) = 0;
      *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
      *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
      param_1[1] = **(int **)(unaff_EDI + 4);
      *param_1 = unaff_EDI;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_1000e9c8();
    }
    if (param_3 == param_5) break;
    if (param_2 == 0) {
      FUN_1000e9c8();
    }
    if (*(char *)((int)param_3 + 0x2d) == '\0') {
      piVar4 = (int *)param_3[2];
      if (*(char *)((int)piVar4 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar2 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x2d);
        piVar3 = (int *)param_3[1];
        piVar2 = param_3;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x2d);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
    }
    else {
      FUN_1000e9c8();
      piVar4 = param_3;
    }
    FUN_10004560(unaff_EDI,local_8,param_2,param_3);
    param_3 = piVar4;
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



/* ---- FUN_100044a0 @ 100044a0 size=155 ---- */

undefined4 * FUN_100044a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001cb05;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[9] = 0xf;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_10001670(puVar1 + 3,param_4,0,0xffffffff);
    puVar1[10] = *(undefined4 *)((int)param_4 + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@1000453b @ 1000453b size=21 ---- */

void Catch_All_1000453b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10004560 @ 10004560 size=783 ---- */

/* WARNING: Removing unreachable block (ram,0x10004682) */
/* WARNING: Removing unreachable block (ram,0x10004693) */
/* WARNING: Removing unreachable block (ram,0x1000469c) */
/* WARNING: Removing unreachable block (ram,0x1000469f) */
/* WARNING: Removing unreachable block (ram,0x1000468f) */
/* WARNING: Removing unreachable block (ram,0x100046ad) */
/* WARNING: Removing unreachable block (ram,0x100046be) */
/* WARNING: Removing unreachable block (ram,0x100046c9) */
/* WARNING: Removing unreachable block (ram,0x100046c5) */
/* WARNING: Removing unreachable block (ram,0x100046b9) */
/* WARNING: Removing unreachable block (ram,0x100046cc) */

void FUN_10004560(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d2c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x2d) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021a68);
  }
  FUN_10004870();
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
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_4) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if ((int *)**(int **)(param_1 + 4) == param_4) {
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
    **(int **)(param_1 + 4) = (int)piVar5;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      uVar4 = FUN_1000b5b0();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[0xb] == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[0xb] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000d2a0(piVar7,param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(*piVar6 + 0x2c) == '\x01') && (*(char *)(piVar6[2] + 0x2c) == '\x01'))
            goto LAB_100047b5;
            if (*(char *)(piVar6[2] + 0x2c) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              *(undefined1 *)(piVar6 + 0xb) = 0;
              FUN_1000c3f0(piVar6,param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar6[2] + 0x2c) = 1;
            FUN_1000d2a0(piVar7,param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000c3f0(piVar7,param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x2c) != '\x01') || (*(char *)(*piVar6 + 0x2c) != '\x01')) {
              if (*(char *)(*piVar6 + 0x2c) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x2c) = 1;
                *(undefined1 *)(piVar6 + 0xb) = 0;
                FUN_1000d2a0(piVar6,param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
              *(undefined1 *)(piVar7 + 0xb) = 1;
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              FUN_1000c3f0(piVar7,param_1);
              break;
            }
LAB_100047b5:
            *(undefined1 *)(piVar6 + 0xb) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 0xb) = 1;
  }
  if (0xf < (uint)param_4[9]) {
    _free((void *)param_4[4]);
  }
  param_4[9] = 0xf;
  param_4[8] = 0;
  *(undefined1 *)(param_4 + 4) = 0;
  _free(param_4);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10004870 @ 10004870 size=97 ---- */

void FUN_10004870(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_1000e9c8();
  }
  iVar2 = unaff_ESI[1];
  if (*(char *)(iVar2 + 0x2d) != '\0') {
    FUN_1000e9c8();
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



/* ---- FUN_100048e0 @ 100048e0 size=116 ---- */

void __cdecl FUN_100048e0(undefined1 param_1,void *param_2)

{
  void *unaff_ESI;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001cad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)((int)unaff_ESI + 4) = 0;
  FUN_10001670(unaff_ESI,&param_1,0,0xffffffff);
  *(undefined4 *)((int)unaff_ESI + 0x1c) = in_stack_00000020;
  if (0xf < in_stack_0000001c) {
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10004960 @ 10004960 size=91 ---- */

bool __fastcall FUN_10004960(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar1 = *(uint *)(in_EAX + 0x14);
  if (*(uint *)(in_EAX + 0x18) < 0x10) {
    pbVar4 = (byte *)(in_EAX + 4);
  }
  else {
    pbVar4 = *(byte **)(in_EAX + 4);
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    pbVar5 = (byte *)(param_2 + 4);
  }
  else {
    pbVar5 = *(byte **)(param_2 + 4);
  }
  uVar3 = FUN_100033e0(pbVar4,pbVar5);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return true;
    }
    uVar3 = (uint)(uVar2 != uVar1);
  }
  return (int)uVar3 < 0;
}



/* ---- FUN_100049c0 @ 100049c0 size=48 ---- */

undefined4 __thiscall FUN_100049c0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    *(int *)((int)this + 4) = param_1;
    iVar1 = InternetOpenA(param_1,0,0,0,0);
    *(int *)((int)this + 8) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



/* ---- FUN_100049f0 @ 100049f0 size=396 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_100049f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,LPCSTR param_4)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD DStack_8064;
  uint uStack_8060;
  undefined *puStack_805c;
  undefined4 uStack_8058;
  undefined4 uStack_8054;
  undefined4 uStack_8050;
  undefined4 uStack_804c;
  undefined4 uStack_8048;
  undefined4 uStack_8030;
  undefined4 uStack_802c;
  undefined4 uStack_8028;
  undefined4 uStack_8024;
  undefined1 auStack_8010 [32748];
  uint uStack_24;
  uint local_4;
  
  local_4 = DAT_100241b0 ^ (uint)auStack_8010;
  uStack_8024 = 0;
  uStack_8028 = 0;
  uStack_802c = 3;
  uStack_8030 = 0;
  DVar1 = InternetConnectA();
  if (DVar1 != 0) {
    uStack_8048 = 0x4000000;
    uStack_804c = 0;
    uStack_8050 = 0;
    uStack_8054 = 0;
    puStack_805c = &DAT_1001fd50;
    DStack_8064 = 0x10004a4d;
    uStack_8060 = DVar1;
    uStack_8058 = param_2;
    iVar2 = HttpOpenRequestA();
    if (iVar2 == 0) {
      DStack_8064 = DVar1;
      InternetCloseHandle();
    }
    else {
      DStack_8064 = 0;
      iVar3 = HttpSendRequestA(iVar2,0,0,0);
      if ((iVar3 == 0) ||
         (hFile = CreateFileA(param_4,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0),
         hFile == (HANDLE)0xffffffff)) {
        InternetCloseHandle(iVar2);
        InternetCloseHandle(DVar1);
      }
      else {
        do {
          uStack_8060 = 0;
          DStack_8064 = 0;
          iVar3 = InternetQueryDataAvailable(iVar2,&uStack_8060,0,0);
          if (iVar3 == 0) {
LAB_10004b65:
            InternetCloseHandle(iVar2);
            InternetCloseHandle(DVar1);
            uStack_8048 = 0x10004b78;
            CloseHandle(hFile);
            goto LAB_10004b4a;
          }
          if (uStack_8060 == 0) break;
          if (0x8000 < uStack_8060) {
            uStack_8060 = 0x8000;
          }
          iVar3 = InternetReadFile(iVar2,&uStack_8058,uStack_8060,&DStack_8064);
          if (iVar3 == 0) break;
          BVar4 = WriteFile(hFile,&uStack_8058,DStack_8064,(LPDWORD)&puStack_805c,(LPOVERLAPPED)0x0)
          ;
          if ((BVar4 == 0) && (DVar5 = GetLastError(), DVar5 != 0x3e5)) goto LAB_10004b65;
        } while (DStack_8064 != 0);
        InternetCloseHandle(iVar2);
        InternetCloseHandle(DVar1);
        uStack_8048 = 0x10004b40;
        CloseHandle(hFile);
      }
    }
  }
LAB_10004b4a:
  __security_check_cookie(uStack_24 ^ (uint)&uStack_8030);
  return;
}



/* ---- FUN_10004b80 @ 10004b80 size=17 ---- */

void FUN_10004b80(void)

{
  undefined4 *in_EAX;
  
  if ((undefined4 *)*in_EAX != &DAT_10026420) {
    _free((undefined4 *)*in_EAX);
  }
  return;
}



/* ---- FUN_10004ba0 @ 10004ba0 size=78 ---- */

void FUN_10004ba0(void)

{
  size_t *psVar1;
  size_t _Size;
  int *in_EAX;
  int *unaff_EBX;
  uint uVar2;
  
  psVar1 = (size_t *)*in_EAX;
  _Size = *psVar1;
  uVar2 = *(int *)*unaff_EBX + _Size;
  if ((uint)((int *)*unaff_EBX)[1] < uVar2) {
    FUN_10004bf0(unaff_EBX);
  }
  _memmove((void *)(*(int *)*unaff_EBX + 8 + *unaff_EBX),psVar1 + 2,_Size);
  *(uint *)*unaff_EBX = uVar2;
  *(undefined1 *)(*unaff_EBX + 8 + uVar2) = 0;
  return;
}



/* ---- FUN_10004bf0 @ 10004bf0 size=178 ---- */

void FUN_10004bf0(int *param_1)

{
  int iVar1;
  undefined4 *_Memory;
  int *piVar2;
  uint unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((uint)((int *)*param_1)[1] < unaff_EDI) {
    piVar2 = &DAT_10026420;
    local_4 = 0;
    iVar1 = *(int *)*param_1;
    if (unaff_EDI != 0) {
      piVar2 = (int *)FUN_1000e6c1(unaff_EDI + 0xf & 0xfffffffc);
      *piVar2 = iVar1;
      *(undefined1 *)(iVar1 + 8 + (int)piVar2) = 0;
      piVar2[1] = unaff_EDI;
    }
    _memcpy(piVar2 + 2,(size_t *)*param_1 + 2,*(size_t *)*param_1);
    _Memory = (undefined4 *)*param_1;
    *param_1 = (int)piVar2;
    if (_Memory != &DAT_10026420) {
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10004cb0 @ 10004cb0 size=213 ---- */

void FUN_10004cb0(void)

{
  uint uVar1;
  undefined4 *_Memory;
  void *unaff_EBX;
  uint *puVar2;
  uint unaff_ESI;
  int *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = *(uint *)(*unaff_EDI + 4);
  if ((unaff_ESI <= uVar1) && (uVar1 <= unaff_ESI * 3 + 0x18)) {
    _memmove((void *)(*unaff_EDI + 8),unaff_EBX,unaff_ESI);
    *(uint *)*unaff_EDI = unaff_ESI;
    *(undefined1 *)(*unaff_EDI + 8 + unaff_ESI) = 0;
    ExceptionList = local_c;
    return;
  }
  puVar2 = &DAT_10026420;
  local_4 = 0;
  if (unaff_ESI != 0) {
    puVar2 = (uint *)FUN_1000e6c1(unaff_ESI + 0xf & 0xfffffffc);
    *puVar2 = unaff_ESI;
    *(undefined1 *)(unaff_ESI + 8 + (int)puVar2) = 0;
    puVar2[1] = unaff_ESI;
  }
  _memcpy(puVar2 + 2,unaff_EBX,unaff_ESI);
  _Memory = (undefined4 *)*unaff_EDI;
  *unaff_EDI = (int)puVar2;
  if (_Memory != &DAT_10026420) {
    _free(_Memory);
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10004d90 @ 10004d90 size=71 ---- */

void FUN_10004d90(void *param_1,size_t param_2)

{
  int *unaff_EBX;
  uint uVar1;
  
  uVar1 = *(int *)*unaff_EBX + param_2;
  if ((uint)((int *)*unaff_EBX)[1] < uVar1) {
    FUN_10004bf0(unaff_EBX);
  }
  _memmove((void *)(*(int *)*unaff_EBX + 8 + *unaff_EBX),param_1,param_2);
  *(uint *)*unaff_EBX = uVar1;
  *(undefined1 *)(*unaff_EBX + 8 + uVar1) = 0;
  return;
}



/* ---- FUN_10004de0 @ 10004de0 size=113 ---- */

void FUN_10004de0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int *unaff_ESI;
  
  *unaff_ESI = 0;
  pcVar2 = "</";
  do {
    pcVar1 = pcVar2;
    pcVar2 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  pcVar2 = pcVar1 + -0x100202bc;
  if (pcVar2 == (char *)0x0) {
    *unaff_ESI = (int)&DAT_10026420;
  }
  else {
    puVar3 = (undefined4 *)FUN_1000e6c1((uint)(pcVar1 + -0x100202ad) & 0xfffffffc);
    *unaff_ESI = (int)puVar3;
    *puVar3 = pcVar2;
    pcVar2[*unaff_ESI + 8] = '\0';
    *(char **)(*unaff_ESI + 4) = pcVar2;
  }
  _memcpy((size_t *)*unaff_ESI + 2,&DAT_100202bc,*(size_t *)*unaff_ESI);
  return;
}



/* ---- FUN_10004e60 @ 10004e60 size=36 ---- */

void FUN_10004e60(void)

{
  char cVar1;
  char *in_EAX;
  
  do {
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  return;
}



/* ---- FUN_10004e90 @ 10004e90 size=87 ---- */

void FUN_10004e90(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int *unaff_EBX;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = *(int *)*unaff_EBX + ((int)pcVar2 - (int)(param_1 + 1));
  if ((uint)((int *)*unaff_EBX)[1] < uVar3) {
    FUN_10004bf0(unaff_EBX);
  }
  _memmove((void *)(*(int *)*unaff_EBX + 8 + *unaff_EBX),param_1,(int)pcVar2 - (int)(param_1 + 1));
  *(uint *)*unaff_EBX = uVar3;
  *(undefined1 *)(*unaff_EBX + 8 + uVar3) = 0;
  return;
}



/* ---- FUN_10004ef0 @ 10004ef0 size=67 ---- */

void FUN_10004ef0(undefined1 param_1)

{
  int *unaff_EBX;
  uint uVar1;
  
  uVar1 = *(int *)*unaff_EBX + 1;
  if ((uint)((int *)*unaff_EBX)[1] < uVar1) {
    FUN_10004bf0(unaff_EBX);
  }
  _memmove((void *)(*(int *)*unaff_EBX + 8 + *unaff_EBX),&param_1,1);
  *(uint *)*unaff_EBX = uVar1;
  *(undefined1 *)(*unaff_EBX + 8 + uVar1) = 0;
  return;
}



/* ---- FUN_10004f40 @ 10004f40 size=7 ---- */

void __fastcall FUN_10004f40(undefined4 *param_1)

{
  *param_1 = TiXmlBase::vftable;
  return;
}



/* ---- FUN_10004f50 @ 10004f50 size=31 ---- */

undefined4 * __thiscall FUN_10004f50(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlBase::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10004f70 @ 10004f70 size=41 ---- */

undefined4 FUN_10004f70(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (in_EAX == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*in_EAX + 0x10))();
    if (iVar1 != 0) break;
    in_EAX = (int *)in_EAX[4];
  }
                    /* WARNING: Could not recover jumptable at 0x10004f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*in_EAX + 0x10))();
  return uVar2;
}



/* ---- FUN_10004fa0 @ 10004fa0 size=3 ---- */

undefined4 FUN_10004fa0(void)

{
  return 0;
}



/* ---- FUN_10004fb0 @ 10004fb0 size=181 ---- */

undefined4 * __thiscall FUN_10004fb0(void *this,undefined4 *param_1,char *param_2)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001caae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = TiXmlAttribute::vftable;
  param_1[5] = &DAT_10026420;
  param_1[6] = &DAT_10026420;
  local_4 = 2;
  do {
    cVar1 = *(char *)this;
    this = (void *)((int)this + 1);
  } while (cVar1 != '\0');
  FUN_10004cb0();
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10005070 @ 10005070 size=39 ---- */

void FUN_10005070(void)

{
  char cVar1;
  char *in_EAX;
  
  do {
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  return;
}



/* ---- FUN_100050a0 @ 100050a0 size=16 ---- */

void __thiscall FUN_100050a0(void *this,FILE *param_1)

{
  FUN_10006130(param_1,(int)this,0);
  return;
}



/* ---- FUN_100050b0 @ 100050b0 size=69 ---- */

undefined4 * __thiscall FUN_100050b0(void *this,byte param_1)

{
  if (*(undefined4 **)((int)this + 0x18) != &DAT_10026420) {
    _free(*(undefined4 **)((int)this + 0x18));
  }
  if (*(undefined4 **)((int)this + 0x14) != &DAT_10026420) {
    _free(*(undefined4 **)((int)this + 0x14));
  }
  *(undefined ***)this = TiXmlBase::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10005100 @ 10005100 size=45 ---- */

void FUN_10005100(void)

{
  undefined4 *unaff_ESI;
  
  if ((undefined4 *)unaff_ESI[6] != &DAT_10026420) {
    _free((undefined4 *)unaff_ESI[6]);
  }
  if ((undefined4 *)unaff_ESI[5] != &DAT_10026420) {
    _free((undefined4 *)unaff_ESI[5]);
  }
  *unaff_ESI = TiXmlBase::vftable;
  return;
}



/* ---- FUN_10005130 @ 10005130 size=50 ---- */

void FUN_10005130(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0xffffffff;
  in_EAX[1] = 0xffffffff;
  in_EAX[3] = 0;
  in_EAX[8] = &DAT_10026420;
  in_EAX[4] = 0;
  in_EAX[5] = 2;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  *in_EAX = TiXmlComment::vftable;
  return;
}



/* ---- FUN_10005170 @ 10005170 size=36 ---- */

undefined4 * __thiscall FUN_10005170(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlComment::vftable;
  FUN_100056f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_100051a0 @ 100051a0 size=155 ---- */

undefined4 * FUN_100051a0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001cd08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  param_1[8] = &DAT_10026420;
  param_1[4] = 0;
  param_1[5] = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  pcVar2 = "";
  local_4 = 0;
  *param_1 = TiXmlText::vftable;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  *(undefined1 *)(param_1 + 0xb) = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10005240 @ 10005240 size=36 ---- */

undefined4 * __thiscall FUN_10005240(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlText::vftable;
  FUN_100056f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10005270 @ 10005270 size=60 ---- */

void FUN_10005270(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0xffffffff;
  in_EAX[1] = 0xffffffff;
  in_EAX[3] = 0;
  in_EAX[8] = &DAT_10026420;
  in_EAX[4] = 0;
  in_EAX[5] = 5;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  *in_EAX = TiXmlDeclaration::vftable;
  in_EAX[0xb] = &DAT_10026420;
  in_EAX[0xc] = &DAT_10026420;
  in_EAX[0xd] = &DAT_10026420;
  return;
}



/* ---- FUN_100052b0 @ 100052b0 size=22 ---- */

void __thiscall FUN_100052b0(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x44))(param_1,param_2,0);
  return;
}



/* ---- FUN_100052d0 @ 100052d0 size=3 ---- */

undefined4 __fastcall FUN_100052d0(undefined4 param_1)

{
  return param_1;
}



/* ---- FUN_100052e0 @ 100052e0 size=95 ---- */

undefined4 * __thiscall FUN_100052e0(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlDeclaration::vftable;
  if (*(undefined4 **)((int)this + 0x34) != &DAT_10026420) {
    _free(*(undefined4 **)((int)this + 0x34));
  }
  if (*(undefined4 **)((int)this + 0x30) != &DAT_10026420) {
    _free(*(undefined4 **)((int)this + 0x30));
  }
  if (*(undefined4 **)((int)this + 0x2c) != &DAT_10026420) {
    _free(*(undefined4 **)((int)this + 0x2c));
  }
  FUN_100056f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10005340 @ 10005340 size=50 ---- */

void FUN_10005340(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0xffffffff;
  in_EAX[1] = 0xffffffff;
  in_EAX[3] = 0;
  in_EAX[8] = &DAT_10026420;
  in_EAX[4] = 0;
  in_EAX[5] = 3;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  *in_EAX = TiXmlUnknown::vftable;
  return;
}



/* ---- FUN_10005380 @ 10005380 size=36 ---- */

undefined4 * __thiscall FUN_10005380(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlUnknown::vftable;
  FUN_100056f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_100053b0 @ 100053b0 size=36 ---- */

void __fastcall FUN_100053b0(undefined4 *param_1)

{
  *param_1 = TiXmlDocument::vftable;
  if ((undefined4 *)param_1[0xd] != &DAT_10026420) {
    _free((undefined4 *)param_1[0xd]);
  }
  FUN_100056f0(param_1);
  return;
}



/* ---- FUN_100053e0 @ 100053e0 size=57 ---- */

undefined4 * __thiscall FUN_100053e0(void *this,byte param_1)

{
  *(undefined ***)this = TiXmlDocument::vftable;
  if (*(undefined4 **)((int)this + 0x34) != &DAT_10026420) {
    _free(*(undefined4 **)((int)this + 0x34));
  }
  FUN_100056f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10005420 @ 10005420 size=681 ---- */

void __cdecl FUN_10005420(int *param_1)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int *unaff_ESI;
  byte *local_34;
  undefined *local_30;
  int *local_2c;
  byte local_28;
  undefined3 uStack_27;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_100241b0 ^ (uint)&local_34;
  piVar4 = (int *)*param_1;
  iVar5 = *piVar4;
  iVar9 = 0;
  local_2c = param_1;
  if (0 < iVar5) {
    do {
      local_34 = (byte *)((int)piVar4 + iVar9 + 8);
      bVar1 = *local_34;
      _local_28 = CONCAT31(uStack_27,bVar1);
      if (bVar1 == 0x26) {
        if (((iVar5 + -2 <= iVar9) || (*(char *)((int)piVar4 + iVar9 + 9) != '#')) ||
           (*(char *)((int)piVar4 + iVar9 + 10) != 'x')) {
          pbVar7 = DAT_1002540c + *(int *)*unaff_ESI;
          local_34 = DAT_1002540c;
          local_30 = PTR_s__amp__10025408;
          if ((byte *)((int *)*unaff_ESI)[1] < pbVar7) {
            FUN_10004bf0(unaff_ESI);
          }
          _memmove((void *)(*(int *)*unaff_ESI + 8 + *unaff_ESI),local_30,(size_t)local_34);
          *(byte **)*unaff_ESI = pbVar7;
          pbVar7[*unaff_ESI + 8] = 0;
          goto LAB_100056ab;
        }
        iVar10 = iVar9;
        if (iVar9 < iVar5 + -1) {
          do {
            uVar6 = *(int *)*unaff_ESI + 1;
            if ((uint)((int *)*unaff_ESI)[1] < uVar6) {
              FUN_10004bf0(unaff_ESI);
            }
            _memmove((void *)(*(int *)*unaff_ESI + 8 + *unaff_ESI),local_34,1);
            *(uint *)*unaff_ESI = uVar6;
            *(undefined1 *)(*unaff_ESI + 8 + uVar6) = 0;
            iVar9 = iVar10 + 1;
            local_34 = (byte *)(*local_2c + iVar10 + 9);
          } while ((*local_34 != 0x3b) && (iVar10 = iVar9, iVar9 < *(int *)*local_2c + -1));
        }
      }
      else {
        if (bVar1 == 0x3c) {
          puVar8 = DAT_10025418 + *(int *)*unaff_ESI;
          local_30 = DAT_10025418;
          local_34 = PTR_DAT_10025414;
          if ((undefined *)((int *)*unaff_ESI)[1] < puVar8) {
            FUN_10004bf0(unaff_ESI);
          }
          _memmove((void *)(*(int *)*unaff_ESI + 8 + *unaff_ESI),local_34,(size_t)local_30);
          *(undefined **)*unaff_ESI = puVar8;
          puVar8[*unaff_ESI + 8] = 0;
        }
        else if (bVar1 == 0x3e) {
          puVar8 = DAT_10025424 + *(int *)*unaff_ESI;
          local_30 = DAT_10025424;
          local_34 = PTR_DAT_10025420;
          if ((undefined *)((int *)*unaff_ESI)[1] < puVar8) {
            FUN_10004bf0(unaff_ESI);
          }
          _memmove((void *)(*(int *)*unaff_ESI + 8 + *unaff_ESI),local_34,(size_t)local_30);
          *(undefined **)*unaff_ESI = puVar8;
          puVar8[*unaff_ESI + 8] = 0;
        }
        else if (bVar1 == 0x22) {
          puVar8 = DAT_10025430 + *(int *)*unaff_ESI;
          local_30 = DAT_10025430;
          local_34 = PTR_s__quot__1002542c;
          if ((undefined *)((int *)*unaff_ESI)[1] < puVar8) {
            FUN_10004bf0(unaff_ESI);
          }
          _memmove((void *)(*(int *)*unaff_ESI + 8 + *unaff_ESI),local_34,(size_t)local_30);
          *(undefined **)*unaff_ESI = puVar8;
          puVar8[*unaff_ESI + 8] = 0;
        }
        else if (bVar1 == 0x27) {
          FUN_10004d90(PTR_s__apos__10025438,DAT_1002543c);
        }
        else if (bVar1 < 0x20) {
          FUN_100068b0(local_24,"&#x%02X;",bVar1);
          pcVar3 = local_24;
          do {
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          FUN_10004d90(local_24,(int)pcVar3 - (int)(local_24 + 1));
        }
        else {
          FUN_10004ef0(bVar1);
        }
LAB_100056ab:
        iVar9 = iVar9 + 1;
      }
      piVar4 = (int *)*local_2c;
      iVar5 = *piVar4;
    } while (iVar9 < iVar5);
  }
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}



/* ---- FUN_100056d0 @ 100056d0 size=30 ---- */

undefined4 * __thiscall FUN_100056d0(void *this,byte param_1)

{
  FUN_100056f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_100056f0 @ 100056f0 size=124 ---- */

void __fastcall FUN_100056f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_1001c7c3;
  uVar3 = DAT_100241b0 ^ (uint)(auStack_e + -10);
  ExceptionList = &local_c;
  *param_1 = TiXmlNode::vftable;
  local_4 = 1;
  puVar1 = (undefined4 *)param_1[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[10];
    (*(code *)*puVar2)(1,uVar3);
  }
  if ((undefined4 *)param_1[8] != &DAT_10026420) {
    _free((undefined4 *)param_1[8]);
  }
  *param_1 = TiXmlBase::vftable;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10005770 @ 10005770 size=218 ---- */

undefined4 * __fastcall FUN_10005770(int *param_1)

{
  char cVar1;
  undefined4 *in_EAX;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  if (in_EAX[5] != 0) {
    in_EAX[4] = param_1;
    in_EAX[9] = param_1[7];
    in_EAX[10] = 0;
    if (param_1[7] == 0) {
      param_1[6] = (int)in_EAX;
      param_1[7] = (int)in_EAX;
      return in_EAX;
    }
    *(undefined4 **)(param_1[7] + 0x28) = in_EAX;
    param_1[7] = (int)in_EAX;
    return in_EAX;
  }
  (**(code **)*in_EAX)(1);
  piVar5 = param_1;
  if (param_1 != (int *)0x0) {
    while (iVar2 = (**(code **)(*piVar5 + 0x10))(), iVar2 == 0) {
      piVar5 = (int *)piVar5[4];
      if (piVar5 == (int *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    iVar2 = (**(code **)(*piVar5 + 0x10))();
    if (iVar2 != 0) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x10))();
        if (iVar2 != 0) {
          iVar4 = (**(code **)(*param_1 + 0x10))();
          break;
        }
        param_1 = (int *)param_1[4];
      } while (param_1 != (int *)0x0);
      if (*(char *)(iVar4 + 0x2c) == '\0') {
        *(undefined1 *)(iVar4 + 0x2c) = 1;
        *(undefined4 *)(iVar4 + 0x30) = 0x10;
        pcVar3 = PTR_s_Error_when_TiXmlDocument_added_t_10025488;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_10004cb0();
        *(undefined4 *)(iVar4 + 0x40) = 0xffffffff;
        *(undefined4 *)(iVar4 + 0x3c) = 0xffffffff;
      }
    }
  }
  return (undefined4 *)0x0;
}



/* ---- FUN_10005850 @ 10005850 size=76 ---- */

int FUN_10005850(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_ESI;
  bool bVar6;
  
  if (in_EAX == 0) {
    return 0;
  }
  iVar2 = *(int *)(in_EAX + 0x18);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar3 = (byte *)(*(int *)(iVar2 + 0x20) + 8);
    pbVar5 = unaff_ESI;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_10005888:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_1000588d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_10005888;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1000588d:
    if (iVar4 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 0x28);
  } while( true );
}



/* ---- FUN_100058a0 @ 100058a0 size=186 ---- */

undefined4 * __thiscall FUN_100058a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001ca73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  param_1[8] = &DAT_10026420;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = param_1 + 0xb;
  *param_1 = TiXmlElement::vftable;
  param_1[0xd] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xe] = 0;
  *puVar1 = TiXmlAttribute::vftable;
  param_1[0x10] = &DAT_10026420;
  param_1[0x11] = &DAT_10026420;
  param_1[0xf] = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  local_4 = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  do {
    cVar2 = *(char *)this;
    this = (void *)((int)this + 1);
  } while (cVar2 != '\0');
  FUN_10004cb0();
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10005960 @ 10005960 size=30 ---- */

undefined4 * __thiscall FUN_10005960(void *this,byte param_1)

{
  FUN_10005980(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_10005980 @ 10005980 size=138 ---- */

void __fastcall FUN_10005980(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c883;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = TiXmlElement::vftable;
  local_4 = 1;
  FUN_10005a10();
  if ((undefined4 *)param_1[0x11] != &DAT_10026420) {
    _free((undefined4 *)param_1[0x11]);
  }
  if ((undefined4 *)param_1[0x10] != &DAT_10026420) {
    _free((undefined4 *)param_1[0x10]);
  }
  param_1[0xb] = TiXmlBase::vftable;
  local_4 = 0xffffffff;
  FUN_100056f0(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10005a10 @ 10005a10 size=135 ---- */

void FUN_10005a10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x18);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[10];
    (*(code *)*puVar2)(1);
  }
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  puVar1 = (undefined4 *)(in_EAX + 0x2c);
  do {
    puVar2 = *(undefined4 **)(in_EAX + 0x4c);
    if ((puVar2 == puVar1) || (puVar2 == (undefined4 *)0x0)) {
      return;
    }
    puVar3 = (undefined4 *)(-(uint)(puVar2 != puVar1) & (uint)puVar2);
    for (; puVar2 != puVar1; puVar2 = (undefined4 *)puVar2[8]) {
      if (puVar2 == puVar3) {
        *(undefined4 *)(puVar2[7] + 0x20) = puVar2[8];
        *(undefined4 *)(puVar2[8] + 0x1c) = puVar2[7];
        puVar2[8] = 0;
        puVar2[7] = 0;
        break;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  } while( true );
}



/* ---- FUN_10005aa0 @ 10005aa0 size=284 ---- */

void __fastcall FUN_10005aa0(char *param_1,void *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 auStackY_a8 [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ccdb;
  local_c = ExceptionList;
  uVar2 = DAT_100241b0 ^ (uint)(auStackY_a8 + 0x8c);
  ExceptionList = &local_c;
  iVar3 = FUN_10006860();
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)FUN_1000e6c1(0x24);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_10004fb0(param_2,puVar4,param_1);
    }
    local_4 = 0xffffffff;
    if (puVar4 == (undefined4 *)0x0) {
      for (; param_3 != (int *)0x0; param_3 = (int *)param_3[4]) {
        iVar3 = (**(code **)(*param_3 + 0x10))(uVar2);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*param_3 + 0x10))();
          if (iVar3 == 0) {
            ExceptionList = local_c;
            return;
          }
          if (*(char *)(iVar3 + 0x2c) != '\0') {
            ExceptionList = local_c;
            return;
          }
          *(undefined1 *)(iVar3 + 0x2c) = 1;
          *(undefined4 *)(iVar3 + 0x30) = 3;
          pcVar5 = PTR_s_Memory_allocation_failed__10025454;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_10004cb0();
          *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
          ExceptionList = local_c;
          return;
        }
      }
    }
    else {
      puVar4[8] = param_3 + 0xb;
      puVar4[7] = param_3[0x12];
      *(undefined4 **)(param_3[0x12] + 0x20) = puVar4;
      param_3[0x12] = (int)puVar4;
    }
  }
  else {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    FUN_10004cb0();
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10005bc0 @ 10005bc0 size=356 ---- */

void __thiscall FUN_10005bc0(void *this,FILE *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000014;
  
  if (0 < param_2) {
    iVar1 = param_2;
    do {
      _fprintf(param_1,"    ");
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  _fprintf(param_1,"<%s",(char *)(*(int *)((int)this + 0x20) + 8));
  piVar2 = *(int **)((int)this + 0x4c);
  if (piVar2 != (int *)((int)this + 0x2c)) {
    do {
      if (piVar2 == (int *)0x0) break;
      _fprintf(param_1," ");
      (**(code **)(*piVar2 + 4))(param_1,param_2);
      piVar2 = (int *)piVar2[8];
    } while ((*(int *)piVar2[6] != 0) || (*(int *)piVar2[5] != 0));
  }
  piVar2 = *(int **)((int)this + 0x18);
  if (piVar2 == (int *)0x0) {
    _fprintf(param_1," />");
    return;
  }
  if ((piVar2 == *(int **)((int)this + 0x1c)) &&
     (iVar1 = (**(code **)(*piVar2 + 0x2c))(), iVar1 != 0)) {
    _fprintf(param_1,">");
    (**(code **)(**(int **)((int)this + 0x18) + 4))(param_1,param_2 + 1);
    iVar1 = *(int *)((int)this + 0x20);
  }
  else {
    _fprintf(param_1,">");
    piVar2 = *(int **)((int)this + 0x18);
    if (piVar2 != (int *)0x0) {
      do {
        iVar1 = (**(code **)(*piVar2 + 0x2c))();
        if (iVar1 == 0) {
          _fprintf(param_1,"\n");
        }
        (**(code **)(*piVar2 + 4))(param_1,param_2 + 1);
        piVar2 = (int *)piVar2[10];
      } while (piVar2 != (int *)0x0);
      param_2 = in_stack_00000014;
    }
    _fprintf(param_1,"\n");
    if (0 < param_2) {
      do {
        _fprintf(param_1,"    ");
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    iVar1 = *(int *)((int)this + 0x20);
  }
  _fprintf(param_1,"</%s>",(char *)(iVar1 + 8));
  return;
}



/* ---- FUN_10005d30 @ 10005d30 size=146 ---- */

void FUN_10005d30(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(*(int *)(param_1 + 0x20) + 8);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  param_2[3] = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 != param_1 + 0x2c) {
    do {
      if (iVar2 == 0) break;
      FUN_10005aa0((char *)(*(int *)(iVar2 + 0x18) + 8),(void *)(*(int *)(iVar2 + 0x14) + 8),param_2
                  );
      iVar2 = *(int *)(iVar2 + 0x20);
    } while ((**(int **)(iVar2 + 0x18) != 0) || (**(int **)(iVar2 + 0x14) != 0));
  }
  for (piVar3 = *(int **)(param_1 + 0x18); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
    (**(code **)(*piVar3 + 0x3c))();
    FUN_10005770(param_2);
  }
  return;
}



/* ---- FUN_10005dd0 @ 10005dd0 size=85 ---- */

void __thiscall FUN_10005dd0(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 4))
                    (this,-(uint)(*(uint *)((int)this + 0x4c) != (int)this + 0x2cU) &
                          *(uint *)((int)this + 0x4c));
  if (cVar2 != '\0') {
    piVar1 = *(int **)((int)this + 0x18);
    while ((piVar1 != (int *)0x0 && (cVar2 = (**(code **)(*piVar1 + 0x40))(param_1), cVar2 != '\0'))
          ) {
      piVar1 = (int *)piVar1[10];
    }
  }
  (**(code **)(*param_1 + 0xc))(this);
  return;
}



/* ---- FUN_10005e30 @ 10005e30 size=140 ---- */

int * __fastcall FUN_10005e30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d78b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x50);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_100058a0((void *)(*(int *)(param_1 + 0x20) + 8),puVar1);
  }
  local_4 = 0xffffffff;
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  FUN_10005d30(param_1,piVar2);
  ExceptionList = local_c;
  return piVar2;
}



/* ---- FUN_10005ec0 @ 10005ec0 size=170 ---- */

undefined4 * FUN_10005ec0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001ccb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  param_1[8] = &DAT_10026420;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = TiXmlDocument::vftable;
  param_1[0xd] = &DAT_10026420;
  local_4 = 1;
  param_1[0x10] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0xe] = 4;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  FUN_10004cb0();
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10005f70 @ 10005f70 size=147 ---- */

void FUN_10005f70(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(*(int *)(param_1 + 0x20) + 8);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  param_2[3] = *(int *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_1 + 0x2c);
  param_2[0xc] = *(int *)(param_1 + 0x30);
  FUN_10004cb0();
  param_2[0xe] = *(int *)(param_1 + 0x38);
  param_2[0xf] = *(int *)(param_1 + 0x3c);
  param_2[0x10] = *(int *)(param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x44);
  for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[10]) {
    (**(code **)(*piVar2 + 0x3c))();
    FUN_10005770(param_2);
  }
  return;
}



/* ---- FUN_10006010 @ 10006010 size=134 ---- */

int * __fastcall FUN_10006010(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d75b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x48);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_10005ec0(puVar1);
  }
  local_4 = 0xffffffff;
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  FUN_10005f70(param_1,piVar2);
  ExceptionList = local_c;
  return piVar2;
}



/* ---- FUN_100060a0 @ 100060a0 size=56 ---- */

void __thiscall FUN_100060a0(void *this,FILE *param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)((int)this + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
    (**(code **)(*piVar1 + 4))(param_1,param_2);
    _fprintf(param_1,"\n");
  }
  return;
}



/* ---- FUN_100060e0 @ 100060e0 size=69 ---- */

void __thiscall FUN_100060e0(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 8))(this);
  if (cVar2 != '\0') {
    piVar1 = *(int **)((int)this + 0x18);
    while ((piVar1 != (int *)0x0 && (cVar2 = (**(code **)(*piVar1 + 0x40))(param_1), cVar2 != '\0'))
          ) {
      piVar1 = (int *)piVar1[10];
    }
  }
  (**(code **)(*param_1 + 0x10))(this);
  return;
}



/* ---- FUN_10006130 @ 10006130 size=355 ---- */

/* WARNING: Removing unreachable block (ram,0x10006263) */
/* WARNING: Removing unreachable block (ram,0x10006274) */

void __fastcall FUN_10006130(FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d2a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_10005420((int *)(param_2 + 0x14));
  FUN_10005420((int *)(param_2 + 0x18));
  piVar2 = *(int **)(param_2 + 0x18);
  if (*piVar2 != 0) {
    piVar3 = piVar2 + 2;
    cVar1 = (char)piVar2[2];
    while (cVar1 != '\0') {
      if (cVar1 == '\"') {
        if ((int)piVar3 - (int)piVar2 != 7) {
          if (param_1 != (FILE *)0x0) {
            _fprintf(param_1,"%s=\'%s\'",&DAT_10026428,&DAT_10026428);
          }
          if (param_3 == 0) goto LAB_1000625b;
          FUN_10004ba0();
          FUN_10004e90("=\'");
          FUN_10004ba0();
          pcVar4 = "\'";
          goto LAB_10006254;
        }
        break;
      }
      pcVar4 = (char *)((int)piVar3 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
      cVar1 = *pcVar4;
    }
  }
  if (param_1 != (FILE *)0x0) {
    _fprintf(param_1,"%s=\"%s\"",&DAT_10026428,&DAT_10026428);
  }
  if (param_3 != 0) {
    FUN_10004ba0();
    FUN_10004e90("=\"");
    FUN_10004ba0();
    pcVar4 = "\"";
LAB_10006254:
    FUN_10004e90(pcVar4);
  }
LAB_1000625b:
  ExceptionList = &DAT_10026420;
  return;
}



/* ---- FUN_100062a0 @ 100062a0 size=63 ---- */

void __thiscall FUN_100062a0(void *this,FILE *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      _fprintf(param_1,"    ");
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  _fprintf(param_1,"<!--%s-->",(char *)(*(int *)((int)this + 0x20) + 8));
  return;
}



/* ---- FUN_100062e0 @ 100062e0 size=17 ---- */

void FUN_100062e0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100062ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* ---- FUN_10006300 @ 10006300 size=135 ---- */

undefined4 * __fastcall FUN_10006300(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = (undefined4 *)FUN_1000e6c1(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[2] = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[3] = 0;
  puVar2[8] = &DAT_10026420;
  puVar2[4] = 0;
  puVar2[5] = 2;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *puVar2 = TiXmlComment::vftable;
  pcVar3 = (char *)(*(int *)(param_1 + 0x20) + 8);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  return puVar2;
}



/* ---- FUN_10006390 @ 10006390 size=223 ---- */

/* WARNING: Removing unreachable block (ram,0x10006451) */

void __thiscall FUN_10006390(void *this,FILE *param_1,int param_2)

{
  uint uVar1;
  void *unaff_retaddr;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d268;
  local_c = ExceptionList;
  uVar1 = DAT_100241b0 ^ (int)register0x00000010 - 0x18U;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x2c) == '\0') {
    local_4 = 0;
    FUN_10005420((int *)((int)this + 0x20));
    _fprintf(param_1,"%s",&DAT_10026428);
    ExceptionList = unaff_retaddr;
    return;
  }
  _fprintf(param_1,"\n",uVar1);
  if (0 < param_2) {
    do {
      _fprintf(param_1,"    ",uVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  _fprintf(param_1,"<![CDATA[%s]]>\n",(char *)(*(int *)((int)this + 0x20) + 8));
  ExceptionList = unaff_retaddr;
  return;
}



/* ---- FUN_10006470 @ 10006470 size=17 ---- */

void FUN_10006470(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000647f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}



/* ---- FUN_10006490 @ 10006490 size=187 ---- */

undefined4 * __fastcall FUN_10006490(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d72b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_1000e6c1(0x30);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_100051a0(puVar2);
  }
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  pcVar3 = (char *)(*(int *)(param_1 + 0x20) + 8);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(param_1 + 0x2c);
  ExceptionList = local_c;
  return puVar2;
}



/* ---- FUN_10006550 @ 10006550 size=277 ---- */

void __thiscall FUN_10006550(void *this,FILE *param_1,undefined4 param_2,int param_3)

{
  if (param_1 != (FILE *)0x0) {
    _fprintf(param_1,"<?xml ");
  }
  if (param_3 != 0) {
    FUN_10004e90("<?xml ");
  }
  if (**(int **)((int)this + 0x2c) != 0) {
    if (param_1 != (FILE *)0x0) {
      _fprintf(param_1,"version=\"%s\" ",(char *)(*(int **)((int)this + 0x2c) + 2));
    }
    if (param_3 != 0) {
      FUN_10004e90("version=\"");
      FUN_10004ba0();
      FUN_10004e90("\" ");
    }
  }
  if (**(int **)((int)this + 0x30) != 0) {
    if (param_1 != (FILE *)0x0) {
      _fprintf(param_1,"encoding=\"%s\" ",(char *)(*(int **)((int)this + 0x30) + 2));
    }
    if (param_3 != 0) {
      FUN_10004e90("encoding=\"");
      FUN_10004ba0();
      FUN_10004e90("\" ");
    }
  }
  if (**(int **)((int)this + 0x34) != 0) {
    if (param_1 != (FILE *)0x0) {
      _fprintf(param_1,"standalone=\"%s\" ",(char *)(*(int **)((int)this + 0x34) + 2));
    }
    if (param_3 != 0) {
      FUN_10004e90("standalone=\"");
      FUN_10004ba0();
      FUN_10004e90("\" ");
    }
  }
  if (param_1 != (FILE *)0x0) {
    _fprintf(param_1,"?>");
  }
  if (param_3 != 0) {
    FUN_10004e90("?>");
  }
  return;
}



/* ---- FUN_10006670 @ 10006670 size=117 ---- */

void FUN_10006670(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(int *)(param_1 + 0x20) + 8);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_10004cb0();
  FUN_10004cb0();
  FUN_10004cb0();
  return;
}



/* ---- FUN_100066f0 @ 100066f0 size=17 ---- */

void FUN_100066f0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100066ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* ---- FUN_10006710 @ 10006710 size=96 ---- */

undefined4 * __fastcall FUN_10006710(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1000e6c1(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1[2] = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[3] = 0;
  puVar1[8] = &DAT_10026420;
  puVar1[4] = 0;
  puVar1[5] = 5;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *puVar1 = TiXmlDeclaration::vftable;
  puVar1[0xb] = &DAT_10026420;
  puVar1[0xc] = &DAT_10026420;
  puVar1[0xd] = &DAT_10026420;
  FUN_10006670(param_1,(int)puVar1);
  return puVar1;
}



/* ---- FUN_10006770 @ 10006770 size=63 ---- */

void __thiscall FUN_10006770(void *this,FILE *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      _fprintf(param_1,"    ");
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  _fprintf(param_1,"<%s>",(char *)(*(int *)((int)this + 0x20) + 8));
  return;
}



/* ---- FUN_100067b0 @ 100067b0 size=17 ---- */

void FUN_100067b0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100067bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}



/* ---- FUN_100067d0 @ 100067d0 size=135 ---- */

undefined4 * __fastcall FUN_100067d0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = (undefined4 *)FUN_1000e6c1(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[2] = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[3] = 0;
  puVar2[8] = &DAT_10026420;
  puVar2[4] = 0;
  puVar2[5] = 3;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *puVar2 = TiXmlUnknown::vftable;
  pcVar3 = (char *)(*(int *)(param_1 + 0x20) + 8);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10004cb0();
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  return puVar2;
}



/* ---- FUN_10006860 @ 10006860 size=68 ---- */

int FUN_10006860(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_ESI;
  int unaff_EDI;
  bool bVar6;
  
  iVar2 = *(int *)(unaff_EDI + 0x20);
  do {
    if (iVar2 == unaff_EDI) {
      return 0;
    }
    pbVar3 = (byte *)(*(int *)(iVar2 + 0x14) + 8);
    pbVar5 = unaff_ESI;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_10006890:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10006895;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_10006890;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10006895:
    if (iVar4 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 0x20);
  } while( true );
}



/* ---- FUN_100068b0 @ 100068b0 size=26 ---- */

void __cdecl FUN_100068b0(char *param_1,char *param_2,char param_3)

{
  size_t in_EAX;
  
  __vsnprintf_s(param_1,in_EAX,in_EAX,param_2,&param_3);
  return;
}



/* ---- FUN_100068d0 @ 100068d0 size=33 ---- */

undefined4 FUN_100068d0(void)

{
  int iVar1;
  byte unaff_BL;
  
  iVar1 = _isspace((uint)unaff_BL);
  if (((iVar1 == 0) && (unaff_BL != 10)) && (unaff_BL != 0xd)) {
    return 0;
  }
  return 1;
}



/* ---- FUN_10006900 @ 10006900 size=118 ---- */

byte * __thiscall FUN_10006900(void *this,int *param_1)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  int iVar3;
  byte *unaff_EDI;
  
  if (in_EAX == 1) {
    bVar1 = *unaff_EDI;
    iVar3 = *(int *)(&DAT_1001fdd0 + (uint)bVar1 * 4);
    *param_1 = iVar3;
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        return (byte *)0x0;
      }
      iVar3 = 0;
      if (bVar1 != 0) {
        pbVar2 = unaff_EDI;
        do {
          if (*param_1 <= iVar3) break;
          pbVar2[(int)this - (int)unaff_EDI] = *pbVar2;
          pbVar2 = pbVar2 + 1;
          iVar3 = iVar3 + 1;
        } while (*pbVar2 != 0);
      }
      return unaff_EDI + *param_1;
    }
  }
  else {
    *param_1 = 1;
  }
  if (*unaff_EDI == 0x26) {
    pbVar2 = (byte *)FUN_10006de0((char *)unaff_EDI,this,param_1,in_EAX);
    return pbVar2;
  }
  *(byte *)this = *unaff_EDI;
  return unaff_EDI + 1;
}



/* ---- FUN_10006980 @ 10006980 size=200 ---- */

void __fastcall FUN_10006980(int param_1,int *param_2)

{
  int iVar1;
  uint in_EAX;
  byte *pbVar2;
  byte local_1c [4];
  byte local_18 [24];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0xc0;
  local_18[5] = 0;
  local_18[6] = 0;
  local_18[7] = 0;
  local_18[8] = 0xe0;
  local_18[9] = 0;
  local_18[10] = 0;
  local_18[0xb] = 0;
  local_18[0xc] = 0xf0;
  local_18[0xd] = 0;
  local_18[0xe] = 0;
  local_18[0xf] = 0;
  if (in_EAX < 0x80) {
    *param_2 = 1;
  }
  else if (in_EAX < 0x800) {
    *param_2 = 2;
  }
  else if (in_EAX < 0x10000) {
    *param_2 = 3;
  }
  else {
    if (0x1fffff < in_EAX) {
      *param_2 = 0;
      return;
    }
    *param_2 = 4;
  }
  iVar1 = *param_2;
  pbVar2 = (byte *)(param_1 + iVar1);
  switch(iVar1) {
  case 4:
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)in_EAX & 0x3f | 0x80;
    in_EAX = in_EAX >> 6;
  case 3:
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)in_EAX & 0x3f | 0x80;
    in_EAX = in_EAX >> 6;
  case 2:
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)in_EAX & 0x3f | 0x80;
    in_EAX = in_EAX >> 6;
  case 1:
    pbVar2[-1] = local_1c[iVar1 * 4] | (byte)in_EAX;
    return;
  default:
    return;
  }
}



/* ---- FUN_10006a60 @ 10006a60 size=23 ---- */

int FUN_10006a60(void)

{
  byte in_AL;
  int iVar1;
  
  if (in_AL < 0x7f) {
    iVar1 = _isalpha((uint)in_AL);
    return iVar1;
  }
  return 1;
}



/* ---- FUN_10006a80 @ 10006a80 size=250 ---- */

void FUN_10006a80(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int *unaff_EDI;
  
  iVar3 = unaff_EDI[3];
  if (0 < iVar3) {
    iVar5 = unaff_EDI[1];
    iVar8 = *unaff_EDI;
    pbVar6 = (byte *)unaff_EDI[2];
joined_r0x10006a9b:
    pbVar4 = pbVar6;
    if (pbVar4 < param_1) {
      switch((uint)*pbVar4) {
      case 0:
        goto switchD_10006ab7_caseD_0;
      default:
        if (param_2 == 1) {
          iVar7 = *(int *)(&DAT_1001fdd0 + (uint)*pbVar4 * 4);
          if (iVar7 == 0) {
            iVar7 = 1;
          }
          pbVar6 = pbVar4 + iVar7;
        }
        else {
LAB_10006b5c:
          pbVar6 = pbVar4 + 1;
        }
        goto LAB_10006b5f;
      case 9:
        iVar5 = (iVar5 / iVar3 + 1) * iVar3;
        pbVar6 = pbVar4 + 1;
        goto joined_r0x10006a9b;
      case 10:
        iVar8 = iVar8 + 1;
        iVar5 = 0;
        pbVar6 = pbVar4 + 1;
        if (pbVar4[1] == 0xd) {
          pbVar6 = pbVar4 + 2;
        }
        goto joined_r0x10006a9b;
      case 0xd:
        iVar8 = iVar8 + 1;
        iVar5 = 0;
        pbVar6 = pbVar4 + 1;
        if (pbVar4[1] == 10) {
          pbVar6 = pbVar4 + 2;
        }
        goto joined_r0x10006a9b;
      case 0xef:
        goto switchD_10006ab7_caseD_ef;
      }
    }
    *unaff_EDI = iVar8;
    unaff_EDI[1] = iVar5;
    unaff_EDI[2] = (int)pbVar4;
switchD_10006ab7_caseD_0:
  }
  return;
switchD_10006ab7_caseD_ef:
  if (param_2 != 1) goto LAB_10006b5c;
  bVar1 = pbVar4[1];
  pbVar6 = pbVar4;
  if ((bVar1 != 0) && (bVar2 = pbVar4[2], bVar2 != 0)) {
    if ((bVar1 == 0xbb) && (bVar2 == 0xbf)) {
      pbVar6 = pbVar4 + 3;
      goto joined_r0x10006a9b;
    }
    if (bVar1 == 0xbf) {
      if (bVar2 == 0xbe) {
        pbVar6 = pbVar4 + 3;
        goto joined_r0x10006a9b;
      }
      if (bVar2 == 0xbf) {
        pbVar6 = pbVar4 + 3;
        goto joined_r0x10006a9b;
      }
    }
    pbVar6 = pbVar4 + 3;
LAB_10006b5f:
    iVar5 = iVar5 + 1;
  }
  goto joined_r0x10006a9b;
}



/* ---- FUN_10006c90 @ 10006c90 size=186 ---- */

byte * __cdecl FUN_10006c90(int param_1)

{
  byte *in_EAX;
  int iVar1;
  byte bVar2;
  
  if ((in_EAX == (byte *)0x0) || (bVar2 = *in_EAX, bVar2 == 0)) {
    return (byte *)0x0;
  }
  if (param_1 == 1) {
    do {
      if (bVar2 == 0xef) {
        if ((in_EAX[1] == 0xbb) && (in_EAX[2] == 0xbf)) {
          in_EAX = in_EAX + 3;
        }
        else {
          if (in_EAX[1] != 0xbf) goto LAB_10006ce4;
          if (in_EAX[2] == 0xbe) {
            in_EAX = in_EAX + 3;
          }
          else {
            if (in_EAX[2] != 0xbf) goto LAB_10006ce4;
            in_EAX = in_EAX + 3;
          }
        }
      }
      else {
LAB_10006ce4:
        iVar1 = _isspace((uint)bVar2);
        if ((((iVar1 == 0) && (bVar2 != 10)) && (bVar2 != 0xd)) &&
           ((*in_EAX != 10 && (*in_EAX != 0xd)))) {
          return in_EAX;
        }
        in_EAX = in_EAX + 1;
      }
      bVar2 = *in_EAX;
    } while (bVar2 != 0);
  }
  else {
    for (; ((bVar2 = *in_EAX, bVar2 != 0 &&
            (((iVar1 = _isspace((uint)bVar2), iVar1 != 0 || (bVar2 == 10)) || (bVar2 == 0xd)))) ||
           ((*in_EAX == 10 || (*in_EAX == 0xd)))); in_EAX = in_EAX + 1) {
    }
  }
  return in_EAX;
}



/* ---- FUN_10006d50 @ 10006d50 size=142 ---- */

byte * __cdecl FUN_10006d50(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  FUN_10004cb0();
  if (((param_1 == (byte *)0x0) || (bVar1 = *param_1, bVar1 == 0)) ||
     ((pbVar3 = param_1, bVar1 < 0x7f &&
      ((iVar2 = _isalpha((uint)bVar1), iVar2 == 0 && (*param_1 != 0x5f)))))) {
    return (byte *)0x0;
  }
  do {
    bVar1 = *pbVar3;
    if ((bVar1 == 0) ||
       (((((bVar1 < 0x7f && (iVar2 = _isalnum((uint)bVar1), iVar2 == 0)) &&
          (bVar1 = *pbVar3, bVar1 != 0x5f)) && ((bVar1 != 0x2d && (bVar1 != 0x2e)))) &&
        (bVar1 != 0x3a)))) break;
    pbVar3 = pbVar3 + 1;
  } while (pbVar3 != (byte *)0x0);
  if (0 < (int)pbVar3 - (int)param_1) {
    FUN_10004cb0();
  }
  return pbVar3;
}



/* ---- FUN_10006de0 @ 10006de0 size=445 ---- */

char * __cdecl FUN_10006de0(char *param_1,char *param_2,int *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined **ppuVar6;
  int iVar7;
  
  *param_3 = 0;
  cVar5 = param_1[1];
  if ((cVar5 != '\0') && (cVar5 == '#')) {
    if (param_1[2] != '\0') {
      cVar4 = '\0';
      cVar5 = '\x01';
      if (param_1[2] == 'x') {
        if (((param_1[3] != '\0') && (pcVar1 = _strchr(param_1 + 3,0x3b), pcVar1 != (char *)0x0)) &&
           (*pcVar1 != '\0')) {
          iVar7 = (int)pcVar1 - (int)param_1;
          cVar3 = pcVar1[-1];
          while (cVar3 != 'x') {
            if ((cVar3 < '0') || ('9' < cVar3)) {
              if ((cVar3 < 'a') || ('f' < cVar3)) {
                if (cVar3 < 'A') {
                  return (char *)0x0;
                }
                if ('F' < cVar3) {
                  return (char *)0x0;
                }
                cVar3 = cVar3 + -0x37;
              }
              else {
                cVar3 = cVar3 + -0x57;
              }
            }
            else {
              cVar3 = cVar3 + -0x30;
            }
            cVar4 = cVar4 + cVar3 * cVar5;
            cVar5 = cVar5 << 4;
            cVar3 = pcVar1[-2];
            pcVar1 = pcVar1 + -1;
          }
LAB_10006efd:
          if (param_4 == 1) {
            FUN_10006980((int)param_2,param_3);
            return param_1 + iVar7 + 1;
          }
          *param_2 = cVar4;
          *param_3 = 1;
          return param_1 + iVar7 + 1;
        }
      }
      else {
        pcVar1 = _strchr(param_1 + 2,0x3b);
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          iVar7 = (int)pcVar1 - (int)param_1;
          cVar3 = pcVar1[-1];
          while (cVar3 != '#') {
            if (cVar3 < '0') {
              return (char *)0x0;
            }
            if ('9' < cVar3) {
              return (char *)0x0;
            }
            cVar4 = cVar4 + (cVar3 + -0x30) * cVar5;
            cVar5 = cVar5 * '\n';
            cVar3 = pcVar1[-2];
            pcVar1 = pcVar1 + -1;
          }
          goto LAB_10006efd;
        }
      }
      return (char *)0x0;
    }
  }
  iVar7 = 0;
  ppuVar6 = &PTR_s__amp__10025408;
  do {
    iVar2 = _strncmp(*ppuVar6,param_1,(size_t)ppuVar6[1]);
    if (iVar2 == 0) {
      *param_2 = (&DAT_10025410)[iVar7 * 0xc];
      iVar7 = (&DAT_1002540c)[iVar7 * 3];
      *param_3 = 1;
      return param_1 + iVar7;
    }
    ppuVar6 = ppuVar6 + 3;
    iVar7 = iVar7 + 1;
  } while ((int)ppuVar6 < 0x10025444);
  *param_2 = *param_1;
  return param_1 + 1;
}



/* ---- FUN_10006fa0 @ 10006fa0 size=150 ---- */

undefined4 __thiscall FUN_10006fa0(void *this,char param_1,int param_2)

{
  char cVar1;
  char *in_EAX;
  char *_C;
  char *pcVar2;
  
  if ((this == (void *)0x0) || (*(char *)this == '\0')) {
    return (uint)in_EAX & 0xffffff00;
  }
  pcVar2 = in_EAX;
  if (param_1 == '\0') {
    do {
      cVar1 = *pcVar2;
      in_EAX = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
      if (cVar1 == '\0') goto LAB_1000700b;
      if (*(char *)this != cVar1) break;
      this = (void *)((int)this + 1);
      pcVar2 = pcVar2 + 1;
    } while (*(char *)this != '\0');
  }
  else {
    do {
      if (*pcVar2 == '\0') goto LAB_1000700b;
      _C = (char *)(int)*(char *)this;
      if ((param_2 != 1) || ((int)_C < 0x80)) {
        _C = (char *)_tolower((int)_C);
      }
      in_EAX = (char *)(int)*pcVar2;
      if ((param_2 != 1) || ((int)in_EAX < 0x80)) {
        in_EAX = (char *)_tolower((int)in_EAX);
      }
      if (_C != in_EAX) break;
      this = (void *)((int)this + 1);
      pcVar2 = pcVar2 + 1;
    } while (*(char *)this != '\0');
  }
  if (*pcVar2 != '\0') {
    return (uint)in_EAX & 0xffffff00;
  }
LAB_1000700b:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



/* ---- FUN_10007040 @ 10007040 size=465 ---- */

byte * __cdecl FUN_10007040(byte *param_1,int *param_2,uint param_3,char *param_4,int param_5)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  byte *this;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  size_t local_4;
  
  this = param_1;
  FUN_10004cb0();
  iVar5 = param_5;
  if ((char)param_3 == '\0') {
    if (this == (byte *)0x0) {
      return (byte *)0x0;
    }
    while ((*this != 0 && (uVar8 = FUN_10006fa0(this,'\0',param_5), (char)uVar8 == '\0'))) {
      param_3 = uVar8 & 0xff;
      this = FUN_10006900(&param_3,(int *)&param_1);
      piVar4 = param_2;
      pbVar9 = param_1 + *(int *)*param_2;
      if ((byte *)((int *)*param_2)[1] < pbVar9) {
        FUN_10004bf0(param_2);
      }
      _memmove((void *)(*(int *)*piVar4 + 8 + *piVar4),&param_3,(size_t)param_1);
      *(byte **)*piVar4 = pbVar9;
      pbVar9[*piVar4 + 8] = 0;
      if (this == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  }
  else {
    param_3 = param_3 & 0xffffff00;
    this = FUN_10006c90(param_5);
    if (this == (byte *)0x0) {
      return (byte *)0x0;
    }
    while ((*this != 0 && (uVar6 = FUN_10006fa0(this,'\0',iVar5), (char)uVar6 == '\0'))) {
      bVar2 = *this;
      if (((bVar2 == 0xd) ||
          (((bVar2 == 10 || (iVar7 = _isspace((uint)bVar2), iVar7 != 0)) || (bVar2 == 10)))) ||
         (bVar2 == 0xd)) {
        this = this + 1;
        param_3 = CONCAT31(param_3._1_3_,1);
      }
      else {
        if ((char)param_3 != '\0') {
          FUN_10004ef0(0x20);
          param_3 = param_3 & 0xffffff00;
        }
        param_1 = (byte *)0x0;
        this = FUN_10006900(&param_1,(int *)&local_4);
        if (local_4 == 1) {
          FUN_10004ef0((char)param_1);
        }
        else {
          FUN_10004d90(&param_1,local_4);
        }
      }
      if (this == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  }
  pcVar1 = param_4 + 1;
  do {
    cVar3 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar3 != '\0');
  return this + ((int)param_4 - (int)pcVar1);
}



/* ---- FUN_10007220 @ 10007220 size=670 ---- */

byte * __thiscall FUN_10007220(void *this,char *param_1,int *param_2,void *param_3)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  undefined4 local_c;
  
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_10004cb0();
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    if (*(char *)((int)this + 0x2c) != '\0') {
      return (byte *)0x0;
    }
    *(undefined1 *)((int)this + 0x2c) = 1;
    *(undefined4 *)((int)this + 0x30) = 0xd;
    pcVar3 = PTR_s_Error_document_empty__1002547c;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else {
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      *(int *)((int)this + 4) = *param_2;
      *(int *)((int)this + 8) = param_2[1];
    }
    local_c = *(undefined4 *)((int)this + 0x38);
    local_18 = *(undefined4 *)((int)this + 4);
    local_14 = *(undefined4 *)((int)this + 8);
    local_10 = param_1;
    *(undefined4 *)((int)this + 4) = local_18;
    *(undefined4 *)((int)this + 8) = local_14;
    if (((((param_3 == (void *)0x0) && (*param_1 != '\0')) && (*param_1 == -0x11)) &&
        ((param_1[1] != '\0' && (param_1[1] == -0x45)))) &&
       ((param_1[2] != '\0' && (param_1[2] == -0x41)))) {
      param_3 = (void *)0x1;
      *(undefined1 *)((int)this + 0x44) = 1;
    }
    pbVar2 = FUN_10006c90((int)param_3);
    if (pbVar2 == (byte *)0x0) {
      if (*(char *)((int)this + 0x2c) != '\0') {
        return (byte *)0x0;
      }
      *(undefined1 *)((int)this + 0x2c) = 1;
      *(undefined4 *)((int)this + 0x30) = 0xd;
      pcVar3 = PTR_s_Error_document_empty__1002547c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    else {
      do {
        if ((*pbVar2 == 0) || (piVar4 = FUN_10007530(param_3,this), piVar4 == (int *)0x0)) break;
        (**(code **)(*piVar4 + 8))(pbVar2,&local_18,param_3);
        FUN_10005770(this);
        if ((param_3 == (void *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x34))(), iVar5 != 0)) {
          iVar5 = (**(code **)(*piVar4 + 0x34))();
          iVar5 = *(int *)(iVar5 + 0x30);
          if (*(char *)(iVar5 + 8) == '\0') {
            param_3 = (void *)0x1;
          }
          else {
            pcVar3 = "UTF-8";
            do {
              if (*pcVar3 == '\0') goto LAB_100073cf;
              iVar6 = _tolower((int)pcVar3[iVar5 + -0x10020710]);
              iVar7 = _tolower((int)*pcVar3);
            } while ((iVar6 == iVar7) && (pcVar3 = pcVar3 + 1, pcVar3[iVar5 + -0x10020710] != '\0'))
            ;
            if (*pcVar3 == '\0') {
LAB_100073cf:
              param_3 = (void *)0x1;
            }
            else {
              pcVar3 = "UTF8";
              if (*(char *)(iVar5 + 8) != '\0') {
                do {
                  if (*pcVar3 == '\0') goto LAB_10007415;
                  iVar6 = _tolower((int)pcVar3[iVar5 + -0x10020718]);
                  iVar7 = _tolower((int)*pcVar3);
                } while ((iVar6 == iVar7) &&
                        (pcVar3 = pcVar3 + 1, pcVar3[iVar5 + -0x10020718] != '\0'));
                if (*pcVar3 == '\0') {
LAB_10007415:
                  param_3 = (void *)0x1;
                  goto LAB_10007421;
                }
              }
              param_3 = (void *)0x2;
            }
          }
        }
LAB_10007421:
        pbVar2 = FUN_10006c90((int)param_3);
      } while (pbVar2 != (byte *)0x0);
      if (*(int *)((int)this + 0x18) != 0) {
        return pbVar2;
      }
      if (*(char *)((int)this + 0x2c) != '\0') {
        return (byte *)0x0;
      }
      *(undefined1 *)((int)this + 0x2c) = 1;
      *(undefined4 *)((int)this + 0x30) = 0xd;
      pcVar3 = PTR_s_Error_document_empty__1002547c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
  }
  FUN_10004cb0();
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  return (byte *)0x0;
}



/* ---- FUN_100074c0 @ 100074c0 size=108 ---- */

void FUN_100074c0(int param_1,byte *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(int *)(param_1 + 0x30) = in_EAX;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    pcVar2 = (&PTR_s_No_error_10025448)[in_EAX];
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_10004cb0();
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    if ((param_2 != (byte *)0x0) && (param_3 != (undefined4 *)0x0)) {
      FUN_10006a80(param_2,param_4);
      *(undefined4 *)(param_1 + 0x3c) = *param_3;
      *(undefined4 *)(param_1 + 0x40) = param_3[1];
    }
  }
  return;
}



/* ---- FUN_10007530 @ 10007530 size=608 ---- */

undefined4 * __thiscall FUN_10007530(void *this,undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  int iStack00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d236;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pbVar3 = FUN_10006c90((int)this);
  if (((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) || (*pbVar3 != 0x3c)) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iStack00000008 = FUN_10004f70();
  pbVar3 = FUN_10006c90((int)this);
  if (pbVar3 == (byte *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  if (*pbVar3 == 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  uVar4 = FUN_10006fa0(pbVar3,'\x01',(int)this);
  if ((char)uVar4 == '\0') {
    bVar1 = *pbVar3;
    pbVar7 = &DAT_100202d0;
    if (bVar1 != 0) {
      do {
        if (*pbVar7 == 0) goto LAB_10007609;
      } while (((pbVar3 + -0x100202d0)[(int)pbVar7] == *pbVar7) &&
              (pbVar7 = pbVar7 + 1, (pbVar3 + -0x100202d0)[(int)pbVar7] != 0));
      if (*pbVar7 == 0) {
LAB_10007609:
        iVar5 = FUN_1000e6c1(0x2c);
        if (iVar5 != 0) {
          puVar6 = (undefined4 *)FUN_10005130();
          goto LAB_10007715;
        }
        goto LAB_100075d9;
      }
    }
    pbVar7 = &DAT_100202c0;
    if (bVar1 != 0) {
      do {
        if (*pbVar7 == 0) goto LAB_10007649;
      } while (((pbVar3 + -0x100202c0)[(int)pbVar7] == *pbVar7) &&
              (pbVar7 = pbVar7 + 1, (pbVar3 + -0x100202c0)[(int)pbVar7] != 0));
      if (*pbVar7 == 0) {
LAB_10007649:
        puVar6 = (undefined4 *)FUN_1000e6c1(0x30);
        local_4 = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
          local_4 = 0xffffffff;
          uRam0000002c = 1;
        }
        else {
          puVar6 = FUN_100051a0(puVar6);
          local_4 = 0xffffffff;
          *(undefined1 *)(puVar6 + 0xb) = 1;
        }
        goto LAB_10007715;
      }
    }
    pbVar7 = &DAT_10020730;
    if (bVar1 == 0) {
LAB_100076d2:
      iVar5 = FUN_10006a60();
      if ((iVar5 != 0) || (pbVar3[1] == 0x5f)) {
        puVar6 = (undefined4 *)FUN_1000e6c1(0x50);
        local_4 = 1;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_100058a0(&DAT_100201d4,puVar6);
        }
        local_4 = 0xffffffff;
        goto LAB_10007715;
      }
    }
    else {
      do {
        if (*pbVar7 == 0) goto LAB_100076b9;
      } while (((pbVar3 + -0x10020730)[(int)pbVar7] == *pbVar7) &&
              (pbVar7 = pbVar7 + 1, (pbVar3 + -0x10020730)[(int)pbVar7] != 0));
      if (*pbVar7 != 0) goto LAB_100076d2;
    }
LAB_100076b9:
    iVar5 = FUN_1000e6c1(0x2c);
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)FUN_10005340();
      goto LAB_10007715;
    }
  }
  else {
    iVar5 = FUN_1000e6c1(0x38);
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)FUN_10005270();
      goto LAB_10007715;
    }
  }
LAB_100075d9:
  puVar6 = (undefined4 *)0x0;
LAB_10007715:
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[4] = param_1;
    ExceptionList = local_c;
    return puVar6;
  }
  if ((iStack00000008 != 0) && (*(char *)(iStack00000008 + 0x2c) == '\0')) {
    *(undefined1 *)(iStack00000008 + 0x2c) = 1;
    *(undefined4 *)(iStack00000008 + 0x30) = 3;
    pcVar8 = PTR_s_Memory_allocation_failed__10025454;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_10004cb0();
    *(undefined4 *)(iStack00000008 + 0x40) = 0xffffffff;
    *(undefined4 *)(iStack00000008 + 0x3c) = 0xffffffff;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



/* ---- FUN_10007790 @ 10007790 size=1105 ---- */

byte * __thiscall FUN_10007790(void *this,int *param_1,int *param_2,void *param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1001d6f8;
  local_c = ExceptionList;
  uVar4 = DAT_100241b0 ^ (int)register0x00000010 - 0x28U;
  ExceptionList = &local_c;
  pbVar5 = FUN_10006c90((int)param_3);
  for (piVar8 = this; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[4]) {
    iVar6 = (**(code **)(*piVar8 + 0x10))(uVar4);
    if (iVar6 != 0) {
      local_18 = (**(code **)(*piVar8 + 0x10))();
      goto LAB_100077f6;
    }
  }
  local_18 = 0;
LAB_100077f6:
  if ((pbVar5 == (byte *)0x0) || (*pbVar5 == 0)) {
    if (local_18 == 0) {
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    if (*(char *)(local_18 + 0x2c) != '\0') {
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    *(undefined1 *)(local_18 + 0x2c) = 1;
    *(undefined4 *)(local_18 + 0x30) = 4;
    pcVar9 = PTR_s_Error_parsing_Element__10025458;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_10004cb0();
    *(undefined4 *)(local_18 + 0x40) = 0xffffffff;
    *(undefined4 *)(local_18 + 0x3c) = 0xffffffff;
    ExceptionList = local_c;
    return (byte *)0x0;
  }
  if (param_2 != (int *)0x0) {
    FUN_10006a80(pbVar5,(int)param_3);
    *(int *)((int)this + 4) = *param_2;
    *(int *)((int)this + 8) = param_2[1];
  }
  if (*pbVar5 != 0x3c) {
    if (local_18 == 0) {
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    FUN_100074c0(local_18,pbVar5,param_2,(int)param_3);
    ExceptionList = local_c;
    return (byte *)0x0;
  }
  pbVar5 = FUN_10006c90((int)param_3);
  pbVar7 = FUN_10006d50(pbVar5);
  if ((pbVar7 == (byte *)0x0) || (*pbVar7 == 0)) {
    if (local_18 == 0) {
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    FUN_100074c0(local_18,pbVar5,param_2,(int)param_3);
    ExceptionList = local_c;
    return (byte *)0x0;
  }
  FUN_10004de0();
  uStack_4 = 0;
  FUN_10004ba0();
  FUN_10004e90(">");
  while( true ) {
    if (*pbVar7 == 0) {
      if (param_1 != &DAT_10026420) {
        _free(param_1);
      }
      ExceptionList = local_c;
      return pbVar7;
    }
    pbVar5 = FUN_10006c90((int)param_3);
    if ((pbVar5 == (byte *)0x0) || (bVar1 = *pbVar5, bVar1 == 0)) {
      if (local_18 != 0) {
        FUN_100074c0(local_18,pbVar7,param_2,(int)param_3);
      }
      goto LAB_10007afe;
    }
    if (bVar1 == 0x2f) {
      if (pbVar5[1] == 0x3e) {
        if (param_1 != &DAT_10026420) {
          _free(param_1);
        }
        ExceptionList = local_c;
        return pbVar5 + 2;
      }
      if (local_18 != 0) {
        FUN_100074c0(local_18,pbVar5 + 1,param_2,(int)param_3);
      }
      if (param_1 == &DAT_10026420) {
        ExceptionList = local_c;
        return (byte *)0x0;
      }
      _free(param_1);
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    if (bVar1 == 0x3e) break;
    piVar8 = (int *)FUN_1000e6c1(0x24);
    if (piVar8 == (int *)0x0) {
      if (local_18 != 0) {
        FUN_100074c0(local_18,pbVar7,param_2,(int)param_3);
      }
      if (param_1 == &DAT_10026420) {
        ExceptionList = local_c;
        return (byte *)0x0;
      }
      _free(param_1);
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    piVar8[2] = -1;
    piVar8[1] = -1;
    piVar8[3] = 0;
    *piVar8 = (int)TiXmlAttribute::vftable;
    piVar8[5] = (int)&DAT_10026420;
    piVar8[6] = (int)&DAT_10026420;
    piVar8[8] = 0;
    piVar8[7] = 0;
    pcVar3 = *(code **)(*piVar8 + 8);
    piVar8[4] = local_18;
    pbVar7 = (byte *)(*pcVar3)(pbVar5,param_2,param_3);
    if ((pbVar7 == (byte *)0x0) || (*pbVar7 == 0)) {
      if (local_18 != 0) {
        FUN_100074c0(local_18,pbVar5,param_2,(int)param_3);
      }
LAB_10007af4:
      (**(code **)*piVar8)(1);
LAB_10007afe:
      if (param_1 == &DAT_10026420) {
        ExceptionList = local_c;
        return (byte *)0x0;
      }
      _free(param_1);
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    iVar6 = FUN_10006860();
    if (iVar6 != 0) {
      FUN_10005070();
      goto LAB_10007af4;
    }
    piVar8[8] = (int)this + 0x2c;
    piVar8[7] = *(int *)((int)this + 0x48);
    *(int **)(*(int *)((int)this + 0x48) + 0x20) = piVar8;
    *(int **)((int)this + 0x48) = piVar8;
  }
  pbVar5 = FUN_10007bf0(this,pbVar5 + 1,param_2,param_3);
  if ((pbVar5 == (byte *)0x0) || (*pbVar5 == 0)) {
    if (local_18 != 0) {
      FUN_100074c0(local_18,pbVar5,param_2,(int)param_3);
    }
    if (param_1 == &DAT_10026420) {
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    _free(param_1);
    ExceptionList = local_c;
    return (byte *)0x0;
  }
  piVar8 = param_1 + 2;
  iVar6 = (int)pbVar5 - (int)piVar8;
  do {
    if ((char)*piVar8 == '\0') goto LAB_10007a2a;
  } while ((*(char *)(iVar6 + (int)piVar8) == (char)*piVar8) &&
          (piVar8 = (int *)((int)piVar8 + 1), *(char *)(iVar6 + (int)piVar8) != '\0'));
  if ((char)*piVar8 != '\0') {
    if (local_18 != 0) {
      FUN_100074c0(local_18,pbVar5,param_2,(int)param_3);
    }
    if (param_1 != &DAT_10026420) {
      _free(param_1);
    }
    ExceptionList = local_c;
    return (byte *)0x0;
  }
LAB_10007a2a:
  iVar6 = *param_1;
  if (param_1 != &DAT_10026420) {
    _free(param_1);
  }
  ExceptionList = local_c;
  return pbVar5 + iVar6;
}



/* ---- FUN_10007bf0 @ 10007bf0 size=598 ---- */

byte * FUN_10007bf0(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  byte bVar1;
  char cVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint *puVar8;
  byte *pbVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1001d6cb;
  uVar4 = DAT_100241b0 ^ (int)register0x00000010 - 0x20U;
  ppvVar3 = &local_c;
  piVar11 = param_1;
  local_c = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (piVar11 == (int *)0x0) {
      local_10 = 0;
LAB_10007c44:
      pbVar6 = FUN_10006c90((int)param_4);
      do {
        if (pbVar6 == (byte *)0x0) {
          if ((local_10 != 0) && (*(char *)(local_10 + 0x2c) == '\0')) {
            *(undefined1 *)(local_10 + 0x2c) = 1;
            *(undefined4 *)(local_10 + 0x30) = 6;
            pcVar10 = PTR_s_Error_reading_Element_value__10025460;
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            FUN_10004cb0();
            *(undefined4 *)(local_10 + 0x40) = 0xffffffff;
            *(undefined4 *)(local_10 + 0x3c) = 0xffffffff;
          }
          ExceptionList = local_c;
          return (byte *)0x0;
        }
        if (*pbVar6 == 0) {
          ExceptionList = local_c;
          return pbVar6;
        }
        if (*pbVar6 == 0x3c) {
          pbVar9 = &DAT_100202bc;
          do {
            if (*pbVar9 == 0) {
              ExceptionList = local_c;
              return pbVar6;
            }
          } while (((pbVar6 + -0x100202bc)[(int)pbVar9] == *pbVar9) &&
                  (pbVar9 = pbVar9 + 1, (pbVar6 + -0x100202bc)[(int)pbVar9] != 0));
          if (*pbVar9 == 0) {
            ExceptionList = local_c;
            return pbVar6;
          }
          piVar11 = FUN_10007530(param_4,param_1);
          if (piVar11 == (int *)0x0) {
            ExceptionList = local_c;
            return (byte *)0x0;
          }
          (**(code **)(*piVar11 + 8))(pbVar6,param_3,param_4);
          FUN_10005770(param_1);
        }
        else {
          puVar7 = (undefined4 *)FUN_1000e6c1(0x30);
          piVar11 = (int *)0x0;
          uStack_4 = 0;
          if (puVar7 != (undefined4 *)0x0) {
            piVar11 = FUN_100051a0(puVar7);
          }
          uStack_4 = 0xffffffff;
          if (piVar11 == (int *)0x0) {
            if ((local_10 != 0) && (*(char *)(local_10 + 0x2c) == '\0')) {
              *(undefined1 *)(local_10 + 0x2c) = 1;
              *(undefined4 *)(local_10 + 0x30) = 3;
              pcVar10 = PTR_s_Memory_allocation_failed__10025454;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              FUN_10004cb0();
              *(undefined4 *)(local_10 + 0x40) = 0xffffffff;
              *(undefined4 *)(local_10 + 0x3c) = 0xffffffff;
            }
            ExceptionList = local_c;
            return (byte *)0x0;
          }
          (**(code **)(*piVar11 + 8))(pbVar6,param_3,param_4);
          puVar8 = (uint *)piVar11[8];
          if (*puVar8 != 0) {
            uVar4 = 0;
            do {
              bVar1 = *(byte *)((int)puVar8 + uVar4 + 8);
              iVar5 = _isspace((uint)bVar1);
              if (((iVar5 == 0) && (bVar1 != 10)) && (bVar1 != 0xd)) {
                FUN_10005770(param_1);
                goto LAB_10007d80;
              }
              puVar8 = (uint *)piVar11[8];
              uVar4 = uVar4 + 1;
            } while (uVar4 < *puVar8);
          }
          (**(code **)*piVar11)(1);
        }
LAB_10007d80:
        pbVar6 = FUN_10006c90((int)param_4);
      } while( true );
    }
    iVar5 = (**(code **)(*piVar11 + 0x10))(uVar4);
    if (iVar5 != 0) {
      local_10 = (**(code **)(*piVar11 + 0x10))();
      goto LAB_10007c44;
    }
    piVar11 = (int *)piVar11[4];
    ppvVar3 = ExceptionList;
  } while( true );
}



/* ---- FUN_10007e50 @ 10007e50 size=336 ---- */

byte * __thiscall FUN_10007e50(void *this,byte *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int local_4;
  
  for (piVar4 = this; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[4]) {
    iVar2 = (**(code **)(*piVar4 + 0x10))();
    if (iVar2 != 0) {
      local_4 = (**(code **)(*piVar4 + 0x10))();
      goto LAB_10007e80;
    }
  }
  local_4 = 0;
LAB_10007e80:
  iVar2 = param_3;
  pbVar3 = FUN_10006c90(param_3);
  piVar4 = param_2;
  if (param_2 != (int *)0x0) {
    FUN_10006a80(pbVar3,iVar2);
    *(int *)((int)this + 4) = *piVar4;
    *(int *)((int)this + 8) = piVar4[1];
  }
  if (((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) || (*pbVar3 != 0x3c)) {
    if (local_4 != 0) {
      FUN_100074c0(local_4,pbVar3,piVar4,iVar2);
    }
    return (byte *)0x0;
  }
  param_1 = pbVar3 + 1;
  piVar4 = (int *)((int)this + 0x20);
  FUN_10004cb0();
  for (pbVar3 = param_1; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + 1) {
    bVar1 = *pbVar3;
    if (bVar1 == 0) goto LAB_10007f54;
    if (bVar1 == 0x3e) goto LAB_10007f59;
    uVar5 = (uint)param_1 >> 8;
    param_1 = (byte *)CONCAT31((int3)uVar5,bVar1);
    uVar5 = *(int *)*piVar4 + 1;
    if ((uint)((int *)*piVar4)[1] < uVar5) {
      FUN_10004bf0(piVar4);
    }
    _memmove((void *)(*(int *)*piVar4 + 8 + *piVar4),&param_1,1);
    *(uint *)*piVar4 = uVar5;
    *(undefined1 *)(*piVar4 + 8 + uVar5) = 0;
  }
  if (local_4 != 0) {
    FUN_100074c0(local_4,(byte *)0x0,(undefined4 *)0x0,param_3);
  }
LAB_10007f54:
  if (*pbVar3 != 0x3e) {
    return pbVar3;
  }
LAB_10007f59:
  return pbVar3 + 1;
}



/* ---- FUN_10007fa0 @ 10007fa0 size=441 ---- */

byte * __thiscall FUN_10007fa0(void *this,undefined4 param_1,int *param_2,byte *param_3)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int local_c;
  
  for (piVar7 = this; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[4]) {
    iVar2 = (**(code **)(*piVar7 + 0x10))();
    if (iVar2 != 0) {
      local_c = (**(code **)(*piVar7 + 0x10))();
      goto LAB_10007fd3;
    }
  }
  local_c = 0;
LAB_10007fd3:
  piVar7 = (int *)((int)this + 0x20);
  FUN_10004cb0();
  pbVar3 = FUN_10006c90((int)param_3);
  if (param_2 != (int *)0x0) {
    FUN_10006a80(pbVar3,(int)param_3);
    *(int *)((int)this + 4) = *param_2;
    *(int *)((int)this + 8) = param_2[1];
  }
  pbVar4 = &DAT_100202d0;
  if ((pbVar3 != (byte *)0x0) && (*pbVar3 != 0)) {
    do {
      if (*pbVar4 == 0) goto LAB_10008079;
    } while (((pbVar3 + -0x100202d0)[(int)pbVar4] == *pbVar4) &&
            (pbVar4 = pbVar4 + 1, (pbVar3 + -0x100202d0)[(int)pbVar4] != 0));
    if (*pbVar4 == 0) {
LAB_10008079:
      pcVar1 = "<!--";
      do {
        pcVar5 = pcVar1;
        pcVar1 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      pbVar3 = pbVar3 + (int)(pcVar5 + -0x100202d0);
      FUN_10004cb0();
      pbVar4 = (byte *)0x0;
      if (pbVar3 != (byte *)0x0) {
        param_3 = pbVar3 + -0x100202d8;
        while (*pbVar3 != 0) {
          pbVar4 = &DAT_100202d8;
          do {
            if (*pbVar4 == 0) goto LAB_10008131;
          } while ((param_3[(int)pbVar4] == *pbVar4) &&
                  (pbVar4 = pbVar4 + 1, param_3[(int)pbVar4] != 0));
          if (*pbVar4 == 0) break;
          iVar2 = *(int *)*piVar7;
          uVar6 = iVar2 + 1;
          if ((uint)((int *)*piVar7)[1] < uVar6) {
            FUN_10004bf0(piVar7);
          }
          _memmove((void *)(*(int *)*piVar7 + 8 + *piVar7),pbVar3,1);
          *(uint *)*piVar7 = uVar6;
          pbVar3 = pbVar3 + 1;
          param_3 = param_3 + 1;
          *(undefined1 *)(iVar2 + 9 + *piVar7) = 0;
          if (pbVar3 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
LAB_10008131:
        pcVar1 = "-->";
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pbVar4 = pbVar3 + (int)(pcVar5 + -0x100202d8);
      }
      return pbVar4;
    }
  }
  FUN_100074c0(local_c,pbVar3,param_2,(int)param_3);
  return (byte *)0x0;
}



/* ---- FUN_10008160 @ 10008160 size=382 ---- */

byte * __thiscall FUN_10008160(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pbVar3 = FUN_10006c90(param_3);
  if ((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) {
    return (byte *)0x0;
  }
  if (param_2 != (undefined4 *)0x0) {
    FUN_10006a80(pbVar3,param_3);
    *(undefined4 *)((int)this + 4) = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
  }
  pbVar4 = FUN_10006d50(pbVar3);
  if ((pbVar4 != (byte *)0x0) && (*pbVar4 != 0)) {
    pbVar3 = FUN_10006c90(param_3);
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 == 0 || (*pbVar3 != 0x3d)))) {
      if (*(int *)((int)this + 0x10) == 0) {
        return (byte *)0x0;
      }
      FUN_100074c0(*(int *)((int)this + 0x10),pbVar3,param_2,param_3);
      return (byte *)0x0;
    }
    pbVar3 = FUN_10006c90(param_3);
    if ((pbVar3 != (byte *)0x0) && (bVar1 = *pbVar3, bVar1 != 0)) {
      if (bVar1 == 0x27) {
        pcVar6 = "\'";
LAB_10008211:
        pbVar3 = FUN_10007040(pbVar3 + 1,(int *)((int)this + 0x18),0,pcVar6,param_3);
        return pbVar3;
      }
      if (bVar1 == 0x22) {
        pcVar6 = "\"";
        goto LAB_10008211;
      }
      FUN_10004e60();
      while( true ) {
        if (*pbVar3 == 0) {
          return pbVar3;
        }
        uVar5 = FUN_100068d0();
        if ((char)uVar5 != '\0') {
          return pbVar3;
        }
        bVar1 = *pbVar3;
        if (bVar1 == 10) {
          return pbVar3;
        }
        if (bVar1 == 0xd) {
          return pbVar3;
        }
        if (bVar1 == 0x2f) {
          return pbVar3;
        }
        if (bVar1 == 0x3e) {
          return pbVar3;
        }
        if ((bVar1 == 0x27) || (bVar1 == 0x22)) break;
        FUN_10004ef0(bVar1);
        pbVar3 = pbVar3 + 1;
        if (pbVar3 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      iVar2 = *(int *)((int)this + 0x10);
      goto joined_r0x1000828c;
    }
  }
  iVar2 = *(int *)((int)this + 0x10);
joined_r0x1000828c:
  if (iVar2 != 0) {
    FUN_100074c0(iVar2,pbVar3,param_2,param_3);
  }
  return (byte *)0x0;
}



/* ---- FUN_100082e0 @ 100082e0 size=557 ---- */

byte * __thiscall FUN_100082e0(void *this,byte *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 auStack_12 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1001d1f8;
  local_c = ExceptionList;
  uVar4 = DAT_100241b0 ^ (uint)(auStack_12 + -0x12);
  ExceptionList = &local_c;
  piVar1 = (int *)((int)this + 0x20);
  FUN_10004cb0();
  for (piVar2 = this; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[4]) {
    iVar5 = (**(code **)(*piVar2 + 0x10))(uVar4);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*piVar2 + 0x10))();
      goto LAB_1000833c;
    }
  }
  iVar5 = 0;
LAB_1000833c:
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    FUN_10006a80(param_1,param_3);
    *(int *)((int)this + 4) = *piVar2;
    *(int *)((int)this + 8) = piVar2[1];
  }
  if (*(char *)((int)this + 0x2c) == '\0') {
    pbVar6 = &DAT_100202c0;
    if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
      do {
        if (*pbVar6 == 0) goto LAB_100083cf;
      } while (((param_1 + -0x100202c0)[(int)pbVar6] == *pbVar6) &&
              (pbVar6 = pbVar6 + 1, (param_1 + -0x100202c0)[(int)pbVar6] != 0));
      if (*pbVar6 == 0) goto LAB_100083cf;
    }
    pbVar6 = FUN_10007040(param_1,piVar1,1,"<",param_3);
    if (pbVar6 != (byte *)0x0) {
      ExceptionList = local_c;
      return pbVar6 + -1;
    }
  }
  else {
LAB_100083cf:
    *(undefined1 *)((int)this + 0x2c) = 1;
    pbVar6 = &DAT_100202c0;
    if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
      do {
        if (*pbVar6 == 0) goto LAB_10008418;
      } while (((param_1 + -0x100202c0)[(int)pbVar6] == *pbVar6) &&
              (pbVar6 = pbVar6 + 1, (param_1 + -0x100202c0)[(int)pbVar6] != 0));
      if (*pbVar6 == 0) {
LAB_10008418:
        pcVar3 = "<![CDATA[";
        do {
          pcVar7 = pcVar3;
          pcVar3 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
        pbVar6 = param_1 + (int)(pcVar7 + -0x100202c0);
        if (pbVar6 != (byte *)0x0) {
          pbVar9 = pbVar6 + -0x100202cc;
          while (*pbVar6 != 0) {
            pbVar8 = &DAT_100202cc;
            do {
              if (*pbVar8 == 0) goto LAB_100084b5;
            } while ((pbVar9[(int)pbVar8] == *pbVar8) &&
                    (pbVar8 = pbVar8 + 1, pbVar9[(int)pbVar8] != 0));
            if (*pbVar8 == 0) break;
            param_2 = (int *)CONCAT31(param_2._1_3_,*pbVar6);
            iVar5 = *(int *)*piVar1;
            uVar4 = iVar5 + 1;
            if ((uint)((int *)*piVar1)[1] < uVar4) {
              FUN_10004bf0(piVar1);
            }
            _memmove((void *)(*piVar1 + *(int *)*piVar1 + 8),&param_2,1);
            *(uint *)*piVar1 = uVar4;
            pbVar6 = pbVar6 + 1;
            pbVar9 = pbVar9 + 1;
            *(undefined1 *)(iVar5 + 9 + *piVar1) = 0;
            if (pbVar6 == (byte *)0x0) break;
          }
        }
LAB_100084b5:
        param_2 = &DAT_10026420;
        uStack_4 = 0;
        pbVar6 = FUN_10007040(pbVar6,(int *)&param_2,0,"]]>",param_3);
        if (param_2 != &DAT_10026420) {
          _free(param_2);
        }
        ExceptionList = local_c;
        return pbVar6;
      }
    }
    FUN_100074c0(iVar5,param_1,piVar2,param_3);
  }
  ExceptionList = local_c;
  return (byte *)0x0;
}



/* ---- FUN_10008510 @ 10008510 size=1137 ---- */

byte * __thiscall FUN_10008510(void *this,undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 auStack_86 [2];
  int local_84;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined **ppuStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1001d698;
  local_c = ExceptionList;
  uVar4 = DAT_100241b0 ^ (uint)(auStack_86 + -0x12);
  ExceptionList = &local_c;
  pbVar5 = FUN_10006c90(param_3);
  piVar3 = this;
  do {
    if (piVar3 == (int *)0x0) {
      local_84 = 0;
LAB_10008584:
      if (((pbVar5 == (byte *)0x0) || (*pbVar5 == 0)) ||
         (uVar7 = FUN_10006fa0(pbVar5,'\x01',param_3), (char)uVar7 == '\0')) {
        if ((local_84 != 0) && (*(char *)(local_84 + 0x2c) == '\0')) {
          *(undefined1 *)(local_84 + 0x2c) = 1;
          *(undefined4 *)(local_84 + 0x30) = 0xc;
          pcVar8 = PTR_s_Error_parsing_Declaration__10025478;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_10004cb0();
          *(undefined4 *)(local_84 + 0x40) = 0xffffffff;
          *(undefined4 *)(local_84 + 0x3c) = 0xffffffff;
        }
      }
      else {
        if (param_2 != (int *)0x0) {
          FUN_10006a80(pbVar5,param_3);
          *(int *)((int)this + 4) = *param_2;
          *(int *)((int)this + 8) = param_2[1];
        }
        pbVar5 = pbVar5 + 5;
        FUN_10004cb0();
        FUN_10004cb0();
        FUN_10004cb0();
        while ((pbVar5 != (byte *)0x0 && (*pbVar5 != 0))) {
          if (*pbVar5 == 0x3e) {
            ExceptionList = local_c;
            return pbVar5 + 1;
          }
          pbVar5 = FUN_10006c90(param_3);
          uVar7 = FUN_10006fa0(pbVar5,'\x01',param_3);
          if ((char)uVar7 == '\0') {
            uVar7 = FUN_10006fa0(pbVar5,'\x01',param_3);
            if ((char)uVar7 == '\0') {
              uVar7 = FUN_10006fa0(pbVar5,'\x01',param_3);
              if ((char)uVar7 == '\0') {
                while( true ) {
                  if (pbVar5 == (byte *)0x0) {
                    ExceptionList = local_c;
                    return (byte *)0x0;
                  }
                  bVar2 = *pbVar5;
                  if ((((bVar2 == 0) || (bVar2 == 0x3e)) ||
                      (iVar6 = _isspace((uint)bVar2), iVar6 != 0)) ||
                     ((bVar2 == 10 || (bVar2 == 0xd)))) break;
                  pbVar5 = pbVar5 + 1;
                }
              }
              else {
                uStack_28 = 0xffffffff;
                uStack_2c = 0xffffffff;
                uStack_24 = 0;
                ppuStack_30 = TiXmlAttribute::vftable;
                puStack_1c = &DAT_10026420;
                puStack_18 = &DAT_10026420;
                uStack_20 = 0;
                uStack_10 = 0;
                uStack_14 = 0;
                uStack_4 = 2;
                pbVar5 = FUN_10008160(&ppuStack_30,pbVar5,param_2,param_3);
                pcVar8 = (char *)(puStack_18 + 2);
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                FUN_10004cb0();
                uStack_4 = 0xffffffff;
                if (puStack_18 != &DAT_10026420) {
                  _free(puStack_18);
                }
                if (puStack_1c != &DAT_10026420) {
                  _free(puStack_1c);
                }
                ppuStack_30 = TiXmlBase::vftable;
              }
            }
            else {
              uStack_4c = 0xffffffff;
              uStack_50 = 0xffffffff;
              uStack_48 = 0;
              ppuStack_54 = TiXmlAttribute::vftable;
              puStack_40 = &DAT_10026420;
              puStack_3c = &DAT_10026420;
              uStack_44 = 0;
              uStack_34 = 0;
              uStack_38 = 0;
              uStack_4 = 1;
              pbVar5 = FUN_10008160(&ppuStack_54,pbVar5,param_2,param_3);
              pcVar8 = (char *)(puStack_3c + 2);
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              FUN_10004cb0();
              uStack_4 = 0xffffffff;
              if (puStack_3c != &DAT_10026420) {
                _free(puStack_3c);
              }
              if (puStack_40 != &DAT_10026420) {
                _free(puStack_40);
              }
              ppuStack_54 = TiXmlBase::vftable;
            }
          }
          else {
            uStack_70 = 0xffffffff;
            uStack_74 = 0xffffffff;
            uStack_6c = 0;
            ppuStack_78 = TiXmlAttribute::vftable;
            puStack_64 = &DAT_10026420;
            puStack_60 = &DAT_10026420;
            uStack_68 = 0;
            uStack_58 = 0;
            uStack_5c = 0;
            uStack_4 = 0;
            pbVar5 = FUN_10008160(&ppuStack_78,pbVar5,param_2,param_3);
            pcVar8 = (char *)(puStack_60 + 2);
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            FUN_10004cb0();
            uStack_4 = 0xffffffff;
            if (puStack_60 != &DAT_10026420) {
              _free(puStack_60);
            }
            if (puStack_64 != &DAT_10026420) {
              _free(puStack_64);
            }
            ppuStack_78 = TiXmlBase::vftable;
          }
        }
      }
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    iVar6 = (**(code **)(*piVar3 + 0x10))(uVar4);
    if (iVar6 != 0) {
      local_84 = (**(code **)(*piVar3 + 0x10))();
      goto LAB_10008584;
    }
    piVar3 = (int *)piVar3[4];
  } while( true );
}



/* ---- FUN_10008990 @ 10008990 size=151 ---- */

undefined4 * FUN_10008990(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d65b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::FailedUnitList::vftable;
  iVar1 = FUN_100097e0();
  param_1[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  local_4 = 0;
  FUN_100091a0(*(int **)(param_1[2] + 4));
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10008a30 @ 10008a30 size=30 ---- */

undefined4 * __thiscall FUN_10008a30(void *this,byte param_1)

{
  FUN_10008a60(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- thunk_FUN_10009550 @ 10008a50 size=5 ---- */

void thunk_FUN_10009550(void)

{
  FUN_10009550();
  return;
}



/* ---- FUN_10008a60 @ 10008a60 size=125 ---- */

void __fastcall FUN_10008a60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d97b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::FailedUnitList::vftable;
  local_4 = 0;
  FUN_100091a0(*(int **)(param_1[2] + 4));
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  local_4 = 0xffffffff;
  FUN_10009550();
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10008ae0 @ 10008ae0 size=236 ---- */

void __fastcall FUN_10008ae0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *unaff_ESI;
  undefined1 local_38 [12];
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d1bd;
  local_c = ExceptionList;
  local_10 = DAT_100241b0 ^ (uint)local_38;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  local_4 = 0;
  if (unaff_ESI == (char *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  }
  else {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    pcVar2 = unaff_ESI;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_10001750(local_2c,(undefined4 *)unaff_ESI,(int)pcVar2 - (int)(unaff_ESI + 1));
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_10008cc0((undefined4 *)(param_1 + 4),local_2c);
    if (0xf < local_14) {
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_38);
  return;
}



/* ---- FUN_10008bd0 @ 10008bd0 size=230 ---- */

undefined4 __thiscall FUN_10008bd0(void *this,undefined4 param_1,void *param_2)

{
  int *piVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 uVar2;
  uint extraout_EAX_01;
  uint extraout_EAX_02;
  uint uVar3;
  uint in_stack_0000001c;
  int local_18;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d18d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10009120(&local_18);
  piVar1 = *(int **)((int)this + 8);
  if ((local_18 == 0) || (local_18 != (int)this + 4)) {
    FUN_1000e9c8();
  }
  if (local_14 == piVar1) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
    uVar3 = extraout_EAX_01;
    if (0xf < in_stack_0000001c) {
      _free(param_2);
      uVar3 = extraout_EAX_02;
    }
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  FUN_10008e10((int)this + 4,&local_18,local_18,local_14);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  uVar2 = extraout_EAX;
  if (0xf < in_stack_0000001c) {
    _free(param_2);
    uVar2 = extraout_EAX_00;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



/* ---- FUN_10008cc0 @ 10008cc0 size=325 ---- */

/* WARNING: Removing unreachable block (ram,0x10008d28) */

void FUN_10008cc0(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *extraout_ECX;
  undefined4 *puVar8;
  byte *pbVar9;
  int *unaff_EBX;
  byte *pbVar10;
  undefined4 *this;
  bool local_20;
  undefined4 *local_10;
  undefined4 *local_c;
  
  puVar8 = (undefined4 *)((undefined4 *)param_1[1])[1];
  local_20 = true;
  this = (undefined4 *)param_1[1];
  if (*(char *)((int)puVar8 + 0x29) == '\0') {
    uVar1 = *(uint *)((int)param_2 + 0x14);
    uVar2 = *(uint *)((int)param_2 + 0x18);
    do {
      if ((uint)puVar8[9] < 0x10) {
        pbVar10 = (byte *)(puVar8 + 4);
      }
      else {
        pbVar10 = (byte *)puVar8[4];
      }
      pbVar9 = (byte *)((int)param_2 + 4);
      if (0xf < uVar2) {
        pbVar9 = *(byte **)pbVar9;
      }
      local_10 = puVar8;
      uVar6 = FUN_100033e0(pbVar10,pbVar9);
      if (uVar6 == 0) {
        if (uVar1 < (uint)puVar8[8]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar1 != puVar8[8]);
        }
      }
      local_20 = (int)uVar6 < 0;
      if (local_20) {
        puVar8 = (undefined4 *)*puVar8;
      }
      else {
        puVar8 = (undefined4 *)puVar8[2];
      }
    } while (*(char *)((int)puVar8 + 0x29) == '\0');
    this = local_10;
  }
  local_10 = param_1;
  puVar8 = param_1;
  local_c = this;
  if (local_20) {
    if (this == *(undefined4 **)param_1[1]) {
      local_20 = true;
      goto LAB_10008da0;
    }
    FUN_10009820();
    puVar8 = extraout_ECX;
  }
  puVar4 = local_c;
  bVar5 = FUN_10004960(puVar8,(int)(local_c + 3));
  if (!bVar5) {
    *unaff_EBX = (int)local_10;
    unaff_EBX[1] = (int)puVar4;
    *(undefined1 *)(unaff_EBX + 2) = 0;
    return;
  }
LAB_10008da0:
  piVar7 = FUN_10009200(this,(int)param_1,(int *)&local_10,local_20,param_2);
  iVar3 = piVar7[1];
  *unaff_EBX = *piVar7;
  unaff_EBX[1] = iVar3;
  *(undefined1 *)(unaff_EBX + 2) = 1;
  return;
}



/* ---- FUN_10008e10 @ 10008e10 size=783 ---- */

/* WARNING: Removing unreachable block (ram,0x10008f32) */
/* WARNING: Removing unreachable block (ram,0x10008f43) */
/* WARNING: Removing unreachable block (ram,0x10008f4c) */
/* WARNING: Removing unreachable block (ram,0x10008f4f) */
/* WARNING: Removing unreachable block (ram,0x10008f3f) */
/* WARNING: Removing unreachable block (ram,0x10008f5d) */
/* WARNING: Removing unreachable block (ram,0x10008f6e) */
/* WARNING: Removing unreachable block (ram,0x10008f79) */
/* WARNING: Removing unreachable block (ram,0x10008f75) */
/* WARNING: Removing unreachable block (ram,0x10008f69) */
/* WARNING: Removing unreachable block (ram,0x10008f7c) */

void FUN_10008e10(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x29) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021a68);
  }
  FUN_100098a0();
  piVar8 = (int *)*param_4;
  if (*(char *)((int)piVar8 + 0x29) == '\0') {
    if (*(char *)(param_4[2] + 0x29) == '\0') {
      piVar8 = (int *)param_4[2];
    }
  }
  else {
    piVar8 = (int *)param_4[2];
  }
  piVar6 = (int *)param_4[1];
  if (*(char *)((int)piVar8 + 0x29) == '\0') {
    piVar8[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_4) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if ((int *)**(int **)(param_1 + 4) == param_4) {
    if (*(char *)((int)piVar8 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0x29);
      piVar7 = (int *)*piVar8;
      piVar5 = piVar8;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar7 + 0x29);
        piVar5 = piVar3;
      }
    }
    else {
      piVar5 = piVar6;
    }
    **(int **)(param_1 + 4) = (int)piVar5;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x29) == '\0') {
      uVar4 = FUN_100094e0();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[10] == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[10] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar7 + 10) = 0;
            FUN_10009490(piVar7,param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(*piVar6 + 0x28) == '\x01') && (*(char *)(piVar6[2] + 0x28) == '\x01'))
            goto LAB_10009065;
            if (*(char *)(piVar6[2] + 0x28) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x28) = 1;
              *(undefined1 *)(piVar6 + 10) = 0;
              FUN_10009500(piVar6,param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 10) = (char)piVar7[10];
            *(undefined1 *)(piVar7 + 10) = 1;
            *(undefined1 *)(piVar6[2] + 0x28) = 1;
            FUN_10009490(piVar7,param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar7 + 10) = 0;
            FUN_10009500(piVar7,param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(piVar6[2] + 0x28) != '\x01') || (*(char *)(*piVar6 + 0x28) != '\x01')) {
              if (*(char *)(*piVar6 + 0x28) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x28) = 1;
                *(undefined1 *)(piVar6 + 10) = 0;
                FUN_10009490(piVar6,param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 10) = (char)piVar7[10];
              *(undefined1 *)(piVar7 + 10) = 1;
              *(undefined1 *)(*piVar6 + 0x28) = 1;
              FUN_10009500(piVar7,param_1);
              break;
            }
LAB_10009065:
            *(undefined1 *)(piVar6 + 10) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 10) = 1;
  }
  if (0xf < (uint)param_4[9]) {
    _free((void *)param_4[4]);
  }
  param_4[9] = 0xf;
  param_4[8] = 0;
  *(undefined1 *)(param_4 + 4) = 0;
  _free(param_4);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10009120 @ 10009120 size=98 ---- */

undefined4 * FUN_10009120(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 local_c;
  
  puVar2 = FUN_100096a0(unaff_EBX);
  uVar3 = extraout_ECX;
  if (unaff_ESI == 0) {
    FUN_1000e9c8();
    uVar3 = extraout_ECX_00;
  }
  if (puVar2 != *(undefined4 **)(unaff_ESI + 4)) {
    bVar1 = FUN_10004960(uVar3,unaff_EBX);
    if (!bVar1) {
      puVar2 = (undefined4 *)((int)register0x00000010 + -0x10);
      goto LAB_1000916d;
    }
  }
  puVar2 = (undefined4 *)((int)register0x00000010 + -8);
LAB_1000916d:
  uVar3 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  return param_1;
}



/* ---- FUN_10009190 @ 10009190 size=12 ---- */

void FUN_10009190(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  return;
}



/* ---- FUN_100091a0 @ 100091a0 size=86 ---- */

void FUN_100091a0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x29);
  while (cVar1 == '\0') {
    FUN_100091a0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (0xf < (uint)param_1[9]) {
      _free((void *)param_1[4]);
    }
    param_1[9] = 0xf;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _free(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}



/* ---- FUN_10009200 @ 10009200 size=641 ---- */

int * __thiscall FUN_10009200(void *this,int param_1,int *param_2,char param_3,void *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x9249247 < *(uint *)(param_1 + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  piVar3 = FUN_10009730(*(undefined4 *)(param_1 + 4),this,*(undefined4 *)(param_1 + 4),param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (this == *(void **)(param_1 + 4)) {
    *(int **)((int)*(void **)(param_1 + 4) + 4) = piVar3;
    **(undefined4 **)(param_1 + 4) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    if (param_3 != '\0') {
      *(int **)this = piVar3;
      if (this == (void *)**(int **)(param_1 + 4)) {
        **(int **)(param_1 + 4) = (int)piVar3;
      }
      goto LAB_100092d6;
    }
    *(int **)((int)this + 8) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
    if (this != *(void **)(iVar4 + 8)) goto LAB_100092d6;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_100092d6:
  cVar1 = *(char *)(piVar3[1] + 0x28);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x28) = 1;
      param_2[1] = (int)piVar3;
      *param_2 = param_1;
      ExceptionList = local_c;
      return param_2;
    }
    piVar5 = piVar6 + 1;
    piVar7 = (int *)*piVar5;
    piVar2 = (int *)piVar7[1];
    if (piVar7 == (int *)*piVar2) {
      iVar4 = piVar2[2];
      if (*(char *)(iVar4 + 0x28) != '\0') {
        if (piVar6 == (int *)piVar7[2]) {
          piVar6 = (int *)piVar7[2];
          piVar7[2] = *piVar6;
          if (*(char *)(*piVar6 + 0x29) == '\0') {
            *(int **)(*piVar6 + 4) = piVar7;
          }
          piVar5 = piVar7 + 1;
          piVar6[1] = piVar7[1];
          if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
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
        *(undefined1 *)(*piVar5 + 0x28) = 1;
        *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x28) = 0;
        piVar5 = *(int **)(*piVar5 + 4);
        piVar7 = (int *)*piVar5;
        *piVar5 = piVar7[2];
        if (*(char *)(piVar7[2] + 0x29) == '\0') {
          *(int **)(piVar7[2] + 4) = piVar5;
        }
        piVar7[1] = piVar5[1];
        if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
        goto LAB_10009441;
      }
LAB_1000939f:
      *(undefined1 *)(piVar7 + 10) = 1;
      *(undefined1 *)(iVar4 + 0x28) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x28) = 0;
      piVar6 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x28) == '\0') goto LAB_1000939f;
      if (piVar6 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0x29) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        piVar5 = piVar7 + 1;
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int *)(*(int *)(param_1 + 4) + 4) = iVar4;
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
      *(undefined1 *)(*piVar5 + 0x28) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x28) = 0;
      piVar5 = *(int **)(*piVar5 + 4);
      piVar7 = (int *)piVar5[2];
      piVar5[2] = *piVar7;
      if (*(char *)(*piVar7 + 0x29) == '\0') {
        *(int **)(*piVar7 + 4) = piVar5;
      }
      piVar7[1] = piVar5[1];
      if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
        *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
LAB_10009441:
      piVar5[1] = (int)piVar7;
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}



/* ---- FUN_10009490 @ 10009490 size=76 ---- */

void __thiscall FUN_10009490(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)this + 8);
  *(int *)((int)this + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x29) == '\0') {
    *(void **)(*piVar1 + 4) = this;
  }
  piVar1[1] = *(int *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
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



/* ---- FUN_100094e0 @ 100094e0 size=28 ---- */

void FUN_100094e0(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x29);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  return;
}



/* ---- FUN_10009500 @ 10009500 size=80 ---- */

void __thiscall FUN_10009500(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x29) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = this;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
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



/* ---- FUN_10009550 @ 10009550 size=56 ---- */

void FUN_10009550(void)

{
  int in_EAX;
  int local_10 [3];
  
  FUN_10009590(local_10,in_EAX,(int *)**(int **)(in_EAX + 4),in_EAX,*(int **)(in_EAX + 4));
  _free(*(void **)(in_EAX + 4));
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  return;
}



/* ---- FUN_10009590 @ 10009590 size=265 ---- */

void FUN_10009590(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  undefined4 local_8 [2];
  
  piVar4 = (int *)**(int **)(unaff_EDI + 4);
  if ((param_2 == 0) || (param_2 != unaff_EDI)) {
    FUN_1000e9c8();
  }
  if (param_3 == piVar4) {
    piVar4 = *(int **)(unaff_EDI + 4);
    if ((param_4 == 0) || (param_4 != unaff_EDI)) {
      FUN_1000e9c8();
    }
    if (param_5 == piVar4) {
      FUN_100091a0(*(int **)(*(int *)(unaff_EDI + 4) + 4));
      *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
      *(undefined4 *)(unaff_EDI + 8) = 0;
      *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
      *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
      param_1[1] = **(int **)(unaff_EDI + 4);
      *param_1 = unaff_EDI;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_1000e9c8();
    }
    if (param_3 == param_5) break;
    if (param_2 == 0) {
      FUN_1000e9c8();
    }
    if (*(char *)((int)param_3 + 0x29) == '\0') {
      piVar4 = (int *)param_3[2];
      if (*(char *)((int)piVar4 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar2 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x29);
        piVar3 = (int *)param_3[1];
        piVar2 = param_3;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x29);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
    }
    else {
      FUN_1000e9c8();
      piVar4 = param_3;
    }
    FUN_10008e10(unaff_EDI,local_8,param_2,param_3);
    param_3 = piVar4;
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



/* ---- FUN_100096a0 @ 100096a0 size=135 ---- */

undefined4 * __fastcall FUN_100096a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)local_8[1] + 0x29) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x14);
    puVar7 = (undefined4 *)local_8[1];
    do {
      if (uVar1 < 0x10) {
        pbVar5 = (byte *)(param_1 + 4);
      }
      else {
        pbVar5 = *(byte **)(param_1 + 4);
      }
      uVar3 = puVar7[8];
      if ((uint)puVar7[9] < 0x10) {
        pbVar6 = (byte *)(puVar7 + 4);
      }
      else {
        pbVar6 = (byte *)puVar7[4];
      }
      iVar4 = FUN_100033e0(pbVar5,pbVar6);
      if (((iVar4 == 0) && (uVar3 < uVar2)) || (iVar4 < 0)) {
        puVar8 = (undefined4 *)puVar7[2];
      }
      else {
        puVar8 = (undefined4 *)*puVar7;
        local_8 = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0x29) == '\0');
  }
  return local_8;
}



/* ---- FUN_10009730 @ 10009730 size=144 ---- */

undefined4 * FUN_10009730(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001ca45;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x2c);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[9] = 0xf;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_10001670(puVar1 + 3,param_4,0,0xffffffff);
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)((int)puVar1 + 0x29) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@100097c0 @ 100097c0 size=21 ---- */

void Catch_All_100097c0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_100097e0 @ 100097e0 size=55 ---- */

void FUN_100097e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1000e6c1(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  return;
}



/* ---- FUN_10009820 @ 10009820 size=119 ---- */

void FUN_10009820(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_1000e9c8();
  }
  piVar2 = (int *)unaff_ESI[1];
  if (*(char *)((int)piVar2 + 0x29) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x29);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x29);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      unaff_ESI[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x29);
    while ((cVar1 == '\0' && (unaff_ESI[1] == *piVar2))) {
      unaff_ESI[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x29);
    }
    if (*(char *)(unaff_ESI[1] + 0x29) != '\0') {
      FUN_1000e9c8();
      return;
    }
    unaff_ESI[1] = (int)piVar2;
  }
  else {
    iVar3 = piVar2[2];
    unaff_ESI[1] = iVar3;
    if (*(char *)(iVar3 + 0x29) != '\0') {
      FUN_1000e9c8();
      return;
    }
  }
  return;
}



/* ---- FUN_100098a0 @ 100098a0 size=97 ---- */

void FUN_100098a0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_1000e9c8();
  }
  iVar2 = unaff_ESI[1];
  if (*(char *)(iVar2 + 0x29) != '\0') {
    FUN_1000e9c8();
    return;
  }
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0x29) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x29);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x29);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    unaff_ESI[1] = (int)piVar3;
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  cVar1 = *(char *)(iVar2 + 0x29);
  while ((cVar1 == '\0' && (unaff_ESI[1] == *(int *)(iVar2 + 8)))) {
    unaff_ESI[1] = iVar2;
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  unaff_ESI[1] = iVar2;
  return;
}



/* ---- bad_alloc @ 10009910 size=25 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_10025400,1);
  *(undefined ***)this = vftable;
  return this;
}



/* ---- FUN_10009930 @ 10009930 size=202 ---- */

void * __thiscall FUN_10009930(void *this,void *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cc83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  pcVar2 = this;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_10001750(param_1,this,(int)pcVar2 - ((int)this + 1));
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0xf;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0x20) = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_10001750((void *)((int)param_1 + 0x1c),(undefined4 *)param_2,(int)pcVar2 - (int)(param_2 + 1))
  ;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)param_1 + 0x50) = 0xf;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x3c) = 0;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_10001750((void *)((int)param_1 + 0x38),(undefined4 *)param_3,(int)pcVar2 - (int)(param_3 + 1))
  ;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_10009a00 @ 10009a00 size=98 ---- */

void FUN_10009a00(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x50)) {
    _free(*(void **)(unaff_ESI + 0x3c));
  }
  *(undefined4 *)(unaff_ESI + 0x50) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined1 *)(unaff_ESI + 0x3c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x34)) {
    _free(*(void **)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}



/* ---- FUN_10009a70 @ 10009a70 size=100 ---- */

void FUN_10009a70(void)

{
  void *pvVar1;
  _func_void *p_Var2;
  undefined **local_c [3];
  
  pvVar1 = XSystem::MPHeap::Alloc((_THandle *)0x0,0x54);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return;
    }
    p_Var2 = std::set_new_handler((_func_void *)0x0);
    std::set_new_handler(p_Var2);
    if (p_Var2 == (_func_void *)0x0) break;
    (*p_Var2)();
    pvVar1 = XSystem::MPHeap::Alloc((_THandle *)0x0,0x54);
  }
  std::exception::exception((exception *)local_c,&PTR_s_bad_allocation_10025400,1);
  local_c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_10021a10);
}



/* ---- FUN_10009ae0 @ 10009ae0 size=14 ---- */

void FUN_10009ae0(void)

{
  void *in_EAX;
  
  if (in_EAX != (void *)0x0) {
    XSystem::MPHeap::Free((_THandle *)0x0,in_EAX);
  }
  return;
}



/* ---- FUN_10009af0 @ 10009af0 size=254 ---- */

void FUN_10009af0(void)

{
  uint uVar1;
  void *pvVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(in_EAX + 0x10);
  while (iVar3 != 0) {
    uVar1 = *(uint *)(in_EAX + 0xc);
    if (*(int *)(in_EAX + 0x10) + uVar1 < uVar1) {
      FUN_1000e9c8();
    }
    uVar4 = uVar1 >> 2;
    if ((uint)(*(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0xc)) <= uVar1) {
      FUN_1000e9c8();
    }
    if (*(uint *)(in_EAX + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(in_EAX + 8);
    }
    pvVar2 = *(void **)(*(int *)(*(int *)(in_EAX + 4) + uVar4 * 4) + (uVar1 & 3) * 4);
    if (pvVar2 != (void *)0x0) {
      if (0xf < *(uint *)((int)pvVar2 + 0x50)) {
        _free(*(void **)((int)pvVar2 + 0x3c));
      }
      *(undefined4 *)((int)pvVar2 + 0x50) = 0xf;
      *(undefined4 *)((int)pvVar2 + 0x4c) = 0;
      *(undefined1 *)((int)pvVar2 + 0x3c) = 0;
      if (0xf < *(uint *)((int)pvVar2 + 0x34)) {
        _free(*(void **)((int)pvVar2 + 0x20));
      }
      *(undefined4 *)((int)pvVar2 + 0x34) = 0xf;
      *(undefined4 *)((int)pvVar2 + 0x30) = 0;
      *(undefined1 *)((int)pvVar2 + 0x20) = 0;
      if (0xf < *(uint *)((int)pvVar2 + 0x18)) {
        _free(*(void **)((int)pvVar2 + 4));
      }
      *(undefined4 *)((int)pvVar2 + 0x18) = 0xf;
      *(undefined4 *)((int)pvVar2 + 0x14) = 0;
      *(undefined1 *)((int)pvVar2 + 4) = 0;
      XSystem::MPHeap::Free((_THandle *)0x0,pvVar2);
    }
    if (*(int *)(in_EAX + 0x10) != 0) {
      *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 1;
      if ((uint)(*(int *)(in_EAX + 8) * 4) <= *(uint *)(in_EAX + 0xc)) {
        *(undefined4 *)(in_EAX + 0xc) = 0;
      }
      iVar3 = *(int *)(in_EAX + 0x10) + -1;
      *(int *)(in_EAX + 0x10) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(in_EAX + 0xc) = 0;
      }
    }
    iVar3 = *(int *)(in_EAX + 0x10);
  }
  FUN_10009dc0();
  return;
}



/* ---- FUN_10009bf0 @ 10009bf0 size=146 ---- */

void FUN_10009bf0(undefined4 param_1,void *param_2,char *param_3,char *param_4)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d0fd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026450);
  local_4 = 0;
  pvVar1 = (void *)FUN_10009a70();
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    param_4 = (char *)0x0;
  }
  else {
    param_4 = FUN_10009930(param_2,pvVar1,param_3,param_4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10009d40(&param_4);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026450);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_10009c90 @ 10009c90 size=152 ---- */

undefined4 FUN_10009c90(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026450);
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026450);
    return 0;
  }
  uVar1 = *(uint *)(unaff_ESI + 0xc);
  if (*(int *)(unaff_ESI + 0x10) + uVar1 < uVar1) {
    FUN_1000e9c8();
  }
  uVar4 = uVar1 >> 2;
  if ((uint)(*(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0xc)) <= uVar1) {
    FUN_1000e9c8();
  }
  if (*(uint *)(unaff_ESI + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(unaff_ESI + 8);
  }
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) + (uVar1 & 3) * 4);
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + 1;
    if ((uint)(*(int *)(unaff_ESI + 8) * 4) <= *(uint *)(unaff_ESI + 0xc)) {
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
    iVar3 = *(int *)(unaff_ESI + 0x10) + -1;
    *(int *)(unaff_ESI + 0x10) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026450);
  return uVar2;
}



/* ---- FUN_10009d30 @ 10009d30 size=12 ---- */

void FUN_10009d30(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026450);
  return;
}



/* ---- FUN_10009d40 @ 10009d40 size=113 ---- */

void FUN_10009d40(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10) & 3U) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 4U >> 2)) {
    FUN_10009e30();
  }
  uVar4 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  uVar3 = uVar4 >> 2;
  if (*(uint *)(in_EAX + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) == 0) {
    uVar2 = FUN_1000e6c1(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar3 * 4) = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}



/* ---- FUN_10009dc0 @ 10009dc0 size=102 ---- */

void FUN_10009dc0(void)

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



/* ---- FUN_10009e30 @ 10009e30 size=462 ---- */

void FUN_10009e30(void)

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
  undefined1 local_64 [4];
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48 [7];
  undefined **ppuStack_2c;
  uint local_c;
  
  uVar2 = *(uint *)(unaff_EBX + 8);
  local_c = 1;
  if (uVar2 == 0xfffffff) {
    ExceptionList = local_48 + 0xb;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = 0;
    FUN_10001750(local_64,(undefined4 *)"deque<T> too long",0x11);
    FUN_10003480(local_48,local_64);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_48,&DAT_10021aa4);
  }
  uVar4 = uVar2 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
LAB_10009e63:
    if (uVar2 <= 0xfffffff - uVar4) {
      local_c = uVar4;
    }
  }
  else if (1 < uVar4) goto LAB_10009e63;
  uVar4 = *(uint *)(unaff_EBX + 0xc) >> 2;
  _Dst = (undefined4 *)FUN_1000a010(local_c + uVar2);
  iVar5 = uVar4 * 4;
  pvVar1 = (void *)(iVar5 + *(int *)(unaff_EBX + 4));
  iVar3 = (*(int *)(unaff_EBX + 8) * 4 - (int)pvVar1) + *(int *)(unaff_EBX + 4) >> 2;
  puVar6 = _Dst + uVar4 + iVar3;
  if (iVar3 != 0) {
    ppuStack_2c = (undefined **)0x10009ebf;
    _memmove_s(_Dst + uVar4,iVar3 * 4,pvVar1,iVar3 * 4);
  }
  if (local_c < uVar4) {
    iVar3 = (int)(local_c * 4) >> 2;
    if (iVar3 != 0) {
      _DstSize = iVar3 * 4;
      ppuStack_2c = (undefined **)0x10009f26;
      _memmove_s(puVar6,_DstSize,*(void **)(unaff_EBX + 4),_DstSize);
    }
    pvVar1 = (void *)(*(int *)(unaff_EBX + 4) + local_c * 4);
    iVar5 = (iVar5 - (int)pvVar1) + *(int *)(unaff_EBX + 4) >> 2;
    puVar6 = _Dst + iVar5;
    if (iVar5 != 0) {
      ppuStack_2c = (undefined **)0x10009f4f;
      _memmove_s(_Dst,iVar5 * 4,pvVar1,iVar5 * 4);
    }
    if (local_c == 0) goto LAB_10009f62;
    uVar4 = local_c;
  }
  else {
    iVar5 = iVar5 >> 2;
    if (iVar5 != 0) {
      ppuStack_2c = (undefined **)0x10009ee9;
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
    if (uVar4 == 0) goto LAB_10009f62;
    puVar6 = _Dst;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
LAB_10009f62:
  if (*(void **)(unaff_EBX + 4) != (void *)0x0) {
    _free(*(void **)(unaff_EBX + 4));
  }
  *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + local_c;
  *(undefined4 **)(unaff_EBX + 4) = _Dst;
  return;
}



/* ---- FUN_1000a010 @ 1000a010 size=85 ---- */

void __fastcall FUN_1000a010(uint param_1)

{
  char *local_10;
  undefined **local_c [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    local_10 = (char *)0x0;
    std::exception::exception((exception *)local_c,&local_10);
    local_c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_10021a10);
  }
  FUN_1000e6c1(param_1 * 4);
  return;
}



/* ---- FUN_1000a070 @ 1000a070 size=195 ---- */

undefined4 * FUN_1000a070(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001ca17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::CSrc::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  local_4 = 4;
  FUN_1000a410();
  FUN_1000a410();
  FUN_1000a410();
  FUN_1000a410();
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_1000a140 @ 1000a140 size=30 ---- */

undefined4 * __thiscall FUN_1000a140(void *this,byte param_1)

{
  FUN_1000a160(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_1000a160 @ 1000a160 size=168 ---- */

void __fastcall FUN_1000a160(undefined4 *param_1)

{
  *param_1 = GAS::CSrc::vftable;
  if (0xf < (uint)param_1[0x23]) {
    _free((void *)param_1[0x1e]);
  }
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if (0xf < (uint)param_1[0x1c]) {
    _free((void *)param_1[0x17]);
  }
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (0xf < (uint)param_1[0x15]) {
    _free((void *)param_1[0x10]);
  }
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (0xf < (uint)param_1[0xe]) {
    _free((void *)param_1[9]);
  }
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (0xf < (uint)param_1[7]) {
    _free((void *)param_1[2]);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* ---- FUN_1000a210 @ 1000a210 size=85 ---- */

bool FUN_1000a210(void)

{
  LPCSTR lpFileName;
  HANDLE hFile;
  DWORD DVar1;
  int unaff_EBX;
  
  if (*(uint *)(unaff_EBX + 0x8c) < 0x10) {
    lpFileName = (LPCSTR)(unaff_EBX + 0x78);
  }
  else {
    lpFileName = *(LPCSTR *)(unaff_EBX + 0x78);
  }
  hFile = CreateFileA(lpFileName,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return false;
  }
  DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
  CloseHandle(hFile);
  return *(DWORD *)(unaff_EBX + 0x98) == DVar1;
}



/* ---- FUN_1000a270 @ 1000a270 size=405 ---- */

void __fastcall FUN_1000a270(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  char ***pppcVar5;
  void *pvVar6;
  int local_68 [2];
  void *local_60;
  uint local_4c;
  undefined1 local_48 [4];
  char ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  char ***local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001cc40;
  local_c = ExceptionList;
  local_10 = DAT_100241b0 ^ (uint)local_68;
  ExceptionList = &local_c;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (char ***)((uint)local_28[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  pvVar6 = (void *)(param_1 + 0x3c);
  local_4 = 1;
  local_68[0] = param_1;
  uVar1 = FUN_10002e10((int)pvVar6,"size:",5);
  iVar2 = FUN_10002d90((int)pvVar6,&DAT_10020778,1);
  pvVar3 = (void *)FUN_10002d60(uVar1,pvVar6,iVar2 - uVar1);
  local_4._0_1_ = 2;
  FUN_10001670(local_2c,pvVar3,0,0xffffffff);
  local_4._0_1_ = 1;
  if (0xf < local_4c) {
    _free(local_60);
  }
  pvVar3 = (void *)FUN_10002d60(iVar2 + 1,pvVar6,0xff);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_10001670(local_48,pvVar3,0,0xffffffff);
  if (0xf < local_4c) {
    _free(local_60);
  }
  pppcVar5 = local_28[0];
  if (local_14 < 0x10) {
    pppcVar5 = (char ***)local_28;
  }
  lVar4 = _atol((char *)pppcVar5);
  iVar2 = local_68[0];
  *(long *)(local_68[0] + 0x90) = lVar4;
  pppcVar5 = local_44[0];
  if (local_30 < 0x10) {
    pppcVar5 = (char ***)local_44;
  }
  lVar4 = _atol((char *)pppcVar5);
  *(long *)(iVar2 + 0x94) = lVar4;
  if (0xf < local_30) {
    _free(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_14) {
    _free(local_28[0]);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_68);
  return;
}



/* ---- FUN_1000a410 @ 1000a410 size=146 ---- */

void FUN_1000a410(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 local_c [3];
  
  uVar1 = *(uint *)((int)unaff_EDI + 0x18);
  puVar5 = (undefined4 *)((int)unaff_EDI + 4);
  if (uVar1 < 0x10) {
    puVar2 = puVar5;
  }
  else {
    puVar2 = (undefined4 *)*puVar5;
  }
  puVar2 = (undefined4 *)(*(int *)((int)unaff_EDI + 0x14) + (int)puVar2);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1000a451:
    FUN_1000e9c8();
  }
  else {
    if (uVar1 < 0x10) {
      puVar3 = puVar5;
    }
    else {
      puVar3 = (undefined4 *)*puVar5;
    }
    if (puVar2 < puVar3) goto LAB_1000a451;
    if (uVar1 < 0x10) {
      puVar3 = puVar5;
    }
    else {
      puVar3 = (undefined4 *)*puVar5;
    }
    if ((undefined4 *)(*(int *)((int)unaff_EDI + 0x14) + (int)puVar3) < puVar2) goto LAB_1000a451;
  }
  uVar1 = *(uint *)((int)unaff_EDI + 0x18);
  if (uVar1 < 0x10) {
    puVar3 = puVar5;
  }
  else {
    puVar3 = (undefined4 *)*puVar5;
  }
  if (puVar3 != (undefined4 *)0x0) {
    if (uVar1 < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    if (puVar4 <= puVar3) {
      if (0xf < uVar1) {
        puVar5 = (undefined4 *)*puVar5;
      }
      if (puVar3 <= (undefined4 *)(*(int *)((int)unaff_EDI + 0x14) + (int)puVar5))
      goto LAB_1000a48c;
    }
  }
  FUN_1000e9c8();
LAB_1000a48c:
  FUN_1000a4b0(unaff_EDI,local_c,unaff_EDI,(int)puVar3,unaff_EDI,(int)puVar2);
  return;
}



/* ---- FUN_1000a4b0 @ 1000a4b0 size=243 ---- */

undefined4 *
FUN_1000a4b0(void *param_1,undefined4 *param_2,void *param_3,int param_4,void *param_5,int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)param_1 + 0x18);
  puVar3 = (undefined4 *)((int)param_1 + 4);
  if (uVar1 < 0x10) {
    puVar4 = puVar3;
  }
  else {
    puVar4 = (undefined4 *)*puVar3;
  }
  if (puVar4 == (undefined4 *)0x0) {
LAB_1000a4f0:
    FUN_1000e9c8();
  }
  else {
    if (uVar1 < 0x10) {
      puVar2 = puVar3;
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (puVar4 < puVar2) goto LAB_1000a4f0;
    if (uVar1 < 0x10) {
      puVar2 = puVar3;
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
    }
    if ((undefined4 *)(*(int *)((int)param_1 + 0x14) + (int)puVar2) < puVar4) goto LAB_1000a4f0;
  }
  if (param_4 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if ((param_3 != (void *)0xfffffffe) && ((param_3 == (void *)0x0 || (param_3 != param_1)))) {
      FUN_1000e9c8();
    }
    puVar4 = (undefined4 *)(param_4 - (int)puVar4);
  }
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_5 != (void *)0xfffffffe) && ((param_5 == (void *)0x0 || (param_5 != param_3)))) {
      FUN_1000e9c8();
    }
    uVar1 = param_6 - param_4;
  }
  FUN_10001820(param_1,puVar4,uVar1);
  uVar1 = *(uint *)((int)param_1 + 0x18);
  if (uVar1 < 0x10) {
    puVar2 = puVar3;
  }
  else {
    puVar2 = (undefined4 *)*puVar3;
  }
  puVar4 = (undefined4 *)((int)puVar4 + (int)puVar2);
  *param_2 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    if (uVar1 < 0x10) {
      puVar2 = puVar3;
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (puVar2 <= puVar4) {
      if (0xf < uVar1) {
        puVar3 = (undefined4 *)*puVar3;
      }
      if (puVar4 <= (undefined4 *)(*(int *)((int)param_1 + 0x14) + (int)puVar3)) goto LAB_1000a595;
    }
  }
  FUN_1000e9c8();
LAB_1000a595:
  *param_2 = param_1;
  param_2[1] = puVar4;
  return param_2;
}



/* ---- FUN_1000a5b0 @ 1000a5b0 size=201 ---- */

undefined4 * FUN_1000a5b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d096;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::CSrcMgr::vftable;
  iVar2 = FUN_1000d760();
  param_1[2] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  local_4 = 0;
  uVar3 = FUN_10002370();
  param_1[5] = uVar3;
  param_1[6] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1000be40(*(int **)(param_1[2] + 4));
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  piVar1 = (int *)param_1[5];
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  param_1[6] = 0;
  if (_Memory != (int *)param_1[5]) {
    do {
      piVar1 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)param_1[5]);
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_1000a680 @ 1000a680 size=30 ---- */

undefined4 * __thiscall FUN_1000a680(void *this,byte param_1)

{
  FUN_1000a6b0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- thunk_FUN_1000aff0 @ 1000a6a0 size=5 ---- */

void thunk_FUN_1000aff0(void)

{
  FUN_1000aff0();
  return;
}



/* ---- FUN_1000a6b0 @ 1000a6b0 size=103 ---- */

void __fastcall FUN_1000a6b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d626;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::CSrcMgr::vftable;
  local_4 = 1;
  FUN_1000a720((int)param_1);
  FUN_10002390();
  local_4 = 0xffffffff;
  FUN_1000aff0();
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000a720 @ 1000a720 size=166 ---- */

/* WARNING: Removing unreachable block (ram,0x1000a73c) */

void FUN_1000a720(int param_1)

{
  int *piVar1;
  int *_Memory;
  undefined4 *puVar2;
  
  for (puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x14);
      puVar2 != *(undefined4 **)(param_1 + 0x14); puVar2 = (undefined4 *)*puVar2) {
    if (puVar2 == *(undefined4 **)(param_1 + 0x14)) {
      FUN_1000e9c8();
    }
    if ((undefined4 *)puVar2[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar2[2])(1);
    }
    if (puVar2 == *(undefined4 **)(param_1 + 0x14)) {
      FUN_1000e9c8();
    }
  }
  piVar1 = *(int **)(param_1 + 0x14);
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (_Memory != *(int **)(param_1 + 0x14)) {
    do {
      piVar1 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x14));
  }
  FUN_1000be40(*(int **)(*(int *)(param_1 + 8) + 4));
  *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  return;
}



/* ---- FUN_1000a7d0 @ 1000a7d0 size=719 ---- */

undefined4 * __thiscall
FUN_1000a7d0(void *this,int param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  undefined4 *local_60;
  int local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [4];
  void *local_48;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [4];
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d5e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  local_4 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
  pcVar3 = this;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10001750(local_4c,this,(int)pcVar3 - ((int)this + 1));
  local_4._0_1_ = 1;
  FUN_10004030(&local_60);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_34) {
    _free(local_48);
  }
  iVar2 = *(int *)(param_1 + 8);
  if ((local_60 == (undefined4 *)0x0) || (local_60 != (undefined4 *)(param_1 + 4))) {
    FUN_1000e9c8();
  }
  if (local_5c == iVar2) {
    local_60 = (undefined4 *)FUN_1000e6c1(0xa0);
    local_4._0_1_ = 2;
    if (local_60 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_1000a070(local_60);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_60 = puVar4;
    if (this != (void *)0x0) {
      pcVar3 = this;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_10001750(puVar4 + 1,this,(int)pcVar3 - ((int)this + 1));
    }
    if (param_2 != (char *)0x0) {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_10001750(puVar4 + 8,(undefined4 *)param_2,(int)pcVar3 - (int)(param_2 + 1));
    }
    if (param_3 != (char *)0x0) {
      pcVar3 = param_3;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_10001750(puVar4 + 0x16,(undefined4 *)param_3,(int)pcVar3 - (int)(param_3 + 1));
    }
    if (param_4 != (char *)0x0) {
      pcVar3 = param_4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_10001750(puVar4 + 0xf,(undefined4 *)param_4,(int)pcVar3 - (int)(param_4 + 1));
    }
    FUN_1000a270((int)puVar4);
    if (param_5 != (char *)0x0) {
      lVar5 = _atol(param_5);
      puVar4[0x26] = lVar5;
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = (void *)((uint)local_48 & 0xffffff00);
    pcVar3 = this;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_10001750(local_4c,this,(int)pcVar3 - ((int)this + 1));
    local_4._0_1_ = 3;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    FUN_10001670(local_30,local_4c,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,4);
    local_14 = puVar4;
    FUN_1000abe0(local_58,(undefined4 *)(param_1 + 4),(int *)local_58,local_30);
    if (0xf < local_18) {
      _free(local_2c);
    }
    local_4 = local_4 & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    if (0xf < local_34) {
      _free(local_48);
    }
    iVar2 = *(int *)(param_1 + 0x14);
    iVar6 = FUN_1000c170(iVar2,*(undefined4 *)(iVar2 + 4),&local_60);
    FUN_1000b200(param_1 + 0x10);
    *(int *)(iVar2 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  }
  else {
    if (local_60 == (undefined4 *)0x0) {
      FUN_1000e9c8();
    }
    if (local_5c == local_60[1]) {
      FUN_1000e9c8();
    }
    puVar4 = *(undefined4 **)(local_5c + 0x28);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  }
  ExceptionList = local_c;
  return puVar4;
}



/* ---- FUN_1000aaa0 @ 1000aaa0 size=203 ---- */

undefined4 FUN_1000aaa0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint in_stack_00000020;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c9b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10004030(&local_14);
  iVar1 = *(int *)(param_1 + 8);
  if ((local_14 == 0) || (local_14 != param_1 + 4)) {
    FUN_1000e9c8();
  }
  if (local_10 == iVar1) {
    if (0xf < in_stack_00000020) {
      _free(param_3);
    }
    ExceptionList = local_c;
    return 0;
  }
  if (local_14 == 0) {
    FUN_1000e9c8();
  }
  if (local_10 == *(int *)(local_14 + 4)) {
    FUN_1000e9c8();
  }
  uVar2 = *(undefined4 *)(local_10 + 0x28);
  if (0xf < in_stack_00000020) {
    _free(param_3);
  }
  ExceptionList = local_c;
  return uVar2;
}



/* ---- FUN_1000ab70 @ 1000ab70 size=110 ---- */

undefined4 FUN_1000ab70(int param_1)

{
  undefined4 extraout_EAX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d5a5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  local_4 = 0;
  FUN_1000b5d0(param_1,param_1 + 0x10,(undefined4 *)**(undefined4 **)(param_1 + 0x14),param_1 + 0x10
               ,*(undefined4 **)(param_1 + 0x14));
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}



/* ---- FUN_1000abe0 @ 1000abe0 size=362 ---- */

/* WARNING: Removing unreachable block (ram,0x1000ac49) */

int * __thiscall FUN_1000abe0(void *this,undefined4 *param_1,int *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *this_00;
  bool local_18;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar10 = (undefined4 *)((undefined4 *)param_1[1])[1];
  local_18 = true;
  this_00 = (undefined4 *)param_1[1];
  if (*(char *)((int)puVar10 + 0x2d) == '\0') {
    uVar1 = *(uint *)((int)param_3 + 0x14);
    uVar2 = *(uint *)((int)param_3 + 0x18);
    do {
      uVar3 = puVar10[8];
      if ((uint)puVar10[9] < 0x10) {
        pbVar8 = (byte *)(puVar10 + 4);
      }
      else {
        pbVar8 = (byte *)puVar10[4];
      }
      pbVar9 = (byte *)((int)param_3 + 4);
      if (0xf < uVar2) {
        pbVar9 = *(byte **)pbVar9;
      }
      local_8 = puVar10;
      uVar6 = FUN_100033e0(pbVar8,pbVar9);
      if (uVar6 == 0) {
        if (uVar1 < uVar3) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar1 != uVar3);
        }
      }
      local_18 = (int)uVar6 < 0;
      if (local_18) {
        puVar10 = (undefined4 *)*puVar10;
      }
      else {
        puVar10 = (undefined4 *)puVar10[2];
      }
    } while (*(char *)((int)puVar10 + 0x2d) == '\0');
    this = extraout_ECX;
    this_00 = local_8;
  }
  local_8 = param_1;
  local_4 = this_00;
  if (local_18) {
    if (this_00 == *(undefined4 **)param_1[1]) {
      piVar7 = FUN_1000ad60(this_00,(int)param_1,(int *)&local_8,'\x01',param_3);
      iVar4 = *piVar7;
      param_2[1] = piVar7[1];
      *param_2 = iVar4;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
    FUN_1000c810();
    this = extraout_ECX_00;
  }
  puVar10 = local_4;
  bVar5 = FUN_10004960(this,(int)(local_4 + 3));
  if (bVar5) {
    piVar7 = FUN_1000ad60(this_00,(int)param_1,(int *)&local_8,local_18,param_3);
    iVar4 = piVar7[1];
    *param_2 = *piVar7;
    param_2[1] = iVar4;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  param_2[1] = (int)puVar10;
  *param_2 = (int)local_8;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



/* ---- FUN_1000ad50 @ 1000ad50 size=12 ---- */

void FUN_1000ad50(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  return;
}



/* ---- FUN_1000ad60 @ 1000ad60 size=641 ---- */

int * __thiscall FUN_1000ad60(void *this,int param_1,int *param_2,char param_3,void *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < *(uint *)(param_1 + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  piVar3 = FUN_1000b140(*(undefined4 *)(param_1 + 4),this,*(undefined4 *)(param_1 + 4),param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (this == *(void **)(param_1 + 4)) {
    *(int **)((int)*(void **)(param_1 + 4) + 4) = piVar3;
    **(undefined4 **)(param_1 + 4) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    if (param_3 != '\0') {
      *(int **)this = piVar3;
      if (this == (void *)**(int **)(param_1 + 4)) {
        **(int **)(param_1 + 4) = (int)piVar3;
      }
      goto LAB_1000ae36;
    }
    *(int **)((int)this + 8) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
    if (this != *(void **)(iVar4 + 8)) goto LAB_1000ae36;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_1000ae36:
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2c) = 1;
      param_2[1] = (int)piVar3;
      *param_2 = param_1;
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
          if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
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
        if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
        goto LAB_1000afa1;
      }
LAB_1000aeff:
      *(undefined1 *)(piVar7 + 0xb) = 1;
      *(undefined1 *)(iVar4 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar6 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x2c) == '\0') goto LAB_1000aeff;
      if (piVar6 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0x2d) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        piVar5 = piVar7 + 1;
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int *)(*(int *)(param_1 + 4) + 4) = iVar4;
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
      if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
        *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
LAB_1000afa1:
      piVar5[1] = (int)piVar7;
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}



/* ---- FUN_1000aff0 @ 1000aff0 size=56 ---- */

void FUN_1000aff0(void)

{
  int in_EAX;
  int local_10 [3];
  
  FUN_1000b030(local_10,in_EAX,(int *)**(int **)(in_EAX + 4),in_EAX,*(int **)(in_EAX + 4));
  _free(*(void **)(in_EAX + 4));
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  return;
}



/* ---- FUN_1000b030 @ 1000b030 size=265 ---- */

void FUN_1000b030(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  undefined4 local_8 [2];
  
  piVar4 = (int *)**(int **)(unaff_EDI + 4);
  if ((param_2 == 0) || (param_2 != unaff_EDI)) {
    FUN_1000e9c8();
  }
  if (param_3 == piVar4) {
    piVar4 = *(int **)(unaff_EDI + 4);
    if ((param_4 == 0) || (param_4 != unaff_EDI)) {
      FUN_1000e9c8();
    }
    if (param_5 == piVar4) {
      FUN_1000be40(*(int **)(*(int *)(unaff_EDI + 4) + 4));
      *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
      *(undefined4 *)(unaff_EDI + 8) = 0;
      *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
      *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
      param_1[1] = **(int **)(unaff_EDI + 4);
      *param_1 = unaff_EDI;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_1000e9c8();
    }
    if (param_3 == param_5) break;
    if (param_2 == 0) {
      FUN_1000e9c8();
    }
    if (*(char *)((int)param_3 + 0x2d) == '\0') {
      piVar4 = (int *)param_3[2];
      if (*(char *)((int)piVar4 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar2 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x2d);
        piVar3 = (int *)param_3[1];
        piVar2 = param_3;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x2d);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
    }
    else {
      FUN_1000e9c8();
      piVar4 = param_3;
    }
    FUN_1000b2a0(unaff_EDI,local_8,param_2,param_3);
    param_3 = piVar4;
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



/* ---- FUN_1000b140 @ 1000b140 size=155 ---- */

undefined4 * FUN_1000b140(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001c995;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[9] = 0xf;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_10001670(puVar1 + 3,param_4,0,0xffffffff);
    puVar1[10] = *(undefined4 *)((int)param_4 + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@1000b1db @ 1000b1db size=21 ---- */

void Catch_All_1000b1db(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_1000b200 @ 1000b200 size=154 ---- */

void __fastcall FUN_1000b200(int param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001d028;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0x3fffffff) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_10001750(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* ---- FUN_1000b2a0 @ 1000b2a0 size=783 ---- */

/* WARNING: Removing unreachable block (ram,0x1000b3c2) */
/* WARNING: Removing unreachable block (ram,0x1000b3d3) */
/* WARNING: Removing unreachable block (ram,0x1000b3dc) */
/* WARNING: Removing unreachable block (ram,0x1000b3df) */
/* WARNING: Removing unreachable block (ram,0x1000b3cf) */
/* WARNING: Removing unreachable block (ram,0x1000b3ed) */
/* WARNING: Removing unreachable block (ram,0x1000b3fe) */
/* WARNING: Removing unreachable block (ram,0x1000b409) */
/* WARNING: Removing unreachable block (ram,0x1000b405) */
/* WARNING: Removing unreachable block (ram,0x1000b3f9) */
/* WARNING: Removing unreachable block (ram,0x1000b40c) */

void FUN_1000b2a0(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x2d) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021a68);
  }
  FUN_10004870();
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
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_4) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if ((int *)**(int **)(param_1 + 4) == param_4) {
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
    **(int **)(param_1 + 4) = (int)piVar5;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      uVar4 = FUN_1000b5b0();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[0xb] == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[0xb] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000d2a0(piVar7,param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(*piVar6 + 0x2c) == '\x01') && (*(char *)(piVar6[2] + 0x2c) == '\x01'))
            goto LAB_1000b4f5;
            if (*(char *)(piVar6[2] + 0x2c) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              *(undefined1 *)(piVar6 + 0xb) = 0;
              FUN_1000c3f0(piVar6,param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar6[2] + 0x2c) = 1;
            FUN_1000d2a0(piVar7,param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000c3f0(piVar7,param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x2c) != '\x01') || (*(char *)(*piVar6 + 0x2c) != '\x01')) {
              if (*(char *)(*piVar6 + 0x2c) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x2c) = 1;
                *(undefined1 *)(piVar6 + 0xb) = 0;
                FUN_1000d2a0(piVar6,param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
              *(undefined1 *)(piVar7 + 0xb) = 1;
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              FUN_1000c3f0(piVar7,param_1);
              break;
            }
LAB_1000b4f5:
            *(undefined1 *)(piVar6 + 0xb) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 0xb) = 1;
  }
  if (0xf < (uint)param_4[9]) {
    _free((void *)param_4[4]);
  }
  param_4[9] = 0xf;
  param_4[8] = 0;
  *(undefined1 *)(param_4 + 4) = 0;
  _free(param_4);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000b5b0 @ 1000b5b0 size=28 ---- */

void FUN_1000b5b0(void)

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



/* ---- FUN_1000b5d0 @ 1000b5d0 size=90 ---- */

void FUN_1000b5d0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

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
  FUN_1000b630(unaff_ESI,param_4,unaff_ESI,**(int **)(unaff_ESI + 4),param_2,param_3,param_4,param_5
              );
  return;
}



/* ---- FUN_1000b630 @ 1000b630 size=181 ---- */

void FUN_1000b630(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 *param_6,int param_7,undefined4 *param_8)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1001d580;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if ((param_5 == 0) || (param_5 != param_7)) {
      FUN_1000e9c8();
    }
    if (param_6 == param_8) break;
    if (param_5 == 0) {
      FUN_1000e9c8();
    }
    if (param_6 == *(undefined4 **)(param_5 + 4)) {
      FUN_1000e9c8();
    }
    iVar1 = FUN_1000c170(param_4,*(undefined4 *)(param_4 + 4),param_6 + 2);
    FUN_1000b200(param_1);
    *(int *)(param_4 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    if (param_6 == *(undefined4 **)(param_5 + 4)) {
      FUN_1000e9c8();
    }
    param_6 = (undefined4 *)*param_6;
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@1000b6d1 @ 1000b6d1 size=92 ---- */

void Catch_All_1000b6d1(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  uVar5 = FUN_10002350();
  cVar4 = (char)uVar5;
  while (cVar4 != '\0') {
    iVar1 = *(int *)(unaff_EBP + 0x10);
    iVar2 = *(int *)(unaff_EBP + 0x14);
    *(int *)(unaff_EBP + 0x24) = iVar2;
    if (iVar1 == 0) {
      FUN_1000e9c8();
    }
    piVar3 = *(int **)(iVar2 + 4);
    if (piVar3 == *(int **)(iVar1 + 4)) {
      FUN_1000e9c8();
    }
    FUN_1000b750((int *)(unaff_EBP + -0x20),iVar1,piVar3);
    FUN_10002320();
    uVar5 = FUN_10002350();
    cVar4 = (char)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_1000b750 @ 1000b750 size=90 ---- */

void FUN_1000b750(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (param_2 == 0) {
    FUN_1000e9c8();
  }
  if (param_3 == *(int **)(param_2 + 4)) {
    FUN_1000e9c8();
  }
  iVar1 = *param_3;
  if (param_3 != *(int **)(unaff_EBX + 4)) {
    *(int *)param_3[1] = iVar1;
    *(int *)(*param_3 + 4) = param_3[1];
    _free(param_3);
    *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -1;
  }
  *param_1 = param_2;
  param_1[1] = iVar1;
  return;
}



/* ---- FUN_1000b7b0 @ 1000b7b0 size=89 ---- */

int FUN_1000b7b0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_1000a410();
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_1000b810 @ 1000b810 size=236 ---- */

undefined4 * FUN_1000b810(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001cfd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::CUnit::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_4 = 0;
  uVar2 = FUN_10002370();
  param_1[9] = uVar2;
  param_1[10] = 0;
  local_4._0_1_ = 1;
  iVar3 = FUN_1000d760();
  param_1[0xc] = iVar3;
  *(undefined1 *)(iVar3 + 0x2d) = 1;
  *(undefined4 *)(param_1[0xc] + 4) = param_1[0xc];
  *(undefined4 *)param_1[0xc] = param_1[0xc];
  *(undefined4 *)(param_1[0xc] + 8) = param_1[0xc];
  param_1[0xd] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  FUN_1000a410();
  piVar1 = (int *)param_1[9];
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(undefined4 *)(param_1[9] + 4) = param_1[9];
  param_1[10] = 0;
  if (_Memory != (int *)param_1[9]) {
    do {
      piVar1 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)param_1[9]);
  }
  FUN_1000be40(*(int **)(param_1[0xc] + 4));
  *(undefined4 *)(param_1[0xc] + 4) = param_1[0xc];
  param_1[0xd] = 0;
  *(undefined4 *)param_1[0xc] = param_1[0xc];
  *(undefined4 *)(param_1[0xc] + 8) = param_1[0xc];
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_1000b900 @ 1000b900 size=30 ---- */

undefined4 * __thiscall FUN_1000b900(void *this,byte param_1)

{
  FUN_1000b930(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_1000b920 @ 1000b920 size=8 ---- */

void FUN_1000b920(void)

{
  FUN_1000c130();
  return;
}



/* ---- FUN_1000b930 @ 1000b930 size=311 ---- */

void __fastcall FUN_1000b930(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  int *_Memory_00;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d556;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::CUnit::vftable;
  local_4 = 1;
  puVar1 = (undefined4 *)param_1[9];
  puVar3 = (undefined4 *)*puVar1;
  while( true ) {
    if (param_1 == (undefined4 *)0xffffffe0) {
      FUN_1000e9c8();
    }
    if (puVar3 == puVar1) break;
    if (param_1 == (undefined4 *)0xffffffe0) {
      FUN_1000e9c8();
    }
    if (puVar3 == (undefined4 *)param_1[9]) {
      FUN_1000e9c8();
    }
    _Memory = (void *)puVar3[2];
    if (_Memory != (void *)0x0) {
      if (0xf < *(uint *)((int)_Memory + 0x18)) {
        _free(*(void **)((int)_Memory + 4));
      }
      *(undefined4 *)((int)_Memory + 0x18) = 0xf;
      *(undefined4 *)((int)_Memory + 0x14) = 0;
      *(undefined1 *)((int)_Memory + 4) = 0;
      _free(_Memory);
    }
    if (puVar3 == (undefined4 *)param_1[9]) {
      FUN_1000e9c8();
    }
    puVar3 = (undefined4 *)*puVar3;
  }
  FUN_1000c130();
  piVar2 = (int *)param_1[9];
  _Memory_00 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(undefined4 *)(param_1[9] + 4) = param_1[9];
  param_1[10] = 0;
  if (_Memory_00 != (int *)param_1[9]) {
    do {
      piVar2 = (int *)*_Memory_00;
      _free(_Memory_00);
      _Memory_00 = piVar2;
    } while (piVar2 != (int *)param_1[9]);
  }
  _free((void *)param_1[9]);
  param_1[9] = 0;
  if (0xf < (uint)param_1[7]) {
    _free((void *)param_1[2]);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000ba70 @ 1000ba70 size=285 ---- */

void * __thiscall FUN_1000ba70(void *this,undefined1 param_1,void *param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  uint in_stack_0000001c;
  void *local_44;
  void *local_40;
  undefined1 local_3c [4];
  void *local_38;
  undefined4 local_28;
  uint local_24;
  void *local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1001cf8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  local_40 = this;
  local_44 = (void *)FUN_1000e6c1(0x24);
  local_4._0_1_ = 1;
  if (local_44 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_1000b7b0((int)local_44);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  local_44 = this_00;
  FUN_10001670(this_00,&param_1,0,0xffffffff);
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = FUN_1000c170(iVar1,*(undefined4 *)(iVar1 + 4),&local_44);
  FUN_1000c1b0((int)this + 0x20);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = (void *)((uint)local_38 & 0xffffff00);
  FUN_10001670(local_3c,this_00,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
  local_20 = this_00;
  FUN_1000bcd0(local_1c,(undefined4 *)((int)local_40 + 0x2c),(int *)local_1c,local_3c);
  if (0xf < local_24) {
    _free(local_38);
  }
  if (0xf < in_stack_0000001c) {
    _free(param_2);
  }
  ExceptionList = local_c;
  return this_00;
}



/* ---- FUN_1000bb90 @ 1000bb90 size=102 ---- */

int FUN_1000bb90(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x24);
  puVar3 = (undefined4 *)*puVar1;
  while( true ) {
    if (in_EAX == -0x20) {
      FUN_1000e9c8();
    }
    if (puVar3 == puVar1) {
      return 0;
    }
    if (in_EAX == -0x20) {
      FUN_1000e9c8();
    }
    if (puVar3 == *(undefined4 **)(in_EAX + 0x24)) {
      FUN_1000e9c8();
    }
    iVar2 = puVar3[2];
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x1c) != '\0')) break;
    if (puVar3 == *(undefined4 **)(in_EAX + 0x24)) {
      FUN_1000e9c8();
    }
    puVar3 = (undefined4 *)*puVar3;
  }
  return iVar2;
}



/* ---- FUN_1000bc00 @ 1000bc00 size=207 ---- */

int FUN_1000bc00(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint in_stack_00000020;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10004030(&local_14);
  iVar1 = *(int *)(param_1 + 0x30);
  if ((local_14 == 0) || (local_14 != param_1 + 0x2c)) {
    FUN_1000e9c8();
  }
  if (local_10 != iVar1) {
    if (local_14 == 0) {
      FUN_1000e9c8();
    }
    if (local_10 == *(int *)(local_14 + 4)) {
      FUN_1000e9c8();
    }
    iVar1 = *(int *)(local_10 + 0x28);
    if (iVar1 != 0) {
      if (0xf < in_stack_00000020) {
        _free(param_3);
      }
      ExceptionList = local_c;
      return iVar1;
    }
  }
  if (0xf < in_stack_00000020) {
    _free(param_3);
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- FUN_1000bcd0 @ 1000bcd0 size=362 ---- */

/* WARNING: Removing unreachable block (ram,0x1000bd39) */

int * __thiscall FUN_1000bcd0(void *this,undefined4 *param_1,int *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *this_00;
  bool local_18;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar10 = (undefined4 *)((undefined4 *)param_1[1])[1];
  local_18 = true;
  this_00 = (undefined4 *)param_1[1];
  if (*(char *)((int)puVar10 + 0x2d) == '\0') {
    uVar1 = *(uint *)((int)param_3 + 0x14);
    uVar2 = *(uint *)((int)param_3 + 0x18);
    do {
      uVar3 = puVar10[8];
      if ((uint)puVar10[9] < 0x10) {
        pbVar8 = (byte *)(puVar10 + 4);
      }
      else {
        pbVar8 = (byte *)puVar10[4];
      }
      pbVar9 = (byte *)((int)param_3 + 4);
      if (0xf < uVar2) {
        pbVar9 = *(byte **)pbVar9;
      }
      local_8 = puVar10;
      uVar6 = FUN_100033e0(pbVar8,pbVar9);
      if (uVar6 == 0) {
        if (uVar1 < uVar3) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar1 != uVar3);
        }
      }
      local_18 = (int)uVar6 < 0;
      if (local_18) {
        puVar10 = (undefined4 *)*puVar10;
      }
      else {
        puVar10 = (undefined4 *)puVar10[2];
      }
    } while (*(char *)((int)puVar10 + 0x2d) == '\0');
    this = extraout_ECX;
    this_00 = local_8;
  }
  local_8 = param_1;
  local_4 = this_00;
  if (local_18) {
    if (this_00 == *(undefined4 **)param_1[1]) {
      piVar7 = FUN_1000bea0(this_00,(int)param_1,(int *)&local_8,'\x01',param_3);
      iVar4 = *piVar7;
      param_2[1] = piVar7[1];
      *param_2 = iVar4;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
    FUN_1000c810();
    this = extraout_ECX_00;
  }
  puVar10 = local_4;
  bVar5 = FUN_10004960(this,(int)(local_4 + 3));
  if (bVar5) {
    piVar7 = FUN_1000bea0(this_00,(int)param_1,(int *)&local_8,local_18,param_3);
    iVar4 = piVar7[1];
    *param_2 = *piVar7;
    param_2[1] = iVar4;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  param_2[1] = (int)puVar10;
  *param_2 = (int)local_8;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



/* ---- FUN_1000be40 @ 1000be40 size=86 ---- */

void FUN_1000be40(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x2d);
  while (cVar1 == '\0') {
    FUN_1000be40((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (0xf < (uint)param_1[9]) {
      _free((void *)param_1[4]);
    }
    param_1[9] = 0xf;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _free(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}



/* ---- FUN_1000bea0 @ 1000bea0 size=641 ---- */

int * __thiscall FUN_1000bea0(void *this,int param_1,int *param_2,char param_3,void *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cf48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < *(uint *)(param_1 + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  piVar3 = FUN_1000c440(*(undefined4 *)(param_1 + 4),this,*(undefined4 *)(param_1 + 4),param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (this == *(void **)(param_1 + 4)) {
    *(int **)((int)*(void **)(param_1 + 4) + 4) = piVar3;
    **(undefined4 **)(param_1 + 4) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    if (param_3 != '\0') {
      *(int **)this = piVar3;
      if (this == (void *)**(int **)(param_1 + 4)) {
        **(int **)(param_1 + 4) = (int)piVar3;
      }
      goto LAB_1000bf76;
    }
    *(int **)((int)this + 8) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
    if (this != *(void **)(iVar4 + 8)) goto LAB_1000bf76;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_1000bf76:
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2c) = 1;
      param_2[1] = (int)piVar3;
      *param_2 = param_1;
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
          if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
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
        if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
        goto LAB_1000c0e1;
      }
LAB_1000c03f:
      *(undefined1 *)(piVar7 + 0xb) = 1;
      *(undefined1 *)(iVar4 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar6 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x2c) == '\0') goto LAB_1000c03f;
      if (piVar6 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0x2d) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        piVar5 = piVar7 + 1;
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int *)(*(int *)(param_1 + 4) + 4) = iVar4;
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
      if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
        *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
LAB_1000c0e1:
      piVar5[1] = (int)piVar7;
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}



/* ---- FUN_1000c130 @ 1000c130 size=56 ---- */

void FUN_1000c130(void)

{
  int in_EAX;
  int local_10 [3];
  
  FUN_1000c250(local_10,in_EAX,(int *)**(int **)(in_EAX + 4),in_EAX,*(int **)(in_EAX + 4));
  _free(*(void **)(in_EAX + 4));
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  return;
}



/* ---- FUN_1000c170 @ 1000c170 size=51 ---- */

void FUN_1000c170(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1000e6c1(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return;
}



/* ---- FUN_1000c1b0 @ 1000c1b0 size=154 ---- */

void __fastcall FUN_1000c1b0(int param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cf18;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0x3fffffff) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_10001750(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* ---- FUN_1000c250 @ 1000c250 size=265 ---- */

void FUN_1000c250(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  undefined4 local_8 [2];
  
  piVar4 = (int *)**(int **)(unaff_EDI + 4);
  if ((param_2 == 0) || (param_2 != unaff_EDI)) {
    FUN_1000e9c8();
  }
  if (param_3 == piVar4) {
    piVar4 = *(int **)(unaff_EDI + 4);
    if ((param_4 == 0) || (param_4 != unaff_EDI)) {
      FUN_1000e9c8();
    }
    if (param_5 == piVar4) {
      FUN_1000be40(*(int **)(*(int *)(unaff_EDI + 4) + 4));
      *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
      *(undefined4 *)(unaff_EDI + 8) = 0;
      *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
      *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
      param_1[1] = **(int **)(unaff_EDI + 4);
      *param_1 = unaff_EDI;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_1000e9c8();
    }
    if (param_3 == param_5) break;
    if (param_2 == 0) {
      FUN_1000e9c8();
    }
    if (*(char *)((int)param_3 + 0x2d) == '\0') {
      piVar4 = (int *)param_3[2];
      if (*(char *)((int)piVar4 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar2 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x2d);
        piVar3 = (int *)param_3[1];
        piVar2 = param_3;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x2d);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
    }
    else {
      FUN_1000e9c8();
      piVar4 = param_3;
    }
    FUN_1000c500(unaff_EDI,local_8,param_2,param_3);
    param_3 = piVar4;
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



/* ---- FUN_1000c360 @ 1000c360 size=135 ---- */

undefined4 * __fastcall FUN_1000c360(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)local_8[1] + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x14);
    puVar7 = (undefined4 *)local_8[1];
    do {
      if (uVar1 < 0x10) {
        pbVar5 = (byte *)(param_1 + 4);
      }
      else {
        pbVar5 = *(byte **)(param_1 + 4);
      }
      uVar3 = puVar7[8];
      if ((uint)puVar7[9] < 0x10) {
        pbVar6 = (byte *)(puVar7 + 4);
      }
      else {
        pbVar6 = (byte *)puVar7[4];
      }
      iVar4 = FUN_100033e0(pbVar5,pbVar6);
      if (((iVar4 == 0) && (uVar3 < uVar2)) || (iVar4 < 0)) {
        puVar8 = (undefined4 *)puVar7[2];
      }
      else {
        puVar8 = (undefined4 *)*puVar7;
        local_8 = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0x2d) == '\0');
  }
  return local_8;
}



/* ---- FUN_1000c3f0 @ 1000c3f0 size=80 ---- */

void __thiscall FUN_1000c3f0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = this;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
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



/* ---- FUN_1000c440 @ 1000c440 size=155 ---- */

undefined4 * FUN_1000c440(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001c915;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[9] = 0xf;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_10001670(puVar1 + 3,param_4,0,0xffffffff);
    puVar1[10] = *(undefined4 *)((int)param_4 + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@1000c4db @ 1000c4db size=21 ---- */

void Catch_All_1000c4db(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_1000c500 @ 1000c500 size=783 ---- */

/* WARNING: Removing unreachable block (ram,0x1000c622) */
/* WARNING: Removing unreachable block (ram,0x1000c633) */
/* WARNING: Removing unreachable block (ram,0x1000c63c) */
/* WARNING: Removing unreachable block (ram,0x1000c63f) */
/* WARNING: Removing unreachable block (ram,0x1000c62f) */
/* WARNING: Removing unreachable block (ram,0x1000c64d) */
/* WARNING: Removing unreachable block (ram,0x1000c65e) */
/* WARNING: Removing unreachable block (ram,0x1000c669) */
/* WARNING: Removing unreachable block (ram,0x1000c665) */
/* WARNING: Removing unreachable block (ram,0x1000c659) */
/* WARNING: Removing unreachable block (ram,0x1000c66c) */

void FUN_1000c500(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x2d) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021a68);
  }
  FUN_10004870();
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
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_4) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if ((int *)**(int **)(param_1 + 4) == param_4) {
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
    **(int **)(param_1 + 4) = (int)piVar5;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      uVar4 = FUN_1000b5b0();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[0xb] == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[0xb] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000d2a0(piVar7,param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(*piVar6 + 0x2c) == '\x01') && (*(char *)(piVar6[2] + 0x2c) == '\x01'))
            goto LAB_1000c755;
            if (*(char *)(piVar6[2] + 0x2c) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              *(undefined1 *)(piVar6 + 0xb) = 0;
              FUN_1000c3f0(piVar6,param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar6[2] + 0x2c) = 1;
            FUN_1000d2a0(piVar7,param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000c3f0(piVar7,param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x2c) != '\x01') || (*(char *)(*piVar6 + 0x2c) != '\x01')) {
              if (*(char *)(*piVar6 + 0x2c) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x2c) = 1;
                *(undefined1 *)(piVar6 + 0xb) = 0;
                FUN_1000d2a0(piVar6,param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
              *(undefined1 *)(piVar7 + 0xb) = 1;
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              FUN_1000c3f0(piVar7,param_1);
              break;
            }
LAB_1000c755:
            *(undefined1 *)(piVar6 + 0xb) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 0xb) = 1;
  }
  if (0xf < (uint)param_4[9]) {
    _free((void *)param_4[4]);
  }
  param_4[9] = 0xf;
  param_4[8] = 0;
  *(undefined1 *)(param_4 + 4) = 0;
  _free(param_4);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000c810 @ 1000c810 size=119 ---- */

void FUN_1000c810(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_1000e9c8();
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
    if (*(char *)(unaff_ESI[1] + 0x2d) != '\0') {
      FUN_1000e9c8();
      return;
    }
    unaff_ESI[1] = (int)piVar2;
  }
  else {
    iVar3 = piVar2[2];
    unaff_ESI[1] = iVar3;
    if (*(char *)(iVar3 + 0x2d) != '\0') {
      FUN_1000e9c8();
      return;
    }
  }
  return;
}



/* ---- FUN_1000c890 @ 1000c890 size=99 ---- */

void FUN_1000c890(int param_1,undefined1 param_2,void *param_3)

{
  uint in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001cbf8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10001670((void *)(param_1 + 4),&param_2,0,0xffffffff);
  if (0xf < in_stack_00000020) {
    _free(param_3);
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000c900 @ 1000c900 size=217 ---- */

undefined4 * FUN_1000c900(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cec1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::CUnitMgr::vftable;
  iVar2 = FUN_1000d760();
  param_1[2] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  local_4 = 0;
  uVar3 = FUN_10002370();
  param_1[5] = uVar3;
  param_1[6] = 0;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_1000be40(*(int **)(param_1[2] + 4));
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  piVar1 = (int *)param_1[5];
  _Memory = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  param_1[6] = 0;
  if (_Memory != (int *)param_1[5]) {
    do {
      piVar1 = (int *)*_Memory;
      _free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)param_1[5]);
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_1000c9e0 @ 1000c9e0 size=30 ---- */

undefined4 * __thiscall FUN_1000c9e0(void *this,byte param_1)

{
  FUN_1000ca10(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- thunk_FUN_1000d150 @ 1000ca00 size=5 ---- */

void thunk_FUN_1000d150(void)

{
  FUN_1000d150();
  return;
}



/* ---- FUN_1000ca10 @ 1000ca10 size=136 ---- */

void __fastcall FUN_1000ca10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d521;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GAS::CUnitMgr::vftable;
  local_4 = 2;
  FUN_1000a720((int)param_1);
  if (0xf < (uint)param_1[0xd]) {
    _free((void *)param_1[8]);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_10002390();
  local_4 = 0xffffffff;
  FUN_1000d150();
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000caa0 @ 1000caa0 size=207 ---- */

int FUN_1000caa0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint in_stack_00000020;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_10004030(&local_14);
  iVar1 = *(int *)(param_1 + 8);
  if ((local_14 == 0) || (local_14 != param_1 + 4)) {
    FUN_1000e9c8();
  }
  if (local_10 != iVar1) {
    if (local_14 == 0) {
      FUN_1000e9c8();
    }
    if (local_10 == *(int *)(local_14 + 4)) {
      FUN_1000e9c8();
    }
    iVar1 = *(int *)(local_10 + 0x28);
    if (iVar1 != 0) {
      if (0xf < in_stack_00000020) {
        _free(param_3);
      }
      ExceptionList = local_c;
      return iVar1;
    }
  }
  if (0xf < in_stack_00000020) {
    _free(param_3);
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- FUN_1000cb70 @ 1000cb70 size=34 ---- */

void FUN_1000cb70(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}



/* ---- FUN_1000cba0 @ 1000cba0 size=414 ---- */

undefined4 * FUN_1000cba0(int param_1,undefined1 param_2,void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint in_stack_00000020;
  undefined1 in_stack_ffffff90;
  undefined1 uStack_6d;
  uint in_stack_ffffff94;
  void *pvVar4;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001d4e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10004030(&local_38);
  iVar1 = *(int *)(param_1 + 8);
  if ((local_38 == (undefined4 *)0x0) || (local_38 != (undefined4 *)(param_1 + 4))) {
    FUN_1000e9c8();
  }
  if (local_34 == iVar1) {
    local_3c = (undefined4 *)FUN_1000e6c1(0x3c);
    local_4._0_1_ = 2;
    if (local_3c == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_1000b810(local_3c);
    }
    local_38 = (undefined4 *)(local_2c + -0x44);
    local_4._0_1_ = 1;
    pvVar4 = (void *)(in_stack_ffffff94 & 0xffffff00);
    local_3c = puVar2;
    FUN_10001670(local_2c + -0x44,&param_2,0,0xffffffff);
    FUN_1000c890((int)puVar2,in_stack_ffffff90,pvVar4);
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    FUN_10001670(local_2c,&param_2,0,0xffffffff);
    local_4._0_1_ = 3;
    local_10 = puVar2;
    FUN_1000cd40(local_2c,(undefined4 *)(param_1 + 4),(int *)&local_38,local_2c);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_14) {
      _free(local_28);
    }
    iVar1 = *(int *)(param_1 + 0x14);
    iVar3 = FUN_1000c170(iVar1,*(undefined4 *)(iVar1 + 4),&local_3c);
    FUN_1000d3b0(param_1 + 0x10);
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
    if (0xf < in_stack_00000020) {
      _free(param_3);
    }
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
    if (0xf < in_stack_00000020) {
      _free(param_3);
    }
    puVar2 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return puVar2;
}



/* ---- FUN_1000cd40 @ 1000cd40 size=362 ---- */

/* WARNING: Removing unreachable block (ram,0x1000cda9) */

int * __thiscall FUN_1000cd40(void *this,undefined4 *param_1,int *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *this_00;
  bool local_18;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar10 = (undefined4 *)((undefined4 *)param_1[1])[1];
  local_18 = true;
  this_00 = (undefined4 *)param_1[1];
  if (*(char *)((int)puVar10 + 0x2d) == '\0') {
    uVar1 = *(uint *)((int)param_3 + 0x14);
    uVar2 = *(uint *)((int)param_3 + 0x18);
    do {
      uVar3 = puVar10[8];
      if ((uint)puVar10[9] < 0x10) {
        pbVar8 = (byte *)(puVar10 + 4);
      }
      else {
        pbVar8 = (byte *)puVar10[4];
      }
      pbVar9 = (byte *)((int)param_3 + 4);
      if (0xf < uVar2) {
        pbVar9 = *(byte **)pbVar9;
      }
      local_8 = puVar10;
      uVar6 = FUN_100033e0(pbVar8,pbVar9);
      if (uVar6 == 0) {
        if (uVar1 < uVar3) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar1 != uVar3);
        }
      }
      local_18 = (int)uVar6 < 0;
      if (local_18) {
        puVar10 = (undefined4 *)*puVar10;
      }
      else {
        puVar10 = (undefined4 *)puVar10[2];
      }
    } while (*(char *)((int)puVar10 + 0x2d) == '\0');
    this = extraout_ECX;
    this_00 = local_8;
  }
  local_8 = param_1;
  local_4 = this_00;
  if (local_18) {
    if (this_00 == *(undefined4 **)param_1[1]) {
      piVar7 = FUN_1000cec0(this_00,(int)param_1,(int *)&local_8,'\x01',param_3);
      iVar4 = *piVar7;
      param_2[1] = piVar7[1];
      *param_2 = iVar4;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
    FUN_1000c810();
    this = extraout_ECX_00;
  }
  puVar10 = local_4;
  bVar5 = FUN_10004960(this,(int)(local_4 + 3));
  if (bVar5) {
    piVar7 = FUN_1000cec0(this_00,(int)param_1,(int *)&local_8,local_18,param_3);
    iVar4 = piVar7[1];
    *param_2 = *piVar7;
    param_2[1] = iVar4;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  param_2[1] = (int)puVar10;
  *param_2 = (int)local_8;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



/* ---- FUN_1000ceb0 @ 1000ceb0 size=12 ---- */

void FUN_1000ceb0(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
  return;
}



/* ---- FUN_1000cec0 @ 1000cec0 size=641 ---- */

int * __thiscall FUN_1000cec0(void *this,int param_1,int *param_2,char param_3,void *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ce78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < *(uint *)(param_1 + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  piVar3 = FUN_1000d2f0(*(undefined4 *)(param_1 + 4),this,*(undefined4 *)(param_1 + 4),param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (this == *(void **)(param_1 + 4)) {
    *(int **)((int)*(void **)(param_1 + 4) + 4) = piVar3;
    **(undefined4 **)(param_1 + 4) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    if (param_3 != '\0') {
      *(int **)this = piVar3;
      if (this == (void *)**(int **)(param_1 + 4)) {
        **(int **)(param_1 + 4) = (int)piVar3;
      }
      goto LAB_1000cf96;
    }
    *(int **)((int)this + 8) = piVar3;
    iVar4 = *(int *)(param_1 + 4);
    if (this != *(void **)(iVar4 + 8)) goto LAB_1000cf96;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_1000cf96:
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2c) = 1;
      param_2[1] = (int)piVar3;
      *param_2 = param_1;
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
          if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
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
        if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
        goto LAB_1000d101;
      }
LAB_1000d05f:
      *(undefined1 *)(piVar7 + 0xb) = 1;
      *(undefined1 *)(iVar4 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar6 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x2c) == '\0') goto LAB_1000d05f;
      if (piVar6 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0x2d) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        piVar5 = piVar7 + 1;
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int *)(*(int *)(param_1 + 4) + 4) = iVar4;
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
      if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
        *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
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
LAB_1000d101:
      piVar5[1] = (int)piVar7;
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}



/* ---- FUN_1000d150 @ 1000d150 size=56 ---- */

void FUN_1000d150(void)

{
  int in_EAX;
  int local_10 [3];
  
  FUN_1000d190(local_10,in_EAX,(int *)**(int **)(in_EAX + 4),in_EAX,*(int **)(in_EAX + 4));
  _free(*(void **)(in_EAX + 4));
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  return;
}



/* ---- FUN_1000d190 @ 1000d190 size=265 ---- */

void FUN_1000d190(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  undefined4 local_8 [2];
  
  piVar4 = (int *)**(int **)(unaff_EDI + 4);
  if ((param_2 == 0) || (param_2 != unaff_EDI)) {
    FUN_1000e9c8();
  }
  if (param_3 == piVar4) {
    piVar4 = *(int **)(unaff_EDI + 4);
    if ((param_4 == 0) || (param_4 != unaff_EDI)) {
      FUN_1000e9c8();
    }
    if (param_5 == piVar4) {
      FUN_1000be40(*(int **)(*(int *)(unaff_EDI + 4) + 4));
      *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
      *(undefined4 *)(unaff_EDI + 8) = 0;
      *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
      *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
      param_1[1] = **(int **)(unaff_EDI + 4);
      *param_1 = unaff_EDI;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_1000e9c8();
    }
    if (param_3 == param_5) break;
    if (param_2 == 0) {
      FUN_1000e9c8();
    }
    if (*(char *)((int)param_3 + 0x2d) == '\0') {
      piVar4 = (int *)param_3[2];
      if (*(char *)((int)piVar4 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar2 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x2d);
        piVar3 = (int *)param_3[1];
        piVar2 = param_3;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x2d);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
    }
    else {
      FUN_1000e9c8();
      piVar4 = param_3;
    }
    FUN_1000d450(unaff_EDI,local_8,param_2,param_3);
    param_3 = piVar4;
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



/* ---- FUN_1000d2a0 @ 1000d2a0 size=76 ---- */

void __thiscall FUN_1000d2a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)this + 8);
  *(int *)((int)this + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
    *(void **)(*piVar1 + 4) = this;
  }
  piVar1[1] = *(int *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
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



/* ---- FUN_1000d2f0 @ 1000d2f0 size=155 ---- */

undefined4 * FUN_1000d2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001c8c5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_1000e6c1(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[9] = 0xf;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_10001670(puVar1 + 3,param_4,0,0xffffffff);
    puVar1[10] = *(undefined4 *)((int)param_4 + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@1000d38b @ 1000d38b size=21 ---- */

void Catch_All_1000d38b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_1000d3b0 @ 1000d3b0 size=154 ---- */

void __fastcall FUN_1000d3b0(int param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ce48;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0x3fffffff) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_10001750(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021aa4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* ---- FUN_1000d450 @ 1000d450 size=783 ---- */

/* WARNING: Removing unreachable block (ram,0x1000d572) */
/* WARNING: Removing unreachable block (ram,0x1000d583) */
/* WARNING: Removing unreachable block (ram,0x1000d58c) */
/* WARNING: Removing unreachable block (ram,0x1000d58f) */
/* WARNING: Removing unreachable block (ram,0x1000d57f) */
/* WARNING: Removing unreachable block (ram,0x1000d59d) */
/* WARNING: Removing unreachable block (ram,0x1000d5ae) */
/* WARNING: Removing unreachable block (ram,0x1000d5b9) */
/* WARNING: Removing unreachable block (ram,0x1000d5b5) */
/* WARNING: Removing unreachable block (ram,0x1000d5a9) */
/* WARNING: Removing unreachable block (ram,0x1000d5bc) */

void FUN_1000d450(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ce18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x2d) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_10001750(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_10003480(local_34,local_50);
    local_34[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_10021a68);
  }
  FUN_10004870();
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
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_4) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if ((int *)**(int **)(param_1 + 4) == param_4) {
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
    **(int **)(param_1 + 4) = (int)piVar5;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      uVar4 = FUN_1000b5b0();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[0xb] == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[0xb] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000d2a0(piVar7,param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(*piVar6 + 0x2c) == '\x01') && (*(char *)(piVar6[2] + 0x2c) == '\x01'))
            goto LAB_1000d6a5;
            if (*(char *)(piVar6[2] + 0x2c) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              *(undefined1 *)(piVar6 + 0xb) = 0;
              FUN_1000c3f0(piVar6,param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar6[2] + 0x2c) = 1;
            FUN_1000d2a0(piVar7,param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_1000c3f0(piVar7,param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x2c) != '\x01') || (*(char *)(*piVar6 + 0x2c) != '\x01')) {
              if (*(char *)(*piVar6 + 0x2c) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x2c) = 1;
                *(undefined1 *)(piVar6 + 0xb) = 0;
                FUN_1000d2a0(piVar6,param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
              *(undefined1 *)(piVar7 + 0xb) = 1;
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              FUN_1000c3f0(piVar7,param_1);
              break;
            }
LAB_1000d6a5:
            *(undefined1 *)(piVar6 + 0xb) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 0xb) = 1;
  }
  if (0xf < (uint)param_4[9]) {
    _free((void *)param_4[4]);
  }
  param_4[9] = 0xf;
  param_4[8] = 0;
  *(undefined1 *)(param_4 + 4) = 0;
  _free(param_4);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_1000d760 @ 1000d760 size=55 ---- */

void FUN_1000d760(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1000e6c1(0x30);
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



/* ---- FUN_1000d7a0 @ 1000d7a0 size=181 ---- */

void FUN_1000d7a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 *param_6,int param_7,undefined4 *param_8)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1001d4a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if ((param_5 == 0) || (param_5 != param_7)) {
      FUN_1000e9c8();
    }
    if (param_6 == param_8) break;
    if (param_5 == 0) {
      FUN_1000e9c8();
    }
    if (param_6 == *(undefined4 **)(param_5 + 4)) {
      FUN_1000e9c8();
    }
    iVar1 = FUN_1000c170(param_4,*(undefined4 *)(param_4 + 4),param_6 + 2);
    FUN_1000d3b0(param_1);
    *(int *)(param_4 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    if (param_6 == *(undefined4 **)(param_5 + 4)) {
      FUN_1000e9c8();
    }
    param_6 = (undefined4 *)*param_6;
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@1000d841 @ 1000d841 size=92 ---- */

void Catch_All_1000d841(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  uVar5 = FUN_10002350();
  cVar4 = (char)uVar5;
  while (cVar4 != '\0') {
    iVar1 = *(int *)(unaff_EBP + 0x10);
    iVar2 = *(int *)(unaff_EBP + 0x14);
    *(int *)(unaff_EBP + 0x24) = iVar2;
    if (iVar1 == 0) {
      FUN_1000e9c8();
    }
    piVar3 = *(int **)(iVar2 + 4);
    if (piVar3 == *(int **)(iVar1 + 4)) {
      FUN_1000e9c8();
    }
    FUN_1000b750((int *)(unaff_EBP + -0x20),iVar1,piVar3);
    FUN_10002320();
    uVar5 = FUN_10002350();
    cVar4 = (char)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_1000d8c0 @ 1000d8c0 size=123 ---- */

undefined4 * FUN_1000d8c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStackY_a0 [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cdeb;
  local_c = ExceptionList;
  uVar3 = DAT_100241b0 ^ (uint)(auStackY_a0 + 0x88);
  ExceptionList = &local_c;
  *param_1 = GAS::CXMLStream::vftable;
  FUN_10005ec0(param_1 + 1);
  local_4 = 0;
  puVar1 = (undefined4 *)param_1[7];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[10];
    (*(code *)*puVar2)(1,uVar3);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_1000d940 @ 1000d940 size=68 ---- */

undefined4 * __thiscall FUN_1000d940(void *this,byte param_1)

{
  *(undefined ***)this = GAS::CXMLStream::vftable;
  *(undefined4 *)((int)this + 4) = TiXmlDocument::vftable;
  if (*(undefined4 **)((int)this + 0x38) != &DAT_10026420) {
    _free(*(undefined4 **)((int)this + 0x38));
  }
  FUN_100056f0((undefined4 *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_1000d990 @ 1000d990 size=94 ---- */

bool FUN_1000d990(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    return false;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[10];
    (*(code *)*puVar2)(1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  (**(code **)(*(int *)(param_1 + 4) + 8))(param_2,0,0);
  return *(char *)(param_1 + 0x30) == '\0';
}



/* ---- FUN_1000d9f0 @ 1000d9f0 size=176 ---- */

undefined4 FUN_1000d9f0(undefined4 param_1,long *param_2)

{
  byte bVar1;
  byte *in_EAX;
  int *piVar2;
  char *_Str;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  piVar2 = (int *)FUN_10005850();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_10005850();
    if (piVar2 == (int *)0x0) goto LAB_1000da98;
  }
  pbVar5 = (byte *)(piVar2[8] + 8);
  do {
    bVar1 = *pbVar5;
    bVar6 = bVar1 < *in_EAX;
    if (bVar1 != *in_EAX) {
LAB_1000da40:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1000da45;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar6 = bVar1 < in_EAX[1];
    if (bVar1 != in_EAX[1]) goto LAB_1000da40;
    pbVar5 = pbVar5 + 2;
    in_EAX = in_EAX + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1000da45:
  if (iVar4 == 0) {
    (**(code **)(*piVar2 + 0x14))();
    iVar4 = FUN_10006860();
    if (iVar4 == 0) {
      _Str = (char *)0x0;
    }
    else {
      _Str = (char *)(*(int *)(iVar4 + 0x18) + 8);
    }
    if (param_2 != (long *)0x0) {
      if (_Str != (char *)0x0) {
        lVar3 = _atol(_Str);
        *param_2 = lVar3;
        return CONCAT31((int3)((uint)lVar3 >> 8),1);
      }
      *param_2 = 0;
    }
    return CONCAT31((int3)((uint)_Str >> 8),1);
  }
LAB_1000da98:
  return (uint)piVar2 & 0xffffff00;
}



/* ---- FUN_1000daa0 @ 1000daa0 size=112 ---- */

undefined4 FUN_1000daa0(char *param_1)

{
  int *piVar1;
  int in_EAX;
  char *pcVar2;
  errno_t eVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar1 = *(int **)(in_EAX + 0x1c);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar4 = 9;
    bVar6 = true;
    pcVar2 = (char *)(piVar1[8] + 8);
    pcVar5 = "response";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar6 = *pcVar2 == *pcVar5;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      (**(code **)(*piVar1 + 0x14))();
      iVar4 = FUN_10006860();
      if (iVar4 == 0) {
        return 0;
      }
      pcVar2 = (char *)(*(int *)(iVar4 + 0x18) + 8);
      if (pcVar2 == (char *)0x0) {
        return 0;
      }
      eVar3 = _strcpy_s(param_1,0x800,pcVar2);
      return CONCAT31((int3)((uint)eVar3 >> 8),1);
    }
    piVar1 = (int *)piVar1[10];
  } while( true );
}



/* ---- FUN_1000db10 @ 1000db10 size=407 ---- */

undefined4 FUN_1000db10(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 in_stack_ffffffb0;
  undefined1 uStack_4d;
  void *in_stack_ffffffb4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_1001d953;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10005850();
  FUN_10005850();
  iVar2 = FUN_10005850();
  do {
    if (iVar2 == 0) {
      ExceptionList = local_14;
      return 1;
    }
    if (iVar2 != 0) {
      for (piVar3 = *(int **)(iVar2 + 0x18); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
        iVar7 = 5;
        bVar10 = true;
        pcVar9 = (char *)(piVar3[8] + 8);
        pcVar5 = "unit";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar10 = *pcVar9 == *pcVar5;
          pcVar9 = pcVar9 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar10);
        if (bVar10) goto joined_r0x1000dba7;
      }
    }
    piVar3 = (int *)0x0;
joined_r0x1000dba7:
    for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
      iVar4 = (**(code **)(*piVar3 + 0x14))();
      for (iVar7 = *(int *)(iVar4 + 0x4c); iVar7 != iVar4 + 0x2c; iVar7 = *(int *)(iVar7 + 0x20)) {
        iVar8 = 3;
        bVar10 = true;
        pcVar9 = (char *)(*(int *)(iVar7 + 0x14) + 8);
        pcVar5 = "id";
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar10 = *pcVar9 == *pcVar5;
          pcVar9 = pcVar9 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar10);
        if (bVar10) {
          pcVar9 = (char *)(*(int *)(iVar7 + 0x18) + 8);
          goto LAB_1000dbe6;
        }
      }
      pcVar9 = (char *)0x0;
LAB_1000dbe6:
      in_stack_ffffffb4 = (void *)((uint)in_stack_ffffffb4 & 0xffffff00);
      pcVar5 = pcVar9;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_10001750((void *)((int)register0x00000010 + -0x50),(undefined4 *)pcVar9,
                   (int)pcVar5 - (int)(pcVar9 + 1));
      uStack_c = 0;
      if (DAT_10026434 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)FUN_1000e6c1(0x38);
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        if (puVar6 == (undefined4 *)0x0) {
          DAT_10026434 = (undefined4 *)0x0;
        }
        else {
          DAT_10026434 = FUN_1000c900(puVar6);
        }
      }
      uStack_c = 0xffffffff;
      FUN_1000cba0((int)DAT_10026434,in_stack_ffffffb0,in_stack_ffffffb4);
    }
    iVar2 = *(int *)(iVar2 + 0x28);
  } while( true );
}



/* ---- FUN_1000dcb0 @ 1000dcb0 size=1713 ---- */

void FUN_1000dcb0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 auStackY_2b4 [128];
  undefined4 in_stack_ffffff58;
  void *in_stack_ffffff5c;
  undefined1 auStack_7c [3];
  char local_79;
  char *pcStack_78;
  int *local_74;
  int *piStack_70;
  char *pcStack_6c;
  undefined4 *puStack_68;
  void *pvStack_64;
  undefined1 *puStack_60;
  int local_5c;
  char *pcStack_58;
  undefined1 auStack_54 [4];
  void *local_50;
  undefined4 local_40;
  uint local_3c;
  undefined1 auStack_38 [4];
  void *local_34;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_1001d914;
  local_14 = ExceptionList;
  local_1c = DAT_100241b0 ^ (uint)auStack_7c;
  ExceptionList = &local_14;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = (void *)((uint)local_34 & 0xffffff00);
  local_3c = 0xf;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffffff00);
  local_c = 1;
  FUN_10005850();
  FUN_10005850();
  local_5c = FUN_10005850();
  if (local_5c != 0) {
    do {
      if (local_5c != 0) {
        for (local_74 = *(int **)(local_5c + 0x18); local_74 != (int *)0x0;
            local_74 = (int *)local_74[10]) {
          iVar8 = 5;
          bVar13 = true;
          pcVar11 = (char *)(local_74[8] + 8);
          pcVar4 = "unit";
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar13 = *pcVar11 == *pcVar4;
            pcVar11 = pcVar11 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar13);
          if (bVar13) goto joined_r0x1000dd85;
        }
      }
      local_74 = (int *)0x0;
joined_r0x1000dd85:
      for (; local_74 != (int *)0x0; local_74 = (int *)local_74[10]) {
        local_79 = '\x01';
        if ((local_74 == (int *)0x0) || (iVar8 = (**(code **)(*local_74 + 0x14))(), iVar8 == 0)) {
          pcVar11 = (char *)0x0;
        }
        else {
          for (iVar10 = *(int *)(iVar8 + 0x4c); iVar10 != iVar8 + 0x2c;
              iVar10 = *(int *)(iVar10 + 0x20)) {
            iVar9 = 3;
            bVar13 = true;
            pcVar11 = (char *)(*(int *)(iVar10 + 0x14) + 8);
            pcVar4 = "id";
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar13 = *pcVar11 == *pcVar4;
              pcVar11 = pcVar11 + 1;
              pcVar4 = pcVar4 + 1;
            } while (bVar13);
            if (bVar13) {
              pcVar11 = (char *)(*(int *)(iVar10 + 0x18) + 8);
              goto LAB_1000dde1;
            }
          }
          pcVar11 = (char *)0x0;
        }
LAB_1000dde1:
        pcVar4 = pcVar11;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        FUN_10001750(auStack_38,(undefined4 *)pcVar11,(int)pcVar4 - (int)(pcVar11 + 1));
        if (local_74 != (int *)0x0) {
          for (piStack_70 = (int *)local_74[6]; piStack_70 != (int *)0x0;
              piStack_70 = (int *)piStack_70[10]) {
            iVar8 = 3;
            bVar13 = true;
            pcVar11 = (char *)(piStack_70[8] + 8);
            pcVar4 = "ac";
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar13 = *pcVar11 == *pcVar4;
              pcVar11 = pcVar11 + 1;
              pcVar4 = pcVar4 + 1;
            } while (bVar13);
            if (bVar13) goto LAB_1000de2f;
          }
        }
        piStack_70 = (int *)0x0;
LAB_1000de2f:
        if (piStack_70 != (int *)0x0) {
LAB_1000de40:
          if ((piStack_70 == (int *)0x0) ||
             (iVar8 = (**(code **)(*piStack_70 + 0x14))(), iVar8 == 0)) {
            pcVar11 = (char *)0x0;
          }
          else {
            for (iVar10 = *(int *)(iVar8 + 0x4c); iVar10 != iVar8 + 0x2c;
                iVar10 = *(int *)(iVar10 + 0x20)) {
              iVar9 = 3;
              bVar13 = true;
              pcVar11 = (char *)(*(int *)(iVar10 + 0x14) + 8);
              pcVar4 = "id";
              do {
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                bVar13 = *pcVar11 == *pcVar4;
                pcVar11 = pcVar11 + 1;
                pcVar4 = pcVar4 + 1;
              } while (bVar13);
              if (bVar13) {
                pcVar11 = (char *)(*(int *)(iVar10 + 0x18) + 8);
                goto LAB_1000de8c;
              }
            }
            pcVar11 = (char *)0x0;
          }
LAB_1000de8c:
          pcVar4 = pcVar11;
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          FUN_10001750(auStack_54,(undefined4 *)pcVar11,(int)pcVar4 - (int)(pcVar11 + 1));
          if (piStack_70 != (int *)0x0) {
            for (piVar3 = (int *)piStack_70[6]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
              iVar8 = 4;
              bVar13 = true;
              pcVar11 = (char *)(piVar3[8] + 8);
              pcVar4 = "src";
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                bVar13 = *pcVar11 == *pcVar4;
                pcVar11 = pcVar11 + 1;
                pcVar4 = pcVar4 + 1;
              } while (bVar13);
              if (bVar13) {
                if (piVar3 != (int *)0x0) {
                  iVar8 = (**(code **)(*piVar3 + 0x14))();
                  if (iVar8 != 0) {
                    puStack_60 = (undefined1 *)(auStackY_2b4 + 0x83);
                    in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
                    FUN_10001670(auStackY_2b4 + 0x83,auStack_38,0,0xffffffff);
                    local_c._0_1_ = 2;
                    if (DAT_10026434 == (undefined4 *)0x0) {
                      pcStack_78 = (char *)FUN_1000e6c1(0x38);
                      local_c._0_1_ = 3;
                      if (pcStack_78 == (char *)0x0) {
                        DAT_10026434 = (undefined4 *)0x0;
                      }
                      else {
                        DAT_10026434 = FUN_1000c900((undefined4 *)pcStack_78);
                      }
                    }
                    local_c = CONCAT31(local_c._1_3_,1);
                    pvVar5 = (void *)FUN_1000caa0((int)DAT_10026434,in_stack_ffffff58,
                                                  in_stack_ffffff5c);
                    puStack_60 = pvVar5;
                    if (pvVar5 != (void *)0x0) {
                      in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
                      pcStack_78 = (char *)(auStackY_2b4 + 0x83);
                      FUN_10001670(auStackY_2b4 + 0x83,auStack_54,0,0xffffffff);
                      pvStack_64 = (void *)FUN_1000bc00((int)pvVar5,in_stack_ffffff58,
                                                        in_stack_ffffff5c);
                      if (pvStack_64 == (void *)0x0) {
                        in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
                        pcStack_78 = (char *)(auStackY_2b4 + 0x83);
                        FUN_10001670(auStackY_2b4 + 0x83,auStack_54,0,0xffffffff);
                        pvStack_64 = FUN_1000ba70(pvVar5,(char)in_stack_ffffff58,in_stack_ffffff5c);
                      }
                      puVar6 = *(undefined4 **)(iVar8 + 0x4c);
                      puVar1 = (undefined4 *)(iVar8 + 0x2c);
                      goto joined_r0x1000dfec;
                    }
                  }
                }
                break;
              }
            }
          }
          goto LAB_1000e2dd;
        }
LAB_1000e2f0:
      }
      local_5c = *(int *)(local_5c + 0x28);
    } while (local_5c != 0);
    if (0xf < local_3c) {
      _free(local_50);
    }
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffffff00);
  if (0xf < local_20) {
    _free(local_34);
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_7c);
  return;
joined_r0x1000dfec:
  if (puVar6 == puVar1) goto LAB_1000e00d;
  iVar10 = 3;
  bVar13 = true;
  pcVar11 = (char *)(puVar6[5] + 8);
  pcVar4 = "id";
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    bVar13 = *pcVar11 == *pcVar4;
    pcVar11 = pcVar11 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar13);
  if (bVar13) {
    pcVar11 = (char *)(puVar6[6] + 8);
    goto LAB_1000e00f;
  }
  puVar6 = (undefined4 *)puVar6[8];
  goto joined_r0x1000dfec;
LAB_1000e00d:
  pcVar11 = (char *)0x0;
LAB_1000e00f:
  pcStack_78 = (char *)(auStackY_2b4 + 0x83);
  in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
  pcVar4 = pcVar11;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  puStack_68 = puVar1;
  FUN_10001750(auStackY_2b4 + 0x83,(undefined4 *)pcVar11,(int)pcVar4 - (int)(pcVar11 + 1));
  local_c._0_1_ = 4;
  if (DAT_10026430 == (undefined4 *)0x0) {
    pcStack_6c = (char *)FUN_1000e6c1(0x1c);
    local_c._0_1_ = 5;
    if (pcStack_6c == (char *)0x0) {
      DAT_10026430 = (undefined4 *)0x0;
    }
    else {
      DAT_10026430 = FUN_1000a5b0((undefined4 *)pcStack_6c);
    }
  }
  local_c._0_1_ = 1;
  puVar6 = (undefined4 *)FUN_1000aaa0((int)DAT_10026430,in_stack_ffffff58,in_stack_ffffff5c);
  if (puVar6 == (undefined4 *)0x0) {
    for (puVar6 = *(undefined4 **)(iVar8 + 0x4c); puVar6 != puVar1; puVar6 = (undefined4 *)puVar6[8]
        ) {
      iVar10 = 6;
      bVar13 = true;
      pcVar11 = (char *)(puVar6[5] + 8);
      pcVar4 = "fsize";
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar13 = *pcVar11 == *pcVar4;
        pcVar11 = pcVar11 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar13);
      if (bVar13) {
        pcStack_58 = (char *)(puVar6[6] + 8);
        goto LAB_1000e0d9;
      }
    }
    pcStack_58 = (char *)0x0;
LAB_1000e0d9:
    for (puVar6 = *(undefined4 **)(iVar8 + 0x4c); puVar6 != puVar1; puVar6 = (undefined4 *)puVar6[8]
        ) {
      iVar10 = 5;
      bVar13 = true;
      pcVar11 = (char *)(puVar6[5] + 8);
      pcVar4 = "meta";
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar13 = *pcVar11 == *pcVar4;
        pcVar11 = pcVar11 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar13);
      if (bVar13) {
        pcStack_6c = (char *)(puVar6[6] + 8);
        goto LAB_1000e109;
      }
    }
    pcStack_6c = (char *)0x0;
LAB_1000e109:
    for (puVar6 = *(undefined4 **)(iVar8 + 0x4c); puVar6 != puVar1; puVar6 = (undefined4 *)puVar6[8]
        ) {
      iVar10 = 7;
      bVar13 = true;
      pcVar11 = (char *)(puVar6[5] + 8);
      pcVar4 = "report";
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar13 = *pcVar11 == *pcVar4;
        pcVar11 = pcVar11 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar13);
      if (bVar13) {
        pcStack_78 = (char *)(puVar6[6] + 8);
        goto LAB_1000e139;
      }
    }
    pcStack_78 = (char *)0x0;
LAB_1000e139:
    for (puVar6 = *(undefined4 **)(iVar8 + 0x4c); puVar6 != puVar1; puVar6 = (undefined4 *)puVar6[8]
        ) {
      iVar8 = 4;
      bVar13 = true;
      pcVar11 = (char *)(puVar6[5] + 8);
      pcVar4 = "uri";
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar13 = *pcVar11 == *pcVar4;
        pcVar11 = pcVar11 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar13);
      if (bVar13) {
        pcVar11 = (char *)(puVar6[6] + 8);
        goto LAB_1000e163;
      }
    }
    pcVar11 = (char *)0x0;
LAB_1000e163:
    for (puVar1 = (undefined4 *)puStack_68[8]; puVar1 != puStack_68;
        puVar1 = (undefined4 *)puVar1[8]) {
      iVar8 = 3;
      bVar13 = true;
      pcVar4 = (char *)(puVar1[5] + 8);
      pcVar12 = "id";
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar13 = *pcVar4 == *pcVar12;
        pcVar4 = pcVar4 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar13);
      if (bVar13) {
        pvVar5 = (void *)(puVar1[6] + 8);
        goto LAB_1000e18f;
      }
    }
    pvVar5 = (void *)0x0;
LAB_1000e18f:
    if (DAT_10026430 == (undefined4 *)0x0) {
      puStack_68 = (undefined4 *)FUN_1000e6c1(0x1c);
      local_c._0_1_ = 6;
      if (puStack_68 == (undefined4 *)0x0) {
        DAT_10026430 = (undefined4 *)0x0;
      }
      else {
        DAT_10026430 = FUN_1000a5b0(puStack_68);
      }
      local_c._0_1_ = 1;
    }
    in_stack_ffffff5c = (void *)0x1000e221;
    puVar6 = FUN_1000a7d0(pvVar5,(int)DAT_10026430,pcVar11,pcStack_78,pcStack_6c,pcStack_58);
  }
  pcStack_78 = (char *)(auStackY_2b4 + 0x83);
  in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
  FUN_10001670(auStackY_2b4 + 0x83,auStack_38,0,0xffffffff);
  local_c._0_1_ = 7;
  if (DAT_1002642c == (undefined4 *)0x0) {
    pcStack_6c = (char *)FUN_1000e6c1(0x10);
    local_c._0_1_ = 8;
    if (pcStack_6c == (char *)0x0) {
      DAT_1002642c = (undefined4 *)0x0;
    }
    else {
      DAT_1002642c = FUN_10008990((undefined4 *)pcStack_6c);
    }
  }
  local_c = CONCAT31(local_c._1_3_,1);
  uVar7 = FUN_10008bd0(DAT_1002642c,in_stack_ffffff58,in_stack_ffffff5c);
  if ((char)uVar7 != '\0') {
    *(undefined1 *)((int)puStack_60 + 0x3a) = 1;
  }
  if (((local_79 != '\0') && (*(char *)((int)puStack_60 + 0x39) != '\0')) &&
     ((*(char *)((int)pvStack_64 + 0x1c) == '\0' ||
      (*(undefined4 **)((int)pvStack_64 + 0x20) != puVar6)))) {
    *(undefined1 *)((int)puStack_60 + 0x38) = 1;
  }
  *(undefined4 **)((int)pvStack_64 + 0x20) = puVar6;
  *(char *)((int)pvStack_64 + 0x1c) = local_79;
  local_79 = '\0';
LAB_1000e2dd:
  piStack_70 = (int *)piStack_70[10];
  if (piStack_70 == (int *)0x0) goto LAB_1000e2f0;
  goto LAB_1000de40;
}



/* ---- FUN_1000e375 @ 1000e375 size=62 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_1000e375(void)

{
  undefined **local_54 [10];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1000e381;
  FUN_10001600(local_2c,"string too long");
  local_8 = 0;
  FUN_10003480(local_54,local_2c);
  local_54[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_10021aa4);
}



/* ---- FUN_1000e3b4 @ 1000e3b4 size=62 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_1000e3b4(void)

{
  undefined **local_54 [10];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1000e3c0;
  FUN_10001600(local_2c,"invalid string position");
  local_8 = 0;
  FUN_10003480(local_54,local_2c);
  local_54[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_10021a68);
}



/* ---- set_new_handler @ 1000e3fd size=58 ---- */

/* Library Function - Single Match
    void (__cdecl*__cdecl std::set_new_handler(void (__cdecl*)(void)))(void)
   
   Library: Visual Studio 2005 Release */

_func_void * __cdecl std::set_new_handler(_func_void *param_1)

{
  _func_void *p_Var1;
  _Lockit local_8 [4];
  
  _Lockit::_Lockit(local_8,1);
  p_Var1 = DAT_100258c0;
  DAT_100258c0 = param_1;
  _set_new_handler((_func_int_uint *)(-(uint)(param_1 != (_func_void *)0x0) & 0x1000e3f3));
  FUN_1000e4b0((int *)local_8);
  return p_Var1;
}



/* ---- _Init_locks @ 1000e437 size=47 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&DAT_10024008);
  if (LVar1 == 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_100258c8;
    do {
      FUN_1000e4c2(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x10025928);
  }
  return this;
}



/* ---- _Lockit @ 1000e48f size=33 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Lockit::_Lockit(int)
   
   Library: Visual Studio 2005 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(uint *)this = param_1 & 3U;
  FUN_1000e4d8((LPCRITICAL_SECTION)(&DAT_100258c8 + (param_1 & 3U) * 0x18));
  return this;
}



/* ---- FUN_1000e4b0 @ 1000e4b0 size=18 ---- */

void __fastcall FUN_1000e4b0(int *param_1)

{
  FUN_1000e4e3((LPCRITICAL_SECTION)(&DAT_100258c8 + *param_1 * 0x18));
  return;
}



/* ---- FUN_1000e4c2 @ 1000e4c2 size=11 ---- */

void __cdecl FUN_1000e4c2(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



/* ---- FUN_1000e4cd @ 1000e4cd size=11 ---- */

void __cdecl FUN_1000e4cd(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



/* ---- FUN_1000e4d8 @ 1000e4d8 size=11 ---- */

void __cdecl FUN_1000e4d8(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



/* ---- FUN_1000e4e3 @ 1000e4e3 size=11 ---- */

void __cdecl FUN_1000e4e3(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



/* ---- _free @ 1000e4ee size=5 ---- */

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
    if (DAT_100264b0 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_10016d0f(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_100103f8();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_1002617c,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10010970();
      DVar4 = GetLastError();
      DVar4 = FUN_10010935(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- FUN_1000e4f3 @ 1000e4f3 size=17 ---- */

void __fastcall FUN_1000e4f3(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = std::exception::vftable;
  return;
}



/* ---- exception @ 1000e504 size=78 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}



/* ---- exception @ 1000e552 size=24 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined ***)this = vftable;
  pcVar1 = *param_1;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = pcVar1;
  return;
}



/* ---- exception @ 1000e56a size=88 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)(this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/* ---- ~exception @ 1000e5c2 size=22 ---- */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}



/* ---- FUN_1000e5d8 @ 1000e5d8 size=13 ---- */

char * __fastcall FUN_1000e5d8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/* ---- FUN_1000e5e5 @ 1000e5e5 size=28 ---- */

exception * __thiscall FUN_1000e5e5(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- _memcpy_s @ 1000e601 size=123 ---- */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  DWORD *pDVar2;
  
  if (_MaxCount == 0) {
LAB_1000e60f:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1000e618:
      pDVar2 = FUN_10010970();
      eVar1 = 0x16;
      *pDVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_1000e60f;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1000e618;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      pDVar2 = FUN_10010970();
      eVar1 = 0x22;
      *pDVar2 = 0x22;
    }
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/* ---- ~type_info @ 1000e67c size=14 ---- */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}



/* ---- `scalar_deleting_destructor' @ 1000e68a size=28 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- operator== @ 1000e6a6 size=27 ---- */

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}



/* ---- FUN_1000e6c1 @ 1000e6c1 size=105 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000e6c1(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined **local_10 [3];
  
  do {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if ((_DAT_10025938 & 1) == 0) {
    _DAT_10025938 = _DAT_10025938 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_1002592c);
    _atexit((_func_4879 *)&LAB_1001daa6);
  }
  std::exception::exception((exception *)local_10,(exception *)&DAT_1002592c);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_10021a10);
}



/* ---- __security_check_cookie @ 1000e72b size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_100241b0) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- _memmove_s @ 1000e73a size=91 ---- */

/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  DWORD *pDVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_1000e78f:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      pDVar1 = FUN_10010970();
      eVar2 = 0x16;
      *pDVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_1000e78f;
      }
      pDVar1 = FUN_10010970();
      eVar2 = 0x22;
      *pDVar1 = 0x22;
    }
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar2;
}



/* ---- _strcpy_s @ 1000e795 size=101 ---- */

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
      pDVar2 = FUN_10010970();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000e7b4;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_10010970();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000e7b4:
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- _clock @ 1000e7fa size=67 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _clock
   
   Library: Visual Studio 2003 Release */

clock_t __cdecl _clock(void)

{
  longlong lVar1;
  undefined8 uVar2;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  lVar1 = (lVar1 - CONCAT44(_DAT_10025944,_DAT_10025940)) + (ulonglong)local_c.dwLowDateTime;
  uVar2 = __aulldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),10000,0);
  return (clock_t)uVar2;
}



/* ---- ___inittime @ 1000e83d size=55 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___inittime
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 ___inittime(void)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  _DAT_10025940 = lVar1 + (ulonglong)local_c.dwLowDateTime;
  return 0;
}



/* ---- __purecall @ 1000e874 size=42 ---- */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10011031(DAT_10025fc4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_10010d75(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* ---- FUN_1000e89e @ 1000e89e size=10 ---- */

void __cdecl FUN_1000e89e(undefined4 param_1)

{
  DAT_10025948 = param_1;
  return;
}



/* ---- __invoke_watson @ 1000e8a8 size=252 ---- */

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
  
  iVar1 = DAT_100241b0;
  local_2d4[0] = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1001157d();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/* ---- FUN_1000e9a4 @ 1000e9a4 size=36 ---- */

void __cdecl
FUN_1000e9a4(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_10011031(DAT_10025948);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_1001157d();
                    /* WARNING: Subroutine does not return */
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x1000e9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- FUN_1000e9c8 @ 1000e9c8 size=16 ---- */

void FUN_1000e9c8(void)

{
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



/* ---- _sprintf_s @ 1000e9d8 size=28 ---- */

/* Library Function - Single Match
    _sprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  char cStack00000010;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,&cStack00000010);
  return iVar1;
}



/* ---- _memchr @ 1000ea00 size=173 ---- */

/* Library Function - Single Match
    _memchr
   
   Library: Visual Studio */

void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  if (_MaxCount == 0) {
    return (void *)0x0;
  }
  uVar6 = _Val & 0xff;
  while (((uint)_Buf & 3) != 0) {
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)_Val) goto LAB_1000ea96;
    _MaxCount = _MaxCount - 1;
    if (_MaxCount == 0) {
      return (void *)0x0;
    }
  }
  uVar2 = _MaxCount - 4;
  if (3 < _MaxCount) {
    uVar6 = uVar6 * 0x1010101;
    puVar4 = _Buf;
    do {
      _Buf = puVar4 + 1;
      if (((*puVar4 ^ uVar6 ^ 0xffffffff ^ (*puVar4 ^ uVar6) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar4;
        cVar5 = (char)uVar6;
        if ((char)uVar1 == cVar5) {
          return puVar4;
        }
        if ((char)(uVar1 >> 8) == cVar5) {
          return (char *)((int)puVar4 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar5) {
          return (char *)((int)puVar4 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar5) goto LAB_1000ea96;
      }
      bVar7 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar4 = _Buf;
    } while (bVar7);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)uVar6) break;
    iVar3 = iVar3 + -1;
  }
LAB_1000ea96:
  return (char *)((int)_Buf + -1);
}



/* ---- FUN_1000eaad @ 1000eaad size=509 ---- */

undefined4 __cdecl
FUN_1000eaad(char *param_1,char *param_2,uint param_3,char *param_4,uint param_5,char *param_6,
            uint param_7,char *param_8,uint param_9)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  DWORD *pDVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_8;
  
  bVar2 = false;
  if (param_1 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      if (param_3 == 0) {
LAB_1000ead2:
        if (param_4 == (char *)0x0) {
          if (param_5 == 0) {
LAB_1000eae3:
            if (param_6 == (char *)0x0) {
              if (param_7 == 0) {
LAB_1000eaf4:
                if (param_8 == (char *)0x0) {
                  if (param_9 == 0) {
LAB_1000eafe:
                    iVar3 = 1;
                    pcVar6 = param_1;
                    do {
                      if (*pcVar6 == '\0') break;
                      iVar3 = iVar3 + -1;
                      pcVar6 = pcVar6 + 1;
                    } while (iVar3 != 0);
                    if (*pcVar6 == ':') {
                      if (param_2 != (char *)0x0) {
                        if (param_3 < 3) goto LAB_1000ec22;
                        _strncpy_s(param_2,param_3,param_1,2);
                      }
                      param_1 = pcVar6 + 1;
                    }
                    else if (param_2 != (char *)0x0) {
                      *param_2 = '\0';
                    }
                    pcVar6 = (char *)0x0;
                    local_8 = (char *)0x0;
                    pcVar7 = param_1;
                    if (*param_1 == '\0') {
LAB_1000ebb5:
                      if (param_4 != (char *)0x0) {
                        *param_4 = '\0';
                      }
                    }
                    else {
                      do {
                        iVar3 = __ismbblead((int)*pcVar7);
                        if (iVar3 == 0) {
                          cVar1 = *pcVar7;
                          if ((cVar1 == '/') || (cVar1 == '\\')) {
                            pcVar6 = pcVar7 + 1;
                          }
                          else if (cVar1 == '.') {
                            local_8 = pcVar7;
                          }
                        }
                        else {
                          pcVar7 = pcVar7 + 1;
                        }
                        pcVar7 = pcVar7 + 1;
                      } while (*pcVar7 != '\0');
                      if (pcVar6 == (char *)0x0) goto LAB_1000ebb5;
                      if (param_4 != (char *)0x0) {
                        if (param_5 <= (uint)((int)pcVar6 - (int)param_1)) goto LAB_1000ec22;
                        _strncpy_s(param_4,param_5,param_1,(int)pcVar6 - (int)param_1);
                      }
                      param_1 = pcVar6;
                    }
                    if ((local_8 == (char *)0x0) || (local_8 < param_1)) {
                      if (param_6 != (char *)0x0) {
                        if (param_7 <= (uint)((int)pcVar7 - (int)param_1)) goto LAB_1000ec22;
                        _strncpy_s(param_6,param_7,param_1,(int)pcVar7 - (int)param_1);
                      }
                      if (param_8 != (char *)0x0) {
                        *param_8 = '\0';
                      }
                      return 0;
                    }
                    if (param_6 != (char *)0x0) {
                      if (param_7 <= (uint)((int)local_8 - (int)param_1)) goto LAB_1000ec22;
                      _strncpy_s(param_6,param_7,param_1,(int)local_8 - (int)param_1);
                    }
                    if (param_8 == (char *)0x0) {
                      return 0;
                    }
                    if ((uint)((int)pcVar7 - (int)local_8) < param_9) {
                      _strncpy_s(param_8,param_9,local_8,(int)pcVar7 - (int)local_8);
                      return 0;
                    }
                    goto LAB_1000ec22;
                  }
                }
                else if (param_9 != 0) goto LAB_1000eafe;
              }
            }
            else if (param_7 != 0) goto LAB_1000eaf4;
          }
        }
        else if (param_5 != 0) goto LAB_1000eae3;
      }
    }
    else if (param_3 != 0) goto LAB_1000ead2;
  }
  bVar2 = true;
LAB_1000ec22:
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    *param_2 = '\0';
  }
  if ((param_4 != (char *)0x0) && (param_5 != 0)) {
    *param_4 = '\0';
  }
  if ((param_6 != (char *)0x0) && (param_7 != 0)) {
    *param_6 = '\0';
  }
  if ((param_8 != (char *)0x0) && (param_9 != 0)) {
    *param_8 = '\0';
  }
  pDVar4 = FUN_10010970();
  if ((param_1 == (char *)0x0) || (bVar2)) {
    uVar5 = 0x16;
    *pDVar4 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    uVar5 = 0x22;
    *pDVar4 = 0x22;
  }
  return uVar5;
}



/* ---- _memmove @ 1000ecb0 size=711 ---- */

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
          goto switchD_1000ee93_caseD_2;
        case 3:
          goto switchD_1000ee93_caseD_3;
        }
        goto switchD_1000ee93_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000ee93_caseD_0;
      case 1:
        goto switchD_1000ee93_caseD_1;
      case 2:
        goto switchD_1000ee93_caseD_2;
      case 3:
        goto switchD_1000ee93_caseD_3;
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
              goto switchD_1000ee93_caseD_2;
            case 3:
              goto switchD_1000ee93_caseD_3;
            }
            goto switchD_1000ee93_caseD_1;
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
              goto switchD_1000ee93_caseD_2;
            case 3:
              goto switchD_1000ee93_caseD_3;
            }
            goto switchD_1000ee93_caseD_1;
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
              goto switchD_1000ee93_caseD_2;
            case 3:
              goto switchD_1000ee93_caseD_3;
            }
            goto switchD_1000ee93_caseD_1;
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
switchD_1000ee93_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_1000ee93_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_1000ee93_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_1000ee93_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10027608 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000ed0c_caseD_2;
      case 3:
        goto switchD_1000ed0c_caseD_3;
      }
      goto switchD_1000ed0c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000ed0c_caseD_0;
    case 1:
      goto switchD_1000ed0c_caseD_1;
    case 2:
      goto switchD_1000ed0c_caseD_2;
    case 3:
      goto switchD_1000ed0c_caseD_3;
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
            goto switchD_1000ed0c_caseD_2;
          case 3:
            goto switchD_1000ed0c_caseD_3;
          }
          goto switchD_1000ed0c_caseD_1;
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
            goto switchD_1000ed0c_caseD_2;
          case 3:
            goto switchD_1000ed0c_caseD_3;
          }
          goto switchD_1000ed0c_caseD_1;
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
            goto switchD_1000ed0c_caseD_2;
          case 3:
            goto switchD_1000ed0c_caseD_3;
          }
          goto switchD_1000ed0c_caseD_1;
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
switchD_1000ed0c_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000ed0c_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000ed0c_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000ed0c_caseD_0:
  return _Dst;
}



/* ---- __vsnprintf_helper @ 1000f015 size=202 ---- */

/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_24._cnt = param_3;
    }
    local_24._flag = 0x42;
    local_24._base = param_2;
    local_24._ptr = param_2;
    iVar2 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar2) {
        local_24._cnt = local_24._cnt - 1;
        if (-1 < local_24._cnt) {
          *local_24._ptr = '\0';
          return iVar2;
        }
        iVar3 = __flsbuf(0,&local_24);
        if (iVar3 != -1) {
          return iVar2;
        }
      }
      param_2[param_3 - 1] = '\0';
      iVar2 = (-1 < local_24._cnt) - 2;
    }
  }
  else {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}



/* ---- __vsprintf_s_l @ 1000f0df size=134 ---- */

/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
      pDVar1 = FUN_10010970();
      *pDVar1 = 0x16;
    }
    else {
      iVar2 = __vsnprintf_helper(&DAT_10012b5e,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
      if (iVar2 < 0) {
        *_DstBuf = '\0';
      }
      if (iVar2 != -2) {
        return iVar2;
      }
      pDVar1 = FUN_10010970();
      *pDVar1 = 0x22;
    }
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* ---- __vsnprintf_s_l @ 1000f165 size=261 ---- */

/* Library Function - Single Match
    __vsnprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
               va_list _ArgList)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (_Format == (char *)0x0) {
    pDVar2 = FUN_10010970();
    *pDVar2 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (char *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_1000f1af:
      if (_DstSize != 0) {
        pDVar2 = FUN_10010970();
        if (_MaxCount < _DstSize) {
          DVar1 = *pDVar2;
          iVar3 = __vsnprintf_helper(&DAT_10012b5e,_DstBuf,_MaxCount + 1,(int)_Format,_Locale,
                                     _ArgList);
          if (iVar3 == -2) {
            pDVar2 = FUN_10010970();
            if (*pDVar2 == 0x22) {
              pDVar2 = FUN_10010970();
              *pDVar2 = DVar1;
              return -1;
            }
            return -1;
          }
LAB_1000f23f:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          DVar1 = *pDVar2;
          iVar3 = __vsnprintf_helper(&DAT_10012b5e,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = '\0';
          if (iVar3 != -2) goto LAB_1000f23f;
          if (_MaxCount == 0xffffffff) {
            pDVar2 = FUN_10010970();
            if (*pDVar2 == 0x22) {
              pDVar2 = FUN_10010970();
              *pDVar2 = DVar1;
              return -1;
            }
            return -1;
          }
        }
        *_DstBuf = '\0';
        if (iVar3 != -2) {
          return -1;
        }
        pDVar2 = FUN_10010970();
        *pDVar2 = 0x22;
        goto LAB_1000f255;
      }
    }
  }
  else if (_DstBuf != (char *)0x0) goto LAB_1000f1af;
  pDVar2 = FUN_10010970();
  *pDVar2 = 0x16;
LAB_1000f255:
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/* ---- __vsnprintf_s @ 1000f26a size=30 ---- */

/* Library Function - Single Match
    __vsnprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}



/* ---- _LocaleUpdate @ 1000f288 size=130 ---- */

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
    if ((*(undefined **)this != PTR_DAT_10024b50) && ((p_Var2->_ownlocale & DAT_10024a6c) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10024970) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10024a6c) == 0)) {
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



/* ---- _fprintf @ 1000f3f8 size=325 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  wchar_t wStack0000000c;
  int local_20;
  
  local_20 = 0;
  if ((_File == (FILE *)0x0) || (_Format == (char *)0x0)) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  FUN_1001243c((uint)_File);
  if ((_File->_flag & 0x40) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_10024510;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_100264e0)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_10024510;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_100264e0)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_1000f500;
    }
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
LAB_1000f500:
  if (local_20 == 0) {
    iVar2 = __stbuf(_File);
    local_20 = FUN_1001173c(_File,(byte *)_Format,(localeinfo_struct *)0x0,&wStack0000000c);
    __ftbuf(iVar2,_File);
  }
  FUN_1000f53d();
  return local_20;
}



/* ---- FUN_1000f53d @ 1000f53d size=10 ---- */

void FUN_1000f53d(void)

{
  int unaff_EBP;
  
  FUN_100124a6(*(uint *)(unaff_EBP + 8));
  return;
}



/* ---- _atol @ 1000f547 size=17 ---- */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/* ---- _atol @ 1000f558 size=5 ---- */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/* ---- __isalpha_l @ 1000f55d size=84 ---- */

/* Library Function - Single Match
    __isalpha_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* ---- _isalpha @ 1000f5b1 size=43 ---- */

/* Library Function - Single Match
    _isalpha
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalpha(int _C)

{
  int iVar1;
  
  if (DAT_10025fe8 == 0) {
    return *(ushort *)(PTR_DAT_10024b40 + _C * 2) & 0x103;
  }
  iVar1 = __isalpha_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* ---- __isdigit_l @ 1000f5dc size=79 ---- */

/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* ---- _isdigit @ 1000f62b size=41 ---- */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_10025fe8 == 0) {
    return (byte)PTR_DAT_10024b40[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* ---- __isspace_l @ 1000f654 size=79 ---- */

/* Library Function - Single Match
    __isspace_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* ---- _isspace @ 1000f6a3 size=41 ---- */

/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2005 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_10025fe8 == 0) {
    return (byte)PTR_DAT_10024b40[_C * 2] & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* ---- __isalnum_l @ 1000f6cc size=84 ---- */

/* Library Function - Single Match
    __isalnum_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* ---- _isalnum @ 1000f720 size=43 ---- */

/* Library Function - Single Match
    _isalnum
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  
  if (DAT_10025fe8 == 0) {
    return *(ushort *)(PTR_DAT_10024b40 + _C * 2) & 0x107;
  }
  iVar1 = __isalnum_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* ---- _strchr @ 1000f760 size=195 ---- */

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2019 */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



/* ---- __tolower_l @ 1000f81e size=279 ---- */

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DWORD *pDVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_1000f87d:
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      pDVar4 = FUN_10010970();
      *pDVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_1000f87d;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}



/* ---- _tolower @ 1000f935 size=39 ---- */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_10025fe8 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}



/* ---- _strncmp @ 1000f95c size=190 ---- */

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (_MaxCount != 4)) {
      pbVar1 = (byte *)_Str1;
      pbVar3 = (byte *)_Str2;
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_1000fa16;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_1000fa16;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_1000fa16;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_1000fa16;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_1000fa16:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}



/* ---- FUN_1000fa1a @ 1000fa1a size=185 ---- */

int __cdecl FUN_1000fa1a(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_10011031(DAT_100264bc);
  piVar2 = (int *)FUN_10011031(DAT_100264b8);
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
        DAT_100264bc = FUN_10010fba((int)pvVar5);
      }
      iVar6 = FUN_10010fba(param_1);
      *piVar2 = iVar6;
      DAT_100264b8 = FUN_10010fba((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/* ---- __onexit @ 1000fb02 size=54 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1001530b();
  p_Var1 = (_onexit_t)FUN_1000fa1a((int)_Func);
  FUN_1000fb38();
  return p_Var1;
}



/* ---- FUN_1000fb38 @ 1000fb38 size=6 ---- */

void FUN_1000fb38(void)

{
  FUN_10015314();
  return;
}



/* ---- _atexit @ 1000fb3e size=18 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- __CRT_INIT@12 @ 1000fb50 size=473 ---- */

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
        _DAT_10026030 = DVar2 * 0x100 + DVar3;
        DAT_10026028 = DVar1;
        _DAT_1002602c = uVar8;
        DAT_10026034 = DVar2;
        _DAT_10026038 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_10027610 = GetCommandLineA();
            DAT_10025950 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_1002594c = DAT_1002594c + 1;
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
    if (0 < DAT_1002594c) {
      DAT_1002594c = DAT_1002594c + -1;
      if (DAT_10026064 == 0) {
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
    FUN_100110a8();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_10024280;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_10011031(DAT_10025fb4);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_10011117((int)_Memory,0);
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



/* ---- ___DllMainCRTStartup @ 1000fd29 size=226 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

BOOL __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_1002594c == 0)) {
LAB_1000fe17:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_1001e288 != (undefined *)0x0) {
        local_20 = (*(code *)PTR_1001e288)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1000fe17;
    }
    local_20 = FUN_10003110(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10003110(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (PTR_1001e288 != (undefined *)0x0) {
        (*(code *)PTR_1001e288)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (PTR_1001e288 != (undefined *)0x0)) {
        local_20 = (*(code *)PTR_1001e288)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/* ---- entry @ 1000fe1f size=33 ---- */

void entry(HMODULE param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- _strlen @ 1000fe40 size=139 ---- */

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
      if ((char)uVar1 == '\0') goto LAB_1000fea3;
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
LAB_1000fea3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* ---- __CxxThrowException@8 @ 1000fecb size=74 ---- */

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
  
  pDVar2 = &DAT_1001e28c;
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



/* ---- _JumpToContinuation @ 1000ff15 size=43 ---- */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000ff3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/* ---- FID_conflict:_CallMemberFunction1 @ 1000ff45 size=7 ---- */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000ff4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}



/* ---- _UnwindNestedFrames @ 1000ff4c size=82 ---- */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000ff75,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* ---- FID_conflict:___CxxFrameHandler3 @ 1000ff9e size=54 ---- */

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



/* ---- _CallSETranslator @ 10010004 size=213 ---- */

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
    *(undefined4 *)param_2 = 0x100100ad;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_100241b0 ^ (uint)&local_2c;
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



/* ---- TranslatorGuardHandler @ 100100d9 size=152 ---- */

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
                    /* WARNING: Could not recover jumptable at 0x1001016e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/* ---- _GetRangeOfTrysToCheck @ 10010176 size=115 ---- */

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



/* ---- __CreateFrameInfo @ 100101e9 size=40 ---- */

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



/* ---- __IsExceptionObjectToBeDestroyed @ 10010211 size=33 ---- */

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



/* ---- __FindAndUnlinkFrame @ 10010232 size=76 ---- */

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



/* ---- _CallCatchBlock2 @ 1001027e size=94 ---- */

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
  
  local_14 = DAT_100241b0 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1000ffd4;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/* ---- __EH_prolog3 @ 100102dc size=51 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100241b0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __EH_prolog3_catch @ 1001030f size=54 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100241b0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- FUN_10010345 @ 10010345 size=10 ---- */

void __cdecl FUN_10010345(undefined4 param_1)

{
  DAT_10025960 = param_1;
  return;
}



/* ---- _set_new_handler @ 1001034f size=49 ---- */

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2005 Release */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  __lock(4);
  p_Var1 = (_func_int_uint *)FUN_10011031(DAT_10025960);
  DAT_10025960 = FUN_10010fba((int)param_1);
  FUN_10016b9a(4);
  return p_Var1;
}



/* ---- __callnewh @ 10010380 size=34 ---- */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_10011031(DAT_10025960);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ---- _free @ 100103a2 size=133 ---- */

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
    if (DAT_100264b0 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_10016d0f(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_100103f8();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_1002617c,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_10010970();
      DVar4 = GetLastError();
      DVar4 = FUN_10010935(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/* ---- FUN_100103f8 @ 100103f8 size=9 ---- */

void FUN_100103f8(void)

{
  FUN_10016b9a(4);
  return;
}



/* ---- _V6_HeapAlloc @ 10010430 size=70 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  int *local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_100264a0) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_10010476();
  }
  return local_20;
}



/* ---- FUN_10010476 @ 10010476 size=9 ---- */

void FUN_10010476(void)

{
  FUN_10016b9a(4);
  return;
}



/* ---- _malloc @ 1001047f size=195 ---- */

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
    pDVar4 = FUN_10010970();
    *pDVar4 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_1002617c == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_10010d75(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_100264b0 == 1) {
      if (_Size == 0) {
        sVar1 = 1;
      }
      else {
        sVar1 = _Size;
      }
LAB_100104f0:
      piVar2 = HeapAlloc(DAT_1002617c,0,sVar1);
    }
    else if ((DAT_100264b0 != 3) || (piVar2 = _V6_HeapAlloc((uint *)_Size), piVar2 == (int *)0x0)) {
      sVar1 = _Size;
      if (_Size == 0) {
        sVar1 = 1;
      }
      sVar1 = sVar1 + 0xf & 0xfffffff0;
      goto LAB_100104f0;
    }
    if (piVar2 != (int *)0x0) {
      return piVar2;
    }
    if (DAT_100262dc == 0) {
      pDVar4 = FUN_10010970();
      *pDVar4 = 0xc;
      goto LAB_1001051e;
    }
    iVar3 = __callnewh(_Size);
    if (iVar3 == 0) {
LAB_1001051e:
      pDVar4 = FUN_10010970();
      *pDVar4 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/* ---- _memset @ 10010550 size=122 ---- */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10027608 != 0)) {
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



/* ---- _memcpy @ 100105d0 size=711 ---- */

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
          goto switchD_100107b3_caseD_2;
        case 3:
          goto switchD_100107b3_caseD_3;
        }
        goto switchD_100107b3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_100107b3_caseD_0;
      case 1:
        goto switchD_100107b3_caseD_1;
      case 2:
        goto switchD_100107b3_caseD_2;
      case 3:
        goto switchD_100107b3_caseD_3;
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
              goto switchD_100107b3_caseD_2;
            case 3:
              goto switchD_100107b3_caseD_3;
            }
            goto switchD_100107b3_caseD_1;
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
              goto switchD_100107b3_caseD_2;
            case 3:
              goto switchD_100107b3_caseD_3;
            }
            goto switchD_100107b3_caseD_1;
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
              goto switchD_100107b3_caseD_2;
            case 3:
              goto switchD_100107b3_caseD_3;
            }
            goto switchD_100107b3_caseD_1;
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
switchD_100107b3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_100107b3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_100107b3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_100107b3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10027608 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1001062c_caseD_2;
      case 3:
        goto switchD_1001062c_caseD_3;
      }
      goto switchD_1001062c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1001062c_caseD_0;
    case 1:
      goto switchD_1001062c_caseD_1;
    case 2:
      goto switchD_1001062c_caseD_2;
    case 3:
      goto switchD_1001062c_caseD_3;
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
            goto switchD_1001062c_caseD_2;
          case 3:
            goto switchD_1001062c_caseD_3;
          }
          goto switchD_1001062c_caseD_1;
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
            goto switchD_1001062c_caseD_2;
          case 3:
            goto switchD_1001062c_caseD_3;
          }
          goto switchD_1001062c_caseD_1;
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
            goto switchD_1001062c_caseD_2;
          case 3:
            goto switchD_1001062c_caseD_3;
          }
          goto switchD_1001062c_caseD_1;
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
switchD_1001062c_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1001062c_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1001062c_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1001062c_caseD_0:
  return _Dst;
}



/* ---- FUN_10010935 @ 10010935 size=59 ---- */

int __cdecl FUN_10010935(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10024030)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10024034);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/* ---- FUN_10010970 @ 10010970 size=19 ---- */

DWORD * FUN_10010970(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100111d6();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10024198;
  }
  return pDVar1 + 2;
}



/* ---- FUN_10010983 @ 10010983 size=19 ---- */

DWORD * FUN_10010983(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100111d6();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1002419c;
  }
  return pDVar1 + 3;
}



/* ---- FUN_10010996 @ 10010996 size=30 ---- */

void __cdecl FUN_10010996(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_10010983();
  *pDVar1 = param_1;
  DVar2 = FUN_10010935(param_1);
  pDVar1 = FUN_10010970();
  *pDVar1 = DVar2;
  return;
}



/* ---- _Type_info_dtor @ 100109b4 size=103 ---- */

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
  _Memory = DAT_10025968;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_10025964;
    while (DAT_10025968 != (int *)0x0) {
      if (*DAT_10025968 == *(int *)(param_1 + 4)) {
        piVar1[1] = DAT_10025968[1];
        _free(_Memory);
        break;
      }
      piVar1 = DAT_10025968;
    }
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_10010a1b();
  return;
}



/* ---- FUN_10010a1b @ 10010a1b size=9 ---- */

void FUN_10010a1b(void)

{
  FUN_10016b9a(0xe);
  return;
}



/* ---- _strcmp @ 10010a30 size=135 ---- */

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
      if (bVar3 != *_Str2) goto LAB_10010a74;
      _Str2 = _Str2 + 1;
      if (bVar3 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10010a40;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar3 = (byte)uVar1;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) goto LAB_10010a74;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) goto LAB_10010a74;
    if (bVar3 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10010a40:
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
LAB_10010a74:
  return (uint)bVar4 * -2 + 1;
}



/* ---- ___report_gsfailure @ 10010ab8 size=260 ---- */

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
  
  _DAT_10025a88 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10025a8c = &uStack00000004;
  _DAT_100259c8 = 0x10001;
  _DAT_10025970 = 0xc0000409;
  _DAT_10025974 = 1;
  local_32c = DAT_100241b0;
  local_328 = DAT_100241b4;
  _DAT_1002597c = _local_res0;
  _DAT_10025a54 = in_GS;
  _DAT_10025a58 = in_FS;
  _DAT_10025a5c = in_ES;
  _DAT_10025a60 = in_DS;
  _DAT_10025a64 = unaff_EDI;
  _DAT_10025a68 = unaff_ESI;
  _DAT_10025a6c = unaff_EBX;
  _DAT_10025a70 = in_EDX;
  _DAT_10025a74 = in_ECX;
  _DAT_10025a78 = in_EAX;
  _DAT_10025a7c = unaff_EBP;
  DAT_10025a80 = _local_res0;
  _DAT_10025a84 = in_CS;
  _DAT_10025a90 = in_SS;
  DAT_100259c0 = IsDebuggerPresent();
  FUN_1001157d();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1001e2ac);
  if (DAT_100259c0 == 0) {
    FUN_1001157d();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- __aulldiv @ 10010bc0 size=104 ---- */

/* Library Function - Single Match
    __aulldiv
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

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



/* ---- __allmul @ 10010c30 size=52 ---- */

/* Library Function - Single Match
    __allmul
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* ---- _abort @ 10010c64 size=242 ---- */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4 [39];
  
  if (((byte)DAT_100241c0 & 1) != 0) {
    FUN_10010d75(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_100241c0 & 2) != 0) {
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



/* ---- __set_abort_behavior @ 10010d57 size=30 ---- */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_100241c0;
  DAT_100241c0 = ~_Mask & DAT_100241c0 | _Flags & _Mask;
  return uVar1;
}



/* ---- FUN_10010d75 @ 10010d75 size=399 ---- */

void __cdecl FUN_10010d75(int param_1)

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
    if (param_1 == (&DAT_100241c8)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_1002595c == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x100241cc);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10025c98,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10025db5 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10025cb1,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10025cb1,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10025cb1);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10025cb1);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x10025c76),
                           (int)&DAT_10025fac - (int)(sVar5 + 0x10025c76),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10025c98,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10025c98,0x314,*(char **)(uVar6 * 8 + 0x100241cc));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10017a92(&DAT_10025c98,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ---- __FF_MSGBANNER @ 10010f15 size=57 ---- */

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
    if (DAT_1002595c != 1) {
      return;
    }
  }
  FUN_10010d75(0xfc);
  FUN_10010d75(0xff);
  return;
}



/* ---- FUN_10010f4e @ 10010f4e size=108 ---- */

undefined4 FUN_10010f4e(void)

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



/* ---- FUN_10010fba @ 10010fba size=110 ---- */

int __cdecl FUN_10010fba(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10024284);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10024280 != -1)) {
    iVar3 = DAT_10024280;
    pcVar2 = TlsGetValue(DAT_10024284);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_10011014;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10010f4e();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_10011014:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- __encoded_null @ 10011028 size=9 ---- */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_10010fba(0);
  return;
}



/* ---- FUN_10011031 @ 10011031 size=110 ---- */

int __cdecl FUN_10011031(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10024284);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10024280 != -1)) {
    iVar3 = DAT_10024280;
    pcVar2 = TlsGetValue(DAT_10024284);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1001108b;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10010f4e();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_1001108b:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- FUN_100110a8 @ 100110a8 size=50 ---- */

LPVOID FUN_100110a8(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_10024284);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_10011031(DAT_10025fb0);
    TlsSetValue(DAT_10024284,lpTlsValue);
  }
  return lpTlsValue;
}



/* ---- __mtterm @ 100110da size=61 ---- */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10024280 != -1) {
    iVar2 = DAT_10024280;
    pcVar1 = (code *)FUN_10011031(DAT_10025fb8);
    (*pcVar1)(iVar2);
    DAT_10024280 = -1;
  }
  if (DAT_10024284 != 0xffffffff) {
    TlsFree(DAT_10024284);
    DAT_10024284 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/* ---- FUN_10011117 @ 10011117 size=182 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_10011117(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10024c70;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10010f4e();
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
  *(undefined **)(param_1 + 0x68) = &DAT_10024548;
  InterlockedIncrement((LONG *)&DAT_10024548);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10024b50;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_100111cd();
  return;
}



/* ---- FUN_100111cd @ 100111cd size=9 ---- */

void FUN_100111cd(void)

{
  FUN_10016b9a(0xc);
  return;
}



/* ---- FUN_100111d6 @ 100111d6 size=119 ---- */

DWORD * FUN_100111d6(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_10024280;
  pcVar1 = FUN_100110a8();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_10024280;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_10011031(DAT_10025fb4);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_10011117((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}



/* ---- __getptd @ 1001124d size=24 ---- */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_100111d6();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/* ---- __freefls@4 @ 10011265 size=265 ---- */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10024c70) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10024548)) {
        _free(pLVar1);
      }
    }
    FUN_10011371();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10024b50) && (pLVar1 != (LONG *)&DAT_10024a78)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_1001137d();
    _free(param_1);
  }
  return;
}



/* ---- FUN_10011371 @ 10011371 size=9 ---- */

void FUN_10011371(void)

{
  FUN_10016b9a(0xd);
  return;
}



/* ---- FUN_1001137d @ 1001137d size=9 ---- */

void FUN_1001137d(void)

{
  FUN_10016b9a(0xc);
  return;
}



/* ---- __freeptd @ 10011386 size=105 ---- */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10024280 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10024284), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10024280;
      pcVar2 = TlsGetValue(DAT_10024284);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10024280;
    pcVar2 = (code *)FUN_10011031(DAT_10025fb4);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_10024284 != 0xffffffff) {
    TlsSetValue(DAT_10024284,(LPVOID)0x0);
  }
  return;
}



/* ---- __mtinit @ 100113ef size=388 ---- */

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
  DAT_10025fac = GetProcAddress(hModule,"FlsAlloc");
  DAT_10025fb0 = GetProcAddress(hModule,"FlsGetValue");
  DAT_10025fb4 = GetProcAddress(hModule,"FlsSetValue");
  DAT_10025fb8 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10025fac == (FARPROC)0x0) || (DAT_10025fb0 == (FARPROC)0x0)) ||
      (DAT_10025fb4 == (FARPROC)0x0)) || (DAT_10025fb8 == (FARPROC)0x0)) {
    DAT_10025fb0 = TlsGetValue_exref;
    DAT_10025fac = (FARPROC)&LAB_1001109f;
    DAT_10025fb4 = TlsSetValue_exref;
    DAT_10025fb8 = TlsFree_exref;
  }
  DAT_10024284 = TlsAlloc();
  if ((DAT_10024284 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10024284,DAT_10025fb0), BVar1 != 0))
  {
    __init_pointers();
    DAT_10025fac = (FARPROC)FUN_10010fba((int)DAT_10025fac);
    DAT_10025fb0 = (FARPROC)FUN_10010fba((int)DAT_10025fb0);
    DAT_10025fb4 = (FARPROC)FUN_10010fba((int)DAT_10025fb4);
    DAT_10025fb8 = (FARPROC)FUN_10010fba((int)DAT_10025fb8);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_10011031((int)DAT_10025fac);
      DAT_10024280 = (*pcVar3)(pcVar6);
      if ((DAT_10024280 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_10024280;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_10011031((int)DAT_10025fb4);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_10011117((int)pDVar4,0);
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



/* ---- FUN_10011573 @ 10011573 size=10 ---- */

void __cdecl FUN_10011573(undefined4 param_1)

{
  DAT_10025fc4 = param_1;
  return;
}



/* ---- FUN_1001157d @ 1001157d size=8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001157d(void)

{
  _DAT_1002760c = 0;
  return;
}



/* ---- __flsbuf @ 10011585 size=352 ---- */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  DWORD *pDVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    pDVar2 = FUN_10010970();
    *pDVar2 = 9;
LAB_100115a9:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    pDVar2 = FUN_10010970();
    *pDVar2 = 0x22;
    goto LAB_100115a9;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_10012365(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_10012365(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_10024510;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_100264e0)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_100116cf;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_100116cf:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/* ---- write_char @ 100116e5 size=51 ---- */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



/* ---- write_multi_char @ 10011718 size=36 ---- */

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}



/* ---- FUN_1001173c @ 1001173c size=2420 ---- */

void __cdecl FUN_1001173c(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  DWORD *pDVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined3 extraout_var;
  int iVar8;
  code *pcVar9;
  errno_t eVar10;
  int extraout_ECX;
  byte *pbVar11;
  wchar_t *pwVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  wchar_t *pwVar18;
  undefined4 uVar19;
  localeinfo_struct *plVar20;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  undefined1 *local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 local_234;
  char local_233;
  int local_230;
  FILE *local_22c;
  wchar_t *local_228;
  undefined1 *local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  undefined1 local_210 [20];
  undefined1 local_1fc [491];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_100241b0 ^ (uint)local_1fc;
  local_22c = param_1;
  local_228 = param_4;
  local_248 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_24c = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,param_3);
  if (local_22c != (FILE *)0x0) {
    if ((local_22c->_flag & 0x40) == 0) {
      iVar5 = __fileno(local_22c);
      if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
        puVar7 = &DAT_10024510;
      }
      else {
        iVar5 = __fileno(local_22c);
        uVar6 = __fileno(local_22c);
        puVar7 = (undefined *)((uVar6 & 0x1f) * 0x38 + (&DAT_100264e0)[iVar5 >> 5]);
      }
      if ((puVar7[0x24] & 0x7f) == 0) {
        iVar5 = __fileno(local_22c);
        if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
          puVar7 = &DAT_10024510;
        }
        else {
          iVar5 = __fileno(local_22c);
          uVar6 = __fileno(local_22c);
          puVar7 = (undefined *)((uVar6 & 0x1f) * 0x38 + (&DAT_100264e0)[iVar5 >> 5]);
        }
        if ((puVar7[0x24] & 0x80) == 0) goto LAB_1001187a;
      }
    }
    else {
LAB_1001187a:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_230 = 0;
        local_224 = (undefined1 *)0x0;
        local_250 = (wchar_t *)0x0;
        iVar5 = 0;
        if (local_215 != 0) {
          while( true ) {
            pbVar11 = param_2 + 1;
            local_244 = pbVar11;
            if (local_230 < 0) break;
            if ((byte)(local_215 - 0x20) < 0x59) {
              uVar6 = (byte)"FlsAlloc"[(char)local_215 + 4] & 0xf;
            }
            else {
              uVar6 = 0;
            }
            local_270 = (int)(char)(&DAT_1001e8f0)[uVar6 * 8 + iVar5] >> 4;
            switch(local_270) {
            case 0:
switchD_100118de_caseD_0:
              local_240 = 0;
              iVar5 = __isleadbyte_l((uint)local_215,&local_260);
              if (iVar5 != 0) {
                write_char();
                local_244 = param_2 + 2;
                if (*pbVar11 == 0) {
LAB_10012071:
                  pDVar4 = FUN_10010970();
                  *pDVar4 = 0x16;
                  goto LAB_100117ac;
                }
              }
              write_char();
              break;
            case 1:
              local_21c = -1;
              local_274 = 0;
              local_24c = 0;
              local_23c = 0;
              local_238 = 0;
              local_214 = 0;
              local_240 = 0;
              break;
            case 2:
              if (local_215 == 0x20) {
                local_214 = local_214 | 2;
              }
              else if (local_215 == 0x23) {
                local_214 = local_214 | 0x80;
              }
              else if (local_215 == 0x2b) {
                local_214 = local_214 | 1;
              }
              else if (local_215 == 0x2d) {
                local_214 = local_214 | 4;
              }
              else if (local_215 == 0x30) {
                local_214 = local_214 | 8;
              }
              break;
            case 3:
              if (local_215 == 0x2a) {
                local_228 = param_4 + 2;
                local_23c = *(int *)param_4;
                if (local_23c < 0) {
                  local_214 = local_214 | 4;
                  local_23c = -local_23c;
                }
              }
              else {
                local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 4:
              local_21c = 0;
              break;
            case 5:
              if (local_215 == 0x2a) {
                local_228 = param_4 + 2;
                local_21c = *(int *)param_4;
                if (local_21c < 0) {
                  local_21c = -1;
                }
              }
              else {
                local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 6:
              if (local_215 == 0x49) {
                bVar1 = *pbVar11;
                if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                  local_214 = local_214 | 0x8000;
                  local_244 = param_2 + 3;
                }
                else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                  local_214 = local_214 & 0xffff7fff;
                  local_244 = param_2 + 3;
                }
                else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                         ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                  local_270 = 0;
                  goto switchD_100118de_caseD_0;
                }
              }
              else if (local_215 == 0x68) {
                local_214 = local_214 | 0x20;
              }
              else if (local_215 == 0x6c) {
                if (*pbVar11 == 0x6c) {
                  local_214 = local_214 | 0x1000;
                  local_244 = param_2 + 2;
                }
                else {
                  local_214 = local_214 | 0x10;
                }
              }
              else if (local_215 == 0x77) {
                local_214 = local_214 | 0x800;
              }
              break;
            case 7:
              if ((char)local_215 < 'e') {
                if (local_215 == 100) {
LAB_10011cbd:
                  local_214 = local_214 | 0x40;
LAB_10011cc1:
                  local_224 = (undefined1 *)0xa;
                  goto LAB_10011cc8;
                }
                if ((char)local_215 < 'T') {
                  if (local_215 == 0x53) {
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
                    goto LAB_10011b46;
                  }
                  if (local_215 != 0x41) {
                    if (local_215 == 0x43) {
                      if ((local_214 & 0x830) == 0) {
                        local_214 = local_214 | 0x800;
                      }
                      goto LAB_10011ba3;
                    }
                    if ((local_215 != 0x45) && (local_215 != 0x47)) goto LAB_10011f40;
                  }
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_10011aff:
                  local_214 = local_214 | 0x40;
                  local_264 = (undefined1 *)0x200;
                  pwVar12 = (wchar_t *)local_210;
                  puVar14 = local_264;
                  pwVar18 = (wchar_t *)local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      puVar14 = (undefined1 *)(local_21c + 0x15d);
                      local_220 = (wchar_t *)local_210;
                      local_250 = __malloc_crt((size_t)puVar14);
                      pwVar12 = local_250;
                      pwVar18 = local_250;
                      if (local_250 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar12 = (wchar_t *)local_210;
                        puVar14 = local_264;
                        pwVar18 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar18;
                  local_264 = puVar14;
                  local_27c = *(undefined4 *)param_4;
                  local_228 = param_4 + 4;
                  local_278 = *(undefined4 *)(param_4 + 2);
                  plVar20 = &local_260;
                  iVar8 = (int)(char)local_215;
                  puVar17 = &local_27c;
                  pwVar18 = pwVar12;
                  puVar14 = local_264;
                  iVar5 = local_21c;
                  uVar19 = local_274;
                  pcVar9 = (code *)FUN_10011031((int)PTR_LAB_10024e58);
                  (*pcVar9)(puVar17,pwVar18,puVar14,iVar8,iVar5,uVar19,plVar20);
                  uVar6 = local_214 & 0x80;
                  if ((uVar6 != 0) && (local_21c == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar12;
                    pcVar9 = (code *)FUN_10011031((int)PTR_LAB_10024e64);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((local_215 == 0x67) && (uVar6 == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar12;
                    pcVar9 = (code *)FUN_10011031((int)PTR_LAB_10024e60);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((char)*pwVar12 == '-') {
                    local_214 = local_214 | 0x100;
                    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    local_220 = pwVar12;
                  }
                }
                else {
                  if (local_215 == 0x58) goto LAB_10011dc8;
                  if (local_215 != 0x5a) {
                    if (local_215 == 0x61) goto LAB_10011aff;
                    if (local_215 != 99) goto LAB_10011f40;
LAB_10011ba3:
                    local_228 = param_4 + 2;
                    if ((local_214 & 0x810) == 0) {
                      local_210[0] = (char)*param_4;
                      local_224 = (undefined1 *)0x1;
                    }
                    else {
                      eVar10 = _wctomb_s((int *)&local_224,local_210,0x200,*param_4);
                      if (eVar10 != 0) {
                        local_24c = 1;
                      }
                    }
                    local_220 = (wchar_t *)local_210;
                    goto LAB_10011f40;
                  }
                  psVar2 = *(short **)param_4;
                  local_228 = param_4 + 2;
                  if ((psVar2 != (short *)0x0) &&
                     (local_220 = *(wchar_t **)(psVar2 + 2), local_220 != (wchar_t *)0x0)) {
                    local_224 = (undefined1 *)(int)*psVar2;
                    if ((local_214 & 0x800) == 0) {
                      local_240 = 0;
                    }
                    else {
                      local_224 = (undefined1 *)((int)local_224 / 2);
                      local_240 = 1;
                    }
                    goto LAB_10011f3d;
                  }
                  local_220 = (wchar_t *)PTR_s__null__10024288;
                  pwVar12 = (wchar_t *)PTR_s__null__10024288;
                }
                local_224 = (undefined1 *)_strlen((char *)pwVar12);
LAB_10011f3d:
LAB_10011f40:
                if (local_24c == 0) {
                  if ((local_214 & 0x40) != 0) {
                    if ((local_214 & 0x100) == 0) {
                      if ((local_214 & 1) == 0) {
                        if ((local_214 & 2) == 0) goto LAB_10011f76;
                        local_234 = 0x20;
                      }
                      else {
                        local_234 = 0x2b;
                      }
                    }
                    else {
                      local_234 = 0x2d;
                    }
                    local_238 = 1;
                  }
LAB_10011f76:
                  iVar5 = (local_23c - (int)local_224) - local_238;
                  if ((local_214 & 0xc) == 0) {
                    write_multi_char(0x20,iVar5);
                  }
                  write_string(local_238);
                  if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                    write_multi_char(0x30,iVar5);
                  }
                  if ((local_240 == 0) || ((int)local_224 < 1)) {
                    write_string((int)local_224);
                  }
                  else {
                    local_264 = local_224;
                    pwVar12 = local_220;
                    do {
                      _WCh = *pwVar12;
                      local_264 = local_264 + -1;
                      pwVar12 = pwVar12 + 1;
                      eVar10 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                      if ((eVar10 != 0) || (local_26c[0] == 0)) {
                        local_230 = -1;
                        break;
                      }
                      write_string(local_26c[0]);
                    } while (local_264 != (undefined1 *)0x0);
                  }
                  if ((-1 < local_230) && ((local_214 & 4) != 0)) {
                    write_multi_char(0x20,iVar5);
                  }
                }
              }
              else {
                if ('p' < (char)local_215) {
                  if (local_215 == 0x73) {
LAB_10011b46:
                    iVar5 = local_21c;
                    if (local_21c == -1) {
                      iVar5 = 0x7fffffff;
                    }
                    local_228 = param_4 + 2;
                    local_220 = *(wchar_t **)param_4;
                    if ((local_214 & 0x810) == 0) {
                      if (local_220 == (wchar_t *)0x0) {
                        local_220 = (wchar_t *)PTR_s__null__10024288;
                      }
                      for (pwVar12 = local_220;
                          (iVar5 != 0 && (iVar5 = iVar5 + -1, (char)*pwVar12 != '\0'));
                          pwVar12 = (wchar_t *)((int)pwVar12 + 1)) {
                      }
                      local_224 = (undefined1 *)((int)pwVar12 - (int)local_220);
                    }
                    else {
                      if (local_220 == (wchar_t *)0x0) {
                        local_220 = (wchar_t *)PTR_u__null__1002428c;
                      }
                      local_240 = 1;
                      for (pwVar12 = local_220;
                          (iVar5 != 0 && (iVar5 = iVar5 + -1, *pwVar12 != L'\0'));
                          pwVar12 = pwVar12 + 1) {
                      }
                      local_224 = (undefined1 *)((int)pwVar12 - (int)local_220 >> 1);
                    }
                    goto LAB_10011f3d;
                  }
                  if (local_215 == 0x75) goto LAB_10011cc1;
                  if (local_215 != 0x78) goto LAB_10011f40;
                  local_248 = 0x27;
LAB_10011dee:
                  local_224 = (undefined1 *)0x10;
                  if ((local_214 & 0x80) != 0) {
                    local_233 = (char)local_248 + 'Q';
                    local_234 = 0x30;
                    local_238 = 2;
                  }
LAB_10011cc8:
                  if (((short)local_214 < 0) || ((local_214 & 0x1000) != 0)) {
                    uVar6 = *(uint *)param_4;
                    puVar14 = *(undefined1 **)(param_4 + 2);
                    local_228 = param_4 + 4;
                  }
                  else {
                    local_228 = param_4 + 2;
                    if ((local_214 & 0x20) == 0) {
                      uVar6 = *(uint *)param_4;
                      if ((local_214 & 0x40) == 0) {
                        puVar14 = (undefined1 *)0x0;
                      }
                      else {
                        puVar14 = (undefined1 *)((int)uVar6 >> 0x1f);
                      }
                    }
                    else {
                      if ((local_214 & 0x40) == 0) {
                        uVar6 = (uint)(ushort)*param_4;
                      }
                      else {
                        uVar6 = (uint)*param_4;
                      }
                      puVar14 = (undefined1 *)((int)uVar6 >> 0x1f);
                    }
                  }
                  if ((((local_214 & 0x40) != 0) && ((int)puVar14 < 1)) && ((int)puVar14 < 0)) {
                    bVar15 = uVar6 != 0;
                    uVar6 = -uVar6;
                    puVar14 = (undefined1 *)-(int)(puVar14 + bVar15);
                    local_214 = local_214 | 0x100;
                  }
                  uVar16 = CONCAT44(puVar14,uVar6);
                  if ((local_214 & 0x9000) == 0) {
                    puVar14 = (undefined1 *)0x0;
                  }
                  if (local_21c < 0) {
                    local_21c = 1;
                  }
                  else {
                    local_214 = local_214 & 0xfffffff7;
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                  }
                  if (uVar6 == 0 && puVar14 == (undefined1 *)0x0) {
                    local_238 = 0;
                  }
                  pwVar12 = &local_11;
                  while( true ) {
                    puVar13 = puVar14;
                    iVar5 = local_21c + -1;
                    if ((local_21c < 1) && ((uint)uVar16 == 0 && puVar13 == (undefined1 *)0x0))
                    break;
                    local_21c = iVar5;
                    uVar16 = __aulldvrm((uint)uVar16,(uint)puVar13,(uint)local_224,
                                        (int)local_224 >> 0x1f);
                    iVar5 = extraout_ECX + 0x30;
                    if (0x39 < iVar5) {
                      iVar5 = iVar5 + local_248;
                    }
                    *(char *)pwVar12 = (char)iVar5;
                    pwVar12 = (wchar_t *)((int)pwVar12 + -1);
                    puVar14 = (undefined1 *)((ulonglong)uVar16 >> 0x20);
                    local_264 = puVar13;
                  }
                  local_224 = local_1fc + -(int)pwVar12 + 0x1eb;
                  local_220 = (wchar_t *)((int)pwVar12 + 1);
                  local_21c = iVar5;
                  if ((local_214 & 0x200) != 0) {
                    if (local_224 != (undefined1 *)0x0) {
                      if (*(char *)local_220 == '0') goto LAB_10011f40;
                    }
                    *(char *)pwVar12 = '0';
                    local_224 = local_1fc + -(int)pwVar12 + 0x1ec;
                    local_220 = pwVar12;
                    goto LAB_10011f3d;
                  }
                  goto LAB_10011f40;
                }
                if (local_215 == 0x70) {
                  local_21c = 8;
LAB_10011dc8:
                  local_248 = 7;
                  goto LAB_10011dee;
                }
                if ((char)local_215 < 'e') goto LAB_10011f40;
                if ((char)local_215 < 'h') goto LAB_10011aff;
                if (local_215 == 0x69) goto LAB_10011cbd;
                if (local_215 != 0x6e) {
                  if (local_215 != 0x6f) goto LAB_10011f40;
                  local_224 = (undefined1 *)0x8;
                  if ((local_214 & 0x80) != 0) {
                    local_214 = local_214 | 0x200;
                  }
                  goto LAB_10011cc8;
                }
                piVar3 = *(int **)param_4;
                local_228 = param_4 + 2;
                bVar15 = FUN_10018605();
                if (CONCAT31(extraout_var,bVar15) == 0) goto LAB_10012071;
                if ((local_214 & 0x20) == 0) {
                  *piVar3 = local_230;
                }
                else {
                  *(undefined2 *)piVar3 = (undefined2)local_230;
                }
                local_24c = 1;
              }
              if (local_250 != (wchar_t *)0x0) {
                _free(local_250);
                local_250 = (wchar_t *)0x0;
              }
            }
            local_215 = *local_244;
            if (local_215 == 0) break;
            iVar5 = local_270;
            param_2 = local_244;
            param_4 = local_228;
          }
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_10012098;
      }
    }
  }
  pDVar4 = FUN_10010970();
  *pDVar4 = 0x16;
LAB_100117ac:
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_10012098:
  __security_check_cookie(local_8 ^ (uint)local_1fc);
  return;
}



/* ---- x_ismbbtype_l @ 100120d0 size=81 ---- */

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
    if (uVar1 == 0) goto LAB_10012112;
  }
  iVar2 = 1;
LAB_10012112:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/* ---- __ismbblead @ 10012121 size=19 ---- */

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/* ---- _strncpy_s @ 10012134 size=179 ---- */

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
LAB_10012158:
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
          pDVar2 = FUN_10010970();
          eVar4 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_10012169;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_10012158;
  pDVar2 = FUN_10010970();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_10012169:
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- FUN_100121e7 @ 100121e7 size=129 ---- */

void __cdecl FUN_100121e7(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



/* ---- __VEC_memcpy @ 1001226e size=227 ---- */

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
      FUN_100121e7(param_1,param_2,param_3 - uVar3);
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



/* ---- FUN_10012365 @ 10012365 size=6 ---- */

undefined ** FUN_10012365(void)

{
  return &PTR_DAT_10024290;
}



/* ---- FUN_1001243c @ 1001243c size=60 ---- */

void __cdecl FUN_1001243c(uint param_1)

{
  if ((param_1 < 0x10024290) || (0x100244f0 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  __lock(((int)(param_1 + 0xeffdbd70) >> 5) + 0x10);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
  return;
}



/* ---- FUN_10012478 @ 10012478 size=46 ---- */

void __cdecl FUN_10012478(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __lock(param_1 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ---- FUN_100124a6 @ 100124a6 size=54 ---- */

void __cdecl FUN_100124a6(uint param_1)

{
  if ((param_1 < 0x10024290) || (0x100244f0 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
  FUN_10016b9a(((int)(param_1 + 0xeffdbd70) >> 5) + 0x10);
  return;
}



/* ---- FUN_100124dc @ 100124dc size=42 ---- */

void __cdecl FUN_100124dc(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_10016b9a(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ---- __SEH_prolog4 @ 10012508 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100241b0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 1001254d size=20 ---- */

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



/* ---- __except_handler4 @ 10012570 size=406 ---- */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_100241b0);
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
          goto LAB_1001261b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1001ea80 != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1001ea80)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1001ea80)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_100241b0);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_100241b0);
  }
LAB_1001261b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/* ---- __local_unwind4 @ 10012708 size=144 ---- */

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
  puStack_24 = &LAB_10012798;
  pvStack_28 = ExceptionList;
  local_20 = DAT_100241b0 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10018ce0();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/* ---- FUN_100127de @ 100127de size=28 ---- */

void FUN_100127de(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/* ---- _EH4_CallFilterFunc @ 100127fa size=23 ---- */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/* ---- _EH4_TransferToHandler @ 10012811 size=25 ---- */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x10012828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- _EH4_GlobalUnwind @ 1001282a size=26 ---- */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1001283f,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- _EH4_LocalUnwind @ 10012844 size=23 ---- */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/* ---- __ioinit @ 1001285b size=562 ---- */

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
  
  uStack_c = 0x10012867;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10012a92:
    iVar7 = -1;
  }
  else {
    DAT_100264c8 = 0x20;
    DAT_100264e0 = puVar2;
    for (; puVar2 < DAT_100264e0 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((int)DAT_100264c8 < (int)UVar9) {
        puVar2 = __calloc_crt(0x20,0x38);
        if (puVar2 == (undefined4 *)0x0) {
          UVar9 = DAT_100264c8;
          break;
        }
        (&DAT_100264e0)[iVar7] = puVar2;
        DAT_100264c8 = DAT_100264c8 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_100264e0)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_100264e0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10012a92;
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
      piVar8 = DAT_100264e0 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_10012a92;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_100264c8);
    iVar7 = 0;
  }
  return iVar7;
}



/* ---- __ioterm @ 10012a9b size=76 ---- */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_100264e0;
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
  } while ((int)puVar2 < 0x100265e0);
  return;
}



/* ---- __fileno @ 10012ae7 size=45 ---- */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  DWORD *pDVar1;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return _File->_file;
}



/* ---- write_string @ 10012b14 size=74 ---- */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  DWORD *pDVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        pDVar1 = FUN_10010970();
        if (*pDVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



/* ---- __flush @ 1001350e size=98 ---- */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2005 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}



/* ---- FUN_10013570 @ 10013570 size=66 ---- */

int __cdecl FUN_10013570(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  if (param_1 == (FILE *)0x0) {
    iVar1 = FUN_100135b2(0);
    return iVar1;
  }
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) == 0) {
    return 0;
  }
  uVar2 = __fileno(param_1);
  DVar3 = FUN_10018e97(uVar2);
  return -(uint)(DVar3 != 0);
}



/* ---- FUN_100135b2 @ 100135b2 size=187 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_100135b2(int param_1)

{
  int *piVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar4 = 0; iVar4 < DAT_10027600; iVar4 = iVar4 + 1) {
    piVar1 = (int *)(DAT_100265e0 + iVar4 * 4);
    if ((*piVar1 != 0) && (iVar3 = *piVar1, (*(byte *)(iVar3 + 0xc) & 0x83) != 0)) {
      FUN_10012478(iVar4,iVar3);
      pFVar2 = *(FILE **)(DAT_100265e0 + iVar4 * 4);
      if ((pFVar2->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar3 = FUN_10013570(pFVar2);
          if (iVar3 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((pFVar2->_flag & 2U) != 0)) {
          iVar3 = FUN_10013570(pFVar2);
          if (iVar3 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_10013654();
    }
  }
  FUN_10013683();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/* ---- FUN_10013654 @ 10013654 size=17 ---- */

void FUN_10013654(void)

{
  int unaff_ESI;
  
  FUN_100124dc(unaff_ESI,*(int *)(DAT_100265e0 + unaff_ESI * 4));
  return;
}



/* ---- FUN_10013683 @ 10013683 size=9 ---- */

void FUN_10013683(void)

{
  FUN_10016b9a(1);
  return;
}



/* ---- FUN_10013695 @ 10013695 size=47 ---- */

undefined4 FUN_10013695(void)

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



/* ---- setSBCS @ 100136c4 size=85 ---- */

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
    *puVar1 = puVar1[(int)&DAT_10024548 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10024548 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* ---- setSBUpLow @ 10013719 size=394 ---- */

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
  
  local_8 = DAT_100241b0 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10013880:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10013880;
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
          goto LAB_10013827;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10013827:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/* ---- ___updatetmbcinfo @ 100138a3 size=152 ---- */

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
  if (((p_Var1->_ownlocale & DAT_10024a6c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10024970) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10024548)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10024970;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10024970;
      InterlockedIncrement((LONG *)PTR_DAT_10024970);
    }
    FUN_1001393e();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



/* ---- FUN_1001393e @ 1001393e size=9 ---- */

void FUN_1001393e(void)

{
  FUN_10016b9a(0xd);
  return;
}



/* ---- getSystemCP @ 10013947 size=122 ---- */

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
  DAT_10025fcc = 0;
  if (unaff_ESI == -2) {
    DAT_10025fcc = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10025fcc = 1;
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
    DAT_10025fcc = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/* ---- FUN_100139c1 @ 100139c1 size=473 ---- */

void __cdecl FUN_100139c1(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_100241b0 ^ (uint)(&local_1c)[1].DefaultChar;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_100139fd:
    if (*(uint *)((int)&DAT_10024978 + uVar5) != uVar4) goto code_r0x10013a09;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10024988 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x10024974);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_10013695();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1002497c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_10013b2e;
  }
LAB_100139ea:
  setSBCS(unaff_EDI);
LAB_10013b8b:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
code_r0x10013a09:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10013a16;
  goto LAB_100139fd;
code_r0x10013a16:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10013b8b;
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
      uVar9 = FUN_10013695();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_10013b2e:
    setSBUpLow(unaff_EDI);
    goto LAB_10013b8b;
  }
  if (DAT_10025fcc == 0) goto LAB_10013b8b;
  goto LAB_100139ea;
}



/* ---- __setmbcp @ 10013b9a size=399 ---- */

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
      local_24 = FUN_100139c1(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10024548)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10024a6c & 1) == 0)) {
          __lock(0xd);
          _DAT_10025fdc = ptVar3->mbcodepage;
          _DAT_10025fe0 = ptVar3->ismbcodepage;
          _DAT_10025fe4 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10025fd0)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10024768)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10024870)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10024970);
          if ((LVar4 == 0) && (PTR_DAT_10024970 != &DAT_10024548)) {
            _free(PTR_DAT_10024970);
          }
          PTR_DAT_10024970 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_10013cfb();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10024548) {
          _free(ptVar3);
        }
        pDVar5 = FUN_10010970();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/* ---- FUN_10013cfb @ 10013cfb size=9 ---- */

void FUN_10013cfb(void)

{
  FUN_10016b9a(0xd);
  return;
}



/* ---- ___initmbctable @ 10013d34 size=30 ---- */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_100264c0 == 0) {
    __setmbcp(-3);
    DAT_100264c0 = 1;
  }
  return 0;
}



/* ---- ___freetlocinfo @ 10013d52 size=320 ---- */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10024f48)) &&
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
  if ((ppuVar2 != &PTR_DAT_10024e88) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10024a70) &&
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



/* ---- ___addlocaleref @ 10013e92 size=134 ---- */

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
    if (((undefined *)pLVar1[-2] != &DAT_10024a70) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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



/* ---- ___removelocaleref @ 10013f18 size=140 ---- */

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
      if (((undefined *)pLVar1[-2] != &DAT_10024a70) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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



/* ---- __updatetlocinfoEx_nolock @ 10013fa4 size=62 ---- */

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
      if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10024a78)) {
        ___freetlocinfo(pLVar1);
      }
    }
  }
  return unaff_EDI;
}



/* ---- ___updatetlocinfo @ 10013fe2 size=106 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10024a6c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1001404c();
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



/* ---- FUN_1001404c @ 1001404c size=12 ---- */

void FUN_1001404c(void)

{
  FUN_10016b9a(0xc);
  return;
}



/* ---- __isctype_l @ 10014058 size=182 ---- */

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



/* ---- __cfltcvt_init @ 1001410e size=96 ---- */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_10024e40 = __cfltcvt;
  PTR_LAB_10024e44 = &LAB_1001a06d;
  PTR_LAB_10024e48 = &LAB_1001a02b;
  PTR_LAB_10024e4c = &LAB_1001a05f;
  PTR_LAB_10024e50 = &LAB_10019fd5;
  PTR_LAB_10024e54 = __cfltcvt;
  PTR_LAB_10024e58 = __cfltcvt_l;
  PTR_LAB_10024e5c = __fassign_l;
  PTR_LAB_10024e60 = __cropzeros_l;
  PTR_LAB_10024e64 = __forcdecpt_l;
  return;
}



/* ---- __fpmath @ 1001416e size=30 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_10026010 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/* ---- FUN_1001418c @ 1001418c size=1680 ---- */

void __cdecl
FUN_1001418c(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  DWORD *pDVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  char *pcVar17;
  undefined4 uVar18;
  undefined **ppuVar19;
  short *psVar20;
  uint uVar21;
  undefined4 uVar22;
  ushort uVar23;
  char *pcVar24;
  undefined **local_74;
  int local_6c;
  int local_68;
  undefined **local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  undefined2 local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort uStack_38;
  ushort local_36;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)(local_24 + 0x20);
  iVar14 = 0;
  pcVar24 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar8 = *param_3, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) ||
           (cVar8 == '\r')); param_3 = param_3 + 1) {
    }
LAB_10014211:
    cVar8 = *param_3;
    pcVar17 = param_3 + 1;
    switch(iVar14) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_1001422e:
        iVar14 = 3;
        goto LAB_10014230;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10014245;
      if (cVar8 == '+') {
        uVar7 = 0;
        iVar14 = 2;
        param_3 = pcVar17;
      }
      else if (cVar8 == '-') {
        iVar14 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar17;
      }
      else {
        if (cVar8 != '0') goto LAB_100143ea;
LAB_1001425f:
        iVar14 = 1;
        param_3 = pcVar17;
      }
      goto LAB_10014211;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1001422e;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10014296;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_100142c6;
      if (cVar8 == '0') goto LAB_1001425f;
LAB_100142a6:
      bVar4 = true;
      if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_100143ea;
      iVar14 = 6;
      break;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1001422e;
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
        if (cVar8 == '0') goto LAB_1001425f;
        goto LAB_100142f9;
      }
LAB_10014245:
      iVar14 = 5;
      break;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar24 = cVar8 + -0x30;
          pcVar24 = pcVar24 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      }
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10014339;
LAB_10014296:
      bVar4 = true;
      iVar14 = 4;
      break;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar24 = cVar8 + -0x30;
          pcVar24 = pcVar24 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      }
LAB_10014339:
      if ((cVar8 != '+') && (cVar8 != '-')) goto LAB_100142a6;
LAB_100142c6:
      bVar4 = true;
      pcVar17 = pcVar17 + -1;
      iVar14 = 0xb;
      break;
    case 5:
      bVar6 = true;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar14 = 4;
        goto LAB_10014230;
      }
LAB_100142f9:
      pcVar17 = local_58;
      goto LAB_10014415;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_100143d1;
        if (cVar8 == '-') goto LAB_100143c5;
LAB_100143b8:
        if (cVar8 != '0') goto LAB_100142f9;
        iVar14 = 8;
        break;
      }
      goto LAB_100143a2;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_100143b8;
      goto LAB_100143a2;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_100143ea;
LAB_100143a2:
      iVar14 = 9;
LAB_10014230:
      param_3 = pcVar17 + -1;
      goto LAB_10014211;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_10014477;
    default:
      goto switchD_1001421d_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_100143d1:
          iVar14 = 7;
          break;
        }
        if (cVar8 != '-') {
          pcVar17 = param_3;
          goto LAB_10014415;
        }
LAB_100143c5:
        local_6c = -1;
        iVar14 = 7;
        param_3 = pcVar17;
        goto LAB_10014211;
      }
      iVar14 = 10;
      pcVar17 = param_3;
switchD_1001421d_caseD_a:
      param_3 = pcVar17;
      if (iVar14 == 10) goto LAB_10014415;
      goto LAB_10014211;
    }
    param_3 = pcVar17;
    goto LAB_10014211;
  }
  pDVar10 = FUN_10010970();
  *pDVar10 = 0x16;
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_1001480d;
LAB_10014477:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_10014492;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    goto LAB_10014477;
  }
  local_68 = 0x1451;
LAB_10014492:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  }
LAB_100143ea:
  pcVar17 = pcVar17 + -1;
LAB_10014415:
  *param_2 = (int)pcVar17;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar24 = pcVar24 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_100147ef;
    while (pcVar24 = pcVar24 + -1, *pcVar24 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar12 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar21 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar14 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_100147ef;
      ppuVar19 = &PTR_DAT_10024f60;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          ppuVar19 = (undefined **)&DAT_100250c0;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar14 = uStack_4a;
        uVar21 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar12 = local_3c;
joined_r0x1001451d:
        if (local_58 != (char *)0x0) {
          uVar15 = (int)local_58 >> 3;
          ppuVar19 = ppuVar19 + 0x15;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar15;
          if (uVar11 != 0) {
            local_74 = ppuVar19 + uVar11 * 3;
            if (0x7fff < *(ushort *)local_74) {
              local_4c = SUB42(*local_74,0);
              uStack_4a._0_2_ = (undefined2)((uint)*local_74 >> 0x10);
              uStack_4a._2_2_ = SUB42(local_74[1],0);
              uStack_46 = (undefined2)((uint)local_74[1] >> 0x10);
              local_44 = local_74[2];
              iVar14 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar14;
              uStack_4a._2_2_ = (undefined2)((uint)iVar14 >> 0x10);
              local_74 = (undefined **)&local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar15 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar13 = local_36 & 0x7fff;
            uVar16 = *(ushort *)((int)local_74 + 10) & 0x7fff;
            uVar9 = (*(ushort *)((int)local_74 + 10) ^ local_36) & 0x8000;
            uVar23 = uVar16 + uVar13;
            uVar21 = 0;
            iVar1 = 0;
            if (((uVar13 < 0x7fff) && (uVar21 = 0, iVar1 = 0, uVar16 < 0x7fff)) &&
               (uVar21 = uVar15, iVar1 = iVar3, uVar23 < 0xbffe)) {
              if (0x3fbf < uVar23) {
                if (((uVar13 == 0) &&
                    (uVar23 = uVar23 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar12 == 0 && (uVar2 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar16 == 0) &&
                         (uVar23 = uVar23 + 1, ((uint)local_74[2] & 0x7fffffff) == 0)) &&
                        ((local_74[1] == (undefined *)0x0 && (*local_74 == (undefined *)0x0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar2 = 0;
                  iVar12 = 0;
                }
                else {
                  local_6c = 0;
                  psVar20 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)(local_24 + local_6c * 2 + -0x1c);
                      local_64 = local_74 + 2;
                      do {
                        bVar4 = false;
                        uVar21 = *(uint *)(psVar20 + -2) +
                                 (uint)*(ushort *)local_64 * (uint)*local_60;
                        if ((uVar21 < *(uint *)(psVar20 + -2)) ||
                           (uVar21 < (uint)*(ushort *)local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar20 + -2) = uVar21;
                        if (bVar4) {
                          *psVar20 = *psVar20 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = (undefined **)((int)local_64 + -2);
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar20 = psVar20 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar23 = uVar23 + 0xc002;
                  if ((short)uVar23 < 1) {
LAB_100146d3:
                    uVar23 = uVar23 - 1;
                    if ((short)uVar23 < 0) {
                      uVar21 = (uint)(ushort)-uVar23;
                      uVar23 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar12 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar12 << 0x1f) >> 0x10);
                        uVar15 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar21 = uVar21 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar15;
                        uStack_2f = (undefined1)(uVar15 >> 8);
                      } while (uVar21 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar13 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar13 >> 0xf;
                      iVar12 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar12 | (ushort)uStack_2a >> 0xf;
                      uVar23 = uVar23 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar12 >> 0x10);
                    } while (0 < (short)uVar23);
                    if ((short)uVar23 < 1) goto LAB_100146d3;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar21 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar21 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar23 = uVar23 + 1;
                          iVar1 = 0;
                          uVar21 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar21 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar21 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar21;
                      uStack_2e._2_2_ = (ushort)(uVar21 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar23) goto LAB_10014792;
                  local_40 = uVar21;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar23 | uVar9;
                  uVar2 = uVar21;
                  iVar12 = iVar1;
                }
                goto joined_r0x1001451d;
              }
              iVar12 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_10014792:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar12 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar12;
            local_36 = (ushort)((uint)iVar12 >> 0x10);
            uVar2 = 0;
            iVar12 = 0;
          }
          goto joined_r0x1001451d;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar12 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar12;
      local_40._2_2_ = (undefined2)(uVar2 >> 0x10);
      local_40._0_2_ = (undefined2)uVar2;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar18 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar23 = local_36;
      uStack_4a = iVar14;
      uStack_2e = uVar21;
      uStack_2a = iVar1;
      local_3c = iVar12;
    }
    else {
      uVar22 = 0;
      uVar23 = 0x7fff;
      uVar18 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_100147ef:
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar23 = 0;
    uVar18 = 0;
    uVar22 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar23 | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar22;
  *(undefined4 *)(param_1 + 3) = uVar18;
LAB_1001480d:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)(local_24 + 0x20));
  return;
}



/* ---- __stbuf @ 100149d9 size=150 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  void *pvVar5;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  ppuVar4 = FUN_10012365();
  if (_File == (FILE *)(ppuVar4 + 8)) {
    iVar3 = 0;
  }
  else {
    ppuVar4 = FUN_10012365();
    if (_File != (FILE *)(ppuVar4 + 0x10)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_10025fc8 = _DAT_10025fc8 + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_10026014 + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_10014a5d;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_10014a5d:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}



/* ---- __ftbuf @ 10014a6f size=47 ---- */

/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}



/* ---- strtoxl @ 10014a9e size=555 ---- */

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
    pDVar3 = FUN_10010970();
    *pDVar3 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_10014b55:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_10014b55;
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
      goto LAB_10014bbb;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_10014bbb;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_10014bbb;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_10014bbb:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_10014c15:
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
          pDVar3 = FUN_10010970();
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
    if ((uint)param_4 <= uVar6) goto LAB_10014c15;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_10014c15;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* ---- _strtol @ 10014cc9 size=41 ---- */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10025fe8 == 0) {
    ppuVar2 = &PTR_DAT_10024b58;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/* ---- __freea @ 10014cf2 size=27 ---- */

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



/* ---- __crtLCMapStringA_stat @ 10014d0d size=930 ---- */

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
  
  local_8 = DAT_100241b0 ^ (int)register0x00000010 - 4U;
  if (DAT_1002601c == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1002601c = 2;
      }
    }
    else {
      DAT_1002601c = 1;
    }
  }
  if (0 < (int)param_4) {
    pcVar5 = (char *)param_3;
    pcVar8 = param_4;
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_10014d7c;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_10014d7c:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1002601c == 2) || (DAT_1002601c == 0)) {
    local_10 = (LPWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1001509d;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPWSTR)0x0) goto LAB_1001509d;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar9 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_1001507a;
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
LAB_1001507a:
    if (local_10 != (LPWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1001509d;
  }
  if (DAT_1002601c != 1) goto LAB_1001509d;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1001509d;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      local_10 = (LPWSTR)((int)register0x00000010 + -0x24);
      puVar6 = (undefined4 *)((int)register0x00000010 + -0x24);
      if (&uStack00000000 != (undefined1 *)0x24) goto LAB_10014e24;
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
LAB_10014e24:
        local_10 = (LPWSTR)(puVar6 + 2);
      }
    }
  }
  if (local_10 == (LPWSTR)0x0) goto LAB_1001509d;
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
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_10014f33;
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
LAB_10014f33:
  __freea(local_10);
LAB_1001509d:
  iVar3 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar3;
}



/* ---- ___crtLCMapStringA @ 100150af size=67 ---- */

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



/* ---- __isleadbyte_l @ 100150f2 size=54 ---- */

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



/* ---- _isleadbyte @ 10015128 size=14 ---- */

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2005 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* ---- __malloc_crt @ 10015136 size=64 ---- */

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
    if (DAT_10026020 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10026020 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __calloc_crt @ 10015176 size=72 ---- */

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
    if (DAT_10026020 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10026020 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __realloc_crt @ 100151be size=75 ---- */

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
    if (DAT_10026020 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10026020 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* ---- __msize @ 10015209 size=146 ---- */

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
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  if (DAT_100264b0 == 3) {
    this = (void *)0x4;
    __lock(4);
    iVar2 = thunk_FUN_10016d0f(this,(int)_Memory);
    if (iVar2 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_100152a3();
    if (iVar2 != 0) {
      return local_20;
    }
  }
  SVar3 = HeapSize(DAT_1002617c,0,_Memory);
  return SVar3;
}



/* ---- FUN_100152a3 @ 100152a3 size=9 ---- */

void FUN_100152a3(void)

{
  FUN_10016b9a(4);
  return;
}



/* ---- __amsg_exit @ 100152ac size=36 ---- */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10010d75(param_1);
  pcVar1 = (code *)FUN_10011031((int)PTR___exit_10024c68);
  (*pcVar1)(0xff);
  return;
}



/* ---- FUN_100152d0 @ 100152d0 size=38 ---- */

void __cdecl FUN_100152d0(undefined4 param_1)

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



/* ---- ___crtExitProcess @ 100152f6 size=20 ---- */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_100152d0(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ---- FUN_1001530b @ 1001530b size=9 ---- */

void FUN_1001530b(void)

{
  __lock(8);
  return;
}



/* ---- FUN_10015314 @ 10015314 size=9 ---- */

void FUN_10015314(void)

{
  FUN_10016b9a(8);
  return;
}



/* ---- FUN_1001531d @ 1001531d size=24 ---- */

void __cdecl FUN_1001531d(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/* ---- __initterm_e @ 10015335 size=32 ---- */

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



/* ---- __get_osplatform @ 10015355 size=55 ---- */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 == (int *)0x0) || (DAT_10026028 == 0)) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10026028;
  return 0;
}



/* ---- __get_winmajor @ 1001538c size=60 ---- */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (DAT_10026028 == 0)) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10026034;
  return 0;
}



/* ---- __cinit @ 100153c8 size=146 ---- */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_1001ea54 != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1001ea54), BVar1 != 0)) {
    (*(code *)PTR___fpmath_1001ea54)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1001e1d0,(undefined4 *)&DAT_1001e1ec);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10015a2d);
    puVar3 = &DAT_1001e1b4;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1001e1cc);
    if ((DAT_100264c4 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_100264c4), BVar1 != 0)) {
      (*DAT_100264c4)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ---- FUN_1001545a @ 1001545a size=211 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1001552d) */

void __cdecl FUN_1001545a(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10026068 != 1) {
    DAT_10026064 = 1;
    DAT_10026060 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_10011031(DAT_100264bc);
      piVar3 = (int *)FUN_10011031(DAT_100264b8);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_10011031(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_1001531d((undefined4 *)&DAT_1001e1fc);
    }
    FUN_1001531d((undefined4 *)&DAT_1001e204);
  }
  FUN_10015527();
  if (param_3 == 0) {
    DAT_10026068 = 1;
    FUN_10016b9a(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



/* ---- FUN_10015527 @ 10015527 size=15 ---- */

void FUN_10015527(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10016b9a(8);
  }
  return;
}



/* ---- __exit @ 1001553c size=17 ---- */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1001545a(_Code,1,0);
  return;
}



/* ---- __cexit @ 1001554d size=15 ---- */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1001545a(0,0,1);
  return;
}



/* ---- __init_pointers @ 1001555c size=76 ---- */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_10010345(uVar1);
  FUN_10018991(uVar1);
  FUN_1000e89e(uVar1);
  FUN_10011573(uVar1);
  FUN_1001b275(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10015b7a();
  __initp_eh_hooks();
  PTR___exit_10024c68 = (undefined *)FUN_10010fba(0x1001553c);
  return;
}



/* ---- __setenvp @ 100155a8 size=216 ---- */

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
  
  if (DAT_100264c0 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_10025950;
  if (DAT_10025950 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    DAT_10026048 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar4 = DAT_10025950;
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_10025950);
          DAT_10025950 = (char *)0x0;
          *puVar1 = 0;
          _DAT_100264b4 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10026048);
            DAT_10026048 = (undefined4 *)0x0;
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



/* ---- parse_cmdline @ 10015683 size=408 ---- */

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
        goto LAB_10015715;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10015715:
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



/* ---- __setargv @ 1001581b size=185 ---- */

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
  
  if (DAT_100264c0 == 0) {
    ___initmbctable();
  }
  DAT_10026174 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10026070,0x104);
  _DAT_10026058 = &DAT_10026070;
  if ((DAT_10027610 == (char *)0x0) || (local_8 = DAT_10027610, *DAT_10027610 == '\0')) {
    local_8 = &DAT_10026070;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_1002603c = local_c - 1;
      _DAT_10026040 = puVar2;
      return 0;
    }
  }
  return -1;
}



/* ---- ___crtGetEnvironmentStringsA @ 100158d4 size=309 ---- */

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
  if (DAT_10026178 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10026178 = 1;
      goto LAB_10015926;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10026178 = 2;
    }
  }
  if (DAT_10026178 != 1) {
    if ((DAT_10026178 != 2) && (DAT_10026178 != 0)) {
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
LAB_10015926:
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



/* ---- __RTC_Initialize @ 10015a09 size=36 ---- */

/* WARNING: Removing unreachable block (ram,0x10015a1b) */
/* WARNING: Removing unreachable block (ram,0x10015a21) */
/* WARNING: Removing unreachable block (ram,0x10015a23) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/* ---- ___heap_select @ 10015a51 size=85 ---- */

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



/* ---- __heap_init @ 10015aac size=90 ---- */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_1002617c = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_1002617c == (HANDLE)0x0) {
    return 0;
  }
  DAT_100264b0 = ___heap_select();
  if ((DAT_100264b0 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_1002617c);
    DAT_1002617c = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/* ---- __heap_term @ 10015b06 size=116 ---- */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_100264b0 == 3) {
    iVar2 = 0;
    if (0 < DAT_10026498) {
      puVar1 = (undefined4 *)((int)DAT_1002649c + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_1002617c,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10026498);
    }
    HeapFree(DAT_1002617c,0,DAT_1002649c);
  }
  HeapDestroy(DAT_1002617c);
  DAT_1002617c = (HANDLE)0x0;
  return;
}



/* ---- FUN_10015b7a @ 10015b7a size=1 ---- */

void FUN_10015b7a(void)

{
  return;
}



/* ---- FUN_10015b7b @ 10015b7b size=350 ---- */

undefined4 __cdecl FUN_10015b7b(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_100111d6();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_10024cf4 * 3);
    if ((piVar1 + DAT_10024cf4 * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_10024ce8 < DAT_10024cec + DAT_10024ce8) {
            iVar8 = DAT_10024ce8 * 0xc;
            iVar9 = DAT_10024ce8;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_10024cec + DAT_10024ce8);
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



/* ---- ___security_init_cookie @ 10015cf4 size=148 ---- */

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
  if ((DAT_100241b0 == 0xbb40e64e) || ((DAT_100241b0 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_100241b0 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_100241b0 == 0xbb40e64e) {
      DAT_100241b0 = 0xbb40e64f;
    }
    else if ((DAT_100241b0 & 0xffff0000) == 0) {
      DAT_100241b0 = DAT_100241b0 | DAT_100241b0 << 0x10;
    }
  }
  DAT_100241b4 = ~DAT_100241b0;
  return;
}



/* ---- FUN_10015d93 @ 10015d93 size=34 ---- */

exception * __thiscall FUN_10015d93(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- ___TypeMatch @ 10015db5 size=92 ---- */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_10015e0b:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_10015de9:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10015e0b;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_10015de9;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- ___FrameUnwindToState @ 10015e55 size=166 ---- */

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
  FUN_10015f1b();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/* ---- FUN_10015f1b @ 10015f1b size=27 ---- */

void FUN_10015f1b(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/* ---- ___DestructExceptionObject @ 10015f7b size=67 ---- */

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



/* ---- ___AdjustPointer @ 10015fcf size=37 ---- */

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



/* ---- IsInExceptionSpec @ 10015ff4 size=121 ---- */

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



/* ---- CallUnexpected @ 1001606d size=49 ---- */

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



/* ---- Catch_All@1001609e @ 1001609e size=23 ---- */

void Catch_All_1001609e(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- CallCatchBlock @ 100160b6 size=172 ---- */

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
  
  local_8 = &DAT_10021750;
  uStack_c = 0x100160c2;
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
  FUN_100161dc();
  return local_20;
}



/* ---- FUN_100161dc @ 100161dc size=118 ---- */

void FUN_100161dc(void)

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



/* ---- ___BuildCatchObjectHelper @ 10016252 size=371 ---- */

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
        goto LAB_100162d7;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_100162d7:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/* ---- ___BuildCatchObject @ 100163d1 size=133 ---- */

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



/* ---- CatchIt @ 10016462 size=108 ---- */

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



/* ---- FindHandlerForForeignException @ 100164ce size=242 ---- */

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



/* ---- FindHandler @ 100165c0 size=854 ---- */

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
  exception aeStack_2d [13];
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
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
                param_1 = (EHExceptionRecord *)s_bad_exception_1001ea90;
                std::exception::exception(aeStack_2d + -3,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(aeStack_2d + -3,&DAT_100217b4);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_100166fe;
        }
        p_Var11 = (_s_FuncInfo *)param_1;
      }
    }
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
        for (; local_14 < local_20; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            for (local_1c = p_Var7->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
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
                  goto LAB_10016828;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_10016828:
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
         uVar3 != '\0')) goto LAB_100168fe;
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
LAB_100166fe:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_100168fe:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/* ---- ___InternalCxxFrameHandler @ 1001692e size=228 ---- */

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



/* ---- terminate @ 10016a12 size=44 ---- */

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



/* ---- unexpected @ 10016a4b size=19 ---- */

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



/* ---- _inconsistency @ 10016a5e size=48 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10011031(DAT_10026180);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/* ---- __initp_eh_hooks @ 10016a95 size=17 ---- */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_10026180 = FUN_10010fba(0x10016a12);
  return;
}



/* ---- __CallSettingFrame@12 @ 10016ab0 size=76 ---- */

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



/* ---- __mtinitlocks @ 10016afc size=73 ---- */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10026188;
  do {
    if ((&DAT_10024d24)[iVar2 * 2] == 1) {
      (&DAT_10024d20)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10024d20)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10024d20)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/* ---- __mtdeletelocks @ 10016b45 size=85 ---- */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10024d20;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10024e40);
  puVar1 = &DAT_10024d20;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10024e40);
  return;
}



/* ---- FUN_10016b9a @ 10016b9a size=21 ---- */

void __cdecl FUN_10016b9a(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10024d20)[param_1 * 2]);
  return;
}



/* ---- __mtinitlocknum @ 10016baf size=186 ---- */

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
  if (DAT_1002617c == 0) {
    __FF_MSGBANNER();
    FUN_10010d75(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10024d20 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_10010970();
      *pDVar2 = 0xc;
      local_20 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_10010970();
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
      FUN_10016c69();
    }
  }
  else {
    local_20 = 1;
  }
  return local_20;
}



/* ---- FUN_10016c69 @ 10016c69 size=9 ---- */

void FUN_10016c69(void)

{
  FUN_10016b9a(10);
  return;
}



/* ---- __lock @ 10016c72 size=49 ---- */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10024d20)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10024d20)[_File * 2]);
  return;
}



/* ---- ___sbh_heap_init @ 10016ca3 size=72 ---- */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1002649c = HeapAlloc(DAT_1002617c,0,0x140);
  if (DAT_1002649c == (LPVOID)0x0) {
    return 0;
  }
  DAT_100262d8 = 0;
  DAT_10026498 = 0;
  DAT_100264a4 = DAT_1002649c;
  DAT_100264a0 = param_1;
  DAT_100264a8 = 0x10;
  return 1;
}



/* ---- thunk_FUN_10016d0f @ 10016ceb size=18 ---- */

void __thiscall thunk_FUN_10016d0f(void *this,int param_1)

{
  FUN_10016d0f((void *)(DAT_10026498 * 0x14 + DAT_1002649c),param_1);
  return;
}



/* ---- FUN_10016d0f @ 10016d0f size=25 ---- */

void __thiscall FUN_10016d0f(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/* ---- ___sbh_free_block @ 10016d16 size=788 ---- */

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
      if (DAT_100262d8 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_100264ac * 0x8000 + DAT_100262d8[3]),0x8000,0x4000);
        DAT_100262d8[2] = DAT_100262d8[2] | 0x80000000U >> ((byte)DAT_100264ac & 0x1f);
        *(undefined4 *)(DAT_100262d8[4] + 0xc4 + DAT_100264ac * 4) = 0;
        *(char *)(DAT_100262d8[4] + 0x43) = *(char *)(DAT_100262d8[4] + 0x43) + -1;
        if (*(char *)(DAT_100262d8[4] + 0x43) == '\0') {
          DAT_100262d8[1] = DAT_100262d8[1] & 0xfffffffe;
        }
        if (DAT_100262d8[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_100262d8[3],0,0x8000);
          HeapFree(DAT_1002617c,0,(LPVOID)DAT_100262d8[4]);
          _memmove(DAT_100262d8,DAT_100262d8 + 5,
                   (DAT_10026498 * 0x14 - (int)DAT_100262d8) + -0x14 + DAT_1002649c);
          DAT_10026498 = DAT_10026498 + -1;
          if (DAT_100262d8 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_100264a4 = DAT_1002649c;
        }
      }
      DAT_100262d8 = param_1;
      DAT_100264ac = uVar14;
    }
  }
  return;
}



/* ---- ___sbh_alloc_new_region @ 1001702a size=176 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10026498 == DAT_100264a8) {
    pvVar1 = HeapReAlloc(DAT_1002617c,0,DAT_1002649c,(DAT_100264a8 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100264a8 = DAT_100264a8 + 0x10;
    DAT_1002649c = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10026498 * 0x14 + (int)DAT_1002649c);
  pvVar1 = HeapAlloc(DAT_1002617c,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10026498 = DAT_10026498 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_1002617c,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/* ---- ___sbh_alloc_new_group @ 100170da size=262 ---- */

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



/* ---- ___sbh_resize_block @ 100171e0 size=735 ---- */

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



/* ---- ___sbh_alloc_block @ 100174bf size=739 ---- */

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
  
  puVar11 = DAT_1002649c + DAT_10026498 * 5;
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
  for (param_1 = DAT_100264a4;
      (param_1 < puVar11 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  if (param_1 == puVar11) {
    for (param_1 = DAT_1002649c;
        (param_1 < DAT_100264a4 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
        param_1 = param_1 + 5) {
    }
    if (param_1 == DAT_100264a4) {
      for (; (param_1 < puVar11 && (param_1[2] == 0)); param_1 = param_1 + 5) {
      }
      if (param_1 == puVar11) {
        for (param_1 = DAT_1002649c; (param_1 < DAT_100264a4 && (param_1[2] == 0));
            param_1 = param_1 + 5) {
        }
        if ((param_1 == DAT_100264a4) &&
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
  DAT_100264a4 = param_1;
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
    if (iVar12 == 0) goto LAB_1001775f;
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
LAB_1001775f:
  piVar14 = (int *)((int)piVar14 + iVar12);
  *piVar14 = uVar8 + 1;
  *(uint *)((int)piVar14 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar4;
  *piVar4 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_100262d8)) && (local_8 == DAT_100264ac)) {
    DAT_100262d8 = (uint *)0x0;
  }
  *piVar6 = local_8;
  return piVar14 + 1;
}



/* ---- fastzero_I @ 100177a2 size=79 ---- */

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



/* ---- __VEC_memzero @ 100177f9 size=143 ---- */

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



/* ---- __initp_misc_winsig @ 10017888 size=25 ---- */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_1002631c = param_1;
  DAT_10026320 = param_1;
  DAT_10026324 = param_1;
  DAT_10026328 = param_1;
  return;
}



/* ---- siglookup @ 100178a1 size=52 ---- */

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
  } while (uVar1 < DAT_10024cf4 * 0xc + param_1);
  if ((DAT_10024cf4 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- ___get_sigabrt @ 100178d5 size=13 ---- */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_10011031(DAT_10026324);
  return p_Var1;
}



/* ---- _raise @ 100178e2 size=411 ---- */

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
        puVar6 = &DAT_1002631c;
        iVar3 = DAT_1002631c;
        goto LAB_10017997;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10017975;
        if (_SigNum != 8) goto LAB_10017959;
      }
    }
    pDVar7 = FUN_100111d6();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10026328;
      iVar3 = DAT_10026328;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10026320;
      iVar3 = DAT_10026320;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10017959:
        pDVar7 = FUN_10010970();
        *pDVar7 = 0x16;
        FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10017975:
      puVar6 = &DAT_10026324;
      iVar3 = DAT_10026324;
    }
LAB_10017997:
    bVar1 = true;
    pcVar4 = (code *)FUN_10011031(iVar3);
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
      goto LAB_100179fb;
    }
  }
  else {
LAB_100179fb:
    if (_SigNum == 8) {
      for (local_28 = DAT_10024ce8; local_28 < DAT_10024cec + DAT_10024ce8; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_10017a35;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10017a35:
  FUN_10017a56();
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



/* ---- FUN_10017a56 @ 10017a56 size=15 ---- */

void FUN_10017a56(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10016b9a(0);
  }
  return;
}



/* ---- FUN_10017a92 @ 10017a92 size=439 ---- */

undefined4 __cdecl FUN_10017a92(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_10026330 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10026330 = FUN_10010fba((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_10026334 = FUN_10010fba((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10026338 = FUN_10010fba((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10026340 = FUN_10010fba((int)pFVar1);
      if (DAT_10026340 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_1002633c = FUN_10010fba((int)pFVar1);
      }
    }
  }
  if ((DAT_1002633c != local_c) && (DAT_10026340 != local_c)) {
    pcVar3 = (code *)FUN_10011031(DAT_1002633c);
    pcVar4 = (code *)FUN_10011031(DAT_10026340);
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
      goto LAB_10017c28;
    }
  }
  if ((((DAT_10026334 != local_c) &&
       (pcVar3 = (code *)FUN_10011031(DAT_10026334), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10026338 != local_c &&
      (pcVar3 = (code *)FUN_10011031(DAT_10026338), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_10017c28:
  pcVar3 = (code *)FUN_10011031(DAT_10026330);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/* ---- _strcat_s @ 10017c4f size=113 ---- */

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
        pDVar2 = FUN_10010970();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_10017c6e;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_10010970();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_10017c6e:
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- __set_error_mode @ 10017cc0 size=70 ---- */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_10025958;
      DAT_10025958 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_10025958;
    }
  }
  pDVar2 = FUN_10010970();
  *pDVar2 = 0x16;
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/* ---- __lseeki64_nolock @ 10017d06 size=131 ---- */

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10010970();
    *pDVar2 = 9;
LAB_10017d35:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_10010996(DVar4);
        goto LAB_10017d35;
      }
    }
    pbVar1 = (byte *)((&DAT_100264e0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/* ---- __lseeki64 @ 10017d89 size=271 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10010983();
    *pDVar1 = 0;
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100264c8)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_100264e0)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        pDVar1 = FUN_10010983();
        *pDVar1 = 0;
        pDVar1 = FUN_10010970();
        *pDVar1 = 9;
        FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_100264e0)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_10010970();
          *pDVar1 = 9;
          pDVar1 = FUN_10010983();
          *pDVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_10017e98();
      }
      goto LAB_10017e92;
    }
    pDVar1 = FUN_10010983();
    *pDVar1 = 0;
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_10017e92:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/* ---- FUN_10017e98 @ 10017e98 size=10 ---- */

void FUN_10017e98(void)

{
  int unaff_EBP;
  
  FUN_10018e75(*(uint *)(unaff_EBP + 8));
  return;
}



/* ---- __write_nolock @ 10017ea2 size=1478 ---- */

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  wchar_t wVar5;
  DWORD *pDVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD DVar10;
  int iVar11;
  uint uVar12;
  WCHAR *pWVar13;
  uint uVar14;
  char *pcVar15;
  int unaff_EDI;
  int *piVar16;
  UINT local_598;
  uint local_594;
  WCHAR *local_590;
  int *local_58c;
  char *local_588;
  int local_584;
  WCHAR *local_580;
  char *local_57c;
  WCHAR *local_578;
  char local_571;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [38];
  undefined1 local_51c [264];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_100241b0 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_10018452;
  if (_Buf == (void *)0x0) {
    pDVar6 = FUN_10010983();
    *pDVar6 = 0;
    pDVar6 = FUN_10010970();
    *pDVar6 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_10018452;
  }
  iVar11 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_100264e0 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar11 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    pDVar6 = FUN_10010983();
    *pDVar6 = 0;
    pDVar6 = FUN_10010970();
    *pDVar6 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_10018452;
  }
  if ((*(byte *)(*piVar16 + iVar11 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar16) & 0x80) == 0)) {
LAB_1001818d:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar11) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar11),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_100183e7:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_100183f0:
      if (local_57c != (char *)0x0) goto LAB_10018452;
      piVar16 = local_58c;
      goto LAB_100183fa;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_10018421;
      do {
        local_578 = (WCHAR *)0x0;
        uVar12 = (int)local_56c - (int)local_580;
        pWVar13 = local_568;
        do {
          if (_MaxCharCount <= uVar12) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          uVar12 = uVar12 + 1;
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar13 = '\r';
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar13 = (char)WVar4;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                          (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_100183e7;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_100183f0;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (_MaxCharCount != 0) {
        do {
          uVar14 = 0;
          uVar12 = (int)local_56c - (int)local_580;
          pWVar13 = local_568;
          do {
            if (_MaxCharCount <= uVar12) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              uVar14 = uVar14 + 2;
            }
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
            uVar14 = uVar14 + 2;
            piVar16 = local_58c;
            local_56c = pWVar1;
          } while (uVar14 < 0x3ff);
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                            (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_100183e7;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_100183f0;
      }
    }
    else {
      local_578 = local_580;
      if (_MaxCharCount != 0) {
        do {
          local_56c = (WCHAR *)0x0;
          uVar12 = (int)local_578 - (int)local_580;
          pWVar13 = local_164;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar15 = (char *)0x0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar13 - (int)local_164) / 2,
                                      local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_100183e7;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_58c),local_414 + (int)pcVar15,
                              iVar7 - (int)pcVar15,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar15 = pcVar15 + (int)local_588;
          } while ((int)pcVar15 < iVar7);
        } while ((iVar7 <= (int)pcVar15) &&
                (local_57c = (char *)((int)local_578 - (int)local_580), local_57c < _MaxCharCount));
        goto LAB_100183f0;
      }
    }
LAB_10018421:
    DVar10 = 0;
    if (((*(byte *)(iVar11 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_10018452;
    pDVar6 = FUN_10010970();
    *pDVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_1001818d;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (_MaxCharCount != 0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar13 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar7 = _isleadbyte(CONCAT22((short)((uint)(int)cVar2 >> 0x10),(short)cVar2));
          if (iVar7 == 0) {
            iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,1);
            if (iVar7 == -1) break;
          }
          else {
            if (((char *)((int)local_580 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) ||
               (iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,2), iVar7 == -1)) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          DVar10 = WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
          if (DVar10 == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,DVar10,(LPDWORD)&local_56c,
                            (LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_100183e7;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)DVar10) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_100183e7;
            if ((int)local_56c < 1) break;
            local_584 = local_584 + 1;
            local_57c = local_57c + 1;
          }
        }
        else {
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            local_570 = (DWORD)(ushort)*local_590;
            local_594 = (uint)(*local_590 == L'\n');
            local_590 = local_590 + 1;
            local_578 = local_578 + 1;
          }
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            wVar5 = __putwch_nolock((wchar_t)local_570);
            if (wVar5 != (wchar_t)local_570) goto LAB_100183e7;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_100183e7;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_100183f0;
    }
LAB_100183fa:
    if (local_570 == 0) goto LAB_10018421;
    DVar10 = 5;
    if (local_570 != 5) {
      FUN_10010996(local_570);
      goto LAB_10018452;
    }
    pDVar6 = FUN_10010970();
    *pDVar6 = 9;
  }
  pDVar6 = FUN_10010983();
  *pDVar6 = DVar10;
LAB_10018452:
  iVar11 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar11;
}



/* ---- __write @ 10018468 size=210 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10010983();
    *pDVar1 = 0;
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100264c8)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_100264e0)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_100264e0)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_10010970();
          *pDVar1 = 9;
          pDVar1 = FUN_10010983();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_1001853a();
        return local_20;
      }
    }
    pDVar1 = FUN_10010983();
    *pDVar1 = 0;
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* ---- FUN_1001853a @ 1001853a size=10 ---- */

void FUN_1001853a(void)

{
  int unaff_EBP;
  
  FUN_10018e75(*(uint *)(unaff_EBP + 8));
  return;
}



/* ---- __getbuf @ 10018544 size=68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_10025fc8 = _DAT_10025fc8 + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



/* ---- __isatty @ 10018588 size=94 ---- */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  DWORD *pDVar1;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
    return 0;
  }
  if ((_FileHandle < 0) || (DAT_100264c8 <= (uint)_FileHandle)) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0;
  }
  return *(byte *)((&DAT_100264e0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
}



/* ---- __initp_misc_cfltcvt_tab @ 100185e6 size=31 ---- */

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
    piVar1 = (int *)((int)&PTR_LAB_10024e40 + uVar3);
    iVar2 = FUN_10010fba(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/* ---- FUN_10018605 @ 10018605 size=22 ---- */

bool FUN_10018605(void)

{
  return DAT_10026344 == (DAT_100241b0 | 1);
}



/* ---- __wctomb_s_l @ 1001861b size=351 ---- */

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_1001863d:
    DVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      pDVar2 = FUN_10010970();
      *pDVar2 = 0x16;
      FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_100186cd;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_10018704:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_1001863d;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar3 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar3 == 0) {
        DVar1 = GetLastError();
        if (DVar1 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_100186cd:
          pDVar2 = FUN_10010970();
          *pDVar2 = 0x22;
          FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          if (local_8 != '\0') {
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          }
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar3;
        }
        goto LAB_10018704;
      }
    }
    pDVar2 = FUN_10010970();
    *pDVar2 = 0x2a;
    pDVar2 = FUN_10010970();
    DVar1 = *pDVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return DVar1;
}



/* ---- _wctomb_s @ 1001877a size=27 ---- */

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}



/* ---- __aulldvrm @ 100187a0 size=149 ---- */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ---- FUN_10018835 @ 10018835 size=45 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10018835(void)

{
  return 1;
}



/* ---- __get_sse2_info @ 10018885 size=96 ---- */

/* WARNING: Removing unreachable block (ram,0x100188c0) */
/* WARNING: Removing unreachable block (ram,0x100188ad) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10018835(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ---- FUN_10018991 @ 10018991 size=10 ---- */

void __cdecl FUN_10018991(undefined4 param_1)

{
  DAT_1002634c = param_1;
  return;
}



/* ---- ___crtInitCritSecNoSpinCount@8 @ 1001899b size=16 ---- */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/* ---- ___crtInitCritSecAndSpinCount @ 100189ab size=147 ---- */

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
  
  local_8 = &DAT_100218f0;
  uStack_c = 0x100189b7;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_10011031(DAT_1002634c);
  if (pcVar1 != (FARPROC)0x0) goto LAB_10018a21;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_10018a10:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_10018a10;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_10018a10;
  }
  DAT_1002634c = FUN_10010fba((int)pcVar1);
LAB_10018a21:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/* ---- __ValidateImageBase @ 10018a70 size=41 ---- */

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



/* ---- __FindPESection @ 10018aa0 size=66 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 10018af0 size=164 ---- */

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
  local_c = DAT_100241b0 ^ 0x10021910;
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



/* ---- __global_unwind2 @ 10018bac size=32 ---- */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10018bc4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- __local_unwind2 @ 10018c11 size=132 ---- */

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
  puStack_1c = &LAB_10018bcc;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10018ce0();
    }
  }
  ExceptionList = local_20;
  return;
}



/* ---- __NLG_Notify1 @ 10018cb8 size=9 ---- */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10024e78 = param_1;
  DAT_10024e74 = in_EAX;
  DAT_10024e7c = unaff_EBP;
  return in_EAX;
}



/* ---- __NLG_Notify @ 10018cc1 size=31 ---- */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10024e78 = param_1;
  DAT_10024e74 = in_EAX;
  DAT_10024e7c = unaff_EBP;
  return;
}



/* ---- FUN_10018ce0 @ 10018ce0 size=3 ---- */

void FUN_10018ce0(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/* ---- __get_osfhandle @ 10018d64 size=113 ---- */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10010983();
    *pDVar1 = 0;
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
    return -1;
  }
  if (((_FileHandle < 0) || (DAT_100264c8 <= (uint)_FileHandle)) ||
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_100264e0)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) == 0)) {
    pDVar1 = FUN_10010983();
    *pDVar1 = 0;
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return *piVar2;
}



/* ---- ___lock_fhandle @ 10018dd5 size=146 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2005 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_100264e0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_10018e6c();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_100264e0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}



/* ---- FUN_10018e6c @ 10018e6c size=9 ---- */

void FUN_10018e6c(void)

{
  FUN_10016b9a(10);
  return;
}



/* ---- FUN_10018e75 @ 10018e75 size=34 ---- */

void __cdecl FUN_10018e75(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100264e0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  return;
}



/* ---- FUN_10018e97 @ 10018e97 size=215 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

DWORD __cdecl FUN_10018e97(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  DWORD local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_100264c8)) {
      iVar3 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)(iVar3 + 4 + (&DAT_100264e0)[(int)param_1 >> 5]) & 1) != 0) {
        ___lock_fhandle(param_1);
        if ((*(byte *)(iVar3 + 4 + (&DAT_100264e0)[(int)param_1 >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(param_1);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_10018f59;
          pDVar1 = FUN_10010983();
          *pDVar1 = local_20;
        }
        pDVar1 = FUN_10010970();
        *pDVar1 = 9;
        local_20 = 0xffffffff;
LAB_10018f59:
        FUN_10018f6e();
        return local_20;
      }
    }
    pDVar1 = FUN_10010970();
    *pDVar1 = 9;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}



/* ---- FUN_10018f6e @ 10018f6e size=10 ---- */

void FUN_10018f6e(void)

{
  int unaff_EBP;
  
  FUN_10018e75(*(uint *)(unaff_EBP + 8));
  return;
}



/* ---- __crtGetStringTypeA_stat @ 10018f78 size=440 ---- */

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
  
  local_8 = DAT_100241b0 ^ (int)register0x00000010 - 4U;
  lpWideCharStr = (LPWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10026350 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10026350 = 2;
      }
      goto LAB_10018fd1;
    }
    DAT_10026350 = 1;
  }
  else {
LAB_10018fd1:
    if ((DAT_10026350 == 2) || (DAT_10026350 == 0)) {
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
          if (_Memory == (void *)0x0) goto LAB_1001911e;
          param_2 = (ulong)_Memory;
        }
        GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4);
        if (_Memory != (void *)0x0) {
          _free(_Memory);
        }
      }
      goto LAB_1001911e;
    }
    if (DAT_10026350 != 1) goto LAB_1001911e;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1001911e;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      lpWideCharStr = (LPWSTR)((int)register0x00000010 + -0x18);
      puVar3 = (undefined4 *)((int)register0x00000010 + -0x18);
      if (&uStack00000000 != (undefined1 *)0x18) goto LAB_10019061;
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
LAB_10019061:
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
LAB_1001911e:
  iVar4 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar4;
}



/* ---- ___crtGetStringTypeA @ 10019130 size=64 ---- */

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



/* ---- ___free_lc_time @ 10019170 size=400 ---- */

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



/* ---- ___free_lconv_num @ 10019300 size=64 ---- */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10024f48) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10024f4c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10024f50) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/* ---- ___free_lconv_mon @ 10019340 size=137 ---- */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10024f54) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10024f58) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10024f5c) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10024f60) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10024f64) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10024f68) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10024f6c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/* ---- _strcspn @ 100193d0 size=70 ---- */

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



/* ---- _strpbrk @ 10019420 size=64 ---- */

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



/* ---- FID_conflict:__ld12tod @ 10019460 size=1346 ---- */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_1001995f;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10024f98 - 1;
    iVar4 = (int)(DAT_10024f98 + ((int)DAT_10024f98 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10024f98 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_10019593;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1001959a;
LAB_10019593:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1001959a:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_100195a8;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_100195a8:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_10024f94 - DAT_10024f98)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10024f94 < iVar12) {
        if (iVar12 < DAT_10024f90) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10024fa4;
          iVar2 = (int)(DAT_10024f9c + ((int)DAT_10024f9c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10024f9c & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_10024f9c + ((int)DAT_10024f9c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10024f9c & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_10024fa4 + DAT_10024f90;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1001995f;
      }
      local_14 = DAT_10024f94 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_10024f98 - 1;
      iVar12 = (int)(DAT_10024f98 + ((int)DAT_10024f98 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10024f98 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_1001974b;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_1001974b:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10024f9c + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_1001995f:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10024f9c & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10024fa0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10024fa0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/* ---- FID_conflict:__ld12tod @ 100199a2 size=1346 ---- */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_10019ea1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10024fb0 - 1;
    iVar4 = (int)(DAT_10024fb0 + ((int)DAT_10024fb0 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10024fb0 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_10019ad5;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_10019adc;
LAB_10019ad5:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_10019adc:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_10019aea;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_10019aea:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_10024fac - DAT_10024fb0)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10024fac < iVar12) {
        if (iVar12 < DAT_10024fa8) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10024fbc;
          iVar2 = (int)(DAT_10024fb4 + ((int)DAT_10024fb4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10024fb4 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_10024fb4 + ((int)DAT_10024fb4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10024fb4 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_10024fbc + DAT_10024fa8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_10019ea1;
      }
      local_14 = DAT_10024fac - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_10024fb0 - 1;
      iVar12 = (int)(DAT_10024fb0 + ((int)DAT_10024fb0 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10024fb0 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_10019c8d;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_10019c8d:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10024fb4 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_10019ea1:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10024fb4 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10024fb8 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10024fb8 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/* ---- __forcdecpt_l @ 10019ee4 size=113 ---- */

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/* ---- __cropzeros_l @ 10019f55 size=128 ---- */

/* Library Function - Single Match
    __cropzeros_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar2;
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/* ---- __fassign_l @ 10019feb size=64 ---- */

/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}



/* ---- __shift @ 1001a042 size=29 ---- */

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2005 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}



/* ---- __cftoe2_l @ 1001a07b size=362 ---- */

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  DWORD *pDVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  DWORD DVar7;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    pDVar1 = FUN_10010970();
    DVar7 = 0x16;
  }
  else {
    if (param_2 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_2;
    }
    if (iVar3 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar5 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar5 = in_EAX + 1;
      }
      puVar6 = puVar5;
      if (0 < param_2) {
        puVar6 = puVar5 + 1;
        *puVar5 = *puVar6;
        *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar6 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_EAX + (param_1 - (int)_Dst);
      }
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar3 = param_4[1] + -1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          _Dst[1] = '-';
        }
        if (99 < iVar3) {
          iVar4 = iVar3 / 100;
          iVar3 = iVar3 % 100;
          _Dst[2] = _Dst[2] + (char)iVar4;
        }
        if (9 < iVar3) {
          iVar4 = iVar3 / 10;
          iVar3 = iVar3 % 10;
          _Dst[3] = _Dst[3] + (char)iVar4;
        }
        _Dst[4] = _Dst[4] + (char)iVar3;
      }
      if (((DAT_10026418 & 1) != 0) && (_Dst[2] == '0')) {
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    pDVar1 = FUN_10010970();
    DVar7 = 0x22;
  }
  *pDVar1 = DVar7;
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return DVar7;
}



/* ---- __cftoe_l @ 1001a1e8 size=206 ---- */

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)(local_20 + 0x1c);
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\0',param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)(local_20 + 0x1c));
  return;
}



/* ---- __cftoe @ 1001a2b6 size=30 ---- */

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}



/* ---- __cftoa_l @ 1001a2d4 size=881 ---- */

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  DWORD *pDVar2;
  size_t _SizeInBytes;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  DWORD DVar13;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_10010970();
    DVar13 = 0x16;
LAB_1001a30d:
    *pDVar2 = DVar13;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return DVar13;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    pDVar2 = FUN_10010970();
    DVar13 = 0x22;
    goto LAB_1001a30d;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    DVar13 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (DVar13 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return DVar13;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return DVar13;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar3 = _strrchr(param_2 + 2,0x65);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar3[3] = '\0';
    }
    goto LAB_1001a631;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar7 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar9 = param_2 + 3;
  pcVar3 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar9 = '\0';
  }
  else {
    *pcVar9 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar11 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar7;
      }
      local_8 = local_8 + -4;
      *pcVar3 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar3 = pcVar3 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar8 = pcVar3, 8 < (ushort)uVar11)) {
      while( true ) {
        pcVar4 = pcVar8 + -1;
        if ((*pcVar4 != 'f') && (*pcVar4 != 'F')) break;
        *pcVar4 = '0';
        pcVar8 = pcVar4;
      }
      if (pcVar4 == pcVar9) {
        pcVar8[-2] = pcVar8[-2] + '\x01';
      }
      else if (*pcVar4 == '9') {
        *pcVar4 = (char)sVar7 + ':';
      }
      else {
        *pcVar4 = *pcVar4 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar3,0x30,param_4);
    pcVar3 = pcVar3 + param_4;
  }
  if (*pcVar9 == '\0') {
    pcVar3 = pcVar9;
  }
  *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar11 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar5 = (uint)uVar11 & 0x7ff;
  uVar6 = uVar5 - local_18;
  uVar5 = -(uint)(uVar5 < local_18);
  if ((int)uVar5 < 0) {
    pcVar3[1] = '-';
    bVar10 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar10);
  }
  else {
    pcVar3[1] = '+';
  }
  pcVar8 = pcVar3 + 2;
  *pcVar8 = '0';
  pcVar9 = pcVar8;
  if (((int)uVar5 < 0) || (((int)uVar5 < 1 && (uVar6 < 1000)))) {
LAB_1001a5e0:
    if ((-1 < (int)uVar5) && ((0 < (int)uVar5 || (99 < uVar6)))) goto LAB_1001a5eb;
  }
  else {
    uVar12 = __alldvrm(uVar6,uVar5,1000,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar8 = (char)uVar12 + '0';
    pcVar9 = pcVar3 + 3;
    uVar5 = 0;
    uVar6 = extraout_ECX;
    if (pcVar9 == pcVar8) goto LAB_1001a5e0;
LAB_1001a5eb:
    uVar12 = __alldvrm(uVar6,uVar5,100,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar5 = 0;
    uVar6 = extraout_ECX_00;
  }
  if ((pcVar9 != pcVar8) || ((-1 < (int)uVar5 && ((0 < (int)uVar5 || (9 < uVar6)))))) {
    uVar12 = __alldvrm(uVar6,uVar5,10,0);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar6 = extraout_ECX_01;
  }
  *pcVar9 = (char)uVar6 + '0';
  pcVar9[1] = '\0';
LAB_1001a631:
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 0;
}



/* ---- __cftof2_l @ 1001a645 size=245 ---- */

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  DWORD *pDVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    pDVar2 = FUN_10010970();
    uVar4 = 0x16;
    *pDVar2 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      puVar3 = (undefined1 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this);
      *puVar3 = 0x30;
      puVar3[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      __shift();
      *(undefined1 *)this = 0x30;
      puVar3 = (undefined1 *)((int)this + 1);
    }
    else {
      puVar3 = (undefined1 *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar3 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar3 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* ---- __cftof_l @ 1001a73a size=185 ---- */

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)(local_20 + 0x1c);
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_10010970();
    *pDVar1 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)(local_20 + 0x1c));
  return;
}



/* ---- __cftog_l @ 1001a7f3 size=248 ---- */

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  DWORD *pDVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)(local_20 + 0x1c);
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_10010970();
    *pDVar2 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || ((int)param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)(local_20 + 0x1c));
  return;
}



/* ---- __cfltcvt_l @ 1001a8eb size=134 ---- */

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  DWORD DVar2;
  
  if ((format == 0x65) || (format == 0x45)) {
    DVar2 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      DVar2 = __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
    else {
      DVar2 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return DVar2;
}



/* ---- __cfltcvt @ 1001a971 size=33 ---- */

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}



/* ---- __setdefaultprecision @ 1001a992 size=38 ---- */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2005 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}



/* ---- __ms_p5_test_fdiv @ 1001a9bb size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_1001fb98 - (_DAT_1001fb98 / _DAT_1001fba0) * _DAT_1001fba0) {
    return 1;
  }
  return 0;
}



/* ---- __ms_p5_mp_test_fdiv @ 1001a9f7 size=41 ---- */

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2005 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}



/* ---- ___mtold12 @ 1001aa20 size=460 ---- */

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_1c [24];
  
  uVar7 = DAT_100241b0 ^ (uint)(local_1c + 0x18);
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = *param_3;
    uVar9 = param_3[1];
    uVar10 = *param_3;
    uVar1 = param_3[1];
    uVar11 = param_3[2];
    bVar4 = false;
    uVar8 = (param_3[2] * 2 | uVar9 >> 0x1f) * 2 | (uVar9 & 0x7fffffff) >> 0x1e;
    uVar3 = uVar2 * 4;
    uVar9 = (uVar9 * 2 | uVar2 >> 0x1f) * 2 | (uVar2 & 0x7fffffff) >> 0x1e;
    uVar2 = uVar3 + uVar10;
    *param_3 = uVar3;
    param_3[1] = uVar9;
    param_3[2] = uVar8;
    if ((uVar2 < uVar3) || (uVar2 < uVar10)) {
      bVar4 = true;
    }
    bVar5 = false;
    *param_3 = uVar2;
    if (bVar4) {
      uVar10 = uVar9 + 1;
      if ((uVar10 < uVar9) || (uVar10 == 0)) {
        bVar5 = true;
      }
      param_3[1] = uVar10;
      if (bVar5) {
        param_3[2] = uVar8 + 1;
      }
    }
    uVar10 = param_3[1] + uVar1;
    bVar4 = false;
    if ((uVar10 < param_3[1]) || (uVar10 < uVar1)) {
      bVar4 = true;
    }
    param_3[1] = uVar10;
    if (bVar4) {
      param_3[2] = param_3[2] + 1;
    }
    param_3[2] = param_3[2] + uVar11;
    bVar4 = false;
    uVar1 = uVar2 * 2;
    uVar11 = uVar10 * 2 | uVar2 >> 0x1f;
    uVar10 = param_3[2] * 2 | uVar10 >> 0x1f;
    *param_3 = uVar1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    uVar2 = uVar1 + (int)*param_1;
    if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
      bVar4 = true;
    }
    *param_3 = uVar2;
    if (bVar4) {
      uVar2 = uVar11 + 1;
      bVar4 = false;
      if ((uVar2 < uVar11) || (uVar2 == 0)) {
        bVar4 = true;
      }
      param_3[1] = uVar2;
      if (bVar4) {
        param_3[2] = uVar10 + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar10 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar10 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar10 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  __security_check_cookie(uVar7 ^ (uint)(local_1c + 0x18));
  return;
}



/* ---- __mbtowc_l @ 1001abec size=275 ---- */

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  DWORD *pDVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        if (_DstCh != (wchar_t *)0x0) {
          *_DstCh = (ushort)(byte)*_SrcCh;
        }
LAB_1001ac37:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 1;
      }
      iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
      if (iVar2 == 0) {
        iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                    (uint)(_DstCh != (wchar_t *)0x0));
        if (iVar2 != 0) goto LAB_1001ac37;
      }
      else {
        pwVar1 = (local_14.locinfo)->locale_name[3];
        if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
            (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,_DstCh
                                         ,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
           (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if (local_8 == '\0') {
            return (int)pwVar1;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return (int)pwVar1;
        }
      }
      pDVar3 = FUN_10010970();
      *pDVar3 = 0x2a;
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return -1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}



/* ---- _mbtowc @ 1001acff size=23 ---- */

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2005 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}



/* ---- ___ansicp @ 1001ad16 size=71 ---- */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)(local_10 + 0xc);
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)(local_10 + 0xc));
  return;
}



/* ---- ___convertcp @ 1001ad5d size=434 ---- */

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
  
  local_8 = DAT_100241b0 ^ (uint)(&local_1c)[1].DefaultChar;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1001aefd;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1001aefd;
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
      if (&uStack00000000 != (undefined1 *)0x44) goto LAB_1001ae3d;
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
LAB_1001ae3d:
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
LAB_1001aefd:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
}



/* ---- __alloca_probe_16 @ 1001af10 size=22 ---- */

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



/* ---- __alloca_probe_8 @ 1001af26 size=22 ---- */

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



/* ---- __calloc_impl @ 1001af3c size=272 ---- */

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
        if ((DAT_100264b0 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_100264a0)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1001b038();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_1001afed;
          }
        }
        else {
LAB_1001afed:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_1002617c,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_100262dc == 0) {
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
    pDVar1 = FUN_10010970();
    *pDVar1 = 0xc;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/* ---- FUN_1001b038 @ 1001b038 size=9 ---- */

void FUN_1001b038(void)

{
  FUN_10016b9a(4);
  return;
}



/* ---- _realloc @ 1001b05a size=524 ---- */

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
  if (DAT_100264b0 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1001b233;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_10016d0f(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_100264a0) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_10016d0f(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_1002617c,0,_NewSize);
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
      FUN_1001b19e();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_1002617c,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_100262dc == 0) {
        pDVar4 = FUN_10010970();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1001b260;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_10010970();
    if (local_24 != (uint *)0x0) goto LAB_1001b23f;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1001b233;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_1002617c,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_100262dc == 0) {
        pDVar4 = FUN_10010970();
LAB_1001b260:
        DVar5 = GetLastError();
        DVar5 = FUN_10010935(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_10010970();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_10010935(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_1001b233:
  __callnewh(_NewSize);
  pDVar4 = FUN_10010970();
LAB_1001b23f:
  *pDVar4 = 0xc;
  return (void *)0x0;
}



/* ---- FUN_1001b19e @ 1001b19e size=9 ---- */

void FUN_1001b19e(void)

{
  FUN_10016b9a(4);
  return;
}



/* ---- FUN_1001b275 @ 1001b275 size=10 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001b275(undefined4 param_1)

{
  _DAT_10026358 = param_1;
  return;
}



/* ---- _ValidateRead @ 1001b27f size=13 ---- */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/* ---- __putwch_nolock @ 1001b28c size=194 ---- */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)(local_10 + 0xc);
  if (DAT_10025280 != 0) {
    if (DAT_10025344 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10025344 == (HANDLE)0xffffffff) goto LAB_1001b335;
    BVar2 = WriteConsoleW(DAT_10025344,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10025280 = 1;
      goto LAB_1001b335;
    }
    if ((DAT_10025280 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_1001b335;
    DAT_10025280 = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_10025344 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10025344,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_1001b335:
  wVar1 = __security_check_cookie(local_8 ^ (uint)(local_10 + 0xc));
  return wVar1;
}



/* ---- _strrchr @ 1001b360 size=45 ---- */

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar4;
  char *pcVar3;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



/* ---- FID_conflict:__atoflt_l @ 1001b38d size=166 ---- */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)((&local_14)[1].ld12 + 4);
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1001418c((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_1001b3e4:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1001b424;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1001b416:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1001b424;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1001b416;
    goto LAB_1001b3e4;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_1001b424:
  iVar2 = __security_check_cookie(local_8 ^ (uint)((&local_14)[1].ld12 + 4));
  return iVar2;
}



/* ---- FID_conflict:__atoflt_l @ 1001b433 size=166 ---- */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)((&local_14)[1].ld12 + 4);
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1001418c((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_1001b48a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1001b4ca;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1001b4bc:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1001b4ca;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1001b4bc;
    goto LAB_1001b48a;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_1001b4ca:
  iVar2 = __security_check_cookie(local_8 ^ (uint)((&local_14)[1].ld12 + 4));
  return iVar2;
}



/* ---- __fptostr @ 1001b4d9 size=189 ---- */

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  DWORD *pDVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  errno_t eVar6;
  char *pcVar7;
  
  pcVar7 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    pDVar1 = FUN_10010970();
    eVar6 = 0x16;
    *pDVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    if (_Digits < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = _Digits;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf + 1;
      if (0 < _Digits) {
        do {
          cVar5 = *pcVar7;
          if (cVar5 == '\0') {
            cVar5 = '0';
          }
          else {
            pcVar7 = pcVar7 + 1;
          }
          *pcVar3 = cVar5;
          pcVar3 = pcVar3 + 1;
          _Digits = _Digits + -1;
        } while (0 < _Digits);
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar7)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    pDVar1 = FUN_10010970();
    eVar6 = 0x22;
    *pDVar1 = 0x22;
  }
  FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar6;
}



/* ---- ___dtold @ 1001b596 size=187 ---- */

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_1001b648;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_1001b648:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/* ---- __fltout2 @ 1001b651 size=139 ---- */

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  ushort uStack_c;
  undefined4 local_8;
  
  local_8 = DAT_100241b0 ^ (uint)(local_2c + 0x28);
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_1001b931(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  p_Var3 = (STRFLT)__security_check_cookie(local_8 ^ (uint)(local_2c + 0x28));
  return p_Var3;
}



/* ---- __alldvrm @ 1001b6e0 size=223 ---- */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  
  cVar10 = (int)param_2 < 0;
  if ((bool)cVar10) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar9 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar10 = cVar10 + '\x01';
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar9 - param_4;
  }
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    uVar7 = param_1;
    uVar4 = param_3;
    uVar6 = param_2;
    uVar8 = param_4;
    do {
      uVar3 = uVar8 & 1;
      uVar8 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar7 = (uint)(CONCAT14(uVar3 != 0,uVar7) >> 1);
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar4 + iVar5 * param_4;
    if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  if (cVar10 == '\x01') {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar4 = -(uint)bVar9 - uVar4;
  }
  return CONCAT44(uVar4,iVar5);
}



/* ---- __aullshr @ 1001b7c0 size=31 ---- */

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}



/* ---- __controlfp_s @ 1001b7df size=106 ---- */

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  DWORD *pDVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    pDVar2 = FUN_10010970();
    eVar3 = 0x16;
    *pDVar2 = 0x16;
    FUN_1000e9a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}



/* ---- __alloca_probe @ 1001b850 size=43 ---- */

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



/* ---- ___initconout @ 1001b87b size=31 ---- */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10025344 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/* ---- ___ascii_strnicmp @ 1001b8d0 size=97 ---- */

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
      if (bVar2 != (byte)uVar3) goto LAB_1001b921;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1001b921:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/* ---- FUN_1001b931 @ 1001b931 size=2240 ---- */

/* WARNING: Removing unreachable block (ram,0x1001be22) */
/* WARNING: Removing unreachable block (ram,0x1001be2c) */
/* WARNING: Removing unreachable block (ram,0x1001be31) */

void __cdecl
FUN_1001b931(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  errno_t eVar8;
  short *psVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ushort uVar22;
  ushort uVar23;
  char *pcVar24;
  undefined **local_6c;
  undefined **local_68;
  ushort *local_60;
  ushort *local_5c;
  undefined **local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  short *local_48;
  int local_44;
  undefined2 local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  undefined4 local_8;
  
  uVar15 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
  uVar10 = CONCAT22(local_24._2_2_,(undefined2)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_100241b0 ^ (int)register0x00000010 - 4U;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  uVar20 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar11 = param_3 & 0x8000;
  uVar13 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar11 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar13 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar11 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_1001c1af;
  }
  if ((short)uVar13 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar11 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1001ba60;
        pcVar24 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_1001ba60:
          pcVar24 = "1#QNAN";
          goto LAB_1001ba65;
        }
        pcVar24 = "1#IND";
      }
      eVar8 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar24 = "1#SNAN";
LAB_1001ba65:
      eVar8 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    uVar15 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar10 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    goto LAB_1001c1af;
  }
  local_50 = (short)(((uVar13 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar13 * 0x4d10
                    >> 0x10);
  uVar15 = (uint)local_50;
  local_1a = (undefined1)uVar13;
  bStack_19 = (byte)(uVar13 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  uVar10 = param_1 << 0x10;
  local_6c = &PTR_DAT_10024f60;
  uStack_1c = local_10._2_2_;
  if (uVar15 != 0) {
    uVar21 = -uVar15;
    uVar13 = uVar20;
    uVar10 = param_1 << 0x10;
    if ((int)-uVar15 < 0) {
      local_6c = (undefined **)&DAT_100250c0;
      uVar21 = uVar15;
    }
    while (uVar21 != 0) {
      local_6c = local_6c + 0x15;
      uVar15 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar21 & 7) == 0) goto LAB_1001bd86;
      local_68 = local_6c + (uVar21 & 7) * 3;
      if (0x7fff < *(ushort *)local_68) {
        local_40 = SUB42(*local_68,0);
        uStack_3e._0_2_ = (undefined2)((uint)*local_68 >> 0x10);
        ppuVar2 = local_68 + 2;
        uStack_3e._2_2_ = SUB42(local_68[1],0);
        uStack_3a = (ushort)((uint)local_68[1] >> 0x10);
        local_68 = (undefined **)&local_40;
        local_38 = *ppuVar2;
        iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
        uStack_3e._0_2_ = (undefined2)iVar1;
        uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      uVar12 = CONCAT11(bStack_19,local_1a) & 0x7fff;
      uVar22 = *(ushort *)((int)local_68 + 10) & 0x7fff;
      local_4c = (ushort *)0x0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      local_10._0_2_ = 0;
      uVar5 = 0;
      local_10._2_2_ = 0;
      local_c = 0;
      uVar6 = 0;
      uStack_a = 0;
      uVar23 = (*(ushort *)((int)local_68 + 10) ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
      uVar7 = uVar22 + uVar12;
      uVar13 = 0;
      uVar15 = 0;
      if (((uVar12 < 0x7fff) && (uVar13 = 0, uVar15 = 0, uVar22 < 0x7fff)) &&
         (uVar13 = uVar5, uVar15 = uVar6, uVar7 < 0xbffe)) {
        if (uVar7 < 0x3fc0) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          uVar10 = 0;
          uVar20 = 0;
        }
        else if (((uVar12 == 0) &&
                 (uVar7 = uVar7 + 1,
                 (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
                ((uVar20 == 0 && (uVar10 == 0)))) {
          local_1a = 0;
          bStack_19 = 0;
        }
        else if ((((uVar22 == 0) && (uVar7 = uVar7 + 1, ((uint)local_68[2] & 0x7fffffff) == 0)) &&
                 (local_68[1] == (undefined *)0x0)) && (*local_68 == (undefined *)0x0)) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          uVar10 = 0;
          uVar20 = 0;
        }
        else {
          local_48 = (short *)&local_10;
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = local_68 + 2;
              do {
                bVar4 = false;
                uVar10 = *(uint *)(local_48 + -2) + (uint)*local_5c * (uint)*(ushort *)local_58;
                if ((uVar10 < *(uint *)(local_48 + -2)) ||
                   (uVar10 < (uint)*local_5c * (uint)*(ushort *)local_58)) {
                  bVar4 = true;
                }
                *(uint *)(local_48 + -2) = uVar10;
                if (bVar4) {
                  *local_48 = *local_48 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = (undefined **)((int)local_58 + -2);
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            local_48 = local_48 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar7 = uVar7 + 0xc002;
          if ((short)uVar7 < 1) {
LAB_1001bcaa:
            uVar7 = uVar7 - 1;
            if ((short)uVar7 < 0) {
              local_48 = (short *)(uint)(ushort)-uVar7;
              uVar7 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar19 = CONCAT22(uStack_a,local_c);
                uVar10 = CONCAT22(local_10._2_2_,(ushort)local_10);
                iVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
                local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                uStack_a = uStack_a >> 1;
                local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar19 << 0x1f) >> 0x10);
                uVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar16 << 0x1f) >> 0x10);
                local_48 = (short *)((int)local_48 - 1);
                local_10._0_2_ = (ushort)(uVar10 >> 1);
                local_14 = (byte)uVar20;
                uStack_13 = (undefined1)(uVar20 >> 8);
              } while (local_48 != (short *)0x0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar12 = uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar16 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar16;
              uStack_13 = (undefined1)((uint)iVar16 >> 8);
              uStack_12 = (ushort)((uint)iVar16 >> 0x10);
              iVar16 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
              local_10._0_2_ = (ushort)iVar16 | uVar12 >> 0xf;
              iVar19 = CONCAT22(uStack_a,local_c) * 2;
              local_c = (ushort)iVar19 | local_10._2_2_ >> 0xf;
              uVar7 = uVar7 - 1;
              local_10._2_2_ = (ushort)((uint)iVar16 >> 0x10);
              uStack_a = (ushort)((uint)iVar19 >> 0x10);
            } while (0 < (short)uVar7);
            if ((short)uVar7 < 1) goto LAB_1001bcaa;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (uVar15 = CONCAT22(local_c,local_10._2_2_),
             uVar13 = CONCAT22((ushort)local_10,uStack_12),
             (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22((ushort)local_10,uStack_12) == -1) {
              uStack_12 = 0;
              local_10._0_2_ = 0;
              uVar13 = 0;
              if (CONCAT22(local_c,local_10._2_2_) == -1) {
                local_10._2_2_ = 0;
                local_c = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar7 = uVar7 + 1;
                  uVar15 = 0;
                  uVar13 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  uVar15 = 0;
                  uVar13 = 0;
                }
              }
              else {
                uVar15 = CONCAT22(local_c,local_10._2_2_) + 1;
                local_10._2_2_ = (ushort)uVar15;
                local_c = (ushort)(uVar15 >> 0x10);
              }
            }
            else {
              uVar13 = CONCAT22((ushort)local_10,uStack_12) + 1;
              uStack_12 = (ushort)uVar13;
              local_10._0_2_ = (ushort)(uVar13 >> 0x10);
              uVar15 = CONCAT22(local_c,local_10._2_2_);
            }
          }
          if (0x7ffe < uVar7) goto LAB_1001bd6a;
          local_24 = uVar13;
          bStack_19 = (byte)(uVar7 >> 8) | (byte)(uVar23 >> 8);
          uStack_20 = uVar15;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar7;
          uVar10 = uVar13;
          uVar20 = uVar15;
        }
      }
      else {
LAB_1001bd6a:
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        uVar20 = 0;
        iVar16 = (-(uint)(uVar23 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        uVar10 = 0;
        uStack_1c = (ushort)iVar16;
        local_1a = (undefined1)((uint)iVar16 >> 0x10);
        bStack_19 = (byte)((uint)iVar16 >> 0x18);
      }
LAB_1001bd86:
      local_c = (ushort)(uVar15 >> 0x10);
      local_10._2_2_ = (ushort)uVar15;
      local_10._0_2_ = (ushort)(uVar13 >> 0x10);
      uStack_12 = (ushort)uVar13;
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar21 = (int)uVar21 >> 3;
    }
  }
  uVar13 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uVar7 = (ushort)(uVar13 >> 0x10);
  uVar15 = uVar20;
  if (0x3ffe < uVar7) {
    local_50 = local_50 + 1;
    uVar7 = uVar7 & 0x7fff;
    uVar23 = uVar7 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    param_2 = 0;
    local_c = 0;
    uStack_a = 0;
    if ((uVar7 < 0x7fff) && (uVar23 < 0xbffe)) {
      if (0x3fbf < uVar23) {
        if (((((uVar13 & 0x7fff0000) == 0) &&
             (uVar23 = uVar7 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) && (uVar20 == 0)
            ) && (uVar10 == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_1001bfee;
        }
        local_58 = (undefined **)0x0;
        psVar9 = (short *)&local_10;
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar10 = *(uint *)(psVar9 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar10 < *(uint *)(psVar9 + -2)) || (uVar10 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar9 + -2) = uVar10;
              if (bVar4) {
                *psVar9 = *psVar9 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar9 = psVar9 + 1;
          local_58 = (undefined **)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        uVar23 = uVar23 + 0xc002;
        if ((short)uVar23 < 1) {
LAB_1001befc:
          uVar23 = uVar23 - 1;
          if ((short)uVar23 < 0) {
            uVar10 = (uint)(ushort)-uVar23;
            uVar23 = 0;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar19 = CONCAT22(uStack_a,local_c);
              uVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar19 << 0x1f) >> 0x10);
              uVar15 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar16 << 0x1f) >> 0x10);
              uVar10 = uVar10 - 1;
              local_10._0_2_ = (ushort)(uVar20 >> 1);
              local_14 = (byte)uVar15;
              uStack_13 = (undefined1)(uVar15 >> 8);
            } while (uVar10 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar7 = uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar16 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar16;
            uStack_13 = (undefined1)((uint)iVar16 >> 8);
            uStack_12 = (ushort)((uint)iVar16 >> 0x10);
            iVar16 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar16 | uVar7 >> 0xf;
            iVar19 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar19 | local_10._2_2_ >> 0xf;
            uVar23 = uVar23 - 1;
            local_10._2_2_ = (ushort)((uint)iVar16 >> 0x10);
            uStack_a = (ushort)((uint)iVar19 >> 0x10);
          } while (0 < (short)uVar23);
          if ((short)uVar23 < 1) goto LAB_1001befc;
        }
        uVar20 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uVar15 = CONCAT22(local_c,local_10._2_2_), uVar10 = CONCAT22((ushort)local_10,uStack_12)
           , (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar23 = uVar23 + 1;
                uVar15 = uVar20;
                uVar10 = uVar20;
              }
              else {
                uStack_a = uStack_a + 1;
                uVar15 = uVar20;
                uVar10 = uVar20;
              }
            }
            else {
              uVar15 = CONCAT22(local_c,local_10._2_2_) + 1;
              uVar10 = uVar20;
            }
          }
          else {
            uVar10 = CONCAT22((ushort)local_10,uStack_12) + 1;
            uVar15 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)(uVar10 >> 0x10);
        uStack_12 = (ushort)uVar10;
        local_c = (ushort)(uVar15 >> 0x10);
        local_10._2_2_ = (ushort)uVar15;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar23 < 0x7fff) {
          bStack_19 = (byte)(uVar23 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar23;
        }
        else {
          iVar16 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar16;
          local_1a = (undefined1)((uint)iVar16 >> 0x10);
          bStack_19 = (byte)((uint)iVar16 >> 0x18);
          uVar10 = uVar20;
          uVar15 = uVar20;
        }
        goto LAB_1001bfee;
      }
      uStack_1c = 0;
      local_1a = 0;
      bStack_19 = 0;
    }
    else {
      iVar16 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
      uStack_1c = (ushort)iVar16;
      local_1a = (undefined1)((uint)iVar16 >> 0x10);
      bStack_19 = (byte)((uint)iVar16 >> 0x18);
    }
    param_2 = 0;
    uVar10 = 0;
    uVar15 = 0;
  }
LAB_1001bfee:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar19 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar16 = 8;
    uVar20 = uVar10;
    do {
      uVar10 = uVar20 << 1;
      uStack_20._0_2_ = (ushort)(uVar15 * 2) | (ushort)(uVar20 >> 0x1f);
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar15 >> 0x1f);
      iVar16 = iVar16 + -1;
      uStack_20._2_2_ = (ushort)(uVar15 * 2 >> 0x10);
      uVar15 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
      uVar20 = uVar10;
    } while (iVar16 != 0);
    if ((iVar19 < 0) && (uVar20 = -iVar19 & 0xff, uVar20 != 0)) {
      do {
        iVar19 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar13 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar16 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar15 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar15;
        local_1a = (undefined1)(uVar15 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar19 << 0x1f) >> 0x10);
        uVar20 = uVar20 - 1;
        uStack_20._0_2_ = (ushort)(uVar13 >> 1);
        local_24._0_2_ = (undefined2)(uVar10 >> 1);
        local_24._2_2_ = (ushort)((uVar10 >> 1 | iVar16 << 0x1f) >> 0x10);
        uVar10 = CONCAT22(local_24._2_2_,(undefined2)local_24);
      } while (0 < (int)uVar20);
    }
    psVar9 = param_6 + 2;
    psVar17 = psVar9;
    uVar7 = uStack_20._2_2_;
    for (iVar16 = param_4 + 1; 0 < iVar16; iVar16 = iVar16 + -1) {
      local_24._2_2_ = (ushort)(uVar10 >> 0x10);
      local_24._0_2_ = (undefined2)uVar10;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = (undefined *)CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar15 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar7 >> 0xf)) * 2 |
               (CONCAT22(uVar7,(ushort)uStack_20) & 0x7fffffff) >> 0x1e;
      uVar13 = (CONCAT22(uVar7,(ushort)uStack_20) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar10 & 0x7fffffff) >> 0x1e;
      uVar20 = uVar10 * 5;
      if ((uVar20 < uVar10 * 4) || (uVar21 = uVar13, uVar20 < uVar10)) {
        uVar21 = uVar13 + 1;
        bVar4 = false;
        if ((uVar21 < uVar13) || (uVar21 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar15 = uVar15 + 1;
        }
      }
      uVar13 = CONCAT22(uVar7,(ushort)uStack_20) + uVar21;
      if ((uVar13 < uVar21) || (uVar13 < CONCAT22(uVar7,(ushort)uStack_20))) {
        uVar15 = uVar15 + 1;
      }
      iVar19 = (int)(local_38 + uVar15) * 2;
      uStack_1c = (ushort)iVar19 | (ushort)(uVar13 >> 0x1f);
      uVar10 = uVar10 * 10;
      local_1a = (undefined1)((uint)iVar19 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar13 * 2) | (ushort)(uVar20 >> 0x1f);
      *(char *)psVar17 = (char)((uint)iVar19 >> 0x18) + '0';
      psVar17 = (short *)((int)psVar17 + 1);
      uStack_20._2_2_ = (ushort)(uVar13 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (undefined2)local_24;
      uStack_3a = uVar7;
      uVar7 = uStack_20._2_2_;
    }
    uVar15 = CONCAT22(uVar7,(ushort)uStack_20);
    psVar18 = psVar17 + -1;
    if (*(char *)((int)psVar17 + -1) < '5') {
      for (; (psVar9 <= psVar18 && ((char)*psVar18 == '0')); psVar18 = (short *)((int)psVar18 + -1))
      {
      }
      if (psVar18 < psVar9) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar11 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar9 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_1001c1af;
      }
    }
    else {
      for (; (psVar9 <= psVar18 && ((char)*psVar18 == '9')); psVar18 = (short *)((int)psVar18 + -1))
      {
        *(char *)psVar18 = '0';
      }
      if (psVar18 < psVar9) {
        psVar18 = (short *)((int)psVar18 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar18 = (char)*psVar18 + '\x01';
    }
    cVar14 = ((char)psVar18 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar14;
    *(undefined1 *)(cVar14 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar11 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_1001c1af:
  local_24 = uVar10;
  local_10 = param_2;
  uStack_3e = iVar1;
  uStack_20 = uVar15;
  __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return;
}



/* ---- __hw_cw @ 1001c1f7 size=142 ---- */

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2005 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



/* ---- ___hw_cw_sse2 @ 1001c285 size=160 ---- */

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_2 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



/* ---- __control87 @ 1001c325 size=771 ---- */

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  uint local_4;
  
  uVar4 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar4 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar4 = uVar4 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar4 = uVar4 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar4 = uVar4 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar4 = uVar4 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar4 = uVar4 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar4 = uVar4 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar4 = uVar4 | 0x40000;
  }
  local_4 = ~_Mask & uVar4 | _NewValue & _Mask;
  if (local_4 != uVar4) {
    uVar4 = __hw_cw();
    local_4 = 0;
    if ((uVar4 & 1) != 0) {
      local_4 = 0x10;
    }
    if ((uVar4 & 4) != 0) {
      local_4 = local_4 | 8;
    }
    if ((uVar4 & 8) != 0) {
      local_4 = local_4 | 4;
    }
    if ((uVar4 & 0x10) != 0) {
      local_4 = local_4 | 2;
    }
    if ((uVar4 & 0x20) != 0) {
      local_4 = local_4 | 1;
    }
    if ((uVar4 & 2) != 0) {
      local_4 = local_4 | 0x80000;
    }
    uVar2 = uVar4 & 0xc00;
    if (uVar2 != 0) {
      if (uVar2 == 0x400) {
        local_4 = local_4 | 0x100;
      }
      else if (uVar2 == 0x800) {
        local_4 = local_4 | 0x200;
      }
      else if (uVar2 == 0xc00) {
        local_4 = local_4 | 0x300;
      }
    }
    if ((uVar4 & 0x300) == 0) {
      local_4 = local_4 | 0x20000;
    }
    else if ((uVar4 & 0x300) == 0x200) {
      local_4 = local_4 | 0x10000;
    }
    if ((uVar4 & 0x1000) != 0) {
      local_4 = local_4 | 0x40000;
    }
  }
  if (DAT_10027608 != 0) {
    uVar4 = 0;
    if ((char)MXCSR < '\0') {
      uVar4 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar2 = MXCSR & 0x6000;
    if (uVar2 != 0) {
      if (uVar2 == 0x2000) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar2 == 0x4000) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar2 == 0x6000) {
        uVar4 = uVar4 | 0x300;
      }
    }
    uVar3 = MXCSR & 0x8040;
    if (uVar3 == 0x40) {
      uVar4 = uVar4 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar4 = uVar4 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar4 = uVar4 | 0x1000000;
    }
    uVar3 = ~(_Mask & 0x308031f) & uVar4 | _Mask & 0x308031f & _NewValue;
    if (uVar3 != uVar4) {
      uVar4 = ___hw_cw_sse2(uVar2,uVar3);
      ___set_fpsr_sse2(uVar4);
      uVar4 = 0;
      if ((char)MXCSR < '\0') {
        uVar4 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar2 = MXCSR & 0x6000;
      if (uVar2 != 0) {
        if (uVar2 == 0x2000) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar2 == 0x4000) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar2 == 0x6000) {
          uVar4 = uVar4 | 0x300;
        }
      }
      uVar2 = MXCSR & 0x8040;
      if (uVar2 == 0x40) {
        uVar4 = uVar4 | 0x2000000;
      }
      else if (uVar2 == 0x8000) {
        uVar4 = uVar4 | 0x3000000;
      }
      else if (uVar2 == 0x8040) {
        uVar4 = uVar4 | 0x1000000;
      }
    }
    uVar2 = uVar4 ^ local_4;
    local_4 = uVar4 | local_4;
    if ((uVar2 & 0x8031f) != 0) {
      local_4 = local_4 | 0x80000000;
    }
  }
  return local_4;
}



/* ---- ___set_fpsr_sse2 @ 1001c628 size=68 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_10027608 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_100253c8 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/* ---- RtlUnwind @ 1001c69a size=6 ---- */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1001c69a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ---- Unwind@1001c6a0 @ 1001c6a0 size=8 ---- */

void Unwind_1001c6a0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x28);
  return;
}



/* ---- Unwind@1001c6c3 @ 1001c6c3 size=8 ---- */

void Unwind_1001c6c3(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x28);
  return;
}



/* ---- Unwind@1001c710 @ 1001c710 size=9 ---- */

void Unwind_1001c710(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001c713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::Thread::~Thread(*(Thread **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001c740 @ 1001c740 size=9 ---- */

void Unwind_1001c740(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001c743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::Thread::~Thread(*(Thread **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001c749 @ 1001c749 size=12 ---- */

void Unwind_1001c749(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001c74f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@1001c755 @ 1001c755 size=12 ---- */

void Unwind_1001c755(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001c75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::ManualResetEvent::~ManualResetEvent
            ((ManualResetEvent *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@1001c780 @ 1001c780 size=9 ---- */

void Unwind_1001c780(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001c783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::Thread::~Thread(*(Thread **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001c789 @ 1001c789 size=12 ---- */

void Unwind_1001c789(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001c78f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + 4) + 8));
  return;
}



/* ---- Unwind@1001c7b0 @ 1001c7b0 size=8 ---- */

void Unwind_1001c7b0(void)

{
  int unaff_EBP;
  
  FUN_10004f40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001c7b8 @ 1001c7b8 size=11 ---- */

void Unwind_1001c7b8(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001c7e0 @ 1001c7e0 size=8 ---- */

void Unwind_1001c7e0(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001c810 @ 1001c810 size=8 ---- */

void Unwind_1001c810(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001c840 @ 1001c840 size=9 ---- */

void Unwind_1001c840(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001c843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::Thread::~Thread(*(Thread **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001c870 @ 1001c870 size=8 ---- */

void Unwind_1001c870(void)

{
  int unaff_EBP;
  
  FUN_100056f0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001c878 @ 1001c878 size=11 ---- */

void Unwind_1001c878(void)

{
  FUN_10005100();
  return;
}



/* ---- Unwind@1001c8c0 @ 1001c8c0 size=5 ---- */

void Unwind_1001c8c0(void)

{
  return;
}



/* ---- Unwind@1001c8e0 @ 1001c8e0 size=8 ---- */

void Unwind_1001c8e0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 8);
  return;
}



/* ---- Unwind@1001c910 @ 1001c910 size=5 ---- */

void Unwind_1001c910(void)

{
  return;
}



/* ---- Unwind@1001c930 @ 1001c930 size=8 ---- */

void Unwind_1001c930(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 8);
  return;
}



/* ---- Unwind@1001c960 @ 1001c960 size=8 ---- */

void Unwind_1001c960(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001c990 @ 1001c990 size=5 ---- */

void Unwind_1001c990(void)

{
  return;
}



/* ---- Unwind@1001c9b0 @ 1001c9b0 size=8 ---- */

void Unwind_1001c9b0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 8);
  return;
}



/* ---- Unwind@1001c9e0 @ 1001c9e0 size=11 ---- */

void Unwind_1001c9e0(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 4);
  return;
}



/* ---- Unwind@1001c9eb @ 1001c9eb size=11 ---- */

void Unwind_1001c9eb(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 0x20);
  return;
}



/* ---- Unwind@1001c9f6 @ 1001c9f6 size=11 ---- */

void Unwind_1001c9f6(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 0x3c);
  return;
}



/* ---- Unwind@1001ca01 @ 1001ca01 size=11 ---- */

void Unwind_1001ca01(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 0x58);
  return;
}



/* ---- Unwind@1001ca0c @ 1001ca0c size=11 ---- */

void Unwind_1001ca0c(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 0x74);
  return;
}



/* ---- Unwind@1001ca40 @ 1001ca40 size=5 ---- */

void Unwind_1001ca40(void)

{
  return;
}



/* ---- Unwind@1001ca60 @ 1001ca60 size=8 ---- */

void Unwind_1001ca60(void)

{
  int unaff_EBP;
  
  FUN_100056f0(*(undefined4 **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001ca68 @ 1001ca68 size=11 ---- */

void Unwind_1001ca68(void)

{
  FUN_10005100();
  return;
}



/* ---- Unwind@1001ca90 @ 1001ca90 size=8 ---- */

void Unwind_1001ca90(void)

{
  int unaff_EBP;
  
  FUN_10004f40(*(undefined4 **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001ca98 @ 1001ca98 size=11 ---- */

void Unwind_1001ca98(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001caa3 @ 1001caa3 size=11 ---- */

void Unwind_1001caa3(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001cad0 @ 1001cad0 size=8 ---- */

void Unwind_1001cad0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 4);
  return;
}



/* ---- Unwind@1001cb00 @ 1001cb00 size=5 ---- */

void Unwind_1001cb00(void)

{
  return;
}



/* ---- Unwind@1001cb20 @ 1001cb20 size=8 ---- */

void Unwind_1001cb20(void)

{
  int unaff_EBP;
  
  exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001cb50 @ 1001cb50 size=8 ---- */

void Unwind_1001cb50(void)

{
  int unaff_EBP;
  
  exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001cb80 @ 1001cb80 size=8 ---- */

void Unwind_1001cb80(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x28);
  return;
}



/* ---- Unwind@1001cbb0 @ 1001cbb0 size=9 ---- */

void Unwind_1001cbb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001cbb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::Thread::~Thread(*(Thread **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001cbb9 @ 1001cbb9 size=12 ---- */

void Unwind_1001cbb9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001cbbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::ManualResetEvent::~ManualResetEvent
            ((ManualResetEvent *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@1001cbc5 @ 1001cbc5 size=12 ---- */

void Unwind_1001cbc5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001cbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@1001cbf0 @ 1001cbf0 size=8 ---- */

void Unwind_1001cbf0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 8);
  return;
}



/* ---- Unwind@1001cc20 @ 1001cc20 size=8 ---- */

void Unwind_1001cc20(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@1001cc28 @ 1001cc28 size=8 ---- */

void Unwind_1001cc28(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x48);
  return;
}



/* ---- Unwind@1001cc30 @ 1001cc30 size=8 ---- */

void Unwind_1001cc30(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -100);
  return;
}



/* ---- Unwind@1001cc38 @ 1001cc38 size=8 ---- */

void Unwind_1001cc38(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -100);
  return;
}



/* ---- Unwind@1001cc70 @ 1001cc70 size=8 ---- */

void Unwind_1001cc70(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001cc78 @ 1001cc78 size=11 ---- */

void Unwind_1001cc78(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 0x1c);
  return;
}



/* ---- Unwind@1001cca0 @ 1001cca0 size=8 ---- */

void Unwind_1001cca0(void)

{
  int unaff_EBP;
  
  FUN_100056f0(*(undefined4 **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001cca8 @ 1001cca8 size=11 ---- */

void Unwind_1001cca8(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001ccd0 @ 1001ccd0 size=11 ---- */

void Unwind_1001ccd0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001cd00 @ 1001cd00 size=8 ---- */

void Unwind_1001cd00(void)

{
  int unaff_EBP;
  
  FUN_100056f0(*(undefined4 **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001cd30 @ 1001cd30 size=8 ---- */

void Unwind_1001cd30(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@1001cd60 @ 1001cd60 size=8 ---- */

void Unwind_1001cd60(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@1001cd68 @ 1001cd68 size=8 ---- */

void Unwind_1001cd68(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x48);
  return;
}



/* ---- Unwind@1001cd70 @ 1001cd70 size=8 ---- */

void Unwind_1001cd70(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x80);
  return;
}



/* ---- Unwind@1001cd78 @ 1001cd78 size=8 ---- */

void Unwind_1001cd78(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -100);
  return;
}



/* ---- Unwind@1001cd80 @ 1001cd80 size=11 ---- */

void Unwind_1001cd80(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0xb8);
  return;
}



/* ---- Unwind@1001cd8b @ 1001cd8b size=11 ---- */

void Unwind_1001cd8b(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0xb8);
  return;
}



/* ---- Unwind@1001cd96 @ 1001cd96 size=11 ---- */

void Unwind_1001cd96(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x9c);
  return;
}



/* ---- Unwind@1001cda1 @ 1001cda1 size=11 ---- */

void Unwind_1001cda1(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0xb8);
  return;
}



/* ---- Unwind@1001cde0 @ 1001cde0 size=11 ---- */

void Unwind_1001cde0(void)

{
  int unaff_EBP;
  
  FUN_100053b0((undefined4 *)(*(int *)(unaff_EBP + 4) + 4));
  return;
}



/* ---- Unwind@1001ce10 @ 1001ce10 size=8 ---- */

void Unwind_1001ce10(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001ce40 @ 1001ce40 size=8 ---- */

void Unwind_1001ce40(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001ce70 @ 1001ce70 size=8 ---- */

void Unwind_1001ce70(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001cea0 @ 1001cea0 size=11 ---- */

void Unwind_1001cea0(void)

{
  thunk_FUN_1000d150();
  return;
}



/* ---- Unwind@1001ceab @ 1001ceab size=11 ---- */

void Unwind_1001ceab(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001ceb6 @ 1001ceb6 size=11 ---- */

void Unwind_1001ceb6(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 0x1c);
  return;
}



/* ---- Unwind@1001cee0 @ 1001cee0 size=8 ---- */

void Unwind_1001cee0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001cf10 @ 1001cf10 size=8 ---- */

void Unwind_1001cf10(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001cf40 @ 1001cf40 size=8 ---- */

void Unwind_1001cf40(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001cf70 @ 1001cf70 size=8 ---- */

void Unwind_1001cf70(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 4);
  return;
}



/* ---- Unwind@1001cf78 @ 1001cf78 size=11 ---- */

void Unwind_1001cf78(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x44));
  return;
}



/* ---- Unwind@1001cf83 @ 1001cf83 size=8 ---- */

void Unwind_1001cf83(void)

{
  FUN_1000cb70();
  return;
}



/* ---- Unwind@1001cfb0 @ 1001cfb0 size=11 ---- */

void Unwind_1001cfb0(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + 4) + 4);
  return;
}



/* ---- Unwind@1001cfbb @ 1001cfbb size=11 ---- */

void Unwind_1001cfbb(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001cfc6 @ 1001cfc6 size=11 ---- */

void Unwind_1001cfc6(void)

{
  FUN_1000b920();
  return;
}



/* ---- Unwind@1001cff0 @ 1001cff0 size=8 ---- */

void Unwind_1001cff0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001d020 @ 1001d020 size=8 ---- */

void Unwind_1001d020(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001d050 @ 1001d050 size=8 ---- */

void Unwind_1001d050(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001d080 @ 1001d080 size=11 ---- */

void Unwind_1001d080(void)

{
  thunk_FUN_1000aff0();
  return;
}



/* ---- Unwind@1001d08b @ 1001d08b size=11 ---- */

void Unwind_1001d08b(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001d0c0 @ 1001d0c0 size=8 ---- */

void Unwind_1001d0c0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x54);
  return;
}



/* ---- Unwind@1001d0f0 @ 1001d0f0 size=5 ---- */

void Unwind_1001d0f0(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026450);
  return;
}



/* ---- Unwind@1001d0f5 @ 1001d0f5 size=8 ---- */

void Unwind_1001d0f5(void)

{
  FUN_10009ae0();
  return;
}



/* ---- Unwind@1001d120 @ 1001d120 size=8 ---- */

void Unwind_1001d120(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001d150 @ 1001d150 size=8 ---- */

void Unwind_1001d150(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001d180 @ 1001d180 size=8 ---- */

void Unwind_1001d180(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 4);
  return;
}



/* ---- Unwind@1001d188 @ 1001d188 size=5 ---- */

void Unwind_1001d188(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  return;
}



/* ---- Unwind@1001d1b0 @ 1001d1b0 size=5 ---- */

void Unwind_1001d1b0(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026438);
  return;
}



/* ---- Unwind@1001d1b5 @ 1001d1b5 size=8 ---- */

void Unwind_1001d1b5(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@1001d1f0 @ 1001d1f0 size=8 ---- */

void Unwind_1001d1f0(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001d220 @ 1001d220 size=11 ---- */

void Unwind_1001d220(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d22b @ 1001d22b size=11 ---- */

void Unwind_1001d22b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d260 @ 1001d260 size=8 ---- */

void Unwind_1001d260(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001d290 @ 1001d290 size=8 ---- */

void Unwind_1001d290(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001d298 @ 1001d298 size=8 ---- */

void Unwind_1001d298(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001d2c0 @ 1001d2c0 size=8 ---- */

void Unwind_1001d2c0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001d2f0 @ 1001d2f0 size=8 ---- */

void Unwind_1001d2f0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@1001d320 @ 1001d320 size=11 ---- */

void Unwind_1001d320(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x834);
  return;
}



/* ---- Unwind@1001d32b @ 1001d32b size=11 ---- */

void Unwind_1001d32b(void)

{
  FUN_1000cb70();
  return;
}



/* ---- Unwind@1001d336 @ 1001d336 size=11 ---- */

void Unwind_1001d336(void)

{
  FUN_1000cb70();
  return;
}



/* ---- Unwind@1001d370 @ 1001d370 size=8 ---- */

void Unwind_1001d370(void)

{
  int unaff_EBP;
  
  FUN_100033c0(*(undefined4 **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001d378 @ 1001d378 size=11 ---- */

void Unwind_1001d378(void)

{
  thunk_FUN_10004330();
  return;
}



/* ---- Unwind@1001d383 @ 1001d383 size=11 ---- */

void Unwind_1001d383(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d3b0 @ 1001d3b0 size=11 ---- */

void Unwind_1001d3b0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d3e0 @ 1001d3e0 size=9 ---- */

void Unwind_1001d3e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001d3e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::Thread::~Thread(*(Thread **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@1001d3e9 @ 1001d3e9 size=12 ---- */

void Unwind_1001d3e9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001d3ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::ManualResetEvent::~ManualResetEvent
            ((ManualResetEvent *)(*(int *)(unaff_EBP + 4) + 8));
  return;
}



/* ---- Unwind@1001d3f5 @ 1001d3f5 size=12 ---- */

void Unwind_1001d3f5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1001d3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + 4) + 0xc));
  return;
}



/* ---- Unwind@1001d401 @ 1001d401 size=11 ---- */

void Unwind_1001d401(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d40c @ 1001d40c size=11 ---- */

void Unwind_1001d40c(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d417 @ 1001d417 size=11 ---- */

void Unwind_1001d417(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d440 @ 1001d440 size=11 ---- */

void Unwind_1001d440(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d470 @ 1001d470 size=11 ---- */

void Unwind_1001d470(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d4c0 @ 1001d4c0 size=8 ---- */

void Unwind_1001d4c0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + 8);
  return;
}



/* ---- Unwind@1001d4c8 @ 1001d4c8 size=5 ---- */

void Unwind_1001d4c8(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
  return;
}



/* ---- Unwind@1001d4cd @ 1001d4cd size=11 ---- */

void Unwind_1001d4cd(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x3c));
  return;
}



/* ---- Unwind@1001d4d8 @ 1001d4d8 size=8 ---- */

void Unwind_1001d4d8(void)

{
  FUN_1000cb70();
  return;
}



/* ---- Unwind@1001d500 @ 1001d500 size=11 ---- */

void Unwind_1001d500(void)

{
  thunk_FUN_1000d150();
  return;
}



/* ---- Unwind@1001d50b @ 1001d50b size=11 ---- */

void Unwind_1001d50b(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001d516 @ 1001d516 size=11 ---- */

void Unwind_1001d516(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + -0x10) + 0x1c);
  return;
}



/* ---- Unwind@1001d540 @ 1001d540 size=11 ---- */

void Unwind_1001d540(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + -0x18) + 4);
  return;
}



/* ---- Unwind@1001d54b @ 1001d54b size=11 ---- */

void Unwind_1001d54b(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001d5a0 @ 1001d5a0 size=5 ---- */

void Unwind_1001d5a0(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  return;
}



/* ---- Unwind@1001d5c0 @ 1001d5c0 size=5 ---- */

void Unwind_1001d5c0(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026468);
  return;
}



/* ---- Unwind@1001d5c5 @ 1001d5c5 size=8 ---- */

void Unwind_1001d5c5(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x4c);
  return;
}



/* ---- Unwind@1001d5cd @ 1001d5cd size=11 ---- */

void Unwind_1001d5cd(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x60));
  return;
}



/* ---- Unwind@1001d5d8 @ 1001d5d8 size=8 ---- */

void Unwind_1001d5d8(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x4c);
  return;
}



/* ---- Unwind@1001d5e0 @ 1001d5e0 size=8 ---- */

void Unwind_1001d5e0(void)

{
  FUN_1000cb70();
  return;
}



/* ---- Unwind@1001d610 @ 1001d610 size=11 ---- */

void Unwind_1001d610(void)

{
  thunk_FUN_1000aff0();
  return;
}



/* ---- Unwind@1001d61b @ 1001d61b size=11 ---- */

void Unwind_1001d61b(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001d650 @ 1001d650 size=11 ---- */

void Unwind_1001d650(void)

{
  thunk_FUN_10009550();
  return;
}



/* ---- Unwind@1001d680 @ 1001d680 size=8 ---- */

void Unwind_1001d680(void)

{
  FUN_10005100();
  return;
}



/* ---- Unwind@1001d688 @ 1001d688 size=8 ---- */

void Unwind_1001d688(void)

{
  FUN_10005100();
  return;
}



/* ---- Unwind@1001d690 @ 1001d690 size=8 ---- */

void Unwind_1001d690(void)

{
  FUN_10005100();
  return;
}



/* ---- Unwind@1001d6c0 @ 1001d6c0 size=11 ---- */

void Unwind_1001d6c0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@1001d6f0 @ 1001d6f0 size=8 ---- */

void Unwind_1001d6f0(void)

{
  FUN_10004b80();
  return;
}



/* ---- Unwind@1001d720 @ 1001d720 size=11 ---- */

void Unwind_1001d720(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d750 @ 1001d750 size=11 ---- */

void Unwind_1001d750(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d780 @ 1001d780 size=11 ---- */

void Unwind_1001d780(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d7b0 @ 1001d7b0 size=8 ---- */

void Unwind_1001d7b0(void)

{
  int unaff_EBP;
  
  FUN_100033c0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d7b8 @ 1001d7b8 size=11 ---- */

void Unwind_1001d7b8(void)

{
  thunk_FUN_10004330();
  return;
}



/* ---- Unwind@1001d7e0 @ 1001d7e0 size=11 ---- */

void Unwind_1001d7e0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d810 @ 1001d810 size=11 ---- */

void Unwind_1001d810(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001d850 @ 1001d850 size=8 ---- */

void Unwind_1001d850(void)

{
  thunk_FUN_10002390();
  return;
}



/* ---- Unwind@1001d858 @ 1001d858 size=5 ---- */

void Unwind_1001d858(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10026480);
  return;
}



/* ---- Unwind@1001d85d @ 1001d85d size=8 ---- */

void Unwind_1001d85d(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@1001d865 @ 1001d865 size=8 ---- */

void Unwind_1001d865(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@1001d890 @ 1001d890 size=11 ---- */

void Unwind_1001d890(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1001d8c0 @ 1001d8c0 size=8 ---- */

void Unwind_1001d8c0(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x30);
  return;
}



/* ---- Unwind@1001d8c8 @ 1001d8c8 size=8 ---- */

void Unwind_1001d8c8(void)

{
  int unaff_EBP;
  
  FUN_10001640(unaff_EBP + -0x4c);
  return;
}



/* ---- Unwind@1001d8d0 @ 1001d8d0 size=8 ---- */

void Unwind_1001d8d0(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + -0x58));
  return;
}



/* ---- Unwind@1001d8d8 @ 1001d8d8 size=11 ---- */

void Unwind_1001d8d8(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x70));
  return;
}



/* ---- Unwind@1001d8e3 @ 1001d8e3 size=8 ---- */

void Unwind_1001d8e3(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + -0x70));
  return;
}



/* ---- Unwind@1001d8eb @ 1001d8eb size=11 ---- */

void Unwind_1001d8eb(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -100));
  return;
}



/* ---- Unwind@1001d8f6 @ 1001d8f6 size=11 ---- */

void Unwind_1001d8f6(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x60));
  return;
}



/* ---- Unwind@1001d901 @ 1001d901 size=8 ---- */

void Unwind_1001d901(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + -0x70));
  return;
}



/* ---- Unwind@1001d909 @ 1001d909 size=11 ---- */

void Unwind_1001d909(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -100));
  return;
}



/* ---- Unwind@1001d940 @ 1001d940 size=8 ---- */

void Unwind_1001d940(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@1001d948 @ 1001d948 size=11 ---- */

void Unwind_1001d948(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1001d970 @ 1001d970 size=11 ---- */

void Unwind_1001d970(void)

{
  thunk_FUN_10009550();
  return;
}



/* ---- Unwind@1001d9a0 @ 1001d9a0 size=8 ---- */

void Unwind_1001d9a0(void)

{
  int unaff_EBP;
  
  FUN_10001640(*(int *)(unaff_EBP + -0x48));
  return;
}



/* ---- FUN_1001da47 @ 1001da47 size=22 ---- */

void FUN_1001da47(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_10025928);
  _atexit((_func_4879 *)&LAB_1001da9c);
  return;
}


// total=804 ok=804 failed=0
