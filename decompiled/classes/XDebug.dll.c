// Module: XDebug.dll
// ImageBase: 67400000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- thunk_FUN_67401990 @ 67401000 size=5 ---- */

void __fastcall thunk_FUN_67401990(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6741622c;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}



/* ---- FUN_67401010 @ 67401010 size=153 ---- */

uint __thiscall FUN_67401010(void *this,char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    if (*(uint *)((int)this + 0x14) <= param_2) {
      return *(uint *)((int)this + 0x14);
    }
  }
  else {
    if (param_3 <= *(uint *)((int)this + 0x14)) {
      uVar2 = *(uint *)((int)this + 0x14) - param_3;
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      uVar1 = *(uint *)((int)this + 0x18);
      pcVar5 = (char *)((int)this + 4);
      if (uVar1 < 0x10) {
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = *(char **)pcVar5;
      }
      pcVar3 = pcVar3 + uVar2;
      do {
        if (*pcVar3 == *param_1) {
          bVar7 = true;
          uVar2 = param_3;
          pcVar4 = pcVar3;
          pcVar6 = param_1;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar7 = *pcVar4 == *pcVar6;
            pcVar4 = pcVar4 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            if (0xf < uVar1) {
              pcVar5 = *(char **)pcVar5;
            }
            return (int)pcVar3 - (int)pcVar5;
          }
        }
        if (uVar1 < 0x10) {
          pcVar4 = pcVar5;
        }
        else {
          pcVar4 = *(char **)pcVar5;
        }
        if (pcVar3 == pcVar4) break;
        pcVar3 = pcVar3 + -1;
      } while( true );
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}



/* ---- FUN_674010b0 @ 674010b0 size=83 ---- */

void __thiscall FUN_674010b0(void *this,char param_1,uint param_2)

{
  undefined4 *_Memory;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x18))) {
    _Memory = *(undefined4 **)((int)this + 4);
    if (param_2 != 0) {
      puVar2 = _Memory;
      puVar3 = this;
      for (uVar1 = param_2 >> 2; puVar3 = puVar3 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    _free(_Memory);
  }
  *(uint *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + param_2 + 4) = 0;
  return;
}



/* ---- FUN_67401110 @ 67401110 size=117 ---- */

int __thiscall FUN_67401110(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_674077bf();
  }
  uVar2 = *(int *)((int)this + 0x14) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)((int)this + 4);
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar4 = puVar5;
      puVar1 = puVar5;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
      puVar1 = (undefined4 *)*puVar5;
    }
    _memmove((void *)((int)puVar4 + param_1),(void *)((int)puVar1 + param_2 + param_1),
             uVar2 - param_2);
    iVar3 = *(int *)((int)this + 0x14) - param_2;
    *(int *)((int)this + 0x14) = iVar3;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)((int)puVar5 + iVar3) = 0;
  }
  return (int)this;
}



/* ---- FUN_67401190 @ 67401190 size=18 ---- */

void __fastcall FUN_67401190(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ---- FUN_674011b0 @ 674011b0 size=38 ---- */

void __fastcall FUN_674011b0(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ---- FUN_674011e0 @ 674011e0 size=115 ---- */

void __thiscall FUN_674011e0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_674146b0;
  pvStack_10 = ExceptionList;
  uVar4 = param_1 | 0xf;
  if (uVar4 == 0xffffffff) {
    uVar4 = param_1;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar3 = uVar1 >> 1;
    if ((uVar4 / 3 < uVar3) && (uVar1 <= -uVar3 - 2)) {
      uVar4 = uVar3 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = operator_new(uVar4 + 1);
  FUN_6740127c(extraout_ECX,puVar2);
  return;
}



/* ---- Catch@67401253 @ 67401253 size=32 ---- */

undefined * Catch_67401253(void)

{
  void *pvVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pvVar1 = operator_new(*(int *)(unaff_EBP + 8) + 1);
  *(void **)(unaff_EBP + 8) = pvVar1;
  return &DAT_67401273;
}



/* ---- FUN_6740127c @ 6740127c size=111 ---- */

void __fastcall FUN_6740127c(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  iVar3 = 0;
  if (uVar2 != 0) {
    if (*(uint *)(unaff_ESI + 0x18) < 0x10) {
      puVar4 = (undefined4 *)(unaff_ESI + 4);
    }
    else {
      puVar4 = *(undefined4 **)(unaff_ESI + 4);
    }
    puVar5 = param_2;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    unaff_ESI = *(int *)(unaff_EBP + -0x14);
    iVar3 = *(int *)(unaff_EBP + 0xc);
  }
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
    _free(*(void **)(unaff_ESI + 4));
    param_2 = *(undefined4 **)(unaff_EBP + 8);
    iVar3 = *(int *)(unaff_EBP + 0xc);
  }
  puVar4 = (undefined4 *)(unaff_ESI + 4);
  *(undefined1 *)puVar4 = 0;
  *puVar4 = param_2;
  *(uint *)(unaff_ESI + 0x18) = unaff_EBX;
  *(int *)(unaff_ESI + 0x14) = iVar3;
  if (0xf < unaff_EBX) {
    puVar4 = param_2;
  }
  *(undefined1 *)((int)puVar4 + iVar3) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- Catch@674012eb @ 674012eb size=48 ---- */

void Catch_674012eb(void)

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
  __CxxThrowException_8(0,0);
}



/* ---- FUN_67401320 @ 67401320 size=130 ---- */

void __fastcall FUN_67401320(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_674146de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_6741620c;
  local_4 = 2;
  FUN_674019c0((int)(param_1 + 7));
  if (0xf < (uint)param_1[0x10]) {
    _free((void *)param_1[0xb]);
  }
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_67401990(param_1 + 7);
  local_4 = 0xffffffff;
  FUN_67401dc0(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_674013b0 @ 674013b0 size=30 ---- */

undefined4 * __thiscall FUN_674013b0(void *this,byte param_1)

{
  FUN_67401320(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_674013d0 @ 674013d0 size=227 ---- */

void * __thiscall FUN_674013d0(void *this,void *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    FUN_674077bf();
  }
  uVar4 = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (this == param_1) {
    FUN_67401110(this,uVar4 + param_2,0xffffffff);
    FUN_67401110(this,0,param_2);
    return this;
  }
  if (uVar4 == 0xffffffff) {
    FUN_67407817();
  }
  if (*(uint *)((int)this + 0x18) < uVar4) {
    FUN_674011e0(this,uVar4);
  }
  else if (uVar4 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(uint *)((int)this + 0x18) < 0x10) {
      *(undefined1 *)((int)this + 4) = 0;
      return this;
    }
    **(undefined1 **)((int)this + 4) = 0;
    return this;
  }
  if (uVar4 != 0) {
    if (*(uint *)((int)param_1 + 0x18) < 0x10) {
      iVar3 = (int)param_1 + 4;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 4);
    }
    piVar1 = (int *)((int)this + 4);
    if (*(uint *)((int)this + 0x18) < 0x10) {
      piVar6 = piVar1;
    }
    else {
      piVar6 = (undefined4 *)*piVar1;
    }
    puVar5 = (undefined4 *)(param_2 + iVar3);
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)piVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      piVar6 = (undefined4 *)((int)piVar6 + 1);
    }
    *(uint *)((int)this + 0x14) = uVar4;
    if (0xf < *(uint *)((int)this + 0x18)) {
      piVar1 = (int *)*piVar1;
    }
    *(undefined1 *)((int)piVar1 + uVar4) = 0;
  }
  return this;
}



/* ---- FUN_674014c0 @ 674014c0 size=207 ---- */

void * __thiscall FUN_674014c0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (-*(int *)((int)this + 0x14) - 1U <= param_1) {
    FUN_67407817();
  }
  if (param_1 != 0) {
    uVar3 = *(int *)((int)this + 0x14) + param_1;
    if (uVar3 == 0xffffffff) {
      FUN_67407817();
    }
    if (*(uint *)((int)this + 0x18) < uVar3) {
      FUN_674011e0(this,uVar3);
    }
    else if (uVar3 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar3 != 0) {
      if (*(uint *)((int)this + 0x18) < 0x10) {
        iVar2 = (int)this + 4;
      }
      else {
        iVar2 = *(int *)((int)this + 4);
      }
      puVar4 = (undefined4 *)(*(int *)((int)this + 0x14) + iVar2);
      for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = CONCAT22(CONCAT11((undefined1)param_1,(undefined1)param_1),
                           CONCAT11((undefined1)param_1,(undefined1)param_1));
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = (undefined1)param_1;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar3;
      if (0xf < *(uint *)((int)this + 0x18)) {
        *(undefined1 *)(*(int *)((int)this + 4) + uVar3) = 0;
        return this;
      }
      *(undefined1 *)((int)this + uVar3 + 4) = 0;
    }
  }
  return this;
}



/* ---- FUN_67401590 @ 67401590 size=37 ---- */

void * __thiscall FUN_67401590(void *this,void *param_1)

{
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + 4) = 0;
  FUN_674013d0(this,param_1,0,0xffffffff);
  return this;
}



/* ---- FUN_674015c0 @ 674015c0 size=130 ---- */

undefined4 * __thiscall FUN_674015c0(void *this,void *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414703;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_67401b60(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_6741620c;
  FUN_674019e0((undefined4 *)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)((int)this + 0x2c) = 0;
  FUN_674013d0((void *)((int)this + 0x28),param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_67401650 @ 67401650 size=35 ---- */

void __thiscall FUN_67401650(void *this,uint param_1)

{
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_674014c0(this,param_1 - *(uint *)((int)this + 0x14));
    return;
  }
  FUN_67401110(this,param_1,0xffffffff);
  return;
}



/* ---- FUN_67401680 @ 67401680 size=248 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl FUN_67401680(void *param_1,void *param_2)

{
  uint uVar1;
  undefined1 local_2c [4];
  void *local_28;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414718;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_674013d0(local_2c,param_2,0,0xffffffff);
  local_4 = 0;
  uVar1 = FUN_67401010(local_2c,"\\",0xffffffff,1);
  if (uVar1 == 0xffffffff) {
    *(undefined4 *)((int)param_1 + 0x18) = 0xf;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_1 + 4) = 0;
  }
  else {
    uVar1 = uVar1 + 1;
    if (local_18 < uVar1) {
      FUN_674014c0(local_2c,uVar1 - local_18);
    }
    else {
      FUN_67401110(local_2c,uVar1,0xffffffff);
    }
    *(undefined4 *)((int)param_1 + 0x18) = 0xf;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_1 + 4) = 0;
    FUN_674013d0(param_1,local_2c,0,0xffffffff);
  }
  if (0xf < local_14) {
    _free(local_28);
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_67401780 @ 67401780 size=360 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_67401780(int param_1)

{
  code *pcVar1;
  char cVar2;
  LPCSTR ****lpPathName;
  DWORD DVar3;
  LPCSTR lpFileName;
  BOOL BVar4;
  int iVar5;
  DWORD *pDVar6;
  int *piVar7;
  DWORD *pDVar8;
  int *piVar9;
  bool bVar10;
  int local_88 [13];
  DWORD local_54;
  DWORD local_50 [4];
  int local_40;
  HANDLE local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  LPCSTR ****local_30 [5];
  uint local_1c;
  undefined4 local_18;
  int *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_67414738;
  pvStack_10 = ExceptionList;
  local_14 = local_88 + -3;
  local_18 = DAT_6741b534;
  ExceptionList = &pvStack_10;
  local_40 = param_1;
  FUN_67401be0("FileMonitorThread");
  FUN_67401680(local_34,(void *)(param_1 + 0x28));
  local_8 = 0;
  lpPathName = local_30[0];
  if (local_1c < 0x10) {
    lpPathName = (LPCSTR ****)local_30;
  }
  local_3c = FindFirstChangeNotificationA((LPCSTR)lpPathName,0,0x10);
  if (local_3c != (HANDLE)0xffffffff) {
    local_38 = FUN_674019b0(param_1 + 0x1c);
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[8] = 0;
    if (*(uint *)(param_1 + 0x40) < 0x10) {
      GetFileAttributesExA((LPCSTR)(param_1 + 0x2c),GetFileExInfoStandard,local_88);
    }
    else {
      GetFileAttributesExA(*(LPCSTR *)(param_1 + 0x2c),GetFileExInfoStandard,local_88);
    }
    do {
      while( true ) {
        cVar2 = FUN_67401bd0(param_1);
        if (cVar2 != '\0') goto LAB_67401930;
        DVar3 = WaitForMultipleObjects(2,&local_3c,0,0xffffffff);
        if (DVar3 != 0) break;
        if (*(uint *)(param_1 + 0x40) < 0x10) {
          lpFileName = (LPCSTR)(param_1 + 0x2c);
        }
        else {
          lpFileName = *(LPCSTR *)(param_1 + 0x2c);
        }
        local_88[9] = DVar3;
        local_88[10] = DVar3;
        local_88[0xb] = DVar3;
        local_88[0xc] = DVar3;
        local_54 = DVar3;
        local_50[0] = DVar3;
        local_50[1] = DVar3;
        local_50[2] = DVar3;
        local_50[3] = DVar3;
        GetFileAttributesExA(lpFileName,GetFileExInfoStandard,local_88 + 9);
        iVar5 = 2;
        bVar10 = true;
        pDVar6 = (DWORD *)(local_88 + 5);
        pDVar8 = local_50;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pDVar6 == *pDVar8;
          pDVar6 = pDVar6 + 1;
          pDVar8 = pDVar8 + 1;
        } while (bVar10);
        if (!bVar10) {
          pcVar1 = *(code **)(param_1 + 0x44);
          piVar7 = local_88 + 9;
          piVar9 = local_88;
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          if (pcVar1 != (code *)0x0) {
            local_8 = CONCAT31(local_8._1_3_,1);
            (*pcVar1)(*(undefined4 *)(param_1 + 0x48));
            FUN_674018f1();
            return;
          }
        }
        BVar4 = FindNextChangeNotification(local_3c);
        if (BVar4 == 0) {
          FUN_67401bc0(param_1);
          goto LAB_67401930;
        }
      }
    } while (DVar3 != 1);
    FUN_67401bc0(param_1);
    FUN_674019d0(param_1 + 0x1c);
LAB_67401930:
    FindCloseChangeNotification(local_3c);
  }
  if (0xf < local_1c) {
    _free(local_30[0]);
  }
  ExceptionList = pvStack_10;
  return;
}



/* ---- Catch@674018e8 @ 674018e8 size=6 ---- */

undefined * Catch_674018e8(void)

{
  return &DAT_674018ee;
}



/* ---- FUN_674018f1 @ 674018f1 size=115 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_674018f1(void)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  DWORD DVar4;
  LPCSTR lpFileName;
  BOOL BVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_EBP;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  do {
    BVar5 = FindNextChangeNotification(*(HANDLE *)(unaff_EBP + -0x38));
    if (BVar5 == 0) {
      FUN_67401bc0(unaff_EBX);
LAB_67401930:
      FindCloseChangeNotification(*(HANDLE *)(unaff_EBP + -0x38));
      if (0xf < *(uint *)(unaff_EBP + -0x18)) {
        _free(*(void **)(unaff_EBP + -0x2c));
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    while( true ) {
      cVar3 = FUN_67401bd0(unaff_EBX);
      if (cVar3 != '\0') goto LAB_67401930;
      DVar4 = WaitForMultipleObjects(2,(HANDLE *)(unaff_EBP + -0x38),0,0xffffffff);
      if (DVar4 == 0) break;
      if (DVar4 == 1) {
        FUN_67401bc0(unaff_EBX);
        FUN_674019d0(unaff_EBX + 0x1c);
        goto LAB_67401930;
      }
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    if (*(uint *)(unaff_EBX + 0x40) < 0x10) {
      lpFileName = (LPCSTR)(unaff_EBX + 0x2c);
    }
    else {
      lpFileName = *(LPCSTR *)(unaff_EBX + 0x2c);
    }
    GetFileAttributesExA(lpFileName,GetFileExInfoStandard,(LPVOID)(unaff_EBP + -0x60));
    iVar6 = 2;
    bVar11 = true;
    piVar7 = (int *)(unaff_EBP + -0x70);
    piVar9 = (int *)(unaff_EBP + -0x4c);
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar11 = *piVar7 == *piVar9;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (bVar11);
    if (!bVar11) {
      pcVar1 = *(code **)(unaff_EBX + 0x44);
      puVar8 = (undefined4 *)(unaff_EBP + -0x60);
      puVar10 = (undefined4 *)(unaff_EBP + -0x84);
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      if (pcVar1 != (code *)0x0) {
        uVar2 = *(undefined4 *)(unaff_EBX + 0x48);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        (*pcVar1)(uVar2);
        FUN_674018f1();
        return;
      }
    }
  } while( true );
}



/* ---- FUN_67401970 @ 67401970 size=31 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_67401970(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_6741c120 = param_1;
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}



/* ---- FUN_67401990 @ 67401990 size=32 ---- */

void __fastcall FUN_67401990(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6741622c;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}



/* ---- FUN_674019b0 @ 674019b0 size=4 ---- */

undefined4 __fastcall FUN_674019b0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ---- FUN_674019c0 @ 674019c0 size=11 ---- */

void __fastcall FUN_674019c0(int param_1)

{
  SetEvent(*(HANDLE *)(param_1 + 4));
  return;
}



/* ---- FUN_674019d0 @ 674019d0 size=11 ---- */

void __fastcall FUN_674019d0(int param_1)

{
  ResetEvent(*(HANDLE *)(param_1 + 4));
  return;
}



/* ---- FUN_674019e0 @ 674019e0 size=45 ---- */

undefined4 * __fastcall FUN_674019e0(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_67416230;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"");
  param_1[1] = pvVar1;
  *param_1 = &PTR_FUN_67416230;
  return param_1;
}



/* ---- FUN_67401a10 @ 67401a10 size=17 ---- */

void __fastcall FUN_67401a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_67416238;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



/* ---- FUN_67401a50 @ 67401a50 size=30 ---- */

undefined4 * __thiscall FUN_67401a50(void *this,byte param_1)

{
  FUN_67401990(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67401a70 @ 67401a70 size=30 ---- */

undefined4 * __thiscall FUN_67401a70(void *this,byte param_1)

{
  thunk_FUN_67401990(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67401a90 @ 67401a90 size=23 ---- */

undefined4 * __fastcall FUN_67401a90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_67416238;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return param_1;
}



/* ---- FUN_67401ab0 @ 67401ab0 size=30 ---- */

undefined4 * __thiscall FUN_67401ab0(void *this,byte param_1)

{
  FUN_67401a10(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67401ad0 @ 67401ad0 size=26 ---- */

undefined4 * __thiscall FUN_67401ad0(void *this,undefined4 *param_1)

{
  *(undefined ***)this = &PTR_FUN_67416244;
  *(undefined4 **)((int)this + 4) = param_1;
  (**(code **)*param_1)();
  return this;
}



/* ---- FUN_67401af0 @ 67401af0 size=69 ---- */

void __fastcall FUN_67401af0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_67414750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_67416244;
  local_8 = 0;
  (**(code **)(*(int *)param_1[1] + 4))();
  ExceptionList = local_10;
  return;
}



/* ---- Catch@67401b35 @ 67401b35 size=6 ---- */

undefined4 Catch_67401b35(void)

{
  return 0x67401b24;
}



/* ---- FUN_67401b40 @ 67401b40 size=30 ---- */

undefined4 * __thiscall FUN_67401b40(void *this,byte param_1)

{
  FUN_67401af0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67401b60 @ 67401b60 size=40 ---- */

void __fastcall FUN_67401b60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_67416248;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* ---- FUN_67401b90 @ 67401b90 size=35 ---- */

undefined4 __fastcall FUN_67401b90(int param_1)

{
  DWORD DVar1;
  
  DVar1 = ResumeThread(*(HANDLE *)(param_1 + 4));
  if (DVar1 == 0xffffffff) {
    return 0xffffff00;
  }
  if (DVar1 == 1) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}



/* ---- FUN_67401bc0 @ 67401bc0 size=5 ---- */

void __fastcall FUN_67401bc0(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* ---- FUN_67401bd0 @ 67401bd0 size=4 ---- */

undefined1 __fastcall FUN_67401bd0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* ---- FUN_67401be0 @ 67401be0 size=105 ---- */

void FUN_67401be0(undefined4 param_1)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_67416250;
  puStack_10 = &LAB_67408e84;
  local_14 = ExceptionList;
  local_1c = (undefined1 *)((int)register0x00000010 + -0x38);
  local_2c = 0x1000;
  local_28 = param_1;
  local_24 = 0xffffffff;
  local_20 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  RaiseException(0x406d1388,0,4,&local_2c);
  ExceptionList = local_14;
  return;
}



/* ---- FUN_67401c70 @ 67401c70 size=55 ---- */

void __fastcall FUN_67401c70(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*param_1 + 0xb);
  *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + 0x10);
  *(undefined1 *)(*param_1 + 10) = 1;
  if ((cVar1 == '\x01') && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  __endthreadex(*(uint *)param_1[1]);
  return;
}



/* ---- FUN_67401cb0 @ 67401cb0 size=88 ---- */

void __fastcall FUN_67401cb0(DWORD param_1)

{
  DWORD local_4;
  
  local_4 = param_1;
  if (((*(int *)(param_1 + 0x14) != 0) && (*(char *)(param_1 + 10) == '\0')) &&
     (*(char *)(param_1 + 0xc) == '\x01')) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (*(char *)(param_1 + 8) == '\x01') {
      FUN_67401b90(param_1);
    }
    WaitForSingleObjectEx(*(HANDLE *)(param_1 + 4),0xffffffff,0);
    GetExitCodeThread(*(HANDLE *)(param_1 + 4),&local_4);
  }
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* ---- FUN_67401d10 @ 67401d10 size=162 ---- */

uint FUN_67401d10(int *param_1)

{
  uint _Retval;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_67414768;
  local_10 = ExceptionList;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_8 = 1;
  ExceptionList = &local_10;
  if ((char)param_1[6] == '\0') {
    ExceptionList = &local_10;
    *(undefined1 *)(param_1 + 3) = 1;
    (**(code **)(*param_1 + 4))();
  }
  _Retval = param_1[4];
  local_8 = local_8 & 0xffffff00;
  *(undefined1 *)((int)param_1 + 10) = 1;
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    (**(code **)*param_1)(1);
  }
  __endthreadex(_Retval);
  ExceptionList = local_10;
  return _Retval;
}



/* ---- Catch@67401db2 @ 67401db2 size=9 ---- */

void Catch_67401db2(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}



/* ---- FUN_67401dc0 @ 67401dc0 size=11 ---- */

void __fastcall FUN_67401dc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_67416248;
  FUN_67401cb0((DWORD)param_1);
  return;
}



/* ---- FUN_67401dd0 @ 67401dd0 size=66 ---- */

void __thiscall FUN_67401dd0(void *this,char param_1)

{
  HANDLE hThread;
  DWORD DVar1;
  
  hThread = (HANDLE)__beginthreadex((void *)0x0,0,FUN_67401d10,this,4,(uint *)((int)this + 0x14));
  *(HANDLE *)((int)this + 4) = hThread;
  *(char *)((int)this + 8) = param_1;
  if (param_1 == '\0') {
    DVar1 = ResumeThread(hThread);
    if ((DVar1 != 0xffffffff) && (DVar1 == 1)) {
      *(undefined1 *)((int)this + 9) = 0;
    }
  }
  return;
}



/* ---- FUN_67401e20 @ 67401e20 size=30 ---- */

undefined4 * __thiscall FUN_67401e20(void *this,byte param_1)

{
  FUN_67401dc0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67401e40 @ 67401e40 size=93 ---- */

undefined4 __thiscall FUN_67401e40(void *this,int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = SymGetLineFromAddr(*(undefined4 *)((int)this + 4),param_1,param_2,param_3);
  if (iVar1 == 0) {
    do {
      iVar2 = iVar2 + 1;
      if (iVar2 == 100) {
        return 0;
      }
      iVar1 = SymGetLineFromAddr(*(undefined4 *)((int)this + 4),param_1 - iVar2,param_2,param_3);
    } while (iVar1 == 0);
    if (iVar2 != 0) {
      *param_2 = iVar2;
    }
  }
  return 1;
}



/* ---- _SetDiagAssertOptions@4 @ 67401ec0 size=27 ---- */

undefined4 _SetDiagAssertOptions_4(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x1ec0  9  _SetDiagAssertOptions@4 */
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = DAT_6741b090;
  DAT_6741b090 = param_1;
  return uVar1;
}



/* ---- _SetDiagAssertFile@4 @ 67401ee0 size=18 ---- */

undefined4 _SetDiagAssertFile_4(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0x1ee0  8  _SetDiagAssertFile@4 */
  uVar1 = DAT_6741b094;
  DAT_6741b094 = param_1;
  return uVar1;
}



/* ---- _SetDiagOutputFile@4 @ 67401f00 size=18 ---- */

undefined4 _SetDiagOutputFile_4(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0x1f00  10  _SetDiagOutputFile@4 */
  uVar1 = DAT_6741b098;
  DAT_6741b098 = param_1;
  return uVar1;
}



/* ---- DiagOutputA @ 67401f20 size=164 ---- */

void __cdecl DiagOutputA(char *param_1,char param_2)

{
  DWORD dwErrCode;
  int iVar1;
  DWORD nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_1c;
  _RTL_CRITICAL_SECTION local_18;
  
                    /* 0x1f20  5  DiagOutputA */
  dwErrCode = GetLastError();
  InitializeCriticalSection(&local_18);
  EnterCriticalSection(&local_18);
  iVar1 = __vsnprintf(&DAT_6741c138,0x3ff,param_1,&param_2);
  if (iVar1 < 0) {
    DAT_6741c537 = 0;
  }
  OutputDebugStringA(&DAT_6741c138);
  if (DAT_6741b098 != (HANDLE)0xffffffff) {
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_1c;
    nNumberOfBytesToWrite = lstrlenA(&DAT_6741c138);
    WriteFile(DAT_6741b098,&DAT_6741c138,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  }
  SetLastError(dwErrCode);
  LeaveCriticalSection(&local_18);
  DeleteCriticalSection(&local_18);
  return;
}



/* ---- DiagOutputW @ 67401fd0 size=146 ---- */

void __cdecl DiagOutputW(LPCWSTR param_1,char param_2)

{
  DWORD dwErrCode;
  DWORD nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_1c;
  _RTL_CRITICAL_SECTION local_18;
  
                    /* 0x1fd0  7  DiagOutputW */
  dwErrCode = GetLastError();
  InitializeCriticalSection(&local_18);
  EnterCriticalSection(&local_18);
  wvsprintfW((LPWSTR)&DAT_6741c538,param_1,&param_2);
  OutputDebugStringW((LPCWSTR)&DAT_6741c538);
  if (DAT_6741b098 != (HANDLE)0xffffffff) {
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_1c;
    nNumberOfBytesToWrite = lstrlenW((LPCWSTR)&DAT_6741c538);
    WriteFile(DAT_6741b098,&DAT_6741c538,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  }
  SetLastError(dwErrCode);
  LeaveCriticalSection(&local_18);
  DeleteCriticalSection(&local_18);
  return;
}



/* ---- _DiagOutputVB@4 @ 67402070 size=14 ---- */

void _DiagOutputVB_4(char *param_1)

{
  char unaff_retaddr;
  
                    /* 0x2070  6  _DiagOutputVB@4 */
  DiagOutputA(param_1,unaff_retaddr);
  return;
}



/* ---- FUN_67402180 @ 67402180 size=434 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LPSTR __cdecl FUN_67402180(LPSTR param_1)

{
  uchar *puVar1;
  int iVar2;
  int unaff_EBX;
  LPSTR pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_388 [7];
  undefined1 local_35c [268];
  undefined4 local_250 [15];
  uchar local_214 [520];
  undefined4 local_c;
  
  local_c = DAT_6741b534;
  piVar4 = local_388 + 6;
  for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  puVar5 = local_250;
  for (iVar2 = 0x8f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_388[6] = 0x18;
  local_250[0] = 0x23c;
  iVar2 = wsprintfA(param_1,"0x%08X ");
  pCVar3 = param_1 + iVar2;
  iVar2 = SymGetModuleInfo(DAT_6741b0a0,unaff_EBX,local_250);
  if (iVar2 == 0) {
    iVar2 = wsprintfA(pCVar3,"<unknown module>: ");
  }
  else {
    puVar1 = __mbsrchr(local_214,0x5c);
    if (puVar1 == (uchar *)0x0) {
      iVar2 = wsprintfA(pCVar3,"%s: ",local_214);
    }
    else {
      iVar2 = wsprintfA(pCVar3,"%s: ",puVar1 + 1);
    }
  }
  pCVar3 = pCVar3 + iVar2;
  iVar2 = SymGetSymFromAddr(DAT_6741b0a0,unaff_EBX,local_388,local_388 + 6);
  if (iVar2 == 0) {
    iVar2 = wsprintfA(pCVar3,"<unknown symbol>");
  }
  else {
    if (local_388[0] == 0) {
      iVar2 = wsprintfA(pCVar3,"%s",local_35c);
    }
    else {
      iVar2 = wsprintfA(pCVar3,"%s + %d bytes",local_35c,local_388[0]);
    }
    pCVar3 = pCVar3 + iVar2;
    local_388[2] = 0;
    local_388[3] = 0;
    local_388[4] = 0;
    local_388[5] = 0;
    local_388[1] = 0x14;
    iVar2 = FUN_67401e40(&PTR_PTR_6741b09c,unaff_EBX,local_388,local_388 + 1);
    if (iVar2 == 0) goto LAB_6740230e;
    iVar2 = wsprintfA(pCVar3,"\n\t\t%s, Line %d",local_388[4],local_388[3]);
    pCVar3 = pCVar3 + iVar2;
    if (local_388[0] == 0) goto LAB_6740230e;
    iVar2 = wsprintfA(pCVar3," + %d bytes",local_388[0]);
  }
  pCVar3 = pCVar3 + iVar2;
LAB_6740230e:
  iVar2 = wsprintfA(pCVar3,"\n");
  return pCVar3 + (iVar2 - (int)param_1);
}



/* ---- FUN_67402340 @ 67402340 size=30 ---- */

void __cdecl FUN_67402340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



/* ---- FUN_67402360 @ 67402360 size=34 ---- */

void __cdecl FUN_67402360(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}



/* ---- FUN_67402390 @ 67402390 size=42 ---- */

void * FUN_67402390(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}



/* ---- FUN_674023c0 @ 674023c0 size=42 ---- */

undefined4 * FUN_674023c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 != 0) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *param_3;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1 + param_2;
}



/* ---- FUN_67402400 @ 67402400 size=42 ---- */

void __fastcall FUN_67402400(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/* ---- FUN_67402430 @ 67402430 size=234 ---- */

void * __thiscall FUN_67402430(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x18);
  if (uVar4 < 0x10) {
    puVar1 = (undefined4 *)((int)this + 4);
  }
  else {
    puVar1 = *(undefined4 **)((int)this + 4);
  }
  if (puVar1 <= param_1) {
    puVar1 = (undefined4 *)((int)this + 4);
    if (uVar4 < 0x10) {
      puVar3 = puVar1;
    }
    else {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar3)) {
      if (0xf < uVar4) {
        puVar1 = (undefined4 *)*puVar1;
      }
      pvVar2 = FUN_674013d0(this,this,(int)param_1 - (int)puVar1,param_2);
      return pvVar2;
    }
  }
  if (param_2 == 0xffffffff) {
    FUN_67407817();
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_674011e0(this,param_2);
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(uint *)((int)this + 0x18) < 0x10) {
      *(undefined1 *)((int)this + 4) = 0;
      return this;
    }
    **(undefined1 **)((int)this + 4) = 0;
    return this;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar1 = (undefined4 *)((int)this + 4);
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 4);
    }
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar1 = *param_1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)((int)this + 0x14) = param_2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      *(undefined1 *)(*(int *)((int)this + 4) + param_2) = 0;
      return this;
    }
    *(undefined1 *)((int)this + param_2 + 4) = 0;
  }
  return this;
}



/* ---- FUN_67402520 @ 67402520 size=34 ---- */

void __thiscall FUN_67402520(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_67402430(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}



/* ---- FUN_67402550 @ 67402550 size=57 ---- */

void * __thiscall FUN_67402550(void *this,char *param_1)

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
  FUN_67402430(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}



/* ---- FUN_67402590 @ 67402590 size=95 ---- */

exception * __thiscall FUN_67402590(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(this);
  *(undefined ***)this = &PTR_FUN_6741653c;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_674013d0((void *)((int)this + 0xc),param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_674025f0 @ 674025f0 size=30 ---- */

exception * __thiscall FUN_674025f0(void *this,byte param_1)

{
  FUN_67402610(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67402610 @ 67402610 size=50 ---- */

void __fastcall FUN_67402610(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_6741653c;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    _free(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x10] = (exception)0x0;
  exception::~exception(param_1);
  return;
}



/* ---- FUN_67402650 @ 67402650 size=101 ---- */

exception * __thiscall FUN_67402650(void *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(this,param_1);
  *(undefined ***)this = &PTR_FUN_6741653c;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_674013d0((void *)((int)this + 0xc),param_1 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_674026c0 @ 674026c0 size=105 ---- */

void FUN_674026c0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_674147a8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_67402430(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_67402590(local_34,local_50);
  local_34[0] = &PTR_FUN_67416548;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_674192a8);
}



/* ---- FUN_67402750 @ 67402750 size=480 ---- */

void __thiscall FUN_67402750(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *_Dst;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar5 >> 2;
  }
  uVar6 = CONCAT44(iVar5,iVar1);
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_2) {
      uVar6 = FUN_674026c0();
    }
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
        }
        uVar2 = iVar5 + param_2;
      }
      pvVar3 = operator_new(uVar2 * 4);
      _Size = ((int)param_1 - (int)*(void **)((int)this + 4) >> 2) * 4;
      pvVar4 = _memmove(pvVar3,*(void **)((int)this + 4),_Size);
      _Dst = FUN_674023c0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
      _memmove(_Dst,param_1,(*(int *)((int)this + 8) - (int)param_1 >> 2) << 2);
      pvVar4 = *(void **)((int)this + 4);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)pvVar4 >> 2;
      }
      if (pvVar4 != (void *)0x0) {
        _free(pvVar4);
      }
      *(void **)((int)this + 0xc) = (void *)(uVar2 * 4 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((int)pvVar3 + (param_2 + iVar5) * 4);
      *(void **)((int)this + 4) = pvVar3;
      return;
    }
    iVar5 = *(int *)((int)this + 8);
    if ((uint)(iVar5 - (int)param_1 >> 2) < param_2) {
      FUN_67402390(param_1,iVar5,param_1 + param_2);
      FUN_674023c0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_67402340(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_67402390(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_67402360(param_1,(int)pvVar3,iVar5);
    FUN_67402340(param_1,param_1 + param_2,&param_3);
  }
  return;
}



/* ---- _AddDiagAssertModule@4 @ 67402930 size=91 ---- */

undefined4 _AddDiagAssertModule_4(undefined4 param_1)

{
                    /* 0x2930  1  _AddDiagAssertModule@4 */
  if ((DAT_6741c12c == 0) ||
     ((uint)(DAT_6741c134 - DAT_6741c12c >> 2) <= (uint)((int)DAT_6741c130 - DAT_6741c12c >> 2))) {
    FUN_67402750(&DAT_6741c128,DAT_6741c130,1,&param_1);
    return 1;
  }
  *DAT_6741c130 = param_1;
  DAT_6741c130 = DAT_6741c130 + 1;
  return 1;
}



/* ---- FUN_67402990 @ 67402990 size=576 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_67402990(LPSTR param_1,LPSTR param_2)

{
  uchar uVar1;
  bool bVar2;
  HANDLE pvVar3;
  uint uVar4;
  int iVar5;
  HANDLE hThread;
  BOOL BVar6;
  LPSTR pCVar7;
  uchar *puVar8;
  DWORD *_Memory;
  DWORD *pDVar9;
  DWORD *pDVar10;
  CONTEXT *lpContext;
  LPSTR local_5a4;
  LPSTR local_5a0;
  undefined1 local_598 [4];
  DWORD *local_594;
  DWORD *local_590;
  int local_58c;
  DWORD local_588 [6];
  DWORD local_570;
  undefined4 local_568;
  DWORD local_564;
  undefined4 local_55c;
  CONTEXT local_4e4;
  uchar local_218 [520];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_674147cb;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  ExceptionList = &local_c;
  pvVar3 = GetCurrentProcess();
  _Memory = (DWORD *)0x0;
  if (DAT_6741c124 == 0) {
    uVar4 = SymGetOptions();
    SymSetOptions(uVar4 | 0x10);
    DAT_6741b0a0 = pvVar3;
    iVar5 = SymInitialize(pvVar3,0,0);
    if (iVar5 != 0) {
      DAT_6741c124 = 1;
    }
  }
  pDVar9 = (DWORD *)0x0;
  local_594 = (DWORD *)0x0;
  local_590 = (DWORD *)0x0;
  local_58c = 0;
  lpContext = &local_4e4;
  local_4 = 0;
  local_4e4.ContextFlags = 0x10007;
  hThread = GetCurrentThread();
  BVar6 = GetThreadContext(hThread,lpContext);
  if (BVar6 != 0) {
    pDVar10 = local_588;
    for (iVar5 = 0x29; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pDVar10 = 0;
      pDVar10 = pDVar10 + 1;
    }
    local_588[0] = local_4e4.Eip;
    local_588[2] = 3;
    local_564 = local_4e4.Esp;
    local_570 = local_4e4.Ebp;
    local_55c = 3;
    local_568 = 3;
    local_5a4 = (LPSTR)0x0;
    do {
      iVar5 = StackWalk(0x14c,pvVar3,pvVar3,local_588,&local_4e4,0,SymFunctionTableAccess_exref,
                        &LAB_67402080,0);
      if (iVar5 == 0) break;
      if (local_588[0] != 0) {
        if ((_Memory == (DWORD *)0x0) ||
           ((uint)(local_58c - (int)_Memory >> 2) <= (uint)((int)pDVar9 - (int)_Memory >> 2))) {
          FUN_67402750(local_598,pDVar9,1,local_588);
          _Memory = local_594;
          pDVar9 = local_590;
        }
        else {
          *pDVar9 = local_588[0];
          local_590 = pDVar9 + 1;
          pDVar9 = local_590;
        }
      }
      local_5a4 = (LPSTR)((int)local_5a4 + 1);
    } while (local_5a4 < 0x200);
    local_5a4 = param_2;
    local_5a0 = param_1;
    bVar2 = false;
    if (_Memory != pDVar9) {
      do {
        pCVar7 = FUN_67402180((LPSTR)local_218);
        puVar8 = __mbsstr(local_218,(uchar *)".\\src\\XDebug.cpp");
        if (puVar8 == (uchar *)0x0) {
          if (bVar2) {
            if (local_5a4 < pCVar7) break;
            puVar8 = local_218;
            iVar5 = (int)local_5a0 - (int)puVar8;
            do {
              uVar1 = *puVar8;
              puVar8[iVar5] = uVar1;
              puVar8 = puVar8 + 1;
            } while (uVar1 != '\0');
            local_5a0 = local_5a0 + (int)pCVar7;
            local_5a4 = local_5a4 + -(int)pCVar7;
          }
        }
        else {
          bVar2 = true;
        }
        _Memory = _Memory + 1;
      } while (_Memory != pDVar9);
      _Memory = local_594;
    }
    if (_Memory != (DWORD *)0x0) {
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_67402bd0 @ 67402bd0 size=518 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_67402bd0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  DWORD dwMessageId;
  DWORD DVar2;
  int iVar3;
  HWND hWnd;
  HWND hWnd_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  UINT uType;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  HLOCAL local_114;
  DWORD local_110;
  char local_10c [4];
  char local_108 [4];
  char local_104 [4];
  char local_100 [4];
  char local_fc [4];
  char local_f8 [244];
  undefined4 local_4;
  
  local_4 = DAT_6741b534;
  local_114 = (HLOCAL)0x0;
  dwMessageId = GetLastError();
  if (param_1 == 0) {
    param_1 = DAT_6741b090;
  }
  puVar5 = DAT_6741c12c;
  if (DAT_6741c12c != DAT_6741c130) {
    do {
      DVar2 = FormatMessageA(0xb00,(LPCVOID)*puVar5,dwMessageId,0,(LPSTR)&local_114,0,(va_list *)0x0
                            );
      if (DVar2 != 0) break;
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_6741c130);
  }
  if (local_114 == (HLOCAL)0x0) {
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,0,(LPSTR)&local_114,0,(va_list *)0x0);
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_10c,0x104);
  if (DVar2 == 0) {
    local_10c[0] = s_<unknown_application>_67416354[0];
    local_10c[1] = s_<unknown_application>_67416354[1];
    local_10c[2] = s_<unknown_application>_67416354[2];
    local_10c[3] = s_<unknown_application>_67416354[3];
    local_108[0] = s_<unknown_application>_67416354[4];
    local_108[1] = s_<unknown_application>_67416354[5];
    local_108[2] = s_<unknown_application>_67416354[6];
    local_108[3] = s_<unknown_application>_67416354[7];
    local_104[0] = s_<unknown_application>_67416354[8];
    local_104[1] = s_<unknown_application>_67416354[9];
    local_104[2] = s_<unknown_application>_67416354[10];
    local_104[3] = s_<unknown_application>_67416354[0xb];
    local_100[0] = s_<unknown_application>_67416354[0xc];
    local_100[1] = s_<unknown_application>_67416354[0xd];
    local_100[2] = s_<unknown_application>_67416354[0xe];
    local_100[3] = s_<unknown_application>_67416354[0xf];
    local_fc[0] = s_<unknown_application>_67416354[0x10];
    local_fc[1] = s_<unknown_application>_67416354[0x11];
    local_fc[2] = s_<unknown_application>_67416354[0x12];
    local_fc[3] = s_<unknown_application>_67416354[0x13];
    local_f8[0] = s_<unknown_application>_67416354[0x14];
    local_f8[1] = s_<unknown_application>_67416354[0x15];
  }
  iVar3 = wsprintfA(&DAT_6741cd38,
                    "Debug Assertion Failed!\n\nProgram : %s\n%s\nLast Error(0x%08X) : %s\n",
                    local_10c,param_2,dwMessageId,local_114);
  if (local_114 != (HLOCAL)0x0) {
    LocalFree(local_114);
  }
  bVar1 = (byte)param_1;
  if ((bVar1 & 4) == 4) {
    FUN_67402990(&DAT_6741cd38 + iVar3,(LPSTR)((int)&DAT_6741dd38 - (int)(&DAT_6741cd38 + iVar3)));
  }
  if ((bVar1 & 2) == 2) {
    OutputDebugStringA(&DAT_6741cd38);
  }
  if (DAT_6741b094 != (HANDLE)0xffffffff) {
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_110;
    DVar2 = lstrlenA(&DAT_6741cd38);
    WriteFile(DAT_6741b094,&DAT_6741cd38,DVar2,lpNumberOfBytesWritten,lpOverlapped);
  }
  uType = 0x12010;
  if (param_3 == 1) {
    uType = 0x12012;
  }
  iVar3 = 5;
  if ((bVar1 & 1) == 1) {
    hWnd = GetActiveWindow();
    hWnd_00 = (HWND)0x0;
    if (hWnd != (HWND)0x0) {
      hWnd_00 = GetLastActivePopup(hWnd);
    }
    iVar3 = MessageBoxA(hWnd_00,&DAT_6741cd38,"ASSERTION FAILURE...",uType);
  }
  SetLastError(dwMessageId);
  if ((iVar3 == 5) || (iVar3 == 1)) {
    uVar4 = 0;
  }
  else {
    if (iVar3 != 4) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(0xffffffff);
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* ---- _DiagAssertA@16 @ 67402de0 size=123 ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void _DiagAssertA_16(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD dwErrCode;
  CHAR local_2004 [8192];
  undefined4 local_4;
  
                    /* 0x2de0  2  _DiagAssertA@16 */
  local_4 = DAT_6741b534;
  dwErrCode = GetLastError();
  wsprintfA(local_2004,"File : %s\nLine : %d\nExpression : %s",param_3,param_4,param_2);
  SetLastError(dwErrCode);
  FUN_67402bd0(param_1,local_2004,1);
  return;
}



/* ---- _DiagAssertW@16 @ 67402e60 size=123 ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void _DiagAssertW_16(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD dwErrCode;
  CHAR local_2004 [8192];
  undefined4 local_4;
  
                    /* 0x2e60  4  _DiagAssertW@16 */
  local_4 = DAT_6741b534;
  dwErrCode = GetLastError();
  wsprintfA(local_2004,"File : %s\nLine : %d\nExpression : %lS",param_3,param_4,param_2);
  SetLastError(dwErrCode);
  FUN_67402bd0(param_1,local_2004,1);
  return;
}



/* ---- _DiagAssertVB@12 @ 67402ee0 size=23 ---- */

void _DiagAssertVB_12(int param_1,int param_2,undefined4 param_3)

{
                    /* 0x2ee0  3  _DiagAssertVB@12 */
  FUN_67402bd0(param_1,param_3,param_2);
  return;
}



/* ---- XLogFatalA @ 67402f00 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogFatalA(char *param_1,char *param_2,char param_3)

{
  void *this;
  int iVar1;
  char local_408 [1028];
  undefined4 local_4;
  
                    /* 0x2f00  13  XLogFatalA */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404000(this,40000,param_1);
  if ((char)iVar1 == '\x01') {
    __vsnprintf(local_408,0x401,param_2,&param_3);
    FUN_67406680(this,40000,param_1,local_408);
  }
  return;
}



/* ---- XLogFatalW @ 67402f80 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogFatalW(undefined4 param_1,wchar_t *param_2,char param_3)

{
  void *this;
  int iVar1;
  wchar_t local_808 [1026];
  undefined4 local_4;
  
                    /* 0x2f80  14  XLogFatalW */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404050(this,40000,param_1);
  if ((char)iVar1 == '\x01') {
    FID_conflict_vswprintf(local_808,0x401,param_2,&param_3);
    FUN_67406a00(this,40000,param_1,local_808);
  }
  return;
}



/* ---- XLogErrorA @ 67403000 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogErrorA(char *param_1,char *param_2,char param_3)

{
  void *this;
  int iVar1;
  char local_408 [1028];
  undefined4 local_4;
  
                    /* 0x3000  11  XLogErrorA */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404000(this,30000,param_1);
  if ((char)iVar1 == '\x01') {
    __vsnprintf(local_408,0x401,param_2,&param_3);
    FUN_67406680(this,30000,param_1,local_408);
  }
  return;
}



/* ---- XLogErrorW @ 67403080 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogErrorW(undefined4 param_1,wchar_t *param_2,char param_3)

{
  void *this;
  int iVar1;
  wchar_t local_808 [1026];
  undefined4 local_4;
  
                    /* 0x3080  12  XLogErrorW */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404050(this,30000,param_1);
  if ((char)iVar1 == '\x01') {
    FID_conflict_vswprintf(local_808,0x401,param_2,&param_3);
    FUN_67406a00(this,30000,param_1,local_808);
  }
  return;
}



/* ---- XLogWarningA @ 67403100 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogWarningA(char *param_1,char *param_2,char param_3)

{
  void *this;
  int iVar1;
  char local_408 [1028];
  undefined4 local_4;
  
                    /* 0x3100  21  XLogWarningA */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404000(this,20000,param_1);
  if ((char)iVar1 == '\x01') {
    __vsnprintf(local_408,0x401,param_2,&param_3);
    FUN_67406680(this,20000,param_1,local_408);
  }
  return;
}



/* ---- XLogWarningW @ 67403180 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogWarningW(undefined4 param_1,wchar_t *param_2,char param_3)

{
  void *this;
  int iVar1;
  wchar_t local_808 [1026];
  undefined4 local_4;
  
                    /* 0x3180  22  XLogWarningW */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404050(this,20000,param_1);
  if ((char)iVar1 == '\x01') {
    FID_conflict_vswprintf(local_808,0x401,param_2,&param_3);
    FUN_67406a00(this,20000,param_1,local_808);
  }
  return;
}



/* ---- XLogInfoA @ 67403200 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogInfoA(char *param_1,char *param_2,char param_3)

{
  void *this;
  int iVar1;
  char local_408 [1028];
  undefined4 local_4;
  
                    /* 0x3200  15  XLogInfoA */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404000(this,10000,param_1);
  if ((char)iVar1 == '\x01') {
    __vsnprintf(local_408,0x401,param_2,&param_3);
    FUN_67406680(this,10000,param_1,local_408);
  }
  return;
}



/* ---- XLogInfoW @ 67403280 size=124 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogInfoW(undefined4 param_1,wchar_t *param_2,char param_3)

{
  void *this;
  int iVar1;
  wchar_t local_808 [1026];
  undefined4 local_4;
  
                    /* 0x3280  16  XLogInfoW */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404050(this,10000,param_1);
  if ((char)iVar1 == '\x01') {
    FID_conflict_vswprintf(local_808,0x401,param_2,&param_3);
    FUN_67406a00(this,10000,param_1,local_808);
  }
  return;
}



/* ---- XLogTraceA @ 67403300 size=118 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogTraceA(char *param_1,char *param_2,char param_3)

{
  void *this;
  int iVar1;
  char local_408 [1028];
  undefined4 local_4;
  
                    /* 0x3300  19  XLogTraceA */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404000(this,0,param_1);
  if ((char)iVar1 == '\x01') {
    __vsnprintf(local_408,0x401,param_2,&param_3);
    FUN_67406680(this,0,param_1,local_408);
  }
  return;
}



/* ---- XLogTraceW @ 67403380 size=118 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl XLogTraceW(undefined4 param_1,wchar_t *param_2,char param_3)

{
  void *this;
  int iVar1;
  wchar_t local_808 [1026];
  undefined4 local_4;
  
                    /* 0x3380  20  XLogTraceW */
  local_4 = DAT_6741b534;
  this = (void *)FUN_67407760();
  iVar1 = FUN_67404050(this,0,param_1);
  if ((char)iVar1 == '\x01') {
    FID_conflict_vswprintf(local_808,0x401,param_2,&param_3);
    FUN_67406a00(this,0,param_1,local_808);
  }
  return;
}



/* ---- XLogIsEnabledA @ 67403400 size=23 ---- */

void __cdecl XLogIsEnabledA(char *param_1,int param_2)

{
  void *this;
  
                    /* 0x3400  17  XLogIsEnabledA */
  this = (void *)FUN_67407760();
  FUN_67404000(this,param_2,param_1);
  return;
}



/* ---- XLogIsEnabledW @ 67403420 size=23 ---- */

void __cdecl XLogIsEnabledW(undefined4 param_1,int param_2)

{
  void *this;
  
                    /* 0x3420  18  XLogIsEnabledW */
  this = (void *)FUN_67407760();
  FUN_67404050(this,param_2,param_1);
  return;
}



/* ---- FUN_67403440 @ 67403440 size=1 ---- */

void FUN_67403440(void)

{
  return;
}



/* ---- FUN_67403450 @ 67403450 size=39 ---- */

void __fastcall FUN_67403450(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  std::_Lockit::_Lockit((_Lockit *)&local_4,0);
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_67407b32(&local_4);
  return;
}



/* ---- FUN_67403480 @ 67403480 size=58 ---- */

uint __fastcall FUN_67403480(uint param_1)

{
  int iVar1;
  uint local_4;
  
  local_4 = param_1;
  std::_Lockit::_Lockit((_Lockit *)&local_4,0);
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(param_1 + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_67407b32((int *)&local_4);
  return param_1 & (iVar1 != 0) - 1;
}



/* ---- FUN_674034c0 @ 674034c0 size=24 ---- */

void __fastcall FUN_674034c0(uint *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_67403480(*param_1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



/* ---- FUN_67403500 @ 67403500 size=7 ---- */

void __fastcall FUN_67403500(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_674165ac;
  return;
}



/* ---- FUN_67403530 @ 67403530 size=62 ---- */

int * __thiscall FUN_67403530(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  iVar1 = **(int **)((int)this + 0x24);
  *param_1 = iVar1;
  std::_Lockit::_Lockit((_Lockit *)&param_1,0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_67407b32((int *)&param_1);
  return piVar2;
}



/* ---- FUN_67403570 @ 67403570 size=30 ---- */

ios_base * __thiscall FUN_67403570(void *this,byte param_1)

{
  std::ios_base::~ios_base(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67403590 @ 67403590 size=29 ---- */

void __fastcall FUN_67403590(undefined4 *param_1)

{
  if (*(HANDLE *)*param_1 != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)*param_1);
    *(undefined4 *)*param_1 = 0xffffffff;
  }
  return;
}



/* ---- FUN_674035b0 @ 674035b0 size=15 ---- */

void __fastcall FUN_674035b0(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -4) + 4) + -4 + param_1) = &PTR_LAB_674166a4;
  return;
}



/* ---- FUN_674035c0 @ 674035c0 size=11 ---- */

void __fastcall FUN_674035c0(ios_base *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_674166ac;
  std::ios_base::~ios_base(param_1);
  return;
}



/* ---- FUN_674035d0 @ 674035d0 size=30 ---- */

ios_base * __thiscall FUN_674035d0(void *this,byte param_1)

{
  FUN_674035c0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_674035f0 @ 674035f0 size=33 ---- */

int __fastcall FUN_674035f0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}



/* ---- FUN_67403620 @ 67403620 size=62 ---- */

int * __thiscall FUN_67403620(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  iVar1 = **(int **)((int)this + 0x38);
  *param_1 = iVar1;
  std::_Lockit::_Lockit((_Lockit *)&param_1,0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_67407b32((int *)&param_1);
  return piVar2;
}



/* ---- FUN_67403660 @ 67403660 size=24 ---- */

void __fastcall FUN_67403660(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)*param_1 + 4) + 0x28 + *param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_6740823c((undefined4 *)(iVar1 + 4));
  return;
}



/* ---- FUN_67403680 @ 67403680 size=114 ---- */

uint __thiscall FUN_67403680(void *this,uint param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_674077bf();
  }
  uVar1 = *(int *)((int)this + 0x14) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (param_2 != 0) {
    uVar1 = param_2;
    if (param_4 <= param_2) {
      uVar1 = param_4;
    }
    if (*(uint *)((int)this + 0x18) < 0x10) {
      iVar2 = (int)this + 4;
    }
    else {
      iVar2 = *(int *)((int)this + 4);
    }
    bVar5 = false;
    uVar3 = 0;
    bVar6 = true;
    pbVar4 = (byte *)(iVar2 + param_1);
    do {
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      bVar5 = *pbVar4 < *param_3;
      bVar6 = *pbVar4 == *param_3;
      pbVar4 = pbVar4 + 1;
      param_3 = param_3 + 1;
    } while (bVar6);
    if (!bVar6) {
      uVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  if (param_2 < param_4) {
    return 0xffffffff;
  }
  return (uint)(param_2 != param_4);
}



/* ---- FUN_67403700 @ 67403700 size=210 ---- */

undefined4 * __thiscall FUN_67403700(void *this,int param_1,char param_2,undefined4 param_3)

{
  _Ctypevec *p_Var1;
  _Ctypevec local_90;
  _Locinfo local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_674147eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_3;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_674166b4;
  std::_Locinfo::_Locinfo(local_80,"C");
  p_Var1 = __Getctype(&local_90);
  *(uint *)((int)this + 8) = p_Var1->_Page;
  *(short **)((int)this + 0xc) = p_Var1->_Table;
  *(int *)((int)this + 0x10) = p_Var1->_Delfl;
  *(wchar_t **)((int)this + 0x14) = p_Var1->_LocaleName;
  std::_Locinfo::~_Locinfo(local_80);
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x14) < 1) {
      if (*(int *)((int)this + 0x14) < 0) {
        _free(*(void **)((int)this + 0x10));
      }
    }
    else {
      _free(*(void **)((int)this + 0x10));
    }
    *(int *)((int)this + 0x10) = param_1;
    *(uint *)((int)this + 0x14) = -(uint)(param_2 != '\0');
  }
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_67403800 @ 67403800 size=46 ---- */

byte * __thiscall FUN_67403800(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    do {
      iVar1 = __Tolower((uint)*param_1,(_Ctypevec *)((int)this + 8));
      *param_1 = (byte)iVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* ---- FUN_67403850 @ 67403850 size=46 ---- */

byte * __thiscall FUN_67403850(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    do {
      iVar1 = __Toupper((uint)*param_1,(_Ctypevec *)((int)this + 8));
      *param_1 = (byte)iVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* ---- FUN_67403900 @ 67403900 size=101 ---- */

undefined4 __cdecl FUN_67403900(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6741480b;
  local_c = ExceptionList;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_c;
    this = operator_new(0x18);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_67403700(this,0,'\0',0);
    }
    *param_1 = (int)puVar1;
  }
  ExceptionList = local_c;
  return 2;
}



/* ---- FUN_67403970 @ 67403970 size=30 ---- */

undefined4 * __thiscall FUN_67403970(void *this,byte param_1)

{
  FUN_67403990(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67403990 @ 67403990 size=58 ---- */

void __fastcall FUN_67403990(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_674166b4;
  if (0 < (int)param_1[5]) {
    _free((void *)param_1[4]);
    *param_1 = &PTR_LAB_674165ac;
    return;
  }
  if ((int)param_1[5] < 0) {
    _free((void *)param_1[4]);
  }
  *param_1 = &PTR_LAB_674165ac;
  return;
}



/* ---- FUN_674039d0 @ 674039d0 size=81 ---- */

int * __fastcall FUN_674039d0(int *param_1)

{
  int iVar1;
  ios_base *this;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 8) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(this + 8) | uVar2;
    if (*(int *)(this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::clear(this,uVar2,false);
  }
  return param_1;
}



/* ---- FUN_67403a30 @ 67403a30 size=108 ---- */

void __fastcall FUN_67403a30(undefined4 *param_1)

{
  uint *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  _Memory = (uint *)param_1[0xe];
  *param_1 = &PTR_FUN_674166dc;
  local_4 = param_1;
  if (_Memory != (uint *)0x0) {
    uVar1 = *_Memory;
    if (uVar1 != 0) {
      std::_Lockit::_Lockit((_Lockit *)&local_4,0);
      iVar2 = *(int *)(uVar1 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar1 + 4) = iVar2 + -1;
      }
      puVar3 = (undefined4 *)(uVar1 & (*(int *)(uVar1 + 4) != 0) - 1);
      FUN_67407b32((int *)&local_4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
    _free(_Memory);
  }
  FUN_6740821e(param_1 + 1);
  return;
}



/* ---- std::basic_streambuf<char,std::char_traits<char>_>::uflow @ 67403af0 size=29 ---- */

/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::uflow(void)
   
   Library: Visual Studio 2003 Release */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::
std__basic_streambuf<char,std::char_traits<char>_>__uflow
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x10))();
  if (iVar1 == -1) {
    return -1;
  }
  pbVar2 = (byte *)_Gninc(this);
  return (uint)*pbVar2;
}



/* ---- _Gninc @ 67403b10 size=16 ---- */

/* Library Function - Single Match
    protected: char * __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::_Gninc(void)
   
   Library: Visual Studio 2003 Release */

char * __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Gninc
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  char *pcVar1;
  
  **(int **)(this + 0x30) = **(int **)(this + 0x30) + -1;
  pcVar1 = (char *)**(int **)(this + 0x20);
  **(int **)(this + 0x20) = (int)(pcVar1 + 1);
  return pcVar1;
}



/* ---- FUN_67403d00 @ 67403d00 size=30 ---- */

undefined4 * __thiscall FUN_67403d00(void *this,byte param_1)

{
  FUN_67403a30(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67403d20 @ 67403d20 size=132 ---- */

undefined4 * __thiscall FUN_67403d20(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int **)this = param_1;
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  if (iVar1 != 0) {
    FUN_67408233((undefined4 *)(iVar1 + 4));
  }
  local_4 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) &&
     (piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x2c), piVar2 != (int *)0x0)) {
    FUN_674039d0(piVar2);
  }
  *(bool *)((int)this + 4) = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0;
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_67403db0 @ 67403db0 size=88 ---- */

void __fastcall FUN_67403db0(int param_1)

{
  *(int *)(param_1 + 0x20) = param_1 + 0x18;
  *(int *)(param_1 + 0x24) = param_1 + 0x1c;
  *(int *)(param_1 + 0x10) = param_1 + 8;
  *(int *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0x34) = param_1 + 0x2c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x24) = 0;
  **(undefined4 **)(param_1 + 0x34) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  return;
}



/* ---- FUN_67403e10 @ 67403e10 size=270 ---- */

facet * __cdecl FUN_67403e10(locale *param_1)

{
  facet *pfVar1;
  facet *this;
  int iVar2;
  facet *local_24;
  _Lockit local_20 [4];
  _Lockit local_1c [4];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::_Lockit::_Lockit(local_1c,0);
  pfVar1 = DAT_6741dd44;
  local_4 = 0;
  local_24 = DAT_6741dd44;
  if (DAT_6741dde8 == 0) {
    std::_Lockit::_Lockit(local_20,0);
    if (DAT_6741dde8 == 0) {
      DAT_6741dde0 = DAT_6741dde0 + 1;
      DAT_6741dde8 = DAT_6741dde0;
    }
    FUN_67407b32((int *)local_20);
  }
  this = std::locale::_Getfacet(param_1,DAT_6741dde8);
  if (this == (facet *)0x0) {
    if (pfVar1 == (facet *)0x0) {
      iVar2 = FUN_67403900((int *)&local_24);
      this = local_24;
      if (iVar2 == -1) {
        FUN_67409304(local_18,"bad cast");
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_18,&DAT_674193b8);
      }
      DAT_6741dd44 = local_24;
      std::_Lockit::_Lockit(local_20,0);
      if (*(int *)(this + 4) != -1) {
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
      }
      FUN_67407b32((int *)local_20);
      std::locale::facet::_Register(this);
    }
    else {
      this = pfVar1;
    }
  }
  local_4 = 0xffffffff;
  FUN_67407b32((int *)local_1c);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_67403f20 @ 67403f20 size=104 ---- */

undefined4 * __thiscall FUN_67403f20(void *this,undefined4 param_1)

{
  _Locinfo local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_6741486b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_6741674c;
  std::_Locinfo::_Locinfo(local_80,"C");
  std::_Locinfo::~_Locinfo(local_80);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_67403fe0 @ 67403fe0 size=30 ---- */

undefined4 * __thiscall FUN_67403fe0(void *this,byte param_1)

{
  FUN_67403500(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67404000 @ 67404000 size=76 ---- */

int __thiscall FUN_67404000(void *this,int param_1,char *param_2)

{
  uint3 uVar2;
  int iVar1;
  char *_Str1;
  
  iVar1 = *(int *)this;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 == -1) || (param_1 < iVar1)) {
    return (uint)uVar2 << 8;
  }
  iVar1 = CONCAT31(uVar2,1);
  if (*(int *)((int)this + 0xd8) != 0) {
    if (*(uint *)((int)this + 0xdc) < 0x10) {
      _Str1 = (char *)((int)this + 200);
    }
    else {
      _Str1 = *(char **)((int)this + 200);
    }
    iVar1 = __stricmp(_Str1,param_2);
    iVar1 = CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
  }
  return iVar1;
}



/* ---- FUN_67404050 @ 67404050 size=171 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUN_67404050(void *this,int param_1,wchar_t *param_2)

{
  uint3 uVar2;
  int iVar1;
  char *_Str1;
  char local_204 [4];
  char acStack_1f4 [496];
  undefined4 local_4;
  
  local_4 = DAT_6741b534;
  iVar1 = *(int *)this;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 == -1) || (param_1 < iVar1)) {
    return (uint)uVar2 << 8;
  }
  iVar1 = CONCAT31(uVar2,1);
  if (*(int *)((int)this + 0xd8) != 0) {
    __snprintf(local_204,0x200,"%S",param_2);
    if (*(uint *)((int)this + 0xdc) < 0x10) {
      _Str1 = (char *)((int)this + 200);
    }
    else {
      _Str1 = *(char **)((int)this + 200);
    }
    local_204[0] = -0x24;
    local_204[1] = '@';
    local_204[2] = '@';
    local_204[3] = 'g';
    iVar1 = __stricmp(_Str1,acStack_1f4);
    iVar1 = CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
  }
  return iVar1;
}



/* ---- FUN_67404100 @ 67404100 size=98 ---- */

void __thiscall FUN_67404100(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  if (cVar1 != '\0') {
    *(undefined4 *)((int)this + 0x3c) = 0;
    return;
  }
  *(int **)((int)this + 0x3c) = param_1;
  FUN_67403db0((int)this);
  if (*(int *)((int)this + 0x48) == 0) {
    pvVar2 = operator_new(0x1c);
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)((int)pvVar2 + 0x18) = 0xf;
      *(undefined4 *)((int)pvVar2 + 0x14) = 0;
      *(undefined1 *)((int)pvVar2 + 4) = 0;
      *(void **)((int)this + 0x48) = pvVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  return;
}



/* ---- FUN_67404170 @ 67404170 size=112 ---- */

void __fastcall FUN_67404170(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_67414828;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  bVar3 = thunk_FUN_6740ba67();
  if ((!bVar3) &&
     (piVar1 = (int *)*param_1, (*(byte *)(*(int *)(*piVar1 + 4) + 0x10 + (int)piVar1) & 2) != 0)) {
    FUN_674039d0(piVar1);
  }
  iVar2 = *(int *)(*(int *)(*(int *)*param_1 + 4) + 0x28 + *param_1);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_6740823c((undefined4 *)(iVar2 + 4));
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_674041e0 @ 674041e0 size=104 ---- */

undefined4 * __fastcall FUN_674041e0(undefined4 *param_1)

{
  locale *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6741488b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_674166dc;
  FUN_67408206(param_1 + 1);
  local_4 = 0;
  this = operator_new(4);
  if (this == (locale *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = std::locale::locale(this);
  }
  param_1[0xe] = uVar1;
  FUN_67403db0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_67404250 @ 67404250 size=163 ---- */

void __thiscall FUN_67404250(void *this,undefined4 param_1)

{
  int iVar1;
  locale *plVar2;
  facet *pfVar3;
  undefined4 *puVar4;
  uint local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_674148a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  plVar2 = (locale *)FUN_67403530(this,(int *)&local_14);
  local_4 = 0;
  pfVar3 = FUN_67403e10(plVar2);
  local_4 = 0xffffffff;
  if (local_14 != 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_10,0);
    iVar1 = *(int *)(local_14 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(local_14 + 4) = iVar1 + -1;
    }
    puVar4 = (undefined4 *)(local_14 & (*(int *)(local_14 + 4) != 0) - 1);
    FUN_67407b32((int *)&local_10);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  (**(code **)(*(int *)pfVar3 + 0x18))(param_1);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_67404300 @ 67404300 size=399 ---- */

int * FUN_67404300(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ios_base *this;
  int iVar9;
  undefined1 auStackY_b8 [128];
  int local_24;
  char local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_674148c8;
  pvStack_10 = ExceptionList;
  local_14 = auStackY_b8 + 0x88;
  iVar9 = 0;
  local_18 = 0;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)(param_2 + 1);
  iVar7 = *(int *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  if ((0 < iVar7) && (iVar5 < iVar7)) {
    iVar9 = iVar7 - iVar5;
  }
  ExceptionList = &pvStack_10;
  local_1c = iVar9;
  FUN_67403d20(&local_24,param_1);
  if (local_20 == '\0') {
    this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
    local_8 = 0;
    std::ios_base::clear(this,*(uint *)(this + 8) | 4,false);
    local_8 = 0xffffffff;
    FUN_67404170(&local_24);
    ExceptionList = pvStack_10;
    return param_1;
  }
  local_8 = 1;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) & 0x1c0) != 0x40) {
    while (0 < iVar9) {
      bVar2 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
      piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28);
      if ((*(uint *)piVar8[9] == 0) ||
         (uVar6 = *(uint *)piVar8[9], iVar9 = local_1c, *(int *)piVar8[0xd] + uVar6 <= uVar6)) {
        uVar6 = (**(code **)(*piVar8 + 4))(bVar2);
      }
      else {
        *(int *)piVar8[0xd] = *(int *)piVar8[0xd] + -1;
        pbVar3 = *(byte **)piVar8[9];
        *(byte **)piVar8[9] = pbVar3 + 1;
        *pbVar3 = bVar2;
        uVar6 = (uint)bVar2;
      }
      if (uVar6 == 0xffffffff) {
        local_18 = local_18 | 4;
        break;
      }
      iVar9 = iVar9 + -1;
      local_1c = iVar9;
    }
    if (local_18 != 0) goto LAB_6740440b;
  }
  iVar7 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) + 0x1c))
                    (param_2,iVar5);
  if (iVar7 == iVar5) {
    for (; 0 < iVar9; iVar9 = iVar9 + -1) {
      bVar2 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
      piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28);
      if ((*(uint *)piVar8[9] == 0) ||
         (uVar6 = *(uint *)piVar8[9], *(int *)piVar8[0xd] + uVar6 <= uVar6)) {
        uVar6 = (**(code **)(*piVar8 + 4))(bVar2);
      }
      else {
        *(int *)piVar8[0xd] = *(int *)piVar8[0xd] + -1;
        pbVar3 = *(byte **)piVar8[9];
        *(byte **)piVar8[9] = pbVar3 + 1;
        *pbVar3 = bVar2;
        uVar6 = (uint)bVar2;
      }
      if (uVar6 == 0xffffffff) {
        local_18 = local_18 | 4;
        *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
        piVar8 = (int *)FUN_674044bb();
        return piVar8;
      }
    }
  }
  else {
    local_18 = 4;
  }
LAB_6740440b:
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
  piVar8 = (int *)FUN_674044bb();
  return piVar8;
}



/* ---- Catch@6740448f @ 6740448f size=41 ---- */

undefined * Catch_6740448f(void)

{
  ios_base *this;
  int unaff_EBP;
  
  this = (ios_base *)(*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8));
  std::ios_base::clear(this,*(uint *)(this + 8) | 4,true);
  return &DAT_674044b8;
}



/* ---- FUN_674044bb @ 674044bb size=78 ---- */

void FUN_674044bb(void)

{
  uint uVar1;
  ios_base *this;
  int unaff_EBP;
  int *unaff_ESI;
  
  this = (ios_base *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(unaff_EBP + -0x14) != 0) {
    uVar1 = *(uint *)(this + 8) | *(uint *)(unaff_EBP + -0x14);
    if (*(int *)(this + 0x28) == 0) {
      uVar1 = uVar1 | 4;
    }
    std::ios_base::clear(this,uVar1,false);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_67404170((int *)(unaff_EBP + -0x20));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- FUN_67404510 @ 67404510 size=44 ---- */

bool __cdecl FUN_67404510(void *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    pbVar1 = (byte *)(param_2 + 4);
  }
  else {
    pbVar1 = *(byte **)(param_2 + 4);
  }
  uVar2 = FUN_67403680(param_1,0,*(uint *)((int)param_1 + 0x14),pbVar1,*(uint *)(param_2 + 0x14));
  return (bool)('\x01' - (uVar2 != 0));
}



/* ---- FUN_67404540 @ 67404540 size=97 ---- */

undefined4 __cdecl FUN_67404540(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6741480b;
  local_c = ExceptionList;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_c;
    this = operator_new(8);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_67403f20(this,0);
    }
    *param_1 = (int)puVar1;
  }
  ExceptionList = local_c;
  return 2;
}



/* ---- FUN_674045b0 @ 674045b0 size=95 ---- */

undefined4 * __thiscall FUN_674045b0(void *this,int param_1)

{
  undefined4 uVar1;
  
  FUN_674041e0(this);
  *(undefined ***)this = &PTR_FUN_67416714;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  FUN_67403db0((int)this);
  if (param_1 != 0) {
    *(int *)((int)this + 0x10) = param_1 + 8;
    *(int *)((int)this + 0x14) = param_1 + 8;
    *(int *)((int)this + 0x20) = param_1;
    *(int *)((int)this + 0x24) = param_1;
    *(int *)((int)this + 0x30) = param_1 + 4;
    *(int *)((int)this + 0x34) = param_1 + 4;
  }
  *(int *)((int)this + 0x58) = param_1;
  *(undefined4 *)((int)this + 0x50) = DAT_6741dd40;
  uVar1 = DAT_6741dd40;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  return this;
}



/* ---- FUN_67404660 @ 67404660 size=47 ---- */

undefined4 __fastcall FUN_67404660(int *param_1)

{
  int iVar1;
  
  if (param_1[0x16] != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(0xffffffff);
    if (iVar1 != -1) {
      iVar1 = _fflush((FILE *)param_1[0x16]);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



/* ---- FUN_67404690 @ 67404690 size=148 ---- */

uint __thiscall FUN_67404690(void *this,uint param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = **(uint **)((int)this + 0x20);
  if (((uVar2 != 0) && (**(uint **)((int)this + 0x10) < uVar2)) &&
     ((param_1 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_1)))) {
    FUN_67404730((int)this);
    return (param_1 == 0xffffffff) - 1 & param_1;
  }
  if ((*(FILE **)((int)this + 0x58) != (FILE *)0x0) && (param_1 != 0xffffffff)) {
    if ((*(int *)((int)this + 0x3c) == 0) &&
       (iVar3 = _ungetc(param_1 & 0xff,*(FILE **)((int)this + 0x58)), iVar3 != -1)) {
      return param_1;
    }
    puVar1 = (undefined1 *)((int)this + 0x44);
    if ((undefined1 *)**(int **)((int)this + 0x20) != puVar1) {
      *puVar1 = (char)param_1;
      **(int **)((int)this + 0x10) = (int)puVar1;
      **(int **)((int)this + 0x20) = (int)puVar1;
      **(int **)((int)this + 0x30) = (int)this + (0x45 - (int)puVar1);
      return param_1;
    }
  }
  return 0xffffffff;
}



/* ---- FUN_67404730 @ 67404730 size=16 ---- */

undefined4 __fastcall FUN_67404730(int param_1)

{
  **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + 1;
  **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + -1;
  return **(undefined4 **)(param_1 + 0x20);
}



/* ---- FUN_67404740 @ 67404740 size=65 ---- */

uint __fastcall FUN_67404740(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = *(byte **)param_1[8];
  if ((pbVar1 != (byte *)0x0) && (uVar2 = *(uint *)param_1[8], uVar2 < *(int *)param_1[0xc] + uVar2)
     ) {
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x14))();
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  (**(code **)(*param_1 + 8))(uVar2);
  return uVar2;
}



/* ---- FUN_67404790 @ 67404790 size=87 ---- */

void __thiscall FUN_67404790(void *this,undefined4 param_1,char param_2)

{
  undefined1 uVar1;
  
  std::ios_base::_Init(this);
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  uVar1 = FUN_67404250(this,0x20);
  *(undefined1 *)((int)this + 0x30) = uVar1;
  if (*(int *)((int)this + 0x28) == 0) {
    std::ios_base::clear(this,*(uint *)((int)this + 8) | 4,false);
  }
  if (param_2 == '\0') {
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
  std::ios_base::_Addstd(this);
  return;
}



/* ---- FUN_674047f0 @ 674047f0 size=270 ---- */

facet * __cdecl FUN_674047f0(locale *param_1)

{
  facet *pfVar1;
  facet *this;
  int iVar2;
  facet *local_24;
  _Lockit local_20 [4];
  _Lockit local_1c [4];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::_Lockit::_Lockit(local_1c,0);
  pfVar1 = DAT_6741dd48;
  local_4 = 0;
  local_24 = DAT_6741dd48;
  if (DAT_6741dd38 == 0) {
    std::_Lockit::_Lockit(local_20,0);
    if (DAT_6741dd38 == 0) {
      DAT_6741dd38 = DAT_6741dde0 + 1;
      DAT_6741dde0 = DAT_6741dd38;
    }
    FUN_67407b32((int *)local_20);
  }
  this = std::locale::_Getfacet(param_1,DAT_6741dd38);
  if (this == (facet *)0x0) {
    if (pfVar1 == (facet *)0x0) {
      iVar2 = FUN_67404540((int *)&local_24);
      this = local_24;
      if (iVar2 == -1) {
        FUN_67409304(local_18,"bad cast");
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_18,&DAT_674193b8);
      }
      DAT_6741dd48 = local_24;
      std::_Lockit::_Lockit(local_20,0);
      if (*(int *)(this + 4) != -1) {
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
      }
      FUN_67407b32((int *)local_20);
      std::locale::facet::_Register(this);
    }
    else {
      this = pfVar1;
    }
  }
  local_4 = 0xffffffff;
  FUN_67407b32((int *)local_1c);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_67404900 @ 67404900 size=42 ---- */

void FUN_67404900(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ---- FUN_67404950 @ 67404950 size=124 ---- */

int * __thiscall FUN_67404950(void *this,undefined4 param_1,char param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_674148fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_674163d8;
    *(undefined ***)((int)this + 4) = &PTR_FUN_674166ac;
    local_4 = 0;
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_LAB_674166a4;
  FUN_67404790((void *)(*(int *)(*(int *)this + 4) + (int)this),param_1,param_2);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_674049d0 @ 674049d0 size=291 ---- */

void * __thiscall FUN_674049d0(void *this,char *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  _iobuf *p_Var3;
  locale *plVar4;
  facet *pfVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414918;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x58) == 0) {
    ExceptionList = &local_c;
    p_Var3 = std::_Fiopen(param_1,param_2,param_3);
    if (p_Var3 != (_iobuf *)0x0) {
      *(undefined1 *)((int)this + 0x54) = 1;
      *(undefined1 *)((int)this + 0x4c) = 0;
      FUN_67403db0((int)this);
      *(int **)((int)this + 0x30) = &p_Var3->_cnt;
      *(int **)((int)this + 0x34) = &p_Var3->_cnt;
      *(char ***)((int)this + 0x10) = &p_Var3->_base;
      *(char ***)((int)this + 0x14) = &p_Var3->_base;
      *(_iobuf **)((int)this + 0x20) = p_Var3;
      *(_iobuf **)((int)this + 0x24) = p_Var3;
      *(_iobuf **)((int)this + 0x58) = p_Var3;
      *(undefined4 *)((int)this + 0x50) = DAT_6741dd40;
      *(undefined4 *)((int)this + 0x40) = DAT_6741dd40;
      *(undefined4 *)((int)this + 0x3c) = 0;
      plVar4 = (locale *)FUN_67403620(this,(int *)&param_3);
      local_4 = 0;
      pfVar5 = FUN_674047f0(plVar4);
      FUN_67404100(this,(int *)pfVar5);
      uVar2 = param_3;
      local_4 = 0xffffffff;
      if (param_3 != 0) {
        std::_Lockit::_Lockit((_Lockit *)&param_2,0);
        iVar1 = *(int *)(uVar2 + 4);
        if ((iVar1 != 0) && (iVar1 != -1)) {
          *(int *)(uVar2 + 4) = iVar1 + -1;
        }
        puVar6 = (undefined4 *)(uVar2 & (*(int *)(uVar2 + 4) != 0) - 1);
        FUN_67407b32(&param_2);
        if (puVar6 != (undefined4 *)0x0) {
          (**(code **)*puVar6)(1);
        }
      }
      ExceptionList = local_c;
      return this;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}



/* ---- FUN_67404b00 @ 67404b00 size=233 ---- */

void * __thiscall FUN_67404b00(void *this,int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_674077bf();
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (-*(int *)((int)this + 0x14) - 1U <= param_3) {
    FUN_67407817();
  }
  if (param_3 != 0) {
    uVar1 = *(int *)((int)this + 0x14) + param_3;
    if (uVar1 == 0xffffffff) {
      FUN_67407817();
    }
    if (*(uint *)((int)this + 0x18) < uVar1) {
      FUN_674011e0(this,uVar1);
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar6 = param_1 + 4;
      }
      else {
        iVar6 = *(int *)(param_1 + 4);
      }
      puVar4 = (undefined4 *)((int)this + 4);
      if (*(uint *)((int)this + 0x18) < 0x10) {
        puVar2 = puVar4;
      }
      else {
        puVar2 = (undefined4 *)*puVar4;
      }
      puVar5 = (undefined4 *)(param_1 + iVar6);
      puVar2 = (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar2);
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar1;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)((int)puVar4 + uVar1) = 0;
    }
  }
  return this;
}



/* ---- FUN_67404bf0 @ 67404bf0 size=59 ---- */

void __cdecl FUN_67404bf0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    if (0xf < *(uint *)(param_1 + 0x18)) {
      _free(*(void **)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



/* ---- FUN_67404c30 @ 67404c30 size=440 ---- */

uint __fastcall FUN_67404c30(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  void *this;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_9;
  int local_8;
  undefined1 local_4 [4];
  
  if ((**(uint **)(param_1 + 0x20) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x30), uVar3 = **(uint **)(param_1 + 0x20),
     uVar3 < *piVar1 + uVar3)) {
    *piVar1 = *piVar1 + -1;
    pbVar2 = (byte *)**(int **)(param_1 + 0x20);
    **(int **)(param_1 + 0x20) = (int)(pbVar2 + 1);
    return (uint)*pbVar2;
  }
  if (*(FILE **)(param_1 + 0x58) != (FILE *)0x0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
      FUN_67401110(*(void **)(param_1 + 0x48),0,0xffffffff);
      iVar4 = FID_conflict__getc(*(FILE **)(param_1 + 0x58));
      do {
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        FUN_674014c0(*(void **)(param_1 + 0x48),1);
        iVar4 = *(int *)(param_1 + 0x48);
        if (*(uint *)(iVar4 + 0x18) < 0x10) {
          iVar6 = iVar4 + 4;
        }
        else {
          iVar6 = *(int *)(iVar4 + 4);
        }
        if (*(uint *)(iVar4 + 0x18) < 0x10) {
          iVar5 = iVar4 + 4;
        }
        else {
          iVar5 = *(int *)(iVar4 + 4);
        }
        iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))
                          (param_1 + 0x50,iVar5,iVar6 + *(int *)(iVar4 + 0x14),&local_8,&local_9,
                           &local_8,local_4);
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x48);
          if (*(uint *)(iVar4 + 0x18) < 0x10) {
            iVar6 = iVar4 + 4;
          }
          else {
            iVar6 = *(int *)(iVar4 + 4);
          }
          for (iVar6 = (*(int *)(iVar4 + 0x14) - local_8) + iVar6; 0 < iVar6; iVar6 = iVar6 + -1) {
            _ungetc((int)*(char *)(iVar6 + -1 + local_8),*(FILE **)(param_1 + 0x58));
          }
          return (uint)local_9;
        }
        if (iVar4 == 1) {
          this = *(void **)(param_1 + 0x48);
          if (*(uint *)((int)this + 0x18) < 0x10) {
            iVar4 = (int)this + 4;
          }
          else {
            iVar4 = *(int *)((int)this + 4);
          }
          FUN_67401110(this,0,local_8 - iVar4);
        }
        else {
          if (iVar4 != 3) {
            return 0xffffffff;
          }
          if (*(int *)(*(int *)(param_1 + 0x48) + 0x14) != 0) {
            iVar4 = *(int *)(param_1 + 0x48);
            if (*(uint *)(iVar4 + 0x18) < 0x10) {
              return (uint)*(byte *)(iVar4 + 4);
            }
            return (uint)**(byte **)(iVar4 + 4);
          }
        }
        iVar4 = FID_conflict__getc(*(FILE **)(param_1 + 0x58));
      } while( true );
    }
    uVar3 = FID_conflict__getc(*(FILE **)(param_1 + 0x58));
    if (uVar3 != 0xffffffff) {
      return uVar3 & 0xff;
    }
  }
  return 0xffffffff;
}



/* ---- FUN_67404df0 @ 67404df0 size=271 ---- */

void * __thiscall FUN_67404df0(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((int)this + 0x18);
  if (uVar6 < 0x10) {
    puVar1 = (undefined4 *)((int)this + 4);
  }
  else {
    puVar1 = *(undefined4 **)((int)this + 4);
  }
  if (puVar1 <= param_1) {
    puVar1 = (undefined4 *)((int)this + 4);
    if (uVar6 < 0x10) {
      puVar4 = puVar1;
    }
    else {
      puVar4 = (undefined4 *)*puVar1;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar4)) {
      if (0xf < uVar6) {
        puVar1 = (undefined4 *)*puVar1;
      }
      pvVar2 = FUN_67404b00(this,(int)this,(int)param_1 - (int)puVar1,param_2);
      return pvVar2;
    }
  }
  if (-*(int *)((int)this + 0x14) - 1U <= param_2) {
    FUN_67407817();
  }
  if (param_2 != 0) {
    uVar6 = *(int *)((int)this + 0x14) + param_2;
    if (uVar6 == 0xffffffff) {
      FUN_67407817();
    }
    if (*(uint *)((int)this + 0x18) < uVar6) {
      FUN_674011e0(this,uVar6);
    }
    else if (uVar6 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar6 != 0) {
      if (*(uint *)((int)this + 0x18) < 0x10) {
        iVar3 = (int)this + 4;
      }
      else {
        iVar3 = *(int *)((int)this + 4);
      }
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x14) + iVar3);
      for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = *param_1;
        param_1 = param_1 + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar6;
      if (0xf < *(uint *)((int)this + 0x18)) {
        *(undefined1 *)(*(int *)((int)this + 4) + uVar6) = 0;
        return this;
      }
      *(undefined1 *)((int)this + uVar6 + 4) = 0;
    }
  }
  return this;
}



/* ---- FUN_67404f00 @ 67404f00 size=319 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall FUN_67404f00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined3 uVar6;
  undefined4 ******ppppppuVar3;
  size_t sVar4;
  uint uVar5;
  size_t _Size;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined4 ******ppppppuStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  int iStack_18;
  uint uStack_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_674149d8;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  if ((param_1[0xf] == 0) || ((char)param_1[0x13] == '\0')) {
    uVar6 = (undefined3)((uint)param_1[0xf] >> 8);
LAB_67404fc5:
    ExceptionList = local_c;
    return CONCAT31(uVar6,1);
  }
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 4))(0xffffffff);
  uStack_14 = 0xf;
  ppppppuStack_28 = (undefined4 ******)0x0;
  uStack_24 = 0;
  iStack_18 = 8;
  uStack_20 = 0;
  uStack_4 = 0;
LAB_67404f80:
  ppppppuVar3 = ppppppuStack_28;
  if (uStack_14 < 0x10) {
    ppppppuVar3 = &ppppppuStack_28;
  }
  iVar1 = (**(code **)(*(int *)param_1[0xf] + 0x18))
                    (param_1 + 0x14,ppppppuVar3,iStack_18 + (int)ppppppuVar3,&iStack_30);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 3) goto LAB_67405038;
LAB_67404fbc:
    uVar2 = FUN_674011b0((int)auStack_2c);
    uVar6 = (undefined3)((uint)uVar2 >> 8);
    goto LAB_67404fc5;
  }
  ppppppuVar3 = ppppppuStack_28;
  if (uStack_14 < 0x10) {
    ppppppuVar3 = &ppppppuStack_28;
  }
  _Size = iStack_30 - (int)ppppppuVar3;
  if (_Size != 0) {
    ppppppuVar3 = ppppppuStack_28;
    if (uStack_14 < 0x10) {
      ppppppuVar3 = &ppppppuStack_28;
    }
    sVar4 = _fwrite(ppppppuVar3,_Size,1,(FILE *)param_1[0x16]);
    if (_Size != sVar4) {
LAB_67405038:
      uVar5 = FUN_674011b0((int)auStack_2c);
      ExceptionList = local_c;
      return uVar5 & 0xffffff00;
    }
  }
  if ((char)param_1[0x13] == '\0') goto LAB_67404fbc;
  FUN_674014c0(auStack_2c,8);
  goto LAB_67404f80;
}



/* ---- FUN_67405050 @ 67405050 size=446 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char __cdecl FUN_67405050(void *param_1)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  LPCSTR *****ppppppCVar4;
  BOOL BVar5;
  char local_4c [4];
  undefined1 local_48 [4];
  LPCSTR *****local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 local_2c [4];
  undefined1 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414940;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (LPCSTR *****)((uint)local_44[0] & 0xffffff00);
  ExceptionList = &local_c;
  FUN_674013d0(local_48,param_1,0,0xffffffff);
  local_4 = 0;
  if (local_34 == 0) {
    if (0xf < local_30) {
      _free(local_44[0]);
    }
    ExceptionList = local_c;
    return '\0';
  }
  ppppppCVar4 = local_44[0];
  if (local_30 < 0x10) {
    ppppppCVar4 = (LPCSTR *****)local_44;
  }
  if (*(char *)((int)ppppppCVar4 + local_34) == '\\') {
    uVar3 = local_34 - 1;
    if (local_34 < uVar3) {
      FUN_674014c0(local_48,uVar3 - local_34);
    }
    else {
      FUN_67401110(local_48,uVar3,0xffffffff);
    }
  }
  if (local_34 == 0) {
    if (0xf < local_30) {
      _free(local_44[0]);
    }
  }
  else {
    ppppppCVar4 = local_44[0];
    if (local_30 < 0x10) {
      ppppppCVar4 = (LPCSTR *****)local_44;
    }
    DVar2 = GetFileAttributesA((LPCSTR)ppppppCVar4);
    if (DVar2 == 0xffffffff) {
      local_14 = 0xf;
      local_18 = 0;
      local_28 = 0;
      FUN_674013d0(local_2c,local_48,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_4c[0] = '\\';
      uVar3 = FUN_67401010(local_2c,local_4c,0xffffffff,1);
      if (uVar3 != 0xffffffff) {
        FUN_67401650(local_2c,uVar3);
        cVar1 = FUN_67405050(local_2c);
        if (cVar1 == '\0') {
          FUN_674011b0((int)local_2c);
          FUN_674011b0((int)local_48);
          ExceptionList = local_c;
          return '\0';
        }
      }
      ppppppCVar4 = local_44[0];
      if (local_30 < 0x10) {
        ppppppCVar4 = (LPCSTR *****)local_44;
      }
      BVar5 = CreateDirectoryA((LPCSTR)ppppppCVar4,(LPSECURITY_ATTRIBUTES)0x0);
      FUN_674011b0((int)local_2c);
      FUN_674011b0((int)local_48);
      ExceptionList = local_c;
      return '\x01' - (BVar5 != 1);
    }
    if (0xf < local_30) {
      _free(local_44[0]);
      ExceptionList = local_c;
      return '\x01';
    }
  }
  ExceptionList = local_c;
  return '\x01';
}



/* ---- FUN_67405210 @ 67405210 size=511 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUN_67405210(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *******pppppppuVar5;
  size_t sVar6;
  size_t _Count;
  char local_35;
  int local_34;
  char *local_30;
  undefined1 auStack_2c [4];
  undefined4 *******local_28;
  undefined4 local_24;
  undefined1 local_20;
  int local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_674149d8;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  if (param_1 == -1) {
    param_1 = 0;
  }
  else {
    uVar1 = **(uint **)((int)this + 0x24);
    local_35 = (char)param_1;
    if ((uVar1 == 0) || (piVar2 = *(int **)((int)this + 0x34), *piVar2 + uVar1 <= uVar1)) {
      if (*(FILE **)((int)this + 0x58) != (FILE *)0x0) {
        if (*(int *)((int)this + 0x3c) != 0) {
          ExceptionList = &local_c;
          FUN_67401110(*(void **)((int)this + 0x48),0,0xffffffff);
          local_14 = 0xf;
          local_28 = (undefined4 *******)0x0;
          local_24 = 0;
          local_18 = 8;
          local_20 = 0;
          local_4 = 0;
          while( true ) {
            pppppppuVar5 = local_28;
            if (local_14 < 0x10) {
              pppppppuVar5 = &local_28;
            }
            iVar4 = (**(code **)(**(int **)((int)this + 0x3c) + 0x14))
                              ((int)this + 0x50,&local_35,&local_34,&local_30,pppppppuVar5,
                               local_18 + (int)pppppppuVar5,&local_34);
            if (iVar4 < 0) break;
            if (1 < iVar4) {
              if (iVar4 == 3) {
                iVar4 = FID_conflict__fputc((int)local_35,*(FILE **)((int)this + 0x58));
                if (iVar4 == -1) {
                  FUN_674011b0((int)auStack_2c);
                  ExceptionList = local_c;
                  return -1;
                }
                FUN_674011b0((int)auStack_2c);
                ExceptionList = local_c;
                return param_1;
              }
              break;
            }
            pppppppuVar5 = local_28;
            if (local_14 < 0x10) {
              pppppppuVar5 = &local_28;
            }
            _Count = local_34 - (int)pppppppuVar5;
            if (_Count != 0) {
              pppppppuVar5 = local_28;
              if (local_14 < 0x10) {
                pppppppuVar5 = &local_28;
              }
              sVar6 = _fwrite(pppppppuVar5,1,_Count,*(FILE **)((int)this + 0x58));
              if (_Count != sVar6) break;
            }
            *(undefined1 *)((int)this + 0x4c) = 1;
            if (local_30 != &local_35) {
              FUN_674011b0((int)auStack_2c);
              ExceptionList = local_c;
              return param_1;
            }
            if (_Count == 0) {
              FUN_674014c0(auStack_2c,8);
            }
          }
          FUN_674011b0((int)auStack_2c);
          ExceptionList = local_c;
          return -1;
        }
        ExceptionList = &local_c;
        iVar4 = FID_conflict__fputc((int)local_35,*(FILE **)((int)this + 0x58));
        if (iVar4 != -1) {
          ExceptionList = local_c;
          return param_1;
        }
      }
      param_1 = -1;
    }
    else {
      *piVar2 = *piVar2 + -1;
      pcVar3 = (char *)**(int **)((int)this + 0x24);
      **(int **)((int)this + 0x24) = (int)(pcVar3 + 1);
      *pcVar3 = local_35;
    }
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_67405550 @ 67405550 size=260 ---- */

void __thiscall
FUN_67405550(void *this,undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_4;
  local_4 = param_5;
  if (*(int *)((int)this + 0x58) != 0) {
    uVar1 = FUN_67404f00(this);
    if ((char)uVar1 != '\0') {
      iVar2 = _fsetpos(*(FILE **)((int)this + 0x58),(fpos_t *)&local_8);
      if (iVar2 == 0) {
        if (param_2 != 0) {
          iVar2 = _fseek(*(FILE **)((int)this + 0x58),param_2,1);
          if (iVar2 != 0) goto LAB_67405626;
        }
        iVar2 = _fgetpos(*(FILE **)((int)this + 0x58),(fpos_t *)&local_8);
        if (iVar2 == 0) {
          if (*(void **)((int)this + 0x48) != (void *)0x0) {
            *(int *)((int)this + 0x50) = param_6;
            FUN_67401110(*(void **)((int)this + 0x48),0,0xffffffff);
          }
          iVar2 = (int)this + 0x44;
          if (**(int **)((int)this + 0x20) == iVar2) {
            **(int **)((int)this + 0x10) = iVar2;
            **(int **)((int)this + 0x20) = iVar2;
            **(int **)((int)this + 0x30) = (int)this + (0x44 - iVar2);
          }
          param_1[4] = *(undefined4 *)((int)this + 0x50);
          *param_1 = 0;
          param_1[2] = local_8;
          param_1[3] = local_4;
          return;
        }
      }
    }
  }
LAB_67405626:
  *param_1 = DAT_674165bc;
  param_1[2] = DAT_6741de00;
  param_1[3] = DAT_6741de04;
  param_1[4] = DAT_6741dd3c;
  return;
}



/* ---- FUN_67405660 @ 67405660 size=85 ---- */

int * __fastcall FUN_67405660(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x16] != 0) {
    uVar1 = FUN_67404f00(param_1);
    if ((char)uVar1 != '\0') {
      iVar2 = _fclose((FILE *)param_1[0x16]);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x15) = 0;
        *(undefined1 *)(param_1 + 0x13) = 0;
        FUN_67403db0((int)param_1);
        param_1[0x16] = 0;
        param_1[0x14] = DAT_6741dd40;
        iVar2 = DAT_6741dd40;
        param_1[0xf] = 0;
        param_1[0x10] = iVar2;
        return param_1;
      }
    }
  }
  return (int *)0x0;
}



/* ---- FUN_674056c0 @ 674056c0 size=27 ---- */

void FUN_674056c0(int param_1,int param_2)

{
  FUN_67404bf0(param_1,param_2);
  return;
}



/* ---- FUN_674056e0 @ 674056e0 size=105 ---- */

void FUN_674056e0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414958;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_67402430(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_67402590(local_34,local_50);
  local_34[0] = &PTR_FUN_67416548;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_674192a8);
}



/* ---- FUN_67405750 @ 67405750 size=42 ---- */

void __cdecl FUN_67405750(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    FUN_674013d0(param_1,param_3,0,0xffffffff);
  }
  return;
}



/* ---- FUN_67405780 @ 67405780 size=54 ---- */

void * __cdecl FUN_67405780(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = (void *)((int)param_2 + -0x1c);
    param_3 = (void *)((int)param_3 + -0x1c);
    FUN_674013d0(param_3,param_2,0,0xffffffff);
  } while (param_2 != param_1);
  return param_3;
}



/* ---- FUN_674057c0 @ 674057c0 size=121 ---- */

void * __cdecl FUN_674057c0(void *param_1,void *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_67414981;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      *(undefined4 *)((int)param_3 + 0x18) = 0xf;
      *(undefined4 *)((int)param_3 + 0x14) = 0;
      *(undefined1 *)((int)param_3 + 4) = 0;
      FUN_674013d0(param_3,param_1,0,0xffffffff);
    }
    param_3 = (void *)((int)param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return param_3;
}



/* ---- Catch@67405826 @ 67405826 size=37 ---- */

void Catch_67405826(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_67404900(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}



/* ---- FUN_67405860 @ 67405860 size=860 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __fastcall FUN_67405860(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  HANDLE hHandle;
  char *pcVar4;
  uint uVar5;
  char *******param3;
  DWORD DVar6;
  void *pvVar7;
  char *******pppppppcVar8;
  int iVar9;
  ushort local_288;
  ushort local_286;
  void *local_284;
  uint local_270;
  undefined1 local_26c [4];
  char *******local_268 [4];
  uint local_258;
  uint local_254;
  undefined1 local_250 [4];
  char *******local_24c [4];
  undefined4 local_23c;
  uint local_238;
  undefined1 local_234 [4];
  char *******local_230 [4];
  undefined4 local_220;
  uint local_21c;
  char local_218 [36];
  CHAR aCStack_1f4 [224];
  CHAR local_114 [260];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_674149bc;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  local_238 = 0xf;
  local_23c = 0;
  local_24c[0] = (char *******)((uint)local_24c[0] & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"XDebug::XLog");
  if (hHandle == (HANDLE)0x0) {
    if (0xf < local_238) {
      _free(local_24c[0]);
    }
    ExceptionList = local_c;
    return false;
  }
  WaitForSingleObject(hHandle,0xffffffff);
  GetModuleFileNameA((HMODULE)0x0,local_114,0x104);
  pcVar4 = local_114;
  local_254 = 0xf;
  local_258 = 0;
  local_268[0] = (char *******)((uint)local_268[0] & 0xffffff00);
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  FUN_67402430(local_26c,(undefined4 *)local_114,(int)pcVar4 - (int)(local_114 + 1));
  local_4._0_1_ = 1;
  uVar5 = FUN_67401010(local_26c,"\\",0xffffffff,1);
  local_21c = 0xf;
  uVar1 = uVar5 + 1;
  local_220 = 0;
  local_230[0] = (char *******)((uint)local_230[0] & 0xffffff00);
  FUN_674013d0(local_234,local_26c,uVar1,0xffffffff);
  local_4._0_1_ = 2;
  if (uVar5 != 0xffffffff) {
    if (local_258 < uVar1) {
      FUN_674014c0(local_26c,uVar1 - local_258);
    }
    else {
      FUN_67401110(local_26c,uVar1,0xffffffff);
    }
    FUN_67404df0(local_26c,(undefined4 *)&DAT_67416404,4);
    iVar9 = 1;
    GetLocalTime((LPSYSTEMTIME)&local_288);
    do {
      pppppppcVar8 = local_230[0];
      if (local_21c < 0x10) {
        pppppppcVar8 = (char *******)local_230;
      }
      param3 = local_268[0];
      if (local_254 < 0x10) {
        param3 = (char *******)local_268;
      }
      __snprintf(local_218,0x104,"%s\\%s_XDebug_%04d%02d%02d_%03d.log",(char *)param3,
                 (char *)pppppppcVar8,(uint)local_288,(uint)local_286,(uint)local_284 >> 0x10,iVar9)
      ;
      local_284 = (void *)0x67405a2f;
      DVar6 = GetFileAttributesA(aCStack_1f4);
      if (DVar6 == 0xffffffff) {
        pcVar4 = local_218;
        do {
          cVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
        FUN_67402430(local_250,(undefined4 *)local_218,(int)pcVar4 - (int)(local_218 + 1));
        goto LAB_67405a92;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x65);
    pcVar4 = local_218;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    FUN_67402430(local_250,(undefined4 *)local_218,(int)pcVar4 - (int)(local_218 + 1));
  }
LAB_67405a92:
  pvVar7 = FUN_67401680(&local_288,local_250);
  local_4._0_1_ = 3;
  FUN_67405050(pvVar7);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < local_270) {
    _free(local_284);
  }
  pppppppcVar8 = local_24c[0];
  if (local_238 < 0x10) {
    pppppppcVar8 = (char *******)local_24c;
  }
  piVar2 = (int *)(param_1 + 0x14);
  pvVar7 = FUN_674049d0((void *)(param_1 + 0x18),(char *)pppppppcVar8,0x12,0x1b6);
  if (pvVar7 == (void *)0x0) {
    iVar9 = *(int *)(*piVar2 + 4);
    uVar1 = *(uint *)(iVar9 + 8 + (int)piVar2);
    uVar5 = uVar1 | 2;
    if (*(int *)(iVar9 + 0x28 + (int)piVar2) == 0) {
      uVar5 = uVar1 | 6;
    }
    std::ios_base::clear((ios_base *)(iVar9 + (int)piVar2),uVar5,false);
  }
  iVar9 = *(int *)(*(int *)(*piVar2 + 4) + 0x1c + param_1);
  ReleaseMutex(hHandle);
  CloseHandle(hHandle);
  if (0xf < local_21c) {
    _free(local_230[0]);
  }
  local_21c = 0xf;
  local_220 = 0;
  local_230[0] = (char *******)((uint)local_230[0] & 0xffffff00);
  if (0xf < local_254) {
    _free(local_268[0]);
  }
  local_254 = 0xf;
  local_258 = 0;
  local_268[0] = (char *******)((uint)local_268[0] & 0xffffff00);
  if (0xf < local_238) {
    _free(local_24c[0]);
  }
  ExceptionList = local_c;
  return iVar9 == 0;
}



/* ---- FUN_67405bd0 @ 67405bd0 size=527 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl FUN_67405bd0(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_2c [4];
  void *local_28;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_674149d8;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    pcVar6 = (char *)(param_1 + 4);
  }
  else {
    pcVar6 = *(char **)(param_1 + 4);
  }
  ExceptionList = &local_c;
  pcVar3 = __strupr(pcVar6);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_67402430(local_2c,(undefined4 *)pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  local_4 = 0;
  pbVar4 = DAT_6741b120;
  if (DAT_6741b134 < 0x10) {
    pbVar4 = (byte *)&DAT_6741b120;
  }
  uVar5 = FUN_67403680(local_2c,0,local_18,pbVar4,DAT_6741b130);
  if (uVar5 != 0) {
    pbVar4 = DAT_6741b13c;
    if (DAT_6741b150 < 0x10) {
      pbVar4 = (byte *)&DAT_6741b13c;
    }
    uVar5 = FUN_67403680(local_2c,0,local_18,pbVar4,DAT_6741b14c);
    if (uVar5 != 0) {
      pbVar4 = DAT_6741b158;
      if (DAT_6741b16c < 0x10) {
        pbVar4 = (byte *)&DAT_6741b158;
      }
      uVar5 = FUN_67403680(local_2c,0,local_18,pbVar4,DAT_6741b168);
      if (uVar5 == 0) {
        if (0xf < local_14) {
          _free(local_28);
        }
        ExceptionList = local_c;
        return 10000;
      }
      pbVar4 = DAT_6741b174;
      if (DAT_6741b188 < 0x10) {
        pbVar4 = (byte *)&DAT_6741b174;
      }
      uVar5 = FUN_67403680(local_2c,0,local_18,pbVar4,DAT_6741b184);
      if (uVar5 == 0) {
        FUN_674011b0((int)local_2c);
        ExceptionList = local_c;
        return 20000;
      }
      bVar2 = FUN_67404510(local_2c,0x6741b18c);
      if (bVar2) {
        FUN_674011b0((int)local_2c);
        ExceptionList = local_c;
        return 30000;
      }
      bVar2 = FUN_67404510(local_2c,0x6741b1a8);
      if (bVar2) {
        FUN_674011b0((int)local_2c);
        ExceptionList = local_c;
        return 40000;
      }
      bVar2 = FUN_67404510(local_2c,0x6741b1c4);
      if (bVar2) {
        FUN_674011b0((int)local_2c);
        ExceptionList = local_c;
        return 50000;
      }
      FUN_674011b0((int)local_2c);
      ExceptionList = local_c;
      return 0xffffffff;
    }
  }
  if (0xf < local_14) {
    _free(local_28);
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- FUN_67405de0 @ 67405de0 size=140 ---- */

void __fastcall FUN_67405de0(int *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_674149f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_67416714;
  local_4 = 0;
  if ((char)param_1[0x15] != '\0') {
    FUN_67405660(param_1);
  }
  _Memory = (void *)param_1[0x12];
  if (_Memory != (void *)0x0) {
    if (0xf < *(uint *)((int)_Memory + 0x18)) {
      _free(*(void **)((int)_Memory + 4));
    }
    *(undefined4 *)((int)_Memory + 0x18) = 0xf;
    *(undefined4 *)((int)_Memory + 0x14) = 0;
    *(undefined1 *)((int)_Memory + 4) = 0;
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  FUN_67403a30(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_67405e70 @ 67405e70 size=30 ---- */

int * __thiscall FUN_67405e70(void *this,byte param_1)

{
  FUN_67405de0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67405e90 @ 67405e90 size=167 ---- */

void * __cdecl FUN_67405e90(void *param_1,void *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414a18;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_674013d0(local_28,param_2,0,0xffffffff);
  local_4 = 0;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pvVar3 = FUN_67404df0(local_28,(undefined4 *)param_3,(int)pcVar2 - (int)(param_3 + 1));
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_674013d0(param_1,pvVar3,0,0xffffffff);
  if (0xf < local_10) {
    _free(local_24);
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_67405f40 @ 67405f40 size=119 ---- */

void __cdecl FUN_67405f40(void *param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_67414a41;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined1 *)((int)param_1 + 4) = 0;
      FUN_674013d0(param_1,param_3,0,0xffffffff);
    }
    param_1 = (void *)((int)param_1 + 0x1c);
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch@67405fa6 @ 67405fa6 size=37 ---- */

void Catch_67405fa6(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_67404900(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}



/* ---- FUN_67405fe0 @ 67405fe0 size=524 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_67405fe0(undefined4 *param_1)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  undefined4 uVar4;
  LPCSTR pCVar5;
  int iVar6;
  undefined1 auStack_242 [2];
  undefined1 local_240 [4];
  void *local_23c;
  undefined4 local_22c;
  uint local_228;
  undefined4 local_224 [2];
  HANDLE local_21c;
  CHAR local_218 [512];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_67414a71;
  local_10 = ExceptionList;
  local_14 = auStack_242 + -0xe;
  local_18 = DAT_6741b534;
  iVar6 = 0;
  local_21c = (HANDLE)0xffffffff;
  ExceptionList = &local_10;
  while( true ) {
    if ((uint)param_1[0x30] < 0x10) {
      pCVar5 = (LPCSTR)(param_1 + 0x2b);
    }
    else {
      pCVar5 = (LPCSTR)param_1[0x2b];
    }
    local_21c = CreateFileA(pCVar5,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_21c != (HANDLE)0xffffffff) {
      local_8 = 1;
      FUN_67401ad0(local_224,param_1 + 0x38);
      local_8._0_1_ = 2;
      if ((uint)param_1[0x30] < 0x10) {
        pCVar5 = (LPCSTR)(param_1 + 0x2b);
      }
      else {
        pCVar5 = (LPCSTR)param_1[0x2b];
      }
      GetPrivateProfileStringA("XLog","LogLevel","Error",local_218,0x200,pCVar5);
      pcVar3 = local_218;
      local_228 = 0xf;
      local_22c = 0;
      local_23c = (void *)((uint)local_23c & 0xffffff00);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_67402430(local_240,(undefined4 *)local_218,(int)pcVar3 - (int)(local_218 + 1));
      local_8._0_1_ = 3;
      uVar4 = FUN_67405bd0((int)local_240);
      *param_1 = uVar4;
      local_8._0_1_ = 2;
      if (0xf < local_228) {
        _free(local_23c);
      }
      if ((uint)param_1[0x30] < 0x10) {
        pCVar5 = (LPCSTR)(param_1 + 0x2b);
      }
      else {
        pCVar5 = (LPCSTR)param_1[0x2b];
      }
      GetPrivateProfileStringA("XLog","NamespaceFilter","",local_218,0x200,pCVar5);
      pcVar3 = local_218;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_67402430(param_1 + 0x31,(undefined4 *)local_218,(int)pcVar3 - (int)(local_218 + 1));
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_67401af0(local_224);
      if (local_21c != (HANDLE)0xffffffff) {
        CloseHandle(local_21c);
      }
      ExceptionList = local_10;
      return;
    }
    iVar6 = iVar6 + 1;
    DVar2 = GetLastError();
    if (DVar2 != 0x20) {
      ExceptionList = local_10;
      return;
    }
    if (iVar6 == 10) break;
    Sleep(100);
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch@674061ec @ 674061ec size=6 ---- */

undefined4 Catch_674061ec(void)

{
  return 0x674061d3;
}



/* ---- FUN_67406210 @ 67406210 size=293 ---- */

void * __cdecl FUN_67406210(void *param_1,int param_2)

{
  if (param_2 < 0x4e21) {
    if (param_2 == 20000) {
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined1 *)((int)param_1 + 4) = 0;
      FUN_674013d0(param_1,&DAT_6741b170,0,0xffffffff);
      return param_1;
    }
    if (param_2 == -1) {
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined1 *)((int)param_1 + 4) = 0;
      FUN_674013d0(param_1,&DAT_6741b100,0,0xffffffff);
      return param_1;
    }
    if (param_2 == 0) {
      FUN_67405e90(param_1,&DAT_6741b138,"  ");
      return param_1;
    }
    if (param_2 == 10000) {
      FUN_67405e90(param_1,&DAT_6741b154,"   ");
      return param_1;
    }
  }
  else {
    if (param_2 == 30000) {
      FUN_67405e90(param_1,&DAT_6741b18c,"  ");
      return param_1;
    }
    if (param_2 == 40000) {
      FUN_67405e90(param_1,&DAT_6741b1a8,"  ");
      return param_1;
    }
    if (param_2 == 50000) {
      FUN_67401590(param_1,&DAT_6741b1c4);
      return param_1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  return param_1;
}



/* ---- FUN_67406340 @ 67406340 size=63 ---- */

void __fastcall FUN_67406340(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_67404bf0(*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/* ---- FUN_67406380 @ 67406380 size=245 ---- */

int * __thiscall FUN_67406380(void *this,int param_1)

{
  undefined4 *puVar1;
  ios_base iVar2;
  ios_base *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414aa7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_6741644c;
    *(undefined ***)((int)this + 0x60) = &PTR_FUN_674166ac;
    local_4 = 0;
  }
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_674166a4;
  this_00 = (ios_base *)(*(int *)(*(int *)this + 4) + (int)this);
  std::ios_base::_Init(this_00);
  puVar1 = (undefined4 *)((int)this + 4);
  *(undefined4 **)(this_00 + 0x28) = puVar1;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  iVar2 = (ios_base)FUN_67404250(this_00,0x20);
  this_00[0x30] = iVar2;
  if (*(int *)(this_00 + 0x28) == 0) {
    std::ios_base::clear(this_00,*(uint *)(this_00 + 8) | 4,false);
  }
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_67416448;
  local_4 = 2;
  FUN_674041e0(puVar1);
  *puVar1 = &PTR_FUN_67416714;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  FUN_67403db0((int)puVar1);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x54) = DAT_6741dd40;
  *(undefined4 *)((int)this + 0x44) = DAT_6741dd40;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_67406480 @ 67406480 size=89 ---- */

void __fastcall FUN_67406480(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_67414acb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x60) + 4) + -0x60 + param_1) = &PTR_LAB_67416448;
  local_4 = 0;
  FUN_67405de0((int *)(param_1 + -0x5c));
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x60) + 4) + -4 + param_1 + -0x5c) =
       &PTR_LAB_674166a4;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_674064e0 @ 674064e0 size=19 ---- */

void __fastcall FUN_674064e0(int param_1)

{
  FUN_67406480(param_1 + 0x60);
  FUN_674035c0((ios_base *)(param_1 + 0x60));
  return;
}



/* ---- FUN_67406500 @ 67406500 size=383 ---- */

void __fastcall FUN_67406500(int param_1)

{
  int *piVar1;
  ios_base *this;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_67414b28;
  pvStack_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &pvStack_c;
  FUN_67401ad0(local_14,(undefined4 *)(param_1 + 0xe0));
  local_4 = CONCAT31(local_4._1_3_,5);
  if (*(undefined4 **)(param_1 + 0xfc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xfc))(1);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(param_1 + 0x14);
    piVar4 = FUN_67405660((int *)(param_1 + 0x18));
    if (piVar4 == (int *)0x0) {
      iVar2 = *(int *)(*piVar1 + 4);
      uVar3 = *(uint *)(iVar2 + 8 + (int)piVar1);
      uVar5 = uVar3 | 2;
      if (*(int *)(iVar2 + 0x28 + (int)piVar1) == 0) {
        uVar5 = uVar3 | 6;
      }
      std::ios_base::clear((ios_base *)(iVar2 + (int)piVar1),uVar5,false);
    }
    std::ios_base::clear
              ((ios_base *)(*(int *)(*piVar1 + 4) + 0x14 + param_1),
               (*(int *)(*(int *)(*piVar1 + 4) + 0x3c + param_1) != 0) - 1 & 4,false);
  }
  local_4._0_1_ = 4;
  FUN_67401af0(local_14);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_67401a10((undefined4 *)(param_1 + 0xe0));
  if (0xf < *(uint *)(param_1 + 0xdc)) {
    _free(*(void **)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 0xdc) = 0xf;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  if (0xf < *(uint *)(param_1 + 0xc0)) {
    _free(*(void **)(param_1 + 0xac));
  }
  *(undefined4 *)(param_1 + 0xc0) = 0xf;
  this = (ios_base *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_67406480((int)this);
  *(undefined ***)this = &PTR_FUN_674166ac;
  std::ios_base::~ios_base(this);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_67404bf0(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = pvStack_c;
  return;
}



/* ---- FUN_67406680 @ 67406680 size=892 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_67406680(void *this,int param_1,char *param_2,char *param_3)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  char *lpOutputString;
  _SYSTEMTIME local_c84;
  void *local_c74;
  int local_c70;
  undefined4 local_c6c;
  undefined1 auStack_c5e [22];
  undefined1 local_c48 [28];
  void *local_c2c [4];
  undefined4 uStack_c1c;
  uint local_c18;
  void *local_c10 [4];
  undefined4 uStack_c00;
  uint uStack_bfc;
  void *pvStack_bf4;
  undefined4 uStack_be4;
  uint uStack_be0;
  char acStack_bdc [972];
  char local_810 [52];
  char acStack_7dc [972];
  char local_410 [1024];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414b4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_6741b534;
  ExceptionList = &pvStack_c;
  local_c74 = this;
  FUN_67401ad0(&local_c6c,(undefined4 *)((int)this + 0xe0));
  local_4 = 0;
  GetLocalTime(&local_c84);
  local_c70 = *(int *)((int)this + 8);
  if (local_c70 != *(int *)((int)this + 0xc)) {
    pcVar4 = (char *)(local_c70 + 4);
    do {
      if (*(uint *)(pcVar4 + 0x14) < 0x10) {
        pcVar3 = pcVar4;
      }
      else {
        pcVar3 = *(char **)pcVar4;
      }
      iVar1 = __stricmp(pcVar3,"Console");
      if (iVar1 == 0) {
        pvVar2 = FUN_67406210(auStack_c5e + -6,param_1);
        if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
          pcVar3 = (char *)((int)pvVar2 + 4);
        }
        else {
          pcVar3 = *(char **)((int)pvVar2 + 4);
        }
        __snprintf((char *)local_c10,0x400,"[%d/%02d/%02d %02d:%02d:%02d.%03d][%s] %s - %s\n",
                   (uint)local_c84.wYear,(uint)local_c84.wMonth,(uint)local_c84.wDay,
                   (uint)local_c84.wHour,(uint)local_c84.wMinute,(uint)local_c84.wSecond,
                   (uint)local_c84.wMilliseconds,param_2,pcVar3,param_3);
        if (0xf < local_c18) {
          _free(local_c2c[0]);
        }
        local_c18 = 0xf;
        uStack_c1c = 0;
        local_c2c[0] = (void *)((uint)local_c2c[0] & 0xffffff00);
        local_c6c = 0x674067c6;
        FUN_67404300(&DAT_6741dea0,acStack_bdc);
      }
      else {
        if (*(uint *)(pcVar4 + 0x14) < 0x10) {
          pcVar3 = pcVar4;
        }
        else {
          pcVar3 = *(char **)pcVar4;
        }
        iVar1 = __stricmp(pcVar3,"File");
        if (iVar1 == 0) {
          if (*(int *)((int)this + 0x70) == 0) {
            FUN_67405860((int)this);
          }
          if (*(int *)(*(int *)(*(int *)((int)this + 0x14) + 4) + 0x1c + (int)local_c74) == 0) {
            pvVar2 = FUN_67406210(local_c48,param_1);
            if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
              pcVar3 = (char *)((int)pvVar2 + 4);
            }
            else {
              pcVar3 = *(char **)((int)pvVar2 + 4);
            }
            __snprintf(local_810,0x400,"[%d/%02d/%02d %02d:%02d:%02d.%03d][%s] %s - %s\n",
                       (uint)local_c84.wYear,(uint)local_c84.wMonth,(uint)local_c84.wDay,
                       (uint)local_c84.wHour,(uint)local_c84.wMinute,(uint)local_c84.wSecond,
                       (uint)local_c84.wMilliseconds,param_2,pcVar3,param_3);
            if (0xf < uStack_bfc) {
              _free(local_c10[0]);
            }
            uStack_bfc = 0xf;
            uStack_c00 = 0;
            local_c10[0] = (void *)((uint)local_c10[0] & 0xffffff00);
            local_c6c = 0x674068c4;
            FUN_67404300((int *)((int)this + 0x14),acStack_7dc);
            FUN_674039d0((int *)((int)this + 0x14));
          }
          this = local_c74;
        }
        else {
          if (*(uint *)(pcVar4 + 0x14) < 0x10) {
            pcVar3 = pcVar4;
          }
          else {
            pcVar3 = *(char **)pcVar4;
          }
          iVar1 = __stricmp(pcVar3,"OutputDebugString");
          if (iVar1 == 0) {
            pvVar2 = FUN_67406210(local_c2c,param_1);
            if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
              pcVar3 = (char *)((int)pvVar2 + 4);
            }
            else {
              pcVar3 = *(char **)((int)pvVar2 + 4);
            }
            lpOutputString = param_3;
            __snprintf(local_410,0x400,"[%d/%02d/%02d %02d:%02d:%02d.%03d][%s] %s - %s\n",
                       (uint)local_c84.wYear,(uint)local_c84.wMonth,(uint)local_c84.wDay,
                       (uint)local_c84.wHour,(uint)local_c84.wMinute,(uint)local_c84.wSecond,
                       (uint)local_c84.wMilliseconds,param_2,pcVar3,param_3);
            if (0xf < uStack_be0) {
              _free(pvStack_bf4);
            }
            uStack_be0 = 0xf;
            uStack_be4 = 0;
            pvStack_bf4 = (void *)((uint)pvStack_bf4 & 0xffffff00);
            OutputDebugStringA(lpOutputString);
          }
        }
      }
      local_c70 = local_c70 + 0x1c;
      pcVar4 = pcVar4 + 0x1c;
    } while (local_c70 != *(int *)((int)this + 0xc));
  }
  local_4 = 0xffffffff;
  FUN_67401af0(&local_c6c);
  ExceptionList = pvStack_c;
  return;
}



/* ---- FUN_67406a00 @ 67406a00 size=892 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_67406a00(void *this,int param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  wchar_t *lpOutputString;
  _SYSTEMTIME local_c84;
  void *local_c74;
  int local_c70;
  undefined4 local_c6c;
  undefined1 auStack_c5e [22];
  undefined1 local_c48 [28];
  void *local_c2c [4];
  undefined4 uStack_c1c;
  uint local_c18;
  void *local_c10 [4];
  undefined4 uStack_c00;
  uint uStack_bfc;
  void *pvStack_bf4;
  undefined4 uStack_be4;
  uint uStack_be0;
  char acStack_bdc [972];
  char local_810 [52];
  char acStack_7dc [972];
  char local_410 [1024];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_67414b4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_6741b534;
  ExceptionList = &pvStack_c;
  local_c74 = this;
  FUN_67401ad0(&local_c6c,(undefined4 *)((int)this + 0xe0));
  local_4 = 0;
  GetLocalTime(&local_c84);
  local_c70 = *(int *)((int)this + 8);
  if (local_c70 != *(int *)((int)this + 0xc)) {
    pcVar4 = (char *)(local_c70 + 4);
    do {
      if (*(uint *)(pcVar4 + 0x14) < 0x10) {
        pcVar3 = pcVar4;
      }
      else {
        pcVar3 = *(char **)pcVar4;
      }
      iVar1 = __stricmp(pcVar3,"Console");
      if (iVar1 == 0) {
        pvVar2 = FUN_67406210(auStack_c5e + -6,param_1);
        if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
          pcVar3 = (char *)((int)pvVar2 + 4);
        }
        else {
          pcVar3 = *(char **)((int)pvVar2 + 4);
        }
        __snprintf((char *)local_c10,0x400,"[%d/%02d/%02d %02d:%02d:%02d.%03d][%S] %s - %S\n",
                   (uint)local_c84.wYear,(uint)local_c84.wMonth,(uint)local_c84.wDay,
                   (uint)local_c84.wHour,(uint)local_c84.wMinute,(uint)local_c84.wSecond,
                   (uint)local_c84.wMilliseconds,param_2,pcVar3,param_3);
        if (0xf < local_c18) {
          _free(local_c2c[0]);
        }
        local_c18 = 0xf;
        uStack_c1c = 0;
        local_c2c[0] = (void *)((uint)local_c2c[0] & 0xffffff00);
        local_c6c = 0x67406b46;
        FUN_67404300(&DAT_6741dea0,acStack_bdc);
      }
      else {
        if (*(uint *)(pcVar4 + 0x14) < 0x10) {
          pcVar3 = pcVar4;
        }
        else {
          pcVar3 = *(char **)pcVar4;
        }
        iVar1 = __stricmp(pcVar3,"File");
        if (iVar1 == 0) {
          if (*(int *)((int)this + 0x70) == 0) {
            FUN_67405860((int)this);
          }
          if (*(int *)(*(int *)(*(int *)((int)this + 0x14) + 4) + 0x1c + (int)local_c74) == 0) {
            pvVar2 = FUN_67406210(local_c48,param_1);
            if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
              pcVar3 = (char *)((int)pvVar2 + 4);
            }
            else {
              pcVar3 = *(char **)((int)pvVar2 + 4);
            }
            __snprintf(local_810,0x400,"[%d/%02d/%02d %02d:%02d:%02d.%03d][%S] %s - %S\n",
                       (uint)local_c84.wYear,(uint)local_c84.wMonth,(uint)local_c84.wDay,
                       (uint)local_c84.wHour,(uint)local_c84.wMinute,(uint)local_c84.wSecond,
                       (uint)local_c84.wMilliseconds,param_2,pcVar3,param_3);
            if (0xf < uStack_bfc) {
              _free(local_c10[0]);
            }
            uStack_bfc = 0xf;
            uStack_c00 = 0;
            local_c10[0] = (void *)((uint)local_c10[0] & 0xffffff00);
            local_c6c = 0x67406c44;
            FUN_67404300((int *)((int)this + 0x14),acStack_7dc);
            FUN_674039d0((int *)((int)this + 0x14));
          }
          this = local_c74;
        }
        else {
          if (*(uint *)(pcVar4 + 0x14) < 0x10) {
            pcVar3 = pcVar4;
          }
          else {
            pcVar3 = *(char **)pcVar4;
          }
          iVar1 = __stricmp(pcVar3,"OutputDebugString");
          if (iVar1 == 0) {
            pvVar2 = FUN_67406210(local_c2c,param_1);
            if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
              pcVar3 = (char *)((int)pvVar2 + 4);
            }
            else {
              pcVar3 = *(char **)((int)pvVar2 + 4);
            }
            lpOutputString = param_3;
            __snprintf(local_410,0x400,"[%d/%02d/%02d %02d:%02d:%02d.%03d][%S] %s - %S\n",
                       (uint)local_c84.wYear,(uint)local_c84.wMonth,(uint)local_c84.wDay,
                       (uint)local_c84.wHour,(uint)local_c84.wMinute,(uint)local_c84.wSecond,
                       (uint)local_c84.wMilliseconds,param_2,pcVar3,param_3);
            if (0xf < uStack_be0) {
              _free(pvStack_bf4);
            }
            uStack_be0 = 0xf;
            uStack_be4 = 0;
            pvStack_bf4 = (void *)((uint)pvStack_bf4 & 0xffffff00);
            OutputDebugStringA((LPCSTR)lpOutputString);
          }
        }
      }
      local_c70 = local_c70 + 0x1c;
      pcVar4 = pcVar4 + 0x1c;
    } while (local_c70 != *(int *)((int)this + 0xc));
  }
  local_4 = 0xffffffff;
  FUN_67401af0(&local_c6c);
  ExceptionList = pvStack_c;
  return;
}



/* ---- FUN_67406db0 @ 67406db0 size=43 ---- */

void * FUN_67406db0(void *param_1,int param_2,void *param_3)

{
  FUN_67405f40(param_1,param_2,param_3);
  return (void *)(param_2 * 0x1c + (int)param_1);
}



/* ---- FUN_67406de0 @ 67406de0 size=756 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_67406de0(void *this,void *param_1,uint param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined1 auStack_3e [10];
  undefined1 local_34 [4];
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_67414b68;
  local_10 = ExceptionList;
  local_14 = auStack_3e + -0xe;
  local_18 = DAT_6741b534;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  ExceptionList = &local_10;
  FUN_674013d0(local_34,param_3,0,0xffffffff);
  iVar1 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar1) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (0x9249249U - iVar1 < param_2) {
      FUN_674056e0();
      uVar5 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x9249249 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar5 < iVar1 + param_2) {
        iVar1 = FUN_674035f0((int)this);
        uVar5 = iVar1 + param_2;
      }
      pvVar2 = operator_new(uVar5 * 0x1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      pvVar3 = FUN_674057c0(*(void **)((int)this + 4),param_1,pvVar2);
      FUN_67405f40(pvVar3,param_2,local_34);
      FUN_674057c0(param_1,*(void **)((int)this + 8),(void *)((int)pvVar3 + param_2 * 0x1c));
      iVar1 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_67404bf0(*(int *)((int)this + 4),*(int *)((int)this + 8));
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar5 * 0x1c + (int)pvVar2);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar1) * 0x1c + (int)pvVar2);
      *(void **)((int)this + 4) = pvVar2;
    }
    else {
      pvVar2 = *(void **)((int)this + 8);
      if ((uint)(((int)pvVar2 - (int)param_1) / 0x1c) < param_2) {
        FUN_674057c0(param_1,pvVar2,(void *)(param_2 * 0x1c + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_67406db0(*(void **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,local_34);
        iVar1 = *(int *)((int)this + 8) + param_2 * 0x1c;
        *(int *)((int)this + 8) = iVar1;
        local_8 = 0;
        FUN_67405750(param_1,(void *)(iVar1 + param_2 * -0x1c),local_34);
      }
      else {
        pvVar3 = (void *)((int)pvVar2 + param_2 * -0x1c);
        pvVar4 = FUN_674057c0(pvVar3,pvVar2,pvVar2);
        *(void **)((int)this + 8) = pvVar4;
        FUN_67405780(param_1,pvVar3,pvVar2);
        FUN_67405750(param_1,(void *)(param_2 * 0x1c + (int)param_1),local_34);
      }
    }
  }
  if (0xf < local_1c) {
    _free(local_30);
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch@67406fd1 @ 67406fd1 size=34 ---- */

void Catch_67406fd1(void)

{
  void *_Memory;
  int unaff_EBP;
  
  _Memory = *(void **)(unaff_EBP + -0x38);
  FUN_674056c0((int)_Memory,*(int *)(unaff_EBP + -0x34));
  _free(_Memory);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}



/* ---- Catch@6740708d @ 6740708d size=35 ---- */

void Catch_6740708d(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0xc) * 0x1c;
  FUN_674056c0(iVar1 + *(int *)(unaff_EBP + 8),*(int *)(*(int *)(unaff_EBP + -0x3c) + 8) + iVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}



/* ---- FUN_67407120 @ 67407120 size=106 ---- */

void __thiscall FUN_67407120(void *this,int *param_1,void *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x1c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x1c;
      goto LAB_67407169;
    }
  }
  iVar1 = 0;
LAB_67407169:
  FUN_67406de0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)((int)this + 4);
  return;
}



/* ---- FUN_674071c0 @ 674071c0 size=136 ---- */

void __thiscall FUN_674071c0(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) ||
     ((uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1c) <=
      (uint)((*(int *)((int)this + 8) - iVar1) / 0x1c))) {
    FUN_67407120(this,(int *)&param_1,*(void **)((int)this + 8),param_1);
    return;
  }
  pvVar2 = *(void **)((int)this + 8);
  FUN_67405f40(pvVar2,1,param_1);
  *(int *)((int)this + 8) = (int)pvVar2 + 0x1c;
  return;
}



/* ---- FUN_67407250 @ 67407250 size=1080 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * __fastcall FUN_67407250(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int param3;
  int iVar7;
  LPCSTR pCVar8;
  undefined4 *this;
  undefined1 local_554 [4];
  void *local_550;
  undefined4 local_540;
  uint local_53c;
  undefined4 *local_538;
  void *local_534;
  undefined1 local_530 [4];
  void *local_52c;
  uint local_51c;
  uint local_518;
  CHAR local_514 [16];
  CHAR aCStack_504 [496];
  CHAR local_314 [260];
  char local_210 [16];
  CHAR aCStack_200 [496];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_67414c14;
  local_c = ExceptionList;
  local_10 = DAT_6741b534;
  ExceptionList = &local_c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_4 = 0;
  local_538 = param_1;
  FUN_67406380(param_1 + 5,1);
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  local_4._0_1_ = 3;
  FUN_67401a90(param_1 + 0x38);
  local_4._0_1_ = 4;
  GetModuleFileNameA((HMODULE)0x0,local_314,0x104);
  pcVar3 = local_314;
  local_518 = 0xf;
  local_51c = 0;
  local_52c = (void *)((uint)local_52c & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_67402430(local_530,(undefined4 *)local_314,(int)pcVar3 - (int)(local_314 + 1));
  local_4._0_1_ = 5;
  uVar4 = FUN_67401010(local_530,"\\",0xffffffff,1);
  if (uVar4 != 0xffffffff) {
    uVar4 = uVar4 + 1;
    if (local_51c < uVar4) {
      FUN_674014c0(local_530,uVar4 - local_51c);
    }
    else {
      FUN_67401110(local_530,uVar4,0xffffffff);
    }
    pvVar5 = FUN_67405e90(local_554,local_530,PTR_s_XDebug_ini_6741b0fc);
    local_4._0_1_ = 6;
    FUN_674013d0(param_1 + 0x2a,pvVar5,0,0xffffffff);
    local_4._0_1_ = 5;
    if (0xf < local_53c) {
      _free(local_550);
    }
  }
  if ((uint)param_1[0x30] < 0x10) {
    pCVar8 = (LPCSTR)(param_1 + 0x2b);
  }
  else {
    pCVar8 = (LPCSTR)param_1[0x2b];
  }
  GetPrivateProfileStringA("XLog","LogLevel","Error",local_514,0x200,pCVar8);
  pcVar3 = local_514;
  local_53c = 0xf;
  local_540 = 0;
  local_550 = (void *)((uint)local_550 & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_67402430(local_554,(undefined4 *)local_514,(int)pcVar3 - (int)(local_514 + 1));
  local_4._0_1_ = 7;
  uVar6 = FUN_67405bd0((int)local_554);
  *local_538 = uVar6;
  local_4._0_1_ = 5;
  if (0xf < local_53c) {
    _free(local_550);
  }
  param3 = 0;
  do {
    param3 = param3 + 1;
    __snprintf(local_210,0x200,"DeviceType%d",param3);
    if ((uint)param_1[0x30] < 0x10) {
      pCVar8 = (LPCSTR)(param_1 + 0x2b);
    }
    else {
      pCVar8 = (LPCSTR)param_1[0x2b];
    }
    GetPrivateProfileStringA("XLog",aCStack_200,"Unknown Type",aCStack_504,0x200,pCVar8);
    iVar7 = __stricmp("Unknown Type",local_514);
    if (iVar7 != 0) {
      pcVar3 = local_514;
      local_53c = 0xf;
      local_540 = 0;
      local_550 = (void *)((uint)local_550 & 0xffffff00);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_67402430(local_554,(undefined4 *)local_514,(int)pcVar3 - (int)(local_514 + 1));
      local_4._0_1_ = 8;
      FUN_674071c0(param_1 + 1,local_554);
      local_4._0_1_ = 5;
      if (0xf < local_53c) {
        _free(local_550);
      }
      local_53c = 0xf;
      local_540 = 0;
      local_550 = (void *)((uint)local_550 & 0xffffff00);
    }
  } while (param3 < 3);
  if ((uint)param_1[0x30] < 0x10) {
    pCVar8 = (LPCSTR)(param_1 + 0x2b);
  }
  else {
    pCVar8 = (LPCSTR)param_1[0x2b];
  }
  GetPrivateProfileStringA("XLog","NamespaceFilter","",local_514,0x200,pCVar8);
  puVar2 = local_538;
  pcVar3 = local_514;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_67402430(local_538 + 0x31,(undefined4 *)local_514,(int)pcVar3 - (int)(local_514 + 1));
  if ((param_1[2] == 0) ||
     (local_534 = (void *)((int)(param_1[3] - param_1[2]) / 0x1c), local_534 == (void *)0x0)) {
    local_53c = 0xf;
    local_540 = 0;
    local_550 = (void *)((uint)local_550 & 0xffffff00);
    FUN_67402430(local_554,(undefined4 *)&DAT_67416468,4);
    local_4._0_1_ = 9;
    FUN_674071c0(param_1 + 1,local_554);
    local_4._0_1_ = 5;
    if (0xf < local_53c) {
      _free(local_550);
    }
  }
  local_534 = operator_new(0x4c);
  local_4._0_1_ = 10;
  if (local_534 == (void *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = FUN_674015c0(local_534,param_1 + 0x2a,&LAB_67406200,puVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  puVar2[0x3f] = this;
  FUN_67401dd0(this,'\0');
  if (0xf < local_518) {
    _free(local_52c);
  }
  ExceptionList = local_c;
  return puVar2;
}



/* ---- FUN_67407690 @ 67407690 size=196 ---- */

void FUN_67407690(void)

{
  undefined4 *puVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_67414c41;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_6741dd6c & 1) == 0) {
    DAT_6741dd6c = DAT_6741dd6c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_67401a90((undefined4 *)&DAT_6741dd50);
    _atexit((_func_4879 *)&LAB_67414f60);
  }
  local_4 = 0xffffffff;
  FUN_67401ad0(local_14,(undefined4 *)&DAT_6741dd50);
  local_4 = 1;
  if (DAT_6741dd4c == (undefined4 *)0x0) {
    puVar1 = operator_new(0x100);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_6741dd4c = (undefined4 *)0x0;
    }
    else {
      DAT_6741dd4c = FUN_67407250(puVar1);
    }
    _atexit((_func_4879 *)&LAB_67407190);
  }
  local_4 = 0xffffffff;
  FUN_67401af0(local_14);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_67407760 @ 67407760 size=20 ---- */

int FUN_67407760(void)

{
  if (DAT_6741dd4c == 0) {
    FUN_67407690();
  }
  return DAT_6741dd4c;
}



/* ---- operator_new @ 67407774 size=36 ---- */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  while( true ) {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      FUN_6740850c();
    }
  }
  return pvVar2;
}



/* ---- FUN_67407798 @ 67407798 size=28 ---- */

exception * __thiscall FUN_67407798(void *this,byte param_1)

{
  FUN_674077b4(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_674077b4 @ 674077b4 size=11 ---- */

void __fastcall FUN_674077b4(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_67416554;
  FUN_67402610(param_1);
  return;
}



/* ---- FUN_674077bf @ 674077bf size=63 ---- */

void FUN_674077bf(void)

{
  int unaff_EBP;
  
  FUN_6740a480();
  FUN_67402550((void *)(unaff_EBP + -0x28),"invalid string position");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_67402590((void *)(unaff_EBP + -0x50),unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_67416554;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_67419930);
}



/* ---- FUN_67407817 @ 67407817 size=63 ---- */

void FUN_67407817(void)

{
  int unaff_EBP;
  
  FUN_6740a480();
  FUN_67402550((void *)(unaff_EBP + -0x28),"string too long");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_67402590((void *)(unaff_EBP + -0x50),unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_67416548;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_674192a8);
}



/* ---- __Tolower_lk @ 67407857 size=233 ---- */

/* Library Function - Single Match
    __Tolower_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __Tolower_lk(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  UINT _CchDest;
  int iVar3;
  undefined *puVar4;
  LPCSTR _LpSrcStr;
  BOOL unaff_EDI;
  _locale_t local_10;
  byte local_c;
  byte local_8;
  undefined1 local_7;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar2 = ____lc_handle_func();
    local_10 = (_locale_t)puVar2[2];
    _CchDest = ____lc_codepage_func();
  }
  else {
    local_10 = (_locale_t)*param_2;
    _CchDest = param_2[1];
  }
  if (local_10 == (_locale_t)0x0) {
    if ((int)param_1 < 0x41) {
      return param_1;
    }
    if ((int)param_1 < 0x5b) {
      return param_1 + 0x20;
    }
    return param_1;
  }
  if (param_1 < 0x100) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = _isupper(param_1);
      if (iVar3 == 0) {
        return param_1;
      }
    }
    else if ((*(byte *)(puVar1[2] + param_1 * 2) & 1) == 0) {
      return param_1;
    }
  }
  puVar4 = FUN_6740a85b();
  puVar1 = param_2;
  local_c = (byte)(param_1 >> 8);
  if ((puVar4[(uint)local_c * 2 + 1] & 0x80) == 0) {
    param_2._0_2_ = (ushort)(byte)param_1;
    _LpSrcStr = (LPCSTR)0x1;
  }
  else {
    param_2._0_2_ = CONCAT11((byte)param_1,local_c);
    param_2._3_1_ = SUB41(puVar1,3);
    param_2._0_3_ = (uint3)(ushort)param_2;
    _LpSrcStr = (LPCSTR)0x2;
  }
  iVar3 = ___crtLCMapStringA(local_10,(LPCWSTR)0x100,(DWORD)&param_2,_LpSrcStr,(int)&local_8,
                             (LPSTR)0x3,_CchDest,1,unaff_EDI);
  if (iVar3 == 0) {
    return param_1;
  }
  if (iVar3 == 1) {
    return (uint)local_8;
  }
  return (uint)CONCAT11(local_8,local_7);
}



/* ---- __Getctype @ 67407940 size=174 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Getctype
   
   Library: Visual Studio 2003 Release */

_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__)

{
  uint uVar1;
  LONG *pLVar2;
  int iVar3;
  uint *puVar4;
  short *psVar5;
  undefined *_Src;
  bool bVar6;
  size_t _Size;
  undefined *local_28;
  wchar_t *local_24;
  
  pLVar2 = (LONG *)FUN_6740acb5();
  InterlockedIncrement(pLVar2);
  iVar3 = FUN_6740acaf();
  if (iVar3 != 0) {
    pLVar2 = (LONG *)FUN_6740acb5();
    InterlockedDecrement(pLVar2);
    __lock(0xc);
  }
  puVar4 = ____lc_handle_func();
  uVar1 = puVar4[1];
  psVar5 = (short *)____lc_codepage_func();
  local_28 = _malloc(0x200);
  bVar6 = local_28 == (undefined *)0x0;
  if (bVar6) {
    local_28 = FUN_6740a85b();
  }
  else {
    _Size = 0x200;
    _Src = FUN_6740a85b();
    _memcpy(local_28,_Src,_Size);
  }
  local_24 = (wchar_t *)(uint)!bVar6;
  FUN_674079ee();
  __return_storage_ptr__->_Page = uVar1;
  __return_storage_ptr__->_Table = psVar5;
  __return_storage_ptr__->_Delfl = (int)local_28;
  __return_storage_ptr__->_LocaleName = local_24;
  return __return_storage_ptr__;
}



/* ---- FUN_674079ee @ 674079ee size=29 ---- */

void FUN_674079ee(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_6740acb5();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_6740abc9(0xc);
  }
  return;
}



/* ---- __Tolower @ 67407a0b size=143 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Tolower
   
   Library: Visual Studio 2003 Release */

int __cdecl __Tolower(int param_1,_Ctypevec *param_2)

{
  uint *puVar1;
  uint uVar2;
  LONG *pLVar3;
  int iVar4;
  
  if (param_2 == (_Ctypevec *)0x0) {
    puVar1 = ____lc_handle_func();
    uVar2 = puVar1[2];
  }
  else {
    uVar2 = param_2->_Page;
  }
  if (uVar2 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    pLVar3 = (LONG *)FUN_6740acb5();
    InterlockedIncrement(pLVar3);
    iVar4 = FUN_6740acaf();
    if (iVar4 != 0) {
      pLVar3 = (LONG *)FUN_6740acb5();
      InterlockedDecrement(pLVar3);
      __lock(0xc);
    }
    param_1 = __Tolower_lk(param_1,&param_2->_Page);
    FUN_67407a9a();
  }
  return param_1;
}



/* ---- FUN_67407a9a @ 67407a9a size=29 ---- */

void FUN_67407a9a(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_6740acb5();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_6740abc9(0xc);
  }
  return;
}



/* ---- _Init_locks @ 67407ab7 size=47 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&DAT_6741b234);
  if (LVar1 == 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_6741dd70;
    do {
      FUN_6740856d(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x6741ddd0);
  }
  return this;
}



/* ---- _Lockit @ 67407b0f size=35 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Lockit::_Lockit(int)
   
   Library: Visual Studio 2003 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(uint *)this = param_1 & 3U;
  FUN_67408583((LPCRITICAL_SECTION)(&DAT_6741dd70 + (param_1 & 3U) * 0x18));
  return this;
}



/* ---- FUN_67407b32 @ 67407b32 size=20 ---- */

void __fastcall FUN_67407b32(int *param_1)

{
  FUN_6740858e((LPCRITICAL_SECTION)(&DAT_6741dd70 + *param_1 * 0x18));
  return;
}



/* ---- ~_Fac_node @ 67407b46 size=21 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Fac_node::~_Fac_node(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_67403480(*(uint *)(this + 4));
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}



/* ---- __Deletegloballocale @ 67407b5b size=28 ---- */

/* Library Function - Single Match
    __Deletegloballocale
   
   Library: Visual Studio 2003 Release */

void __cdecl __Deletegloballocale(uint *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_67403480(*param_1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



/* ---- tidy_global @ 67407b77 size=35 ---- */

/* Library Function - Single Match
    _tidy_global
   
   Library: Visual Studio 2003 Release */

void __cdecl tidy_global(void)

{
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  __Deletegloballocale(&DAT_6741ddd8);
  FUN_67407b32((int *)local_8);
  return;
}



/* ---- __Setgloballocale @ 67407b9a size=37 ---- */

/* Library Function - Single Match
    __Setgloballocale
   
   Library: Visual Studio 2003 Release */

void __cdecl __Setgloballocale(undefined4 param_1)

{
  if (DAT_6741ddfc == '\0') {
    DAT_6741ddfc = '\x01';
    __Atexit(tidy_global);
  }
  DAT_6741ddd8 = param_1;
  return;
}



/* ---- _Getfacet @ 67407bbf size=53 ---- */

/* Library Function - Single Match
    public: class std::locale::facet const * __thiscall std::locale::_Getfacet(unsigned int)const 
   
   Library: Visual Studio 2003 Release */

facet * __thiscall std::locale::_Getfacet(locale *this,uint param_1)

{
  int iVar1;
  facet *pfVar2;
  
  iVar1 = *(int *)this;
  if (param_1 < *(uint *)(iVar1 + 0xc)) {
    pfVar2 = *(facet **)(*(int *)(iVar1 + 8) + param_1 * 4);
  }
  else {
    pfVar2 = (facet *)0x0;
  }
  if ((pfVar2 == (facet *)0x0) && (*(char *)(iVar1 + 0x14) != '\0')) {
    if (param_1 < *(uint *)(DAT_6741ddd8 + 0xc)) {
      pfVar2 = *(facet **)(*(int *)(DAT_6741ddd8 + 8) + param_1 * 4);
    }
    else {
      pfVar2 = (facet *)0x0;
    }
  }
  return pfVar2;
}



/* ---- __Fac_tidy @ 67407bf4 size=67 ---- */

/* Library Function - Single Match
    __Fac_tidy
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __Fac_tidy(void)

{
  _Fac_node *this;
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  this = DAT_6741ddd4;
  while (this != (_Fac_node *)0x0) {
    DAT_6741ddd4 = *(_Fac_node **)this;
    std::_Fac_node::~_Fac_node(this);
    _free(this);
    this = DAT_6741ddd4;
  }
  DAT_6741ddd4 = this;
  FUN_67407b32((int *)local_8);
  return;
}



/* ---- _Register @ 67407c37 size=57 ---- */

/* Library Function - Single Match
    public: void __thiscall std::locale::facet::_Register(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::locale::facet::_Register(facet *this)

{
  int *piVar1;
  
  if (DAT_6741ddd4 == (int *)0x0) {
    __Atexit(__Fac_tidy);
  }
  piVar1 = operator_new(8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)DAT_6741ddd4;
    piVar1[1] = (int)this;
  }
  DAT_6741ddd4 = piVar1;
  return;
}



/* ---- ~_Locimp @ 67407c70 size=136 ---- */

/* Library Function - Single Match
    protected: virtual __thiscall std::locale::_Locimp::~_Locimp(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_6740a480();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &DAT_674165b4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  _Lockit::_Lockit((_Lockit *)(unaff_EBP + -0x10),0);
  iVar3 = extraout_ECX[3];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    uVar1 = *(uint *)(extraout_ECX[2] + iVar3 * 4);
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)FUN_67403480(uVar1);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  _free((void *)extraout_ECX[2]);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_67407b32((int *)(unaff_EBP + -0x10));
  FUN_674010b0(extraout_ECX + 6,'\x01',0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_674165ac;
  return;
}



/* ---- ~_Locinfo @ 67407cf8 size=87 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Locinfo::~_Locinfo(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::_Locinfo::~_Locinfo(_Locinfo *this)

{
  _Locinfo *_Locale;
  
  if (*(int *)(this + 0x50) != 0) {
    if (*(uint *)(this + 0x54) < 0x10) {
      _Locale = this + 0x40;
    }
    else {
      _Locale = *(_Locinfo **)(this + 0x40);
    }
    _setlocale(0,(char *)_Locale);
  }
  FUN_674010b0(this + 0x58,'\x01',0);
  FUN_674010b0(this + 0x3c,'\x01',0);
  FUN_674010b0(this + 0x20,'\x01',0);
  FUN_674010b0(this + 4,'\x01',0);
  FUN_67407b32((int *)this);
  return;
}



/* ---- std::locale::_Locimp::`scalar_deleting_destructor' @ 67407d4f size=28 ---- */

/* Library Function - Single Match
    protected: virtual void * __thiscall std::locale::_Locimp::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall
std::locale::_Locimp::std__locale___Locimp___scalar_deleting_destructor_(_Locimp *this,uint param_1)

{
  ~_Locimp(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- _Locimp @ 67407d6b size=80 ---- */

/* Library Function - Single Match
    private: __thiscall std::locale::_Locimp::_Locimp(bool)
   
   Library: Visual Studio 2003 Release */

undefined4 * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1)

{
  undefined1 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_6740a480();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  uVar1 = *(undefined1 *)(unaff_EBP + 8);
  *extraout_ECX = &DAT_674165b4;
  *(undefined1 *)(extraout_ECX + 5) = uVar1;
  FUN_67402550(extraout_ECX + 6,"*");
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



/* ---- _Locinfo @ 67407dbb size=138 ---- */

/* Library Function - Single Match
    public: __thiscall std::_Locinfo::_Locinfo(char const *)
   
   Library: Visual Studio 2003 Release */

_Lockit * __thiscall std::_Locinfo::_Locinfo(_Locinfo *this,char *param_1)

{
  char *pcVar1;
  _Lockit *this_00;
  int unaff_EBP;
  
  FUN_6740a480();
  *(_Lockit **)(unaff_EBP + -0x10) = this_00;
  _Lockit::_Lockit(this_00,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_67401190((int)(this_00 + 4));
  FUN_67401190((int)(this_00 + 0x20));
  FUN_67401190((int)(this_00 + 0x3c));
  FUN_67401190((int)(this_00 + 0x58));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcVar1 = _setlocale(0,(char *)0x0);
  FUN_67402520(this_00 + 0x3c,pcVar1);
  if (*(int *)(unaff_EBP + 8) != 0) {
    pcVar1 = _setlocale(0,*(char **)(unaff_EBP + 8));
    if (pcVar1 != (char *)0x0) goto LAB_67407e29;
  }
  pcVar1 = "*";
LAB_67407e29:
  FUN_67402520(this_00 + 0x58,pcVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}



/* ---- _Init @ 67407e45 size=162 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(void)
   
   Library: Visual Studio 2003 Release */

_Locimp * __cdecl std::locale::_Init(void)

{
  _Locimp *p_Var1;
  int unaff_EBP;
  
  FUN_6740a480();
  p_Var1 = DAT_6741ddd8;
  if (DAT_6741ddd8 == (_Locimp *)0x0) {
    _Lockit::_Lockit((_Lockit *)(unaff_EBP + -0x10),0);
    p_Var1 = DAT_6741ddd8;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (p_Var1 == (_Locimp *)0x0) {
      p_Var1 = operator_new(0x34);
      *(_Locimp **)(unaff_EBP + -0x14) = p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (p_Var1 == (_Locimp *)0x0) {
        p_Var1 = (_Locimp *)0x0;
      }
      else {
        p_Var1 = (_Locimp *)_Locimp::_Locimp(p_Var1,false);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      __Setgloballocale(p_Var1);
      *(undefined4 *)(p_Var1 + 0x10) = 0x3f;
      FUN_67402520(p_Var1 + 0x18,"C");
      DAT_6741dddc = p_Var1;
      FUN_67403450((int)p_Var1);
      _DAT_6741dde4 = DAT_6741dddc;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_67407b32((int *)(unaff_EBP + -0x10));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return p_Var1;
}



/* ---- locale @ 67407ee7 size=25 ---- */

/* Library Function - Single Match
    public: __thiscall std::locale::locale(void)
   
   Library: Visual Studio 2003 Release */

locale * __thiscall std::locale::locale(locale *this)

{
  _Locimp *p_Var1;
  
  p_Var1 = _Init();
  *(_Locimp **)this = p_Var1;
  FUN_67403450(DAT_6741ddd8);
  return this;
}



/* ---- _Callfns @ 67407f00 size=34 ---- */

/* Library Function - Single Match
    private: void __thiscall std::ios_base::_Callfns(enum std::ios_base::event)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,this,puVar1[1]);
  }
  return;
}



/* ---- _Addstd @ 67407f22 size=81 ---- */

/* Library Function - Single Match
    public: void __thiscall std::ios_base::_Addstd(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::_Addstd(ios_base *this)

{
  ios_base *piVar1;
  ios_base *local_8;
  
  local_8 = this;
  _Lockit::_Lockit((_Lockit *)&local_8,2);
  *(undefined4 *)(this + 4) = 1;
  do {
    piVar1 = *(ios_base **)(*(int *)(this + 4) * 4 + 0x6741de0c);
    if ((piVar1 == (ios_base *)0x0) || (piVar1 == this)) break;
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
  } while (*(uint *)(this + 4) < 8);
  *(ios_base **)(*(int *)(this + 4) * 4 + 0x6741de0c) = this;
  (&DAT_6741de34)[*(int *)(this + 4)] = (&DAT_6741de34)[*(int *)(this + 4)] + '\x01';
  FUN_67407b32((int *)&local_8);
  return;
}



/* ---- _Tidy @ 67407f73 size=66 ---- */

/* Library Function - Single Match
    private: void __thiscall std::ios_base::_Tidy(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::_Tidy(ios_base *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  _Callfns(this,0);
  puVar2 = *(undefined4 **)(this + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    _free(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  puVar2 = *(undefined4 **)(this + 0x20);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    _free(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}



/* ---- ~ios_base @ 67407fb5 size=64 ---- */

/* Library Function - Single Match
    public: virtual __thiscall std::ios_base::~ios_base(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  uint *_Memory;
  
  *(undefined ***)this = &PTR_FUN_674165c4;
  if ((*(int *)(this + 4) == 0) ||
     ((&DAT_6741de34)[*(int *)(this + 4)] = (&DAT_6741de34)[*(int *)(this + 4)] + -1,
     (char)(&DAT_6741de34)[*(int *)(this + 4)] < '\x01')) {
    _Tidy(this);
    _Memory = *(uint **)(this + 0x24);
    if (_Memory != (uint *)0x0) {
      FUN_674034c0(_Memory);
      _free(_Memory);
    }
  }
  return;
}



/* ---- FUN_67407ff5 @ 67407ff5 size=29 ---- */

void __fastcall FUN_67407ff5(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_674165cc;
  FUN_674010b0(param_1 + 0xc,'\x01',0);
  exception::~exception(param_1);
  return;
}



/* ---- FUN_67408020 @ 67408020 size=28 ---- */

exception * __thiscall FUN_67408020(void *this,byte param_1)

{
  FUN_67407ff5(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- runtime_error @ 6740803c size=60 ---- */

/* Library Function - Single Match
    public: __thiscall std::runtime_error::runtime_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall
std::runtime_error::runtime_error
          (runtime_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *pvVar1;
  exception *this_00;
  int unaff_EBP;
  
  FUN_6740a480();
  *(exception **)(unaff_EBP + -0x10) = this_00;
  exception::exception(this_00);
  pvVar1 = *(void **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_674165cc;
  FUN_67401590(this_00 + 0xc,pvVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}



/* ---- FUN_67408078 @ 67408078 size=28 ---- */

exception * __thiscall FUN_67408078(void *this,byte param_1)

{
  FUN_67408094(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_67408094 @ 67408094 size=11 ---- */

void __fastcall FUN_67408094(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_674165d8;
  FUN_67407ff5(param_1);
  return;
}



/* ---- clear @ 6740809f size=198 ---- */

/* Library Function - Single Match
    public: void __thiscall std::ios_base::clear(int,bool)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::clear(ios_base *this,int param_1,bool param_2)

{
  uint uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  undefined *puVar3;
  
  FUN_6740a480();
  uVar1 = *(uint *)(unaff_EBP + 8) & 0x17;
  *(uint *)(extraout_ECX + 8) = uVar1;
  uVar1 = *(uint *)(extraout_ECX + 0xc) & uVar1;
  if (uVar1 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
    puVar3 = (undefined *)0x0;
    iVar2 = 0;
    goto LAB_67408152;
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) != 0) {
      FUN_67402550((void *)(unaff_EBP + -0x50),"ios_base::failbit set");
      *(undefined4 *)(unaff_EBP + -4) = 1;
      goto LAB_674080e6;
    }
    FUN_67402550((void *)(unaff_EBP + -0x94),"ios_base::eofbit set");
    *(undefined4 *)(unaff_EBP + -4) = 2;
    runtime_error::runtime_error
              ((runtime_error *)(unaff_EBP + -0x78),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x94));
    *(undefined ***)(unaff_EBP + -0x78) = &PTR_FUN_674165d8;
    iVar2 = unaff_EBP + -0x78;
  }
  else {
    FUN_67402550((void *)(unaff_EBP + -0x50),"ios_base::badbit set");
    *(undefined4 *)(unaff_EBP + -4) = 0;
LAB_674080e6:
    runtime_error::runtime_error
              ((runtime_error *)(unaff_EBP + -0x34),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x50));
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_674165d8;
    iVar2 = unaff_EBP + -0x34;
  }
  puVar3 = &DAT_67419a74;
LAB_67408152:
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(iVar2,puVar3);
}



/* ---- FUN_67408165 @ 67408165 size=67 ---- */

exception * FUN_67408165(void)

{
  exception *peVar1;
  exception *this;
  int unaff_EBP;
  
  FUN_6740a480();
  peVar1 = *(exception **)(unaff_EBP + 8);
  *(exception **)(unaff_EBP + -0x10) = this;
  exception::exception(this,peVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this = &PTR_FUN_674165cc;
  FUN_67401590(this + 0xc,peVar1 + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}



/* ---- _Init @ 674081c0 size=70 ---- */

/* Library Function - Single Match
    protected: void __thiscall std::ios_base::_Init(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::_Init(ios_base *this)

{
  locale *this_00;
  undefined4 uVar1;
  
  this_00 = operator_new(4);
  if (this_00 == (locale *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = locale::locale(this_00);
  }
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x201;
  *(undefined4 *)(this + 0x14) = 6;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  clear(this,0,false);
  return;
}



/* ---- FUN_67408206 @ 67408206 size=24 ---- */

undefined4 * __fastcall FUN_67408206(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  p_Var1 = operator_new(0x18);
  *param_1 = p_Var1;
  FUN_6740856d(p_Var1);
  return param_1;
}



/* ---- FUN_6740821e @ 6740821e size=21 ---- */

void __fastcall FUN_6740821e(undefined4 *param_1)

{
  FUN_67408578((LPCRITICAL_SECTION)*param_1);
  _free((void *)*param_1);
  return;
}



/* ---- FUN_67408233 @ 67408233 size=9 ---- */

void __fastcall FUN_67408233(undefined4 *param_1)

{
  FUN_67408583((LPCRITICAL_SECTION)*param_1);
  return;
}



/* ---- FUN_6740823c @ 6740823c size=9 ---- */

void __fastcall FUN_6740823c(undefined4 *param_1)

{
  FUN_6740858e((LPCRITICAL_SECTION)*param_1);
  return;
}



/* ---- __Toupper_lk @ 67408245 size=224 ---- */

/* Library Function - Single Match
    __Toupper_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __Toupper_lk(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  UINT _CchDest;
  int iVar3;
  undefined *puVar4;
  LPCSTR _LpSrcStr;
  BOOL unaff_EBX;
  _locale_t _Plocinfo;
  bool bVar5;
  byte local_c;
  byte local_8;
  undefined1 local_7;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar2 = ____lc_handle_func();
    _Plocinfo = (_locale_t)puVar2[2];
    _CchDest = ____lc_codepage_func();
  }
  else {
    _Plocinfo = (_locale_t)*param_2;
    _CchDest = param_2[1];
  }
  if (_Plocinfo == (_locale_t)0x0) {
    if ((int)param_1 < 0x61) {
      return param_1;
    }
    if ((int)param_1 < 0x7b) {
      return param_1 - 0x20;
    }
    return param_1;
  }
  if (param_1 < 0x100) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = _islower(param_1);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = (*(byte *)(puVar1[2] + param_1 * 2) & 2) == 0;
    }
    if (bVar5) {
      return param_1;
    }
  }
  puVar4 = FUN_6740a85b();
  puVar1 = param_2;
  local_c = (byte)(param_1 >> 8);
  if ((puVar4[(uint)local_c * 2 + 1] & 0x80) == 0) {
    param_2._0_2_ = (ushort)(byte)param_1;
    _LpSrcStr = (LPCSTR)0x1;
  }
  else {
    param_2._0_2_ = CONCAT11((byte)param_1,local_c);
    param_2._3_1_ = SUB41(puVar1,3);
    param_2._0_3_ = (uint3)(ushort)param_2;
    _LpSrcStr = (LPCSTR)0x2;
  }
  iVar3 = ___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x200,(DWORD)&param_2,_LpSrcStr,(int)&local_8,
                             (LPSTR)0x3,_CchDest,1,unaff_EBX);
  if (iVar3 == 0) {
    return param_1;
  }
  if (iVar3 == 1) {
    return (uint)local_8;
  }
  return (uint)CONCAT11(local_8,local_7);
}



/* ---- __Toupper @ 67408325 size=143 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Toupper
   
   Library: Visual Studio 2003 Release */

int __cdecl __Toupper(int param_1,_Ctypevec *param_2)

{
  uint *puVar1;
  uint uVar2;
  LONG *pLVar3;
  int iVar4;
  
  if (param_2 == (_Ctypevec *)0x0) {
    puVar1 = ____lc_handle_func();
    uVar2 = puVar1[2];
  }
  else {
    uVar2 = param_2->_Page;
  }
  if (uVar2 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
  }
  else {
    pLVar3 = (LONG *)FUN_6740acb5();
    InterlockedIncrement(pLVar3);
    iVar4 = FUN_6740acaf();
    if (iVar4 != 0) {
      pLVar3 = (LONG *)FUN_6740acb5();
      InterlockedDecrement(pLVar3);
      __lock(0xc);
    }
    param_1 = __Toupper_lk(param_1,&param_2->_Page);
    FUN_674083b4();
  }
  return param_1;
}



/* ---- FUN_674083b4 @ 674083b4 size=29 ---- */

void FUN_674083b4(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_6740acb5();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_6740abc9(0xc);
  }
  return;
}



/* ---- thunk_FUN_6740ba67 @ 674083d1 size=5 ---- */

bool thunk_FUN_6740ba67(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return p_Var1->_purecall != (void *)0x0;
}



/* ---- _Fiopen @ 674083d6 size=162 ---- */

/* Library Function - Single Match
    struct _iobuf * __cdecl std::_Fiopen(char const *,int,int)
   
   Library: Visual Studio 2003 Release */

_iobuf * __cdecl std::_Fiopen(char *param_1,int param_2,int param_3)

{
  int iVar1;
  FILE *_File;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2 & 4;
  uVar4 = param_2 & 0x80;
  if ((param_2 & 0x40U) != 0) {
    param_2 = param_2 | 1;
  }
  iVar1 = 0;
  uVar2 = 1;
  do {
    if (uVar2 == (param_2 & 0xffffff3bU)) break;
    uVar2 = (&DAT_67416668)[iVar1];
    iVar1 = iVar1 + 1;
  } while (uVar2 != 0);
  if (*(int *)(&UNK_67416664 + iVar1 * 4) != 0) {
    if (((uVar4 == 0) || ((param_2 & 1U) == 0)) ||
       (_File = _fopen(param_1,"r"), _File == (FILE *)0x0)) {
      _File = _fopen(param_1,*(char **)(iVar1 * 4 + 0x6741b2f8));
      if (_File == (FILE *)0x0) {
        return (_iobuf *)0x0;
      }
      if ((uVar3 == 0) || (iVar1 = _fseek(_File,0,2), iVar1 == 0)) {
        return _File;
      }
    }
    _fclose(_File);
  }
  return (_iobuf *)0x0;
}



/* ---- FUN_674084cd @ 674084cd size=11 ---- */

void __fastcall FUN_674084cd(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_67416770;
  exception::~exception(param_1);
  return;
}



/* ---- FUN_674084d8 @ 674084d8 size=28 ---- */

exception * __thiscall FUN_674084d8(void *this,byte param_1)

{
  FUN_674084cd(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_6740850c @ 6740850c size=96 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6740850c(void)

{
  undefined **local_14 [3];
  char *local_8;
  
  if ((_DAT_6741dee4 & 1) == 0) {
    _DAT_6741dee4 = _DAT_6741dee4 | 1;
    local_8 = "bad allocation";
    exception::exception((exception *)&DAT_6741ded8,&local_8);
    _DAT_6741ded8 = &PTR_FUN_67416770;
    _atexit((_func_4879 *)&LAB_67415162);
  }
  exception::exception((exception *)local_14,(exception *)&DAT_6741ded8);
  local_14[0] = &PTR_FUN_67416770;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_67419b04);
}



/* ---- FUN_6740856d @ 6740856d size=11 ---- */

void __cdecl FUN_6740856d(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



/* ---- FUN_67408578 @ 67408578 size=11 ---- */

void __cdecl FUN_67408578(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



/* ---- FUN_67408583 @ 67408583 size=11 ---- */

void __cdecl FUN_67408583(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



/* ---- FUN_6740858e @ 6740858e size=11 ---- */

void __cdecl FUN_6740858e(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



/* ---- __Atexit @ 67408599 size=32 ---- */

/* Library Function - Single Match
    __Atexit
   
   Library: Visual Studio 2003 Release */

void __cdecl __Atexit(_func_9331 *param_1)

{
  if (DAT_6741b4b8 == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_6741b4b8 = DAT_6741b4b8 + -1;
  *(_func_9331 **)(DAT_6741b4b8 * 4 + 0x6741df08) = param_1;
  return;
}



/* ---- _memmove @ 674085e0 size=672 ---- */

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
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
          goto switchD_6740879b_caseD_2;
        case 3:
          goto switchD_6740879b_caseD_3;
        }
        goto switchD_6740879b_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_6740879b_caseD_0;
      case 1:
        goto switchD_6740879b_caseD_1;
      case 2:
        goto switchD_6740879b_caseD_2;
      case 3:
        goto switchD_6740879b_caseD_3;
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
              goto switchD_6740879b_caseD_2;
            case 3:
              goto switchD_6740879b_caseD_3;
            }
            goto switchD_6740879b_caseD_1;
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
              goto switchD_6740879b_caseD_2;
            case 3:
              goto switchD_6740879b_caseD_3;
            }
            goto switchD_6740879b_caseD_1;
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
              goto switchD_6740879b_caseD_2;
            case 3:
              goto switchD_6740879b_caseD_3;
            }
            goto switchD_6740879b_caseD_1;
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
switchD_6740879b_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_6740879b_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_6740879b_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_6740879b_caseD_0:
    return _Dst;
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
        goto switchD_67408615_caseD_2;
      case 3:
        goto switchD_67408615_caseD_3;
      }
      goto switchD_67408615_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_67408615_caseD_0;
    case 1:
      goto switchD_67408615_caseD_1;
    case 2:
      goto switchD_67408615_caseD_2;
    case 3:
      goto switchD_67408615_caseD_3;
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
            goto switchD_67408615_caseD_2;
          case 3:
            goto switchD_67408615_caseD_3;
          }
          goto switchD_67408615_caseD_1;
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
            goto switchD_67408615_caseD_2;
          case 3:
            goto switchD_67408615_caseD_3;
          }
          goto switchD_67408615_caseD_1;
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
            goto switchD_67408615_caseD_2;
          case 3:
            goto switchD_67408615_caseD_3;
          }
          goto switchD_67408615_caseD_1;
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
switchD_67408615_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_67408615_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_67408615_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_67408615_caseD_0:
  return _Dst;
}



/* ---- _free @ 6740891d size=5 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_6741e540 == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_674095d6();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    HeapFree(DAT_6741e53c,0,_Memory);
  }
  return;
}



/* ---- _JumpToContinuation @ 67408922 size=43 ---- */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x6740894b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/* ---- FID_conflict:_CallMemberFunction1 @ 67408952 size=7 ---- */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x67408957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}



/* ---- _UnwindNestedFrames @ 67408959 size=82 ---- */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2003 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x67408982,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* ---- ___CxxFrameHandler @ 674089ab size=54 ---- */

/* Library Function - Single Match
    ___CxxFrameHandler
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl
___CxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                  void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}



/* ---- _CallSETranslator @ 67408a1c size=199 ---- */

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  EHExceptionRecord **ppEVar3;
  undefined4 local_38;
  EHExceptionRecord *local_34;
  void *local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_c = (undefined1 *)((int)register0x00000010 + -4);
  local_10 = (undefined1 *)((int)register0x00000010 + -0x3c);
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x67408ab7;
    local_38 = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_6741b534;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_34 = param_1;
    local_30 = param_3;
    ppEVar3 = &local_34;
    uVar2 = *(undefined4 *)param_1;
    p_Var1 = __getptd();
    (*(code *)p_Var1->_NLG_dwCode)(uVar2,ppEVar3);
    local_38 = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_38;
}



/* ---- TranslatorGuardHandler @ 67408ae3 size=175 ---- */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Library: Visual Studio 2003 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  if (*(int *)(param_2 + 8) == DAT_6741b534) {
    if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
      ___InternalCxxFrameHandler
                (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
                 *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
                 *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
      if (*(int *)(param_2 + 0x24) == 0) {
        _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
      }
      _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                        (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x67408b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _Var1 = (*local_8)();
      return _Var1;
    }
    *(undefined4 *)(param_2 + 0x24) = 1;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 1;
}



/* ---- _GetRangeOfTrysToCheck @ 67408b95 size=122 ---- */

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2003 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  _s_FuncInfo *p_Var2;
  _s_FuncInfo *p_Var3;
  _s_FuncInfo *local_8;
  
  p_Var2 = param_1;
  local_8 = (_s_FuncInfo *)param_1->nTryBlocks;
  pTVar1 = param_1->pTryBlockMap;
  p_Var3 = local_8;
  param_1 = local_8;
  if (-1 < param_2) {
    do {
      if (p_Var3 == (_s_FuncInfo *)0xffffffff) {
        _inconsistency();
      }
      p_Var3 = (_s_FuncInfo *)((int)&p_Var3[-1].pIPToStateMap + 3);
      if (((pTVar1[(int)p_Var3].tryHigh < param_3) && (param_3 <= pTVar1[(int)p_Var3].catchHigh)) ||
         (p_Var3 == (_s_FuncInfo *)0xffffffff)) {
        param_2 = param_2 + -1;
        local_8 = param_1;
        param_1 = p_Var3;
      }
    } while (-1 < param_2);
  }
  p_Var3 = (_s_FuncInfo *)((int)&p_Var3->magicNumber_and_bbtFlags + 1);
  *param_4 = (uint)p_Var3;
  *param_5 = (uint)local_8;
  if (((_s_FuncInfo *)p_Var2->nTryBlocks < local_8) || (local_8 < p_Var3)) {
    _inconsistency();
  }
  return pTVar1 + (int)p_Var3;
}



/* ---- _CreateFrameInfo @ 67408c0f size=40 ---- */

/* Library Function - Single Match
    struct FrameInfo * __cdecl _CreateFrameInfo(struct FrameInfo *,void *)
   
   Library: Visual Studio 2003 Release */

FrameInfo * __cdecl _CreateFrameInfo(FrameInfo *param_1,void *param_2)

{
  _ptiddata p_Var1;
  
  *(void **)param_1 = param_2;
  p_Var1 = __getptd();
  *(void **)(param_1 + 4) = p_Var1->_curexception;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  return param_1;
}



/* ---- IsExceptionObjectToBeDestroyed @ 67408c37 size=33 ---- */

/* Library Function - Single Match
    int __cdecl IsExceptionObjectToBeDestroyed(void *)
   
   Library: Visual Studio 2003 Release */

int __cdecl IsExceptionObjectToBeDestroyed(void *param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_curexception;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if ((void *)*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}



/* ---- _FindAndUnlinkFrame @ 67408c58 size=76 ---- */

/* Library Function - Single Match
    void __cdecl _FindAndUnlinkFrame(struct FrameInfo *)
   
   Library: Visual Studio 2003 Release */

void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1)

{
  _ptiddata p_Var1;
  FrameInfo *pFVar2;
  
  p_Var1 = __getptd();
  if (param_1 == p_Var1->_curexception) {
    p_Var1 = __getptd();
    p_Var1->_curexception = *(void **)(param_1 + 4);
    return;
  }
  p_Var1 = __getptd();
  pFVar2 = p_Var1->_curexception;
  while( true ) {
    if (*(int *)(pFVar2 + 4) == 0) {
      _inconsistency();
      return;
    }
    if (param_1 == *(FrameInfo **)(pFVar2 + 4)) break;
    pFVar2 = *(FrameInfo **)(pFVar2 + 4);
  }
  *(undefined4 *)(pFVar2 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}



/* ---- _CallCatchBlock2 @ 67408ca4 size=89 ---- */

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Library: Visual Studio 2003 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_6741b534;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_674089e1;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/* ---- __global_unwind2 @ 67408d00 size=32 ---- */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x67408d18,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- __local_unwind2 @ 67408d42 size=104 ---- */

/* Library Function - Single Match
    __local_unwind2
   
   Library: Visual Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_67408d20;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_67408dd6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ---- __abnormal_termination @ 67408daa size=35 ---- */

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio 2003 Release */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_67408d20) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ---- __NLG_Notify1 @ 67408dcd size=9 ---- */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_6741b528 = param_1;
  DAT_6741b524 = in_EAX;
  DAT_6741b52c = unaff_EBP;
  return;
}



/* ---- FUN_67408dd6 @ 67408dd6 size=24 ---- */

void FUN_67408dd6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_6741b528 = *(undefined4 *)(unaff_EBP + 8);
  DAT_6741b524 = in_EAX;
  DAT_6741b52c = unaff_EBP;
  return;
}



/* ---- __CxxThrowException@8 @ 67408dee size=58 ---- */

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2003 Release */

void __CxxThrowException_8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar2 = &DAT_67416788;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



/* ---- report_failure @ 67408e28 size=41 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    _report_failure
   
   Library: Visual Studio 2003 Release */

void __cdecl report_failure(void)

{
  ___security_error_handler(1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(3);
}



/* ---- __security_check_cookie @ 67408e59 size=14 ---- */

/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_6741b534) {
    return;
  }
  report_failure();
  return;
}



/* ---- FUN_67408f6a @ 67408f6a size=27 ---- */

void FUN_67408f6a(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ---- __endthreadex @ 67408f85 size=48 ---- */

/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2003 Release */

void __cdecl __endthreadex(uint _Retval)

{
  _ptiddata _Ptd;
  
  if (DAT_6741f7bc != (code *)0x0) {
    (*DAT_6741f7bc)();
  }
  _Ptd = __getptd();
  if (_Ptd == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  __freeptd(_Ptd);
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}



/* ---- __beginthreadex @ 6740904b size=139 ---- */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2003 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  int *piVar2;
  _ptiddata _Ptd;
  _StartAddress **lpThreadId;
  HANDLE pvVar3;
  DWORD DVar4;
  pthreadlocinfo unaff_ESI;
  
  p_Var1 = _StartAddress;
  DVar4 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar2 = FUN_6740cf07();
    *piVar2 = 0x16;
  }
  else {
    _Ptd = _calloc(1,0x8c);
    if (_Ptd != (_ptiddata)0x0) {
      __initptd(_Ptd,unaff_ESI);
      _Ptd->_thandle = 0xffffffff;
      *(void **)(_Ptd->_con_ch_buf + 4) = _ArgList;
      *(_StartAddress **)_Ptd->_con_ch_buf = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar3 = CreateThread(_Security,_StackSize,(LPTHREAD_START_ROUTINE)&UNK_67408fb6,_Ptd,
                            _InitFlag,(LPDWORD)lpThreadId);
      if (pvVar3 != (HANDLE)0x0) {
        return (uintptr_t)pvVar3;
      }
      DVar4 = GetLastError();
    }
    _free(_Ptd);
    if (DVar4 != 0) {
      __dosmaperr(DVar4);
    }
  }
  return 0;
}



/* ---- __mbsrchr @ 674090d6 size=107 ---- */

/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  ushort uVar2;
  _ptiddata p_Var3;
  pthreadmbcinfo ptVar4;
  uchar *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar8 = (byte *)0x0;
  p_Var3 = __getptd();
  ptVar4 = p_Var3->_tpxcptinfoptrs;
  if (ptVar4 != DAT_6741e548) {
    ptVar4 = ___updatetmbcinfo();
  }
  if (ptVar4->ismbcodepage == 0) {
    puVar5 = (uchar *)_strrchr((char *)_Str,_Ch);
    return puVar5;
  }
  do {
    bVar7 = *_Str;
    if ((ptVar4->mbctype[bVar7 + 5] & 4) == 0) {
      bVar9 = _Ch == bVar7;
LAB_67409131:
      pbVar6 = _Str;
      if (bVar9) {
        pbVar8 = _Str;
      }
    }
    else {
      pbVar6 = _Str + 1;
      bVar1 = *pbVar6;
      if (bVar1 == 0) {
        bVar9 = pbVar8 == (byte *)0x0;
        _Str = pbVar6;
        bVar7 = bVar1;
        goto LAB_67409131;
      }
      uVar2 = CONCAT11(bVar7,bVar1);
      bVar7 = bVar1;
      if (_Ch == uVar2) {
        pbVar8 = _Str;
      }
    }
    _Str = pbVar6 + 1;
    if (bVar7 == 0) {
      return pbVar8;
    }
  } while( true );
}



/* ---- __mbsstr @ 67409141 size=178 ---- */

/* Library Function - Single Match
    __mbsstr
   
   Library: Visual Studio 2003 Release */

uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr)

{
  byte bVar1;
  _ptiddata p_Var2;
  uint *puVar3;
  size_t sVar4;
  size_t sVar5;
  uchar *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  pthreadmbcinfo local_8;
  
  p_Var2 = __getptd();
  local_8 = p_Var2->_tpxcptinfoptrs;
  if (local_8 != DAT_6741e548) {
    local_8 = ___updatetmbcinfo();
  }
  if (local_8->ismbcodepage == 0) {
    puVar3 = FUN_6740d5d0((uint *)_Str,(char *)_Substr);
    return (uchar *)puVar3;
  }
  if (*_Substr == '\0') {
    return _Str;
  }
  sVar4 = _strlen((char *)_Substr);
  sVar5 = _strlen((char *)_Str);
  if (*_Str != '\0') {
    iVar7 = (int)_Str - (int)_Substr;
    pbVar9 = _Str;
    do {
      if (_Str + (sVar5 - sVar4) < pbVar9) {
        return (uchar *)0x0;
      }
      puVar6 = _Substr;
      bVar1 = *pbVar9;
      while (bVar1 != 0) {
        if (*puVar6 == '\0') {
          return pbVar9;
        }
        if (puVar6[iVar7] != *puVar6) break;
        puVar6 = puVar6 + 1;
        bVar1 = puVar6[iVar7];
      }
      if (*puVar6 == '\0') {
        return pbVar9;
      }
      pbVar10 = pbVar9 + 1;
      iVar8 = iVar7 + 1;
      if ((local_8->mbctype[*pbVar9 + 5] & 4) != 0) {
        if (*pbVar10 == 0) {
          return (uchar *)0x0;
        }
        pbVar10 = pbVar9 + 2;
        iVar8 = iVar7 + 2;
      }
      iVar7 = iVar8;
      pbVar9 = pbVar10;
    } while (*pbVar10 != 0);
  }
  return (uchar *)0x0;
}



/* ---- __vsnprintf @ 674091f3 size=86 ---- */

/* Library Function - Single Match
    __vsnprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  FILE local_24;
  
  local_24._cnt = _Count;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = __output(&local_24,(byte *)_Format,(wchar_t *)_Args);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt - 1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}



/* ---- exception @ 67409249 size=17 ---- */

/* Library Function - Single Match
    public: __thiscall exception::exception(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall exception::exception(exception *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_674167c8;
  return;
}



/* ---- exception @ 6740925a size=61 ---- */

/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  *(undefined ***)this = &PTR_FUN_674167c8;
  sVar1 = _strlen(*param_1);
  puVar2 = _malloc(sVar1 + 1);
  *(uint **)(this + 4) = puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_6740e000(puVar2,(uint *)*param_1);
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}



/* ---- exception @ 67409297 size=74 ---- */

/* Library Function - Single Match
    public: __thiscall exception::exception(class exception const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  uint *puVar3;
  
  *(undefined ***)this = &PTR_FUN_674167c8;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_1 + 4));
    puVar3 = _malloc(sVar2 + 1);
    *(uint **)(this + 4) = puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_6740e000(puVar3,*(uint **)(param_1 + 4));
    }
  }
  return this;
}



/* ---- ~exception @ 674092e1 size=22 ---- */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_674167c8;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}



/* ---- FUN_67409304 @ 67409304 size=25 ---- */

exception * __thiscall FUN_67409304(void *this,char *param_1)

{
  exception::exception(this,&param_1);
  *(undefined ***)this = &PTR_FUN_674167e8;
  return this;
}



/* ---- FUN_67409335 @ 67409335 size=11 ---- */

void __fastcall FUN_67409335(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_674167e8;
  exception::~exception(param_1);
  return;
}



/* ---- FUN_67409340 @ 67409340 size=28 ---- */

exception * __thiscall FUN_67409340(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- FUN_6740935c @ 6740935c size=28 ---- */

exception * __thiscall FUN_6740935c(void *this,byte param_1)

{
  FUN_67409335(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- ~type_info @ 67409378 size=61 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = &vftable;
  __lock(0xe);
  if (*(void **)(this + 4) != (void *)0x0) {
    _free(*(void **)(this + 4));
  }
  FUN_674093b5();
  return;
}



/* ---- FUN_674093b5 @ 674093b5 size=9 ---- */

void FUN_674093b5(void)

{
  FUN_6740abc9(0xe);
  return;
}



/* ---- type_info::`scalar_deleting_destructor' @ 674093be size=28 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall type_info::type_info___scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/* ---- __chkstk @ 674093e0 size=61 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2003 Release */

void __cdecl __chkstk(undefined1 param_1)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX < 0x1000) {
    *(undefined4 *)((int)register0x00000010 - in_EAX) = unaff_retaddr;
    return;
  }
  puVar1 = &param_1;
  do {
    puVar1 = puVar1 + -0x1000;
    in_EAX = in_EAX - 0x1000;
  } while (0xfff < in_EAX);
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



/* ---- __onexit_lk @ 6740941d size=128 ---- */

/* Library Function - Single Match
    __onexit_lk
   
   Library: Visual Studio 2003 Release */

void __onexit_lk(void)

{
  size_t sVar1;
  void *pvVar2;
  size_t sVar3;
  undefined4 unaff_EDI;
  
  sVar1 = __msize(DAT_6741e788);
  if (sVar1 < (uint)((int)DAT_6741e784 + (4 - (int)DAT_6741e788))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    pvVar2 = _realloc(DAT_6741e788,sVar3 + sVar1);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = _realloc(DAT_6741e788,sVar1 + 0x10);
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
    DAT_6741e784 = (undefined4 *)((int)pvVar2 + ((int)DAT_6741e784 - (int)DAT_6741e788 >> 2) * 4);
    DAT_6741e788 = pvVar2;
  }
  *DAT_6741e784 = unaff_EDI;
  DAT_6741e784 = DAT_6741e784 + 1;
  return;
}



/* ---- ___onexitinit @ 6740949d size=40 ---- */

/* Library Function - Single Match
    ___onexitinit
   
   Library: Visual Studio 2003 Release */

undefined4 ___onexitinit(void)

{
  DAT_6741e788 = _malloc(0x80);
  if (DAT_6741e788 == (undefined4 *)0x0) {
    return 0x18;
  }
  *DAT_6741e788 = 0;
  DAT_6741e784 = DAT_6741e788;
  return 0;
}



/* ---- __onexit @ 674094c5 size=50 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_6740cc11();
  p_Var1 = (_onexit_t)__onexit_lk();
  FUN_674094f7();
  return p_Var1;
}



/* ---- FUN_674094f7 @ 674094f7 size=6 ---- */

void FUN_674094f7(void)

{
  FUN_6740cc1a();
  return;
}



/* ---- _atexit @ 674094fd size=18 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2003 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- FID_conflict:vswprintf @ 6740950f size=111 ---- */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl vswprintf(wchar_t *,unsigned int,wchar_t const *,char *)
    __vsnwprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict_vswprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  FILE local_24;
  
  local_24._base = (char *)_Dest;
  local_24._ptr = (char *)_Dest;
  local_24._cnt = _Count * 2;
  local_24._flag = 0x42;
  iVar1 = __woutput(&local_24,_Format,(wchar_t *)_Args);
  local_24._cnt = local_24._cnt + -1;
  if (local_24._cnt < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24._ptr = 0;
    local_24._ptr = (char *)((int)local_24._ptr + 1);
  }
  local_24._cnt = local_24._cnt + -1;
  if (local_24._cnt < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24._ptr = 0;
  }
  return iVar1;
}



/* ---- _free @ 6740957e size=5 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_6741e540 == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_674095d6();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    HeapFree(DAT_6741e53c,0,_Memory);
  }
  return;
}



/* ---- _free @ 67409583 size=104 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2003 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_6741e540 == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_674095d6();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    HeapFree(DAT_6741e53c,0,_Memory);
  }
  return;
}



/* ---- FUN_674095d6 @ 674095d6 size=9 ---- */

void FUN_674095d6(void)

{
  FUN_6740abc9(4);
  return;
}



/* ---- __snprintf @ 674095f4 size=87 ---- */

/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  wchar_t wStack00000010;
  FILE local_24;
  
  local_24._cnt = _Count;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = __output(&local_24,(byte *)_Format,&wStack00000010);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt - 1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}



/* ---- _setvbuf @ 6740964b size=210 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setvbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl _setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size)

{
  int local_20;
  
  local_20 = 0;
  if ((_Mode != 4) && (((_Size < 2 || (0x7fffffff < _Size)) || ((_Mode != 0 && (_Mode != 0x40))))))
  {
    return -1;
  }
  _Size = _Size & 0xfffffffe;
  __lock_file(_File);
  __flush(_File);
  __freebuf(_File);
  *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xc2f3;
  if ((_Mode & 4U) == 0) {
    if (_Buf == (char *)0x0) {
      _Buf = _malloc(_Size);
      if ((int *)_Buf == (int *)0x0) {
        _DAT_6741e0b4 = _DAT_6741e0b4 + 1;
        local_20 = -1;
        goto LAB_6740970b;
      }
      *(ushort *)&_File->_flag = (ushort)_File->_flag | 0x408;
    }
    else {
      _File->_flag = _File->_flag | 0x500;
    }
  }
  else {
    _File->_flag = _File->_flag | 4;
    _Buf = (char *)&_File->_charbuf;
    _Size = 2;
  }
  _File->_bufsiz = _Size;
  _File->_base = _Buf;
  _File->_ptr = _Buf;
  _File->_cnt = 0;
LAB_6740970b:
  FUN_6740971d();
  return local_20;
}



/* ---- FUN_6740971d @ 6740971d size=10 ---- */

void FUN_6740971d(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x20));
  return;
}



/* ---- __flush @ 67409727 size=93 ---- */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2003 Release */

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  uint _MaxCharCount;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
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



/* ---- __fflush_lk @ 67409784 size=46 ---- */

/* Library Function - Single Match
    __fflush_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) == 0) {
    return 0;
  }
  iVar1 = __commit(param_1->_file);
  return -(uint)(iVar1 != 0);
}



/* ---- flsall @ 674097b2 size=182 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_6741f7a0; _Index = _Index + 1) {
    _File = *(void **)(DAT_6741e794 + _Index * 4);
    if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      pFVar1 = *(FILE **)(DAT_6741e794 + _Index * 4);
      if ((pFVar1->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((pFVar1->_flag & 2U) != 0)) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_67409852();
    }
  }
  FUN_6740987e();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/* ---- FUN_67409852 @ 67409852 size=17 ---- */

void FUN_67409852(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_6741e794 + unaff_ESI * 4));
  return;
}



/* ---- FUN_6740987e @ 6740987e size=9 ---- */

void FUN_6740987e(void)

{
  FUN_6740abc9(1);
  return;
}



/* ---- _fflush @ 67409887 size=70 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fflush
   
   Library: Visual Studio 2003 Release */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    __lock_file(_File);
    iVar1 = __fflush_lk(_File);
    FUN_674098cd();
  }
  return iVar1;
}



/* ---- FUN_674098cd @ 674098cd size=10 ---- */

void FUN_674098cd(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* ---- __ungetc_lk @ 674098e0 size=108 ---- */

/* Library Function - Single Match
    __ungetc_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __ungetc_lk(uint param_1,FILE *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_1 != 0xffffffff) {
    uVar1 = param_2->_flag;
    if (((uVar1 & 1) != 0) || (((char)uVar1 < '\0' && ((uVar1 & 2) == 0)))) {
      if (param_2->_base == (char *)0x0) {
        __getbuf(param_2);
      }
      if (param_2->_ptr == param_2->_base) {
        if (param_2->_cnt != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      param_2->_ptr = param_2->_ptr + -1;
      pcVar2 = param_2->_ptr;
      if ((param_2->_flag & 0x40) == 0) {
        *pcVar2 = (char)param_1;
      }
      else if (*pcVar2 != (char)param_1) {
        param_2->_ptr = pcVar2 + 1;
        return 0xffffffff;
      }
      param_2->_cnt = param_2->_cnt + 1;
      param_2->_flag = param_2->_flag & 0xffffffefU | 1;
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}



/* ---- _ungetc @ 6740994c size=59 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ungetc
   
   Library: Visual Studio 2003 Release */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __ungetc_lk(_Ch,_File);
  FUN_67409987();
  return uVar1;
}



/* ---- FUN_67409987 @ 67409987 size=10 ---- */

void FUN_67409987(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0xc));
  return;
}



/* ---- FID_conflict:_getc @ 67409991 size=69 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fgetc
    _getc
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__getc(FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  __lock_file(_File);
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = __filbuf(_File);
  }
  else {
    uVar2 = (uint)(byte)*_File->_ptr;
    _File->_ptr = _File->_ptr + 1;
  }
  FUN_674099d9();
  return uVar2;
}



/* ---- FUN_674099d9 @ 674099d9 size=8 ---- */

void FUN_674099d9(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



/* ---- __fwrite_lk @ 674099e1 size=263 ---- */

/* Library Function - Single Match
    __fwrite_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  uint uVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_2 * param_3;
  if (uVar5 == 0) {
    param_3 = 0;
  }
  else {
    uVar4 = uVar5;
    if ((param_4->_flag & 0x10c) == 0) {
      local_8 = 0x1000;
    }
    else {
      local_8 = param_4->_bufsiz;
    }
    do {
      uVar3 = param_4->_flag & 0x108;
      if ((uVar3 == 0) || (uVar1 = param_4->_cnt, uVar1 == 0)) {
        if (local_8 <= uVar4) {
          if ((uVar3 != 0) && (iVar2 = __flush(param_4), iVar2 != 0)) {
LAB_67409ad6:
            return (uVar5 - uVar4) / param_2;
          }
          uVar3 = uVar4;
          if (local_8 != 0) {
            uVar3 = uVar4 - uVar4 % local_8;
          }
          _Size = __write(param_4->_file,param_1,uVar3);
          if ((_Size == 0xffffffff) || (uVar4 = uVar4 - _Size, _Size < uVar3)) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_67409ad6;
          }
          goto LAB_67409a96;
        }
        iVar2 = __flsbuf((int)*param_1,param_4);
        if (iVar2 == -1) goto LAB_67409ad6;
        param_1 = param_1 + 1;
        local_8 = param_4->_bufsiz;
        uVar4 = uVar4 - 1;
        if ((int)local_8 < 1) {
          local_8 = 1;
        }
      }
      else {
        _Size = uVar4;
        if (uVar1 <= uVar4) {
          _Size = uVar1;
        }
        _memcpy(param_4->_ptr,param_1,_Size);
        param_4->_cnt = param_4->_cnt - _Size;
        param_4->_ptr = param_4->_ptr + _Size;
        uVar4 = uVar4 - _Size;
LAB_67409a96:
        param_1 = param_1 + _Size;
      }
    } while (uVar4 != 0);
  }
  return param_3;
}



/* ---- _fwrite @ 67409ae8 size=66 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __fwrite_lk(_Str,_Size,_Count,_File);
  FUN_67409b2a();
  return uVar1;
}



/* ---- FUN_67409b2a @ 67409b2a size=10 ---- */

void FUN_67409b2a(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x14));
  return;
}



/* ---- FID_conflict:_fputc @ 67409b34 size=77 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fputc
    _putc
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__fputc(int _Ch,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  __lock_file(_File);
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = __flsbuf(_Ch,_File);
  }
  else {
    *_File->_ptr = (char)_Ch;
    uVar2 = _Ch & 0xff;
    _File->_ptr = _File->_ptr + 1;
  }
  FUN_67409b84();
  return uVar2;
}



/* ---- FUN_67409b84 @ 67409b84 size=8 ---- */

void FUN_67409b84(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



/* ---- _fgetpos @ 67409b8c size=34 ---- */

/* Library Function - Single Match
    _fgetpos
   
   Library: Visual Studio 2003 Release */

int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftelli64(_File);
  *_Pos = lVar2;
  iVar1 = -1;
  if (((uint)lVar2 & *(uint *)((int)_Pos + 4)) != 0xffffffff) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ---- __fseek_lk @ 67409bae size=143 ---- */

/* Library Function - Single Match
    __fseek_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __fseek_lk(FILE *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  if (((param_1->_flag & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    piVar4 = FUN_6740cf07();
    *piVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1->_flag = param_1->_flag & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = __ftell_lk((uint *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    __flush(param_1);
    uVar1 = param_1->_flag;
    if ((char)uVar1 < '\0') {
      param_1->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      param_1->_bufsiz = 0x200;
    }
    lVar3 = __lseek(param_1->_file,param_2,param_3);
    iVar2 = (lVar3 != -1) - 1;
  }
  return iVar2;
}



/* ---- _fseek @ 67409c3d size=63 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2003 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
  __lock_file(_File);
  iVar1 = __fseek_lk(_File,_Offset,_Origin);
  FUN_67409c7c();
  return iVar1;
}



/* ---- FUN_67409c7c @ 67409c7c size=10 ---- */

void FUN_67409c7c(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* ---- _fsetpos @ 67409c86 size=24 ---- */

/* Library Function - Single Match
    _fsetpos
   
   Library: Visual Studio 2003 Release */

int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = __fseeki64(_File,(ulonglong)*(uint *)((int)_Pos + 4),unaff_retaddr);
  return iVar1;
}



/* ---- __fclose_lk @ 67409c9e size=76 ---- */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    __freebuf(param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      _free(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return iVar2;
}



/* ---- _fclose @ 67409cea size=70 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2003 Release */

int __cdecl _fclose(FILE *_File)

{
  int local_20;
  
  local_20 = -1;
  if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = __fclose_lk(_File);
    FUN_67409d33();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}



/* ---- FUN_67409d33 @ 67409d33 size=8 ---- */

void FUN_67409d33(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



/* ---- __CRT_INIT@12 @ 67409d3b size=385 ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2003 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  _ptiddata _Ptd;
  DWORD DVar3;
  DWORD local_9c;
  DWORD local_98;
  DWORD local_94;
  uint local_90;
  DWORD local_8c;
  CHAR aCStack_18 [4];
  pthreadlocinfo _Locale;
  
  if (param_2 == 1) {
    local_9c = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
    if (BVar1 != 0) {
      DAT_6741e120 = local_8c;
      DAT_6741e12c = local_98;
      _DAT_6741e130 = local_94;
      _DAT_6741e124 = local_90 & 0x7fff;
      if (local_8c != 2) {
        _DAT_6741e124 = _DAT_6741e124 | 0x8000;
      }
      _DAT_6741e128 = local_98 * 0x100 + local_94;
      iVar2 = __heap_init();
      if (iVar2 != 0) {
        iVar2 = __mtinit();
        if (iVar2 != 0) {
          __RTC_Initialize();
          DAT_6741f7b4 = GetCommandLineA();
          DAT_6741df3c = ___crtGetEnvironmentStringsA();
          iVar2 = __ioinit();
          if (-1 < iVar2) {
            iVar2 = __setargv();
            if (((-1 < iVar2) && (iVar2 = __setenvp(), -1 < iVar2)) &&
               (iVar2 = __cinit(0), iVar2 == 0)) {
              DAT_6741df38 = DAT_6741df38 + 1;
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
  else if (param_2 == 0) {
    if (0 < DAT_6741df38) {
      DAT_6741df38 = DAT_6741df38 + -1;
      if (DAT_6741e15c == 0) {
        __cexit();
      }
      __ioterm();
      __mtterm();
      __heap_term();
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
    _Ptd = _calloc(1,0x8c);
    if (_Ptd != (_ptiddata)0x0) {
      _Locale = DAT_6741bb00;
      iVar2 = (*DAT_6741e0c0)();
      if (iVar2 != 0) {
        aCStack_18[0] = -0x75;
        aCStack_18[1] = -0x62;
        aCStack_18[2] = '@';
        aCStack_18[3] = 'g';
        __initptd(_Ptd,_Locale);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
        return 1;
      }
      aCStack_18[0] = -0x61;
      aCStack_18[1] = -0x62;
      aCStack_18[2] = '@';
      aCStack_18[3] = 'g';
      _free(_Ptd);
    }
  }
  return 0;
}



/* ---- entry @ 67409ebc size=208 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_6741df38 == 0)) {
LAB_67409f96:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_6741f7b8 != (code *)0x0) {
        local_20 = (*DAT_6741f7b8)(param_1,param_2,param_3);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_1,param_2), iVar1 == 0))
      goto LAB_67409f96;
    }
    local_20 = FUN_67401970(param_1,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      __CRT_INIT_12(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_1,param_2);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_6741f7b8 != (code *)0x0)) {
        local_20 = (*DAT_6741f7b8)(param_1,param_2,param_3);
      }
    }
  }
  return local_20;
}



/* ---- __amsg_exit @ 67409fa0 size=48 ---- */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_6741df44 == 1) || ((DAT_6741df44 == 0 && (DAT_6741df48 == 1)))) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*(code *)PTR___exit_6741b550)(0xff);
  return;
}



/* ---- __heap_alloc @ 67409fd3 size=111 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  int *piVar1;
  LPVOID pvVar2;
  
  if ((DAT_6741e540 == 3) && (_Size <= DAT_6741e52c)) {
    __lock(4);
    piVar1 = ___sbh_alloc_block((uint *)_Size);
    FUN_6740a045();
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (_Size == 0) {
    _Size = 1;
  }
  if (DAT_6741e540 != 1) {
    _Size = _Size + 0xf & 0xfffffff0;
  }
  pvVar2 = HeapAlloc(DAT_6741e53c,0,_Size);
  return pvVar2;
}



/* ---- FUN_6740a045 @ 6740a045 size=9 ---- */

void FUN_6740a045(void)

{
  FUN_6740abc9(4);
  return;
}



/* ---- __nh_malloc @ 6740a04e size=44 ---- */

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = __heap_alloc(_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ---- _malloc @ 6740a07a size=18 ---- */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_6741e278);
  return pvVar1;
}



/* ---- __callnewh @ 6740a08c size=27 ---- */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (DAT_6741df4c != (code *)0x0) {
    iVar1 = (*DAT_6741df4c)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ---- _strlen @ 6740a0b0 size=139 ---- */

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
      if ((char)uVar1 == '\0') goto LAB_6740a113;
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
LAB_6740a113:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* ---- _memcpy @ 6740a140 size=672 ---- */

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
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
          goto switchD_6740a2fb_caseD_2;
        case 3:
          goto switchD_6740a2fb_caseD_3;
        }
        goto switchD_6740a2fb_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_6740a2fb_caseD_0;
      case 1:
        goto switchD_6740a2fb_caseD_1;
      case 2:
        goto switchD_6740a2fb_caseD_2;
      case 3:
        goto switchD_6740a2fb_caseD_3;
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
              goto switchD_6740a2fb_caseD_2;
            case 3:
              goto switchD_6740a2fb_caseD_3;
            }
            goto switchD_6740a2fb_caseD_1;
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
              goto switchD_6740a2fb_caseD_2;
            case 3:
              goto switchD_6740a2fb_caseD_3;
            }
            goto switchD_6740a2fb_caseD_1;
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
              goto switchD_6740a2fb_caseD_2;
            case 3:
              goto switchD_6740a2fb_caseD_3;
            }
            goto switchD_6740a2fb_caseD_1;
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
switchD_6740a2fb_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_6740a2fb_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_6740a2fb_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_6740a2fb_caseD_0:
    return _Dst;
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
        goto switchD_6740a175_caseD_2;
      case 3:
        goto switchD_6740a175_caseD_3;
      }
      goto switchD_6740a175_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_6740a175_caseD_0;
    case 1:
      goto switchD_6740a175_caseD_1;
    case 2:
      goto switchD_6740a175_caseD_2;
    case 3:
      goto switchD_6740a175_caseD_3;
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
            goto switchD_6740a175_caseD_2;
          case 3:
            goto switchD_6740a175_caseD_3;
          }
          goto switchD_6740a175_caseD_1;
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
            goto switchD_6740a175_caseD_2;
          case 3:
            goto switchD_6740a175_caseD_3;
          }
          goto switchD_6740a175_caseD_1;
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
            goto switchD_6740a175_caseD_2;
          case 3:
            goto switchD_6740a175_caseD_3;
          }
          goto switchD_6740a175_caseD_1;
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
switchD_6740a175_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_6740a175_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_6740a175_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_6740a175_caseD_0:
  return _Dst;
}



/* ---- FUN_6740a480 @ 6740a480 size=31 ---- */

void FUN_6740a480(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



/* ---- ___crtLCMapStringA @ 6740a49f size=886 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2003 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  UINT UVar9;
  LPSTR pCVar10;
  LPCSTR pCVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  size_t *lpDestStr;
  undefined1 uStack00000000;
  DWORD DStackY_74;
  undefined4 local_4c;
  size_t local_48 [7];
  LPSTR local_2c;
  size_t local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_674168e0;
  uStack_c = 0x6740a4ab;
  if (DAT_6741df50 == 0) {
    DStackY_74 = 0x6740a4cc;
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_6741df50 = 2;
      }
    }
    else {
      DAT_6741df50 = 1;
    }
  }
  if (0 < (int)_LpSrcStr) {
    pcVar5 = (char *)_DwMapFlag;
    pCVar11 = _LpSrcStr;
    do {
      pCVar11 = pCVar11 + -1;
      if (*pcVar5 == '\0') goto LAB_6740a505;
      pcVar5 = pcVar5 + 1;
    } while (pCVar11 != (LPCSTR)0x0);
    pCVar11 = (LPCSTR)0xffffffff;
LAB_6740a505:
    _LpSrcStr = _LpSrcStr + (-1 - (int)pCVar11);
  }
  if ((DAT_6741df50 != 2) && (DAT_6741df50 != 0)) {
    if (DAT_6741df50 == 1) {
      iVar3 = 0;
      bVar2 = false;
      bVar1 = false;
      if (_CchDest == 0) {
        _CchDest = DAT_6741e294;
      }
      DStackY_74 = 0x6740a565;
      iVar6 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                  (int)_LpSrcStr,(LPWSTR)0x0,0);
      if (iVar6 != 0) {
        puVar7 = (undefined1 *)(iVar6 * 2 + 3U & 0xfffffffc);
        iVar8 = -(int)puVar7;
        local_1c = (undefined1 *)((int)local_48 + iVar8 + -0x10);
        local_20 = (undefined1 *)((int)local_48 + iVar8 + -0x10);
        local_8 = (undefined *)0xffffffff;
        if (local_48 + -4 == (size_t *)puVar7) {
          *(int *)((int)local_48 + iVar8 + -0x14) = iVar6 * 2;
          *(undefined4 *)((int)local_48 + iVar8 + -0x18) = 0x6740a5be;
          local_20 = _malloc(*(size_t *)((int)local_48 + iVar8 + -0x14));
          if (local_20 == (undefined1 *)0x0) {
            return 0;
          }
          bVar2 = true;
        }
        *(int *)((int)local_48 + iVar8 + -0x14) = iVar6;
        *(undefined1 **)((int)local_48 + iVar8 + -0x18) = local_20;
        *(LPCSTR *)((int)local_48 + iVar8 + -0x1c) = _LpSrcStr;
        *(DWORD *)((int)local_48 + iVar8 + -0x20) = _DwMapFlag;
        *(undefined4 *)((int)local_48 + iVar8 + -0x24) = 1;
        *(int *)((int)local_48 + iVar8 + -0x28) = _CchDest;
        puVar12 = (undefined1 *)((int)local_48 + iVar8 + -0x2c);
        *(undefined4 *)((int)local_48 + iVar8 + -0x2c) = 0x6740a5e6;
        iVar8 = MultiByteToWideChar(*(UINT *)((int)local_48 + iVar8 + -0x28),
                                    *(DWORD *)((int)local_48 + iVar8 + -0x24),
                                    *(LPCSTR *)((int)local_48 + iVar8 + -0x20),
                                    *(int *)((int)local_48 + iVar8 + -0x1c),
                                    *(LPWSTR *)((int)local_48 + iVar8 + -0x18),
                                    *(int *)((int)local_48 + iVar8 + -0x14));
        puVar7 = puVar12;
        if (iVar8 != 0) {
          *(undefined4 *)(puVar12 + -4) = 0;
          *(undefined4 *)(puVar12 + -8) = 0;
          *(int *)(puVar12 + -0xc) = iVar6;
          *(undefined1 **)(puVar12 + -0x10) = local_20;
          *(LPCWSTR *)(puVar12 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar12 + -0x18) = _Plocinfo;
          puVar13 = puVar12 + -0x1c;
          *(undefined4 *)(puVar12 + -0x1c) = 0x6740a600;
          iVar3 = LCMapStringW(*(LCID *)(puVar12 + -0x18),*(DWORD *)(puVar12 + -0x14),
                               *(LPCWSTR *)(puVar12 + -0x10),*(int *)(puVar12 + -0xc),
                               *(LPWSTR *)(puVar12 + -8),*(int *)(puVar12 + -4));
          puVar7 = puVar13;
          if (iVar3 != 0) {
            if (((uint)_LocaleName & 0x400) == 0) {
              puVar7 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
              *(undefined4 *)(puVar13 + -4) = 0x6740a655;
              iVar8 = -(int)puVar7;
              local_1c = puVar13 + iVar8;
              local_24 = puVar13 + iVar8;
              local_8 = (undefined *)0xffffffff;
              if (puVar13 == puVar7) {
                *(int *)(puVar13 + iVar8 + -4) = iVar3 * 2;
                *(undefined4 *)(puVar13 + iVar8 + -8) = 0x6740a68c;
                local_24 = _malloc(*(size_t *)(puVar13 + iVar8 + -4));
                puVar7 = puVar13 + iVar8;
                if (local_24 == (undefined1 *)0x0) goto LAB_6740a6d4;
                bVar1 = true;
              }
              *(int *)(puVar13 + iVar8 + -4) = iVar3;
              *(undefined1 **)(puVar13 + iVar8 + -8) = local_24;
              *(int *)(puVar13 + iVar8 + -0xc) = iVar6;
              *(undefined1 **)(puVar13 + iVar8 + -0x10) = local_20;
              *(LPCWSTR *)(puVar13 + iVar8 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar13 + iVar8 + -0x18) = _Plocinfo;
              puVar15 = puVar13 + iVar8 + -0x1c;
              *(undefined4 *)(puVar13 + iVar8 + -0x1c) = 0x6740a6af;
              iVar6 = LCMapStringW(*(LCID *)(puVar13 + iVar8 + -0x18),
                                   *(DWORD *)(puVar13 + iVar8 + -0x14),
                                   *(LPCWSTR *)(puVar13 + iVar8 + -0x10),
                                   *(int *)(puVar13 + iVar8 + -0xc),
                                   *(LPWSTR *)(puVar13 + iVar8 + -8),*(int *)(puVar13 + iVar8 + -4))
              ;
              puVar7 = puVar15;
              if (iVar6 != 0) {
                *(undefined4 *)(puVar15 + -4) = 0;
                *(undefined4 *)(puVar15 + -8) = 0;
                if (_LpDestStr == (LPSTR)0x0) {
                  *(undefined4 *)(puVar15 + -0xc) = 0;
                  *(undefined4 *)(puVar15 + -0x10) = 0;
                }
                else {
                  *(LPSTR *)(puVar15 + -0xc) = _LpDestStr;
                  *(int *)(puVar15 + -0x10) = _CchSrc;
                }
                *(int *)(puVar15 + -0x14) = iVar3;
                *(undefined1 **)(puVar15 + -0x18) = local_24;
                *(undefined4 *)(puVar15 + -0x1c) = 0;
                *(int *)(puVar15 + -0x20) = _CchDest;
                puVar7 = puVar15 + -0x24;
                *(undefined4 *)(puVar15 + -0x24) = 0x6740a6d2;
                iVar3 = WideCharToMultiByte(*(UINT *)(puVar15 + -0x20),*(DWORD *)(puVar15 + -0x1c),
                                            *(LPCWSTR *)(puVar15 + -0x18),*(int *)(puVar15 + -0x14),
                                            *(LPSTR *)(puVar15 + -0x10),*(int *)(puVar15 + -0xc),
                                            *(LPCSTR *)(puVar15 + -8),*(LPBOOL *)(puVar15 + -4));
              }
            }
            else if ((_LpDestStr != (LPSTR)0x0) && (iVar3 <= (int)_LpDestStr)) {
              *(LPSTR *)(puVar13 + -4) = _LpDestStr;
              *(int *)(puVar13 + -8) = _CchSrc;
              *(int *)(puVar13 + -0xc) = iVar6;
              *(undefined1 **)(puVar13 + -0x10) = local_20;
              *(LPCWSTR *)(puVar13 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar13 + -0x18) = _Plocinfo;
              puVar14 = puVar13 + -0x1c;
              *(undefined4 *)(puVar13 + -0x1c) = 0x6740a63b;
              LCMapStringW(*(LCID *)(puVar13 + -0x18),*(DWORD *)(puVar13 + -0x14),
                           *(LPCWSTR *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                           *(LPWSTR *)(puVar13 + -8),*(int *)(puVar13 + -4));
              puVar7 = puVar14;
            }
          }
        }
LAB_6740a6d4:
        if (bVar1) {
          *(undefined1 **)(puVar7 + -4) = local_24;
          *(undefined4 *)(puVar7 + -8) = 0x6740a6e1;
          _free(*(void **)(puVar7 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar7 + -4) = local_20;
          *(undefined4 *)(puVar7 + -8) = 0x6740a6ef;
          _free(*(void **)(puVar7 + -4));
        }
        return iVar3;
      }
    }
    return 0;
  }
  local_2c = (LPSTR)0x0;
  lpDestStr = (size_t *)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_6741e284;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_6741e294;
  }
  UVar9 = ___ansicp((LCID)_Plocinfo);
  if (UVar9 == 0xffffffff) {
    return 0;
  }
  if (UVar9 == _CchDest) {
    DStackY_74 = 0x6740a840;
    local_4c = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_6740a842;
  }
  DStackY_74 = 0x6740a74c;
  local_2c = ___convertcp(_CchDest,UVar9,(char *)_DwMapFlag,(size_t *)&_LpSrcStr,(LPSTR)0x0,0);
  if (local_2c == (LPSTR)0x0) {
    return 0;
  }
  DStackY_74 = 0x6740a768;
  local_28 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_2c,(int)_LpSrcStr,(LPSTR)0x0,0);
  if (local_28 != 0) {
    local_8 = (undefined *)0x0;
    local_1c = (undefined1 *)(local_48 + -4);
    lpDestStr = local_48 + -4;
    _memset(local_48 + -4,0,local_28);
    local_8 = (undefined *)0xffffffff;
    if (&uStack00000000 == (undefined1 *)0x58) {
      lpDestStr = _malloc(local_28);
      if (lpDestStr != (size_t *)0x0) {
        _memset(lpDestStr,0,local_28);
        bVar1 = true;
        goto LAB_6740a7d3;
      }
    }
    else {
LAB_6740a7d3:
      DStackY_74 = 0x6740a7e9;
      local_28 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_2c,(int)_LpSrcStr,
                              (LPSTR)lpDestStr,local_28);
      if (local_28 != 0) {
        DStackY_74 = 0x6740a80a;
        pCVar10 = ___convertcp(UVar9,_CchDest,(char *)lpDestStr,&local_28,(LPSTR)_CchSrc,
                               (int)_LpDestStr);
        local_4c = (uint)(pCVar10 != (LPSTR)0x0);
        goto LAB_6740a81a;
      }
    }
    local_4c = 0;
  }
LAB_6740a81a:
  if (bVar1) {
    _free(lpDestStr);
  }
LAB_6740a842:
  if (local_2c != (LPSTR)0x0) {
    _free(local_2c);
  }
  return local_4c;
}



/* ---- FUN_6740a85b @ 6740a85b size=6 ---- */

undefined * FUN_6740a85b(void)

{
  return PTR_DAT_6741b560;
}



/* ---- _isupper @ 6740a861 size=58 ---- */

/* Library Function - Single Match
    _isupper
   
   Library: Visual Studio 2003 Release */

int __cdecl _isupper(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if ((int)ptVar2->lc_category[1].refcount < 2) {
    return *(byte *)((int)ptVar2->lc_category[3].refcount + _C * 2) & 1;
  }
  uVar3 = ___isctype_mt(this,(int)ptVar2,_C,1);
  return uVar3;
}



/* ---- _islower @ 6740a89b size=58 ---- */

/* Library Function - Single Match
    _islower
   
   Library: Visual Studio 2003 Release */

int __cdecl _islower(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if ((int)ptVar2->lc_category[1].refcount < 2) {
    return *(byte *)((int)ptVar2->lc_category[3].refcount + _C * 2) & 2;
  }
  uVar3 = ___isctype_mt(this,(int)ptVar2,_C,2);
  return uVar3;
}



/* ---- _isdigit @ 6740a8d5 size=58 ---- */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2003 Release */

int __cdecl _isdigit(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if ((int)ptVar2->lc_category[1].refcount < 2) {
    return *(byte *)((int)ptVar2->lc_category[3].refcount + _C * 2) & 4;
  }
  uVar3 = ___isctype_mt(this,(int)ptVar2,_C,4);
  return uVar3;
}



/* ---- ___init_ctype @ 6740a90f size=490 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2003 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  uint uVar6;
  undefined2 *puVar7;
  void *unaff_ESI;
  void *local_28;
  undefined4 *local_24;
  void *local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  local_20 = (void *)0x0;
  if (DAT_6741e284 == 0) {
    PTR_DAT_6741b560 = &DAT_67416a08;
    DAT_6741f7ac = (undefined2 *)0x0;
    DAT_6741f7b0 = (undefined4 *)0x0;
    return 0;
  }
  if ((DAT_6741e294 != 0) ||
     (iVar3 = ___getlocaleinfo((_locale_t)0x0,(uint)DAT_6741e2b4,(LPCWSTR)0x1004,0x6741e294,
                               unaff_ESI), iVar3 == 0)) {
    local_24 = _malloc(4);
    local_28 = _malloc(0x300);
    local_20 = _malloc(0x101);
    if ((local_24 != (undefined4 *)0x0) && ((local_28 != (void *)0x0 && (local_20 != (void *)0x0))))
    {
      *local_24 = 0;
      iVar3 = 0;
      do {
        *(char *)(iVar3 + (int)local_20) = (char)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar4 = GetCPInfo(DAT_6741e294,&local_1c);
      if ((BVar4 != 0) && (local_1c.MaxCharSize < 6)) {
        DAT_6741bed4 = local_1c.MaxCharSize & 0xffff;
        if ((1 < DAT_6741bed4) && (local_1c.LeadByte[0] != '\0')) {
          pBVar5 = local_1c.LeadByte + 1;
          do {
            bVar2 = *pBVar5;
            if (bVar2 == 0) break;
            for (uVar6 = (uint)pBVar5[-1]; (int)uVar6 <= (int)(uint)bVar2; uVar6 = uVar6 + 1) {
              *(undefined1 *)(uVar6 + (int)local_20) = 0;
              bVar2 = *pBVar5;
            }
            pBVar1 = pBVar5 + 1;
            pBVar5 = pBVar5 + 2;
          } while (*pBVar1 != 0);
        }
        BVar4 = ___crtGetStringTypeA
                          ((_locale_t)0x1,(DWORD)local_20,(LPCSTR)0x100,(int)local_28 + 0x100,
                           (LPWORD)0x0,0,0);
        if (BVar4 != 0) {
          *(undefined2 *)((int)local_28 + 0xfe) = 0;
          if ((1 < (int)DAT_6741bed4) && (local_1c.LeadByte[0] != '\0')) {
            pBVar5 = local_1c.LeadByte + 1;
            do {
              if (*pBVar5 == 0) break;
              uVar6 = (uint)pBVar5[-1];
              if (uVar6 <= *pBVar5) {
                puVar7 = (undefined2 *)((int)local_28 + uVar6 * 2 + 0x100);
                do {
                  *puVar7 = 0x8000;
                  uVar6 = uVar6 + 1;
                  puVar7 = puVar7 + 1;
                } while ((int)uVar6 <= (int)(uint)*pBVar5);
              }
              pBVar1 = pBVar5 + 1;
              pBVar5 = pBVar5 + 2;
            } while (*pBVar1 != 0);
          }
          _memcpy(local_28,(void *)((int)local_28 + 0x200),0xfe);
          iVar3 = 0;
          PTR_DAT_6741b560 = (undefined *)((int)local_28 + 0x100);
          DAT_6741f7ac = (undefined2 *)((int)local_28 + 0xfe);
          DAT_6741f7b0 = local_24;
          goto LAB_6740aaaf;
        }
      }
    }
  }
  _free(local_24);
  _free(local_28);
  iVar3 = 1;
LAB_6740aaaf:
  _free(local_20);
  return iVar3;
}



/* ---- ____lc_codepage_func @ 6740aaf9 size=25 ---- */

/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2003 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}



/* ---- ____lc_handle_func @ 6740ab12 size=25 ---- */

/* Library Function - Single Match
    ____lc_handle_func
   
   Library: Visual Studio 2003 Release */

uint * ____lc_handle_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
  }
  return &ptVar2->lc_time_cp;
}



/* ---- __mtinitlocks @ 6740ab2b size=73 ---- */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2003 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_6741df58;
  do {
    if ((&DAT_6741b56c)[iVar2 * 2] == 1) {
      (&DAT_6741b568)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_6741b568)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_6741b568)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/* ---- __mtdeletelocks @ 6740ab74 size=85 ---- */

/* Library Function - Single Match
    __mtdeletelocks
   
   Library: Visual Studio 2003 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_6741b568;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x6741b688);
  puVar1 = &DAT_6741b568;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x6741b688);
  return;
}



/* ---- FUN_6740abc9 @ 6740abc9 size=21 ---- */

void __cdecl FUN_6740abc9(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_6741b568)[param_1 * 2]);
  return;
}



/* ---- __mtinitlocknum @ 6740abde size=151 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2003 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_67416e10;
  uStack_c = 0x6740abea;
  piVar1 = &DAT_6741b568 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = _malloc(0x18);
    if (_Memory == (void *)0x0) {
      piVar1 = FUN_6740cf07();
      *piVar1 = 0xc;
      return 0;
    }
    __lock(10);
    local_8 = (undefined *)0x0;
    if (*piVar1 == 0) {
      iVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
      if (iVar2 == 0) {
        _free(_Memory);
        piVar1 = FUN_6740cf07();
        *piVar1 = 0xc;
        __local_unwind2((int)local_14,-1);
        return 0;
      }
      *piVar1 = (int)_Memory;
    }
    else {
      _free(_Memory);
    }
    local_8 = (undefined *)0xffffffff;
    FUN_6740ac75();
  }
  return 1;
}



/* ---- FUN_6740ac75 @ 6740ac75 size=9 ---- */

void FUN_6740ac75(void)

{
  FUN_6740abc9(10);
  return;
}



/* ---- __lock @ 6740ac7e size=49 ---- */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_6741b568)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_6741b568)[_File * 2]);
  return;
}



/* ---- FUN_6740acaf @ 6740acaf size=6 ---- */

undefined4 FUN_6740acaf(void)

{
  return DAT_6741f7a4;
}



/* ---- FUN_6740acb5 @ 6740acb5 size=6 ---- */

undefined * FUN_6740acb5(void)

{
  return &DAT_6741f7a8;
}



/* ---- ___freetlocinfo @ 6740acbb size=208 ---- */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2003 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (((*(int *)((int)param_1 + 0x3c) != DAT_6741e2d8) && (*(int *)((int)param_1 + 0x3c) != 0)) &&
     (**(int **)((int)param_1 + 0x2c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x34);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_6741e3f4)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0x3c));
    }
    piVar1 = *(int **)((int)param_1 + 0x30);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_6741e3fc)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0x3c));
    }
    _free(*(void **)((int)param_1 + 0x2c));
    _free(*(void **)((int)param_1 + 0x3c));
  }
  piVar1 = *(int **)((int)param_1 + 0x40);
  if (((piVar1 != DAT_6741f7b0) && (piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
    _free(piVar1);
    _free((void *)(*(int *)((int)param_1 + 0x44) + -0xfe));
  }
  puVar2 = *(undefined4 **)((int)param_1 + 0x50);
  if (((puVar2 != DAT_6741e2d4) && (puVar2 != (undefined4 *)0x0)) && (puVar2[0x2d] == 0)) {
    ___free_lc_time(puVar2);
    _free(*(void **)((int)param_1 + 0x50));
  }
  _free(param_1);
  return;
}



/* ---- ___updatetlocinfo_lk @ 6740ad8b size=193 ---- */

/* Library Function - Single Match
    ___updatetlocinfo_lk
   
   Library: Visual Studio 2003 Release */

int ___updatetlocinfo_lk(void)

{
  int *piVar1;
  int *piVar2;
  _ptiddata p_Var3;
  
  p_Var3 = __getptd();
  piVar1 = (int *)p_Var3->_tfpecode;
  if (piVar1 != (int *)PTR_DAT_6741b6e4) {
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xb];
      *piVar1 = *piVar1 + -1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xd];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xc];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0x10];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    }
    p_Var3->_tfpecode = (int)PTR_DAT_6741b6e4;
    *(int *)PTR_DAT_6741b6e4 = *(int *)PTR_DAT_6741b6e4 + 1;
    if (*(int *)(PTR_DAT_6741b6e4 + 0x2c) != 0) {
      **(int **)(PTR_DAT_6741b6e4 + 0x2c) = **(int **)(PTR_DAT_6741b6e4 + 0x2c) + 1;
    }
    if (*(int *)(PTR_DAT_6741b6e4 + 0x34) != 0) {
      **(int **)(PTR_DAT_6741b6e4 + 0x34) = **(int **)(PTR_DAT_6741b6e4 + 0x34) + 1;
    }
    if (*(int *)(PTR_DAT_6741b6e4 + 0x30) != 0) {
      **(int **)(PTR_DAT_6741b6e4 + 0x30) = **(int **)(PTR_DAT_6741b6e4 + 0x30) + 1;
    }
    if (*(int *)(PTR_DAT_6741b6e4 + 0x40) != 0) {
      **(int **)(PTR_DAT_6741b6e4 + 0x40) = **(int **)(PTR_DAT_6741b6e4 + 0x40) + 1;
    }
    *(int *)(*(int *)(PTR_DAT_6741b6e4 + 0x4c) + 0xb4) =
         *(int *)(*(int *)(PTR_DAT_6741b6e4 + 0x4c) + 0xb4) + 1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != &DAT_6741b690)) {
      ___freetlocinfo(piVar1);
    }
  }
  return p_Var3->_tfpecode;
}



/* ---- __strcats @ 6740ae4f size=36 ---- */

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Release */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_2) {
    piVar1 = &param_2;
    iVar2 = param_2;
    do {
      piVar1 = piVar1 + 1;
      FUN_6740e010(param_1,(uint *)*piVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



/* ---- ___lc_strtolc @ 6740ae73 size=220 ---- */

/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  char *_Dest;
  size_t _Count;
  char *_Str;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      do {
        _Count = _strcspn(_Str,"_.,");
        if (_Count == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_Count];
        if (param_2 == (char *)0x0) {
          if (0x3f < _Count) {
            return 0xffffffff;
          }
          if (cVar1 == '.') {
            return 0xffffffff;
          }
          _Dest = param_1;
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _Count) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _Count) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x80;
        }
        _strncpy(_Dest,_Str,_Count);
        if ((cVar1 == ',') || (cVar1 == '\0')) {
          return 0;
        }
        param_2 = param_2 + 1;
        _Str = _Str + _Count + 1;
      } while( true );
    }
    _strncpy(param_1 + 0x80,param_2 + 1,0xf);
    param_1[0x8f] = '\0';
  }
  return 0;
}



/* ---- ___lc_lctostr @ 6740af4f size=78 ---- */

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Release */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_6740e000(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}



/* ---- ___updatetlocinfo @ 6740af9d size=50 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2003 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  pthreadlocinfo ptVar1;
  
  __lock(0xc);
  ptVar1 = (pthreadlocinfo)___updatetlocinfo_lk();
  FUN_6740afcf();
  return ptVar1;
}



/* ---- FUN_6740afcf @ 6740afcf size=9 ---- */

void FUN_6740afcf(void)

{
  FUN_6740abc9(0xc);
  return;
}



/* ---- __setlocale_get_all @ 6740afd8 size=191 ---- */

/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2003 Release */

uint * __setlocale_get_all(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_6741b824 == (uint *)0x0) {
    DAT_6741b824 = _malloc(0x351);
    if (DAT_6741b824 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  *(undefined1 *)DAT_6741b824 = 0;
  __strcats(DAT_6741b824,3);
  ppuVar3 = &PTR_DAT_6741b830;
  do {
    FUN_6740e010(DAT_6741b824,(uint *)&DAT_67416ffc);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,*ppuVar4);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    __strcats(DAT_6741b824,3);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x6741b860);
  if (bVar1) {
    _free(DAT_6741b824);
    DAT_6741b824 = (uint *)0x0;
    return (uint *)PTR_DAT_6741b83c;
  }
  return DAT_6741b824;
}



/* ---- __expandlocale @ 6740b097 size=348 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2003 Release */

uint * __cdecl __expandlocale(char *param_1,uint *param_2,undefined2 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  int iVar2;
  BOOL BVar3;
  uint local_98 [36];
  wchar_t local_8 [2];
  
  local_8 = (wchar_t  [2])DAT_6741b534;
  if (param_1 == (char *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if ((*param_1 == 'C') && (param_1[1] == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    sVar1 = _strlen(param_1);
    if ((0x81 < sVar1) ||
       ((iVar2 = _strcmp(&DAT_6741b798,param_1), iVar2 != 0 &&
        (iVar2 = _strcmp(&DAT_6741b710,param_1), iVar2 != 0)))) {
      iVar2 = ___lc_strtolc((char *)local_98,param_1);
      if ((iVar2 != 0) ||
         (BVar3 = ___get_qualified_locale
                            ((LPLC_STRINGS)local_98,(UINT *)&DAT_6741e0a8,(LPLC_STRINGS)local_98),
         BVar3 == 0)) {
        return (uint *)0x0;
      }
      _DAT_6741e0b0 = (uint)DAT_6741e0ac;
      ___lc_lctostr((uint *)&DAT_6741b798,local_98);
      if ((*param_1 == '\0') || (sVar1 = _strlen(param_1), 0x81 < sVar1)) {
        param_1 = "";
      }
      DAT_6741b792 = 0;
      _strncpy(&DAT_6741b710,param_1,0x82);
    }
    if (param_3 != (undefined2 *)0x0) {
      _memcpy(param_3,&DAT_6741e0a8,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      _memcpy(param_4,&DAT_6741e0b0,4);
    }
    FUN_6740e000(param_2,(uint *)&DAT_6741b798);
    param_2 = (uint *)&DAT_6741b798;
  }
  return param_2;
}



/* ---- __setlocale_set_cat @ 6740b1f3 size=655 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setlocale_set_cat
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __setlocale_set_cat(char *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  size_t sVar4;
  uint *puVar5;
  int *piVar6;
  BOOL BVar7;
  uint uVar8;
  undefined4 uVar9;
  int unaff_ESI;
  undefined1 local_1c4 [8];
  int local_1bc;
  uint local_1b4;
  ushort local_1b0 [6];
  int local_1a4;
  LPWORD local_1a0;
  uint *local_19c;
  undefined *local_198;
  LPWORD local_194;
  undefined *local_190;
  undefined1 local_18c;
  byte abStack_18b [255];
  uint local_8c [33];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  puVar2 = __expandlocale(param_1,local_8c,local_1b0,&local_194);
  uVar9 = 0;
  if (puVar2 != (uint *)0x0) {
    iVar3 = _strcmp((char *)local_8c,(char *)(&DAT_6741b824)[unaff_ESI * 3]);
    if (iVar3 == 0) {
      uVar9 = (&DAT_6741b824)[unaff_ESI * 3];
    }
    else {
      sVar4 = _strlen((char *)local_8c);
      local_19c = _malloc(sVar4 + 1);
      uVar9 = 0;
      if (local_19c != (uint *)0x0) {
        local_198 = (undefined *)(&DAT_6741b824)[unaff_ESI * 3];
        puVar2 = &DAT_6741e27c + unaff_ESI;
        local_1b4 = *puVar2;
        local_190 = &DAT_6741e2a8 + unaff_ESI * 6;
        _memcpy(local_1c4,local_190,6);
        local_1a0 = DAT_6741e294;
        puVar5 = FUN_6740e000(local_19c,local_8c);
        (&DAT_6741b824)[unaff_ESI * 3] = puVar5;
        *puVar2 = (uint)local_1b0[0];
        _memcpy(local_190,local_1b0,6);
        if (unaff_ESI == 2) {
          local_190 = (undefined *)0x0;
          DAT_6741e294 = local_194;
          local_1a4 = DAT_6741b70c;
          piVar6 = (int *)&DAT_6741b6e8;
          iVar3 = DAT_6741b708;
          do {
            if (local_194 == (LPWORD)*piVar6) {
              if (local_190 != (undefined *)0x0) {
                DAT_6741b6e8 = (&DAT_6741b6e8)[(int)local_190 * 2];
                DAT_6741b6ec = (&DAT_6741b6ec)[(int)local_190 * 2];
                (&DAT_6741b6e8)[(int)local_190 * 2] = (LPWORD)iVar3;
                (&DAT_6741b6ec)[(int)local_190 * 2] = local_1a4;
              }
              break;
            }
            local_1bc = *piVar6;
            local_190 = local_190 + 1;
            *piVar6 = iVar3;
            iVar1 = piVar6[1];
            piVar6[1] = local_1a4;
            piVar6 = piVar6 + 2;
            iVar3 = local_1bc;
            local_1a4 = iVar1;
          } while ((int)piVar6 < 0x6741b710);
          if (local_190 == (undefined *)0x5) {
            BVar7 = ___crtGetStringTypeA
                              ((_locale_t)0x1,0x67416f20,(LPCSTR)0x7f,(int)&local_18c,local_194,
                               DAT_6741e284,1);
            if (BVar7 == 0) {
              DAT_6741b6ec = 0;
            }
            else {
              uVar8 = 0;
              do {
                abStack_18b[uVar8 * 2] = abStack_18b[uVar8 * 2] & 1;
                uVar8 = uVar8 + 1;
              } while (uVar8 < 0x7f);
              iVar3 = _memcmp(&local_18c,&DAT_67416e20,0xfe);
              DAT_6741b6ec = (uint)(iVar3 == 0);
            }
            DAT_6741b6e8 = DAT_6741e294;
          }
          DAT_6741bed0 = DAT_6741b6ec;
        }
        if (unaff_ESI == 1) {
          DAT_6741e298 = local_194;
        }
        iVar3 = (**(code **)(&DAT_6741b828 + unaff_ESI * 0xc))();
        if (iVar3 == 0) {
          if (local_198 != &DAT_6741b688) {
            _free(local_198);
          }
          uVar9 = (&DAT_6741b824)[unaff_ESI * 3];
        }
        else {
          (&DAT_6741b824)[unaff_ESI * 3] = local_198;
          _free(local_19c);
          *puVar2 = local_1b4;
          DAT_6741e294 = local_1a0;
          uVar9 = 0;
        }
      }
    }
  }
  return uVar9;
}



/* ---- __setlocale_lk @ 6740b482 size=473 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setlocale_lk
   
   Library: Visual Studio 2003 Release */

uint * __fastcall __setlocale_lk(char *param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  int local_98;
  int local_90;
  uint local_8c [33];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  if (param_2 == 0) {
    bVar1 = true;
    local_90 = 0;
    if (param_1 != (char *)0x0) {
      if (((*param_1 == 'L') && (param_1[1] == 'C')) && (param_1[2] == '_')) {
        do {
          pcVar3 = _strpbrk(param_1,"=;");
          if (((pcVar3 == (char *)0x0) || (sVar4 = (int)pcVar3 - (int)param_1, sVar4 == 0)) ||
             (*pcVar3 == ';')) {
            return (uint *)0x0;
          }
          local_98 = 1;
          ppuVar8 = &PTR_s_LC_COLLATE_6741b82c;
          do {
            iVar5 = _strncmp(*ppuVar8,param_1,sVar4);
            if ((iVar5 == 0) && (sVar6 = _strlen(*ppuVar8), sVar4 == sVar6)) break;
            local_98 = local_98 + 1;
            ppuVar8 = ppuVar8 + 3;
          } while ((int)ppuVar8 < 0x6741b85d);
          pcVar3 = pcVar3 + 1;
          sVar4 = _strcspn(pcVar3,";");
          if ((sVar4 == 0) && (*pcVar3 != ';')) {
            return (uint *)0x0;
          }
          if (local_98 < 6) {
            _strncpy((char *)local_8c,pcVar3,sVar4);
            *(undefined1 *)((int)local_8c + sVar4) = 0;
            iVar5 = __setlocale_set_cat((char *)local_8c);
            if (iVar5 != 0) {
              local_90 = local_90 + 1;
            }
          }
        } while ((pcVar3[sVar4] != '\0') && (param_1 = pcVar3 + sVar4 + 1, *param_1 != '\0'));
        if (local_90 == 0) {
          return (uint *)0x0;
        }
      }
      else {
        puVar2 = __expandlocale(param_1,local_8c,(undefined2 *)0x0,(undefined4 *)0x0);
        if (puVar2 == (uint *)0x0) {
          return (uint *)0x0;
        }
        puVar7 = &DAT_6741b824;
        do {
          if ((void **)puVar7 != &DAT_6741b824) {
            iVar5 = _strcmp((char *)local_8c,(char *)*puVar7);
            if ((iVar5 == 0) || (iVar5 = __setlocale_set_cat((char *)local_8c), iVar5 != 0)) {
              local_90 = local_90 + 1;
            }
            else {
              bVar1 = false;
            }
          }
          puVar7 = puVar7 + 3;
        } while ((int)puVar7 < 0x6741b861);
        if (bVar1) {
          puVar2 = __setlocale_get_all();
          _free(DAT_6741b824);
          DAT_6741b824 = (void *)0x0;
          return puVar2;
        }
        if (local_90 == 0) {
          return (uint *)0x0;
        }
      }
    }
    puVar2 = __setlocale_get_all();
  }
  else {
    if (param_1 == (char *)0x0) {
      return (&DAT_6741b824)[param_2 * 3];
    }
    puVar2 = (uint *)__setlocale_set_cat(param_1);
  }
  return puVar2;
}



/* ---- _setlocale @ 6740b65b size=337 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2003 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  undefined4 *_Memory;
  int iVar1;
  uint *local_20;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_67417008;
  uStack_c = 0x6740b667;
  if ((_Category < 0) || (5 < _Category)) {
    local_20 = (uint *)0x0;
  }
  else {
    __lock(0xc);
    local_8 = (undefined *)0x0;
    if (_Locale == (char *)0x0) {
      local_20 = __setlocale_lk((char *)0x0,_Category);
      __local_unwind2((int)local_14,-1);
    }
    else {
      _Memory = _malloc(0x54);
      if (_Memory == (undefined4 *)0x0) {
        local_20 = (uint *)0x0;
      }
      else {
        local_20 = __setlocale_lk(_Locale,_Category);
        if (local_20 != (uint *)0x0) {
          *_Memory = 0;
          _Memory[1] = DAT_6741e294;
          _Memory[2] = DAT_6741e298;
          for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
            _Memory[iVar1 + 3] = (&DAT_6741e27c)[iVar1];
          }
          _Memory[9] = DAT_6741bed0;
          _Memory[10] = DAT_6741bed4;
          _Memory[0xb] = DAT_6741e3f8;
          _Memory[0xc] = DAT_6741e3fc;
          _Memory[0xd] = DAT_6741e3f4;
          _Memory[0xe] = PTR_PTR_6741bfd4;
          _Memory[0xf] = DAT_6741e2d8;
          _Memory[0x10] = DAT_6741f7b0;
          _Memory[0x11] = DAT_6741f7ac;
          _Memory[0x12] = PTR_DAT_6741b560;
          _Memory[0x13] = PTR_PTR_6741bee0;
          _Memory[0x14] = DAT_6741e2d4;
          if ((*(int *)PTR_DAT_6741b6e4 == 0) && ((undefined4 *)PTR_DAT_6741b6e4 != &DAT_6741b690))
          {
            ___freetlocinfo(PTR_DAT_6741b6e4);
          }
          PTR_DAT_6741b6e4 = (undefined *)_Memory;
          ___updatetlocinfo_lk();
        }
      }
      if ((local_20 == (uint *)0x0) && (_Memory != (undefined4 *)0x0)) {
        _free(_Memory);
      }
      local_8 = (undefined *)0xffffffff;
      FUN_6740b7a4();
    }
  }
  return (char *)local_20;
}



/* ---- FUN_6740b7a4 @ 6740b7a4 size=9 ---- */

void FUN_6740b7a4(void)

{
  FUN_6740abc9(0xc);
  return;
}



/* ---- __SEH_prolog @ 6740b7b8 size=59 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog
   
   Library: Visual Studio */

void __cdecl __SEH_prolog(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 auStack_18 [4];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_18 + iVar1 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack_18 + iVar1 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack_18 + iVar1 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack_18 + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog @ 6740b7f3 size=17 ---- */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog
   
   Library: Visual Studio */

void __SEH_epilog(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* ---- _memcmp @ 6740b810 size=184 ---- */

/* Library Function - Single Match
    _memcmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  if (_Size != 0) {
    if ((((uint)_Buf1 | (uint)_Buf2) & 3) == 0) {
      uVar2 = _Size & 3;
      uVar5 = _Size >> 2;
      bVar9 = false;
      puVar7 = _Buf1;
      puVar8 = _Buf2;
      if (uVar5 != 0) {
        do {
          _Buf1 = puVar7;
          _Buf2 = puVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          _Buf2 = puVar8 + 1;
          _Buf1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = _Buf1;
          puVar8 = _Buf2;
        } while (bVar9);
        if (!bVar9) {
          uVar2 = *(uint *)((int)_Buf1 + -4);
          uVar5 = *(uint *)((int)_Buf2 + -4);
          bVar9 = (byte)uVar2 < (byte)uVar5;
          if ((((byte)uVar2 == (byte)uVar5) &&
              (bVar4 = (byte)(uVar2 >> 8), bVar6 = (byte)(uVar5 >> 8), bVar9 = bVar4 < bVar6,
              bVar4 == bVar6)) &&
             (bVar4 = (byte)(uVar2 >> 0x10), bVar6 = (byte)(uVar5 >> 0x10), bVar9 = bVar4 < bVar6,
             bVar4 == bVar6)) {
            bVar9 = (byte)(uVar2 >> 0x18) < (byte)(uVar5 >> 0x18);
          }
          goto LAB_6740b890;
        }
      }
      if (uVar2 != 0) {
        uVar5 = *(uint *)_Buf1;
        uVar1 = *(uint *)_Buf2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
LAB_6740b890:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar3 = 0;
        if (uVar2 != 1) {
          bVar6 = (byte)(uVar5 >> 8);
          bVar4 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto LAB_6740b890;
          iVar3 = 0;
          if (uVar2 != 2) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto LAB_6740b890;
            iVar3 = uVar2 - 3;
          }
        }
        return iVar3;
      }
    }
    else {
      if ((_Size & 1) == 0) goto LAB_6740b843;
      bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
      if (*(byte *)_Buf1 != *(byte *)_Buf2) goto LAB_6740b890;
      _Buf1 = (void *)((int)_Buf1 + 1);
      _Buf2 = (void *)((int)_Buf2 + 1);
      for (_Size = _Size - 1; _Size != 0; _Size = _Size - 2) {
LAB_6740b843:
        bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
        if ((*(byte *)_Buf1 != *(byte *)_Buf2) ||
           (bVar9 = *(byte *)((int)_Buf1 + 1) < *(byte *)((int)_Buf2 + 1),
           *(byte *)((int)_Buf1 + 1) != *(byte *)((int)_Buf2 + 1))) goto LAB_6740b890;
        _Buf2 = (void *)((int)_Buf2 + 2);
        _Buf1 = (void *)((int)_Buf1 + 2);
      }
    }
  }
  return 0;
}



/* ---- TypeMatch @ 6740b8c8 size=79 ---- */

/* Library Function - Single Match
    int __cdecl TypeMatch(struct _s_HandlerType const *,struct _s_CatchableType const *,struct
   _s_ThrowInfo const *)
   
   Library: Visual Studio 2003 Release */

int __cdecl TypeMatch(_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  int iVar1;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
    if ((iVar1 != *(int *)(unaff_EDI + 4)) &&
       (iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(unaff_EDI + 4) + 8)), iVar1 != 0)) {
      return 0;
    }
    if (((((*unaff_EDI & 2) != 0) && ((*unaff_ESI & 8) == 0)) ||
        (((param_1->adjectives & 1) != 0 && ((*unaff_ESI & 1) == 0)))) ||
       (((param_1->adjectives & 2) != 0 && ((*unaff_ESI & 2) == 0)))) {
      return 0;
    }
  }
  return 1;
}



/* ---- ___FrameUnwindToState @ 6740b935 size=148 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2003 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  p_Var1 = __getptd();
  p_Var1->_purecall = (void *)((int)p_Var1->_purecall + 1);
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
  FUN_6740b9e8();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/* ---- FUN_6740b9e8 @ 6740b9e8 size=27 ---- */

void FUN_6740b9e8(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < (int)p_Var1->_purecall) {
    p_Var1 = __getptd();
    p_Var1->_purecall = (void *)((int)p_Var1->_purecall + -1);
  }
  return;
}



/* ---- ___DestructExceptionObject @ 6740ba03 size=52 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2003 Release */

void __cdecl ___DestructExceptionObject(int param_1)

{
  void *pvVar1;
  int unaff_ESI;
  void *unaff_EDI;
  
  if ((param_1 != 0) && (pvVar1 = *(void **)(*(int *)(param_1 + 0x1c) + 4), pvVar1 != (void *)0x0))
  {
    FID_conflict__CallMemberFunction1(*(void **)(param_1 + 0x18),pvVar1,unaff_EDI,unaff_ESI);
  }
  return;
}



/* ---- AdjustPointer @ 6740ba48 size=31 ---- */

/* Library Function - Single Match
    void * __cdecl AdjustPointer(void *,struct PMD const &)
   
   Library: Visual Studio 2003 Release */

void * __cdecl AdjustPointer(void *param_1,PMD *param_2)

{
  int in_EAX;
  void *pvVar1;
  int *in_ECX;
  
  pvVar1 = (void *)(*in_ECX + in_EAX);
  if (-1 < in_ECX[1]) {
    pvVar1 = (void *)((int)pvVar1 + *(int *)(*(int *)(in_ECX[1] + in_EAX) + in_ECX[2]) + in_ECX[1]);
  }
  return pvVar1;
}



/* ---- FUN_6740ba67 @ 6740ba67 size=19 ---- */

bool FUN_6740ba67(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return p_Var1->_purecall != (void *)0x0;
}



/* ---- CallCatchBlock @ 6740ba7a size=157 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2003 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  FrameInfo local_54 [8];
  undefined4 local_4c;
  void *local_48;
  void *local_44;
  FrameInfo *local_40;
  undefined4 local_3c;
  void *local_24;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_67417040;
  uStack_c = 0x6740ba86;
  local_4c = 0;
  local_3c = *(undefined4 *)(param_2 + -4);
  local_40 = _CreateFrameInfo(local_54,*(void **)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_44 = p_Var1->_unexpected;
  p_Var1 = __getptd();
  local_48 = p_Var1->_translator;
  p_Var1 = __getptd();
  p_Var1->_unexpected = param_1;
  p_Var1 = __getptd();
  p_Var1->_translator = param_3;
  local_8 = (undefined *)0x1;
  local_24 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xffffffff;
  FUN_6740bbcf();
  return local_24;
}



/* ---- FUN_6740bbcf @ 6740bbcf size=111 ---- */

void FUN_6740bbcf(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x38);
  _FindAndUnlinkFrame(*(FrameInfo **)(unaff_EBP + -0x3c));
  p_Var1 = __getptd();
  p_Var1->_unexpected = *(void **)(unaff_EBP + -0x40);
  p_Var1 = __getptd();
  p_Var1->_translator = *(void **)(unaff_EBP + -0x44);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((unaff_ESI[5] == 0x19930520 || (unaff_ESI[5] == 0x19930521)))) &&
     ((*(int *)(unaff_EBP + -0x48) == 0 && (*(int *)(unaff_EBP + -0x20) != 0)))) {
    iVar2 = IsExceptionObjectToBeDestroyed((void *)unaff_ESI[6]);
    if (iVar2 != 0) {
      __abnormal_termination();
      ___DestructExceptionObject((int)unaff_ESI);
    }
  }
  return;
}



/* ---- BuildCatchObject @ 6740bc3e size=368 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __cdecl BuildCatchObject(struct EHExceptionRecord *,void *,struct _s_HandlerType const
   *,struct _s_CatchableType const *)
   
   Library: Visual Studio 2003 Release */

void __cdecl
BuildCatchObject(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
                _s_CatchableType *param_4)

{
  int iVar1;
  void *pvVar2;
  void *_Src;
  byte *in_ECX;
  int *in_EDX;
  PMD *unaff_ESI;
  PMD *unaff_EDI;
  
  if (*(int *)((int)param_2 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)((int)param_2 + 4) + 8) == '\0') {
    return;
  }
  if ((*(int *)((int)param_2 + 8) == 0) && ((*(byte *)((int)param_2 + 3) & 0x80) == 0)) {
    return;
  }
  if (-1 < (int)*(uint *)param_2) {
    in_EDX = (int *)(*(int *)((int)param_2 + 8) + 0xc + (int)in_EDX);
  }
  pvVar2 = *(void **)(param_1 + 0x18);
  if ((*(uint *)param_2 & 8) == 0) {
    if ((*in_ECX & 1) == 0) {
      if (*(int *)(in_ECX + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) {
          pvVar2 = *(void **)(in_ECX + 0x14);
          _Src = AdjustPointer(pvVar2,unaff_EDI);
          _memmove(in_EDX,_Src,(size_t)pvVar2);
          return;
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) &&
           (iVar1 = _ValidateExecute(*(_func_int **)(in_ECX + 0x18)), iVar1 != 0)) {
          if ((*in_ECX & 4) == 0) {
            pvVar2 = AdjustPointer(unaff_EDI,unaff_ESI);
            FID_conflict__CallMemberFunction1
                      (in_EDX,*(void **)(in_ECX + 0x18),pvVar2,(int)unaff_EDI);
            return;
          }
          iVar1 = 1;
          pvVar2 = AdjustPointer((void *)0x1,unaff_EDI);
          FID_conflict__CallMemberFunction1(in_EDX,*(void **)(in_ECX + 0x18),pvVar2,iVar1);
          return;
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) {
        _memmove(in_EDX,*(void **)(param_1 + 0x18),*(size_t *)(in_ECX + 0x14));
        if (*(int *)(in_ECX + 0x14) != 4) {
          return;
        }
        if (*in_EDX == 0) {
          return;
        }
        goto LAB_6740bcb7;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(pvVar2,1);
    if ((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) {
      *in_EDX = *(int *)(param_1 + 0x18);
LAB_6740bcb7:
      pvVar2 = AdjustPointer(unaff_EDI,unaff_ESI);
      *in_EDX = (int)pvVar2;
      return;
    }
  }
  _inconsistency();
  return;
}



/* ---- CatchIt @ 6740bdba size=103 ---- */

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2003 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  int in_ECX;
  void *unaff_EBX;
  _s_HandlerType *unaff_EBP;
  _s_HandlerType *unaff_ESI;
  int *unaff_EDI;
  _s_CatchableType *unaff_retaddr;
  _s_HandlerType *p_Var2;
  
  if (in_ECX != 0) {
    BuildCatchObject(param_1,unaff_EBX,unaff_EBP,unaff_retaddr);
  }
  if (param_6 == (_s_HandlerType *)0x0) {
    param_6 = unaff_ESI;
  }
  else {
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_6,param_1);
  p_Var2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  unaff_ESI->dispCatchObj = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,(EHRegistrationNode *)unaff_ESI,(_CONTEXT *)param_2,param_4,
                          param_5,0x100,(ulong)p_Var2);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,(EHRegistrationNode *)unaff_ESI);
  }
  return;
}



/* ---- FindHandlerForForeignException @ 6740be21 size=190 ---- */

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  int iVar3;
  _s_TryBlockMapEntry *p_Var4;
  EHRegistrationNode *in_ECX;
  _s_CatchableType *unaff_EBX;
  int unaff_ESI;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar5;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    pEVar5 = in_ECX;
    p_Var2 = __getptd();
    if (((p_Var2->_NLG_dwCode == 0) ||
        (iVar3 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
        iVar3 == 0)) &&
       (p_Var4 = _GetRangeOfTrysToCheck
                           (param_5,param_7,param_6,(uint *)((int)register0x00000010 + -8),
                            (uint *)((int)register0x00000010 + -0xc)), in_ECX < pEVar5)) {
      do {
        if (((p_Var4->tryLow <= param_6) && (param_6 <= p_Var4->tryHigh)) &&
           ((pTVar1 = p_Var4->pHandlerArray[p_Var4->nCatches + -1].pType,
            pTVar1 == (TypeDescriptor *)0x0 || (*(char *)&pTVar1[1].pVFTable == '\0')))) {
          CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)param_7,
                  (_s_HandlerType *)param_8,unaff_EBX,unaff_EDI,unaff_ESI,pEVar5,(uchar)in_ECX);
        }
        in_ECX = in_ECX + 1;
        p_Var4 = p_Var4 + 1;
      } while (in_ECX < pEVar5);
    }
  }
  return;
}



/* ---- FindHandler @ 6740bedf size=516 ---- */

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  int iVar1;
  _ptiddata p_Var2;
  int iVar3;
  _s_TryBlockMapEntry *p_Var4;
  int iVar5;
  int unaff_EBX;
  _s_TryBlockMapEntry *unaff_ESI;
  _s_CatchableType *unaff_EDI;
  EHRegistrationNode *pEVar6;
  uint in_stack_ffffffdc;
  uint local_20 [2];
  int local_18;
  int *local_14;
  uint local_10;
  _s_TryBlockMapEntry *local_c;
  undefined1 local_5;
  
  iVar1 = *(int *)(param_2 + 8);
  local_5 = 0;
  if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
    _inconsistency();
  }
  if (*(int *)param_1 == -0x1f928c9d) {
    if ((*(int *)(param_1 + 0x10) == 3) &&
       (((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)) &&
        (*(int *)(param_1 + 0x1c) == 0)))) {
      p_Var2 = __getptd();
      if (p_Var2->_unexpected == (void *)0x0) {
        return;
      }
      p_Var2 = __getptd();
      param_1 = p_Var2->_unexpected;
      p_Var2 = __getptd();
      param_3 = p_Var2->_translator;
      local_5 = 1;
      iVar3 = _ValidateRead(param_1,1);
      if (iVar3 == 0) {
        _inconsistency();
      }
      if (*(int *)param_1 != -0x1f928c9d) goto LAB_6740c0b8;
      if (((*(int *)(param_1 + 0x10) == 3) &&
          ((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)))) &&
         (*(int *)(param_1 + 0x1c) == 0)) {
        _inconsistency();
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)))) {
      p_Var4 = _GetRangeOfTrysToCheck(param_5,param_7,iVar1,&local_10,local_20 + -1);
      do {
        local_c = p_Var4;
        if (in_stack_ffffffdc <= local_10) {
          if (param_6 == '\0') {
            return;
          }
          ___DestructExceptionObject((int)param_1);
          return;
        }
        if ((p_Var4->tryLow <= iVar1) && (iVar1 <= p_Var4->tryHigh)) {
          for (iVar3 = p_Var4->nCatches; 0 < iVar3; iVar3 = iVar3 + -1) {
            local_14 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
            local_18 = *local_14;
            if (0 < local_18) {
              do {
                local_14 = local_14 + 1;
                pEVar6 = (EHRegistrationNode *)*local_14;
                iVar5 = TypeMatch(*(_s_HandlerType **)(param_1 + 0x1c),unaff_EDI,
                                  (_s_ThrowInfo *)unaff_ESI);
                p_Var4 = local_c;
                if (iVar5 != 0) {
                  CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,
                          (_s_FuncInfo *)param_7,(_s_HandlerType *)param_8,unaff_EDI,unaff_ESI,
                          unaff_EBX,pEVar6,(uchar)in_stack_ffffffdc);
                  goto LAB_6740c08b;
                }
                local_18 = local_18 + -1;
              } while (0 < local_18);
            }
          }
        }
LAB_6740c08b:
        local_10 = local_10 + 1;
        p_Var4 = p_Var4 + 1;
      } while( true );
    }
  }
LAB_6740c0b8:
  if (param_6 == '\0') {
    FindHandlerForForeignException(param_1,param_2,param_3,param_4,param_5,iVar1,param_7,param_8);
    return;
  }
  terminate();
  return;
}



/* ---- ___InternalCxxFrameHandler @ 6740c0e3 size=162 ---- */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  undefined4 uVar1;
  
  if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) != 0x19930520) {
    _inconsistency();
  }
  if (((byte)param_1[4] & 0x66) == 0) {
    if (param_5->nTryBlocks != 0) {
      if (((*(int *)param_1 == -0x1f928c9d) && (0x19930520 < *(uint *)(param_1 + 0x14))) &&
         (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)) {
        uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar1;
      }
      FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5->maxState != 0) && (param_6 == 0)) {
    ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



/* ---- __fsopen @ 6740c185 size=82 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  FILE *pFVar1;
  int *piVar2;
  
  pFVar1 = __getstream();
  if (pFVar1 == (FILE *)0x0) {
    piVar2 = FUN_6740cf07();
    *piVar2 = 0x18;
    pFVar1 = (FILE *)0x0;
  }
  else {
    pFVar1 = __openfile(_Filename,_Mode,_ShFlag,pFVar1);
    FUN_6740c1d7();
  }
  return pFVar1;
}



/* ---- FUN_6740c1d7 @ 6740c1d7 size=10 ---- */

void FUN_6740c1d7(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}



/* ---- _fopen @ 6740c1e1 size=19 ---- */

/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}



/* ---- _memset @ 6740c200 size=96 ---- */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
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



/* ---- FUN_6740c260 @ 6740c260 size=6 ---- */

undefined ** FUN_6740c260(void)

{
  return &PTR_DAT_6741b880;
}



/* ---- __lock_file @ 6740c323 size=47 ---- */

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < (FILE *)0x6741b880) || ((FILE *)0x6741bae0 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
    return;
  }
  __lock(((int)(_File + -0x33a0dc4) >> 5) + 0x10);
  return;
}



/* ---- __lock_file2 @ 6740c352 size=35 ---- */

/* Library Function - Single Match
    __lock_file2
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ---- __unlock_file @ 6740c375 size=47 ---- */

/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if ((_File < (FILE *)0x6741b880) || ((FILE *)0x6741bae0 < _File)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
    return;
  }
  FUN_6740abc9(((int)(_File + -0x33a0dc4) >> 5) + 0x10);
  return;
}



/* ---- __unlock_file2 @ 6740c3a4 size=35 ---- */

/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2003 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_6740abc9(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ---- _abort @ 6740c3c7 size=23 ---- */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Release */

void __cdecl _abort(void)

{
  __NMSG_WRITE(10);
  _raise(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



/* ---- FUN_6740c3df @ 6740c3df size=9 ---- */

void FUN_6740c3df(void)

{
  TlsAlloc();
  return;
}



/* ---- __mtterm @ 6740c3e8 size=29 ---- */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2003 Release */

void __cdecl __mtterm(void)

{
  if (DAT_6741bb00 != -1) {
    (*DAT_6741e0c4)(DAT_6741bb00);
    DAT_6741bb00 = -1;
  }
  __mtdeletelocks();
  return;
}



/* ---- __initptd @ 6740c405 size=19 ---- */

/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2003 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  _Ptd->_initaddr = &DAT_6741bb10;
  _Ptd->_holdrand = 1;
  return;
}



/* ---- __getptd @ 6740c418 size=113 ---- */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2003 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata p_Var1;
  int iVar2;
  DWORD DVar3;
  
  dwErrCode = GetLastError();
  p_Var1 = (_ptiddata)(*DAT_6741e0bc)(DAT_6741bb00);
  if (p_Var1 == (_ptiddata)0x0) {
    p_Var1 = _calloc(1,0x8c);
    if (p_Var1 != (_ptiddata)0x0) {
      iVar2 = (*DAT_6741e0c0)(DAT_6741bb00,p_Var1);
      if (iVar2 != 0) {
        p_Var1->_initaddr = &DAT_6741bb10;
        p_Var1->_holdrand = 1;
        DVar3 = GetCurrentThreadId();
        p_Var1->_thandle = 0xffffffff;
        p_Var1->_tid = DVar3;
        goto LAB_6740c47d;
      }
    }
    __amsg_exit(0x10);
  }
LAB_6740c47d:
  SetLastError(dwErrCode);
  return p_Var1;
}



/* ---- __freefls@4 @ 6740c489 size=301 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2003 Release */

void __freefls_4(void *param_1)

{
  int *piVar1;
  
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
    if (*(undefined **)((int)param_1 + 0x54) != &DAT_6741bb10) {
      _free(*(undefined **)((int)param_1 + 0x54));
    }
    __lock(0xd);
    piVar1 = *(int **)((int)param_1 + 0x60);
    if (((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) &&
       (piVar1 != DAT_6741e548)) {
      _free(piVar1);
    }
    FUN_6740c5bb();
    __lock(0xc);
    piVar1 = *(int **)((int)param_1 + 100);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (piVar1[0xb] != 0) {
        *(int *)piVar1[0xb] = *(int *)piVar1[0xb] + -1;
      }
      if (piVar1[0xd] != 0) {
        *(int *)piVar1[0xd] = *(int *)piVar1[0xd] + -1;
      }
      if (piVar1[0xc] != 0) {
        *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + -1;
      }
      if (piVar1[0x10] != 0) {
        *(int *)piVar1[0x10] = *(int *)piVar1[0x10] + -1;
      }
      *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
      if (((piVar1 != (int *)PTR_DAT_6741b6e4) && (piVar1 != &DAT_6741b690)) && (*piVar1 == 0)) {
        ___freetlocinfo(piVar1);
      }
    }
    FUN_6740c5c7();
    _free(param_1);
  }
  return;
}



/* ---- FUN_6740c5bb @ 6740c5bb size=9 ---- */

void FUN_6740c5bb(void)

{
  FUN_6740abc9(0xd);
  return;
}



/* ---- FUN_6740c5c7 @ 6740c5c7 size=9 ---- */

void FUN_6740c5c7(void)

{
  FUN_6740abc9(0xc);
  return;
}



/* ---- __freeptd @ 6740c5d0 size=47 ---- */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2003 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_6741bb00 != -1) {
    if (_Ptd == (_ptiddata)0x0) {
      _Ptd = (_ptiddata)(*DAT_6741e0bc)(DAT_6741bb00);
    }
    __freefls_4(_Ptd);
    (*DAT_6741e0c0)(DAT_6741bb00,0);
  }
  return;
}



/* ---- __mtinit @ 6740c5ff size=239 ---- */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __mtinit(void)

{
  int iVar1;
  HMODULE hModule;
  DWORD *pDVar2;
  DWORD DVar3;
  
  iVar1 = __mtinitlocks();
  if (iVar1 == 0) {
    __mtterm();
    return 0;
  }
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_6741e0b8 = GetProcAddress(hModule,"FlsAlloc");
    DAT_6741e0bc = GetProcAddress(hModule,"FlsGetValue");
    DAT_6741e0c0 = GetProcAddress(hModule,"FlsSetValue");
    DAT_6741e0c4 = GetProcAddress(hModule,"FlsFree");
    if (DAT_6741e0bc == (FARPROC)0x0) {
      DAT_6741e0bc = TlsGetValue_exref;
      DAT_6741e0c0 = TlsSetValue_exref;
      DAT_6741e0b8 = FUN_6740c3df;
      DAT_6741e0c4 = TlsFree_exref;
    }
  }
  DAT_6741bb00 = (*DAT_6741e0b8)(__freefls_4);
  if (((DAT_6741bb00 == -1) || (pDVar2 = _calloc(1,0x8c), pDVar2 == (DWORD *)0x0)) ||
     (iVar1 = (*DAT_6741e0c0)(DAT_6741bb00,pDVar2), iVar1 == 0)) {
    __mtterm();
    return 0;
  }
  pDVar2[0x15] = (DWORD)&DAT_6741bb10;
  pDVar2[5] = 1;
  DVar3 = GetCurrentThreadId();
  pDVar2[1] = 0xffffffff;
  *pDVar2 = DVar3;
  return 1;
}



/* ---- terminate @ 6740c6ee size=46 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2003 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->ptlocinfo != (pthreadlocinfo)0x0) {
    p_Var1 = __getptd();
    (*(code *)p_Var1->ptlocinfo)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* ---- _inconsistency @ 6740c723 size=38 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2003 Release */

void __cdecl _inconsistency(void)

{
  if (PTR_terminate_6741bb04 != (undefined *)0x0) {
    (*(code *)PTR_terminate_6741bb04)();
  }
  terminate();
  return;
}



/* ---- __CallSettingFrame@12 @ 6740c750 size=76 ---- */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Library: Visual Studio 2003 Release */

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



/* ---- FUN_6740c79c @ 6740c79c size=78 ---- */

int FUN_6740c79c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((piVar1[5] == 0x19930520 || (piVar1[5] == 0x19930521)))) {
    terminate();
  }
  if ((DAT_6741e0c8 == (_func_int *)0x0) || (iVar2 = _ValidateExecute(DAT_6741e0c8), iVar2 == 0)) {
    return 0;
  }
  iVar2 = (*DAT_6741e0c8)(param_1);
  return iVar2;
}



/* ---- ___security_init_cookie @ 6740c80a size=102 ---- */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2003 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  if ((DAT_6741b534 == 0) || (DAT_6741b534 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime(&local_c);
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_6741b534 = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                   local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_6741b534 == 0) {
      DAT_6741b534 = 0xbb40e64e;
    }
  }
  return;
}



/* ---- ___security_error_handler @ 6740c870 size=318 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___security_error_handler
   
   Library: Visual Studio 2003 Release */

void ___security_error_handler(int param_1)

{
  DWORD DVar1;
  size_t sVar2;
  uint *_Str;
  char *pcVar3;
  uint auStackY_375 [128];
  uint *local_12c;
  uint local_128 [65];
  undefined1 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_674172d8;
  uStack_c = 0x6740c87f;
  local_20 = DAT_6741b534;
  if (DAT_6741e0cc == (code *)0x0) {
    if (param_1 == 1) {
      pcVar3 = "Buffer overrun detected!";
      local_12c = (uint *)0x67417140;
    }
    else {
      pcVar3 = "Unknown security failure detected!";
      local_12c = (uint *)0x67417200;
    }
    local_24 = 0;
    DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_128,0x104);
    if (DVar1 == 0) {
      FUN_6740e000(local_128,(uint *)"<program name unknown>");
    }
    _Str = local_128;
    sVar2 = _strlen((char *)_Str);
    if (0x3c < sVar2 + 0xb) {
      sVar2 = _strlen((char *)_Str);
      _Str = (uint *)((int)auStackY_375 + sVar2 + 0x21c);
      _strncpy((char *)_Str,"...",3);
    }
    _strlen((char *)_Str);
    local_1c = (undefined1 *)(local_128 + -4);
    FUN_6740e000(local_128 + -4,(uint *)pcVar3);
    FUN_6740e010(local_128 + -4,(uint *)&DAT_67417120);
    FUN_6740e010(local_128 + -4,(uint *)"Program: ");
    FUN_6740e010(local_128 + -4,_Str);
    FUN_6740e010(local_128 + -4,(uint *)&DAT_67417120);
    FUN_6740e010(local_128 + -4,local_12c);
    ___crtMessageBoxA((LPCSTR)(local_128 + -4),"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = (undefined *)0x0;
    (*DAT_6741e0cc)();
    local_8 = (undefined *)0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



/* ---- __ValidateEH3RN @ 6740c9b8 size=553 ---- */

/* Library Function - Single Match
    __ValidateEH3RN
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __ValidateEH3RN(void *param_1)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  SIZE_T SVar5;
  int *piVar6;
  LONG LVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  _MEMORY_BASIC_INFORMATION local_24;
  uint *local_8;
  
  pvVar3 = param_1;
  puVar8 = *(uint **)((int)param_1 + 8);
  if ((((uint)puVar8 & 3) != 0) ||
     ((local_8 = *(uint **)((int)Self + 8), local_8 <= puVar8 &&
      (puVar8 < *(uint **)((int)Self + 4))))) {
    return 0;
  }
  puVar1 = (uint *)((int)param_1 + 0xc);
  if (*puVar1 == 0xffffffff) {
    return 1;
  }
  uVar10 = 0;
  param_1 = (void *)0x0;
  puVar4 = puVar8;
  do {
    if ((*puVar4 != 0xffffffff) && (uVar10 <= *puVar4)) {
      return 0;
    }
    if (puVar4[1] != 0) {
      param_1 = (void *)((int)param_1 + 1);
    }
    uVar10 = uVar10 + 1;
    puVar4 = puVar4 + 3;
  } while (uVar10 <= *puVar1);
  if ((param_1 != (void *)0x0) &&
     ((puVar1 = *(uint **)((int)pvVar3 + -8), puVar1 < local_8 || (pvVar3 <= puVar1)))) {
    return 0;
  }
  uVar10 = (uint)puVar8 & 0xfffff000;
  iVar13 = 0;
  if (0 < DAT_6741e0d0) {
    do {
      if ((&DAT_6741e0d8)[iVar13] == uVar10) {
        if (iVar13 < 1) {
          return 1;
        }
        LVar7 = InterlockedExchange((LONG *)&DAT_6741e118,1);
        if (LVar7 != 0) {
          return 1;
        }
        if ((&DAT_6741e0d8)[iVar13] == uVar10) goto LAB_6740cbb3;
        iVar13 = DAT_6741e0d0 + -1;
        if (iVar13 < 0) goto LAB_6740cba1;
        goto LAB_6740cb91;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < DAT_6741e0d0);
  }
  SVar5 = VirtualQuery(puVar8,&local_24,0x1c);
  if (SVar5 == 0) {
    return 0xffffffff;
  }
  if (local_24.Type != 0x1000000) {
    return 0xffffffff;
  }
  if (((byte)local_24.Protect & 0xcc) != 0) {
    if (((*(short *)local_24.AllocationBase != 0x5a4d) ||
        (piVar6 = (int *)(*(int *)((int)local_24.AllocationBase + 0x3c) +
                         (int)local_24.AllocationBase), *piVar6 != 0x4550)) ||
       ((short)piVar6[6] != 0x10b)) {
      return 0xffffffff;
    }
    uVar9 = (uint)*(ushort *)(piVar6 + 5);
    if (*(short *)((int)piVar6 + 6) == 0) {
      return 0xffffffff;
    }
    uVar2 = *(uint *)((int)piVar6 + uVar9 + 0x24);
    if (((uVar2 <= (uint)((int)puVar8 - (int)local_24.AllocationBase)) &&
        ((uint)((int)puVar8 - (int)local_24.AllocationBase) <
         *(int *)((int)piVar6 + uVar9 + 0x20) + uVar2)) &&
       ((*(byte *)((int)piVar6 + uVar9 + 0x3f) & 0x80) != 0)) {
      return 0;
    }
  }
  LVar7 = InterlockedExchange((LONG *)&DAT_6741e118,1);
  iVar13 = DAT_6741e0d0;
  if (LVar7 != 0) {
    return 1;
  }
  iVar11 = DAT_6741e0d0;
  if (0 < DAT_6741e0d0) {
    puVar8 = (uint *)(&DAT_6741e0d4 + DAT_6741e0d0 * 4);
    do {
      if (*puVar8 == uVar10) break;
      iVar11 = iVar11 + -1;
      puVar8 = puVar8 + -1;
    } while (0 < iVar11);
  }
  if (iVar11 == 0) {
    iVar11 = 0xf;
    if (DAT_6741e0d0 < 0x10) {
      iVar11 = DAT_6741e0d0;
    }
    iVar12 = 0;
    if (-1 < iVar11) {
      do {
        puVar8 = &DAT_6741e0d8 + iVar12;
        uVar9 = *puVar8;
        iVar12 = iVar12 + 1;
        *puVar8 = uVar10;
        uVar10 = uVar9;
      } while (iVar12 <= iVar11);
    }
    if (iVar13 < 0x10) {
      DAT_6741e0d0 = iVar13 + 1;
    }
  }
  InterlockedExchange((LONG *)&DAT_6741e118,0);
  return 1;
  while (iVar13 = iVar13 + -1, -1 < iVar13) {
LAB_6740cb91:
    if ((&DAT_6741e0d8)[iVar13] == uVar10) break;
  }
  if (iVar13 < 0) {
LAB_6740cba1:
    if (DAT_6741e0d0 < 0x10) {
      DAT_6741e0d0 = DAT_6741e0d0 + 1;
    }
    iVar13 = DAT_6741e0d0 + -1;
  }
  else if (iVar13 == 0) goto LAB_6740cbcb;
LAB_6740cbb3:
  iVar11 = 0;
  if (-1 < iVar13) {
    do {
      puVar8 = &DAT_6741e0d8 + iVar11;
      uVar9 = *puVar8;
      iVar11 = iVar11 + 1;
      *puVar8 = uVar10;
      uVar10 = uVar9;
    } while (iVar11 <= iVar13);
  }
LAB_6740cbcb:
  InterlockedExchange((LONG *)&DAT_6741e118,0);
  return 1;
}



/* ---- ___crtExitProcess @ 6740cbe1 size=47 ---- */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2003 Release */

void __cdecl ___crtExitProcess(int param_1)

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
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ---- FUN_6740cc11 @ 6740cc11 size=9 ---- */

void FUN_6740cc11(void)

{
  __lock(8);
  return;
}



/* ---- FUN_6740cc1a @ 6740cc1a size=9 ---- */

void FUN_6740cc1a(void)

{
  FUN_6740abc9(8);
  return;
}



/* ---- __initterm @ 6740cc23 size=24 ---- */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Release */

void __cdecl __initterm(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/* ---- __cinit @ 6740cc3b size=106 ---- */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_6741e790 != (code *)0x0) {
    (*DAT_6741e790)(param_1);
  }
  iVar1 = 0;
  puVar2 = &DAT_6741b058;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_6741b06c);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_674109d3);
    puVar2 = &DAT_6741b000;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 < &DAT_6741b054);
    iVar1 = 0;
  }
  return iVar1;
}



/* ---- doexit @ 6740cca5 size=181 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x6740cd59) */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2003 Release */

void __cdecl doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __lock(8);
  if (DAT_6741e160 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_6741e15c = 1;
  DAT_6741e158 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_6741e788 != (undefined4 *)0x0) {
      while (DAT_6741e784 = DAT_6741e784 + -1, DAT_6741e788 <= DAT_6741e784) {
        if ((code *)*DAT_6741e784 != (code *)0x0) {
          (*(code *)*DAT_6741e784)();
        }
      }
    }
    __initterm((undefined4 *)&DAT_6741b078);
  }
  __initterm((undefined4 *)&DAT_6741b084);
  FUN_6740cd54();
  if (param_3 == 0) {
    DAT_6741e160 = 1;
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



/* ---- FUN_6740cd54 @ 6740cd54 size=14 ---- */

void FUN_6740cd54(void)

{
  int unaff_EBP;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + 0x10) != unaff_EDI) {
    FUN_6740abc9(8);
  }
  return;
}



/* ---- __exit @ 6740cd68 size=17 ---- */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  doexit(_Code,1,0);
  return;
}



/* ---- __cexit @ 6740cd79 size=15 ---- */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2003 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}



/* ---- __XcptFilter @ 6740cd88 size=356 ---- */

/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  _ptiddata p_Var6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  
  p_Var6 = __getptd();
  puVar1 = p_Var6->_initaddr;
  puVar9 = puVar1;
  do {
    if (*puVar9 == _ExceptionNum) break;
    puVar9 = puVar9 + 3;
  } while (puVar9 < puVar1 + DAT_6741bb94 * 3);
  if ((puVar1 + DAT_6741bb94 * 3 <= puVar9) || (*puVar9 != _ExceptionNum)) {
    puVar9 = (ulong *)0x0;
  }
  if ((puVar9 == (ulong *)0x0) || (pcVar2 = (code *)puVar9[2], pcVar2 == (code *)0x0)) {
    iVar7 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (pcVar2 == (code *)0x5) {
    puVar9[2] = 0;
    iVar7 = 1;
  }
  else {
    if (pcVar2 != (code *)0x1) {
      pvVar3 = p_Var6->_initarg;
      p_Var6->_initarg = _ExceptionPtr;
      if (puVar9[1] == 8) {
        if (DAT_6741bb88 < DAT_6741bb8c + DAT_6741bb88) {
          iVar8 = DAT_6741bb88 * 0xc;
          iVar7 = DAT_6741bb88;
          do {
            *(undefined4 *)(iVar8 + 8 + (int)p_Var6->_initaddr) = 0;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar7 < DAT_6741bb8c + DAT_6741bb88);
        }
        uVar4 = *puVar9;
        pvVar5 = p_Var6->_pxcptacttab;
        if (uVar4 == 0xc000008e) {
          p_Var6->_pxcptacttab = (void *)0x83;
        }
        else if (uVar4 == 0xc0000090) {
          p_Var6->_pxcptacttab = (void *)0x81;
        }
        else if (uVar4 == 0xc0000091) {
          p_Var6->_pxcptacttab = (void *)0x84;
        }
        else if (uVar4 == 0xc0000093) {
          p_Var6->_pxcptacttab = (void *)0x85;
        }
        else if (uVar4 == 0xc000008d) {
          p_Var6->_pxcptacttab = (void *)0x82;
        }
        else if (uVar4 == 0xc000008f) {
          p_Var6->_pxcptacttab = (void *)0x86;
        }
        else if (uVar4 == 0xc0000092) {
          p_Var6->_pxcptacttab = (void *)0x8a;
        }
        (*pcVar2)(8,p_Var6->_pxcptacttab);
        p_Var6->_pxcptacttab = pvVar5;
      }
      else {
        puVar9[2] = 0;
        (*pcVar2)(puVar9[1]);
      }
      p_Var6->_initarg = pvVar3;
    }
    iVar7 = -1;
  }
  return iVar7;
}



/* ---- FUN_6740cf07 @ 6740cf07 size=9 ---- */

int * FUN_6740cf07(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}



/* ---- FUN_6740cf10 @ 6740cf10 size=9 ---- */

ulong * FUN_6740cf10(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}



/* ---- __dosmaperr @ 6740cf19 size=115 ---- */

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  p_Var1->_tdoserrno = param_1;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_6741bb98)[uVar2 * 2]) {
      p_Var1 = __getptd();
      p_Var1->_terrno = *(int *)(uVar2 * 8 + 0x6741bb9c);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2d);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    p_Var1 = __getptd();
    p_Var1->_terrno = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (0xca < param_1)) {
    p_Var1 = __getptd();
    p_Var1->_terrno = 0x16;
    return;
  }
  p_Var1 = __getptd();
  p_Var1->_terrno = 8;
  return;
}



/* ---- _calloc @ 6740cf8c size=175 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  uint *_Size_00;
  uint *dwBytes;
  int *_Dst;
  
  _Size_00 = (uint *)(_Count * _Size);
  dwBytes = _Size_00;
  if (_Size_00 == (uint *)0x0) {
    dwBytes = (uint *)0x1;
  }
  do {
    _Dst = (int *)0x0;
    if (dwBytes < (uint *)0xffffffe1) {
      if ((DAT_6741e540 == 3) &&
         (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size_00 <= DAT_6741e52c)) {
        __lock(4);
        _Dst = ___sbh_alloc_block(_Size_00);
        FUN_6740d036();
        if (_Dst != (int *)0x0) {
          _memset(_Dst,0,(size_t)_Size_00);
          goto LAB_6740d001;
        }
      }
      else {
LAB_6740d001:
        if (_Dst != (int *)0x0) {
          return _Dst;
        }
      }
      _Dst = HeapAlloc(DAT_6741e53c,8,(SIZE_T)dwBytes);
    }
    if ((_Dst != (int *)0x0) || (DAT_6741e278 == 0)) {
      return _Dst;
    }
    iVar1 = __callnewh((size_t)dwBytes);
    if (iVar1 == 0) {
      return (void *)0x0;
    }
  } while( true );
}



/* ---- FUN_6740d036 @ 6740d036 size=9 ---- */

void FUN_6740d036(void)

{
  FUN_6740abc9(4);
  return;
}



/* ---- _strrchr @ 6740d050 size=45 ---- */

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2003 Release */

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



/* ---- _CPtoLCID @ 6740d07d size=47 ---- */

/* Library Function - Single Match
    _CPtoLCID
   
   Library: Visual Studio 2003 Release */

undefined4 _CPtoLCID(void)

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



/* ---- setSBCS @ 6740d0ac size=41 ---- */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_6741e560;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_6741e664 = 0;
  DAT_6741e54c = 0;
  DAT_6741e544 = 0;
  DAT_6741e670 = 0;
  DAT_6741e674 = 0;
  DAT_6741e678 = 0;
  return;
}



/* ---- setSBUpLow @ 6740d0d5 size=396 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _setSBUpLow
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBUpLow(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  BYTE *pBVar8;
  undefined4 *puVar9;
  _locale_t _BError;
  ushort local_51c [256];
  undefined1 local_31c [256];
  undefined1 local_21c [256];
  undefined4 local_11c [64];
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  BVar2 = GetCPInfo((UINT)DAT_6741e664,&local_1c);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      *(char *)((int)local_11c + uVar3) = (char)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_11c[0]._0_1_ = 0x20;
    if (local_1c.LeadByte[0] != 0) {
      pBVar8 = local_1c.LeadByte + 1;
      do {
        uVar3 = (uint)local_1c.LeadByte[0];
        if (uVar3 <= *pBVar8) {
          uVar6 = (*pBVar8 - uVar3) + 1;
          puVar9 = (undefined4 *)((int)local_11c + uVar3);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = 0x20202020;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = 0x20;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_1c.LeadByte[0] = pBVar8[1];
        pBVar8 = pBVar8 + 2;
      } while (local_1c.LeadByte[0] != 0);
    }
    BVar2 = 1;
    ___crtGetStringTypeA
              ((_locale_t)0x1,(DWORD)local_11c,(LPCSTR)0x100,(int)local_51c,DAT_6741e664,
               (int)DAT_6741e544,0);
    _BError = DAT_6741e544;
    ___crtLCMapStringA(DAT_6741e544,(LPCWSTR)0x100,(DWORD)local_11c,(LPCSTR)0x100,(int)local_21c,
                       (LPSTR)0x100,(int)DAT_6741e664,0,BVar2);
    ___crtLCMapStringA(DAT_6741e544,(LPCWSTR)0x200,(DWORD)local_11c,(LPCSTR)0x100,(int)local_31c,
                       (LPSTR)0x100,(int)DAT_6741e664,0,(BOOL)_BError);
    uVar3 = 0;
    do {
      if ((local_51c[uVar3] & 1) == 0) {
        if ((local_51c[uVar3] & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_6741e560 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar4 = local_31c[uVar3];
          goto LAB_6740d1e7;
        }
        (&DAT_6741e680)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_6741e560 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar4 = local_21c[uVar3];
LAB_6740d1e7:
        (&DAT_6741e680)[uVar3] = uVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_6741e560 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar5 = (char)uVar3 + -0x20;
          goto LAB_6740d22a;
        }
        (&DAT_6741e680)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_6741e560 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar5 = (char)uVar3 + ' ';
LAB_6740d22a:
        (&DAT_6741e680)[uVar3] = cVar5;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ---- ___updatetmbcinfo @ 6740d261 size=99 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2003 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  pthreadmbcinfo _Memory;
  
  __lock(0xd);
  p_Var1 = __getptd();
  _Memory = p_Var1->_tpxcptinfoptrs;
  if (_Memory != DAT_6741e548) {
    if ((_Memory != (pthreadmbcinfo)0x0) &&
       (_Memory->refcount = _Memory->refcount + -1, _Memory->refcount == 0)) {
      _free(_Memory);
    }
    p_Var1->_tpxcptinfoptrs = DAT_6741e548;
    _Memory = DAT_6741e548;
    DAT_6741e548->refcount = DAT_6741e548->refcount + 1;
  }
  FUN_6740d2c7();
  return _Memory;
}



/* ---- FUN_6740d2c7 @ 6740d2c7 size=9 ---- */

void FUN_6740d2c7(void)

{
  FUN_6740abc9(0xd);
  return;
}



/* ---- __setmbcp_lk @ 6740d2d0 size=400 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setmbcp_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __setmbcp_lk(UINT param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  if (param_1 != 0) {
    iVar9 = 0;
    uVar5 = 0;
    do {
      if (*(UINT *)((int)&DAT_6741bd08 + uVar5) == param_1) {
        puVar12 = &DAT_6741e560;
        for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        local_20 = 0;
        *(undefined1 *)puVar12 = 0;
        pbVar10 = (byte *)(iVar9 * 0x30 + 0x6741bd18);
        do {
          bVar4 = *pbVar10;
          pbVar11 = pbVar10;
          while ((bVar4 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
            uVar5 = (uint)bVar4;
            if (uVar5 <= bVar3) {
              bVar4 = (&DAT_6741bd00)[local_20];
              do {
                pbVar2 = (byte *)((int)&DAT_6741e560 + uVar5 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar5 = uVar5 + 1;
              } while (uVar5 <= bVar3);
            }
            pbVar11 = pbVar11 + 2;
            bVar4 = *pbVar11;
          }
          local_20 = local_20 + 1;
          pbVar10 = pbVar10 + 8;
        } while (local_20 < 4);
        DAT_6741e664 = param_1;
        DAT_6741e54c = 1;
        DAT_6741e544 = _CPtoLCID();
        DAT_6741e670 = *(undefined4 *)(&DAT_6741bd0c + extraout_ECX);
        DAT_6741e674 = *(undefined4 *)(&DAT_6741bd10 + extraout_ECX);
        DAT_6741e678 = *(undefined4 *)(&DAT_6741bd14 + extraout_ECX);
        goto LAB_6740d447;
      }
      uVar5 = uVar5 + 0x30;
      iVar9 = iVar9 + 1;
    } while (uVar5 < 0xf0);
    BVar6 = GetCPInfo(param_1,&local_1c);
    if (BVar6 == 1) {
      puVar12 = &DAT_6741e560;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined1 *)puVar12 = 0;
      DAT_6741e664 = param_1;
      DAT_6741e544 = 0;
      if (local_1c.MaxCharSize < 2) {
        DAT_6741e54c = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar7 = local_1c.LeadByte + 1;
          do {
            bVar4 = *pBVar7;
            if (bVar4 == 0) break;
            for (uVar5 = (uint)pBVar7[-1]; uVar5 <= bVar4; uVar5 = uVar5 + 1) {
              pbVar10 = (byte *)((int)&DAT_6741e560 + uVar5 + 1);
              *pbVar10 = *pbVar10 | 4;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        uVar5 = 1;
        do {
          pbVar10 = (byte *)((int)&DAT_6741e560 + uVar5 + 1);
          *pbVar10 = *pbVar10 | 8;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xff);
        DAT_6741e544 = _CPtoLCID();
        DAT_6741e54c = extraout_ECX_00;
      }
      DAT_6741e670 = 0;
      DAT_6741e674 = 0;
      DAT_6741e678 = 0;
      goto LAB_6740d447;
    }
    if (DAT_6741e164 == 0) {
      return 0xffffffff;
    }
  }
  setSBCS();
LAB_6740d447:
  setSBUpLow();
  return 0;
}



/* ---- __setmbcp @ 6740d460 size=327 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmbcp(int _CodePage)

{
  int *_Memory;
  int iVar1;
  int local_24;
  
  local_24 = -1;
  __lock(0xd);
  DAT_6741e164 = 0;
  if (_CodePage == -2) {
    DAT_6741e164 = 1;
    _CodePage = GetOEMCP();
  }
  else if (_CodePage == -3) {
    DAT_6741e164 = 1;
    _CodePage = GetACP();
  }
  else if (_CodePage == -4) {
    DAT_6741e164 = 1;
    _CodePage = DAT_6741e294;
  }
  if (_CodePage == DAT_6741e664) {
    local_24 = 0;
  }
  else {
    if ((DAT_6741e548 == (int *)0x0) || (_Memory = DAT_6741e548, *DAT_6741e548 != 0)) {
      _Memory = _malloc(0x220);
    }
    if (_Memory != (int *)0x0) {
      local_24 = __setmbcp_lk(_CodePage);
      if (local_24 == 0) {
        *_Memory = 0;
        _Memory[1] = DAT_6741e664;
        _Memory[2] = DAT_6741e54c;
        _Memory[3] = DAT_6741e544;
        for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
          *(undefined2 *)((int)_Memory + iVar1 * 2 + 0x10) =
               *(undefined2 *)((int)&DAT_6741e670 + iVar1 * 2);
        }
        for (iVar1 = 0; iVar1 < 0x101; iVar1 = iVar1 + 1) {
          *(undefined1 *)(iVar1 + 0x1c + (int)_Memory) = *(undefined1 *)((int)&DAT_6741e560 + iVar1)
          ;
        }
        for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
          *(undefined1 *)(iVar1 + 0x11d + (int)_Memory) = (&DAT_6741e680)[iVar1];
        }
        DAT_6741e548 = _Memory;
      }
    }
    if ((local_24 == -1) && (_Memory != DAT_6741e548)) {
      _free(_Memory);
    }
  }
  FUN_6740d5a7();
  return local_24;
}



/* ---- FUN_6740d5a7 @ 6740d5a7 size=9 ---- */

void FUN_6740d5a7(void)

{
  FUN_6740abc9(0xd);
  return;
}



/* ---- ___initmbctable @ 6740d5b0 size=30 ---- */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2003 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_6741e78c == 0) {
    __setmbcp(-3);
    DAT_6741e78c = 1;
  }
  return 0;
}



/* ---- FUN_6740d5d0 @ 6740d5d0 size=139 ---- */

uint * __cdecl FUN_6740d5d0(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    puVar5 = FUN_67412e76(param_1);
    return puVar5;
  }
  do {
    cVar3 = (char)*param_1;
    do {
      while (puVar5 = param_1, param_1 = (uint *)((int)puVar5 + 1), cVar3 != *param_2) {
        if (cVar3 == '\0') {
          return (uint *)0x0;
        }
        cVar3 = *(char *)param_1;
      }
      cVar3 = *(char *)param_1;
      pcVar6 = param_2;
      puVar4 = puVar5;
    } while (cVar3 != param_2[1]);
    do {
      if (pcVar6[2] == '\0') {
        return puVar5;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar6[2]) break;
      pcVar1 = pcVar6 + 3;
      if (*pcVar1 == '\0') {
        return puVar5;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar6 = pcVar6 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ---- __flsbuf @ 6740d656 size=281 ---- */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  uint _FileHandle;
  char *_Buf;
  char *pcVar2;
  FILE *_File_00;
  int iVar3;
  undefined *puVar4;
  FILE *_MaxCharCount;
  
  _File_00 = _File;
  uVar1 = _File->_flag;
  _FileHandle = _File->_file;
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_6740d762:
    _File->_flag = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      _File->_cnt = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_6740d762;
      _File->_ptr = _File->_base;
      _File->_flag = uVar1 & 0xfffffffe;
    }
    uVar1 = _File->_flag;
    _File->_cnt = 0;
    _File = (FILE *)0x0;
    _File_00->_flag = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((_File_00 != (FILE *)&DAT_6741b8a0 && (_File_00 != (FILE *)&DAT_6741b8c0)) ||
        (iVar3 = __isatty(_FileHandle), iVar3 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108) == 0) {
      _MaxCharCount = (FILE *)0x1;
      _File = (FILE *)__write(_FileHandle,&_Ch,1);
    }
    else {
      _Buf = _File_00->_base;
      pcVar2 = _File_00->_ptr;
      _File_00->_ptr = _Buf + 1;
      _MaxCharCount = (FILE *)(pcVar2 + -(int)_Buf);
      _File_00->_cnt = _File_00->_bufsiz + -1;
      if ((int)_MaxCharCount < 1) {
        if (_FileHandle == 0xffffffff) {
          puVar4 = &DAT_6741be14;
        }
        else {
          puVar4 = (undefined *)
                   ((&DAT_6741e420)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x20) != 0) {
          __lseek(_FileHandle,0,2);
        }
      }
      else {
        _File = (FILE *)__write(_FileHandle,_Buf,(uint)_MaxCharCount);
      }
      *_File_00->_base = (char)_Ch;
    }
    if (_File == _MaxCharCount) {
      return _Ch & 0xff;
    }
    _File_00->_flag = _File_00->_flag | 0x20;
  }
  return -1;
}



/* ---- write_char @ 6740d76f size=51 ---- */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2003 Release */

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



/* ---- write_multi_char @ 6740d7a2 size=36 ---- */

/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2003 Release */

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



/* ---- write_string @ 6740d7c6 size=55 ---- */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2003 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      write_char();
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



/* ---- __output @ 6740d7fd size=2010 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output
   
   Library: Visual Studio 2003 Release */

int __cdecl __output(undefined4 param_1,byte *param_2,wchar_t *param_3)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  uint uVar7;
  byte bVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 *local_24c;
  int local_248;
  undefined4 local_244;
  int local_240;
  int local_23c;
  wchar_t *local_238;
  int local_234;
  int local_230;
  int local_22c;
  undefined1 local_228;
  char local_227;
  int local_224;
  undefined1 *local_220;
  wchar_t *local_21c;
  int local_218;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  local_220 = (undefined1 *)0x0;
  local_224 = 0;
  local_238 = (wchar_t *)0x0;
  bVar8 = *param_2;
  local_248 = 0;
  if (bVar8 != 0) {
    while (pbVar10 = param_2 + 1, -1 < local_224) {
      if (((char)bVar8 < ' ') || ('x' < (char)bVar8)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (int)(char)(&DAT_67417320)[(char)bVar8] & 0xf;
      }
      local_248 = (int)(char)(&DAT_67417340)[uVar3 * 8 + local_248] >> 4;
      switch(local_248) {
      case 0:
switchD_6740d882_caseD_0:
        local_234 = 0;
        if ((PTR_DAT_6741b560[(uint)bVar8 * 2 + 1] & 0x80) != 0) {
          write_char();
          pbVar10 = param_2 + 2;
        }
        param_2 = pbVar10;
        write_char();
        pbVar10 = param_2;
        break;
      case 1:
        local_218 = -1;
        local_244 = 0;
        local_23c = 0;
        local_230 = 0;
        local_22c = 0;
        local_214 = 0;
        local_234 = 0;
        break;
      case 2:
        if (bVar8 == 0x20) {
          local_214 = local_214 | 2;
        }
        else if (bVar8 == 0x23) {
          local_214 = local_214 | 0x80;
        }
        else if (bVar8 == 0x2b) {
          local_214 = local_214 | 1;
        }
        else if (bVar8 == 0x2d) {
          local_214 = local_214 | 4;
        }
        else if (bVar8 == 0x30) {
          local_214 = local_214 | 8;
        }
        break;
      case 3:
        if (bVar8 == 0x2a) {
          pwVar4 = param_3 + 2;
          local_230 = *(int *)param_3;
          param_3 = pwVar4;
          if (local_230 < 0) {
            local_214 = local_214 | 4;
            local_230 = -local_230;
          }
        }
        else {
          local_230 = (char)bVar8 + -0x30 + local_230 * 10;
        }
        break;
      case 4:
        local_218 = 0;
        break;
      case 5:
        if (bVar8 == 0x2a) {
          pwVar4 = param_3 + 2;
          local_218 = *(int *)param_3;
          param_3 = pwVar4;
          if (local_218 < 0) {
            local_218 = -1;
          }
        }
        else {
          local_218 = (char)bVar8 + -0x30 + local_218 * 10;
        }
        break;
      case 6:
        if (bVar8 == 0x49) {
          bVar1 = *pbVar10;
          if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
            local_214 = local_214 | 0x8000;
            pbVar10 = param_2 + 3;
          }
          else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
            local_214 = local_214 & 0xffff7fff;
            pbVar10 = param_2 + 3;
          }
          else if (bVar1 != 100) {
            if (bVar1 != 0x69) {
              if (bVar1 != 0x6f) {
                if (bVar1 != 0x75) {
                  if (bVar1 != 0x78) {
                    if (bVar1 != 0x58) {
                      local_248 = 0;
                      goto switchD_6740d882_caseD_0;
                    }
                  }
                }
              }
            }
          }
        }
        else if (bVar8 == 0x68) {
          local_214 = local_214 | 0x20;
        }
        else if (bVar8 == 0x6c) {
          local_214 = local_214 | 0x10;
        }
        else if (bVar8 == 0x77) {
          local_214 = local_214 | 0x800;
        }
        break;
      case 7:
        if ((char)bVar8 < 'h') {
          if ((char)bVar8 < 'e') {
            if ((char)bVar8 < 'Y') {
              if (bVar8 == 0x58) {
LAB_6740dd40:
                local_240 = 7;
LAB_6740dd43:
                local_220 = (undefined1 *)0x10;
                if ((local_214 & 0x80) != 0) {
                  local_227 = (char)local_240 + 'Q';
                  local_228 = 0x30;
                  local_22c = 2;
                }
                goto LAB_6740db73;
              }
              if (bVar8 == 0x43) {
                if ((local_214 & 0x830) == 0) {
                  local_214 = local_214 | 0x800;
                }
                goto LAB_6740db22;
              }
              if ((bVar8 != 0x45) && (bVar8 != 0x47)) {
                if (bVar8 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_6740daa5;
                }
                goto LAB_6740de9a;
              }
              local_244 = 1;
              bVar8 = bVar8 + 0x20;
              goto LAB_6740daf6;
            }
            if (bVar8 == 0x5a) {
              pwVar4 = param_3 + 2;
              psVar2 = *(short **)param_3;
              param_3 = pwVar4;
              if ((psVar2 == (short *)0x0) ||
                 (local_21c = *(wchar_t **)(psVar2 + 2), local_21c == (wchar_t *)0x0)) {
                local_21c = (wchar_t *)PTR_DAT_6741be00;
                pwVar4 = (wchar_t *)PTR_DAT_6741be00;
                goto LAB_6740dcb4;
              }
              local_220 = (undefined1 *)(int)*psVar2;
              if ((local_214 & 0x800) == 0) {
                local_234 = 0;
              }
              else {
                local_220 = (undefined1 *)((int)local_220 / 2);
                local_234 = 1;
              }
              goto LAB_6740de97;
            }
            if (bVar8 == 99) {
LAB_6740db22:
              if ((local_214 & 0x810) == 0) {
                local_210[0]._0_1_ = (char)*param_3;
                local_220 = (undefined1 *)0x1;
              }
              else {
                local_220 = (undefined1 *)_wctomb((char *)local_210,*param_3);
                if ((int)local_220 < 0) {
                  local_23c = 1;
                }
              }
              local_21c = local_210;
              param_3 = param_3 + 2;
            }
            else if (bVar8 == 100) goto LAB_6740db68;
          }
          else {
LAB_6740daf6:
            local_214 = local_214 | 0x40;
            pwVar4 = local_210;
            local_21c = pwVar4;
            if (local_218 < 0) {
              local_218 = 6;
            }
            else if (local_218 == 0) {
              if (bVar8 == 0x67) {
                local_218 = 1;
              }
            }
            else {
              if (0x200 < local_218) {
                local_218 = 0x200;
              }
              if (0xa3 < local_218) {
                local_238 = _malloc(local_218 + 0x15d);
                if (local_238 == (wchar_t *)0x0) {
                  local_218 = 0xa3;
                }
                else {
                  pwVar4 = local_238;
                  local_21c = local_238;
                }
              }
            }
            local_258 = *(undefined4 *)param_3;
            local_254 = *(undefined4 *)(param_3 + 2);
            (*DAT_6741bfe0)(&local_258,pwVar4,(int)(char)bVar8,local_218,local_244);
            uVar3 = local_214 & 0x80;
            if ((uVar3 != 0) && (local_218 == 0)) {
              (*(code *)s_JAAgJAAgJAAg_6741bfec._0_4_)(pwVar4);
            }
            if ((bVar8 == 0x67) && (uVar3 == 0)) {
              (*DAT_6741bfe4)(pwVar4);
            }
            if ((char)*pwVar4 == '-') {
              local_214 = local_214 | 0x100;
              pwVar4 = (wchar_t *)((int)pwVar4 + 1);
              local_21c = pwVar4;
            }
            param_3 = param_3 + 4;
LAB_6740dcb4:
            local_220 = (undefined1 *)_strlen((char *)pwVar4);
LAB_6740de97:
          }
LAB_6740de9a:
          uVar3 = local_214;
          if (local_23c == 0) {
            if ((local_214 & 0x40) != 0) {
              if ((local_214 & 0x100) == 0) {
                if ((local_214 & 1) == 0) {
                  if ((local_214 & 2) == 0) goto LAB_6740ded2;
                  local_228 = 0x20;
                }
                else {
                  local_228 = 0x2b;
                }
              }
              else {
                local_228 = 0x2d;
              }
              local_22c = 1;
            }
LAB_6740ded2:
            iVar6 = (local_230 - local_22c) - (int)local_220;
            if ((local_214 & 0xc) == 0) {
              write_multi_char(0x20,iVar6);
            }
            write_string(local_22c);
            if (((uVar3 & 8) != 0) && ((uVar3 & 4) == 0)) {
              write_multi_char(0x30,iVar6);
            }
            if ((local_234 == 0) || ((int)local_220 < 1)) {
              write_string((int)local_220);
            }
            else {
              local_24c = local_220;
              pwVar4 = local_21c;
              do {
                local_24c = local_24c + 0xffffffff;
                iVar5 = _wctomb((char *)((int)&local_11 + 1),*pwVar4);
                pwVar4 = pwVar4 + 1;
                if (iVar5 < 1) break;
                write_string(iVar5);
              } while (local_24c != (undefined1 *)0x0);
            }
            if ((local_214 & 4) != 0) {
              write_multi_char(0x20,iVar6);
            }
          }
        }
        else {
          if (bVar8 == 0x69) {
LAB_6740db68:
            local_214 = local_214 | 0x40;
LAB_6740db6c:
            local_220 = (undefined1 *)0xa;
LAB_6740db73:
            if ((local_214 & 0x8000) == 0) {
              if ((local_214 & 0x20) == 0) {
                uVar3 = *(uint *)param_3;
                if ((local_214 & 0x40) == 0) {
                  uVar7 = 0;
                  param_3 = param_3 + 2;
                  goto LAB_6740dde4;
                }
              }
              else if ((local_214 & 0x40) == 0) {
                uVar3 = (uint)(ushort)*param_3;
              }
              else {
                uVar3 = (uint)*param_3;
              }
              uVar7 = (int)uVar3 >> 0x1f;
              param_3 = param_3 + 2;
            }
            else {
              uVar3 = *(uint *)param_3;
              uVar7 = *(uint *)(param_3 + 2);
              param_3 = param_3 + 4;
            }
LAB_6740dde4:
            if ((((local_214 & 0x40) != 0) && ((int)uVar7 < 1)) && ((int)uVar7 < 0)) {
              bVar11 = uVar3 != 0;
              uVar3 = -uVar3;
              uVar7 = -(uVar7 + bVar11);
              local_214 = local_214 | 0x100;
            }
            uVar12 = CONCAT44(uVar7,uVar3);
            if ((local_214 & 0x8000) == 0) {
              uVar7 = 0;
            }
            if (local_218 < 0) {
              local_218 = 1;
            }
            else {
              local_214 = local_214 & 0xfffffff7;
              if (0x200 < local_218) {
                local_218 = 0x200;
              }
            }
            if (uVar3 == 0 && uVar7 == 0) {
              local_22c = 0;
            }
            pwVar4 = &local_11;
            while( true ) {
              puVar9 = (undefined1 *)uVar12;
              iVar6 = local_218 + -1;
              if ((local_218 < 1) && (puVar9 == (undefined1 *)0x0 && uVar7 == 0)) break;
              local_218 = iVar6;
              uVar12 = __aulldvrm((uint)puVar9,uVar7,(uint)local_220,(int)local_220 >> 0x1f);
              uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
              iVar6 = extraout_ECX + 0x30;
              if (0x39 < iVar6) {
                iVar6 = iVar6 + local_240;
              }
              *(char *)pwVar4 = (char)iVar6;
              pwVar4 = (wchar_t *)((int)pwVar4 + -1);
              local_24c = puVar9;
            }
            local_220 = (undefined1 *)((int)local_210 + -(int)pwVar4 + 0x1ff);
            local_21c = (wchar_t *)((int)pwVar4 + 1);
            local_218 = iVar6;
            if (((local_214 & 0x200) != 0) &&
               ((*(char *)local_21c != '0' || (local_220 == (undefined1 *)0x0)))) {
              *(char *)pwVar4 = '0';
              local_220 = (undefined1 *)((int)local_210 + -(int)pwVar4 + 0x200);
              local_21c = pwVar4;
              goto LAB_6740de97;
            }
            goto LAB_6740de9a;
          }
          if (bVar8 != 0x6e) {
            if (bVar8 != 0x6f) {
              if (bVar8 == 0x70) {
                local_218 = 8;
                goto LAB_6740dd40;
              }
              if (bVar8 == 0x73) {
LAB_6740daa5:
                iVar6 = local_218;
                if (local_218 == -1) {
                  iVar6 = 0x7fffffff;
                }
                local_21c = *(wchar_t **)param_3;
                if ((local_214 & 0x810) == 0) {
                  if (local_21c == (wchar_t *)0x0) {
                    local_21c = (wchar_t *)PTR_DAT_6741be00;
                  }
                  for (pwVar4 = local_21c;
                      (iVar6 != 0 && (iVar6 = iVar6 + -1, (char)*pwVar4 != '\0'));
                      pwVar4 = (wchar_t *)((int)pwVar4 + 1)) {
                  }
                  local_220 = (undefined1 *)((int)pwVar4 - (int)local_21c);
                  param_3 = param_3 + 2;
                }
                else {
                  if (local_21c == (wchar_t *)0x0) {
                    local_21c = (wchar_t *)PTR_DAT_6741be04;
                  }
                  local_234 = 1;
                  for (pwVar4 = local_21c; (iVar6 != 0 && (iVar6 = iVar6 + -1, *pwVar4 != L'\0'));
                      pwVar4 = pwVar4 + 1) {
                  }
                  local_220 = (undefined1 *)((int)pwVar4 - (int)local_21c >> 1);
                  param_3 = param_3 + 2;
                }
                goto LAB_6740de97;
              }
              if (bVar8 != 0x75) {
                if (bVar8 != 0x78) goto LAB_6740de9a;
                local_240 = 0x27;
                goto LAB_6740dd43;
              }
              goto LAB_6740db6c;
            }
            local_220 = (undefined1 *)0x8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_6740db73;
          }
          if ((local_214 & 0x20) == 0) {
            **(int **)param_3 = local_224;
          }
          else {
            *(undefined2 *)*(int **)param_3 = (undefined2)local_224;
          }
          local_23c = 1;
          param_3 = param_3 + 2;
        }
        if (local_238 != (wchar_t *)0x0) {
          _free(local_238);
          local_238 = (wchar_t *)0x0;
        }
      }
      param_2 = pbVar10;
      bVar8 = *param_2;
      if (bVar8 == 0) {
        return local_224;
      }
    }
  }
  return local_224;
}



/* ---- FUN_6740e000 @ 6740e000 size=7 ---- */

uint * __cdecl FUN_6740e000(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_6740e0f0;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_6740e0f0:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



/* ---- FUN_6740e010 @ 6740e010 size=232 ---- */

uint * __cdecl FUN_6740e010(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_6740e030;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_6740e063;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x6740e07f;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_6740e030:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x6740e07f;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x6740e07f;
    }
  }
LAB_6740e063:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x6740e07f:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_6740e0f0:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_6740e0f0;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ---- _strcmp @ 6740e100 size=135 ---- */

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2003 Release */

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
      if (bVar3 != *_Str2) goto LAB_6740e144;
      _Str2 = _Str2 + 1;
      if (bVar3 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_6740e110;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar3 = (byte)uVar1;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) goto LAB_6740e144;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) goto LAB_6740e144;
    if (bVar3 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_6740e110:
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
LAB_6740e144:
  return (uint)bVar4 * -2 + 1;
}



/* ---- _realloc @ 6740e188 size=412 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  LPVOID pvVar4;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
  }
  else {
    if (_NewSize == 0) {
      _free(_Memory);
    }
    else if (DAT_6741e540 == 3) {
      do {
        local_20 = (int *)0x0;
        if (_NewSize < (uint *)0xffffffe1) {
          __lock(4);
          local_24 = (uint *)___sbh_find_block((int)_Memory);
          if (local_24 != (uint *)0x0) {
            if (_NewSize <= DAT_6741e52c) {
              iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
              if (iVar2 == 0) {
                local_20 = ___sbh_alloc_block((uint *)_NewSize);
                if (local_20 != (int *)0x0) {
                  puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
                  if (_NewSize <= puVar3) {
                    puVar3 = (uint *)_NewSize;
                  }
                  _memcpy(local_20,_Memory,(size_t)puVar3);
                  local_24 = (uint *)___sbh_find_block((int)_Memory);
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
              local_20 = HeapAlloc(DAT_6741e53c,0,_NewSize);
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
          FUN_6740e2f0();
          if (local_24 == (uint *)0x0) {
            if ((uint *)_NewSize == (uint *)0x0) {
              _NewSize = 1;
            }
            _NewSize = _NewSize + 0xf & 0xfffffff0;
            local_20 = HeapReAlloc(DAT_6741e53c,0,_Memory,_NewSize);
          }
        }
        if (local_20 != (int *)0x0) {
          return local_20;
        }
        if (DAT_6741e278 == 0) {
          return (void *)0x0;
        }
        iVar2 = __callnewh(_NewSize);
      } while (iVar2 != 0);
    }
    else {
      do {
        pvVar4 = (LPVOID)0x0;
        if (_NewSize < 0xffffffe1) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          pvVar4 = HeapReAlloc(DAT_6741e53c,0,_Memory,_NewSize);
        }
        if (pvVar4 != (LPVOID)0x0) {
          return pvVar4;
        }
        if (DAT_6741e278 == 0) {
          return (void *)0x0;
        }
        iVar2 = __callnewh(_NewSize);
      } while (iVar2 != 0);
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ---- FUN_6740e2f0 @ 6740e2f0 size=9 ---- */

void FUN_6740e2f0(void)

{
  FUN_6740abc9(4);
  return;
}



/* ---- __msize @ 6740e335 size=106 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2003 Release */

size_t __cdecl __msize(void *_Memory)

{
  uint uVar1;
  SIZE_T SVar2;
  size_t local_20;
  
  if (DAT_6741e540 == 3) {
    __lock(4);
    uVar1 = ___sbh_find_block((int)_Memory);
    if (uVar1 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_6740e3a2();
    if (uVar1 != 0) {
      return local_20;
    }
  }
  SVar2 = HeapSize(DAT_6741e53c,0,_Memory);
  return SVar2;
}



/* ---- FUN_6740e3a2 @ 6740e3a2 size=9 ---- */

void FUN_6740e3a2(void)

{
  FUN_6740abc9(4);
  return;
}



/* ---- write_char @ 6740e3ab size=37 ---- */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2003 Release */

void __cdecl write_char(uint param_1)

{
  FILE *in_EAX;
  uint uVar1;
  int *unaff_ESI;
  
  if (((in_EAX->_flag & 0x40) == 0) || (in_EAX->_base != (char *)0x0)) {
    uVar1 = __putwc_lk(param_1,in_EAX);
    if ((short)uVar1 == -1) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



/* ---- write_multi_char @ 6740e3d0 size=37 ---- */

/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2003 Release */

void __cdecl write_multi_char(uint param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char(param_1);
  } while (*in_EAX != -1);
  return;
}



/* ---- write_string @ 6740e3f5 size=61 ---- */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2003 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  ushort *in_ECX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      write_char((uint)*in_ECX);
      in_ECX = in_ECX + 1;
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



/* ---- __woutput @ 6740e432 size=2064 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __woutput
   
   Library: Visual Studio 2003 Release */

int __cdecl __woutput(undefined4 param_1,short *param_2,wchar_t *param_3)

{
  short sVar1;
  wchar_t wVar2;
  short *psVar3;
  undefined2 uVar4;
  short *psVar5;
  uint uVar6;
  wchar_t *pwVar7;
  int extraout_ECX;
  int iVar8;
  ushort uVar9;
  undefined4 unaff_EBX;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 local_45c;
  undefined4 local_458;
  uint local_450;
  uint local_44c;
  undefined4 local_448;
  int local_444;
  int local_440;
  size_t local_43c;
  int local_438;
  wchar_t *local_434;
  char local_430 [4];
  undefined2 local_42c;
  short local_42a;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  wchar_t *local_418;
  size_t local_414;
  int local_410;
  uint local_40c;
  wchar_t local_408 [255];
  undefined2 local_209;
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  uVar10 = CONCAT22((short)((uint)unaff_EBX >> 0x10),*param_2);
  local_444 = 0;
  local_414 = 0;
  local_41c = 0;
  local_434 = (wchar_t *)0x0;
  if (*param_2 != 0) {
    while( true ) {
      uVar4 = (undefined2)(uVar10 >> 0x10);
      psVar5 = param_2 + 1;
      if (local_41c < 0) break;
      uVar9 = (ushort)uVar10;
      if ((uVar9 < 0x20) || (0x78 < uVar9)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (int)(char)(&DAT_67417320)[uVar10 & 0xffff] & 0xf;
      }
      local_444 = (int)(char)(&DAT_67417340)[uVar6 * 8 + local_444] >> 4;
      switch(local_444) {
      case 0:
switchD_6740e4bd_caseD_0:
        local_428 = 1;
        write_char(uVar10);
LAB_6740ec16:
        uVar4 = (undefined2)(uVar10 >> 0x10);
        break;
      case 1:
        local_410 = -1;
        local_448 = 0;
        local_438 = 0;
        local_424 = 0;
        local_420 = 0;
        local_40c = 0;
        local_428 = 0;
        break;
      case 2:
        uVar10 = uVar10 & 0xffff;
        if (uVar10 == 0x20) {
          local_40c = local_40c | 2;
        }
        else if (uVar10 == 0x23) {
          local_40c = local_40c | 0x80;
        }
        else if (uVar10 == 0x2b) {
          local_40c = local_40c | 1;
        }
        else if (uVar10 == 0x2d) {
          local_40c = local_40c | 4;
        }
        else if (uVar10 == 0x30) {
          local_40c = local_40c | 8;
        }
        break;
      case 3:
        if (uVar9 == 0x2a) {
          pwVar7 = param_3 + 2;
          local_424 = *(int *)param_3;
          param_3 = pwVar7;
          if (local_424 < 0) {
            local_40c = local_40c | 4;
            local_424 = -local_424;
          }
        }
        else {
          local_424 = ((uVar10 & 0xffff) - 0x30) + local_424 * 10;
        }
        break;
      case 4:
        local_410 = 0;
        break;
      case 5:
        if (uVar9 == 0x2a) {
          pwVar7 = param_3 + 2;
          local_410 = *(int *)param_3;
          param_3 = pwVar7;
          if (local_410 < 0) {
            local_410 = -1;
          }
        }
        else {
          local_410 = ((uVar10 & 0xffff) - 0x30) + local_410 * 10;
        }
        break;
      case 6:
        uVar6 = uVar10 & 0xffff;
        if (uVar6 == 0x49) {
          sVar1 = *psVar5;
          if ((sVar1 == 0x36) && (param_2[2] == 0x34)) {
            local_40c = local_40c | 0x8000;
            psVar5 = param_2 + 3;
          }
          else if ((sVar1 == 0x33) && (param_2[2] == 0x32)) {
            local_40c = local_40c & 0xffff7fff;
            psVar5 = param_2 + 3;
          }
          else if (sVar1 != 100) {
            if (sVar1 != 0x69) {
              if (sVar1 != 0x6f) {
                if (sVar1 != 0x75) {
                  if (sVar1 != 0x78) {
                    if (sVar1 != 0x58) {
                      local_444 = 0;
                      goto switchD_6740e4bd_caseD_0;
                    }
                  }
                }
              }
            }
          }
        }
        else if (uVar6 == 0x68) {
          local_40c = local_40c | 0x20;
        }
        else if (uVar6 == 0x6c) {
          local_40c = local_40c | 0x10;
        }
        else if (uVar6 == 0x77) {
          local_40c = local_40c | 0x800;
        }
        break;
      case 7:
        uVar6 = uVar10 & 0xffff;
        if (uVar6 < 0x68) {
          if (uVar6 < 0x65) {
            if (uVar6 < 0x59) {
              if (uVar6 == 0x58) {
LAB_6740e9a6:
                local_440 = 7;
LAB_6740e9a9:
                local_414 = 0x10;
                if ((local_40c & 0x80) != 0) {
                  local_42a = (short)local_440 + 0x51;
                  local_42c = 0x30;
                  local_420 = 2;
                }
                goto LAB_6740e7e9;
              }
              if (uVar6 == 0x43) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
                goto LAB_6740e787;
              }
              if ((uVar6 != 0x45) && (uVar6 != 0x47)) {
                if (uVar6 == 0x53) {
                  if ((local_40c & 0x830) == 0) {
                    local_40c = local_40c | 0x20;
                  }
                  goto LAB_6740e6e5;
                }
                goto LAB_6740eb00;
              }
              local_448 = 1;
              uVar10 = uVar10 + 0x20;
              goto LAB_6740e75c;
            }
            if (uVar6 == 0x5a) {
              pwVar7 = param_3 + 2;
              psVar3 = *(short **)param_3;
              param_3 = pwVar7;
              if ((psVar3 == (short *)0x0) ||
                 (local_418 = *(wchar_t **)(psVar3 + 2), local_418 == (wchar_t *)0x0)) {
                local_418 = (wchar_t *)PTR_DAT_6741be00;
                pwVar7 = (wchar_t *)PTR_DAT_6741be00;
                goto LAB_6740e926;
              }
              local_414 = (size_t)*psVar3;
              if ((local_40c & 0x800) == 0) {
                local_428 = 0;
              }
              else {
                local_414 = (int)local_414 / 2;
                local_428 = 1;
              }
              goto LAB_6740eafd;
            }
            if (uVar6 == 99) {
LAB_6740e787:
              wVar2 = *param_3;
              local_44c = (uint)(ushort)wVar2;
              local_428 = 1;
              if ((local_40c & 0x20) == 0) {
                local_408[0] = wVar2;
              }
              else {
                local_430[0] = (char)wVar2;
                local_430[1] = 0;
                iVar8 = _mbtowc(local_408,local_430,DAT_6741bed4);
                if (iVar8 < 0) {
                  local_438 = 1;
                }
              }
              local_418 = local_408;
              local_414 = 1;
              param_3 = param_3 + 2;
            }
            else if (uVar6 == 100) goto LAB_6740e7de;
            goto LAB_6740eb00;
          }
LAB_6740e75c:
          local_40c = local_40c | 0x40;
          pwVar7 = local_408;
          local_418 = pwVar7;
          if (local_410 < 0) {
            local_410 = 6;
          }
          else if (local_410 == 0) {
            if ((short)uVar10 == 0x67) {
              local_410 = 1;
            }
          }
          else {
            if (0x200 < local_410) {
              local_410 = 0x200;
            }
            if (0xa3 < local_410) {
              local_434 = _malloc(local_410 + 0x15d);
              if (local_434 == (wchar_t *)0x0) {
                local_410 = 0xa3;
              }
              else {
                pwVar7 = local_434;
                local_418 = local_434;
              }
            }
          }
          local_45c = *(undefined4 *)param_3;
          local_458 = *(undefined4 *)(param_3 + 2);
          (*DAT_6741bfe0)(&local_45c,pwVar7,(int)(char)uVar10,local_410,local_448);
          uVar6 = local_40c & 0x80;
          if ((uVar6 != 0) && (local_410 == 0)) {
            (*(code *)s_JAAgJAAgJAAg_6741bfec._0_4_)(pwVar7);
          }
          if (((short)uVar10 == 0x67) && (uVar6 == 0)) {
            (*DAT_6741bfe4)(pwVar7);
          }
          if ((byte)*pwVar7 == 0x2d) {
            local_40c = local_40c | 0x100;
            pwVar7 = (wchar_t *)((int)pwVar7 + 1);
            local_418 = pwVar7;
          }
          param_3 = param_3 + 4;
LAB_6740e926:
          local_414 = _strlen((char *)pwVar7);
LAB_6740eafd:
LAB_6740eb00:
          if (local_438 == 0) {
            if ((local_40c & 0x40) != 0) {
              if ((local_40c & 0x100) == 0) {
                if ((local_40c & 1) == 0) {
                  if ((local_40c & 2) == 0) goto LAB_6740eb3b;
                  local_42c = 0x20;
                }
                else {
                  local_42c = 0x2b;
                }
              }
              else {
                local_42c = 0x2d;
              }
              local_420 = 1;
            }
LAB_6740eb3b:
            uVar10 = (local_424 - local_420) - local_414;
            if ((local_40c & 0xc) == 0) {
              write_multi_char(0x20,uVar10);
            }
            write_string(local_420);
            if (((local_40c & 8) != 0) && ((local_40c & 4) == 0)) {
              write_multi_char(0x30,uVar10);
            }
            if ((local_428 == 0) && (0 < (int)local_414)) {
              local_43c = local_414;
              pwVar7 = local_418;
              do {
                local_43c = local_43c - 1;
                local_450 = _mbtowc((wchar_t *)&local_44c,(char *)pwVar7,DAT_6741bed4);
                if ((int)local_450 < 1) break;
                write_char(local_44c);
                pwVar7 = (wchar_t *)((int)pwVar7 + local_450);
              } while (0 < (int)local_43c);
            }
            else {
              write_string(local_414);
            }
            if ((local_40c & 4) != 0) {
              write_multi_char(0x20,uVar10);
            }
          }
        }
        else {
          if (uVar6 == 0x69) {
LAB_6740e7de:
            local_40c = local_40c | 0x40;
LAB_6740e7e2:
            local_414 = 10;
LAB_6740e7e9:
            if ((local_40c & 0x8000) == 0) {
              if ((local_40c & 0x20) == 0) {
                uVar10 = *(uint *)param_3;
                if ((local_40c & 0x40) == 0) {
                  uVar6 = 0;
                  param_3 = param_3 + 2;
                  goto LAB_6740ea4a;
                }
              }
              else if ((local_40c & 0x40) == 0) {
                uVar10 = (uint)(ushort)*param_3;
              }
              else {
                uVar10 = (uint)*param_3;
              }
              uVar6 = (int)uVar10 >> 0x1f;
              param_3 = param_3 + 2;
            }
            else {
              uVar10 = *(uint *)param_3;
              uVar6 = *(uint *)(param_3 + 2);
              param_3 = param_3 + 4;
            }
LAB_6740ea4a:
            if ((((local_40c & 0x40) != 0) && ((int)uVar6 < 1)) && ((int)uVar6 < 0)) {
              bVar11 = uVar10 != 0;
              uVar10 = -uVar10;
              uVar6 = -(uVar6 + bVar11);
              local_40c = local_40c | 0x100;
            }
            uVar12 = CONCAT44(uVar6,uVar10);
            if ((local_40c & 0x8000) == 0) {
              uVar6 = 0;
            }
            if (local_410 < 0) {
              local_410 = 1;
            }
            else {
              local_40c = local_40c & 0xfffffff7;
              if (0x200 < local_410) {
                local_410 = 0x200;
              }
            }
            if (uVar10 == 0 && uVar6 == 0) {
              local_420 = 0;
            }
            pwVar7 = &local_209;
            while( true ) {
              uVar10 = (uint)uVar12;
              iVar8 = local_410 + -1;
              if ((local_410 < 1) && (uVar10 == 0 && uVar6 == 0)) break;
              local_410 = iVar8;
              uVar12 = __aulldvrm(uVar10,uVar6,local_414,(int)local_414 >> 0x1f);
              uVar6 = (uint)((ulonglong)uVar12 >> 0x20);
              iVar8 = extraout_ECX + 0x30;
              if (0x39 < iVar8) {
                iVar8 = iVar8 + local_440;
              }
              *(byte *)pwVar7 = (byte)iVar8;
              pwVar7 = (wchar_t *)((int)pwVar7 + -1);
              local_450 = uVar10;
            }
            local_414 = (int)&local_209 + -(int)pwVar7;
            local_418 = (wchar_t *)((int)pwVar7 + 1);
            local_410 = iVar8;
            if ((local_40c & 0x200) != 0) {
              if (*(byte *)local_418 == 0x30) {
                if (local_414 != 0) goto LAB_6740eb00;
              }
              *(byte *)pwVar7 = 0x30;
              local_414 = (int)&local_209 + -(int)pwVar7 + 1;
              local_418 = pwVar7;
              goto LAB_6740eafd;
            }
            goto LAB_6740eb00;
          }
          if (uVar6 != 0x6e) {
            if (uVar6 != 0x6f) {
              if (uVar6 == 0x70) {
                local_410 = 8;
                goto LAB_6740e9a6;
              }
              if (uVar6 == 0x73) {
LAB_6740e6e5:
                iVar8 = local_410;
                if (local_410 == -1) {
                  iVar8 = 0x7fffffff;
                }
                pwVar7 = param_3 + 2;
                local_418 = *(wchar_t **)param_3;
                param_3 = pwVar7;
                if ((local_40c & 0x20) != 0) {
                  if (local_418 == (wchar_t *)0x0) {
                    local_418 = (wchar_t *)PTR_DAT_6741be00;
                  }
                  local_414 = 0;
                  pwVar7 = local_418;
                  if (0 < iVar8) {
                    do {
                      if ((byte)*pwVar7 == 0) break;
                      if ((PTR_DAT_6741b560[(uint)(byte)*pwVar7 * 2 + 1] & 0x80) != 0) {
                        pwVar7 = (wchar_t *)((int)pwVar7 + 1);
                      }
                      pwVar7 = (wchar_t *)((int)pwVar7 + 1);
                      local_414 = local_414 + 1;
                    } while ((int)local_414 < iVar8);
                  }
                  goto LAB_6740eb00;
                }
                if (local_418 == (wchar_t *)0x0) {
                  local_418 = (wchar_t *)PTR_DAT_6741be04;
                }
                local_428 = 1;
                for (pwVar7 = local_418; (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar7 != L'\0'));
                    pwVar7 = pwVar7 + 1) {
                }
                local_414 = (int)pwVar7 - (int)local_418 >> 1;
                goto LAB_6740eafd;
              }
              if (uVar6 != 0x75) {
                if (uVar6 != 0x78) goto LAB_6740eb00;
                local_440 = 0x27;
                goto LAB_6740e9a9;
              }
              goto LAB_6740e7e2;
            }
            local_414 = 8;
            if ((local_40c & 0x80) != 0) {
              local_40c = local_40c | 0x200;
            }
            goto LAB_6740e7e9;
          }
          if ((local_40c & 0x20) == 0) {
            **(int **)param_3 = local_41c;
          }
          else {
            *(undefined2 *)*(int **)param_3 = (undefined2)local_41c;
          }
          local_438 = 1;
          param_3 = param_3 + 2;
        }
        uVar4 = (undefined2)(uVar10 >> 0x10);
        if (local_434 != (wchar_t *)0x0) {
          _free(local_434);
          local_434 = (wchar_t *)0x0;
          goto LAB_6740ec16;
        }
      }
      param_2 = psVar5;
      uVar10 = CONCAT22(uVar4,*param_2);
      if (*param_2 == 0) {
        return local_41c;
      }
    }
  }
  return local_41c;
}



/* ---- ___heap_select @ 6740ec62 size=26 ---- */

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2003 Release */

undefined4 ___heap_select(void)

{
  if ((DAT_6741e120 == 2) && (4 < DAT_6741e12c)) {
    return 1;
  }
  return 3;
}



/* ---- __heap_init @ 6740ec7c size=81 ---- */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2003 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_6741e53c = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_6741e53c == (HANDLE)0x0) {
    return 0;
  }
  DAT_6741e540 = ___heap_select();
  if ((DAT_6741e540 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_6741e53c);
    return 0;
  }
  return 1;
}



/* ---- __heap_term @ 6740eccd size=127 ---- */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2003 Release */

void __cdecl __heap_term(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_6741e540 == 3) {
    iVar1 = 0;
    if (0 < DAT_6741e524) {
      puVar2 = (undefined4 *)((int)DAT_6741e528 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_6741e53c,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_6741e524);
    }
    HeapFree(DAT_6741e53c,0,DAT_6741e528);
  }
  HeapDestroy(DAT_6741e53c);
  return;
}



/* ---- ___sbh_heap_init @ 6740ed4c size=72 ---- */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_6741e528 = HeapAlloc(DAT_6741e53c,0,0x140);
  if (DAT_6741e528 == (LPVOID)0x0) {
    return 0;
  }
  DAT_6741e520 = 0;
  DAT_6741e524 = 0;
  DAT_6741e530 = DAT_6741e528;
  DAT_6741e52c = param_1;
  DAT_6741e534 = 0x10;
  return 1;
}



/* ---- ___sbh_find_block @ 6740ed94 size=43 ---- */

/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_6741e528;
  while( true ) {
    if (DAT_6741e528 + DAT_6741e524 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ---- ___sbh_free_block @ 6740edbf size=792 ---- */

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2003 Release */

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
      if (DAT_6741e520 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_6741e538 * 0x8000 + DAT_6741e520[3]),0x8000,0x4000);
        DAT_6741e520[2] = DAT_6741e520[2] | 0x80000000U >> ((byte)DAT_6741e538 & 0x1f);
        *(undefined4 *)(DAT_6741e520[4] + 0xc4 + DAT_6741e538 * 4) = 0;
        *(char *)(DAT_6741e520[4] + 0x43) = *(char *)(DAT_6741e520[4] + 0x43) + -1;
        if (*(char *)(DAT_6741e520[4] + 0x43) == '\0') {
          DAT_6741e520[1] = DAT_6741e520[1] & 0xfffffffe;
        }
        if (DAT_6741e520[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_6741e520[3],0,0x8000);
          HeapFree(DAT_6741e53c,0,(LPVOID)DAT_6741e520[4]);
          _memmove(DAT_6741e520,DAT_6741e520 + 5,
                   (DAT_6741e524 * 0x14 - (int)DAT_6741e520) + -0x14 + DAT_6741e528);
          DAT_6741e524 = DAT_6741e524 + -1;
          if (DAT_6741e520 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_6741e530 = DAT_6741e528;
        }
      }
      DAT_6741e520 = param_1;
      DAT_6741e538 = uVar14;
    }
  }
  return;
}



/* ---- ___sbh_alloc_new_region @ 6740f0d7 size=183 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2003 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_6741e524 == DAT_6741e534) {
    pvVar2 = HeapReAlloc(DAT_6741e53c,0,DAT_6741e528,(DAT_6741e534 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_6741e534 = DAT_6741e534 + 0x10;
    DAT_6741e528 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_6741e528 + DAT_6741e524 * 0x14);
  pvVar2 = HeapAlloc(DAT_6741e53c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_6741e524 = DAT_6741e524 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_6741e53c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ---- ___sbh_alloc_new_group @ 6740f18e size=262 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2003 Release */

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
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 << 1) {
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



/* ---- ___sbh_resize_block @ 6740f294 size=735 ---- */

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2003 Release */

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



/* ---- ___sbh_alloc_block @ 6740f573 size=764 ---- */

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2003 Release */

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
  int *piVar13;
  uint uVar14;
  uint local_c;
  int local_8;
  
  uVar8 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar9 = (int)((int)param_1 + 0x17U) >> 4;
  iVar10 = iVar9 + -1;
  puVar11 = DAT_6741e528 + DAT_6741e524 * 5;
  if (iVar10 < 0x20) {
    uVar14 = 0xffffffff >> ((byte)iVar10 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar14 = 0;
    local_c = 0xffffffff >> ((char)iVar9 - 0x21U & 0x1f);
  }
  for (param_1 = DAT_6741e530;
      (param_1 < puVar11 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar14) == 0));
      param_1 = param_1 + 5) {
  }
  if (param_1 == puVar11) {
    for (param_1 = DAT_6741e528;
        (param_1 < DAT_6741e530 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar14) == 0));
        param_1 = param_1 + 5) {
    }
    if (param_1 == DAT_6741e530) {
      for (; (param_1 < puVar11 && (param_1[2] == 0)); param_1 = param_1 + 5) {
      }
      if (param_1 == puVar11) {
        for (param_1 = DAT_6741e528; (param_1 < DAT_6741e530 && (param_1[2] == 0));
            param_1 = param_1 + 5) {
        }
        if ((param_1 == DAT_6741e530) &&
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
     ((piVar6[local_8 + 0x31] & local_c) == 0 && (piVar6[local_8 + 0x11] & uVar14) == 0)) {
    local_8 = 0;
    puVar11 = (uint *)(piVar6 + 0x11);
    if ((piVar6[0x31] & local_c) == 0 && (*puVar11 & uVar14) == 0) {
      do {
        puVar1 = puVar11 + 0x21;
        local_8 = local_8 + 1;
        puVar11 = puVar11 + 1;
      } while ((*puVar1 & local_c) == 0 && (*puVar11 & uVar14) == 0);
    }
  }
  piVar4 = piVar6 + local_8 * 0x81 + 0x51;
  iVar9 = 0;
  uVar14 = piVar6[local_8 + 0x11] & uVar14;
  if (uVar14 == 0) {
    uVar14 = piVar6[local_8 + 0x31] & local_c;
    iVar9 = 0x20;
  }
  for (; -1 < (int)uVar14; uVar14 = uVar14 << 1) {
    iVar9 = iVar9 + 1;
  }
  piVar13 = (int *)piVar4[iVar9 * 2 + 1];
  iVar12 = *piVar13 - uVar8;
  iVar10 = (iVar12 >> 4) + -1;
  if (0x3f < iVar10) {
    iVar10 = 0x3f;
  }
  DAT_6741e530 = param_1;
  if (iVar10 != iVar9) {
    if (piVar13[1] == piVar13[2]) {
      if (iVar9 < 0x20) {
        pcVar3 = (char *)((int)piVar6 + iVar9 + 4);
        uVar14 = ~(0x80000000U >> ((byte)iVar9 & 0x1f));
        piVar6[local_8 + 0x11] = uVar14 & piVar6[local_8 + 0x11];
        *pcVar3 = *pcVar3 + -1;
        if (*pcVar3 == '\0') {
          *param_1 = *param_1 & uVar14;
        }
      }
      else {
        pcVar3 = (char *)((int)piVar6 + iVar9 + 4);
        uVar14 = ~(0x80000000U >> ((byte)iVar9 - 0x20 & 0x1f));
        piVar6[local_8 + 0x31] = piVar6[local_8 + 0x31] & uVar14;
        *pcVar3 = *pcVar3 + -1;
        if (*pcVar3 == '\0') {
          param_1[1] = param_1[1] & uVar14;
        }
      }
    }
    *(int *)(piVar13[2] + 4) = piVar13[1];
    *(int *)(piVar13[1] + 8) = piVar13[2];
    if (iVar12 == 0) goto LAB_6740f82c;
    piVar2 = piVar4 + iVar10 * 2;
    iVar9 = piVar2[1];
    piVar13[2] = (int)piVar2;
    piVar13[1] = iVar9;
    piVar2[1] = (int)piVar13;
    *(int **)(piVar13[1] + 8) = piVar13;
    if (piVar13[1] == piVar13[2]) {
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
    *piVar13 = iVar12;
    *(int *)(iVar12 + -4 + (int)piVar13) = iVar12;
  }
LAB_6740f82c:
  piVar13 = (int *)((int)piVar13 + iVar12);
  *piVar13 = uVar8 + 1;
  *(uint *)((int)piVar13 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar4;
  *piVar4 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_6741e520)) && (local_8 == DAT_6741e538)) {
    DAT_6741e520 = (uint *)0x0;
  }
  *piVar6 = local_8;
  return piVar13 + 1;
}



/* ---- __freebuf @ 6740f86f size=43 ---- */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ---- __write_lk @ 6740f89a size=462 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __write_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __write_lk(uint param_1,char *param_2,DWORD param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  int *piVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  DWORD local_424;
  int local_420;
  DWORD local_41c;
  char *local_418;
  int local_414;
  ulong local_410;
  char local_40c [1028];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  local_41c = 0;
  local_420 = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar5 = &DAT_6741e420 + ((int)param_1 >> 5);
  iVar8 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*piVar5 + 4 + iVar8) & 0x20) != 0) {
    __lseeki64_lk(param_1,0,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar5 + iVar8) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),param_2,param_3,&local_424,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_410 = GetLastError();
    }
    else {
      local_410 = 0;
      local_41c = local_424;
    }
LAB_6740f9b6:
    if (local_41c != 0) {
      return local_41c - local_420;
    }
    if (local_410 != 0) {
      if (local_410 == 5) {
        piVar5 = FUN_6740cf07();
        *piVar5 = 9;
        puVar6 = FUN_6740cf10();
        *puVar6 = 5;
        return -1;
      }
      __dosmaperr(local_410);
      return -1;
    }
  }
  else {
    local_418 = param_2;
    local_410 = 0;
    if (param_3 != 0) {
      do {
        uVar7 = (int)local_418 - (int)param_2;
        pcVar3 = local_40c;
        local_414 = 0;
        do {
          if (param_3 <= uVar7) break;
          pcVar1 = local_418 + 1;
          cVar2 = *local_418;
          uVar7 = uVar7 + 1;
          if (cVar2 == '\n') {
            local_420 = local_420 + 1;
            *pcVar3 = '\r';
            pcVar3 = pcVar3 + 1;
            local_414 = local_414 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
          local_414 = local_414 + 1;
          local_418 = pcVar1;
        } while (local_414 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),local_40c,(int)pcVar3 - (int)local_40c,
                          &local_424,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_410 = GetLastError();
          goto LAB_6740f9b6;
        }
        local_41c = local_41c + local_424;
        if (((int)local_424 < (int)pcVar3 - (int)local_40c) ||
           (param_3 <= (uint)((int)local_418 - (int)param_2))) goto LAB_6740f9b6;
      } while( true );
    }
  }
  if (((*(byte *)(*piVar5 + 4 + iVar8) & 0x40) == 0) || (*param_2 != '\x1a')) {
    piVar5 = FUN_6740cf07();
    *piVar5 = 0x1c;
    puVar6 = FUN_6740cf10();
    *puVar6 = 0;
    return -1;
  }
  return 0;
}



/* ---- __write @ 6740fa68 size=160 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2003 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < DAT_6741e400) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_6740cf07();
        *piVar1 = 9;
        puVar2 = FUN_6740cf10();
        *puVar2 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __write_lk(_FileHandle,_Buf,_MaxCharCount);
      }
      FUN_6740faef();
      return local_20;
    }
  }
  piVar1 = FUN_6740cf07();
  *piVar1 = 9;
  puVar2 = FUN_6740cf10();
  *puVar2 = 0;
  return -1;
}



/* ---- FUN_6740faef @ 6740faef size=8 ---- */

void FUN_6740faef(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* ---- __commit @ 6740fb13 size=177 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2003 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  int iVar4;
  DWORD local_20;
  
  if (DAT_6741e400 <= (uint)_FileHandle) {
LAB_6740fbbb:
    piVar3 = FUN_6740cf07();
    *piVar3 = 9;
    return -1;
  }
  iVar4 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar4) & 1) == 0) goto LAB_6740fbbb;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      local_20 = GetLastError();
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) goto LAB_6740fba2;
    puVar2 = FUN_6740cf10();
    *puVar2 = local_20;
  }
  piVar3 = FUN_6740cf07();
  *piVar3 = 9;
  local_20 = 0xffffffff;
LAB_6740fba2:
  FUN_6740fbb3();
  return local_20;
}



/* ---- FUN_6740fbb3 @ 6740fbb3 size=8 ---- */

void FUN_6740fbb3(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* ---- __getbuf @ 6740fbcf size=68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_6741e0b4 = _DAT_6741e0b4 + 1;
  pcVar1 = _malloc(0x1000);
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



/* ---- __filbuf @ 6740fc13 size=225 ---- */

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = _File->_flag;
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      _File->_flag = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        __getbuf(_File);
      }
      else {
        _File->_ptr = _File->_base;
      }
      iVar3 = __read(_File->_file,_File->_base,_File->_bufsiz);
      _File->_cnt = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((_File->_flag & 0x82U) == 0) {
          uVar2 = _File->_file;
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_6741be14;
          }
          else {
            puVar4 = (undefined *)((&DAT_6741e420)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            _File->_flag = _File->_flag | 0x2000;
          }
        }
        if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
           ((_File->_flag & 0x400U) == 0)) {
          _File->_bufsiz = 0x1000;
        }
        _File->_cnt = iVar3 + -1;
        bVar1 = *_File->_ptr;
        _File->_ptr = _File->_ptr + 1;
        return (uint)bVar1;
      }
      _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      _File->_cnt = 0;
    }
    else {
      _File->_flag = uVar2 | 0x20;
    }
  }
  return -1;
}



/* ---- __ftelli64_lk @ 6740fcf4 size=405 ---- */

/* Library Function - Single Match
    __ftelli64_lk
   
   Library: Visual Studio 2003 Release */

ulonglong __cdecl __ftelli64_lk(uint *param_1)

{
  uint _FileHandle;
  byte bVar1;
  ulonglong uVar2;
  int *piVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int unaff_EDI;
  longlong lVar11;
  undefined8 local_14;
  uint local_8;
  
  puVar6 = param_1;
  _FileHandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_14 = __lseeki64(_FileHandle,0x100000000,unaff_EDI);
  uVar9 = (uint)((ulonglong)local_14 >> 0x20);
  if ((uVar9 != 0 && -1 < local_14) || (-1 < local_14)) {
    if ((param_1[3] & 0x108) == 0) {
      return local_14 - (int)param_1[1];
    }
    pcVar5 = (char *)*param_1;
    pcVar8 = (char *)param_1[2];
    local_8 = (int)pcVar5 - (int)pcVar8;
    if ((param_1[3] & 3) == 0) {
      if (-1 < (char)param_1[3]) {
        piVar3 = FUN_6740cf07();
        *piVar3 = 0x16;
        goto LAB_6740fdb1;
      }
    }
    else if (((*(byte *)((&DAT_6741e420)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x24) &
              0x80) != 0) && (pcVar7 = pcVar8, pcVar8 < pcVar5)) {
      do {
        if (*pcVar7 == '\n') {
          local_8 = local_8 + 1;
        }
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 < (char *)*param_1);
    }
    if (local_14 == 0) {
      uVar2 = (ulonglong)local_8;
    }
    else {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_8 = 0;
        }
        else {
          puVar4 = (uint *)(pcVar5 + (param_1[1] - (int)pcVar8));
          iVar10 = (_FileHandle & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_6741e420)[(int)_FileHandle >> 5]) & 0x80) != 0) {
            lVar11 = __lseeki64(_FileHandle,0x200000000,unaff_EDI);
            if (local_14 == lVar11) {
              pcVar5 = (char *)param_1[2];
              pcVar8 = (char *)((int)puVar4 + (int)pcVar5);
              param_1 = puVar4;
              for (; pcVar5 < pcVar8; pcVar5 = pcVar5 + 1) {
                if (*pcVar5 == '\n') {
                  param_1 = (uint *)((int)param_1 + 1);
                }
              }
              bVar1 = *(byte *)((int)puVar6 + 0xd) & 0x20;
            }
            else {
              __lseeki64(_FileHandle,(ulonglong)uVar9,unaff_EDI);
              puVar6 = (uint *)0x200;
              if ((((uint *)0x200 < puVar4) || ((param_1[3] & 8) == 0)) ||
                 ((param_1[3] & 0x400) != 0)) {
                puVar6 = (uint *)param_1[6];
              }
              bVar1 = *(byte *)(iVar10 + 4 + (&DAT_6741e420)[(int)_FileHandle >> 5]) & 4;
              param_1 = puVar6;
            }
            puVar4 = param_1;
            if (bVar1 != 0) {
              puVar4 = (uint *)((int)param_1 + 1);
            }
          }
          param_1 = puVar4;
          local_14 = CONCAT44(uVar9 - ((uint *)local_14 < param_1),
                              (int)(uint *)local_14 - (int)param_1);
        }
      }
      uVar2 = CONCAT44(local_14._4_4_ + (uint)CARRY4(local_8,(uint)local_14),
                       local_8 + (uint)local_14);
    }
  }
  else {
LAB_6740fdb1:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* ---- __ftelli64 @ 6740fe89 size=61 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ftelli64
   
   Library: Visual Studio 2003 Release */

longlong __cdecl __ftelli64(FILE *_File)

{
  ulonglong uVar1;
  
  __lock_file(_File);
  uVar1 = __ftelli64_lk((uint *)_File);
  FUN_6740fec6();
  return uVar1;
}



/* ---- FUN_6740fec6 @ 6740fec6 size=10 ---- */

void FUN_6740fec6(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* ---- __lseek_lk @ 6740fed0 size=116 ---- */

/* Library Function - Single Match
    __lseek_lk
   
   Library: Visual Studio 2003 Release */

DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_6740cf07();
    *piVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    pbVar1 = (byte *)((&DAT_6741e420)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    __dosmaperr(uVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}



/* ---- __lseek @ 6740ff44 size=160 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2003 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD local_20;
  
  if ((uint)_FileHandle < DAT_6741e400) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_6740cf07();
        *piVar1 = 9;
        puVar2 = FUN_6740cf10();
        *puVar2 = 0;
        local_20 = 0xffffffff;
      }
      else {
        local_20 = __lseek_lk(_FileHandle,_Offset,_Origin);
      }
      FUN_6740ffcb();
      return local_20;
    }
  }
  piVar1 = FUN_6740cf07();
  *piVar1 = 9;
  puVar2 = FUN_6740cf10();
  *puVar2 = 0;
  return -1;
}



/* ---- FUN_6740ffcb @ 6740ffcb size=8 ---- */

void FUN_6740ffcb(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* ---- __ftell_lk @ 6740ffef size=354 ---- */

/* Library Function - Single Match
    __ftell_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __ftell_lk(uint *param_1)

{
  uint _FileHandle;
  uint uVar1;
  byte bVar2;
  int *piVar3;
  uint *puVar4;
  long lVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  puVar7 = param_1;
  _FileHandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_8 = __lseek(_FileHandle,0,1);
  if (local_8 < 0) {
LAB_6741008c:
    local_c = -1;
  }
  else {
    uVar1 = param_1[3];
    if ((uVar1 & 0x108) == 0) {
      return local_8 - param_1[1];
    }
    pcVar6 = (char *)*param_1;
    pcVar9 = (char *)param_1[2];
    local_c = (int)pcVar6 - (int)pcVar9;
    if ((uVar1 & 3) == 0) {
      if (-1 < (char)uVar1) {
        piVar3 = FUN_6740cf07();
        *piVar3 = 0x16;
        goto LAB_6741008c;
      }
    }
    else if (((*(byte *)((&DAT_6741e420)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x24) &
              0x80) != 0) && (pcVar8 = pcVar9, pcVar9 < pcVar6)) {
      do {
        if (*pcVar8 == '\n') {
          local_c = local_c + 1;
        }
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 < (char *)*param_1);
    }
    if (local_8 != 0) {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_c = 0;
        }
        else {
          puVar4 = (uint *)(pcVar6 + (param_1[1] - (int)pcVar9));
          iVar10 = (_FileHandle & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_6741e420)[(int)_FileHandle >> 5]) & 0x80) != 0) {
            lVar5 = __lseek(_FileHandle,0,2);
            if (lVar5 == local_8) {
              pcVar6 = (char *)param_1[2];
              pcVar9 = (char *)((int)puVar4 + (int)pcVar6);
              param_1 = puVar4;
              for (; pcVar6 < pcVar9; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '\n') {
                  param_1 = (uint *)((int)param_1 + 1);
                }
              }
              bVar2 = *(byte *)((int)puVar7 + 0xd) & 0x20;
            }
            else {
              __lseek(_FileHandle,local_8,0);
              puVar7 = (uint *)0x200;
              if ((((uint *)0x200 < puVar4) || ((param_1[3] & 8) == 0)) ||
                 ((param_1[3] & 0x400) != 0)) {
                puVar7 = (uint *)param_1[6];
              }
              bVar2 = *(byte *)(iVar10 + 4 + (&DAT_6741e420)[(int)_FileHandle >> 5]) & 4;
              param_1 = puVar7;
            }
            puVar4 = param_1;
            if (bVar2 != 0) {
              puVar4 = (uint *)((int)param_1 + 1);
            }
          }
          param_1 = puVar4;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}



/* ---- __fseeki64_lk @ 67410151 size=147 ---- */

/* Library Function - Single Match
    __fseeki64_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fseeki64_lk(FILE *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int unaff_EDI;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = CONCAT44(param_3,param_2);
  if (((param_1->_flag & 0x83U) == 0) || (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    piVar2 = FUN_6740cf07();
    *piVar2 = 0x16;
  }
  else {
    param_1->_flag = param_1->_flag & 0xffffffef;
    if (param_4 == 1) {
      uVar3 = __ftelli64_lk((uint *)param_1);
      lVar4 = uVar3 + lVar4;
      param_4 = 0;
    }
    param_3 = (undefined4)((ulonglong)lVar4 >> 0x20);
    __flush(param_1);
    uVar1 = param_1->_flag;
    if ((char)uVar1 < '\0') {
      param_1->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      param_1->_bufsiz = 0x200;
    }
    lVar4 = __lseeki64(param_1->_file,CONCAT44(param_4,param_3),unaff_EDI);
    if (lVar4 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* ---- __fseeki64 @ 674101e4 size=66 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fseeki64
   
   Library: Visual Studio 2003 Release */

int __cdecl __fseeki64(FILE *_File,longlong _Offset,int _Origin)

{
  int iVar1;
  undefined4 in_stack_00000008;
  
  __lock_file(_File);
  iVar1 = __fseeki64_lk(_File,in_stack_00000008,(undefined4)_Offset,_Offset._4_4_);
  FUN_67410226();
  return iVar1;
}



/* ---- FUN_67410226 @ 67410226 size=10 ---- */

void FUN_67410226(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* ---- __close_lk @ 67410230 size=131 ---- */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __close_lk(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_6741027e;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_67410280;
    }
  }
LAB_6741027e:
  DVar4 = 0;
LAB_67410280:
  __free_osfhnd(param_1);
  *(undefined1 *)((&DAT_6741e420)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ---- __close @ 674102b3 size=144 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2003 Release */

int __cdecl __close(int _FileHandle)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < DAT_6741e400) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_6740cf07();
        *piVar1 = 9;
        local_20 = -1;
      }
      else {
        local_20 = __close_lk(_FileHandle);
      }
      FUN_6741032a();
      return local_20;
    }
  }
  piVar1 = FUN_6740cf07();
  *piVar1 = 9;
  puVar2 = FUN_6740cf10();
  *puVar2 = 0;
  return -1;
}



/* ---- FUN_6741032a @ 6741032a size=8 ---- */

void FUN_6741032a(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* ---- __ioinit @ 6741034e size=510 ---- */

/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __ioinit(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  HANDLE hFile;
  int iVar7;
  uint uVar8;
  UINT *pUVar9;
  UINT UVar10;
  byte *local_48;
  _STARTUPINFOA local_44;
  
  puVar3 = _malloc(0x480);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = -1;
  }
  else {
    DAT_6741e400 = 0x20;
    DAT_6741e420 = puVar3;
    for (; puVar3 < DAT_6741e420 + 0x120; puVar3 = puVar3 + 9) {
      *puVar3 = 0xffffffff;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(undefined1 *)((int)puVar3 + 5) = 10;
    }
    GetStartupInfoA(&local_44);
    if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
      UVar10 = *(UINT *)local_44.lpReserved2;
      pUVar9 = (UINT *)((int)local_44.lpReserved2 + 4);
      local_48 = (byte *)(UVar10 + (int)pUVar9);
      if (0x7ff < (int)UVar10) {
        UVar10 = 0x800;
      }
      if ((int)DAT_6741e400 < (int)UVar10) {
        puVar3 = &DAT_6741e424;
        do {
          puVar5 = _malloc(0x480);
          if (puVar5 == (undefined4 *)0x0) {
            UVar10 = DAT_6741e400;
            break;
          }
          DAT_6741e400 = DAT_6741e400 + 0x20;
          *puVar3 = puVar5;
          puVar2 = puVar5;
          for (; puVar5 < puVar2 + 0x120; puVar5 = puVar5 + 9) {
            *puVar5 = 0xffffffff;
            puVar5[2] = 0;
            *(undefined1 *)(puVar5 + 1) = 0;
            *(undefined1 *)((int)puVar5 + 5) = 10;
            puVar2 = (undefined4 *)*puVar3;
          }
          puVar3 = puVar3 + 1;
        } while ((int)DAT_6741e400 < (int)UVar10);
      }
      uVar8 = 0;
      if (0 < (int)UVar10) {
        do {
          if (((*(HANDLE *)local_48 != (HANDLE)0xffffffff) && ((*pUVar9 & 1) != 0)) &&
             (((*pUVar9 & 8) != 0 || (DVar6 = GetFileType(*(HANDLE *)local_48), DVar6 != 0)))) {
            puVar3 = (undefined4 *)((int)(&DAT_6741e420)[(int)uVar8 >> 5] + (uVar8 & 0x1f) * 0x24);
            *puVar3 = *(undefined4 *)local_48;
            *(byte *)(puVar3 + 1) = (byte)*pUVar9;
            iVar4 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
            if (iVar4 == 0) {
              return -1;
            }
            puVar3[2] = puVar3[2] + 1;
          }
          local_48 = local_48 + 4;
          uVar8 = uVar8 + 1;
          pUVar9 = (UINT *)((int)pUVar9 + 1);
        } while ((int)uVar8 < (int)UVar10);
      }
    }
    iVar4 = 0;
    do {
      piVar1 = DAT_6741e420 + iVar4 * 9;
      if (*piVar1 == -1) {
        *(undefined1 *)(piVar1 + 1) = 0x81;
        if (iVar4 == 0) {
          DVar6 = 0xfffffff6;
        }
        else {
          DVar6 = 0xfffffff5 - (iVar4 != 1);
        }
        hFile = GetStdHandle(DVar6);
        if ((hFile == (HANDLE)0xffffffff) || (DVar6 = GetFileType(hFile), DVar6 == 0)) {
          *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x40;
        }
        else {
          *piVar1 = (int)hFile;
          if ((DVar6 & 0xff) == 2) {
            *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x40;
          }
          else if ((DVar6 & 0xff) == 3) {
            *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 8;
          }
          iVar7 = ___crtInitCritSecAndSpinCount(piVar1 + 3,4000);
          if (iVar7 == 0) {
            return -1;
          }
          piVar1[2] = piVar1[2] + 1;
        }
      }
      else {
        *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x80;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    SetHandleCount(DAT_6741e400);
    iVar4 = 0;
  }
  return iVar4;
}



/* ---- __ioterm @ 6741054c size=76 ---- */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2003 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_6741e420;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x480; uVar3 = uVar3 + 0x24) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x6741e520);
  return;
}



/* ---- __setenvp @ 67410598 size=199 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2003 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  if (DAT_6741e78c == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  puVar4 = DAT_6741df3c;
  if (DAT_6741df3c != (uint *)0x0) {
    for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + sVar2 + 1)) {
      if ((char)*puVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen((char *)puVar4);
    }
    puVar1 = _malloc(iVar5 * 4 + 4);
    DAT_6741e140 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = DAT_6741df3c;
      do {
        if ((char)*puVar4 == '\0') {
          _free(DAT_6741df3c);
          DAT_6741df3c = (uint *)0x0;
          *puVar1 = 0;
          _DAT_6741e780 = 1;
          return 0;
        }
        sVar2 = _strlen((char *)puVar4);
        if ((char)*puVar4 != '=') {
          puVar3 = _malloc(sVar2 + 1);
          *puVar1 = puVar3;
          if (puVar3 == (uint *)0x0) {
            _free(DAT_6741e140);
            DAT_6741e140 = (undefined4 *)0x0;
            return -1;
          }
          FUN_6740e000(puVar3,puVar4);
          puVar1 = puVar1 + 1;
        }
        puVar4 = (uint *)((int)puVar4 + sVar2 + 1);
      } while( true );
    }
  }
  return -1;
}



/* ---- parse_cmdline @ 6741065f size=364 ---- */

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2003 Release */

void __cdecl parse_cmdline(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte bVar4;
  byte *in_ECX;
  uint uVar5;
  int *unaff_ESI;
  
  bVar1 = false;
  *unaff_ESI = 0;
  *param_2 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = in_ECX;
    param_1 = param_1 + 1;
  }
  do {
    if (*in_EAX == 0x22) {
      bVar1 = !bVar1;
      pbVar3 = in_EAX + 1;
      bVar4 = 0x22;
    }
    else {
      *unaff_ESI = *unaff_ESI + 1;
      if (in_ECX != (byte *)0x0) {
        *in_ECX = *in_EAX;
        in_ECX = in_ECX + 1;
      }
      bVar4 = *in_EAX;
      pbVar3 = in_EAX + 1;
      if ((*(byte *)((int)&DAT_6741e560 + bVar4 + 1) & 4) != 0) {
        *unaff_ESI = *unaff_ESI + 1;
        if (in_ECX != (byte *)0x0) {
          *in_ECX = *pbVar3;
          in_ECX = in_ECX + 1;
        }
        pbVar3 = in_EAX + 2;
      }
      if (bVar4 == 0) {
        pbVar3 = pbVar3 + -1;
        goto LAB_674106d8;
      }
    }
    in_EAX = pbVar3;
  } while ((bVar1) || ((bVar4 != 0x20 && (bVar4 != 9))));
  if (in_ECX != (byte *)0x0) {
    in_ECX[-1] = 0;
  }
LAB_674106d8:
  bVar1 = false;
  while (*pbVar3 != 0) {
    for (; (*pbVar3 == 0x20 || (*pbVar3 == 9)); pbVar3 = pbVar3 + 1) {
    }
    if (*pbVar3 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_ECX;
      param_1 = param_1 + 1;
    }
    *param_2 = *param_2 + 1;
    while( true ) {
      bVar2 = true;
      uVar5 = 0;
      for (; *pbVar3 == 0x5c; pbVar3 = pbVar3 + 1) {
        uVar5 = uVar5 + 1;
      }
      if (*pbVar3 == 0x22) {
        if ((uVar5 & 1) == 0) {
          if ((bVar1) && (pbVar3[1] == 0x22)) {
            pbVar3 = pbVar3 + 1;
          }
          else {
            bVar2 = false;
          }
          bVar1 = !bVar1;
        }
        uVar5 = uVar5 >> 1;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (in_ECX != (byte *)0x0) {
          *in_ECX = 0x5c;
          in_ECX = in_ECX + 1;
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      bVar4 = *pbVar3;
      if ((bVar4 == 0) || ((!bVar1 && ((bVar4 == 0x20 || (bVar4 == 9)))))) break;
      if (bVar2) {
        if (in_ECX == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_6741e560 + bVar4 + 1) & 4) != 0) {
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_6741e560 + bVar4 + 1) & 4) != 0) {
            *in_ECX = bVar4;
            in_ECX = in_ECX + 1;
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
          *in_ECX = *pbVar3;
          in_ECX = in_ECX + 1;
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      pbVar3 = pbVar3 + 1;
    }
    if (in_ECX != (byte *)0x0) {
      *in_ECX = 0;
      in_ECX = in_ECX + 1;
    }
    *unaff_ESI = *unaff_ESI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_2 = *param_2 + 1;
  return;
}



/* ---- __setargv @ 674107cb size=162 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2003 Release */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int local_8;
  
  local_8 = in_ECX;
  if (DAT_6741e78c == 0) {
    ___initmbctable();
  }
  DAT_6741e26c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_6741e168,0x104);
  _DAT_6741e150 = &DAT_6741e168;
  parse_cmdline((undefined4 *)0x0,&local_8);
  puVar1 = _malloc(in_ECX + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
    parse_cmdline(puVar1,&local_8);
    _DAT_6741e134 = local_8 + -1;
    iVar2 = 0;
    _DAT_6741e138 = puVar1;
  }
  return iVar2;
}



/* ---- ___crtGetEnvironmentStringsA @ 6741086d size=290 ---- */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2003 Release */

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
  if (DAT_6741e270 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_6741e270 = 1;
      goto LAB_674108bb;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_6741e270 = 2;
    }
  }
  if (DAT_6741e270 != 1) {
    if ((DAT_6741e270 != 2) && (DAT_6741e270 != 0)) {
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
    _Dst = _malloc((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    }
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_674108bb:
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
  if ((_Size != 0) && (lpMultiByteStr = _malloc(_Size), lpMultiByteStr != (LPSTR)0x0)) {
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



/* ---- __RTC_Initialize @ 6741098f size=61 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2003 Release */

void __RTC_Initialize(void)

{
  undefined4 *local_20;
  
  for (local_20 = &DAT_67419030; local_20 < &DAT_67419030; local_20 = local_20 + 1) {
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)();
    }
  }
  return;
}



/* ---- __NMSG_WRITE @ 67410a17 size=375 ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2003 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  size_t sVar4;
  size_t sVar5;
  HANDLE hFile;
  int iVar6;
  char *_Str;
  undefined4 uStackY_14c;
  UINT aUStackY_148 [3];
  undefined4 auStackY_13c [2];
  undefined4 uStackY_134;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  undefined4 local_110;
  undefined4 auStack_10c [64];
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_6741be38)[uVar2 * 2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x13);
  iVar6 = uVar2 * 8;
  if (param_1 == (&DAT_6741be38)[uVar2 * 2]) {
    if ((DAT_6741df44 == 1) || ((DAT_6741df44 == 0 && (DAT_6741df48 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = (LPDWORD)&param_1;
      sVar4 = _strlen(*(char **)(iVar6 + 0x6741be3c));
      lpBuffer = *(LPCVOID *)(iVar6 + 0x6741be3c);
      uStackY_134 = 0x67410b6b;
      hFile = GetStdHandle(0xfffffff4);
      uStackY_134 = 0x67410b72;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      local_c = 0;
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_110,0x104);
      if (DVar3 == 0) {
        FUN_6740e000(&local_110,(uint *)"<program name unknown>");
      }
      _Str = (char *)&local_110;
      sVar4 = _strlen(_Str);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(_Str);
        _Str = (char *)((int)aUStackY_148 + (sVar4 - 3));
        _strncpy(_Str,"...",3);
      }
      sVar4 = _strlen(_Str);
      sVar5 = _strlen(*(char **)(iVar6 + 0x6741be3c));
      iVar1 = -(sVar4 + sVar5 + 0x1f & 0xfffffffc);
      *(char **)((int)auStack_10c + iVar1 + -0x14) = "Runtime Error!\n\nProgram: ";
      *(int *)((int)auStackY_13c + iVar1 + 0x18) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 0x14) = 0x67410b17;
      FUN_6740e000(*(uint **)((int)auStackY_13c + iVar1 + 0x18),
                   *(uint **)((int)auStack_10c + iVar1 + -0x14));
      *(char **)((int)auStackY_13c + iVar1 + 0x14) = _Str;
      *(int *)((int)auStackY_13c + iVar1 + 0x10) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 0xc) = 0x67410b1e;
      FUN_6740e010(*(uint **)((int)auStackY_13c + iVar1 + 0x10),
                   *(uint **)((int)auStackY_13c + iVar1 + 0x14));
      *(undefined **)((int)auStackY_13c + iVar1 + 0xc) = &DAT_67417120;
      *(int *)((int)auStackY_13c + iVar1 + 8) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = 0x67410b29;
      FUN_6740e010(*(uint **)((int)auStackY_13c + iVar1 + 8),
                   *(uint **)((int)auStackY_13c + iVar1 + 0xc));
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = *(undefined4 *)(iVar6 + 0x6741be3c);
      *(int *)((int)auStackY_13c + iVar1) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x67410b35;
      FUN_6740e010(*(uint **)((int)auStackY_13c + iVar1),*(uint **)((int)auStackY_13c + iVar1 + 4));
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x12010;
      *(char **)((int)aUStackY_148 + iVar1 + 4) = "Microsoft Visual C++ Runtime Library";
      *(int *)((int)aUStackY_148 + iVar1) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)aUStackY_148 + iVar1 + -4) = 0x67410b45;
      ___crtMessageBoxA(*(LPCSTR *)((int)aUStackY_148 + iVar1),
                        *(LPCSTR *)((int)aUStackY_148 + iVar1 + 4),
                        *(UINT *)((int)aUStackY_148 + iVar1 + 8));
    }
  }
  return;
}



/* ---- __FF_MSGBANNER @ 67410b8e size=57 ---- */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_6741df44 == 1) || ((DAT_6741df44 == 0 && (DAT_6741df48 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_6741e274 != (code *)0x0) {
      (*DAT_6741e274)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}



/* ---- ___ansicp @ 67410bc7 size=67 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2003 Release */

long __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  long lVar2;
  CHAR local_10 [6];
  undefined1 local_a;
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = _atol(local_10);
  }
  return lVar2;
}



/* ---- ___convertcp @ 67410c0a size=434 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2003 Release */

LPSTR __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,size_t *param_4,LPSTR param_5,int param_6)

{
  size_t cbMultiByte;
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  size_t sVar5;
  undefined1 uStack00000000;
  undefined4 local_4c;
  size_t local_3c;
  LPSTR local_38;
  _cpinfo local_34;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_67417818;
  uStack_c = 0x67410c16;
  local_20 = DAT_6741b534;
  local_38 = (LPSTR)0x0;
  bVar2 = false;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 != param_2) {
    BVar3 = GetCPInfo(param_1,&local_34);
    if ((((BVar3 != 0) && (local_34.MaxCharSize == 1)) &&
        (BVar3 = GetCPInfo(param_2,&local_34), BVar3 != 0)) && (local_34.MaxCharSize == 1)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (cbMultiByte == 0xffffffff) {
        sVar5 = _strlen(param_3);
        local_3c = sVar5 + 1;
      }
      else {
        local_3c = cbMultiByte;
      }
    }
    if ((!bVar1) &&
       (local_3c = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0), local_3c == 0))
    {
      return (LPSTR)0x0;
    }
    local_8 = (undefined *)0x0;
    local_1c = (undefined1 *)((int)register0x00000010 + -0x58);
    local_4c = (LPWSTR)((int)register0x00000010 + -0x58);
    _memset((void *)((int)register0x00000010 + -0x58),0,local_3c * 2);
    local_8 = (undefined *)0xffffffff;
    if (&uStack00000000 == (undefined1 *)0x58) {
      local_4c = _calloc(2,local_3c);
      if (local_4c == (LPWSTR)0x0) {
        return (LPSTR)0x0;
      }
      bVar2 = true;
    }
    iVar4 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_4c,local_3c);
    if (iVar4 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (local_3c = WideCharToMultiByte(param_2,0,local_4c,local_3c,(LPSTR)0x0,0,(LPCSTR)0x0,
                                            (LPBOOL)0x0), local_3c != 0)) &&
           (local_38 = _calloc(1,local_3c), local_38 != (LPSTR)0x0)) {
          sVar5 = WideCharToMultiByte(param_2,0,local_4c,local_3c,local_38,local_3c,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (sVar5 == 0) {
            _free(local_38);
            local_38 = (LPSTR)0x0;
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = sVar5;
          }
        }
      }
      else {
        iVar4 = WideCharToMultiByte(param_2,0,local_4c,local_3c,param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 != 0) {
          local_38 = param_5;
        }
      }
    }
  }
  if (bVar2) {
    _free(local_4c);
  }
  return local_38;
}



/* ---- __resetstkoflw @ 67410dd3 size=227 ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    __resetstkoflw
   
   Library: Visual Studio 2003 Release */

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  BOOL BVar2;
  LPCVOID pvVar3;
  LPCVOID pvVar4;
  undefined4 uStack_60;
  _SYSTEM_INFO local_50;
  _MEMORY_BASIC_INFORMATION local_2c;
  DWORD local_10;
  SIZE_T local_c;
  LPCVOID local_8;
  
  uStack_60 = 0x67410de4;
  SVar1 = VirtualQuery(&uStack_60,&local_2c,0x1c);
  if (SVar1 != 0) {
    GetSystemInfo(&local_50);
    pvVar4 = (LPCVOID)((~(local_50.dwPageSize - 1) & (uint)&uStack_60) - local_50.dwPageSize);
    pvVar3 = (LPCVOID)(((-(uint)(DAT_6741e120 != 1) & 0xfffffff1) + 0x11) * local_50.dwPageSize +
                      (int)local_2c.AllocationBase);
    local_c = local_50.dwPageSize;
    if (pvVar3 <= pvVar4) {
      if (DAT_6741e120 == 1) {
        local_8 = pvVar4;
      }
      else {
        local_8 = local_2c.AllocationBase;
        do {
          SVar1 = VirtualQuery(local_8,&local_2c,0x1c);
          if (SVar1 == 0) {
            return 0;
          }
          local_8 = (LPCVOID)((int)local_8 + local_2c.RegionSize);
        } while ((local_2c.State & 0x1000) == 0);
        local_8 = local_2c.BaseAddress;
        if ((local_2c.Protect._1_1_ & 1) != 0) {
          return 1;
        }
        if (pvVar4 < local_2c.BaseAddress) {
          return 0;
        }
        if (local_2c.BaseAddress < pvVar3) {
          local_8 = pvVar3;
        }
        VirtualAlloc(local_8,local_c,0x1000,4);
      }
      BVar2 = VirtualProtect(local_8,local_c,(-(uint)(DAT_6741e120 != 1) & 0x103) + 1,&local_10);
      return BVar2;
    }
  }
  return 0;
}



/* ---- ___isctype_mt @ 67410eb6 size=119 ---- */

/* Library Function - Single Match
    ___isctype_mt
   
   Library: Visual Studio 2003 Release */

uint __thiscall ___isctype_mt(void *this,int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  LPCSTR _LpSrcStr;
  BOOL BVar2;
  undefined4 local_8;
  
  if (param_2 + 1U < 0x101) {
    param_2._2_2_ = *(ushort *)(*(int *)(param_1 + 0x48) + param_2 * 2);
  }
  else {
    local_8._2_2_ = (undefined2)((uint)this >> 0x10);
    if ((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (param_2 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      local_8._0_2_ = (ushort)(byte)param_2;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      local_8 = CONCAT31(CONCAT21(local_8._2_2_,(byte)param_2),(char)((uint)param_2 >> 8));
      uVar1 = local_8;
      local_8._3_1_ = (undefined1)((uint)this >> 0x18);
      local_8._0_2_ = (ushort)uVar1;
      local_8._0_3_ = (uint3)(ushort)local_8;
      _LpSrcStr = (LPCSTR)0x2;
    }
    BVar2 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&local_8,_LpSrcStr,(int)&param_2 + 2,
                       *(LPWORD *)(param_1 + 4),*(int *)(param_1 + 0x14),1);
    if (BVar2 == 0) {
      return 0;
    }
  }
  return param_2._2_2_ & param_3;
}



/* ---- ___crtGetStringTypeA @ 67410f2d size=421 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2003 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  LPWORD pWVar8;
  LCID Locale;
  undefined1 *puVar9;
  LPSTR _Memory;
  LPWORD pWVar10;
  undefined4 uStackY_58;
  undefined1 auStack_2e [2];
  size_t local_2c [3];
  WORD local_20 [2];
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_67417828;
  uStack_c = 0x67410f39;
  _Memory = (LPSTR)0x0;
  if (DAT_6741e29c == 0) {
    BVar3 = GetStringTypeW(1,L"",1,local_20);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_6741e29c = 2;
      }
    }
    else {
      DAT_6741e29c = 1;
    }
  }
  if ((DAT_6741e29c == 2) || (DAT_6741e29c == 0)) {
    Locale = _Code_page;
    if (_Code_page == 0) {
      Locale = DAT_6741e284;
    }
    pWVar10 = _LpCharType;
    if (_LpCharType == (LPWORD)0x0) {
      pWVar10 = DAT_6741e294;
    }
    pWVar8 = (LPWORD)___ansicp(Locale);
    if (pWVar8 != (LPWORD)0xffffffff) {
      if (pWVar8 != pWVar10) {
        uStackY_58 = 0x674110b0;
        _Memory = ___convertcp((UINT)pWVar10,(UINT)pWVar8,(char *)_DWInfoType,(size_t *)&_LpSrcStr,
                               (LPSTR)0x0,0);
        if (_Memory == (LPSTR)0x0) {
          return 0;
        }
        _DWInfoType = (DWORD)_Memory;
      }
      BVar3 = GetStringTypeA(Locale,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                             (LPWORD)_CchSrc);
      if (_Memory != (LPSTR)0x0) {
        _free(_Memory);
      }
      return BVar3;
    }
  }
  else if (DAT_6741e29c == 1) {
    local_2c[1] = 0;
    bVar2 = false;
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_6741e294;
    }
    uStackY_58 = 0x67410fcb;
    iVar5 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,(LPCSTR)_DWInfoType,
                                (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (iVar5 != 0) {
      local_8 = (undefined *)0x0;
      puVar6 = (undefined1 *)(iVar5 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar6;
      puVar7 = auStack_2e + iVar1 + -0xe;
      local_1c = auStack_2e + iVar1 + -0xe;
      *(int *)(auStack_2e + iVar1 + -0x12) = iVar5 * 2;
      *(undefined4 *)(auStack_2e + iVar1 + -0x16) = 0;
      *(undefined1 **)(auStack_2e + iVar1 + -0x1a) = auStack_2e + iVar1 + -0xe;
      *(undefined4 *)(auStack_2e + iVar1 + -0x1e) = 0x67410ffd;
      _memset(*(void **)(auStack_2e + iVar1 + -0x1a),*(int *)(auStack_2e + iVar1 + -0x16),
              *(size_t *)(auStack_2e + iVar1 + -0x12));
      local_8 = (undefined *)0xffffffff;
      if (auStack_2e + -0xe == puVar6) {
        *(int *)(auStack_2e + iVar1 + -0x12) = iVar5;
        *(undefined4 *)(auStack_2e + iVar1 + -0x16) = 2;
        *(undefined4 *)(auStack_2e + iVar1 + -0x1a) = 0x67411027;
        puVar7 = _calloc(*(size_t *)(auStack_2e + iVar1 + -0x16),
                         *(size_t *)(auStack_2e + iVar1 + -0x12));
        if (puVar7 == (undefined1 *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(auStack_2e + iVar1 + -0x12) = iVar5;
      *(undefined1 **)(auStack_2e + iVar1 + -0x16) = puVar7;
      *(LPCSTR *)(auStack_2e + iVar1 + -0x1a) = _LpSrcStr;
      *(DWORD *)(auStack_2e + iVar1 + -0x1e) = _DWInfoType;
      *(undefined4 *)(auStack_2e + iVar1 + -0x22) = 1;
      *(LPWORD *)(auStack_2e + iVar1 + -0x26) = _LpCharType;
      puVar9 = auStack_2e + iVar1 + -0x2a;
      *(undefined4 *)(auStack_2e + iVar1 + -0x2a) = 0x67411049;
      iVar5 = MultiByteToWideChar(*(UINT *)(auStack_2e + iVar1 + -0x26),
                                  *(DWORD *)(auStack_2e + iVar1 + -0x22),
                                  *(LPCSTR *)(auStack_2e + iVar1 + -0x1e),
                                  *(int *)(auStack_2e + iVar1 + -0x1a),
                                  *(LPWSTR *)(auStack_2e + iVar1 + -0x16),
                                  *(int *)(auStack_2e + iVar1 + -0x12));
      puVar6 = puVar9;
      if (iVar5 != 0) {
        *(int *)(puVar9 + -4) = _CchSrc;
        *(int *)(puVar9 + -8) = iVar5;
        *(undefined1 **)(puVar9 + -0xc) = puVar7;
        *(_locale_t *)(puVar9 + -0x10) = _Plocinfo;
        puVar6 = puVar9 + -0x14;
        *(undefined4 *)(puVar9 + -0x14) = 0x6741105b;
        local_2c[1] = GetStringTypeW(*(DWORD *)(puVar9 + -0x10),*(LPCWSTR *)(puVar9 + -0xc),
                                     *(int *)(puVar9 + -8),*(LPWORD *)(puVar9 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar6 + -4) = puVar7;
        *(undefined4 *)(puVar6 + -8) = 0x6741106a;
        _free(*(void **)(puVar6 + -4));
      }
      return local_2c[1];
    }
  }
  return 0;
}



/* ---- ___getlocaleinfo @ 674110e7 size=295 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2003 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  size_t _Size;
  DWORD DVar3;
  LPSTR _LpLCData;
  char *_Source;
  char *_Dest;
  int iVar4;
  byte *pbVar5;
  char local_88 [128];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  if (_Locale != (_locale_t)0x1) {
    if (_Locale != (_locale_t)0x0) {
      return -1;
    }
    pbVar5 = &DAT_6741e2a0;
    iVar4 = ___crtGetLocaleInfoW(_Lc_type,(LCTYPE)_LocaleName,(LPWSTR)&DAT_6741e2a0,4,0);
    if (iVar4 == 0) {
      return -1;
    }
    *(undefined1 *)_FieldType = 0;
    do {
      bVar1 = *pbVar5;
      iVar4 = _isdigit((uint)bVar1);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar5 = pbVar5 + 2;
      *(byte *)_FieldType = *(char *)_FieldType * '\n' + bVar1 + -0x30;
    } while ((int)pbVar5 < 0x6741e2a8);
    return 0;
  }
  _Source = local_88;
  bVar2 = false;
  _Size = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)_Source,(LPSTR)0x80,0);
  if (_Size == 0) {
    DVar3 = GetLastError();
    if (DVar3 != 0x7a) {
      return -1;
    }
    _LpLCData = (LPSTR)___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,0,(LPSTR)0x0,0);
    if (_LpLCData == (LPSTR)0x0) {
      return -1;
    }
    _Source = _malloc((size_t)_LpLCData);
    if (_Source == (char *)0x0) {
      return -1;
    }
    bVar2 = true;
    _Size = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)_Source,_LpLCData,0);
    if (_Size == 0) goto LAB_6741118f;
  }
  _Dest = _malloc(_Size);
  *(char **)_FieldType = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,_Size);
    if (bVar2) {
      _free(_Source);
    }
    return 0;
  }
  if (!bVar2) {
    return -1;
  }
LAB_6741118f:
  _free(_Source);
  return -1;
}



/* ---- ___crtInitCritSecNoSpinCount@8 @ 6741120e size=16 ---- */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2003 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/* ---- ___crtInitCritSecAndSpinCount @ 6741121e size=103 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2003 Release */

void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  
  if (DAT_6741e2cc == (code *)0x0) {
    if (DAT_6741e120 != 1) {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_6741e2cc = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (DAT_6741e2cc != (FARPROC)0x0) goto LAB_6741126a;
      }
    }
    DAT_6741e2cc = ___crtInitCritSecNoSpinCount_8;
  }
LAB_6741126a:
  (*DAT_6741e2cc)(param_1,param_2);
  return;
}



/* ---- __get_lc_time @ 674112a9 size=871 ---- */

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2003 Release */

uint __get_lc_time(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint _Lc_type;
  LCTYPE unaff_ESI;
  void *unaff_EDI;
  void *pvVar45;
  void *pvVar46;
  
  uVar1 = (uint)DAT_6741e2c6;
  _Lc_type = (uint)DAT_6741e2c8;
  if (unaff_ESI == 0) {
    return 0xffffffff;
  }
  pvVar46 = (void *)0x1;
  uVar2 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x31,unaff_ESI + 4,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar3 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x32,unaff_ESI + 8,pvVar46);
  pvVar46 = (void *)0x1;
  uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x33,unaff_ESI + 0xc,pvVar45);
  uVar5 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x34,unaff_ESI + 0x10,pvVar46);
  pvVar46 = (void *)0x1;
  uVar6 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x35,unaff_ESI + 0x14,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar7 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x36,unaff_ESI + 0x18,pvVar46);
  pvVar46 = (void *)0x1;
  uVar8 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x37,unaff_ESI,pvVar45);
  uVar9 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2a,unaff_ESI + 0x20,pvVar46);
  pvVar46 = (void *)0x1;
  uVar10 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2b,unaff_ESI + 0x24,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar11 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2c,unaff_ESI + 0x28,pvVar46);
  pvVar46 = (void *)0x1;
  uVar12 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2d,unaff_ESI + 0x2c,pvVar45);
  uVar13 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2e,unaff_ESI + 0x30,pvVar46);
  pvVar46 = (void *)0x1;
  uVar14 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x2f,unaff_ESI + 0x34,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar15 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x30,unaff_ESI + 0x1c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar16 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x44,unaff_ESI + 0x38,pvVar45);
  uVar17 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x45,unaff_ESI + 0x3c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar18 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x46,unaff_ESI + 0x40,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar19 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x47,unaff_ESI + 0x44,pvVar46);
  pvVar46 = (void *)0x1;
  uVar20 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x48,unaff_ESI + 0x48,pvVar45);
  uVar21 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x49,unaff_ESI + 0x4c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar22 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4a,unaff_ESI + 0x50,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar23 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4b,unaff_ESI + 0x54,pvVar46);
  pvVar46 = (void *)0x1;
  uVar24 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4c,unaff_ESI + 0x58,pvVar45);
  uVar25 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4d,unaff_ESI + 0x5c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar26 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4e,unaff_ESI + 0x60,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar27 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x4f,unaff_ESI + 100,pvVar46);
  pvVar46 = (void *)0x1;
  uVar28 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x38,unaff_ESI + 0x68,pvVar45);
  uVar29 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x39,unaff_ESI + 0x6c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar30 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3a,unaff_ESI + 0x70,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar31 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3b,unaff_ESI + 0x74,pvVar46);
  pvVar46 = (void *)0x1;
  uVar32 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3c,unaff_ESI + 0x78,pvVar45);
  uVar33 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3d,unaff_ESI + 0x7c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar34 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3e,unaff_ESI + 0x80,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar35 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x3f,unaff_ESI + 0x84,pvVar46);
  pvVar46 = (void *)0x1;
  uVar36 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x40,unaff_ESI + 0x88,pvVar45);
  uVar37 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x41,unaff_ESI + 0x8c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar38 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x42,unaff_ESI + 0x90,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar39 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x43,unaff_ESI + 0x94,pvVar46);
  pvVar46 = (void *)0x1;
  uVar40 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x28,unaff_ESI + 0x98,pvVar45);
  uVar1 = ___getlocaleinfo((_locale_t)0x1,uVar1,(LPCWSTR)0x29,unaff_ESI + 0x9c,pvVar46);
  pvVar46 = (void *)0x1;
  uVar41 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x1f,unaff_ESI + 0xa0,unaff_EDI);
  pvVar45 = (void *)0x1;
  uVar42 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x20,unaff_ESI + 0xa4,pvVar46);
  pvVar46 = (void *)0x1;
  uVar43 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x1003,unaff_ESI + 0xa8,pvVar45);
  uVar44 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x1009,unaff_ESI + 0xb0,pvVar46);
  *(uint *)(unaff_ESI + 0xac) = _Lc_type;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar1 | uVar41 |
         uVar42 | uVar43 | uVar44;
}



/* ---- ___free_lc_time @ 67411610 size=400 ---- */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Release */

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



/* ---- ___free_lconv_num @ 674117ff size=95 ---- */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2003 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined *)*param_1;
    if ((puVar1 != *(undefined **)PTR_PTR_6741bfd4) && (puVar1 != PTR_DAT_6741bfa4)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[1];
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 4)) && (puVar1 != PTR_DAT_6741bfa8)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[2];
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 8)) && (puVar1 != PTR_DAT_6741bfac)) {
      _free(puVar1);
    }
  }
  return;
}



/* ---- ___init_numeric @ 6741185e size=461 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2003 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  int *_Memory;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined **_Memory_00;
  undefined4 *puVar7;
  uint _Lc_type;
  char *pcVar8;
  void *unaff_EDI;
  undefined **ppuVar9;
  void *_Address;
  void *_Address_00;
  
  if ((DAT_6741e28c == 0) && (DAT_6741e288 == 0)) {
    if (((DAT_6741e3f8 != (int *)0x0) && (*DAT_6741e3f8 == 0)) &&
       (DAT_6741e3f8 != *(int **)(PTR_DAT_6741b6e4 + 0x2c))) {
      _free(DAT_6741e3f8);
      _free(DAT_6741e2d8);
    }
    DAT_6741e3fc = (undefined4 *)0x0;
    DAT_6741e3f8 = (int *)0x0;
    _Memory_00 = &PTR_DAT_6741bfa4;
    DAT_6741e2d8 = (undefined **)0x0;
LAB_67411a0b:
    DAT_6741bed8 = **_Memory_00;
    _DAT_6741bedc = 1;
    iVar6 = 0;
    PTR_PTR_6741bfd4 = (undefined *)_Memory_00;
  }
  else {
    _Memory_00 = _calloc(1,0x30);
    if (_Memory_00 != (undefined **)0x0) {
      puVar7 = (undefined4 *)PTR_PTR_6741bfd4;
      ppuVar9 = _Memory_00;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppuVar9 = (undefined *)*puVar7;
        puVar7 = puVar7 + 1;
        ppuVar9 = ppuVar9 + 1;
      }
      _Memory = _malloc(4);
      if (_Memory != (int *)0x0) {
        *_Memory = 0;
        if (DAT_6741e28c == 0) {
          DAT_6741e3fc = (undefined4 *)0x0;
          *_Memory_00 = PTR_DAT_6741bfa4;
          _Memory_00[1] = PTR_DAT_6741bfa8;
          _Memory_00[2] = PTR_DAT_6741bfac;
        }
        else {
          DAT_6741e3fc = _malloc(4);
          if (DAT_6741e3fc == (undefined4 *)0x0) {
            iVar6 = 1;
LAB_67411969:
            _free(_Memory_00);
            _free(_Memory);
            return iVar6;
          }
          *DAT_6741e3fc = 0;
          _Lc_type = (uint)DAT_6741e2c2;
          _Address_00 = (void *)0x1;
          iVar6 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,(LCTYPE)_Memory_00,unaff_EDI
                                  );
          _Address = (void *)0x1;
          iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xf,(LCTYPE)(_Memory_00 + 1),
                                   _Address_00);
          iVar4 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x10,(LCTYPE)(_Memory_00 + 2),
                                   _Address);
          if (iVar4 != 0 || (iVar6 != 0 || iVar3 != 0)) {
            ___free_lconv_num(_Memory_00);
            iVar6 = -1;
            goto LAB_67411969;
          }
          pcVar5 = _Memory_00[2];
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              if (cVar2 != ';') goto LAB_67411995;
              pcVar8 = pcVar5;
              do {
                pcVar1 = pcVar8 + 1;
                *pcVar8 = *pcVar1;
                pcVar8 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_67411995:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        if (((DAT_6741e3f8 != (int *)0x0) && (*DAT_6741e3f8 == 0)) &&
           (DAT_6741e3f8 != *(int **)(PTR_DAT_6741b6e4 + 0x2c))) {
          _free(DAT_6741e3f8);
          _free(DAT_6741e2d8);
        }
        DAT_6741e2d8 = _Memory_00;
        DAT_6741e3f8 = _Memory;
        goto LAB_67411a0b;
      }
      _free(_Memory_00);
    }
    iVar6 = 1;
  }
  return iVar6;
}



/* ---- ___free_lconv_mon @ 67411a2b size=217 ---- */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2003 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0xc);
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 0xc)) && (puVar1 != PTR_DAT_6741bfb0)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x10);
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 0x10)) && (puVar1 != PTR_DAT_6741bfb4)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x14);
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 0x14)) && (puVar1 != PTR_DAT_6741bfb8)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x18);
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 0x18)) && (puVar1 != PTR_DAT_6741bfbc)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x1c);
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 0x1c)) && (puVar1 != PTR_DAT_6741bfc0)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x20);
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 0x20)) && (puVar1 != PTR_DAT_6741bfc4)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x24);
    if ((puVar1 != *(undefined **)(PTR_PTR_6741bfd4 + 0x24)) && (puVar1 != PTR_DAT_6741bfc8)) {
      _free(puVar1);
    }
  }
  return;
}



/* ---- ___init_monetary @ 67411b04 size=575 ---- */

/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2003 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  undefined4 *_Memory;
  undefined4 *_Memory_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  uint _Lc_type;
  char *pcVar19;
  undefined **ppuVar20;
  void *unaff_EDI;
  undefined4 *puVar21;
  void *pvVar22;
  void *pvVar23;
  
  if ((DAT_6741e288 == 0) && (DAT_6741e28c == 0)) {
    DAT_6741e3f4 = (undefined4 *)0x0;
    DAT_6741e3f8 = (undefined4 *)0x0;
    PTR_PTR_6741bfd4 = (undefined *)&PTR_DAT_6741bfa4;
    DAT_6741e2d8 = (undefined4 *)0x0;
LAB_67411d3c:
    iVar18 = 0;
  }
  else {
    _Memory = _calloc(1,0x30);
    if (_Memory != (undefined4 *)0x0) {
      _Memory_00 = _malloc(4);
      if (_Memory_00 == (undefined4 *)0x0) {
        _free(_Memory);
      }
      else {
        *_Memory_00 = 0;
        if (DAT_6741e288 == 0) {
          ppuVar20 = &PTR_DAT_6741bfa4;
          puVar21 = _Memory;
          for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar21 = *ppuVar20;
            ppuVar20 = ppuVar20 + 1;
            puVar21 = puVar21 + 1;
          }
          DAT_6741e3f4 = (undefined4 *)0x0;
LAB_67411d09:
          *_Memory = *(undefined4 *)PTR_PTR_6741bfd4;
          _Memory[1] = *(undefined4 *)(PTR_PTR_6741bfd4 + 4);
          _Memory[2] = *(undefined4 *)(PTR_PTR_6741bfd4 + 8);
          PTR_PTR_6741bfd4 = (undefined *)_Memory;
          DAT_6741e2d8 = _Memory;
          DAT_6741e3f8 = _Memory_00;
          goto LAB_67411d3c;
        }
        DAT_6741e3f4 = _malloc(4);
        if (DAT_6741e3f4 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(_Memory_00);
        }
        else {
          *DAT_6741e3f4 = 0;
          _Lc_type = (uint)DAT_6741e2bc;
          pvVar23 = (void *)0x1;
          iVar18 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x15,(LCTYPE)(_Memory + 3),
                                    unaff_EDI);
          pvVar22 = (void *)0x1;
          iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x14,(LCTYPE)(_Memory + 4),
                                   pvVar23);
          pvVar23 = (void *)0x1;
          iVar4 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x16,(LCTYPE)(_Memory + 5),
                                   pvVar22);
          iVar5 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x17,(LCTYPE)(_Memory + 6),
                                   pvVar23);
          pvVar23 = (void *)0x1;
          iVar6 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x18,(LCTYPE)(_Memory + 7),
                                   unaff_EDI);
          pvVar22 = (void *)0x1;
          iVar7 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x50,(LCTYPE)(_Memory + 8),
                                   pvVar23);
          pvVar23 = (void *)0x1;
          iVar8 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x51,(LCTYPE)(_Memory + 9),
                                   pvVar22);
          iVar9 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x1a,(LCTYPE)(_Memory + 10),
                                   pvVar23);
          pvVar23 = (void *)0x0;
          iVar10 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x19,(int)_Memory + 0x29,
                                    unaff_EDI);
          pvVar22 = (void *)0x0;
          iVar11 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x54,(int)_Memory + 0x2a,
                                    pvVar23);
          pvVar23 = (void *)0x0;
          iVar12 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x55,(int)_Memory + 0x2b,
                                    pvVar22);
          iVar13 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x56,(LCTYPE)(_Memory + 0xb),
                                    pvVar23);
          pvVar22 = (void *)0x0;
          iVar14 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x57,(int)_Memory + 0x2d,
                                    unaff_EDI);
          pvVar23 = (void *)0x0;
          iVar15 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x52,(int)_Memory + 0x2e,
                                    pvVar22);
          iVar16 = ___getlocaleinfo((_locale_t)0x0,_Lc_type,(LPCWSTR)0x53,(int)_Memory + 0x2f,
                                    pvVar23);
          if (iVar16 == 0 &&
              (((((((((((((iVar18 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) && iVar6 == 0)
                      && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0)
                 && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
            pcVar17 = (char *)_Memory[7];
            while (*pcVar17 != '\0') {
              cVar2 = *pcVar17;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                if (cVar2 != ';') goto LAB_67411cd7;
                pcVar19 = pcVar17;
                do {
                  pcVar1 = pcVar19 + 1;
                  *pcVar19 = *pcVar1;
                  pcVar19 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_67411cd7:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_67411d09;
          }
          ___free_lconv_mon((int)_Memory);
          _free(_Memory);
          _free(_Memory_00);
        }
      }
    }
    iVar18 = 1;
  }
  return iVar18;
}



/* ---- _strcspn @ 67411d50 size=70 ---- */

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2003 Release */

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



/* ---- _strncpy @ 67411da0 size=292 ---- */

/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio 2003 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x67411dec;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_67411e33;
        goto LAB_67411ea9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x67411ea5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_67411ea9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_67411e33;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x67411ea5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x67411ea5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x67411ea5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x67411dec:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_67411e33:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ---- _TranslateName @ 67411ec4 size=96 ---- */

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2003 Release */

bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}



/* ---- _GetLcidFromDefault @ 67411f24 size=26 ---- */

/* Library Function - Single Match
    _GetLcidFromDefault
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromDefault(void)

{
  DAT_6741e2dc._0_2_ = (ushort)DAT_6741e2dc | 0x104;
  DAT_6741e2e4 = GetUserDefaultLCID();
  DAT_6741e2e0 = DAT_6741e2e4;
  return;
}



/* ---- _ProcessCodePage @ 67411f3e size=118 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2003 Release */

void __fastcall _ProcessCodePage(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 != 0) goto LAB_67411fa2;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_6741e2fc)(DAT_6741e2e4,uVar2,local_10,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_10;
LAB_67411fa2:
  _atol(param_1);
  return;
}



/* ---- _TestDefaultCountry @ 67411fb4 size=30 ---- */

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_67417fb4 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}



/* ---- crtGetLocaleInfoA @ 67411fd2 size=227 ---- */

/* Library Function - Single Match
    _crtGetLocaleInfoA@16
   
   Library: Visual Studio 2003 Release
   __stdcall crtGetLocaleInfoA,16 */

int crtGetLocaleInfoA(uint param_1,LCTYPE param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *_Source;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x1a;
  do {
    iVar1 = (iVar2 + iVar3) / 2;
    if (param_1 == *(uint *)(&UNK_67417998 + iVar1 * 0x2c)) {
      if (param_2 == 1) {
        _Source = &DAT_6741799c + iVar1 * 0x2c;
      }
      else if (param_2 == 3) {
        _Source = &DAT_674179a8 + iVar1 * 0x2c;
      }
      else if (param_2 == 7) {
        _Source = &DAT_674179b0 + iVar1 * 0x2c;
      }
      else if (param_2 == 0xb) {
        _Source = &DAT_674179b4 + iVar1 * 0x2c;
      }
      else if (param_2 == 0x1001) {
        _Source = *(char **)(&UNK_674179a4 + iVar1 * 0x2c);
      }
      else if (param_2 == 0x1002) {
        _Source = *(char **)(&UNK_674179ac + iVar1 * 0x2c);
      }
      else {
        if (param_2 != 0x1004) break;
        _Source = &DAT_674179bc + iVar1 * 0x2c;
      }
      if ((_Source != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,_Source,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      break;
    }
    if (param_1 < *(uint *)(&UNK_67417998 + iVar1 * 0x2c)) {
      iVar2 = iVar1 + -1;
    }
    else {
      iVar3 = iVar1 + 1;
    }
  } while (iVar3 <= iVar2);
  iVar2 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  return iVar2;
}



/* ---- _LcidFromHexString @ 674120b5 size=53 ---- */

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2003 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  while (cVar2 = *param_2, cVar2 != '\0') {
    param_2 = param_2 + 1;
    if ((cVar2 < 'a') || ('f' < cVar2)) {
      if (('@' < cVar2) && (cVar2 < 'G')) {
        cVar2 = cVar2 + -7;
      }
    }
    else {
      cVar2 = cVar2 + -0x27;
    }
    iVar1 = (iVar1 + 0xffffffd) * 0x10 + (int)cVar2;
  }
  return iVar1;
}



/* ---- _GetPrimaryLen @ 674120ea size=29 ---- */

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2003 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* ---- _CountryEnumProc@4 @ 67412107 size=148 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2003 Release */

uint __thiscall _CountryEnumProc_4(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  iVar1 = _LcidFromHexString(this,param_1);
  iVar2 = (*DAT_6741e2fc)(iVar1,(-(uint)(DAT_6741e2ec != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_6741e2dc = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = __stricmp(DAT_6741e2f0,local_80);
    if (iVar2 == 0) {
      iVar2 = _TestDefaultCountry((short)iVar1);
      if (iVar2 != 0) {
        DAT_6741e2dc = DAT_6741e2dc | 4;
        DAT_6741e2e0 = iVar1;
        DAT_6741e2e4 = iVar1;
      }
    }
    uVar3 = ~(DAT_6741e2dc >> 2) & 1;
  }
  return uVar3;
}



/* ---- _TestDefaultLanguage @ 6741219b size=113 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl _TestDefaultLanguage(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  iVar1 = (*DAT_6741e2fc)(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (iVar1 == 0) {
LAB_674121fb:
    uVar5 = 0;
  }
  else {
    uVar2 = _LcidFromHexString(extraout_ECX,local_80);
    if ((param_1 != uVar2) && (param_2 != 0)) {
      pcVar6 = DAT_6741e2f8;
      sVar3 = _strlen(DAT_6741e2f8);
      sVar4 = _GetPrimaryLen(pcVar6,DAT_6741e2f8);
      if (sVar4 == sVar3) goto LAB_674121fb;
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* ---- _LangCountryEnumProc@4 @ 6741220c size=538 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2003 Release */

uint __thiscall _LangCountryEnumProc_4(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  uVar1 = _LcidFromHexString(this,param_1);
  iVar2 = (*DAT_6741e2fc)(uVar1,(-(uint)(DAT_6741e2ec != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_6741e2dc = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_6741e2f0,local_80);
  if (iVar2 == 0) {
    iVar2 = (*DAT_6741e2fc)(uVar1,(-(uint)(DAT_6741e2e8 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
    if (iVar2 == 0) {
      DAT_6741e2dc = 0;
      return 1;
    }
    iVar2 = __stricmp(DAT_6741e2f8,local_80);
    if (iVar2 == 0) {
      DAT_6741e2dc = DAT_6741e2dc | 0x304;
      DAT_6741e2e0 = uVar1;
LAB_67412331:
      DAT_6741e2e4 = uVar1;
    }
    else if ((DAT_6741e2dc & 2) == 0) {
      if ((DAT_6741e2f4 == 0) ||
         (iVar2 = __strnicmp(DAT_6741e2f8,local_80,DAT_6741e2f4), iVar2 != 0)) {
        if (((DAT_6741e2dc & 1) == 0) && (iVar2 = _TestDefaultCountry((short)uVar1), iVar2 != 0)) {
          DAT_6741e2dc = DAT_6741e2dc | 1;
          goto LAB_67412331;
        }
      }
      else {
        DAT_6741e2dc = DAT_6741e2dc | 2;
        DAT_6741e2e4 = uVar1;
        sVar3 = _strlen(DAT_6741e2f8);
        if (sVar3 == DAT_6741e2f4) {
          DAT_6741e2e0 = uVar1;
        }
      }
    }
  }
  if ((DAT_6741e2dc & 0x300) == 0x300) goto LAB_6741240a;
  iVar2 = (*DAT_6741e2fc)(uVar1,(-(uint)(DAT_6741e2e8 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_6741e2dc = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_6741e2f8,local_80);
  if (iVar2 == 0) {
    DAT_6741e2dc = DAT_6741e2dc | 0x200;
    if (((DAT_6741e2e8 == 0) && (DAT_6741e2f4 != 0)) &&
       (sVar3 = _strlen(DAT_6741e2f8), sVar3 == DAT_6741e2f4)) {
      iVar2 = 1;
      goto LAB_674123e9;
    }
  }
  else {
    if (((DAT_6741e2e8 != 0) || (DAT_6741e2f4 == 0)) ||
       (iVar2 = __strnicmp(DAT_6741e2f8,local_80,DAT_6741e2f4), iVar2 != 0)) goto LAB_6741240a;
    iVar2 = 0;
LAB_674123e9:
    iVar2 = _TestDefaultLanguage(uVar1,iVar2);
    if (iVar2 == 0) goto LAB_6741240a;
  }
  DAT_6741e2dc = DAT_6741e2dc | 0x100;
  if (DAT_6741e2e0 == 0) {
    DAT_6741e2e0 = uVar1;
  }
LAB_6741240a:
  return ~(DAT_6741e2dc >> 2) & 1;
}



/* ---- _LanguageEnumProc@4 @ 67412426 size=203 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2003 Release */

uint __thiscall _LanguageEnumProc_4(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  char local_80 [120];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  uVar1 = _LcidFromHexString(this,param_1);
  iVar2 = (*DAT_6741e2fc)(uVar1,(-(uint)(DAT_6741e2e8 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_6741e2dc = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_6741e2f8,local_80);
  if (iVar2 == 0) {
    if (DAT_6741e2e8 == 0) {
      iVar2 = 1;
      goto LAB_674124b8;
    }
  }
  else {
    if (((DAT_6741e2e8 != 0) || (DAT_6741e2f4 == 0)) ||
       (iVar2 = __strnicmp(DAT_6741e2f8,local_80,DAT_6741e2f4), iVar2 != 0)) goto LAB_674124d7;
    iVar2 = 0;
LAB_674124b8:
    iVar2 = _TestDefaultLanguage(uVar1,iVar2);
    if (iVar2 == 0) goto LAB_674124d7;
  }
  DAT_6741e2dc = DAT_6741e2dc | 4;
  DAT_6741e2e0 = uVar1;
  DAT_6741e2e4 = uVar1;
LAB_674124d7:
  return ~(DAT_6741e2dc >> 2) & 1;
}



/* ---- _GetLcidFromCountry @ 674124f1 size=55 ---- */

/* Library Function - Single Match
    _GetLcidFromCountry
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromCountry(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_6741e2f0);
  DAT_6741e2ec = (uint)(sVar1 == 3);
  EnumSystemLocalesA(_CountryEnumProc_4,1);
  if ((DAT_6741e2dc & 4) == 0) {
    DAT_6741e2dc = 0;
  }
  return;
}



/* ---- _GetLcidFromLangCountry @ 67412528 size=134 ---- */

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromLangCountry(void)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = DAT_6741e2f8;
  sVar1 = _strlen(DAT_6741e2f8);
  DAT_6741e2e8 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_6741e2f0);
  DAT_6741e2ec = (uint)(sVar1 == 3);
  DAT_6741e2e0 = 0;
  if (DAT_6741e2e8 == 0) {
    DAT_6741e2f4 = _GetPrimaryLen(pcVar2,DAT_6741e2f8);
  }
  else {
    DAT_6741e2f4 = 2;
  }
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  if ((((DAT_6741e2dc & 0x100) == 0) || ((DAT_6741e2dc & 0x200) == 0)) || ((DAT_6741e2dc & 7) == 0))
  {
    DAT_6741e2dc = 0;
  }
  return;
}



/* ---- _GetLcidFromLanguage @ 674125ae size=85 ---- */

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2003 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = DAT_6741e2f8;
  sVar1 = _strlen(DAT_6741e2f8);
  DAT_6741e2e8 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_6741e2f4 = 2;
  }
  else {
    DAT_6741e2f4 = _GetPrimaryLen(pcVar2,DAT_6741e2f8);
  }
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((DAT_6741e2dc & 4) == 0) {
    DAT_6741e2dc = 0;
  }
  return;
}



/* ---- ___get_qualified_locale @ 67412603 size=437 ---- */

/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2003 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  LCID LVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint _Value;
  BOOL BVar4;
  int iVar5;
  
  if (DAT_6741e2fc == (code *)0x0) {
    if (DAT_6741e120 == 2) {
      DAT_6741e2fc = GetLocaleInfoA_exref;
    }
    else {
      DAT_6741e2fc = crtGetLocaleInfoA;
    }
  }
  if (_LpInStr == (LPLC_STRINGS)0x0) {
LAB_674126dd:
    _GetLcidFromDefault();
LAB_674126e2:
    if (DAT_6741e2dc == 0) {
      return 0;
    }
  }
  else {
    DAT_6741e2f0 = _LpInStr->szLanguage + 0x20;
    DAT_6741e2f8 = _LpInStr;
    if ((DAT_6741e2f0 != (wchar_t *)0x0) && ((char)*DAT_6741e2f0 != '\0')) {
      _TranslateName(0x67417fc8,0x16,&DAT_6741e2f0);
    }
    DAT_6741e2dc = 0;
    if ((DAT_6741e2f8 == (LPLC_STRINGS)0x0) || ((char)DAT_6741e2f8->szLanguage[0] == '\0')) {
      if ((DAT_6741e2f0 == (wchar_t *)0x0) || ((char)*DAT_6741e2f0 == '\0')) goto LAB_674126dd;
      _GetLcidFromCountry();
      goto LAB_674126e2;
    }
    if ((DAT_6741e2f0 == (wchar_t *)0x0) || ((char)*DAT_6741e2f0 == '\0')) {
      _GetLcidFromLanguage();
    }
    else {
      _GetLcidFromLangCountry();
    }
    if (DAT_6741e2dc == 0) {
      bVar3 = _TranslateName(0x67418178,0x40,&DAT_6741e2f8);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        if ((DAT_6741e2f0 == (wchar_t *)0x0) || ((char)*DAT_6741e2f0 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
      goto LAB_674126e2;
    }
  }
  _Value = _ProcessCodePage((char *)_LpInStr->szCountry);
  if (((_Value == 0) || (BVar4 = IsValidCodePage(_Value & 0xffff), BVar4 == 0)) ||
     (BVar4 = IsValidLocale(DAT_6741e2e0,1), LVar1 = DAT_6741e2e0, BVar4 == 0)) {
LAB_674127b2:
    BVar4 = 0;
  }
  else {
    if (_LpCodePage != (UINT *)0x0) {
      uVar2 = (undefined2)DAT_6741e2e4;
      *(short *)_LpCodePage = (short)DAT_6741e2e0;
      *(undefined2 *)((int)_LpCodePage + 2) = uVar2;
      *(short *)(_LpCodePage + 1) = (short)_Value;
    }
    if (_LpOutStr != (LPLC_STRINGS)0x0) {
      if ((short)*_LpCodePage == 0x814) {
        FUN_6740e000((uint *)_LpOutStr,(uint *)"Norwegian-Nynorsk");
      }
      else {
        iVar5 = (*DAT_6741e2fc)(LVar1,0x1001,_LpOutStr,0x40);
        if (iVar5 == 0) goto LAB_674127b2;
      }
      iVar5 = (*DAT_6741e2fc)(DAT_6741e2e4,0x1002,_LpOutStr->szLanguage + 0x20,0x40);
      if (iVar5 == 0) goto LAB_674127b2;
      __itoa(_Value,(char *)_LpOutStr->szCountry,10);
    }
    BVar4 = 1;
  }
  return BVar4;
}



/* ---- _strncmp @ 674127c0 size=57 ---- */

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  if (_MaxCount != 0) {
    sVar3 = _MaxCount;
    pcVar6 = _Str1;
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



/* ---- _strpbrk @ 67412800 size=64 ---- */

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio 2003 Release */

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



/* ---- _ValidateRead @ 67412840 size=28 ---- */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2003 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return (uint)(BVar1 == 0);
}



/* ---- _ValidateWrite @ 6741285c size=28 ---- */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2003 Release */

int __cdecl _ValidateWrite(void *param_1,uint param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return (uint)(BVar1 == 0);
}



/* ---- _ValidateExecute @ 67412878 size=24 ---- */

/* Library Function - Single Match
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
   
   Library: Visual Studio 2003 Release */

int __cdecl _ValidateExecute(_func_int *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr((FARPROC)param_1);
  return (uint)(BVar1 == 0);
}



/* ---- __openfile @ 67412890 size=360 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __openfile
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint _OpenFlag;
  uint uVar6;
  
  cVar1 = *_Mode;
  bVar4 = false;
  bVar3 = false;
  if (cVar1 == 'a') {
    _OpenFlag = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      _OpenFlag = 0;
      uVar6 = DAT_6741e3e8 | 1;
      goto LAB_674128d1;
    }
    if (cVar1 != 'w') {
      return (FILE *)0x0;
    }
    _OpenFlag = 0x301;
  }
  uVar6 = DAT_6741e3e8 | 2;
LAB_674128d1:
  bVar2 = true;
LAB_674129b0:
  _Mode = _Mode + 1;
  cVar1 = *_Mode;
  if ((cVar1 == '\0') || (!bVar2)) {
    iVar5 = __sopen(_Filename,_OpenFlag,_ShFlag,0x1a4);
    if (iVar5 < 0) {
      return (FILE *)0x0;
    }
    _DAT_6741e0b4 = _DAT_6741e0b4 + 1;
    _File->_flag = uVar6;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = iVar5;
    return _File;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((_OpenFlag & 0x1000) == 0) {
        _OpenFlag = _OpenFlag | 0x1000;
        goto LAB_674129b0;
      }
    }
    else if (cVar1 == '+') {
      if ((_OpenFlag & 2) == 0) {
        _OpenFlag = _OpenFlag & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_674129b0;
      }
    }
    else if (cVar1 == 'D') {
      if ((_OpenFlag & 0x40) == 0) {
        _OpenFlag = _OpenFlag | 0x40;
        goto LAB_674129b0;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        _OpenFlag = _OpenFlag | 0x10;
        goto LAB_674129b0;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      _OpenFlag = _OpenFlag | 0x20;
      goto LAB_674129b0;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((_OpenFlag & 0xc000) != 0) goto LAB_67412992;
      _OpenFlag = _OpenFlag | 0x8000;
      goto LAB_674129b0;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_674129b0;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((_OpenFlag & 0xc000) != 0)) goto LAB_67412992;
        _OpenFlag = _OpenFlag | 0x4000;
        goto LAB_674129b0;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_674129b0;
      }
    }
  }
LAB_67412992:
  bVar2 = false;
  goto LAB_674129b0;
}



/* ---- __getstream @ 674129f8 size=278 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __getstream(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  FILE *pFVar4;
  FILE *_File;
  
  pFVar4 = (FILE *)0x0;
  __lock(1);
  iVar3 = 0;
  do {
    _File = pFVar4;
    if (DAT_6741f7a0 <= iVar3) {
LAB_67412ae7:
      if (_File != (FILE *)0x0) {
        _File->_cnt = 0;
        _File->_flag = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_67412b11();
      return _File;
    }
    iVar1 = *(int *)(DAT_6741e794 + iVar3 * 4);
    if (iVar1 == 0) {
      iVar3 = iVar3 * 4;
      pvVar2 = _malloc(0x38);
      *(void **)(iVar3 + DAT_6741e794) = pvVar2;
      if (*(int *)(iVar3 + DAT_6741e794) != 0) {
        iVar1 = ___crtInitCritSecAndSpinCount(*(int *)(iVar3 + DAT_6741e794) + 0x20,4000);
        if (iVar1 == 0) {
          _free(*(void **)(iVar3 + DAT_6741e794));
          *(undefined4 *)(iVar3 + DAT_6741e794) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_6741e794) + 0x20));
          _File = *(FILE **)(iVar3 + DAT_6741e794);
        }
      }
      goto LAB_67412ae7;
    }
    if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
      if (((2 < iVar3) && (iVar3 < 0x14)) && (iVar1 = __mtinitlocknum(iVar3 + 0x10), iVar1 == 0))
      goto LAB_67412ae7;
      __lock_file2(iVar3,*(void **)(DAT_6741e794 + iVar3 * 4));
      _File = *(FILE **)(DAT_6741e794 + iVar3 * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_67412ae7;
      __unlock_file2(iVar3,_File);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* ---- FUN_67412b11 @ 67412b11 size=9 ---- */

void FUN_67412b11(void)

{
  FUN_6740abc9(1);
  return;
}



/* ---- siglookup @ 67412bb5 size=46 ---- */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2003 Release */

void __cdecl siglookup(void)

{
  uint uVar1;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = in_EDX;
  do {
    if (*(int *)(uVar1 + 4) == unaff_ESI) {
      return;
    }
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < in_EDX + DAT_6741bb94 * 0xc);
  return;
}



/* ---- _raise @ 67412be3 size=356 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2003 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  void *local_34;
  void *local_30;
  _ptiddata local_28;
  
  bVar1 = false;
  if (_SigNum == 2) {
    puVar3 = &DAT_6741e300;
    pcVar4 = DAT_6741e300;
LAB_67412c70:
    bVar1 = true;
  }
  else {
    if (((_SigNum != 4) && (_SigNum != 8)) && (_SigNum != 0xb)) {
      if (_SigNum == 0xf) {
        puVar3 = &DAT_6741e30c;
        pcVar4 = DAT_6741e30c;
      }
      else if (_SigNum == 0x15) {
        puVar3 = &DAT_6741e304;
        pcVar4 = DAT_6741e304;
      }
      else {
        if (_SigNum != 0x16) {
          return -1;
        }
        puVar3 = &DAT_6741e308;
        pcVar4 = DAT_6741e308;
      }
      goto LAB_67412c70;
    }
    local_28 = __getptd();
    iVar2 = siglookup();
    puVar3 = (undefined4 *)(iVar2 + 8);
    pcVar4 = (code *)*puVar3;
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
    local_30 = local_28->_initarg;
    local_28->_initarg = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = local_28->_pxcptacttab;
      local_28->_pxcptacttab = (void *)0x8c;
      goto LAB_67412ccf;
    }
  }
  else {
LAB_67412ccf:
    if (_SigNum == 8) {
      for (iVar2 = DAT_6741bb88; iVar2 < DAT_6741bb8c + DAT_6741bb88; iVar2 = iVar2 + 1) {
        *(undefined4 *)((int)local_28->_initaddr + iVar2 * 0xc + 8) = 0;
      }
      goto LAB_67412cfd;
    }
  }
  *puVar3 = 0;
LAB_67412cfd:
  FUN_67412d1e(0);
  if (_SigNum == 8) {
    (*pcVar4)(8,local_28->_pxcptacttab);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  local_28->_initarg = local_30;
  if (_SigNum == 8) {
    local_28->_pxcptacttab = local_34;
  }
  return 0;
}



/* ---- FUN_67412d1e @ 67412d1e size=13 ---- */

void __fastcall FUN_67412d1e(int param_1)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != param_1) {
    FUN_6740abc9(param_1);
  }
  return;
}



/* ---- ___crtMessageBoxA @ 67412d5c size=249 ---- */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2003 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  byte local_c;
  undefined1 local_8 [4];
  
  iVar2 = 0;
  if (DAT_6741e314 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_6741e314 = GetProcAddress(hModule,"MessageBoxA"), DAT_6741e314 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_6741e318 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_6741e31c = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_6741e120 == 2) &&
       (DAT_6741e324 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_6741e324 != (FARPROC)0x0)) {
      DAT_6741e320 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_6741e320 == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_6741e320)(), iVar1 != 0 &&
       (iVar1 = (*DAT_6741e324)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0))
     )) {
    if (((DAT_6741e318 != (FARPROC)0x0) && (iVar2 = (*DAT_6741e318)(), iVar2 != 0)) &&
       (DAT_6741e31c != (FARPROC)0x0)) {
      iVar2 = (*DAT_6741e31c)(iVar2);
    }
  }
  else if (DAT_6741e12c < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*DAT_6741e314)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}



/* ---- FUN_67412e76 @ 67412e76 size=184 ---- */

uint * __cdecl FUN_67412e76(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  
  cVar6 = (char)in_EAX;
  while (((uint)param_1 & 3) != 0) {
    uVar7 = *param_1;
    if ((char)uVar7 == cVar6) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar7 == '\0') {
      return (uint *)0x0;
    }
  }
  uVar7 = in_EAX | in_EAX << 8;
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ (uVar7 << 0x10 | uVar7);
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
    if ((char)uVar1 == cVar6) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* ---- __isatty @ 67412f2e size=42 ---- */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Release */

int __cdecl __isatty(int _FileHandle)

{
  if ((uint)_FileHandle < DAT_6741e400) {
    return (int)*(char *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
           0x40;
  }
  return 0;
}



/* ---- ___wctomb_mt @ 67412f58 size=96 ---- */

/* Library Function - Single Match
    ___wctomb_mt
   
   Library: Visual Studio 2003 Release */

int __cdecl ___wctomb_mt(int param_1,LPSTR param_2,WCHAR param_3)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpMultiByteStr = param_2;
  if (param_2 == (LPSTR)0x0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      if ((ushort)param_3 < 0x100) {
        *param_2 = (CHAR)param_3;
        return 1;
      }
    }
    else {
      param_2 = (LPSTR)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,&param_3,1,lpMultiByteStr,
                                  *(int *)(param_1 + 0x28),(LPCSTR)0x0,(LPBOOL)&param_2);
      if ((iVar1 != 0) && (param_2 == (LPSTR)0x0)) {
        return iVar1;
      }
    }
    piVar2 = FUN_6740cf07();
    *piVar2 = 0x2a;
    iVar1 = -1;
  }
  return iVar1;
}



/* ---- _wctomb @ 67412fb8 size=39 ---- */

/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2003 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___wctomb_mt((int)ptVar2,_MbCh,_WCh);
  return iVar3;
}



/* ---- __aulldvrm @ 67412fe0 size=149 ---- */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2003 Release */

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



/* ---- __putwc_lk @ 67413075 size=214 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __putwc_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __putwc_lk(uint param_1,FILE *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_6741b534;
  if ((param_2->_flag & 0x40) == 0) {
    uVar1 = param_2->_file;
    if (uVar1 == 0xffffffff) {
      puVar2 = &DAT_6741be14;
    }
    else {
      puVar2 = (undefined *)((&DAT_6741e420)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
    }
    if ((puVar2[4] & 0x80) != 0) {
      piVar3 = (int *)_wctomb(local_10,(wchar_t)param_1);
      if (piVar3 == (int *)0xffffffff) {
        piVar4 = FUN_6740cf07();
        *piVar4 = 0x2a;
LAB_674130dd:
        return CONCAT22((short)((uint)piVar4 >> 0x10),0xffff);
      }
      iVar5 = 0;
      piVar4 = piVar3;
      if (0 < (int)piVar3) {
        do {
          piVar4 = &param_2->_cnt;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 < 0) {
            piVar4 = (int *)__flsbuf((int)local_10[iVar5],param_2);
          }
          else {
            *param_2->_ptr = local_10[iVar5];
            piVar4 = (int *)(uint)(byte)*param_2->_ptr;
            param_2->_ptr = param_2->_ptr + 1;
          }
          if (piVar4 == (int *)0xffffffff) goto LAB_674130dd;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)piVar3);
      }
      return CONCAT22((short)((uint)piVar4 >> 0x10),(wchar_t)param_1);
    }
  }
  piVar3 = &param_2->_cnt;
  *piVar3 = *piVar3 + -2;
  if (*piVar3 < 0) {
    param_1 = __flswbuf(param_1 & 0xffff,param_2);
  }
  else {
    *(wchar_t *)param_2->_ptr = (wchar_t)param_1;
    param_2->_ptr = param_2->_ptr + 2;
  }
  return param_1;
}



/* ---- ___mbtowc_mt @ 6741314b size=192 ---- */

/* Library Function - Single Match
    ___mbtowc_mt
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___mbtowc_mt(int param_1,LPWSTR param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_3 != (byte *)0x0) && (param_4 != 0)) {
    bVar1 = *param_3;
    if (bVar1 != 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        if (param_2 != (LPWSTR)0x0) {
          *param_2 = (ushort)bVar1;
        }
        return 1;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCSTR)param_3,1,param_2,
                                    (uint)(param_2 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x28);
        if ((((1 < iVar2) && (iVar2 <= (int)param_4)) &&
            (iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCSTR)param_3,iVar2,param_2,
                                         (uint)(param_2 != (LPWSTR)0x0)), iVar2 != 0)) ||
           ((*(uint *)(param_1 + 0x28) <= param_4 && (param_3[1] != 0)))) {
          return *(undefined4 *)(param_1 + 0x28);
        }
      }
      piVar3 = FUN_6740cf07();
      *piVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_2 != (LPWSTR)0x0) {
      *param_2 = L'\0';
    }
  }
  return 0;
}



/* ---- _mbtowc @ 6741320b size=43 ---- */

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2003 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___mbtowc_mt((int)ptVar2,_DstCh,(byte *)_SrcCh,_SrcSizeInBytes);
  return iVar3;
}



/* ---- __lseeki64_lk @ 67413236 size=131 ---- */

/* Library Function - Single Match
    __lseeki64_lk
   
   Library: Visual Studio 2003 Release */

undefined8 __cdecl __lseeki64_lk(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_6740cf07();
    *piVar2 = 9;
LAB_67413290:
    DVar4 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar4 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar4 == 0xffffffff) {
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        __dosmaperr(DVar3);
        goto LAB_67413290;
      }
    }
    pbVar1 = (byte *)((&DAT_6741e420)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar4);
}



/* ---- __lseeki64 @ 674132b9 size=179 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2003 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  LONG in_stack_00000008;
  undefined8 local_24;
  
  if ((uint)_FileHandle < DAT_6741e400) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_6740cf07();
        *piVar1 = 9;
        puVar2 = FUN_6740cf10();
        *puVar2 = 0;
        local_24 = 0xffffffffffffffff;
      }
      else {
        local_24 = __lseeki64_lk(_FileHandle,in_stack_00000008,(LONG)_Offset,_Offset._4_4_);
      }
      FUN_67413351();
      goto LAB_67413371;
    }
  }
  piVar1 = FUN_6740cf07();
  *piVar1 = 9;
  puVar2 = FUN_6740cf10();
  *puVar2 = 0;
  local_24._4_4_ = 0xffffffff;
  local_24._0_4_ = 0xffffffff;
LAB_67413371:
  return CONCAT44(local_24._4_4_,(undefined4)local_24);
}



/* ---- FUN_67413351 @ 67413351 size=8 ---- */

void FUN_67413351(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* ---- __set_osfhnd @ 67413377 size=124 ---- */

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_6741e400) {
    iVar3 = (param_1 & 0x1fU) * 0x24;
    if (*(int *)(iVar3 + (&DAT_6741e420)[param_1 >> 5]) == -1) {
      if (DAT_6741df48 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_674133d0;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_674133d0:
      *(intptr_t *)(iVar3 + (&DAT_6741e420)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = FUN_6740cf07();
  *piVar1 = 9;
  puVar2 = FUN_6740cf10();
  *puVar2 = 0;
  return -1;
}



/* ---- __free_osfhnd @ 674133f3 size=127 ---- */

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_6741e400) {
    iVar3 = (param_1 & 0x1fU) * 0x24;
    piVar1 = (int *)((&DAT_6741e420)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_6741df48 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_6741344f;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_6741344f:
      *(undefined4 *)(iVar3 + (&DAT_6741e420)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = FUN_6740cf07();
  *piVar1 = 9;
  puVar2 = FUN_6740cf10();
  *puVar2 = 0;
  return -1;
}



/* ---- __get_osfhandle @ 67413472 size=65 ---- */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2003 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_6741e400) &&
     (piVar1 = (intptr_t *)((&DAT_6741e420)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 0x24),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  piVar2 = FUN_6740cf07();
  *piVar2 = 9;
  puVar3 = FUN_6740cf10();
  *puVar3 = 0;
  return -1;
}



/* ---- __lock_fhandle @ 674134b3 size=148 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lock_fhandle
   
   Library: Visual Studio 2003 Release */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_67418860;
  uStack_c = 0x674134bf;
  iVar1 = (&DAT_6741e420)[_Filehandle >> 5] + (_Filehandle & 0x1fU) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    __lock(10);
    local_8 = (undefined *)0x0;
    if (*(int *)(iVar1 + 8) == 0) {
      iVar2 = ___crtInitCritSecAndSpinCount(iVar1 + 0xc,4000);
      if (iVar2 == 0) {
        __local_unwind2((int)local_14,-1);
        return 0;
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    local_8 = (undefined *)0xffffffff;
    FUN_6741354a();
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_6741e420)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return 1;
}



/* ---- FUN_6741354a @ 6741354a size=9 ---- */

void FUN_6741354a(void)

{
  FUN_6740abc9(10);
  return;
}



/* ---- __unlock_fhandle @ 67413553 size=34 ---- */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_6741e420)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}



/* ---- __alloc_osfhnd @ 67413575 size=356 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __alloc_osfhnd(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_20;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_67418870;
  uStack_c = 0x67413581;
  local_20 = -1;
  iVar1 = __mtinitlocknum(0xb);
  if (iVar1 == 0) {
LAB_67413616:
    local_20 = -1;
  }
  else {
    __lock(0xb);
    local_8 = (undefined *)0x0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(&DAT_6741e420)[iVar1];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = _malloc(0x480);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_6741e420)[iVar1] = puVar3;
          DAT_6741e400 = DAT_6741e400 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_6741e420)[iVar1] + 0x480); puVar3 = puVar3 + 9) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar1 << 5;
          iVar1 = __lock_fhandle(local_20);
          if (iVar1 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_6741e420)[iVar1] + 0x480); puVar3 = puVar3 + 9) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            local_8 = (undefined *)0x1;
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                __local_unwind2((int)local_14,-1);
                goto LAB_67413616;
              }
              puVar3[2] = puVar3[2] + 1;
            }
            local_8 = (undefined *)0x0;
            FUN_6741364e();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          if ((*(byte *)(puVar3 + 1) & 1) == 0) {
            *puVar3 = 0xffffffff;
            local_20 = ((int)puVar3 - (&DAT_6741e420)[iVar1]) / 0x24 + iVar1 * 0x20;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
        }
      }
      if (local_20 != -1) break;
    }
    local_8 = (undefined *)0xffffffff;
    FUN_674136e8();
  }
  return local_20;
}



/* ---- FUN_6741364e @ 6741364e size=9 ---- */

void FUN_6741364e(void)

{
  FUN_6740abc9(10);
  return;
}



/* ---- FUN_674136e8 @ 674136e8 size=9 ---- */

void FUN_674136e8(void)

{
  FUN_6740abc9(0xb);
  return;
}



/* ---- __read_lk @ 674136f1 size=475 ---- */

/* Library Function - Single Match
    __read_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __read_lk(uint param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  BOOL BVar5;
  DWORD DVar6;
  int *piVar7;
  ulong *puVar8;
  char *pcVar9;
  int iVar10;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar7 = &DAT_6741e420 + ((int)param_1 >> 5);
    iVar10 = (param_1 & 0x1f) * 0x24;
    bVar3 = *(byte *)(*piVar7 + iVar10 + 4);
    if ((bVar3 & 2) == 0) {
      pcVar9 = param_2;
      if (((bVar3 & 0x48) != 0) && (*(char *)(*piVar7 + iVar10 + 5) != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = *(char *)(*piVar7 + 5 + iVar10);
        pcVar9 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar7 + 5 + iVar10) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),pcVar9,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          piVar7 = FUN_6740cf07();
          *piVar7 = 9;
          puVar8 = FUN_6740cf10();
          *puVar8 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          __dosmaperr(DVar6);
        }
        return -1;
      }
      local_c = (char *)((int)local_c + local_10);
      if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x80) != 0) {
        if ((local_10 == 0) || (*param_2 != '\n')) {
          pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
          *pbVar1 = *pbVar1 & 0xfb;
        }
        else {
          pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
          *pbVar1 = *pbVar1 | 4;
        }
        local_c = param_2 + (int)local_c;
        param_3 = param_2;
        pcVar9 = param_2;
        if (param_2 < local_c) {
          do {
            cVar4 = *param_3;
            if (cVar4 == '\x1a') {
              if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x40) == 0) {
                pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
                *pbVar1 = *pbVar1 | 2;
              }
              break;
            }
            if (cVar4 == '\r') {
              if (param_3 < local_c + -1) {
                if (param_3[1] == '\n') {
                  pcVar2 = param_3 + 2;
                  goto LAB_6741387e;
                }
LAB_67413898:
                param_3 = param_3 + 1;
                *pcVar9 = '\r';
              }
              else {
                pcVar2 = param_3 + 1;
                BVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),&local_5,1,&local_10,
                                 (LPOVERLAPPED)0x0);
                if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0))
                goto LAB_67413898;
                if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x48) == 0) {
                  if ((pcVar9 == param_2) && (local_5 == '\n')) goto LAB_6741387e;
                  __lseek_lk(param_1,-1,1);
                  if (local_5 == '\n') goto LAB_6741389c;
                  goto LAB_67413898;
                }
                if (local_5 == '\n') {
LAB_6741387e:
                  param_3 = pcVar2;
                  *pcVar9 = '\n';
                }
                else {
                  *pcVar9 = '\r';
                  *(char *)(*piVar7 + 5 + iVar10) = local_5;
                  param_3 = pcVar2;
                }
              }
              pcVar9 = pcVar9 + 1;
              pcVar2 = param_3;
            }
            else {
              *pcVar9 = cVar4;
              pcVar9 = pcVar9 + 1;
              pcVar2 = param_3 + 1;
            }
LAB_6741389c:
            param_3 = pcVar2;
          } while (param_3 < local_c);
        }
        local_c = (char *)((int)pcVar9 - (int)param_2);
      }
      return (int)local_c;
    }
  }
  return 0;
}



/* ---- __read @ 674138cc size=160 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __read
   
   Library: Visual Studio 2003 Release */

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < DAT_6741e400) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_6741e420)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_6740cf07();
        *piVar1 = 9;
        puVar2 = FUN_6740cf10();
        *puVar2 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __read_lk(_FileHandle,_DstBuf,(char *)_MaxCharCount);
      }
      FUN_67413953();
      return local_20;
    }
  }
  piVar1 = FUN_6740cf07();
  *piVar1 = 9;
  puVar2 = FUN_6740cf10();
  *puVar2 = 0;
  return -1;
}



/* ---- FUN_67413953 @ 67413953 size=8 ---- */

void FUN_67413953(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* ---- _atol @ 67413977 size=136 ---- */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2003 Release */

long __cdecl _atol(char *_Str)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  int iVar4;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *this;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  while( true ) {
    if ((int)ptVar2->lc_category[1].refcount < 2) {
      this = ptVar2->lc_category[3].refcount;
      uVar3 = *(byte *)((int)this + (uint)(byte)*_Str * 2) & 8;
    }
    else {
      uVar3 = ___isctype_mt(this,(int)ptVar2,(uint)(byte)*_Str,8);
      this = extraout_ECX_01;
    }
    if (uVar3 == 0) break;
    _Str = _Str + 1;
  }
  uVar3 = (uint)(byte)*_Str;
  pbVar7 = (byte *)(_Str + 1);
  if ((uVar3 == 0x2d) || (uVar5 = uVar3, uVar3 == 0x2b)) {
    uVar5 = (uint)*pbVar7;
    pbVar7 = (byte *)(_Str + 2);
  }
  iVar4 = 0;
  while( true ) {
    if ((uVar5 < 0x30) || (0x39 < uVar5)) {
      iVar6 = -1;
    }
    else {
      iVar6 = uVar5 - 0x30;
    }
    if (iVar6 == -1) break;
    iVar4 = iVar6 + iVar4 * 10;
    uVar5 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  }
  if (uVar3 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



/* ---- ___crtGetLocaleInfoW @ 674139ff size=281 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2003 Release */

int __cdecl ___crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  size_t sStackY_4c;
  undefined1 auStack_2a [10];
  int local_20;
  
  if (DAT_6741e328 == 0) {
    sStackY_4c = 0x67413a22;
    iVar3 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_6741e328 = 2;
      }
    }
    else {
      DAT_6741e328 = 1;
    }
  }
  if (DAT_6741e328 == 1) {
    sStackY_4c = 0x67413a5e;
    iVar3 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar3;
  }
  if ((DAT_6741e328 == 2) || (DAT_6741e328 == 0)) {
    local_20 = 0;
    bVar2 = false;
    if (param_5 == 0) {
      param_5 = DAT_6741e294;
    }
    sStackY_4c = 0x67413a8d;
    iVar3 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar3 != 0) {
      puVar5 = (undefined1 *)(iVar3 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      puVar6 = auStack_2a + iVar1 + -0xe;
      if (auStack_2a + -0xe == puVar5) {
        *(int *)(auStack_2a + iVar1 + -0x12) = iVar3;
        *(undefined4 *)(auStack_2a + iVar1 + -0x16) = 0x67413ada;
        puVar6 = _malloc(*(size_t *)(auStack_2a + iVar1 + -0x12));
        if (puVar6 == (undefined1 *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(auStack_2a + iVar1 + -0x12) = iVar3;
      *(undefined1 **)(auStack_2a + iVar1 + -0x16) = puVar6;
      *(LCTYPE *)(auStack_2a + iVar1 + -0x1a) = param_2;
      *(LCID *)(auStack_2a + iVar1 + -0x1e) = param_1;
      puVar7 = auStack_2a + iVar1 + -0x22;
      *(undefined4 *)(auStack_2a + iVar1 + -0x22) = 0x67413af4;
      iVar3 = GetLocaleInfoA(*(LCID *)(auStack_2a + iVar1 + -0x1e),
                             *(LCTYPE *)(auStack_2a + iVar1 + -0x1a),
                             *(LPSTR *)(auStack_2a + iVar1 + -0x16),
                             *(int *)(auStack_2a + iVar1 + -0x12));
      puVar5 = puVar7;
      if (iVar3 != 0) {
        if (param_4 == 0) {
          *(undefined4 *)(puVar7 + -4) = 0;
          *(undefined4 *)(puVar7 + -8) = 0;
        }
        else {
          *(int *)(puVar7 + -4) = param_4;
          *(LPWSTR *)(puVar7 + -8) = param_3;
        }
        *(undefined4 *)(puVar7 + -0xc) = 0xffffffff;
        *(undefined1 **)(puVar7 + -0x10) = puVar6;
        *(undefined4 *)(puVar7 + -0x14) = 1;
        *(int *)(puVar7 + -0x18) = param_5;
        puVar5 = puVar7 + -0x1c;
        *(undefined4 *)(puVar7 + -0x1c) = 0x67413b14;
        local_20 = MultiByteToWideChar(*(UINT *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                                       *(LPCSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                       *(LPWSTR *)(puVar7 + -8),*(int *)(puVar7 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar5 + -4) = puVar6;
        *(undefined4 *)(puVar5 + -8) = 0x67413b22;
        _free(*(void **)(puVar5 + -4));
      }
      return local_20;
    }
  }
  return 0;
}



/* ---- ___crtGetLocaleInfoA @ 67413b2f size=297 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2003 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  size_t sStackY_4c;
  undefined1 auStack_2a [10];
  int local_20;
  
  if (DAT_6741e32c == 0) {
    sStackY_4c = 0x67413b52;
    iVar3 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_6741e32c = 2;
      }
    }
    else {
      DAT_6741e32c = 1;
    }
  }
  if ((DAT_6741e32c == 2) || (DAT_6741e32c == 0)) {
    sStackY_4c = 0x67413c66;
    iVar3 = GetLocaleInfoA((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPSTR)_LCType,(int)_LpLCData);
    return iVar3;
  }
  if (DAT_6741e32c == 1) {
    local_20 = 0;
    bVar2 = false;
    if (_CchData == 0) {
      _CchData = DAT_6741e294;
    }
    sStackY_4c = 0x67413baf;
    iVar3 = GetLocaleInfoW((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPWSTR)0x0,0);
    if (iVar3 != 0) {
      puVar5 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      puVar6 = auStack_2a + iVar1 + -0xe;
      if (auStack_2a + -0xe == puVar5) {
        *(int *)(auStack_2a + iVar1 + -0x12) = iVar3 * 2;
        *(undefined4 *)(auStack_2a + iVar1 + -0x16) = 0x67413c02;
        puVar6 = _malloc(*(size_t *)(auStack_2a + iVar1 + -0x12));
        if (puVar6 == (undefined1 *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(auStack_2a + iVar1 + -0x12) = iVar3;
      *(undefined1 **)(auStack_2a + iVar1 + -0x16) = puVar6;
      *(LPCWSTR *)(auStack_2a + iVar1 + -0x1a) = _LocaleName;
      *(_locale_t *)(auStack_2a + iVar1 + -0x1e) = _Plocinfo;
      puVar7 = auStack_2a + iVar1 + -0x22;
      *(undefined4 *)(auStack_2a + iVar1 + -0x22) = 0x67413c1e;
      iVar3 = GetLocaleInfoW(*(LCID *)(auStack_2a + iVar1 + -0x1e),
                             *(LCTYPE *)(auStack_2a + iVar1 + -0x1a),
                             *(LPWSTR *)(auStack_2a + iVar1 + -0x16),
                             *(int *)(auStack_2a + iVar1 + -0x12));
      puVar5 = puVar7;
      if (iVar3 != 0) {
        *(undefined4 *)(puVar7 + -4) = 0;
        *(undefined4 *)(puVar7 + -8) = 0;
        if (_LpLCData == (LPSTR)0x0) {
          *(undefined4 *)(puVar7 + -0xc) = 0;
          *(undefined4 *)(puVar7 + -0x10) = 0;
        }
        else {
          *(LPSTR *)(puVar7 + -0xc) = _LpLCData;
          *(LCTYPE *)(puVar7 + -0x10) = _LCType;
        }
        *(undefined4 *)(puVar7 + -0x14) = 0xffffffff;
        *(undefined1 **)(puVar7 + -0x18) = puVar6;
        *(undefined4 *)(puVar7 + -0x1c) = 0;
        *(int *)(puVar7 + -0x20) = _CchData;
        puVar5 = puVar7 + -0x24;
        *(undefined4 *)(puVar7 + -0x24) = 0x67413c40;
        local_20 = WideCharToMultiByte(*(UINT *)(puVar7 + -0x20),*(DWORD *)(puVar7 + -0x1c),
                                       *(LPCWSTR *)(puVar7 + -0x18),*(int *)(puVar7 + -0x14),
                                       *(LPSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                       *(LPCSTR *)(puVar7 + -8),*(LPBOOL *)(puVar7 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar5 + -4) = puVar6;
        *(undefined4 *)(puVar5 + -8) = 0x67413c4e;
        _free(*(void **)(puVar5 + -4));
      }
      return local_20;
    }
  }
  return 0;
}



/* ---- ___ascii_stricmp @ 67413c70 size=78 ---- */

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2003 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_67413cb6;
      bVar3 = *_Str2;
      _Str2 = _Str2 + 1;
      bVar2 = *_Str1;
      _Str1 = _Str1 + 1;
    } while (bVar2 == bVar3);
    bVar1 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar2 = bVar2 + 0xbf;
    bVar3 = bVar2 + (-(bVar2 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar1);
  cVar4 = (bVar3 < bVar1) * -2 + '\x01';
LAB_67413cb6:
  return (int)cVar4;
}



/* ---- __stricmp @ 67413cbe size=105 ---- */

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  void *pvVar4;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (ptVar2->lc_category[0].wlocale == (wchar_t *)0x0) {
    iVar3 = ___ascii_stricmp(_Str1,_Str2);
  }
  else {
    do {
      pvVar4 = (void *)___tolower_mt(this,(int)ptVar2,(uint)(byte)*_Str1);
      _Str1 = _Str1 + 1;
      this = (void *)___tolower_mt(this_00,(int)ptVar2,(uint)(byte)*_Str2);
      _Str2 = _Str2 + 1;
      if (pvVar4 == (void *)0x0) break;
    } while (pvVar4 == this);
    iVar3 = (int)pvVar4 - (int)this;
  }
  return iVar3;
}



/* ---- __strnicmp @ 67413d27 size=127 ---- */

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  void *pvVar4;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else if (ptVar2->lc_category[0].wlocale == (wchar_t *)0x0) {
    iVar3 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
  }
  else {
    do {
      pvVar4 = (void *)___tolower_mt(this,(int)ptVar2,(uint)(byte)*_Str1);
      _Str1 = _Str1 + 1;
      this = (void *)___tolower_mt(this_00,(int)ptVar2,(uint)(byte)*_Str2);
      _Str2 = _Str2 + 1;
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (pvVar4 == (void *)0x0)) break;
    } while (pvVar4 == this);
    iVar3 = (int)pvVar4 - (int)this;
  }
  return iVar3;
}



/* ---- xtoa @ 67413da6 size=62 ---- */

/* Library Function - Single Match
    _xtoa
   
   Library: Visual Studio 2003 Release */

void __cdecl xtoa(uint param_1,int param_2)

{
  char *pcVar1;
  uint in_EAX;
  uint uVar2;
  char *in_ECX;
  char *pcVar3;
  char cVar4;
  
  pcVar1 = in_ECX;
  if (param_2 != 0) {
    *in_ECX = '-';
    in_ECX = in_ECX + 1;
    in_EAX = -in_EAX;
    pcVar1 = in_ECX;
  }
  do {
    pcVar3 = pcVar1;
    uVar2 = in_EAX / param_1;
    cVar4 = (char)(in_EAX % param_1);
    if (in_EAX % param_1 < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    in_EAX = uVar2;
    pcVar1 = pcVar3 + 1;
  } while (uVar2 != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *in_ECX;
    pcVar3 = pcVar3 + -1;
    *in_ECX = cVar4;
    in_ECX = in_ECX + 1;
  } while (in_ECX < pcVar3);
  return;
}



/* ---- __itoa @ 67413de4 size=42 ---- */

/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Release */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  int iVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
    _Radix = 10;
  }
  else {
    iVar1 = 0;
  }
  xtoa(_Radix,iVar1);
  return _Dest;
}



/* ---- __tsopen_lk @ 67413e0e size=743 ---- */

/* Library Function - Single Match
    __tsopen_lk
   
   Library: Visual Studio 2003 Release */

uint __thiscall
__tsopen_lk(void *this,undefined4 *param_1,uint *param_2,LPCSTR param_3,uint param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  HANDLE hFile;
  int iVar6;
  DWORD DVar7;
  int iVar8;
  bool bVar9;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  uint local_c;
  char local_6;
  byte local_5;
  
  bVar9 = -1 < (char)param_4;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar9) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar9;
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x4000) != 0 || (DAT_6741e3ec != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar3 = param_4 & 3;
  if (uVar3 == 0) {
    local_14 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_14 = 0x40000000;
  }
  else {
    if (uVar3 != 2) goto LAB_67413e95;
    local_14 = 0xc0000000;
  }
  if (this == (void *)0x10) {
    local_c = 0;
  }
  else if (this == (void *)0x20) {
    local_c = 1;
  }
  else if (this == (void *)0x30) {
    local_c = 2;
  }
  else {
    if (this != (void *)0x40) {
LAB_67413e95:
      piVar4 = FUN_6740cf07();
      *piVar4 = 0x16;
      puVar5 = FUN_6740cf10();
      *puVar5 = 0;
      return 0xffffffff;
    }
    local_c = 3;
  }
  uVar3 = param_4 & 0x700;
  if (uVar3 < 0x401) {
    if ((uVar3 == 0x400) || (uVar3 == 0)) {
      local_10 = 3;
    }
    else if (uVar3 == 0x100) {
      local_10 = 4;
    }
    else {
      if (uVar3 == 0x200) goto LAB_67413f3c;
      if (uVar3 != 0x300) goto LAB_67413f22;
      local_10 = 2;
    }
  }
  else {
    if (uVar3 != 0x500) {
      if (uVar3 == 0x600) {
LAB_67413f3c:
        local_10 = 5;
        goto LAB_67413f4c;
      }
      if (uVar3 != 0x700) {
LAB_67413f22:
        piVar4 = FUN_6740cf07();
        *piVar4 = 0x16;
        puVar5 = FUN_6740cf10();
        *puVar5 = 0;
        return 0xffffffff;
      }
    }
    local_10 = 1;
  }
LAB_67413f4c:
  DVar7 = 0x80;
  if (((param_4 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_6741e11c & param_5))) {
    DVar7 = 1;
  }
  if ((param_4 & 0x40) != 0) {
    local_14 = CONCAT13(local_14._3_1_,0x10000);
    DVar7 = DVar7 | 0x4000000;
    if (DAT_6741e120 == 2) {
      local_c = local_c | 4;
    }
  }
  if ((param_4 & 0x1000) != 0) {
    DVar7 = DVar7 | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      DVar7 = DVar7 | 0x10000000;
    }
  }
  else {
    DVar7 = DVar7 | 0x8000000;
  }
  uVar3 = __alloc_osfhnd();
  if (uVar3 == 0xffffffff) {
    piVar4 = FUN_6740cf07();
    *piVar4 = 0x18;
    puVar5 = FUN_6740cf10();
    *puVar5 = 0;
  }
  else {
    *param_1 = 1;
    *param_2 = uVar3;
    hFile = CreateFileA(param_3,local_14,local_c,&local_20,local_10,DVar7,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar7 = GetFileType(hFile);
      if (DVar7 != 0) {
        if (DVar7 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar7 == 3) {
          local_5 = local_5 | 8;
        }
        __set_osfhnd(uVar3,(intptr_t)hFile);
        bVar2 = local_5 | 1;
        iVar8 = (uVar3 & 0x1f) * 0x24;
        local_5 = local_5 & 0x48;
        *(byte *)(iVar8 + 4 + (&DAT_6741e420)[(int)uVar3 >> 5]) = bVar2;
        if (((local_5 != 0) || (-1 < (char)bVar2)) || ((param_4 & 2) == 0)) {
LAB_6741408e:
          if (local_5 != 0) {
            return uVar3;
          }
          if ((param_4 & 8) == 0) {
            return uVar3;
          }
          pbVar1 = (byte *)(iVar8 + 4 + (&DAT_6741e420)[(int)uVar3 >> 5]);
          *pbVar1 = *pbVar1 | 0x20;
          return uVar3;
        }
        local_14 = __lseek_lk(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          puVar5 = FUN_6740cf10();
          if (*puVar5 == 0x83) goto LAB_6741408e;
        }
        else {
          local_6 = '\0';
          iVar6 = __read_lk(uVar3,&local_6,(char *)0x1);
          if ((((iVar6 != 0) || (local_6 != '\x1a')) ||
              (iVar6 = __chsize_lk(uVar3,local_14), iVar6 != -1)) &&
             (DVar7 = __lseek_lk(uVar3,0,0), DVar7 != 0xffffffff)) goto LAB_6741408e;
        }
        __close_lk(uVar3);
        return 0xffffffff;
      }
      CloseHandle(hFile);
    }
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
  }
  return 0xffffffff;
}



/* ---- __sopen @ 674140f5 size=69 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __sopen
   
   Library: Visual Studio 2003 Release */

int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  uint uVar1;
  byte in_stack_00000010;
  uint local_24 [6];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x67414101;
  local_24[1] = 0;
  local_8 = 0;
  uVar1 = __tsopen_lk((void *)_ShareFlag,local_24 + 1,local_24,_Filename,_OpenFlag,in_stack_00000010
                     );
  local_8 = 0xffffffff;
  FUN_6741413a();
  return uVar1;
}



/* ---- FUN_6741413a @ 6741413a size=16 ---- */

void FUN_6741413a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x20));
  }
  return;
}



/* ---- __fptrap @ 6741414a size=9 ---- */

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



/* ---- __flswbuf @ 67414153 size=296 ---- */

/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl __flswbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  uint _FileHandle;
  char *_Buf;
  char *pcVar2;
  FILE *_File_00;
  int iVar3;
  undefined *puVar4;
  FILE *_MaxCharCount;
  
  _File_00 = _File;
  uVar1 = _File->_flag;
  _FileHandle = _File->_file;
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_6741426c:
    _File->_flag = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      _File->_cnt = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_6741426c;
      _File->_ptr = _File->_base;
      _File->_flag = uVar1 & 0xfffffffe;
    }
    uVar1 = _File->_flag;
    _File->_flag = uVar1 & 0xffffffef | 2;
    _File->_cnt = 0;
    _File = (FILE *)0x0;
    if (((uVar1 & 0x10c) == 0) &&
       (((_File_00 != (FILE *)&DAT_6741b8a0 && (_File_00 != (FILE *)&DAT_6741b8c0)) ||
        (iVar3 = __isatty(_FileHandle), iVar3 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108) == 0) {
      _MaxCharCount = (FILE *)0x2;
      _File = (FILE *)CONCAT22(_File._2_2_,(short)_Ch);
      _File = (FILE *)__write(_FileHandle,&_File,2);
    }
    else {
      _Buf = _File_00->_base;
      pcVar2 = _File_00->_ptr;
      _File_00->_ptr = _Buf + 2;
      _MaxCharCount = (FILE *)(pcVar2 + -(int)_Buf);
      _File_00->_cnt = _File_00->_bufsiz + -2;
      if ((int)_MaxCharCount < 1) {
        if (_FileHandle == 0xffffffff) {
          puVar4 = &DAT_6741be14;
        }
        else {
          puVar4 = (undefined *)
                   ((&DAT_6741e420)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x20) != 0) {
          __lseek(_FileHandle,0,2);
        }
      }
      else {
        _File = (FILE *)__write(_FileHandle,_Buf,(uint)_MaxCharCount);
      }
      *(short *)_File_00->_base = (short)_Ch;
    }
    if (_File == _MaxCharCount) {
      return _Ch & 0xffff;
    }
    _File_00->_flag = _File_00->_flag | 0x20;
  }
  return 0xffff;
}



/* ---- ___tolower_mt @ 674142b4 size=200 ---- */

/* Library Function - Single Match
    ___tolower_mt
   
   Library: Visual Studio 2003 Release */

uint __thiscall ___tolower_mt(void *this,int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR _LpSrcStr;
  int iVar4;
  BOOL unaff_EDI;
  undefined4 local_8;
  
  uVar2 = param_2;
  iVar4 = param_1;
  if ((*(int *)(param_1 + 0x14) == 0) || ((*(int *)(param_1 + 0x24) != 0 && (param_2 < 0x80)))) {
    if ((0x40 < (int)param_2) && ((int)param_2 < 0x5b)) {
      return param_2 + 0x20;
    }
  }
  else {
    local_8 = this;
    if (param_2 < 0x100) {
      if (*(int *)(param_1 + 0x28) < 2) {
        uVar3 = *(byte *)(*(int *)(param_1 + 0x48) + param_2 * 2) & 1;
      }
      else {
        uVar3 = ___isctype_mt(this,param_1,param_2,1);
      }
      if (uVar3 == 0) {
        return uVar2;
      }
    }
    iVar1 = param_1;
    if ((*(byte *)(*(int *)(iVar4 + 0x48) + 1 + ((int)uVar2 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar2;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar2,(char)(uVar2 >> 8));
      param_1._3_1_ = SUB41(iVar1,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      _LpSrcStr = (LPCSTR)0x2;
    }
    iVar4 = ___crtLCMapStringA(*(_locale_t *)(iVar4 + 0x14),(LPCWSTR)0x100,(DWORD)&param_1,_LpSrcStr
                               ,(int)&local_8,(LPSTR)0x3,*(int *)(iVar4 + 4),1,unaff_EDI);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        return (uint)local_8 & 0xff;
      }
      return (uint)CONCAT11((undefined1)local_8,local_8._1_1_);
    }
  }
  return uVar2;
}



/* ---- ___ascii_strnicmp @ 67414380 size=97 ---- */

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2003 Release */

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
      if (bVar2 != (byte)uVar3) goto LAB_674143d1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_674143d1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/* ---- __chsize_lk @ 674143e1 size=321 ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __chsize_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __chsize_lk(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  HANDLE hFile;
  BOOL BVar8;
  int iVar9;
  char local_1008 [4096];
  undefined4 local_8;
  
  iVar9 = 0;
  local_8 = DAT_6741b534;
  DVar1 = __lseek_lk(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = __lseek_lk(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar9 = -1;
  }
  else {
    DVar2 = param_2 - DVar2;
    if ((int)DVar2 < 1) {
      if ((int)DVar2 < 0) {
        __lseek_lk(param_1,param_2,0);
        hFile = (HANDLE)__get_osfhandle(param_1);
        BVar8 = SetEndOfFile(hFile);
        iVar9 = (BVar8 != 0) - 1;
        if (iVar9 == -1) {
          piVar7 = FUN_6740cf07();
          *piVar7 = 0xd;
          puVar6 = FUN_6740cf10();
          DVar2 = GetLastError();
          *puVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      iVar3 = __setmode_lk(param_1,0x8000);
      do {
        DVar4 = 0x1000;
        if ((int)DVar2 < 0x1000) {
          DVar4 = DVar2;
        }
        iVar5 = __write_lk(param_1,local_1008,DVar4);
        if (iVar5 == -1) {
          puVar6 = FUN_6740cf10();
          if (*puVar6 == 5) {
            piVar7 = FUN_6740cf07();
            *piVar7 = 0xd;
          }
          iVar9 = -1;
          break;
        }
        DVar2 = DVar2 - iVar5;
      } while (0 < (int)DVar2);
      __setmode_lk(param_1,iVar3);
    }
    __lseek_lk(param_1,DVar1,0);
  }
  return iVar9;
}



/* ---- __setmode_lk @ 67414522 size=108 ---- */

/* Library Function - Single Match
    __setmode_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmode_lk(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_6741e420 + ((int)param_1 >> 5);
  iVar4 = (param_1 & 0x1f) * 0x24;
  bVar2 = *(byte *)(*piVar3 + 4 + iVar4);
  if (param_2 == 0x8000) {
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      piVar3 = FUN_6740cf07();
      *piVar3 = 0x16;
      return -1;
    }
    pbVar1 = (byte *)(*piVar3 + 4 + iVar4);
    *pbVar1 = *pbVar1 | 0x80;
  }
  return (-(uint)((bVar2 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



/* ---- RtlUnwind @ 6741458e size=6 ---- */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x6741458e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ---- __strupr @ 67414594 size=253 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: _String */
/* Library Function - Single Match
    __strupr
   
   Library: Visual Studio 2003 Release */

char * __cdecl __strupr(char *_String)

{
  char cVar1;
  _locale_t _Plocinfo;
  int iVar2;
  bool bVar3;
  _ptiddata p_Var4;
  pthreadlocinfo ptVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  BOOL unaff_EDI;
  DWORD DStackY_5c;
  undefined1 auStack_2a [2];
  size_t local_28 [9];
  
  bVar3 = false;
  p_Var4 = __getptd();
  ptVar5 = (pthreadlocinfo)p_Var4->_tfpecode;
  if (ptVar5 != (pthreadlocinfo)PTR_DAT_6741b6e4) {
    ptVar5 = ___updatetlocinfo();
  }
  _Plocinfo = (_locale_t)ptVar5->lc_category[0].wlocale;
  if (_Plocinfo == (_locale_t)0x0) {
    cVar1 = *_String;
    pcVar9 = _String;
    while (cVar1 != '\0') {
      cVar1 = *pcVar9;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar9 = cVar1 + -0x20;
      }
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    return _String;
  }
  DStackY_5c = 0x67414608;
  iVar6 = ___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x200,(DWORD)_String,(LPCSTR)0xffffffff,0,(LPSTR)0x0
                             ,ptVar5->lc_codepage,1,unaff_EDI);
  if (iVar6 == 0) {
    return _String;
  }
  puVar7 = (undefined1 *)(iVar6 + 3U & 0xfffffffc);
  iVar2 = -(int)puVar7;
  puVar8 = auStack_2a + iVar2 + -0xe;
  if (auStack_2a + -0xe == puVar7) {
    *(int *)(auStack_2a + iVar2 + -0x12) = iVar6;
    *(undefined4 *)(auStack_2a + iVar2 + -0x16) = 0x67414655;
    puVar8 = _malloc(*(size_t *)(auStack_2a + iVar2 + -0x12));
    bVar3 = true;
    if (puVar8 == (undefined1 *)0x0) goto LAB_67414690;
  }
  *(undefined4 *)(auStack_2a + iVar2 + -0x12) = 1;
  *(uint *)(auStack_2a + iVar2 + -0x16) = ptVar5->lc_codepage;
  *(int *)(auStack_2a + iVar2 + -0x1a) = iVar6;
  *(undefined1 **)(auStack_2a + iVar2 + -0x1e) = puVar8;
  *(undefined4 *)(auStack_2a + iVar2 + -0x22) = 0xffffffff;
  *(char **)(auStack_2a + iVar2 + -0x26) = _String;
  *(undefined4 *)(auStack_2a + iVar2 + -0x2a) = 0x200;
  *(wchar_t **)(auStack_2a + iVar2 + -0x2e) = ptVar5->lc_category[0].wlocale;
  *(undefined4 *)(auStack_2a + iVar2 + -0x32) = 0x6741467e;
  iVar6 = ___crtLCMapStringA(*(_locale_t *)(auStack_2a + iVar2 + -0x2e),
                             *(LPCWSTR *)(auStack_2a + iVar2 + -0x2a),
                             *(DWORD *)(auStack_2a + iVar2 + -0x26),
                             *(LPCSTR *)(auStack_2a + iVar2 + -0x22),
                             *(int *)(auStack_2a + iVar2 + -0x1e),
                             *(LPSTR *)(auStack_2a + iVar2 + -0x1a),
                             *(int *)(auStack_2a + iVar2 + -0x16),
                             *(int *)(auStack_2a + iVar2 + -0x12),
                             *(BOOL *)(auStack_2a + iVar2 + -0xe));
  if (iVar6 != 0) {
    *(undefined1 **)(auStack_2a + iVar2 + -0x12) = puVar8;
    *(char **)(auStack_2a + iVar2 + -0x16) = _String;
    *(undefined4 *)(auStack_2a + iVar2 + -0x1a) = 0x6741468e;
    FUN_6740e000(*(uint **)(auStack_2a + iVar2 + -0x16),*(uint **)(auStack_2a + iVar2 + -0x12));
  }
LAB_67414690:
  if (bVar3) {
    *(undefined1 **)(auStack_2a + iVar2 + -0x12) = puVar8;
    *(undefined4 *)(auStack_2a + iVar2 + -0x16) = 0x6741469b;
    _free(*(void **)(auStack_2a + iVar2 + -0x12));
  }
  return _String;
}



/* ---- Unwind@674146c0 @ 674146c0 size=8 ---- */

void Unwind_674146c0(void)

{
  int unaff_EBP;
  
  FUN_67401dc0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@674146c8 @ 674146c8 size=11 ---- */

void Unwind_674146c8(void)

{
  int unaff_EBP;
  
  thunk_FUN_67401990((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@674146d3 @ 674146d3 size=11 ---- */

void Unwind_674146d3(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x10) + 0x28);
  return;
}



/* ---- Unwind@674146f0 @ 674146f0 size=8 ---- */

void Unwind_674146f0(void)

{
  int unaff_EBP;
  
  FUN_67401dc0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@674146f8 @ 674146f8 size=11 ---- */

void Unwind_674146f8(void)

{
  int unaff_EBP;
  
  thunk_FUN_67401990((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@67414710 @ 67414710 size=8 ---- */

void Unwind_67414710(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@67414730 @ 67414730 size=8 ---- */

void Unwind_67414730(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x30);
  return;
}



/* ---- Unwind@67414760 @ 67414760 size=8 ---- */

void Unwind_67414760(void)

{
  int unaff_EBP;
  
  FUN_67401c70((int *)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@67414780 @ 67414780 size=8 ---- */

void Unwind_67414780(void)

{
  int unaff_EBP;
  
  exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@674147a0 @ 674147a0 size=8 ---- */

void Unwind_674147a0(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@674147c0 @ 674147c0 size=11 ---- */

void Unwind_674147c0(void)

{
  int unaff_EBP;
  
  FUN_67402400(unaff_EBP + -0x598);
  return;
}



/* ---- Unwind@674147e0 @ 674147e0 size=11 ---- */

void Unwind_674147e0(void)

{
  int unaff_EBP;
  
  FUN_67403500(*(undefined4 **)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@67414800 @ 67414800 size=11 ---- */

void Unwind_67414800(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@67414820 @ 67414820 size=8 ---- */

void Unwind_67414820(void)

{
  int unaff_EBP;
  
  FUN_67403660(*(int **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@67414840 @ 67414840 size=8 ---- */

void Unwind_67414840(void)

{
  int unaff_EBP;
  
  FUN_67407b32((int *)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@67414860 @ 67414860 size=11 ---- */

void Unwind_67414860(void)

{
  int unaff_EBP;
  
  FUN_67403500(*(undefined4 **)(unaff_EBP + -0x84));
  return;
}



/* ---- Unwind@67414880 @ 67414880 size=11 ---- */

void Unwind_67414880(void)

{
  int unaff_EBP;
  
  FUN_6740821e((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@674148a0 @ 674148a0 size=8 ---- */

void Unwind_674148a0(void)

{
  int unaff_EBP;
  
  FUN_674034c0((uint *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@674148c0 @ 674148c0 size=8 ---- */

void Unwind_674148c0(void)

{
  int unaff_EBP;
  
  FUN_67404170((int *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@674148e0 @ 674148e0 size=28 ---- */

void Unwind_674148e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  FUN_674035c0((ios_base *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@67414910 @ 67414910 size=8 ---- */

void Unwind_67414910(void)

{
  int unaff_EBP;
  
  FUN_674034c0((uint *)(unaff_EBP + 0xc));
  return;
}



/* ---- Unwind@67414930 @ 67414930 size=8 ---- */

void Unwind_67414930(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x48);
  return;
}



/* ---- Unwind@67414938 @ 67414938 size=8 ---- */

void Unwind_67414938(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@67414950 @ 67414950 size=8 ---- */

void Unwind_67414950(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@67414970 @ 67414970 size=17 ---- */

void Unwind_67414970(void)

{
  FUN_67403440();
  return;
}



/* ---- Unwind@67414990 @ 67414990 size=11 ---- */

void Unwind_67414990(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x250);
  return;
}



/* ---- Unwind@6741499b @ 6741499b size=11 ---- */

void Unwind_6741499b(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x26c);
  return;
}



/* ---- Unwind@674149a6 @ 674149a6 size=11 ---- */

void Unwind_674149a6(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x234);
  return;
}



/* ---- Unwind@674149b1 @ 674149b1 size=11 ---- */

void Unwind_674149b1(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x288);
  return;
}



/* ---- Unwind@674149d0 @ 674149d0 size=8 ---- */

void Unwind_674149d0(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@674149f0 @ 674149f0 size=8 ---- */

void Unwind_674149f0(void)

{
  int unaff_EBP;
  
  FUN_67403a30(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@67414a10 @ 67414a10 size=8 ---- */

void Unwind_67414a10(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x28);
  return;
}



/* ---- Unwind@67414a30 @ 67414a30 size=17 ---- */

void Unwind_67414a30(void)

{
  FUN_67403440();
  return;
}



/* ---- Unwind@67414a50 @ 67414a50 size=11 ---- */

void Unwind_67414a50(void)

{
  int unaff_EBP;
  
  FUN_67403590((undefined4 *)(unaff_EBP + -0x240));
  return;
}



/* ---- Unwind@67414a5b @ 67414a5b size=11 ---- */

void Unwind_67414a5b(void)

{
  int unaff_EBP;
  
  FUN_67401af0((undefined4 *)(unaff_EBP + -0x220));
  return;
}



/* ---- Unwind@67414a66 @ 67414a66 size=11 ---- */

void Unwind_67414a66(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x23c);
  return;
}



/* ---- Unwind@67414a80 @ 67414a80 size=28 ---- */

void Unwind_67414a80(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  FUN_674035c0((ios_base *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}



/* ---- Unwind@67414a9c @ 67414a9c size=11 ---- */

void Unwind_67414a9c(void)

{
  int unaff_EBP;
  
  FUN_674035b0(*(int *)(unaff_EBP + -0x10) + 4);
  return;
}



/* ---- Unwind@67414ac0 @ 67414ac0 size=11 ---- */

void Unwind_67414ac0(void)

{
  int unaff_EBP;
  
  FUN_674035b0(*(int *)(unaff_EBP + -0x10) + -0x5c);
  return;
}



/* ---- Unwind@67414ae0 @ 67414ae0 size=11 ---- */

void Unwind_67414ae0(void)

{
  int unaff_EBP;
  
  FUN_67406340(*(int *)(unaff_EBP + -0x18) + 4);
  return;
}



/* ---- Unwind@67414aeb @ 67414aeb size=11 ---- */

void Unwind_67414aeb(void)

{
  int unaff_EBP;
  
  FUN_674064e0(*(int *)(unaff_EBP + -0x18) + 0x14);
  return;
}



/* ---- Unwind@67414af6 @ 67414af6 size=14 ---- */

void Unwind_67414af6(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x18) + 0xa8);
  return;
}



/* ---- Unwind@67414b04 @ 67414b04 size=14 ---- */

void Unwind_67414b04(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x18) + 0xc4);
  return;
}



/* ---- Unwind@67414b12 @ 67414b12 size=14 ---- */

void Unwind_67414b12(void)

{
  int unaff_EBP;
  
  FUN_67401a10((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xe0));
  return;
}



/* ---- Unwind@67414b20 @ 67414b20 size=8 ---- */

void Unwind_67414b20(void)

{
  int unaff_EBP;
  
  FUN_67401af0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@67414b40 @ 67414b40 size=11 ---- */

void Unwind_67414b40(void)

{
  int unaff_EBP;
  
  FUN_67401af0((undefined4 *)(unaff_EBP + -0xc6c));
  return;
}



/* ---- Unwind@67414b60 @ 67414b60 size=8 ---- */

void Unwind_67414b60(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x30);
  return;
}



/* ---- Unwind@67414b80 @ 67414b80 size=14 ---- */

void Unwind_67414b80(void)

{
  int unaff_EBP;
  
  FUN_67406340(*(int *)(unaff_EBP + -0x538) + 4);
  return;
}



/* ---- Unwind@67414b8e @ 67414b8e size=14 ---- */

void Unwind_67414b8e(void)

{
  int unaff_EBP;
  
  FUN_674064e0(*(int *)(unaff_EBP + -0x538) + 0x14);
  return;
}



/* ---- Unwind@67414b9c @ 67414b9c size=17 ---- */

void Unwind_67414b9c(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x538) + 0xa8);
  return;
}



/* ---- Unwind@67414bad @ 67414bad size=17 ---- */

void Unwind_67414bad(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x538) + 0xc4);
  return;
}



/* ---- Unwind@67414bbe @ 67414bbe size=17 ---- */

void Unwind_67414bbe(void)

{
  int unaff_EBP;
  
  FUN_67401a10((undefined4 *)(*(int *)(unaff_EBP + -0x538) + 0xe0));
  return;
}



/* ---- Unwind@67414bcf @ 67414bcf size=11 ---- */

void Unwind_67414bcf(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x530);
  return;
}



/* ---- Unwind@67414bda @ 67414bda size=11 ---- */

void Unwind_67414bda(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x554);
  return;
}



/* ---- Unwind@67414be5 @ 67414be5 size=11 ---- */

void Unwind_67414be5(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x554);
  return;
}



/* ---- Unwind@67414bf0 @ 67414bf0 size=11 ---- */

void Unwind_67414bf0(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x554);
  return;
}



/* ---- Unwind@67414bfb @ 67414bfb size=11 ---- */

void Unwind_67414bfb(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x554);
  return;
}



/* ---- Unwind@67414c06 @ 67414c06 size=14 ---- */

void Unwind_67414c06(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x534));
  return;
}



/* ---- Unwind@67414c20 @ 67414c20 size=14 ---- */

void Unwind_67414c20(void)

{
  DAT_6741dd6c = DAT_6741dd6c & 0xfffffffe;
  return;
}



/* ---- Unwind@67414c2e @ 67414c2e size=8 ---- */

void Unwind_67414c2e(void)

{
  int unaff_EBP;
  
  FUN_67401af0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@67414c36 @ 67414c36 size=11 ---- */

void Unwind_67414c36(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@67414c4b @ 67414c4b size=8 ---- */

void Unwind_67414c4b(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x28);
  return;
}



/* ---- Unwind@67414c5d @ 67414c5d size=8 ---- */

void Unwind_67414c5d(void)

{
  int unaff_EBP;
  
  FUN_67403500(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@67414c65 @ 67414c65 size=11 ---- */

void Unwind_67414c65(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x14) + 0x18);
  return;
}



/* ---- Unwind@67414c70 @ 67414c70 size=8 ---- */

void Unwind_67414c70(void)

{
  int unaff_EBP;
  
  FUN_67407b32((int *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@67414c82 @ 67414c82 size=8 ---- */

void Unwind_67414c82(void)

{
  int unaff_EBP;
  
  FUN_67403500(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@67414c94 @ 67414c94 size=8 ---- */

void Unwind_67414c94(void)

{
  int unaff_EBP;
  
  FUN_67407b32(*(int **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@67414c9c @ 67414c9c size=11 ---- */

void Unwind_67414c9c(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x10) + 4);
  return;
}



/* ---- Unwind@67414ca7 @ 67414ca7 size=11 ---- */

void Unwind_67414ca7(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x10) + 0x20);
  return;
}



/* ---- Unwind@67414cb2 @ 67414cb2 size=11 ---- */

void Unwind_67414cb2(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x10) + 0x3c);
  return;
}



/* ---- Unwind@67414cbd @ 67414cbd size=11 ---- */

void Unwind_67414cbd(void)

{
  int unaff_EBP;
  
  FUN_674011b0(*(int *)(unaff_EBP + -0x10) + 0x58);
  return;
}



/* ---- Unwind@67414cd2 @ 67414cd2 size=8 ---- */

void Unwind_67414cd2(void)

{
  int unaff_EBP;
  
  FUN_67407b32((int *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@67414cda @ 67414cda size=10 ---- */

void Unwind_67414cda(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@67414cee @ 67414cee size=8 ---- */

void Unwind_67414cee(void)

{
  int unaff_EBP;
  
  exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@67414d00 @ 67414d00 size=8 ---- */

void Unwind_67414d00(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@67414d08 @ 67414d08 size=8 ---- */

void Unwind_67414d08(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x50);
  return;
}



/* ---- Unwind@67414d10 @ 67414d10 size=11 ---- */

void Unwind_67414d10(void)

{
  int unaff_EBP;
  
  FUN_674011b0(unaff_EBP + -0x94);
  return;
}



/* ---- FUN_67414d30 @ 67414d30 size=12 ---- */

void FUN_67414d30(void)

{
  _atexit((_func_4879 *)&LAB_67414f20);
  return;
}



/* ---- FUN_67414d40 @ 67414d40 size=12 ---- */

void FUN_67414d40(void)

{
  _atexit((_func_4879 *)&LAB_67414f10);
  return;
}



/* ---- FUN_67414d50 @ 67414d50 size=29 ---- */

void FUN_67414d50(void)

{
  FUN_67402430(&DAT_6741b100,(undefined4 *)"NOTSET",6);
  _atexit((_func_4879 *)&LAB_67414f70);
  return;
}



/* ---- FUN_67414d70 @ 67414d70 size=29 ---- */

void FUN_67414d70(void)

{
  FUN_67402430(&DAT_6741b11c,(undefined4 *)&DAT_67416500,3);
  _atexit((_func_4879 *)&LAB_67414fa0);
  return;
}



/* ---- FUN_67414d90 @ 67414d90 size=29 ---- */

void FUN_67414d90(void)

{
  FUN_67402430(&DAT_6741b138,(undefined4 *)"TRACE",5);
  _atexit((_func_4879 *)&LAB_67414fd0);
  return;
}



/* ---- FUN_67414db0 @ 67414db0 size=29 ---- */

void FUN_67414db0(void)

{
  FUN_67402430(&DAT_6741b154,(undefined4 *)&DAT_6741650c,4);
  _atexit((_func_4879 *)&LAB_67415000);
  return;
}



/* ---- FUN_67414dd0 @ 67414dd0 size=29 ---- */

void FUN_67414dd0(void)

{
  FUN_67402430(&DAT_6741b170,(undefined4 *)"WARNING",7);
  _atexit((_func_4879 *)&LAB_67415030);
  return;
}



/* ---- FUN_67414df0 @ 67414df0 size=29 ---- */

void FUN_67414df0(void)

{
  FUN_67402430(&DAT_6741b18c,(undefined4 *)"ERROR",5);
  _atexit((_func_4879 *)&LAB_67415060);
  return;
}



/* ---- FUN_67414e10 @ 67414e10 size=29 ---- */

void FUN_67414e10(void)

{
  FUN_67402430(&DAT_6741b1a8,(undefined4 *)"FATAL",5);
  _atexit((_func_4879 *)&LAB_67415090);
  return;
}



/* ---- FUN_67414e30 @ 67414e30 size=29 ---- */

void FUN_67414e30(void)

{
  FUN_67402430(&DAT_6741b1c4,(undefined4 *)&DAT_6741652c,3);
  _atexit((_func_4879 *)&LAB_674150c0);
  return;
}



/* ---- FUN_67414e50 @ 67414e50 size=29 ---- */

void FUN_67414e50(void)

{
  FUN_67402430(&DAT_6741b1e0,(undefined4 *)"UNKNOWN",7);
  _atexit((_func_4879 *)&LAB_674150f0);
  return;
}



/* ---- FUN_67414e6d @ 67414e6d size=22 ---- */

void FUN_67414e6d(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_6741ddd0);
  _atexit((_func_4879 *)&LAB_6741511e);
  return;
}



/* ---- FUN_67414e83 @ 67414e83 size=12 ---- */

void FUN_67414e83(void)

{
  _atexit((_func_4879 *)&LAB_67415128);
  return;
}



/* ---- FUN_67414e8f @ 67414e8f size=22 ---- */

void FUN_67414e8f(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_6741de9c);
  _atexit((_func_4879 *)&LAB_67415132);
  return;
}



/* ---- FUN_67414ea5 @ 67414ea5 size=31 ---- */

void FUN_67414ea5(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_6740c260();
  FUN_674045b0(&DAT_6741de40,(int)(ppuVar1 + 8));
  _atexit((_func_4879 *)&LAB_67415158);
  return;
}



/* ---- FUN_67414ec4 @ 67414ec4 size=31 ---- */

void FUN_67414ec4(void)

{
  FUN_67404950(&DAT_6741dea0,&DAT_6741de40,'\0',1);
  _atexit((_func_4879 *)&LAB_6741513c);
  return;
}



/* ---- FUN_67414eed @ 67414eed size=22 ---- */

void FUN_67414eed(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_6741df30);
  _atexit((_func_4879 *)&LAB_6741516c);
  return;
}



/* ---- FUN_67414f03 @ 67414f03 size=12 ---- */

void FUN_67414f03(void)

{
  _atexit((_func_4879 *)&LAB_67415176);
  return;
}


// total=657 ok=657 failed=0
