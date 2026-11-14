// Module: HgSoundOut.exe
// ImageBase: 00400000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_00401000 @ 00401000 size=454 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00401000(undefined4 param_1,undefined4 param_2,BYTE *param_3)

{
  BYTE *pBVar1;
  BYTE BVar2;
  char cVar3;
  LSTATUS LVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *_Format;
  undefined4 uVar8;
  HKEY pHStack_230;
  DWORD DStack_22c;
  DWORD DStack_228;
  int iStack_224;
  BYTE BStack_220;
  undefined4 auStack_21f [65];
  char cStack_118;
  undefined4 auStack_117 [66];
  undefined4 local_c;
  
  local_c = DAT_00409040;
  if ((1 < DAT_004097b0) && (cVar3 = _FSOUND_Init_12(0xac44,0x20,2), cVar3 != '\0')) {
    pBVar1 = param_3 + 1;
    do {
      BVar2 = *param_3;
      param_3 = param_3 + 1;
    } while (BVar2 != '\0');
    iStack_224 = (int)param_3 - (int)pBVar1;
    if (iStack_224 != 0) {
      puVar7 = auStack_21f;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      pHStack_230 = (HKEY)0x0;
      BStack_220 = BVar2;
      LVar4 = RegOpenKeyExA((HKEY)0x80000002,"SOFTWARE\\HanGame.Com\\KOREAN",0,0x20019,&pHStack_230)
      ;
      if (LVar4 == 0) {
        DStack_228 = 0x104;
        DStack_22c = 1;
        LVar4 = RegQueryValueExA(pHStack_230,"HOME",(LPDWORD)0x0,&DStack_22c,&BStack_220,&DStack_228
                                );
        if (LVar4 == 0) {
          RegCloseKey(pHStack_230);
          cStack_118 = '\0';
          puVar7 = auStack_117;
          for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          if (DAT_004097b0 == 2) {
            uVar8 = *(undefined4 *)(DAT_004097b4 + 4);
            _Format = "%s\\%s\\intro1.hso";
          }
          else {
            uVar8 = *(undefined4 *)(DAT_004097b4 + 4);
            _Format = "%s\\%s\\intro2.hso";
          }
          _sprintf(&cStack_118,_Format,&BStack_220,uVar8);
          iVar6 = _FSOUND_Sample_Load_20(0xffffffff,&cStack_118,0x2150,0,0);
          if (iVar6 != 0) {
            iVar5 = _FSOUND_PlaySound_8(0xffffffff,iVar6);
            if (iVar5 != -1) {
              _FSOUND_SetVolume_8(iVar5,0xff);
              cVar3 = _FSOUND_IsPlaying_4(iVar5);
              while (cVar3 != '\0') {
                Sleep(0x32);
                cVar3 = _FSOUND_IsPlaying_4(iVar5);
              }
            }
            _FSOUND_Sample_Free_4(iVar6);
          }
        }
        else {
          RegCloseKey(pHStack_230);
        }
      }
    }
  }
  _FSOUND_Close_0();
  return 1;
}



/* ---- _FSOUND_Close@0 @ 004011c6 size=6 ---- */

void _FSOUND_Close_0(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _FSOUND_Close_0();
  return;
}



/* ---- _FSOUND_Sample_Free@4 @ 004011cc size=6 ---- */

void _FSOUND_Sample_Free_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _FSOUND_Sample_Free_4();
  return;
}



/* ---- _FSOUND_IsPlaying@4 @ 004011d2 size=6 ---- */

void _FSOUND_IsPlaying_4(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _FSOUND_IsPlaying_4();
  return;
}



/* ---- _FSOUND_SetVolume@8 @ 004011d8 size=6 ---- */

void _FSOUND_SetVolume_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _FSOUND_SetVolume_8();
  return;
}



/* ---- _FSOUND_PlaySound@8 @ 004011de size=6 ---- */

void _FSOUND_PlaySound_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _FSOUND_PlaySound_8();
  return;
}



/* ---- _FSOUND_Sample_Load@20 @ 004011e4 size=6 ---- */

void _FSOUND_Sample_Load_20(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _FSOUND_Sample_Load_20();
  return;
}



/* ---- _FSOUND_Init@12 @ 004011ea size=6 ---- */

void _FSOUND_Init_12(void)

{
                    /* WARNING: Could not recover jumptable at 0x004011ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _FSOUND_Init_12();
  return;
}



/* ---- _sprintf @ 004011f0 size=88 ---- */

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  wchar_t wStack0000000c;
  FILE local_24;
  
  local_24._cnt = 0x7fffffff;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = __output(&local_24,(byte *)_Format,&wStack0000000c);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}



/* ---- ___crtExitProcess @ 00401248 size=47 ---- */

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



/* ---- __cinit @ 00401278 size=106 ---- */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0040ad54 != (code *)0x0) {
    (*DAT_0040ad54)(param_1);
  }
  iVar1 = 0;
  puVar2 = &DAT_0040900c;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_0040901c);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_004020c1);
    puVar2 = &DAT_00409000;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 < &DAT_00409008);
    iVar1 = 0;
  }
  return iVar1;
}



/* ---- doexit @ 004012e2 size=193 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2003 Release */

void __cdecl doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  bool bVar2;
  UINT uExitCode;
  
  if (DAT_004097dc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_004097d8 = 1;
  DAT_004097d4 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_0040ad4c != (undefined4 *)0x0) {
      DAT_0040ad48 = DAT_0040ad48 + -1;
      bVar2 = DAT_0040ad48 < DAT_0040ad4c;
      while (!bVar2) {
        if ((code *)*DAT_0040ad48 != (code *)0x0) {
          (*(code *)*DAT_0040ad48)();
        }
        DAT_0040ad48 = DAT_0040ad48 + -1;
        bVar2 = DAT_0040ad48 < DAT_0040ad4c;
      }
    }
    puVar1 = &DAT_00409020;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 < &DAT_00409028);
  }
  puVar1 = &DAT_0040902c;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_00409030);
  if (param_3 == 0) {
    DAT_004097dc = 1;
    ___crtExitProcess(param_1);
  }
  return;
}



/* ---- _exit @ 004013a3 size=17 ---- */

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2003 Release */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}



/* ---- __exit @ 004013b4 size=17 ---- */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(UINT param_1)

{
  doexit(param_1,1,0);
  return;
}



/* ---- __cexit @ 004013c5 size=15 ---- */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2003 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}



/* ---- FUN_004013d4 @ 004013d4 size=15 ---- */

void FUN_004013d4(void)

{
  doexit(0,1,1);
  return;
}



/* ---- report_failure @ 004013e3 size=41 ---- */

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



/* ---- __security_check_cookie @ 00401414 size=14 ---- */

/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_00409040) {
    return;
  }
  report_failure();
  return;
}



/* ---- __amsg_exit @ 00401422 size=37 ---- */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_004097e8 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*(code *)PTR___exit_00409044)(0xff);
  return;
}



/* ---- entry @ 00401447 size=433 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(void)

{
  HMODULE pHVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  _OSVERSIONINFOA local_114;
  _STARTUPINFOA local_74;
  int local_30;
  int local_2c;
  byte *local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004071a8;
  uStack_c = 0x401453;
  builtin_memcpy(local_114.szCSDVersion + 0x7c,"_\x14@",4);
  local_1c = (undefined1 *)&local_114;
  local_114.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_114);
  DAT_0040979c = local_114.dwPlatformId;
  DAT_004097a8 = local_114.dwMajorVersion;
  _DAT_004097ac = local_114.dwMinorVersion;
  _DAT_004097a0 = local_114.dwBuildNumber & 0x7fff;
  if (local_114.dwPlatformId != 2) {
    _DAT_004097a0 = _DAT_004097a0 | 0x8000;
  }
  _DAT_004097a4 = local_114.dwMajorVersion * 0x100 + local_114.dwMinorVersion;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar1->unused == 0x5a4d) &&
     (piVar4 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar4 == 0x4550)) {
    if ((short)piVar4[6] == 0x10b) {
      if (0xe < (uint)piVar4[0x1d]) {
        iVar2 = piVar4[0x3a];
        goto LAB_00401508;
      }
    }
    else if (((short)piVar4[6] == 0x20b) && (0xe < (uint)piVar4[0x21])) {
      iVar2 = piVar4[0x3e];
LAB_00401508:
      local_20 = (uint)(iVar2 != 0);
      goto LAB_0040150e;
    }
  }
  local_20 = 0;
LAB_0040150e:
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    if (DAT_004097e8 == 1) {
      __FF_MSGBANNER();
    }
    __NMSG_WRITE(0x1c);
    ___crtExitProcess(0xff);
  }
  __RTC_Initialize();
  local_8 = (undefined *)0x0;
  iVar2 = __ioinit();
  if (iVar2 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0040ad40 = GetCommandLineA();
  DAT_004097e0 = ___crtGetEnvironmentStringsA();
  iVar2 = __setargv();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = __setenvp();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  local_2c = __cinit(1);
  if (local_2c != 0) {
    __amsg_exit(local_2c);
  }
  local_74.dwFlags = 0;
  GetStartupInfoA(&local_74);
  pbVar3 = __wincmdln();
  uVar5 = 0;
  local_24 = pbVar3;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  iVar2 = FUN_00401000(pHVar1,uVar5,pbVar3);
  local_30 = iVar2;
  if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(iVar2);
  }
  __cexit();
  return iVar2;
}



/* ---- __flsbuf @ 00401623 size=278 ---- */

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
LAB_0040172c:
    _File->_flag = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      _File->_cnt = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_0040172c;
      _File->_ptr = _File->_base;
      _File->_flag = uVar1 & 0xfffffffe;
    }
    uVar1 = _File->_flag;
    _File->_cnt = 0;
    _File = (FILE *)0x0;
    _File_00->_flag = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((_File_00 != (FILE *)&DAT_004091b0 && (_File_00 != (FILE *)&DAT_004091d0)) ||
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
          puVar4 = &DAT_00409178;
        }
        else {
          puVar4 = (undefined *)((&DAT_0040ac40)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 8);
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



/* ---- write_char @ 00401739 size=51 ---- */

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



/* ---- write_multi_char @ 0040176c size=36 ---- */

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



/* ---- write_string @ 00401790 size=55 ---- */

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



/* ---- __output @ 004017c7 size=2010 ---- */

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
  
  local_8 = DAT_00409040;
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
        uVar3 = (int)(char)(&DAT_00407198)[(char)bVar8] & 0xf;
      }
      local_248 = (int)(char)(&DAT_004071b8)[uVar3 * 8 + local_248] >> 4;
      switch(local_248) {
      case 0:
switchD_0040184c_caseD_0:
        local_234 = 0;
        if ((PTR_DAT_00409428[(uint)bVar8 * 2 + 1] & 0x80) != 0) {
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
                      goto switchD_0040184c_caseD_0;
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
LAB_00401d0a:
                local_240 = 7;
LAB_00401d0d:
                local_220 = (undefined1 *)0x10;
                if ((local_214 & 0x80) != 0) {
                  local_227 = (char)local_240 + 'Q';
                  local_228 = 0x30;
                  local_22c = 2;
                }
                goto LAB_00401b3d;
              }
              if (bVar8 == 0x43) {
                if ((local_214 & 0x830) == 0) {
                  local_214 = local_214 | 0x800;
                }
                goto LAB_00401aec;
              }
              if ((bVar8 != 0x45) && (bVar8 != 0x47)) {
                if (bVar8 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_00401a6f;
                }
                goto LAB_00401e64;
              }
              local_244 = 1;
              bVar8 = bVar8 + 0x20;
              goto LAB_00401ac0;
            }
            if (bVar8 == 0x5a) {
              pwVar4 = param_3 + 2;
              psVar2 = *(short **)param_3;
              param_3 = pwVar4;
              if ((psVar2 == (short *)0x0) ||
                 (local_21c = *(wchar_t **)(psVar2 + 2), local_21c == (wchar_t *)0x0)) {
                local_21c = (wchar_t *)PTR_s__null__0040904c;
                pwVar4 = (wchar_t *)PTR_s__null__0040904c;
                goto LAB_00401c7e;
              }
              local_220 = (undefined1 *)(int)*psVar2;
              if ((local_214 & 0x800) == 0) {
                local_234 = 0;
              }
              else {
                local_220 = (undefined1 *)((int)local_220 / 2);
                local_234 = 1;
              }
              goto LAB_00401e61;
            }
            if (bVar8 == 99) {
LAB_00401aec:
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
            else if (bVar8 == 100) goto LAB_00401b32;
          }
          else {
LAB_00401ac0:
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
            (*(code *)PTR_FUN_00409410)(&local_258,pwVar4,(int)(char)bVar8,local_218,local_244);
            uVar3 = local_214 & 0x80;
            if ((uVar3 != 0) && (local_218 == 0)) {
              (*(code *)PTR_FUN_0040941c)(pwVar4);
            }
            if ((bVar8 == 0x67) && (uVar3 == 0)) {
              (*(code *)PTR_FUN_00409414)(pwVar4);
            }
            if ((char)*pwVar4 == '-') {
              local_214 = local_214 | 0x100;
              pwVar4 = (wchar_t *)((int)pwVar4 + 1);
              local_21c = pwVar4;
            }
            param_3 = param_3 + 4;
LAB_00401c7e:
            local_220 = (undefined1 *)_strlen((char *)pwVar4);
LAB_00401e61:
          }
