// Module: ipcHani.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_10001010 @ 10001010 size=11 ---- */

void FUN_10001010(void)

{
  DAT_1000de08 = 0;
  return;
}



/* ---- FUN_10001020 @ 10001020 size=12 ---- */

void FUN_10001020(void)

{
  FUN_10002130(&LAB_10001030);
  return;
}



/* ---- FUN_10001040 @ 10001040 size=7 ---- */

void __fastcall FUN_10001040(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_10009170;
  return;
}



/* ---- FUN_10001050 @ 10001050 size=30 ---- */

undefined4 * __thiscall FUN_10001050(void *this,byte param_1)

{
  FUN_10001040(this);
  if ((param_1 & 1) != 0) {
    FUN_10002171(this);
  }
  return this;
}



/* ---- FUN_100010d0 @ 100010d0 size=16 ---- */

int FUN_100010d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}



/* ---- FUN_10001360 @ 10001360 size=284 ---- */

undefined4 FUN_10001360(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  LPSTR pCVar3;
  LPCSTR lpText;
  HWND hWnd;
  LONG LVar4;
  char *lpCaption;
  UINT uType;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10008cd3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xc);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 0;
    piVar1[2] = 1;
    iVar2 = Ordinal_2(param_2);
    *piVar1 = iVar2;
    if ((iVar2 == 0) && (param_2 != 0)) {
      FUN_10001e70(0x8007000e);
    }
  }
  local_4 = 0xffffffff;
  if (piVar1 == (int *)0x0) {
    FUN_10001e70(0x8007000e);
  }
  local_4 = 1;
  if (piVar1 == (int *)0x0) {
    lpText = (LPCSTR)0x0;
  }
  else {
    if (piVar1[1] == 0) {
      pCVar3 = FUN_10001f1d((LPCWSTR)*piVar1);
      piVar1[1] = (int)pCVar3;
      if ((pCVar3 == (LPSTR)0x0) && (*piVar1 != 0)) {
        FUN_10001e70(0x8007000e);
      }
    }
    lpText = (LPCSTR)piVar1[1];
  }
  uType = 0;
  lpCaption = s_Recieved_an_Event_1000b040;
  hWnd = GetActiveWindow();
  MessageBoxA(hWnd,lpText,lpCaption,uType);
  local_4 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LVar4 = InterlockedDecrement(piVar1 + 2);
    if (LVar4 == 0) {
      if (*piVar1 != 0) {
        Ordinal_6(*piVar1);
      }
      if ((undefined *)piVar1[1] != (undefined *)0x0) {
        FUN_10002171((undefined *)piVar1[1]);
      }
      FUN_10002171((undefined *)piVar1);
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}



/* ---- FUN_100014a0 @ 100014a0 size=660 ---- */

undefined4 FUN_100014a0(void)

{
  char cVar1;
  LPCWSTR pWVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  int iStack00000010;
  undefined1 uVar10;
  int *piStack_1dc;
  char cStack_1d9;
  char local_1c8 [20];
  char local_1b4 [380];
  int local_38 [2];
  LPCWSTR local_30;
  LPCWSTR local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10008cf0;
  local_10 = ExceptionList;
  local_14 = (int *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar3 = FUN_100017e0(&local_14,&iStack00000010);
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    FUN_10001e70(iVar3);
  }
  if (local_14 == (int *)0x0) {
    (*DAT_1000de10)();
    ClearMsgrSink();
    local_8 = 0xffffffff;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  else {
    local_1c = 0;
    piStack_1dc = local_14;
    (**(code **)(*local_14 + 0x1c))();
    local_28 = _malloc(local_1c * 0x185);
    local_20 = 1;
    local_24 = local_28;
    if (0 < local_1c) {
      do {
        pcVar7 = (char *)0x0;
        local_18 = (int *)0x0;
        local_8 = CONCAT31(local_8._1_3_,1);
        Ordinal_8();
        if (local_14 == (int *)0x0) {
          FUN_10001e70(0x80004003);
        }
        (**(code **)(*local_14 + 0x24))();
        iVar3 = FUN_10001860(&local_18,local_38);
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          FUN_10001e70(iVar3);
        }
        if (local_18 == (int *)0x0) {
          FUN_10001e70(0x80004003);
        }
        piVar4 = local_18;
        (**(code **)(*local_18 + 0x1c))();
        pWVar2 = local_2c;
        uVar10 = SUB41(piVar4,0);
        if (local_2c != (LPCWSTR)0x0) {
          pcVar7 = local_1c8 + -0x2c;
          iVar3 = lstrlenW(local_2c);
          FUN_10002790(uVar10);
          WideCharToMultiByte(0,0,pWVar2,-1,local_1c8 + -0x2c,iVar3 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0)
          ;
        }
        uVar5 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = local_1c8;
        for (uVar6 = uVar5 >> 2; piVar4 = local_18, uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        bVar9 = local_18 == (int *)0x0;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        if (bVar9) {
          FUN_10001e70(0x80004003);
          piVar4 = local_18;
        }
        (**(code **)(*piVar4 + 0x20))(piVar4,&local_30);
        pWVar2 = local_30;
        if (local_30 == (LPCWSTR)0x0) {
          pcVar7 = (char *)0x0;
        }
        else {
          pcVar7 = local_1c8 + -0x14;
          iVar3 = lstrlenW(local_30);
          FUN_10002790(SUB41(piStack_1dc,0));
          piStack_1dc = (int *)0x0;
          WideCharToMultiByte(0,0,pWVar2,-1,local_1c8 + -0x14,iVar3 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0)
          ;
        }
        uVar5 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        local_8 = local_8 & 0xffffff00;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = local_1b4;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        pcVar7 = local_1c8;
        pcVar8 = local_24;
        for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        local_24 = local_24 + 0x185;
        *pcVar8 = *pcVar7;
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }
        local_20 = local_20 + 1;
      } while (local_20 <= local_1c);
    }
    pcVar7 = local_28;
    (*DAT_1000de10)();
    if (pcVar7 != (char *)0x0) {
      FUN_10002560(pcVar7);
    }
    ClearMsgrSink();
    local_8 = 0xffffffff;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  ExceptionList = local_10;
  return 0;
}



/* ---- FUN_10001740 @ 10001740 size=29 ---- */

void __fastcall FUN_10001740(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



/* ---- FUN_10001760 @ 10001760 size=105 ---- */

bool __fastcall FUN_10001760(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  local_4 = param_1;
  if (DAT_1000de08 == (undefined4 *)0x0) {
    FUN_10001e70(0x80004003);
  }
  piVar2 = &local_4;
  iVar1 = (**(code **)*DAT_1000de08)(DAT_1000de08,&DAT_100091bc);
  if (iVar1 < 0) {
    return false;
  }
  iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,&DAT_10009160,(undefined4 *)(param_1 + 0xc));
  if (iVar1 < 0) {
    return false;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2,param_1,param_1 + 8);
  return (bool)('\x01' - (iVar1 != 0));
}



/* ---- FUN_100017d0 @ 100017d0 size=13 ---- */

void __fastcall FUN_100017d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



/* ---- FUN_100017e0 @ 100017e0 size=117 ---- */

int __thiscall FUN_100017e0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_EDI;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)this = 0;
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    return -0x7fffbffe;
  }
  iVar3 = (**(code **)*puVar1)(puVar1,&DAT_1000b058,&param_1);
  if (iVar3 < 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)this = 0;
    return iVar3;
  }
  piVar2 = *(int **)this;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)this = unaff_EDI;
  return iVar3;
}



/* ---- FUN_10001860 @ 10001860 size=117 ---- */

int __thiscall FUN_10001860(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_EDI;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)this = 0;
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    return -0x7fffbffe;
  }
  iVar3 = (**(code **)*puVar1)(puVar1,&DAT_1000b068,&param_1);
  if (iVar3 < 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)this = 0;
    return iVar3;
  }
  piVar2 = *(int **)this;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)this = unaff_EDI;
  return iVar3;
}



/* ---- FUN_100018e0 @ 100018e0 size=75 ---- */

void __fastcall FUN_100018e0(undefined4 *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    LVar2 = InterlockedDecrement(piVar1 + 2);
    if ((LVar2 == 0) && (piVar1 != (int *)0x0)) {
      if (*piVar1 != 0) {
        Ordinal_6(*piVar1);
      }
      if ((undefined *)piVar1[1] != (undefined *)0x0) {
        FUN_10002171((undefined *)piVar1[1]);
      }
      FUN_10002171((undefined *)piVar1);
    }
    *param_1 = 0;
  }
  return;
}



/* ---- FUN_10001930 @ 10001930 size=18 ---- */

void __fastcall FUN_10001930(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_9(param_1);
  if (iVar1 < 0) {
    FUN_10001e70(iVar1);
  }
  return;
}



/* ---- FUN_10001950 @ 10001950 size=27 ---- */

undefined4 FUN_10001950(undefined4 param_1,uint param_2)

{
  if ((param_2 != 0) && (param_2 < 4)) {
    CoUninitialize();
  }
  return 1;
}



/* ---- SetNotiHwnd @ 10001970 size=14 ---- */

void __cdecl SetNotiHwnd(undefined4 param_1)

{
                    /* 0x1970  5  SetNotiHwnd */
  DAT_1000de14 = param_1;
  HaniMgrSink();
  return;
}



/* ---- ClearMsgrSink @ 10001980 size=67 ---- */

void ClearMsgrSink(void)

{
  int *piVar1;
  
                    /* 0x1980  1  ClearMsgrSink */
  if (DAT_1000de0c != (int *)0x0) {
    FUN_10001740((int)DAT_1000de0c);
    (**(code **)(*DAT_1000de0c + 8))(DAT_1000de0c);
    DAT_1000de0c = (int *)0x0;
  }
  piVar1 = DAT_1000de08;
  if (DAT_1000de08 != (int *)0x0) {
    DAT_1000de08 = (int *)0x0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x100019bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}



/* ---- GetBuddyListData @ 100019d0 size=134 ---- */

undefined4 __cdecl GetBuddyListData(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x19d0  2  GetBuddyListData */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10008d00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  HaniMgrSink();
  piVar1 = DAT_1000de08;
  DAT_1000de10 = param_1;
  local_8 = 0;
  if (DAT_1000de08 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_1000de08 + 0x24))(DAT_1000de08);
    if (-1 < iVar2) {
      ExceptionList = local_10;
      return 1;
    }
    FUN_10001e7e(iVar2,piVar1,&DAT_1000b0a0);
    ClearMsgrSink();
  }
  ExceptionList = local_10;
  return 0;
}



/* ---- Catch@10001a56 @ 10001a56 size=76 ---- */

undefined4 Catch_10001a56(void)

{
  int *piVar1;
  int unaff_EBP;
  
  FUN_10002804((undefined1 *)(unaff_EBP + -0x120),(byte *)s_errmsg___s_1000b094,FUN_10001da0);
  OutputDebugStringA((LPCSTR)(unaff_EBP + -0x120));
  ClearMsgrSink();
  piVar1 = *(int **)(unaff_EBP + -0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(HLOCAL *)(unaff_EBP + -0x14) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(unaff_EBP + -0x14));
  }
  return 0x10001a2d;
}



/* ---- HaniMgrSink @ 10001ab0 size=385 ---- */

undefined4 HaniMgrSink(void)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  LPWSTR lpWideCharStr;
  undefined3 extraout_var;
  undefined1 unaff_DI;
  undefined1 uStack00000000;
  WCHAR WVar4;
  CLSID local_14;
  
                    /* 0x1ab0  3  HaniMgrSink */
  CoInitialize((LPVOID)0x0);
  if (DAT_1000de08 == (int *)0x0) {
    iVar2 = lstrlenA(s_HaniMgr_IpcConn_1_1000b0b4);
    FUN_10002790(unaff_DI);
    WVar4 = L'\0';
    iVar2 = MultiByteToWideChar(0,0,s_HaniMgr_IpcConn_1_1000b0b4,-1,
                                (LPWSTR)((int)register0x00000010 + -0x20),iVar2 + 1);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if ((int)DVar3 < 1) {
        DVar3 = GetLastError();
      }
      else {
        DVar3 = GetLastError();
        DVar3 = DVar3 & 0xffff | 0x80070000;
      }
    }
    else if (&uStack00000000 == (undefined1 *)0x20) {
      DVar3 = 0x80070057;
    }
    else {
      if (WVar4 == L'{') {
        DVar3 = CLSIDFromString((LPCOLESTR)((int)register0x00000010 + -0x20),&local_14);
      }
      else {
        DVar3 = CLSIDFromProgID((LPCOLESTR)((int)register0x00000010 + -0x20),&local_14);
      }
      if (-1 < (int)DVar3) {
        DVar3 = FUN_10001d10(&DAT_1000de08,&local_14,(LPUNKNOWN)0x0,0x17);
      }
    }
    if (DAT_1000de08 == (int *)0x0) {
      return 0;
    }
    if (-1 < (int)DVar3) {
      iVar2 = MultiByteToWideChar(0,0,&DAT_1000b0b0,-1,(LPWSTR)0x0,0);
      lpWideCharStr = (LPWSTR)Ordinal_4(0,iVar2 + -1);
      if (lpWideCharStr != (LPWSTR)0x0) {
        MultiByteToWideChar(0,0,&DAT_1000b0b0,-1,lpWideCharStr,iVar2 + -1);
      }
      if (DAT_1000de08 == (int *)0x0) {
        FUN_10001e70(0x80004003);
      }
      (**(code **)(*DAT_1000de08 + 0x1c))(DAT_1000de08,lpWideCharStr);
      DAT_1000de0c = operator_new(0x10);
      if (DAT_1000de0c == (int *)0x0) {
        DAT_1000de0c = (int *)0x0;
      }
      else {
        *DAT_1000de0c = (int)&PTR_LAB_10009170;
        DAT_1000de0c[1] = 0;
        DAT_1000de0c[2] = 0;
      }
      (**(code **)(*DAT_1000de0c + 4))(DAT_1000de0c);
      bVar1 = FUN_10001760((int)DAT_1000de0c);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* ---- IsMsgLogin @ 10001c40 size=123 ---- */

undefined4 IsMsgLogin(void)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_126 [270];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1c40  4  IsMsgLogin */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10008d10;
  local_10 = ExceptionList;
  local_14 = auStack_126 + -0xe;
  ExceptionList = &local_10;
  HaniMgrSink();
  piVar1 = DAT_1000de08;
  local_8 = 0;
  if (DAT_1000de08 == (int *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = (**(code **)(*DAT_1000de08 + 0x2c))(DAT_1000de08,&local_18);
  if (iVar2 < 0) {
    FUN_10001e7e(iVar2,piVar1,&DAT_1000b0a0);
  }
  ExceptionList = local_10;
  return local_18;
}



/* ---- Catch@10001ca8 @ 10001ca8 size=76 ---- */

undefined4 Catch_10001ca8(void)

{
  int *piVar1;
  int unaff_EBP;
  
  FUN_10002804((undefined1 *)(unaff_EBP + -0x124),(byte *)s_errmsg___s_1000b094,FUN_10001da0);
  OutputDebugStringA((LPCSTR)(unaff_EBP + -0x124));
  ClearMsgrSink();
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(HLOCAL *)(unaff_EBP + -0x18) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(unaff_EBP + -0x18));
  }
  return 0x10001cf4;
}



