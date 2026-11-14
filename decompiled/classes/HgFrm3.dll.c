// Module: HgFrm3.dll
// ImageBase: 60300000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- strcat_s @ 60301000 size=6 ---- */

errno_t __cdecl strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60301000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strcat_s(_Dst,_SizeInBytes,_Src);
  return eVar1;
}



/* ---- strcpy_s @ 60301010 size=6 ---- */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60301010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strcpy_s(_Dst,_SizeInBytes,_Src);
  return eVar1;
}



/* ---- _stricmp @ 60301020 size=6 ---- */

int __cdecl _stricmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60301020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _stricmp(_Str1,_Str2);
  return iVar1;
}



/* ---- _splitpath_s @ 60301030 size=6 ---- */

errno_t __cdecl
_splitpath_s(char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,
            char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60301030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _splitpath_s(_FullPath,_Drive,_DriveSize,_Dir,_DirSize,_Filename,_FilenameSize,_Ext,
                       _ExtSize);
  return eVar1;
}



/* ---- FUN_60301040 @ 60301040 size=14 ---- */

void FUN_60301040(void *param_1)

{
  operator_delete(param_1);
  return;
}



/* ---- FUN_60301050 @ 60301050 size=125 ---- */

undefined4 FUN_60301050(void)

{
  if (DAT_6030f50c == (HMODULE)0x0) {
    DAT_6030f50c = GetModuleHandleA("KERNEL32.DLL");
    if (DAT_6030f50c == (HMODULE)0x0) {
      return 0;
    }
  }
  DAT_6030f508 = GetProcAddress(DAT_6030f50c,"CreateToolhelp32Snapshot");
  DAT_6030f500 = GetProcAddress(DAT_6030f50c,"Process32First");
  DAT_6030f504 = GetProcAddress(DAT_6030f50c,"Process32Next");
  if (((DAT_6030f500 == (FARPROC)0x0) || (DAT_6030f504 == (FARPROC)0x0)) ||
     (DAT_6030f508 == (FARPROC)0x0)) {
    return 0;
  }
  return 1;
}



/* ---- FUN_603010d0 @ 603010d0 size=155 ---- */

undefined4 FUN_603010d0(void)

{
  if (DAT_6030f51c == (HMODULE)0x0) {
    DAT_6030f51c = GetModuleHandleA("PSAPI.DLL");
    if (DAT_6030f51c == (HMODULE)0x0) {
      DAT_6030f51c = LoadLibraryA("PSAPI.DLL");
      if (DAT_6030f51c == (HMODULE)0x0) {
        return 0;
      }
      DAT_6030f520 = 1;
    }
  }
  DAT_6030f510 = GetProcAddress(DAT_6030f51c,"EnumProcesses");
  DAT_6030f514 = GetProcAddress(DAT_6030f51c,"GetModuleFileNameExA");
  DAT_6030f518 = GetProcAddress(DAT_6030f51c,"EnumProcessModules");
  if (((DAT_6030f510 == (FARPROC)0x0) || (DAT_6030f514 == (FARPROC)0x0)) ||
     (DAT_6030f518 == (FARPROC)0x0)) {
    return 0;
  }
  return 1;
}



/* ---- FUN_60301170 @ 60301170 size=1022 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_60301170(HMODULE param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  BOOL BVar6;
  uint uVar7;
  uint unaff_ESI;
  char local_c71c [2];
  char acStack_c71a [2];
  DWORD local_c718;
  DWORD local_c714;
  char acStack_c710 [4];
  DWORD local_c70c;
  DWORD aDStack_c708 [2];
  undefined1 local_c700 [39992];
  undefined4 auStack_2ac8 [2000];
  undefined4 auStack_b88 [2];
  DWORD local_b80;
  undefined1 local_b7c [24];
  undefined1 auStack_b64 [260];
  _WIN32_FIND_DATAA _Stack_a60;
  CHAR local_918 [252];
  char acStack_81c [8];
  char local_814 [248];
  char acStack_71c [8];
  char local_714 [252];
  char acStack_618 [8];
  char local_610 [248];
  char acStack_518 [256];
  CHAR aCStack_418 [260];
  char acStack_314 [260];
  char acStack_210 [256];
  char acStack_110 [260];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_6030f490 ^ (uint)local_c71c;
  uVar7 = 0;
  local_c718 = 0;
  local_b80 = 0;
  memset(local_b7c,0,0x124);
  iVar1 = FUN_60301050();
  if (((iVar1 == 0) && (iVar2 = FUN_603010d0(), iVar2 == 0)) ||
     (DVar3 = GetModuleFileNameA(param_1,local_918,0x104), DVar3 == 0)) {
    __security_check_cookie(local_4 ^ (uint)local_c71c);
    return;
  }
  local_c70c = GetCurrentProcessId();
  _splitpath_s(local_918,(char *)&local_c714,3,local_714,0x104,local_814,0x100,local_610,0x100);
  strcpy_s(local_918,0x104,local_814);
  strcat_s(local_918,0x104,local_610);
  if (iVar1 == 0) {
    (*DAT_6030f510)(local_c700,40000,local_c71c);
    if (unaff_ESI >> 2 != 0) {
      do {
        pvVar4 = OpenProcess(0x410,0,aDStack_c708[uVar7]);
        if ((pvVar4 != (HANDLE)0x0) && (aDStack_c708[uVar7] != 0)) {
          iVar1 = (*DAT_6030f518)(pvVar4,auStack_2ac8,8000,&local_c70c);
          if ((iVar1 != 0) &&
             ((iVar1 = (*DAT_6030f514)(pvVar4,auStack_2ac8[0],acStack_314,0x104), iVar1 != 0 &&
              (local_c718 = 0, local_c714 != aDStack_c708[uVar7])))) {
            _splitpath_s(acStack_314,acStack_c710,3,acStack_110,0x104,acStack_518,0x100,acStack_210,
                         0x100);
            iVar1 = _stricmp(local_c71c,acStack_c710);
            if ((iVar1 == 0) &&
               (((iVar1 = _stricmp(acStack_71c,acStack_110), iVar1 == 0 &&
                 (iVar1 = _stricmp(acStack_81c,acStack_518), iVar1 == 0)) &&
                (iVar1 = _stricmp(acStack_618,acStack_210), iVar1 == 0)))) {
              CloseHandle(pvVar4);
              pvVar4 = OpenProcess(1,0,aDStack_c708[uVar7]);
              BVar6 = GetExitCodeProcess(pvVar4,&local_c718);
              if (BVar6 == 0) {
                DVar3 = 0;
              }
              else {
                DVar3 = local_c718;
              }
              TerminateProcess(pvVar4,DVar3);
            }
          }
          CloseHandle(pvVar4);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < unaff_ESI >> 2);
    }
    if (DAT_6030f520 != 0) {
      FreeLibrary(DAT_6030f51c);
    }
  }
  else {
    pvVar4 = (HANDLE)(*DAT_6030f508)(2,0);
    if (pvVar4 != (HANDLE)0xffffffff) {
      auStack_b88[0] = 0x128;
      iVar1 = (*DAT_6030f500)(pvVar4,auStack_b88);
      if (iVar1 == 0) {
        CloseHandle(pvVar4);
      }
      else {
        do {
          if (local_c714 != local_b80) {
            wsprintfA(aCStack_418,"%s%s%s",local_c71c,acStack_71c,auStack_b64);
            pvVar5 = FindFirstFileA(aCStack_418,&_Stack_a60);
            if (pvVar5 != (HANDLE)0xffffffff) {
              pvVar5 = OpenProcess(1,0,local_b80);
              if (pvVar5 != (HANDLE)0x0) {
                GetExitCodeProcess(pvVar5,(LPDWORD)(local_c71c + -8));
                TerminateProcess(pvVar5,0);
                CloseHandle(pvVar5);
                CloseHandle(pvVar4);
              }
              goto LAB_6030155b;
            }
          }
          iVar1 = (*DAT_6030f504)(pvVar4,auStack_b88);
        } while (iVar1 != 0);
        CloseHandle(pvVar4);
      }
    }
  }
LAB_6030155b:
  __security_check_cookie(uStack_c ^ (uint)(local_c71c + -8));
  return;
}



/* ---- FUN_60301580 @ 60301580 size=707 ---- */

undefined4 FUN_60301580(void)

{
  bool bVar1;
  HANDLE pvVar2;
  SGlobalInfo *pSVar3;
  DWORD DVar4;
  char *pcVar5;
  char *pcVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  BOOL BVar9;
  CWnd *pCVar10;
  AFX_MODULE_STATE *pAVar11;
  int iVar12;
  DWORD dwLanguageId;
  HLOCAL *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  CSimpleStringT<char,1> local_c [4];
  CSimpleStringT<char,1> local_8 [4];
  HLOCAL local_4;
  
  LoadStr((int)local_8);
  LoadStr((int)local_c);
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,s_HanGame_6030f000);
  pSVar3 = GInfo();
  *(HANDLE *)(pSVar3 + 0x1b4) = pvVar2;
  pSVar3 = GInfo();
  if (*(int *)(pSVar3 + 0x1b4) == 0) {
    Arguments = (va_list *)0x0;
    nSize = 0;
    lpBuffer = &local_4;
    dwLanguageId = 0x400;
    DVar4 = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,DVar4,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
    pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
    pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
    MutexErrorDlg(pcVar6,pcVar5);
    LocalFree(local_4);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
    return 1;
  }
  DVar4 = GetLastError();
  if (DVar4 != 0xb7) {
    pHVar7 = FindWindowA("HANGAMEEXE",(LPCSTR)0x0);
    if (pHVar7 == (HWND)0x0) {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
      return 5;
    }
    pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
    pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
    MutexErrorDlg(pcVar6,pcVar5);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
    return 2;
  }
  bVar1 = false;
  pHVar7 = GetDesktopWindow();
  pCVar8 = CWnd::FromHandle(pHVar7);
  pHVar7 = GetWindow(*(HWND *)(pCVar8 + 0x20),5);
  pCVar8 = CWnd::FromHandle(pHVar7);
  if (pCVar8 != (CWnd *)0x0) {
    do {
      pvVar2 = GetPropA(*(HWND *)(pCVar8 + 0x20),s_HanGame_6030f000);
      if (pvVar2 != (HANDLE)0x0) {
        if (pCVar8 == (CWnd *)0x0) {
          pHVar7 = (HWND)0x0;
        }
        else {
          pHVar7 = *(HWND *)(pCVar8 + 0x20);
        }
        BVar9 = IsWindowVisible(pHVar7);
        if (BVar9 == 0) {
          pAVar11 = AfxGetModuleState();
          iVar12 = FUN_60301170(*(HMODULE *)(pAVar11 + 8));
          if (iVar12 == 0) {
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
            ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                      ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
            ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                      ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
            return 4;
          }
          goto LAB_603017bc;
        }
        bVar1 = true;
        pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
        pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
        MutexErrorDlg(pcVar6,pcVar5);
        BVar9 = IsIconic(*(HWND *)(pCVar8 + 0x20));
        if (BVar9 != 0) {
          CWnd::ShowWindow((CWnd *)pCVar8,9);
        }
        SetForegroundWindow(*(HWND *)(pCVar8 + 0x20));
        pHVar7 = GetLastActivePopup(*(HWND *)(pCVar8 + 0x20));
        pCVar10 = CWnd::FromHandle(pHVar7);
        if (pCVar10 != (CWnd *)0x0) {
          pHVar7 = GetLastActivePopup(*(HWND *)(pCVar8 + 0x20));
          pCVar10 = CWnd::FromHandle(pHVar7);
          SetForegroundWindow(*(HWND *)(pCVar10 + 0x20));
        }
      }
      pHVar7 = GetWindow(*(HWND *)(pCVar8 + 0x20),2);
      pCVar8 = CWnd::FromHandle(pHVar7);
    } while (pCVar8 != (CWnd *)0x0);
    if (bVar1) goto LAB_60301765;
  }
  pAVar11 = AfxGetModuleState();
  iVar12 = FUN_60301170(*(HMODULE *)(pAVar11 + 8));
  if (iVar12 != 0) {
LAB_603017bc:
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
    return 3;
  }
  pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
  pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
  MutexErrorDlg(pcVar6,pcVar5);
LAB_60301765:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
  return 2;
}



/* ---- FUN_60301850 @ 60301850 size=93 ---- */

CItemManager * FUN_60301850(void)

{
  CItemManager *this;
  CItemManager *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x44);
  local_4 = 0;
  pCVar1 = (CItemManager *)0x0;
  if (this != (CItemManager *)0x0) {
    CItemManager::CItemManager((CItemManager *)this);
                    /* inlined constructor: CItemManager::CItemManager */
    *(CItemManager_vftable **)this = &CItemManager::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 603018b0 size=31 ---- */

CItemManager * __thiscall CItemManager::scalar_deleting_destructor(CItemManager *this,byte param_1)

{
  CItemManager::~CItemManager(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CItemManager *)this;
}



/* ---- FUN_603018d0 @ 603018d0 size=96 ---- */

CMemberData * FUN_603018d0(void)

{
  CMemberData *this;
  CMemberData *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x370);
  local_4 = 0;
  pCVar1 = (CMemberData *)0x0;
  if (this != (CMemberData *)0x0) {
    CMemberData::CMemberData((CMemberData *)this);
                    /* inlined constructor: CMemberData::CMemberData */
    *(CMemberData_vftable **)this = &CMemberData::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301930 size=31 ---- */

CMemberData * __thiscall CMemberData::scalar_deleting_destructor(CMemberData *this,byte param_1)

{
  CMemberData::~CMemberData(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMemberData *)this;
}



/* ---- FUN_60301950 @ 60301950 size=103 ---- */

CChannelRoomCreateDialog * FUN_60301950(void)

{
  CChannelRoomCreateDialog *this;
  CChannelRoomCreateDialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x110);
  local_4 = 0;
  pCVar1 = (CChannelRoomCreateDialog *)0x0;
  if (this != (CChannelRoomCreateDialog *)0x0) {
    CChannelRoomCreateDialog::CChannelRoomCreateDialog(this);
                    /* inlined constructor: CChannelRoomCreateDialog::CChannelRoomCreateDialog */
    this->vftablePtr = &CChannelRoomCreateDialog::vftable;
    this->vftablePtr = &CChannelRoomCreateDialog::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CChannelRoomCreateDialog *)pCVar1;
}



/* ---- CBaseApp::RegisterHandlers @ 603019c0 size=1 ---- */

/* public: virtual void __thiscall CBaseApp::RegisterHandlers(void) */

void __thiscall CBaseApp::CBaseApp__RegisterHandlers(CBaseApp *this)

{
                    /* 0x19c0  22  ?RegisterHandlers@CBaseApp@@UAEXXZ */
  return;
}



/* ---- vfunction67 @ 603019d0 size=13 ---- */

/* CListCtrlEx member function inherited by CChannelListCtrl */

void __thiscall CListCtrlEx::vfunction67(CListCtrlEx *this)

{
  EnableWindow(*(HWND *)&this->field_0x20,0);
  return;
}



/* ---- vfunction68 @ 603019e0 size=13 ---- */

/* CListCtrlEx member function inherited by CChannelListCtrl */

void __thiscall CListCtrlEx::vfunction68(CListCtrlEx *this)

{
  EnableWindow(*(HWND *)&this->field_0x20,1);
  return;
}



/* ---- vfunction82 @ 603019f0 size=14 ---- */

void __thiscall CItemWebDialog::vfunction82(CItemWebDialog *this,ushort param_1,CWnd *param_2)

{
  CDialog::CDialog__Create((CDialog *)this,(char *)(uint)param_1,param_2);
  return;
}



/* ---- scalar_deleting_destructor @ 60301a00 size=31 ---- */

CChannelRoomCreateDialog * __thiscall
CChannelRoomCreateDialog::scalar_deleting_destructor(CChannelRoomCreateDialog *this,byte param_1)

{
  CChannelRoomCreateDialog::~CChannelRoomCreateDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelRoomCreateDialog *)this;
}



/* ---- FUN_60301a20 @ 60301a20 size=103 ---- */

CItemWebDialog * FUN_60301a20(void)

{
  CItemWebDialog *this;
  CItemWebDialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x2cc);
  local_4 = 0;
  pCVar1 = (CItemWebDialog *)0x0;
  if (this != (CItemWebDialog *)0x0) {
    CItemWebDialog::CItemWebDialog(this);
                    /* inlined constructor: CItemWebDialog::CItemWebDialog */
    this->vftablePtr = &CItemWebDialog::vftable;
    this->vftablePtr = &CItemWebDialog::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CItemWebDialog *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301a90 size=31 ---- */

CItemWebDialog * __thiscall
CItemWebDialog::scalar_deleting_destructor(CItemWebDialog *this,byte param_1)

{
  CItemWebDialog::~CItemWebDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CItemWebDialog *)this;
}



/* ---- FUN_60301ab0 @ 60301ab0 size=103 ---- */

CInviteResponseDialog * FUN_60301ab0(void)

{
  CInviteResponseDialog *this;
  CInviteResponseDialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xfc);
  local_4 = 0;
  pCVar1 = (CInviteResponseDialog *)0x0;
  if (this != (CInviteResponseDialog *)0x0) {
    CInviteResponseDialog::CInviteResponseDialog(this);
                    /* inlined constructor: CInviteResponseDialog::CInviteResponseDialog */
    this->vftablePtr = &CInviteResponseDialog::vftable;
    this->vftablePtr = &CInviteResponseDialog::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CInviteResponseDialog *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301b20 size=31 ---- */

CInviteResponseDialog * __thiscall
CInviteResponseDialog::scalar_deleting_destructor(CInviteResponseDialog *this,byte param_1)

{
  CInviteResponseDialog::~CInviteResponseDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CInviteResponseDialog *)this;
}



/* ---- FUN_60301b40 @ 60301b40 size=96 ---- */

CCfgSetting * FUN_60301b40(void)