LAB_00401e64:
          uVar3 = local_214;
          if (local_23c == 0) {
            if ((local_214 & 0x40) != 0) {
              if ((local_214 & 0x100) == 0) {
                if ((local_214 & 1) == 0) {
                  if ((local_214 & 2) == 0) goto LAB_00401e9c;
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
LAB_00401e9c:
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
LAB_00401b32:
            local_214 = local_214 | 0x40;
LAB_00401b36:
            local_220 = (undefined1 *)0xa;
LAB_00401b3d:
            if ((local_214 & 0x8000) == 0) {
              if ((local_214 & 0x20) == 0) {
                uVar3 = *(uint *)param_3;
                if ((local_214 & 0x40) == 0) {
                  uVar7 = 0;
                  param_3 = param_3 + 2;
                  goto LAB_00401dae;
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
LAB_00401dae:
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
              goto LAB_00401e61;
            }
            goto LAB_00401e64;
          }
          if (bVar8 != 0x6e) {
            if (bVar8 != 0x6f) {
              if (bVar8 == 0x70) {
                local_218 = 8;
                goto LAB_00401d0a;
              }
              if (bVar8 == 0x73) {
LAB_00401a6f:
                iVar6 = local_218;
                if (local_218 == -1) {
                  iVar6 = 0x7fffffff;
                }
                local_21c = *(wchar_t **)param_3;
                if ((local_214 & 0x810) == 0) {
                  if (local_21c == (wchar_t *)0x0) {
                    local_21c = (wchar_t *)PTR_s__null__0040904c;
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
                    local_21c = (wchar_t *)PTR_DAT_00409050;
                  }
                  local_234 = 1;
                  for (pwVar4 = local_21c; (iVar6 != 0 && (iVar6 = iVar6 + -1, *pwVar4 != L'\0'));
                      pwVar4 = pwVar4 + 1) {
                  }
                  local_220 = (undefined1 *)((int)pwVar4 - (int)local_21c >> 1);
                  param_3 = param_3 + 2;
                }
                goto LAB_00401e61;
              }
              if (bVar8 != 0x75) {
                if (bVar8 != 0x78) goto LAB_00401e64;
                local_240 = 0x27;
                goto LAB_00401d0d;
              }
              goto LAB_00401b36;
            }
            local_220 = (undefined1 *)0x8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_00401b3d;
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



/* ---- __onexit @ 00401fc1 size=130 ---- */

/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  size_t sVar1;
  void *pvVar2;
  size_t sVar3;
  
  sVar1 = __msize(DAT_0040ad4c);
  if (sVar1 < (uint)((int)DAT_0040ad48 + (4 - (int)DAT_0040ad4c))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    pvVar2 = _realloc(DAT_0040ad4c,sVar3 + sVar1);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = _realloc(DAT_0040ad4c,sVar1 + 0x10);
      if (pvVar2 == (void *)0x0) {
        return (_onexit_t)0x0;
      }
    }
    DAT_0040ad48 = (undefined4 *)((int)pvVar2 + ((int)DAT_0040ad48 - (int)DAT_0040ad4c >> 2) * 4);
    DAT_0040ad4c = pvVar2;
  }
  *DAT_0040ad48 = _Func;
  DAT_0040ad48 = DAT_0040ad48 + 1;
  return _Func;
}



/* ---- _atexit @ 00402043 size=18 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2003 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- ___onexitinit @ 00402055 size=40 ---- */

/* Library Function - Single Match
    ___onexitinit
   
   Library: Visual Studio 2003 Release */

undefined4 ___onexitinit(void)

{
  DAT_0040ad4c = _malloc(0x80);
  if (DAT_0040ad4c == (undefined4 *)0x0) {
    return 0x18;
  }
  *DAT_0040ad4c = 0;
  DAT_0040ad48 = DAT_0040ad4c;
  return 0;
}



/* ---- __RTC_Initialize @ 0040207d size=61 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2003 Release */

void __RTC_Initialize(void)

{
  undefined4 *local_20;
  
  for (local_20 = &DAT_00407e6c; local_20 < &DAT_00407e6c; local_20 = local_20 + 1) {
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)();
    }
  }
  return;
}



/* ---- ___security_init_cookie @ 00402105 size=102 ---- */

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
  
  if ((DAT_00409040 == 0) || (DAT_00409040 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime(&local_c);
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00409040 = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                   local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00409040 == 0) {
      DAT_00409040 = 0xbb40e64e;
    }
  }
  return;
}



/* ---- ___security_error_handler @ 0040216b size=319 ---- */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___security_error_handler
   
   Library: Visual Studio 2003 Release */

void ___security_error_handler(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  size_t sVar3;
  uint *_Str;
  char *pcVar4;
  uint auStackY_375 [128];
  uint *local_12c;
  uint local_128 [65];
  undefined1 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407438;
  uStack_c = 0x40217a;
  local_20 = DAT_00409040;
  if (DAT_004097ec == (code *)0x0) {
    if (param_1 == 1) {
      pcVar4 = "Buffer overrun detected!";
      local_12c = (uint *)0x4072a0;
    }
    else {
      pcVar4 = "Unknown security failure detected!";
      local_12c = (uint *)0x407360;
    }
    local_24 = 0;
    DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_128,0x104);
    if (DVar2 == 0) {
      FUN_00403670(local_128,(uint *)"<program name unknown>");
    }
    _Str = local_128;
    sVar3 = _strlen((char *)_Str);
    if (0x3c < sVar3 + 0xb) {
      sVar3 = _strlen((char *)_Str);
      _Str = (uint *)((int)auStackY_375 + sVar3 + 0x21c);
      _strncpy((char *)_Str,"...",3);
    }
    _strlen((char *)_Str);
    local_1c = (undefined1 *)(local_128 + -4);
    FUN_00403670(local_128 + -4,(uint *)pcVar4);
    FUN_00403680(local_128 + -4,(uint *)&DAT_00407280);
    FUN_00403680(local_128 + -4,(uint *)"Program: ");
    FUN_00403680(local_128 + -4,_Str);
    FUN_00403680(local_128 + -4,(uint *)&DAT_00407280);
    FUN_00403680(local_128 + -4,local_12c);
    ___crtMessageBoxA((LPCSTR)(local_128 + -4),"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = (undefined *)0x0;
    (*DAT_004097ec)();
    local_8 = (undefined *)0xffffffff;
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- __SEH_prolog @ 004022b4 size=59 ---- */

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



/* ---- __SEH_epilog @ 004022ef size=17 ---- */

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



/* ---- FUN_004023ee @ 004023ee size=27 ---- */

void FUN_004023ee(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ---- __NMSG_WRITE @ 00402409 size=375 ---- */

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
  
  local_8 = DAT_00409040;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_00409058)[uVar2 * 2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x13);
  iVar6 = uVar2 * 8;
  if (param_1 == (&DAT_00409058)[uVar2 * 2]) {
    if ((DAT_004097e8 == 1) || ((DAT_004097e8 == 0 && (DAT_00409048 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = (LPDWORD)&param_1;
      sVar4 = _strlen(*(char **)(iVar6 + 0x40905c));
      lpBuffer = *(LPCVOID *)(iVar6 + 0x40905c);
      uStackY_134 = 0x40255d;
      hFile = GetStdHandle(0xfffffff4);
      uStackY_134 = 0x402564;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      local_c = 0;
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_110,0x104);
      if (DVar3 == 0) {
        FUN_00403670(&local_110,(uint *)"<program name unknown>");
      }
      _Str = (char *)&local_110;
      sVar4 = _strlen(_Str);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(_Str);
        _Str = (char *)((int)aUStackY_148 + (sVar4 - 3));
        _strncpy(_Str,"...",3);
      }
      sVar4 = _strlen(_Str);
      sVar5 = _strlen(*(char **)(iVar6 + 0x40905c));
      iVar1 = -(sVar4 + sVar5 + 0x1f & 0xfffffffc);
      *(char **)((int)auStack_10c + iVar1 + -0x14) = "Runtime Error!\n\nProgram: ";
      *(int *)((int)auStackY_13c + iVar1 + 0x18) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 0x14) = 0x402509;
      FUN_00403670(*(uint **)((int)auStackY_13c + iVar1 + 0x18),
                   *(uint **)((int)auStack_10c + iVar1 + -0x14));
      *(char **)((int)auStackY_13c + iVar1 + 0x14) = _Str;
      *(int *)((int)auStackY_13c + iVar1 + 0x10) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 0xc) = 0x402510;
      FUN_00403680(*(uint **)((int)auStackY_13c + iVar1 + 0x10),
                   *(uint **)((int)auStackY_13c + iVar1 + 0x14));
      *(undefined **)((int)auStackY_13c + iVar1 + 0xc) = &DAT_00407280;
      *(int *)((int)auStackY_13c + iVar1 + 8) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = 0x40251b;
      FUN_00403680(*(uint **)((int)auStackY_13c + iVar1 + 8),
                   *(uint **)((int)auStackY_13c + iVar1 + 0xc));
      *(undefined4 *)((int)auStackY_13c + iVar1 + 4) = *(undefined4 *)(iVar6 + 0x40905c);
      *(int *)((int)auStackY_13c + iVar1) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x402527;
      FUN_00403680(*(uint **)((int)auStackY_13c + iVar1),*(uint **)((int)auStackY_13c + iVar1 + 4));
      *(undefined4 *)((int)aUStackY_148 + iVar1 + 8) = 0x12010;
      *(char **)((int)aUStackY_148 + iVar1 + 4) = "Microsoft Visual C++ Runtime Library";
      *(int *)((int)aUStackY_148 + iVar1) = (int)auStack_10c + iVar1 + -0x10;
      *(undefined4 *)((int)aUStackY_148 + iVar1 + -4) = 0x402537;
      ___crtMessageBoxA(*(LPCSTR *)((int)aUStackY_148 + iVar1),
                        *(LPCSTR *)((int)aUStackY_148 + iVar1 + 4),
                        *(UINT *)((int)aUStackY_148 + iVar1 + 8));
    }
  }
  return;
}



/* ---- __FF_MSGBANNER @ 00402580 size=57 ---- */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_004097e8 == 1) || ((DAT_004097e8 == 0 && (DAT_00409048 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_004097f0 != (code *)0x0) {
      (*DAT_004097f0)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}



/* ---- __XcptFilter @ 004025b9 size=369 ---- */

/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  
  uVar4 = DAT_004097f4;
  puVar6 = &DAT_004090f0;
  do {
    if (*puVar6 == _ExceptionNum) break;
    puVar6 = puVar6 + 3;
  } while (puVar6 < &DAT_004090f0 + DAT_00409170 * 3);
  if ((&DAT_004090f0 + DAT_00409170 * 3 <= puVar6) || (*puVar6 != _ExceptionNum)) {
    puVar6 = (ulong *)0x0;
  }
  if ((puVar6 == (ulong *)0x0) || (pcVar1 = (code *)puVar6[2], pcVar1 == (code *)0x0)) {
    iVar5 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (pcVar1 == (code *)0x5) {
    puVar6[2] = 0;
    iVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_004097f4 = _ExceptionPtr;
      if (puVar6[1] == 8) {
        if (DAT_00409168 < DAT_0040916c + DAT_00409168) {
          puVar7 = (undefined4 *)(DAT_00409168 * 0xc + 0x4090f8);
          iVar5 = (DAT_0040916c + DAT_00409168) - DAT_00409168;
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        uVar3 = DAT_00409174;
        uVar2 = *puVar6;
        if (uVar2 == 0xc000008e) {
          DAT_00409174 = 0x83;
        }
        else if (uVar2 == 0xc0000090) {
          DAT_00409174 = 0x81;
        }
        else if (uVar2 == 0xc0000091) {
          DAT_00409174 = 0x84;
        }
        else if (uVar2 == 0xc0000093) {
          DAT_00409174 = 0x85;
        }
        else if (uVar2 == 0xc000008d) {
          DAT_00409174 = 0x82;
        }
        else if (uVar2 == 0xc000008f) {
          DAT_00409174 = 0x86;
        }
        else if (uVar2 == 0xc0000092) {
          DAT_00409174 = 0x8a;
        }
        (*pcVar1)(8,DAT_00409174);
        DAT_00409174 = uVar3;
      }
      else {
        puVar6[2] = 0;
        (*pcVar1)(puVar6[1]);
      }
    }
    iVar5 = -1;
    DAT_004097f4 = (_EXCEPTION_POINTERS *)uVar4;
  }
  return iVar5;
}



/* ---- __wincmdln @ 0040272a size=93 ---- */

/* Library Function - Single Match
    __wincmdln
   
   Library: Visual Studio 2003 Release */

byte * __wincmdln(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = false;
  if (DAT_0040ad50 == 0) {
    ___initmbctable();
  }
  pbVar4 = DAT_0040ad40;
  if (DAT_0040ad40 == (byte *)0x0) {
    pbVar4 = &DAT_00407802;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* ---- __setenvp @ 00402787 size=199 ---- */

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
  
  if (DAT_0040ad50 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  puVar4 = DAT_004097e0;
  if (DAT_004097e0 != (uint *)0x0) {
    for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + sVar2 + 1)) {
      if ((char)*puVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen((char *)puVar4);
    }
    puVar1 = _malloc(iVar5 * 4 + 4);
    DAT_004097bc = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = DAT_004097e0;
      do {
        if ((char)*puVar4 == '\0') {
          _free(DAT_004097e0);
          DAT_004097e0 = (uint *)0x0;
          *puVar1 = 0;
          _DAT_0040ad44 = 1;
          return 0;
        }
        sVar2 = _strlen((char *)puVar4);
        if ((char)*puVar4 != '=') {
          puVar3 = _malloc(sVar2 + 1);
          *puVar1 = puVar3;
          if (puVar3 == (uint *)0x0) {
            _free(DAT_004097bc);
            DAT_004097bc = (undefined4 *)0x0;
            return -1;
          }
          FUN_00403670(puVar3,puVar4);
          puVar1 = puVar1 + 1;
        }
        puVar4 = (uint *)((int)puVar4 + sVar2 + 1);
      } while( true );
    }
  }
  return -1;
}



/* ---- parse_cmdline @ 0040284e size=364 ---- */

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
      if ((*(byte *)((int)&DAT_004099e0 + bVar4 + 1) & 4) != 0) {
        *unaff_ESI = *unaff_ESI + 1;
        if (in_ECX != (byte *)0x0) {
          *in_ECX = *pbVar3;
          in_ECX = in_ECX + 1;
        }
        pbVar3 = in_EAX + 2;
      }
      if (bVar4 == 0) {
        pbVar3 = pbVar3 + -1;
        goto LAB_004028c7;
      }
    }
    in_EAX = pbVar3;
  } while ((bVar1) || ((bVar4 != 0x20 && (bVar4 != 9))));
  if (in_ECX != (byte *)0x0) {
    in_ECX[-1] = 0;
  }