/* ---- FUN_10001d10 @ 10001d10 size=136 ---- */

HRESULT __thiscall FUN_10001d10(void *this,IID *param_1,LPUNKNOWN param_2,uint param_3)

{
  int *piVar1;
  HRESULT HVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_3 & 0x14) == 0) {
    HVar2 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_1000b0a0,this);
  }
  else {
    HVar2 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_1000b0c8,&param_2);
    if (-1 < HVar2) {
      HVar2 = OleRun(param_2);
      if (-1 < HVar2) {
        HVar2 = (*param_2->lpVtbl->QueryInterface)(param_2,(IID *)&DAT_1000b0a0,this);
      }
      (*param_2->lpVtbl->Release)(param_2);
      return HVar2;
    }
  }
  return HVar2;
}



/* ---- FUN_10001da0 @ 10001da0 size=202 ---- */

int __fastcall FUN_10001da0(int param_1)

{
  int *lpBuffer;
  int iVar1;
  LPSTR pCVar2;
  
  lpBuffer = (int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) == 0) {
    FormatMessageA(0x1100,(LPCVOID)0x0,*(DWORD *)(param_1 + 4),0x400,(LPSTR)lpBuffer,0,
                   (va_list *)0x0);
    if ((LPCSTR)*lpBuffer == (LPCSTR)0x0) {
      pCVar2 = LocalAlloc(0,0x20);
      *lpBuffer = (int)pCVar2;
      if (pCVar2 != (LPSTR)0x0) {
        iVar1 = *(int *)(param_1 + 4);
        if (((-0x7ffbfe01 < iVar1) && (iVar1 < -0x7ffb0000)) && ((short)(iVar1 - 0x200U) != 0)) {
          wsprintfA(pCVar2,s_IDispatch_error___d_1000b0f0,iVar1 - 0x200U & 0xffff);
          return *lpBuffer;
        }
        wsprintfA(pCVar2,s_FUnknown_error_0x_0lX_1000b0d7 + 1,iVar1);
      }
    }
    else {
      iVar1 = lstrlenA((LPCSTR)*lpBuffer);
      if ((1 < iVar1) && (*(char *)(iVar1 + -1 + *lpBuffer) == '\n')) {
        *(undefined1 *)(iVar1 + -1 + *lpBuffer) = 0;
        if (*(char *)(iVar1 + -2 + *lpBuffer) == '\r') {
          *(undefined1 *)(iVar1 + -2 + *lpBuffer) = 0;
          return *lpBuffer;
        }
      }
    }
  }
  return *lpBuffer;
}



/* ---- FUN_10001e70 @ 10001e70 size=14 ---- */

void FUN_10001e70(undefined4 param_1)

{
  FUN_10001fed(param_1,(int *)0x0);
  return;
}



/* ---- FUN_10001e7e @ 10001e7e size=97 ---- */

void FUN_10001e7e(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)*param_2)(param_2,&DAT_1000b108,&param_2);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_3);
      (**(code **)(*param_2 + 8))(param_2);
      if (iVar1 == 0) {
        iVar1 = Ordinal_200(0,&local_8);
        if (iVar1 != 0) {
          local_8 = (int *)0x0;
        }
      }
    }
  }
  FUN_10001fed(param_1,local_8);
  return;
}



/* ---- FUN_10001ee9 @ 10001ee9 size=18 ---- */

void FUN_10001ee9(void)

{
  FUN_10001f91(&DAT_1000de18,-0x7ffdfffc,10);
  return;
}



/* ---- FUN_10001efb @ 10001efb size=12 ---- */

void FUN_10001efb(void)

{
  FUN_10002130(&LAB_10001f07);
  return;
}



/* ---- FUN_10001f1d @ 10001f1d size=116 ---- */

LPSTR FUN_10001f1d(LPCWSTR param_1)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  
  if (param_1 == (LPCWSTR)0x0) {
    lpMultiByteStr = (LPSTR)0x0;
  }
  else {
    iVar1 = FUN_100029ff(param_1);
    uVar3 = iVar1 * 2 + 2;
    lpMultiByteStr = operator_new(uVar3);
    if (lpMultiByteStr == (LPSTR)0x0) {
      FUN_10001e70(0x8007000e);
    }
    *lpMultiByteStr = '\0';
    iVar1 = WideCharToMultiByte(0,0,param_1,-1,lpMultiByteStr,uVar3,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0) {
        uVar3 = 0;
      }
      else {
        DVar2 = GetLastError();
        uVar3 = DVar2 & 0xffff | 0x80070000;
      }
      FUN_10001e70(uVar3);
    }
  }
  return lpMultiByteStr;
}



/* ---- FUN_10001f91 @ 10001f91 size=92 ---- */

undefined2 * __thiscall FUN_10001f91(void *this,int param_1,short param_2)

{
  if (param_2 == 3) {
LAB_10001fb6:
    if (param_2 != 10) {
      if (param_2 == 0xb) {
        *(undefined2 *)this = 0xb;
        *(ushort *)((int)this + 8) = -(ushort)(param_1 != 0);
        return this;
      }
      *(undefined2 *)this = 3;
      goto LAB_10001fdf;
    }
  }
  else if (param_2 != 10) {
    if (param_2 != 0xb) {
      FUN_10001e70(0x80070057);
    }
    goto LAB_10001fb6;
  }
  *(undefined2 *)this = 10;
LAB_10001fdf:
  *(int *)((int)this + 8) = param_1;
  return this;
}



/* ---- FUN_10001fed @ 10001fed size=36 ---- */

undefined4 * FUN_10001fed(undefined4 param_1,int *param_2)

{
  undefined4 *extraout_ECX;
  undefined1 local_14 [4];
  undefined4 uStack_10;
  int *piStack_c;
  char cStack_8;
  
  FUN_10002011(local_14,param_1,param_2,'\0');
  __CxxThrowException_8(local_14,&DAT_10009a60);
  extraout_ECX[3] = 0;
  extraout_ECX[1] = uStack_10;
  *extraout_ECX = &PTR_FUN_100091d0;
  extraout_ECX[2] = piStack_c;
  if ((piStack_c != (int *)0x0) && (cStack_8 != '\0')) {
    (**(code **)(*piStack_c + 4))(piStack_c);
  }
  return extraout_ECX;
}



/* ---- FUN_10002011 @ 10002011 size=50 ---- */

undefined4 * __thiscall FUN_10002011(void *this,undefined4 param_1,int *param_2,char param_3)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_100091d0;
  *(int **)((int)this + 8) = param_2;
  if ((param_2 != (int *)0x0) && (param_3 != '\0')) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return this;
}



/* ---- FUN_10002043 @ 10002043 size=28 ---- */

undefined4 * __thiscall FUN_10002043(void *this,byte param_1)

{
  FUN_1000208c(this);
  if ((param_1 & 1) != 0) {
    FUN_10002171(this);
  }
  return this;
}



/* ---- FUN_1000208c @ 1000208c size=38 ---- */

void __fastcall FUN_1000208c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_FUN_100091d0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((HLOCAL)param_1[3] != (HLOCAL)0x0) {
    LocalFree((HLOCAL)param_1[3]);
  }
  return;
}



/* ---- FUN_100020b2 @ 100020b2 size=126 ---- */

undefined4 __cdecl FUN_100020b2(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10002b48();
  pbVar1 = (byte *)FUN_10002ea3(DAT_1000f534);
  if (pbVar1 < DAT_1000f530 + (4 - (int)DAT_1000f534)) {
    SVar2 = FUN_10002ea3(DAT_1000f534);
    pbVar1 = FUN_10002b74(DAT_1000f534,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10002127;
    }
    DAT_1000f530 = pbVar1 + ((int)DAT_1000f530 - (int)DAT_1000f534 >> 2) * 4;
    DAT_1000f534 = pbVar1;
  }
  *(undefined4 *)DAT_1000f530 = param_1;
  DAT_1000f530 = DAT_1000f530 + 4;
LAB_10002127:
  FUN_10002b51();
  return param_1;
}



/* ---- FUN_10002130 @ 10002130 size=18 ---- */

int __cdecl FUN_10002130(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100020b2(param_1);
  return (iVar1 != 0) - 1;
}



/* ---- FUN_10002171 @ 10002171 size=11 ---- */

void __cdecl FUN_10002171(undefined *param_1)

{
  FUN_10002560(param_1);
  return;
}



/* ---- FUN_1000217c @ 1000217c size=45 ---- */