{
  CCfgSetting *this;
  CCfgSetting *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x914);
  local_4 = 0;
  pCVar1 = (CCfgSetting *)0x0;
  if (this != (CCfgSetting *)0x0) {
    CCfgSetting::CCfgSetting((CCfgSetting *)this);
                    /* inlined constructor: CCfgSetting::CCfgSetting */
    *(CCfgSetting_vftable **)this = &CCfgSetting::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301ba0 size=31 ---- */

CCfgSetting * __thiscall CCfgSetting::scalar_deleting_destructor(CCfgSetting *this,byte param_1)

{
  CCfgSetting::~CCfgSetting(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CCfgSetting *)this;
}



/* ---- FUN_60301bc0 @ 60301bc0 size=103 ---- */

CChannelListCtrl * FUN_60301bc0(void)

{
  CChannelListCtrl *this;
  CChannelListCtrl *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x114);
  local_4 = 0;
  pCVar1 = (CChannelListCtrl *)0x0;
  if (this != (CChannelListCtrl *)0x0) {
    CChannelListCtrl::CChannelListCtrl(this);
                    /* inlined constructor: CChannelListCtrl::CChannelListCtrl */
    this->vftablePtr = &CChannelListCtrl::vftable;
    this->vftablePtr = &CChannelListCtrl::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CChannelListCtrl *)pCVar1;
}



/* ---- vfunction3 @ 60301c30 size=3 ---- */

/* CListCtrlEx member function inherited by CChannelListCtrl
   CListCtrlEx member function inherited by CChannelListCtrl
   CListCtrlEx member function inherited by CChannelListCtrl */

void __thiscall CListCtrlEx::vfunction3(CListCtrlEx *this)

{
  return;
}



/* ---- scalar_deleting_destructor @ 60301c40 size=31 ---- */

CChannelListCtrl * __thiscall
CChannelListCtrl::scalar_deleting_destructor(CChannelListCtrl *this,byte param_1)

{
  CChannelListCtrl::~CChannelListCtrl(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelListCtrl *)this;
}



/* ---- FUN_60301c60 @ 60301c60 size=103 ---- */

CAccuseUserDlg * FUN_60301c60(void)

{
  CAccuseUserDlg *this;
  CAccuseUserDlg *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd4);
  local_4 = 0;
  pCVar1 = (CAccuseUserDlg *)0x0;
  if (this != (CAccuseUserDlg *)0x0) {
    CAccuseUserDlg::CAccuseUserDlg(this);
                    /* inlined constructor: CAccuseUserDlg::CAccuseUserDlg */
    this->vftablePtr = &CAccuseUserDlg::vftable;
    this->vftablePtr = &CAccuseUserDlg::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CAccuseUserDlg *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301cd0 size=31 ---- */

CAccuseUserDlg * __thiscall
CAccuseUserDlg::scalar_deleting_destructor(CAccuseUserDlg *this,byte param_1)

{
  CAccuseUserDlg::~CAccuseUserDlg(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CAccuseUserDlg *)this;
}



/* ---- FUN_60301cf0 @ 60301cf0 size=103 ---- */

CAlarm2Dialog * FUN_60301cf0(void)

{
  CAlarm2Dialog *this;
  CAlarm2Dialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x110);
  local_4 = 0;
  pCVar1 = (CAlarm2Dialog *)0x0;
  if (this != (CAlarm2Dialog *)0x0) {
    CAlarm2Dialog::CAlarm2Dialog(this);
                    /* inlined constructor: CAlarm2Dialog::CAlarm2Dialog */
    this->vftablePtr = &CAlarm2Dialog::vftable;
    this->vftablePtr = &CAlarm2Dialog::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CAlarm2Dialog *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301d60 size=31 ---- */

CAlarm2Dialog * __thiscall
CAlarm2Dialog::scalar_deleting_destructor(CAlarm2Dialog *this,byte param_1)

{
  CAlarm2Dialog::~CAlarm2Dialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CAlarm2Dialog *)this;
}



/* ---- FUN_60301d80 @ 60301d80 size=103 ---- */

CEndingPopupDlg2 * FUN_60301d80(void)

{
  CEndingPopupDlg2 *this;
  CEndingPopupDlg2 *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(200);
  local_4 = 0;
  pCVar1 = (CEndingPopupDlg2 *)0x0;
  if (this != (CEndingPopupDlg2 *)0x0) {
    CEndingPopupDlg2::CEndingPopupDlg2(this);
                    /* inlined constructor: CEndingPopupDlg2::CEndingPopupDlg2 */
    this->vftablePtr = &CEndingPopupDlg2::vftable;
    this->vftablePtr = &CEndingPopupDlg2::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CEndingPopupDlg2 *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301df0 size=31 ---- */

CEndingPopupDlg2 * __thiscall
CEndingPopupDlg2::scalar_deleting_destructor(CEndingPopupDlg2 *this,byte param_1)

{
  CEndingPopupDlg2::~CEndingPopupDlg2(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CEndingPopupDlg2 *)this;
}



/* ---- FUN_60301e30 @ 60301e30 size=103 ---- */

CListCtrlEx * FUN_60301e30(void)

{
  CListCtrlEx *this;
  CListCtrlEx *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x100);
  local_4 = 0;
  pCVar1 = (CListCtrlEx *)0x0;
  if (this != (CListCtrlEx *)0x0) {
    CListCtrlEx::CListCtrlEx(this);
                    /* inlined constructor: CListCtrlEx::CListCtrlEx */
    this->vftablePtr = &CListCtrlEx::vftable;
    this->vftablePtr = &CListCtrlEx::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CListCtrlEx *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301ea0 size=31 ---- */

CListCtrlEx * __thiscall CListCtrlEx::scalar_deleting_destructor(CListCtrlEx *this,byte param_1)

{
  CListCtrlEx::~CListCtrlEx(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CListCtrlEx *)this;
}



/* ---- FUN_60301ef0 @ 60301ef0 size=103 ---- */

CShutdownNoticeDialog * FUN_60301ef0(void)

{
  CShutdownNoticeDialog *this;
  CShutdownNoticeDialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xb0);
  local_4 = 0;
  pCVar1 = (CShutdownNoticeDialog *)0x0;
  if (this != (CShutdownNoticeDialog *)0x0) {
    CShutdownNoticeDialog::CShutdownNoticeDialog(this);
                    /* inlined constructor: CShutdownNoticeDialog::CShutdownNoticeDialog */
    this->vftablePtr = &CShutdownNoticeDialog::vftable;
    this->vftablePtr = &CShutdownNoticeDialog::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CShutdownNoticeDialog *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301f60 size=31 ---- */

CShutdownNoticeDialog * __thiscall
CShutdownNoticeDialog::scalar_deleting_destructor(CShutdownNoticeDialog *this,byte param_1)

{
  CShutdownNoticeDialog::~CShutdownNoticeDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CShutdownNoticeDialog *)this;
}



/* ---- FUN_60301f80 @ 60301f80 size=103 ---- */

CShutdownExitDialog * FUN_60301f80(void)

{
  CShutdownExitDialog *this;
  CShutdownExitDialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304dda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xcc);
  local_4 = 0;
  pCVar1 = (CShutdownExitDialog *)0x0;
  if (this != (CShutdownExitDialog *)0x0) {
    CShutdownExitDialog::CShutdownExitDialog(this);
                    /* inlined constructor: CShutdownExitDialog::CShutdownExitDialog */
    this->vftablePtr = &CShutdownExitDialog::vftable;
    this->vftablePtr = &CShutdownExitDialog::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return (CShutdownExitDialog *)pCVar1;
}



/* ---- scalar_deleting_destructor @ 60301ff0 size=31 ---- */

CShutdownExitDialog * __thiscall
CShutdownExitDialog::scalar_deleting_destructor(CShutdownExitDialog *this,byte param_1)

{
  CShutdownExitDialog::~CShutdownExitDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CShutdownExitDialog *)this;
}



/* ---- CBaseApp::GetMessageMap @ 60302010 size=6 ---- */

/* protected: virtual struct AFX_MSGMAP const * __thiscall CBaseApp::GetMessageMap(void)const  */

AFX_MSGMAP * __thiscall CBaseApp::CBaseApp__GetMessageMap(CBaseApp *this)

{
                    /* 0x2010  8  ?GetMessageMap@CBaseApp@@MBEPBUAFX_MSGMAP@@XZ
                       0x2010  9  ?GetThisMessageMap@CBaseApp@@KGPBUAFX_MSGMAP@@XZ */
  return (AFX_MSGMAP *)&PTR_LAB_60307aac;
}



/* ---- CBaseApp @ 60302020 size=32 ---- */

/* public: __thiscall CBaseApp::CBaseApp(void) */

CBaseApp * __thiscall CBaseApp::CBaseApp(CBaseApp *this)

{
                    /* 0x2020  1  ??0CBaseApp@@QAE@XZ */
  CWinApp::CWinApp((CWinApp *)this,(char *)0x0);
  this->vftablePtr = &_vftable_;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CBaseApp_data).field_0xa0);
  return this;
}



/* ---- ~CBaseApp @ 60302040 size=29 ---- */

/* public: virtual __thiscall CBaseApp::~CBaseApp(void) */

void __thiscall CBaseApp::~CBaseApp(CBaseApp *this)

{
                    /* 0x2040  2  ??1CBaseApp@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CBaseApp_data).field_0xa0);
  CWinApp::~CWinApp((CWinApp *)this);
  return;
}



/* ---- RegisterDefaultHandlers @ 60302060 size=225 ---- */

/* public: void __thiscall CBaseApp::RegisterDefaultHandlers(void) */

void __thiscall CBaseApp::RegisterDefaultHandlers(CBaseApp *this)

{
  CHgObjectFactory *pCVar1;
  int iVar2;
  code *pcVar3;
  _func_void_ptr *p_Var4;
  
                    /* 0x2060  21  ?RegisterDefaultHandlers@CBaseApp@@QAEXXZ */
  pcVar3 = FUN_60301b40;
  iVar2 = 6;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301bc0;
  iVar2 = 7;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  p_Var4 = (_func_void_ptr *)&LAB_60301e10;
  iVar2 = 8;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,p_Var4);
  pcVar3 = FUN_60301e30;
  iVar2 = 9;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  p_Var4 = (_func_void_ptr *)&DAT_60301ec0;
  iVar2 = 10;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,p_Var4);
  pcVar3 = FUN_60301850;
  iVar2 = 1;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_603018d0;
  iVar2 = 2;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301950;
  iVar2 = 3;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301a20;
  iVar2 = 4;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301ab0;
  iVar2 = 5;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301c60;
  iVar2 = 0xb;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301ef0;
  iVar2 = 0x13;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301f80;
  iVar2 = 0x14;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60301cf0;
  iVar2 = 0xf;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  p_Var4 = (_func_void_ptr *)&LAB_60301ed0;
  iVar2 = 0x12;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,p_Var4);
  pcVar3 = FUN_60301d80;
  iVar2 = 0x10;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  return;
}



/* ---- CBaseApp::LoadDefaultObjects @ 60302150 size=1295 ---- */

/* public: virtual bool __thiscall CBaseApp::LoadDefaultObjects(void) */

bool __thiscall CBaseApp::CBaseApp__LoadDefaultObjects(CBaseApp *this)