LAB_004028c7:
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
          if ((*(byte *)((int)&DAT_004099e0 + bVar4 + 1) & 4) != 0) {
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_004099e0 + bVar4 + 1) & 4) != 0) {
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



/* ---- __setargv @ 004029ba size=162 ---- */

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
  if (DAT_0040ad50 == 0) {
    ___initmbctable();
  }
  DAT_004098fc = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_004097f8,0x104);
  _DAT_004097cc = &DAT_004097f8;
  parse_cmdline((undefined4 *)0x0,&local_8);
  puVar1 = _malloc(in_ECX + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
    parse_cmdline(puVar1,&local_8);
    DAT_004097b0 = local_8 + -1;
    iVar2 = 0;
    DAT_004097b4 = puVar1;
  }
  return iVar2;
}



/* ---- ___crtGetEnvironmentStringsA @ 00402a5c size=290 ---- */

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
  if (DAT_00409900 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_00409900 = 1;
      goto LAB_00402aaa;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_00409900 = 2;
    }
  }
  if (DAT_00409900 != 1) {
    if ((DAT_00409900 != 2) && (DAT_00409900 != 0)) {
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
LAB_00402aaa:
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



/* ---- __ioinit @ 00402b7e size=427 ---- */

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
  byte *pbVar7;
  UINT *pUVar8;
  UINT UVar9;
  uint uVar10;
  _STARTUPINFOA local_44;
  
  puVar3 = _malloc(0x100);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = -1;
  }
  else {
    DAT_0040ac2c = 0x20;
    DAT_0040ac40 = puVar3;
    for (; puVar3 < DAT_0040ac40 + 0x40; puVar3 = puVar3 + 2) {
      *puVar3 = 0xffffffff;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(undefined1 *)((int)puVar3 + 5) = 10;
    }
    GetStartupInfoA(&local_44);
    if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_44.lpReserved2;
      pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
      pbVar7 = (byte *)(UVar9 + (int)pUVar8);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      if ((int)DAT_0040ac2c < (int)UVar9) {
        puVar3 = &DAT_0040ac44;
        do {
          puVar5 = _malloc(0x100);
          if (puVar5 == (undefined4 *)0x0) {
            UVar9 = DAT_0040ac2c;
            break;
          }
          DAT_0040ac2c = DAT_0040ac2c + 0x20;
          *puVar3 = puVar5;
          puVar2 = puVar5;
          for (; puVar5 < puVar2 + 0x40; puVar5 = puVar5 + 2) {
            *puVar5 = 0xffffffff;
            *(undefined1 *)(puVar5 + 1) = 0;
            *(undefined1 *)((int)puVar5 + 5) = 10;
            puVar2 = (undefined4 *)*puVar3;
          }
          puVar3 = puVar3 + 1;
        } while ((int)DAT_0040ac2c < (int)UVar9);
      }
      uVar10 = 0;
      if (0 < (int)UVar9) {
        do {
          if (((*(HANDLE *)pbVar7 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
             (((*pUVar8 & 8) != 0 || (DVar6 = GetFileType(*(HANDLE *)pbVar7), DVar6 != 0)))) {
            puVar3 = (undefined4 *)((int)(&DAT_0040ac40)[(int)uVar10 >> 5] + (uVar10 & 0x1f) * 8);
            *puVar3 = *(undefined4 *)pbVar7;
            *(byte *)(puVar3 + 1) = (byte)*pUVar8;
          }
          uVar10 = uVar10 + 1;
          pUVar8 = (UINT *)((int)pUVar8 + 1);
          pbVar7 = pbVar7 + 4;
        } while ((int)uVar10 < (int)UVar9);
      }
    }
    iVar4 = 0;
    do {
      piVar1 = DAT_0040ac40 + iVar4 * 2;
      if (*piVar1 == -1) {
        *(undefined1 *)(piVar1 + 1) = 0x81;
        if (iVar4 == 0) {
          DVar6 = 0xfffffff6;
        }
        else {
          DVar6 = 0xfffffff5 - (iVar4 != 1);
        }
        hFile = GetStdHandle(DVar6);
        if ((hFile != (HANDLE)0xffffffff) && (DVar6 = GetFileType(hFile), DVar6 != 0)) {
          *piVar1 = (int)hFile;
          if ((DVar6 & 0xff) != 2) {
            if ((DVar6 & 0xff) == 3) {
              *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 8;
            }
            goto LAB_00402d0e;
          }
        }
        *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x40;
      }
      else {
        *(byte *)(piVar1 + 1) = *(byte *)(piVar1 + 1) | 0x80;
      }
LAB_00402d0e:
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    SetHandleCount(DAT_0040ac2c);
    iVar4 = 0;
  }
  return iVar4;
}



/* ---- ___heap_select @ 00402d29 size=26 ---- */

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2003 Release */

undefined4 ___heap_select(void)

{
  if ((DAT_0040979c == 2) && (4 < DAT_004097a8)) {
    return 1;
  }
  return 3;
}



/* ---- __heap_init @ 00402d43 size=81 ---- */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2003 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_0040ac24 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_0040ac24 == (HANDLE)0x0) {
    return 0;
  }
  DAT_0040ac28 = ___heap_select();
  if ((DAT_0040ac28 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_0040ac24);
    return 0;
  }
  return 1;
}