void FUN_1000217c(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100021a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- FUN_100021b0 @ 100021b0 size=7 ---- */

void FUN_100021b0(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100021b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- FUN_100021b7 @ 100021b7 size=7 ---- */

void FUN_100021b7(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100021bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- FUN_100021be @ 100021be size=79 ---- */

void FUN_100021be(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x100021e6,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* ---- FUN_1000220d @ 1000220d size=54 ---- */

undefined4 __cdecl
FUN_1000220d(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_10002f91(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



/* ---- FUN_10002243 @ 10002243 size=84 ---- */

undefined4 __cdecl
FUN_10002243(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_10002297;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



/* ---- FUN_10002297 @ 10002297 size=37 ---- */

void __cdecl FUN_10002297(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_10002f91(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



/* ---- FUN_100022bc @ 100022bc size=182 ---- */

undefined4 __cdecl
FUN_100022bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined1 auStackY_cc [128];
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_c = auStackY_cc + 200;
  local_10 = auStackY_cc + 0x88;
  local_28 = FUN_10002372;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x10002344;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10003881();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



/* ---- FUN_10002372 @ 10002372 size=114 ---- */

undefined4 __cdecl FUN_10002372(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10002f91(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_100021be(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x100023dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



/* ---- FUN_100023e7 @ 100023e7 size=123 ---- */

int __cdecl FUN_100023e7(uint param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar2 = param_1;
  local_8 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = local_8;
  param_1 = local_8;
  if (-1 < param_2) {
    do {
      if (uVar3 == 0xffffffff) {
        FUN_100039e9();
      }
      uVar3 = uVar3 - 1;
      if (((*(int *)(iVar1 + 4 + uVar3 * 0x14) < param_3) &&
          (param_3 <= *(int *)(iVar1 + uVar3 * 0x14 + 8))) || (uVar3 == 0xffffffff)) {
        param_2 = param_2 + -1;
        local_8 = param_1;
        param_1 = uVar3;
      }
    } while (-1 < param_2);
  }
  uVar3 = uVar3 + 1;
  *param_4 = uVar3;
  *param_5 = local_8;
  if ((*(uint *)(uVar2 + 0xc) < local_8) || (local_8 < uVar3)) {
    FUN_100039e9();
  }
  return iVar1 + uVar3 * 0x14;
}



/* ---- __global_unwind2 @ 10002464 size=32 ---- */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000247c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- __local_unwind2 @ 100024a6 size=104 ---- */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_10002484;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000253a();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ---- __abnormal_termination @ 1000250e size=35 ---- */

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10002484) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ---- __NLG_Notify1 @ 10002531 size=9 ---- */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1000b120 = param_1;
  DAT_1000b11c = in_EAX;
  DAT_1000b124 = unaff_EBP;
  return;
}



/* ---- FUN_1000253a @ 1000253a size=24 ---- */

void FUN_1000253a(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000b120 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000b11c = in_EAX;
  DAT_1000b124 = unaff_EBP;
  return;
}



/* ---- operator_new @ 10002552 size=14 ---- */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



/* ---- FUN_10002560 @ 10002560 size=215 ---- */

void __cdecl FUN_10002560(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100091d8;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000f524 == 3) {
    ExceptionList = &local_14;
    FUN_10004f62(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10003d01((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10003d2c(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_100025ca();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000f524 != 2) goto LAB_1000262c;
    ExceptionList = &local_14;
    FUN_10004f62(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10004a5c(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10004ab3(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10002622();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1000262c:
  HeapFree(DAT_1000f520,0,param_1);
  ExceptionList = local_14;
  return;
}



/* ---- FUN_100025ca @ 100025ca size=9 ---- */

void FUN_100025ca(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10002622 @ 10002622 size=9 ---- */

void FUN_10002622(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- _malloc @ 10002649 size=18 ---- */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000dee8);
  return pvVar1;
}



/* ---- __nh_malloc @ 1000265b size=44 ---- */

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10002687((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100050b8(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ---- FUN_10002687 @ 10002687 size=231 ---- */

void __cdecl FUN_10002687(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100091f0;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  if (DAT_1000f524 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000f51c) {
      ExceptionList = &local_14;
      FUN_10004f62(9);
      local_8 = 0;
      piVar1 = FUN_10004055(param_1);
      local_8 = 0xffffffff;
      FUN_100026ee();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000f524 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000d194) {
        ExceptionList = &local_14;
        FUN_10004f62(9);
        local_8 = 1;
        piVar1 = FUN_10004af8(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000274d();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10002766;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10002766:
  HeapAlloc(DAT_1000f520,0,dwBytes);
  ExceptionList = local_14;
  return;
}



/* ---- FUN_100026ee @ 100026ee size=9 ---- */

void FUN_100026ee(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_1000274d @ 1000274d size=9 ---- */

void FUN_1000274d(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10002790 @ 10002790 size=47 ---- */

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_10002790(undefined1 param_1)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &param_1;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



/* ---- FUN_100027bf @ 100027bf size=41 ---- */

void __fastcall FUN_100027bf(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10004f62(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10002560((undefined *)param_1[1]);
  }
  FUN_10004fc3(0x1b);
  return;
}



/* ---- FUN_100027e8 @ 100027e8 size=28 ---- */

undefined4 * __thiscall FUN_100027e8(void *this,byte param_1)

{
  FUN_100027bf(this);
  if ((param_1 & 1) != 0) {
    FUN_10002171(this);
  }
  return this;
}



/* ---- FUN_10002804 @ 10002804 size=82 ---- */

int __cdecl FUN_10002804(undefined1 *param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1000527c((int *)&local_24,param_2,&param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10005164(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



/* ---- FUN_10002856 @ 10002856 size=217 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002856(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000de40 = GetVersion();
    iVar1 = FUN_10003bb4(1);
    if (iVar1 != 0) {
      _DAT_1000de4c = DAT_1000de40 >> 8 & 0xff;
      _DAT_1000de48 = DAT_1000de40 & 0xff;
      DAT_1000de40 = DAT_1000de40 >> 0x10;
      _DAT_1000de44 = _DAT_1000de48 * 0x100 + _DAT_1000de4c;
      iVar1 = FUN_100037fc();
      if (iVar1 != 0) {
        DAT_1000f53c = GetCommandLineA();
        DAT_1000de2c = FUN_10005ff9();
        FUN_10005ae3();
        FUN_10005dac();
        FUN_10005cf3();
        FUN_10002a56();
        DAT_1000de28 = DAT_1000de28 + 1;
        goto LAB_10002929;
      }
      FUN_10003c11();
    }
LAB_100028b6:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000de28 < 1) goto LAB_100028b6;
      DAT_1000de28 = DAT_1000de28 + -1;
      if (DAT_1000de78 == 0) {
        FUN_10002a94();
      }
      FUN_10005c9f();
      FUN_10003850();
      FUN_10003c11();
    }
    else if (param_2 == 3) {
      FUN_100038e8((undefined *)0x0);
    }
LAB_10002929:
    uVar2 = 1;
  }
  return uVar2;
}



/* ---- entry @ 1000292f size=157 ---- */

int entry(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    iVar3 = DAT_1000de28;
  }
  else {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10002977;
    if ((DAT_1000f540 != (code *)0x0) &&
       (iVar3 = (*DAT_1000f540)(param_1,param_2,param_3), iVar3 == 0)) {
      return 0;
    }
    iVar3 = FUN_10002856(param_1,param_2);
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_10002977:
  uVar2 = FUN_10001950(param_1,param_2);
  if (param_2 == 1) {
    if (uVar2 != 0) {
      return uVar2;
    }
    FUN_10002856(param_1,0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar3 = FUN_10002856(param_1,param_2);
    param_2 = uVar2;
    if (iVar3 == 0) {
      param_2 = 0;
    }
    uVar2 = param_2;
    if ((param_2 != 0) && (DAT_1000f540 != (code *)0x0)) {
      uVar2 = (*DAT_1000f540)(param_1,uVar1,param_3);
    }
  }
  param_2 = uVar2;
  return param_2;
}



/* ---- __amsg_exit @ 100029cc size=48 ---- */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000de34 == 1) || ((DAT_1000de34 == 0 && (DAT_1000de38 == 1)))) {
    FUN_1000612b();
  }
  FUN_10006164(param_1);
  (*(code *)PTR___exit_1000b148)(0xff);
  return;
}



/* ---- FUN_100029ff @ 100029ff size=29 ---- */

int __cdecl FUN_100029ff(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



/* ---- __CxxThrowException@8 @ 10002a1c size=58 ---- */

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
  
  pDVar2 = &DAT_10009210;
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



/* ---- FUN_10002a56 @ 10002a56 size=45 ---- */

void FUN_10002a56(void)

{
  if (DAT_1000f538 != (code *)0x0) {
    (*DAT_1000f538)();
  }
  FUN_10002b5a((undefined4 *)&DAT_1000b010,(undefined4 *)&DAT_1000b024);
  FUN_10002b5a((undefined4 *)&DAT_1000b000,(undefined4 *)&DAT_1000b00c);
  return;
}



/* ---- __exit @ 10002a83 size=17 ---- */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10002aa3(_Code,1,0);
  return;
}



/* ---- FUN_10002a94 @ 10002a94 size=15 ---- */

void FUN_10002a94(void)

{
  FUN_10002aa3(0,0,1);
  return;
}



/* ---- FUN_10002aa3 @ 10002aa3 size=163 ---- */

void __cdecl FUN_10002aa3(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10002b48();
  if (DAT_1000de7c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000de78 = 1;
  DAT_1000de74 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000f534 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000f530 - 4), DAT_1000f534 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000f534 <= puVar1);
    }
    FUN_10002b5a((undefined4 *)&DAT_1000b028,(undefined4 *)&DAT_1000b030);
  }
  FUN_10002b5a((undefined4 *)&DAT_1000b034,(undefined4 *)&DAT_1000b03c);
  if (param_3 == 0) {
    DAT_1000de7c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10002b51();
  return;
}



/* ---- FUN_10002b48 @ 10002b48 size=9 ---- */

void FUN_10002b48(void)

{
  FUN_10004f62(0xd);
  return;
}



/* ---- FUN_10002b51 @ 10002b51 size=9 ---- */

void FUN_10002b51(void)

{
  FUN_10004fc3(0xd);
  return;
}



/* ---- FUN_10002b5a @ 10002b5a size=26 ---- */

void __cdecl FUN_10002b5a(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ---- FUN_10002b74 @ 10002b74 size=781 ---- */

byte * __cdecl FUN_10002b74(byte *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  int local_3c;
  uint *local_38;
  byte *local_34;
  int *local_30;
  uint *local_2c;
  byte *local_28;
  uint *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009230;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10002560(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_1000f524 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10004f62(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10003d01((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_1000f51c) {
                iVar1 = FUN_1000450a(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10004055(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10006320((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10003d01((int)param_1);
                    FUN_10003d2c(local_2c,(int)param_1);
                  }
                }
                else {
                  local_28 = param_1;
                }
              }
              if (local_28 == (byte *)0x0) {
                if (param_2 == (uint *)0x0) {
                  param_2 = (uint *)0x1;
                }
                param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
                local_28 = HeapAlloc(DAT_1000f520,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10006320((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10003d2c(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10002cff();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_1000f520,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_1000dee8 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_100050b8(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_1000f524 == 2) {
          ExceptionList = &local_14;
          if (param_2 < (uint *)0xffffffe1) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x10;
              ExceptionList = &local_14;
            }
            else {
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              ExceptionList = &local_14;
            }
          }
          do {
            local_28 = pbVar3;
            if (param_2 < (uint *)0xffffffe1) {
              FUN_10004f62(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_10004a5c(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_1000f520,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_1000d194) {
                  iVar1 = FUN_10004e24(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10004af8((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10006320((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10004ab3(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_1000f520,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10006320((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10004ab3(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10002e4d();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_1000dee8 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_100050b8(param_2);
          } while (iVar1 != 0);
        }
        else {
          do {
            pbVar3 = (byte *)0x0;
            if (param_2 < (uint *)0xffffffe1) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              pbVar3 = HeapReAlloc(DAT_1000f520,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_1000dee8 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_100050b8(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



/* ---- FUN_10002cff @ 10002cff size=9 ---- */

void FUN_10002cff(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10002e4d @ 10002e4d size=11 ---- */

void FUN_10002e4d(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10002ea3 @ 10002ea3 size=214 ---- */

SIZE_T __cdecl FUN_10002ea3(undefined *param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009248;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  if (DAT_1000f524 == 3) {
    ExceptionList = &local_14;
    FUN_10004f62(9);
    local_8 = 0;
    local_20 = (byte *)FUN_10003d01((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10002f0d();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000f524 != 2) goto LAB_10002f61;
    ExceptionList = &local_14;
    FUN_10004f62(9);
    local_8 = 1;
    local_2c = (byte *)FUN_10004a5c(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10002f88();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_10002f61:
  SVar2 = HeapSize(DAT_1000f520,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



/* ---- FUN_10002f0d @ 10002f0d size=9 ---- */

void FUN_10002f0d(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10002f88 @ 10002f88 size=9 ---- */

void FUN_10002f88(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10002f91 @ 10002f91 size=155 ---- */

undefined4 __cdecl
FUN_10002f91(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_100039e9();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1000302c(param_1,param_2,param_3,param_4,(uint)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_100032e6((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



/* ---- FUN_1000302c @ 1000302c size=435 ---- */

void __cdecl
FUN_1000302c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,uint param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_100039e9();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10003881();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10003881();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10003881();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_10006655(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_100039e9();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_100031b4;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_100039e9();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_100023e7(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1000371e((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_10003289(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000339a(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                goto LAB_10003191;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
LAB_10003191:
          iVar5 = local_14;
        }
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_100031b4:
  if (param_6 == '\0') {
    FUN_100031df(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_10003988();
  return;
}



/* ---- FUN_100031df @ 100031df size=170 ---- */

void __cdecl
FUN_100031df(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,uint param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10003881();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_100022bc(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_100023e7(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000339a(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



/* ---- FUN_10003289 @ 10003289 size=93 ---- */

undefined4 __cdecl FUN_10003289(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100032e0:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100032ba:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100032e0;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100032ba;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- FUN_100032e6 @ 100032e6 size=132 ---- */

void __cdecl FUN_100032e6(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10009260;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_100039e9();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}



/* ---- FUN_10003384 @ 10003384 size=22 ---- */

undefined4 __cdecl FUN_10003384(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 == -0x1f928c9d) {
    uVar1 = FUN_10003988();
    return uVar1;
  }
  return 0;
}



/* ---- FUN_1000339a @ 1000339a size=123 ---- */

void __cdecl
FUN_1000339a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000355a((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  else {
  }
  FUN_100021be(param_10,param_1);
  FUN_100032e6((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_10003415((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000217c(UNRECOVERED_JUMPTABLE);
  }
  return;
}



/* ---- FUN_10003415 @ 10003415 size=165 ---- */

undefined4 __cdecl
FUN_10003415(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009270;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10003881();
  FUN_10003881();
  pDVar1 = FUN_10003881();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10003881();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_10002243(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100034e2();
  ExceptionList = local_14;
  return uVar2;
}



/* ---- FUN_100034e2 @ 100034e2 size=78 ---- */

void FUN_100034e2(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10003881();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10003881();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1000371e((int)unaff_EDI);
  }
  return;
}



/* ---- FUN_10003530 @ 10003530 size=42 ---- */

undefined4 __cdecl FUN_10003530(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    return 1;
  }
  return 0;
}



/* ---- FUN_1000355a @ 1000355a size=440 ---- */

void __cdecl FUN_1000355a(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10009288;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_10006655(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_10006671(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_10003785(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100066b0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10006655(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_10006671(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1000668d(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) == 0) {
            FUN_10003785(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_100021b0(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_10003785(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100021b7(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10006655(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_10006671(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_100066b0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_100035e8;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_10006655(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_10006671(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_100035e8:
      iVar3 = FUN_10003785(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_100039e9();
  ExceptionList = local_14;
  return;
}



/* ---- FUN_1000371e @ 1000371e size=86 ---- */

void __cdecl FUN_1000371e(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10009298;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_100021b0(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



/* ---- FUN_10003785 @ 10003785 size=35 ---- */

int __cdecl FUN_10003785(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}



/* ---- __CallSettingFrame@12 @ 100037b0 size=76 ---- */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

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



/* ---- FUN_100037fc @ 100037fc size=84 ---- */

undefined4 FUN_100037fc(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10004ecd();
  DAT_1000b160 = TlsAlloc();
  if (DAT_1000b160 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100069e5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000b160,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000386e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



/* ---- FUN_10003850 @ 10003850 size=30 ---- */

void FUN_10003850(void)

{
  FUN_10004ef6();
  if (DAT_1000b160 != 0xffffffff) {
    TlsFree(DAT_1000b160);
    DAT_1000b160 = 0xffffffff;
  }
  return;
}



/* ---- FUN_1000386e @ 1000386e size=19 ---- */

void __cdecl FUN_1000386e(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000d320;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ---- FUN_10003881 @ 10003881 size=103 ---- */

DWORD * FUN_10003881(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000b160);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100069e5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000b160,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000386e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100038dc;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100038dc:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ---- FUN_100038e8 @ 100038e8 size=160 ---- */

void __cdecl FUN_100038e8(undefined *param_1)

{
  if (DAT_1000b160 == 0xffffffff) {
    return;
  }
  if ((param_1 != (undefined *)0x0) ||
     (param_1 = TlsGetValue(DAT_1000b160), param_1 != (undefined *)0x0)) {
    if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
      FUN_10002560(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
      FUN_10002560(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
      FUN_10002560(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
      FUN_10002560(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
      FUN_10002560(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
      FUN_10002560(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x50) != &DAT_1000d320) {
      FUN_10002560(*(undefined **)(param_1 + 0x50));
    }
    FUN_10002560(param_1);
  }
  TlsSetValue(DAT_1000b160,(LPVOID)0x0);
  return;
}



/* ---- FUN_10003988 @ 10003988 size=86 ---- */

void FUN_10003988(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100092a8;
  puStack_10 = &LAB_10004fe0;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10003881();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10003881();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_10006b22();
  return;
}



/* ---- FUN_100039e9 @ 100039e9 size=79 ---- */

void FUN_100039e9(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100092c0;
  puStack_10 = &LAB_10004fe0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1000b164 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1000b164)();
  }
  local_8 = 0xffffffff;
  FUN_10003988();
  return;
}



/* ---- FUN_10003a3f @ 10003a3f size=45 ---- */

void __cdecl FUN_10003a3f(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}



/* ---- FUN_10003a6c @ 10003a6c size=328 ---- */

int FUN_10003a6c(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *this;
  undefined4 unaff_EBX;
  undefined1 unaff_BP;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  byte bVar8;
  
  FUN_10002790(unaff_BP);
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x3a;
    aCStackY_18[1] = ':';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    bVar8 = (byte)unaff_EBX;
    if (DVar4 != 0) {
      pcVar7 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar7;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar7 = cVar1 + -0x20;
        }
        pcVar7 = pcVar7 + 1;
        local_1230[0] = *pcVar7;
      }
      aCStackY_18[0] = '\x04';
      aCStackY_18[1] = ';';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      bVar8 = (byte)unaff_EBX;
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = '&';
        aCStackY_18[1] = ';';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        bVar8 = (byte)unaff_EBX;
        pcVar7 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar7;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar7 = cVar1 + -0x20;
          }
          bVar8 = (byte)unaff_EBX;
          pcVar7 = pcVar7 + 1;
          local_1a0[0] = *pcVar7;
        }
        pcVar7 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar7 != (char *)0x0) && (pcVar7 = _strchr(pcVar7,0x2c), pcVar7 != (char *)0x0)) {
        pbVar6 = (byte *)(pcVar7 + 1);
        bVar2 = *pbVar6;
        this = pbVar6;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = -0x74;
        aCStackY_18[1] = ';';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10006b39(this,pbVar6,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_10003a3f((undefined4 *)(aCStackY_18 + 0x10));
    iVar5 = 3 - (uint)(bVar8 < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



/* ---- FUN_10003bb4 @ 10003bb4 size=93 ---- */

undefined4 __cdecl FUN_10003bb4(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000f520 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000f520 != (HANDLE)0x0) {
    DAT_1000f524 = FUN_10003a6c();
    if (DAT_1000f524 == 3) {
      ppuVar1 = (undefined **)FUN_10003cb9(0x3f8);
    }
    else {
      if (DAT_1000f524 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10004800();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000f520);
  }
  return 0;
}



/* ---- FUN_10003c11 @ 10003c11 size=168 ---- */

void FUN_10003c11(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000f524 == 3) {
    iVar1 = 0;
    if (0 < DAT_1000f514) {
      puVar2 = (undefined4 *)((int)DAT_1000f518 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000f520,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000f514);
    }
    HeapFree(DAT_1000f520,0,DAT_1000f518);
  }
  else if (DAT_1000f524 == 2) {
    ppuVar3 = &PTR_LOOP_1000b170;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000b170);
  }
  HeapDestroy(DAT_1000f520);
  return;
}



/* ---- FUN_10003cb9 @ 10003cb9 size=72 ---- */

undefined4 __cdecl FUN_10003cb9(undefined4 param_1)

{
  DAT_1000f518 = HeapAlloc(DAT_1000f520,0,0x140);
  if (DAT_1000f518 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000f510 = 0;
  DAT_1000f514 = 0;
  DAT_1000f50c = DAT_1000f518;
  DAT_1000f51c = param_1;
  DAT_1000f504 = 0x10;
  return 1;
}



/* ---- FUN_10003d01 @ 10003d01 size=43 ---- */

uint __cdecl FUN_10003d01(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000f518;
  while( true ) {
    if (DAT_1000f518 + DAT_1000f514 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ---- FUN_10003d2c @ 10003d2c size=809 ---- */

void __cdecl FUN_10003d2c(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
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
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
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
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
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
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_1000f510 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000f508 * 0x8000 + DAT_1000f510[3]),0x8000,0x4000);
        DAT_1000f510[2] = DAT_1000f510[2] | 0x80000000U >> ((byte)DAT_1000f508 & 0x1f);
        *(undefined4 *)(DAT_1000f510[4] + 0xc4 + DAT_1000f508 * 4) = 0;
        *(char *)(DAT_1000f510[4] + 0x43) = *(char *)(DAT_1000f510[4] + 0x43) + -1;
        if (*(char *)(DAT_1000f510[4] + 0x43) == '\0') {
          DAT_1000f510[1] = DAT_1000f510[1] & 0xfffffffe;
        }
        if (DAT_1000f510[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000f510[3],0,0x8000);
          HeapFree(DAT_1000f520,0,(LPVOID)DAT_1000f510[4]);
          FUN_100066b0(DAT_1000f510,DAT_1000f510 + 5,
                       (DAT_1000f514 * 0x14 - (int)DAT_1000f510) + -0x14 + DAT_1000f518);
          DAT_1000f514 = DAT_1000f514 + -1;
          if (DAT_1000f510 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000f50c = DAT_1000f518;
        }
      }
      DAT_1000f510 = param_1;
      DAT_1000f508 = uVar14;
    }
  }
  return;
}



/* ---- FUN_10004055 @ 10004055 size=777 ---- */

int * __cdecl FUN_10004055(uint *param_1)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar10 = DAT_1000f518 + DAT_1000f514 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = (int)((int)param_1 + 0x17U) >> 4;
  iVar9 = iVar8 + -1;
  if (iVar9 < 0x20) {
    local_10 = 0xffffffff >> ((byte)iVar9 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> ((char)iVar8 - 0x21U & 0x1f);
    local_10 = 0;
  }
  for (param_1 = DAT_1000f50c;
      (param_1 < puVar10 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  if (param_1 == puVar10) {
    for (param_1 = DAT_1000f518;
        (param_1 < DAT_1000f50c && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
        param_1 = param_1 + 5) {
    }
    if (param_1 == DAT_1000f50c) {
      for (; (param_1 < puVar10 && (param_1[2] == 0)); param_1 = param_1 + 5) {
      }
      if (param_1 == puVar10) {
        for (param_1 = DAT_1000f518; (param_1 < DAT_1000f50c && (param_1[2] == 0));
            param_1 = param_1 + 5) {
        }
        if ((param_1 == DAT_1000f50c) && (param_1 = FUN_1000435e(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = FUN_1000440f((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar10 = (uint *)(piVar5 + 0x11);
    if ((piVar5[0x31] & local_c) == 0 && (piVar5[0x11] & local_10) == 0) {
      do {
        puVar1 = puVar10 + 0x21;
        local_8 = local_8 + 1;
        puVar10 = puVar10 + 1;
      } while ((*puVar1 & local_c) == 0 && (local_10 & *puVar10) == 0);
    }
  }
  iVar8 = 0;
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  local_10 = piVar5[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar11 = *piVar12 - uVar7;
  iVar9 = (iVar11 >> 4) + -1;
  if (0x3f < iVar9) {
    iVar9 = 0x3f;
  }
  DAT_1000f50c = param_1;
  if (iVar9 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar13 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar13;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar11 == 0) goto LAB_1000431b;
    piVar12[1] = piVar3[iVar9 * 2 + 1];
    piVar12[2] = (int)(piVar3 + iVar9 * 2);
    (piVar3 + iVar9 * 2)[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar9 + 4 + (int)piVar5);
      bVar6 = (byte)iVar9;
      if (iVar9 < 0x20) {
        *(char *)(iVar9 + 4 + (int)piVar5) = cVar4 + '\x01';
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        *(char *)(iVar9 + 4 + (int)piVar5) = cVar4 + '\x01';
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar11 != 0) {
    *piVar12 = iVar11;
    *(int *)(iVar11 + -4 + (int)piVar12) = iVar11;
  }
LAB_1000431b:
  piVar12 = (int *)((int)piVar12 + iVar11);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_1000f510)) && (local_8 == DAT_1000f508)) {
    DAT_1000f510 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/* ---- FUN_1000435e @ 1000435e size=177 ---- */

undefined4 * FUN_1000435e(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000f514 == DAT_1000f504) {
    pvVar2 = HeapReAlloc(DAT_1000f520,0,DAT_1000f518,(DAT_1000f504 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000f504 = DAT_1000f504 + 0x10;
    DAT_1000f518 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000f518 + DAT_1000f514 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000f520,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000f514 = DAT_1000f514 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000f520,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ---- FUN_1000440f @ 1000440f size=251 ---- */

int __cdecl FUN_1000440f(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}



/* ---- FUN_1000450a @ 1000450a size=758 ---- */

undefined4 __cdecl FUN_1000450a(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_c;
  
  uVar5 = param_1[4];
  uVar11 = param_3 + 0x17U & 0xfffffff0;
  uVar9 = param_2 - param_1[3] >> 0xf;
  iVar3 = uVar9 * 0x204 + 0x144 + uVar5;
  iVar6 = *(int *)(param_2 + -4);
  iVar8 = iVar6 + -1;
  uVar12 = *(uint *)(iVar6 + -5 + param_2);
  iVar6 = iVar6 + -5 + param_2;
  if (iVar8 < (int)uVar11) {
    if (((uVar12 & 1) != 0) || ((int)(uVar12 + iVar8) < (int)uVar11)) {
      return 0;
    }
    local_c = ((int)uVar12 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar10 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar7 = (uint *)(uVar5 + 0x44 + uVar9 * 4);
        *puVar7 = *puVar7 & uVar10;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar10;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar10 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar9 * 4);
        *puVar7 = *puVar7 & uVar10;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar10;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
    iVar6 = uVar12 + (iVar8 - uVar11);
    if (0 < iVar6) {
      uVar12 = (iVar6 >> 4) - 1;
      iVar8 = param_2 + -4 + uVar11;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      iVar3 = iVar3 + uVar12 * 8;
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar8 + 8) = iVar3;
      *(int *)(iVar3 + 4) = iVar8;
      *(int *)(*(int *)(iVar8 + 4) + 8) = iVar8;
      if (*(int *)(iVar8 + 4) == *(int *)(iVar8 + 8)) {
        cVar4 = *(char *)(uVar12 + 4 + uVar5);
        *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
        if (uVar12 < 0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar12 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0x44 + uVar9 * 4);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar9 * 4);
          uVar12 = uVar12 - 0x20;
        }
        *puVar7 = *puVar7 | 0x80000000U >> ((byte)uVar12 & 0x1f);
      }
      piVar2 = (int *)(param_2 + -4 + uVar11);
      *piVar2 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar2) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar11 + 1;
    *(uint *)(param_2 + -8 + uVar11) = uVar11 + 1;
  }
  else if ((int)uVar11 < iVar8) {
    param_3 = iVar8 - uVar11;
    *(uint *)(param_2 + -4) = uVar11 + 1;
    piVar2 = (int *)(param_2 + -4 + uVar11);
    uVar10 = (param_3 >> 4) - 1;
    piVar2[-1] = uVar11 + 1;
    if (0x3f < uVar10) {
      uVar10 = 0x3f;
    }
    if ((uVar12 & 1) == 0) {
      uVar11 = ((int)uVar12 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
      if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
        if (uVar11 < 0x20) {
          pcVar1 = (char *)(uVar11 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)uVar11 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0x44 + uVar9 * 4);
          *puVar7 = *puVar7 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(uVar11 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar9 * 4);
          *puVar7 = *puVar7 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
      param_3 = param_3 + uVar12;
      uVar10 = (param_3 >> 4) - 1;
      if (0x3f < uVar10) {
        uVar10 = 0x3f;
      }
    }
    iVar6 = iVar3 + uVar10 * 8;
    piVar2[1] = *(int *)(iVar3 + 4 + uVar10 * 8);
    piVar2[2] = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    *(int **)(piVar2[1] + 8) = piVar2;
    if (piVar2[1] == piVar2[2]) {
      cVar4 = *(char *)(uVar10 + 4 + uVar5);
      *(char *)(uVar10 + 4 + uVar5) = cVar4 + '\x01';
      if (uVar10 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar10 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0x44 + uVar9 * 4);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar10 - 0x20 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar9 * 4);
        uVar10 = uVar10 - 0x20;
      }
      *puVar7 = *puVar7 | 0x80000000U >> ((byte)uVar10 & 0x1f);
    }
    *piVar2 = param_3;
    *(int *)(param_3 + -4 + (int)piVar2) = param_3;
  }
  return 1;
}



/* ---- FUN_10004800 @ 10004800 size=324 ---- */

undefined ** FUN_10004800(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000b180 == -1) {
    lpMem = &PTR_LOOP_1000b170;
  }
  else {
    lpMem = HeapAlloc(DAT_1000f520,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000b170) {
        if (PTR_LOOP_1000b170 == (undefined *)0x0) {
          PTR_LOOP_1000b170 = (undefined *)&PTR_LOOP_1000b170;
        }
        if (PTR_LOOP_1000b174 == (undefined *)0x0) {
          PTR_LOOP_1000b174 = (undefined *)&PTR_LOOP_1000b170;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000b170;
        lpMem[1] = PTR_LOOP_1000b174;
        PTR_LOOP_1000b174 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_1000b170) {
    HeapFree(DAT_1000f520,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ---- FUN_10004944 @ 10004944 size=86 ---- */

void __cdecl FUN_10004944(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000d190 == param_1) {
    PTR_LOOP_1000d190 = param_1[1];
  }
  if (param_1 == &PTR_LOOP_1000b170) {
    DAT_1000b180 = 0xffffffff;
    return;
  }
  *(undefined **)param_1[1] = *param_1;
  *(undefined **)(*param_1 + 4) = param_1[1];
  HeapFree(DAT_1000f520,0,param_1);
  return;
}



/* ---- FUN_1000499a @ 1000499a size=194 ---- */

void __cdecl FUN_1000499a(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000b174;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_1000de80 = DAT_1000de80 + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10004944(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000b174) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ---- FUN_10004a5c @ 10004a5c size=87 ---- */

int __cdecl FUN_10004a5c(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000b170;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000b170) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



/* ---- FUN_10004ab3 @ 10004ab3 size=69 ---- */

void __cdecl FUN_10004ab3(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000de80 = DAT_1000de80 + 1, DAT_1000de80 == 0x20)) {
    FUN_1000499a(0x10);
  }
  return;
}



/* ---- FUN_10004af8 @ 10004af8 size=520 ---- */

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10004af8(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int *local_8;
  
  piVar7 = (int *)PTR_LOOP_1000d190;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      local_8 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10004d00(local_8,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10004bc3;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          local_8 = local_8 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar2 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_10004d00(piVar2,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10004bc3:
            PTR_LOOP_1000d190 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar2 = piVar2 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_1000d190) {
      ppuVar9 = &PTR_LOOP_1000b170;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000b170) {
          ppuVar9 = FUN_10004800();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000d190 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar3 = (undefined **)ppuVar9[3];
      local_8 = (int *)0x0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar3 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar4 = *ppuVar3;
      ppuVar6 = ppuVar3;
      for (; (puVar4 == (undefined *)0xffffffff && ((int)local_8 < 0x10));
          local_8 = (int *)((int)local_8 + 1)) {
        ppuVar6 = ppuVar6 + 2;
        puVar4 = *ppuVar6;
      }
      piVar5 = VirtualAlloc(piVar7,(int)local_8 << 0xc,0x1000,4);
      if (piVar5 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,(int)local_8 << 0xc,0);
      ppuVar6 = ppuVar3;
      if (0 < (int)local_8) {
        piVar5 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar5 + 0x3d) = 0xff;
          piVar5[-1] = (int)(piVar5 + 1);
          *piVar5 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar5 = piVar5 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = (int *)((int)local_8 + -1);
        } while (local_8 != (int *)0x0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_1000d190 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar3;
      *ppuVar3 = *ppuVar3 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}



/* ---- FUN_10004d00 @ 10004d00 size=292 ---- */

int __cdecl FUN_10004d00(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar4 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar7 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar7 = pbVar2 + param_1[1];
    }
    do {
      while( true ) {
        while( true ) {
          if (pbVar1 <= pbVar7 + param_3) {
            pbVar7 = (byte *)(param_1 + 2);
            goto LAB_10004d9b;
          }
          if (*pbVar7 == 0) break;
          pbVar7 = pbVar7 + *pbVar7;
        }
        uVar6 = 1;
        pbVar5 = pbVar7;
        while (pbVar5 = pbVar5 + 1, *pbVar5 == 0) {
          uVar6 = uVar6 + 1;
        }
        if (param_3 <= uVar6) {
          if (pbVar7 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar7 + param_3);
            param_1[1] = uVar6 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar7 = bVar4;
          pbVar2 = pbVar7 + 8;
          goto LAB_10004e13;
        }
        if (pbVar7 != pbVar2) break;
        param_1[1] = uVar6;
        pbVar7 = pbVar5;
      }
      param_2 = param_2 - uVar6;
      pbVar7 = pbVar5;
    } while (param_3 <= param_2);
LAB_10004e1d:
    iVar3 = 0;
  }
  else {
    *pbVar2 = bVar4;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
LAB_10004e13:
    iVar3 = (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
  }
  return iVar3;
LAB_10004d9b:
  if ((pbVar2 <= pbVar7) || (pbVar1 <= pbVar7 + param_3)) goto LAB_10004e1d;
  if (*pbVar7 == 0) {
    uVar6 = 1;
    pbVar5 = pbVar7;
    while (pbVar5 = pbVar5 + 1, *pbVar5 == 0) {
      uVar6 = uVar6 + 1;
    }
    if (param_3 <= uVar6) {
      if (pbVar7 + param_3 < pbVar1) {
        *param_1 = (int)(pbVar7 + param_3);
        param_1[1] = uVar6 - param_3;
      }
      else {
        param_1[1] = 0;
        *param_1 = (int)(param_1 + 2);
      }
      *pbVar7 = bVar4;
      pbVar2 = pbVar7 + 8;
      goto LAB_10004e13;
    }
    param_2 = param_2 - uVar6;
    if (param_2 < param_3) goto LAB_10004e1d;
    pbVar7 = pbVar5;
  }
  else {
    pbVar7 = pbVar7 + *pbVar7;
  }
  goto LAB_10004d9b;
}



/* ---- FUN_10004e24 @ 10004e24 size=169 ---- */

undefined4 __cdecl FUN_10004e24(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_3;
  piVar2 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  if (param_4 < uVar6) {
    *param_3 = (byte)param_4;
    *piVar2 = *piVar2 + (uVar6 - param_4);
    piVar2[1] = 0xf1;
  }
  else {
    if (param_4 <= uVar6) {
      return 0;
    }
    pbVar1 = param_3 + param_4;
    if (param_2 + 0x3e < pbVar1) {
      return 0;
    }
    for (pbVar4 = param_3 + uVar6; (pbVar4 < pbVar1 && (*pbVar4 == 0)); pbVar4 = pbVar4 + 1) {
    }
    if (pbVar4 != pbVar1) {
      return 0;
    }
    *param_3 = (byte)param_4;
    if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
      if (pbVar1 < param_2 + 0x3e) {
        iVar5 = 0;
        *param_2 = (int)pbVar1;
        bVar3 = *pbVar1;
        while (bVar3 == 0) {
          iVar5 = iVar5 + 1;
          bVar3 = pbVar1[iVar5];
        }
        param_2[1] = iVar5;
      }
      else {
        param_2[1] = 0;
        *param_2 = (int)(param_2 + 2);
      }
    }
    *piVar2 = *piVar2 + (uVar6 - param_4);
  }
  return 1;
}



/* ---- FUN_10004ecd @ 10004ecd size=41 ---- */

void FUN_10004ecd(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d1dc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d1cc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d1bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d19c);
  return;
}



/* ---- FUN_10004ef6 @ 10004ef6 size=108 ---- */

void FUN_10004ef6(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000d198;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000d1dc)) && (ppuVar1 != &PTR_DAT_1000d1cc)) &&
       ((ppuVar1 != &PTR_DAT_1000d1bc && (ppuVar1 != &PTR_DAT_1000d19c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10002560(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000d258);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d1bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d1cc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d1dc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000d19c);
  return;
}



/* ---- FUN_10004f62 @ 10004f62 size=97 ---- */

void __cdecl FUN_10004f62(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000d198 + param_1;
  if ((&DAT_1000d198)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10004f62(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10002560((undefined *)lpCriticalSection);
    }
    FUN_10004fc3(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ---- FUN_10004fc3 @ 10004fc3 size=21 ---- */

void __cdecl FUN_10004fc3(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000d198)[param_1]);
  return;
}



/* ---- FUN_1000509d @ 1000509d size=27 ---- */

void FUN_1000509d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ---- FUN_100050b8 @ 100050b8 size=27 ---- */

undefined4 __cdecl FUN_100050b8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000deec != (code *)0x0) {
    iVar1 = (*DAT_1000deec)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ---- _strcmp @ 100050e0 size=129 ---- */

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

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
      if (bVar3 != *_Str2) goto LAB_10005124;
      _Str2 = _Str2 + 1;
      if (bVar3 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100050f0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar3 = (byte)uVar1;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) goto LAB_10005124;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) goto LAB_10005124;
    if (bVar3 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100050f0:
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
LAB_10005124:
  return (uint)bVar4 * -2 + 1;
}



/* ---- FUN_10005164 @ 10005164 size=280 ---- */

uint __cdecl FUN_10005164(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_10005270:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_10005270;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_1000d3d0 && (piVar4 != (int *)&DAT_1000d3f0)) ||
        (bVar5 = FUN_10007254(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10007210(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10007020(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_1000d268;
        }
        else {
          puVar6 = (undefined *)((&DAT_1000f400)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_10006f48(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10007020(uVar2,pcVar3,(DWORD)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}



/* ---- FUN_1000527c @ 1000527c size=1918 ---- */

/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_1000527c(int *param_1,byte *param_2,undefined4 *param_3)

{
  WCHAR WVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined1 *puVar6;
  WCHAR *pWVar7;
  int *piVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  WCHAR local_250 [255];
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  CHAR local_48 [4];
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  WCHAR *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  char local_1a;
  char local_19;
  int local_18;
  undefined1 *local_14;
  WCHAR *local_10;
  int local_c;
  uint local_8;
  
  local_40 = 0;
  local_14 = (undefined1 *)0x0;
  bVar10 = *param_2;
  local_18 = 0;
  local_34 = (WCHAR *)0x0;
  pbVar2 = param_2;
  if (bVar10 != 0) {
    while (param_2 = pbVar2 + 1, -1 < local_18) {
      if (((char)bVar10 < ' ') || ('x' < (char)bVar10)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (byte)"__GLOBAL_HEAP_SELECTED"[(char)bVar10 + 0x10] & 0xf;
      }
      local_40 = (int)(char)(&DAT_10009308)[uVar3 * 8 + local_40] >> 4;
      switch(local_40) {
      case 0:
switchD_100052f8_caseD_0:
        local_30 = 0;
        if ((PTR_DAT_1000d648[(uint)bVar10 * 2 + 1] & 0x80) != 0) {
          FUN_10005a1a((int)(char)bVar10,param_1,&local_18);
          bVar10 = *param_2;
          param_2 = pbVar2 + 2;
        }
        FUN_10005a1a((int)(char)bVar10,param_1,&local_18);
        break;
      case 1:
        local_c = -1;
        local_44 = 0;
        local_3c = 0;
        local_2c = 0;
        local_28 = 0;
        local_8 = 0;
        local_30 = 0;
        break;
      case 2:
        if (bVar10 == 0x20) {
          local_8 = local_8 | 2;
        }
        else if (bVar10 == 0x23) {
          local_8 = local_8 | 0x80;
        }
        else if (bVar10 == 0x2b) {
          local_8 = local_8 | 1;
        }
        else if (bVar10 == 0x2d) {
          local_8 = local_8 | 4;
        }
        else if (bVar10 == 0x30) {
          local_8 = local_8 | 8;
        }
        break;
      case 3:
        if (bVar10 == 0x2a) {
          local_2c = FUN_10005ab8((int *)&param_3);
          if (local_2c < 0) {
            local_8 = local_8 | 4;
            local_2c = -local_2c;
          }
        }
        else {
          local_2c = (char)bVar10 + -0x30 + local_2c * 10;
        }
        break;
      case 4:
        local_c = 0;
        break;
      case 5:
        if (bVar10 == 0x2a) {
          local_c = FUN_10005ab8((int *)&param_3);
          if (local_c < 0) {
            local_c = -1;
          }
        }
        else {
          local_c = (char)bVar10 + -0x30 + local_c * 10;
        }
        break;
      case 6:
        if (bVar10 == 0x49) {
          if ((*param_2 != 0x36) || (pbVar2[2] != 0x34)) {
            local_40 = 0;
            goto switchD_100052f8_caseD_0;
          }
          param_2 = pbVar2 + 3;
          local_8 = local_8 | 0x8000;
        }
        else if (bVar10 == 0x68) {
          local_8 = local_8 | 0x20;
        }
        else if (bVar10 == 0x6c) {
          local_8 = local_8 | 0x10;
        }
        else if (bVar10 == 0x77) {
          local_8 = local_8 | 0x800;
        }
        break;
      case 7:
        pWVar7 = local_10;
        if ((char)bVar10 < 'h') {
          if ('d' < (char)bVar10) {
LAB_1000551f:
            local_8 = local_8 | 0x40;
            pWVar7 = local_250;
            local_10 = pWVar7;
            if (local_c < 0) {
              local_c = 6;
            }
            else if (local_c == 0) {
              if (bVar10 == 0x67) {
                local_c = 1;
              }
            }
            else {
              if (0x200 < local_c) {
                local_c = 0x200;
              }
              if (0xa3 < local_c) {
                local_34 = _malloc(local_c + 0x15d);
                if (local_34 == (WCHAR *)0x0) {
                  local_c = 0xa3;
                }
                else {
                  pWVar7 = local_34;
                  local_10 = local_34;
                }
              }
            }
            local_50 = *param_3;
            local_4c = param_3[1];
            param_3 = param_3 + 2;
            (*(code *)PTR___fptrap_1000d630)(&local_50,pWVar7,(int)(char)bVar10,local_c,local_44);
            uVar3 = local_8 & 0x80;
            if ((uVar3 != 0) && (local_c == 0)) {
              (*(code *)PTR___fptrap_1000d63c)(pWVar7);
            }
            if ((bVar10 == 0x67) && (uVar3 == 0)) {
              (*(code *)PTR___fptrap_1000d634)(pWVar7);
            }
            if ((char)*pWVar7 == '-') {
              local_8 = local_8 | 0x100;
              pWVar7 = (WCHAR *)((int)pWVar7 + 1);
              local_10 = pWVar7;
            }
LAB_100056ad:
            puVar6 = (undefined1 *)_strlen((char *)pWVar7);
            goto LAB_100058cd;
          }
          if ((char)bVar10 < 'Y') {
            if (bVar10 == 0x58) {
LAB_1000572c:
              local_38 = 7;
LAB_10005733:
              local_14 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_38 + 'Q';
                local_28 = 2;
              }
              goto LAB_1000579c;
            }
            if (bVar10 == 0x43) {
              if ((local_8 & 0x830) == 0) {
                local_8 = local_8 | 0x800;
              }
              goto LAB_1000554d;
            }
            if ((bVar10 != 0x45) && (bVar10 != 0x47)) {
              if (bVar10 == 0x53) {
                if ((local_8 & 0x830) == 0) {
                  local_8 = local_8 | 0x800;
                }
                goto LAB_100054bd;
              }
              goto LAB_100058d0;
            }
            local_44 = 1;
            bVar10 = bVar10 + 0x20;
            goto LAB_1000551f;
          }
          if (bVar10 == 0x5a) {
            psVar5 = (short *)FUN_10005ab8((int *)&param_3);
            if ((psVar5 != (short *)0x0) &&
               (local_10 = *(WCHAR **)(psVar5 + 2), local_10 != (WCHAR *)0x0)) {
              if ((local_8 & 0x800) == 0) {
                local_30 = 0;
                puVar6 = (undefined1 *)(int)*psVar5;
                goto LAB_100058cd;
              }
              local_14 = (undefined1 *)((uint)(int)*psVar5 >> 1);
              local_30 = 1;
              pWVar7 = local_10;
              goto LAB_100058d0;
            }
            local_10 = (WCHAR *)PTR_DAT_1000d260;
            pWVar7 = (WCHAR *)PTR_DAT_1000d260;
            goto LAB_100056ad;
          }
          if (bVar10 == 99) {
LAB_1000554d:
            if ((local_8 & 0x810) == 0) {
              uVar4 = FUN_10005ab8((int *)&param_3);
              local_250[0]._0_1_ = (CHAR)uVar4;
              local_14 = (undefined1 *)0x1;
            }
            else {
              uVar4 = FUN_10005ad5((int *)&param_3);
              local_14 = (undefined1 *)FUN_1000745b((LPSTR)local_250,(WCHAR)uVar4);
              if ((int)local_14 < 0) {
                local_3c = 1;
              }
            }
            pWVar7 = local_250;
          }
          else if (bVar10 == 100) goto LAB_10005791;
LAB_100058d0:
          local_10 = pWVar7;
          uVar3 = local_8;
          if (local_3c == 0) {
            if ((local_8 & 0x40) != 0) {
              if ((local_8 & 0x100) == 0) {
                if ((local_8 & 1) == 0) {
                  if ((local_8 & 2) == 0) goto LAB_10005908;
                  local_1a = ' ';
                }
                else {
                  local_1a = '+';
                }
              }
              else {
                local_1a = '-';
              }
              local_28 = 1;
            }
LAB_10005908:
            iVar11 = (local_2c - local_28) - (int)local_14;
            if ((local_8 & 0xc) == 0) {
              FUN_10005a4f(0x20,iVar11,param_1,&local_18);
            }
            FUN_10005a80(&local_1a,local_28,param_1,&local_18);
            if (((uVar3 & 8) != 0) && ((uVar3 & 4) == 0)) {
              FUN_10005a4f(0x30,iVar11,param_1,&local_18);
            }
            if ((local_30 == 0) || ((int)local_14 < 1)) {
              FUN_10005a80((char *)local_10,(int)local_14,param_1,&local_18);
            }
            else {
              puVar6 = local_14;
              pWVar7 = local_10;
              do {
                puVar6 = puVar6 + 0xffffffff;
                WVar1 = *pWVar7;
                pWVar7 = pWVar7 + 1;
                iVar9 = FUN_1000745b(local_48,WVar1);
                if (iVar9 < 1) break;
                FUN_10005a80(local_48,iVar9,param_1,&local_18);
              } while (puVar6 != (undefined1 *)0x0);
            }
            if ((local_8 & 4) != 0) {
              FUN_10005a4f(0x20,iVar11,param_1,&local_18);
            }
          }
        }
        else {
          if (bVar10 == 0x69) {
LAB_10005791:
            local_8 = local_8 | 0x40;
LAB_10005795:
            local_14 = (undefined1 *)0xa;
LAB_1000579c:
            if ((local_8 & 0x8000) == 0) {
              if ((local_8 & 0x20) == 0) {
                if ((local_8 & 0x40) == 0) {
                  uVar3 = FUN_10005ab8((int *)&param_3);
                  local_24 = (ulonglong)uVar3;
                  goto LAB_100057ef;
                }
                uVar3 = FUN_10005ab8((int *)&param_3);
              }
              else if ((local_8 & 0x40) == 0) {
                uVar3 = FUN_10005ab8((int *)&param_3);
                uVar3 = uVar3 & 0xffff;
              }
              else {
                uVar4 = FUN_10005ab8((int *)&param_3);
                uVar3 = (uint)(short)uVar4;
              }
              local_24 = (ulonglong)(int)uVar3;
            }
            else {
              local_24 = FUN_10005ac5((int *)&param_3);
            }
LAB_100057ef:
            iVar11 = (int)(local_24 >> 0x20);
            if ((((local_8 & 0x40) != 0) && (!(iVar11 != 0 && -1 < (longlong)local_24))) &&
               (-1 >= (longlong)local_24)) {
              local_8 = local_8 | 0x100;
              local_24 = CONCAT44(-(iVar11 + (uint)((int)local_24 != 0)),-(int)local_24);
            }
            if ((local_8 & 0x8000) == 0) {
              local_24 = local_24 & 0xffffffff;
            }
            if (local_c < 0) {
              local_c = 1;
            }
            else {
              local_8 = local_8 & 0xfffffff7;
              if (0x200 < local_c) {
                local_c = 0x200;
              }
            }
            if ((uint)local_24 == 0 && local_24._4_4_ == 0) {
              local_28 = 0;
            }
            local_10 = (WCHAR *)&local_51;
            while( true ) {
              puVar6 = local_14;
              iVar11 = local_c + -1;
              if ((local_c < 1) && ((uint)local_24 == 0 && local_24._4_4_ == 0)) break;
              uVar3 = (int)local_14 >> 0x1f;
              local_c = iVar11;
              uVar12 = __aullrem((uint)local_24,local_24._4_4_,(uint)local_14,uVar3);
              iVar11 = (int)uVar12 + 0x30;
              local_24 = __aulldiv((uint)local_24,local_24._4_4_,(uint)puVar6,uVar3);
              if (0x39 < iVar11) {
                iVar11 = iVar11 + local_38;
              }
              pWVar7 = (WCHAR *)((int)local_10 + -1);
              *(char *)local_10 = (char)iVar11;
              local_10 = pWVar7;
            }
            local_14 = (undefined1 *)((int)local_250 + -(int)local_10 + 0x1ff);
            pWVar7 = (WCHAR *)((int)local_10 + 1);
            local_c = iVar11;
            if ((local_8 & 0x200) == 0) goto LAB_100058d0;
            if (*(char *)pWVar7 == '0') {
              if (local_14 != (undefined1 *)0x0) goto LAB_100058d0;
            }
            puVar6 = (undefined1 *)((int)local_250 + -(int)local_10 + 0x200);
            *(char *)local_10 = '0';
LAB_100058cd:
            local_14 = puVar6;
            pWVar7 = local_10;
            goto LAB_100058d0;
          }
          if (bVar10 != 0x6e) {
            if (bVar10 == 0x6f) {
              local_14 = (undefined1 *)0x8;
              if ((local_8 & 0x80) != 0) {
                local_8 = local_8 | 0x200;
              }
              goto LAB_1000579c;
            }
            if (bVar10 == 0x70) {
              local_c = 8;
              goto LAB_1000572c;
            }
            if (bVar10 != 0x73) {
              if (bVar10 != 0x75) {
                if (bVar10 != 0x78) goto LAB_100058d0;
                local_38 = 0x27;
                goto LAB_10005733;
              }
              goto LAB_10005795;
            }
LAB_100054bd:
            iVar11 = 0x7fffffff;
            if (local_c != -1) {
              iVar11 = local_c;
            }
            local_10 = (WCHAR *)FUN_10005ab8((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              if (local_10 == (WCHAR *)0x0) {
                local_10 = (WCHAR *)PTR_DAT_1000d260;
              }
              for (pWVar7 = local_10; (iVar11 != 0 && ((char)*pWVar7 != '\0'));
                  pWVar7 = (WCHAR *)((int)pWVar7 + 1)) {
                iVar11 = iVar11 + -1;
              }
              puVar6 = (undefined1 *)((int)pWVar7 - (int)local_10);
            }
            else {
              if (local_10 == (WCHAR *)0x0) {
                local_10 = (WCHAR *)PTR_DAT_1000d264;
              }
              local_30 = 1;
              for (pWVar7 = local_10; (iVar11 != 0 && (*pWVar7 != L'\0')); pWVar7 = pWVar7 + 1) {
                iVar11 = iVar11 + -1;
              }
              puVar6 = (undefined1 *)((int)pWVar7 - (int)local_10 >> 1);
            }
            goto LAB_100058cd;
          }
          piVar8 = (int *)FUN_10005ab8((int *)&param_3);
          if ((local_8 & 0x20) == 0) {
            *piVar8 = local_18;
          }
          else {
            *(undefined2 *)piVar8 = (undefined2)local_18;
          }
          local_3c = 1;
        }
        if (local_34 != (WCHAR *)0x0) {
          FUN_10002560((undefined *)local_34);
          local_34 = (WCHAR *)0x0;
        }
      }
      bVar10 = *param_2;
      if (bVar10 == 0) {
        return local_18;
      }
      pbVar2 = param_2;
    }
  }
  return local_18;
}



/* ---- FUN_10005a1a @ 10005a1a size=53 ---- */

void __cdecl FUN_10005a1a(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10005164(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



/* ---- FUN_10005a4f @ 10005a4f size=49 ---- */

void __cdecl FUN_10005a4f(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10005a1a(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ---- FUN_10005a80 @ 10005a80 size=56 ---- */

void __cdecl FUN_10005a80(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_10005a1a((int)cVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



/* ---- FUN_10005ab8 @ 10005ab8 size=13 ---- */

undefined4 __cdecl FUN_10005ab8(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



/* ---- FUN_10005ac5 @ 10005ac5 size=16 ---- */

undefined8 __cdecl FUN_10005ac5(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



/* ---- FUN_10005ad5 @ 10005ad5 size=14 ---- */

undefined4 __cdecl FUN_10005ad5(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



/* ---- FUN_10005ae3 @ 10005ae3 size=444 ---- */

void FUN_10005ae3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_1000f500 = 0x20;
  DAT_1000f400 = puVar2;
  for (; puVar2 < DAT_1000f400 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    if ((int)DAT_1000f500 < (int)UVar8) {
      puVar2 = &DAT_1000f404;
      do {
        puVar3 = _malloc(0x480);
        if (puVar3 == (undefined4 *)0x0) {
          UVar8 = DAT_1000f500;
          break;
        }
        DAT_1000f500 = DAT_1000f500 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
      } while ((int)DAT_1000f500 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar8) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000f400)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar8);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_1000f400 + iVar6 * 9;
    if (DAT_1000f400[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_10005c88;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10005c88:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000f500);
      return;
    }
  } while( true );
}



/* ---- FUN_10005c9f @ 10005c9f size=84 ---- */

void FUN_10005c9f(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000f400;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10002560((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000f500);
  return;
}



/* ---- FUN_10005cf3 @ 10005cf3 size=185 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005cf3(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000f52c == 0) {
    FUN_10007ad8();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000de2c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000de5c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000de2c;
  puVar6 = DAT_1000de2c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10007610((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10002560((undefined *)DAT_1000de2c);
  DAT_1000de2c = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000f528 = 1;
  return;
}



/* ---- FUN_10005dac @ 10005dac size=153 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005dac(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000f52c == 0) {
    FUN_10007ad8();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000def0,0x104);
  _DAT_1000de6c = &DAT_1000def0;
  pbVar2 = &DAT_1000def0;
  if (*DAT_1000f53c != 0) {
    pbVar2 = DAT_1000f53c;
  }
  FUN_10005e45(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10005e45(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000de54 = puVar1;
  _DAT_1000de50 = local_8 + -1;
  return;
}



/* ---- FUN_10005e45 @ 10005e45 size=436 ---- */

void __cdecl FUN_10005e45(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_1000e2c0 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_1000e2c0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10005ef0;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10005ef0:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar6 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_3;
      puVar6 = puVar6 + 1;
      param_2 = puVar6;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar5 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar5 = uVar5 + 1;
      }
      if (*pbVar4 == 0x22) {
        if ((uVar5 & 1) == 0) {
          if ((!bVar2) || (pbVar4[1] != 0x22)) {
            bVar3 = false;
          }
          else {
            pbVar4 = pbVar4 + 1;
          }
          bVar2 = !bVar2;
          puVar6 = param_2;
        }
        uVar5 = uVar5 >> 1;
      }
      if (uVar5 != 0) {
        do {
          if (param_3 != (byte *)0x0) {
            *param_3 = 0x5c;
            param_3 = param_3 + 1;
          }
          *param_5 = *param_5 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_1000e2c0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000e2c0 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ---- FUN_10005ff9 @ 10005ff9 size=306 ---- */

LPSTR FUN_10005ff9(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar8;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_1000dff4 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000dff4 = 1;
      goto LAB_10006050;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000dff4 = 2;
  }
  else {
    if (DAT_1000dff4 == 1) {
LAB_10006050:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
        local_8 = pCVar6;
        if (iVar5 == 0) {
          FUN_10002560(pCVar6);
          local_8 = (LPSTR)0x0;
        }
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    if (DAT_1000dff4 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_10006320((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* ---- FUN_1000612b @ 1000612b size=57 ---- */

void FUN_1000612b(void)

{
  if ((DAT_1000de34 == 1) || ((DAT_1000de34 == 0 && (DAT_1000de38 == 1)))) {
    FUN_10006164(0xfc);
    if (DAT_1000dff8 != (code *)0x0) {
      (*DAT_1000dff8)();
    }
    FUN_10006164(0xff);
  }
  return;
}



/* ---- FUN_10006164 @ 10006164 size=339 ---- */

void __cdecl FUN_10006164(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_1000d290;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while (pDVar2 < &DAT_1000d320);
  if (param_1 == (&DAT_1000d290)[iVar5 * 2]) {
    if ((DAT_1000de34 == 1) || ((DAT_1000de34 == 0 && (DAT_1000de38 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000d294);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10007610(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10007610(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10007620(local_a4,_Dest);
      FUN_10007620(local_a4,(uint *)&DAT_10009630);
      FUN_10007620(local_a4,*(uint **)(iVar5 * 8 + 0x1000d294));
      auStackY_1e3._3_4_ = 0x10006288;
      FUN_10007af4(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ---- FUN_100062b7 @ 100062b7 size=70 ---- */

int FUN_100062b7(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10003988();
    return iVar3;
  }
  if ((DAT_1000dffc == (FARPROC)0x0) ||
     (bVar2 = FUN_1000668d(DAT_1000dffc), CONCAT31(extraout_var,bVar2) == 0)) {
    return 0;
  }
  iVar3 = (*DAT_1000dffc)(param_1);
  return iVar3;
}



/* ---- FUN_10006320 @ 10006320 size=664 ---- */

undefined4 * __cdecl FUN_10006320(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_100064d7_caseD_2;
        case 3:
          goto switchD_100064d7_caseD_3;
        }
        goto switchD_100064d7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100064d7_caseD_0;
      case 1:
        goto switchD_100064d7_caseD_1;
      case 2:
        goto switchD_100064d7_caseD_2;
      case 3:
        goto switchD_100064d7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
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
              return param_1;
            case 2:
              goto switchD_100064d7_caseD_2;
            case 3:
              goto switchD_100064d7_caseD_3;
            }
            goto switchD_100064d7_caseD_1;
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
              return param_1;
            case 2:
              goto switchD_100064d7_caseD_2;
            case 3:
              goto switchD_100064d7_caseD_3;
            }
            goto switchD_100064d7_caseD_1;
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
              return param_1;
            case 2:
              goto switchD_100064d7_caseD_2;
            case 3:
              goto switchD_100064d7_caseD_3;
            }
            goto switchD_100064d7_caseD_1;
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
switchD_100064d7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100064d7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100064d7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100064d7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10006355_caseD_2;
      case 3:
        goto switchD_10006355_caseD_3;
      }
      goto switchD_10006355_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006355_caseD_0;
    case 1:
      goto switchD_10006355_caseD_1;
    case 2:
      goto switchD_10006355_caseD_2;
    case 3:
      goto switchD_10006355_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006355_caseD_2;
          case 3:
            goto switchD_10006355_caseD_3;
          }
          goto switchD_10006355_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006355_caseD_2;
          case 3:
            goto switchD_10006355_caseD_3;
          }
          goto switchD_10006355_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006355_caseD_2;
          case 3:
            goto switchD_10006355_caseD_3;
          }
          goto switchD_10006355_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10006355_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006355_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006355_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006355_caseD_0:
  return param_1;
}



/* ---- FUN_10006655 @ 10006655 size=28 ---- */

bool __cdecl FUN_10006655(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



/* ---- FUN_10006671 @ 10006671 size=28 ---- */

bool __cdecl FUN_10006671(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



/* ---- FUN_1000668d @ 1000668d size=24 ---- */

bool __cdecl FUN_1000668d(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



/* ---- FUN_100066b0 @ 100066b0 size=664 ---- */

undefined4 * __cdecl FUN_100066b0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10006867_caseD_2;
        case 3:
          goto switchD_10006867_caseD_3;
        }
        goto switchD_10006867_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006867_caseD_0;
      case 1:
        goto switchD_10006867_caseD_1;
      case 2:
        goto switchD_10006867_caseD_2;
      case 3:
        goto switchD_10006867_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
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
              return param_1;
            case 2:
              goto switchD_10006867_caseD_2;
            case 3:
              goto switchD_10006867_caseD_3;
            }
            goto switchD_10006867_caseD_1;
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
              return param_1;
            case 2:
              goto switchD_10006867_caseD_2;
            case 3:
              goto switchD_10006867_caseD_3;
            }
            goto switchD_10006867_caseD_1;
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
              return param_1;
            case 2:
              goto switchD_10006867_caseD_2;
            case 3:
              goto switchD_10006867_caseD_3;
            }
            goto switchD_10006867_caseD_1;
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
switchD_10006867_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006867_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006867_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006867_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_100066e5_caseD_2;
      case 3:
        goto switchD_100066e5_caseD_3;
      }
      goto switchD_100066e5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100066e5_caseD_0;
    case 1:
      goto switchD_100066e5_caseD_1;
    case 2:
      goto switchD_100066e5_caseD_2;
    case 3:
      goto switchD_100066e5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100066e5_caseD_2;
          case 3:
            goto switchD_100066e5_caseD_3;
          }
          goto switchD_100066e5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100066e5_caseD_2;
          case 3:
            goto switchD_100066e5_caseD_3;
          }
          goto switchD_100066e5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100066e5_caseD_2;
          case 3:
            goto switchD_100066e5_caseD_3;
          }
          goto switchD_100066e5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100066e5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100066e5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100066e5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100066e5_caseD_0:
  return param_1;
}



/* ---- FUN_100069e5 @ 100069e5 size=289 ---- */

int * __cdecl FUN_100069e5(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009670;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_1000f524 == 3) {
        if (puVar2 <= DAT_1000f51c) {
          FUN_10004f62(9);
          local_8 = 0;
          local_24 = FUN_10004055(puVar2);
          local_8 = 0xffffffff;
          FUN_10006a7e();
          if (local_24 == (int *)0x0) goto LAB_10006ad2;
          _Size = puVar2;
LAB_10006ac1:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10006acd:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000f524 != 2) || (DAT_1000d194 < puVar3)) goto LAB_10006acd;
        FUN_10004f62(9);
        local_8 = 1;
        local_24 = FUN_10004af8((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10006b07();
        if (local_24 != (int *)0x0) {
          _Size = puVar3;
          goto LAB_10006ac1;
        }
      }
LAB_10006ad2:
      local_24 = HeapAlloc(DAT_1000f520,8,(SIZE_T)puVar3);
    }
    if ((local_24 != (int *)0x0) || (DAT_1000dee8 == 0)) {
      ExceptionList = local_14;
      return local_24;
    }
    iVar1 = FUN_100050b8(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



/* ---- FUN_10006a7e @ 10006a7e size=9 ---- */

void FUN_10006a7e(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10006b07 @ 10006b07 size=9 ---- */

void FUN_10006b07(void)

{
  FUN_10004fc3(9);
  return;
}



/* ---- FUN_10006b22 @ 10006b22 size=23 ---- */

void FUN_10006b22(void)

{
  FUN_10006164(10);
  FUN_10007c7e((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



/* ---- FUN_10006b39 @ 10006b39 size=23 ---- */

void __thiscall FUN_10006b39(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10006b50(this,param_1,param_2,param_3,0);
  return;
}



/* ---- FUN_10006b50 @ 10006b50 size=517 ---- */

void * __thiscall FUN_10006b50(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  DWORD *pDVar6;
  void *this_00;
  byte bVar7;
  undefined *puVar8;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_1000dac8 < 2) {
      uVar3 = (byte)PTR_DAT_1000d648[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000d648;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10007ffd(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10006bab:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10006bab;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_10006c15;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10006c15;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10006c15:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000dac8 < 2) {
      uVar5 = (byte)PTR_DAT_1000d648[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10007ffd(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000dac8 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000d648 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10007ffd(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10006cc1:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_10007eb0();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) != 0) {
          local_c = (void *)-(int)local_c;
        }
        return local_c;
      }
      uVar3 = FUN_10007ec2((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10006cc1;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}



/* ---- _strchr @ 10006d70 size=193 ---- */

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

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



/* ---- _strstr @ 10006e30 size=128 ---- */

/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_10006ea3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10006ea3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ---- _strncmp @ 10006eb0 size=56 ---- */

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

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



/* ---- _memset @ 10006ef0 size=88 ---- */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

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



/* ---- FUN_10006f48 @ 10006f48 size=101 ---- */

DWORD __cdecl FUN_10006f48(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000f500) &&
     ((*(byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10008133(param_1);
    DVar1 = FUN_10006fad(param_1,param_2,param_3);
    FUN_10008192(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10007eb0();
  *pDVar2 = 9;
  pDVar2 = FUN_10007eb9();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ---- FUN_10006fad @ 10006fad size=115 ---- */

DWORD __cdecl FUN_10006fad(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100080f1(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10007eb0();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10007e3d(uVar4);
  }
  return 0xffffffff;
}



/* ---- FUN_10007020 @ 10007020 size=101 ---- */

int __cdecl FUN_10007020(uint param_1,char *param_2,DWORD param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000f500) &&
     ((*(byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10008133(param_1);
    iVar1 = FUN_10007085(param_1,param_2,param_3);
    FUN_10008192(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10007eb0();
  *pDVar2 = 9;
  pDVar2 = FUN_10007eb9();
  *pDVar2 = 0;
  return -1;
}



/* ---- FUN_10007085 @ 10007085 size=395 ---- */

int __cdecl FUN_10007085(DWORD param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_1000709e:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1000f400 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10006fad(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        param_1 = 0;
        local_c = local_10;
      }
LAB_1000716d:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_100071df;
      if (param_1 == 5) {
        pDVar7 = FUN_10007eb0();
        *pDVar7 = 9;
        pDVar7 = FUN_10007eb9();
        *pDVar7 = 5;
      }
      else {
        FUN_10007e3d(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_1000716d;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000716d;
        } while( true );
      }
LAB_100071df:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1000709e;
      pDVar7 = FUN_10007eb0();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10007eb9();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



/* ---- FUN_10007210 @ 10007210 size=68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10007210(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_1000e000 = _DAT_1000e000 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}



/* ---- FUN_10007254 @ 10007254 size=41 ---- */

byte __cdecl FUN_10007254(uint param_1)

{
  if (param_1 < DAT_1000f500) {
    return *(byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
  }
  return 0;
}



/* ---- FUN_10007339 @ 10007339 size=47 ---- */

void __cdecl FUN_10007339(uint param_1)

{
  if ((param_1 < 0x1000d3b0) || (0x1000d610 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  FUN_10004f62(((int)(param_1 + 0xefff2c50) >> 5) + 0x1c);
  return;
}



/* ---- FUN_10007368 @ 10007368 size=35 ---- */

void __cdecl FUN_10007368(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10004f62(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ---- FUN_1000738b @ 1000738b size=47 ---- */

void __cdecl FUN_1000738b(uint param_1)

{
  if ((param_1 < 0x1000d3b0) || (0x1000d610 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  FUN_10004fc3(((int)(param_1 + 0xefff2c50) >> 5) + 0x1c);
  return;
}



/* ---- FUN_100073ba @ 100073ba size=35 ---- */

void __cdecl FUN_100073ba(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10004fc3(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ---- _strlen @ 100073e0 size=123 ---- */

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10007400;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10007433:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10007400:
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
  goto LAB_10007433;
}



/* ---- FUN_1000745b @ 1000745b size=89 ---- */

int __cdecl FUN_1000745b(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1000e19c);
  bVar2 = DAT_1000e198 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1000e19c);
    FUN_10004f62(0x13);
  }
  iVar1 = FUN_100074b4(param_1,param_2);
  if (bVar2) {
    FUN_10004fc3(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1000e19c);
  }
  return iVar1;
}



/* ---- FUN_100074b4 @ 100074b4 size=105 ---- */

int __cdecl FUN_100074b4(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_1000e03c == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_1000e04c,0x220,&param_2,1,lpMultiByteStr,DAT_1000dac8,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_10007eb0();
  *pDVar2 = 0x2a;
  return -1;
}



/* ---- __aulldiv @ 10007520 size=104 ---- */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

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



/* ---- __aullrem @ 10007590 size=117 ---- */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if (param_4 == 0) {
    iVar7 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar8 = 0;
  }
  else {
    uVar5 = param_1;
    uVar6 = param_4;
    uVar9 = param_2;
    uVar4 = param_3;
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar9 & 1;
      uVar9 = uVar9 >> 1;
      uVar5 = (uint)(CONCAT14(uVar3 != 0,uVar5) >> 1);
    } while (uVar6 != 0);
    uVar1 = CONCAT44(uVar9,uVar5) / (ulonglong)uVar4;
    uVar4 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = (uint)lVar2;
    uVar9 = uVar6 + uVar4;
    if (((CARRY4(uVar6,uVar4)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar5)))) {
      bVar10 = uVar5 < param_3;
      uVar5 = uVar5 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar10;
    }
    iVar7 = -(uVar5 - param_1);
    iVar8 = -(uint)(uVar5 - param_1 != 0) - ((uVar9 - param_2) - (uint)(uVar5 < param_1));
  }
  return CONCAT44(iVar8,iVar7);
}



/* ---- FUN_10007610 @ 10007610 size=7 ---- */

uint * __cdecl FUN_10007610(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100076f8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100076f8:
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



/* ---- FUN_10007620 @ 10007620 size=224 ---- */

uint * __cdecl FUN_10007620(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000763c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000766f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000768b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000763c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000768b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000768b;
    }
  }
LAB_1000766f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000768b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100076f8:
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
    if (bVar1 == 0) goto LAB_100076f8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ---- FUN_10007700 @ 10007700 size=429 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007700(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10004f62(0x19);
  CodePage = FUN_100078ad(param_1);
  if (CodePage != DAT_1000e1a0) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000d868;
LAB_1000773d:
      if (*pUVar5 != CodePage) goto code_r0x10007741;
      local_8 = 0;
      puVar15 = &DAT_1000e2c0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000d878);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000d860)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000e2c0 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_1000e1bc = 1;
      DAT_1000e1a0 = CodePage;
      DAT_1000e3c4 = FUN_100078f7(CodePage);
      DAT_1000e1b0 = *(undefined4 *)(iVar12 + 0x1000d86c);
      DAT_1000e1b4 = *(undefined4 *)(iVar12 + 0x1000d870);
      DAT_1000e1b8 = *(undefined4 *)(iVar12 + 0x1000d874);
      goto LAB_10007891;
    }
    goto LAB_1000788c;
  }
  goto LAB_10007727;
code_r0x10007741:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x1000d957 < pUVar5) goto code_r0x1000774c;
  goto LAB_1000773d;
code_r0x1000774c:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000e3c4 = 0;
    puVar15 = &DAT_1000e2c0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000e1bc = 0;
      DAT_1000e1a0 = CodePage;
    }
    else {
      DAT_1000e1a0 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000e2c0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000e2c0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000e3c4 = FUN_100078f7(CodePage);
      _DAT_1000e1bc = 1;
    }
    DAT_1000e1b0 = 0;
    DAT_1000e1b4 = 0;
    DAT_1000e1b8 = 0;
  }
  else {
    if (DAT_1000e004 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000789e;
    }
LAB_1000788c:
    FUN_1000792a();
  }
LAB_10007891:
  FUN_10007953();
LAB_10007727:
  uVar14 = 0;
LAB_1000789e:
  FUN_10004fc3(0x19);
  return uVar14;
}



/* ---- FUN_100078ad @ 100078ad size=74 ---- */

int __cdecl FUN_100078ad(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000e004 = 1;
                    /* WARNING: Could not recover jumptable at 0x100078c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000e004 = 1;
                    /* WARNING: Could not recover jumptable at 0x100078dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000e04c;
  }
  DAT_1000e004 = (uint)bVar2;
  return param_1;
}



/* ---- FUN_100078f7 @ 100078f7 size=51 ---- */

undefined4 __cdecl FUN_100078f7(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 == 0x3b6) {
    return 0x404;
  }
  return 0;
}



/* ---- FUN_1000792a @ 1000792a size=41 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000792a(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000e2c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000e1a0 = 0;
  _DAT_1000e1bc = 0;
  DAT_1000e3c4 = 0;
  DAT_1000e1b0 = 0;
  DAT_1000e1b4 = 0;
  DAT_1000e1b8 = 0;
  return;
}



/* ---- FUN_10007953 @ 10007953 size=389 ---- */

void FUN_10007953(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_1000e1a0,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_100085c4(1,local_118,0x100,local_518,DAT_1000e1a0,DAT_1000e3c4,0);
    FUN_10008375(DAT_1000e3c4,0x100,local_118,0x100,local_218,0x100,DAT_1000e1a0,0);
    FUN_10008375(DAT_1000e3c4,0x200,local_118,0x100,local_318,0x100,DAT_1000e1a0,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000e2c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10007a5f;
        }
        (&DAT_1000e1c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000e2c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10007a5f:
        (&DAT_1000e1c0)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_1000e2c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10007aa9;
        }
        (&DAT_1000e1c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000e2c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10007aa9:
        (&DAT_1000e1c0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ---- FUN_10007ad8 @ 10007ad8 size=28 ---- */

void FUN_10007ad8(void)

{
  if (DAT_1000f52c == 0) {
    FUN_10007700(-3);
    DAT_1000f52c = 1;
  }
  return;
}



/* ---- FUN_10007af4 @ 10007af4 size=137 ---- */

int __cdecl FUN_10007af4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000e008 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000e008 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000e008 != (FARPROC)0x0) {
        DAT_1000e00c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000e010 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10007b43;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10007b43:
    if (DAT_1000e00c != (FARPROC)0x0) {
      iVar1 = (*DAT_1000e00c)();
      if ((iVar1 != 0) && (DAT_1000e010 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000e010)(iVar1);
      }
    }
    iVar1 = (*DAT_1000e008)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* ---- _strncpy @ 10007b80 size=254 ---- */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

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
        goto joined_r0x10007bbe;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10007bfb;
        goto LAB_10007c69;
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
joined_r0x10007c65:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10007c69:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10007bfb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10007c65;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10007c65;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10007c65;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10007bbe:
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
LAB_10007bfb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ---- FUN_10007c7e @ 10007c7e size=386 ---- */

undefined4 __cdecl FUN_10007c7e(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_1000e014;
    pcVar6 = DAT_1000e014;
LAB_10007d04:
    bVar1 = true;
    FUN_10004f62(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_1000e020;
        pcVar6 = DAT_1000e020;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_1000e018;
        pcVar6 = DAT_1000e018;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_1000e01c;
        pcVar6 = DAT_1000e01c;
      }
      goto LAB_10007d04;
    }
    pDVar2 = FUN_10003881();
    uVar3 = FUN_10007e00((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (bVar1) {
      FUN_10004fc3(1);
      return 0;
    }
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10004fc3(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_10007d78;
    }
  }
  else {
LAB_10007d78:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_1000d398 < DAT_1000d39c + DAT_1000d398) {
        iVar4 = DAT_1000d398 * 0xc;
        iVar5 = DAT_1000d398;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_1000d39c + DAT_1000d398);
      }
      goto LAB_10007db6;
    }
  }
  *puVar7 = 0;
LAB_10007db6:
  if (bVar1) {
    FUN_10004fc3(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}



/* ---- FUN_10007e00 @ 10007e00 size=61 ---- */

uint __cdecl FUN_10007e00(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar3;
  uint uVar2;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_1000d3a4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_1000d3a4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- FUN_10007e3d @ 10007e3d size=115 ---- */

void __cdecl FUN_10007e3d(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10007eb9();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000d960;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10007eb0();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000d964);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_1000dac8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10007eb0();
    *pDVar1 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (0xca < param_1)) {
    pDVar1 = FUN_10007eb0();
    *pDVar1 = 0x16;
    return;
  }
  pDVar1 = FUN_10007eb0();
  *pDVar1 = 8;
  return;
}



/* ---- FUN_10007eb0 @ 10007eb0 size=9 ---- */

DWORD * FUN_10007eb0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10003881();
  return pDVar1 + 2;
}



/* ---- FUN_10007eb9 @ 10007eb9 size=9 ---- */

DWORD * FUN_10007eb9(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10003881();
  return pDVar1 + 3;
}



/* ---- FUN_10007ec2 @ 10007ec2 size=111 ---- */

uint __cdecl FUN_10007ec2(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000e03c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000e19c);
    bVar1 = DAT_1000e198 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000e19c);
      this = (void *)0x13;
      FUN_10004f62(0x13);
    }
    param_1 = FUN_10007f31(this,param_1);
    if (bVar1) {
      FUN_10004fc3(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000e19c);
    }
  }
  return param_1;
}



/* ---- FUN_10007f31 @ 10007f31 size=204 ---- */

uint __thiscall FUN_10007f31(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000e03c == 0) {
    if ((int)param_1 < 0x61) {
      return param_1;
    }
    if ((int)param_1 < 0x7b) {
      return param_1 - 0x20;
    }
    return param_1;
  }
  local_8 = this;
  if ((int)param_1 < 0x100) {
    if (DAT_1000dac8 < 2) {
      uVar2 = (byte)PTR_DAT_1000d648[param_1 * 2] & 2;
    }
    else {
      uVar2 = FUN_10007ffd(this,param_1,2);
    }
    if (uVar2 == 0) {
      return uVar1;
    }
  }
  if ((PTR_DAT_1000d648[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    iVar3 = 1;
  }
  else {
    uVar2 = param_1 >> 0x10;
    param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
    param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
    iVar3 = 2;
  }
  iVar3 = FUN_10008375(DAT_1000e03c,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
  if (iVar3 == 0) {
    return uVar1;
  }
  if (iVar3 == 1) {
    return (uint)local_8 & 0xff;
  }
  return (uint)local_8 & 0xffff;
}



/* ---- FUN_10007ffd @ 10007ffd size=117 ---- */

uint __thiscall FUN_10007ffd(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000d648 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000d648[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_100085c4(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



/* ---- FUN_10008072 @ 10008072 size=127 ---- */

undefined4 __cdecl FUN_10008072(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000f500) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1000f400)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1000de38 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100080ce;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100080ce:
      *(undefined4 *)((&DAT_1000f400)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10007eb0();
  *pDVar2 = 9;
  pDVar2 = FUN_10007eb9();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ---- FUN_100080f1 @ 100080f1 size=66 ---- */

undefined4 __cdecl FUN_100080f1(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1000f500) &&
     ((*(byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1000f400)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10007eb0();
  *pDVar1 = 9;
  pDVar1 = FUN_10007eb9();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ---- FUN_10008133 @ 10008133 size=95 ---- */

void __cdecl FUN_10008133(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1000f400)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10004f62(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10004fc3(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1000f400)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ---- FUN_10008192 @ 10008192 size=34 ---- */

void __cdecl FUN_10008192(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1000f400)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ---- FUN_10008235 @ 10008235 size=46 ---- */

int __cdecl FUN_10008235(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10008263(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) == 0) {
    return 0;
  }
  iVar1 = FUN_1000878a(param_1[4]);
  return -(uint)(iVar1 != 0);
}



/* ---- FUN_10008263 @ 10008263 size=92 ---- */

undefined4 __cdecl FUN_10008263(int *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    DVar3 = *param_1 - param_1[2];
    if (0 < (int)DVar3) {
      DVar1 = FUN_10007020(param_1[4],(char *)param_1[2],DVar3);
      if (DVar1 == DVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}



/* ---- FUN_100082c8 @ 100082c8 size=164 ---- */

int __cdecl FUN_100082c8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10004f62(2);
  iVar4 = 0;
  if (0 < DAT_1000f3e0) {
    do {
      iVar2 = *(int *)(DAT_1000e3c8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10007368(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1000e3c8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10008235(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10008235(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_100073ba(iVar4,*(int *)(DAT_1000e3c8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1000f3e0);
  }
  FUN_10004fc3(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



/* ---- __fptrap @ 1000836c size=9 ---- */

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



/* ---- FUN_10008375 @ 10008375 size=511 ---- */

int __cdecl
FUN_10008375(LCID param_1,DWORD param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined1 unaff_DI;
  undefined1 uStack00000000;
  WCHAR aWStack_2e [13];
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100096d0;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000e054 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000e054 = 2;
    }
    else {
      DAT_1000e054 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10008599(param_3,param_4);
  }
  if (DAT_1000e054 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000e054 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000e04c;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    local_8 = 0;
    FUN_10002790(unaff_DI);
    local_8 = 0xffffffff;
    if (&uStack00000000 == (undefined1 *)0x3c) {
      ExceptionList = local_14;
      return 0;
    }
    iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,aWStack_2e + -7,iVar1);
    if (iVar2 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    iVar2 = LCMapStringW(param_1,param_2,aWStack_2e + -7,iVar1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if ((param_2 & 0x400) == 0) {
      local_8 = 1;
      FUN_10002790(unaff_DI);
      local_8 = 0xffffffff;
      if (&uStack00000000 == (undefined1 *)0x3c) {
        ExceptionList = local_14;
        return 0;
      }
      iVar1 = LCMapStringW(param_1,param_2,aWStack_2e + -7,iVar1,aWStack_2e + -7,iVar2);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if (param_6 == 0) {
        param_6 = 0;
        param_5 = (LPWSTR)0x0;
      }
      iVar2 = WideCharToMultiByte(param_7,0x220,aWStack_2e + -7,iVar2,(LPSTR)param_5,param_6,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      iVar1 = iVar2;
    }
    else {
      if (param_6 == 0) {
        ExceptionList = local_14;
        return iVar2;
      }
      if (param_6 < iVar2) {
        ExceptionList = local_14;
        return 0;
      }
      iVar1 = LCMapStringW(param_1,param_2,aWStack_2e + -7,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
      ExceptionList = local_14;
      return iVar2;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- FUN_10008599 @ 10008599 size=43 ---- */

int __cdecl FUN_10008599(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 == '\0') {
    return (int)pcVar1 - (int)param_1;
  }
  return param_2;
}



/* ---- FUN_100085c4 @ 100085c4 size=318 ---- */

BOOL __cdecl
FUN_100085c4(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  WCHAR *pWVar1;
  BOOL BVar2;
  int iVar3;
  undefined1 unaff_DI;
  undefined1 uStack00000000;
  WCHAR aWStack_2a [5];
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100096e8;
  puStack_10 = &LAB_10004fe0;
  local_14 = ExceptionList;
  local_1c = (undefined1 *)(aWStack_2a + -7);
  ExceptionList = &local_14;
  pWVar1 = aWStack_2a + -7;
  if (DAT_1000e058 == 0) {
    iVar3 = 1;
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
    }
    DAT_1000e058 = iVar3;
    pWVar1 = (WCHAR *)local_1c;
  }
  local_1c = (undefined1 *)pWVar1;
  if (DAT_1000e058 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_1000e03c;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    ExceptionList = local_14;
    return BVar2;
  }
  if (DAT_1000e058 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1000e04c;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 != 0) {
      local_8 = 0;
      FUN_10002790(unaff_DI);
      local_1c = (undefined1 *)(aWStack_2a + -7);
      _memset(aWStack_2a + -7,0,iVar3 * 2);
      local_8 = 0xffffffff;
      if ((&uStack00000000 != (undefined1 *)0x38) &&
         (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,aWStack_2a + -7,iVar3), iVar3 != 0))
      {
        BVar2 = GetStringTypeW(param_1,aWStack_2a + -7,iVar3,param_4);
        ExceptionList = local_14;
        return BVar2;
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- FUN_1000870d @ 1000870d size=49 ---- */

undefined4 __cdecl FUN_1000870d(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10007339((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_1000738b((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



/* ---- __fclose_lk @ 1000873e size=76 ---- */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10008263((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000889a(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10002560(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



/* ---- FUN_1000878a @ 1000878a size=147 ---- */

undefined4 __cdecl FUN_1000878a(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1000f500 <= param_1) {
LAB_1000880b:
    pDVar3 = FUN_10007eb0();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000880b;
  FUN_10008133(param_1);
  if ((*(byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100080f1(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10008800;
    pDVar3 = FUN_10007eb9();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10007eb0();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10008800:
  FUN_10008192(param_1);
  return uVar5;
}



/* ---- FUN_10008820 @ 10008820 size=62 ---- */

int __cdecl FUN_10008820(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
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
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}



/* ---- FUN_10008860 @ 10008860 size=58 ---- */

byte * __cdecl FUN_10008860(byte *param_1,byte *param_2)

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
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}



/* ---- FUN_1000889a @ 1000889a size=93 ---- */

undefined4 __cdecl FUN_1000889a(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000f500) &&
     ((*(byte *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10008133(param_1);
    uVar1 = FUN_100088f7(param_1);
    FUN_10008192(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10007eb0();
  *pDVar2 = 9;
  pDVar2 = FUN_10007eb9();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ---- FUN_100088f7 @ 100088f7 size=131 ---- */

undefined4 __cdecl FUN_100088f7(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100080f1(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100080f1(2);
      iVar2 = FUN_100080f1(1);
      if (iVar2 == iVar1) goto LAB_10008945;
    }
    hObject = (HANDLE)FUN_100080f1(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10008947;
    }
  }
LAB_10008945:
  DVar4 = 0;
LAB_10008947:
  FUN_10008072(param_1);
  *(undefined1 *)((&DAT_1000f400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10007e3d(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ---- __freebuf @ 1000897a size=43 ---- */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10002560(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ---- FUN_100089b0 @ 100089b0 size=208 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_100089b0(void *this,byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar8;
  uint uVar9;
  
  iVar2 = _DAT_1000e19c;
  if (DAT_1000e03c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_100089fe;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_100089fe:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000e19c = _DAT_1000e19c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000e198;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000e19c = iVar2;
      FUN_10004f62(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10008a5f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10008b81(this,uVar8);
      uVar7 = FUN_10008b81(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10008a5f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000e19c = _DAT_1000e19c + -1;
      UNLOCK();
    }
    else {
      FUN_10004fc3(0x13);
    }
  }
  return uVar7;
}



/* ---- FUN_10008a80 @ 10008a80 size=257 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008a80(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_1000e19c;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000e03c == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_10008adf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10008adf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000e19c = _DAT_1000e19c + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000e198;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000e19c = iVar2;
        FUN_10004f62(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_10008b81(param_3,uVar7);
        uVar5 = FUN_10008b81(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10008b55;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10008b55:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000e19c = _DAT_1000e19c + -1;
        UNLOCK();
      }
      else {
        FUN_10004fc3(0x13);
      }
    }
  }
  return uVar6;
}



/* ---- FUN_10008b81 @ 10008b81 size=203 ---- */

uint __thiscall FUN_10008b81(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000e03c == 0) {
    if ((int)param_1 < 0x41) {
      return param_1;
    }
    if ((int)param_1 < 0x5b) {
      return param_1 + 0x20;
    }
    return param_1;
  }
  iVar3 = 1;
  local_8 = this;
  if ((int)param_1 < 0x100) {
    if (DAT_1000dac8 < 2) {
      uVar2 = (byte)PTR_DAT_1000d648[param_1 * 2] & 1;
    }
    else {
      uVar2 = FUN_10007ffd(this,param_1,1);
    }
    if (uVar2 == 0) {
      return uVar1;
    }
  }
  if ((PTR_DAT_1000d648[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
  }
  else {
    uVar2 = param_1 >> 0x10;
    param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
    param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
    iVar3 = 2;
  }
  iVar3 = FUN_10008375(DAT_1000e03c,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
  if (iVar3 == 0) {
    return uVar1;
  }
  if (iVar3 == 1) {
    return (uint)local_8 & 0xff;
  }
  return (uint)local_8 & 0xffff;
}



/* ---- RtlUnwind @ 10008c84 size=6 ---- */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10008c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ---- Unwind@10008c90 @ 10008c90 size=8 ---- */

void Unwind_10008c90(void)

{
  int unaff_EBP;
  
  FUN_10001930(unaff_EBP + -0x3c);
  return;
}



/* ---- Unwind@10008c98 @ 10008c98 size=8 ---- */

void Unwind_10008c98(void)

{
  int unaff_EBP;
  
  FUN_10001930(unaff_EBP + -0x3c);
  return;
}



/* ---- Unwind@10008ca0 @ 10008ca0 size=8 ---- */

void Unwind_10008ca0(void)

{
  int unaff_EBP;
  
  FUN_10001930(unaff_EBP + -0x2c);
  return;
}



/* ---- Unwind@10008ca8 @ 10008ca8 size=8 ---- */

void Unwind_10008ca8(void)

{
  int unaff_EBP;
  
  FUN_10001930(unaff_EBP + -0x4c);
  return;
}



/* ---- Unwind@10008cc0 @ 10008cc0 size=11 ---- */

void Unwind_10008cc0(void)

{
  int unaff_EBP;
  
  FUN_10002171(*(undefined **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10008ccb @ 10008ccb size=8 ---- */

void Unwind_10008ccb(void)

{
  int unaff_EBP;
  
  FUN_100018e0((undefined4 *)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@10008ce0 @ 10008ce0 size=8 ---- */

void Unwind_10008ce0(void)

{
  int unaff_EBP;
  
  FUN_100017d0((int *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10008ce8 @ 10008ce8 size=8 ---- */

void Unwind_10008ce8(void)

{
  int unaff_EBP;
  
  FUN_100017d0((int *)(unaff_EBP + -0x14));
  return;
}


// total=226 ok=226 failed=0