{
  undefined1 uVar1;
  CMainFrameModel *this_00;
  undefined4 uVar2;
  IGod *pIVar3;
  CMainFrameController *this_01;
  CLobbyStateModel *this_02;
  CLobbyStateController *this_03;
  CChannelListLobbyModel *this_04;
  CChannelListLobbyController *this_05;
  CNetworkController *pCVar4;
  CChannelLobbyModel *this_06;
  CChannelLobbyController *this_07;
  CGameLobbyModel *this_08;
  CGameLobbyController *this_09;
  CBaseLobbyModel *this_10;
  CSwitch2LobbyController *this_11;
  CHanChatModel *this_12;
  CHanChatController *this_13;
  CGameWarpModel *this_14;
  CMessengerModel *this_15;
  void *pvVar5;
  SGlobalInfo *this_16;
  uint uStack_6c;
  CConfigLoader local_50 [56];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x2150  12  ?LoadDefaultObjects@CBaseApp@@UAE_NXZ */
  puStack_c = &LAB_60304f0a;
  local_10 = ExceptionList;
  uStack_6c = DAT_6030f490 ^ (uint)(local_50 + 0x4c);
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_6c;
  this_00 = operator_new(4);
  local_8._0_1_ = 1;
  if (this_00 == (CMainFrameModel *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMainFrameModel::CMainFrameModel(this_00);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_01 = operator_new(4);
  local_8._0_1_ = 2;
  if (this_01 == (CMainFrameController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMainFrameController::CMainFrameController(this_01);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_02 = operator_new(0x24);
  local_8._0_1_ = 3;
  if (this_02 == (CLobbyStateModel *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CLobbyStateModel::CLobbyStateModel(this_02,true);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_03 = operator_new(4);
  local_8._0_1_ = 4;
  if (this_03 == (CLobbyStateController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CLobbyStateController::CLobbyStateController(this_03);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_04 = operator_new(0xc);
  local_8._0_1_ = 5;
  if (this_04 == (CChannelListLobbyModel *)0x0) {
    this_04 = (CChannelListLobbyModel *)0x0;
  }
  else {
    CChannelListLobbyModel::CChannelListLobbyModel(this_04);
    this_04->vftablePtr = &CChannelListLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_04,1);
  this_05 = operator_new(4);
  local_8._0_1_ = 6;
  if (this_05 == (CChannelListLobbyController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CChannelListLobbyController::CChannelListLobbyController(this_05);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  pCVar4 = operator_new(0x28);
  local_8._0_1_ = 7;
  if (pCVar4 == (CNetworkController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CNetworkController::CNetworkController(pCVar4,"channelList");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  pCVar4 = operator_new(0x28);
  local_8._0_1_ = 8;
  if (pCVar4 == (CNetworkController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CNetworkController::CNetworkController(pCVar4,"channel");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_06 = operator_new(0x58);
  local_8._0_1_ = 9;
  if (this_06 == (CChannelLobbyModel *)0x0) {
    this_06 = (CChannelLobbyModel *)0x0;
  }
  else {
    CChannelLobbyModel::CChannelLobbyModel(this_06,true);
    this_06->vftablePtr = &CChannelLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_06,1);
  this_07 = operator_new(4);
  local_8._0_1_ = 10;
  if (this_07 == (CChannelLobbyController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CChannelLobbyController::CChannelLobbyController(this_07);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  pCVar4 = operator_new(0x28);
  local_8._0_1_ = 0xb;
  if (pCVar4 == (CNetworkController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CNetworkController::CNetworkController(pCVar4,"game");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_08 = operator_new(0x24);
  local_8._0_1_ = 0xc;
  if (this_08 == (CGameLobbyModel *)0x0) {
    this_08 = (CGameLobbyModel *)0x0;
  }
  else {
    CGameLobbyModel::CGameLobbyModel(this_08,true);
    this_08->vftablePtr = &CGameLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_08,1);
  this_09 = operator_new(4);
  local_8._0_1_ = 0xd;
  if (this_09 == (CGameLobbyController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CGameLobbyController::CGameLobbyController(this_09);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_10 = operator_new(0x24);
  local_8._0_1_ = 0xe;
  if (this_10 == (CBaseLobbyModel *)0x0) {
    this_10 = (CBaseLobbyModel *)0x0;
  }
  else {
    CBaseLobbyModel::CBaseLobbyModel(this_10,"Switch2",true);
    this_10->vftablePtr = &CBaseLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_10,1);
  this_11 = operator_new(4);
  local_8._0_1_ = 0xf;
  if (this_11 == (CSwitch2LobbyController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSwitch2LobbyController::CSwitch2LobbyController(this_11);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_12 = operator_new(0x138);
  local_8._0_1_ = 0x10;
  if (this_12 == (CHanChatModel *)0x0) {
    this_12 = (CHanChatModel *)0x0;
  }
  else {
    CHanChatModel::CHanChatModel(this_12);
    this_12->vftablePtr = &CHanChatModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_12,1);
  this_13 = operator_new(0x20);
  local_8._0_1_ = 0x11;
  if (this_13 == (CHanChatController *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CHanChatController::CHanChatController(this_13,"channel");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar2,1);
  this_14 = operator_new(0x24);
  local_8._0_1_ = 0x12;
  if (this_14 == (CGameWarpModel *)0x0) {
    this_14 = (CGameWarpModel *)0x0;
  }
  else {
    CGameWarpModel::CGameWarpModel(this_14);
    this_14->vftablePtr = &CGameWarpModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_14,1);
  this_15 = operator_new(0x28);
  local_8._0_1_ = 0x13;
  if (this_15 == (CMessengerModel *)0x0) {
    this_15 = (CMessengerModel *)0x0;
  }
  else {
    CMessengerModel::CMessengerModel(this_15,false);
    this_15->vftablePtr = &CMessengerModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_15,1);
  (*this->vftablePtr->LoadViewObjects)(this);
  pvVar5 = (void *)(*this->vftablePtr->HookConfigLoader)(this);
  this_16 = GInfo();
  SGlobalInfo::SetGameWndPtr(this_16,pvVar5);
  SPLASH_ON(0x27b4,0);
  CConfigLoader::CConfigLoader(local_50);
  local_8._0_1_ = 0x14;
  CConfigLoader::Load(local_50,(char *)&PTR_60307bd0);
  (*this->vftablePtr->HookConfigLoader)(this);
  CConfigLoader::Apply(local_50);
  local_8 = (uint)local_8._1_3_ << 8;
  CConfigLoader::~CConfigLoader(local_50);
  uVar1 = FUN_6030267e();
  return (bool)uVar1;
}



/* ---- Catch@6030265f @ 6030265f size=29 ---- */

undefined * Catch_6030265f(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x58);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return &DAT_6030267c;
}



/* ---- FUN_6030267e @ 6030267e size=28 ---- */

void FUN_6030267e(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x60302696;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x14) ^ unaff_EBP);
  return;
}



/* ---- scalar_deleting_destructor @ 603026a0 size=31 ---- */

CChannelListLobbyModel * __thiscall
CChannelListLobbyModel::scalar_deleting_destructor(CChannelListLobbyModel *this,byte param_1)

{
  CChannelListLobbyModel::~CChannelListLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelListLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 603026c0 size=31 ---- */

CChannelLobbyModel * __thiscall
CChannelLobbyModel::scalar_deleting_destructor(CChannelLobbyModel *this,byte param_1)

{
  CChannelLobbyModel::~CChannelLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 603026e0 size=31 ---- */

CGameLobbyModel * __thiscall
CGameLobbyModel::scalar_deleting_destructor(CGameLobbyModel *this,byte param_1)

{
  CGameLobbyModel::~CGameLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGameLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 60302700 size=31 ---- */

CBaseLobbyModel * __thiscall
CBaseLobbyModel::scalar_deleting_destructor(CBaseLobbyModel *this,byte param_1)

{
  CBaseLobbyModel::~CBaseLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CBaseLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 60302720 size=31 ---- */

CHanChatModel * __thiscall
CHanChatModel::scalar_deleting_destructor(CHanChatModel *this,byte param_1)

{
  CHanChatModel::~CHanChatModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CHanChatModel *)this;
}



/* ---- scalar_deleting_destructor @ 60302740 size=31 ---- */

CGameWarpModel * __thiscall
CGameWarpModel::scalar_deleting_destructor(CGameWarpModel *this,byte param_1)

{
  CGameWarpModel::~CGameWarpModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGameWarpModel *)this;
}



/* ---- scalar_deleting_destructor @ 60302760 size=31 ---- */

CMessengerModel * __thiscall
CMessengerModel::scalar_deleting_destructor(CMessengerModel *this,byte param_1)

{
  CMessengerModel::~CMessengerModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMessengerModel *)this;
}



/* ---- CBaseApp::LoadViewObjects @ 60302780 size=531 ---- */

/* public: virtual bool __thiscall CBaseApp::LoadViewObjects(void) */

bool __thiscall CBaseApp::CBaseApp__LoadViewObjects(CBaseApp *this)

{
  uint uVar1;
  CHanChatView *pCVar2;
  IGod *pIVar3;
  CGameLobbyView *this_00;
  CChannelLobbyView *this_01;
  CMiniChannelListView *this_02;
  CMainFrameView *this_03;
  CDialogCmp *this_04;
  undefined4 uVar4;
  void *pvVar5;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2780  13  ?LoadViewObjects@CBaseApp@@UAE_NXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304f7d;
  local_c = ExceptionList;
  uVar1 = DAT_6030f490 ^ (uint)(auStack_e + -0xe);
  ExceptionList = &local_c;
  pCVar2 = operator_new(0x10);
  local_4 = 0;
  if (pCVar2 == (CHanChatView *)0x0) {
    pCVar2 = (CHanChatView *)0x0;
  }
  else {
    CHanChatView::CHanChatView(pCVar2,0,1);
    pCVar2->vftablePtr = &CHanChatView::vftable;
  }
  local_4 = 0xffffffff;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pCVar2,1,uVar1);
  pCVar2 = operator_new(0x10);
  local_c = (void *)0x1;
  if (pCVar2 == (CHanChatView *)0x0) {
    pCVar2 = (CHanChatView *)0x0;
  }
  else {
    CHanChatView::CHanChatView(pCVar2,1,1);
    pCVar2->vftablePtr = &CHanChatView::vftable;
  }
  local_c = (void *)0xffffffff;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pCVar2,1);
  this_00 = operator_new(0x28);
  if (this_00 == (CGameLobbyView *)0x0) {
    this_00 = (CGameLobbyView *)0x0;
  }
  else {
    CGameLobbyView::CGameLobbyView(this_00);
    this_00->vftablePtr = &CGameLobbyView::vftable;
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_00,1);
  this_01 = operator_new(0x30);
  if (this_01 == (CChannelLobbyView *)0x0) {
    this_01 = (CChannelLobbyView *)0x0;
  }
  else {
    CChannelLobbyView::CChannelLobbyView(this_01);
    this_01->vftablePtr = &CChannelLobbyView::vftable;
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_01,1);
  this_02 = operator_new(0xc);
  if (this_02 == (CMiniChannelListView *)0x0) {
    this_02 = (CMiniChannelListView *)0x0;
  }
  else {
    CMiniChannelListView::CMiniChannelListView(this_02,0);
    this_02->vftablePtr = &CMiniChannelListView::vftable;
  }
  pIVar3 = God();
  pvVar5 = (void *)0x1;
  (**(code **)(*(int *)pIVar3 + 0x34))(this_02);
  this_03 = operator_new(4);
  if (this_03 == (CMainFrameView *)0x0) {
    this_03 = (CMainFrameView *)0x0;
  }
  else {
    CMainFrameView::CMainFrameView(this_03);
    this_03->vftablePtr = &CMainFrameView::vftable;
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_03,1);
  this_04 = operator_new(8);
  if (this_04 == (CDialogCmp *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CDialogCmp::CDialogCmp(this_04);
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar4,1);
  ExceptionList = pvVar5;
  return true;
}



/* ---- scalar_deleting_destructor @ 603029a0 size=31 ---- */

CHanChatView * __thiscall CHanChatView::scalar_deleting_destructor(CHanChatView *this,byte param_1)

{
  CHanChatView::~CHanChatView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CHanChatView *)this;
}



/* ---- scalar_deleting_destructor @ 603029c0 size=31 ---- */

CGameLobbyView * __thiscall
CGameLobbyView::scalar_deleting_destructor(CGameLobbyView *this,byte param_1)

{
  CGameLobbyView::~CGameLobbyView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGameLobbyView *)this;
}



/* ---- scalar_deleting_destructor @ 603029e0 size=31 ---- */

CChannelLobbyView * __thiscall
CChannelLobbyView::scalar_deleting_destructor(CChannelLobbyView *this,byte param_1)

{
  CChannelLobbyView::~CChannelLobbyView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelLobbyView *)this;
}



/* ---- scalar_deleting_destructor @ 60302a00 size=31 ---- */

CMiniChannelListView * __thiscall
CMiniChannelListView::scalar_deleting_destructor(CMiniChannelListView *this,byte param_1)

{
  CMiniChannelListView::~CMiniChannelListView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMiniChannelListView *)this;
}



/* ---- scalar_deleting_destructor @ 60302a20 size=31 ---- */

CMainFrameView * __thiscall
CMainFrameView::scalar_deleting_destructor(CMainFrameView *this,byte param_1)

{
  CMainFrameView::~CMainFrameView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMainFrameView *)this;
}



/* ---- CBaseApp::RegWork_LoadFullScreenSetting @ 60302a40 size=220 ---- */

/* public: virtual void __thiscall CBaseApp::RegWork_LoadFullScreenSetting(void) */

void __thiscall CBaseApp::CBaseApp__RegWork_LoadFullScreenSetting(CBaseApp *this)

{
  SGlobalInfo *this_00;
  CDisplayModeChanger *this_01;
  CWinThread *pCVar1;
  CMainFrameWnd *this_02;
  ulong uVar2;
  ulong local_120;
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2a40  18  ?RegWork_LoadFullScreenSetting@CBaseApp@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304fac;
  local_c = ExceptionList;
  local_10 = DAT_6030f490 ^ (uint)&local_120;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,1);
  local_4 = 0;
  local_120 = 0;
  CGameReg::Get(local_11c,"FullScreen",&local_120);
  uVar2 = local_120;
  this_00 = GInfo();
  this_01 = SGlobalInfo::DisplayMode(this_00);
  CDisplayModeChanger::SetDisplayMode(this_01,uVar2);
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    this_02 = (CMainFrameWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
    if (this_02 != (CMainFrameWnd *)0x0) {
      CMainFrameWnd::UpdateToggleBtnState(this_02);
    }
  }
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_120);
  return;
}



/* ---- CBaseApp::RegWork_RegisterNotifyWnd @ 60302b20 size=272 ---- */

/* public: virtual void __thiscall CBaseApp::RegWork_RegisterNotifyWnd(void) */

void __thiscall CBaseApp::CBaseApp__RegWork_RegisterNotifyWnd(CBaseApp *this)

{
  IGod *pIVar1;
  ulong uVar2;
  CWnd *pCStack_1b4;
  CParam *pCStack_1b0;
  undefined4 local_1a4;
  CParam local_1a0 [116];
  CGameReg aCStack_12c [16];
  CGameReg local_11c [252];
  uint uStack_20;
  void *pvStack_1c;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2b20  19  ?RegWork_RegisterNotifyWnd@CBaseApp@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60304ff8;
  local_c = ExceptionList;
  local_10 = DAT_6030f490 ^ (uint)&local_1a4;
  ExceptionList = &local_c;
  pCStack_1b0 = (CParam *)0x60302b66;
  CGameReg::CGameReg(local_11c,0);
  local_4 = 0;
  local_1a4 = 0;
  pCStack_1b0 = (CParam *)0x60302b85;
  CParam::CParam(local_1a0,false);
  local_4 = CONCAT31(local_4._1_3_,1);
  pIVar1 = God();
  pCStack_1b0 = local_1a0;
  pCStack_1b4 = (CWnd *)0x60307e08;
  (**(code **)(*(int *)pIVar1 + 0x10))("channelView");
  GetMetpWnd((IParam *)&pCStack_1b0,"p043",&pCStack_1b4);
  uVar2 = 0;
  if (pCStack_1b4 != (CWnd *)0x0) {
    uVar2 = *(ulong *)(pCStack_1b4 + 0x20);
  }
  CGameReg::Set(aCStack_12c,"NotiHandle",uVar2);
  uStack_14 = uStack_14 & 0xffffff00;
  CParam::~CParam((CParam *)&pCStack_1b0);
  uStack_14 = 0xffffffff;
  CGameReg::~CGameReg(aCStack_12c);
  ExceptionList = pvStack_1c;
  __security_check_cookie(uStack_20 ^ (uint)&pCStack_1b4);
  return;
}



/* ---- CBaseApp::RegWork_EraseNotifyWnd @ 60302c30 size=150 ---- */

/* public: virtual void __thiscall CBaseApp::RegWork_EraseNotifyWnd(void) */

void __thiscall CBaseApp::CBaseApp__RegWork_EraseNotifyWnd(CBaseApp *this)

{
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2c30  17  ?RegWork_EraseNotifyWnd@CBaseApp@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6030503c;
  local_c = ExceptionList;
  local_10 = DAT_6030f490 ^ (uint)local_11c;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,0);
  local_4 = 0;
  CGameReg::Erase(local_11c,"NotiHandle");
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_11c);
  return;
}



/* ---- CBaseApp::RegWork_SaveFullScreenSetting @ 60302cd0 size=168 ---- */

/* public: virtual void __thiscall CBaseApp::RegWork_SaveFullScreenSetting(void) */

void __thiscall CBaseApp::CBaseApp__RegWork_SaveFullScreenSetting(CBaseApp *this)

{
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar1;
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2cd0  20  ?RegWork_SaveFullScreenSetting@CBaseApp@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6030503c;
  local_c = ExceptionList;
  local_10 = DAT_6030f490 ^ (uint)local_11c;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,1);
  local_4 = 0;
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::DisplayMode(this_00);
  CGameReg::Set(local_11c,"FullScreen",*(ulong *)(pCVar1 + 4));
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_11c);
  return;
}



/* ---- CBaseApp::CheckTestMode @ 60302d80 size=888 ---- */

/* public: virtual void __thiscall CBaseApp::CheckTestMode(void) */

void __thiscall CBaseApp::CBaseApp__CheckTestMode(CBaseApp *this)

{
  char cVar1;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CVar2;
  char *pcVar3;
  char *pcVar4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *pCVar5;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  int iVar6;
  rsize_t _SizeInBytes;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_d8 [2];
  CSimpleStringT<char,1> aCStack_d6 [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_d4 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_d0 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_cc [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_c8 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_c4 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_c0 [4];
  int local_bc;
  int local_b8;
  CBaseApp *local_b4;
  char local_b0 [8];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_a8 [32];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_88 [52];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_54;
  char local_53 [67];
  uint local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x2d80  6  ?CheckTestMode@CBaseApp@@UAEXXZ */
  local_4 = 0xffffffff;
  local_8 = &LAB_603050c4;
  local_c = ExceptionList;
  local_10 = DAT_6030f490 ^ (uint)local_d8;
  ExceptionList = &local_c;
  local_b4 = this;
  if (2 < *(int *)__argc_exref) {
    pcVar3 = *(char **)(*(int *)__argv_exref + 4);
    pcVar4 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)pcVar4) < 5) {
      pcVar4 = *(char **)&(this->CBaseApp_data).field_0x44;
      cVar1 = *pcVar4;
      if ((cVar1 == 'r') || (cVar1 == 't')) {
        local_b0[0] = '\0';
        local_b0[1] = '\0';
        local_b0[2] = '\0';
        local_b0[3] = '\0';
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_c0,pcVar4);
        local_4 = 0;
        iVar6 = 0;
        do {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Tokenize
                    (local_c0,(char *)local_d8,(int *)&DAT_60308094);
          local_8._0_1_ = 1;
          if (iVar6 == 0) {
            pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                               ((CSimpleStringT<char,1> *)(local_d8 + -4));
            _SizeInBytes = 2;
            pCVar5 = local_cc;
LAB_60302ea4:
            strcpy_s((char *)pCVar5,_SizeInBytes,pcVar4);
          }
          else {
            if (iVar6 == 1) {
              pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                                 ((CSimpleStringT<char,1> *)(local_d8 + -4));
              _SizeInBytes = 0x32;
              pCVar5 = local_88;
              goto LAB_60302ea4;
            }
            if (iVar6 == 2) {
              pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                                 ((CSimpleStringT<char,1> *)(local_d8 + -4));
              _SizeInBytes = 0x20;
              pCVar5 = local_a8;
              goto LAB_60302ea4;
            }
            if (iVar6 == 3) {
              pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                                 ((CSimpleStringT<char,1> *)(local_d8 + -4));
              _SizeInBytes = 0x40;
              pCVar5 = &local_54;
              goto LAB_60302ea4;
            }
          }
          local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_d8 + -4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 4);
        if (iVar6 != 4) {
          AfxMessageBox("Run with ID PWD.",0,0);
        }
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_c0,
                   "hangame://%schannel://metp://%s//go/go;k22e:%d=%s&k37e:6=999999&k87e:3=hgc&k93e:7=HANGAME&k126e:6=urlhgc&k89e:%d=%s&k88e:%d=%s&k95e:22=http://www.hangame.com&k96e:%d=%s&k60e:5=Dummy&nors:1=Y&k90e:4=2.94&k91e:4=1.33&k92e:2=18&scvr:1=1&k98e:1=0&fcvr:1=1&fciv:2=16&k125e:2=20&lang:6=KOREAN&k140e:4=%s&k10e:2=31&k11e:1=M&k111e:%d=%s&k3e:%d=%s&k150e:1=3&k13e:7=1000000&k31e:4=1360"
                  );
        local_8._0_1_ = 2;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_c8,"211.218.153.25:10000");
        local_8._0_1_ = 3;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_d0,"http://down.hangame.com/dist");
        local_8._0_1_ = 4;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_d4,"http://down.hangame.com/sdurl");
        local_8._0_1_ = 5;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_d8,"http://down.hangame.com/hul");
        local_8 = (undefined1 *)CONCAT31(local_8._1_3_,6);
        if (local_cc[0] != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x72) {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_c8,"220.75.250.180:10001");
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_d0,"http://221.148.17.85:7778/dist");
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_d4,"http://221.148.17.85:7778/sdurl");
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_d8,"http://221.148.17.85:7778/hul");
        }
        strcpy_s(local_b0,6,"0090");
        pCVar5 = local_a8;
        do {
          CVar2 = *pCVar5;
          pCVar5 = pCVar5 + 1;
        } while (CVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x0);
        pCVar5 = &local_54;
        do {
          CVar2 = *pCVar5;
          pCVar5 = pCVar5 + 1;
        } while (CVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x0);
        local_bc = (int)pCVar5 - (int)local_53;
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)local_d8);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)local_d4);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)local_d0);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pCVar5 = local_88;
        do {
          CVar2 = *pCVar5;
          pCVar5 = pCVar5 + 1;
        } while (CVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x0);
        ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)local_c0);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                  (this_00,(char *)(local_b8 + 0xa4));
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)(local_b8 + 0xa4));
        *(char **)(local_b8 + 0x48) = pcVar4;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_d4);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_d0);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_cc);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_c4);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_bc);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_c0);
      }
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_d8);
  return;
}



/* ---- CBaseApp::InitInstance @ 60303100 size=980 ---- */

/* public: virtual int __thiscall CBaseApp::InitInstance(void) */