/* ---- __chkstk @ 00402da0 size=61 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

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



/* ---- __lseek @ 00402ddd size=140 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2003 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  ulong uVar3;
  int iVar4;
  
  if ((uint)_FileHandle < DAT_0040ac2c) {
    iVar4 = (_FileHandle & 0x1fU) * 8;
    if ((*(byte *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)__get_osfhandle(_FileHandle);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_00409790 = 9;
        return -1;
      }
      DVar2 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        pbVar1 = (byte *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + iVar4);
        *pbVar1 = *pbVar1 & 0xfd;
        return DVar2;
      }
      __dosmaperr(uVar3);
      return -1;
    }
  }
  _DAT_00409794 = 0;
  _DAT_00409790 = 9;
  return -1;
}



/* ---- __write @ 00402e69 size=496 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2003 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  int unaff_EDI;
  int iVar9;
  int local_41c;
  DWORD local_418;
  DWORD local_414;
  char *local_410;
  char local_40c [1028];
  undefined4 local_8;
  
  local_8 = DAT_00409040;
  if ((uint)_FileHandle < DAT_0040ac2c) {
    piVar1 = &DAT_0040ac40 + (_FileHandle >> 5);
    iVar8 = (_FileHandle & 0x1fU) * 8;
    bVar3 = *(byte *)(*piVar1 + 4 + iVar8);
    if ((bVar3 & 1) != 0) {
      local_414 = 0;
      local_41c = 0;
      if (_MaxCharCount == 0) {
        return 0;
      }
      if ((bVar3 & 0x20) != 0) {
        __lseeki64(_FileHandle,0x200000000,unaff_EDI);
      }
      if ((*(byte *)((undefined4 *)(*piVar1 + iVar8) + 1) & 0x80) == 0) {
        BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar8),_Buf,_MaxCharCount,&local_418,
                          (LPOVERLAPPED)0x0);
        if (BVar6 == 0) {
          _FileHandle = GetLastError();
        }
        else {
          _FileHandle = 0;
          local_414 = local_418;
        }
LAB_00402f94:
        if (local_414 != 0) {
          return local_414 - local_41c;
        }
        if (_FileHandle != 0) {
          if (_FileHandle == 5) {
            _DAT_00409790 = 9;
            _DAT_00409794 = 5;
            return -1;
          }
          __dosmaperr(_FileHandle);
          return -1;
        }
      }
      else {
        local_410 = _Buf;
        _FileHandle = 0;
        if (_MaxCharCount != 0) {
          do {
            iVar9 = 0;
            uVar7 = (int)local_410 - (int)_Buf;
            pcVar5 = local_40c;
            do {
              if (_MaxCharCount <= uVar7) break;
              pcVar2 = local_410 + 1;
              cVar4 = *local_410;
              uVar7 = uVar7 + 1;
              if (cVar4 == '\n') {
                local_41c = local_41c + 1;
                *pcVar5 = '\r';
                pcVar5 = pcVar5 + 1;
                iVar9 = iVar9 + 1;
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
              iVar9 = iVar9 + 1;
              local_410 = pcVar2;
            } while (iVar9 < 0x400);
            BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar8),local_40c,(int)pcVar5 - (int)local_40c,
                              &local_418,(LPOVERLAPPED)0x0);
            if (BVar6 == 0) {
              _FileHandle = GetLastError();
              goto LAB_00402f94;
            }
            local_414 = local_414 + local_418;
            if (((int)local_418 < (int)pcVar5 - (int)local_40c) ||
               (_MaxCharCount <= (uint)((int)local_410 - (int)_Buf))) goto LAB_00402f94;
          } while( true );
        }
      }
      if (((*(byte *)(*piVar1 + 4 + iVar8) & 0x40) == 0) || (*(char *)_Buf != '\x1a')) {
        _DAT_00409790 = 0x1c;
        _DAT_00409794 = 0;
        return -1;
      }
      return 0;
    }
  }
  _DAT_00409794 = 0;
  _DAT_00409790 = 9;
  return -1;
}



/* ---- __getbuf @ 00403059 size=68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_00409904 = _DAT_00409904 + 1;
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



/* ---- __isatty @ 0040309d size=39 ---- */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Release */

int __cdecl __isatty(int _FileHandle)

{
  if ((uint)_FileHandle < DAT_0040ac2c) {
    return (int)*(char *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40;
  }
  return 0;
}



/* ---- ___endstdio @ 0040316a size=20 ---- */

/* Library Function - Single Match
    ___endstdio
   
   Library: Visual Studio 2003 Release */

void ___endstdio(void)

{
  __flushall();
  if (DAT_004097d4 == '\0') {
    return;
  }
  __fcloseall();
  return;
}



/* ---- _free @ 0040317e size=56 ---- */

/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2003 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_0040ac28 == 3) {
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
        return;
      }
    }
    HeapFree(DAT_0040ac24,0,_Memory);
  }
  return;
}



/* ---- _strlen @ 004031c0 size=139 ---- */

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
      if ((char)uVar1 == '\0') goto LAB_00403223;
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
LAB_00403223:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* ---- __heap_alloc @ 0040324b size=70 ---- */

/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  int *piVar1;
  LPVOID pvVar2;
  
  if (((DAT_0040ac28 == 3) && (_Size <= DAT_004099ac)) &&
     (piVar1 = ___sbh_alloc_block((uint *)_Size), piVar1 != (int *)0x0)) {
    return piVar1;
  }
  if (_Size == 0) {
    _Size = 1;
  }
  if (DAT_0040ac28 != 1) {
    _Size = _Size + 0xf & 0xfffffff0;
  }
  pvVar2 = HeapAlloc(DAT_0040ac24,0,_Size);
  return pvVar2;
}



/* ---- __nh_malloc @ 00403291 size=44 ---- */

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



/* ---- _malloc @ 004032bd size=18 ---- */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_00409974);
  return pvVar1;
}



/* ---- _wctomb @ 004032cf size=102 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2003 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  char *lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = _MbCh;
  if (_MbCh == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    if (DAT_00409980 == 0) {
      if ((ushort)_WCh < 0x100) {
        *_MbCh = (char)_WCh;
        return 1;
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(DAT_00409990,0,&_WCh,1,lpMultiByteStr,DAT_004096ac,(LPCSTR)0x0,
                                  (LPBOOL)&_MbCh);
      if ((iVar1 != 0) && (_MbCh == (char *)0x0)) {
        return iVar1;
      }
    }
    _DAT_00409790 = 0x2a;
    iVar1 = -1;
  }
  return iVar1;
}



/* ---- __aulldvrm @ 00403340 size=149 ---- */

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



/* ---- _realloc @ 004033d5 size=354 ---- */

/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  uint *puVar2;
  int iVar3;
  int *_Dst;
  uint *_Size;
  LPVOID pvVar4;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
  }
  else {
    if (_NewSize == 0) {
      _free(_Memory);
    }
    else if (DAT_0040ac28 == 3) {
      do {
        if (_NewSize < (uint *)0xffffffe1) {
          puVar2 = (uint *)___sbh_find_block((int)_Memory);
          if (puVar2 == (uint *)0x0) {
LAB_004034bd:
            if ((uint *)_NewSize == (uint *)0x0) {
              _NewSize = 1;
            }
            _NewSize = _NewSize + 0xf & 0xfffffff0;
            _Dst = HeapReAlloc(DAT_0040ac24,0,_Memory,_NewSize);
          }
          else {
            if (DAT_004099ac < _NewSize) {
LAB_0040347d:
              if ((uint *)_NewSize == (uint *)0x0) {
                _NewSize = 1;
              }
              _NewSize = _NewSize + 0xf & 0xfffffff0;
              _Dst = HeapAlloc(DAT_0040ac24,0,_NewSize);
              if (_Dst != (int *)0x0) {
                _Size = (uint *)(*(int *)((int)_Memory + -4) - 1);
                if (_NewSize <= _Size) {
                  _Size = (uint *)_NewSize;
                }
                _memcpy(_Dst,_Memory,(size_t)_Size);
                ___sbh_free_block(puVar2,(int)_Memory);
              }
            }
            else {
              iVar3 = ___sbh_resize_block(puVar2,(int)_Memory,_NewSize);
              if (iVar3 == 0) {
                _Dst = ___sbh_alloc_block((uint *)_NewSize);
                if (_Dst == (int *)0x0) goto LAB_0040347d;
                puVar2 = (uint *)(*(int *)((int)_Memory + -4) - 1);
                if (_NewSize <= puVar2) {
                  puVar2 = (uint *)_NewSize;
                }
                _memcpy(_Dst,_Memory,(size_t)puVar2);
                puVar2 = (uint *)___sbh_find_block((int)_Memory);
                ___sbh_free_block(puVar2,(int)_Memory);
              }
              else {
                _Dst = _Memory;
              }
              if (_Dst == (int *)0x0) goto LAB_0040347d;
            }
            if (puVar2 == (uint *)0x0) goto LAB_004034bd;
          }
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        if (DAT_00409974 == 0) {
          return (void *)0x0;
        }
        iVar3 = __callnewh(_NewSize);
      } while (iVar3 != 0);
    }
    else {
      do {
        if (_NewSize < 0xffffffe1) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          pvVar4 = HeapReAlloc(DAT_0040ac24,0,_Memory,_NewSize);
          if (pvVar4 != (LPVOID)0x0) {
            return pvVar4;
          }
        }
        if (DAT_00409974 == 0) {
          return (void *)0x0;
        }
        iVar3 = __callnewh(_NewSize);
      } while (iVar3 != 0);
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ---- __msize @ 00403537 size=56 ---- */

/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2003 Release */

size_t __cdecl __msize(void *_Memory)

{
  uint uVar1;
  SIZE_T SVar2;
  
  if ((DAT_0040ac28 == 3) && (uVar1 = ___sbh_find_block((int)_Memory), uVar1 != 0)) {
    return *(int *)((int)_Memory + -4) - 9;
  }
  SVar2 = HeapSize(DAT_0040ac24,0,_Memory);
  return SVar2;
}



/* ---- ___crtMessageBoxA @ 0040356f size=249 ---- */

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
  if (DAT_00409908 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_00409908 = GetProcAddress(hModule,"MessageBoxA"), DAT_00409908 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_0040990c = GetProcAddress(hModule,"GetActiveWindow");
    DAT_00409910 = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_0040979c == 2) &&
       (DAT_00409918 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_00409918 != (FARPROC)0x0)) {
      DAT_00409914 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_00409914 == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_00409914)(), iVar1 != 0 &&
       (iVar1 = (*DAT_00409918)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0))
     )) {
    if (((DAT_0040990c != (FARPROC)0x0) && (iVar2 = (*DAT_0040990c)(), iVar2 != 0)) &&
       (DAT_00409910 != (FARPROC)0x0)) {
      iVar2 = (*DAT_00409910)(iVar2);
    }
  }
  else if (DAT_004097a8 < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*DAT_00409908)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}



/* ---- FUN_00403670 @ 00403670 size=7 ---- */

uint * __cdecl FUN_00403670(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_00403760;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_00403760:
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



/* ---- FUN_00403680 @ 00403680 size=232 ---- */

uint * __cdecl FUN_00403680(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_004036a0;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_004036d3;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x004036ef;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_004036a0:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x004036ef;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x004036ef;
    }
  }
LAB_004036d3:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x004036ef:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_00403760:
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
    if (bVar1 == 0) goto LAB_00403760;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ---- _strncpy @ 00403770 size=292 ---- */

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
        goto joined_r0x004037bc;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_00403803;
        goto LAB_00403879;
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
joined_r0x00403875:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00403879:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00403803;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00403875;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00403875;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00403875;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x004037bc:
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
LAB_00403803:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ---- __global_unwind2 @ 00403894 size=32 ---- */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4038ac,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- __local_unwind2 @ 004038d6 size=104 ---- */

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
  puStack_18 = &LAB_004038b4;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_0040396a();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ---- FUN_0040396a @ 0040396a size=24 ---- */

void FUN_0040396a(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00409438 = *(undefined4 *)(unaff_EBP + 8);
  DAT_00409434 = in_EAX;
  DAT_0040943c = unaff_EBP;
  return;
}



/* ---- __ValidateEH3RN @ 00403982 size=553 ---- */

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
  if (0 < DAT_00409920) {
    do {
      if ((&DAT_00409928)[iVar13] == uVar10) {
        if (iVar13 < 1) {
          return 1;
        }
        LVar7 = InterlockedExchange((LONG *)&DAT_00409968,1);
        if (LVar7 != 0) {
          return 1;
        }
        if ((&DAT_00409928)[iVar13] == uVar10) goto LAB_00403b7d;
        iVar13 = DAT_00409920 + -1;
        if (iVar13 < 0) goto LAB_00403b6b;
        goto LAB_00403b5b;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < DAT_00409920);
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
  LVar7 = InterlockedExchange((LONG *)&DAT_00409968,1);
  iVar13 = DAT_00409920;
  if (LVar7 != 0) {
    return 1;
  }
  iVar11 = DAT_00409920;
  if (0 < DAT_00409920) {
    puVar8 = (uint *)(&DAT_00409924 + DAT_00409920 * 4);
    do {
      if (*puVar8 == uVar10) break;
      iVar11 = iVar11 + -1;
      puVar8 = puVar8 + -1;
    } while (0 < iVar11);
  }
  if (iVar11 == 0) {
    iVar11 = 0xf;
    if (DAT_00409920 < 0x10) {
      iVar11 = DAT_00409920;
    }
    iVar12 = 0;
    if (-1 < iVar11) {
      do {
        puVar8 = &DAT_00409928 + iVar12;
        uVar9 = *puVar8;
        iVar12 = iVar12 + 1;
        *puVar8 = uVar10;
        uVar10 = uVar9;
      } while (iVar12 <= iVar11);
    }
    if (iVar13 < 0x10) {
      DAT_00409920 = iVar13 + 1;
    }
  }
  InterlockedExchange((LONG *)&DAT_00409968,0);
  return 1;
  while (iVar13 = iVar13 + -1, -1 < iVar13) {
LAB_00403b5b:
    if ((&DAT_00409928)[iVar13] == uVar10) break;
  }
  if (iVar13 < 0) {
LAB_00403b6b:
    if (DAT_00409920 < 0x10) {
      DAT_00409920 = DAT_00409920 + 1;
    }
    iVar13 = DAT_00409920 + -1;
  }
  else if (iVar13 == 0) goto LAB_00403b95;
LAB_00403b7d:
  iVar11 = 0;
  if (-1 < iVar13) {
    do {
      puVar8 = &DAT_00409928 + iVar11;
      uVar9 = *puVar8;
      iVar11 = iVar11 + 1;
      *puVar8 = uVar10;
      uVar10 = uVar9;
    } while (iVar11 <= iVar13);
  }
LAB_00403b95:
  InterlockedExchange((LONG *)&DAT_00409968,0);
  return 1;
}



/* ---- x_ismbbtype @ 00403bab size=51 ---- */

/* Library Function - Single Match
    _x_ismbbtype
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl x_ismbbtype(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_004099e0 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(PTR_DAT_00409428 + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



/* ---- __ismbblead @ 00403bde size=17 ---- */

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2003 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype((byte)_C,0,4);
  return iVar1;
}



/* ---- _CPtoLCID @ 00403bef size=47 ---- */

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



/* ---- setSBCS @ 00403c1e size=41 ---- */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004099e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00409ae4 = 0;
  DAT_004099c0 = 0;
  DAT_004099bc = 0;
  DAT_00409af0 = 0;
  DAT_00409af4 = 0;
  DAT_00409af8 = 0;
  return;
}