int __thiscall CBaseApp::CBaseApp__InitInstance(CBaseApp *this)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  CSTLogFile *pCVar5;
  int iVar6;
  SGlobalInfo *pSVar7;
  CMetpParserRet *pCVar8;
  CSimpleStringT<char,1> *this_00;
  CGlobalGameEvent *pCVar9;
  CFunctor *pCVar10;
  IFunctor *pIVar11;
  CMetpParser *pCVar12;
  byte *pbVar13;
  CWnd *this_01;
  CHgObjectFactory *pCVar14;
  undefined4 *puVar15;
  CWndProperty *pCVar16;
  CSTLogFile *this_02;
  int unaff_EBX;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  NInfoTypes NVar23;
  char *pcVar24;
  undefined4 uVar25;
  char *pcVar26;
  IParam *pIVar27;
  undefined4 uVar28;
  CObject CVar29;
  undefined1 auStack_22 [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3100  11  ?InitInstance@CBaseApp@@UAEHXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60305109;
  local_c = ExceptionList;
  uVar4 = DAT_6030f490 ^ (uint)(auStack_22 + -0x12);
  ExceptionList = &local_c;
  pcVar26 = "[CBaseApp::InitInstance] START ----------------------------------------";
  pCVar5 = CSTLogFile::GetLogFile();
  CSTLogFile::Write(this_02,(char *)pCVar5,pcVar26,uVar4);
  FUN_60303a10();
  RegisterDefaultHandlers(this);
  (*this->vftablePtr->RegisterHandlers)(this);
  CWinApp::InitInstance((CWinApp *)this);
  AfxEnableControlContainer((COccManager *)0x0);
  CoInitialize((LPVOID)0x0);
  iVar6 = (*this->vftablePtr->_CheckCmdString)(this);
  if (iVar6 != 0) {
    (*this->vftablePtr->CheckBipLog)(this);
    (*this->vftablePtr->CheckTestMode)(this);
    pcVar26 = *(char **)&(this->CBaseApp_data).field_0x44;
    pSVar7 = GInfo();
    iVar6 = SGlobalInfo::SetGameString(pSVar7,pcVar26);
    if (-1 < iVar6) {
      pcVar26 = "k140e";
      NVar23 = 0;
      pSVar7 = GInfo();
      pCVar8 = SGlobalInfo::MetpInfo(pSVar7,NVar23);
      bVar2 = CMetpParserRet::Query(pCVar8,pcVar26);
      if (!bVar2) {
        this_00 = (CSimpleStringT<char,1> *)GetFreeChannelSubId();
        uStack_4 = 0;
        pcVar26 = ATL::CSimpleStringT<char,1>::operator_char_const_(this_00);
        pcVar24 = "k140e";
        NVar23 = 0;
        pSVar7 = GInfo();
        pCVar8 = SGlobalInfo::MetpInfo(pSVar7,NVar23);
        CMetpParserRet::SetString(pCVar8,pcVar24,pcVar26);
        uStack_4 = 0xffffffff;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_20);
      }
      pSVar7 = GInfo();
      pCVar9 = SGlobalInfo::GameEvent(pSVar7);
      pCVar10 = CGlobalGameEvent::FntModifyGameString(pCVar9);
      pIVar11 = CFunctor::Get(pCVar10);
      if (pIVar11 != (IFunctor *)0x0) {
        pIVar27 = (IParam *)Void_exref;
        pSVar7 = GInfo();
        pCVar9 = SGlobalInfo::GameEvent(pSVar7);
        pCVar10 = CGlobalGameEvent::FntModifyGameString(pCVar9);
        iVar6 = CFunctor::Call(pCVar10,pIVar27);
        if (iVar6 != 0) {
          ExceptionList = local_c;
          return 0;
        }
      }
      NVar23 = 0;
      pSVar7 = GInfo();
      pCVar8 = SGlobalInfo::MetpInfo(pSVar7,NVar23);
      pCVar12 = CMetpParserRet::ParserPtr(pCVar8);
      cVar3 = (**(code **)(*(int *)pCVar12 + 0x18))(&DAT_603080d8);
      if (cVar3 != '\0') {
        pcVar26 = "p140";
        NVar23 = 0;
        pSVar7 = GInfo();
        pCVar8 = SGlobalInfo::MetpInfo(pSVar7,NVar23);
        pbVar13 = (byte *)CMetpParserRet::GetString(pCVar8,pcVar26);
        if (pbVar13 != (byte *)0x0) {
          pcVar26 = "ShitClone";
          do {
            bVar1 = *pbVar13;
            bVar2 = bVar1 < (byte)*pcVar26;
            if (bVar1 != *pcVar26) {
LAB_603032d0:
              iVar6 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
              goto LAB_603032d5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar2 = bVar1 < (byte)pcVar26[1];
            if (bVar1 != pcVar26[1]) goto LAB_603032d0;
            pbVar13 = pbVar13 + 2;
            pcVar26 = pcVar26 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_603032d5:
          if (iVar6 == 0) {
            nsClone::WaitUntilCloneCheckMutexDie();
          }
        }
      }
      uStack_1c = 1;
      uStack_18 = 0;
      uStack_14 = 0;
      pvStack_10 = (void *)0x0;
      GdiplusStartup(&DAT_6030f4c8,&uStack_1c,0);
      iVar6 = (*this->vftablePtr->_CheckMutex)(this);
      if (iVar6 != 0) {
        (*this->vftablePtr->_CheckPlatformConverter)(this);
        this_01 = (CWnd *)(*this->vftablePtr->HookConfigLoader)(this);
        if (this_01 != (CWnd *)0x0) {
          iVar6 = 8;
          *(CWnd **)&(this->CBaseApp_data).field_0x1c = this_01;
          pCVar14 = ObjFactory();
          puVar15 = CHgObjectFactory::CreateObject(pCVar14,iVar6);
          if (puVar15 != (undefined4 *)0x0) {
            (**(code **)*puVar15)("common/Images/_Splash_Bg.him");
          }
          iVar6 = 0x12;
          pCVar14 = ObjFactory();
          puVar15 = CHgObjectFactory::CreateObject(pCVar14,iVar6);
          if (puVar15 != (undefined4 *)0x0) {
            (**(code **)*puVar15)("common/Images/_Splash_Bg.him");
          }
          CVar29 = (this_01->CCmdTarget).CObject;
          uVar28 = 0;
          uVar25 = 0;
          uVar22 = 0;
          uVar21 = 0x267;
          uVar20 = 800;
          uVar19 = 200;
          uVar18 = 200;
          uVar17 = 0x80000000;
          pcVar26 = "k60e";
          NVar23 = 1;
          pSVar7 = GInfo();
          pCVar8 = SGlobalInfo::MetpInfo(pSVar7,NVar23);
          pcVar26 = CMetpParserRet::GetString(pCVar8,pcVar26);
          pcVar24 = AfxRegisterWndClass(0xb,(HICON__ *)0x0,(HBRUSH__ *)0x0,(HICON__ *)0x0);
          iVar6 = (**(code **)((int)CVar29 + 100))
                            (0,pcVar24,pcVar26,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar25,
                             uVar28);
          if (iVar6 != 0) {
            CVar29 = this_01[8].CCmdTarget.CObject;
            pSVar7 = GInfo();
            pCVar16 = SGlobalInfo::WndProperty(pSVar7);
            CWndProperty::SetPropertyWindow(pCVar16,(HWND__ *)CVar29);
            pcVar26 = "1";
            pSVar7 = GInfo();
            pCVar16 = SGlobalInfo::WndProperty(pSVar7);
            CWndProperty::SetWndProp(pCVar16,pcVar26);
            pIVar27 = (IParam *)Void_exref;
            pSVar7 = GInfo();
            pCVar9 = SGlobalInfo::GameEvent(pSVar7);
            pCVar10 = CGlobalGameEvent::FntSetGameLevelData(pCVar9);
            CFunctor::Call(pCVar10,pIVar27);
            bVar2 = (*this->vftablePtr->LoadDefaultObjects)(this);
            if (bVar2) {
              (*this->vftablePtr->RegWork_LoadFullScreenSetting)(this);
              (*this->vftablePtr->RegWork_RegisterNotifyWnd)(this);
              CAutoInitialize::_start();
              NVar23 = 0;
              pSVar7 = GInfo();
              pCVar8 = SGlobalInfo::MetpInfo(pSVar7,NVar23);
              pCVar12 = CMetpParserRet::ParserPtr(pCVar8);
              cVar3 = (**(code **)(*(int *)pCVar12 + 0x18))(&DAT_60308098);
              if (cVar3 != '\0') {
                (**(code **)(*(int *)pCVar12 + 100))(&DAT_60308098,auStack_22 + -6);
              }
              if (unaff_EBX != 0) {
                CWnd::ShowWindow(this_01,5);
                UpdateWindow((HWND)this_01[8].CCmdTarget.CObject);
                SetForegroundWindow((HWND)this_01[8].CCmdTarget.CObject);
              }
              ExceptionList = pvStack_10;
              return 1;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- CBaseApp::ExitInstance @ 603034e0 size=128 ---- */

/* public: virtual int __thiscall CBaseApp::ExitInstance(void) */

int __thiscall CBaseApp::CBaseApp__ExitInstance(CBaseApp *this)

{
  SGlobalInfo *pSVar1;
  int iVar2;
  CSTLogFile *pCVar3;
  CSTLogFile *this_00;
  char *pcVar4;
  
                    /* 0x34e0  7  ?ExitInstance@CBaseApp@@UAEHXZ */
  PostBipLog(900);
  FinalizePostingLog();
  GdiplusShutdown(DAT_6030f4c8);
  pSVar1 = GInfo();
  ReleaseMutex(*(HANDLE *)(pSVar1 + 0x1b4));
  FUN_60303aa0();
  CoUninitialize();
  (*this->vftablePtr->RegWork_SaveFullScreenSetting)(this);
  (*this->vftablePtr->RegWork_EraseNotifyWnd)(this);
  CAutoInitialize::_end();
  iVar2 = CWinApp::ExitInstance((CWinApp *)this);
  pcVar4 = "[CBaseApp::ExitInstance] FINISH ----------------------------------------";
  pCVar3 = CSTLogFile::GetLogFile();
  CSTLogFile::Write(this_00,(char *)pCVar3,pcVar4);
  return iVar2;
}



/* ---- CBaseApp::OnIdle @ 60303560 size=78 ---- */

/* public: virtual int __thiscall CBaseApp::OnIdle(long) */

int __thiscall CBaseApp::CBaseApp__OnIdle(CBaseApp *this,long param_1)

{
  SGlobalInfo *pSVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  
                    /* 0x3560  16  ?OnIdle@CBaseApp@@UAEHJ@Z */
  pSVar1 = GInfo();
  pvVar2 = SGlobalInfo::GetGameWndPtr(pSVar1);
  if (pvVar2 != (void *)0x0) {
    pSVar1 = GInfo();
    piVar3 = SGlobalInfo::GetGameWndPtr(pSVar1);
    iVar4 = (**(code **)(*piVar3 + 0x158))();
    if (iVar4 != 0) {
      return 1;
    }
  }
  iVar4 = CWinApp::OnIdle((CWinApp *)this,param_1);
  return iVar4;
}



/* ---- RegisterPlatformConverters @ 603035b0 size=6 ---- */

/* public: void __thiscall CBaseApp::RegisterPlatformConverters(void) */

void __thiscall CBaseApp::RegisterPlatformConverters(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x603035b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x35b0  23  ?RegisterPlatformConverters@CBaseApp@@QAEXXZ */
  RegisterAllConverters();
  return;
}



/* ---- CBaseApp::HookConfigLoader @ 603035c0 size=3 ---- */

/* public: virtual int __thiscall CBaseApp::HookConfigLoader(void) */

int __thiscall CBaseApp::CBaseApp__HookConfigLoader(CBaseApp *this)

{
                    /* 0x35c0  10  ?HookConfigLoader@CBaseApp@@UAEHXZ
                       0x35c0  14  ?MakeFrameInstance@CBaseApp@@UAEPAVCFrameWnd@@XZ
                       0x35c0  15  ?MakeGameInstance@CBaseApp@@UAEPAXXZ */
  return 0;
}



/* ---- CBaseApp::CheckBipLog @ 603035d0 size=257 ---- */

/* protected: virtual void __thiscall CBaseApp::CheckBipLog(void) */

void __thiscall CBaseApp::CBaseApp__CheckBipLog(CBaseApp *this)

{
  char *local_80;
  char *local_7c;
  char *local_78;
  int local_74;
  char *local_70;
  CMetpParser local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x35d0  5  ?CheckBipLog@CBaseApp@@MAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60305139;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_70 = (char *)0x0;
  local_78 = (char *)0x0;
  local_7c = (char *)0x0;
  local_80 = (char *)0x0;
  local_74 = 0;
  CMetpParser::CMetpParser(local_6c,*(char **)&(this->CBaseApp_data).field_0x44,0,(char *)0x0);
  local_4 = 0;
  CMetpParser::GetValue(local_6c,"k401e",&local_70);
  CMetpParser::GetValue(local_6c,"k22e",&local_78);
  CMetpParser::GetValue(local_6c,"k3e",&local_7c);
  CMetpParser::GetValue(local_6c,"p189",&local_74);
  CMetpParser::GetValue(local_6c,"k410e",&local_80);
  SetBipLogConfig(local_70,local_74,local_78,local_7c,local_80);
  PostBipLog(300);
  local_4 = 0xffffffff;
  CMetpParser::~CMetpParser(local_6c);
  ExceptionList = local_c;
  return;
}



/* ---- CBaseApp::_CheckCmdString @ 603036e0 size=92 ---- */

/* protected: virtual int __thiscall CBaseApp::_CheckCmdString(void) */

int __thiscall CBaseApp::CBaseApp___CheckCmdString(CBaseApp *this)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* 0x36e0  24  ?_CheckCmdString@CBaseApp@@MAEHXZ */
  pcVar3 = *(char **)&(this->CBaseApp_data).field_0x44;
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar2 - (int)(pcVar3 + 1)) < 100) {
    AfxMessageBox("Need Commandline",0,0);
    return 0;
  }
  pcVar2 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)pcVar2) < 0x1001) {
    return 1;
  }
  AfxMessageBox("Commandline is too long",0,0);
  return 0;
}



/* ---- CBaseApp::_CheckPlatformConverter @ 60303740 size=186 ---- */

/* protected: virtual void __thiscall CBaseApp::_CheckPlatformConverter(void) */

void __thiscall CBaseApp::CBaseApp___CheckPlatformConverter(CBaseApp *this)

{
  int iVar1;
  CGameFinder local_108 [260];
  uint local_4;
  
                    /* 0x3740  26  ?_CheckPlatformConverter@CBaseApp@@MAEXXZ */
  local_4 = DAT_6030f490 ^ (uint)local_108;
  CGameFinder::CGameFinder(local_108);
  iVar1 = CGameFinder::isPokerKind(local_108);
  if (iVar1 == 0) {
    iVar1 = CGameFinder::isNewHoola(local_108);
    if (iVar1 == 0) {
      iVar1 = CGameFinder::isGostopKind(local_108);
      if (iVar1 == 0) {
        iVar1 = CGameFinder::isSinyutnori(local_108);
        if (iVar1 == 0) {
          iVar1 = CGameFinder::isSinyutnoriHGCJ(local_108);
          if (iVar1 == 0) {
            iVar1 = CGameFinder::isTet4(local_108);
            if (iVar1 == 0) {
              iVar1 = CGameFinder::isTET4OBS(local_108);
              if (iVar1 == 0) {
                iVar1 = CGameFinder::isPBAND(local_108);
                if (iVar1 == 0) {
                  iVar1 = CGameFinder::isSPanPan(local_108);
                  if (iVar1 == 0) {
                    iVar1 = CGameFinder::isGameGenKind(local_108);
                    if (iVar1 == 0) goto LAB_603037e5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  RegisterAllConverters();
LAB_603037e5:
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}



/* ---- CBaseApp::_CheckMutex @ 60303800 size=237 ---- */

/* protected: virtual int __thiscall CBaseApp::_CheckMutex(void) */

int __thiscall CBaseApp::CBaseApp___CheckMutex(CBaseApp *this)

{
  char cVar1;
  SGlobalInfo *pSVar2;
  CMetpParserRet *pCVar3;
  CMetpParser *pCVar4;
  undefined4 uVar5;
  NInfoTypes NVar6;
  undefined1 auStack_2 [2];
  
                    /* 0x3800  25  ?_CheckMutex@CBaseApp@@MAEHXZ */
  PostBipLog(0x12f);
  NVar6 = 0;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar6);
  pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
  cVar1 = (**(code **)(*(int *)pCVar4 + 0x18))(&DAT_603081cc);
  if (cVar1 == '\0') {
    uVar5 = FUN_60301580();
    switch(uVar5) {
    case 1:
      return 0;
    case 2:
    case 4:
      PostBipLog(0x135);
      return 0;
    case 3:
      PostBipLog(0x132);
      PostBipLog(0x138);
      return 1;
    }
  }
  else {
    NVar6 = 0;
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar6);
    pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
    (**(code **)(*(int *)pCVar4 + 100))(&DAT_603081cc,auStack_2 + -6);
    NVar6 = 0;
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar6);
    pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
    (**(code **)(*(int *)pCVar4 + 0x90))(&DAT_603081cc);
  }
  PostBipLog(0x138);
  return 1;
}



/* ---- vfunction1 @ 60303900 size=8 ---- */

void __thiscall CItemWebDialog::vfunction1(CItemWebDialog *this,byte param_1)

{
  scalar_deleting_destructor((CItemWebDialog *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303910 size=8 ---- */

void __thiscall CChannelRoomCreateDialog::vfunction1(CChannelRoomCreateDialog *this,byte param_1)

{
  scalar_deleting_destructor((CChannelRoomCreateDialog *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303920 size=8 ---- */

void __thiscall CShutdownExitDialog::vfunction1(CShutdownExitDialog *this,byte param_1)

{
  scalar_deleting_destructor((CShutdownExitDialog *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303930 size=8 ---- */

void __thiscall CChannelListCtrl::vfunction1(CChannelListCtrl *this,byte param_1)

{
  scalar_deleting_destructor((CChannelListCtrl *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303940 size=8 ---- */

void __thiscall CAlarm2Dialog::vfunction1(CAlarm2Dialog *this,byte param_1)

{
  scalar_deleting_destructor((CAlarm2Dialog *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303950 size=8 ---- */

void __thiscall CAccuseUserDlg::vfunction1(CAccuseUserDlg *this,byte param_1)

{
  scalar_deleting_destructor((CAccuseUserDlg *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303960 size=8 ---- */

void __thiscall CShutdownNoticeDialog::vfunction1(CShutdownNoticeDialog *this,byte param_1)

{
  scalar_deleting_destructor((CShutdownNoticeDialog *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303970 size=8 ---- */

void __thiscall CEndingPopupDlg2::vfunction1(CEndingPopupDlg2 *this,byte param_1)

{
  scalar_deleting_destructor((CEndingPopupDlg2 *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303980 size=8 ---- */

void __thiscall CListCtrlEx::vfunction1(CListCtrlEx *this,byte param_1)

{
  scalar_deleting_destructor((CListCtrlEx *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction1 @ 60303990 size=8 ---- */

void __thiscall CInviteResponseDialog::vfunction1(CInviteResponseDialog *this,byte param_1)

{
  scalar_deleting_destructor((CInviteResponseDialog *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 603039a0 size=105 ---- */

CWinApp * __thiscall CBaseApp::scalar_deleting_destructor(CBaseApp *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CBaseApp::~CBaseApp */
    this->vftablePtr = &_vftable_;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               &(this->CBaseApp_data).field_0xa0);
    CWinApp::~CWinApp((CWinApp *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CWinApp *)this;
  }
  puVar1 = &this[-1].CBaseApp_data.field_0xa0;
  _eh_vector_destructor_iterator_(this,0xa8,*(int *)&this[-1].CBaseApp_data.field_0xa0,~CBaseApp);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CWinApp *)puVar1;
}



/* ---- FUN_60303a10 @ 60303a10 size=136 ---- */

void FUN_60303a10(void)

{
  DWORD DVar1;
  char *pcVar2;
  CHAR local_10c;
  char local_10b [263];
  uint local_4;
  
  local_4 = DAT_6030f490 ^ (uint)&local_10c;
  local_10c = '\0';
  memset(local_10b,0,0x104);
  pcVar2 = &local_10c;
  DVar1 = GetModuleFileNameA((HMODULE)0x0,&local_10c,0x104);
  if (DVar1 != 0) {
    if (local_10c != '\0') {
      do {
        if (*pcVar2 == '\\') {
          *pcVar2 = '_';
        }
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
    }
    DAT_6030f524 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,&local_10c);
  }
  __security_check_cookie(local_4 ^ (uint)&local_10c);
  return;
}



/* ---- FUN_60303aa0 @ 60303aa0 size=27 ---- */

void FUN_60303aa0(void)

{
  if (DAT_6030f524 != (HANDLE)0x0) {
    CloseHandle(DAT_6030f524);
    DAT_6030f524 = (HANDLE)0x0;
  }
  return;
}



/* ---- FUN_60303ac0 @ 60303ac0 size=90 ---- */

undefined4 FUN_60303ac0(HINSTANCE__ *param_1,int param_2)

{
  int iVar1;
  CDynLinkLibrary *this;
  
  if (param_2 == 1) {
    iVar1 = AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_6030f52c,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    this = operator_new(0x40);
    if (this != (CDynLinkLibrary *)0x0) {
      CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_6030f52c,0);
      return 1;
    }
  }
  else if (param_2 == 0) {
    AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_6030f52c,0);
  }
  return 1;
}



/* ---- FUN_60303b20 @ 60303b20 size=40 ---- */

undefined4 FUN_60303b20(undefined4 param_1,int param_2)

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



/* ---- operator= @ 60303b50 size=22 ---- */

/* public: class CPNDcurve & __thiscall CPNDcurve::operator=(class CPNDcurve const &) */

CPNDcurve * __thiscall CPNDcurve::operator=(CPNDcurve *this,CPNDcurve *param_1)

{
  int iVar1;
  CPNDcurve *pCVar2;
  
                    /* 0x3b50  3  ??4CPNDcurve@@QAEAAV0@ABV0@@Z */
  pCVar2 = this;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}



/* ---- FUN_60303b70 @ 60303b70 size=96 ---- */

void __thiscall FUN_60303b70(void *this,uint param_1)

{
  sbyte sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = param_1 >> 5;
  if (uVar5 != 0) {
    iVar2 = 1;
    puVar3 = (undefined4 *)((int)this + uVar5 * -4 + 4);
    do {
      if (iVar2 < (int)uVar5) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar3;
      }
      *(undefined4 *)((int)this + iVar2 * 4) = uVar4;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  if ((param_1 & 0x1f) != 0) {
    sVar1 = (sbyte)(param_1 & 0x1f);
    *(uint *)((int)this + 4) =
         *(uint *)this >> (0x20U - sVar1 & 0x1f) | *(int *)((int)this + 4) << sVar1;
    *(int *)this = *(int *)this << sVar1;
  }
  return;
}



/* ---- CChannelListLobbyModel::OnAttached @ 60303bd0 size=6 ---- */

bool __thiscall
CChannelListLobbyModel::CChannelListLobbyModel__OnAttached(CChannelListLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CChannelListLobbyModel::OnDetached @ 60303bd6 size=6 ---- */

bool __thiscall
CChannelListLobbyModel::CChannelListLobbyModel__OnDetached(CChannelListLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CChannelListLobbyModel::_SelectChannel_Tetris @ 60303bdc size=6 ---- */

void __thiscall
CChannelListLobbyModel::CChannelListLobbyModel___SelectChannel_Tetris(CChannelListLobbyModel *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _SelectChannel_Tetris(this);
  return;
}



/* ---- CChannelListLobbyModel::ConnectCdsServer @ 60303be2 size=6 ---- */

int __thiscall
CChannelListLobbyModel::CChannelListLobbyModel__ConnectCdsServer(CChannelListLobbyModel *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ConnectCdsServer(this);
  return iVar1;
}



/* ---- CChannelLobbyModel::OnAttached @ 60303be8 size=6 ---- */

bool __thiscall CChannelLobbyModel::CChannelLobbyModel__OnAttached(CChannelLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CChannelLobbyModel::OnDetached @ 60303bee size=6 ---- */

bool __thiscall CChannelLobbyModel::CChannelLobbyModel__OnDetached(CChannelLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CChannelLobbyModel::Msg_ActivateOn @ 60303bf4 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_ActivateOn(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_ActivateOff @ 60303bfa size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_ActivateOff(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOff(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_HannotiCommonCode @ 60303c00 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_HannotiCommonCode
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_HannotiCommonCode(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_StartNickNameProcess @ 60303c06 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_StartNickNameProcess
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_StartNickNameProcess(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_EndNickNameProcess @ 60303c0c size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_EndNickNameProcess
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_EndNickNameProcess(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_GetMakeUserId @ 60303c12 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_GetMakeUserId(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_GetMakeUserId(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_GetCheckUserId @ 60303c18 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_GetCheckUserId(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_GetCheckUserId(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::SetRoomInfo @ 60303c1e size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__SetRoomInfo
          (CChannelLobbyModel *this,IParam *param_1,bool param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetRoomInfo(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_SetCreateRoomOption @ 60303c24 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_SetCreateRoomOption
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_SetCreateRoomOption(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_SetCreateRoomReturn @ 60303c2a size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_SetCreateRoomReturn
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_SetCreateRoomReturn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_SetRoomPassWordReturn @ 60303c30 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_SetRoomPassWordReturn
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_SetRoomPassWordReturn(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::OnAttached @ 60303c36 size=6 ---- */

bool __thiscall CGameLobbyModel::CGameLobbyModel__OnAttached(CGameLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CGameLobbyModel::OnDetached @ 60303c3c size=6 ---- */

bool __thiscall CGameLobbyModel::CGameLobbyModel__OnDetached(CGameLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CGameLobbyModel::Msg_ActivateOn @ 60303c42 size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__Msg_ActivateOn(CGameLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOn(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::Msg_ActivateOff @ 60303c48 size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__Msg_ActivateOff(CGameLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOff(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::GameReport_RefreshPlayerInfoList @ 60303c4e size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__GameReport_RefreshPlayerInfoList
          (CGameLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GameReport_RefreshPlayerInfoList(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::GameReport_RefreshPlayerInfo @ 60303c54 size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__GameReport_RefreshPlayerInfo
          (CGameLobbyModel *this,int param_1,IParam *param_2,CMemberData *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GameReport_RefreshPlayerInfo(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CGameLobbyModel::GameReport_RefreshMyInfo @ 60303c5a size=6 ---- */

int __thiscall CGameLobbyModel::CGameLobbyModel__GameReport_RefreshMyInfo(CGameLobbyModel *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GameReport_RefreshMyInfo(this);
  return iVar1;
}



/* ---- CGameLobbyModel::CheckBanishInfo @ 60303c60 size=6 ---- */

bool __thiscall CGameLobbyModel::CGameLobbyModel__CheckBanishInfo(CGameLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CheckBanishInfo(this);
  return bVar1;
}



/* ---- CBaseLobbyModel::OnAttached @ 60303c66 size=6 ---- */

bool __thiscall CBaseLobbyModel::CBaseLobbyModel__OnAttached(CBaseLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CBaseLobbyModel::OnDetached @ 60303c6c size=6 ---- */

bool __thiscall CBaseLobbyModel::CBaseLobbyModel__OnDetached(CBaseLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CBaseLobbyModel::Msg_ActivateOn @ 60303c72 size=6 ---- */

int __thiscall
CBaseLobbyModel::CBaseLobbyModel__Msg_ActivateOn(CBaseLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOn(this,param_1);
  return iVar1;
}



/* ---- CBaseLobbyModel::Msg_ActivateOff @ 60303c78 size=6 ---- */

int __thiscall
CBaseLobbyModel::CBaseLobbyModel__Msg_ActivateOff(CBaseLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOff(this,param_1);
  return iVar1;
}



/* ---- CHanChatModel::OnAttached @ 60303c7e size=6 ---- */

bool __thiscall CHanChatModel::CHanChatModel__OnAttached(CHanChatModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CHanChatModel::OnDetached @ 60303c84 size=6 ---- */

bool __thiscall CHanChatModel::CHanChatModel__OnDetached(CHanChatModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CGameWarpModel::OnAttached @ 60303c8a size=6 ---- */

bool __thiscall CGameWarpModel::CGameWarpModel__OnAttached(CGameWarpModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CGameWarpModel::OnDetached @ 60303c90 size=6 ---- */

bool __thiscall CGameWarpModel::CGameWarpModel__OnDetached(CGameWarpModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CGameWarpModel::RunHanStart @ 60303c96 size=6 ---- */

void __thiscall CGameWarpModel::CGameWarpModel__RunHanStart(CGameWarpModel *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60303c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RunHanStart(this,param_1);
  return;
}



/* ---- CGameWarpModel::_GetRecommenedGameID @ 60303c9c size=6 ---- */

void __thiscall
CGameWarpModel::CGameWarpModel___GetRecommenedGameID(CGameWarpModel *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60303c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _GetRecommenedGameID(this,param_1);
  return;
}



/* ---- CGameWarpModel::_GetChannelID @ 60303ca2 size=6 ---- */

void __thiscall
CGameWarpModel::CGameWarpModel___GetChannelID(CGameWarpModel *this,IParam *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60303ca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _GetChannelID(this,param_1,param_2);
  return;
}



/* ---- CGameWarpModel::_OpenGamePage @ 60303ca8 size=6 ---- */

int __thiscall
CGameWarpModel::CGameWarpModel___OpenGamePage(CGameWarpModel *this,int param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _OpenGamePage(this,param_1,param_2);
  return iVar1;
}



/* ---- CMessengerModel::OnAttached @ 60303cae size=6 ---- */

bool __thiscall CMessengerModel::CMessengerModel__OnAttached(CMessengerModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CMessengerModel::OnDetached @ 60303cb4 size=6 ---- */

bool __thiscall CMessengerModel::CMessengerModel__OnDetached(CMessengerModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CHanChatView::OnAttached @ 60303cba size=6 ---- */

bool __thiscall CHanChatView::CHanChatView__OnAttached(CHanChatView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CHanChatView::OnDetached @ 60303cc0 size=6 ---- */

bool __thiscall CHanChatView::CHanChatView__OnDetached(CHanChatView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CGameLobbyView::OnAttached @ 60303cc6 size=6 ---- */

bool __thiscall CGameLobbyView::CGameLobbyView__OnAttached(CGameLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CGameLobbyView::OnDetached @ 60303ccc size=6 ---- */

bool __thiscall CGameLobbyView::CGameLobbyView__OnDetached(CGameLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CBaseLobbyView::Msg_GetWindow @ 60303cd2 size=6 ---- */

int __thiscall CBaseLobbyView::CBaseLobbyView__Msg_GetWindow(CBaseLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_GetWindow(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyView::Msg_UpdateUIFromXML @ 60303cd8 size=6 ---- */

int __thiscall
CGameLobbyView::CGameLobbyView__Msg_UpdateUIFromXML(CGameLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_UpdateUIFromXML(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyView::OnClickExitGameBtn @ 60303cde size=6 ---- */

int __thiscall
CGameLobbyView::CGameLobbyView__OnClickExitGameBtn(CGameLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitGameBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnAttached @ 60303ce4 size=6 ---- */

bool __thiscall CChannelLobbyView::CChannelLobbyView__OnAttached(CChannelLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CChannelLobbyView::OnDetached @ 60303cea size=6 ---- */

bool __thiscall CChannelLobbyView::CChannelLobbyView__OnDetached(CChannelLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CChannelLobbyView::Msg_UpdateUIFromXML @ 60303cf0 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__Msg_UpdateUIFromXML(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_UpdateUIFromXML(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnDblClickRoomList @ 60303cf6 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnDblClickRoomList(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDblClickRoomList(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickChangeChannelBtn @ 60303cfc size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickChangeChannelBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChangeChannelBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickCreateRoomBtn @ 60303d02 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickCreateRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickCreateRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickJoinRoomBtn @ 60303d08 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickJoinRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickJoinRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickViewRoomBtn @ 60303d0e size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickViewRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickViewRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickRoomAvatar @ 60303d14 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickRoomAvatar(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRoomAvatar(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnDblClickMemberList @ 60303d1a size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnDblClickMemberList(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDblClickMemberList(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickDirectStartBtn @ 60303d20 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickDirectStartBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickDirectStartBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickRecommendedGameBtn @ 60303d26 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickRecommendedGameBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRecommendedGameBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickExitBtn @ 60303d2c size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickExitBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickAutoCreateRoomBtn @ 60303d32 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickAutoCreateRoomBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAutoCreateRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnGetItemState @ 60303d38 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnGetItemState(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetItemState(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnCloseItemWebDlg @ 60303d3e size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnCloseItemWebDlg(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCloseItemWebDlg(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickShowItemWebBtn @ 60303d44 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickShowItemWebBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowItemWebBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickHappyBeanBtn @ 60303d4a size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickHappyBeanBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickHappyBeanBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickGuildCtrl @ 60303d50 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickGuildCtrl(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickGuildCtrl(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickThermometer @ 60303d56 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickThermometer(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickThermometer(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickSPCRoom @ 60303d5c size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickSPCRoom(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickSPCRoom(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickMemberListTabFilterBtn @ 60303d62 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickMemberListTabFilterBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickMemberListTabFilterBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickShowEmptyRoomBtn @ 60303d68 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickShowEmptyRoomBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowEmptyRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickShowRoomNumOrderBtn @ 60303d6e size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickShowRoomNumOrderBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowRoomNumOrderBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickSearchRoomBtn @ 60303d74 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickSearchRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickSearchRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnAttached @ 60303d7a size=6 ---- */

bool __thiscall CMiniChannelListView::CMiniChannelListView__OnAttached(CMiniChannelListView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CMiniChannelListView::OnDetached @ 60303d80 size=6 ---- */

bool __thiscall CMiniChannelListView::CMiniChannelListView__OnDetached(CMiniChannelListView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CMiniChannelListView::OnClickRefreshBtn @ 60303d86 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickRefreshBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRefreshBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickJoinBtn @ 60303d8c size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickJoinBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickJoinBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickExitBtn @ 60303d92 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickExitBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickAutoJoinBtn @ 60303d98 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickAutoJoinBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAutoJoinBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickGrpListBtn @ 60303d9e size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickGrpListBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickGrpListBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickChannelGrpLst @ 60303da4 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickChannelGrpLst
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChannelGrpLst(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickChannelLst @ 60303daa size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickChannelLst
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChannelLst(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnCheckEnterableState @ 60303db0 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnCheckEnterableState
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCheckEnterableState(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::SetMiniChannelListWnd @ 60303db6 size=6 ---- */

void __thiscall
CMiniChannelListView::CMiniChannelListView__SetMiniChannelListWnd
          (CMiniChannelListView *this,CMiniChannelListWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60303db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetMiniChannelListWnd(this,param_1);
  return;
}



/* ---- CMainFrameView::OnAttached @ 60303dbc size=6 ---- */

bool __thiscall CMainFrameView::CMainFrameView__OnAttached(CMainFrameView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CMainFrameView::OnDetached @ 60303dc2 size=6 ---- */

bool __thiscall CMainFrameView::CMainFrameView__OnDetached(CMainFrameView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CMainFrameView::OnAltF4KeyDown @ 60303dc8 size=6 ---- */

int __thiscall CMainFrameView::CMainFrameView__OnAltF4KeyDown(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAltF4KeyDown(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickExitButton @ 60303dce size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickExitButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnToggleScreenButton @ 60303dd4 size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnToggleScreenButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToggleScreenButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickMinimizeButton @ 60303dda size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickMinimizeButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickMinimizeButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickAccuseButton @ 60303de0 size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickAccuseButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAccuseButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickInviteButton @ 60303de6 size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickInviteButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickInviteButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickOptionButton @ 60303dec size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickOptionButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickOptionButton(this,param_1);
  return iVar1;
}



/* ---- CItemManager::SetAllElementsState @ 60303df2 size=6 ---- */

bool __thiscall CItemManager::CItemManager__SetAllElementsState(CItemManager *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = SetAllElementsState(this);
  return bVar1;
}



/* ---- CItemManager::IsItemAvailable @ 60303df8 size=6 ---- */

bool __thiscall CItemManager::CItemManager__IsItemAvailable(CItemManager *this,int param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsItemAvailable(this,param_1);
  return bVar1;
}



/* ---- CItemManager::Clear @ 60303dfe size=6 ---- */

void __thiscall CItemManager::CItemManager__Clear(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Clear(this);
  return;
}



/* ---- CItemManager::AddItem @ 60303e04 size=6 ---- */

bool __thiscall CItemManager::CItemManager__AddItem(CItemManager *this,char *param_1,CItem *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = AddItem(this,param_1,param_2);
  return bVar1;
}



/* ---- CItemManager::DelItem @ 60303e0a size=6 ---- */

void __thiscall CItemManager::CItemManager__DelItem(CItemManager *this,char *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60303e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DelItem(this,param_1,param_2);
  return;
}



/* ---- CItemManager::GetItem @ 60303e10 size=6 ---- */

CItem * __thiscall CItemManager::CItemManager__GetItem(CItemManager *this,char *param_1)

{
  CItem *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetItem(this,param_1);
  return pCVar1;
}



/* ---- CItemManager::AddTryCount @ 60303e16 size=6 ---- */

void __thiscall CItemManager::CItemManager__AddTryCount(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddTryCount(this);
  return;
}



/* ---- CItemManager::GetTryCount @ 60303e1c size=6 ---- */

int __thiscall CItemManager::CItemManager__GetTryCount(CItemManager *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTryCount(this);
  return iVar1;
}



/* ---- CItemManager::ResetTryCount @ 60303e22 size=6 ---- */

void __thiscall CItemManager::CItemManager__ResetTryCount(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetTryCount(this);
  return;
}



/* ---- CItemManager::DumpAllItems @ 60303e28 size=6 ---- */

void __thiscall CItemManager::CItemManager__DumpAllItems(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DumpAllItems(this);
  return;
}



/* ---- CItemManager::SetItemState @ 60303e2e size=6 ---- */

void __thiscall
CItemManager::CItemManager__SetItemState(CItemManager *this,int param_1,CItem *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60303e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetItemState(this,param_1,param_2);
  return;
}



/* ---- CMemberData::DrawAvata @ 60303e34 size=6 ---- */

void __thiscall
CMemberData::CMemberData__DrawAvata
          (CMemberData *this,HDC__ *param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x60303e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DrawAvata(this,param_1,param_2,param_3,param_4);
  return;
}



/* ---- CCfgSetting::CheckFCName @ 60303e3a size=6 ---- */

int __thiscall CCfgSetting::CCfgSetting__CheckFCName(CCfgSetting *this,char *param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckFCName(this,param_1,param_2);
  return iVar1;
}



/* ---- CCfgSetting::SetAdvertiseCfg @ 60303e40 size=6 ---- */

int __thiscall
CCfgSetting::CCfgSetting__SetAdvertiseCfg(CCfgSetting *this,char *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetAdvertiseCfg(this,param_1,param_2);
  return iVar1;
}



/* ---- God @ 60303e46 size=6 ---- */

IGod * __cdecl God(void)

{
  IGod *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = God();
  return pIVar1;
}



/* ---- GdiplusStartup @ 60303e4c size=6 ---- */

void GdiplusStartup(void)

{
                    /* WARNING: Could not recover jumptable at 0x60303e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GdiplusStartup();
  return;
}



/* ---- GdiplusShutdown @ 60303e52 size=6 ---- */

void GdiplusShutdown(void)

{
                    /* WARNING: Could not recover jumptable at 0x60303e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GdiplusShutdown();
  return;
}



/* ---- operator_delete @ 60303e58 size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60303e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- operator_new @ 60303e5e size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- AfxGetModuleState @ 60303e64 size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- AfxGetThread @ 60303e6a size=6 ---- */

CWinThread * AfxGetThread(void)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetThread();
  return pCVar1;
}



/* ---- FromHandle @ 60303e70 size=6 ---- */

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}



/* ---- ShowWindow @ 60303e76 size=6 ---- */

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}



/* ---- CDialog::OnCmdMsg @ 60303e7c size=6 ---- */

int __thiscall
CDialog::CDialog__OnCmdMsg
          (CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::OnFinalRelease @ 60303e82 size=6 ---- */

void __thiscall CWnd::CWnd__OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CCmdTarget::IsInvokeAllowed @ 60303e88 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetDispatchIID @ 60303e8e size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetTypeInfoCount @ 60303e94 size=6 ---- */

uint __thiscall CCmdTarget::CCmdTarget__GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}



/* ---- CCmdTarget::GetTypeLibCache @ 60303e9a size=6 ---- */

CTypeLibCache * __thiscall CCmdTarget::CCmdTarget__GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}



/* ---- CCmdTarget::GetTypeLib @ 60303ea0 size=6 ---- */

long __thiscall
CCmdTarget::CCmdTarget__GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}



/* ---- CCmdTarget::GetCommandMap @ 60303ea6 size=6 ---- */

AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget__GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetDispatchMap @ 60303eac size=6 ---- */

AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget__GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetConnectionMap @ 60303eb2 size=6 ---- */

AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget__GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}



/* ---- CWnd::GetInterfaceMap @ 60303eb8 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CWnd::CWnd__GetInterfaceMap(CWnd *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetEventSinkMap @ 60303ebe size=6 ---- */

AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget__GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::OnCreateAggregates @ 60303ec4 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}



/* ---- CCmdTarget::GetInterfaceHook @ 60303eca size=6 ---- */

IUnknown * __thiscall CCmdTarget::CCmdTarget__GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}



/* ---- CCmdTarget::GetExtraConnectionPoints @ 60303ed0 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetConnectionHook @ 60303ed6 size=6 ---- */

IConnectionPoint * __thiscall
CCmdTarget::CCmdTarget__GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}



/* ---- CWnd::PreSubclassWindow @ 60303edc size=6 ---- */

void __thiscall CWnd::CWnd__PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}



/* ---- CWnd::Create @ 60303ee2 size=6 ---- */

int __thiscall
CWnd::CWnd__Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                  CWnd *param_5,uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 60303ee8 size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,
          CWnd *param_6,uint param_7,void *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 60303eee size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
          int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
  return iVar1;
}



/* ---- CWnd::DestroyWindow @ 60303ef4 size=6 ---- */

int __thiscall CWnd::CWnd__DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}



/* ---- CWnd::PreCreateWindow @ 60303efa size=6 ---- */

int __thiscall CWnd::CWnd__PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- CWnd::CalcWindowRect @ 60303f00 size=6 ---- */

void __thiscall CWnd::CWnd__CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60303f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}



/* ---- CWnd::GetMenu @ 60303f06 size=6 ---- */

CMenu * __thiscall CWnd::CWnd__GetMenu(CWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- CWnd::SetMenu @ 60303f0c size=6 ---- */

int __thiscall CWnd::CWnd__SetMenu(CWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnToolHitTest @ 60303f12 size=6 ---- */

int __thiscall CWnd::CWnd__OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}



/* ---- CWnd::GetScrollBarCtrl @ 60303f18 size=6 ---- */

CScrollBar * __thiscall CWnd::CWnd__GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}



/* ---- CWnd::WinHelpA @ 60303f1e size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60303f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::HtmlHelpA @ 60303f24 size=6 ---- */

void __thiscall CWnd::CWnd__HtmlHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60303f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::WinHelpInternal @ 60303f2a size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60303f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWnd::ContinueModal @ 60303f30 size=6 ---- */

int __thiscall CWnd::CWnd__ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}



/* ---- CWnd::EndModalLoop @ 60303f36 size=6 ---- */

void __thiscall CWnd::CWnd__EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60303f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}



/* ---- CWnd::EnsureStdObj @ 60303f3c size=6 ---- */

long __thiscall CWnd::CWnd__EnsureStdObj(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = EnsureStdObj(this);
  return lVar1;
}



/* ---- CWnd::get_accParent @ 60303f42 size=6 ---- */

long __thiscall CWnd::CWnd__get_accParent(CWnd *this,IDispatch **param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accParent(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChildCount @ 60303f48 size=6 ---- */

long __thiscall CWnd::CWnd__get_accChildCount(CWnd *this,long *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChildCount(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChild @ 60303f4e size=6 ---- */

long __thiscall CWnd::CWnd__get_accChild(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChild();
  return lVar1;
}



/* ---- CWnd::get_accName @ 60303f54 size=6 ---- */

long __thiscall CWnd::CWnd__get_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accName();
  return lVar1;
}



/* ---- CWnd::get_accValue @ 60303f5a size=6 ---- */

long __thiscall CWnd::CWnd__get_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accValue();
  return lVar1;
}



/* ---- CWnd::get_accDescription @ 60303f60 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDescription(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDescription();
  return lVar1;
}



/* ---- CWnd::get_accRole @ 60303f66 size=6 ---- */

long __thiscall CWnd::CWnd__get_accRole(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accRole();
  return lVar1;
}



/* ---- CWnd::get_accState @ 60303f6c size=6 ---- */

long __thiscall CWnd::CWnd__get_accState(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accState();
  return lVar1;
}



/* ---- CWnd::get_accHelp @ 60303f72 size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelp(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelp();
  return lVar1;
}



/* ---- CWnd::get_accHelpTopic @ 60303f78 size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelpTopic(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelpTopic();
  return lVar1;
}



/* ---- CWnd::get_accKeyboardShortcut @ 60303f7e size=6 ---- */

long __thiscall CWnd::CWnd__get_accKeyboardShortcut(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accKeyboardShortcut();
  return lVar1;
}



/* ---- CWnd::get_accFocus @ 60303f84 size=6 ---- */

long __thiscall CWnd::CWnd__get_accFocus(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accFocus(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accSelection @ 60303f8a size=6 ---- */

long __thiscall CWnd::CWnd__get_accSelection(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accSelection(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accDefaultAction @ 60303f90 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDefaultAction();
  return lVar1;
}



/* ---- CWnd::accSelect @ 60303f96 size=6 ---- */

long __thiscall CWnd::CWnd__accSelect(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accSelect();
  return lVar1;
}



/* ---- CWnd::accLocation @ 60303f9c size=6 ---- */

long __thiscall CWnd::CWnd__accLocation(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accLocation();
  return lVar1;
}



/* ---- CWnd::accNavigate @ 60303fa2 size=6 ---- */

long __thiscall CWnd::CWnd__accNavigate(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accNavigate();
  return lVar1;
}



/* ---- CWnd::accHitTest @ 60303fa8 size=6 ---- */

long __thiscall CWnd::CWnd__accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accHitTest(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::accDoDefaultAction @ 60303fae size=6 ---- */

long __thiscall CWnd::CWnd__accDoDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accDoDefaultAction();
  return lVar1;
}



/* ---- CWnd::put_accName @ 60303fb4 size=6 ---- */

long __thiscall CWnd::CWnd__put_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accName();
  return lVar1;
}



/* ---- CWnd::put_accValue @ 60303fba size=6 ---- */

long __thiscall CWnd::CWnd__put_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accValue();
  return lVar1;
}



/* ---- CWnd::SetProxy @ 60303fc0 size=6 ---- */

long __thiscall CWnd::CWnd__SetProxy(CWnd *this,IAccessibleProxy *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = SetProxy(this,param_1);
  return lVar1;
}



/* ---- CWnd::CreateAccessibleProxy @ 60303fc6 size=6 ---- */

long __thiscall
CWnd::CWnd__CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = CreateAccessibleProxy(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::OnCommand @ 60303fcc size=6 ---- */

int __thiscall CWnd::CWnd__OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- CWnd::OnNotify @ 60303fd2 size=6 ---- */

int __thiscall CWnd::CWnd__OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::GetSuperWndProcAddr @ 60303fd8 size=6 ---- */

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::CWnd__GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}



/* ---- CDialog::PreTranslateMessage @ 60303fde size=6 ---- */

int __thiscall CDialog::CDialog__PreTranslateMessage(CDialog *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnAmbientProperty @ 60303fe4 size=6 ---- */

int __thiscall
CWnd::CWnd__OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::OnWndMsg @ 60303fea size=6 ---- */

int __thiscall CWnd::CWnd__OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::DefWindowProcA @ 60303ff0 size=6 ---- */

long __thiscall CWnd::CWnd__DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::PostNcDestroy @ 60303ff6 size=6 ---- */

void __thiscall CWnd::CWnd__PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60303ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- CWnd::OnChildNotify @ 60303ffc size=6 ---- */

int __thiscall
CWnd::CWnd__OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60303ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CDialog::CheckAutoCenter @ 60304002 size=6 ---- */

int __thiscall CDialog::CDialog__CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- CWnd::IsFrameWnd @ 60304008 size=6 ---- */

int __thiscall CWnd::CWnd__IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- CWnd::CreateControlContainer @ 6030400e size=6 ---- */

int __thiscall CWnd::CWnd__CreateControlContainer(CWnd *this,COleControlContainer **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030400e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlContainer(this,param_1);
  return iVar1;
}



/* ---- CWnd::CreateControlSite @ 60304014 size=6 ---- */

int __thiscall
CWnd::CWnd__CreateControlSite
          (CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,
          _GUID *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlSite(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CDialog::SetOccDialogInfo @ 6030401a size=6 ---- */

int __thiscall CDialog::CDialog__SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030401a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- CDialog::GetOccDialogInfo @ 60304020 size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CDialog::CDialog__GetOccDialogInfo(CDialog *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60304020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- CDialog::Create @ 60304026 size=6 ---- */

int __thiscall CDialog::CDialog__Create(CDialog *this,char *param_1,CWnd *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2);
  return iVar1;
}



/* ---- CDialog::CreateIndirect @ 6030402c size=6 ---- */

int __thiscall CDialog::CDialog__CreateIndirect(CDialog *this,void *param_1,CWnd *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030402c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateIndirect(this,param_1,param_2);
  return iVar1;
}



/* ---- CDialog::CreateIndirect @ 60304032 size=6 ---- */

int __thiscall
CDialog::CDialog__CreateIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateIndirect(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CDialog::OnSetFont @ 60304038 size=6 ---- */

void __thiscall CDialog::CDialog__OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}



/* ---- CDialog::PreInitDialog @ 6030403e size=6 ---- */

void __thiscall CDialog::CDialog__PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x6030403e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}



/* ---- CCmdTarget::OnCmdMsg @ 60304044 size=6 ---- */

int __thiscall
CCmdTarget::CCmdTarget__OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::PreTranslateMessage @ 6030404a size=6 ---- */

int __thiscall CWnd::CWnd__PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030404a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWnd::WindowProc @ 60304050 size=6 ---- */

long __thiscall CWnd::CWnd__WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CListCtrl::OnChildNotify @ 60304056 size=6 ---- */

int __thiscall
CListCtrl::CListCtrl__OnChildNotify
          (CListCtrl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::CheckAutoCenter @ 6030405c size=6 ---- */

int __thiscall CWnd::CWnd__CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030405c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- CWnd::SetOccDialogInfo @ 60304062 size=6 ---- */

int __thiscall CWnd::CWnd__SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- CWnd::GetOccDialogInfo @ 60304068 size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd__GetOccDialogInfo(CWnd *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60304068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- CWinApp @ 60304074 size=6 ---- */

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}



/* ---- CWinApp::GetRuntimeClass @ 6030407a size=6 ---- */

CRuntimeClass * __thiscall CWinApp::CWinApp__GetRuntimeClass(CWinApp *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030407a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CCmdTarget::OnFinalRelease @ 60304080 size=6 ---- */

void __thiscall CCmdTarget::CCmdTarget__OnFinalRelease(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CCmdTarget::GetInterfaceMap @ 60304086 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget__GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CWinApp::Run @ 6030408c size=6 ---- */

int __thiscall CWinApp::CWinApp__Run(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030408c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Run(this);
  return iVar1;
}



/* ---- CWinThread::PreTranslateMessage @ 60304092 size=6 ---- */

int __thiscall CWinThread::CWinThread__PreTranslateMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWinThread::PumpMessage @ 60304098 size=6 ---- */

int __thiscall CWinThread::CWinThread__PumpMessage(CWinThread *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PumpMessage(this);
  return iVar1;
}



/* ---- CWinThread::IsIdleMessage @ 6030409e size=6 ---- */

int __thiscall CWinThread::CWinThread__IsIdleMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030409e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsIdleMessage(this,param_1);
  return iVar1;
}



/* ---- CWinApp::ProcessWndProcException @ 603040a4 size=6 ---- */

long __thiscall
CWinApp::CWinApp__ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ProcessWndProcException(this,param_1,param_2);
  return lVar1;
}



/* ---- CWinThread::ProcessMessageFilter @ 603040aa size=6 ---- */

int __thiscall
CWinThread::CWinThread__ProcessMessageFilter(CWinThread *this,int param_1,tagMSG *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ProcessMessageFilter(this,param_1,param_2);
  return iVar1;
}



/* ---- CWinThread::GetMainWnd @ 603040b0 size=6 ---- */

CWnd * __thiscall CWinThread::CWinThread__GetMainWnd(CWinThread *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMainWnd(this);
  return pCVar1;
}



/* ---- CWinThread::Delete @ 603040b6 size=6 ---- */

void __thiscall CWinThread::CWinThread__Delete(CWinThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x603040b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- CWinApp::InitLibId @ 603040bc size=6 ---- */

void __thiscall CWinApp::CWinApp__InitLibId(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x603040bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitLibId(this);
  return;
}



/* ---- CWinApp::Register @ 603040c2 size=6 ---- */

int __thiscall CWinApp::CWinApp__Register(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Register(this);
  return iVar1;
}



/* ---- CWinApp::Unregister @ 603040c8 size=6 ---- */

int __thiscall CWinApp::CWinApp__Unregister(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Unregister(this);
  return iVar1;
}



/* ---- CWinApp::OpenDocumentFile @ 603040ce size=6 ---- */

CDocument * __thiscall CWinApp::CWinApp__OpenDocumentFile(CWinApp *this,char *param_1)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = OpenDocumentFile(this,param_1);
  return pCVar1;
}



/* ---- CWinApp::AddToRecentFileList @ 603040d4 size=6 ---- */

void __thiscall CWinApp::CWinApp__AddToRecentFileList(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x603040d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddToRecentFileList(this,param_1);
  return;
}



/* ---- CWinApp::InitApplication @ 603040da size=6 ---- */

int __thiscall CWinApp::CWinApp__InitApplication(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitApplication(this);
  return iVar1;
}



/* ---- CWinApp::SaveAllModified @ 603040e0 size=6 ---- */

int __thiscall CWinApp::CWinApp__SaveAllModified(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveAllModified(this);
  return iVar1;
}



/* ---- CWinApp::DoMessageBox @ 603040e6 size=6 ---- */

int __thiscall CWinApp::CWinApp__DoMessageBox(CWinApp *this,char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoMessageBox(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWinApp::DoWaitCursor @ 603040ec size=6 ---- */

void __thiscall CWinApp::CWinApp__DoWaitCursor(CWinApp *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x603040ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoWaitCursor(this,param_1);
  return;
}



/* ---- CWinApp::OnDDECommand @ 603040f2 size=6 ---- */

int __thiscall CWinApp::CWinApp__OnDDECommand(CWinApp *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x603040f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDDECommand(this,param_1);
  return iVar1;
}



/* ---- CWinApp::WinHelpA @ 603040f8 size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x603040f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::HtmlHelpA @ 603040fe size=6 ---- */

void __thiscall CWinApp::CWinApp__HtmlHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x603040fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::WinHelpInternal @ 60304104 size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpInternal(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60304104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWinApp::LoadAppLangResourceDLL @ 6030410a size=6 ---- */

HINSTANCE__ * __thiscall CWinApp::CWinApp__LoadAppLangResourceDLL(CWinApp *this)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030410a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAppLangResourceDLL(this);
  return pHVar1;
}



/* ---- CWinApp::LoadSysPolicies @ 60304110 size=6 ---- */

int __thiscall CWinApp::CWinApp__LoadSysPolicies(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadSysPolicies(this);
  return iVar1;
}



/* ---- ~CWinApp @ 60304116 size=6 ---- */

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}



/* ---- Delete @ 6030411c size=6 ---- */

void __thiscall CException::Delete(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x6030411c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- AfxMessageBox @ 60304122 size=6 ---- */

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}



/* ---- AfxRegisterWndClass @ 60304128 size=6 ---- */

char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = AfxRegisterWndClass(param_1,param_2,param_3,param_4);
  return pcVar1;
}



/* ---- AfxEnableControlContainer @ 6030412e size=6 ---- */

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x6030412e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxEnableControlContainer(param_1);
  return;
}



/* ---- InitInstance @ 60304134 size=6 ---- */

int __thiscall CWinApp::InitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}



/* ---- ExitInstance @ 6030413a size=6 ---- */

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030413a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}



/* ---- OnIdle @ 60304140 size=6 ---- */

int __thiscall CWinApp::OnIdle(CWinApp *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnIdle(this,param_1);
  return iVar1;
}



/* ---- operator_delete[] @ 60304146 size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- AfxTermExtensionModule @ 6030414c size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x6030414c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- CDynLinkLibrary @ 60304152 size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60304152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxInitExtensionModule @ 60304158 size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- __security_check_cookie @ 6030415e size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_6030f490) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- __alloca_probe @ 60304170 size=43 ---- */

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



/* ---- memset @ 6030419c size=6 ---- */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6030419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 603041a8 size=76 ---- */

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



/* ---- __ArrayUnwind @ 603041f4 size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 60304252 size=75 ---- */

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
  FUN_6030429d();
  return;
}



/* ---- FUN_6030429d @ 6030429d size=24 ---- */

void FUN_6030429d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- __CRT_INIT@12 @ 60304304 size=550 ---- */

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
    if (DAT_6030f588 < 1) {
      return 0;
    }
    DAT_6030f588 = DAT_6030f588 + -1;
  }
  _DAT_6030f8c4 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_6030f8cc,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_6030f8c8 == 0) {
      DAT_6030f8c8 = 1;
      iVar3 = initterm_e(&DAT_603068ec,&DAT_603068f4);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_603068c8,&DAT_603068e8);
      DAT_6030f8c8 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_6030f8cc,0);
    }
    if ((DAT_6030f8d8 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_6030f8d8), BVar4 != 0)) {
      (*DAT_6030f8d8)(param_1,2,param_3);
    }
    DAT_6030f588 = DAT_6030f588 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_6030f8cc,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_6030f8c8 == 2) {
      param_2 = (int *)decode_pointer(DAT_6030f8d4);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_6030f8d0);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_6030f8d4);
            piVar8 = (int *)decode_pointer(DAT_6030f8d0);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_6030f8d0 = encoded_null();
        DAT_6030f8d4 = DAT_6030f8d0;
      }
      DAT_6030f8c8 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_6030f8cc,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 6030452a size=240 ---- */

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
  _DAT_6030f4b8 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_6030f588 == 0)) {
    local_20 = 0;
    goto LAB_6030461c;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_FUN_603081d4 != (undefined *)0x0) {
      local_20 = (*(code *)PTR_FUN_603081d4)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_6030461c;
    local_20 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (local_20 == 0) goto LAB_6030461c;
  }
  local_20 = FUN_60303ac0(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_60303ac0(param_3,0);
    __CRT_INIT_12(&param_3->unused,(int *)0x0,param_1);
    if (PTR_FUN_603081d4 != (undefined *)0x0) {
      (*(code *)PTR_FUN_603081d4)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_FUN_603081d4 != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_FUN_603081d4)(param_3,param_2,param_1);
    }
  }
LAB_6030461c:
  FUN_60304635();
  return local_20;
}



/* ---- FUN_60304635 @ 60304635 size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60304635(void)

{
  _DAT_6030f4b8 = 0xffffffff;
  return;
}



/* ---- entry @ 60304640 size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- ___report_gsfailure @ 60304663 size=262 ---- */

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
  
  _DAT_6030f6a8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_6030f6ac = &uStack00000004;
  _DAT_6030f5e8 = 0x10001;
  _DAT_6030f590 = 0xc0000409;
  _DAT_6030f594 = 1;
  local_32c = DAT_6030f490;
  local_328 = DAT_6030f494;
  _DAT_6030f59c = _local_res0;
  _DAT_6030f674 = in_GS;
  _DAT_6030f678 = in_FS;
  _DAT_6030f67c = in_ES;
  _DAT_6030f680 = in_DS;
  _DAT_6030f684 = unaff_EDI;
  _DAT_6030f688 = unaff_ESI;
  _DAT_6030f68c = unaff_EBX;
  _DAT_6030f690 = in_EDX;
  _DAT_6030f694 = in_ECX;
  _DAT_6030f698 = in_EAX;
  _DAT_6030f69c = unaff_EBP;
  DAT_6030f6a0 = _local_res0;
  _DAT_6030f6a4 = in_CS;
  _DAT_6030f6b0 = in_SS;
  DAT_6030f5e0 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_60308264);
  if (DAT_6030f5e0 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- terminate @ 6030476a size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x6030476a. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- __SEH_prolog4 @ 60304770 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_6030f490 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 603047b5 size=20 ---- */

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



/* ---- FUN_603047c9 @ 603047c9 size=37 ---- */

void __cdecl
FUN_603047c9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_6030f490,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- __onexit @ 603047fa size=156 ---- */

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
  
  local_8 = &DAT_60309308;
  uStack_c = 0x60304806;
  local_20[0] = decode_pointer(DAT_6030f8d4);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_6030f8d4);
    local_24 = decode_pointer(DAT_6030f8d0);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_6030f8d4 = encode_pointer(local_20[0]);
    DAT_6030f8d0 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_60304896();
  }
  return p_Var1;
}



/* ---- FUN_60304896 @ 60304896 size=9 ---- */

void FUN_60304896(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 6030489f size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- __ValidateImageBase @ 60304910 size=53 ---- */

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



/* ---- __FindPESection @ 60304950 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 603049a0 size=166 ---- */

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
  
  pcStack_10 = FUN_603047c9;
  local_14 = ExceptionList;
  local_c = DAT_6030f490 ^ 0x60309328;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_60300000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_60300000,(DWORD_PTR)(pTarget + -0x60300000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 60304a5e size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x60304a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 60304a64 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x60304a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 60304a6a size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 60304a70 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 60304a76 size=150 ---- */

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
  if ((DAT_6030f490 == 0xbb40e64e) || ((DAT_6030f490 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_6030f490 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_6030f490 == 0xbb40e64e) {
      DAT_6030f490 = 0xbb40e64f;
    }
    else if ((DAT_6030f490 & 0xffff0000) == 0) {
      DAT_6030f490 = DAT_6030f490 | DAT_6030f490 << 0x10;
    }
  }
  DAT_6030f494 = ~DAT_6030f490;
  return;
}



/* ---- _crt_debugger_hook @ 60304b0c size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- _type_info_dtor_internal_method @ 60304b12 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- except_handler4_common @ 60304b18 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x60304b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _unlock @ 60304b24 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60304b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 60304b2a size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x60304b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 60304b30 size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60304b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- CControlBase::DestroyControl @ 60304b36 size=6 ---- */

bool __thiscall CControlBase::CControlBase__DestroyControl(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DestroyControl(this);
  return bVar1;
}



/* ---- CControlBase::IsCreated @ 60304b3c size=6 ---- */

bool __thiscall CControlBase::CControlBase__IsCreated(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsCreated(this);
  return bVar1;
}



/* ---- CControlBase::UpdateControlForGame @ 60304b42 size=6 ---- */

void __thiscall CControlBase::CControlBase__UpdateControlForGame(CControlBase *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControlForGame(this,param_1);
  return;
}



/* ---- CControlBase::GetCWndPtr @ 60304b48 size=6 ---- */

CWnd * __thiscall CControlBase::CControlBase__GetCWndPtr(CControlBase *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCWndPtr(this);
  return pCVar1;
}



/* ---- CChannelListCtrl::GetRuntimeClass @ 60304b4e size=6 ---- */

CRuntimeClass * __thiscall
CChannelListCtrl::CChannelListCtrl__GetRuntimeClass(CChannelListCtrl *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CChannelListCtrl::GetMessageMap @ 60304b54 size=6 ---- */

AFX_MSGMAP * __thiscall CChannelListCtrl::CChannelListCtrl__GetMessageMap(CChannelListCtrl *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CChannelListCtrl::DrawItem @ 60304b5a size=6 ---- */

void __thiscall
CChannelListCtrl::CChannelListCtrl__DrawItem(CChannelListCtrl *this,tagDRAWITEMSTRUCT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DrawItem(this,param_1);
  return;
}



/* ---- CListCtrlEx::OnSortItem @ 60304b60 size=6 ---- */

int __thiscall
CListCtrlEx::CListCtrlEx__OnSortItem
          (CListCtrlEx *this,ulong param_1,ulong param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSortItem(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CChannelListCtrl::DoListCtrlSetting @ 60304b66 size=6 ---- */

bool __thiscall CChannelListCtrl::CChannelListCtrl__DoListCtrlSetting(CChannelListCtrl *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DoListCtrlSetting(this);
  return bVar1;
}



/* ---- CListCtrlEx::GetColumnFormatString @ 60304b6c size=6 ---- */

void __thiscall
CListCtrlEx::CListCtrlEx__GetColumnFormatString
          (CListCtrlEx *this,int param_1,char *param_2,char *param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x60304b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetColumnFormatString(this,param_1,param_2,param_3,param_4);
  return;
}



/* ---- CListCtrlEx::MeasureItem @ 60304b72 size=6 ---- */

void __thiscall
CListCtrlEx::CListCtrlEx__MeasureItem(CListCtrlEx *this,tagMEASUREITEMSTRUCT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MeasureItem(this,param_1);
  return;
}



/* ---- CListCtrlEx::CreateControl @ 60304b78 size=6 ---- */

bool __thiscall CListCtrlEx::CListCtrlEx__CreateControl(CListCtrlEx *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CChannelListCtrl::DestroyControl @ 60304b7e size=6 ---- */

bool __thiscall CChannelListCtrl::CChannelListCtrl__DestroyControl(CChannelListCtrl *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DestroyControl(this);
  return bVar1;
}



/* ---- CControlBase::ShowControl @ 60304b84 size=6 ---- */

void __thiscall CControlBase::CControlBase__ShowControl(CControlBase *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowControl(this,param_1);
  return;
}



/* ---- CChannelListCtrl::UpdateControl @ 60304b8a size=6 ---- */

void __thiscall
CChannelListCtrl::CChannelListCtrl__UpdateControl(CChannelListCtrl *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CListCtrlEx::GetRuntimeClass @ 60304b90 size=6 ---- */

CRuntimeClass * __thiscall CListCtrlEx::CListCtrlEx__GetRuntimeClass(CListCtrlEx *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CListCtrlEx::GetMessageMap @ 60304b96 size=6 ---- */

AFX_MSGMAP * __thiscall CListCtrlEx::CListCtrlEx__GetMessageMap(CListCtrlEx *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CListCtrlEx::DrawItem @ 60304b9c size=6 ---- */

void __thiscall CListCtrlEx::CListCtrlEx__DrawItem(CListCtrlEx *this,tagDRAWITEMSTRUCT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DrawItem(this,param_1);
  return;
}



/* ---- CListCtrlEx::DoListCtrlSetting @ 60304ba2 size=6 ---- */

bool __thiscall CListCtrlEx::CListCtrlEx__DoListCtrlSetting(CListCtrlEx *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DoListCtrlSetting(this);
  return bVar1;
}



/* ---- CListCtrlEx::DestroyControl @ 60304ba8 size=6 ---- */

bool __thiscall CListCtrlEx::CListCtrlEx__DestroyControl(CListCtrlEx *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DestroyControl(this);
  return bVar1;
}



/* ---- CListCtrlEx::UpdateControl @ 60304bae size=6 ---- */

void __thiscall CListCtrlEx::CListCtrlEx__UpdateControl(CListCtrlEx *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CChannelRoomCreateDialog::GetRuntimeClass @ 60304bb4 size=6 ---- */

CRuntimeClass * __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__GetRuntimeClass(CChannelRoomCreateDialog *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CChannelRoomCreateDialog::GetMessageMap @ 60304bba size=6 ---- */

AFX_MSGMAP * __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__GetMessageMap(CChannelRoomCreateDialog *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CChannelRoomCreateDialog::DoDataExchange @ 60304bc0 size=6 ---- */

void __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__DoDataExchange
          (CChannelRoomCreateDialog *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CDialogRoot::WindowProc @ 60304bc6 size=6 ---- */

long __thiscall
CDialogRoot::CDialogRoot__WindowProc(CDialogRoot *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CDialogRoot::DoModal @ 60304bcc size=6 ---- */

int __thiscall CDialogRoot::CDialogRoot__DoModal(CDialogRoot *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}



/* ---- CDialogRoot::OnInitDialog @ 60304bd2 size=6 ---- */

int __thiscall CDialogRoot::CDialogRoot__OnInitDialog(CDialogRoot *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}



/* ---- CChannelRoomCreateDialog::OnOK @ 60304bd8 size=6 ---- */

void __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__OnOK(CChannelRoomCreateDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}



/* ---- CChannelRoomCreateDialog::OnCancel @ 60304bde size=6 ---- */

void __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__OnCancel(CChannelRoomCreateDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}



/* ---- CChannelRoomCreateDialog::InitDialogData @ 60304be4 size=6 ---- */

void __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__InitDialogData
          (CChannelRoomCreateDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CDialogRoot::GetDialogData @ 60304bea size=6 ---- */

void __thiscall CDialogRoot::CDialogRoot__GetDialogData(CDialogRoot *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetDialogData(this,param_1);
  return;
}



/* ---- CDialogRoot::ShowModaless @ 60304bf0 size=6 ---- */

int __thiscall CDialogRoot::CDialogRoot__ShowModaless(CDialogRoot *this,bool param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowModaless(this,param_1);
  return iVar1;
}



/* ---- CChannelRoomCreateDialog::AfterShowIt @ 60304bf6 size=6 ---- */

void __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__AfterShowIt
          (CChannelRoomCreateDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfterShowIt(this,param_1);
  return;
}



/* ---- CChannelRoomCreateDialog::Draw @ 60304bfc size=6 ---- */

void __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__Draw
          (CChannelRoomCreateDialog *this,CDC *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw(this,param_1);
  return;
}



/* ---- CDialogRoot::UpdateProgressValue @ 60304c02 size=6 ---- */

void __thiscall CDialogRoot::CDialogRoot__UpdateProgressValue(CDialogRoot *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateProgressValue(this,param_1);
  return;
}



/* ---- CChannelRoomCreateDialog::OnInitControl @ 60304c08 size=6 ---- */

bool __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__OnInitControl(CChannelRoomCreateDialog *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CChannelRoomCreateDialog::CreateControl @ 60304c0e size=6 ---- */

bool __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__CreateControl
          (CChannelRoomCreateDialog *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CDialogRoot::ShowControl @ 60304c14 size=6 ---- */

void __thiscall CDialogRoot::CDialogRoot__ShowControl(CDialogRoot *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowControl(this,param_1);
  return;
}



/* ---- CChannelRoomCreateDialog::UpdateControl @ 60304c1a size=6 ---- */

void __thiscall
CChannelRoomCreateDialog::CChannelRoomCreateDialog__UpdateControl
          (CChannelRoomCreateDialog *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CItemWebDialog::GetRuntimeClass @ 60304c20 size=6 ---- */

CRuntimeClass * __thiscall CItemWebDialog::CItemWebDialog__GetRuntimeClass(CItemWebDialog *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CItemWebDialog::GetMessageMap @ 60304c26 size=6 ---- */

AFX_MSGMAP * __thiscall CItemWebDialog::CItemWebDialog__GetMessageMap(CItemWebDialog *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CItemWebDialog::GetEventSinkMap @ 60304c2c size=6 ---- */

AFX_EVENTSINKMAP * __thiscall CItemWebDialog::CItemWebDialog__GetEventSinkMap(CItemWebDialog *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}



/* ---- CItemWebDialog::DoDataExchange @ 60304c32 size=6 ---- */

void __thiscall
CItemWebDialog::CItemWebDialog__DoDataExchange(CItemWebDialog *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CDialogRoot::OnOK @ 60304c38 size=6 ---- */

void __thiscall CDialogRoot::CDialogRoot__OnOK(CDialogRoot *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}



/* ---- CDialogRoot::OnCancel @ 60304c3e size=6 ---- */

void __thiscall CDialogRoot::CDialogRoot__OnCancel(CDialogRoot *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}



/* ---- CItemWebDialog::InitDialogData @ 60304c44 size=6 ---- */

void __thiscall CItemWebDialog::CItemWebDialog__InitDialogData(CItemWebDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CItemWebDialog::AfterShowIt @ 60304c4a size=6 ---- */

void __thiscall CItemWebDialog::CItemWebDialog__AfterShowIt(CItemWebDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfterShowIt(this,param_1);
  return;
}



/* ---- CDialogRoot::Draw @ 60304c50 size=6 ---- */

void __thiscall CDialogRoot::CDialogRoot__Draw(CDialogRoot *this,CDC *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw(this,param_1);
  return;
}



/* ---- CItemWebDialog::OnInitControl @ 60304c56 size=6 ---- */

bool __thiscall CItemWebDialog::CItemWebDialog__OnInitControl(CItemWebDialog *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CItemWebDialog::CreateControl @ 60304c5c size=6 ---- */

bool __thiscall CItemWebDialog::CItemWebDialog__CreateControl(CItemWebDialog *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CItemWebDialog::UpdateControl @ 60304c62 size=6 ---- */

void __thiscall CItemWebDialog::CItemWebDialog__UpdateControl(CItemWebDialog *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CInviteResponseDialog::GetRuntimeClass @ 60304c68 size=6 ---- */

CRuntimeClass * __thiscall
CInviteResponseDialog::CInviteResponseDialog__GetRuntimeClass(CInviteResponseDialog *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CInviteResponseDialog::GetMessageMap @ 60304c6e size=6 ---- */

AFX_MSGMAP * __thiscall
CInviteResponseDialog::CInviteResponseDialog__GetMessageMap(CInviteResponseDialog *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CInviteResponseDialog::DoDataExchange @ 60304c74 size=6 ---- */

void __thiscall
CInviteResponseDialog::CInviteResponseDialog__DoDataExchange
          (CInviteResponseDialog *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CInviteResponseDialog::OnOK @ 60304c7a size=6 ---- */

void __thiscall CInviteResponseDialog::CInviteResponseDialog__OnOK(CInviteResponseDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}



/* ---- CInviteResponseDialog::OnCancel @ 60304c80 size=6 ---- */

void __thiscall CInviteResponseDialog::CInviteResponseDialog__OnCancel(CInviteResponseDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}



/* ---- CInviteResponseDialog::InitDialogData @ 60304c86 size=6 ---- */

void __thiscall
CInviteResponseDialog::CInviteResponseDialog__InitDialogData
          (CInviteResponseDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CInviteResponseDialog::AfterShowIt @ 60304c8c size=6 ---- */

void __thiscall
CInviteResponseDialog::CInviteResponseDialog__AfterShowIt
          (CInviteResponseDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfterShowIt(this,param_1);
  return;
}



/* ---- CInviteResponseDialog::Draw @ 60304c92 size=6 ---- */

void __thiscall
CInviteResponseDialog::CInviteResponseDialog__Draw(CInviteResponseDialog *this,CDC *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw(this,param_1);
  return;
}



/* ---- CDialogRoot::OnInitControl @ 60304c98 size=6 ---- */

bool __thiscall CDialogRoot::CDialogRoot__OnInitControl(CDialogRoot *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CInviteResponseDialog::StopReceiveResponse @ 60304c9e size=6 ---- */

void __thiscall
CInviteResponseDialog::CInviteResponseDialog__StopReceiveResponse
          (CInviteResponseDialog *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StopReceiveResponse(this,param_1);
  return;
}



/* ---- CInviteResponseDialog::CreateControl @ 60304ca4 size=6 ---- */

bool __thiscall
CInviteResponseDialog::CInviteResponseDialog__CreateControl
          (CInviteResponseDialog *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CInviteResponseDialog::UpdateControl @ 60304caa size=6 ---- */

void __thiscall
CInviteResponseDialog::CInviteResponseDialog__UpdateControl
          (CInviteResponseDialog *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CDialogRoot::GetRuntimeClass @ 60304cb0 size=6 ---- */

CRuntimeClass * __thiscall CDialogRoot::CDialogRoot__GetRuntimeClass(CDialogRoot *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CAccuseUserDlg::GetMessageMap @ 60304cb6 size=6 ---- */

AFX_MSGMAP * __thiscall CAccuseUserDlg::CAccuseUserDlg__GetMessageMap(CAccuseUserDlg *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CAccuseUserDlg::DoDataExchange @ 60304cbc size=6 ---- */

void __thiscall
CAccuseUserDlg::CAccuseUserDlg__DoDataExchange(CAccuseUserDlg *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CAccuseUserDlg::InitDialogData @ 60304cc2 size=6 ---- */

void __thiscall CAccuseUserDlg::CAccuseUserDlg__InitDialogData(CAccuseUserDlg *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CAccuseUserDlg::AfterShowIt @ 60304cc8 size=6 ---- */

void __thiscall CAccuseUserDlg::CAccuseUserDlg__AfterShowIt(CAccuseUserDlg *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfterShowIt(this,param_1);
  return;
}



/* ---- CAccuseUserDlg::Draw @ 60304cce size=6 ---- */

void __thiscall CAccuseUserDlg::CAccuseUserDlg__Draw(CAccuseUserDlg *this,CDC *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw(this,param_1);
  return;
}



/* ---- CAccuseUserDlg::OnInitControl @ 60304cd4 size=6 ---- */

bool __thiscall CAccuseUserDlg::CAccuseUserDlg__OnInitControl(CAccuseUserDlg *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CAccuseUserDlg::CreateControl @ 60304cda size=6 ---- */

bool __thiscall CAccuseUserDlg::CAccuseUserDlg__CreateControl(CAccuseUserDlg *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CAccuseUserDlg::UpdateControl @ 60304ce0 size=6 ---- */

void __thiscall CAccuseUserDlg::CAccuseUserDlg__UpdateControl(CAccuseUserDlg *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CAlarm2Dialog::GetMessageMap @ 60304ce6 size=6 ---- */

AFX_MSGMAP * __thiscall CAlarm2Dialog::CAlarm2Dialog__GetMessageMap(CAlarm2Dialog *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CAlarm2Dialog::DoDataExchange @ 60304cec size=6 ---- */

void __thiscall
CAlarm2Dialog::CAlarm2Dialog__DoDataExchange(CAlarm2Dialog *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CAlarm2Dialog::DoModal @ 60304cf2 size=6 ---- */

int __thiscall CAlarm2Dialog::CAlarm2Dialog__DoModal(CAlarm2Dialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}



/* ---- CAlarm2Dialog::InitDialogData @ 60304cf8 size=6 ---- */

void __thiscall CAlarm2Dialog::CAlarm2Dialog__InitDialogData(CAlarm2Dialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CAlarm2Dialog::ShowModaless @ 60304cfe size=6 ---- */

int __thiscall CAlarm2Dialog::CAlarm2Dialog__ShowModaless(CAlarm2Dialog *this,bool param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowModaless(this,param_1);
  return iVar1;
}



/* ---- CAlarm2Dialog::AfterShowIt @ 60304d04 size=6 ---- */

void __thiscall CAlarm2Dialog::CAlarm2Dialog__AfterShowIt(CAlarm2Dialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfterShowIt(this,param_1);
  return;
}



/* ---- CAlarm2Dialog::Draw @ 60304d0a size=6 ---- */

void __thiscall CAlarm2Dialog::CAlarm2Dialog__Draw(CAlarm2Dialog *this,CDC *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw(this,param_1);
  return;
}



/* ---- CAlarm2Dialog::OnInitControl @ 60304d10 size=6 ---- */

bool __thiscall CAlarm2Dialog::CAlarm2Dialog__OnInitControl(CAlarm2Dialog *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CAlarm2Dialog::SetNormalMode @ 60304d16 size=6 ---- */

void __thiscall CAlarm2Dialog::CAlarm2Dialog__SetNormalMode(CAlarm2Dialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetNormalMode(this);
  return;
}



/* ---- CAlarm2Dialog::SetUPPMode @ 60304d1c size=6 ---- */

void __thiscall CAlarm2Dialog::CAlarm2Dialog__SetUPPMode(CAlarm2Dialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUPPMode(this);
  return;
}



/* ---- CAlarm2Dialog::CreateControl @ 60304d22 size=6 ---- */

bool __thiscall CAlarm2Dialog::CAlarm2Dialog__CreateControl(CAlarm2Dialog *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CAlarm2Dialog::UpdateControl @ 60304d28 size=6 ---- */

void __thiscall CAlarm2Dialog::CAlarm2Dialog__UpdateControl(CAlarm2Dialog *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CEndingPopupDlg2::GetRuntimeClass @ 60304d2e size=6 ---- */

CRuntimeClass * __thiscall
CEndingPopupDlg2::CEndingPopupDlg2__GetRuntimeClass(CEndingPopupDlg2 *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CEndingPopupDlg2::GetMessageMap @ 60304d34 size=6 ---- */

AFX_MSGMAP * __thiscall CEndingPopupDlg2::CEndingPopupDlg2__GetMessageMap(CEndingPopupDlg2 *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CEndingPopupDlg2::DoDataExchange @ 60304d3a size=6 ---- */

void __thiscall
CEndingPopupDlg2::CEndingPopupDlg2__DoDataExchange(CEndingPopupDlg2 *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CEndingPopupDlg2::InitDialogData @ 60304d40 size=6 ---- */

void __thiscall
CEndingPopupDlg2::CEndingPopupDlg2__InitDialogData(CEndingPopupDlg2 *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CDialogRoot::AfterShowIt @ 60304d46 size=6 ---- */

void __thiscall CDialogRoot::CDialogRoot__AfterShowIt(CDialogRoot *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfterShowIt(this,param_1);
  return;
}



/* ---- CEndingPopupDlg2::OnInitControl @ 60304d4c size=6 ---- */

bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2__OnInitControl(CEndingPopupDlg2 *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CEndingPopupDlg2::DestroyHtmlControl @ 60304d52 size=6 ---- */

void __thiscall CEndingPopupDlg2::CEndingPopupDlg2__DestroyHtmlControl(CEndingPopupDlg2 *this)

{
                    /* WARNING: Could not recover jumptable at 0x60304d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroyHtmlControl(this);
  return;
}



/* ---- CEndingPopupDlg2::CreateHtmlControl @ 60304d58 size=6 ---- */

bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2__CreateHtmlControl(CEndingPopupDlg2 *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateHtmlControl(this);
  return bVar1;
}



/* ---- CEndingPopupDlg2::CreateControl @ 60304d5e size=6 ---- */

bool __thiscall
CEndingPopupDlg2::CEndingPopupDlg2__CreateControl(CEndingPopupDlg2 *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CEndingPopupDlg2::UpdateControl @ 60304d64 size=6 ---- */

void __thiscall
CEndingPopupDlg2::CEndingPopupDlg2__UpdateControl(CEndingPopupDlg2 *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CShutdownNoticeDialog::GetRuntimeClass @ 60304d6a size=6 ---- */

CRuntimeClass * __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__GetRuntimeClass(CShutdownNoticeDialog *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CShutdownNoticeDialog::GetMessageMap @ 60304d70 size=6 ---- */

AFX_MSGMAP * __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__GetMessageMap(CShutdownNoticeDialog *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CShutdownNoticeDialog::DoDataExchange @ 60304d76 size=6 ---- */

void __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__DoDataExchange
          (CShutdownNoticeDialog *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CShutdownNoticeDialog::InitDialogData @ 60304d7c size=6 ---- */

void __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__InitDialogData
          (CShutdownNoticeDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CShutdownNoticeDialog::Draw @ 60304d82 size=6 ---- */

void __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__Draw(CShutdownNoticeDialog *this,CDC *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw(this,param_1);
  return;
}



/* ---- CShutdownNoticeDialog::OnInitControl @ 60304d88 size=6 ---- */

bool __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__OnInitControl(CShutdownNoticeDialog *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CShutdownNoticeDialog::CreateControl @ 60304d8e size=6 ---- */

bool __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__CreateControl
          (CShutdownNoticeDialog *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CShutdownNoticeDialog::UpdateControl @ 60304d94 size=6 ---- */

void __thiscall
CShutdownNoticeDialog::CShutdownNoticeDialog__UpdateControl
          (CShutdownNoticeDialog *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CShutdownExitDialog::GetRuntimeClass @ 60304d9a size=6 ---- */

CRuntimeClass * __thiscall
CShutdownExitDialog::CShutdownExitDialog__GetRuntimeClass(CShutdownExitDialog *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CShutdownExitDialog::GetMessageMap @ 60304da0 size=6 ---- */

AFX_MSGMAP * __thiscall
CShutdownExitDialog::CShutdownExitDialog__GetMessageMap(CShutdownExitDialog *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CShutdownExitDialog::DoDataExchange @ 60304da6 size=6 ---- */

void __thiscall
CShutdownExitDialog::CShutdownExitDialog__DoDataExchange
          (CShutdownExitDialog *this,CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoDataExchange(this,param_1);
  return;
}



/* ---- CShutdownExitDialog::InitDialogData @ 60304dac size=6 ---- */

void __thiscall
CShutdownExitDialog::CShutdownExitDialog__InitDialogData(CShutdownExitDialog *this,CParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitDialogData(this,param_1);
  return;
}



/* ---- CShutdownExitDialog::Draw @ 60304db2 size=6 ---- */

void __thiscall
CShutdownExitDialog::CShutdownExitDialog__Draw(CShutdownExitDialog *this,CDC *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw(this,param_1);
  return;
}



/* ---- CShutdownExitDialog::OnInitControl @ 60304db8 size=6 ---- */

bool __thiscall CShutdownExitDialog::CShutdownExitDialog__OnInitControl(CShutdownExitDialog *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnInitControl(this);
  return bVar1;
}



/* ---- CShutdownExitDialog::CreateControl @ 60304dbe size=6 ---- */

bool __thiscall
CShutdownExitDialog::CShutdownExitDialog__CreateControl(CShutdownExitDialog *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60304dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CShutdownExitDialog::UpdateControl @ 60304dc4 size=6 ---- */

void __thiscall
CShutdownExitDialog::CShutdownExitDialog__UpdateControl(CShutdownExitDialog *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60304dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- Unwind@60304dd0 @ 60304dd0 size=10 ---- */

void Unwind_60304dd0(void)

{
  int unaff_EBP;
  
  FUN_60301040(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304e00 @ 60304e00 size=11 ---- */

void Unwind_60304e00(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304e30 @ 60304e30 size=11 ---- */

void Unwind_60304e30(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e3b @ 60304e3b size=11 ---- */

void Unwind_60304e3b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e46 @ 60304e46 size=11 ---- */

void Unwind_60304e46(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e51 @ 60304e51 size=11 ---- */

void Unwind_60304e51(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e5c @ 60304e5c size=11 ---- */

void Unwind_60304e5c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e67 @ 60304e67 size=11 ---- */

void Unwind_60304e67(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e72 @ 60304e72 size=11 ---- */

void Unwind_60304e72(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e7d @ 60304e7d size=11 ---- */

void Unwind_60304e7d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e88 @ 60304e88 size=11 ---- */

void Unwind_60304e88(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e93 @ 60304e93 size=11 ---- */

void Unwind_60304e93(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304e9e @ 60304e9e size=11 ---- */

void Unwind_60304e9e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304ea9 @ 60304ea9 size=11 ---- */

void Unwind_60304ea9(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304eb4 @ 60304eb4 size=11 ---- */

void Unwind_60304eb4(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304ebf @ 60304ebf size=11 ---- */

void Unwind_60304ebf(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304eca @ 60304eca size=11 ---- */

void Unwind_60304eca(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304ed5 @ 60304ed5 size=11 ---- */

void Unwind_60304ed5(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304ee0 @ 60304ee0 size=11 ---- */

void Unwind_60304ee0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304eeb @ 60304eeb size=11 ---- */

void Unwind_60304eeb(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304ef6 @ 60304ef6 size=11 ---- */

void Unwind_60304ef6(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60304f01 @ 60304f01 size=9 ---- */

void Unwind_60304f01(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60304f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CConfigLoader::~CConfigLoader((CConfigLoader *)(unaff_EBP + -0x4c));
  return;
}



/* ---- Unwind@60304f30 @ 60304f30 size=11 ---- */

void Unwind_60304f30(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304f3b @ 60304f3b size=11 ---- */

void Unwind_60304f3b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304f46 @ 60304f46 size=11 ---- */

void Unwind_60304f46(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304f51 @ 60304f51 size=11 ---- */

void Unwind_60304f51(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304f5c @ 60304f5c size=11 ---- */

void Unwind_60304f5c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304f67 @ 60304f67 size=11 ---- */

void Unwind_60304f67(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304f72 @ 60304f72 size=11 ---- */

void Unwind_60304f72(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60304fa0 @ 60304fa0 size=12 ---- */

void Unwind_60304fa0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60304fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60304fe0 @ 60304fe0 size=12 ---- */

void Unwind_60304fe0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60304fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60304fec @ 60304fec size=12 ---- */

void Unwind_60304fec(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60304ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x1a0));
  return;
}



/* ---- Unwind@60305030 @ 60305030 size=12 ---- */

void Unwind_60305030(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60305036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60305070 @ 60305070 size=12 ---- */

void Unwind_60305070(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60305076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xc0));
  return;
}



/* ---- Unwind@6030507c @ 6030507c size=12 ---- */

void Unwind_6030507c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60305082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xd8));
  return;
}



/* ---- Unwind@60305088 @ 60305088 size=12 ---- */

void Unwind_60305088(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6030508e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xbc));
  return;
}



/* ---- Unwind@60305094 @ 60305094 size=12 ---- */

void Unwind_60305094(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6030509a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xc4));
  return;
}



/* ---- Unwind@603050a0 @ 603050a0 size=12 ---- */

void Unwind_603050a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x603050a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xcc));
  return;
}



/* ---- Unwind@603050ac @ 603050ac size=12 ---- */

void Unwind_603050ac(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x603050b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xd0));
  return;
}



/* ---- Unwind@603050b8 @ 603050b8 size=12 ---- */

void Unwind_603050b8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x603050be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xd4));
  return;
}



/* ---- Unwind@60305100 @ 60305100 size=9 ---- */

void Unwind_60305100(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60305103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@60305130 @ 60305130 size=9 ---- */

void Unwind_60305130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60305133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMetpParser::~CMetpParser((CMetpParser *)(unaff_EBP + -0x6c));
  return;
}



/* ---- FUN_60305200 @ 60305200 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60305200(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_6030f56c;
  local_8 = DAT_6030f568;
  puVar1 = (undefined4 *)FUN_60303b70(&local_8,1);
  _DAT_6030f558 = *puVar1;
  _DAT_6030f55c = puVar1[1];
  return;
}



/* ---- FUN_60305240 @ 60305240 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60305240(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_6030f56c;
  local_8 = DAT_6030f568;
  puVar1 = (undefined4 *)FUN_60303b70(&local_8,2);
  _DAT_6030f548 = *puVar1;
  _DAT_6030f54c = puVar1[1];
  return;
}



/* ---- FUN_60305280 @ 60305280 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60305280(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_6030f56c;
  local_8 = DAT_6030f568;
  puVar1 = (undefined4 *)FUN_60303b70(&local_8,3);
  _DAT_6030f560 = *puVar1;
  _DAT_6030f564 = puVar1[1];
  return;
}


// total=515 ok=515 failed=0