/* ---- setSBUpLow @ 00403c47 size=396 ---- */

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
  
  local_8 = DAT_00409040;
  BVar2 = GetCPInfo((UINT)DAT_00409ae4,&local_1c);
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
              ((_locale_t)0x1,(DWORD)local_11c,(LPCSTR)0x100,(int)local_51c,DAT_00409ae4,
               (int)DAT_004099bc,0);
    _BError = DAT_004099bc;
    ___crtLCMapStringA(DAT_004099bc,(LPCWSTR)0x100,(DWORD)local_11c,(LPCSTR)0x100,(int)local_21c,
                       (LPSTR)0x100,(int)DAT_00409ae4,0,BVar2);
    ___crtLCMapStringA(DAT_004099bc,(LPCWSTR)0x200,(DWORD)local_11c,(LPCSTR)0x100,(int)local_31c,
                       (LPSTR)0x100,(int)DAT_00409ae4,0,(BOOL)_BError);
    uVar3 = 0;
    do {
      if ((local_51c[uVar3] & 1) == 0) {
        if ((local_51c[uVar3] & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_004099e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar4 = local_31c[uVar3];
          goto LAB_00403d59;
        }
        (&DAT_00409b00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_004099e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar4 = local_21c[uVar3];
LAB_00403d59:
        (&DAT_00409b00)[uVar3] = uVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_004099e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar5 = (char)uVar3 + -0x20;
          goto LAB_00403d9c;
        }
        (&DAT_00409b00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_004099e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar5 = (char)uVar3 + ' ';
LAB_00403d9c:
        (&DAT_00409b00)[uVar3] = cVar5;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ---- __setmbcp @ 00403dd3 size=486 ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmbcp(int _CodePage)

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
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_00409040;
  DAT_0040996c = 0;
  if (_CodePage == -2) {
    DAT_0040996c = 1;
    _CodePage = GetOEMCP();
  }
  else if (_CodePage == -3) {
    DAT_0040996c = 1;
    _CodePage = GetACP();
  }
  else if (_CodePage == -4) {
    DAT_0040996c = 1;
    _CodePage = DAT_00409990;
  }
  if (_CodePage == DAT_00409ae4) {
    return 0;
  }
  if (_CodePage != 0) {
    iVar9 = 0;
    uVar5 = 0;
    do {
      if (*(int *)((int)&DAT_00409448 + uVar5) == _CodePage) {
        puVar12 = &DAT_004099e0;
        for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        local_20 = 0;
        *(undefined1 *)puVar12 = 0;
        pbVar10 = (byte *)(iVar9 * 0x30 + 0x409458);
        do {
          bVar4 = *pbVar10;
          pbVar11 = pbVar10;
          while ((bVar4 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
            uVar5 = (uint)bVar4;
            if (uVar5 <= bVar3) {
              bVar4 = (&DAT_00409440)[local_20];
              do {
                pbVar2 = (byte *)((int)&DAT_004099e0 + uVar5 + 1);
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
        DAT_00409ae4 = _CodePage;
        DAT_004099c0 = 1;
        DAT_004099bc = _CPtoLCID();
        DAT_00409af0 = *(undefined4 *)(&DAT_0040944c + extraout_ECX);
        DAT_00409af4 = *(undefined4 *)(&DAT_00409450 + extraout_ECX);
        DAT_00409af8 = *(undefined4 *)(&DAT_00409454 + extraout_ECX);
        goto LAB_00403fa0;
      }
      uVar5 = uVar5 + 0x30;
      iVar9 = iVar9 + 1;
    } while (uVar5 < 0xf0);
    BVar6 = GetCPInfo(_CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar12 = &DAT_004099e0;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined1 *)puVar12 = 0;
      DAT_004099bc = 0;
      DAT_00409ae4 = _CodePage;
      if (local_1c.MaxCharSize < 2) {
        DAT_004099c0 = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar7 = local_1c.LeadByte + 1;
          do {
            bVar4 = *pBVar7;
            if (bVar4 == 0) break;
            for (uVar5 = (uint)pBVar7[-1]; uVar5 <= bVar4; uVar5 = uVar5 + 1) {
              pbVar10 = (byte *)((int)&DAT_004099e0 + uVar5 + 1);
              *pbVar10 = *pbVar10 | 4;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        uVar5 = 1;
        do {
          pbVar10 = (byte *)((int)&DAT_004099e0 + uVar5 + 1);
          *pbVar10 = *pbVar10 | 8;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xff);
        DAT_004099bc = _CPtoLCID();
        DAT_004099c0 = 1;
      }
      DAT_00409af0 = 0;
      DAT_00409af4 = 0;
      DAT_00409af8 = 0;
      goto LAB_00403fa0;
    }
    if (DAT_0040996c == 0) {
      return -1;
    }
  }
  setSBCS();
LAB_00403fa0:
  setSBUpLow();
  return 0;
}



/* ---- ___initmbctable @ 00403fb9 size=30 ---- */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2003 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_0040ad50 == 0) {
    __setmbcp(-3);
    DAT_0040ad50 = 1;
  }
  return 0;
}



/* ---- _memcpy @ 00403fe0 size=672 ---- */

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
          goto switchD_0040419b_caseD_2;
        case 3:
          goto switchD_0040419b_caseD_3;
        }
        goto switchD_0040419b_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0040419b_caseD_0;
      case 1:
        goto switchD_0040419b_caseD_1;
      case 2:
        goto switchD_0040419b_caseD_2;
      case 3:
        goto switchD_0040419b_caseD_3;
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
              goto switchD_0040419b_caseD_2;
            case 3:
              goto switchD_0040419b_caseD_3;
            }
            goto switchD_0040419b_caseD_1;
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
              goto switchD_0040419b_caseD_2;
            case 3:
              goto switchD_0040419b_caseD_3;
            }
            goto switchD_0040419b_caseD_1;
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
              goto switchD_0040419b_caseD_2;
            case 3:
              goto switchD_0040419b_caseD_3;
            }
            goto switchD_0040419b_caseD_1;
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
switchD_0040419b_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_0040419b_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_0040419b_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_0040419b_caseD_0:
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
        goto switchD_00404015_caseD_2;
      case 3:
        goto switchD_00404015_caseD_3;
      }
      goto switchD_00404015_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_00404015_caseD_0;
    case 1:
      goto switchD_00404015_caseD_1;
    case 2:
      goto switchD_00404015_caseD_2;
    case 3:
      goto switchD_00404015_caseD_3;
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
            goto switchD_00404015_caseD_2;
          case 3:
            goto switchD_00404015_caseD_3;
          }
          goto switchD_00404015_caseD_1;
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
            goto switchD_00404015_caseD_2;
          case 3:
            goto switchD_00404015_caseD_3;
          }
          goto switchD_00404015_caseD_1;
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
            goto switchD_00404015_caseD_2;
          case 3:
            goto switchD_00404015_caseD_3;
          }
          goto switchD_00404015_caseD_1;
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
switchD_00404015_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_00404015_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00404015_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_00404015_caseD_0:
  return _Dst;
}



/* ---- ___sbh_heap_init @ 0040431d size=72 ---- */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_004099a8 = HeapAlloc(DAT_0040ac24,0,0x140);
  if (DAT_004099a8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_004099a0 = 0;
  DAT_004099a4 = 0;
  DAT_004099b0 = DAT_004099a8;
  DAT_004099ac = param_1;
  DAT_004099b4 = 0x10;
  return 1;
}



/* ---- ___sbh_find_block @ 00404365 size=43 ---- */

/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_004099a8;
  while( true ) {
    if (DAT_004099a8 + DAT_004099a4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ---- ___sbh_free_block @ 00404390 size=792 ---- */

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
      if (DAT_004099a0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_004099b8 * 0x8000 + DAT_004099a0[3]),0x8000,0x4000);
        DAT_004099a0[2] = DAT_004099a0[2] | 0x80000000U >> ((byte)DAT_004099b8 & 0x1f);
        *(undefined4 *)(DAT_004099a0[4] + 0xc4 + DAT_004099b8 * 4) = 0;
        *(char *)(DAT_004099a0[4] + 0x43) = *(char *)(DAT_004099a0[4] + 0x43) + -1;
        if (*(char *)(DAT_004099a0[4] + 0x43) == '\0') {
          DAT_004099a0[1] = DAT_004099a0[1] & 0xfffffffe;
        }
        if (DAT_004099a0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_004099a0[3],0,0x8000);
          HeapFree(DAT_0040ac24,0,(LPVOID)DAT_004099a0[4]);
          _memmove(DAT_004099a0,DAT_004099a0 + 5,
                   (DAT_004099a4 * 0x14 - (int)DAT_004099a0) + -0x14 + DAT_004099a8);
          DAT_004099a4 = DAT_004099a4 + -1;
          if (DAT_004099a0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_004099b0 = DAT_004099a8;
        }
      }
      DAT_004099a0 = param_1;
      DAT_004099b8 = uVar14;
    }
  }
  return;
}



/* ---- ___sbh_alloc_new_region @ 004046a8 size=183 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2003 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_004099a4 == DAT_004099b4) {
    pvVar2 = HeapReAlloc(DAT_0040ac24,0,DAT_004099a8,(DAT_004099b4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_004099b4 = DAT_004099b4 + 0x10;
    DAT_004099a8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_004099a8 + DAT_004099a4 * 0x14);
  pvVar2 = HeapAlloc(DAT_0040ac24,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_004099a4 = DAT_004099a4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0040ac24,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ---- ___sbh_alloc_new_group @ 0040475f size=262 ---- */

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



/* ---- ___sbh_resize_block @ 00404865 size=735 ---- */

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



/* ---- ___sbh_alloc_block @ 00404b44 size=764 ---- */

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
  puVar11 = DAT_004099a8 + DAT_004099a4 * 5;
  if (iVar10 < 0x20) {
    uVar14 = 0xffffffff >> ((byte)iVar10 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar14 = 0;
    local_c = 0xffffffff >> ((char)iVar9 - 0x21U & 0x1f);
  }
  for (param_1 = DAT_004099b0;
      (param_1 < puVar11 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar14) == 0));
      param_1 = param_1 + 5) {
  }
  if (param_1 == puVar11) {
    for (param_1 = DAT_004099a8;
        (param_1 < DAT_004099b0 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar14) == 0));
        param_1 = param_1 + 5) {
    }
    if (param_1 == DAT_004099b0) {
      for (; (param_1 < puVar11 && (param_1[2] == 0)); param_1 = param_1 + 5) {
      }
      if (param_1 == puVar11) {
        for (param_1 = DAT_004099a8; (param_1 < DAT_004099b0 && (param_1[2] == 0));
            param_1 = param_1 + 5) {
        }
        if ((param_1 == DAT_004099b0) &&
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
  DAT_004099b0 = param_1;
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
    if (iVar12 == 0) goto LAB_00404dfd;
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
LAB_00404dfd:
  piVar13 = (int *)((int)piVar13 + iVar12);
  *piVar13 = uVar8 + 1;
  *(uint *)((int)piVar13 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar4;
  *piVar4 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_004099a0)) && (local_8 == DAT_004099b8)) {
    DAT_004099a0 = (uint *)0x0;
  }
  *piVar6 = local_8;
  return piVar13 + 1;
}



/* ---- __dosmaperr @ 00404e40 size=95 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  uint uVar1;
  
  _DAT_00409794 = param_1;
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00409540)[uVar1 * 2]) {
      _DAT_00409790 = *(undefined4 *)(uVar1 * 8 + 0x409544);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_00409790 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_00409790 = 8, 0xca < param_1)) {
    _DAT_00409790 = 0x16;
  }
  return;
}



/* ---- __free_osfhnd @ 00404e9f size=122 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_0040ac2c) {
    iVar2 = (param_1 & 0x1fU) * 8;
    piVar1 = (int *)((&DAT_0040ac40)[param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00409048 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00404ef8;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00404ef8:
      *(undefined4 *)(iVar2 + (&DAT_0040ac40)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  _DAT_00409794 = 0;
  _DAT_00409790 = 9;
  return -1;
}



/* ---- __get_osfhandle @ 00404f19 size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2003 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  
  if (((uint)_FileHandle < DAT_0040ac2c) &&
     (piVar1 = (intptr_t *)((&DAT_0040ac40)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 8),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  _DAT_00409794 = 0;
  _DAT_00409790 = 9;
  return -1;
}



/* ---- __lseeki64 @ 00404f55 size=159 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2003 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  if ((uint)_FileHandle < DAT_0040ac2c) {
    iVar4 = (_FileHandle & 0x1fU) * 8;
    if ((*(byte *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + iVar4) & 1) == 0) goto LAB_00404fd9;
    local_8 = (LONG)_Offset;
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    if (hFile == (HANDLE)0xffffffff) goto LAB_00404fe0;
    DVar2 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar2 != 0xffffffff) {
LAB_00404fc8:
      pbVar1 = (byte *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_00404ff0;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0) goto LAB_00404fc8;
    __dosmaperr(DVar3);
  }
  else {
LAB_00404fd9:
    _DAT_00409794 = 0;
LAB_00404fe0:
    _DAT_00409790 = 9;
  }
  DVar2 = 0xffffffff;
  local_8 = -1;
LAB_00404ff0:
  return CONCAT44(local_8,DVar2);
}



/* ---- _calloc @ 00404ff4 size=123 ---- */

/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int *_Dst;
  LPVOID pvVar1;
  int iVar2;
  uint *_Size_00;
  uint *dwBytes;
  
  _Size_00 = (uint *)(_Count * _Size);
  dwBytes = _Size_00;
  if (_Size_00 == (uint *)0x0) {
    dwBytes = (uint *)0x1;
  }
  do {
    if (dwBytes < (uint *)0xffffffe1) {
      if (((DAT_0040ac28 == 3) &&
          (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size_00 <= DAT_004099ac)) &&
         (_Dst = ___sbh_alloc_block(_Size_00), _Dst != (int *)0x0)) {
        _memset(_Dst,0,(size_t)_Size_00);
        return _Dst;
      }
      pvVar1 = HeapAlloc(DAT_0040ac24,8,(SIZE_T)dwBytes);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
    }
    if (DAT_00409974 == 0) {
      return (void *)0x0;
    }
    iVar2 = __callnewh((size_t)dwBytes);
  } while (iVar2 != 0);
  return (void *)0x0;
}



/* ---- __fcloseall @ 0040506f size=88 ---- */

/* Library Function - Single Match
    __fcloseall
   
   Library: Visual Studio 2003 Release */

int __cdecl __fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
  iVar3 = 0;
  if (3 < DAT_0040ac20) {
    do {
      _File = *(FILE **)(DAT_00409c00 + iVar2 * 4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar3 = iVar3 + 1;
          }
        }
        if (0x13 < iVar2) {
          _free(*(void **)(DAT_00409c00 + iVar2 * 4));
          *(undefined4 *)(DAT_00409c00 + iVar2 * 4) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0040ac20);
  }
  return iVar3;
}



/* ---- __flush @ 004050c7 size=93 ---- */

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



/* ---- _fflush @ 00405124 size=59 ---- */

/* Library Function - Single Match
    _fflush
   
   Library: Visual Studio 2003 Release */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = __flush(_File);
  if (iVar1 != 0) {
    return -1;
  }
  if ((_File->_flag & 0x4000) == 0) {
    return 0;
  }
  iVar1 = __commit(_File->_file);
  return -(uint)(iVar1 != 0);
}



/* ---- flsall @ 0040515f size=109 ---- */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  if (0 < DAT_0040ac20) {
    do {
      _File = *(FILE **)(DAT_00409c00 + iVar3 * 4);
      if ((_File != (FILE *)0x0) && ((_File->_flag & 0x83U) != 0)) {
        if (param_1 == 1) {
          iVar1 = _fflush(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File->_flag & 2U) != 0)) {
          iVar1 = _fflush(_File);
          if (iVar1 == -1) {
            iVar4 = -1;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0040ac20);
  }
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}



/* ---- __flushall @ 004051cc size=9 ---- */

/* Library Function - Single Match
    __flushall
   
   Library: Visual Studio 2003 Release */

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = flsall(1);
  return iVar1;
}



/* ---- FUN_004051d5 @ 004051d5 size=9 ---- */

void FUN_004051d5(void)

{
  __amsg_exit(2);
  return;
}



/* ---- __callnewh @ 004051de size=27 ---- */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (DAT_00409970 != (code *)0x0) {
    iVar1 = (*DAT_00409970)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ---- ___crtLCMapStringA @ 004051f9 size=886 ---- */

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
  
  local_8 = &DAT_00407d80;
  uStack_c = 0x405205;
  if (DAT_00409998 == 0) {
    DStackY_74 = 0x405226;
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_00409998 = 2;
      }
    }
    else {
      DAT_00409998 = 1;
    }
  }
  if (0 < (int)_LpSrcStr) {
    pcVar5 = (char *)_DwMapFlag;
    pCVar11 = _LpSrcStr;
    do {
      pCVar11 = pCVar11 + -1;
      if (*pcVar5 == '\0') goto LAB_0040525f;
      pcVar5 = pcVar5 + 1;
    } while (pCVar11 != (LPCSTR)0x0);
    pCVar11 = (LPCSTR)0xffffffff;
LAB_0040525f:
    _LpSrcStr = _LpSrcStr + (-1 - (int)pCVar11);
  }
  if ((DAT_00409998 != 2) && (DAT_00409998 != 0)) {
    if (DAT_00409998 == 1) {
      iVar3 = 0;
      bVar2 = false;
      bVar1 = false;
      if (_CchDest == 0) {
        _CchDest = DAT_00409990;
      }
      DStackY_74 = 0x4052bf;
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
          *(undefined4 *)((int)local_48 + iVar8 + -0x18) = 0x405318;
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
        *(undefined4 *)((int)local_48 + iVar8 + -0x2c) = 0x405340;
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
          *(undefined4 *)(puVar12 + -0x1c) = 0x40535a;
          iVar3 = LCMapStringW(*(LCID *)(puVar12 + -0x18),*(DWORD *)(puVar12 + -0x14),
                               *(LPCWSTR *)(puVar12 + -0x10),*(int *)(puVar12 + -0xc),
                               *(LPWSTR *)(puVar12 + -8),*(int *)(puVar12 + -4));
          puVar7 = puVar13;
          if (iVar3 != 0) {
            if (((uint)_LocaleName & 0x400) == 0) {
              puVar7 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
              *(undefined4 *)(puVar13 + -4) = 0x4053af;
              iVar8 = -(int)puVar7;
              local_1c = puVar13 + iVar8;
              local_24 = puVar13 + iVar8;
              local_8 = (undefined *)0xffffffff;
              if (puVar13 == puVar7) {
                *(int *)(puVar13 + iVar8 + -4) = iVar3 * 2;
                *(undefined4 *)(puVar13 + iVar8 + -8) = 0x4053e6;
                local_24 = _malloc(*(size_t *)(puVar13 + iVar8 + -4));
                puVar7 = puVar13 + iVar8;
                if (local_24 == (undefined1 *)0x0) goto LAB_0040542e;
                bVar1 = true;
              }
              *(int *)(puVar13 + iVar8 + -4) = iVar3;
              *(undefined1 **)(puVar13 + iVar8 + -8) = local_24;
              *(int *)(puVar13 + iVar8 + -0xc) = iVar6;
              *(undefined1 **)(puVar13 + iVar8 + -0x10) = local_20;
              *(LPCWSTR *)(puVar13 + iVar8 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar13 + iVar8 + -0x18) = _Plocinfo;
              puVar15 = puVar13 + iVar8 + -0x1c;
              *(undefined4 *)(puVar13 + iVar8 + -0x1c) = 0x405409;
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
                *(undefined4 *)(puVar15 + -0x24) = 0x40542c;
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
              *(undefined4 *)(puVar13 + -0x1c) = 0x405395;
              LCMapStringW(*(LCID *)(puVar13 + -0x18),*(DWORD *)(puVar13 + -0x14),
                           *(LPCWSTR *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                           *(LPWSTR *)(puVar13 + -8),*(int *)(puVar13 + -4));
              puVar7 = puVar14;
            }
          }
        }
LAB_0040542e:
        if (bVar1) {
          *(undefined1 **)(puVar7 + -4) = local_24;
          *(undefined4 *)(puVar7 + -8) = 0x40543b;
          _free(*(void **)(puVar7 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar7 + -4) = local_20;
          *(undefined4 *)(puVar7 + -8) = 0x405449;
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
    _Plocinfo = DAT_00409980;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_00409990;
  }
  UVar9 = ___ansicp((LCID)_Plocinfo);
  if (UVar9 == 0xffffffff) {
    return 0;
  }
  if (UVar9 == _CchDest) {
    DStackY_74 = 0x40559a;
    local_4c = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_0040559c;
  }
  DStackY_74 = 0x4054a6;
  local_2c = ___convertcp(_CchDest,UVar9,(char *)_DwMapFlag,(size_t *)&_LpSrcStr,(LPSTR)0x0,0);
  if (local_2c == (LPSTR)0x0) {
    return 0;
  }
  DStackY_74 = 0x4054c2;
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
        goto LAB_0040552d;
      }
    }
    else {
LAB_0040552d:
      DStackY_74 = 0x405543;
      local_28 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_2c,(int)_LpSrcStr,
                              (LPSTR)lpDestStr,local_28);
      if (local_28 != 0) {
        DStackY_74 = 0x405564;
        pCVar10 = ___convertcp(UVar9,_CchDest,(char *)lpDestStr,&local_28,(LPSTR)_CchSrc,
                               (int)_LpDestStr);
        local_4c = (uint)(pCVar10 != (LPSTR)0x0);
        goto LAB_00405574;
      }
    }
    local_4c = 0;
  }
LAB_00405574:
  if (bVar1) {
    _free(lpDestStr);
  }
LAB_0040559c:
  if (local_2c != (LPSTR)0x0) {
    _free(local_2c);
  }
  return local_4c;
}



/* ---- ___crtGetStringTypeA @ 004055b5 size=421 ---- */

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
  
  local_8 = &DAT_00407da8;
  uStack_c = 0x4055c1;
  _Memory = (LPSTR)0x0;
  if (DAT_0040999c == 0) {
    BVar3 = GetStringTypeW(1,L"",1,local_20);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_0040999c = 2;
      }
    }
    else {
      DAT_0040999c = 1;
    }
  }
  if ((DAT_0040999c == 2) || (DAT_0040999c == 0)) {
    Locale = _Code_page;
    if (_Code_page == 0) {
      Locale = DAT_00409980;
    }
    pWVar10 = _LpCharType;
    if (_LpCharType == (LPWORD)0x0) {
      pWVar10 = DAT_00409990;
    }
    pWVar8 = (LPWORD)___ansicp(Locale);
    if (pWVar8 != (LPWORD)0xffffffff) {
      if (pWVar8 != pWVar10) {
        uStackY_58 = 0x405738;
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
  else if (DAT_0040999c == 1) {
    local_2c[1] = 0;
    bVar2 = false;
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_00409990;
    }
    uStackY_58 = 0x405653;
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
      *(undefined4 *)(auStack_2e + iVar1 + -0x1e) = 0x405685;
      _memset(*(void **)(auStack_2e + iVar1 + -0x1a),*(int *)(auStack_2e + iVar1 + -0x16),
              *(size_t *)(auStack_2e + iVar1 + -0x12));
      local_8 = (undefined *)0xffffffff;
      if (auStack_2e + -0xe == puVar6) {
        *(int *)(auStack_2e + iVar1 + -0x12) = iVar5;
        *(undefined4 *)(auStack_2e + iVar1 + -0x16) = 2;
        *(undefined4 *)(auStack_2e + iVar1 + -0x1a) = 0x4056af;
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
      *(undefined4 *)(auStack_2e + iVar1 + -0x2a) = 0x4056d1;
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
        *(undefined4 *)(puVar9 + -0x14) = 0x4056e3;
        local_2c[1] = GetStringTypeW(*(DWORD *)(puVar9 + -0x10),*(LPCWSTR *)(puVar9 + -0xc),
                                     *(int *)(puVar9 + -8),*(LPWORD *)(puVar9 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar6 + -4) = puVar7;
        *(undefined4 *)(puVar6 + -8) = 0x4056f2;
        _free(*(void **)(puVar6 + -4));
      }
      return local_2c[1];
    }
  }
  return 0;
}



/* ---- _memmove @ 00405770 size=672 ---- */

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
          goto switchD_0040592b_caseD_2;
        case 3:
          goto switchD_0040592b_caseD_3;
        }
        goto switchD_0040592b_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0040592b_caseD_0;
      case 1:
        goto switchD_0040592b_caseD_1;
      case 2:
        goto switchD_0040592b_caseD_2;
      case 3:
        goto switchD_0040592b_caseD_3;
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
              goto switchD_0040592b_caseD_2;
            case 3:
              goto switchD_0040592b_caseD_3;
            }
            goto switchD_0040592b_caseD_1;
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
              goto switchD_0040592b_caseD_2;
            case 3:
              goto switchD_0040592b_caseD_3;
            }
            goto switchD_0040592b_caseD_1;
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
              goto switchD_0040592b_caseD_2;
            case 3:
              goto switchD_0040592b_caseD_3;
            }
            goto switchD_0040592b_caseD_1;
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
switchD_0040592b_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_0040592b_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_0040592b_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_0040592b_caseD_0:
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
        goto switchD_004057a5_caseD_2;
      case 3:
        goto switchD_004057a5_caseD_3;
      }
      goto switchD_004057a5_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_004057a5_caseD_0;
    case 1:
      goto switchD_004057a5_caseD_1;
    case 2:
      goto switchD_004057a5_caseD_2;
    case 3:
      goto switchD_004057a5_caseD_3;
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
            goto switchD_004057a5_caseD_2;
          case 3:
            goto switchD_004057a5_caseD_3;
          }
          goto switchD_004057a5_caseD_1;
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
            goto switchD_004057a5_caseD_2;
          case 3:
            goto switchD_004057a5_caseD_3;
          }
          goto switchD_004057a5_caseD_1;
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
            goto switchD_004057a5_caseD_2;
          case 3:
            goto switchD_004057a5_caseD_3;
          }
          goto switchD_004057a5_caseD_1;
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
switchD_004057a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_004057a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_004057a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_004057a5_caseD_0:
  return _Dst;
}



/* ---- _memset @ 00405ab0 size=96 ---- */

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



/* ---- _fclose @ 00405b10 size=86 ---- */

/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2003 Release */

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((_File->_flag & 0x40U) == 0) {
    if ((_File->_flag & 0x83U) != 0) {
      iVar2 = __flush(_File);
      __freebuf(_File);
      iVar1 = __close(_File->_file);
      if (iVar1 < 0) {
        iVar2 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
  }
  else {
    iVar2 = -1;
  }
  _File->_flag = 0;
  return iVar2;
}



/* ---- __commit @ 00405b66 size=87 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2003 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  if (((uint)_FileHandle < DAT_0040ac2c) &&
     ((*(byte *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
    _DAT_00409794 = DVar2;
  }
  _DAT_00409790 = 9;
  return -1;
}



/* ---- ___ansicp @ 00405bbd size=67 ---- */

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
  
  local_8 = DAT_00409040;
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



/* ---- ___convertcp @ 00405c00 size=434 ---- */

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
  
  local_8 = &DAT_00407db8;
  uStack_c = 0x405c0c;
  local_20 = DAT_00409040;
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



/* ---- __resetstkoflw @ 00405dc9 size=227 ---- */

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
  
  uStack_60 = 0x405dda;
  SVar1 = VirtualQuery(&uStack_60,&local_2c,0x1c);
  if (SVar1 != 0) {
    GetSystemInfo(&local_50);
    pvVar4 = (LPCVOID)((~(local_50.dwPageSize - 1) & (uint)&uStack_60) - local_50.dwPageSize);
    pvVar3 = (LPCVOID)(((-(uint)(DAT_0040979c != 1) & 0xfffffff1) + 0x11) * local_50.dwPageSize +
                      (int)local_2c.AllocationBase);
    local_c = local_50.dwPageSize;
    if (pvVar3 <= pvVar4) {
      if (DAT_0040979c == 1) {
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
      BVar2 = VirtualProtect(local_8,local_c,(-(uint)(DAT_0040979c != 1) & 0x103) + 1,&local_10);
      return BVar2;
    }
  }
  return 0;
}



/* ---- __close @ 00405eac size=179 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2003 Release */

int __cdecl __close(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_0040ac2c <= (uint)_FileHandle) {
    _DAT_00409794 = 0;
    _DAT_00409790 = 9;
    return -1;
  }
  iVar5 = (_FileHandle & 0x1fU) * 8;
  if ((*(byte *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_00409790 = 9;
    _DAT_00409794 = 0;
    return -1;
  }
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if ((_FileHandle == 1) || (_FileHandle == 2)) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_00405f25;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00405f27;
    }
  }
LAB_00405f25:
  DVar4 = 0;
LAB_00405f27:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_0040ac40)[_FileHandle >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  __dosmaperr(DVar4);
  return -1;
}



/* ---- __freebuf @ 00405f5f size=43 ---- */

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



/* ---- _atol @ 00405f8a size=88 ---- */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2003 Release */

long __cdecl _atol(char *_Str)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  while( true ) {
    iVar1 = __ismbcspace((uint)(byte)*_Str);
    if (iVar1 == 0) break;
    _Str = _Str + 1;
  }
  uVar2 = (uint)(byte)*_Str;
  pbVar5 = (byte *)(_Str + 1);
  if ((uVar2 == 0x2d) || (uVar3 = uVar2, uVar2 == 0x2b)) {
    uVar3 = (uint)*pbVar5;
    pbVar5 = (byte *)(_Str + 2);
  }
  iVar1 = 0;
  while( true ) {
    if ((uVar3 < 0x30) || (0x39 < uVar3)) {
      iVar4 = -1;
    }
    else {
      iVar4 = uVar3 - 0x30;
    }
    if (iVar4 == -1) break;
    iVar1 = iVar4 + iVar1 * 10;
    uVar3 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar2 == 0x2d) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



/* ---- __ismbcspace @ 00405fe2 size=144 ---- */

/* Library Function - Single Match
    __ismbcspace
   
   Library: Visual Studio 2003 Release */

int __cdecl __ismbcspace(uint _Ch)

{
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 local_8;
  
  uVar2 = _Ch;
  if (_Ch < 0x100) {
    if (DAT_004096ac < 2) {
      return (byte)PTR_DAT_00409428[_Ch * 2] & 8;
    }
    iVar4 = __isctype(_Ch,8);
    return iVar4;
  }
  local_8 = 0;
  uVar1 = _Ch >> 8;
  _Ch = CONCAT13((char)uVar2,CONCAT12((char)uVar1,(undefined2)_Ch));
  if (DAT_004099c0 != 0) {
    BVar3 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(int)&_Ch + 2,(LPCSTR)0x2,(int)&local_8,DAT_00409ae4,
                       DAT_004099bc,1);
    if (((BVar3 != 0) && (local_8._2_2_ == 0)) && ((local_8 & 8) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* ---- __isctype @ 004060b4 size=126 ---- */

/* Library Function - Single Match
    __isctype
   
   Library: Visual Studio 2003 Release */

int __cdecl __isctype(int _C,int _Type)

{
  undefined4 uVar1;
  LPCSTR _LpSrcStr;
  BOOL BVar2;
  undefined4 in_ECX;
  undefined4 local_8;
  
  if (_C + 1U < 0x101) {
    _C._2_2_ = *(ushort *)(PTR_DAT_00409428 + _C * 2);
  }
  else {
    local_8._2_2_ = (undefined2)((uint)in_ECX >> 0x10);
    if ((PTR_DAT_00409428[(_C >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8._0_2_ = (ushort)(byte)_C;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      local_8 = CONCAT31(CONCAT21(local_8._2_2_,(byte)_C),(char)((uint)_C >> 8));
      uVar1 = local_8;
      local_8._3_1_ = (undefined1)((uint)in_ECX >> 0x18);
      local_8._0_2_ = (ushort)uVar1;
      local_8._0_3_ = (uint3)(ushort)local_8;
      _LpSrcStr = (LPCSTR)0x2;
    }
    BVar2 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&local_8,_LpSrcStr,(int)&_C + 2,DAT_00409990,
                       DAT_00409980,1);
    if (BVar2 == 0) {
      return 0;
    }
  }
  return (uint)_C._2_2_ & _Type;
}



/* ---- RtlUnwind @ 00406132 size=6 ---- */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00406132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


// total=110 ok=110 failed=0
