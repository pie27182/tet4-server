// Module: HgAniGm3.dll
// ImageBase: 60000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- strcpy_s @ 60001000 size=6 ---- */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60001000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strcpy_s(_Dst,_SizeInBytes,_Src);
  return eVar1;
}



/* ---- strncpy_s @ 60001010 size=6 ---- */

errno_t __cdecl strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60001010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strncpy_s(_Dst,_SizeInBytes,_Src,_MaxCount);
  return eVar1;
}



/* ---- strtok_s @ 60001020 size=6 ---- */

char * __cdecl strtok_s(char *_Str,char *_Delim,char **_Context)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60001020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strtok_s(_Str,_Delim,_Context);
  return pcVar1;
}



/* ---- vsprintf_s @ 60001030 size=6 ---- */

int __cdecl vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60001030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = vsprintf_s(_DstBuf,_SizeInBytes,_Format,_ArgList);
  return iVar1;
}



/* ---- FUN_60001040 @ 60001040 size=30 ---- */

void __cdecl FUN_60001040(char *param_1,size_t param_2,char *param_3,char param_4)

{
  vsprintf_s(param_1,param_2,param_3,&param_4);
  return;
}



/* ---- IsActivatedGameWnd @ 60001060 size=7 ---- */

/* public: int __thiscall CAnimateGameWnd::IsActivatedGameWnd(void) */

int __thiscall CAnimateGameWnd::IsActivatedGameWnd(CAnimateGameWnd *this)

{
                    /* 0x1060  267  ?IsActivatedGameWnd@CAnimateGameWnd@@QAEHXZ */
  return (this->CAnimateGameWnd_data).offset_0x228;
}



/* ---- SetVelocity @ 60001070 size=17 ---- */

/* public: void __thiscall CGraphicCurve::SetVelocity(float,float) */

void __thiscall CGraphicCurve::SetVelocity(CGraphicCurve *this,float param_1,float param_2)

{
                    /* 0x1070  448  ?SetVelocity@CGraphicCurve@@QAEXMM@Z */
  (this->CGraphicCurve_data).offset_0x34 = param_1;
  (this->CGraphicCurve_data).offset_0x54 = param_2;
  return;
}



/* ---- SafeAction @ 60001090 size=5 ---- */

/* public: int __thiscall CGraphicCurve::SafeAction(unsigned long) */

int __thiscall CGraphicCurve::SafeAction(CGraphicCurve *this,ulong param_1)

{
  int iVar1;
  
                    /* 0x1090  377  ?SafeAction@CGraphicCurve@@QAEHK@Z */
                    /* WARNING: Could not recover jumptable at 0x60001093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(this->CGraphicCurve_data).offset_0x10)();
  return iVar1;
}



/* ---- CGraphicCurve @ 600010a0 size=252 ---- */

/* public: __thiscall CGraphicCurve::CGraphicCurve(class CGraphicCurve const &) */

void __thiscall CGraphicCurve::CGraphicCurve(CGraphicCurve *this,CGraphicCurve *param_1)

{
                    /* 0x10a0  20  ??0CGraphicCurve@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CGraphicCurve_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CGraphicCurve_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CGraphicCurve_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->CGraphicCurve_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->CGraphicCurve_data).offset_0x10 = *(undefined **)(param_1 + 0x14);
  (this->CGraphicCurve_data).offset_0x14 = param_1[0x18];
  (this->CGraphicCurve_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->CGraphicCurve_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->CGraphicCurve_data).offset_0x20 = *(float *)(param_1 + 0x24);
  (this->CGraphicCurve_data).offset_0x24 = param_1[0x28];
  (this->CGraphicCurve_data).offset_0x28 = *(float *)(param_1 + 0x2c);
  (this->CGraphicCurve_data).offset_0x2c = *(undefined4 *)(param_1 + 0x30);
  (this->CGraphicCurve_data).offset_0x30 = *(float *)(param_1 + 0x34);
  (this->CGraphicCurve_data).offset_0x34 = *(undefined4 *)(param_1 + 0x38);
  (this->CGraphicCurve_data).offset_0x38 = *(float *)(param_1 + 0x3c);
  (this->CGraphicCurve_data).offset_0x3c = *(undefined4 *)(param_1 + 0x40);
  (this->CGraphicCurve_data).offset_0x40 = *(undefined4 *)(param_1 + 0x44);
  (this->CGraphicCurve_data).offset_0x44 = param_1[0x48];
  (this->CGraphicCurve_data).offset_0x48 = *(float *)(param_1 + 0x4c);
  (this->CGraphicCurve_data).offset_0x4c = *(undefined4 *)(param_1 + 0x50);
  (this->CGraphicCurve_data).offset_0x50 = *(float *)(param_1 + 0x54);
  (this->CGraphicCurve_data).offset_0x54 = *(undefined4 *)(param_1 + 0x58);
  (this->CGraphicCurve_data).offset_0x58 = *(float *)(param_1 + 0x5c);
  (this->CGraphicCurve_data).offset_0x5c = *(undefined4 *)(param_1 + 0x60);
  (this->CGraphicCurve_data).offset_0x60 = *(undefined4 *)(param_1 + 100);
  (this->CGraphicCurve_data).offset_0x64 = *(undefined4 *)(param_1 + 0x68);
  (this->CGraphicCurve_data).offset_0x68 = *(undefined4 *)(param_1 + 0x6c);
  (this->CGraphicCurve_data).offset_0x6c = *(float *)(param_1 + 0x70);
  (this->CGraphicCurve_data).offset_0x70 = *(float *)(param_1 + 0x74);
  (this->CGraphicCurve_data).offset_0x74 = *(float *)(param_1 + 0x78);
  (this->CGraphicCurve_data).offset_0x78 = *(float *)(param_1 + 0x7c);
  (this->CGraphicCurve_data).offset_0x7c = *(float *)(param_1 + 0x80);
  (this->CGraphicCurve_data).offset_0x80 = *(float *)(param_1 + 0x84);
  (this->CGraphicCurve_data).offset_0x84 = *(int *)(param_1 + 0x88);
  (this->CGraphicCurve_data).offset_0x88 = *(undefined4 *)(param_1 + 0x8c);
  return;
}



/* ---- operator= @ 600011a0 size=246 ---- */

/* public: class CGraphicCurve & __thiscall CGraphicCurve::operator=(class CGraphicCurve const &) */

CGraphicCurve * __thiscall CGraphicCurve::operator=(CGraphicCurve *this,CGraphicCurve *param_1)

{
                    /* 0x11a0  67  ??4CGraphicCurve@@QAEAAV0@ABV0@@Z */
  (this->CGraphicCurve_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CGraphicCurve_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CGraphicCurve_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->CGraphicCurve_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->CGraphicCurve_data).offset_0x10 = *(undefined **)(param_1 + 0x14);
  (this->CGraphicCurve_data).offset_0x14 = param_1[0x18];
  (this->CGraphicCurve_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->CGraphicCurve_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->CGraphicCurve_data).offset_0x20 = *(float *)(param_1 + 0x24);
  (this->CGraphicCurve_data).offset_0x24 = param_1[0x28];
  (this->CGraphicCurve_data).offset_0x28 = *(float *)(param_1 + 0x2c);
  (this->CGraphicCurve_data).offset_0x2c = *(undefined4 *)(param_1 + 0x30);
  (this->CGraphicCurve_data).offset_0x30 = *(float *)(param_1 + 0x34);
  (this->CGraphicCurve_data).offset_0x34 = *(undefined4 *)(param_1 + 0x38);
  (this->CGraphicCurve_data).offset_0x38 = *(float *)(param_1 + 0x3c);
  (this->CGraphicCurve_data).offset_0x3c = *(undefined4 *)(param_1 + 0x40);
  (this->CGraphicCurve_data).offset_0x40 = *(undefined4 *)(param_1 + 0x44);
  (this->CGraphicCurve_data).offset_0x44 = param_1[0x48];
  (this->CGraphicCurve_data).offset_0x48 = *(float *)(param_1 + 0x4c);
  (this->CGraphicCurve_data).offset_0x4c = *(undefined4 *)(param_1 + 0x50);
  (this->CGraphicCurve_data).offset_0x50 = *(float *)(param_1 + 0x54);
  (this->CGraphicCurve_data).offset_0x54 = *(undefined4 *)(param_1 + 0x58);
  (this->CGraphicCurve_data).offset_0x58 = *(float *)(param_1 + 0x5c);
  (this->CGraphicCurve_data).offset_0x5c = *(undefined4 *)(param_1 + 0x60);
  (this->CGraphicCurve_data).offset_0x60 = *(undefined4 *)(param_1 + 100);
  (this->CGraphicCurve_data).offset_0x64 = *(undefined4 *)(param_1 + 0x68);
  (this->CGraphicCurve_data).offset_0x68 = *(undefined4 *)(param_1 + 0x6c);
  (this->CGraphicCurve_data).offset_0x6c = *(float *)(param_1 + 0x70);
  (this->CGraphicCurve_data).offset_0x70 = *(float *)(param_1 + 0x74);
  (this->CGraphicCurve_data).offset_0x74 = *(float *)(param_1 + 0x78);
  (this->CGraphicCurve_data).offset_0x78 = *(float *)(param_1 + 0x7c);
  (this->CGraphicCurve_data).offset_0x7c = *(float *)(param_1 + 0x80);
  (this->CGraphicCurve_data).offset_0x80 = *(float *)(param_1 + 0x84);
  (this->CGraphicCurve_data).offset_0x84 = *(int *)(param_1 + 0x88);
  (this->CGraphicCurve_data).offset_0x88 = *(undefined4 *)(param_1 + 0x8c);
  return (CGraphicCurve *)this;
}



/* ---- GetBackBuf @ 600012a0 size=6 ---- */

/* public: static class CHgDIB * __cdecl CGraphicCtrl::GetBackBuf(void) */

CHgDIB * __cdecl CGraphicCtrl::GetBackBuf(void)

{
                    /* 0x12a0  197  ?GetBackBuf@CGraphicCtrl@@SAPAVCHgDIB@@XZ */
  return s_pBackBuf;
}



/* ---- GetBackDC @ 600012b0 size=6 ---- */

/* public: static struct HDC__ * __cdecl CGraphicCtrl::GetBackDC(void) */

HDC__ * __cdecl CGraphicCtrl::GetBackDC(void)

{
                    /* 0x12b0  198  ?GetBackDC@CGraphicCtrl@@SAPAUHDC__@@XZ */
  return s_hDCBackBuf;
}



/* ---- GetFreeDraw @ 600012c0 size=4 ---- */

/* public: bool __thiscall CGraphicCtrl::GetFreeDraw(void)const  */

bool __thiscall CGraphicCtrl::GetFreeDraw(CGraphicCtrl *this)

{
                    /* 0x12c0  216  ?GetFreeDraw@CGraphicCtrl@@QBE_NXZ */
  return (bool)(this->CGraphicCtrl_data).offset_0x0;
}



/* ---- SetFreeDraw @ 600012d0 size=10 ---- */

/* public: void __thiscall CGraphicCtrl::SetFreeDraw(bool) */

void __thiscall CGraphicCtrl::SetFreeDraw(CGraphicCtrl *this,bool param_1)

{
                    /* 0x12d0  405  ?SetFreeDraw@CGraphicCtrl@@QAEX_N@Z */
  (this->CGraphicCtrl_data).offset_0x0 = param_1;
  return;
}



/* ---- __SetAttachedToParentsChildList @ 600012e0 size=10 ---- */

/* public: void __thiscall CGraphicCtrl::__SetAttachedToParentsChildList(char) */

void __thiscall CGraphicCtrl::__SetAttachedToParentsChildList(CGraphicCtrl *this,char param_1)

{
                    /* 0x12e0  508  ?__SetAttachedToParentsChildList@CGraphicCtrl@@QAEXD@Z */
  (this->CGraphicCtrl_data).offset_0x1 = param_1;
  return;
}



/* ---- __IsAttachedToParentsChildList @ 600012f0 size=4 ---- */

/* public: char __thiscall CGraphicCtrl::__IsAttachedToParentsChildList(void)const  */

char __thiscall CGraphicCtrl::__IsAttachedToParentsChildList(CGraphicCtrl *this)

{
                    /* 0x12f0  504  ?__IsAttachedToParentsChildList@CGraphicCtrl@@QBEDXZ */
  return (this->CGraphicCtrl_data).offset_0x1;
}



/* ---- CGraphicCtrl::_AllocSelf @ 60001300 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl::_AllocSelf(void) */

void * __thiscall CGraphicCtrl::CGraphicCtrl___AllocSelf(CGraphicCtrl *this)

{
  CList<CGraphicCtrl*,CGraphicCtrl*> *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1300  461  ?_AllocSelf@CGraphicCtrl@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x168);
  local_4 = 0;
  if (pCVar1 == (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- GetReference @ 60001370 size=7 ---- */

/* public: class CGraphicCtrl * __thiscall CGraphicCtrl::GetReference(void) */

CGraphicCtrl * __thiscall CGraphicCtrl::GetReference(CGraphicCtrl *this)

{
                    /* 0x1370  236  ?GetReference@CGraphicCtrl@@QAEPAV1@XZ */
  return (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xdc;
}



/* ---- SetID @ 60001380 size=12 ---- */

/* public: void __thiscall CGraphicCtrl::SetID(unsigned short) */

void __thiscall CGraphicCtrl::SetID(CGraphicCtrl *this,ushort param_1)

{
                    /* 0x1380  407  ?SetID@CGraphicCtrl@@QAEXG@Z */
  (this->CGraphicCtrl_data).offset_0x8 = param_1;
  return;
}



/* ---- GetID @ 60001390 size=5 ---- */

/* public: unsigned short __thiscall CGraphicCtrl::GetID(void)const  */

ushort __thiscall CGraphicCtrl::GetID(CGraphicCtrl *this)

{
                    /* 0x1390  217  ?GetID@CGraphicCtrl@@QBEGXZ */
  return (this->CGraphicCtrl_data).offset_0x8;
}



/* ---- GetParent @ 600013a0 size=7 ---- */

/* public: class CGraphicCtrl * __thiscall CGraphicCtrl::GetParent(void) */

CGraphicCtrl * __thiscall CGraphicCtrl::GetParent(CGraphicCtrl *this)

{
                    /* 0x13a0  229  ?GetParent@CGraphicCtrl@@QAEPAV1@XZ */
  return (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xd8;
}



/* ---- GetChildList @ 600013b0 size=7 ---- */

/* public: class CList<class CGraphicCtrl *,class CGraphicCtrl *> * __thiscall
   CGraphicCtrl::GetChildList(void) */

CList<CGraphicCtrl*,CGraphicCtrl*> * __thiscall CGraphicCtrl::GetChildList(CGraphicCtrl *this)

{
                    /* 0x13b0  205
                       ?GetChildList@CGraphicCtrl@@QAEPAV?$CList@PAVCGraphicCtrl@@PAV1@@@XZ */
  return (CList<CGraphicCtrl*,CGraphicCtrl*> *)&(this->CGraphicCtrl_data).offset_0xe0;
}



/* ---- IsDependent @ 600013c0 size=4 ---- */

/* public: int __thiscall CGraphicCtrl::IsDependent(void)const  */

int __thiscall CGraphicCtrl::IsDependent(CGraphicCtrl *this)

{
                    /* 0x13c0  273  ?IsDependent@CGraphicCtrl@@QBEHXZ */
  return (this->CGraphicCtrl_data).offset_0x1c;
}



/* ---- SetDependent @ 600013d0 size=10 ---- */

/* public: void __thiscall CGraphicCtrl::SetDependent(int) */

void __thiscall CGraphicCtrl::SetDependent(CGraphicCtrl *this,int param_1)

{
                    /* 0x13d0  395  ?SetDependent@CGraphicCtrl@@QAEXH@Z */
  (this->CGraphicCtrl_data).offset_0x1c = param_1;
  return;
}



/* ---- SafeDelete @ 600013e0 size=37 ---- */

/* public: void __thiscall CGraphicCtrl::SafeDelete(void) */

void __thiscall CGraphicCtrl::SafeDelete(CGraphicCtrl *this)

{
  int iVar1;
  
                    /* 0x13e0  378  ?SafeDelete@CGraphicCtrl@@QAEXXZ */
  iVar1 = IsPlaying(this);
  if (iVar1 != 0) {
    (this->CGraphicCtrl_data).offset_0x18 = 1;
    return;
  }
  if (this != (CGraphicCtrl *)0x0) {
    (*this->vftablePtr->deleting_destructor)(this,1);
  }
  return;
}



/* ---- SetEffectType @ 60001410 size=13 ---- */

/* public: void __thiscall CGraphicCtrl::SetEffectType(unsigned char) */

void __thiscall CGraphicCtrl::SetEffectType(CGraphicCtrl *this,uchar param_1)

{
                    /* 0x1410  400  ?SetEffectType@CGraphicCtrl@@QAEXE@Z */
  (this->CGraphicCtrl_data).offset_0x11c = param_1;
  return;
}



/* ---- SetEffectCurrentDegree @ 60001420 size=13 ---- */

/* public: void __thiscall CGraphicCtrl::SetEffectCurrentDegree(unsigned char) */

void __thiscall CGraphicCtrl::SetEffectCurrentDegree(CGraphicCtrl *this,uchar param_1)

{
                    /* 0x1420  397  ?SetEffectCurrentDegree@CGraphicCtrl@@QAEXE@Z */
  (this->CGraphicCtrl_data).offset_0x11f = param_1;
  return;
}



/* ---- GetEffectType @ 60001430 size=7 ---- */

/* public: unsigned char __thiscall CGraphicCtrl::GetEffectType(void) */

uchar __thiscall CGraphicCtrl::GetEffectType(CGraphicCtrl *this)

{
                    /* 0x1430  214  ?GetEffectType@CGraphicCtrl@@QAEEXZ */
  return (this->CGraphicCtrl_data).offset_0x11c;
}



/* ---- GetEffectCurrentDegree @ 60001440 size=7 ---- */

/* public: unsigned char __thiscall CGraphicCtrl::GetEffectCurrentDegree(void) */

uchar __thiscall CGraphicCtrl::GetEffectCurrentDegree(CGraphicCtrl *this)

{
                    /* 0x1440  212  ?GetEffectCurrentDegree@CGraphicCtrl@@QAEEXZ */
  return (this->CGraphicCtrl_data).offset_0x11f;
}



/* ---- SetLifeTime @ 60001450 size=45 ---- */

/* public: void __thiscall CGraphicCtrl::SetLifeTime(unsigned long,int) */

void __thiscall CGraphicCtrl::SetLifeTime(CGraphicCtrl *this,ulong param_1,int param_2)

{
                    /* 0x1450  410  ?SetLifeTime@CGraphicCtrl@@QAEXKH@Z */
  if (param_2 == 0) {
    (this->CGraphicCtrl_data).offset_0x128 = param_1;
    return;
  }
  (this->CGraphicCtrl_data).offset_0x124 = (this->CGraphicCtrl_data).offset_0x120;
  (this->CGraphicCtrl_data).offset_0x128 = param_1;
  return;
}



/* ---- GetLifeTime @ 60001480 size=7 ---- */

/* public: unsigned long __thiscall CGraphicCtrl::GetLifeTime(void) */

ulong __thiscall CGraphicCtrl::GetLifeTime(CGraphicCtrl *this)

{
                    /* 0x1480  223  ?GetLifeTime@CGraphicCtrl@@QAEKXZ */
  return (this->CGraphicCtrl_data).offset_0x128;
}



/* ---- SetEffectTime @ 60001490 size=45 ---- */

/* public: void __thiscall CGraphicCtrl::SetEffectTime(unsigned long,int) */

void __thiscall CGraphicCtrl::SetEffectTime(CGraphicCtrl *this,ulong param_1,int param_2)

{
                    /* 0x1490  399  ?SetEffectTime@CGraphicCtrl@@QAEXKH@Z */
  if (param_2 == 0) {
    (this->CGraphicCtrl_data).offset_0x130 = param_1;
    return;
  }
  (this->CGraphicCtrl_data).offset_0x12c = (this->CGraphicCtrl_data).offset_0x120;
  (this->CGraphicCtrl_data).offset_0x130 = param_1;
  return;
}



/* ---- GetEffectTime @ 600014c0 size=7 ---- */

/* public: unsigned long __thiscall CGraphicCtrl::GetEffectTime(void) */

ulong __thiscall CGraphicCtrl::GetEffectTime(CGraphicCtrl *this)

{
                    /* 0x14c0  213  ?GetEffectTime@CGraphicCtrl@@QAEKXZ */
  return (this->CGraphicCtrl_data).offset_0x130;
}



/* ---- SetShowTime @ 600014d0 size=65 ---- */

/* public: void __thiscall CGraphicCtrl::SetShowTime(unsigned long,int,int) */

void __thiscall CGraphicCtrl::SetShowTime(CGraphicCtrl *this,ulong param_1,int param_2,int param_3)

{
                    /* 0x14d0  434  ?SetShowTime@CGraphicCtrl@@QAEXKHH@Z */
  (this->CGraphicCtrl_data).offset_0x134 = 1;
  (this->CGraphicCtrl_data).offset_0x138 = param_2;
  if (param_3 == 0) {
    (this->CGraphicCtrl_data).offset_0x13c = param_1;
    return;
  }
  (this->CGraphicCtrl_data).offset_0x140 = (this->CGraphicCtrl_data).offset_0x120;
  (this->CGraphicCtrl_data).offset_0x13c = param_1;
  return;
}



/* ---- GetShowTime @ 60001520 size=7 ---- */

/* public: unsigned long __thiscall CGraphicCtrl::GetShowTime(void) */

ulong __thiscall CGraphicCtrl::GetShowTime(CGraphicCtrl *this)

{
                    /* 0x1520  239  ?GetShowTime@CGraphicCtrl@@QAEKXZ */
  return (this->CGraphicCtrl_data).offset_0x13c;
}



/* ---- SetPlayTime @ 60001530 size=65 ---- */

/* public: void __thiscall CGraphicCtrl::SetPlayTime(unsigned long,int,int) */

void __thiscall CGraphicCtrl::SetPlayTime(CGraphicCtrl *this,ulong param_1,int param_2,int param_3)

{
                    /* 0x1530  417  ?SetPlayTime@CGraphicCtrl@@QAEXKHH@Z */
  (this->CGraphicCtrl_data).offset_0x144 = 1;
  (this->CGraphicCtrl_data).offset_0x148 = param_2;
  if (param_3 == 0) {
    (this->CGraphicCtrl_data).offset_0x14c = param_1;
    return;
  }
  (this->CGraphicCtrl_data).offset_0x150 = (this->CGraphicCtrl_data).offset_0x120;
  (this->CGraphicCtrl_data).offset_0x14c = param_1;
  return;
}



/* ---- GetPlayTime @ 60001580 size=7 ---- */

/* public: unsigned long __thiscall CGraphicCtrl::GetPlayTime(void) */

ulong __thiscall CGraphicCtrl::GetPlayTime(CGraphicCtrl *this)

{
                    /* 0x1580  230  ?GetPlayTime@CGraphicCtrl@@QAEKXZ */
  return (this->CGraphicCtrl_data).offset_0x14c;
}



/* ---- SetNoticeTime @ 60001590 size=55 ---- */

/* public: void __thiscall CGraphicCtrl::SetNoticeTime(unsigned long,int) */

void __thiscall CGraphicCtrl::SetNoticeTime(CGraphicCtrl *this,ulong param_1,int param_2)

{
                    /* 0x1590  413  ?SetNoticeTime@CGraphicCtrl@@QAEXKH@Z */
  (this->CGraphicCtrl_data).offset_0x154 = 1;
  if (param_2 == 0) {
    (this->CGraphicCtrl_data).offset_0x158 = param_1;
    return;
  }
  (this->CGraphicCtrl_data).offset_0x15c = (this->CGraphicCtrl_data).offset_0x120;
  (this->CGraphicCtrl_data).offset_0x158 = param_1;
  return;
}



/* ---- GetNoticeTime @ 600015d0 size=7 ---- */

/* public: unsigned long __thiscall CGraphicCtrl::GetNoticeTime(void) */

ulong __thiscall CGraphicCtrl::GetNoticeTime(CGraphicCtrl *this)

{
                    /* 0x15d0  228  ?GetNoticeTime@CGraphicCtrl@@QAEKXZ */
  return (this->CGraphicCtrl_data).offset_0x158;
}



/* ---- GetAccumulatedTime @ 600015e0 size=7 ---- */

/* public: unsigned long & __thiscall CGraphicCtrl::GetAccumulatedTime(void) */

ulong * __thiscall CGraphicCtrl::GetAccumulatedTime(CGraphicCtrl *this)

{
                    /* 0x15e0  188  ?GetAccumulatedTime@CGraphicCtrl@@QAEAAKXZ */
  return &(this->CGraphicCtrl_data).offset_0x120;
}



/* ---- CGraphicCtrl::SetSpeedRate @ 600015f0 size=13 ---- */

/* public: virtual void __thiscall CGraphicCtrl::SetSpeedRate(float)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Text
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CHgDummyCtrl
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up */

void __thiscall CGraphicCtrl::CGraphicCtrl__SetSpeedRate(CGraphicCtrl *this,float param_1)

{
                    /* 0x15f0  438  ?SetSpeedRate@CGraphicCtrl@@UAEXM@Z */
  (this->CGraphicCtrl_data).offset_0x160 = param_1;
  return;
}



/* ---- GetPosBase @ 60001600 size=24 ---- */

/* public: class CPoint __thiscall CGraphicCtrl::GetPosBase(void)const  */

void __thiscall CGraphicCtrl::GetPosBase(CGraphicCtrl *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x1600  232  ?GetPosBase@CGraphicCtrl@@QBE?AVCPoint@@XZ */
  uVar1 = (this->CGraphicCtrl_data).offset_0xc4;
  *in_stack_00000004 = (this->CGraphicCtrl_data).offset_0xc0;
  in_stack_00000004[1] = uVar1;
  return;
}



/* ---- GetSize @ 60001620 size=24 ---- */

/* public: class CSize __thiscall CGraphicCtrl::GetSize(void) */

void __thiscall CGraphicCtrl::GetSize(CGraphicCtrl *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x1620  240  ?GetSize@CGraphicCtrl@@QAE?AVCSize@@XZ */
  uVar1 = (this->CGraphicCtrl_data).offset_0xd4;
  *in_stack_00000004 = (this->CGraphicCtrl_data).offset_0xd0;
  in_stack_00000004[1] = uVar1;
  return;
}



/* ---- GetCurve @ 60001640 size=4 ---- */

/* public: class CGraphicCurve * __thiscall CGraphicCtrl::GetCurve(void) */

CGraphicCurve * __thiscall CGraphicCtrl::GetCurve(CGraphicCtrl *this)

{
                    /* 0x1640  208  ?GetCurve@CGraphicCtrl@@QAEPAVCGraphicCurve@@XZ */
  return (CGraphicCurve *)&(this->CGraphicCtrl_data).field_0x24;
}



/* ---- GetClippingRect @ 60001650 size=7 ---- */

/* public: class CRect & __thiscall CGraphicCtrl::GetClippingRect(void) */

CRect * __thiscall CGraphicCtrl::GetClippingRect(CGraphicCtrl *this)

{
                    /* 0x1650  206  ?GetClippingRect@CGraphicCtrl@@QAEAAVCRect@@XZ */
  return (CRect *)&(this->CGraphicCtrl_data).field_0x10c;
}



/* ---- GetLastUpdatedRect @ 60001660 size=7 ---- */

/* public: class CRect * __thiscall CGraphicCtrl::GetLastUpdatedRect(void) */

CRect * __thiscall CGraphicCtrl::GetLastUpdatedRect(CGraphicCtrl *this)

{
                    /* 0x1660  222  ?GetLastUpdatedRect@CGraphicCtrl@@QAEPAVCRect@@XZ */
  return (CRect *)&(this->CGraphicCtrl_data).field_0xfc;
}



/* ---- GetInvalidateArea @ 60001670 size=6 ---- */

/* public: class CRect * __thiscall CGraphicCtrl::GetInvalidateArea(void) */

CRect * __thiscall CGraphicCtrl::GetInvalidateArea(CGraphicCtrl *this)

{
                    /* 0x1670  220  ?GetInvalidateArea@CGraphicCtrl@@QAEPAVCRect@@XZ */
  return s_prcInvalidateArea;
}



/* ---- GetDIBSrc @ 60001680 size=4 ---- */

/* public: class CHgImage * __thiscall CGraphicCtrl::GetDIBSrc(void)const  */

CHgImage * __thiscall CGraphicCtrl::GetDIBSrc(CGraphicCtrl *this)

{
                    /* 0x1680  209  ?GetDIBSrc@CGraphicCtrl@@QBEPAVCHgImage@@XZ
                       0x1680  218  ?GetIMGSrc@CGraphicCtrl@@QBEPAVCHgImage@@XZ */
  return (CHgImage *)(this->CGraphicCtrl_data).offset_0x20;
}



/* ---- IsUseDIB @ 60001690 size=4 ---- */

/* public: int __thiscall CGraphicCtrl::IsUseDIB(void)const  */

int __thiscall CGraphicCtrl::IsUseDIB(CGraphicCtrl *this)

{
                    /* 0x1690  281  ?IsUseDIB@CGraphicCtrl@@QBEHXZ */
  return (this->CGraphicCtrl_data).offset_0x4;
}



/* ---- SetUseDIB @ 600016a0 size=10 ---- */

/* public: void __thiscall CGraphicCtrl::SetUseDIB(int) */

void __thiscall CGraphicCtrl::SetUseDIB(CGraphicCtrl *this,int param_1)

{
                    /* 0x16a0  447  ?SetUseDIB@CGraphicCtrl@@QAEXH@Z */
  (this->CGraphicCtrl_data).offset_0x4 = param_1;
  return;
}



/* ---- IsShow @ 600016b0 size=4 ---- */

/* public: int __thiscall CGraphicCtrl::IsShow(void)const  */

int __thiscall CGraphicCtrl::IsShow(CGraphicCtrl *this)

{
                    /* 0x16b0  278  ?IsShow@CGraphicCtrl@@QBEHXZ */
  return (this->CGraphicCtrl_data).offset_0xc;
}



/* ---- IsPlay @ 600016c0 size=4 ---- */

/* public: int __thiscall CGraphicCtrl::IsPlay(void)const  */

int __thiscall CGraphicCtrl::IsPlay(CGraphicCtrl *this)

{
                    /* 0x16c0  276  ?IsPlay@CGraphicCtrl@@QBEHXZ */
  return (this->CGraphicCtrl_data).offset_0x14;
}



/* ---- ShowCtrl @ 600016d0 size=27 ---- */

/* public: void __thiscall CGraphicCtrl::ShowCtrl(int) */

void __thiscall CGraphicCtrl::ShowCtrl(CGraphicCtrl *this,int param_1)

{
                    /* 0x16d0  451  ?ShowCtrl@CGraphicCtrl@@QAEXH@Z */
  if ((this->CGraphicCtrl_data).offset_0xc != param_1) {
    __AdjustShow(this,param_1);
    (this->CGraphicCtrl_data).offset_0xc = param_1;
  }
  return;
}



/* ---- PlayCtrl @ 600016f0 size=40 ---- */

/* public: void __thiscall CGraphicCtrl::PlayCtrl(int) */

void __thiscall CGraphicCtrl::PlayCtrl(CGraphicCtrl *this,int param_1)

{
  OnSelfNotice *UNRECOVERED_JUMPTABLE;
  
                    /* 0x16f0  344  ?PlayCtrl@CGraphicCtrl@@QAEXH@Z */
  if ((this->CGraphicCtrl_data).offset_0x14 == param_1) {
    return;
  }
  (this->CGraphicCtrl_data).offset_0x14 = param_1;
  UNRECOVERED_JUMPTABLE = this->vftablePtr->OnSelfNotice;
  (this->CGraphicCtrl_data).offset_0x120 = 0;
                    /* WARNING: Could not recover jumptable at 0x60001713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0xff03);
  return;
}



/* ---- CGraphicCtrl_Root::_AllocSelf @ 60001720 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Root::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_Root::CGraphicCtrl_Root___AllocSelf(CGraphicCtrl_Root *this)

{
  CGraphicCtrl_Root *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1720  468  ?_AllocSelf@CGraphicCtrl_Root@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x168);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_Root *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CGraphicCtrl_Root(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- _GetBaseClass @ 60001790 size=6 ---- */

/* protected: static struct CRuntimeClass * __stdcall CAnimateGameWnd::_GetBaseClass(void) */

CRuntimeClass * CAnimateGameWnd::_GetBaseClass(void)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60001790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x1790  486  ?_GetBaseClass@CAnimateGameWnd@@KGPAUCRuntimeClass@@XZ */
  pCVar1 = CGameWnd::GetThisClass();
  return pCVar1;
}



/* ---- CAnimateGameWnd::GetRuntimeClass @ 600017a0 size=6 ---- */

/* public: virtual struct CRuntimeClass * __thiscall CAnimateGameWnd::GetRuntimeClass(void)const  */

CRuntimeClass * __thiscall CAnimateGameWnd::CAnimateGameWnd__GetRuntimeClass(CAnimateGameWnd *this)

{
                    /* 0x17a0  237  ?GetRuntimeClass@CAnimateGameWnd@@UBEPAUCRuntimeClass@@XZ
                       0x17a0  243  ?GetThisClass@CAnimateGameWnd@@SGPAUCRuntimeClass@@XZ */
  return (CRuntimeClass *)&classCAnimateGameWnd;
}



/* ---- ~CAnimateGameWnd @ 600017b0 size=186 ---- */

/* public: virtual __thiscall CAnimateGameWnd::~CAnimateGameWnd(void) */

void __thiscall CAnimateGameWnd::~CAnimateGameWnd(CAnimateGameWnd *this)

{
  HDC hdc;
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x17b0  37  ??1CAnimateGameWnd@@UAE@XZ */
  puStack_8 = &LAB_60016108;
  local_c = ExceptionList;
  uVar2 = DAT_600259a8 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable__for__CWnd__;
  this->vftablePtr = &_vftable__for__CControlBase__;
  hdc = (this->CAnimateGameWnd_data).offset_0x200;
  local_4 = 1;
  if (hdc != (HDC)0x0) {
    SelectObject(hdc,(this->CAnimateGameWnd_data).offset_0x204);
    DeleteDC((this->CAnimateGameWnd_data).offset_0x200);
    (this->CAnimateGameWnd_data).offset_0x200 = (HDC)0x0;
  }
  puVar1 = (this->CAnimateGameWnd_data).offset_0x208;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar2);
    (this->CAnimateGameWnd_data).offset_0x208 = (undefined4 *)0x0;
  }
  local_4 = local_4 & 0xffffff00;
  CHgDIB::~CHgDIB((CHgDIB *)&(this->CAnimateGameWnd_data).field_0x19c);
  local_4 = 0xffffffff;
  CGameWnd::~CGameWnd((CGameWnd *)this);
  ExceptionList = local_c;
  return;
}



/* ---- OnAnimate @ 60001870 size=30 ---- */

/* protected: long __thiscall CAnimateGameWnd::OnAnimate(unsigned int,long) */

long __thiscall CAnimateGameWnd::OnAnimate(CAnimateGameWnd *this,uint param_1,long param_2)

{
  CAnimateGameWnd_vftable0 *pCVar1;
  DWORD DVar2;
  
                    /* 0x1870  288  ?OnAnimate@CAnimateGameWnd@@IAEJIJ@Z */
  pCVar1 = this->vftablePtr;
  DVar2 = timeGetTime();
  (*pCVar1->AnimationProc)(this,DVar2);
  return 0;
}



/* ---- OnDestroy @ 60001890 size=58 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnDestroy(void) */

void __thiscall CAnimateGameWnd::OnDestroy(CAnimateGameWnd *this)

{
  HANDLE pvVar1;
  
                    /* 0x1890  304  ?OnDestroy@CAnimateGameWnd@@IAEXXZ */
  pvVar1 = (HANDLE)(this->CAnimateGameWnd_data).offset_0x18c;
  if (pvVar1 != (HANDLE)0x0) {
    CloseHandle(pvVar1);
  }
  pvVar1 = (HANDLE)(this->CAnimateGameWnd_data).offset_0x190;
  if (pvVar1 != (HANDLE)0x0) {
    CloseHandle(pvVar1);
  }
  timeEndPeriod((this->CAnimateGameWnd_data).offset_0x180);
  CWnd::OnDestroy((CWnd *)this);
  return;
}



/* ---- RemoveAllGC @ 600018d0 size=11 ---- */

/* public: void __thiscall CAnimateGameWnd::RemoveAllGC(void) */

void __thiscall CAnimateGameWnd::RemoveAllGC(CAnimateGameWnd *this)

{
                    /* 0x18d0  369  ?RemoveAllGC@CAnimateGameWnd@@QAEXXZ */
  CGraphicCtrl::DelAllChild((CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208);
  return;
}



/* ---- OnMsgFromMainActiveApp @ 600018e0 size=15 ---- */

/* protected: long __thiscall CAnimateGameWnd::OnMsgFromMainActiveApp(unsigned int,long) */

long __thiscall
CAnimateGameWnd::OnMsgFromMainActiveApp(CAnimateGameWnd *this,uint param_1,long param_2)

{
                    /* 0x18e0  319  ?OnMsgFromMainActiveApp@CAnimateGameWnd@@IAEJIJ@Z */
  (this->CAnimateGameWnd_data).offset_0x228 = param_1;
  return 0;
}



/* ---- FUN_600018f0 @ 600018f0 size=14 ---- */

void FUN_600018f0(void *param_1)

{
  operator_delete(param_1);
  return;
}



/* ---- vfunction67 @ 60001900 size=13 ---- */

void __thiscall __CWndForInput::vfunction67(__CWndForInput *this)

{
  EnableWindow(*(HWND *)&(this->__CWndForInput_data).field_0x1c,0);
  return;
}



/* ---- vfunction68 @ 60001910 size=13 ---- */

void __thiscall __CWndForInput::vfunction68(__CWndForInput *this)

{
  EnableWindow(*(HWND *)&(this->__CWndForInput_data).field_0x1c,1);
  return;
}



/* ---- scalar_deleting_destructor @ 60001920 size=85 ---- */

CAnimateGameWnd * __thiscall
CAnimateGameWnd::scalar_deleting_destructor(CAnimateGameWnd *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CAnimateGameWnd(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CAnimateGameWnd *)this;
  }
  puVar1 = &this[-1].CAnimateGameWnd_data.offset_0x228;
  _eh_vector_destructor_iterator_
            (this,0x284,this[-1].CAnimateGameWnd_data.offset_0x228,~CAnimateGameWnd);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CAnimateGameWnd *)puVar1;
}



/* ---- IsArrived @ 60001980 size=135 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CGraphicCurve::IsArrived(void) */

int __thiscall CGraphicCurve::IsArrived(CGraphicCurve *this)

{
  byte bVar1;
  
                    /* 0x1980  269  ?IsArrived@CGraphicCurve@@QAEHXZ */
  bVar1 = (this->CGraphicCurve_data).offset_0x14;
  if (((bVar1 & 1) != 0) &&
     ((_DAT_60017940 <
       ABS((this->CGraphicCurve_data).offset_0x28 - (this->CGraphicCurve_data).offset_0x38) ||
      (_DAT_60017940 < ABS((float)(this->CGraphicCurve_data).offset_0x34))))) {
    return 0;
  }
  if ((bVar1 & 2) != 0) {
    if (_DAT_60017940 <
        ABS((this->CGraphicCurve_data).offset_0x48 - (this->CGraphicCurve_data).offset_0x58)) {
      return 0;
    }
    if (_DAT_60017940 < ABS((float)(this->CGraphicCurve_data).offset_0x54)) {
      return 0;
    }
  }
  return 1;
}



/* ---- GetPosition @ 60001a10 size=36 ---- */

/* public: class CPoint __thiscall CGraphicCurve::GetPosition(void) */

undefined4 * __thiscall CGraphicCurve::GetPosition(CGraphicCurve *this)

{
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  ulonglong uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x1a10  234  ?GetPosition@CGraphicCurve@@QAE?AVCPoint@@XZ */
  uVar1 = FUN_60015470(this,in_EDX);
  *in_stack_00000004 = (int)uVar1;
  uVar1 = FUN_60015470(extraout_ECX,(int)(uVar1 >> 0x20));
  in_stack_00000004[1] = (int)uVar1;
  return in_stack_00000004;
}



/* ---- GetChild @ 60001a40 size=50 ---- */

/* public: class CGraphicCtrl * __thiscall CGraphicCtrl::GetChild(int) */

CGraphicCtrl * __thiscall CGraphicCtrl::GetChild(CGraphicCtrl *this,int param_1)

{
  int *piVar1;
  
                    /* 0x1a40  204  ?GetChild@CGraphicCtrl@@QAEPAV1@H@Z */
  if ((int)(this->CGraphicCtrl_data).offset_0xec <= param_1) {
    return (CGraphicCtrl *)0x0;
  }
  if (param_1 < 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (this->CGraphicCtrl_data).offset_0xe4;
    if (param_1 != 0) {
      do {
        param_1 = param_1 + -1;
        piVar1 = (int *)*piVar1;
      } while (param_1 != 0);
      return (CGraphicCtrl *)piVar1[2];
    }
  }
  return (CGraphicCtrl *)piVar1[2];
}



/* ---- SetBlendType @ 60001a80 size=23 ---- */

/* public: void __thiscall CGraphicCtrl::SetBlendType(int,int) */

void __thiscall CGraphicCtrl::SetBlendType(CGraphicCtrl *this,int param_1,int param_2)

{
                    /* 0x1a80  381  ?SetBlendType@CGraphicCtrl@@QAEXHH@Z */
  (this->CGraphicCtrl_data).offset_0x11c = (undefined1)param_1;
  (this->CGraphicCtrl_data).offset_0x11f = (undefined1)param_2;
  return;
}



/* ---- SetPos @ 60001aa0 size=29 ---- */

/* public: void __thiscall CGraphicCtrl::SetPos(int,int) */

void __thiscall CGraphicCtrl::SetPos(CGraphicCtrl *this,int param_1,int param_2)

{
                    /* 0x1aa0  418  ?SetPos@CGraphicCtrl@@QAEXHH@Z
                       0x1aa0  419  ?SetPos@CGraphicCtrl@@QAEXVCPoint@@@Z */
  CGraphicCurve::SetPosForce
            ((CGraphicCurve *)&(this->CGraphicCtrl_data).field_0x24,(float)param_1,(float)param_2);
  return;
}



/* ---- GetPos @ 60001ac0 size=36 ---- */

/* public: class CPoint __thiscall CGraphicCtrl::GetPos(void) */

undefined4 * __thiscall CGraphicCtrl::GetPos(CGraphicCtrl *this)

{
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  ulonglong uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x1ac0  231  ?GetPos@CGraphicCtrl@@QAE?AVCPoint@@XZ */
  uVar1 = FUN_60015470(this,in_EDX);
  *in_stack_00000004 = (int)uVar1;
  uVar1 = FUN_60015470(extraout_ECX,(int)(uVar1 >> 0x20));
  in_stack_00000004[1] = (int)uVar1;
  return in_stack_00000004;
}



/* ---- SetPosTo @ 60001af0 size=31 ---- */

/* public: void __thiscall CGraphicCtrl::SetPosTo(int,int) */

void __thiscall CGraphicCtrl::SetPosTo(CGraphicCtrl *this,int param_1,int param_2)

{
                    /* 0x1af0  424  ?SetPosTo@CGraphicCtrl@@QAEXHH@Z */
  CGraphicCurve::SetTarget
            ((CGraphicCurve *)&(this->CGraphicCtrl_data).field_0x24,(float)param_1,(float)param_2,1)
  ;
  return;
}



/* ---- SetRates @ 60001b10 size=29 ---- */

/* public: void __thiscall CGraphicCtrl::SetRates(float,float) */

void __thiscall CGraphicCtrl::SetRates(CGraphicCtrl *this,float param_1,float param_2)

{
                    /* 0x1b10  428  ?SetRates@CGraphicCtrl@@QAEXMM@Z */
  CGraphicCurve::SetRate((CGraphicCurve *)&(this->CGraphicCtrl_data).field_0x24,param_1,param_2);
  return;
}



/* ---- InvalidateArea @ 60001b30 size=57 ---- */

/* public: void __thiscall CGraphicCtrl::InvalidateArea(int,int,int,int) */

void __thiscall
CGraphicCtrl::InvalidateArea(CGraphicCtrl *this,int param_1,int param_2,int param_3,int param_4)

{
  RECT local_10;
  
                    /* 0x1b30  266  ?InvalidateArea@CGraphicCtrl@@QAEXHHHH@Z */
  local_10.left = param_1;
  local_10.top = param_2;
  local_10.bottom = param_4;
  local_10.right = param_3;
  UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,&local_10);
  return;
}



/* ---- CAnimateGameWnd @ 60001b70 size=254 ---- */

/* public: __thiscall CAnimateGameWnd::CAnimateGameWnd(void) */

CAnimateGameWnd * __thiscall CAnimateGameWnd::CAnimateGameWnd(CAnimateGameWnd *this)

{
  DWORD DVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1b70  1  ??0CAnimateGameWnd@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016139;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CGameWnd::CGameWnd((CGameWnd *)this);
  local_4 = 0;
  this->vftablePtr = &_vftable__for__CWnd__;
  this->vftablePtr = &_vftable__for__CControlBase__;
  CHgDIB::CHgDIB((CHgDIB *)&(this->CAnimateGameWnd_data).field_0x19c);
  (this->CAnimateGameWnd_data).offset_0x180 = 10;
  (this->CAnimateGameWnd_data).offset_0x17c = 0;
  (this->CAnimateGameWnd_data).offset_0x178 = 0;
  GameWnd = (CWnd *)this;
  CGraphicCtrl::s_pGameWnd = (CWnd *)this;
  DVar1 = timeGetTime();
  (this->CAnimateGameWnd_data).offset_0x20c = DVar1;
  (this->CAnimateGameWnd_data).offset_0x218 = 0;
  (this->CAnimateGameWnd_data).offset_0x21c = 0;
  (this->CAnimateGameWnd_data).offset_0x220 = 800;
  (this->CAnimateGameWnd_data).offset_0x210 = 0;
  (this->CAnimateGameWnd_data).offset_0x200 = (HDC)0x0;
  (this->CAnimateGameWnd_data).offset_0x174 = 0;
  (this->CAnimateGameWnd_data).offset_0x188 = 0;
  (this->CAnimateGameWnd_data).offset_0x18c = 0;
  (this->CAnimateGameWnd_data).offset_0x190 = 0;
  (this->CAnimateGameWnd_data).offset_0x194 = 0;
  (this->CAnimateGameWnd_data).offset_0x208 = (undefined4 *)0x0;
  (this->CAnimateGameWnd_data).offset_0x198 = 0;
  (this->CAnimateGameWnd_data).offset_0x214 = 1;
  (this->CAnimateGameWnd_data).offset_0x224 = 600;
  (this->CAnimateGameWnd_data).offset_0x228 = 1;
  ExceptionList = local_c;
  return this;
}



/* ---- CAnimateGameWnd::AnimationProc @ 60001c90 size=456 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CAnimateGameWnd::AnimationProc(unsigned long) */

void __thiscall CAnimateGameWnd::CAnimateGameWnd__AnimationProc(CAnimateGameWnd *this,ulong param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  LONG *pLVar4;
  BOOL BVar5;
  SGlobalInfo *this_00;
  CDisplayModeChanger *this_01;
  int iVar6;
  MMRESULT MVar7;
  UINT uResolution;
  RECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  undefined1 local_10 [16];
  
                    /* 0x1c90  115  ?AnimationProc@CAnimateGameWnd@@UAEXK@Z */
  if ((this->CAnimateGameWnd_data).offset_0x20c <= param_1) {
    _s_CursorPosLast = _s_CursorPos;
    DAT_60025af8 = DAT_60025af0;
    GetCursorPos((LPPOINT)&CGraphicCtrl::s_CursorPos);
    ScreenToClient(*(HWND *)&this->field_0x20,(LPPOINT)&CGraphicCtrl::s_CursorPos);
    if ((this->CAnimateGameWnd_data).offset_0x20c == 0) {
      (this->CAnimateGameWnd_data).offset_0x20c = param_1;
    }
    uVar3 = param_1 - (this->CAnimateGameWnd_data).offset_0x20c;
    (this->CAnimateGameWnd_data).offset_0x20c = param_1;
    (this->CAnimateGameWnd_data).offset_0x210 = uVar3;
    if (0x3b < uVar3) {
      uVar3 = (this->CAnimateGameWnd_data).offset_0x210;
      CGraphicCurve::s_dDelta = _DAT_60017954;
      while (0x3b < uVar3) {
        pLVar4 = (LONG *)CGraphicCtrl::UpdateState
                                   ((CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208,
                                    (ulong)local_10,'<');
        local_40.left = *pLVar4;
        local_40.top = pLVar4[1];
        local_40.right = pLVar4[2];
        local_40.bottom = pLVar4[3];
        puVar1 = &(this->CAnimateGameWnd_data).offset_0x210;
        *puVar1 = *puVar1 + -0x3c;
        UnionRect(&local_30,&local_30,&local_40);
        uVar3 = (this->CAnimateGameWnd_data).offset_0x210;
      }
    }
    fVar2 = (float)(int)(this->CAnimateGameWnd_data).offset_0x210;
    if ((int)(this->CAnimateGameWnd_data).offset_0x210 < 0) {
      fVar2 = fVar2 + _DAT_60017950;
    }
    CGraphicCurve::s_dDelta = fVar2 * (float)_DAT_60017948;
    pLVar4 = (LONG *)CGraphicCtrl::UpdateState
                               ((CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208,
                                (ulong)local_10,(uchar)(this->CAnimateGameWnd_data).offset_0x210);
    local_40.left = *pLVar4;
    local_40.top = pLVar4[1];
    local_40.right = pLVar4[2];
    local_40.bottom = pLVar4[3];
    UnionRect(&local_30,&local_30,&local_40);
    UnionRect(&local_20,&local_30,(RECT *)CGraphicCtrl::s_prcInvalidateArea);
    CGraphicCtrl_Root::ValidateArea((CGraphicCtrl_Root *)(this->CAnimateGameWnd_data).offset_0x208);
    BVar5 = IsRectEmpty(&local_20);
    if (BVar5 == 0) {
      (*this->vftablePtr->FlipEx)(this,(CRect *)&local_20);
    }
  }
  if ((this->CAnimateGameWnd_data).offset_0x194 != 0) {
    this_00 = GInfo();
    this_01 = SGlobalInfo::DisplayMode(this_00);
    iVar6 = CDisplayModeChanger::IsFullScreen(this_01);
    if (iVar6 == 0) {
      uResolution = 10;
    }
    else {
      uResolution = 3;
    }
    MVar7 = timeSetEvent(10,uResolution,&LAB_60001c70,0,0);
    (this->CAnimateGameWnd_data).offset_0x198 = MVar7;
  }
  return;
}



/* ---- CAnimateGameWnd::FlipEx @ 60001e60 size=188 ---- */

/* public: virtual void __thiscall CAnimateGameWnd::FlipEx(class CRect &) */

void __thiscall CAnimateGameWnd::CAnimateGameWnd__FlipEx(CAnimateGameWnd *this,CRect *param_1)

{
  int y;
  int x;
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  tagRECT local_10;
  
                    /* 0x1e60  185  ?FlipEx@CAnimateGameWnd@@UAEXAAVCRect@@@Z */
  hdc = GetDC(*(HWND *)&this->field_0x20);
  if (hdc != (HDC)0x0) {
    IntersectRect(&local_10,(RECT *)&(this->CAnimateGameWnd_data).offset_0x218,(RECT *)param_1);
    *(LONG *)param_1 = local_10.left;
    *(LONG *)(param_1 + 4) = local_10.top;
    *(LONG *)(param_1 + 8) = local_10.right;
    *(LONG *)(param_1 + 0xc) = local_10.bottom;
    y = *(int *)(param_1 + 4);
    x = *(int *)param_1;
    iVar1 = *(int *)(param_1 + 8);
    BVar2 = IsRectEmpty((RECT *)param_1);
    if (BVar2 == 0) {
      CGraphicCtrl::UpdateScreen((CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208,param_1);
    }
    BitBlt(hdc,x,y,iVar1 - x,local_10.bottom - y,CGraphicCtrl::s_hDCBackBuf,x,y,0xcc0020);
    ReleaseDC(*(HWND *)&this->field_0x20,hdc);
  }
  return;
}



/* ---- CAnimateGameWnd::FlipSc @ 60001f20 size=21 ---- */

/* public: virtual void __thiscall CAnimateGameWnd::FlipSc(class CRect &) */

void __thiscall CAnimateGameWnd::CAnimateGameWnd__FlipSc(CAnimateGameWnd *this,CRect *param_1)

{
                    /* 0x1f20  186  ?FlipSc@CAnimateGameWnd@@UAEXAAVCRect@@@Z
                       0x1f20  265  ?InvalidateArea@CGraphicCtrl@@QAEXABVCRect@@@Z */
  UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
            (RECT *)param_1);
  return;
}



/* ---- CAnimateGameWnd::DoExActive @ 60001f40 size=421 ---- */

/* public: virtual void __thiscall CAnimateGameWnd::DoExActive(int) */

void __thiscall CAnimateGameWnd::CAnimateGameWnd__DoExActive(CAnimateGameWnd *this,int param_1)

{
  HWND hWnd;
  undefined4 *puVar1;
  CGraphicCtrl *this_00;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  MMRESULT MVar5;
  HANDLE pvVar6;
  CGraphicCtrl_Root *this_01;
  undefined1 auStack_1e [2];
  tagRECT tStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f40  167  ?DoExActive@CAnimateGameWnd@@UAEXH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6001616b;
  local_c = ExceptionList;
  uVar4 = DAT_600259a8 ^ (uint)(auStack_1e + -0x12);
  ExceptionList = &local_c;
  if (param_1 == 0) {
    (this->CAnimateGameWnd_data).offset_0x194 = 0;
    if ((this->CAnimateGameWnd_data).offset_0x174 == '\0') {
      timeKillEvent((this->CAnimateGameWnd_data).offset_0x198);
      CloseHandle(*(HANDLE *)&(this->CAnimateGameWnd_data).field_0x184);
    }
    puVar1 = (this->CAnimateGameWnd_data).offset_0x208;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1,uVar4);
    }
    this_01 = operator_new(0x168);
    uStack_4 = 0;
    if (this_01 == (CGraphicCtrl_Root *)0x0) {
      CGraphicCtrl::s_pUniqueRootCtrl = (CGraphicCtrl_Root *)0x0;
    }
    else {
      CGraphicCtrl::s_pUniqueRootCtrl =
           (CGraphicCtrl_Root *)CGraphicCtrl_Root::CGraphicCtrl_Root(this_01);
    }
    (this->CAnimateGameWnd_data).offset_0x208 = (undefined4 *)CGraphicCtrl::s_pUniqueRootCtrl;
    uStack_4 = 0xffffffff;
    GetClientRect(*(HWND *)&this->field_0x20,&tStack_1c);
    CHgDIB::~CHgDIB((CHgDIB *)(this->CAnimateGameWnd_data).offset_0x208,
                    tStack_1c.right - tStack_1c.left,tStack_1c.bottom - tStack_1c.top,
                    (CHgDIB *)&(this->CAnimateGameWnd_data).field_0x19c,(CRect *)&DAT_600259c4);
    this_00 = (CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208;
    if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
      CGraphicCtrl::__AdjustShow(this_00,1);
      (this_00->CGraphicCtrl_data).offset_0xc = 1;
    }
    piVar2 = (this->CAnimateGameWnd_data).offset_0x208;
    if (piVar2[6] != 1) {
      pcVar3 = *(code **)(*piVar2 + 0x2c);
      piVar2[6] = 1;
      piVar2[0x49] = 0;
      (*pcVar3)(0xff03);
    }
    KillTimer(*(HWND *)&this->field_0x20,0x43d2);
  }
  else {
    (this->CAnimateGameWnd_data).offset_0x210 = 0;
    (this->CAnimateGameWnd_data).offset_0x20c = 0;
    if ((this->CAnimateGameWnd_data).offset_0x174 == '\0') {
      MVar5 = timeSetEvent(0x12,10,&LAB_60001c70,0,0);
      (this->CAnimateGameWnd_data).offset_0x198 = MVar5;
      pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"MMProcEvent");
      *(HANDLE *)&(this->CAnimateGameWnd_data).field_0x184 = pvVar6;
    }
    hWnd = *(HWND *)&this->field_0x20;
    (this->CAnimateGameWnd_data).offset_0x194 = param_1;
    SetTimer(hWnd,0x43d2,100,(TIMERPROC)0x0);
  }
  CGameWnd::DoExActive((CGameWnd *)this,param_1);
  ExceptionList = local_c;
  return;
}



/* ---- LinkGC @ 600020f0 size=238 ---- */

/* public: class CGraphicCtrl * __thiscall CAnimateGameWnd::LinkGC(class CGraphicCtrl
   &,int,int,int,int,unsigned short,int,int,unsigned char,class CGraphicCtrl *) */

CGraphicCtrl * __thiscall
CAnimateGameWnd::LinkGC
          (CAnimateGameWnd *this,CGraphicCtrl *param_1,int param_2,int param_3,int param_4,
          int param_5,ushort param_6,int param_7,int param_8,uchar param_9,CGraphicCtrl *param_10)

{
  undefined1 *this_00;
  CGraphicCtrl_vftable *pCVar1;
  OnSelfNotice *pOVar2;
  CGraphicCtrl *this_01;
  int iVar3;
  
                    /* 0x20f0  287
                       ?LinkGC@CAnimateGameWnd@@QAEPAVCGraphicCtrl@@AAV2@HHHHGHHEPAV2@@Z */
  this_01 = (CGraphicCtrl *)(**(code **)(*(int *)param_1 + 8))();
  if (this_01 != (CGraphicCtrl *)0x0) {
    this_00 = &(this_01->CGraphicCtrl_data).field_0x24;
    CGraphicCurve::SetPosForce((CGraphicCurve *)this_00,(float)param_2,(float)param_3);
    if (param_4 == -1) {
      param_4 = param_2;
    }
    if (param_5 == -1) {
      param_2 = param_3;
    }
    else {
      param_2 = param_5;
    }
    CGraphicCurve::SetTarget((CGraphicCurve *)this_00,(float)param_4,(float)param_2,1);
    (this_01->CGraphicCtrl_data).offset_0x8 = param_6;
    iVar3 = CGraphicCtrl::AddChild
                      ((CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208,
                       (CGraphicCtrl *)this_01,param_9,param_10);
    if (iVar3 == 0) {
      (*this_01->vftablePtr->deleting_destructor)(this_01,1);
      return (CGraphicCtrl *)0x0;
    }
    if ((this_01->CGraphicCtrl_data).offset_0xc != param_7) {
      CGraphicCtrl::__AdjustShow(this_01,param_7);
      (this_01->CGraphicCtrl_data).offset_0xc = param_7;
    }
    if ((this_01->CGraphicCtrl_data).offset_0x14 != param_8) {
      pCVar1 = this_01->vftablePtr;
      (this_01->CGraphicCtrl_data).offset_0x14 = param_8;
      pOVar2 = pCVar1->OnSelfNotice;
      (this_01->CGraphicCtrl_data).offset_0x120 = 0;
      (*pOVar2)(this_01,0xff03);
    }
  }
  return (CGraphicCtrl *)this_01;
}



/* ---- AddGC @ 600021e0 size=236 ---- */

/* public: class CGraphicCtrl * __thiscall CAnimateGameWnd::AddGC(class CGraphicCtrl
   *,int,int,int,int,unsigned short,int,int,unsigned char,class CGraphicCtrl *) */

CGraphicCtrl * __thiscall
CAnimateGameWnd::AddGC
          (CAnimateGameWnd *this,CGraphicCtrl *param_1,int param_2,int param_3,int param_4,
          int param_5,ushort param_6,int param_7,int param_8,uchar param_9,CGraphicCtrl *param_10)

{
  code *pcVar1;
  int iVar2;
  
                    /* 0x21e0  110  ?AddGC@CAnimateGameWnd@@QAEPAVCGraphicCtrl@@PAV2@HHHHGHHE0@Z */
  if (param_1 == (CGraphicCtrl *)0x0) {
    return (CGraphicCtrl *)0x0;
  }
  CGraphicCurve::SetPosForce((CGraphicCurve *)(param_1 + 0x28),(float)param_2,(float)param_3);
  if (param_4 == -1) {
    param_4 = param_2;
  }
  if (param_5 == -1) {
    param_2 = param_3;
  }
  else {
    param_2 = param_5;
  }
  CGraphicCurve::SetTarget((CGraphicCurve *)(param_1 + 0x28),(float)param_4,(float)param_2,1);
  *(ushort *)(param_1 + 0xc) = param_6;
  iVar2 = CGraphicCtrl::AddChild
                    ((CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208,param_1,param_9,
                     param_10);
  if (iVar2 == 0) {
    (*(code *)**(undefined4 **)param_1)(1);
    return (CGraphicCtrl *)0x0;
  }
  if (*(int *)(param_1 + 0x10) != param_7) {
    CGraphicCtrl::__AdjustShow((CGraphicCtrl *)param_1,param_7);
    *(int *)(param_1 + 0x10) = param_7;
  }
  if (*(int *)(param_1 + 0x18) != param_8) {
    *(int *)(param_1 + 0x18) = param_8;
    pcVar1 = *(code **)(*(int *)param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x124) = 0;
    (*pcVar1)(0xff03);
  }
  return param_1;
}



/* ---- OnPaint @ 600022d0 size=148 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnPaint(void) */

void __thiscall CAnimateGameWnd::OnPaint(CAnimateGameWnd *this)

{
  tagRECT local_74;
  CPaintDC local_64 [28];
  RECT local_48 [3];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x22d0  329  ?OnPaint@CAnimateGameWnd@@IAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016198;
  local_c = ExceptionList;
  local_10 = DAT_600259a8 ^ (uint)&local_74;
  ExceptionList = &local_c;
  CPaintDC::CPaintDC(local_64,(CWnd *)this);
  local_4 = 0;
  CopyRect(&local_74,local_48);
  (*this->vftablePtr->FlipSc)(this,(CRect *)&local_74);
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_64);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_74);
  return;
}



/* ---- UseSkin @ 60002370 size=78 ---- */

/* public: void __thiscall CAnimateGameWnd::UseSkin(int) */

void __thiscall CAnimateGameWnd::UseSkin(CAnimateGameWnd *this,int param_1)

{
  HWND hWnd;
  tagRECT local_10;
  
                    /* 0x2370  458  ?UseSkin@CAnimateGameWnd@@QAEXH@Z */
  hWnd = *(HWND *)&this->field_0x20;
  (this->CAnimateGameWnd_data).offset_0x214 = param_1;
  GetClientRect(hWnd,&local_10);
  (this->CAnimateGameWnd_data).offset_0x218 = local_10.left;
  (this->CAnimateGameWnd_data).offset_0x21c = local_10.top;
  (this->CAnimateGameWnd_data).offset_0x220 = local_10.right;
  (this->CAnimateGameWnd_data).offset_0x224 = local_10.bottom;
  return;
}



/* ---- OnLButtonDown @ 600023c0 size=84 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnLButtonDown(unsigned int,class CPoint) */

void __thiscall
CAnimateGameWnd::OnLButtonDown(CAnimateGameWnd *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar1;
  BOOL BVar2;
  
                    /* 0x23c0  314  ?OnLButtonDown@CAnimateGameWnd@@IAEXIVCPoint@@@Z */
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::DisplayMode(this_00);
  if (*(int *)(pCVar1 + 4) == 0) {
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect((RECT *)&(this->CAnimateGameWnd_data).field_0x18,pt);
    if (BVar2 != 0) goto LAB_600023f9;
  }
  CGraphicCtrl::s_bLButtonDown = 1;
LAB_600023f9:
  CGameWnd::OnLButtonDown((CGameWnd *)this,param_1,param_3,param_4);
  return;
}



/* ---- OnLButtonDblClk @ 60002420 size=68 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnLButtonDblClk(unsigned int,class CPoint) */

void __thiscall
CAnimateGameWnd::OnLButtonDblClk(CAnimateGameWnd *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar1;
  BOOL BVar2;
  
                    /* 0x2420  313  ?OnLButtonDblClk@CAnimateGameWnd@@IAEXIVCPoint@@@Z */
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::DisplayMode(this_00);
  if (*(int *)(pCVar1 + 4) == 0) {
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect((RECT *)&(this->CAnimateGameWnd_data).field_0x18,pt);
    if (BVar2 != 0) goto LAB_60002459;
  }
  CGraphicCtrl::s_bLButtonDblClk = 1;
LAB_60002459:
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnLButtonUp @ 60002470 size=20 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnLButtonUp(unsigned int,class CPoint) */

void __thiscall CAnimateGameWnd::OnLButtonUp(CAnimateGameWnd *this)

{
                    /* 0x2470  316  ?OnLButtonUp@CAnimateGameWnd@@IAEXIVCPoint@@@Z */
  CGraphicCtrl::s_bLButtonDown = 0;
  CGraphicCtrl::s_bLButtonDblClk = 0;
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnRButtonDown @ 60002490 size=18 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnRButtonDown(unsigned int,class CPoint) */

void __thiscall CAnimateGameWnd::OnRButtonDown(CAnimateGameWnd *this)

{
                    /* 0x2490  330  ?OnRButtonDown@CAnimateGameWnd@@IAEXIVCPoint@@@Z */
  CGraphicCtrl::s_bRButtonDown = 1;
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnRButtonUp @ 600024b0 size=18 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnRButtonUp(unsigned int,class CPoint) */

void __thiscall CAnimateGameWnd::OnRButtonUp(CAnimateGameWnd *this)

{
                    /* 0x24b0  331  ?OnRButtonUp@CAnimateGameWnd@@IAEXIVCPoint@@@Z */
  CGraphicCtrl::s_bRButtonDown = 0;
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnTimer @ 600024d0 size=90 ---- */

/* protected: void __thiscall CAnimateGameWnd::OnTimer(unsigned int) */

void __thiscall CAnimateGameWnd::OnTimer(CAnimateGameWnd *this,uint param_1)

{
  DWORD DVar1;
  MMRESULT MVar2;
  
                    /* 0x24d0  338  ?OnTimer@CAnimateGameWnd@@IAEXI@Z */
  if (param_1 == 0x43d2) {
    DVar1 = timeGetTime();
    if ((this->CAnimateGameWnd_data).offset_0x20c + 10000 <= DVar1) {
      timeKillEvent((this->CAnimateGameWnd_data).offset_0x198);
      MVar2 = timeSetEvent(0x12,10,&LAB_60001c70,0,0);
      (this->CAnimateGameWnd_data).offset_0x198 = MVar2;
    }
  }
  CGameWnd::OnTimer((CGameWnd *)this,param_1);
  return;
}



/* ---- vfunction1 @ 60002530 size=8 ---- */

void __thiscall CAnimateGameWnd::vfunction1(CAnimateGameWnd *this,byte param_1)

{
  scalar_deleting_destructor((CAnimateGameWnd *)&this[-1].CAnimateGameWnd_data.field_0x1d8,param_1);
  return;
}



/* ---- Invalidate @ 60002540 size=30 ---- */

/* public: void __thiscall CGraphicCtrl::Invalidate(void) */

void __thiscall CGraphicCtrl::Invalidate(CGraphicCtrl *this)

{
  RECT *lprcSrc2;
  
                    /* 0x2540  264  ?Invalidate@CGraphicCtrl@@QAEXXZ */
  lprcSrc2 = (RECT *)GetAreaScreen(this);
  UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,lprcSrc2);
  return;
}



/* ---- OnCreate @ 60002560 size=461 ---- */

/* protected: int __thiscall CAnimateGameWnd::OnCreate(struct tagCREATESTRUCTA *) */

int __thiscall CAnimateGameWnd::OnCreate(CAnimateGameWnd *this,tagCREATESTRUCTA *param_1)

{
  undefined1 *this_00;
  HWND hWnd;
  CGraphicCtrl *this_01;
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  MMRESULT MVar5;
  HDC pHVar6;
  CDC *pCVar7;
  HBITMAP__ *h;
  HGDIOBJ pvVar8;
  HANDLE pvVar9;
  CGraphicCtrl_Root *this_02;
  UINT UVar10;
  timecaps_tag local_24;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2560  303  ?OnCreate@CAnimateGameWnd@@IAEHPAUtagCREATESTRUCTA@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_600161cb;
  local_c = ExceptionList;
  uVar3 = DAT_600259a8 ^ (int)register0x00000010 - 0x34U;
  ExceptionList = &local_c;
  iVar4 = CGameWnd::OnCreate((CGameWnd *)this,param_1);
  if (iVar4 == -1) {
    iVar4 = -1;
  }
  else {
    MVar5 = timeGetDevCaps(&local_24,8);
    if (MVar5 == 0) {
      UVar10 = local_24.wPeriodMin;
      if (local_24.wPeriodMin < 2) {
        UVar10 = 1;
      }
      if (UVar10 < local_24.wPeriodMax) {
        if (local_24.wPeriodMin < 2) {
          local_24.wPeriodMin = 1;
        }
      }
      else {
        local_24.wPeriodMin = local_24.wPeriodMax;
      }
      (this->CAnimateGameWnd_data).offset_0x180 = local_24.wPeriodMin;
    }
    timeBeginPeriod((this->CAnimateGameWnd_data).offset_0x180);
    GetClientRect(*(HWND *)&this->field_0x20,&local_1c);
    this_00 = &(this->CAnimateGameWnd_data).field_0x19c;
    (**(code **)(*(int *)&(this->CAnimateGameWnd_data).field_0x19c + 0x10))
              (local_1c.right - local_1c.left,local_1c.bottom - local_1c.top,uVar3);
    pHVar6 = GetDC(*(HWND *)&this->field_0x20);
    pCVar7 = CDC::FromHandle(pHVar6);
    pHVar6 = CreateCompatibleDC(*(HDC *)(pCVar7 + 4));
    (this->CAnimateGameWnd_data).offset_0x200 = pHVar6;
    h = CHgDIB::GetHBitmap((CHgDIB *)this_00);
    pvVar8 = SelectObject((this->CAnimateGameWnd_data).offset_0x200,h);
    hWnd = *(HWND *)&this->field_0x20;
    (this->CAnimateGameWnd_data).offset_0x204 = pvVar8;
    ReleaseDC(hWnd,*(HDC *)(pCVar7 + 4));
    pvVar9 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"FrameEvent");
    (this->CAnimateGameWnd_data).offset_0x190 = pvVar9;
    this_02 = operator_new(0x168);
    uStack_4 = 0;
    if (this_02 == (CGraphicCtrl_Root *)0x0) {
      CGraphicCtrl::s_pUniqueRootCtrl = (CGraphicCtrl_Root *)0x0;
    }
    else {
      CGraphicCtrl::s_pUniqueRootCtrl =
           (CGraphicCtrl_Root *)CGraphicCtrl_Root::CGraphicCtrl_Root(this_02);
    }
    (this->CAnimateGameWnd_data).offset_0x208 = (undefined4 *)CGraphicCtrl::s_pUniqueRootCtrl;
    uStack_4 = 0xffffffff;
    CHgDIB::~CHgDIB((CHgDIB *)(this->CAnimateGameWnd_data).offset_0x208,
                    local_1c.right - local_1c.left,local_1c.bottom - local_1c.top,(CHgDIB *)this_00,
                    (CRect *)&DAT_600259c4);
    this_01 = (CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208;
    if ((this_01->CGraphicCtrl_data).offset_0xc != 1) {
      CGraphicCtrl::__AdjustShow(this_01,1);
      (this_01->CGraphicCtrl_data).offset_0xc = 1;
    }
    piVar1 = (this->CAnimateGameWnd_data).offset_0x208;
    if (piVar1[6] != 1) {
      pcVar2 = *(code **)(*piVar1 + 0x2c);
      piVar1[6] = 1;
      piVar1[0x49] = 0;
      (*pcVar2)(0xff03);
    }
    UseSkin(this,1);
    iVar4 = 0;
  }
  ExceptionList = local_c;
  return iVar4;
}



/* ---- RemoveGC @ 60002730 size=57 ---- */

/* public: int __thiscall CAnimateGameWnd::RemoveGC(class CGraphicCtrl *) */

int __thiscall CAnimateGameWnd::RemoveGC(CAnimateGameWnd *this,CGraphicCtrl *param_1)

{
  RECT *lprcSrc2;
  int iVar1;
  
                    /* 0x2730  372  ?RemoveGC@CAnimateGameWnd@@QAEHPAVCGraphicCtrl@@@Z */
  lprcSrc2 = (RECT *)CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)param_1);
  UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
            lprcSrc2);
  iVar1 = CGraphicCtrl::DelChild((CGraphicCtrl *)(this->CAnimateGameWnd_data).offset_0x208,param_1);
  return iVar1;
}



/* ---- SetEffectDegrees @ 60002770 size=76 ---- */

/* public: void __thiscall CGraphicCtrl::SetEffectDegrees(unsigned char,unsigned char) */

void __thiscall CGraphicCtrl::SetEffectDegrees(CGraphicCtrl *this,uchar param_1,uchar param_2)

{
  int iVar1;
  RECT *lprcSrc2;
  
                    /* 0x2770  398  ?SetEffectDegrees@CGraphicCtrl@@QAEXEE@Z */
  (this->CGraphicCtrl_data).offset_0x11e = param_2;
  (this->CGraphicCtrl_data).offset_0x11d = param_1;
  (this->CGraphicCtrl_data).offset_0x11f = param_1;
  iVar1 = IsShowing(this);
  if (iVar1 != 0) {
    lprcSrc2 = (RECT *)GetAreaScreen(this);
    UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,lprcSrc2);
  }
  return;
}



/* ---- SetSize @ 600027c0 size=115 ---- */

/* public: void __thiscall CGraphicCtrl::SetSize(class CSize const &) */

void __thiscall CGraphicCtrl::SetSize(CGraphicCtrl *this,CSize *param_1)

{
  int iVar1;
  RECT *lprcSrc2;
  
                    /* 0x27c0  435  ?SetSize@CGraphicCtrl@@QAEXABVCSize@@@Z */
  (this->CGraphicCtrl_data).offset_0xd0 = *(undefined4 *)param_1;
  (this->CGraphicCtrl_data).offset_0xd4 = *(undefined4 *)(param_1 + 4);
  iVar1 = IsShowing(this);
  if (iVar1 != 0) {
    lprcSrc2 = (RECT *)GetAreaScreen(this);
    UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,lprcSrc2);
  }
  if ((this->CGraphicCtrl_data).offset_0xb4 != 0) {
    SetPosBase(this,(this->CGraphicCtrl_data).offset_0xb8,(this->CGraphicCtrl_data).offset_0xbc);
  }
  (*this->vftablePtr->OnSelfNotice)(this,0xff06);
  return;
}



/* ---- SetClippingRect @ 60002840 size=108 ---- */

/* public: void __thiscall CGraphicCtrl::SetClippingRect(class CRect const &) */

void __thiscall CGraphicCtrl::SetClippingRect(CGraphicCtrl *this,CRect *param_1)

{
  CHgImageBase *this_00;
  CGraphicCtrl_vftable *pCVar1;
  RECT *lprcSrc2;
  
                    /* 0x2840  386  ?SetClippingRect@CGraphicCtrl@@QAEXABVCRect@@@Z */
  this_00 = (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20;
  if (this_00 != (CHgImageBase *)0x0) {
    CHgImageBase::SetClipArea(this_00,(tagRECT *)param_1);
  }
  *(undefined4 *)&(this->CGraphicCtrl_data).field_0x10c = *(undefined4 *)param_1;
  *(undefined4 *)&(this->CGraphicCtrl_data).field_0x110 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)&(this->CGraphicCtrl_data).field_0x114 = *(undefined4 *)(param_1 + 8);
  pCVar1 = this->vftablePtr;
  *(undefined4 *)&(this->CGraphicCtrl_data).field_0x118 = *(undefined4 *)(param_1 + 0xc);
  (*pCVar1->OnSelfNotice)(this,0xff01);
  lprcSrc2 = (RECT *)GetAreaScreen(this);
  UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,lprcSrc2);
  return;
}



/* ---- SetSize @ 600028b0 size=33 ---- */

/* public: void __thiscall CGraphicCtrl::SetSize(int,int) */

void __thiscall CGraphicCtrl::SetSize(CGraphicCtrl *this,int param_1,int param_2)

{
  int local_8;
  int local_4;
  
                    /* 0x28b0  436  ?SetSize@CGraphicCtrl@@QAEXHH@Z */
  local_8 = param_1;
  local_4 = param_2;
  SetSize(this,(CSize *)&local_8);
  return;
}



/* ---- SetClippingRect @ 600028e0 size=57 ---- */

/* public: void __thiscall CGraphicCtrl::SetClippingRect(int,int,int,int) */

void __thiscall
CGraphicCtrl::SetClippingRect(CGraphicCtrl *this,int param_1,int param_2,int param_3,int param_4)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x28e0  387  ?SetClippingRect@CGraphicCtrl@@QAEXHHHH@Z */
  local_10 = param_1;
  local_8 = param_1 + param_3;
  local_c = param_2;
  local_4 = param_2 + param_4;
  SetClippingRect(this,(CRect *)&local_10);
  return;
}



/* ---- CAnimateGameWnd::GetMessageMap @ 60002920 size=45 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual struct AFX_MSGMAP const * __thiscall CAnimateGameWnd::GetMessageMap(void)const
    */

AFX_MSGMAP * __thiscall CAnimateGameWnd::CAnimateGameWnd__GetMessageMap(CAnimateGameWnd *this)

{
                    /* 0x2920  224  ?GetMessageMap@CAnimateGameWnd@@MBEPBUAFX_MSGMAP@@XZ
                       0x2920  244  ?GetThisMessageMap@CAnimateGameWnd@@KGPBUAFX_MSGMAP@@XZ */
  if ((_DAT_600259dc & 1) == 0) {
    _DAT_600259dc = _DAT_600259dc | 1;
    _DAT_600259d4 = GetThisMessageMap_exref;
    _DAT_600259d8 = &DAT_60017970;
  }
  return (AFX_MSGMAP *)&DAT_600259d4;
}



/* ---- FUN_60002950 @ 60002950 size=231 ---- */

int __cdecl FUN_60002950(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  uVar3 = *param_4 + 3U & 0xfffffffc;
  _Size = uVar3 - *param_4;
  iVar4 = 0;
  local_8 = 0;
  iVar5 = 0;
  if (0 < (int)(param_4[1] * uVar3)) {
    do {
      if (param_4[3] <= iVar5) {
        return iVar4;
      }
      iVar6 = iVar5 + 1;
      uVar2 = (uint)(*(byte *)(iVar5 + param_2) & 0x7f);
      if ((char)*(byte *)(iVar5 + param_2) < '\0') {
        if (uVar2 != 0) {
          uVar1 = uVar2;
          do {
            *(undefined1 *)(iVar4 + param_3) = *(undefined1 *)(iVar6 + param_2);
            iVar4 = iVar4 + 1;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        iVar6 = iVar5 + 2;
      }
      else if (uVar2 != 0) {
        uVar1 = uVar2;
        do {
          *(undefined1 *)(iVar4 + param_3) = *(undefined1 *)(iVar6 + param_2);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      if (((_Size != 0) && (local_8 = local_8 + uVar2, local_8 == *param_4)) &&
         (local_8 = 0, 0 < (int)_Size)) {
        memset((void *)(iVar4 + param_3),0,_Size);
        iVar4 = iVar4 + _Size;
      }
      iVar5 = iVar6;
    } while (iVar4 < (int)(param_4[1] * uVar3));
  }
  return iVar4;
}



/* ---- FUN_60002a40 @ 60002a40 size=273 ---- */

int __cdecl FUN_60002a40(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  uVar3 = *param_4 * 2 + 3U & 0xfffffffc;
  _Size = uVar3 + *param_4 * -2;
  iVar6 = 0;
  iVar4 = 0;
  local_8 = 0;
  if (0 < (int)(param_4[1] * uVar3)) {
    do {
      if (param_4[3] <= iVar4) {
        return iVar6;
      }
      uVar1 = (uint)(*(byte *)(iVar4 + param_2) & 0x7f);
      iVar5 = iVar4 + 1;
      uVar2 = uVar1;
      if ((char)*(byte *)(iVar4 + param_2) < '\0') {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(ushort *)(iVar6 + param_3) =
               CONCAT11(*(undefined1 *)(iVar5 + param_2),*(undefined1 *)(iVar4 + 2 + param_2));
          iVar6 = iVar6 + 2;
        }
        iVar5 = iVar4 + 3;
      }
      else if (uVar1 != 0) {
        do {
          *(ushort *)(iVar6 + param_3) =
               CONCAT11(*(undefined1 *)(iVar5 + param_2),*(undefined1 *)(iVar5 + 1 + param_2));
          iVar6 = iVar6 + 2;
          iVar5 = iVar5 + 2;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      if (((_Size != 0) && (local_8 = local_8 + uVar1, local_8 == *param_4)) &&
         (local_8 = 0, 0 < (int)_Size)) {
        memset((void *)(iVar6 + param_3),0,_Size);
        iVar6 = iVar6 + _Size;
      }
      iVar4 = iVar5;
    } while (iVar6 < (int)(param_4[1] * uVar3));
  }
  return iVar6;
}



/* ---- FUN_60002b60 @ 60002b60 size=361 ---- */

int __cdecl FUN_60002b60(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  ushort uVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_c;
  uint local_8;
  
  uVar2 = *param_4 * 3 + 3U & 0xfffffffc;
  _Size = uVar2 + *param_4 * -3;
  iVar5 = 0;
  local_c = 0;
  iVar8 = 0;
  if (0 < (int)(param_4[1] * uVar2)) {
    do {
      if (param_4[3] <= iVar8) {
        return iVar5;
      }
      iVar9 = iVar8 + 1;
      uVar7 = (uint)(*(byte *)(iVar8 + param_2) & 0x7f);
      local_8 = uVar7;
      if ((char)*(byte *)(iVar8 + param_2) < '\0') {
        iVar6 = iVar5;
        if (uVar7 != 0) {
          iVar6 = iVar5 + uVar7 * 3;
          pbVar3 = (byte *)(iVar5 + 2 + param_3);
          do {
            cVar1 = *(char *)(iVar8 + 2 + param_2);
            uVar4 = CONCAT11(*(undefined1 *)(iVar9 + param_2),cVar1);
            pbVar3[-2] = cVar1 * '\b';
            pbVar3[-1] = (byte)(uVar4 >> 2) & 0xf8;
            *pbVar3 = (byte)(uVar4 >> 7) & 0xf8;
            pbVar3 = pbVar3 + 3;
            local_8 = local_8 - 1;
          } while (local_8 != 0);
        }
        iVar9 = iVar8 + 3;
        iVar5 = iVar6;
      }
      else if (uVar7 != 0) {
        iVar8 = iVar5 + uVar7 * 3;
        pbVar3 = (byte *)(iVar5 + 2 + param_3);
        do {
          cVar1 = *(char *)(iVar9 + 1 + param_2);
          uVar4 = CONCAT11(*(undefined1 *)(iVar9 + param_2),cVar1);
          pbVar3[-2] = cVar1 * '\b';
          pbVar3[-1] = (byte)(uVar4 >> 2) & 0xf8;
          *pbVar3 = (byte)(uVar4 >> 7) & 0xf8;
          pbVar3 = pbVar3 + 3;
          iVar9 = iVar9 + 2;
          local_8 = local_8 - 1;
          iVar5 = iVar8;
        } while (local_8 != 0);
      }
      if (((_Size != 0) && (local_c = local_c + uVar7, local_c == *param_4)) &&
         (local_c = 0, 0 < (int)_Size)) {
        memset((void *)(param_3 + iVar5),0,_Size);
        iVar5 = iVar5 + _Size;
      }
      iVar8 = iVar9;
    } while (iVar5 < (int)(param_4[1] * uVar2));
  }
  return iVar5;
}



/* ---- FUN_60002cd0 @ 60002cd0 size=355 ---- */

int __cdecl FUN_60002cd0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  size_t _Size;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  uint local_8;
  
  uVar4 = *param_4 * 2 + 3U & 0xfffffffc;
  _Size = uVar4 + *param_4 * -2;
  iVar5 = 0;
  local_c = 0;
  iVar6 = 0;
  if (0 < (int)(param_4[1] * uVar4)) {
    do {
      if (param_4[3] <= iVar6) {
        return iVar5;
      }
      iVar7 = iVar6 + 1;
      uVar3 = (uint)(*(byte *)(iVar6 + param_2) & 0x7f);
      if ((char)*(byte *)(iVar6 + param_2) < '\0') {
        if (uVar3 != 0) {
          uVar1 = uVar3;
          do {
            *(ushort *)(iVar5 + param_3) =
                 ((ushort)(*(byte *)(iVar7 + param_2) & 0xf8) << 5 |
                 (ushort)(*(byte *)(iVar6 + 2 + param_2) & 0xf8)) * 4 |
                 (ushort)(*(byte *)(iVar6 + 3 + param_2) >> 3);
            iVar5 = iVar5 + 2;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        iVar7 = iVar6 + 4;
      }
      else if (uVar3 != 0) {
        iVar7 = uVar3 * 3 + iVar7;
        pbVar2 = (byte *)(iVar6 + 3 + param_2);
        local_8 = uVar3;
        do {
          *(ushort *)(iVar5 + param_3) =
               ((ushort)(pbVar2[-2] & 0xf8) << 5 | (ushort)(pbVar2[-1] & 0xf8)) * 4 |
               (ushort)(*pbVar2 >> 3);
          iVar5 = iVar5 + 2;
          pbVar2 = pbVar2 + 3;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      if (((_Size != 0) && (local_c = local_c + uVar3, local_c == *param_4)) &&
         (local_c = 0, 0 < (int)_Size)) {
        memset((void *)(iVar5 + param_3),0,_Size);
        iVar5 = iVar5 + _Size;
      }
      iVar6 = iVar7;
    } while (iVar5 < (int)(param_4[1] * uVar4));
  }
  return iVar5;
}



/* ---- FUN_60002e40 @ 60002e40 size=302 ---- */

int __cdecl FUN_60002e40(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t _Size;
  uint uVar8;
  int local_10;
  uint local_c;
  
  uVar3 = *param_4 * 3 + 3U & 0xfffffffc;
  _Size = uVar3 + *param_4 * -3;
  iVar5 = 0;
  iVar6 = 0;
  local_10 = 0;
  if (0 < (int)(param_4[1] * uVar3)) {
    do {
      if (param_4[3] <= iVar6) {
        return iVar5;
      }
      iVar7 = iVar6 + 1;
      uVar4 = (uint)(*(byte *)(iVar6 + param_2) & 0x7f);
      if ((char)*(byte *)(iVar6 + param_2) < '\0') {
        if (uVar4 != 0) {
          puVar1 = (undefined1 *)(param_3 + 2 + iVar5);
          iVar5 = uVar4 * 3 + iVar5;
          uVar8 = uVar4;
          do {
            puVar1[-2] = *(undefined1 *)(iVar6 + 3 + param_2);
            puVar1[-1] = *(undefined1 *)(iVar6 + 2 + param_2);
            *puVar1 = *(undefined1 *)(iVar7 + param_2);
            puVar1 = puVar1 + 3;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        iVar7 = iVar6 + 4;
      }
      else if (uVar4 != 0) {
        puVar1 = (undefined1 *)(iVar6 + 2 + param_2);
        puVar2 = (undefined1 *)(param_3 + 2 + iVar5);
        iVar7 = iVar7 + uVar4 * 3;
        iVar5 = iVar5 + uVar4 * 3;
        local_c = uVar4;
        do {
          puVar2[-2] = puVar1[1];
          puVar2[-1] = *puVar1;
          *puVar2 = puVar1[-1];
          puVar2 = puVar2 + 3;
          puVar1 = puVar1 + 3;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (((_Size != 0) && (local_10 = local_10 + uVar4, local_10 == *param_4)) &&
         (local_10 = 0, 0 < (int)_Size)) {
        memset((void *)(param_3 + iVar5),0,_Size);
        iVar5 = iVar5 + _Size;
      }
      iVar6 = iVar7;
    } while (iVar5 < (int)(param_4[1] * uVar3));
  }
  return iVar5;
}



/* ---- FUN_60002f70 @ 60002f70 size=247 ---- */

int __cdecl FUN_60002f70(int param_1,CHgImageBase *param_2,int *param_3)

{
  short sVar1;
  uchar *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_3;
  sVar1 = (short)param_3[2];
  if (sVar1 == 8) {
    puVar2 = CHgImageBase::GetBits((CHgImageBase *)param_2,0);
    iVar3 = FUN_60002950(&param_3,param_1,(int)puVar2,piVar4);
    return iVar3;
  }
  if (sVar1 == 0x10) {
    iVar3 = CHgImageBase::GetBitsPerPixel((CHgImageBase *)param_2);
    if (iVar3 == 0x10) {
      puVar2 = CHgImageBase::GetBits((CHgImageBase *)param_2,0);
      iVar3 = FUN_60002a40(&param_3,param_1,(int)puVar2,piVar4);
      return iVar3;
    }
    if (iVar3 == 0x18) {
      puVar2 = CHgImageBase::GetBits((CHgImageBase *)param_2,0);
      iVar3 = FUN_60002b60(&param_3,param_1,(int)puVar2,piVar4);
      return iVar3;
    }
  }
  else if (sVar1 == 0x18) {
    iVar3 = CHgImageBase::GetBitsPerPixel((CHgImageBase *)param_2);
    if (iVar3 == 0x10) {
      puVar2 = CHgImageBase::GetBits((CHgImageBase *)param_2,0);
      iVar3 = FUN_60002cd0(&param_3,param_1,(int)puVar2,piVar4);
      return iVar3;
    }
    if (iVar3 == 0x18) {
      puVar2 = CHgImageBase::GetBits((CHgImageBase *)param_2,0);
      iVar3 = FUN_60002e40(&param_3,param_1,(int)puVar2,piVar4);
      return iVar3;
    }
  }
  return 0;
}



/* ---- __CEnhancedChar @ 60003070 size=16 ---- */

/* public: __thiscall __CEnhancedChar::__CEnhancedChar(void) */

void __thiscall __CEnhancedChar::__CEnhancedChar(__CEnhancedChar *this)

{
                    /* 0x3070  27  ??0__CEnhancedChar@@QAE@XZ */
  this[1] = (__CEnhancedChar)0x0;
  this[2] = (__CEnhancedChar)0x0;
  this[3] = (__CEnhancedChar)0x0;
  *this = (__CEnhancedChar)0x0;
  return;
}



/* ---- __CEnhancedChar @ 60003080 size=43 ---- */

/* public: __thiscall __CEnhancedChar::__CEnhancedChar(char,char) */

__CEnhancedChar * __thiscall
__CEnhancedChar::__CEnhancedChar(__CEnhancedChar *this,char param_1,char param_2)

{
  BOOL BVar1;
  
                    /* 0x3080  26  ??0__CEnhancedChar@@QAE@DD@Z */
  BVar1 = IsDBCSLeadByte(param_1);
  *this = (__CEnhancedChar)(BVar1 != 0);
  this[1] = (__CEnhancedChar)param_1;
  this[2] = (__CEnhancedChar)param_2;
  this[3] = (__CEnhancedChar)0x0;
  return this;
}



/* ---- __CEnhancedChar @ 600030b0 size=22 ---- */

/* public: __thiscall __CEnhancedChar::__CEnhancedChar(char) */

void __thiscall __CEnhancedChar::__CEnhancedChar(__CEnhancedChar *this,char param_1)

{
                    /* 0x30b0  25  ??0__CEnhancedChar@@QAE@D@Z */
  *this = (__CEnhancedChar)0x0;
  this[1] = (__CEnhancedChar)param_1;
  this[2] = (__CEnhancedChar)0x0;
  this[3] = (__CEnhancedChar)0x0;
  return;
}



/* ---- IsUnicode @ 600030d0 size=3 ---- */

/* public: bool __thiscall __CEnhancedChar::IsUnicode(void) */

bool __thiscall __CEnhancedChar::IsUnicode(__CEnhancedChar *this)

{
                    /* 0x30d0  280  ?IsUnicode@__CEnhancedChar@@QAE_NXZ */
  return (bool)*this;
}



/* ---- GetBuf @ 600030e0 size=4 ---- */

/* public: char * __thiscall __CEnhancedChar::GetBuf(void) */

char * __thiscall __CEnhancedChar::GetBuf(__CEnhancedChar *this)

{
                    /* 0x30e0  199  ?GetBuf@__CEnhancedChar@@QAEPADXZ */
  return (char *)(this + 1);
}



/* ---- GetByteLength @ 600030f0 size=9 ---- */

/* public: int __thiscall __CEnhancedChar::GetByteLength(void) */

int __thiscall __CEnhancedChar::GetByteLength(__CEnhancedChar *this)

{
                    /* 0x30f0  202  ?GetByteLength@__CEnhancedChar@@QAEHXZ */
  return (*this != (__CEnhancedChar)0x0) + 1;
}



/* ---- operator= @ 60003100 size=13 ---- */

/* public: class __CEnhancedChar & __thiscall __CEnhancedChar::operator=(class __CEnhancedChar const
   &) */

__CEnhancedChar * __thiscall
__CEnhancedChar::operator=(__CEnhancedChar *this,__CEnhancedChar *param_1)

{
                    /* 0x3100  68  ??4__CEnhancedChar@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}



/* ---- SetFont @ 60003110 size=23 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::SetFont(class CFont *) */

void __thiscall CGraphicCtrl_EditBox::SetFont(CGraphicCtrl_EditBox *this,CFont *param_1)

{
                    /* 0x3110  403  ?SetFont@CGraphicCtrl_EditBox@@QAEXPAVCFont@@@Z */
  if (param_1 == (CFont *)0x0) {
    param_1 = (CFont *)&(this->CGraphicCtrl_EditBox_data).offset_0x24;
  }
  (this->CGraphicCtrl_EditBox_data).offset_0x20 = (undefined4 *)param_1;
  return;
}



/* ---- IsOperate @ 60003130 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::IsOperate(void) */

int __thiscall CGraphicCtrl_EditBox::IsOperate(CGraphicCtrl_EditBox *this)

{
                    /* 0x3130  274  ?IsOperate@CGraphicCtrl_EditBox@@QAEHXZ */
  return (this->CGraphicCtrl_EditBox_data).offset_0x18;
}



/* ---- ReserveDraw @ 60003140 size=11 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::ReserveDraw(void) */

void __thiscall CGraphicCtrl_EditBox::ReserveDraw(CGraphicCtrl_EditBox *this)

{
                    /* 0x3140  374  ?ReserveDraw@CGraphicCtrl_EditBox@@QAEXXZ */
  (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  return;
}



/* ---- IsCompositing @ 60003150 size=13 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::IsCompositing(void) */

int __thiscall CGraphicCtrl_EditBox::IsCompositing(CGraphicCtrl_EditBox *this)

{
                    /* 0x3150  271  ?IsCompositing@CGraphicCtrl_EditBox@@QAEHXZ */
  return (uint)((this->CGraphicCtrl_EditBox_data).offset_0xb4 != -1);
}



/* ---- CGraphicCtrl_EditBox::_AllocSelf @ 60003160 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_EditBox::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_EditBox::CGraphicCtrl_EditBox___AllocSelf(CGraphicCtrl_EditBox *this)

{
  CFont *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3160  463  ?_AllocSelf@CGraphicCtrl_EditBox@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x25c);
  local_4 = 0;
  if (pCVar1 == (CFont *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CFont::CFont(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_TextBox::_AllocSelf @ 600031d0 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_TextBox::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_TextBox::CGraphicCtrl_TextBox___AllocSelf(CGraphicCtrl_TextBox *this)

{
  CFont *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x31d0  474  ?_AllocSelf@CGraphicCtrl_TextBox@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x2308);
  local_4 = 0;
  if (pCVar1 == (CFont *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CFont::CFont(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- OperateInputBox @ 60003240 size=20 ---- */

/* public: void __thiscall CGraphicCtrl_ChatBox::OperateInputBox(bool) */

void __thiscall CGraphicCtrl_ChatBox::OperateInputBox(CGraphicCtrl_ChatBox *this,bool param_1)

{
                    /* 0x3240  343  ?OperateInputBox@CGraphicCtrl_ChatBox@@QAEX_N@Z */
  CGraphicCtrl_EditBox::Operate
            ((CGraphicCtrl_EditBox *)&this[0x18].CGraphicCtrl_data.offset_0x144,(uint)param_1);
  return;
}



/* ---- IsOperateInputBox @ 60003260 size=11 ---- */

/* public: bool __thiscall CGraphicCtrl_ChatBox::IsOperateInputBox(void) */

bool __thiscall CGraphicCtrl_ChatBox::IsOperateInputBox(CGraphicCtrl_ChatBox *this)

{
                    /* 0x3260  275  ?IsOperateInputBox@CGraphicCtrl_ChatBox@@QAE_NXZ */
  return this[0x19].CGraphicCtrl_data.offset_0x15c != 0;
}



/* ---- GetInputArea @ 60003270 size=23 ---- */

/* public: class CRect __thiscall CGraphicCtrl_ChatBox::GetInputArea(void) */

undefined4 __thiscall CGraphicCtrl_ChatBox::GetInputArea(CGraphicCtrl_ChatBox *this)

{
  undefined4 in_stack_00000004;
  
                    /* 0x3270  219  ?GetInputArea@CGraphicCtrl_ChatBox@@QAE?AVCRect@@XZ */
  CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)&this[0x18].CGraphicCtrl_data.offset_0x144);
  return in_stack_00000004;
}



/* ---- GetChatEditLength @ 60003290 size=11 ---- */

/* public: int __thiscall CGraphicCtrl_ChatBox::GetChatEditLength(void) */

int __thiscall CGraphicCtrl_ChatBox::GetChatEditLength(CGraphicCtrl_ChatBox *this)

{
  int iVar1;
  
                    /* 0x3290  203  ?GetChatEditLength@CGraphicCtrl_ChatBox@@QAEHXZ */
  iVar1 = CGraphicCtrl_EditBox::GetTotalStrLength
                    ((CGraphicCtrl_EditBox *)&this[0x18].CGraphicCtrl_data.offset_0x144);
  return iVar1;
}



/* ---- __CGraphicCtrl_ChatInputBox @ 600032a0 size=99 ---- */

/* public: __thiscall CGraphicCtrl_ChatBox::CGraphicCtrl_ChatBox(void) */

__CGraphicCtrl_ChatInputBox * __thiscall
CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::__CGraphicCtrl_ChatInputBox
          (__CGraphicCtrl_ChatInputBox *this)

{
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x32a0  3  ??0CGraphicCtrl_ChatBox@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600161f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CFont::CFont((CFont *)this);
  this_00 = &this[0xf].CGraphicCtrl_data.offset_0xcc;
  local_4 = 0;
                    /* inlined constructor: CGraphicCtrl_ChatBox::CGraphicCtrl_ChatBox */
  this->vftablePtr = (__CGraphicCtrl_ChatInputBox_vftable *)&CGraphicCtrl_ChatBox::_vftable_;
  CFont::CFont((CFont *)this_00);
  *this_00 = &vftable;
  ExceptionList = local_c;
  return this;
}



/* ---- ~CGraphicCtrl_ChatBox @ 60003310 size=97 ---- */

/* public: virtual __thiscall CGraphicCtrl_ChatBox::~CGraphicCtrl_ChatBox(void) */

void __thiscall CGraphicCtrl_ChatBox::~CGraphicCtrl_ChatBox(CGraphicCtrl_ChatBox *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3310  39  ??1CGraphicCtrl_ChatBox@@UAE@XZ */
  puStack_8 = &LAB_60016228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  CGraphicCtrl_EditBox::~CGraphicCtrl_EditBox
            ((CGraphicCtrl_EditBox *)&this[0x18].CGraphicCtrl_data.offset_0x144);
  local_4 = 0xffffffff;
  CGraphicCtrl_TextBox::~CGraphicCtrl_TextBox((CGraphicCtrl_TextBox *)this);
  ExceptionList = local_c;
  return;
}



/* ---- CGraphicCtrl_ChatBox::OnSelfNotice @ 60003380 size=5 ---- */

/* public: virtual void __thiscall CGraphicCtrl_ChatBox::OnSelfNotice(unsigned short) */

void __thiscall
CGraphicCtrl_ChatBox::CGraphicCtrl_ChatBox__OnSelfNotice(CGraphicCtrl_ChatBox *this,ushort param_1)

{
                    /* 0x3380  333  ?OnSelfNotice@CGraphicCtrl_ChatBox@@UAEXG@Z */
  if (param_1 == 0xff08) {
    this[0x17].CGraphicCtrl_data.offset_0x124 =
         (uint)*(ushort *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x172);
    this[0x17].CGraphicCtrl_data.field_0x10c = 1;
  }
  return;
}



/* ---- vfunction14 @ 60003390 size=45 ---- */

void __thiscall
CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::vfunction14(__CGraphicCtrl_ChatInputBox *this)

{
  int iVar1;
  uchar *in_stack_00000004;
  
  iVar1 = _mbscmp(in_stack_00000004,(uchar *)&PTR_60017b08);
  if (iVar1 != 0) {
    CGameWnd::SendCommonChatString
              ((CGameWnd *)CGraphicCtrl::s_pGameWnd,(char *)in_stack_00000004,0,(char *)0x0);
  }
  return;
}



/* ---- InitTextBox @ 600033c0 size=5 ---- */

/* public: int __thiscall CGraphicCtrl_ChatBox::InitTextBox(int,int,int,int,struct
   GCTB_SBINFO,unsigned long) */

int __thiscall CGraphicCtrl_ChatBox::InitTextBox(void)

{
                    /* 0x33c0  260  ?InitTextBox@CGraphicCtrl_ChatBox@@QAEHHHHHUGCTB_SBINFO@@K@Z */
  return 0;
}



/* ---- FUN_600033d0 @ 600033d0 size=12 ---- */

void __fastcall FUN_600033d0(exception *param_1)

{
  *param_1 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x600033d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 600033e0 size=37 ---- */

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



/* ---- logic_error @ 60003410 size=95 ---- */

logic_error * __thiscall
std::logic_error::logic_error
          (logic_error *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016259;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception((exception *)this);
  local_4 = 0;
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8,param_1);
  ExceptionList = local_c;
  return this;
}



/* ---- vfunction2 @ 60003470 size=9 ---- */

/* std::logic_error member function inherited by std::length_error
   std::logic_error member function inherited by std::out_of_range */

void __thiscall std::logic_error::vfunction2(logic_error *this)

{
                    /* WARNING: Could not recover jumptable at 0x60003473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
  return;
}



/* ---- FUN_60003480 @ 60003480 size=26 ---- */

exception * __thiscall FUN_60003480(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *param_1 = (exception)&std::bad_alloc::vftable;
  return param_1;
}



/* ---- vfunction2 @ 600034a0 size=95 ---- */

CGraphicCtrl_EditBox * __thiscall
CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::vfunction2(__CGraphicCtrl_ChatInputBox *this)

{
  CGraphicCtrl_EditBox *this_00;
  CGraphicCtrl_EditBox *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x25c);
  local_4 = 0;
  pCVar1 = (CGraphicCtrl_EditBox *)0x0;
  if (this_00 != (CGraphicCtrl_EditBox *)0x0) {
    CFont::CFont((CFont *)this_00);
    *(__CGraphicCtrl_ChatInputBox_vftable **)this_00 = &vftable;
    pCVar1 = this_00;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_ChatBox::_AllocSelf @ 60003500 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_ChatBox::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_ChatBox::CGraphicCtrl_ChatBox___AllocSelf(CGraphicCtrl_ChatBox *this)

{
  __CGraphicCtrl_ChatInputBox *p_Var1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3500  462  ?_AllocSelf@CGraphicCtrl_ChatBox@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  p_Var1 = operator_new(0x2564);
  local_4 = 0;
  if (p_Var1 == (__CGraphicCtrl_ChatInputBox *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  p_Var1 = __CGraphicCtrl_ChatInputBox::__CGraphicCtrl_ChatInputBox(p_Var1);
  ExceptionList = local_c;
  return p_Var1;
}



/* ---- scalar_deleting_destructor @ 60003570 size=85 ---- */

CGraphicCtrl_ChatBox * __thiscall
CGraphicCtrl_ChatBox::scalar_deleting_destructor(CGraphicCtrl_ChatBox *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_ChatBox(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_ChatBox *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_data.offset_0x160;
  _eh_vector_destructor_iterator_
            (this,0x2564,this[-1].CGraphicCtrl_data.offset_0x160,~CGraphicCtrl_ChatBox);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_ChatBox *)puVar1;
}



/* ---- scalar_deleting_destructor @ 600035d0 size=30 ---- */

CGraphicCtrl_EditBox * __thiscall
CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::scalar_deleting_destructor
          (__CGraphicCtrl_ChatInputBox *this,byte param_1)

{
  CGraphicCtrl_EditBox::~CGraphicCtrl_EditBox((CGraphicCtrl_EditBox *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGraphicCtrl_EditBox *)this;
}



/* ---- InitChatBox @ 600035f0 size=325 ---- */

/* public: int __thiscall CGraphicCtrl_ChatBox::InitChatBox(int,int,int,int,struct
   GCTB_SBINFO,struct GCCB_EBINFO,unsigned long) */

int __thiscall
CGraphicCtrl_ChatBox::InitChatBox
          (CGraphicCtrl_ChatBox *this,int param_1,int param_2,int param_3,undefined4 param_4,
          undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_stack_00000c20;
  int in_stack_00000c24;
  int in_stack_00000c28;
  int in_stack_00000c2c;
  ulong in_stack_00000c30;
  ulong in_stack_00000c34;
  ulong in_stack_00000c38;
  ulong in_stack_00000c3c;
  undefined4 auStack_c20 [763];
  undefined4 uStack_34;
  
                    /* 0x35f0  255
                       ?InitChatBox@CGraphicCtrl_ChatBox@@QAEHHHHHUGCTB_SBINFO@@UGCCB_EBINFO@@K@Z */
  puVar3 = &param_6;
  puVar4 = auStack_c20;
  for (iVar2 = 0x303; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = CGraphicCtrl_TextBox::InitTextBox
                    ((CGraphicCtrl_TextBox *)this,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  if (in_stack_00000c20 == -1) {
    in_stack_00000c20 = 0;
  }
  if (in_stack_00000c24 == -1) {
    in_stack_00000c24 = param_2;
  }
  if (in_stack_00000c28 == -1) {
    in_stack_00000c28 = param_1;
  }
  if (in_stack_00000c2c == -1) {
    in_stack_00000c2c = param_3;
  }
  puVar3 = &this[0x18].CGraphicCtrl_data.offset_0x144;
  uStack_34 = 0x600036c8;
  CGraphicCtrl_EditBox::InitEditBox
            ((CGraphicCtrl_EditBox *)puVar3,in_stack_00000c28,in_stack_00000c2c,in_stack_00000c34,
             in_stack_00000c30,in_stack_00000c38,in_stack_00000c3c,0xff0000,0);
  CGraphicCtrl::AddChild((CGraphicCtrl *)this,(CGraphicCtrl *)puVar3,'\0',(CGraphicCtrl *)0x0);
  CGraphicCurve::SetPosForce
            ((CGraphicCurve *)&this[0x19].CGraphicCtrl_data.offset_0x4,(float)in_stack_00000c20,
             (float)in_stack_00000c24);
  if (this[0x18].CGraphicCtrl_data.offset_0x154 != 1) {
    CGraphicCtrl::__AdjustShow((CGraphicCtrl *)puVar3,1);
    this[0x18].CGraphicCtrl_data.offset_0x154 = 1;
  }
  if (this[0x18].CGraphicCtrl_data.offset_0x15c != 1) {
    pcVar1 = *(code **)(*puVar3 + 0x2c);
    this[0x18].CGraphicCtrl_data.offset_0x15c = 1;
    *(undefined4 *)&this[0x19].CGraphicCtrl_data.field_0x100 = 0;
    (*pcVar1)(puVar3,0xff03);
  }
  return 1;
}



/* ---- logic_error @ 60003740 size=101 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016289;
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



/* ---- FUN_600037b0 @ 600037b0 size=25 ---- */

logic_error * __thiscall FUN_600037b0(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
  return param_1;
}



/* ---- __CWndForInput @ 600037d0 size=95 ---- */

/* public: __thiscall __CWndForInput::__CWndForInput(class CGraphicCtrl_EditBox *) */

__CWndForInput * __thiscall
__CWndForInput::__CWndForInput(__CWndForInput *this,CGraphicCtrl_EditBox *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x37d0  36  ??0__CWndForInput@@QAE@PAVCGraphicCtrl_EditBox@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600162b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWnd::CWnd((CWnd *)this);
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  (this->__CWndForInput_data).offset_0x50 = (undefined4 *)param_1;
  FUN_6000e770(&(this->__CWndForInput_data).offset_0x54);
  ExceptionList = local_c;
  return this;
}



/* ---- ~__CWndForInput @ 60003830 size=60 ---- */

/* public: virtual __thiscall __CWndForInput::~__CWndForInput(void) */

void __thiscall __CWndForInput::~__CWndForInput(__CWndForInput *this)

{
  void *pvVar1;
  
                    /* 0x3830  66  ??1__CWndForInput@@UAE@XZ */
  pvVar1 = *(void **)&this[1].__CWndForInput_data.field_0x4;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)(this->__CWndForInput_data).offset_0x54;
  *(undefined4 *)&this[1].__CWndForInput_data.field_0x4 = 0;
  *(undefined4 *)&this[1].__CWndForInput_data.field_0x8 = 0;
  *(undefined4 *)&this[1].__CWndForInput_data.field_0xc = 0;
  operator_delete(pvVar1);
  CStatic::~CStatic((CStatic *)this);
  return;
}



/* ---- vfunction2 @ 60003870 size=124 ---- */

CStatic * __thiscall __CWndForInput::vfunction2(__CWndForInput *this,byte param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].__CWndForInput_data.offset_0x54;
    _eh_vector_destructor_iterator_
              (this,0x70,this[-1].__CWndForInput_data.offset_0x54,~__CWndForInput);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return (CStatic *)puVar1;
  }
  pvVar2 = *(void **)&this[1].__CWndForInput_data.field_0x4;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)(this->__CWndForInput_data).offset_0x54;
  *(undefined4 *)&this[1].__CWndForInput_data.field_0x4 = 0;
  *(undefined4 *)&this[1].__CWndForInput_data.field_0x8 = 0;
  *(undefined4 *)&this[1].__CWndForInput_data.field_0xc = 0;
  operator_delete(pvVar2);
  CStatic::~CStatic((CStatic *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CStatic *)this;
}



/* ---- attachMsg @ 600038f0 size=14 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::attachMsg(int (__cdecl*)(class CStatic *,struct
   tagMSG *)) */

void __thiscall
CGraphicCtrl_EditBox::attachMsg
          (CGraphicCtrl_EditBox *this,_func_int_CStatic_ptr_tagMSG_ptr *param_1)

{
                    /* 0x38f0  511
                       ?attachMsg@CGraphicCtrl_EditBox@@QAEXP6AHPAVCStatic@@PAUtagMSG@@@Z@Z */
  FUN_6000ea20((void *)((this->CGraphicCtrl_EditBox_data).offset_0x0 + 0x58),(int)param_1);
  return;
}



/* ---- attachMsg @ 60003900 size=14 ---- */

/* public: void __thiscall CGraphicCtrl_ChatBox::attachMsg(int (__cdecl*)(class CStatic *,struct
   tagMSG *)) */

void __thiscall
CGraphicCtrl_ChatBox::attachMsg
          (CGraphicCtrl_ChatBox *this,_func_int_CStatic_ptr_tagMSG_ptr *param_1)

{
                    /* 0x3900  510
                       ?attachMsg@CGraphicCtrl_ChatBox@@QAEXP6AHPAVCStatic@@PAUtagMSG@@@Z@Z */
  FUN_6000ea20((void *)(this[0x19].CGraphicCtrl_data.offset_0x144 + 0x58),(int)param_1);
  return;
}



/* ---- PreTranslateInput @ 60003910 size=5 ---- */

/* public: virtual int __thiscall __CWndForInput::PreTranslateInput(struct tagMSG *) */

int __thiscall __CWndForInput::PreTranslateInput(__CWndForInput *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* 0x3910  346  ?PreTranslateInput@__CWndForInput@@UAEHPAUtagMSG@@@Z */
                    /* WARNING: Could not recover jumptable at 0x60014f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CWnd::PreTranslateInput((CWnd *)this,param_1);
  return iVar1;
}



/* ---- OnMyImeNotify @ 60003920 size=41 ---- */

/* public: long __thiscall __CWndForInput::OnMyImeNotify(unsigned int,long) */

long __thiscall __CWndForInput::OnMyImeNotify(__CWndForInput *this,uint param_1,long param_2)

{
  long lVar1;
  
                    /* 0x3920  323  ?OnMyImeNotify@__CWndForInput@@QAEJIJ@Z */
  (this->__CWndForInput_data).offset_0x50[0x69] = 1;
  lVar1 = (*this->vftablePtr->DefWindowProcA)(this,0x282,param_1,param_2);
  return lVar1;
}



/* ---- OnMyImeEndComposition @ 60003950 size=30 ---- */

/* public: long __thiscall __CWndForInput::OnMyImeEndComposition(unsigned int,long) */

long __thiscall
__CWndForInput::OnMyImeEndComposition(__CWndForInput *this,uint param_1,long param_2)

{
                    /* 0x3950  322  ?OnMyImeEndComposition@__CWndForInput@@QAEJIJ@Z */
  (*this->vftablePtr->DefWindowProcA)(this,0x10e,param_1,param_2);
  return 0;
}



/* ---- CGraphicCtrl::OnSelfNotice @ 60003970 size=3 ---- */

/* public: virtual void __thiscall CGraphicCtrl::OnSelfNotice(unsigned short)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Text
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CHgDummyCtrl
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up */

void __thiscall CGraphicCtrl::CGraphicCtrl__OnSelfNotice(CGraphicCtrl *this,ushort param_1)

{
                    /* 0x3970  332  ?OnSelfNotice@CGraphicCtrl@@UAEXG@Z
                       0x3970  339  ?OnTimer@__CWndForInput@@QAEXI@Z
                       0x3970  364  ?ProcessSubmitMessage@CGraphicCtrl_EditBox@@UAEXPAD@Z */
  return;
}



/* ---- CGraphicCtrl_EditBox::__OnInputArrive @ 60003980 size=24 ---- */

/* public: virtual void __thiscall CGraphicCtrl_EditBox::__OnInputArrive(char *)
   CGraphicCtrl_EditBox member function inherited by
   CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox */

void __thiscall
CGraphicCtrl_EditBox::CGraphicCtrl_EditBox____OnInputArrive
          (CGraphicCtrl_EditBox *this,char *param_1)

{
                    /* 0x3980  507  ?__OnInputArrive@CGraphicCtrl_EditBox@@UAEXPAD@Z */
  CGameWnd::SendCommonChatString((CGameWnd *)CGraphicCtrl::s_pGameWnd,param_1,0,(char *)0x0);
  return;
}



/* ---- CancelCompotision @ 600039a0 size=11 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::CancelCompotision(void) */

void __thiscall CGraphicCtrl_EditBox::CancelCompotision(CGraphicCtrl_EditBox *this)

{
                    /* 0x39a0  119  ?CancelCompotision@CGraphicCtrl_EditBox@@QAEXXZ
                       0x39a0  184  ?EndCompotision@CGraphicCtrl_EditBox@@QAEXXZ */
  (this->CGraphicCtrl_EditBox_data).offset_0xb4 = 0xffffffff;
  return;
}



/* ---- CarotBlank @ 600039b0 size=28 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::CarotBlank(void) */

void __thiscall CGraphicCtrl_EditBox::CarotBlank(CGraphicCtrl_EditBox *this)

{
                    /* 0x39b0  120  ?CarotBlank@CGraphicCtrl_EditBox@@QAEXXZ */
  (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  (this->CGraphicCtrl_EditBox_data).offset_0x14 =
       (uint)((this->CGraphicCtrl_EditBox_data).offset_0x14 == 0);
  return;
}



/* ---- HScrollPosDecrease @ 600039d0 size=21 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::HScrollPosDecrease(void) */

int __thiscall CGraphicCtrl_EditBox::HScrollPosDecrease(CGraphicCtrl_EditBox *this)

{
  int iVar1;
  
                    /* 0x39d0  252  ?HScrollPosDecrease@CGraphicCtrl_EditBox@@QAEHXZ */
  iVar1 = (this->CGraphicCtrl_EditBox_data).offset_0x38;
  if (0 < iVar1) {
    (this->CGraphicCtrl_EditBox_data).offset_0x38 = iVar1 + -1;
  }
  return -1;
}



/* ---- CalculateBufWidth @ 600039f0 size=73 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::CalculateBufWidth(char *) */

int __thiscall CGraphicCtrl_EditBox::CalculateBufWidth(CGraphicCtrl_EditBox *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  tagSIZE local_8;
  
                    /* 0x39f0  116  ?CalculateBufWidth@CGraphicCtrl_EditBox@@QAEHPAD@Z */
  local_8.cx = 0;
  local_8.cy = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  GetTextExtentPoint32A
            (*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,param_1,
             (int)pcVar2 - (int)(param_1 + 1),&local_8);
  return local_8.cx;
}



/* ---- RechargeCarotBlank @ 60003a40 size=15 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::RechargeCarotBlank(void) */

void __thiscall CGraphicCtrl_EditBox::RechargeCarotBlank(CGraphicCtrl_EditBox *this)

{
                    /* 0x3a40  368  ?RechargeCarotBlank@CGraphicCtrl_EditBox@@QAEXXZ */
  (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
  return;
}



/* ---- FUN_60003a50 @ 60003a50 size=16 ---- */

void FUN_60003a50(uint param_1)

{
  operator_new(param_1);
  return;
}



/* ---- ~CGdiObject @ 60003a60 size=115 ---- */

/* Library Function - Single Match
    public: virtual __thiscall CImageList::~CImageList(void)
   
   Library: Visual Studio 2008 Release
   ***** Removed Bad FID Symbol ***** */

void __thiscall CGdiObject::~CGdiObject(CGdiObject *this)

{
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  undefined1 local_208 [512];
  uint local_8;
  
  puStack_210 = &LAB_600162e9;
  local_214 = ExceptionList;
  local_8 = DAT_600259a8 ^ (uint)local_208;
  ExceptionList = &local_214;
  this->vftablePtr = &vftable;
  local_20c = 0;
  CGdiObject::DeleteObject(this);
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}



/* ---- Catch@60003ad3 @ 60003ad3 size=155 ---- */

undefined4 Catch_60003ad3(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this;
  int unaff_EBP;
  uint uVar5;
  uint uVar6;
  
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  piVar1 = *(int **)(unaff_EBP + -0x18);
  pcVar2 = *(code **)(*piVar1 + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = (*pcVar2)();
  if (iVar3 == 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this,(char *)(unaff_EBP + -0x14));
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14),
               (char *)(unaff_EBP + -0x14));
  }
  uVar6 = 0;
  uVar5 = 0;
  pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                     ((CSimpleStringT<char,1> *)(unaff_EBP + -0x14));
  AfxMessageBox(pcVar4,uVar5,uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  (**(code **)(*piVar1 + 4))(1);
  return 0x60003aae;
}



/* ---- ~CFont @ 60003b70 size=11 ---- */

void __thiscall CFont::~CFont(CFont *this)

{
  this->vftablePtr = &vftable;
  CGdiObject::~CGdiObject((CGdiObject *)this);
  return;
}



/* ---- ~logic_error @ 60003b80 size=27 ---- */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
                    /* WARNING: Could not recover jumptable at 0x60003b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 60003ba0 size=48 ---- */

exception * __thiscall
std::out_of_range::scalar_deleting_destructor(out_of_range *this,byte param_1)

{
                    /* inlined destructor: std::logic_error::~logic_error */
  this->vftablePtr = (out_of_range_vftable *)&logic_error::vftable;
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



/* ---- ProcessCompositionStr @ 60003bd0 size=109 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::ProcessCompositionStr(char,char,long) */

void __thiscall
CGraphicCtrl_EditBox::ProcessCompositionStr
          (CGraphicCtrl_EditBox *this,char param_1,char param_2,long param_3)

{
  BOOL BVar1;
  
                    /* 0x3bd0  363  ?ProcessCompositionStr@CGraphicCtrl_EditBox@@QAEXDDJ@Z */
  BVar1 = IsDBCSLeadByte(param_1);
  (this->CGraphicCtrl_EditBox_data).offset_0xb8 = BVar1 != 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xb9 = param_1;
  (this->CGraphicCtrl_EditBox_data).offset_0xba = param_2;
  (this->CGraphicCtrl_EditBox_data).offset_0xbb = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xb4 = (this->CGraphicCtrl_EditBox_data).offset_0xb0;
  if ((param_3 & 0x800U) != 0) {
    (this->CGraphicCtrl_EditBox_data).offset_0xb4 = 0xffffffff;
  }
  (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  return;
}



/* ---- __IncreaseCarotPos @ 60003c40 size=57 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::__IncreaseCarotPos(void) */

void __thiscall CGraphicCtrl_EditBox::__IncreaseCarotPos(CGraphicCtrl_EditBox *this)

{
  int iVar1;
  
                    /* 0x3c40  503  ?__IncreaseCarotPos@CGraphicCtrl_EditBox@@QAEXXZ */
  iVar1 = (this->CGraphicCtrl_EditBox_data).offset_0xb0;
  if (iVar1 < *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4
              >> 2) {
    (this->CGraphicCtrl_EditBox_data).offset_0xb0 = iVar1 + 1;
    (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  }
  return;
}



/* ---- __MaximizeCarotPos @ 60003c80 size=69 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::__MaximizeCarotPos(void) */

void __thiscall CGraphicCtrl_EditBox::__MaximizeCarotPos(CGraphicCtrl_EditBox *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x3c80  505  ?__MaximizeCarotPos@CGraphicCtrl_EditBox@@QAEXXZ */
  if ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb0 <
      *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
    iVar1 = *(int *)&this[1].CGraphicCtrl_data.offset_0x8;
    iVar2 = this[1].CGraphicCtrl_data.offset_0x4;
    (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
    (this->CGraphicCtrl_EditBox_data).offset_0xb0 = iVar1 - iVar2 >> 2;
    (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
  }
  return;
}



/* ---- out_of_range @ 60003cd0 size=95 ---- */

void __thiscall std::out_of_range::out_of_range(out_of_range *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016329;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_50,"invalid vector<T> subscript");
  local_4 = 0;
  logic_error::logic_error
            (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_50);
  local_34[0].vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_6001a224);
}



/* ---- length_error @ 60003d30 size=95 ---- */

void __thiscall std::length_error::length_error(length_error *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016329;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"vector<T> too long");
  local_4 = 0;
  logic_error::logic_error
            (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_50);
  local_34[0].vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_6001a114);
}



/* ---- bad_alloc_Constructor_or_Destructor @ 60003d90 size=91 ---- */

void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1)

{
  char *pcVar1;
  exception local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 4) {
      param_1 = (char *)0x0;
      std::exception::exception(local_c,&param_1);
      local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_c,(ThrowInfo *)&DAT_6001a0c0);
    }
  }
  operator_new((int)pcVar1 * 4);
  return;
}



/* ---- CImageList::`scalar_deleting_destructor' @ 60003df0 size=30 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall CImageList::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2008 Release
   ***** Removed Bad FID Symbol ***** */

void * __thiscall
CGdiObject::CImageList___scalar_deleting_destructor_(CGdiObject *this,uint param_1)

{
  ~CGdiObject(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- scalar_deleting_destructor @ 60003e10 size=36 ---- */

undefined4 * __thiscall CFont::scalar_deleting_destructor(CFont *this,byte param_1)

{
                    /* inlined destructor: CFont::~CFont */
  this->vftablePtr = &vftable;
  CGdiObject::~CGdiObject((CGdiObject *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_60003e40 @ 60003e40 size=25 ---- */

logic_error * __thiscall FUN_60003e40(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
  return param_1;
}



/* ---- OnMyImeComposition @ 60003e60 size=99 ---- */

/* public: long __thiscall __CWndForInput::OnMyImeComposition(unsigned int,long) */

long __thiscall __CWndForInput::OnMyImeComposition(__CWndForInput *this,uint param_1,long param_2)

{
  BOOL BVar1;
  long lVar2;
  BYTE TestChar;
  
  TestChar = (BYTE)(param_1 >> 8);
                    /* 0x3e60  321  ?OnMyImeComposition@__CWndForInput@@QAEJIJ@Z */
  BVar1 = IsDBCSLeadByte(TestChar);
  if (BVar1 == 0) {
    if ((char)param_1 == '\0') {
      (this->__CWndForInput_data).offset_0x50[0x87] = 0xffffffff;
    }
  }
  else {
    CGraphicCtrl_EditBox::ProcessCompositionStr
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50,TestChar,
               (char)param_1,param_2);
  }
  (this->__CWndForInput_data).offset_0x50[0x69] = 1;
  lVar2 = (*this->vftablePtr->DefWindowProcA)(this,0x10f,param_1,param_2);
  return lVar2;
}



/* ---- CarotRightMove @ 60003ed0 size=138 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::CarotRightMove(void) */

void __thiscall CGraphicCtrl_EditBox::CarotRightMove(CGraphicCtrl_EditBox *this)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_20 [28];
  uint local_4;
  
                    /* 0x3ed0  124  ?CarotRightMove@CGraphicCtrl_EditBox@@QAEXXZ */
  local_4 = DAT_600259a8 ^ (uint)local_20;
  iVar1 = (this->CGraphicCtrl_EditBox_data).offset_0xb0;
  if (iVar1 < *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4
              >> 2) {
    if (iVar1 < *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4
                >> 2) {
      (this->CGraphicCtrl_EditBox_data).offset_0xb0 = iVar1 + 1;
      (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
      (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
      (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_20);
    (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_20);
  }
  __security_check_cookie(local_4 ^ (uint)local_20);
  return;
}



/* ---- CarotLeftMove @ 60003f60 size=42 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::CarotLeftMove(void) */

void __thiscall CGraphicCtrl_EditBox::CarotLeftMove(CGraphicCtrl_EditBox *this)

{
  int iVar1;
  
                    /* 0x3f60  123  ?CarotLeftMove@CGraphicCtrl_EditBox@@QAEXXZ
                       0x3f60  502  ?__DecreaseCarotPos@CGraphicCtrl_EditBox@@QAEXXZ */
  iVar1 = (this->CGraphicCtrl_EditBox_data).offset_0xb0;
  if (0 < iVar1) {
    (this->CGraphicCtrl_EditBox_data).offset_0xb0 = iVar1 + -1;
    (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  }
  return;
}



/* ---- CarotHomeMove @ 60003f90 size=39 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::CarotHomeMove(void) */

void __thiscall CGraphicCtrl_EditBox::CarotHomeMove(CGraphicCtrl_EditBox *this)

{
                    /* 0x3f90  122  ?CarotHomeMove@CGraphicCtrl_EditBox@@QAEXXZ
                       0x3f90  506  ?__MinimizeCarotPos@CGraphicCtrl_EditBox@@QAEXXZ */
  if (0 < (int)(this->CGraphicCtrl_EditBox_data).offset_0xb0) {
    (this->CGraphicCtrl_EditBox_data).offset_0xb0 = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
    (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  }
  return;
}



/* ---- CarotEndMove @ 60003fc0 size=39 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::CarotEndMove(void) */

void __thiscall CGraphicCtrl_EditBox::CarotEndMove(CGraphicCtrl_EditBox *this)

{
  int extraout_ECX;
  
                    /* 0x3fc0  121  ?CarotEndMove@CGraphicCtrl_EditBox@@QAEXXZ */
  if ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb0 <
      *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
    __MaximizeCarotPos(this);
    *(undefined4 *)(extraout_ECX + 0x1a4) = 1;
  }
  return;
}



/* ---- FUN_60003ff0 @ 60003ff0 size=51 ---- */

uint __fastcall FUN_60003ff0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
      goto LAB_6000400e;
    }
  }
  iVar2 = *piVar1;
LAB_6000400e:
  if ((uint)param_1[1] < *(uint *)(iVar2 + 0x10)) {
    return param_1[1];
  }
  _invalid_parameter_noinfo();
  return param_1[1];
}



/* ---- FUN_60004030 @ 60004030 size=77 ---- */

int * __thiscall FUN_60004030(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    piVar1 = *(int **)this;
    if (piVar1 != (int *)0x0) goto LAB_60004049;
    iVar2 = 0;
  }
  else {
LAB_60004049:
    iVar2 = *piVar1;
  }
  uVar3 = *(int *)((int)this + 4) + param_1 * 4;
  if (uVar3 <= *(uint *)(iVar2 + 0x10)) {
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar3) goto LAB_60004072;
  }
  _invalid_parameter_noinfo();
LAB_60004072:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1 * 4;
  return this;
}



/* ---- FUN_60004080 @ 60004080 size=70 ---- */

void __thiscall FUN_60004080(void *this,int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)this;
  iVar4 = *(int *)((int)this + 4);
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  uVar1 = iVar4 + param_2 * 4;
  if (uVar1 <= *(uint *)(iVar3 + 0x10)) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_600040b7;
  }
  _invalid_parameter_noinfo();
LAB_600040b7:
  param_1[1] = uVar1;
  *param_1 = (int)piVar2;
  return;
}



/* ---- FUN_600040d0 @ 600040d0 size=30 ---- */

void __cdecl FUN_600040d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



/* ---- FUN_600040f0 @ 600040f0 size=48 ---- */

void * __cdecl FUN_600040f0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}



/* ---- CFont @ 60004120 size=277 ---- */

/* public: __thiscall CGraphicCtrl_EditBox::CGraphicCtrl_EditBox(void) */

CFont * __thiscall CFont::CFont(CFont *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4120  4  ??0CGraphicCtrl_EditBox@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016384;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: CGraphicCtrl_EditBox::CGraphicCtrl_EditBox */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  this->vftablePtr = (CFont_vftable *)&CGraphicCtrl_EditBox::_vftable_;
  this[100].vftablePtr = (CFont_vftable *)0x0;
  ((CFont_vftable *)(this + 99))->GetRuntimeClass = (GetRuntimeClass *)&vftable;
  local_4 = 1;
  CHgDIB::CHgDIB((CHgDIB *)(this + 0x6a));
  local_4._0_1_ = 2;
  *(undefined1 *)((int)&this[0x88].vftablePtr + 1) = 0;
  *(undefined1 *)((int)&this[0x88].vftablePtr + 2) = 0;
  *(undefined1 *)((int)&this[0x88].vftablePtr + 3) = 0;
  *(undefined1 *)&this[0x88].vftablePtr = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x8a));
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_6000e770(this + 0x91);
  this[0x5f].vftablePtr = (CFont_vftable *)0x1;
  this[0x60].vftablePtr = (CFont_vftable *)0x0;
  this[0x61].vftablePtr = (CFont_vftable *)0x0;
  this[0x62].vftablePtr = (CFont_vftable *)(this + 99);
  this[0x5b].vftablePtr = (CFont_vftable *)0xffffff;
  this[0x5c].vftablePtr = (CFont_vftable *)0xff0000;
  this[0x5d].vftablePtr = (CFont_vftable *)0xff;
  this[0x5e].vftablePtr = (CFont_vftable *)0x808080;
  this[0x5a].vftablePtr = (CFont_vftable *)0x0;
  this[0x69].vftablePtr = (CFont_vftable *)0x0;
  this[0x68].vftablePtr = (CFont_vftable *)0x0;
  this[0x86].vftablePtr = (CFont_vftable *)0x0;
  this[0x87].vftablePtr = (CFont_vftable *)0xffffffff;
  this[0x89].vftablePtr = (CFont_vftable *)0x0;
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_60004240 @ 60004240 size=44 ---- */

undefined4 * __thiscall FUN_60004240(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc);
  *param_1 = 0;
  if (*(uint *)((int)this + 0x10) < uVar1) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *(undefined4 *)this;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_60004270 @ 60004270 size=140 ---- */

uint __thiscall FUN_60004270(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  uint extraout_EAX;
  uint uVar3;
  int iVar4;
  out_of_range *this_00;
  
  uVar3 = *(uint *)((int)this + 0x10);
  uVar1 = *(uint *)((int)this + 0xc);
  this_00 = (out_of_range *)((int)(uVar3 - uVar1) >> 2);
  if (this_00 <= param_1) {
    std::out_of_range::out_of_range(this_00);
    uVar3 = extraout_EAX;
  }
  if (uVar3 < uVar1) {
    _invalid_parameter_noinfo();
  }
  piVar2 = *(int **)this;
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  uVar1 = uVar1 + param_1 * 4;
  if (uVar1 <= *(uint *)(iVar4 + 0x10)) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_600042dc;
  }
  _invalid_parameter_noinfo();
LAB_600042dc:
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  if (*(uint *)(iVar4 + 0x10) <= uVar1) {
    _invalid_parameter_noinfo();
  }
  return uVar1;
}



/* ---- FUN_60004300 @ 60004300 size=141 ---- */

int * __thiscall
FUN_60004300(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            void *param_5)

{
  rsize_t _DstSize;
  void *_Dst;
  int iVar1;
  
  *param_1 = 0;
  if (((this == (void *)0x0) || (param_3 < *(uint *)((int)this + 0xc))) ||
     (*(uint *)((int)this + 0x10) < param_3)) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *(int *)this;
  param_1[1] = param_3;
  if ((param_5 < *(void **)((int)this + 0xc)) || (*(void **)((int)this + 0x10) < param_5)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_1 == 0) || (*param_1 != *(int *)this)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_1[1];
  if (_Dst != param_5) {
    iVar1 = *(int *)((int)this + 0x10) - (int)param_5 >> 2;
    _DstSize = iVar1 * 4;
    if (0 < iVar1) {
      memmove_s(_Dst,_DstSize,param_5,_DstSize);
    }
    *(void **)((int)this + 0x10) = (void *)(_DstSize + (int)_Dst);
  }
  return param_1;
}



/* ---- FUN_60004390 @ 60004390 size=44 ---- */

undefined4 * FUN_60004390(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}



/* ---- InitEditBox @ 600043c0 size=499 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::InitEditBox(int,int,unsigned long,unsigned
   long,unsigned long,unsigned long,unsigned long,int) */

int __thiscall
CGraphicCtrl_EditBox::InitEditBox
          (CGraphicCtrl_EditBox *this,int param_1,int param_2,ulong param_3,ulong param_4,
          ulong param_5,ulong param_6,ulong param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  __CWndForInput *p_Var3;
  HDC pHVar4;
  CDC *pCVar5;
  HBITMAP__ *h;
  HGDIOBJ pvVar6;
  char *pszFaceName;
  HFONT pHVar7;
  CCreateContext *unaff_EDI;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x43c0  257  ?InitEditBox@CGraphicCtrl_EditBox@@QAEHHHKKKKKH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600163b3;
  local_c = ExceptionList;
  uVar1 = DAT_600259a8 ^ (int)register0x00000010 - 0x28U;
  ExceptionList = &local_c;
  iVar2 = CGraphicCtrl::CGraphicCtrl__CreateGraphicCtrl
                    ((CGraphicCtrl *)this,param_1,param_2,param_7,0,0,0);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  (this->CGraphicCtrl_EditBox_data).offset_0x4 = param_3;
  (this->CGraphicCtrl_EditBox_data).offset_0x8 = param_4;
  (this->CGraphicCtrl_EditBox_data).offset_0xc = param_5;
  (this->CGraphicCtrl_EditBox_data).offset_0x10 = param_6;
  p_Var3 = operator_new(0x70);
  local_4 = 0;
  if (p_Var3 == (__CWndForInput *)0x0) {
    p_Var3 = (__CWndForInput *)0x0;
  }
  else {
    p_Var3 = __CWndForInput::__CWndForInput(p_Var3,(CGraphicCtrl_EditBox *)this);
  }
  local_1c = 0xffffffc4;
  local_18 = 0xffffffc4;
  (this->CGraphicCtrl_EditBox_data).offset_0x0 = p_Var3;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0xffffffff;
  (*p_Var3->vftablePtr->Create)
            (p_Var3,"NONE",(char *)0x50000000,(ulong)&local_1c,(tagRECT *)CGraphicCtrl::s_pGameWnd,
             (CWnd *)0xffff,uVar1,unaff_EDI);
  (**(code **)(*(int *)&(this->CGraphicCtrl_EditBox_data).field_0x40 + 0x10))(0x1e0);
  pHVar4 = GetDC(*(HWND *)(CGraphicCtrl::s_pGameWnd + 0x20));
  pCVar5 = CDC::FromHandle(pHVar4);
  if (pCVar5 != (CDC *)0x0) {
    pHVar4 = CreateCompatibleDC(*(HDC *)(pCVar5 + 4));
    *(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4 = pHVar4;
    ReleaseDC(*(HWND *)(CGraphicCtrl::s_pGameWnd + 0x20),*(HDC *)(pCVar5 + 4));
    h = CHgDIB::GetHBitmap((CHgDIB *)&(this->CGraphicCtrl_EditBox_data).field_0x40);
    pvVar6 = SelectObject(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,h);
    *(HGDIOBJ *)&(this->CGraphicCtrl_EditBox_data).field_0xa8 = pvVar6;
  }
  (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  LoadStr((int)&param_8);
  local_4 = 1;
  pszFaceName = ATL::CSimpleStringT<char,1>::operator_char_const_
                          ((CSimpleStringT<char,1> *)&param_8);
  pHVar7 = CreateFontA(0xc,6,0,0,400,0,0,0,1,0,0,3,0,pszFaceName);
  CGdiObject::Attach((CGdiObject *)&(this->CGraphicCtrl_EditBox_data).offset_0x24,pHVar7);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_8);
  ExceptionList = local_c;
  return 1;
}



/* ---- CalculateTotalLength @ 600045c0 size=232 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::CalculateTotalLength(int,int) */

int __thiscall
CGraphicCtrl_EditBox::CalculateTotalLength(CGraphicCtrl_EditBox *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  undefined4 *local_4;
  
                    /* 0x45c0  118  ?CalculateTotalLength@CGraphicCtrl_EditBox@@QAEHHH@Z */
  local_14 = 0;
  iVar3 = 0;
  if (((*(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 &
       0xfffffffcU) != 0) && (param_1 <= param_2)) {
    puVar4 = (undefined4 *)this[1].CGraphicCtrl_data.offset_0x4;
    if (*(undefined4 **)&this[1].CGraphicCtrl_data.offset_0x8 < puVar4) {
      _invalid_parameter_noinfo();
    }
    local_10 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
    local_c = puVar4;
    local_8 = local_10;
    local_4 = puVar4;
    FUN_60004030(&local_10,param_1);
    FUN_60004030(&local_8,param_2);
    piVar2 = local_8;
    piVar1 = local_10;
    puVar4 = local_c;
    while( true ) {
      if ((piVar2 == (int *)0x0) || (piVar2 != piVar1)) {
        _invalid_parameter_noinfo();
      }
      iVar3 = local_14;
      if (local_4 < puVar4) break;
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (*(undefined4 **)(iVar3 + 0x10) <= puVar4) {
        _invalid_parameter_noinfo();
      }
      local_14 = local_14 + (*(char *)*puVar4 != '\0') + 1;
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (*(undefined4 **)(iVar3 + 0x10) <= puVar4) {
        _invalid_parameter_noinfo();
      }
      puVar4 = puVar4 + 1;
    }
  }
  return iVar3;
}



/* ---- GetTotalStrLength @ 600046b0 size=195 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::GetTotalStrLength(void) */

int __thiscall CGraphicCtrl_EditBox::GetTotalStrLength(CGraphicCtrl_EditBox *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_c;
  
                    /* 0x46b0  251  ?GetTotalStrLength@CGraphicCtrl_EditBox@@QAEHXZ */
  local_c = 0;
  iVar4 = 0;
  if ((*(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 &
      0xfffffffcU) != 0) {
    puVar5 = (undefined4 *)this[1].CGraphicCtrl_data.offset_0x4;
    if (*(undefined4 **)&this[1].CGraphicCtrl_data.offset_0x8 < puVar5) {
      _invalid_parameter_noinfo();
    }
    puVar1 = *(undefined4 **)&this[1].CGraphicCtrl_data.offset_0x8;
    piVar2 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
    if (puVar1 < (undefined4 *)this[1].CGraphicCtrl_data.offset_0x4) {
      _invalid_parameter_noinfo();
    }
    piVar3 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
    while( true ) {
      if ((piVar2 == (int *)0x0) || (piVar2 != piVar3)) {
        _invalid_parameter_noinfo();
      }
      if (puVar1 <= puVar5) break;
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      if (*(undefined4 **)(iVar4 + 0x10) <= puVar5) {
        _invalid_parameter_noinfo();
      }
      local_c = local_c + (*(char *)*puVar5 != '\0') + 1;
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      if (*(undefined4 **)(iVar4 + 0x10) <= puVar5) {
        _invalid_parameter_noinfo();
      }
      puVar5 = puVar5 + 1;
    }
    iVar4 = local_c;
  }
  return iVar4;
}



/* ---- HScrollPosIncrease @ 60004780 size=65 ---- */

/* public: int __thiscall CGraphicCtrl_EditBox::HScrollPosIncrease(void) */

int __thiscall CGraphicCtrl_EditBox::HScrollPosIncrease(CGraphicCtrl_EditBox *this)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x4780  253  ?HScrollPosIncrease@CGraphicCtrl_EditBox@@QAEHXZ */
  uVar2 = (this->CGraphicCtrl_EditBox_data).offset_0x38;
  if ((int)uVar2 <
      *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
    puVar3 = (undefined4 *)FUN_60004270(&(this->CGraphicCtrl_EditBox_data).offset_0xdc,uVar2);
    cVar1 = *(char *)*puVar3;
    puVar3 = &(this->CGraphicCtrl_EditBox_data).offset_0x38;
    *puVar3 = *puVar3 + 1;
    return (cVar1 != '\0') + 1;
  }
  return -1;
}



/* ---- CopyString @ 600047d0 size=522 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::CopyString(char *,int,int) */

void __thiscall
CGraphicCtrl_EditBox::CopyString(CGraphicCtrl_EditBox *this,char *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
                    /* 0x47d0  127  ?CopyString@CGraphicCtrl_EditBox@@QAEXPADHH@Z */
  iVar7 = 0;
  if (0 < param_3) {
    do {
      puVar5 = (undefined4 *)
               FUN_60004270(&(this->CGraphicCtrl_EditBox_data).offset_0xdc,param_2 + iVar7);
      iVar7 = iVar7 + 1;
      param_3 = param_3 - ((*(char *)*puVar5 != '\0') + 1);
    } while (0 < param_3);
  }
  uVar2 = this[1].CGraphicCtrl_data.offset_0x4;
  if (*(uint *)&this[1].CGraphicCtrl_data.offset_0x8 < uVar2) {
    _invalid_parameter_noinfo();
  }
  piVar3 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  if (piVar3 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar3;
  }
  piVar8 = (int *)(uVar2 + param_2 * 4);
  if (*(int **)(iVar6 + 0x10) < piVar8) {
LAB_6000485d:
    _invalid_parameter_noinfo();
  }
  else {
    if (piVar3 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar3;
    }
    if (piVar8 < *(int **)(iVar6 + 0xc)) goto LAB_6000485d;
  }
  uVar2 = this[1].CGraphicCtrl_data.offset_0x4;
  if (*(uint *)&this[1].CGraphicCtrl_data.offset_0x8 < uVar2) {
    _invalid_parameter_noinfo();
  }
  piVar4 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  if (piVar4 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar4;
  }
  uVar2 = uVar2 + param_2 * 4;
  if (*(uint *)(iVar6 + 0x10) < uVar2) {
LAB_600048b0:
    _invalid_parameter_noinfo();
  }
  else {
    if (piVar4 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar4;
    }
    if (uVar2 < *(uint *)(iVar6 + 0xc)) goto LAB_600048b0;
  }
  if (piVar4 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar4;
  }
  piVar1 = (int *)(uVar2 + iVar7 * 4);
  if (piVar1 <= *(int **)(iVar6 + 0x10)) {
    if (piVar4 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4;
    }
    if (*(int **)(iVar7 + 0xc) <= piVar1) goto LAB_600048ef;
  }
  _invalid_parameter_noinfo();
LAB_600048ef:
  iVar7 = 0;
  while( true ) {
    if ((piVar3 == (int *)0x0) || (piVar3 != piVar4)) {
      _invalid_parameter_noinfo();
    }
    if (piVar1 <= piVar8) break;
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar3;
    }
    if (*(int **)(iVar6 + 0x10) <= piVar8) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)*piVar8 == '\0') {
      if (piVar3 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar3;
      }
      if (*(int **)(iVar6 + 0x10) <= piVar8) {
        _invalid_parameter_noinfo();
      }
      param_1[iVar7] = *(char *)(*piVar8 + 1);
    }
    else {
      if (piVar3 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar3;
      }
      if (*(int **)(iVar6 + 0x10) <= piVar8) {
        _invalid_parameter_noinfo();
      }
      param_1[iVar7] = *(char *)(*piVar8 + 1);
      iVar7 = iVar7 + 1;
      if (piVar3 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar3;
      }
      if (*(int **)(iVar6 + 0x10) <= piVar8) {
        _invalid_parameter_noinfo();
      }
      param_1[iVar7] = *(char *)(*piVar8 + 2);
    }
    iVar7 = iVar7 + 1;
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar3;
    }
    if (*(int **)(iVar6 + 0x10) <= piVar8) {
      _invalid_parameter_noinfo();
    }
    piVar8 = piVar8 + 1;
  }
  param_1[iVar7] = '\0';
  return;
}



/* ---- FUN_600049e0 @ 600049e0 size=198 ---- */

int __thiscall FUN_600049e0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)((int)this + 0x10);
  if (puVar4 < *(undefined4 **)((int)this + 0xc)) {
    _invalid_parameter_noinfo();
  }
  piVar1 = *(int **)this;
  while( true ) {
    puVar2 = *(undefined4 **)((int)this + 0xc);
    if (*(undefined4 **)((int)this + 0x10) < puVar2) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)this)) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puVar2) {
      return 0;
    }
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (puVar4 <= *(undefined4 **)(iVar3 + 0xc)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = puVar4 + -1;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(undefined4 **)(iVar3 + 0x10) <= puVar2) {
      _invalid_parameter_noinfo();
    }
    iVar3 = (*(code *)*puVar2)(param_1,param_2);
    if (iVar3 != 0) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (puVar4 <= *(undefined4 **)(iVar3 + 0xc)) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar2;
  }
  return iVar3;
}



/* ---- FUN_60004ab0 @ 60004ab0 size=94 ---- */

undefined4 * __thiscall
FUN_60004ab0(void *this,undefined4 *param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  rsize_t _DstSize;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10) - ((int)param_3 + 4) >> 2;
  if (0 < iVar2) {
    _DstSize = iVar2 * 4;
    memmove_s(param_3,_DstSize,(void *)((int)param_3 + 4),_DstSize);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -4;
  pvVar1 = *(void **)((int)this + 0x10);
  *param_1 = 0;
  if ((param_3 < *(void **)((int)this + 0xc)) || (pvVar1 < param_3)) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *(undefined4 *)this;
  param_1[1] = param_3;
  return param_1;
}



/* ---- FUN_60004b10 @ 60004b10 size=424 ---- */

void __thiscall
FUN_60004b10(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  length_error *plVar1;
  int iVar2;
  int iVar3;
  int extraout_EAX;
  void *extraout_EAX_00;
  void *pvVar4;
  length_error *this_00;
  length_error *extraout_ECX;
  void *pvVar5;
  length_error *local_4;
  
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    this_00 = (length_error *)0x0;
  }
  else {
    this_00 = (length_error *)(*(int *)((int)this + 0x14) - iVar3 >> 2);
  }
  if (param_3 != 0) {
    iVar2 = *(int *)((int)this + 0x10);
    iVar3 = iVar2 - iVar3 >> 2;
    if (0x3fffffffU - iVar3 < param_3) {
      std::length_error::length_error(this_00);
      iVar3 = extraout_EAX;
      this_00 = extraout_ECX;
    }
    plVar1 = (length_error *)(iVar3 + param_3);
    if (this_00 < plVar1) {
      if ((length_error *)(0x3fffffff - ((uint)this_00 >> 1)) < this_00) {
        local_4 = (length_error *)0x0;
      }
      else {
        local_4 = (length_error *)((int)&this_00->vftablePtr + ((uint)this_00 >> 1));
      }
      if (local_4 < plVar1) {
        local_4 = plVar1;
      }
      std::bad_alloc::bad_alloc_Constructor_or_Destructor((char *)local_4);
      iVar3 = (int)param_2 - *(int *)((int)this + 0xc) >> 2;
      FUN_60004390((undefined4 *)((int)extraout_EAX_00 + iVar3 * 4),param_3,param_4);
      FUN_6000e7d0(*(void **)((int)this + 0xc),(int)param_2,extraout_EAX_00);
      FUN_6000e7d0(param_2,*(int *)((int)this + 0x10),
                   (void *)((int)extraout_EAX_00 + (iVar3 + param_3) * 4));
      pvVar4 = *(void **)((int)this + 0xc);
      iVar3 = *(int *)((int)this + 0x10);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      *(void **)((int)this + 0xc) = extraout_EAX_00;
      *(void **)((int)this + 0x14) = (void *)((int)extraout_EAX_00 + (int)local_4 * 4);
      *(void **)((int)this + 0x10) =
           (void *)((int)extraout_EAX_00 + (param_3 + (iVar3 - (int)pvVar4 >> 2)) * 4);
      return;
    }
    param_4 = (undefined4 *)*param_4;
    if ((uint)(iVar2 - (int)param_2 >> 2) < param_3) {
      FUN_6000e7d0(param_2,iVar2,param_2 + param_3);
      FUN_60004390(*(undefined4 **)((int)this + 0x10),
                   param_3 - ((int)*(undefined4 **)((int)this + 0x10) - (int)param_2 >> 2),&param_4)
      ;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_3 * 4;
      FUN_600040d0(param_2,(undefined4 *)(*(int *)((int)this + 0x10) + param_3 * -4),&param_4);
      return;
    }
    pvVar5 = (void *)(iVar2 + param_3 * -4);
    pvVar4 = FUN_6000e7d0(pvVar5,iVar2,(void *)iVar2);
    *(void **)((int)this + 0x10) = pvVar4;
    FUN_600040f0(param_2,(int)pvVar5,iVar2);
    FUN_600040d0(param_2,param_2 + param_3,&param_4);
  }
  return;
}



/* ---- ~CGraphicCtrl_EditBox @ 60004cc0 size=502 ---- */

/* public: virtual __thiscall CGraphicCtrl_EditBox::~CGraphicCtrl_EditBox(void) */

void __thiscall CGraphicCtrl_EditBox::~CGraphicCtrl_EditBox(CGraphicCtrl_EditBox *this)

{
  undefined4 *this_00;
  undefined ***this_01;
  int *piVar1;
  HDC hdc;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  CGraphicCtrl_EditBox *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x4cc0  40  ??1CGraphicCtrl_EditBox@@UAE@XZ */
  puStack_8 = &LAB_60016412;
  local_c = ExceptionList;
  uVar5 = DAT_600259a8 ^ (int)register0x00000010 - 0x28U;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  piVar1 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0x0;
  local_4 = 4;
  local_10 = this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x68))(uVar5);
    piVar1 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0x0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    (this->CGraphicCtrl_EditBox_data).offset_0x0 = 0;
  }
  hdc = *(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4;
  if (hdc != (HDC)0x0) {
    SelectObject(hdc,*(HGDIOBJ *)&(this->CGraphicCtrl_EditBox_data).field_0xa8);
    SelectObject(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,
                 *(HGDIOBJ *)&(this->CGraphicCtrl_EditBox_data).field_0xac);
    DeleteDC(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4);
    *(undefined4 *)&(this->CGraphicCtrl_EditBox_data).field_0xa4 = 0;
  }
  puVar2 = (undefined4 *)this[1].CGraphicCtrl_data.offset_0x4;
  this_00 = &(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  if (*(undefined4 **)&this[1].CGraphicCtrl_data.offset_0x8 < puVar2) {
    _invalid_parameter_noinfo();
  }
  piVar1 = (int *)*this_00;
  puStack_14 = puVar2;
  while( true ) {
    puVar2 = *(undefined4 **)&this[1].CGraphicCtrl_data.offset_0x8;
    if (puVar2 < (undefined4 *)this[1].CGraphicCtrl_data.offset_0x4) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != (int *)*this_00)) {
      _invalid_parameter_noinfo();
    }
    if (puStack_14 == puVar2) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if (*(undefined4 **)(iVar6 + 0x10) <= puStack_14) {
      _invalid_parameter_noinfo();
    }
    operator_delete((void *)*puStack_14);
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if (*(undefined4 **)(iVar6 + 0x10) <= puStack_14) {
      _invalid_parameter_noinfo();
    }
    puStack_14 = puStack_14 + 1;
  }
  uStack_18 = *(void **)&this[1].CGraphicCtrl_data.offset_0x8;
  if (uStack_18 < (void *)this[1].CGraphicCtrl_data.offset_0x4) {
    _invalid_parameter_noinfo();
  }
  uVar5 = this[1].CGraphicCtrl_data.offset_0x4;
  uVar3 = *this_00;
  if (*(uint *)&this[1].CGraphicCtrl_data.offset_0x8 < uVar5) {
    _invalid_parameter_noinfo();
  }
  FUN_60004300(this_00,&uStack_18,*this_00,uVar5,uVar3,uStack_18);
  this_01 = &(this->CGraphicCtrl_EditBox_data).offset_0x24;
  CGdiObject::DeleteObject((CGdiObject *)this_01);
  pvVar4 = (void *)this[1].CGraphicCtrl_data.offset_0x4;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  this[1].CGraphicCtrl_data.offset_0x4 = 0;
  *(undefined4 *)&this[1].CGraphicCtrl_data.offset_0x8 = 0;
  this[1].CGraphicCtrl_data.offset_0xc = 0;
  operator_delete((void *)*this_00);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CGraphicCtrl_EditBox_data).field_0xc0);
  local_4._0_1_ = 1;
  CHgDIB::~CHgDIB((CHgDIB *)&(this->CGraphicCtrl_EditBox_data).field_0x40);
  local_4 = (uint)local_4._1_3_ << 8;
                    /* inlined destructor: CFont::~CFont */
  *this_01 = &CFont::vftable.GetRuntimeClass;
  CGdiObject::~CGdiObject((CGdiObject *)this_01);
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- RemoveEnhancedCharByBackSpace @ 60004ec0 size=190 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::RemoveEnhancedCharByBackSpace(void) */

void __thiscall CGraphicCtrl_EditBox::RemoveEnhancedCharByBackSpace(CGraphicCtrl_EditBox *this)

{
  undefined4 *this_00;
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  void *local_4;
  
                    /* 0x4ec0  370  ?RemoveEnhancedCharByBackSpace@CGraphicCtrl_EditBox@@QAEXXZ */
  iVar1 = (this->CGraphicCtrl_EditBox_data).offset_0xb0;
  if ((0 < iVar1) &&
     (this_00 = &(this->CGraphicCtrl_EditBox_data).offset_0xdc,
     iVar1 + -1 <
     *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2)) {
    pvVar2 = (void *)this[1].CGraphicCtrl_data.offset_0x4;
    if (*(void **)&this[1].CGraphicCtrl_data.offset_0x8 < pvVar2) {
      _invalid_parameter_noinfo();
    }
    local_8 = *this_00;
    local_4 = pvVar2;
    FUN_60004030(&local_8,(this->CGraphicCtrl_EditBox_data).offset_0xb0 + -1);
    puVar3 = (undefined4 *)FUN_60004270(this_00,(this->CGraphicCtrl_EditBox_data).offset_0xb0 - 1);
    operator_delete((void *)*puVar3);
    FUN_60004ab0(this_00,&local_8,local_8,local_4);
    iVar1 = (this->CGraphicCtrl_EditBox_data).offset_0xb0;
    if (0 < iVar1) {
      (this->CGraphicCtrl_EditBox_data).offset_0xb0 = iVar1 + -1;
      (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
      (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
      (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
    }
  }
  return;
}



/* ---- RemoveEnhancedCharByDelete @ 60004f80 size=131 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::RemoveEnhancedCharByDelete(void) */

void __thiscall CGraphicCtrl_EditBox::RemoveEnhancedCharByDelete(CGraphicCtrl_EditBox *this)

{
  undefined4 *this_00;
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  void *local_4;
  
                    /* 0x4f80  371  ?RemoveEnhancedCharByDelete@CGraphicCtrl_EditBox@@QAEXXZ */
  this_00 = &(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  if ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb0 <
      *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
    pvVar1 = (void *)this[1].CGraphicCtrl_data.offset_0x4;
    if (*(void **)&this[1].CGraphicCtrl_data.offset_0x8 < pvVar1) {
      _invalid_parameter_noinfo();
    }
    local_8 = *this_00;
    local_4 = pvVar1;
    FUN_60004030(&local_8,(this->CGraphicCtrl_EditBox_data).offset_0xb0);
    puVar2 = (undefined4 *)FUN_60004270(this_00,(this->CGraphicCtrl_EditBox_data).offset_0xb0);
    operator_delete((void *)*puVar2);
    FUN_60004ab0(this_00,&local_8,local_8,local_4);
  }
  return;
}



/* ---- OnEnter @ 60005010 size=428 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::OnEnter(void) */

void __thiscall CGraphicCtrl_EditBox::OnEnter(CGraphicCtrl_EditBox *this)

{
  undefined4 *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  CGraphicCtrl_EditBox_vftable *pCVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int *local_34 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5010  309  ?OnEnter@CGraphicCtrl_EditBox@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016439;
  local_c = ExceptionList;
  local_10 = DAT_600259a8 ^ (uint)local_34;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
  piVar7 = (int *)this[1].CGraphicCtrl_data.offset_0x4;
  this_00 = &(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  local_4 = 0;
  if (*(int **)&this[1].CGraphicCtrl_data.offset_0x8 < piVar7) {
    _invalid_parameter_noinfo();
  }
  piVar1 = (int *)*this_00;
  while( true ) {
    local_34[0] = *(int **)&this[1].CGraphicCtrl_data.offset_0x8;
    if (local_34[0] < (int *)this[1].CGraphicCtrl_data.offset_0x4) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != (int *)*this_00)) {
      _invalid_parameter_noinfo();
    }
    if (piVar7 == local_34[0]) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (*(int **)(iVar5 + 0x10) <= piVar7) {
      _invalid_parameter_noinfo();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (local_2c,(char *)(*piVar7 + 1));
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (*(int **)(iVar5 + 0x10) <= piVar7) {
      _invalid_parameter_noinfo();
    }
    operator_delete((void *)*piVar7);
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (*(int **)(iVar5 + 0x10) <= piVar7) {
      _invalid_parameter_noinfo();
    }
    piVar7 = piVar7 + 1;
  }
  local_34[0] = *(int **)&this[1].CGraphicCtrl_data.offset_0x8;
  if (local_34[0] < (int *)this[1].CGraphicCtrl_data.offset_0x4) {
    _invalid_parameter_noinfo();
  }
  uVar2 = this[1].CGraphicCtrl_data.offset_0x4;
  uVar3 = *this_00;
  if (*(uint *)&this[1].CGraphicCtrl_data.offset_0x8 < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_60004300(this_00,(int *)local_34,*this_00,uVar2,uVar3,local_34[0]);
  (this->CGraphicCtrl_EditBox_data).offset_0xb0 = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0x38 = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xb9 = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xba = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xbb = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xb8 = 0;
  pCVar4 = this->vftablePtr;
  (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
  pcVar6 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_2c);
  (*pCVar4->OnSelfNotice)(this,(ushort)pcVar6);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_34);
  return;
}



/* ---- FUN_600051c0 @ 600051c0 size=180 ---- */

void __thiscall
FUN_600051c0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if ((*(uint *)((int)this + 0x10) - uVar1 & 0xfffffffc) == 0) {
    iVar4 = 0;
  }
  else {
    if (*(uint *)((int)this + 0x10) < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((param_2 == 0) || (param_2 != *(int *)this)) {
      _invalid_parameter_noinfo();
    }
    iVar4 = (int)((int)param_3 - uVar1) >> 2;
  }
  FUN_60004b10(this,param_2,param_3,1,param_4);
  uVar1 = *(uint *)((int)this + 0xc);
  if (*(uint *)((int)this + 0x10) < uVar1) {
    _invalid_parameter_noinfo();
  }
  piVar2 = *(int **)this;
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
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_60005261;
  }
  _invalid_parameter_noinfo();
LAB_60005261:
  param_1[1] = uVar1;
  *param_1 = (int)piVar2;
  return;
}



/* ---- scalar_deleting_destructor @ 60005280 size=85 ---- */

CGraphicCtrl_EditBox * __thiscall
CGraphicCtrl_EditBox::scalar_deleting_destructor(CGraphicCtrl_EditBox *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_EditBox(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_EditBox *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_EditBox_data.offset_0xdc;
  _eh_vector_destructor_iterator_
            (this,0x25c,this[-1].CGraphicCtrl_EditBox_data.offset_0xdc,~CGraphicCtrl_EditBox);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_EditBox *)puVar1;
}



/* ---- PreTranslateMessage @ 600052e0 size=123 ---- */

/* public: virtual int __thiscall __CWndForInput::PreTranslateMessage(struct tagMSG *) */

int __thiscall __CWndForInput::PreTranslateMessage(__CWndForInput *this,tagMSG *param_1)

{
  ushort uVar1;
  int iVar2;
  
                    /* 0x52e0  348  ?PreTranslateMessage@__CWndForInput@@UAEHPAUtagMSG@@@Z */
  iVar2 = FUN_600049e0(&(this->__CWndForInput_data).offset_0x54,this,param_1);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 4) == 0x100) && (*(int *)(param_1 + 8) == 0xd)) {
    CGraphicCtrl_EditBox::OnEnter((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    return 1;
  }
  uVar1 = GetKeyState(0xa2);
  if ((((uVar1 & 0xfff0) == 0) && (uVar1 = GetKeyState(0x11), (uVar1 & 0xfff0) == 0)) ||
     (*(int *)(param_1 + 8) != 0x56)) {
    iVar2 = CWnd::CWnd__PreTranslateMessage((CWnd *)this,param_1);
    return iVar2;
  }
  return 1;
}



/* ---- AddChar @ 60005360 size=218 ---- */

/* public: bool __thiscall CGraphicCtrl_EditBox::AddChar(char) */

bool __thiscall CGraphicCtrl_EditBox::AddChar(CGraphicCtrl_EditBox *this,char param_1)

{
  undefined4 *this_00;
  char cVar1;
  undefined3 in_stack_00000005;
  int local_8;
  undefined4 *local_4;
  
  cVar1 = param_1;
                    /* 0x5360  108  ?AddChar@CGraphicCtrl_EditBox@@QAE_ND@Z */
  if ((((0x80 < param_1) || (param_1 == '\b')) || (param_1 == '\r')) ||
     (((param_1 == '\t' || (param_1 == '\n')) || (param_1 == '\x1b')))) {
    return false;
  }
  this_00 = &(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  if ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb0 <=
      *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
    FUN_60004240(this_00,&local_8);
    FUN_60004030(&local_8,(this->CGraphicCtrl_EditBox_data).offset_0xb0);
    _param_1 = operator_new(4);
    if (_param_1 == (undefined1 *)0x0) {
      _param_1 = (undefined1 *)0x0;
    }
    else {
      *_param_1 = 0;
      _param_1[1] = cVar1;
      _param_1[2] = 0;
      _param_1[3] = 0;
    }
    FUN_600051c0(this_00,&local_8,local_8,local_4,(undefined4 *)&param_1);
    __IncreaseCarotPos(this);
  }
  return true;
}



/* ---- SetIMEChar @ 60005440 size=191 ---- */

/* public: bool __thiscall CGraphicCtrl_EditBox::SetIMEChar(char,char,bool,bool) */

bool __thiscall
CGraphicCtrl_EditBox::SetIMEChar
          (CGraphicCtrl_EditBox *this,char param_1,char param_2,bool param_3,bool param_4)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  void *pvVar2;
  BOOL BVar3;
  undefined3 in_stack_00000009;
  int local_8;
  undefined4 *local_4;
  
                    /* 0x5440  408  ?SetIMEChar@CGraphicCtrl_EditBox@@QAE_NDD_N0@Z */
  this_00 = &(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  if ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb0 <=
      *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
    puVar1 = (undefined4 *)this[1].CGraphicCtrl_data.offset_0x4;
    if (*(undefined4 **)&this[1].CGraphicCtrl_data.offset_0x8 < puVar1) {
      _invalid_parameter_noinfo();
    }
    local_8 = *this_00;
    local_4 = puVar1;
    FUN_60004030(&local_8,(this->CGraphicCtrl_EditBox_data).offset_0xb0);
    pvVar2 = operator_new(4);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      BVar3 = IsDBCSLeadByte(param_1);
      *(char *)((int)pvVar2 + 1) = param_1;
      *(bool *)pvVar2 = BVar3 != 0;
      *(char *)((int)pvVar2 + 2) = param_2;
      *(undefined1 *)((int)pvVar2 + 3) = 0;
    }
    _param_2 = pvVar2;
    FUN_600051c0(this_00,&local_8,local_8,local_4,(undefined4 *)&param_2);
    if (param_4 != false) {
      __IncreaseCarotPos(this);
    }
  }
  return true;
}



/* ---- OnChar @ 60005500 size=53 ---- */

/* public: void __thiscall __CWndForInput::OnChar(unsigned int,unsigned int,unsigned int) */

void __thiscall __CWndForInput::OnChar(__CWndForInput *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* 0x5500  302  ?OnChar@__CWndForInput@@QAEXIII@Z */
  iVar1 = CGraphicCtrl_EditBox::GetTotalStrLength
                    ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
  if (iVar1 < 100) {
    CGraphicCtrl_EditBox::AddChar
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50,(char)param_1);
    (this->__CWndForInput_data).offset_0x50[0x69] = 1;
    CWnd::Default((CWnd *)this);
  }
  return;
}



/* ---- OnMyImeChar @ 60005540 size=94 ---- */

/* public: long __thiscall __CWndForInput::OnMyImeChar(unsigned int,long) */

long __thiscall __CWndForInput::OnMyImeChar(__CWndForInput *this,uint param_1,long param_2)

{
  CGraphicCtrl_EditBox *this_00;
  int iVar1;
  BOOL BVar2;
  BYTE TestChar;
  
                    /* 0x5540  320  ?OnMyImeChar@__CWndForInput@@QAEJIJ@Z */
  iVar1 = CGraphicCtrl_EditBox::GetTotalStrLength
                    ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
  if (iVar1 < 100) {
    TestChar = (BYTE)(param_1 >> 8);
    BVar2 = IsDBCSLeadByte(TestChar);
    this_00 = (CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50;
    if (BVar2 == 0) {
      CGraphicCtrl_EditBox::AddChar(this_00,(char)param_1);
    }
    else {
      CGraphicCtrl_EditBox::SetIMEChar(this_00,TestChar,(char)param_1,false,true);
    }
    (this->__CWndForInput_data).offset_0x50[0x87] = 0xffffffff;
    (this->__CWndForInput_data).offset_0x50[0x69] = 1;
  }
  return 0;
}



/* ---- Operate @ 600055a0 size=163 ---- */

/* public: void __thiscall CGraphicCtrl_EditBox::Operate(int) */

void __thiscall CGraphicCtrl_EditBox::Operate(CGraphicCtrl_EditBox *this,int param_1)

{
  int *piVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  
                    /* 0x55a0  342  ?Operate@CGraphicCtrl_EditBox@@QAEXH@Z */
  piVar1 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0x0;
  (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0x18 = param_1;
  if (param_1 != 0) {
    local_18 = 7;
    (**(code **)(*piVar1 + 0x110))();
    SetFocus(*(HWND *)((this->CGraphicCtrl_EditBox_data).offset_0x0 + 0x20));
    return;
  }
  local_18 = 8;
  (**(code **)(*piVar1 + 0x110))(local_1c);
  if ((this->CGraphicCtrl_EditBox_data).offset_0xb4 != -1) {
    SetIMEChar(this,(this->CGraphicCtrl_EditBox_data).offset_0xb9,
               (this->CGraphicCtrl_EditBox_data).offset_0xba,false,true);
  }
  (this->CGraphicCtrl_EditBox_data).offset_0xb4 = 0xffffffff;
  return;
}



/* ---- OnKillFocus @ 60005650 size=119 ---- */

/* public: void __thiscall __CWndForInput::OnKillFocus(class CWnd *) */

void __thiscall __CWndForInput::OnKillFocus(__CWndForInput *this,CWnd *param_1)

{
  CGraphicCtrl_EditBox *this_00;
  undefined1 local_1c [4];
  undefined4 local_18;
  
                    /* 0x5650  312  ?OnKillFocus@__CWndForInput@@QAEXPAVCWnd@@@Z */
  this_00 = (CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50;
  (this_00->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
  (this_00->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
  (this_00->CGraphicCtrl_EditBox_data).offset_0x18 = 0;
  local_18 = 8;
  (**(code **)(*(int *)(this_00->CGraphicCtrl_EditBox_data).offset_0x0 + 0x110))(local_1c);
  if ((this_00->CGraphicCtrl_EditBox_data).offset_0xb4 != -1) {
    CGraphicCtrl_EditBox::SetIMEChar
              (this_00,(this_00->CGraphicCtrl_EditBox_data).offset_0xb9,
               (this_00->CGraphicCtrl_EditBox_data).offset_0xba,false,true);
  }
  (this_00->CGraphicCtrl_EditBox_data).offset_0xb4 = 0xffffffff;
  return;
}



/* ---- OnKeyDown @ 600056d0 size=172 ---- */

/* public: void __thiscall __CWndForInput::OnKeyDown(unsigned int,unsigned int,unsigned int) */

void __thiscall
__CWndForInput::OnKeyDown(__CWndForInput *this,uint param_1,uint param_2,uint param_3)

{
                    /* 0x56d0  311  ?OnKeyDown@__CWndForInput@@QAEXIII@Z */
  switch(param_1) {
  case 8:
    CGraphicCtrl_EditBox::Operate((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50,0)
    ;
    CGraphicCtrl_EditBox::RemoveEnhancedCharByBackSpace
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    (this->__CWndForInput_data).offset_0x50[0x69] = 1;
    CGraphicCtrl_EditBox::Operate((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50,1)
    ;
    return;
  default:
    CWnd::Default((CWnd *)this);
    return;
  case 0xd:
    CGraphicCtrl_EditBox::OnEnter((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    return;
  case 0x23:
    CGraphicCtrl_EditBox::CarotEndMove
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    return;
  case 0x24:
    CGraphicCtrl_EditBox::CarotHomeMove
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    return;
  case 0x25:
    CGraphicCtrl_EditBox::CarotLeftMove
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    return;
  case 0x27:
    CGraphicCtrl_EditBox::CarotRightMove
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    return;
  case 0x2e:
    CGraphicCtrl_EditBox::RemoveEnhancedCharByDelete
              ((CGraphicCtrl_EditBox *)(this->__CWndForInput_data).offset_0x50);
    (this->__CWndForInput_data).offset_0x50[0x69] = 1;
    return;
  }
}



/* ---- CGraphicCtrl_EditBox::Proc @ 600057d0 size=2085 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall CGraphicCtrl_EditBox::Proc(unsigned long)
   CGraphicCtrl_EditBox member function inherited by
   CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox */

int __thiscall
CGraphicCtrl_EditBox::CGraphicCtrl_EditBox__Proc(CGraphicCtrl_EditBox *this,ulong param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  POINT pt;
  LONG LVar5;
  uint uVar6;
  RECT *lprc;
  BOOL BVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  HGDIOBJ pvVar11;
  int iVar12;
  rsize_t _MaxCount;
  LONG LVar13;
  ulong uVar14;
  tagSIZE *psizl;
  undefined8 uStack_1064;
  tagSIZE tStack_105c;
  int *piStack_1054;
  tagSIZE tStack_1050;
  int *local_1048;
  uint local_1044;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_102c [28];
  char acStack_1010 [2048];
  char acStack_810 [2048];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  LVar13 = DAT_60025af0;
  LVar5 = _s_CursorPos;
                    /* 0x57d0  352  ?Proc@CGraphicCtrl_EditBox@@UAEHK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6001647c;
  local_c = ExceptionList;
  local_10 = DAT_600259a8 ^ (uint)&uStack_1064;
  uVar6 = DAT_600259a8 ^ (uint)(abStack_102c + -0x48);
  ExceptionList = &local_c;
  if (((this->CGraphicCtrl_EditBox_data).offset_0x18 == 0) && (CGraphicCtrl::s_bLButtonDown != 0)) {
    lprc = (RECT *)CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)this);
    pt.y = LVar13;
    pt.x = LVar5;
    BVar7 = PtInRect(lprc,pt);
    if (BVar7 != 0) {
      (this->CGraphicCtrl_EditBox_data).offset_0x14 = 0;
      (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0;
      (this->CGraphicCtrl_EditBox_data).offset_0x18 = 1;
      local_1044 = 7;
      (**(code **)(*(int *)(this->CGraphicCtrl_EditBox_data).offset_0x0 + 0x110))(&local_1048,uVar6)
      ;
      SetFocus(*(HWND *)((this->CGraphicCtrl_EditBox_data).offset_0x0 + 0x20));
    }
  }
  iVar12 = (this->CGraphicCtrl_EditBox_data).offset_0x18;
  if ((iVar12 != 0) &&
     (puVar1 = &(this->CGraphicCtrl_EditBox_data).offset_0xbc, *puVar1 = *puVar1 - param_1,
     (int)(this->CGraphicCtrl_EditBox_data).offset_0xbc < 1)) {
    (this->CGraphicCtrl_EditBox_data).offset_0xbc = 0x200;
    (this->CGraphicCtrl_EditBox_data).offset_0x3c = 1;
    (this->CGraphicCtrl_EditBox_data).offset_0x14 =
         (uint)((this->CGraphicCtrl_EditBox_data).offset_0x14 == 0);
  }
  if (((this->CGraphicCtrl_EditBox_data).offset_0x3c == 0) &&
     (iVar12 == (this->CGraphicCtrl_EditBox_data).offset_0x1c)) goto LAB_60005fe5;
  local_1048 = (int *)(this->CGraphicCtrl_data).offset_0xd0;
  CHgImage::FillRect((CHgImage *)&(this->CGraphicCtrl_EditBox_data).field_0x40,0,0,0x1e0,
                     (this->CGraphicCtrl_data).offset_0xd4,
                     (this->CGraphicCtrl_EditBox_data).offset_0x8,0x100,0);
  (this->CGraphicCtrl_EditBox_data).offset_0x3c = 0;
  (this->CGraphicCtrl_EditBox_data).offset_0x1c = (this->CGraphicCtrl_EditBox_data).offset_0x18;
  while( true ) {
    if ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb0 <
        (int)(this->CGraphicCtrl_EditBox_data).offset_0x38) {
      do {
        iVar12 = (this->CGraphicCtrl_EditBox_data).offset_0x38;
        if (0 < iVar12) {
          (this->CGraphicCtrl_EditBox_data).offset_0x38 = iVar12 + -1;
        }
      } while ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb0 <
               (int)(this->CGraphicCtrl_EditBox_data).offset_0x38);
    }
    piVar10 = (int *)0x2;
    if ((this->CGraphicCtrl_EditBox_data).offset_0xb4 != -1) {
      puVar2 = &(this->CGraphicCtrl_EditBox_data).offset_0xb9;
      tStack_105c.cx = 0;
      tStack_105c.cy = 0;
      pcVar8 = puVar2;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      GetTextExtentPoint32A
                (*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,puVar2,
                 (int)pcVar8 - (int)&(this->CGraphicCtrl_EditBox_data).offset_0xba,&tStack_105c);
      piVar10 = (int *)tStack_105c.cx;
    }
    iVar12 = CalculateTotalLength
                       (this,(this->CGraphicCtrl_EditBox_data).offset_0x38,
                        (this->CGraphicCtrl_EditBox_data).offset_0xb0 + -1);
    acStack_810[0] = '\0';
    memset(acStack_810 + 1,0,0x7ff);
    CopyString(this,acStack_810,(this->CGraphicCtrl_EditBox_data).offset_0x38,iVar12);
    pcVar8 = acStack_810;
    uStack_1064._0_4_ = (int *)0x0;
    uStack_1064._4_4_ = (int *)0x0;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    GetTextExtentPoint32A
              (*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,acStack_810,
               (int)pcVar8 - (int)(acStack_810 + 1),(LPSIZE)&uStack_1064);
    local_1044 = (this->CGraphicCtrl_data).offset_0xd4;
    if ((int)(int *)uStack_1064 + (int)piVar10 <= (int)(this->CGraphicCtrl_data).offset_0xd0) break;
    uVar6 = (this->CGraphicCtrl_EditBox_data).offset_0x38;
    if ((int)uVar6 <
        *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
      FUN_60004270(&(this->CGraphicCtrl_EditBox_data).offset_0xdc,uVar6);
      puVar1 = &(this->CGraphicCtrl_EditBox_data).offset_0x38;
      *puVar1 = *puVar1 + 1;
    }
  }
  tStack_1050.cx = 0;
  tStack_1050.cy = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_102c);
  uStack_4 = 0;
  if (*(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2 <=
      (int)(this->CGraphicCtrl_EditBox_data).offset_0x38) goto LAB_60005db0;
  piVar10 = (int *)this[1].CGraphicCtrl_data.offset_0x4;
  if (*(int **)&this[1].CGraphicCtrl_data.offset_0x8 < piVar10) {
    _invalid_parameter_noinfo();
  }
  piVar4 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
  iVar12 = (this->CGraphicCtrl_EditBox_data).offset_0x38;
  tStack_105c.cx = (LONG)piVar4;
  tStack_105c.cy = (LONG)piVar10;
  if (piVar4 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar4;
  }
  piVar10 = piVar10 + iVar12;
  piStack_1054 = piVar10;
  if (*(int **)(iVar9 + 0x10) < piVar10) {
LAB_60005afb:
    _invalid_parameter_noinfo();
  }
  else {
    if (piVar4 == (int *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *piVar4;
    }
    if (piVar10 < *(int **)(iVar12 + 0xc)) goto LAB_60005afb;
  }
  LVar5 = tStack_105c.cx;
  iVar12 = (this->CGraphicCtrl_EditBox_data).offset_0xb4;
  if ((iVar12 != -1) &&
     (iVar12 < *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4
               >> 2)) {
    uStack_1064._0_4_ = (int *)tStack_105c.cx;
    uStack_1064._4_4_ = piVar10;
    do {
      uVar6 = this[1].CGraphicCtrl_data.offset_0x4;
      if (*(uint *)&this[1].CGraphicCtrl_data.offset_0x8 < uVar6) {
        _invalid_parameter_noinfo();
      }
      piVar10 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
      iVar12 = (this->CGraphicCtrl_EditBox_data).offset_0xb4;
      local_1048 = piVar10;
      local_1044 = uVar6;
      if (piVar10 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar10;
      }
      piVar4 = (int *)(uVar6 + iVar12 * 4);
      if (*(int **)(iVar9 + 0x10) < piVar4) {
LAB_60005b90:
        _invalid_parameter_noinfo();
      }
      else {
        if (piVar10 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar10;
        }
        if (piVar4 < *(int **)(iVar12 + 0xc)) goto LAB_60005b90;
      }
      if (((int *)uStack_1064 == (int *)0x0) || ((int *)uStack_1064 != local_1048)) {
        _invalid_parameter_noinfo();
      }
      if (uStack_1064._4_4_ == piVar4) goto LAB_60005c57;
      if ((int *)tStack_105c.cx == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)tStack_105c.cx;
      }
      if (*(int **)(iVar12 + 0x10) <= piStack_1054) {
        _invalid_parameter_noinfo();
      }
      if (*piStack_1054 != 0) {
        if ((int *)uStack_1064 == (int *)0x0) {
          _invalid_parameter_noinfo();
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)uStack_1064;
        }
        if (*(int **)(iVar12 + 0x10) <= uStack_1064._4_4_) {
          _invalid_parameter_noinfo();
        }
        if (*uStack_1064._4_4_ != 0) {
          piVar10 = (int *)FUN_60003ff0((int *)&uStack_1064);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                    (abStack_102c,(char *)(*piVar10 + 1));
        }
      }
      if ((int *)uStack_1064 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)uStack_1064;
      }
      if (*(int **)(iVar12 + 0x10) <= uStack_1064._4_4_) {
        _invalid_parameter_noinfo();
      }
      uStack_1064._4_4_ = uStack_1064._4_4_ + 1;
    } while( true );
  }
  while( true ) {
    piVar4 = *(int **)&this[1].CGraphicCtrl_data.offset_0x8;
    if (piVar4 < (int *)this[1].CGraphicCtrl_data.offset_0x4) {
      _invalid_parameter_noinfo();
    }
    if (((int *)LVar5 == (int *)0x0) ||
       ((int *)LVar5 != (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc)) {
      _invalid_parameter_noinfo();
    }
    if (piVar10 == piVar4) break;
    if ((int *)LVar5 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)LVar5;
    }
    if (*(int **)(iVar12 + 0x10) <= piVar10) {
      _invalid_parameter_noinfo();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (abStack_102c,(char *)(*piVar10 + 1));
    if ((int *)LVar5 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)LVar5;
    }
    if (*(int **)(iVar12 + 0x10) <= piVar10) {
      _invalid_parameter_noinfo();
    }
    piVar10 = piVar10 + 1;
  }
  goto LAB_60005db0;
LAB_60005c57:
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
            (abStack_102c,&(this->CGraphicCtrl_EditBox_data).offset_0xb9);
  if ((int)(this->CGraphicCtrl_EditBox_data).offset_0xb4 <
      *(int *)&this[1].CGraphicCtrl_data.offset_0x8 - this[1].CGraphicCtrl_data.offset_0x4 >> 2) {
    uVar6 = this[1].CGraphicCtrl_data.offset_0x4;
    if (*(uint *)&this[1].CGraphicCtrl_data.offset_0x8 < uVar6) {
      _invalid_parameter_noinfo();
    }
    local_1048 = (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc;
    local_1044 = uVar6;
    FUN_60004080(&local_1048,&tStack_105c.cx,(this->CGraphicCtrl_EditBox_data).offset_0xb4);
    LVar5 = tStack_105c.cx;
    piVar10 = (int *)tStack_105c.cy;
    while( true ) {
      piVar4 = *(int **)&this[1].CGraphicCtrl_data.offset_0x8;
      if (piVar4 < (int *)this[1].CGraphicCtrl_data.offset_0x4) {
        _invalid_parameter_noinfo();
      }
      if (((int *)LVar5 == (int *)0x0) ||
         ((int *)LVar5 != (int *)(this->CGraphicCtrl_EditBox_data).offset_0xdc)) {
        _invalid_parameter_noinfo();
      }
      if (piVar10 == piVar4) break;
      if ((int *)LVar5 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)LVar5;
      }
      if (*(int **)(iVar12 + 0x10) <= piVar10) {
        _invalid_parameter_noinfo();
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                (abStack_102c,(char *)(*piVar10 + 1));
      if ((int *)LVar5 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)LVar5;
      }
      if (*(int **)(iVar12 + 0x10) <= piVar10) {
        _invalid_parameter_noinfo();
      }
      piVar10 = piVar10 + 1;
    }
  }
LAB_60005db0:
  psizl = &tStack_1050;
  uVar6 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::size(abStack_102c);
  pcVar8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(abStack_102c)
  ;
  GetTextExtentPoint32A(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,pcVar8,uVar6,psizl);
  piStack_1054 = (int *)SetBkMode(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,1);
  SetTextColor(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,
               (this->CGraphicCtrl_EditBox_data).offset_0x4);
  if (((this->CGraphicCtrl_EditBox_data).offset_0x14 != 0) &&
     ((this->CGraphicCtrl_EditBox_data).offset_0x18 != 0)) {
    acStack_1010[0] = '\0';
    memset(acStack_1010 + 1,0,0x7ff);
    iVar12 = (this->CGraphicCtrl_EditBox_data).offset_0x38;
    _MaxCount = 0;
    if (0 < iVar12) {
      CalculateTotalLength(this,0,iVar12 + -1);
    }
    iVar12 = (this->CGraphicCtrl_EditBox_data).offset_0xb0;
    iVar9 = (this->CGraphicCtrl_EditBox_data).offset_0x38;
    if (iVar9 < iVar12) {
      _MaxCount = CalculateTotalLength(this,iVar9,iVar12 + -1);
    }
    pcVar8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                       (abStack_102c);
    strncpy_s(acStack_1010,0x800,pcVar8,_MaxCount);
    pcVar8 = acStack_1010;
    acStack_1010[_MaxCount] = '\0';
    tStack_1050.cx = 0;
    tStack_1050.cy = 0;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    GetTextExtentPoint32A
              (*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,acStack_1010,
               (int)pcVar8 - (int)(acStack_1010 + 1),&tStack_1050);
    LVar5 = tStack_1050.cx;
    if ((this->CGraphicCtrl_EditBox_data).offset_0xb4 == -1) {
      local_1048 = (int *)(this->CGraphicCtrl_data).offset_0xd0;
      iVar12 = (this->CGraphicCtrl_data).offset_0xd4;
      uVar14 = (this->CGraphicCtrl_EditBox_data).offset_0xc;
      LVar13 = 2;
    }
    else {
      puVar2 = &(this->CGraphicCtrl_EditBox_data).offset_0xb9;
      pcVar8 = puVar2;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      GetTextExtentPoint32A
                (*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,puVar2,
                 (int)pcVar8 - (int)&(this->CGraphicCtrl_EditBox_data).offset_0xba,&tStack_1050);
      uVar14 = (this->CGraphicCtrl_EditBox_data).offset_0xc;
      iVar12 = (this->CGraphicCtrl_data).offset_0xd4;
      local_1048 = (int *)(this->CGraphicCtrl_data).offset_0xd0;
      LVar13 = tStack_1050.cx;
    }
    CHgImage::FillRect((CHgImage *)&(this->CGraphicCtrl_EditBox_data).field_0x40,LVar5,0,LVar13,
                       iVar12,uVar14,0x100,0);
  }
  pvVar11 = SelectObject(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,
                         (HGDIOBJ)(this->CGraphicCtrl_EditBox_data).offset_0x20[1]);
  *(HGDIOBJ *)&(this->CGraphicCtrl_EditBox_data).field_0xac = pvVar11;
  uVar6 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::size(abStack_102c);
  pcVar8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(abStack_102c)
  ;
  TextOutA(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,0,0,pcVar8,uVar6);
  local_1048 = (int *)(this->CGraphicCtrl_data).offset_0xd0;
  CHgImage::Draw((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,
                 (CHgImageBase *)&(this->CGraphicCtrl_EditBox_data).field_0x40,0,0,0x1e0,
                 (this->CGraphicCtrl_data).offset_0xd4,0x100,0);
  SetBkMode(*(HDC *)&(this->CGraphicCtrl_EditBox_data).field_0xa4,(int)piStack_1054);
  uStack_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_102c);
LAB_60005fe5:
  ExceptionList = local_c;
  iVar12 = __security_check_cookie(local_10 ^ (uint)&uStack_1064);
  return iVar12;
}



/* ---- GetMessageMap @ 60006010 size=6 ---- */

/* protected: virtual struct AFX_MSGMAP const * __thiscall __CWndForInput::GetMessageMap(void)const
    */

AFX_MSGMAP * __thiscall __CWndForInput::GetMessageMap(__CWndForInput *this)

{
                    /* 0x6010  226  ?GetMessageMap@__CWndForInput@@MBEPBUAFX_MSGMAP@@XZ
                       0x6010  246  ?GetThisMessageMap@__CWndForInput@@KGPBUAFX_MSGMAP@@XZ */
  return (AFX_MSGMAP *)&PTR_LAB_60017dc8;
}



/* ---- ~CGraphicCtrl_Text @ 60006020 size=98 ---- */

/* public: virtual __thiscall CGraphicCtrl_Text::~CGraphicCtrl_Text(void) */

void __thiscall CGraphicCtrl_Text::~CGraphicCtrl_Text(CGraphicCtrl_Text *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6020  50  ??1CGraphicCtrl_Text@@UAE@XZ */
  puStack_8 = &LAB_600164b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  CHgDIB::~CHgDIB((CHgDIB *)&(this->CGraphicCtrl_Text_data).offset_0xc);
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- CGraphicCtrl_Text::_AllocSelf @ 60006090 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Text::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text___AllocSelf(CGraphicCtrl_Text *this)

{
  CGraphicCtrl_Text *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6090  473  ?_AllocSelf@CGraphicCtrl_Text@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1dc);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_Text *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CGraphicCtrl_Text(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 60006100 size=85 ---- */

CGraphicCtrl_Text * __thiscall
CGraphicCtrl_Text::scalar_deleting_destructor(CGraphicCtrl_Text *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_Text(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_Text *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_Text_data.offset_0x70;
  _eh_vector_destructor_iterator_
            (this,0x1dc,this[-1].CGraphicCtrl_Text_data.offset_0x70,~CGraphicCtrl_Text);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_Text *)puVar1;
}



/* ---- CGraphicCtrl_Notify::CreateInstance @ 60006160 size=110 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_Notify::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_Notify::CGraphicCtrl_Notify__CreateInstance(CGraphicCtrl_Notify *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0x6160  153  ?CreateInstance@CGraphicCtrl_Notify@@UAEPAVCGraphicCtrl@@XZ */
  pCVar1 = CGraphicCtrl::CGraphicCtrl__CreateInstance((CGraphicCtrl *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(undefined4 *)(pCVar1 + 0x180) = *(undefined4 *)&(this->CGraphicCtrl_Notify_data).field_0x18;
    *(undefined4 *)(pCVar1 + 0x184) = *(undefined4 *)&(this->CGraphicCtrl_Notify_data).field_0x1c;
    *(undefined4 *)(pCVar1 + 0x188) = *(undefined4 *)&(this->CGraphicCtrl_Notify_data).field_0x20;
    *(undefined4 *)(pCVar1 + 0x19c) = (this->CGraphicCtrl_Notify_data).offset_0x34;
    *(undefined4 *)(pCVar1 + 0x1a0) = (this->CGraphicCtrl_Notify_data).offset_0x38;
    *(undefined4 *)(pCVar1 + 0x1a4) = (this->CGraphicCtrl_Notify_data).offset_0x3c;
    *(undefined4 *)(pCVar1 + 0x1a8) = (this->CGraphicCtrl_Notify_data).offset_0x40;
    *(undefined4 *)(pCVar1 + 0x168) = (this->CGraphicCtrl_Notify_data).offset_0x0;
  }
  return pCVar1;
}



/* ---- ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> @ 600061d0 size=6 ---- */

void __thiscall
ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
          (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x600061d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(this);
  return;
}



/* ---- FUN_600061e0 @ 600061e0 size=34 ---- */

void __cdecl FUN_600061e0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 0x50:
    return;
  default:
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  case 0xc:
    AfxThrowMemoryException();
    return;
  }
}



/* ---- SetDecoration @ 60006270 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_Notify::SetDecoration(int) */

void __thiscall CGraphicCtrl_Notify::SetDecoration(CGraphicCtrl_Notify *this,int param_1)

{
                    /* 0x6270  393  ?SetDecoration@CGraphicCtrl_Notify@@QAEXH@Z */
  (this->CGraphicCtrl_Notify_data).offset_0x38 = param_1;
  return;
}



/* ---- GetDecoration @ 60006280 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_Notify::GetDecoration(void) */

int __thiscall CGraphicCtrl_Notify::GetDecoration(CGraphicCtrl_Notify *this)

{
                    /* 0x6280  210  ?GetDecoration@CGraphicCtrl_Notify@@QAEHXZ */
  return (this->CGraphicCtrl_Notify_data).offset_0x38;
}



/* ---- CreateFontA @ 60006290 size=23 ---- */

/* public: void __thiscall CGraphicCtrl_Notify::CreateFontA(struct HFONT__ *) */

void __thiscall CGraphicCtrl_Notify::CreateFontA(CGraphicCtrl_Notify *this,HFONT__ *param_1)

{
                    /* 0x6290  130  ?CreateFontA@CGraphicCtrl_Notify@@QAEXPAUHFONT__@@@Z */
  (this->CGraphicCtrl_Notify_data).offset_0x0 = param_1;
  (this->CGraphicCtrl_Notify_data).offset_0x3c = 0xc;
  return;
}



/* ---- EnableButton @ 600062b0 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_PushBtn_Ani::EnableButton(int) */

void __thiscall CGraphicCtrl_PushBtn_Ani::EnableButton(CGraphicCtrl_PushBtn_Ani *this,int param_1)

{
                    /* 0x62b0  182  ?EnableButton@CGraphicCtrl_PushBtn_Ani@@QAEXH@Z
                       0x62b0  401  ?SetFlashTime@CGraphicCtrl_Notify@@QAEXH@Z */
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x18 = param_1;
  return;
}



/* ---- GetFlashTime @ 600062c0 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_Notify::GetFlashTime(void) */

int __thiscall CGraphicCtrl_Notify::GetFlashTime(CGraphicCtrl_Notify *this)

{
                    /* 0x62c0  215  ?GetFlashTime@CGraphicCtrl_Notify@@QAEHXZ
                       0x62c0  284  ?IsWindowEnabled@CGraphicCtrl_PushBtn_Ani@@QAEHXZ */
  return (this->CGraphicCtrl_Notify_data).offset_0x40;
}



/* ---- FUN_600062d0 @ 600062d0 size=36 ---- */

void __cdecl FUN_600062d0(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4)

{
  errno_t eVar1;
  
  eVar1 = memcpy_s(param_1,param_2,param_3,param_4);
  FUN_600061e0(eVar1);
  return;
}



/* ---- FUN_60006300 @ 60006300 size=202 ---- */

void __thiscall FUN_60006300(void *this,int param_1,int param_2)

{
  int iVar1;
  rsize_t _DstSize;
  int iVar2;
  errno_t eVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1;
  iVar1 = param_1 + param_2;
  if ((((param_1 < 0) || (param_2 < 0)) || (*(int *)((int)this + 8) < iVar1)) ||
     ((iVar1 < param_1 || (iVar1 < param_2)))) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  iVar4 = *(int *)((int)this + 8) - iVar1;
  if (0 < param_2) {
    iVar5 = param_1 * 0x1c;
    param_1 = param_2;
    do {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                 (*(int *)((int)this + 4) + iVar5));
      iVar5 = iVar5 + 0x1c;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  if (iVar4 != 0) {
    _DstSize = iVar4 * 0x1c;
    eVar3 = memmove_s((void *)(*(int *)((int)this + 4) + iVar2 * 0x1c),_DstSize,
                      (void *)(*(int *)((int)this + 4) + iVar1 * 0x1c),_DstSize);
    FUN_600061e0(eVar3);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) - param_2;
  return;
}



/* ---- ~CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> @ 600063e0 size=68 ---- */

void __thiscall
CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::
~CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>
          (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this)

{
  int iVar1;
  int iVar2;
  
  this->vftablePtr = &vftable;
  if ((this->CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).offset_0x0
      != (void *)0x0) {
    iVar2 = 0;
    if (0 < (this->CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).
            offset_0x4) {
      iVar1 = 0;
      do {
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                   ((int)(this->
                         CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data)
                         .offset_0x0 + iVar1));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (iVar2 < (this->
                       CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).
                       offset_0x4);
    }
    operator_delete__((this->
                      CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).
                      offset_0x0);
  }
  return;
}



/* ---- scalar_deleting_destructor @ 60006430 size=30 ---- */

undefined4 * __thiscall
CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::scalar_deleting_destructor
          (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this,byte param_1)

{
  ~CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_60006450 @ 60006450 size=631 ---- */

void __thiscall FUN_60006450(void *this,int param_1,int param_2)

{
  void *pvVar1;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1;
  iVar4 = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  if (-1 < param_2) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 8)) {
        iVar4 = 0;
        do {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                     (*(int *)((int)this + 4) + iVar4));
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x1c;
        } while (iVar5 < *(int *)((int)this + 8));
      }
      operator_delete__(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  if (*(int *)((int)this + 4) == 0) {
    iVar4 = *(int *)((int)this + 0x10);
    if (*(int *)((int)this + 0x10) < param_1) {
      iVar4 = param_1;
    }
    pvVar1 = operator_new__(iVar4 * 0x1c);
    *(void **)((int)this + 4) = pvVar1;
    memset(pvVar1,0,iVar4 * 0x1c);
    if (0 < param_1) {
      iVar3 = 0;
      do {
        pCVar2 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                 (*(int *)((int)this + 4) + iVar3);
        if (pCVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)0x0) {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(pCVar2);
        }
        iVar3 = iVar3 + 0x1c;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    *(int *)((int)this + 8) = iVar5;
    *(int *)((int)this + 0xc) = iVar4;
    return;
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 < param_1) {
    iVar4 = *(int *)((int)this + 0x10);
    if (iVar4 == 0) {
      iVar4 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (iVar4 < 4) {
        iVar4 = 4;
      }
      else if (0x400 < iVar4) {
        iVar4 = 0x400;
      }
    }
    if (param_1 < iVar4 + iVar3) {
      param_1 = iVar4 + iVar3;
    }
    if (param_1 < iVar3) {
                    /* WARNING: Subroutine does not return */
      AfxThrowInvalidArgException();
    }
    pvVar1 = operator_new__(param_1 * 0x1c);
    FUN_600062d0(pvVar1,param_1 * 0x1c,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0x1c);
    memset((void *)((int)pvVar1 + *(int *)((int)this + 8) * 0x1c),0,
           (iVar5 - *(int *)((int)this + 8)) * 0x1c);
    iVar4 = 0;
    if (0 < iVar5 - *(int *)((int)this + 8)) {
      do {
        pCVar2 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                 ((int)pvVar1 + (*(int *)((int)this + 8) + iVar4) * 0x1c);
        if (pCVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)0x0) {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(pCVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5 - *(int *)((int)this + 8));
    }
    operator_delete__(*(void **)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
    *(int *)((int)this + 0xc) = param_1;
  }
  else {
    iVar3 = *(int *)((int)this + 8);
    if (iVar3 < param_1) {
      memset((void *)(*(int *)((int)this + 4) + iVar3 * 0x1c),0,(param_1 - iVar3) * 0x1c);
      iVar4 = 0;
      if (0 < param_1 - *(int *)((int)this + 8)) {
        do {
          pCVar2 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                   (*(int *)((int)this + 4) + (*(int *)((int)this + 8) + iVar4) * 0x1c);
          if (pCVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)0x0) {
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
            CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(pCVar2);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1 - *(int *)((int)this + 8));
        *(int *)((int)this + 8) = param_1;
        return;
      }
    }
    else if ((param_1 < iVar3) && (0 < iVar3 - param_1)) {
      iVar5 = param_1 * 0x1c;
      do {
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                   (*(int *)((int)this + 4) + iVar5));
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x1c;
      } while (iVar4 < *(int *)((int)this + 8) - param_1);
      *(int *)((int)this + 8) = param_1;
      return;
    }
  }
  *(int *)((int)this + 8) = iVar5;
  return;
}



/* ---- FUN_600066d0 @ 600066d0 size=175 ---- */

void __thiscall
FUN_600066d0(void *param_1,int param_2,
            CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60016518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  if (*(int *)((int)param_1 + 8) <= param_2) {
    FUN_60006450(param_1,param_2 + 1,-1);
  }
  this = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
         (*(int *)((int)param_1 + 4) + param_2 * 0x1c);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            (this,(CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
                  &param_3);
  *(undefined4 *)(this + 4) = param_4;
  *(undefined4 *)(this + 8) = param_5;
  *(undefined4 *)(this + 0xc) = param_6;
  *(undefined4 *)(this + 0x10) = param_7;
  *(undefined4 *)(this + 0x14) = param_8;
  *(undefined4 *)(this + 0x18) = param_9;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(&param_3);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60006780 @ 60006780 size=176 ---- */

void FUN_60006780(CArchive *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 != 0) && (param_2 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    if (param_3 != 0) {
      while( true ) {
        uVar3 = param_3;
        if (0x4924923 < param_3) {
          uVar3 = 0x4924924;
        }
        uVar1 = uVar3 * 0x1c;
        uVar2 = CArchive::Read(param_1,param_2,uVar1);
        if (uVar2 != uVar1) break;
        param_3 = param_3 - uVar3;
        param_2 = (void *)((int)param_2 + uVar1);
        if (param_3 == 0) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      AfxThrowArchiveException(3,(char *)0x0);
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - uVar3) {
      uVar3 = param_3;
      if (0x4924923 < param_3) {
        uVar3 = 0x4924924;
      }
      CArchive::Write(param_1,param_2,uVar3 * 0x1c);
      param_2 = (void *)((int)param_2 + uVar3 * 0x1c);
    }
  }
  return;
}



/* ---- CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> @ 60006840 size=108 ---- */

/* public: __thiscall CGraphicCtrl_Notify::CGraphicCtrl_Notify(void) */

CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> * __thiscall
CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::
CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>
          (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this)

{
                    /* 0x6840  6  ??0CGraphicCtrl_Notify@@QAE@XZ */
                    /* inlined constructor: CGraphicCtrl_Notify::CGraphicCtrl_Notify */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  this->vftablePtr =
       (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable *)
       &CGraphicCtrl_Notify::_vftable_;
  this[0x1e].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x4 =
       0;
  this[0x1f].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x4 =
       0;
  this[0x1f].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x0 =
       (void *)0x0;
  this[0x1f].vftablePtr =
       (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable *)0x0;
  this[0x1e].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x0 =
       &vftable;
  this[0x21].vftablePtr =
       (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable *)0x0;
  this[0x23].vftablePtr =
       (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable *)0x0;
  this[0x21].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x0 =
       (void *)0x0;
  this[0x21].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x4 =
       0;
  this[0x22].vftablePtr =
       (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable *)0x0;
  this[0x22].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x0 =
       (void *)0x0;
  this[0x22].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x4 =
       0;
  this[0x23].CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data.offset_0x0 =
       (void *)0x1f4;
  return this;
}



/* ---- ~CGraphicCtrl_Notify @ 600068b0 size=44 ---- */

/* public: virtual __thiscall CGraphicCtrl_Notify::~CGraphicCtrl_Notify(void) */

void __thiscall CGraphicCtrl_Notify::~CGraphicCtrl_Notify(CGraphicCtrl_Notify *this)

{
  byte bVar1;
  
                    /* 0x68b0  42  ??1CGraphicCtrl_Notify@@UAE@XZ */
  bVar1 = (this->CGraphicCtrl_data).offset_0x2;
  this->vftablePtr = &_vftable_;
  if (bVar1 < 2) {
    (this->CGraphicCtrl_Notify_data).offset_0x0 = 0;
  }
  CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::
  ~CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>
            ((CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *)
             &(this->CGraphicCtrl_Notify_data).offset_0x4);
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  return;
}



/* ---- FUN_600068e0 @ 600068e0 size=154 ---- */

int __thiscall
FUN_600068e0(void *param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_2,
            undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> in_stack_ffffffc4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_39;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60016548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = *(int *)((int)param_1 + 8);
  local_4 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             ((int)register0x00000010 + -0x3c),
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)&param_2);
  FUN_600066d0(param_1,iVar1,in_stack_ffffffc4,param_3,param_4,param_5,param_6,param_7,param_8);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(&param_2);
  ExceptionList = local_c;
  return iVar1;
}



/* ---- vfunction3 @ 60006980 size=83 ---- */

void __thiscall
CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::vfunction3
          (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this,
          CArchive *param_1)

{
  ulong uVar1;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    FUN_60006450(this,uVar1,-1);
    FUN_60006780(param_1,(this->
                         CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data)
                         .offset_0x0,
                 (this->CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).
                 offset_0x4);
    return;
  }
  CArchive::WriteCount
            (param_1,(this->
                     CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).
                     offset_0x4);
  FUN_60006780(param_1,(this->
                       CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).
                       offset_0x0,
               (this->CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data).
               offset_0x4);
  return;
}



/* ---- CGraphicCtrl_Notify::_AllocSelf @ 600069e0 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Notify::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_Notify::CGraphicCtrl_Notify___AllocSelf(CGraphicCtrl_Notify *this)

{
  CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x69e0  465  ?_AllocSelf@CGraphicCtrl_Notify@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1ac);
  local_4 = 0;
  if (pCVar1 == (CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::
           CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 60006a50 size=120 ---- */

CGraphicCtrl * __thiscall
CGraphicCtrl_Notify::scalar_deleting_destructor(CGraphicCtrl_Notify *this,byte param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].CGraphicCtrl_Notify_data.offset_0x40;
    _eh_vector_destructor_iterator_
              (this,0x1ac,this[-1].CGraphicCtrl_Notify_data.offset_0x40,~CGraphicCtrl_Notify);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return (CGraphicCtrl *)puVar1;
  }
  bVar2 = (this->CGraphicCtrl_data).offset_0x2;
                    /* inlined destructor: CGraphicCtrl_Notify::~CGraphicCtrl_Notify */
  this->vftablePtr = &_vftable_;
  if (bVar2 < 2) {
    (this->CGraphicCtrl_Notify_data).offset_0x0 = 0;
  }
  CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::
  ~CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>
            ((CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *)
             &(this->CGraphicCtrl_Notify_data).offset_0x4);
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGraphicCtrl *)this;
}



/* ---- DeleteNotice @ 60006ad0 size=187 ---- */

/* public: void __thiscall CGraphicCtrl_Notify::DeleteNotice(int) */

void __thiscall CGraphicCtrl_Notify::DeleteNotice(CGraphicCtrl_Notify *this,int param_1)

{
  undefined4 *puVar1;
  CGraphicCtrl *this_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  RECT *lprcSrc2;
  
                    /* 0x6ad0  165  ?DeleteNotice@CGraphicCtrl_Notify@@QAEXH@Z */
  if ((this->CGraphicCtrl_Notify_data).offset_0x2c == 0) {
    puVar3 = (this->CGraphicCtrl_data).offset_0xe4;
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      this_00 = (CGraphicCtrl *)puVar3[2];
      puVar3 = puVar1;
      if (param_1 == 0) {
        (this_00->CGraphicCtrl_data).offset_0x11d = 0xff;
        (this_00->CGraphicCtrl_data).offset_0x11e = 0;
        (this_00->CGraphicCtrl_data).offset_0x11f = 0xff;
        iVar4 = CGraphicCtrl::IsShowing(this_00);
        if (iVar4 != 0) {
          lprcSrc2 = (RECT *)CGraphicCtrl::GetAreaScreen(this_00);
          UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,
                    (RECT *)CGraphicCtrl::s_prcInvalidateArea,lprcSrc2);
        }
        uVar2 = (this_00->CGraphicCtrl_data).offset_0x120;
        (this_00->CGraphicCtrl_data).offset_0x12c = uVar2;
        (this_00->CGraphicCtrl_data).offset_0x130 = 1000;
        (this_00->CGraphicCtrl_data).offset_0x124 = uVar2;
        (this_00->CGraphicCtrl_data).offset_0x128 = 1000;
        (this->CGraphicCtrl_Notify_data).offset_0x2c = 1;
      }
      else if (this_00 != (CGraphicCtrl *)0x0) {
        (*this_00->vftablePtr->deleting_destructor)(this_00,1);
      }
    }
  }
  return;
}



/* ---- CGraphicCtrl_Notify::OnNoticeTime @ 60006b90 size=8 ---- */

/* public: virtual void __thiscall CGraphicCtrl_Notify::OnNoticeTime(void) */

void __thiscall CGraphicCtrl_Notify::CGraphicCtrl_Notify__OnNoticeTime(CGraphicCtrl_Notify *this)

{
                    /* 0x6b90  326  ?OnNoticeTime@CGraphicCtrl_Notify@@UAEXXZ */
  DeleteNotice(this,0);
  return;
}



/* ---- AddNotice @ 60006ba0 size=809 ---- */

/* public: void __thiscall CGraphicCtrl_Notify::AddNotice(class ATL::CStringT<char,class
   StrTraitMFC_DLL<char,class ATL::ChTraitsCRT<char> > >,unsigned long,unsigned
   long,int,int,int,int) */

void __thiscall
CGraphicCtrl_Notify::AddNotice
          (CGraphicCtrl_Notify *this,ulong param_2,undefined4 param_3,
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_4,int param_5,
          CGraphicCtrl_Text *param_6,void *param_7,undefined4 param_8)

{
  OnSelfNotice *pOVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  CGraphicCtrl_Text *this_00;
  int iVar5;
  ulong unaff_retaddr;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStackY_dc [128];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> in_stack_ffffffa8;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  CGraphicCtrl_Text *local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvVar4 = param_7;
                    /* 0x6ba0  113
                       ?AddNotice@CGraphicCtrl_Notify@@QAEXV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@KKHHHH@Z
                        */
  iVar3 = param_5;
  puStack_8 = &LAB_6001658c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = (this->CGraphicCtrl_data).offset_0xec;
  local_4 = 0;
  (this->CGraphicCtrl_Notify_data).offset_0x34 = (uint)(param_5 == 0);
  if (iVar5 < 1) {
    *(int *)&(this->CGraphicCtrl_Notify_data).field_0x18 = param_5;
    *(CGraphicCtrl_Text **)&(this->CGraphicCtrl_Notify_data).field_0x1c = param_6;
    *(void **)&(this->CGraphicCtrl_Notify_data).field_0x20 = param_7;
    (this->CGraphicCtrl_Notify_data).offset_0x2c = 0;
    DeleteNotice(this,1);
    param_6 = operator_new(0x1dc);
    local_4._0_1_ = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x2;
    if (param_6 == (CGraphicCtrl_Text *)0x0) {
      this_00 = (CGraphicCtrl_Text *)0x0;
    }
    else {
      this_00 = CGraphicCtrl_Text::CGraphicCtrl_Text(param_6);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (pvVar4 == (void *)0x0) {
      iVar5 = ATL::CSimpleStringT<char,1>::GetLength((CSimpleStringT<char,1> *)&param_2);
      (*this_00->vftablePtr->CreateGraphicCtrl)(this_00,(int *)0x1,1,0xffffffff,0,0);
      CGraphicCtrl::AddChild((CGraphicCtrl *)this,(CGraphicCtrl *)this_00,'\0',(CGraphicCtrl *)0x0);
      CGraphicCtrl_Text::CreateBuffer
                (this_00,iVar5,0xb,(HFONT__ *)(this->CGraphicCtrl_Notify_data).offset_0x0,param_2);
      CGraphicCurve::SetPosForce
                ((CGraphicCurve *)&(this_00->CGraphicCtrl_data).field_0x24,
                 (float)(int)(this->CGraphicCtrl_data).offset_0xd0,0.0);
      CGraphicCtrl_Text::SetDecoration(this_00,(this->CGraphicCtrl_Notify_data).offset_0x38,0);
      CGraphicCtrl_Text::TextOutA
                (this_00,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_4,0
                 ,0,(HFONT__ *)(this->CGraphicCtrl_Notify_data).offset_0x0,unaff_retaddr);
      fVar2 = (float)(int)(this->CGraphicCtrl_data).offset_0xd0;
      param_2 = *(int *)&(this->CGraphicCtrl_Notify_data).field_0x1c * 1000;
      (this->CGraphicCtrl_Notify_data).offset_0x28 = fVar2;
      (this->CGraphicCtrl_Notify_data).offset_0x24 = fVar2 / (float)(int)param_2;
    }
    else {
      (*this_00->vftablePtr->CreateGraphicCtrl)
                (this_00,(int *)(this->CGraphicCtrl_data).offset_0xd0,
                 (this->CGraphicCtrl_data).offset_0xd4,param_4,0,0);
      CGraphicCtrl::AddChild((CGraphicCtrl *)this,(CGraphicCtrl *)this_00,'\0',(CGraphicCtrl *)0x0);
      CGraphicCurve::SetPosForce((CGraphicCurve *)&(this_00->CGraphicCtrl_data).field_0x24,0.0,0.0);
      CGraphicCtrl_Text::SetDecoration(this_00,(this->CGraphicCtrl_Notify_data).offset_0x38,0);
      CGraphicCtrl_Text::DrawTextA
                (this_00,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_4,
                 (CRect *)0x0,(HFONT__ *)(this->CGraphicCtrl_Notify_data).offset_0x0,unaff_retaddr,
                 0x8001);
    }
    if (0 < (int)param_6) {
      (this->CGraphicCtrl_data).offset_0x154 = 1;
      (this->CGraphicCtrl_data).offset_0x15c = (this->CGraphicCtrl_data).offset_0x120;
      (this->CGraphicCtrl_data).offset_0x158 = param_6;
    }
    if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
      CGraphicCtrl::__AdjustShow((CGraphicCtrl *)this_00,1);
      (this_00->CGraphicCtrl_data).offset_0xc = 1;
    }
    if ((this_00->CGraphicCtrl_data).offset_0x14 != 1) {
      pOVar1 = this_00->vftablePtr->OnSelfNotice;
      (this_00->CGraphicCtrl_data).offset_0x14 = 1;
      (this_00->CGraphicCtrl_data).offset_0x120 = 0;
      (*pOVar1)(this_00,0xff03);
    }
    iVar5 = CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)this);
    local_28 = *(undefined4 *)(iVar5 + 8);
    local_24 = *(undefined4 *)(iVar5 + 0xc);
    CGraphicCtrl::SetClippingRect((CGraphicCtrl *)this_00,(CRect *)(aCStackY_dc + 0xac));
    (this->CGraphicCtrl_Notify_data).offset_0x30 = 0;
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_28);
    local_4 = CONCAT31(local_4._1_3_,1);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_28,
               (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)&param_2
              );
    local_18 = param_6;
    local_1c = iVar3;
    local_24 = param_3;
    local_20 = param_4;
    local_14 = param_7;
    local_10 = param_8;
    param_4 = aCStackY_dc + 0x84;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              (aCStackY_dc + 0x84,
               (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
               &local_28);
    FUN_600068e0(&(this->CGraphicCtrl_Notify_data).offset_0x4,in_stack_ffffffa8,local_24,local_20,
                 local_1c,local_18,local_14,local_10);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_28);
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_4);
  ExceptionList = local_14;
  return;
}



/* ---- CGraphicCtrl_Notify::Proc @ 60006ed0 size=567 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall CGraphicCtrl_Notify::Proc(unsigned long) */

int __thiscall
CGraphicCtrl_Notify::CGraphicCtrl_Notify__Proc(CGraphicCtrl_Notify *this,ulong param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  CGraphicCtrl *this_00;
  int iVar3;
  int iVar4;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar5;
  float fVar6;
  undefined4 extraout_EDX;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_38;
  int local_34;
  int local_30;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6ed0  354  ?Proc@CGraphicCtrl_Notify@@UAEHK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600165b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar7 = (this->CGraphicCtrl_data).offset_0xe4;
  if (piVar7 == (int *)0x0) {
    if (0 < (int)(this->CGraphicCtrl_Notify_data).offset_0xc) {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_28);
      local_4 = 0;
      if ((int)(this->CGraphicCtrl_Notify_data).offset_0xc < 1) {
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      pCVar5 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
               (this->CGraphicCtrl_Notify_data).offset_0x8;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=(local_28,pCVar5)
      ;
      uStack_68 = *(undefined4 *)(pCVar5 + 4);
      uStack_6c = *(undefined4 *)(pCVar5 + 8);
      uStack_60 = *(undefined4 *)(pCVar5 + 0xc);
      uStack_5c = *(undefined4 *)(pCVar5 + 0x10);
      local_14 = *(undefined4 *)(pCVar5 + 0x14);
      local_10 = *(undefined4 *)(pCVar5 + 0x18);
      uStack_64 = uStack_6c;
      local_24 = uStack_68;
      local_20 = uStack_6c;
      local_1c = uStack_60;
      local_18 = uStack_5c;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack_6c,
                 (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
                 local_28);
      AddNotice(this);
      uStack_5c = 0x600070e7;
      FUN_60006300(&(this->CGraphicCtrl_Notify_data).offset_0x4,0,1);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_28);
    }
    iVar8 = 0;
  }
  else {
    do {
      piVar2 = (int *)*piVar7;
      this_00 = (CGraphicCtrl *)piVar7[2];
      if (*(int *)&(this->CGraphicCtrl_Notify_data).field_0x20 == 0) {
        CGraphicCtrl::GetArea(this_00);
        fVar6 = (float)(int)param_1;
        iVar8 = local_30 - local_38;
        if ((int)param_1 < 0) {
          fVar6 = fVar6 + _DAT_60017950;
        }
        (this->CGraphicCtrl_Notify_data).offset_0x28 =
             (float)(this->CGraphicCtrl_Notify_data).offset_0x28 -
             fVar6 * (float)(this->CGraphicCtrl_Notify_data).offset_0x24;
        uVar9 = FUN_60015470(param_1,extraout_EDX);
        local_38 = (int)uVar9;
        local_30 = local_38 + iVar8;
        puVar1 = &(this_00->CGraphicCtrl_data).field_0x24;
        if (local_30 < 0) {
          local_38 = (this->CGraphicCtrl_data).offset_0xd0;
          (this->CGraphicCtrl_Notify_data).offset_0x28 = (float)local_38;
          uStack_5c = 0x60006fac;
          CGraphicCurve::SetPosForce((CGraphicCurve *)puVar1,(float)local_38,(float)local_34);
          iVar3 = (this->CGraphicCtrl_Notify_data).offset_0x34;
LAB_6000701f:
          if (iVar3 == 0) {
            puVar1 = &(this->CGraphicCtrl_Notify_data).field_0x18;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            if (*(int *)puVar1 == 0) {
              DeleteNotice(this,1);
            }
          }
        }
        else {
          uStack_5c = 0x60006fcc;
          CGraphicCurve::SetPosForce((CGraphicCurve *)puVar1,(float)local_38,(float)local_34);
        }
      }
      else {
        iVar8 = (this->CGraphicCtrl_data).offset_0x120;
        if ((uint)(this->CGraphicCtrl_Notify_data).offset_0x40 <
            (uint)(iVar8 - (this->CGraphicCtrl_Notify_data).offset_0x30)) {
          iVar3 = (this->CGraphicCtrl_data).offset_0xc;
          iVar4 = (this->CGraphicCtrl_Notify_data).offset_0x34;
          (this->CGraphicCtrl_data).offset_0x134 = 1;
          (this->CGraphicCtrl_data).offset_0x140 = iVar8;
          (this->CGraphicCtrl_data).offset_0x13c = 500;
          (this->CGraphicCtrl_Notify_data).offset_0x30 = iVar8;
          (this->CGraphicCtrl_data).offset_0x138 = (uint)(iVar3 == 0);
          if (iVar4 == 0) goto LAB_6000701f;
        }
      }
      piVar7 = piVar2;
    } while (piVar2 != (int *)0x0);
    CGraphicCtrl::GetArea((CGraphicCtrl *)this);
    iVar8 = 1;
  }
  ExceptionList = local_c;
  return iVar8;
}



/* ---- CGraphicCtrl_Text @ 60007110 size=139 ---- */

/* WARNING: Exceeded maximum restarts with more pending */
/* public: __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text(void) */

CGraphicCtrl_Text * __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text(CGraphicCtrl_Text *this)

{
  int *this_00;
  code *pcVar1;
  uint uVar2;
  undefined1 auStackY_a0 [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7110  14  ??0CGraphicCtrl_Text@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600165f7;
  local_c = ExceptionList;
  uVar2 = DAT_600259a8 ^ (uint)(auStackY_a0 + 0x84);
  ExceptionList = &local_c;
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  this_00 = &(this->CGraphicCtrl_Text_data).offset_0xc;
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  CHgDIB::CHgDIB((CHgDIB *)this_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  (this->CGraphicCtrl_Text_data).offset_0x8 = 1;
  (this->CGraphicCtrl_data).offset_0x4 = 1;
  pcVar1 = *(code **)(*this_00 + 0x14);
  (this->CGraphicCtrl_Text_data).offset_0x0 = 0;
  (this->CGraphicCtrl_Text_data).offset_0x4 = 0;
  (this->CGraphicCtrl_Text_data).offset_0x70 = 0;
  (*pcVar1)(uVar2);
  ExceptionList = local_c;
  return this;
}



/* ---- CGraphicCtrl_Text::CreateGraphicCtrl @ 600071a0 size=105 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Text::CreateGraphicCtrl(int,int,unsigned
   long,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Text::CGraphicCtrl_Text__CreateGraphicCtrl
          (CGraphicCtrl_Text *this,int param_1,int param_2,uint param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
                    /* 0x71a0  140  ?CreateGraphicCtrl@CGraphicCtrl_Text@@UAEHHHKEVCPoint@@H@Z */
  CGraphicCtrl::CGraphicCtrl__CreateGraphicCtrl
            ((CGraphicCtrl *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  (**(code **)((this->CGraphicCtrl_Text_data).offset_0xc + 0x10))(param_1,param_2);
  CHgImage::FillRect((CHgImage *)&(this->CGraphicCtrl_Text_data).offset_0xc,0,0,param_1,param_2,
                     0xff0000,0x100,0);
  return 1;
}



/* ---- CGraphicCtrl_Text::CreateGraphicCtrl @ 60007210 size=72 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Text::CreateGraphicCtrl(char *,unsigned long,unsigned
   char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Text::CGraphicCtrl_Text__CreateGraphicCtrl
          (CGraphicCtrl_Text *this,undefined4 param_1,uint param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
                    /* 0x7210  141  ?CreateGraphicCtrl@CGraphicCtrl_Text@@UAEHPADKEVCPoint@@H@Z */
  CGraphicCtrl::CGraphicCtrl__CreateGraphicCtrl
            ((CGraphicCtrl *)this,param_1,param_2,param_3,param_4,param_5);
  (**(code **)((this->CGraphicCtrl_Text_data).offset_0xc + 8))(param_1,param_2);
  return 1;
}



/* ---- CGraphicCtrl_Text::Proc @ 60007260 size=50 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Text::Proc(unsigned long) */

int __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text__Proc(CGraphicCtrl_Text *this,ulong param_1)

{
                    /* 0x7260  359  ?Proc@CGraphicCtrl_Text@@UAEHK@Z */
  if ((this->CGraphicCtrl_Text_data).offset_0x0 == 0) {
    return 0;
  }
  (this->CGraphicCtrl_Text_data).offset_0x0 = 0;
  CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)this);
  return 1;
}



/* ---- SetMode @ 600072a0 size=6 ---- */

/* public: void __thiscall CGraphicCtrl_Text::SetMode(struct HDC__ *,int) */

void __thiscall CGraphicCtrl_Text::SetMode(CGraphicCtrl_Text *this,HDC__ *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x600072a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x72a0  411  ?SetMode@CGraphicCtrl_Text@@QAEXPAUHDC__@@H@Z */
  SetBkMode(param_1,param_2);
  return;
}



/* ---- SetDecoration @ 600072b0 size=23 ---- */

/* public: void __thiscall CGraphicCtrl_Text::SetDecoration(int,unsigned long) */

void __thiscall CGraphicCtrl_Text::SetDecoration(CGraphicCtrl_Text *this,int param_1,ulong param_2)

{
                    /* 0x72b0  394  ?SetDecoration@CGraphicCtrl_Text@@QAEXHK@Z */
  (this->CGraphicCtrl_Text_data).offset_0x4 = param_1;
  (this->CGraphicCtrl_Text_data).offset_0x70 = param_2;
  return;
}



/* ---- GetShadowDegree @ 600072d0 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_Text::GetShadowDegree(void) */

int __thiscall CGraphicCtrl_Text::GetShadowDegree(CGraphicCtrl_Text *this)

{
                    /* 0x72d0  238  ?GetShadowDegree@CGraphicCtrl_Text@@QAEHXZ */
  return (this->CGraphicCtrl_Text_data).offset_0x8;
}



/* ---- SetShadowDegree @ 600072e0 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_Text::SetShadowDegree(int) */

void __thiscall CGraphicCtrl_Text::SetShadowDegree(CGraphicCtrl_Text *this,int param_1)

{
                    /* 0x72e0  433  ?SetShadowDegree@CGraphicCtrl_Text@@QAEXH@Z */
  (this->CGraphicCtrl_Text_data).offset_0x8 = param_1;
  return;
}



/* ---- CGraphicCtrl_Text::CreateInstance @ 600072f0 size=137 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_Text::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_Text::CGraphicCtrl_Text__CreateInstance(CGraphicCtrl_Text *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  CGraphicCtrl *pCVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
                    /* 0x72f0  158  ?CreateInstance@CGraphicCtrl_Text@@UAEPAVCGraphicCtrl@@XZ */
  pCVar4 = (*this->vftablePtr->clone)(this);
  uVar1 = (this->CGraphicCtrl_data).offset_0xd0;
  uVar2 = (this->CGraphicCtrl_data).offset_0xd4;
  uVar9 = (this->CGraphicCtrl_data).offset_0x1c;
  uVar8 = (this->CGraphicCtrl_data).offset_0xc4;
  iVar3 = *(int *)pCVar4;
  uVar5 = (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c;
  uVar7 = (this->CGraphicCtrl_data).offset_0xc0;
  uVar6 = CHgImageBase::GetTransparentColor((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20);
  (**(code **)(iVar3 + 0x24))(uVar1,uVar2,uVar6,uVar5,uVar7,uVar8,uVar9);
  CHgImage::Draw((CHgImage *)(pCVar4 + 0x174),0,0,
                 (CHgImageBase *)&(this->CGraphicCtrl_Text_data).offset_0xc,0x100,0);
  return pCVar4;
}



/* ---- TextOutA @ 60007380 size=400 ---- */

/* public: void __thiscall CGraphicCtrl_Text::TextOutA(class ATL::CStringT<char,class
   StrTraitMFC_DLL<char,class ATL::ChTraitsCRT<char> > > &,int,int,struct HFONT__ *,unsigned long)
    */

void __thiscall
CGraphicCtrl_Text::TextOutA
          (CGraphicCtrl_Text *this,
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,int param_2,
          int param_3,HFONT__ *param_4,ulong param_5)

{
  int *this_00;
  CHgDIB *this_01;
  int c;
  char *lpString;
  int iVar1;
  int iVar2;
  HDC hdc;
  HBITMAP__ *h;
  HGDIOBJ pvVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x7380  452
                       ?TextOutA@CGraphicCtrl_Text@@QAEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HHPAUHFONT__@@K@Z
                        */
  if ((this->CGraphicCtrl_data).offset_0x4 != 0) {
    c = ATL::CSimpleStringT<char,1>::GetLength((CSimpleStringT<char,1> *)param_1);
    lpString = ATL::CSimpleStringT<char,1>::GetBuffer((CSimpleStringT<char,1> *)param_1,c);
    iVar6 = 0;
    this_00 = &(this->CGraphicCtrl_Text_data).offset_0xc;
    iVar5 = 0x100;
    iVar1 = CHgImageBase::GetHeight((CHgImageBase *)this_00);
    iVar2 = CHgImageBase::GetWidth((CHgImageBase *)this_00);
    CHgImage::Draw((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,(CHgImageBase *)this_00,0,0
                   ,iVar2,iVar1,iVar5,iVar6);
    this_01 = (CHgDIB *)(this->CGraphicCtrl_data).offset_0x20;
    hdc = CreateCompatibleDC(CGraphicCtrl::s_hDCBackBuf);
    h = CHgDIB::GetHBitmap(this_01);
    pcVar4 = SelectObject_exref;
    SelectObject(hdc,h);
    SetBkMode(hdc,1);
    pvVar3 = SelectObject(hdc,param_4);
    iVar1 = (this->CGraphicCtrl_Text_data).offset_0x4;
    if (iVar1 == 1) {
      SetTextColor(hdc,(this->CGraphicCtrl_Text_data).offset_0x70);
      param_1 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)0xffffffff;
      do {
        iVar1 = -1;
        do {
          ::TextOutA(hdc,(int)(param_1 + param_2),iVar1 + param_3,lpString,c);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        param_1 = param_1 + 1;
      } while ((int)param_1 < 2);
      pcVar4 = SelectObject_exref;
    }
    else if (iVar1 == 2) {
      SetTextColor(hdc,(this->CGraphicCtrl_Text_data).offset_0x70);
      iVar1 = (this->CGraphicCtrl_Text_data).offset_0x8;
      ::TextOutA(hdc,iVar1 + param_2,iVar1 + param_3,lpString,c);
    }
    SetTextColor(hdc,param_5);
    ::TextOutA(hdc,param_2,param_3,lpString,c);
    (*pcVar4)(hdc,pvVar3);
    (*pcVar4)(hdc,lpString);
    if (hdc != (HDC)0x0) {
      DeleteDC(hdc);
    }
    (this->CGraphicCtrl_Text_data).offset_0x0 = 1;
  }
  return;
}



/* ---- TextOutA @ 60007520 size=180 ---- */

/* public: void __thiscall CGraphicCtrl_Text::TextOutA(float,int,int,struct HFONT__ *,unsigned long)
    */

void __thiscall
CGraphicCtrl_Text::TextOutA
          (CGraphicCtrl_Text *this,float param_1,int param_2,int param_3,HFONT__ *param_4,
          ulong param_5)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  ulong in_stack_00000018;
  CGraphicCtrl_Text *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x7520  454  ?TextOutA@CGraphicCtrl_Text@@QAEXMHHPAUHFONT__@@K@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_60016629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  local_4 = 0;
  if (0.0 <= param_1) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10,
               (char *)&local_10);
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_00,(char *)&local_10);
  }
  TextOutA(this,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c,param_3,
           (int)param_4,(HFONT__ *)param_5,in_stack_00000018);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = local_8;
  return;
}



/* ---- TextOutA @ 600075e0 size=164 ---- */

/* public: void __thiscall CGraphicCtrl_Text::TextOutA(int,int,int,struct HFONT__ *,unsigned long)
    */

void __thiscall
CGraphicCtrl_Text::TextOutA
          (CGraphicCtrl_Text *this,int param_1,int param_2,int param_3,HFONT__ *param_4,
          ulong param_5)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  ulong in_stack_00000018;
  CGraphicCtrl_Text *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x75e0  453  ?TextOutA@CGraphicCtrl_Text@@QAEXHHHPAUHFONT__@@K@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_60016629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  local_4 = 0;
  if (param_1 < 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_00,(char *)&local_10);
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10,
               (char *)&local_10);
  }
  TextOutA(this,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c,param_3,
           (int)param_4,(HFONT__ *)param_5,in_stack_00000018);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = local_8;
  return;
}



/* ---- DrawTextA @ 60007690 size=570 ---- */

/* public: void __thiscall CGraphicCtrl_Text::DrawTextA(class ATL::CStringT<char,class
   StrTraitMFC_DLL<char,class ATL::ChTraitsCRT<char> > > &,class CRect *,struct HFONT__ *,unsigned
   long,unsigned int) */

void __thiscall
CGraphicCtrl_Text::DrawTextA
          (CGraphicCtrl_Text *this,
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,CRect *param_2,
          HFONT__ *param_3,ulong param_4,uint param_5)

{
  int *this_00;
  CHgDIB *this_01;
  int cchText;
  char *lpchText;
  int iVar1;
  int iVar2;
  HDC hdc;
  HBITMAP__ *h;
  HGDIOBJ pvVar3;
  undefined4 unaff_EBX;
  code *pcVar4;
  int iVar5;
  int iVar6;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0x7690  178
                       ?DrawTextA@CGraphicCtrl_Text@@QAEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCRect@@PAUHFONT__@@KI@Z
                        */
  if ((this->CGraphicCtrl_data).offset_0x4 != 0) {
    cchText = ATL::CSimpleStringT<char,1>::GetLength((CSimpleStringT<char,1> *)param_1);
    lpchText = ATL::CSimpleStringT<char,1>::GetBuffer((CSimpleStringT<char,1> *)param_1,cchText);
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = 0;
    local_20.bottom = 0;
    if (param_2 == (CRect *)0x0) {
      local_30.left = (this->CGraphicCtrl_data).offset_0xd0;
      local_30.top = (this->CGraphicCtrl_data).offset_0xd4;
      SetRect(&local_20,0,0,(this->CGraphicCtrl_data).offset_0xd0,local_30.top);
    }
    else {
      CopyRect(&local_30,(RECT *)param_2);
      local_20.left = local_30.left;
      local_20.top = local_30.top;
      local_20.right = local_30.right;
      local_20.bottom = local_30.bottom;
    }
    iVar6 = 0;
    this_00 = &(this->CGraphicCtrl_Text_data).offset_0xc;
    iVar5 = 0x100;
    iVar1 = CHgImageBase::GetHeight((CHgImageBase *)this_00);
    iVar2 = CHgImageBase::GetWidth((CHgImageBase *)this_00);
    CHgImage::Draw((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,(CHgImageBase *)this_00,0,0
                   ,iVar2,iVar1,iVar5,iVar6);
    this_01 = (CHgDIB *)(this->CGraphicCtrl_data).offset_0x20;
    hdc = CreateCompatibleDC(CGraphicCtrl::s_hDCBackBuf);
    h = CHgDIB::GetHBitmap(this_01);
    pcVar4 = SelectObject_exref;
    local_30.left = (LONG)SelectObject(hdc,h);
    SetBkMode(hdc,1);
    pvVar3 = SelectObject(hdc,param_3);
    iVar1 = (this->CGraphicCtrl_Text_data).offset_0x4;
    if (iVar1 == 1) {
      SetTextColor(hdc,(this->CGraphicCtrl_Text_data).offset_0x70);
      iVar1 = -1;
      do {
        iVar2 = -1;
        do {
          local_10.left = local_20.left + iVar1;
          local_10.top = local_20.top + iVar2;
          local_10.right = local_20.right + iVar1;
          local_10.bottom = local_20.bottom + iVar2;
          ::DrawTextA(hdc,lpchText,cchText,&local_10,param_5);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 2);
      pcVar4 = SelectObject_exref;
    }
    else if (iVar1 == 2) {
      local_10.bottom = (this->CGraphicCtrl_Text_data).offset_0x8;
      local_10.left = local_10.bottom + local_20.left;
      local_10.top = local_10.bottom + local_20.top;
      local_10.right = local_10.bottom + local_20.right;
      local_10.bottom = local_10.bottom + local_20.bottom;
      SetTextColor(hdc,(this->CGraphicCtrl_Text_data).offset_0x70);
      ::DrawTextA(hdc,lpchText,cchText,&local_10,param_5);
    }
    SetTextColor(hdc,param_4);
    ::DrawTextA(hdc,lpchText,cchText,&local_20,param_5);
    (*pcVar4)(hdc,pvVar3);
    (*pcVar4)(hdc,unaff_EBX);
    if (hdc != (HDC)0x0) {
      DeleteDC(hdc);
    }
    (this->CGraphicCtrl_Text_data).offset_0x0 = 1;
  }
  return;
}



/* ---- DrawTextA @ 600078d0 size=180 ---- */

/* public: void __thiscall CGraphicCtrl_Text::DrawTextA(float,class CRect *,struct HFONT__
   *,unsigned long,unsigned int) */

void __thiscall
CGraphicCtrl_Text::DrawTextA
          (CGraphicCtrl_Text *this,float param_1,CRect *param_2,HFONT__ *param_3,ulong param_4,
          uint param_5)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  uint in_stack_00000018;
  CGraphicCtrl_Text *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x78d0  180  ?DrawTextA@CGraphicCtrl_Text@@QAEXMPAVCRect@@PAUHFONT__@@KI@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_60016629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  local_4 = 0;
  if (0.0 <= param_1) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10,
               (char *)&local_10);
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_00,(char *)&local_10);
  }
  DrawTextA(this,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c,
            (CRect *)param_3,(HFONT__ *)param_4,param_5,in_stack_00000018);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = local_8;
  return;
}



/* ---- DrawTextA @ 60007990 size=164 ---- */

/* public: void __thiscall CGraphicCtrl_Text::DrawTextA(int,class CRect *,struct HFONT__ *,unsigned
   long,unsigned int) */

void __thiscall
CGraphicCtrl_Text::DrawTextA
          (CGraphicCtrl_Text *this,int param_1,CRect *param_2,HFONT__ *param_3,ulong param_4,
          uint param_5)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  uint in_stack_00000018;
  CGraphicCtrl_Text *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x7990  179  ?DrawTextA@CGraphicCtrl_Text@@QAEXHPAVCRect@@PAUHFONT__@@KI@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_60016629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  local_4 = 0;
  if (param_1 < 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_00,(char *)&local_10);
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10,
               (char *)&local_10);
  }
  DrawTextA(this,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c,
            (CRect *)param_3,(HFONT__ *)param_4,param_5,in_stack_00000018);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = local_8;
  return;
}



/* ---- CreateBuffer @ 60007a40 size=205 ---- */

/* public: void __thiscall CGraphicCtrl_Text::CreateBuffer(int,int,struct HFONT__ *,unsigned long)
    */

void __thiscall
CGraphicCtrl_Text::CreateBuffer
          (CGraphicCtrl_Text *this,int param_1,int param_2,HFONT__ *param_3,ulong param_4)

{
  int *piVar1;
  HDC__ *hdc;
  HGDIOBJ h;
  int iVar2;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  CSize aCStack_3e [6];
  tagTEXTMETRICA local_38;
  
                    /* 0x7a40  129  ?CreateBuffer@CGraphicCtrl_Text@@QAEXHHPAUHFONT__@@K@Z */
  hdc = CGraphicCtrl::s_hDCBackBuf;
  if ((this->CGraphicCtrl_data).offset_0x4 != 0) {
    h = SelectObject(CGraphicCtrl::s_hDCBackBuf,param_3);
    GetTextMetricsA(hdc,&local_38);
    SelectObject(hdc,h);
    piVar1 = (int *)(this->CGraphicCtrl_data).offset_0x20;
    (**(code **)(*piVar1 + 0x14))();
    uVar3 = FUN_60015470(local_38.tmAveCharWidth * param_1,extraout_EDX);
    iVar2 = (int)uVar3;
    (**(code **)(*piVar1 + 0xc))(iVar2,param_2);
    piVar1 = &(this->CGraphicCtrl_Text_data).offset_0xc;
    (**(code **)((this->CGraphicCtrl_Text_data).offset_0xc + 0x14))();
    (**(code **)(*piVar1 + 0x10))(iVar2,param_2);
    CHgImage::FillRect((CHgImage *)piVar1,0,0,iVar2,param_2,0xff0000,0x100,0);
    CGraphicCtrl::SetSize((CGraphicCtrl *)this,aCStack_3e + -0x16);
  }
  return;
}



/* ---- CHgDummyCtrl @ 60007b10 size=18 ---- */

/* public: __thiscall CHgDummyCtrl::CHgDummyCtrl(void) */

CHgDummyCtrl * __thiscall CHgDummyCtrl::CHgDummyCtrl(CHgDummyCtrl *this)

{
                    /* 0x7b10  24  ??0CHgDummyCtrl@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- ~CHgDummyCtrl @ 60007b30 size=5 ---- */

/* public: virtual __thiscall CHgDummyCtrl::~CHgDummyCtrl(void) */

void __thiscall CHgDummyCtrl::~CHgDummyCtrl(CHgDummyCtrl *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_e [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x7b30  58  ??1CHgDummyCtrl@@UAE@XZ */
  puStack_8 = &LAB_6001684e;
  pvStack_c = ExceptionList;
  uVar5 = DAT_600259a8 ^ (uint)(auStack_e + -0x12);
  ExceptionList = &pvStack_c;
  this->vftablePtr = (CHgDummyCtrl_vftable *)&CGraphicCtrl::_vftable_;
  uStack_4 = 0;
  if (((this->CGraphicCtrl_data).offset_0x2 == '\0') &&
     (piVar1 = (int *)(this->CGraphicCtrl_data).offset_0x20, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x14))(uVar5);
    puVar2 = (undefined4 *)(this->CGraphicCtrl_data).offset_0x20;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    (this->CGraphicCtrl_data).offset_0x20 = 0;
  }
  iVar6 = (this->CGraphicCtrl_data).offset_0xec;
  while (iVar6 != 0) {
    piVar1 = (this->CGraphicCtrl_data).offset_0xe4;
    if (piVar1 == (int *)0x0) goto LAB_6000bc4a;
    puVar2 = (undefined4 *)*piVar1;
    piVar3 = (int *)piVar1[2];
    (this->CGraphicCtrl_data).offset_0xe4 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      (this->CGraphicCtrl_data).offset_0xe8 = 0;
    }
    else {
      puVar2[1] = 0;
    }
    *piVar1 = (this->CGraphicCtrl_data).offset_0xf0;
    puVar2 = &(this->CGraphicCtrl_data).offset_0xec;
    *puVar2 = *puVar2 + -1;
    (this->CGraphicCtrl_data).offset_0xf0 = piVar1;
    if (*puVar2 == 0) {
      for (puVar2 = (this->CGraphicCtrl_data).offset_0xe4; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
      }
      (this->CGraphicCtrl_data).offset_0xec = 0;
      (this->CGraphicCtrl_data).offset_0xf0 = 0;
      (this->CGraphicCtrl_data).offset_0xe8 = 0;
      (this->CGraphicCtrl_data).offset_0xe4 = (undefined4 *)0x0;
      CPlex::FreeDataChain((this->CGraphicCtrl_data).offset_0xf4);
      (this->CGraphicCtrl_data).offset_0xf4 = (CPlex *)0x0;
    }
    *(undefined1 *)((int)piVar3 + 5) = 0;
    if (piVar3[8] == 0) {
      pcVar4 = (code *)((undefined4 *)*piVar3)[0xb];
      piVar3[0x37] = 0;
      (*pcVar4)(0xff05);
      UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
                (RECT *)(piVar3 + 0x40));
    }
    else {
      (**(code **)*piVar3)(1);
    }
    iVar6 = (this->CGraphicCtrl_data).offset_0xec;
  }
  if ((this->CGraphicCtrl_data).offset_0x1 == '\x01') {
    iVar6 = (this->CGraphicCtrl_data).offset_0xd8;
    (this->CGraphicCtrl_data).offset_0x1 = 0;
    for (piVar1 = *(int **)(iVar6 + 0xe8); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if (piVar1 + 2 == (int *)0x0) {
LAB_6000bc4a:
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      if ((CHgDummyCtrl *)piVar1[2] == this) {
        if (piVar1 != (int *)0x0) {
          RemoveAt((void *)(iVar6 + 0xe4),piVar1);
        }
        break;
      }
    }
  }
  iVar6 = CGraphicCtrl::IsShowing((CGraphicCtrl *)this);
  if (iVar6 != 0) {
    UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
              (RECT *)&(this->CGraphicCtrl_data).field_0xfc);
  }
  puVar2 = (this->CGraphicCtrl_data).offset_0xe4;
  uStack_4 = 0xffffffff;
  (this->CGraphicCtrl_data).offset_0xe0 =
       &CList<CGraphicCtrl*,CGraphicCtrl*>::vftable.GetRuntimeClass;
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
  }
  (this->CGraphicCtrl_data).offset_0xec = 0;
  (this->CGraphicCtrl_data).offset_0xf0 = 0;
  (this->CGraphicCtrl_data).offset_0xe8 = 0;
  (this->CGraphicCtrl_data).offset_0xe4 = (undefined4 *)0x0;
  CPlex::FreeDataChain((this->CGraphicCtrl_data).offset_0xf4);
  (this->CGraphicCtrl_data).offset_0xf4 = (CPlex *)0x0;
  ExceptionList = pvStack_c;
  return;
}



/* ---- vfunction1 @ 60007b40 size=85 ---- */

CGraphicCtrl * __thiscall CHgDummyCtrl::vfunction1(CHgDummyCtrl *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_data.offset_0x160;
  _eh_vector_destructor_iterator_(this,0x168,this[-1].CGraphicCtrl_data.offset_0x160,~CHgDummyCtrl);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl *)puVar1;
}



/* ---- SetWantDblClk @ 60007ba0 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_PushBtn::SetWantDblClk(int) */

void __thiscall CGraphicCtrl_PushBtn::SetWantDblClk(CGraphicCtrl_PushBtn *this,int param_1)

{
                    /* 0x7ba0  449  ?SetWantDblClk@CGraphicCtrl_PushBtn@@QAEXH@Z */
  (this->CGraphicCtrl_PushBtn_data).offset_0x34 = param_1;
  return;
}



/* ---- IsWantDblClk @ 60007bb0 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_PushBtn::IsWantDblClk(void) */

int __thiscall CGraphicCtrl_PushBtn::IsWantDblClk(CGraphicCtrl_PushBtn *this)

{
                    /* 0x7bb0  282  ?IsWantDblClk@CGraphicCtrl_PushBtn@@QAEHXZ */
  return (this->CGraphicCtrl_PushBtn_data).offset_0x34;
}



/* ---- IsDblClk @ 60007bc0 size=27 ---- */

/* public: int __thiscall CGraphicCtrl_PushBtn::IsDblClk(void) */

int __thiscall CGraphicCtrl_PushBtn::IsDblClk(CGraphicCtrl_PushBtn *this)

{
                    /* 0x7bc0  272  ?IsDblClk@CGraphicCtrl_PushBtn@@QAEHXZ */
  if (((this->CGraphicCtrl_PushBtn_data).offset_0x34 == 0) || (CGraphicCtrl::s_bLButtonDblClk == 0))
  {
    return 0;
  }
  return 1;
}



/* ---- EnableButton @ 60007be0 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_PushBtn::EnableButton(int) */

void __thiscall CGraphicCtrl_PushBtn::EnableButton(CGraphicCtrl_PushBtn *this,int param_1)

{
                    /* 0x7be0  181  ?EnableButton@CGraphicCtrl_PushBtn@@QAEXH@Z */
  (this->CGraphicCtrl_PushBtn_data).offset_0x28 = param_1;
  return;
}



/* ---- IsWindowEnabled @ 60007bf0 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_PushBtn::IsWindowEnabled(void) */

int __thiscall CGraphicCtrl_PushBtn::IsWindowEnabled(CGraphicCtrl_PushBtn *this)

{
                    /* 0x7bf0  283  ?IsWindowEnabled@CGraphicCtrl_PushBtn@@QAEHXZ */
  return (this->CGraphicCtrl_PushBtn_data).offset_0x28;
}



/* ---- CGraphicCtrl_PushBtn::_AllocSelf @ 60007c00 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_PushBtn::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn___AllocSelf(CGraphicCtrl_PushBtn *this)

{
  CGraphicCtrl_PushBtn *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c00  466  ?_AllocSelf@CGraphicCtrl_PushBtn@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1a4);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_PushBtn *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CGraphicCtrl_PushBtn(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- SetPageSize @ 60007c70 size=15 ---- */

/* public: void __thiscall CGraphicCtrl_ScrollBar::SetPageSize(unsigned short) */

void __thiscall CGraphicCtrl_ScrollBar::SetPageSize(CGraphicCtrl_ScrollBar *this,ushort param_1)

{
                    /* 0x7c70  414  ?SetPageSize@CGraphicCtrl_ScrollBar@@QAEXG@Z */
  (this->CGraphicCtrl_ScrollBar_data).offset_0x8 = param_1;
  return;
}



/* ---- SetCurrentPos @ 60007c80 size=15 ---- */

/* public: void __thiscall CGraphicCtrl_ScrollBar::SetCurrentPos(unsigned short) */

void __thiscall CGraphicCtrl_ScrollBar::SetCurrentPos(CGraphicCtrl_ScrollBar *this,ushort param_1)

{
                    /* 0x7c80  388  ?SetCurrentPos@CGraphicCtrl_ScrollBar@@QAEXG@Z */
  (this->CGraphicCtrl_ScrollBar_data).offset_0xa = param_1;
  return;
}



/* ---- CGraphicCtrl_ScrollBar::_AllocSelf @ 60007c90 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_ScrollBar::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar___AllocSelf(CGraphicCtrl_ScrollBar *this)

{
  CGraphicCtrl_ScrollBar *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7c90  471  ?_AllocSelf@CGraphicCtrl_ScrollBar@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x18c);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_ScrollBar *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CGraphicCtrl_ScrollBar(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- __CGraphicCtrl_ScrollBar_Up @ 60007d00 size=18 ---- */

/* public: __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::__CGraphicCtrl_ScrollBar_Up(void) */

__CGraphicCtrl_ScrollBar_Up * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::__CGraphicCtrl_ScrollBar_Up
          (__CGraphicCtrl_ScrollBar_Up *this)

{
                    /* 0x7d00  31  ??0__CGraphicCtrl_ScrollBar_Up@CGraphicCtrl_ScrollBar@@QAE@XZ */
  CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn((CGraphicCtrl_PushBtn *)this);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- __CGraphicCtrl_ScrollBar_Dn @ 60007d20 size=18 ---- */

/* public: __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::__CGraphicCtrl_ScrollBar_Dn(void) */

__CGraphicCtrl_ScrollBar_Dn * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::__CGraphicCtrl_ScrollBar_Dn
          (__CGraphicCtrl_ScrollBar_Dn *this)

{
                    /* 0x7d20  30  ??0__CGraphicCtrl_ScrollBar_Dn@CGraphicCtrl_ScrollBar@@QAE@XZ */
  CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn((CGraphicCtrl_PushBtn *)this);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- ~__CGraphicCtrl_ScrollBar_Bar @ 60007d40 size=5 ---- */

/* public: virtual __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::~__CGraphicCtrl_ScrollBar_Bar(void) */

void __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::~__CGraphicCtrl_ScrollBar_Bar
          (__CGraphicCtrl_ScrollBar_Bar *this)

{
  uint uVar1;
  CGraphicCtrl_PushBtn_data *pCVar2;
  int iVar3;
  undefined1 auStackY_a4 [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x7d40  60  ??1__CGraphicCtrl_ScrollBar_Bar@CGraphicCtrl_ScrollBar@@UAE@XZ
                       0x7d40  61  ??1__CGraphicCtrl_ScrollBar_Dn@CGraphicCtrl_ScrollBar@@UAE@XZ
                       0x7d40  62  ??1__CGraphicCtrl_ScrollBar_Up@CGraphicCtrl_ScrollBar@@UAE@XZ
                       0x7d40  63  ??1__CGraphicCtrl_SlideBar_Thumb@CGraphicCtrl_SlideBar@@UAE@XZ */
  puStack_8 = &LAB_60016b28;
  pvStack_c = ExceptionList;
  uVar1 = DAT_600259a8 ^ (uint)(auStackY_a4 + 0x88);
  ExceptionList = &pvStack_c;
  this->vftablePtr = (__CGraphicCtrl_ScrollBar_Bar_vftable *)&CGraphicCtrl_PushBtn::_vftable_;
  uStack_4 = 0;
  if ((this->CGraphicCtrl_data).offset_0x2 == '\0') {
    pCVar2 = &this->CGraphicCtrl_PushBtn_data;
    iVar3 = 4;
    do {
      if (pCVar2->offset_0x0 != (int *)0x0) {
        (**(code **)(*pCVar2->offset_0x0 + 0x14))(uVar1);
        if (pCVar2->offset_0x0 != (int *)0x0) {
          (**(code **)*pCVar2->offset_0x0)(1);
        }
        pCVar2->offset_0x0 = (int *)0x0;
      }
      pCVar2 = (CGraphicCtrl_PushBtn_data *)&pCVar2->offset_0x4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uStack_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = pvStack_c;
  return;
}



/* ---- vfunction1 @ 60007d50 size=85 ---- */

CGraphicCtrl_PushBtn * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::vfunction1
          (__CGraphicCtrl_ScrollBar_Dn *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
    CGraphicCtrl_PushBtn::~CGraphicCtrl_PushBtn((CGraphicCtrl_PushBtn *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_PushBtn *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_PushBtn_data.offset_0x38;
  _eh_vector_destructor_iterator_
            (this,0x1a4,*(int *)&this[-1].CGraphicCtrl_PushBtn_data.offset_0x38,
             __CGraphicCtrl_ScrollBar_Bar::~__CGraphicCtrl_ScrollBar_Bar);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_PushBtn *)puVar1;
}



/* ---- vfunction1 @ 60007db0 size=85 ---- */

CGraphicCtrl_PushBtn * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::vfunction1
          (__CGraphicCtrl_ScrollBar_Bar *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    CGraphicCtrl_PushBtn::~CGraphicCtrl_PushBtn((CGraphicCtrl_PushBtn *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_PushBtn *)this;
  }
  puVar1 = &this[-1].__CGraphicCtrl_ScrollBar_Bar_data.offset_0x14;
  _eh_vector_destructor_iterator_
            (this,0x1bc,this[-1].__CGraphicCtrl_ScrollBar_Bar_data.offset_0x14,
             ~__CGraphicCtrl_ScrollBar_Bar);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_PushBtn *)puVar1;
}



/* ---- SetFont @ 60007e10 size=30 ---- */

/* public: void __thiscall CGraphicCtrl_TextBox::SetFont(class CFont *) */

void __thiscall CGraphicCtrl_TextBox::SetFont(CGraphicCtrl_TextBox *this,CFont *param_1)

{
                    /* 0x7e10  404  ?SetFont@CGraphicCtrl_TextBox@@QAEXPAVCFont@@@Z */
  *(CFont **)&this[0x17].CGraphicCtrl_data.field_0x110 = param_1;
  SelectObject(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,*(HGDIOBJ *)(param_1 + 4));
  return;
}



/* ---- ReserveDraw @ 60007e30 size=8 ---- */

/* public: void __thiscall CGraphicCtrl_TextBox::ReserveDraw(void) */

void __thiscall CGraphicCtrl_TextBox::ReserveDraw(CGraphicCtrl_TextBox *this)

{
                    /* 0x7e30  375  ?ReserveDraw@CGraphicCtrl_TextBox@@QAEXXZ */
  this[0x17].CGraphicCtrl_data.field_0x10c = 1;
  return;
}



/* ---- CGraphicCtrl_TextBox::OnSelfNotice @ 60007e40 size=41 ---- */

/* public: virtual void __thiscall CGraphicCtrl_TextBox::OnSelfNotice(unsigned short) */

void __thiscall
CGraphicCtrl_TextBox::CGraphicCtrl_TextBox__OnSelfNotice(CGraphicCtrl_TextBox *this,ushort param_1)

{
                    /* 0x7e40  335  ?OnSelfNotice@CGraphicCtrl_TextBox@@UAEXG@Z */
  if (param_1 == 0xff08) {
    this[0x17].CGraphicCtrl_data.offset_0x124 =
         (uint)*(ushort *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x172);
    this[0x17].CGraphicCtrl_data.field_0x10c = 1;
  }
  return;
}



/* ---- CHgDummyCtrl::_AllocSelf @ 60007e70 size=95 ---- */

/* public: virtual void * __thiscall CHgDummyCtrl::_AllocSelf(void) */

void * __thiscall CHgDummyCtrl::CHgDummyCtrl___AllocSelf(CHgDummyCtrl *this)

{
  CList<CGraphicCtrl*,CGraphicCtrl*> *this_00;
  CList<CGraphicCtrl*,CGraphicCtrl*> *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e70  479  ?_AllocSelf@CHgDummyCtrl@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x168);
  local_4 = 0;
  pCVar1 = (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0;
  if (this_00 != (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0) {
    CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(this_00);
    this_00->vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)&_vftable_;
    pCVar1 = this_00;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::_AllocSelf @ 60007ed0 size=95 ---- */

/* public: virtual void * __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::
CGraphicCtrl_ScrollBar____CGraphicCtrl_ScrollBar_Up___AllocSelf(__CGraphicCtrl_ScrollBar_Up *this)

{
  CGraphicCtrl_PushBtn *this_00;
  CGraphicCtrl_PushBtn *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7ed0  483
                       ?_AllocSelf@__CGraphicCtrl_ScrollBar_Up@CGraphicCtrl_ScrollBar@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x1a4);
  local_4 = 0;
  pCVar1 = (CGraphicCtrl_PushBtn *)0x0;
  if (this_00 != (CGraphicCtrl_PushBtn *)0x0) {
    CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(this_00);
    this_00->vftablePtr = (CGraphicCtrl_PushBtn_vftable *)&_vftable_;
    pCVar1 = this_00;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::_AllocSelf @ 60007f30 size=95 ---- */

/* public: virtual void * __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::
CGraphicCtrl_ScrollBar____CGraphicCtrl_ScrollBar_Dn___AllocSelf(__CGraphicCtrl_ScrollBar_Dn *this)

{
  CGraphicCtrl_PushBtn *this_00;
  CGraphicCtrl_PushBtn *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7f30  482
                       ?_AllocSelf@__CGraphicCtrl_ScrollBar_Dn@CGraphicCtrl_ScrollBar@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x1a4);
  local_4 = 0;
  pCVar1 = (CGraphicCtrl_PushBtn *)0x0;
  if (this_00 != (CGraphicCtrl_PushBtn *)0x0) {
    CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(this_00);
    this_00->vftablePtr = (CGraphicCtrl_PushBtn_vftable *)&_vftable_;
    pCVar1 = this_00;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- __CGraphicCtrl_ScrollBar_Bar @ 60007f90 size=69 ---- */

/* public: __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::__CGraphicCtrl_ScrollBar_Bar(void) */

__CGraphicCtrl_ScrollBar_Bar * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::__CGraphicCtrl_ScrollBar_Bar
          (__CGraphicCtrl_ScrollBar_Bar *this)

{
                    /* 0x7f90  29  ??0__CGraphicCtrl_ScrollBar_Bar@CGraphicCtrl_ScrollBar@@QAE@XZ */
  CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn((CGraphicCtrl_PushBtn *)this);
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x0 = 0;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x8 = 0;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0xc = 0;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x10 = 0;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x14 = 0;
  this->vftablePtr = &_vftable_;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x2 = 0;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x4 = 0;
  return this;
}



/* ---- CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::_AllocSelf @ 60007fe0 size=103 ---- */

/* public: virtual void * __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::
CGraphicCtrl_ScrollBar____CGraphicCtrl_ScrollBar_Bar___AllocSelf(__CGraphicCtrl_ScrollBar_Bar *this)

{
  __CGraphicCtrl_ScrollBar_Bar *p_Var1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7fe0  481
                       ?_AllocSelf@__CGraphicCtrl_ScrollBar_Bar@CGraphicCtrl_ScrollBar@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  p_Var1 = operator_new(0x1bc);
  local_4 = 0;
  if (p_Var1 == (__CGraphicCtrl_ScrollBar_Bar *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  p_Var1 = __CGraphicCtrl_ScrollBar_Bar(p_Var1);
  ExceptionList = local_c;
  return p_Var1;
}



/* ---- CFont @ 60008050 size=160 ---- */

/* public: __thiscall CGraphicCtrl_TextBox::CGraphicCtrl_TextBox(void) */

CFont * __thiscall CFont::CFont(CFont *this)

{
  int iVar1;
  CFont *pCVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8050  15  ??0CGraphicCtrl_TextBox@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016696;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: CGraphicCtrl_TextBox::CGraphicCtrl_TextBox */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  this->vftablePtr = (CFont_vftable *)&CGraphicCtrl_TextBox::_vftable_;
  this[0x85d].vftablePtr = (CFont_vftable *)0x0;
  ((CFont_vftable *)(this + 0x85c))->GetRuntimeClass = (GetRuntimeClass *)&vftable;
  local_4 = 1;
  CHgDIB::CHgDIB((CHgDIB *)(this + 0x865));
  this[0x860].vftablePtr = (CFont_vftable *)0x0;
  this[0x861].vftablePtr = (CFont_vftable *)0x0;
  *(undefined1 *)&this[0x85a].vftablePtr = 0;
  this[0x862].vftablePtr = (CFont_vftable *)0x0;
  pCVar2 = this + 0x881;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2->vftablePtr = (CFont_vftable *)0x0;
    pCVar2 = pCVar2 + 1;
  }
  this[0x85b].vftablePtr = (CFont_vftable *)(this + 0x85c);
  ExceptionList = local_c;
  return this;
}



/* ---- InitTextBox @ 600080f0 size=664 ---- */

/* WARNING: Exceeded maximum restarts with more pending */
/* public: int __thiscall CGraphicCtrl_TextBox::InitTextBox(int,int,int,int,struct
   GCTB_SBINFO,unsigned long) */

int __thiscall
CGraphicCtrl_TextBox::InitTextBox
          (CGraphicCtrl_TextBox *this,int *param_1,uint param_2,int *param_3,int param_4,
          uint param_6,char param_7)

{
  undefined4 *this_00;
  CGraphicCtrl *this_01;
  int *piVar1;
  code *pcVar2;
  int iVar3;
  CGraphicCtrl_ScrollBar *pCVar4;
  HDC pHVar5;
  CDC *pCVar6;
  HBITMAP__ *h;
  HGDIOBJ pvVar7;
  char *pszFaceName;
  HFONT pHVar8;
  int iVar9;
  undefined4 in_stack_00000c18;
  char acStackY_7ffffffe [2147483542];
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x80f0  261  ?InitTextBox@CGraphicCtrl_TextBox@@QAEHHHHHUGCTB_SBINFO@@K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_600166d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = (*this->vftablePtr->CreateGraphicCtrl)(this,param_1,param_2,0xff0000,0,0);
  iVar9 = 0;
  if (iVar3 != 0) {
    this[0x17].CGraphicCtrl_data.offset_0x130 = param_1;
    this[0x17].CGraphicCtrl_data.offset_0x134 = param_2;
    this[0x17].CGraphicCtrl_data.offset_0x11c = (char)in_stack_00000c18;
    this[0x17].CGraphicCtrl_data.offset_0x11d = (char)((uint)in_stack_00000c18 >> 8);
    this[0x17].CGraphicCtrl_data.offset_0x11e = (char)((uint)in_stack_00000c18 >> 0x10);
    this[0x17].CGraphicCtrl_data.offset_0x11f = (char)((uint)in_stack_00000c18 >> 0x18);
    iVar9 = 1;
    if (0 < (int)((int)param_1 + param_2)) {
      iVar9 = (int)param_1 + param_2;
    }
    this_00 = &this[0x17].CGraphicCtrl_data.offset_0x138;
    this[0x17].CGraphicCtrl_data.offset_0x12c = (int)param_2 / iVar9;
    (**(code **)(*this_00 + 0x10))();
    pCVar4 = operator_new(0x18c);
    local_c = (void *)0x0;
    if (pCVar4 == (CGraphicCtrl_ScrollBar *)0x0) {
      pCVar4 = (CGraphicCtrl_ScrollBar *)0x0;
    }
    else {
      pCVar4 = CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar(pCVar4);
    }
    local_c = (void *)0xffffffff;
    this[0x18].CGraphicCtrl_data.offset_0x140 = pCVar4;
    if (param_3 == (int *)0xffffffff) {
      param_3 = param_1;
    }
    if (param_4 == -1) {
      param_4 = 0;
    }
    if (param_6 == 0xffffffff) {
      param_6 = param_2;
    }
    CGraphicCtrl_ScrollBar::InitScrollBar
              (pCVar4,&param_7,(char *)((int)register0x00000010 + 0x418),
               (char *)((int)register0x00000010 + 0x818),(ushort)param_6);
    CGraphicCtrl::AddChild
              ((CGraphicCtrl *)this,(CGraphicCtrl *)this[0x18].CGraphicCtrl_data.offset_0x140,'\0',
               (CGraphicCtrl *)0x0);
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x28),
               (float)(int)param_3,(float)param_4);
    this_01 = (CGraphicCtrl *)this[0x18].CGraphicCtrl_data.offset_0x140;
    if ((this_01->CGraphicCtrl_data).offset_0xc != 1) {
      CGraphicCtrl::__AdjustShow(this_01,1);
      (this_01->CGraphicCtrl_data).offset_0xc = 1;
    }
    piVar1 = (int *)this[0x18].CGraphicCtrl_data.offset_0x140;
    if (piVar1[6] != 1) {
      pcVar2 = *(code **)(*piVar1 + 0x2c);
      piVar1[6] = 1;
      piVar1[0x49] = 0;
      (*pcVar2)();
    }
    *(undefined2 *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x170) =
         *(undefined2 *)&this[0x17].CGraphicCtrl_data.offset_0x12c;
    CGraphicCtrl_ScrollBar::SetCurrentSize
              ((CGraphicCtrl_ScrollBar *)this[0x18].CGraphicCtrl_data.offset_0x140,0);
    pHVar5 = GetDC(*(HWND *)(CGraphicCtrl::s_pGameWnd + 0x20));
    pCVar6 = CDC::FromHandle(pHVar5);
    if (pCVar6 != (CDC *)0x0) {
      pHVar5 = CreateCompatibleDC(*(HDC *)(pCVar6 + 4));
      *(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34 = pHVar5;
      ReleaseDC(*(HWND *)(CGraphicCtrl::s_pGameWnd + 0x20),*(HDC *)(pCVar6 + 4));
      h = CHgDIB::GetHBitmap((CHgDIB *)this_00);
      pvVar7 = SelectObject(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,h);
      *(HGDIOBJ *)&this[0x18].CGraphicCtrl_data.field_0x38 = pvVar7;
    }
    LoadStr((int)(acStackY_7ffffffe + 0x7fffffe2));
    local_c = (void *)0x1;
    pszFaceName = ATL::CSimpleStringT<char,1>::operator_char_const_
                            ((CSimpleStringT<char,1> *)(acStackY_7ffffffe + 0x7fffffe2));
    pHVar8 = CreateFontA(0xc,6,0,0,400,0,0,0,1,0,0,3,0,pszFaceName);
    CGdiObject::Attach((CGdiObject *)&this[0x17].CGraphicCtrl_data.field_0x114,pHVar8);
    pvVar7 = SelectObject(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,
                          *(HGDIOBJ *)(*(int *)&this[0x17].CGraphicCtrl_data.field_0x110 + 4));
    *(HGDIOBJ *)&this[0x18].CGraphicCtrl_data.field_0x3c = pvVar7;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               (acStackY_7ffffffe + 0x7fffffe2));
    iVar9 = 1;
  }
  ExceptionList = uStack_14;
  return iVar9;
}



/* ---- ChangeScrollBar @ 60008390 size=367 ---- */

/* public: void __thiscall CGraphicCtrl_TextBox::ChangeScrollBar(struct GCTB_SBINFO) */

void __thiscall
CGraphicCtrl_TextBox::ChangeScrollBar
          (CGraphicCtrl_TextBox *this,int param_2,int param_3,ushort param_4,char param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  CGraphicCtrl *this_00;
  int *piVar5;
  code *pcVar6;
  CGraphicCtrl_ScrollBar *pCVar7;
  char acStackY_7ffffffe [2147483586];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x8390  126  ?ChangeScrollBar@CGraphicCtrl_TextBox@@QAEXUGCTB_SBINFO@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_600166fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = (undefined4 *)this[0x18].CGraphicCtrl_data.offset_0x140;
  uVar1 = *(ushort *)(puVar4 + 0x5d);
  uVar2 = *(undefined2 *)(puVar4 + 0x5c);
  uVar3 = *(undefined2 *)((int)puVar4 + 0x172);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)();
  }
  pCVar7 = operator_new(0x18c);
  uStack_4 = 0;
  if (pCVar7 == (CGraphicCtrl_ScrollBar *)0x0) {
    pCVar7 = (CGraphicCtrl_ScrollBar *)0x0;
  }
  else {
    pCVar7 = CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar(pCVar7);
  }
  uStack_4 = 0xffffffff;
  this[0x18].CGraphicCtrl_data.offset_0x140 = pCVar7;
  CGraphicCtrl_ScrollBar::InitScrollBar
            (pCVar7,&param_5,(char *)((int)register0x00000010 + 0x410),
             (char *)((int)register0x00000010 + 0x810),param_4);
  CGraphicCtrl::AddChild
            ((CGraphicCtrl *)this,(CGraphicCtrl *)this[0x18].CGraphicCtrl_data.offset_0x140,'\0',
             (CGraphicCtrl *)0x0);
  CGraphicCurve::SetPosForce
            ((CGraphicCurve *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x28),(float)param_2,
             (float)param_3);
  this_00 = (CGraphicCtrl *)this[0x18].CGraphicCtrl_data.offset_0x140;
  if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
    CGraphicCtrl::__AdjustShow(this_00,1);
    (this_00->CGraphicCtrl_data).offset_0xc = 1;
  }
  piVar5 = (int *)this[0x18].CGraphicCtrl_data.offset_0x140;
  if (piVar5[6] != 1) {
    pcVar6 = *(code **)(*piVar5 + 0x2c);
    piVar5[6] = 1;
    piVar5[0x49] = 0;
    (*pcVar6)();
  }
  CGraphicCtrl_ScrollBar::SetCurrentSize
            ((CGraphicCtrl_ScrollBar *)this[0x18].CGraphicCtrl_data.offset_0x140,uVar1);
  *(undefined2 *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x172) = uVar3;
  *(undefined2 *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x170) = uVar2;
  CGraphicCtrl_ScrollBar::RePositionBar
            ((CGraphicCtrl_ScrollBar *)this[0x18].CGraphicCtrl_data.offset_0x140);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60008500 @ 60008500 size=128 ---- */

void __thiscall
FUN_60008500(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)((int)this + 0x10);
  if (*(int **)((int)this + 0x14) < piVar4) {
    _invalid_parameter_noinfo();
  }
  piVar1 = *(int **)((int)this + 4);
  while( true ) {
    piVar2 = *(int **)((int)this + 0x14);
    if (piVar2 < *(int **)((int)this + 0x10)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)((int)this + 4))) {
      _invalid_parameter_noinfo();
    }
    if (piVar4 == piVar2) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(int **)(iVar3 + 0x10) <= piVar4) {
      _invalid_parameter_noinfo();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (param_1,(char *)(*piVar4 + 1));
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(int **)(iVar3 + 0x10) <= piVar4) {
      _invalid_parameter_noinfo();
    }
    piVar4 = piVar4 + 1;
  }
  return;
}



/* ---- RenderText @ 60008580 size=415 ---- */

/* public: void __thiscall CGraphicCtrl_TextBox::RenderText(void) */

void __thiscall CGraphicCtrl_TextBox::RenderText(CGraphicCtrl_TextBox *this)

{
  ulong uVar1;
  int iVar2;
  uint c;
  char *lpString;
  int y;
  int *piVar3;
  undefined1 auStack_3c [3];
  char local_39;
  int local_38;
  int local_34;
  int local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8580  373  ?RenderText@CGraphicCtrl_TextBox@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016729;
  local_c = ExceptionList;
  local_10 = DAT_600259a8 ^ (uint)auStack_3c;
  ExceptionList = &local_c;
  local_34 = (this->CGraphicCtrl_data).offset_0xd0;
  uVar1._0_1_ = this[0x17].CGraphicCtrl_data.offset_0x11c;
  uVar1._1_1_ = this[0x17].CGraphicCtrl_data.offset_0x11d;
  uVar1._2_1_ = this[0x17].CGraphicCtrl_data.offset_0x11e;
  uVar1._3_1_ = this[0x17].CGraphicCtrl_data.offset_0x11f;
  local_30 = (this->CGraphicCtrl_data).offset_0xd4;
  local_39 = '\0';
  CHgImage::FillRect((CHgImage *)&this[0x17].CGraphicCtrl_data.offset_0x138,0,0,
                     (this->CGraphicCtrl_data).offset_0xd0,local_30,uVar1,0x100,0);
  local_34 = this[0x17].CGraphicCtrl_data.offset_0x124;
  iVar2 = this[0x17].CGraphicCtrl_data.offset_0x12c + local_34;
  y = 0;
  local_38 = 0x40;
  if (iVar2 < 0x41) {
    local_38 = iVar2;
  }
  if (local_34 < local_38) {
    piVar3 = (int *)(&this[0x18].CGraphicCtrl_data.field_0x40 + local_34 * 4);
    do {
      if (local_39 != '\0') break;
      if (*piVar3 == 0) {
        local_39 = '\x01';
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
        local_4 = 0;
        FUN_60008500((void *)*piVar3,local_2c);
        SetBkMode(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,1);
        SetTextColor(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,*(COLORREF *)*piVar3);
        c = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::size(local_2c);
        lpString = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                             (local_2c);
        TextOutA(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,0,y,lpString,c);
        y = y + this[0x17].CGraphicCtrl_data.offset_0x134 +
                this[0x17].CGraphicCtrl_data.offset_0x130;
        local_4 = 0xffffffff;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
      }
      local_34 = local_34 + 1;
      piVar3 = piVar3 + 1;
    } while (local_34 < local_38);
  }
  CHgImage::Draw((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,
                 (CHgImageBase *)&this[0x17].CGraphicCtrl_data.offset_0x138,0x100,0);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_3c);
  return;
}



/* ---- CGraphicCtrl_TextBox::Proc @ 60008720 size=33 ---- */

/* public: virtual int __thiscall CGraphicCtrl_TextBox::Proc(unsigned long)
   CGraphicCtrl_TextBox member function inherited by CGraphicCtrl_ChatBox */

int __thiscall
CGraphicCtrl_TextBox::CGraphicCtrl_TextBox__Proc(CGraphicCtrl_TextBox *this,ulong param_1)

{
                    /* 0x8720  360  ?Proc@CGraphicCtrl_TextBox@@UAEHK@Z */
  if (this[0x17].CGraphicCtrl_data.field_0x10c != '\0') {
    RenderText(this);
    this[0x17].CGraphicCtrl_data.field_0x10c = 0;
  }
  return 1;
}



/* ---- GetBufData @ 60008750 size=270 ---- */

/* public: char * __thiscall CGraphicCtrl_TextBox::GetBufData(void) */

char * __thiscall CGraphicCtrl_TextBox::GetBufData(CGraphicCtrl_TextBox *this)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x8750  201  ?GetBufData@CGraphicCtrl_TextBox@@QAEPADXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016772;
  local_c = ExceptionList;
  local_10 = DAT_600259a8 ^ (uint)&local_4c;
  ExceptionList = &local_c;
  *(undefined1 *)&this[1].vftablePtr = 0;
  iVar4 = 0;
  iVar3 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
  local_4 = 0;
  local_4c = 0x3f;
  piVar5 = &this[0x18].CGraphicCtrl_data.offset_0x13c;
  do {
    if (*piVar5 != 0) {
      if (5 < iVar3) break;
      iVar3 = iVar3 + 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48);
      local_4._0_1_ = 1;
      FUN_60008500((void *)*piVar5,local_48);
      pcVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_48)
      ;
      FUN_60001040((char *)((int)&this[1].vftablePtr + iVar4),0x2000 - iVar4,"%s%c%c",(char)pcVar1);
      uVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::size(local_48);
      iVar4 = iVar4 + 2 + uVar2;
      local_4 = (uint)local_4._1_3_ << 8;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48);
    }
    local_4c = local_4c + -1;
    piVar5 = piVar5 + -1;
  } while (-1 < local_4c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  pcVar1 = (char *)__security_check_cookie(local_10 ^ (uint)&local_4c);
  return pcVar1;
}



/* ---- FUN_60008860 @ 60008860 size=221 ---- */

void __fastcall FUN_60008860(int param_1)

{
  int *this;
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_8 [2];
  
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  this = (int *)(param_1 + 4);
  if (*(undefined4 **)(param_1 + 0x14) < puVar6) {
    _invalid_parameter_noinfo();
  }
  piVar1 = (int *)*this;
  while( true ) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    if (puVar2 < *(undefined4 **)(param_1 + 0x10)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != (int *)*this)) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 == puVar2) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (*(undefined4 **)(iVar5 + 0x10) <= puVar6) {
      _invalid_parameter_noinfo();
    }
    operator_delete((void *)*puVar6);
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (*(undefined4 **)(iVar5 + 0x10) <= puVar6) {
      _invalid_parameter_noinfo();
    }
    puVar6 = puVar6 + 1;
  }
  pvVar3 = *(void **)(param_1 + 0x14);
  if (pvVar3 < *(void **)(param_1 + 0x10)) {
    _invalid_parameter_noinfo();
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  iVar5 = *this;
  if (*(uint *)(param_1 + 0x14) < uVar4) {
    _invalid_parameter_noinfo();
  }
  FUN_60004300(this,local_8,*this,uVar4,iVar5,pvVar3);
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  operator_delete((void *)*this);
  return;
}



/* ---- ~CGraphicCtrl_TextBox @ 60008940 size=236 ---- */

/* public: virtual __thiscall CGraphicCtrl_TextBox::~CGraphicCtrl_TextBox(void) */

void __thiscall CGraphicCtrl_TextBox::~CGraphicCtrl_TextBox(CGraphicCtrl_TextBox *this)

{
  undefined1 *this_00;
  void *pvVar1;
  HDC hdc;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x8940  51  ??1CGraphicCtrl_TextBox@@UAE@XZ */
  puStack_8 = &LAB_600167c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 2;
  puVar2 = (undefined4 *)&this[0x18].CGraphicCtrl_data.field_0x40;
  iVar3 = 0x40;
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      FUN_60008860((int)pvVar1);
      operator_delete(pvVar1);
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  hdc = *(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34;
  if (hdc != (HDC)0x0) {
    SelectObject(hdc,*(HGDIOBJ *)&this[0x18].CGraphicCtrl_data.field_0x3c);
    SelectObject(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,
                 *(HGDIOBJ *)&this[0x18].CGraphicCtrl_data.field_0x38);
    DeleteDC(*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34);
  }
  this_00 = &this[0x17].CGraphicCtrl_data.field_0x114;
  CGdiObject::DeleteObject((CGdiObject *)this_00);
  local_4._0_1_ = 1;
  CHgDIB::~CHgDIB((CHgDIB *)&this[0x17].CGraphicCtrl_data.offset_0x138);
  local_4 = (uint)local_4._1_3_ << 8;
                    /* inlined destructor: CFont::~CFont */
  *(CFont_vftable **)this_00 = &CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)this_00);
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60008a30 @ 60008a30 size=101 ---- */

void __thiscall FUN_60008a30(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_8 [2];
  
  puVar1 = *(undefined4 **)((int)this + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0x14) - (int)puVar1 >> 2;
  }
  puVar2 = *(undefined4 **)((int)this + 0x10);
  if ((uint)((int)puVar2 - (int)puVar1 >> 2) < uVar3) {
    *puVar2 = *param_1;
    *(undefined4 **)((int)this + 0x10) = puVar2 + 1;
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_600051c0(this,local_8,*(int *)this,puVar2,param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 60008aa0 size=85 ---- */

CGraphicCtrl_TextBox * __thiscall
CGraphicCtrl_TextBox::scalar_deleting_destructor(CGraphicCtrl_TextBox *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_TextBox(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_TextBox *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_data.offset_0x160;
  _eh_vector_destructor_iterator_
            (this,0x2308,this[-1].CGraphicCtrl_data.offset_0x160,~CGraphicCtrl_TextBox);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_TextBox *)puVar1;
}



/* ---- FUN_60008b00 @ 60008b00 size=100 ---- */

void __thiscall FUN_60008b00(void *this,BYTE param_1,void *param_2)

{
  void *pvVar1;
  BOOL BVar2;
  
  pvVar1 = operator_new(4);
  if (pvVar1 == (void *)0x0) {
    param_2 = (void *)0x0;
    FUN_60008a30((void *)((int)this + 4),&param_2);
    return;
  }
  BVar2 = IsDBCSLeadByte(param_1);
  *(BYTE *)((int)pvVar1 + 1) = param_1;
  *(undefined1 *)((int)pvVar1 + 2) = param_2._0_1_;
  *(bool *)pvVar1 = BVar2 != 0;
  *(undefined1 *)((int)pvVar1 + 3) = 0;
  param_2 = pvVar1;
  FUN_60008a30((void *)((int)this + 4),&param_2);
  return;
}



/* ---- FUN_60008b70 @ 60008b70 size=148 ---- */

void __thiscall FUN_60008b70(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  BOOL BVar4;
  int iVar5;
  
  pcVar2 = param_1;
  iVar5 = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)pcVar3 - (int)(param_1 + 1)) {
    do {
      BVar4 = IsDBCSLeadByte(pcVar2[iVar5]);
      if (BVar4 == 0) {
        cVar1 = pcVar2[iVar5];
        param_1 = operator_new(4);
        if (param_1 == (char *)0x0) {
          param_1 = (char *)0x0;
        }
        else {
          *param_1 = '\0';
          param_1[1] = cVar1;
          param_1[2] = '\0';
          param_1[3] = '\0';
        }
        FUN_60008a30((void *)((int)this + 4),&param_1);
      }
      else {
        FUN_60008b00(this,pcVar2[iVar5],(void *)(uint)(byte)pcVar2[iVar5 + 1]);
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    } while (iVar5 < (int)pcVar3 - (int)(pcVar2 + 1));
  }
  return;
}



/* ---- __AddSingleLine @ 60008c10 size=285 ---- */

/* private: void __thiscall CGraphicCtrl_TextBox::__AddSingleLine(char *,unsigned long) */

void __thiscall
CGraphicCtrl_TextBox::__AddSingleLine(CGraphicCtrl_TextBox *this,char *param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8c10  500  ?__AddSingleLine@CGraphicCtrl_TextBox@@AAEXPADK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600166fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = this[0x17].CGraphicCtrl_data.offset_0x128;
  if (iVar4 < 0x40) {
    this[0x17].CGraphicCtrl_data.offset_0x128 = iVar4 + 1;
  }
  else {
    pvVar1 = *(void **)&this[0x18].CGraphicCtrl_data.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FUN_60008860((int)pvVar1);
      operator_delete(pvVar1);
    }
    puVar5 = (undefined4 *)&this[0x18].CGraphicCtrl_data.field_0x44;
    puVar6 = (undefined4 *)&this[0x18].CGraphicCtrl_data.field_0x40;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar4 = 0x3f;
  }
  this_00 = operator_new(0x24);
  local_4 = 0;
  if (this_00 == (ulong *)0x0) {
    this_00 = (ulong *)0x0;
  }
  else {
    uVar2 = this[0x17].CGraphicCtrl_data.offset_0x130;
    uVar3 = (this->CGraphicCtrl_data).offset_0xd0;
    FUN_6000e770(this_00 + 1);
    this_00[8] = uVar3;
    this_00[7] = uVar2;
    *this_00 = 0;
  }
  local_4 = 0xffffffff;
  *(ulong **)(&this[0x18].CGraphicCtrl_data.field_0x40 + iVar4 * 4) = this_00;
  FUN_60008b70(this_00,param_1);
  *this_00 = param_2;
  iVar4 = (this[0x17].CGraphicCtrl_data.offset_0x128 - this[0x17].CGraphicCtrl_data.offset_0x12c) +
          1;
  CGraphicCtrl_ScrollBar::SetCurrentSize
            ((CGraphicCtrl_ScrollBar *)this[0x18].CGraphicCtrl_data.offset_0x140,
             (ushort)iVar4 & (iVar4 < 0) - 1);
  ExceptionList = local_c;
  return;
}



/* ---- AddTextLines @ 60008d30 size=475 ---- */

/* private: void __thiscall CGraphicCtrl_TextBox::AddTextLines(char *,unsigned long) */

void __thiscall
CGraphicCtrl_TextBox::AddTextLines(CGraphicCtrl_TextBox *this,char *param_1,ulong param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  char local_830 [4];
  char local_82c;
  char local_82b;
  undefined1 local_82a;
  int local_828;
  BOOL local_824;
  tagSIZE local_820;
  int local_818;
  tagSIZE local_814;
  undefined4 local_808;
  char local_804 [2048];
  uint local_4;
  
                    /* 0x8d30  114  ?AddTextLines@CGraphicCtrl_TextBox@@AAEXPADK@Z */
  local_4 = DAT_600259a8 ^ (uint)local_830;
  iVar4 = 0;
  iVar3 = 0;
  local_828 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)pcVar2 - (int)(param_1 + 1)) {
    do {
      local_818 = iVar3;
      local_824 = IsDBCSLeadByte(param_1[iVar4]);
      if (local_824 == 0) {
        local_830[0] = param_1[iVar4];
        local_820.cx = 0;
        local_820.cy = 0;
        local_830[1] = 0;
        GetTextExtentPoint32A
                  (*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,local_830,1,&local_820);
        iVar3 = iVar3 + local_820.cx;
      }
      else {
        pcVar2 = param_1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if (iVar4 < (int)(pcVar2 + (-1 - (int)(param_1 + 1)))) {
          local_82c = param_1[iVar4];
          local_82b = param_1[iVar4 + 1];
          local_814.cx = 0;
          local_814.cy = 0;
          local_82a = 0;
          GetTextExtentPoint32A
                    (*(HDC *)&this[0x18].CGraphicCtrl_data.field_0x34,&local_82c,2,&local_814);
          iVar3 = iVar3 + local_814.cx;
        }
      }
      local_808 = (this->CGraphicCtrl_data).offset_0xd4;
      if ((int)(this->CGraphicCtrl_data).offset_0xd0 < iVar3) {
        iVar3 = iVar3 - local_818;
        if (local_828 < iVar4) {
          memcpy(local_804,param_1 + local_828,iVar4 - local_828);
        }
        local_804[iVar4 - local_828] = '\0';
        __AddSingleLine(this,local_804,param_2);
        local_828 = iVar4;
      }
      if (local_824 != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 + 1;
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    } while (iVar4 < (int)pcVar2 - (int)(param_1 + 1));
    if (local_828 < iVar4) {
      _Size = iVar4 - local_828;
      memcpy(local_804,param_1 + local_828,_Size);
      local_804[_Size] = '\0';
      __AddSingleLine(this,local_804,param_2);
    }
  }
  iVar3 = this[0x17].CGraphicCtrl_data.offset_0x128 - this[0x17].CGraphicCtrl_data.offset_0x12c;
  *(ushort *)(this[0x18].CGraphicCtrl_data.offset_0x140 + 0x172) = (ushort)iVar3 & (iVar3 < 0) - 1;
  CGraphicCtrl_ScrollBar::RePositionBar
            ((CGraphicCtrl_ScrollBar *)this[0x18].CGraphicCtrl_data.offset_0x140);
  this[0x17].CGraphicCtrl_data.field_0x10c = 1;
  __security_check_cookie(local_4 ^ (uint)local_830);
  return;
}



/* ---- AddLine @ 60008f10 size=170 ---- */

/* public: void __thiscall CGraphicCtrl_TextBox::AddLine(char *,unsigned long) */

void __thiscall
CGraphicCtrl_TextBox::AddLine(CGraphicCtrl_TextBox *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  undefined2 local_40c;
  undefined1 local_40a;
  char *local_408;
  CHAR local_404 [1024];
  uint local_4;
  
                    /* 0x8f10  112  ?AddLine@CGraphicCtrl_TextBox@@QAEXPADK@Z */
  local_4 = DAT_600259a8 ^ (uint)&local_40c;
  wsprintfA(local_404,"%s\n",param_1);
  local_40c = DAT_600180d0;
  local_40a = DAT_600180d2;
  local_408 = (char *)0x0;
  pcVar1 = strtok_s(local_404,(char *)&local_40c,&local_408);
  while (pcVar1 != (char *)0x0) {
    AddTextLines(this,pcVar1,param_2);
    pcVar1 = strtok_s((char *)0x0,(char *)&local_40c,&local_408);
  }
  __security_check_cookie(local_4 ^ (uint)&local_40c);
  return;
}



/* ---- SetRate @ 60008fc0 size=45 ---- */

/* public: void __thiscall CGraphicCurve::SetRate(float,float) */

void __thiscall CGraphicCurve::SetRate(CGraphicCurve *this,float param_1,float param_2)

{
  byte bVar1;
  
                    /* 0x8fc0  427  ?SetRate@CGraphicCurve@@QAEXMM@Z */
  bVar1 = (this->CGraphicCurve_data).offset_0x14;
  if ((bVar1 & 1) != 0) {
    (this->CGraphicCurve_data).offset_0x3c = param_1;
    (this->CGraphicCurve_data).offset_0x40 = param_2;
  }
  if ((bVar1 & 2) == 0) {
    return;
  }
  (this->CGraphicCurve_data).offset_0x5c = param_1;
  (this->CGraphicCurve_data).offset_0x60 = param_2;
  return;
}



/* ---- SetPosForce @ 60008ff0 size=61 ---- */

/* public: void __thiscall CGraphicCurve::SetPosForce(float,float) */

void __thiscall CGraphicCurve::SetPosForce(CGraphicCurve *this,float param_1,float param_2)

{
  byte bVar1;
  
                    /* 0x8ff0  423  ?SetPosForce@CGraphicCurve@@QAEXMM@Z */
  bVar1 = (this->CGraphicCurve_data).offset_0x14;
  if ((bVar1 & 1) != 0) {
    (this->CGraphicCurve_data).offset_0x24 = 0;
    (this->CGraphicCurve_data).offset_0x28 = param_1;
    (this->CGraphicCurve_data).offset_0x38 = param_1;
    (this->CGraphicCurve_data).offset_0x30 = param_1;
    (this->CGraphicCurve_data).offset_0x34 = 0;
  }
  if ((bVar1 & 2) == 0) {
    return;
  }
  (this->CGraphicCurve_data).offset_0x44 = 0;
  (this->CGraphicCurve_data).offset_0x48 = param_2;
  (this->CGraphicCurve_data).offset_0x58 = param_2;
  (this->CGraphicCurve_data).offset_0x50 = param_2;
  (this->CGraphicCurve_data).offset_0x54 = 0;
  return;
}



/* ---- _SafeAction_DAMPING @ 60009030 size=176 ---- */

/* protected: int __thiscall CGraphicCurve::_SafeAction_DAMPING(unsigned long) */

int __thiscall CGraphicCurve::_SafeAction_DAMPING(CGraphicCurve *this,ulong param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  
                    /* 0x9030  490  ?_SafeAction_DAMPING@CGraphicCurve@@IAEHK@Z */
  bVar3 = (this->CGraphicCurve_data).offset_0x14;
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  if ((bVar3 & 3) == 3) {
    iVar4 = (*this->vftablePtr->_SafeAction_DAMPING_Common)(this);
    if (iVar4 == 0) {
      return 0;
    }
  }
  else if (bVar3 == 1) {
    iVar4 = (*this->vftablePtr->_SafeAction_DAMPING_X)(this);
    if (iVar4 == 0) {
      return 0;
    }
  }
  else if (bVar3 == 2) {
    iVar4 = (*this->vftablePtr->_SafeAction_DAMPING_Y)(this);
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    (this->CGraphicCurve_data).offset_0x28 =
         (float)(this->CGraphicCurve_data).offset_0x34 * s_dDelta +
         (this->CGraphicCurve_data).offset_0x28;
    (this->CGraphicCurve_data).offset_0x48 =
         (float)(this->CGraphicCurve_data).offset_0x54 * s_dDelta +
         (this->CGraphicCurve_data).offset_0x48;
  }
  if (((this->CGraphicCurve_data).offset_0x28 == fVar1) &&
     ((this->CGraphicCurve_data).offset_0x48 == fVar2)) {
    return 0;
  }
  return 1;
}



/* ---- _SafeAction_JELLY @ 600090e0 size=189 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: int __thiscall CGraphicCurve::_SafeAction_JELLY(unsigned long) */

int __thiscall CGraphicCurve::_SafeAction_JELLY(CGraphicCurve *this,ulong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
                    /* 0x90e0  494  ?_SafeAction_JELLY@CGraphicCurve@@IAEHK@Z */
  iVar5 = (this->CGraphicCurve_data).offset_0x88;
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  uVar4 = (this->CGraphicCurve_data).offset_0x84;
  uVar6 = iVar5 + param_1;
  (this->CGraphicCurve_data).offset_0x88 = uVar6;
  if (uVar6 < uVar4) {
    iVar5 = ((param_1 >> 1) + iVar5) * param_1;
    fVar3 = (float)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + _DAT_60017950;
    }
    (this->CGraphicCurve_data).offset_0x28 =
         (this->CGraphicCurve_data).offset_0x28 + fVar3 * (this->CGraphicCurve_data).offset_0x74;
    fVar3 = fVar3 * (this->CGraphicCurve_data).offset_0x78 + (this->CGraphicCurve_data).offset_0x48;
  }
  else {
    (this->CGraphicCurve_data).offset_0x88 = uVar4;
    (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
    fVar3 = (this->CGraphicCurve_data).offset_0x58;
  }
  (this->CGraphicCurve_data).offset_0x48 = fVar3;
  (this->CGraphicCurve_data).offset_0x2c = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x4c = (this->CGraphicCurve_data).offset_0x48;
  if (((this->CGraphicCurve_data).offset_0x28 == fVar1) &&
     ((this->CGraphicCurve_data).offset_0x48 == fVar2)) {
    return 0;
  }
  return 1;
}



/* ---- _SafeAction_TOUGH @ 600091a0 size=237 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: int __thiscall CGraphicCurve::_SafeAction_TOUGH(unsigned long) */

int __thiscall CGraphicCurve::_SafeAction_TOUGH(CGraphicCurve *this,ulong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  
                    /* 0x91a0  498  ?_SafeAction_TOUGH@CGraphicCurve@@IAEHK@Z */
  iVar4 = (this->CGraphicCurve_data).offset_0x88;
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  iVar7 = (param_1 >> 1) + iVar4;
  uVar5 = (this->CGraphicCurve_data).offset_0x84;
  uVar8 = iVar4 + param_1;
  (this->CGraphicCurve_data).offset_0x88 = uVar8;
  if (uVar8 < uVar5) {
    fVar3 = (float)iVar7;
    if (iVar7 < 0) {
      fVar3 = fVar3 + _DAT_60017950;
    }
    fVar6 = (float)(int)param_1;
    if ((int)param_1 < 0) {
      fVar6 = fVar6 + _DAT_60017950;
    }
    (this->CGraphicCurve_data).offset_0x28 =
         (this->CGraphicCurve_data).offset_0x28 +
         fVar6 * ((this->CGraphicCurve_data).offset_0x7c -
                 fVar3 * (this->CGraphicCurve_data).offset_0x74);
    fVar3 = fVar6 * ((this->CGraphicCurve_data).offset_0x80 -
                    (this->CGraphicCurve_data).offset_0x78 * fVar3) +
            (this->CGraphicCurve_data).offset_0x48;
  }
  else {
    (this->CGraphicCurve_data).offset_0x88 = uVar5;
    (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
    fVar3 = (this->CGraphicCurve_data).offset_0x58;
  }
  (this->CGraphicCurve_data).offset_0x48 = fVar3;
  (this->CGraphicCurve_data).offset_0x2c = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x4c = (this->CGraphicCurve_data).offset_0x48;
  if (((this->CGraphicCurve_data).offset_0x28 == fVar1) &&
     ((this->CGraphicCurve_data).offset_0x48 == fVar2)) {
    return 0;
  }
  return 1;
}



/* ---- _SafeAction_NORMAL @ 60009290 size=176 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: int __thiscall CGraphicCurve::_SafeAction_NORMAL(unsigned long) */

int __thiscall CGraphicCurve::_SafeAction_NORMAL(CGraphicCurve *this,ulong param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
                    /* 0x9290  495  ?_SafeAction_NORMAL@CGraphicCurve@@IAEHK@Z */
  fVar2 = (this->CGraphicCurve_data).offset_0x28;
  uVar5 = (this->CGraphicCurve_data).offset_0x84;
  fVar3 = (this->CGraphicCurve_data).offset_0x48;
  puVar1 = &(this->CGraphicCurve_data).offset_0x88;
  *puVar1 = *puVar1 + param_1;
  if ((uint)(this->CGraphicCurve_data).offset_0x88 < uVar5) {
    fVar4 = (float)(int)param_1;
    if ((int)param_1 < 0) {
      fVar4 = fVar4 + _DAT_60017950;
    }
    (this->CGraphicCurve_data).offset_0x28 =
         (this->CGraphicCurve_data).offset_0x28 + fVar4 * (this->CGraphicCurve_data).offset_0x6c;
    fVar4 = fVar4 * (this->CGraphicCurve_data).offset_0x70 + (this->CGraphicCurve_data).offset_0x48;
  }
  else {
    (this->CGraphicCurve_data).offset_0x88 = uVar5;
    (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
    fVar4 = (this->CGraphicCurve_data).offset_0x58;
  }
  (this->CGraphicCurve_data).offset_0x48 = fVar4;
  (this->CGraphicCurve_data).offset_0x2c = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x4c = (this->CGraphicCurve_data).offset_0x48;
  if (((this->CGraphicCurve_data).offset_0x28 == fVar2) &&
     ((this->CGraphicCurve_data).offset_0x48 == fVar3)) {
    return 0;
  }
  return 1;
}



/* ---- _SafeAction_STRAIGHT @ 60009340 size=380 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: int __thiscall CGraphicCurve::_SafeAction_STRAIGHT(unsigned long) */

int __thiscall CGraphicCurve::_SafeAction_STRAIGHT(CGraphicCurve *this,ulong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  uint uVar7;
  
                    /* 0x9340  497  ?_SafeAction_STRAIGHT@CGraphicCurve@@IAEHK@Z */
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  bVar5 = (this->CGraphicCurve_data).offset_0x14;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  if (param_1 != 0) {
    do {
      if (param_1 < 0x21) {
        uVar7 = 0;
      }
      else {
        uVar7 = param_1 - 0x20;
        param_1 = 0x18;
      }
      fVar6 = (float)(int)param_1;
      if ((int)param_1 < 0) {
        fVar6 = fVar6 + _DAT_60017950;
      }
      fVar4 = fVar6 * (this->CGraphicCurve_data).offset_0x6c +
              (this->CGraphicCurve_data).offset_0x28;
      (this->CGraphicCurve_data).offset_0x28 = fVar4;
      fVar6 = (this->CGraphicCurve_data).offset_0x48 +
              (this->CGraphicCurve_data).offset_0x70 * fVar6;
      (this->CGraphicCurve_data).offset_0x48 = fVar6;
      if ((bVar5 & 1) != 0) {
        if ((fVar1 <= (this->CGraphicCurve_data).offset_0x38) ||
           ((this->CGraphicCurve_data).offset_0x38 < fVar4)) {
          if ((fVar1 < (this->CGraphicCurve_data).offset_0x38) &&
             (fVar3 = (this->CGraphicCurve_data).offset_0x38,
             (!NAN(fVar3) && !NAN(fVar4)) && fVar3 < fVar4 != (fVar3 == fVar4))) {
            (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
            (this->CGraphicCurve_data).offset_0x6c = 0.0;
          }
        }
        else {
          (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
          (this->CGraphicCurve_data).offset_0x6c = 0.0;
        }
      }
      if ((bVar5 & 2) != 0) {
        if ((fVar2 <= (this->CGraphicCurve_data).offset_0x58) ||
           ((this->CGraphicCurve_data).offset_0x58 < fVar6)) {
          if ((fVar2 < (this->CGraphicCurve_data).offset_0x58) &&
             (fVar4 = (this->CGraphicCurve_data).offset_0x58,
             (!NAN(fVar4) && !NAN(fVar6)) && fVar4 < fVar6 != (fVar4 == fVar6))) {
            (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x58;
            (this->CGraphicCurve_data).offset_0x70 = 0.0;
          }
        }
        else {
          (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x58;
          (this->CGraphicCurve_data).offset_0x70 = 0.0;
        }
      }
      param_1 = uVar7;
    } while (uVar7 != 0);
  }
  (this->CGraphicCurve_data).offset_0x2c = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x4c = (this->CGraphicCurve_data).offset_0x48;
  if (((this->CGraphicCurve_data).offset_0x28 == fVar1) &&
     ((this->CGraphicCurve_data).offset_0x48 == fVar2)) {
    return 0;
  }
  return 1;
}



/* ---- _SafeAction_QUAD @ 600094c0 size=172 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: int __thiscall CGraphicCurve::_SafeAction_QUAD(unsigned long) */

int __thiscall CGraphicCurve::_SafeAction_QUAD(CGraphicCurve *this,ulong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  float fVar3;
  
  puVar1 = &(this->CGraphicCurve_data).offset_0x88;
                    /* 0x94c0  496  ?_SafeAction_QUAD@CGraphicCurve@@IAEHK@Z */
  *puVar1 = *puVar1 + param_1;
  uVar2 = (this->CGraphicCurve_data).offset_0x88;
  if (uVar2 < (uint)(this->CGraphicCurve_data).offset_0x84) {
    fVar3 = (float)(int)uVar2;
    if ((int)uVar2 < 0) {
      fVar3 = fVar3 + _DAT_60017950;
    }
    fVar3 = (fVar3 * (float)(this->CGraphicCurve_data).offset_0x0 +
            fVar3 * fVar3 * (float)(this->CGraphicCurve_data).offset_0x4 * (float)_DAT_600180d8) /
            (float)(this->CGraphicCurve_data).offset_0x8;
    (this->CGraphicCurve_data).offset_0xc = fVar3;
    (this->CGraphicCurve_data).offset_0x28 =
         ((this->CGraphicCurve_data).offset_0x38 - (float)(this->CGraphicCurve_data).offset_0x2c) *
         fVar3 + (float)(this->CGraphicCurve_data).offset_0x2c;
    (this->CGraphicCurve_data).offset_0x48 =
         ((this->CGraphicCurve_data).offset_0x58 - (float)(this->CGraphicCurve_data).offset_0x4c) *
         fVar3 + (float)(this->CGraphicCurve_data).offset_0x4c;
    return 1;
  }
  if ((float)(this->CGraphicCurve_data).offset_0x34 == 0.0) {
    return 0;
  }
  (this->CGraphicCurve_data).offset_0xc = 0x3f800000;
  (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
  (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x58;
  (this->CGraphicCurve_data).offset_0x34 = 0;
  (this->CGraphicCurve_data).offset_0x54 = 0;
  return 1;
}



/* ---- _ifCalculateSetting @ 60009570 size=600 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __thiscall CGraphicCurve::_ifCalculateSetting(void) */

void __thiscall CGraphicCurve::_ifCalculateSetting(CGraphicCurve *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  float10 fVar8;
  
                    /* 0x9570  509  ?_ifCalculateSetting@CGraphicCurve@@IAEXXZ */
  (this->CGraphicCurve_data).offset_0x88 = 0;
  switch((this->CGraphicCurve_data).offset_0x18) {
  case 0:
    if ((this->CGraphicCurve_data).offset_0x84 == 0) {
      bVar6 = (this->CGraphicCurve_data).offset_0x14;
      if ((bVar6 & 1) != 0) {
        (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
        (this->CGraphicCurve_data).offset_0x30 = (this->CGraphicCurve_data).offset_0x38;
      }
      if ((bVar6 & 2) != 0) {
        (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
        (this->CGraphicCurve_data).offset_0x50 = (this->CGraphicCurve_data).offset_0x58;
      }
      (this->CGraphicCurve_data).offset_0x84 = 1;
    }
    fVar1 = (float)(this->CGraphicCurve_data).offset_0x84;
    if ((this->CGraphicCurve_data).offset_0x84 < 0) {
      fVar1 = fVar1 + _DAT_60017950;
    }
    (this->CGraphicCurve_data).offset_0x6c =
         ((this->CGraphicCurve_data).offset_0x38 - (this->CGraphicCurve_data).offset_0x30) / fVar1;
    (this->CGraphicCurve_data).offset_0x70 =
         ((this->CGraphicCurve_data).offset_0x58 - (this->CGraphicCurve_data).offset_0x50) / fVar1;
    return;
  case 1:
    if ((this->CGraphicCurve_data).offset_0x84 == 0) {
      bVar6 = (this->CGraphicCurve_data).offset_0x14;
      if ((bVar6 & 1) != 0) {
        (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
        (this->CGraphicCurve_data).offset_0x30 = (this->CGraphicCurve_data).offset_0x38;
      }
      if ((bVar6 & 2) != 0) {
        (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
        (this->CGraphicCurve_data).offset_0x50 = (this->CGraphicCurve_data).offset_0x58;
      }
      (this->CGraphicCurve_data).offset_0x84 = 1;
    }
    iVar7 = (this->CGraphicCurve_data).offset_0x84;
    (this->CGraphicCurve_data).offset_0x7c = 0.0;
    iVar7 = iVar7 * iVar7;
    (this->CGraphicCurve_data).offset_0x80 = 0.0;
    fVar1 = (this->CGraphicCurve_data).offset_0x38 - (this->CGraphicCurve_data).offset_0x30;
    fVar2 = (float)iVar7;
    if (iVar7 < 0) {
      fVar2 = fVar2 + _DAT_60017950;
    }
    (this->CGraphicCurve_data).offset_0x74 = (fVar1 + fVar1) / fVar2;
    fVar1 = (this->CGraphicCurve_data).offset_0x58 - (this->CGraphicCurve_data).offset_0x50;
    (this->CGraphicCurve_data).offset_0x78 = (fVar1 + fVar1) / fVar2;
    return;
  case 2:
    if ((this->CGraphicCurve_data).offset_0x84 == 0) {
      bVar6 = (this->CGraphicCurve_data).offset_0x14;
      if ((bVar6 & 1) != 0) {
        (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
        (this->CGraphicCurve_data).offset_0x30 = (this->CGraphicCurve_data).offset_0x38;
      }
      if ((bVar6 & 2) != 0) {
        (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
        (this->CGraphicCurve_data).offset_0x50 = (this->CGraphicCurve_data).offset_0x58;
      }
      (this->CGraphicCurve_data).offset_0x84 = 1;
    }
    iVar7 = (this->CGraphicCurve_data).offset_0x84;
    fVar1 = (this->CGraphicCurve_data).offset_0x38 - (this->CGraphicCurve_data).offset_0x30;
    fVar2 = (float)(iVar7 * iVar7);
    if (iVar7 * iVar7 < 0) {
      fVar2 = fVar2 + _DAT_60017950;
    }
    fVar1 = (fVar1 + fVar1) / fVar2;
    (this->CGraphicCurve_data).offset_0x74 = fVar1;
    fVar3 = (this->CGraphicCurve_data).offset_0x58 - (this->CGraphicCurve_data).offset_0x50;
    fVar2 = (fVar3 + fVar3) / fVar2;
    (this->CGraphicCurve_data).offset_0x78 = fVar2;
    fVar3 = (float)iVar7;
    if (iVar7 < 0) {
      fVar3 = fVar3 + _DAT_60017950;
    }
    (this->CGraphicCurve_data).offset_0x7c = fVar3 * fVar1;
    (this->CGraphicCurve_data).offset_0x80 = fVar2 * fVar3;
    return;
  case 3:
    fVar1 = (this->CGraphicCurve_data).offset_0x38;
    fVar2 = (this->CGraphicCurve_data).offset_0x28;
    fVar3 = (this->CGraphicCurve_data).offset_0x58;
    fVar4 = (this->CGraphicCurve_data).offset_0x48;
    fVar8 = (float10)_CIsqrt();
    fVar5 = (float)fVar8;
    if (0.0 < fVar5) {
      (this->CGraphicCurve_data).offset_0x6c =
           ((fVar1 - fVar2) * (this->CGraphicCurve_data).offset_0x20) / fVar5;
      (this->CGraphicCurve_data).offset_0x70 =
           ((fVar3 - fVar4) * (this->CGraphicCurve_data).offset_0x20) / fVar5;
      return;
    }
    (this->CGraphicCurve_data).offset_0x6c = 0.0;
    (this->CGraphicCurve_data).offset_0x70 = 0.0;
  }
  return;
}



/* ---- CGraphicCurve::_SafeAction_DAMPING_Common @ 600097e0 size=982 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual int __thiscall CGraphicCurve::_SafeAction_DAMPING_Common(void) */

int __thiscall CGraphicCurve::CGraphicCurve___SafeAction_DAMPING_Common(CGraphicCurve *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = s_dDelta;
                    /* 0x97e0  491  ?_SafeAction_DAMPING_Common@CGraphicCurve@@MAEHXZ */
  fVar6 = _DAT_60017940;
  if ((((ABS((this->CGraphicCurve_data).offset_0x28 - (this->CGraphicCurve_data).offset_0x38) <=
         _DAT_60017940) &&
       (fVar1 = ABS((this->CGraphicCurve_data).offset_0x48 - (this->CGraphicCurve_data).offset_0x58)
       , (!NAN(fVar1) && !NAN(_DAT_60017940)) && fVar1 < _DAT_60017940 != (fVar1 == _DAT_60017940)))
      && (fVar1 = ABS((float)(this->CGraphicCurve_data).offset_0x34),
         (!NAN(fVar1) && !NAN(_DAT_60017940)) && fVar1 < _DAT_60017940 != (fVar1 == _DAT_60017940)))
     && (fVar1 = ABS((float)(this->CGraphicCurve_data).offset_0x54),
        (!NAN(fVar1) && !NAN(_DAT_60017940)) && fVar1 < _DAT_60017940 != (fVar1 == _DAT_60017940)))
  {
    return 0;
  }
  if (NAN(s_dDelta) || s_dDelta < 1.0 == (s_dDelta == 1.0)) {
    if (1.0 <= s_dDelta) {
      fVar1 = 1.0 - (float)(this->CGraphicCurve_data).offset_0x40;
      do {
        fVar3 = fVar3 - 1.0;
        fVar2 = ((this->CGraphicCurve_data).offset_0x38 - (this->CGraphicCurve_data).offset_0x28) *
                (float)(this->CGraphicCurve_data).offset_0x3c +
                (float)(this->CGraphicCurve_data).offset_0x34;
        (this->CGraphicCurve_data).offset_0x34 = fVar2;
        (this->CGraphicCurve_data).offset_0x28 = fVar2 + (this->CGraphicCurve_data).offset_0x28;
        fVar2 = (float)(this->CGraphicCurve_data).offset_0x34 * fVar1;
        (this->CGraphicCurve_data).offset_0x34 = fVar2;
        fVar4 = ((this->CGraphicCurve_data).offset_0x58 - (this->CGraphicCurve_data).offset_0x48) *
                (float)(this->CGraphicCurve_data).offset_0x3c +
                (float)(this->CGraphicCurve_data).offset_0x54;
        (this->CGraphicCurve_data).offset_0x54 = fVar4;
        (this->CGraphicCurve_data).offset_0x48 = fVar4 + (this->CGraphicCurve_data).offset_0x48;
        fVar4 = (float)(this->CGraphicCurve_data).offset_0x54 * fVar1;
        (this->CGraphicCurve_data).offset_0x54 = fVar4;
        fVar5 = ABS((this->CGraphicCurve_data).offset_0x28 - (this->CGraphicCurve_data).offset_0x38)
        ;
        if (((!NAN(fVar5) && !NAN(fVar6)) && fVar5 < fVar6 != (fVar5 == fVar6)) &&
           (fVar2 = ABS(fVar2), (!NAN(fVar2) && !NAN(fVar6)) && fVar2 < fVar6 != (fVar2 == fVar6)))
        {
          (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
          (this->CGraphicCurve_data).offset_0x34 = 0;
        }
        fVar2 = ABS((this->CGraphicCurve_data).offset_0x48 - (this->CGraphicCurve_data).offset_0x58)
        ;
        if (((!NAN(fVar2) && !NAN(fVar6)) && fVar2 < fVar6 != (fVar2 == fVar6)) &&
           (fVar4 = ABS(fVar4), (!NAN(fVar4) && !NAN(fVar6)) && fVar4 < fVar6 != (fVar4 == fVar6)))
        {
          (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x58;
          (this->CGraphicCurve_data).offset_0x54 = 0;
        }
      } while (1.0 <= fVar3);
    }
    fVar4 = (float)(this->CGraphicCurve_data).offset_0x3c * fVar3;
    fVar1 = (float)(this->CGraphicCurve_data).offset_0x34 +
            fVar4 * ((this->CGraphicCurve_data).offset_0x38 - (this->CGraphicCurve_data).offset_0x28
                    );
    (this->CGraphicCurve_data).offset_0x34 = fVar1;
    (this->CGraphicCurve_data).offset_0x28 = fVar1 * fVar3 + (this->CGraphicCurve_data).offset_0x28;
    fVar1 = 1.0 - (float)(this->CGraphicCurve_data).offset_0x40 * fVar3;
    fVar2 = (float)(this->CGraphicCurve_data).offset_0x34 * fVar1;
    (this->CGraphicCurve_data).offset_0x34 = fVar2;
    fVar4 = (float)(this->CGraphicCurve_data).offset_0x54 +
            ((this->CGraphicCurve_data).offset_0x58 - (this->CGraphicCurve_data).offset_0x48) *
            fVar4;
    (this->CGraphicCurve_data).offset_0x54 = fVar4;
    (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x48 + fVar4 * fVar3;
    fVar1 = fVar1 * (float)(this->CGraphicCurve_data).offset_0x54;
    (this->CGraphicCurve_data).offset_0x54 = fVar1;
    fVar3 = ABS((this->CGraphicCurve_data).offset_0x28 - (this->CGraphicCurve_data).offset_0x38);
    if (((!NAN(fVar3) && !NAN(fVar6)) && fVar3 < fVar6 != (fVar3 == fVar6)) &&
       (fVar2 = ABS(fVar2), (!NAN(fVar2) && !NAN(fVar6)) && fVar2 < fVar6 != (fVar2 == fVar6))) {
      (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
      (this->CGraphicCurve_data).offset_0x34 = 0;
    }
    fVar3 = ABS((this->CGraphicCurve_data).offset_0x48 - (this->CGraphicCurve_data).offset_0x58);
    if ((NAN(fVar3) || NAN(fVar6)) || fVar3 < fVar6 == (fVar3 == fVar6)) {
      return 1;
    }
  }
  else {
    fVar2 = (float)(this->CGraphicCurve_data).offset_0x3c * s_dDelta;
    fVar1 = (float)(this->CGraphicCurve_data).offset_0x40 * s_dDelta;
    fVar4 = (float)(this->CGraphicCurve_data).offset_0x34 +
            fVar2 * ((this->CGraphicCurve_data).offset_0x38 - (this->CGraphicCurve_data).offset_0x28
                    );
    (this->CGraphicCurve_data).offset_0x34 = fVar4;
    (this->CGraphicCurve_data).offset_0x28 = fVar4 * fVar3 + (this->CGraphicCurve_data).offset_0x28;
    fVar1 = 1.0 - fVar1;
    fVar4 = (float)(this->CGraphicCurve_data).offset_0x34 * fVar1;
    (this->CGraphicCurve_data).offset_0x34 = fVar4;
    fVar2 = (float)(this->CGraphicCurve_data).offset_0x54 +
            ((this->CGraphicCurve_data).offset_0x58 - (this->CGraphicCurve_data).offset_0x48) *
            fVar2;
    (this->CGraphicCurve_data).offset_0x54 = fVar2;
    (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x48 + fVar2 * fVar3;
    fVar1 = (float)(this->CGraphicCurve_data).offset_0x54 * fVar1;
    (this->CGraphicCurve_data).offset_0x54 = fVar1;
    fVar3 = ABS((this->CGraphicCurve_data).offset_0x28 - (this->CGraphicCurve_data).offset_0x38);
    if (((!NAN(fVar3) && !NAN(fVar6)) && fVar3 < fVar6 != (fVar3 == fVar6)) &&
       (fVar4 = ABS(fVar4), (!NAN(fVar4) && !NAN(fVar6)) && fVar4 < fVar6 != (fVar4 == fVar6))) {
      (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
      (this->CGraphicCurve_data).offset_0x34 = 0;
    }
    fVar3 = ABS((this->CGraphicCurve_data).offset_0x48 - (this->CGraphicCurve_data).offset_0x58);
    if ((NAN(fVar3) || NAN(fVar6)) || fVar3 < fVar6 == (fVar3 == fVar6)) {
      return 1;
    }
  }
  fVar1 = ABS(fVar1);
  if (!((NAN(fVar1) || NAN(fVar6)) || fVar1 < fVar6 == (fVar1 == fVar6))) {
    (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x58;
    (this->CGraphicCurve_data).offset_0x54 = 0;
    return 1;
  }
  return 1;
}



/* ---- CGraphicCurve::_SafeAction_DAMPING_X @ 60009bc0 size=234 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual int __thiscall CGraphicCurve::_SafeAction_DAMPING_X(void) */

int __thiscall CGraphicCurve::CGraphicCurve___SafeAction_DAMPING_X(CGraphicCurve *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = s_dDelta;
                    /* 0x9bc0  492  ?_SafeAction_DAMPING_X@CGraphicCurve@@MAEHXZ */
  fVar3 = _DAT_60017940;
  if ((ABS((this->CGraphicCurve_data).offset_0x28 - (this->CGraphicCurve_data).offset_0x38) <=
       _DAT_60017940) &&
     (fVar1 = ABS((float)(this->CGraphicCurve_data).offset_0x34),
     (!NAN(fVar1) && !NAN(_DAT_60017940)) && fVar1 < _DAT_60017940 != (fVar1 == _DAT_60017940))) {
    return 0;
  }
  fVar1 = ((this->CGraphicCurve_data).offset_0x38 - (this->CGraphicCurve_data).offset_0x28) *
          s_dDelta * (float)(this->CGraphicCurve_data).offset_0x3c +
          (float)(this->CGraphicCurve_data).offset_0x34;
  (this->CGraphicCurve_data).offset_0x34 = fVar1;
  (this->CGraphicCurve_data).offset_0x28 = fVar1 * fVar2 + (this->CGraphicCurve_data).offset_0x28;
  fVar1 = (1.0 - (float)(this->CGraphicCurve_data).offset_0x40 * fVar2) *
          (float)(this->CGraphicCurve_data).offset_0x34;
  (this->CGraphicCurve_data).offset_0x34 = fVar1;
  (this->CGraphicCurve_data).offset_0x48 =
       (this->CGraphicCurve_data).offset_0x48 +
       (float)(this->CGraphicCurve_data).offset_0x54 * fVar2;
  fVar2 = ABS((this->CGraphicCurve_data).offset_0x28 - (this->CGraphicCurve_data).offset_0x38);
  if (((!NAN(fVar2) && !NAN(fVar3)) && fVar2 < fVar3 != (fVar2 == fVar3)) && (ABS(fVar1) <= fVar3))
  {
    (this->CGraphicCurve_data).offset_0x28 = (this->CGraphicCurve_data).offset_0x38;
    (this->CGraphicCurve_data).offset_0x34 = 0;
    return 1;
  }
  return 1;
}



/* ---- CGraphicCurve::_SafeAction_DAMPING_Y @ 60009cb0 size=234 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual int __thiscall CGraphicCurve::_SafeAction_DAMPING_Y(void) */

int __thiscall CGraphicCurve::CGraphicCurve___SafeAction_DAMPING_Y(CGraphicCurve *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = s_dDelta;
                    /* 0x9cb0  493  ?_SafeAction_DAMPING_Y@CGraphicCurve@@MAEHXZ */
  fVar3 = _DAT_60017940;
  if ((ABS((this->CGraphicCurve_data).offset_0x48 - (this->CGraphicCurve_data).offset_0x58) <=
       _DAT_60017940) &&
     (fVar1 = ABS((float)(this->CGraphicCurve_data).offset_0x54),
     (!NAN(fVar1) && !NAN(_DAT_60017940)) && fVar1 < _DAT_60017940 != (fVar1 == _DAT_60017940))) {
    return 0;
  }
  fVar1 = ((this->CGraphicCurve_data).offset_0x58 - (this->CGraphicCurve_data).offset_0x48) *
          s_dDelta * (float)(this->CGraphicCurve_data).offset_0x5c +
          (float)(this->CGraphicCurve_data).offset_0x54;
  (this->CGraphicCurve_data).offset_0x54 = fVar1;
  (this->CGraphicCurve_data).offset_0x48 = fVar1 * fVar2 + (this->CGraphicCurve_data).offset_0x48;
  fVar1 = (1.0 - (float)(this->CGraphicCurve_data).offset_0x60 * fVar2) *
          (float)(this->CGraphicCurve_data).offset_0x54;
  (this->CGraphicCurve_data).offset_0x54 = fVar1;
  (this->CGraphicCurve_data).offset_0x28 =
       (this->CGraphicCurve_data).offset_0x28 +
       (float)(this->CGraphicCurve_data).offset_0x34 * fVar2;
  fVar2 = ABS((this->CGraphicCurve_data).offset_0x48 - (this->CGraphicCurve_data).offset_0x58);
  if (((!NAN(fVar2) && !NAN(fVar3)) && fVar2 < fVar3 != (fVar2 == fVar3)) && (ABS(fVar1) <= fVar3))
  {
    (this->CGraphicCurve_data).offset_0x48 = (this->CGraphicCurve_data).offset_0x58;
    (this->CGraphicCurve_data).offset_0x54 = 0;
    return 1;
  }
  return 1;
}



/* ---- SetStyle @ 60009da0 size=109 ---- */

/* public: void __thiscall CGraphicCurve::SetStyle(int,int) */

void __thiscall CGraphicCurve::SetStyle(CGraphicCurve *this,int param_1,int param_2)

{
                    /* 0x9da0  442  ?SetStyle@CGraphicCurve@@QAEXHH@Z */
  (this->CGraphicCurve_data).offset_0x18 = param_1;
  switch(param_1) {
  case 0:
    (this->CGraphicCurve_data).offset_0x10 = _SafeAction_NORMAL;
    _ifCalculateSetting(this);
    return;
  case 1:
    (this->CGraphicCurve_data).offset_0x10 = _SafeAction_JELLY;
    _ifCalculateSetting(this);
    return;
  case 2:
    (this->CGraphicCurve_data).offset_0x10 = _SafeAction_TOUGH;
    _ifCalculateSetting(this);
    return;
  case 3:
    (this->CGraphicCurve_data).offset_0x10 = _SafeAction_STRAIGHT;
    _ifCalculateSetting(this);
    return;
  case 4:
    (this->CGraphicCurve_data).offset_0x10 = _SafeAction_DAMPING;
    _ifCalculateSetting(this);
    return;
  case 5:
    (this->CGraphicCurve_data).offset_0x10 = _SafeAction_QUAD;
  }
  _ifCalculateSetting(this);
  return;
}



/* ---- SetPos @ 60009e30 size=40 ---- */

/* public: void __thiscall CGraphicCurve::SetPos(float,float,int) */

void __thiscall CGraphicCurve::SetPos(CGraphicCurve *this,float param_1,float param_2,int param_3)

{
  byte bVar1;
  
                    /* 0x9e30  420  ?SetPos@CGraphicCurve@@QAEXMMH@Z */
  bVar1 = (this->CGraphicCurve_data).offset_0x14;
  if ((bVar1 & 1) != 0) {
    (this->CGraphicCurve_data).offset_0x28 = param_1;
  }
  if ((bVar1 & 2) != 0) {
    (this->CGraphicCurve_data).offset_0x48 = param_2;
  }
  if (param_3 != 0) {
    _ifCalculateSetting(this);
  }
  return;
}



/* ---- SetStartPos @ 60009e60 size=40 ---- */

/* public: void __thiscall CGraphicCurve::SetStartPos(float,float,int) */

void __thiscall
CGraphicCurve::SetStartPos(CGraphicCurve *this,float param_1,float param_2,int param_3)

{
  byte bVar1;
  
                    /* 0x9e60  440  ?SetStartPos@CGraphicCurve@@QAEXMMH@Z */
  bVar1 = (this->CGraphicCurve_data).offset_0x14;
  if ((bVar1 & 1) != 0) {
    (this->CGraphicCurve_data).offset_0x30 = param_1;
  }
  if ((bVar1 & 2) != 0) {
    (this->CGraphicCurve_data).offset_0x50 = param_2;
  }
  if (param_3 != 0) {
    _ifCalculateSetting(this);
  }
  return;
}



/* ---- SetCurve @ 60009e90 size=509 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGraphicCurve::SetCurve(unsigned char,float,float,float,float,unsigned
   long,char) */

void __thiscall
CGraphicCurve::SetCurve
          (CGraphicCurve *this,uchar param_1,float param_2,float param_3,float param_4,float param_5
          ,ulong param_6,char param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* 0x9e90  391  ?SetCurve@CGraphicCurve@@QAEXEMMMMKD@Z */
  SetStyle(this,(uint)param_1,1);
  (this->CGraphicCurve_data).offset_0x84 = param_6;
  (this->CGraphicCurve_data).offset_0x88 = 0;
  if ((param_7 & 1U) != 0) {
    (this->CGraphicCurve_data).offset_0x38 = param_4;
    (this->CGraphicCurve_data).offset_0x28 = param_2;
    (this->CGraphicCurve_data).offset_0x64 = param_2;
    (this->CGraphicCurve_data).offset_0x2c = param_2;
  }
  if ((param_7 & 2U) != 0) {
    (this->CGraphicCurve_data).offset_0x58 = param_5;
    (this->CGraphicCurve_data).offset_0x48 = param_3;
    (this->CGraphicCurve_data).offset_0x68 = param_3;
    (this->CGraphicCurve_data).offset_0x4c = param_3;
  }
  switch((this->CGraphicCurve_data).offset_0x18) {
  case 0:
    if (param_6 < 2) {
      (this->CGraphicCurve_data).offset_0x64 = param_4;
      (this->CGraphicCurve_data).offset_0x68 = param_5;
      return;
    }
    fVar2 = (float)(int)param_6;
    if ((int)param_6 < 0) {
      fVar2 = fVar2 + _DAT_60017950;
    }
    (this->CGraphicCurve_data).offset_0x6c = (param_4 - param_2) / fVar2;
    (this->CGraphicCurve_data).offset_0x70 = (param_5 - param_3) / fVar2;
    return;
  case 1:
    if (1 < param_6) {
      (this->CGraphicCurve_data).offset_0x7c = 0.0;
      (this->CGraphicCurve_data).offset_0x80 = 0.0;
      fVar2 = (float)(int)(param_6 * param_6);
      if ((int)(param_6 * param_6) < 0) {
        fVar2 = fVar2 + _DAT_60017950;
      }
      (this->CGraphicCurve_data).offset_0x74 = ((param_4 - param_2) + (param_4 - param_2)) / fVar2;
      (this->CGraphicCurve_data).offset_0x78 = ((param_5 - param_3) + (param_5 - param_3)) / fVar2;
      return;
    }
    break;
  case 2:
    if (1 < param_6) {
      fVar2 = (float)(int)(param_6 * param_6);
      if ((int)(param_6 * param_6) < 0) {
        fVar2 = fVar2 + _DAT_60017950;
      }
      fVar1 = ((param_4 - param_2) + (param_4 - param_2)) / fVar2;
      (this->CGraphicCurve_data).offset_0x74 = fVar1;
      fVar2 = ((param_5 - param_3) + (param_5 - param_3)) / fVar2;
      (this->CGraphicCurve_data).offset_0x78 = fVar2;
      fVar3 = (float)(int)param_6;
      if ((int)param_6 < 0) {
        fVar3 = fVar3 + _DAT_60017950;
      }
      (this->CGraphicCurve_data).offset_0x7c = fVar3 * fVar1;
      (this->CGraphicCurve_data).offset_0x80 = fVar2 * fVar3;
      return;
    }
    break;
  default:
    return;
  case 4:
    if ((param_7 & 1U) != 0) {
      (this->CGraphicCurve_data).offset_0x38 = param_4;
      (this->CGraphicCurve_data).offset_0x28 = param_2;
      (this->CGraphicCurve_data).offset_0x2c = param_2;
      (this->CGraphicCurve_data).offset_0x34 = 0;
    }
    if ((param_7 & 2U) == 0) {
      return;
    }
    (this->CGraphicCurve_data).offset_0x58 = param_5;
    (this->CGraphicCurve_data).offset_0x48 = param_3;
    (this->CGraphicCurve_data).offset_0x4c = param_3;
    (this->CGraphicCurve_data).offset_0x54 = 0;
    return;
  }
  (this->CGraphicCurve_data).offset_0x28 = param_4;
  (this->CGraphicCurve_data).offset_0x48 = param_5;
  return;
}



/* ---- SetTarget @ 6000a0b0 size=112 ---- */

/* public: void __thiscall CGraphicCurve::SetTarget(float,float,int) */

void __thiscall
CGraphicCurve::SetTarget(CGraphicCurve *this,float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  
                    /* 0xa0b0  443  ?SetTarget@CGraphicCurve@@QAEXMMH@Z */
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x30 = fVar1;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  (this->CGraphicCurve_data).offset_0x50 = fVar2;
  if (param_1 == fVar1) {
    (this->CGraphicCurve_data).offset_0x28 = param_1;
  }
  if (param_2 == fVar2) {
    (this->CGraphicCurve_data).offset_0x48 = param_2;
  }
  bVar3 = (this->CGraphicCurve_data).offset_0x14;
  if ((bVar3 & 1) != 0) {
    (this->CGraphicCurve_data).offset_0x38 = param_1;
  }
  if ((bVar3 & 2) != 0) {
    (this->CGraphicCurve_data).offset_0x58 = param_2;
  }
  if (param_3 != 0) {
    _ifCalculateSetting(this);
  }
  return;
}



/* ---- SetPivot @ 6000a120 size=22 ---- */

/* public: void __thiscall CGraphicCurve::SetPivot(char,int) */

void __thiscall CGraphicCurve::SetPivot(CGraphicCurve *this,char param_1,int param_2)

{
                    /* 0xa120  416  ?SetPivot@CGraphicCurve@@QAEXDH@Z */
  (this->CGraphicCurve_data).offset_0x14 = param_1;
  if (param_2 != 0) {
    _ifCalculateSetting(this);
  }
  return;
}



/* ---- SetNormal @ 6000a140 size=199 ---- */

/* public: void __thiscall CGraphicCurve::SetNormal(float,float,float,float,unsigned long,char) */

void __thiscall
CGraphicCurve::SetNormal
          (CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,ulong param_5
          ,char param_6)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  
                    /* 0xa140  412  ?SetNormal@CGraphicCurve@@QAEXMMMMKD@Z */
  (this->CGraphicCurve_data).offset_0x84 = param_5;
  bVar3 = param_6 & 1;
  (this->CGraphicCurve_data).offset_0x88 = 0;
  (this->CGraphicCurve_data).offset_0x14 = param_6;
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x30 = param_1;
  }
  bVar4 = param_6 & 2;
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x50 = param_2;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x28 = param_1;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x48 = param_2;
  }
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x30 = fVar1;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  (this->CGraphicCurve_data).offset_0x50 = fVar2;
  if (param_3 == fVar1) {
    (this->CGraphicCurve_data).offset_0x28 = param_3;
  }
  if (param_4 == fVar2) {
    (this->CGraphicCurve_data).offset_0x48 = param_4;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x38 = param_3;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x58 = param_4;
  }
  (this->CGraphicCurve_data).offset_0x18 = 0;
  (this->CGraphicCurve_data).offset_0x10 = _SafeAction_NORMAL;
  _ifCalculateSetting(this);
  return;
}



/* ---- SetJelly @ 6000a210 size=199 ---- */

/* public: void __thiscall CGraphicCurve::SetJelly(float,float,float,float,unsigned long,char) */

void __thiscall
CGraphicCurve::SetJelly
          (CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,ulong param_5
          ,char param_6)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  
                    /* 0xa210  409  ?SetJelly@CGraphicCurve@@QAEXMMMMKD@Z */
  (this->CGraphicCurve_data).offset_0x84 = param_5;
  bVar3 = param_6 & 1;
  (this->CGraphicCurve_data).offset_0x88 = 0;
  (this->CGraphicCurve_data).offset_0x14 = param_6;
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x30 = param_1;
  }
  bVar4 = param_6 & 2;
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x50 = param_2;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x28 = param_1;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x48 = param_2;
  }
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x30 = fVar1;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  (this->CGraphicCurve_data).offset_0x50 = fVar2;
  if (param_3 == fVar1) {
    (this->CGraphicCurve_data).offset_0x28 = param_3;
  }
  if (param_4 == fVar2) {
    (this->CGraphicCurve_data).offset_0x48 = param_4;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x38 = param_3;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x58 = param_4;
  }
  (this->CGraphicCurve_data).offset_0x18 = 1;
  (this->CGraphicCurve_data).offset_0x10 = _SafeAction_JELLY;
  _ifCalculateSetting(this);
  return;
}



/* ---- SetTough @ 6000a2e0 size=199 ---- */

/* public: void __thiscall CGraphicCurve::SetTough(float,float,float,float,unsigned long,char) */

void __thiscall
CGraphicCurve::SetTough
          (CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,ulong param_5
          ,char param_6)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  
                    /* 0xa2e0  446  ?SetTough@CGraphicCurve@@QAEXMMMMKD@Z */
  (this->CGraphicCurve_data).offset_0x84 = param_5;
  bVar3 = param_6 & 1;
  (this->CGraphicCurve_data).offset_0x88 = 0;
  (this->CGraphicCurve_data).offset_0x14 = param_6;
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x30 = param_1;
  }
  bVar4 = param_6 & 2;
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x50 = param_2;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x28 = param_1;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x48 = param_2;
  }
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x30 = fVar1;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  (this->CGraphicCurve_data).offset_0x50 = fVar2;
  if (param_3 == fVar1) {
    (this->CGraphicCurve_data).offset_0x28 = param_3;
  }
  if (param_4 == fVar2) {
    (this->CGraphicCurve_data).offset_0x48 = param_4;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x38 = param_3;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x58 = param_4;
  }
  (this->CGraphicCurve_data).offset_0x18 = 2;
  (this->CGraphicCurve_data).offset_0x10 = _SafeAction_TOUGH;
  _ifCalculateSetting(this);
  return;
}



/* ---- SetStraight @ 6000a3b0 size=192 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGraphicCurve::SetStraight(float,float,float,float,float,char) */

void __thiscall
CGraphicCurve::SetStraight
          (CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,char param_6)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  
  fVar1 = (float)_DAT_600180e8;
                    /* 0xa3b0  441  ?SetStraight@CGraphicCurve@@QAEXMMMMMD@Z */
  bVar3 = param_6 & 1;
  (this->CGraphicCurve_data).offset_0x14 = param_6;
  (this->CGraphicCurve_data).offset_0x20 = param_5 / fVar1;
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x30 = param_1;
  }
  bVar4 = param_6 & 2;
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x50 = param_2;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x28 = param_1;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x48 = param_2;
  }
  fVar1 = (this->CGraphicCurve_data).offset_0x28;
  (this->CGraphicCurve_data).offset_0x30 = fVar1;
  fVar2 = (this->CGraphicCurve_data).offset_0x48;
  (this->CGraphicCurve_data).offset_0x50 = fVar2;
  if (param_3 == fVar1) {
    (this->CGraphicCurve_data).offset_0x28 = param_3;
  }
  if (param_4 == fVar2) {
    (this->CGraphicCurve_data).offset_0x48 = param_4;
  }
  if (bVar3 != 0) {
    (this->CGraphicCurve_data).offset_0x38 = param_3;
  }
  if (bVar4 != 0) {
    (this->CGraphicCurve_data).offset_0x58 = param_4;
  }
  (this->CGraphicCurve_data).offset_0x18 = 3;
  (this->CGraphicCurve_data).offset_0x10 = _SafeAction_STRAIGHT;
  _ifCalculateSetting(this);
  return;
}



/* ---- SetDamping @ 6000a470 size=135 ---- */

/* public: void __thiscall
   CGraphicCurve::SetDamping(float,float,float,float,float,float,float,float,char) */

void __thiscall
CGraphicCurve::SetDamping
          (CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,float param_6,float param_7,float param_8,char param_9)

{
  byte bVar1;
  
                    /* 0xa470  392  ?SetDamping@CGraphicCurve@@QAEXMMMMMMMMD@Z */
  (this->CGraphicCurve_data).offset_0x18 = 4;
  (this->CGraphicCurve_data).offset_0x10 = _SafeAction_DAMPING;
  _ifCalculateSetting(this);
  (this->CGraphicCurve_data).offset_0x14 = param_9;
  _ifCalculateSetting(this);
  bVar1 = (this->CGraphicCurve_data).offset_0x14;
  if ((bVar1 & 1) != 0) {
    (this->CGraphicCurve_data).offset_0x3c = param_7;
    (this->CGraphicCurve_data).offset_0x40 = param_8;
  }
  if ((bVar1 & 2) != 0) {
    (this->CGraphicCurve_data).offset_0x5c = param_7;
    (this->CGraphicCurve_data).offset_0x60 = param_8;
  }
  (this->CGraphicCurve_data).offset_0x38 = param_3;
  (this->CGraphicCurve_data).offset_0x28 = param_1;
  (this->CGraphicCurve_data).offset_0x64 = param_1;
  (this->CGraphicCurve_data).offset_0x2c = param_1;
  (this->CGraphicCurve_data).offset_0x34 = param_5;
  (this->CGraphicCurve_data).offset_0x58 = param_4;
  (this->CGraphicCurve_data).offset_0x48 = param_2;
  (this->CGraphicCurve_data).offset_0x68 = param_2;
  (this->CGraphicCurve_data).offset_0x4c = param_2;
  (this->CGraphicCurve_data).offset_0x54 = param_6;
  return;
}



/* ---- SetQuad @ 6000a500 size=306 ---- */

/* public: void __thiscall CGraphicCurve::SetQuad(float,float,float,float,float,float) */

void __thiscall
CGraphicCurve::SetQuad
          (CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,float param_6)

{
  float fVar1;
  float10 fVar2;
  int local_8;
  
                    /* 0xa500  425  ?SetQuad@CGraphicCurve@@QAEXMMMMMM@Z */
  (this->CGraphicCurve_data).offset_0x2c = param_1;
  (this->CGraphicCurve_data).offset_0x28 = param_1;
  (this->CGraphicCurve_data).offset_0x4c = param_2;
  (this->CGraphicCurve_data).offset_0x48 = param_2;
  (this->CGraphicCurve_data).offset_0x38 = param_3;
  (this->CGraphicCurve_data).offset_0x58 = param_4;
  (this->CGraphicCurve_data).offset_0x34 = 0x3f800000;
  (this->CGraphicCurve_data).offset_0x54 = 0x3f800000;
  (this->CGraphicCurve_data).offset_0x0 = param_5;
  (this->CGraphicCurve_data).offset_0x4 = param_6;
  fVar2 = (float10)_CIsqrt();
  (this->CGraphicCurve_data).offset_0x8 = (float)fVar2;
  if (param_6 == 0.0) {
    fVar1 = (float)fVar2 / param_5;
  }
  else {
    fVar2 = (float10)_CIsqrt();
    fVar1 = (float)fVar2;
    if (fVar1 <= -param_5) {
      fVar1 = -param_5 - fVar1;
    }
    else {
      fVar1 = fVar1 - param_5;
    }
    fVar1 = fVar1 / param_6;
  }
  (this->CGraphicCurve_data).offset_0xc = 0;
  (this->CGraphicCurve_data).offset_0x88 = 0;
  (this->CGraphicCurve_data).offset_0x18 = 5;
  (this->CGraphicCurve_data).offset_0x10 = _SafeAction_QUAD;
  local_8 = (int)(longlong)ROUND(fVar1);
  (this->CGraphicCurve_data).offset_0x84 = local_8;
  _ifCalculateSetting(this);
  return;
}



/* ---- CGraphicCurve @ 6000a640 size=134 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CGraphicCurve::CGraphicCurve(void) */

CGraphicCurve * __thiscall CGraphicCurve::CGraphicCurve(CGraphicCurve *this)

{
                    /* 0xa640  21  ??0CGraphicCurve@@QAE@XZ */
  (this->CGraphicCurve_data).offset_0x1c = _DAT_60017940;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCurve_data).offset_0x28 = 0.0;
  (this->CGraphicCurve_data).offset_0x24 = 0;
  (this->CGraphicCurve_data).offset_0x2c = 0;
  (this->CGraphicCurve_data).offset_0x44 = 0;
  (this->CGraphicCurve_data).offset_0x30 = 0.0;
  (this->CGraphicCurve_data).offset_0x14 = 7;
  (this->CGraphicCurve_data).offset_0x34 = 0;
  (this->CGraphicCurve_data).offset_0x84 = 1000;
  (this->CGraphicCurve_data).offset_0x38 = 0.0;
  (this->CGraphicCurve_data).offset_0x88 = 0;
  (this->CGraphicCurve_data).offset_0x3c = 0;
  (this->CGraphicCurve_data).offset_0x18 = 4;
  (this->CGraphicCurve_data).offset_0x40 = 0;
  (this->CGraphicCurve_data).offset_0x10 = _SafeAction_DAMPING;
  (this->CGraphicCurve_data).offset_0x48 = 0.0;
  (this->CGraphicCurve_data).offset_0x4c = 0;
  (this->CGraphicCurve_data).offset_0x50 = 0.0;
  (this->CGraphicCurve_data).offset_0x54 = 0;
  (this->CGraphicCurve_data).offset_0x58 = 0.0;
  (this->CGraphicCurve_data).offset_0x5c = 0;
  (this->CGraphicCurve_data).offset_0x60 = 0;
  (this->CGraphicCurve_data).offset_0x20 = 0.0;
  (this->CGraphicCurve_data).offset_0x64 = 0;
  (this->CGraphicCurve_data).offset_0x68 = 0;
  (this->CGraphicCurve_data).offset_0x0 = 0;
  (this->CGraphicCurve_data).offset_0x4 = 0;
  (this->CGraphicCurve_data).offset_0x8 = 0;
  (this->CGraphicCurve_data).offset_0xc = 0;
  _ifCalculateSetting(this);
  return this;
}



/* ---- vfunction23 @ 6000a6d0 size=11 ---- */

undefined4 __thiscall CAnimateGmApp::vfunction23(CAnimateGmApp *this)

{
  CWinApp::InitInstance((CWinApp *)this);
  return 1;
}



/* ---- CWinApp::ExitInstance @ 6000a6e0 size=5 ---- */

int __thiscall CWinApp::CWinApp__ExitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6001501a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}



/* ---- vfunction13 @ 6000a6f0 size=6 ---- */

undefined ** __thiscall CAnimateGmApp::vfunction13(CAnimateGmApp *this)

{
  return &PTR_LAB_600180f0;
}



/* ---- scalar_deleting_destructor @ 6000a700 size=30 ---- */

CWinApp * __thiscall CAnimateGmApp::scalar_deleting_destructor(CAnimateGmApp *this,byte param_1)

{
  CWinApp::~CWinApp((CWinApp *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CWinApp *)this;
}



/* ---- FUN_6000a720 @ 6000a720 size=3 ---- */

undefined4 FUN_6000a720(void)

{
  return 0;
}



/* ---- FUN_6000a730 @ 6000a730 size=96 ---- */

void __thiscall FUN_6000a730(void *this,uint param_1)

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



/* ---- ~CHgDIB16E @ 6000a790 size=12 ---- */

/* public: virtual __thiscall CHgDIB16E::~CHgDIB16E(void) */

void __thiscall CHgDIB16E::~CHgDIB16E(CHgDIB16E *this)

{
                    /* 0xa790  57  ??1CHgDIB16E@@UAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x6000a796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB16::~CHgDIB16((CHgDIB16 *)this);
  return;
}



/* ---- PutPixel @ 6000a7a0 size=6 ---- */

/* public: void __thiscall CHgDIB16E::PutPixel(long,long,unsigned short) */

void __thiscall CHgDIB16E::PutPixel(CHgDIB16E *this,long param_1,long param_2,ushort param_3)

{
                    /* WARNING: Could not recover jumptable at 0x6000a7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0xa7a0  365  ?PutPixel@CHgDIB16E@@QAEXJJG@Z */
  CHgImage16::PutPixelCopy_NRC((CHgImage16 *)this,param_1,param_2,param_3);
  return;
}



/* ---- PutPixel @ 6000a7b0 size=6 ---- */

/* public: void __thiscall CHgDIB16E::PutPixel(long,long,unsigned long) */

void __thiscall CHgDIB16E::PutPixel(CHgDIB16E *this,long param_1,long param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x6000a7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0xa7b0  366  ?PutPixel@CHgDIB16E@@QAEXJJK@Z */
  CHgImage16::PutPixelCopy_NRC((CHgImage16 *)this,param_1,param_2,param_3);
  return;
}



/* ---- CHgDIB16E @ 6000a7c0 size=19 ---- */

/* public: __thiscall CHgDIB16E::CHgDIB16E(void) */

CHgDIB16E * __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this)

{
                    /* 0xa7c0  23  ??0CHgDIB16E@@QAE@XZ */
  CHgDIB16::CHgDIB16((CHgDIB16 *)this);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- scalar_deleting_destructor @ 6000a7e0 size=89 ---- */

CHgDIB16 * __thiscall CHgDIB16E::scalar_deleting_destructor(CHgDIB16E *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CHgDIB16E::~CHgDIB16E */
    this->vftablePtr = &_vftable_;
    CHgDIB16::~CHgDIB16((CHgDIB16 *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CHgDIB16 *)this;
  }
  _eh_vector_destructor_iterator_(this,100,(int)this[-1].vftablePtr,~CHgDIB16E);
  if ((param_1 & 1) != 0) {
    operator_delete__((CHgDIB16 *)(this + -1));
  }
  return (CHgDIB16 *)(this + -1);
}



/* ---- CHgDDB16E @ 6000a840 size=26 ---- */

/* public: __thiscall CHgDDB16E::CHgDDB16E(void) */

CHgDDB16E * __thiscall CHgDDB16E::CHgDDB16E(CHgDDB16E *this)

{
                    /* 0xa840  22  ??0CHgDDB16E@@QAE@XZ */
  CHgDIB16::CHgDIB16((CHgDIB16 *)this);
  this->vftablePtr = &_vftable_;
  (this->CHgDDB16E_data).offset_0x60 = 0;
  return this;
}



/* ---- CHgDDB16E::Create @ 6000a860 size=93 ---- */

/* public: virtual bool __thiscall CHgDDB16E::Create(int,int) */

bool __thiscall CHgDDB16E::CHgDDB16E__Create(CHgDDB16E *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
                    /* 0xa860  128  ?Create@CHgDDB16E@@UAE_NHH@Z */
  bVar1 = CHgImageBase::CreateFrame((CHgImageBase *)this,param_1,param_2);
  if (bVar1) {
    iVar2 = CHgImageBase::GetBitsPerPixel((CHgImageBase *)this);
    uVar4 = (iVar2 * param_1 + 7 >> 3) + 3U & 0xfffffffc;
    pvVar3 = operator_new__(uVar4 * param_2);
    (this->CHgDDB16E_data).offset_0x60 = pvVar3;
    CHgImageBase::SetVHeads((CHgImageBase *)this,pvVar3,uVar4);
    return true;
  }
  return false;
}



/* ---- CHgDDB16E::Destroy @ 6000a8c0 size=31 ---- */

/* public: virtual void __thiscall CHgDDB16E::Destroy(void) */

void __thiscall CHgDDB16E::CHgDDB16E__Destroy(CHgDDB16E *this)

{
                    /* 0xa8c0  166  ?Destroy@CHgDDB16E@@UAEXXZ */
  operator_delete__((void *)(this->CHgDDB16E_data).offset_0x60);
  (this->CHgDDB16E_data).offset_0x60 = 0;
                    /* WARNING: Could not recover jumptable at 0x6000a8d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB16::Destroy((CHgDIB16 *)this);
  return;
}



/* ---- ~CHgDDB16E @ 6000a8e0 size=120 ---- */

/* public: virtual __thiscall CHgDDB16E::~CHgDDB16E(void) */

void __thiscall CHgDDB16E::~CHgDDB16E(CHgDDB16E *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa8e0  56  ??1CHgDDB16E@@UAE@XZ */
  puStack_8 = &LAB_600167e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  operator_delete__((void *)(this->CHgDDB16E_data).offset_0x60);
  (this->CHgDDB16E_data).offset_0x60 = 0;
  CHgDIB16::Destroy((CHgDIB16 *)this);
  local_4 = 0xffffffff;
                    /* inlined destructor: CHgDIB16E::~CHgDIB16E */
  this->vftablePtr = (CHgDDB16E_vftable *)&CHgDIB16E::_vftable_;
  CHgDIB16::~CHgDIB16((CHgDIB16 *)this);
  ExceptionList = local_c;
  return;
}



/* ---- scalar_deleting_destructor @ 6000a960 size=82 ---- */

CHgDDB16E * __thiscall CHgDDB16E::scalar_deleting_destructor(CHgDDB16E *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CHgDDB16E(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CHgDDB16E *)this;
  }
  puVar1 = &this[-1].CHgDDB16E_data.offset_0x60;
  _eh_vector_destructor_iterator_(this,0x68,this[-1].CHgDDB16E_data.offset_0x60,~CHgDDB16E);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CHgDDB16E *)puVar1;
}



/* ---- HalfImage @ 6000a9c0 size=733 ---- */

/* public: void __thiscall CHgDIB16E::HalfImage(class CHgImage16 &) */

void __thiscall CHgDIB16E::HalfImage(CHgDIB16E *this,CHgImage16 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uchar *puVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  int iVar16;
  int iVar17;
  uint local_2c;
  int local_28;
  uint local_24;
  uchar *local_20;
  CHgImageBase *local_1c;
  CHgImageBase *local_18;
  ushort *local_14;
  byte local_10;
  undefined1 uStack_f;
  byte bStack_e;
  undefined1 uStack_d;
  byte local_c;
  undefined1 uStack_b;
  byte bStack_a;
  byte bStack_9;
  uint local_4;
  
                    /* 0xa9c0  254  ?HalfImage@CHgDIB16E@@QAEXAAVCHgImage16@@@Z */
  local_4 = DAT_600259a8 ^ (uint)&local_2c;
  local_18 = (CHgImageBase *)param_1;
  local_1c = (CHgImageBase *)this;
  uVar6 = CHgImageBase::GetTransparentColor((CHgImageBase *)param_1);
  uVar7 = CHgImageBase::GetTransparentColor((CHgImageBase *)param_1);
  iVar17 = 0;
  iVar16 = 0x100;
  uVar8 = CHgImageBase::GetTransparentColor((CHgImageBase *)param_1);
  uVar9 = (uVar8 >> 0x10 & 0xff) >> 3 | ((uVar7 & 0xf8) << 5 | uVar6 >> 8 & 0xf8) * 4;
  iVar10 = CHgImageBase::GetHeight((CHgImageBase *)param_1);
  iVar11 = CHgImageBase::GetWidth((CHgImageBase *)param_1);
  CHgImage16::FillRect((CHgImage16 *)param_1,0,0,iVar11,iVar10,uVar9,iVar16,iVar17);
  uVar6 = CHgImageBase::GetTransparentColor((CHgImageBase *)this);
  uVar7 = CHgImageBase::GetTransparentColor((CHgImageBase *)this);
  uVar8 = CHgImageBase::GetTransparentColor((CHgImageBase *)this);
  local_24 = (uint)(ushort)((ushort)((byte)(uVar8 >> 0x13) & 0x1f) |
                           ((ushort)((byte)uVar7 & 0xf8) << 5 | (ushort)((byte)(uVar6 >> 8) & 0xf8))
                           * 4);
  local_28 = 1;
  iVar10 = CHgImageBase::GetHeight((CHgImageBase *)this);
  if (1 < iVar10) {
    do {
      iVar10 = CHgImageBase::GetPitchWord((CHgImageBase *)this);
      iVar10 = iVar10 * local_28;
      puVar12 = CHgImageBase::GetBits((CHgImageBase *)this,0);
      iVar11 = CHgImageBase::GetPitchWord((CHgImageBase *)param_1);
      iVar16 = local_28 / 2;
      local_20 = CHgImageBase::GetBits((CHgImageBase *)param_1,0);
      local_20 = local_20 + iVar11 * iVar16 * 2;
      iVar16 = 1;
      iVar11 = CHgImageBase::GetWidth((CHgImageBase *)this);
      if (1 < iVar11) {
        do {
          local_14 = (ushort *)(local_20 + (iVar16 / 2) * 2);
          iVar11 = CHgImageBase::GetPitchWord((CHgImageBase *)this);
          uVar1 = *(ushort *)(puVar12 + (iVar16 - iVar11) * 2 + iVar10 * 2 + -2);
          local_10 = (byte)uVar1;
          uStack_f = (undefined1)(uVar1 >> 8);
          iVar11 = CHgImageBase::GetPitchWord((CHgImageBase *)this);
          this = (CHgDIB16E *)local_1c;
          uVar2 = *(ushort *)(puVar12 + iVar16 * 2 + iVar10 * 2 + -2);
          uVar3 = *(ushort *)(puVar12 + (iVar16 - iVar11) * 2 + iVar10 * 2);
          uVar4 = *(ushort *)(puVar12 + iVar16 * 2 + iVar10 * 2);
          bStack_e = (byte)uVar3;
          uStack_d = (undefined1)(uVar3 >> 8);
          local_c = (byte)uVar2;
          uStack_b = (undefined1)(uVar2 >> 8);
          bStack_a = (byte)uVar4;
          bStack_9 = (byte)(uVar4 >> 8);
          bVar13 = 0;
          bVar14 = 0;
          bVar5 = 0;
          uVar15 = (ushort)local_24;
          if (uVar1 != uVar15) {
            uVar9 = CONCAT13(uStack_d,CONCAT12(bStack_e,CONCAT11(uStack_f,local_10)));
            bVar13 = (byte)(uVar9 >> 10) & 0x1f;
            bVar14 = (byte)(uVar9 >> 5) & 0x1f;
            bVar5 = local_10 & 0x1f;
          }
          local_2c = (uint)(uVar1 != uVar15);
          if (uVar3 != uVar15) {
            uVar9 = CONCAT13(uStack_b,CONCAT12(local_c,uVar3));
            bVar13 = bVar13 + ((byte)(uVar9 >> 10) & 0x1f);
            bVar14 = bVar14 + ((byte)(uVar9 >> 5) & 0x1f);
            bVar5 = bVar5 + (bStack_e & 0x1f);
            local_2c = local_2c + 1;
          }
          if (uVar2 != uVar15) {
            uVar9 = CONCAT13(bStack_9,CONCAT12(bStack_a,uVar2));
            bVar13 = bVar13 + ((byte)(uVar9 >> 10) & 0x1f);
            bVar14 = bVar14 + ((byte)(uVar9 >> 5) & 0x1f);
            bVar5 = bVar5 + (local_c & 0x1f);
            local_2c = local_2c + 1;
          }
          if (uVar4 != uVar15) {
            bVar13 = bVar13 + (bStack_9 >> 2 & 0x1f);
            bVar14 = bVar14 + ((byte)(uVar4 >> 5) & 0x1f);
            bVar5 = bVar5 + (bStack_a & 0x1f);
            local_2c = local_2c + 1;
          }
          if (1 < local_2c) {
            *local_14 = ((bVar13 & 0xfffc) << 5 | bVar14 & 0xfffc) * 8 | (ushort)(bVar5 >> 2);
          }
          iVar16 = iVar16 + 2;
          iVar11 = CHgImageBase::GetWidth(local_1c);
        } while (iVar16 < iVar11);
        param_1 = (CHgImage16 *)local_18;
      }
      iVar11 = local_28 + 2;
      local_28 = iVar11;
      iVar10 = CHgImageBase::GetHeight((CHgImageBase *)this);
    } while (iVar11 < iVar10);
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}



/* ---- SetZOrder @ 6000aca0 size=45 ---- */

/* public: int __thiscall CGraphicCtrl::SetZOrder(unsigned char,class CGraphicCtrl *) */

int __thiscall CGraphicCtrl::SetZOrder(CGraphicCtrl *this,uchar param_1,CGraphicCtrl *param_2)

{
  int iVar1;
  undefined3 in_stack_00000005;
  
                    /* 0xaca0  450  ?SetZOrder@CGraphicCtrl@@QAEHEPAV1@@Z */
  if ((this->CGraphicCtrl_data).offset_0xd8 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(this->CGraphicCtrl_data).offset_0xd8 + 0x30))(this,_param_1,param_2)
  ;
  return iVar1;
}



/* ---- Printf @ 6000acd0 size=210 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: static int __cdecl CGraphicCtrl::Printf(struct HDC__ *,int,int,unsigned long,struct
   HFONT__ *,char *,...) */

int __cdecl
CGraphicCtrl::Printf
          (HDC__ *param_1,int param_2,int param_3,ulong param_4,HFONT__ *param_5,char *param_6,...)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char cStack0000001c;
  HGDIOBJ local_1008;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0xacd0  350  ?Printf@CGraphicCtrl@@SAHPAUHDC__@@HHKPAUHFONT__@@PADZZ */
  local_4 = DAT_600259a8 ^ (uint)&local_1008;
  if (param_5 != (HFONT__ *)0x0) {
    vsprintf_s(local_1004,0x1000,param_6,&cStack0000001c);
    iVar2 = SetBkMode(param_1,1);
    SetTextColor(param_1,param_4);
    local_1008 = SelectObject(param_1,param_5);
    pcVar3 = local_1004;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    TextOutA(param_1,param_2,param_3,local_1004,(int)pcVar3 - (int)(local_1004 + 1));
    SetBkMode(param_1,iVar2);
    SelectObject(param_1,local_1008);
  }
  iVar2 = __security_check_cookie(local_4 ^ (uint)&local_1008);
  return iVar2;
}



/* ---- IsShowing @ 6000adb0 size=42 ---- */

/* public: int __thiscall CGraphicCtrl::IsShowing(void) */

int __thiscall CGraphicCtrl::IsShowing(CGraphicCtrl *this)

{
  int iVar1;
  
                    /* 0xadb0  279  ?IsShowing@CGraphicCtrl@@QAEHXZ */
  iVar1 = (this->CGraphicCtrl_data).offset_0xc;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((this->CGraphicCtrl_data).offset_0x8 == -1) break;
    this = (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xd8;
    if (this == (CGraphicCtrl *)0x0) {
      return 0;
    }
    iVar1 = (this->CGraphicCtrl_data).offset_0xc;
  }
  return (this->CGraphicCtrl_data).offset_0xc;
}



/* ---- IsPlaying @ 6000adf0 size=31 ---- */

/* public: int __thiscall CGraphicCtrl::IsPlaying(void) */

int __thiscall CGraphicCtrl::IsPlaying(CGraphicCtrl *this)

{
  int iVar1;
  CGraphicCtrl *pCVar2;
  
                    /* 0xadf0  277  ?IsPlaying@CGraphicCtrl@@QAEHXZ */
  iVar1 = (this->CGraphicCtrl_data).offset_0x14;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    pCVar2 = (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xd8;
    if (pCVar2 == (CGraphicCtrl *)0x0) break;
    iVar1 = (pCVar2->CGraphicCtrl_data).offset_0x14;
    this = pCVar2;
  }
  return (this->CGraphicCtrl_data).offset_0x14;
}



/* ---- CGraphicCtrl::PostProc @ 6000ae10 size=5 ---- */

/* public: virtual int __thiscall CGraphicCtrl::PostProc(unsigned long)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Text
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CHgDummyCtrl
   CGraphicCtrl member function inherited by CHgDummyCtrl
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall CGraphicCtrl::CGraphicCtrl__PostProc(CGraphicCtrl *this)

{
                    /* 0xae10  345  ?PostProc@CGraphicCtrl@@UAEHK@Z
                       0xae10  351  ?Proc@CGraphicCtrl@@UAEHK@Z
                       0xae10  455  ?ThrdAnimationProc@CAnimateGameWnd@@SGKPAX@Z */
  return 0;
}



/* ---- CGraphicCtrl::DrawProc @ 6000ae20 size=78 ---- */

/* public: virtual int __thiscall CGraphicCtrl::DrawProc(class CRect &,class CRect &)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Text
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox */

int __thiscall
CGraphicCtrl::CGraphicCtrl__DrawProc(CGraphicCtrl *this,CRect *param_1,CRect *param_2)

{
                    /* 0xae20  168  ?DrawProc@CGraphicCtrl@@UAEHAAVCRect@@0@Z */
  CHgImage::Draw((CHgImage *)s_pBackBuf,*(int *)param_2,*(int *)(param_2 + 4),
                 (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20,*(int *)param_1,
                 *(int *)(param_1 + 4),*(int *)(param_1 + 8) - *(int *)param_1,
                 *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4),
                 (uint)(byte)(this->CGraphicCtrl_data).offset_0x11f,
                 (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c);
  return 1;
}



/* ---- GetPosScreen @ 6000ae70 size=75 ---- */

/* public: class CPoint __thiscall CGraphicCtrl::GetPosScreen(void) */

undefined8 __thiscall CGraphicCtrl::GetPosScreen(CGraphicCtrl *this)

{
  CGraphicCtrl *this_00;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  int iVar1;
  ulonglong uVar2;
  int *in_stack_00000004;
  int local_8;
  int local_4;
  
                    /* 0xae70  233  ?GetPosScreen@CGraphicCtrl@@QAE?AVCPoint@@XZ */
  uVar2 = FUN_60015470(this,in_EDX);
  *in_stack_00000004 = (int)uVar2;
  uVar2 = FUN_60015470(extraout_ECX,(int)(uVar2 >> 0x20));
  this_00 = (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xd8;
  in_stack_00000004[1] = (int)uVar2;
  iVar1 = (int)(uVar2 >> 0x20);
  if (this_00 != (CGraphicCtrl *)0x0) {
    GetPosScreen(this_00);
    *in_stack_00000004 = *in_stack_00000004 + local_8;
    in_stack_00000004[1] = in_stack_00000004[1] + local_4;
    iVar1 = local_4;
  }
  return CONCAT44(iVar1,in_stack_00000004);
}



/* ---- GetArea @ 6000aec0 size=120 ---- */

/* public: class CRect __thiscall CGraphicCtrl::GetArea(void) */

LPRECT __thiscall CGraphicCtrl::GetArea(CGraphicCtrl *this)

{
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  ulonglong uVar1;
  LPRECT in_stack_00000004;
  
                    /* 0xaec0  195  ?GetArea@CGraphicCtrl@@QAE?AVCRect@@XZ */
  uVar1 = FUN_60015470(this,in_EDX);
  in_stack_00000004->left = (LONG)uVar1;
  uVar1 = FUN_60015470(extraout_ECX,(int)(uVar1 >> 0x20));
  in_stack_00000004->top = (LONG)uVar1;
  in_stack_00000004->right = in_stack_00000004->left + (this->CGraphicCtrl_data).offset_0xd0;
  in_stack_00000004->bottom = in_stack_00000004->top + (this->CGraphicCtrl_data).offset_0xd4;
  if ((this->CGraphicCtrl_data).offset_0x0 == '\0') {
    OffsetRect(in_stack_00000004,-(this->CGraphicCtrl_data).offset_0xc0,
               -(this->CGraphicCtrl_data).offset_0xc4);
  }
  return in_stack_00000004;
}



/* ---- GetAreaScreen @ 6000af40 size=64 ---- */

/* public: class CRect __thiscall CGraphicCtrl::GetAreaScreen(void) */

LPRECT __thiscall CGraphicCtrl::GetAreaScreen(CGraphicCtrl *this)

{
  CGraphicCtrl *this_00;
  LPRECT in_stack_00000004;
  int local_8;
  int local_4;
  
                    /* 0xaf40  196  ?GetAreaScreen@CGraphicCtrl@@QAE?AVCRect@@XZ */
  GetArea(this);
  this_00 = (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xd8;
  if (this_00 != (CGraphicCtrl *)0x0) {
    GetPosScreen(this_00);
    OffsetRect(in_stack_00000004,local_8,local_4);
  }
  return in_stack_00000004;
}



/* ---- SetPosBase_low @ 6000af80 size=35 ---- */

/* public: void __thiscall CGraphicCtrl::SetPosBase_low(int,int) */

void __thiscall CGraphicCtrl::SetPosBase_low(CGraphicCtrl *this,int param_1,int param_2)

{
  CGraphicCtrl_vftable *pCVar1;
  
                    /* 0xaf80  422  ?SetPosBase_low@CGraphicCtrl@@QAEXHH@Z */
  (this->CGraphicCtrl_data).offset_0xc0 = param_1;
  pCVar1 = this->vftablePtr;
  (this->CGraphicCtrl_data).offset_0xc4 = param_2;
  (*pCVar1->OnSelfNotice)(this,0xff02);
  return;
}



/* ---- SetPosBase @ 6000afb0 size=133 ---- */

/* public: void __thiscall CGraphicCtrl::SetPosBase(class CPoint) */

void __thiscall CGraphicCtrl::SetPosBase(CGraphicCtrl *this,int param_2,int param_3)

{
  OnSelfNotice *pOVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xafb0  421  ?SetPosBase@CGraphicCtrl@@QAEXVCPoint@@@Z */
  if (param_2 == -2) {
    iVar3 = (this->CGraphicCtrl_data).offset_0xd0 + -1;
  }
  else if (param_2 == -1) {
    iVar3 = (int)(this->CGraphicCtrl_data).offset_0xd0 / 2;
  }
  else {
    iVar3 = param_2;
  }
  if (param_3 == -2) {
    iVar2 = (this->CGraphicCtrl_data).offset_0xd4 + -1;
  }
  else if (param_3 == -1) {
    iVar2 = (int)(this->CGraphicCtrl_data).offset_0xd4 / 2;
  }
  else {
    iVar2 = param_3;
  }
  (this->CGraphicCtrl_data).offset_0xc4 = iVar2;
  pOVar1 = this->vftablePtr->OnSelfNotice;
  (this->CGraphicCtrl_data).offset_0xb4 = 1;
  (this->CGraphicCtrl_data).offset_0xb8 = param_2;
  (this->CGraphicCtrl_data).offset_0xbc = param_3;
  (this->CGraphicCtrl_data).offset_0xc0 = iVar3;
  (*pOVar1)(this,0xff02);
  return;
}



/* ---- Printf @ 6000b040 size=404 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: int __cdecl CGraphicCtrl::Printf(int,int,unsigned long,struct HFONT__ *,char *,...) */

int __thiscall
CGraphicCtrl::Printf
          (CGraphicCtrl *this,int param_1,int param_2,ulong param_3,HFONT__ *param_4,char *param_5,
          ...)

{
  char cVar1;
  int iVar2;
  CWinThread *pCVar3;
  HDC pHVar4;
  CDC *pCVar5;
  HBITMAP__ *h;
  HGDIOBJ h_00;
  char *pcVar6;
  char *in_stack_00000018;
  char cStack0000001c;
  char *local_1010;
  int iStack_100c;
  BOOL BStack_1008;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0xb040  349  ?Printf@CGraphicCtrl@@QAAHHHKPAUHFONT__@@PADZZ */
  local_4 = DAT_600259a8 ^ (uint)&local_1010;
  local_1010 = param_5;
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = __security_check_cookie(local_4 ^ (uint)&local_1010);
    return iVar2;
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (param_5 != (char *)0x0)) {
    vsprintf_s(local_1004,0x1000,in_stack_00000018,&cStack0000001c);
    pCVar3 = AfxGetThread();
    if (pCVar3 == (CWinThread *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*(int *)pCVar3 + 0x7c))();
    }
    pHVar4 = GetDC(*(HWND *)(iVar2 + 0x20));
    pCVar5 = CDC::FromHandle(pHVar4);
    if (pCVar5 != (CDC *)0x0) {
      pHVar4 = CreateCompatibleDC(*(HDC *)(pCVar5 + 4));
      pCVar3 = AfxGetThread();
      if (pCVar3 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar3 + 0x7c))();
      }
      ReleaseDC(*(HWND *)(iVar2 + 0x20),*(HDC *)(pCVar5 + 4));
      if (pHVar4 != (HDC)0x0) {
        h = CHgDIB::GetHBitmap(*(CHgDIB **)(param_1 + 0x24));
        h_00 = SelectObject(pHVar4,h);
        iStack_100c = SetBkMode(pHVar4,1);
        SetTextColor(pHVar4,(COLORREF)param_4);
        local_1010 = SelectObject(pHVar4,local_1010);
        pcVar6 = local_1004;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        BStack_1008 = TextOutA(pHVar4,param_2,param_3,local_1004,(int)pcVar6 - (int)(local_1004 + 1)
                              );
        SetBkMode(pHVar4,iStack_100c);
        SelectObject(pHVar4,local_1010);
        SelectObject(pHVar4,h_00);
        DeleteDC(pHVar4);
      }
    }
  }
  iVar2 = __security_check_cookie(local_4 ^ (uint)&local_1010);
  return iVar2;
}



/* ---- DrawString @ 6000b1e0 size=414 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: int __cdecl CGraphicCtrl::DrawString(class CRect &,unsigned long,struct HFONT__
   *,unsigned int,char *,...) */

int __thiscall
CGraphicCtrl::DrawString
          (CGraphicCtrl *this,CRect *param_1,ulong param_2,HFONT__ *param_3,uint param_4,
          char *param_5,...)

{
  char cVar1;
  int iVar2;
  CWinThread *pCVar3;
  HDC pHVar4;
  CDC *pCVar5;
  HBITMAP__ *h;
  HGDIOBJ h_00;
  char *pcVar6;
  char *in_stack_00000018;
  char cStack0000001c;
  LPRECT local_1010;
  HGDIOBJ local_100c;
  int iStack_1008;
  char local_1004 [4096];
  uint local_4;
  
                    /* 0xb1e0  177  ?DrawString@CGraphicCtrl@@QAAHAAVCRect@@KPAUHFONT__@@IPADZZ */
  local_4 = DAT_600259a8 ^ (uint)&local_1010;
  local_1010 = (LPRECT)param_2;
  local_100c = (HGDIOBJ)param_4;
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = __security_check_cookie(local_4 ^ (uint)&local_1010);
    return iVar2;
  }
  if ((*(int *)(param_1 + 0x24) != 0) && (param_4 != 0)) {
    vsprintf_s(local_1004,0x1000,in_stack_00000018,&cStack0000001c);
    pCVar3 = AfxGetThread();
    if (pCVar3 == (CWinThread *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*(int *)pCVar3 + 0x7c))();
    }
    pHVar4 = GetDC(*(HWND *)(iVar2 + 0x20));
    pCVar5 = CDC::FromHandle(pHVar4);
    if (pCVar5 != (CDC *)0x0) {
      pHVar4 = CreateCompatibleDC(*(HDC *)(pCVar5 + 4));
      pCVar3 = AfxGetThread();
      if (pCVar3 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar3 + 0x7c))();
      }
      ReleaseDC(*(HWND *)(iVar2 + 0x20),*(HDC *)(pCVar5 + 4));
      if (pHVar4 != (HDC)0x0) {
        h = CHgDIB::GetHBitmap(*(CHgDIB **)(param_1 + 0x24));
        h_00 = SelectObject(pHVar4,h);
        iStack_1008 = SetBkMode(pHVar4,1);
        SetTextColor(pHVar4,(COLORREF)param_3);
        local_100c = SelectObject(pHVar4,local_100c);
        pcVar6 = local_1004;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        local_1010 = (LPRECT)DrawTextA(pHVar4,local_1004,(int)pcVar6 - (int)(local_1004 + 1),
                                       local_1010,(UINT)param_5);
        SetBkMode(pHVar4,iStack_1008);
        SelectObject(pHVar4,local_100c);
        SelectObject(pHVar4,h_00);
        DeleteDC(pHVar4);
      }
    }
  }
  iVar2 = __security_check_cookie(local_4 ^ (uint)&local_1010);
  return iVar2;
}



/* ---- RemoveAt @ 6000b390 size=100 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CList<class IControlSiteFactory *,class IControlSiteFactory
   *>::RemoveAt(struct __POSITION *)
    public: void __thiscall CList<void *,void *>::RemoveAt(struct __POSITION *)
   
   Library: Visual Studio 2008 Release */

void __thiscall RemoveAt(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 == *(int **)((int)this + 4)) {
    *(int *)((int)this + 4) = *param_1;
  }
  else {
    *(int *)param_1[1] = *param_1;
  }
  if (param_1 == *(int **)((int)this + 8)) {
    *(int *)((int)this + 8) = param_1[1];
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  *param_1 = *(int *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(int **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    for (puVar2 = *(undefined4 **)((int)this + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    CPlex::FreeDataChain(*(CPlex **)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return;
}



/* ---- CList<CGraphicCtrl*,CGraphicCtrl*>_Constructor_or_Destructor @ 6000b400 size=51 ---- */

void __fastcall
CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>_Constructor_or_Destructor
          (undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = &vftable;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  CPlex::FreeDataChain((CPlex *)param_1[5]);
  param_1[5] = 0;
  return;
}



/* ---- scalar_deleting_destructor @ 6000b440 size=71 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CList<class IControlSiteFactory *,class IControlSiteFactory
   *>::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CList<void *,void *>::`scalar deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall CTypedPtrList<class CList<void *,void *>,struct
   COleControlSiteOrWnd *>::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall _CTypedPtrList<class CList<void *,void *>,struct
   COleControlSiteOrWnd *>::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2008 Release
   ***** Removed Bad FID Symbol(s) ***** */

void * __thiscall
CList<CGraphicCtrl*,CGraphicCtrl*>::scalar_deleting_destructor
          (CList<CGraphicCtrl*,CGraphicCtrl*> *this,uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0;
                    /* inlined destructor:
                       CList<CGraphicCtrl*,CGraphicCtrl*>::~CList<CGraphicCtrl*,CGraphicCtrl*> */
  this->vftablePtr = &vftable;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
  }
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x8 = 0;
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0xc = 0;
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x4 = 0;
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0 = (undefined4 *)0x0;
  CPlex::FreeDataChain((this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x10);
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x10 = (CPlex *)0x0;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_6000b490 @ 6000b490 size=158 ---- */

void FUN_6000b490(CArchive *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 != 0) && (param_2 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    if (param_3 != 0) {
      while( true ) {
        uVar3 = param_3;
        if (0x1ffffffe < param_3) {
          uVar3 = 0x1fffffff;
        }
        uVar1 = uVar3 * 4;
        uVar2 = CArchive::Read(param_1,param_2,uVar1);
        if (uVar2 != uVar1) break;
        param_3 = param_3 - uVar3;
        param_2 = (void *)((int)param_2 + uVar1);
        if (param_3 == 0) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      AfxThrowArchiveException(3,(char *)0x0);
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - uVar3) {
      uVar3 = param_3;
      if (0x1ffffffe < param_3) {
        uVar3 = 0x1fffffff;
      }
      CArchive::Write(param_1,param_2,uVar3 * 4);
      param_2 = (void *)((int)param_2 + uVar3 * 4);
    }
  }
  return;
}



/* ---- CList<CGraphicCtrl*,CGraphicCtrl*> @ 6000b540 size=502 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CGraphicCtrl::CGraphicCtrl(void) */

CList<CGraphicCtrl*,CGraphicCtrl*> * __thiscall
CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
          (CList<CGraphicCtrl*,CGraphicCtrl*> *this)

{
  undefined4 *puVar1;
  CPlex *this_00;
  float fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb540  2  ??0CGraphicCtrl@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001681e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = &this[1].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc;
                    /* inlined constructor: CGraphicCtrl::CGraphicCtrl */
  this->vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)&CGraphicCtrl::_vftable_;
  *(undefined1 *)&(this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0 = 0;
  this[1].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0;
  CGraphicCurve::CGraphicCurve((CGraphicCurve *)puVar1);
  this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = &vftable;
  this[10].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  this[10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x0;
  this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
  this[10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
  this[10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 10;
  fVar2 = _DAT_60018248;
  *(undefined2 *)&(this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x8 = 0xfffe;
  this[8].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  this[8].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
  this[8].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
  local_4 = 0;
  *(undefined1 *)((int)&(this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0 + 1) = 0;
  *(undefined1 *)((int)&(this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0 + 2) = 0;
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0xc = 0;
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x10 = (CPlex *)0x0;
  this[1].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  this[1].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[1].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 1;
  this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
  this[7].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
  this[7].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x0;
  this[8].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[8].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0;
  CGraphicCurve::SetRate((CGraphicCurve *)puVar1,fVar2,fVar2);
  this[8].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x0;
  this[9].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  for (puVar1 = (undefined4 *)this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc;
      puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
  }
  this_00 = (CPlex *)this[10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4;
  this[10].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  this[10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x0;
  this[9].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
  CPlex::FreeDataChain(this_00);
  this[10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
  this[0xe].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x3f800000;
  *(undefined1 *)&this[0xc].vftablePtr = 0;
  *(undefined1 *)((int)&this[0xc].vftablePtr + 1) = 0xff;
  *(undefined1 *)((int)&this[0xc].vftablePtr + 2) = 0xff;
  *(undefined1 *)((int)&this[0xc].vftablePtr + 3) = 0xff;
  this[0xc].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[0xc].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0;
  this[0xc].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
  this[0xc].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
  this[0xc].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x0;
  this[0xd].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  this[0xd].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[0xd].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
  this[0xd].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0;
  this[0xd].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
  this[0xd].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x0;
  this[0xe].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  this[0xe].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  this[0xe].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
  this[0xe].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0;
  this[0xe].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
  SetRect((LPRECT)&this[10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc,0,0,0,0);
  SetRect((LPRECT)&this[0xb].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4,0,0,9999,9999);
  (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x4 = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- SetParent @ 6000b740 size=142 ---- */

/* public: void __thiscall CGraphicCtrl::SetParent(class CGraphicCtrl *) */

void __thiscall CGraphicCtrl::SetParent(CGraphicCtrl *this,CGraphicCtrl *param_1)

{
  undefined4 *puVar1;
  OnSelfNotice *pOVar2;
  undefined4 *puVar3;
  int iVar4;
  RECT *lprcSrc2;
  
                    /* 0xb740  415  ?SetParent@CGraphicCtrl@@QAEXPAV1@@Z */
  pOVar2 = this->vftablePtr->OnSelfNotice;
  (this->CGraphicCtrl_data).offset_0xd8 = param_1;
  (*pOVar2)(this,0xff05);
  if (param_1 == (CGraphicCtrl *)0x0) {
    UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,
              (RECT *)&(this->CGraphicCtrl_data).field_0xfc);
    return;
  }
  iVar4 = IsShowing(this);
  if (iVar4 != 0) {
    lprcSrc2 = (RECT *)GetAreaScreen(this);
    UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,lprcSrc2);
  }
  if (0 < (int)(this->CGraphicCtrl_data).offset_0xec) {
    puVar3 = (this->CGraphicCtrl_data).offset_0xe4;
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      SetParent((CGraphicCtrl *)*puVar1,(CGraphicCtrl *)this);
    }
  }
  return;
}



/* ---- UpdateScreen @ 6000b7d0 size=353 ---- */

/* public: int __thiscall CGraphicCtrl::UpdateScreen(class CRect &) */

int __thiscall CGraphicCtrl::UpdateScreen(CGraphicCtrl *this,CRect *param_1)

{
  undefined4 *puVar1;
  undefined1 *lprcDst;
  CGraphicCtrl *this_00;
  undefined4 *puVar2;
  BOOL BVar3;
  uint uVar4;
  RECT *lprcSrc1;
  uint uVar5;
  tagRECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0xb7d0  456  ?UpdateScreen@CGraphicCtrl@@QAEHAAVCRect@@@Z */
  if ((this->CGraphicCtrl_data).offset_0xc == 0) {
    return 0;
  }
  uVar5 = 0;
  GetArea(this);
  this_00 = (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xd8;
  if (this_00 != (CGraphicCtrl *)0x0) {
    GetPosScreen(this_00);
    OffsetRect(&local_20,local_40.left,local_40.top);
  }
  IntersectRect(&local_10,(RECT *)param_1,(RECT *)&(this->CGraphicCtrl_data).field_0x10c);
  IntersectRect(&local_30,&local_20,&local_10);
  BVar3 = IsRectEmpty(&local_30);
  if (BVar3 == 0) {
    local_40.top = local_30.top;
    local_40.right = local_30.right;
    local_40.left = local_30.left;
    local_40.bottom = local_30.bottom;
    OffsetRect(&local_40,-local_20.left,-local_20.top);
    if ((this->CGraphicCtrl_data).offset_0x0 == '\0') {
      uVar5 = (*this->vftablePtr->DrawProc)(this,(CRect *)&local_40,(CRect *)&local_30);
      if (uVar5 == 0) goto LAB_6000b8f8;
      lprcSrc1 = &local_30;
    }
    else {
      OffsetRect(&local_30,-local_40.left,-local_40.top);
      uVar5 = (*this->vftablePtr->DrawProc)(this,(CRect *)&local_10,(CRect *)&local_30);
      if (uVar5 == 0) goto LAB_6000b8f8;
      lprcSrc1 = &local_10;
    }
    lprcDst = &(this->CGraphicCtrl_data).field_0xfc;
    UnionRect((LPRECT)lprcDst,lprcSrc1,(RECT *)lprcDst);
  }
LAB_6000b8f8:
  if (0 < (int)(this->CGraphicCtrl_data).offset_0xec) {
    puVar2 = (this->CGraphicCtrl_data).offset_0xe4;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      uVar4 = UpdateScreen((CGraphicCtrl *)*puVar1,param_1);
      uVar5 = uVar5 | uVar4;
    }
  }
  return uVar5;
}



/* ---- __AdjustShow @ 6000b940 size=86 ---- */

/* public: void __thiscall CGraphicCtrl::__AdjustShow(int) */

void __thiscall CGraphicCtrl::__AdjustShow(CGraphicCtrl *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0xb940  501  ?__AdjustShow@CGraphicCtrl@@QAEXH@Z */
  iVar3 = IsShowing(this);
  if (param_1 != iVar3) {
    Invalidate(this);
    UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,
              (RECT *)&(this->CGraphicCtrl_data).field_0xfc);
  }
  if (0 < (int)(this->CGraphicCtrl_data).offset_0xec) {
    puVar2 = (this->CGraphicCtrl_data).offset_0xe4;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      __AdjustShow((CGraphicCtrl *)*puVar1,param_1);
    }
  }
  return;
}



/* ---- AddHead @ 6000b9a0 size=48 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CList<class IControlSiteFactory *,class
   IControlSiteFactory *>::AddHead(class IControlSiteFactory *)
    public: struct __POSITION * __thiscall CList<void *,void *>::AddHead(void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall AddHead(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_600128b0(this,0,*(undefined4 *)((int)this + 4));
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int *)((int)this + 4) == 0) {
    *(int *)((int)this + 8) = iVar1;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
  *(int *)((int)this + 4) = iVar1;
  return;
}



/* ---- AddTail @ 6000b9d0 size=47 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CList<class IControlSiteFactory *,class
   IControlSiteFactory *>::AddTail(class IControlSiteFactory *)
    public: struct __POSITION * __thiscall CList<void *,void *>::AddTail(void *)
    public: struct __POSITION * __thiscall CTypedPtrList<class CList<void *,void *>,struct
   COleControlSiteOrWnd *>::AddTail(struct COleControlSiteOrWnd *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall AddTail(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_600128b0(this,*(undefined4 *)((int)this + 8),0);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int **)((int)this + 8) == (int *)0x0) {
    *(int *)((int)this + 4) = iVar1;
    *(int *)((int)this + 8) = iVar1;
    return;
  }
  **(int **)((int)this + 8) = iVar1;
  *(int *)((int)this + 8) = iVar1;
  return;
}



/* ---- InsertBefore @ 6000ba00 size=103 ---- */

/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<void *,void *>::InsertBefore(struct __POSITION
   *,void *)
   
   Library: Visual Studio 2008 Release */

__POSITION * __thiscall
CList<void*,void*>::InsertBefore(CList<void*,void*> *this,__POSITION *param_1,void *param_2)

{
  __POSITION *p_Var1;
  
  if (param_1 != (__POSITION *)0x0) {
    p_Var1 = (__POSITION *)FUN_600128b0(this,*(undefined4 *)(param_1 + 4),param_1);
    *(void **)(p_Var1 + 8) = param_2;
    if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
      *(__POSITION **)(this + 4) = p_Var1;
      *(__POSITION **)(param_1 + 4) = p_Var1;
      return p_Var1;
    }
    **(undefined4 **)(param_1 + 4) = p_Var1;
    *(__POSITION **)(param_1 + 4) = p_Var1;
    return p_Var1;
  }
  p_Var1 = (__POSITION *)FUN_600128b0(this,0,*(undefined4 *)(this + 4));
  *(void **)(p_Var1 + 8) = param_2;
  if (*(int *)(this + 4) == 0) {
    *(__POSITION **)(this + 8) = p_Var1;
    *(__POSITION **)(this + 4) = p_Var1;
    return p_Var1;
  }
  *(__POSITION **)(*(int *)(this + 4) + 4) = p_Var1;
  *(__POSITION **)(this + 4) = p_Var1;
  return p_Var1;
}



/* ---- FUN_6000ba70 @ 6000ba70 size=99 ---- */

void __thiscall FUN_6000ba70(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_600128b0(this,param_1,*param_1);
    *(undefined4 *)(iVar1 + 8) = param_2;
    if (*param_1 == 0) {
      *(int *)((int)this + 8) = iVar1;
      *param_1 = iVar1;
      return;
    }
    *(int *)(*param_1 + 4) = iVar1;
    *param_1 = iVar1;
    return;
  }
  iVar1 = FUN_600128b0(this,*(undefined4 *)((int)this + 8),0);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int **)((int)this + 8) == (int *)0x0) {
    *(int *)((int)this + 4) = iVar1;
    *(int *)((int)this + 8) = iVar1;
    return;
  }
  **(int **)((int)this + 8) = iVar1;
  *(int *)((int)this + 8) = iVar1;
  return;
}



/* ---- ~CGraphicCtrl @ 6000bae0 size=505 ---- */

/* public: virtual __thiscall CGraphicCtrl::~CGraphicCtrl(void) */

void __thiscall CGraphicCtrl::~CGraphicCtrl(CGraphicCtrl *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xbae0  38  ??1CGraphicCtrl@@UAE@XZ */
  puStack_8 = &LAB_6001684e;
  local_c = ExceptionList;
  uVar5 = DAT_600259a8 ^ (uint)(auStack_e + -0x12);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  if (((this->CGraphicCtrl_data).offset_0x2 == '\0') &&
     (piVar1 = (int *)(this->CGraphicCtrl_data).offset_0x20, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x14))(uVar5);
    puVar2 = (undefined4 *)(this->CGraphicCtrl_data).offset_0x20;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    (this->CGraphicCtrl_data).offset_0x20 = 0;
  }
  iVar6 = (this->CGraphicCtrl_data).offset_0xec;
  while (iVar6 != 0) {
    piVar1 = (this->CGraphicCtrl_data).offset_0xe4;
    if (piVar1 == (int *)0x0) goto LAB_6000bc4a;
    puVar2 = (undefined4 *)*piVar1;
    piVar3 = (int *)piVar1[2];
    (this->CGraphicCtrl_data).offset_0xe4 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      (this->CGraphicCtrl_data).offset_0xe8 = 0;
    }
    else {
      puVar2[1] = 0;
    }
    *piVar1 = (this->CGraphicCtrl_data).offset_0xf0;
    puVar2 = &(this->CGraphicCtrl_data).offset_0xec;
    *puVar2 = *puVar2 + -1;
    (this->CGraphicCtrl_data).offset_0xf0 = piVar1;
    if (*puVar2 == 0) {
      for (puVar2 = (this->CGraphicCtrl_data).offset_0xe4; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
      }
      (this->CGraphicCtrl_data).offset_0xec = 0;
      (this->CGraphicCtrl_data).offset_0xf0 = 0;
      (this->CGraphicCtrl_data).offset_0xe8 = 0;
      (this->CGraphicCtrl_data).offset_0xe4 = (undefined4 *)0x0;
      CPlex::FreeDataChain((this->CGraphicCtrl_data).offset_0xf4);
      (this->CGraphicCtrl_data).offset_0xf4 = (CPlex *)0x0;
    }
    *(undefined1 *)((int)piVar3 + 5) = 0;
    if (piVar3[8] == 0) {
      pcVar4 = (code *)((undefined4 *)*piVar3)[0xb];
      piVar3[0x37] = 0;
      (*pcVar4)(0xff05);
      UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,(RECT *)(piVar3 + 0x40));
    }
    else {
      (**(code **)*piVar3)(1);
    }
    iVar6 = (this->CGraphicCtrl_data).offset_0xec;
  }
  if ((this->CGraphicCtrl_data).offset_0x1 == '\x01') {
    iVar6 = (this->CGraphicCtrl_data).offset_0xd8;
    (this->CGraphicCtrl_data).offset_0x1 = 0;
    for (piVar1 = *(int **)(iVar6 + 0xe8); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if (piVar1 + 2 == (int *)0x0) {
LAB_6000bc4a:
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      if ((CGraphicCtrl *)piVar1[2] == this) {
        if (piVar1 != (int *)0x0) {
          RemoveAt((void *)(iVar6 + 0xe4),piVar1);
        }
        break;
      }
    }
  }
  iVar6 = IsShowing(this);
  if (iVar6 != 0) {
    UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,
              (RECT *)&(this->CGraphicCtrl_data).field_0xfc);
  }
  puVar2 = (this->CGraphicCtrl_data).offset_0xe4;
  local_4 = 0xffffffff;
                    /* inlined constructor or destructor (approx location) for
                       CList<CGraphicCtrl*,CGraphicCtrl*> */
  (this->CGraphicCtrl_data).offset_0xe0 =
       &CList<CGraphicCtrl*,CGraphicCtrl*>::vftable.GetRuntimeClass;
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
  }
  (this->CGraphicCtrl_data).offset_0xec = 0;
  (this->CGraphicCtrl_data).offset_0xf0 = 0;
  (this->CGraphicCtrl_data).offset_0xe8 = 0;
  (this->CGraphicCtrl_data).offset_0xe4 = (undefined4 *)0x0;
  CPlex::FreeDataChain((this->CGraphicCtrl_data).offset_0xf4);
  (this->CGraphicCtrl_data).offset_0xf4 = (CPlex *)0x0;
  ExceptionList = local_c;
  return;
}



/* ---- AddChild @ 6000bce0 size=264 ---- */

/* public: int __thiscall CGraphicCtrl::AddChild(class CGraphicCtrl *,unsigned char,class
   CGraphicCtrl *) */

int __thiscall
CGraphicCtrl::AddChild(CGraphicCtrl *this,CGraphicCtrl *param_1,uchar param_2,CGraphicCtrl *param_3)

{
  int iVar1;
  __POSITION *p_Var2;
  int *piVar3;
  int *piVar4;
  __POSITION *p_Var5;
  
                    /* 0xbce0  109  ?AddChild@CGraphicCtrl@@QAEHPAV1@E0@Z */
  iVar1 = *(int *)(param_1 + 0xdc);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xf0))) {
    piVar4 = *(int **)(iVar1 + 0xe8);
    do {
      piVar3 = piVar4;
      if (piVar3 == (int *)0x0) goto switchD_6000bd31_switchD;
      piVar4 = (int *)*piVar3;
    } while ((CGraphicCtrl *)piVar3[2] != param_1);
    RemoveAt((void *)(iVar1 + 0xe4),piVar3);
  }
switchD_6000bd31_switchD:
  switch(param_2) {
  case '\0':
    AddTail(&(this->CGraphicCtrl_data).offset_0xe0,param_1);
    break;
  case '\x01':
    AddHead(&(this->CGraphicCtrl_data).offset_0xe0,param_1);
    break;
  case '\x02':
    if (((int)(this->CGraphicCtrl_data).offset_0xec < 1) ||
       (p_Var5 = (__POSITION *)(this->CGraphicCtrl_data).offset_0xe4, p_Var5 == (__POSITION *)0x0))
    {
      return 0;
    }
    while (p_Var2 = *(__POSITION **)p_Var5, *(CGraphicCtrl **)(p_Var5 + 8) != param_3) {
      p_Var5 = p_Var2;
      if (p_Var2 == (__POSITION *)0x0) {
        return 0;
      }
    }
    CList<void*,void*>::InsertBefore
              ((CList<void*,void*> *)&(this->CGraphicCtrl_data).offset_0xe0,p_Var5,param_1);
    break;
  case '\x03':
    if ((int)(this->CGraphicCtrl_data).offset_0xec < 1) {
      return 0;
    }
    piVar4 = (this->CGraphicCtrl_data).offset_0xe4;
    do {
      piVar3 = piVar4;
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      piVar4 = (int *)*piVar3;
    } while ((CGraphicCtrl *)piVar3[2] != param_3);
    FUN_6000ba70(&(this->CGraphicCtrl_data).offset_0xe0,piVar3,param_1);
  }
  SetParent((CGraphicCtrl *)param_1,(CGraphicCtrl *)this);
  param_1[5] = (CGraphicCtrl)0x1;
  return 1;
}



/* ---- DelChild @ 6000be00 size=174 ---- */

/* public: int __thiscall CGraphicCtrl::DelChild(class CGraphicCtrl *) */

int __thiscall CGraphicCtrl::DelChild(CGraphicCtrl *this,CGraphicCtrl *param_1)

{
  CGraphicCtrl *this_00;
  OnSelfNotice *pOVar1;
  int *piVar2;
  int *piVar3;
  
                    /* 0xbe00  164  ?DelChild@CGraphicCtrl@@QAEHPAV1@@Z */
  if (param_1 == (CGraphicCtrl *)0x0) {
    return 0;
  }
  if (0 < (int)(this->CGraphicCtrl_data).offset_0xec) {
    piVar3 = (this->CGraphicCtrl_data).offset_0xe4;
    while (piVar2 = piVar3, piVar2 != (int *)0x0) {
      this_00 = (CGraphicCtrl *)piVar2[2];
      piVar3 = (int *)*piVar2;
      if (this_00 == (CGraphicCtrl *)param_1) {
        RemoveAt(&(this->CGraphicCtrl_data).offset_0xe0,piVar2);
        (this_00->CGraphicCtrl_data).offset_0x1 = 0;
        if ((this_00->CGraphicCtrl_data).offset_0x1c == 0) {
          pOVar1 = this_00->vftablePtr->OnSelfNotice;
          (this_00->CGraphicCtrl_data).offset_0xd8 = 0;
          (*pOVar1)(this_00,0xff05);
          UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,
                    (RECT *)&(this_00->CGraphicCtrl_data).field_0xfc);
          __AdjustShow(this_00,1);
          (this_00->CGraphicCtrl_data).offset_0x120 = 0;
          return 1;
        }
        (*this_00->vftablePtr->deleting_destructor)(this_00,1);
        return 1;
      }
    }
  }
  return 0;
}



/* ---- DelAllChild @ 6000beb0 size=267 ---- */

/* public: void __thiscall CGraphicCtrl::DelAllChild(void) */

void __thiscall CGraphicCtrl::DelAllChild(CGraphicCtrl *this)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  CGraphicCtrl *this_00;
  OnSelfNotice *pOVar4;
  int local_8;
  
                    /* 0xbeb0  163  ?DelAllChild@CGraphicCtrl@@QAEXXZ */
  iVar1 = (this->CGraphicCtrl_data).offset_0xec;
  local_8 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (this->CGraphicCtrl_data).offset_0xe4;
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      puVar3 = (undefined4 *)*piVar2;
      this_00 = (CGraphicCtrl *)piVar2[2];
      (this->CGraphicCtrl_data).offset_0xe4 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        (this->CGraphicCtrl_data).offset_0xe8 = 0;
      }
      else {
        puVar3[1] = 0;
      }
      *piVar2 = (this->CGraphicCtrl_data).offset_0xf0;
      puVar3 = &(this->CGraphicCtrl_data).offset_0xec;
      *puVar3 = *puVar3 + -1;
      (this->CGraphicCtrl_data).offset_0xf0 = piVar2;
      if (*puVar3 == 0) {
        for (puVar3 = (this->CGraphicCtrl_data).offset_0xe4; puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)*puVar3) {
        }
        (this->CGraphicCtrl_data).offset_0xec = 0;
        (this->CGraphicCtrl_data).offset_0xf0 = 0;
        (this->CGraphicCtrl_data).offset_0xe8 = 0;
        (this->CGraphicCtrl_data).offset_0xe4 = (undefined4 *)0x0;
        CPlex::FreeDataChain((this->CGraphicCtrl_data).offset_0xf4);
        (this->CGraphicCtrl_data).offset_0xf4 = (CPlex *)0x0;
      }
      (this_00->CGraphicCtrl_data).offset_0x1 = 0;
      if ((this_00->CGraphicCtrl_data).offset_0x1c == 0) {
        pOVar4 = this_00->vftablePtr->OnSelfNotice;
        (this_00->CGraphicCtrl_data).offset_0xd8 = 0;
        (*pOVar4)(this_00,0xff05);
        UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,
                  (RECT *)&(this_00->CGraphicCtrl_data).field_0xfc);
        __AdjustShow(this_00,1);
        (this_00->CGraphicCtrl_data).offset_0x120 = 0;
      }
      else {
        (*this_00->vftablePtr->deleting_destructor)(this_00,1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return;
}



/* ---- CalculateDelay @ 6000bfd0 size=199 ---- */

/* public: int __thiscall CGraphicCtrl::CalculateDelay(unsigned long) */

int __thiscall CGraphicCtrl::CalculateDelay(CGraphicCtrl *this,ulong param_1)

{
  OnSelfNotice *pOVar1;
  OnBtnClicked *pOVar2;
  int iVar3;
  
                    /* 0xbfd0  117  ?CalculateDelay@CGraphicCtrl@@QAEHK@Z */
  iVar3 = 0;
  if (((this->CGraphicCtrl_data).offset_0x134 != 0) &&
     ((uint)((this->CGraphicCtrl_data).offset_0x140 + (this->CGraphicCtrl_data).offset_0x13c) <=
      (uint)(this->CGraphicCtrl_data).offset_0x120)) {
    iVar3 = (this->CGraphicCtrl_data).offset_0x138;
    if ((this->CGraphicCtrl_data).offset_0xc != iVar3) {
      __AdjustShow(this,iVar3);
      (this->CGraphicCtrl_data).offset_0xc = iVar3;
    }
    iVar3 = 1;
    (this->CGraphicCtrl_data).offset_0x134 = 0;
  }
  if (((this->CGraphicCtrl_data).offset_0x144 != 0) &&
     ((uint)((this->CGraphicCtrl_data).offset_0x150 + (this->CGraphicCtrl_data).offset_0x14c) <=
      (uint)(this->CGraphicCtrl_data).offset_0x120)) {
    iVar3 = (this->CGraphicCtrl_data).offset_0x148;
    if ((this->CGraphicCtrl_data).offset_0x14 != iVar3) {
      (this->CGraphicCtrl_data).offset_0x14 = iVar3;
      pOVar1 = this->vftablePtr->OnSelfNotice;
      (this->CGraphicCtrl_data).offset_0x120 = 0;
      (*pOVar1)(this,0xff03);
    }
    iVar3 = 1;
    (this->CGraphicCtrl_data).offset_0x144 = 0;
  }
  if (((this->CGraphicCtrl_data).offset_0x154 != 0) &&
     ((uint)((this->CGraphicCtrl_data).offset_0x15c + (this->CGraphicCtrl_data).offset_0x158) <=
      (uint)(this->CGraphicCtrl_data).offset_0x120)) {
    pOVar2 = this->vftablePtr->OnBtnClicked;
    (this->CGraphicCtrl_data).offset_0x154 = 0;
    (*pOVar2)(this);
    iVar3 = 1;
  }
  return iVar3;
}



/* ---- CGraphicCtrl::SetChildsZOrder @ 6000c0a0 size=402 ---- */

/* public: virtual int __thiscall CGraphicCtrl::SetChildsZOrder(class CGraphicCtrl *,unsigned
   char,class CGraphicCtrl *)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Text
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CHgDummyCtrl
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall
CGraphicCtrl::CGraphicCtrl__SetChildsZOrder
          (CGraphicCtrl *this,CGraphicCtrl *param_1,uchar param_2,CGraphicCtrl *param_3)

{
  undefined ***pppuVar1;
  CGraphicCtrl *pCVar2;
  __POSITION *p_Var3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  __POSITION *p_Var8;
  __POSITION *p_Var9;
  undefined3 in_stack_00000009;
  __POSITION *local_4;
  
                    /* 0xc0a0  385  ?SetChildsZOrder@CGraphicCtrl@@UAEHPAV1@E0@Z */
  if (param_1 == (CGraphicCtrl *)0x0) {
    return 0;
  }
  if ((param_2 == '\0') || (param_2 == '\x01')) {
    if ((param_3 == (CGraphicCtrl *)0x0) && (0 < (int)(this->CGraphicCtrl_data).offset_0xec)) {
      piVar7 = (this->CGraphicCtrl_data).offset_0xe4;
      while (piVar6 = piVar7, piVar6 != (int *)0x0) {
        pCVar2 = (CGraphicCtrl *)piVar6[2];
        piVar7 = (int *)*piVar6;
        if (pCVar2 == param_1) {
          pppuVar1 = &(this->CGraphicCtrl_data).offset_0xe0;
          RemoveAt(pppuVar1,piVar6);
          if (param_2 == '\0') {
            AddTail(pppuVar1,pCVar2);
          }
          else if (param_2 == '\x01') {
            AddHead(pppuVar1,pCVar2);
            return 1;
          }
          return 1;
        }
      }
    }
  }
  else if (((param_2 == '\x02') || (param_2 == '\x03')) && (param_3 != (CGraphicCtrl *)0x0)) {
    bVar5 = false;
    bVar4 = false;
    if ((0 < (int)(this->CGraphicCtrl_data).offset_0xec) &&
       (p_Var8 = (__POSITION *)(this->CGraphicCtrl_data).offset_0xe4, p_Var8 != (__POSITION *)0x0))
    {
      p_Var9 = _param_2;
      do {
        pCVar2 = *(CGraphicCtrl **)(p_Var8 + 8);
        p_Var3 = *(__POSITION **)p_Var8;
        if (pCVar2 != (CGraphicCtrl *)0x0) {
          if (pCVar2 == param_1) {
            bVar4 = true;
            p_Var9 = p_Var8;
          }
          if (pCVar2 == param_3) {
            bVar5 = true;
            local_4 = p_Var8;
          }
        }
        p_Var8 = p_Var3;
      } while (p_Var3 != (__POSITION *)0x0);
      if ((bVar4) && (bVar5)) {
        pppuVar1 = &(this->CGraphicCtrl_data).offset_0xe0;
        RemoveAt(pppuVar1,(int *)p_Var9);
        if (param_2 == '\x02') {
          CList<void*,void*>::InsertBefore((CList<void*,void*> *)pppuVar1,local_4,param_1);
        }
        else if (param_2 == '\x03') {
          FUN_6000ba70(pppuVar1,(int *)local_4,param_1);
          return 1;
        }
        return 1;
      }
    }
  }
  return 0;
}



/* ---- scalar_deleting_destructor @ 6000c240 size=85 ---- */

CGraphicCtrl * __thiscall CGraphicCtrl::scalar_deleting_destructor(CGraphicCtrl *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_data.offset_0x160;
  _eh_vector_destructor_iterator_(this,0x168,this[-1].CGraphicCtrl_data.offset_0x160,~CGraphicCtrl);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl *)puVar1;
}



/* ---- CGraphicCtrl::CreateGraphicCtrl @ 6000c2a0 size=410 ---- */

/* WARNING: Exceeded maximum restarts with more pending */
/* public: virtual int __thiscall CGraphicCtrl::CreateGraphicCtrl(class CCreateFT const &,unsigned
   long,unsigned char,class CPoint,int)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Text
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CHgDummyCtrl
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Scale
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CGraphicCtrl member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall
CGraphicCtrl::CGraphicCtrl__CreateGraphicCtrl
          (CGraphicCtrl *this,int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  CHgDIB *this_00;
  int iVar3;
  CSize aCStack_12 [2];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xc2a0  131
                       ?CreateGraphicCtrl@CGraphicCtrl@@UAEHABVCCreateFT@@KEVCPoint@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016886;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)(this->CGraphicCtrl_data).offset_0x20;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,DAT_600259a8 ^ (uint)(aCStack_12 + -0x12));
  }
  (this->CGraphicCtrl_data).offset_0x20 = 0;
  if ((this->CGraphicCtrl_data).offset_0x4 == 0) {
    this_00 = operator_new(0x38);
    uStack_4 = 1;
    if (this_00 != (CHgDIB *)0x0) {
      CHgDDB::CHgDDB((CHgDDB *)this_00);
      this_00->vftablePtr = (CHgDIB_vftable *)&CHgDDB::vftable;
      goto LAB_6000c338;
    }
  }
  else {
    this_00 = operator_new(100);
    uStack_4 = 0;
    if (this_00 != (CHgDIB *)0x0) {
      CHgDIB::CHgDIB(this_00);
      this_00->vftablePtr = &CHgDIB::vftable;
      goto LAB_6000c338;
    }
  }
  this_00 = (CHgDIB *)0x0;
LAB_6000c338:
  (this->CGraphicCtrl_data).offset_0x20 = this_00;
  uStack_4 = 0xffffffff;
  if (param_1[2] == 0) {
    cVar2 = (*this_00->vftablePtr->Create)(*param_1,param_1[1]);
  }
  else {
    cVar2 = (*this_00->vftablePtr->Create)(param_1[2]);
  }
  if ((cVar2 == '\0') && (param_1[2] != 0)) {
    iVar3 = 0;
  }
  else {
    if (param_2 != 0xffffffff) {
      CHgImageBase::SetTransparentColor
                ((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20,param_2);
    }
    if (param_1[2] == 0) {
      SetSize(this,aCStack_12 + -6);
      CHgImage::FillRect((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,*param_1,param_1[1],
                         -(uint)(param_2 != 0xffffffff) & param_2,0x100,0);
    }
    else {
      CHgImageBase::GetHeight((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20);
      CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20);
      SetSize(this,aCStack_12 + -6);
    }
    (this->CGraphicCtrl_data).offset_0x11c = (undefined1)param_2;
    SetPosBase(this,param_3,param_4);
    (this->CGraphicCtrl_data).offset_0x1c = param_5;
    iVar3 = 1;
  }
  ExceptionList = pvStack_10;
  return iVar3;
}



/* ---- scalar_deleting_destructor @ 6000c440 size=31 ---- */

CHgDIB * __thiscall CHgDIB::scalar_deleting_destructor(CHgDIB *this,byte param_1)

{
  CHgDIB::~CHgDIB(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CHgDIB *)this;
}



/* ---- CGraphicCtrl::CreateGraphicCtrl @ 6000c460 size=67 ---- */

/* public: virtual int __thiscall CGraphicCtrl::CreateGraphicCtrl(int,int,unsigned long,unsigned
   char,class CPoint,int)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox */

int __thiscall
CGraphicCtrl::CGraphicCtrl__CreateGraphicCtrl
          (CGraphicCtrl *this,int param_1,undefined4 param_2,uint param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xc460  132  ?CreateGraphicCtrl@CGraphicCtrl@@UAEHHHKEVCPoint@@H@Z */
  local_c = param_1;
  local_8 = param_2;
  local_4 = 0;
  iVar1 = CGraphicCtrl__CreateGraphicCtrl(this,&local_c,param_3,param_4,param_5,param_6);
  return iVar1;
}



/* ---- CGraphicCtrl::CreateGraphicCtrl @ 6000c4b0 size=61 ---- */

/* public: virtual int __thiscall CGraphicCtrl::CreateGraphicCtrl(char *,unsigned long,unsigned
   char,class CPoint,int)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CGraphicCtrl_Notify
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_TileSupport
   CGraphicCtrl member function inherited by CGraphicCtrl_Rotate
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox */

int __thiscall
CGraphicCtrl::CGraphicCtrl__CreateGraphicCtrl
          (CGraphicCtrl *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  int local_c [3];
  
                    /* 0xc4b0  133  ?CreateGraphicCtrl@CGraphicCtrl@@UAEHPADKEVCPoint@@H@Z */
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = param_1;
  iVar1 = CGraphicCtrl__CreateGraphicCtrl(this,local_c,param_2,param_3,param_4,param_5);
  return iVar1;
}



/* ---- CGraphicCtrl::CreateInstance @ 6000c4f0 size=343 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl::CreateInstance(void)
   CGraphicCtrl member function inherited by CGraphicCtrl_EditBox
   CGraphicCtrl member function inherited by CGraphicCtrl_TextBox
   CGraphicCtrl member function inherited by CHgDummyCtrl
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_MultiLineText
   CGraphicCtrl member function inherited by CGraphicCtrl_Root
   CGraphicCtrl member function inherited by CGraphicCtrl_ScrollBar
   CGraphicCtrl member function inherited by CGraphicCtrl_SlideBar
   CGraphicCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox
   CGraphicCtrl member function inherited by CGraphicCtrl_ChatBox */

CGraphicCtrl * __thiscall CGraphicCtrl::CGraphicCtrl__CreateInstance(CGraphicCtrl *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  CGraphicCtrl *this_00;
  CGraphicCtrl *pCVar5;
  CGraphicCtrl *pCVar6;
  undefined4 extraout_ECX;
  ulonglong uVar7;
  ulonglong uVar8;
  
                    /* 0xc4f0  152  ?CreateInstance@CGraphicCtrl@@UAEPAV1@XZ */
  this_00 = (*this->vftablePtr->clone)(this);
  if (this_00 == (CGraphicCtrl *)0x0) {
    return (CGraphicCtrl *)0x0;
  }
  (this_00->CGraphicCtrl_data).offset_0x2 = 1;
  pCVar5 = (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xdc;
  if (pCVar5 == (CGraphicCtrl *)0x0) {
    pCVar5 = this;
  }
  (this_00->CGraphicCtrl_data).offset_0xdc = pCVar5;
  (this_00->CGraphicCtrl_data).offset_0x20 = (this->CGraphicCtrl_data).offset_0x20;
  (this_00->CGraphicCtrl_data).offset_0xd0 = (this->CGraphicCtrl_data).offset_0xd0;
  (this_00->CGraphicCtrl_data).offset_0xd4 = (this->CGraphicCtrl_data).offset_0xd4;
  (this_00->CGraphicCtrl_data).offset_0xb4 = (this->CGraphicCtrl_data).offset_0xb4;
  (this_00->CGraphicCtrl_data).offset_0xb8 = (this->CGraphicCtrl_data).offset_0xb8;
  uVar2 = (this->CGraphicCtrl_data).offset_0xbc;
  (this_00->CGraphicCtrl_data).offset_0xbc = uVar2;
  (this_00->CGraphicCtrl_data).offset_0xc0 = (this->CGraphicCtrl_data).offset_0xc0;
  uVar3 = (this->CGraphicCtrl_data).offset_0xc4;
  (this_00->CGraphicCtrl_data).offset_0xc4 = uVar3;
  uVar7 = FUN_60015470(uVar3,uVar2);
  uVar8 = FUN_60015470(extraout_ECX,(int)(uVar7 >> 0x20));
  CGraphicCurve::SetPosForce
            ((CGraphicCurve *)&(this_00->CGraphicCtrl_data).field_0x24,(float)(int)uVar7,
             (float)(int)uVar8);
  (this_00->CGraphicCtrl_data).offset_0x128 = (this->CGraphicCtrl_data).offset_0x128;
  (this_00->CGraphicCtrl_data).offset_0x130 = (this->CGraphicCtrl_data).offset_0x130;
  (this_00->CGraphicCtrl_data).offset_0x11c = (this->CGraphicCtrl_data).offset_0x11c;
  (this_00->CGraphicCtrl_data).offset_0xc = (this->CGraphicCtrl_data).offset_0xc;
  (this_00->CGraphicCtrl_data).offset_0x14 = (this->CGraphicCtrl_data).offset_0x14;
  (this_00->CGraphicCtrl_data).offset_0x11d = (this->CGraphicCtrl_data).offset_0x11d;
  (this_00->CGraphicCtrl_data).offset_0x11e = (this->CGraphicCtrl_data).offset_0x11e;
  (this_00->CGraphicCtrl_data).offset_0x11f = (this->CGraphicCtrl_data).offset_0x11f;
  (this_00->CGraphicCtrl_data).offset_0x1c = (this->CGraphicCtrl_data).offset_0x1c;
  if (0 < (int)(this->CGraphicCtrl_data).offset_0xec) {
    puVar4 = (this->CGraphicCtrl_data).offset_0xe4;
    while (puVar4 != (undefined4 *)0x0) {
      puVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      pCVar6 = (CGraphicCtrl *)(**(code **)(*(int *)*puVar1 + 8))();
      if (pCVar6 != (CGraphicCtrl *)0x0) {
        AddChild(this_00,pCVar6,'\0',(CGraphicCtrl *)0x0);
      }
    }
  }
  return (CGraphicCtrl *)this_00;
}



/* ---- LinkChild @ 6000c650 size=57 ---- */

/* public: class CGraphicCtrl * __thiscall CGraphicCtrl::LinkChild(class CGraphicCtrl *,unsigned
   char,class CGraphicCtrl *) */

CGraphicCtrl * __thiscall
CGraphicCtrl::LinkChild
          (CGraphicCtrl *this,CGraphicCtrl *param_1,uchar param_2,CGraphicCtrl *param_3)

{
  CGraphicCtrl *pCVar1;
  int iVar2;
  
                    /* 0xc650  286  ?LinkChild@CGraphicCtrl@@QAEPAV1@PAV1@E0@Z */
  pCVar1 = (CGraphicCtrl *)(**(code **)(*(int *)param_1 + 8))();
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    iVar2 = AddChild(this,pCVar1,param_2,param_3);
    if (iVar2 != 0) {
      return pCVar1;
    }
  }
  return (CGraphicCtrl *)0x0;
}



/* ---- UpdateState @ 6000c690 size=986 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CRect __thiscall CGraphicCtrl::UpdateState(unsigned long,unsigned char) */

LPRECT __thiscall CGraphicCtrl::UpdateState(CGraphicCtrl *this,ulong param_1,uchar param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  CGraphicCtrl *pCVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  OnSelfNotice *pOVar9;
  float fVar10;
  int *piVar11;
  bool bVar12;
  BOOL BVar13;
  LONG *pLVar14;
  LPRECT ptVar15;
  int iVar16;
  LPRECT ptVar17;
  undefined1 *lprcSrc2;
  int3 in_stack_00000009;
  uint in_stack_0000000c;
  undefined4 local_4c;
  undefined8 local_48;
  tagRECT local_40;
  tagRECT local_30;
  RECT RStack_20;
  undefined1 auStack_10 [16];
  
                    /* 0xc690  457  ?UpdateState@CGraphicCtrl@@QAE?AVCRect@@KE@Z */
  local_4c = in_stack_0000000c & 1;
  SetRect((LPRECT)param_1,0,0,0,0);
  SetRect(&local_40,0,0,0,0);
  ptVar17 = (LPRECT)param_1;
  if (((this->CGraphicCtrl_data).offset_0x14 == 0) || ((in_stack_0000000c & 2) != 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    if ((float)(this->CGraphicCtrl_data).offset_0x160 == 1.0) {
      ptVar15 = _param_2;
    }
    else {
      fVar10 = (float)(int)_param_2;
      if (in_stack_00000009 < 0) {
        fVar10 = fVar10 + _DAT_60017950;
      }
      local_48 = (longlong)ROUND(fVar10 * (float)(this->CGraphicCtrl_data).offset_0x160);
      ptVar15 = (LPRECT)local_48;
    }
    puVar1 = &(this->CGraphicCtrl_data).offset_0x120;
    *puVar1 = (int)&ptVar15->left + *puVar1;
    iVar16 = (**(code **)&(this->CGraphicCtrl_data).field_0x38)(ptVar15);
    if (iVar16 != 0) {
      local_48 = CONCAT44(local_48._4_4_,1);
    }
    iVar16 = (this->CGraphicCtrl_data).offset_0x130;
    if (iVar16 != 0) {
      bVar2 = (this->CGraphicCtrl_data).offset_0x11d;
      bVar3 = (this->CGraphicCtrl_data).offset_0x11e;
      if (bVar2 != bVar3) {
        cVar4 = (this->CGraphicCtrl_data).offset_0x11f;
        iVar7 = (this->CGraphicCtrl_data).offset_0x12c;
        local_4c = (uint)CONCAT12(cVar4,(undefined2)local_4c);
        uVar8 = (this->CGraphicCtrl_data).offset_0x120;
        if ((uint)(iVar7 + iVar16) < uVar8) {
          (this->CGraphicCtrl_data).offset_0x11f = bVar3;
          (this->CGraphicCtrl_data).offset_0x11d = bVar3;
          (this->CGraphicCtrl_data).offset_0x130 = 0;
          (this->CGraphicCtrl_data).offset_0x12c = 0;
        }
        else {
          (this->CGraphicCtrl_data).offset_0x11f =
               (char)((int)(((uint)bVar3 - (uint)bVar2) * (uVar8 - iVar7)) / iVar16) + bVar2;
        }
        if ((this->CGraphicCtrl_data).offset_0x11f != cVar4) {
          local_48 = CONCAT44(local_48._4_4_,1);
        }
      }
      ptVar17 = _param_2;
    }
    iVar16 = (this->CGraphicCtrl_data).offset_0x128;
    if ((iVar16 != 0) &&
       ((uint)((this->CGraphicCtrl_data).offset_0x124 + iVar16) <=
        (uint)(this->CGraphicCtrl_data).offset_0x120)) {
      (this->CGraphicCtrl_data).offset_0x120 = 0;
      (this->CGraphicCtrl_data).offset_0x124 = 0;
      (this->CGraphicCtrl_data).offset_0x128 = 0;
      (this->CGraphicCtrl_data).offset_0x18 = 1;
      return ptVar17;
    }
    iVar16 = CalculateDelay(this,in_stack_0000000c);
    if (iVar16 != 0) {
      local_48 = CONCAT44(local_48._4_4_,1);
    }
    iVar16 = (*this->vftablePtr->PostProc)(this);
    if (iVar16 != 0) {
      local_4c = 1;
    }
  }
  if ((this->CGraphicCtrl_data).offset_0xc == 0) {
    in_stack_0000000c = 0;
  }
  GetArea(this);
  pCVar5 = (CGraphicCtrl *)(this->CGraphicCtrl_data).offset_0xd8;
  if (pCVar5 != (CGraphicCtrl *)0x0) {
    GetPosScreen(pCVar5);
    OffsetRect(&local_30,(int)(LPRECT)local_48,local_48._4_4_);
  }
  local_40.left = local_30.left;
  local_40.top = local_30.top;
  local_40.right = local_30.right;
  local_40.bottom = local_30.bottom;
  if (((in_stack_0000000c & 4) != 0) &&
     (BVar13 = EqualRect((RECT *)&(this->CGraphicCtrl_data).field_0xfc,&local_40), BVar13 == 0)) {
    local_4c = 1;
  }
  iVar16 = (this->CGraphicCtrl_data).offset_0xc;
  if ((this->CGraphicCtrl_data).offset_0x10 != iVar16) {
    (this->CGraphicCtrl_data).offset_0x10 = iVar16;
    local_4c = 1;
    UnionRect(ptVar17,&local_40,ptVar17);
  }
  if (0 < (int)(this->CGraphicCtrl_data).offset_0xec) {
    piVar6 = (this->CGraphicCtrl_data).offset_0xe4;
    while (piVar11 = piVar6, piVar11 != (int *)0x0) {
      pCVar5 = (CGraphicCtrl *)piVar11[2];
      piVar6 = (int *)*piVar11;
      pLVar14 = (LONG *)UpdateState(pCVar5,(ulong)auStack_10,param_2);
      RStack_20.left = *pLVar14;
      RStack_20.top = pLVar14[1];
      RStack_20.right = pLVar14[2];
      RStack_20.bottom = pLVar14[3];
      if ((this->CGraphicCtrl_data).offset_0xc != 0) {
        UnionRect((LPRECT)param_1,(RECT *)param_1,&RStack_20);
      }
      if ((pCVar5->CGraphicCtrl_data).offset_0x18 != 0) {
        RemoveAt(&(this->CGraphicCtrl_data).offset_0xe0,piVar11);
        (pCVar5->CGraphicCtrl_data).offset_0x1 = 0;
        if ((pCVar5->CGraphicCtrl_data).offset_0x1c == 0) {
          pOVar9 = pCVar5->vftablePtr->OnSelfNotice;
          (pCVar5->CGraphicCtrl_data).offset_0xd8 = 0;
          (*pOVar9)(pCVar5,0xff05);
          UnionRect((LPRECT)s_prcInvalidateArea,(RECT *)s_prcInvalidateArea,
                    (RECT *)&(pCVar5->CGraphicCtrl_data).field_0xfc);
          (pCVar5->CGraphicCtrl_data).offset_0x18 = 0;
          (pCVar5->CGraphicCtrl_data).offset_0x120 = 0;
        }
        else {
          (*pCVar5->vftablePtr->deleting_destructor)(pCVar5,1);
        }
      }
    }
    ptVar17 = (LPRECT)param_1;
  }
  if ((((bVar12) && (iVar16 = (*this->vftablePtr->PostProc)(this), iVar16 != 0)) || (local_4c != 0))
     && ((this->CGraphicCtrl_data).offset_0xc != 0)) {
    UnionRect(ptVar17,ptVar17,&local_40);
    IntersectRect(ptVar17,ptVar17,(RECT *)&(this->CGraphicCtrl_data).field_0x10c);
    lprcSrc2 = &(this->CGraphicCtrl_data).field_0xfc;
    UnionRect(ptVar17,ptVar17,(RECT *)lprcSrc2);
    *(LONG *)lprcSrc2 = local_40.left;
    *(LONG *)&(this->CGraphicCtrl_data).field_0x100 = local_40.top;
    *(LONG *)&(this->CGraphicCtrl_data).field_0x104 = local_40.right;
    *(LONG *)&(this->CGraphicCtrl_data).field_0x108 = local_40.bottom;
    return ptVar17;
  }
  IntersectRect(ptVar17,ptVar17,(RECT *)&(this->CGraphicCtrl_data).field_0x10c);
  return ptVar17;
}



/* ---- CHgDummyCtrl::CreateGraphicCtrl @ 6000ca70 size=5 ---- */

/* public: virtual int __thiscall CHgDummyCtrl::CreateGraphicCtrl(char *,unsigned long,unsigned
   char,class CPoint,int)
   CHgDummyCtrl member function inherited by CGraphicCtrl_PushBtn
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile_Ani
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar
   CHgDummyCtrl member function inherited by CGraphicCtrl_SlideBar
   CHgDummyCtrl member function inherited by CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile_Scale
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CHgDummyCtrl member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall CHgDummyCtrl::CHgDummyCtrl__CreateGraphicCtrl(void)

{
                    /* 0xca70  151  ?CreateGraphicCtrl@CHgDummyCtrl@@UAEHPADKEVCPoint@@H@Z */
  return 0;
}



/* ---- CHgDummyCtrl::DrawProc @ 6000ca80 size=5 ---- */

/* public: virtual int __thiscall CHgDummyCtrl::DrawProc(class CRect &,class CRect &)
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile_Ani
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar
   CHgDummyCtrl member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall
CHgDummyCtrl::CHgDummyCtrl__DrawProc(CHgDummyCtrl *this,CRect *param_1,CRect *param_2)

{
                    /* 0xca80  176  ?DrawProc@CHgDummyCtrl@@UAEHAAVCRect@@0@Z
                       0xca80  324  ?OnMyImeStartComposition@__CWndForInput@@QAEJIJ@Z */
  return 0;
}



/* ---- CHgDummyCtrl::CreateGraphicCtrl @ 6000ca90 size=70 ---- */

/* public: virtual int __thiscall CHgDummyCtrl::CreateGraphicCtrl(int,int,unsigned long,unsigned
   char,class CPoint,int)
   CHgDummyCtrl member function inherited by CGraphicCtrl_PushBtn
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile_Ani
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar
   CHgDummyCtrl member function inherited by CGraphicCtrl_SlideBar
   CHgDummyCtrl member function inherited by CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element
   CHgDummyCtrl member function inherited by CGraphicCtrl_Tile_Scale
   CHgDummyCtrl member function inherited by CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CHgDummyCtrl member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall
CHgDummyCtrl::CHgDummyCtrl__CreateGraphicCtrl
          (CHgDummyCtrl *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xca90  150  ?CreateGraphicCtrl@CHgDummyCtrl@@UAEHHHKEVCPoint@@H@Z */
  local_4 = param_2;
  local_8 = param_1;
  CGraphicCtrl::SetSize((CGraphicCtrl *)this,(CSize *)&local_8);
  CGraphicCtrl::SetPosBase((CGraphicCtrl *)this,param_5,param_6);
  (this->CGraphicCtrl_data).offset_0x1c = param_7;
  return 1;
}



/* ---- __CHgChatLine @ 6000cae0 size=45 ---- */

/* public: __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(class
   CGraphicCtrl_MultiLineText::__CHgChatLine const &) */

void __thiscall
CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(__CHgChatLine *this,__CHgChatLine *param_1)

{
                    /* 0xcae0  34  ??0__CHgChatLine@CGraphicCtrl_MultiLineText@@QAE@ABV01@@Z */
  this->vftablePtr = &_vftable_;
  (this->__CHgChatLine_data).offset_0x0 = *(void **)(param_1 + 4);
  (this->__CHgChatLine_data).offset_0x4 = *(void **)(param_1 + 8);
  (this->__CHgChatLine_data).offset_0x8 = param_1[0xc];
  (this->__CHgChatLine_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->__CHgChatLine_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  return;
}



/* ---- operator= @ 6000cb10 size=39 ---- */

/* public: class CGraphicCtrl_MultiLineText::__CHgChatLine & __thiscall
   CGraphicCtrl_MultiLineText::__CHgChatLine::operator=(class
   CGraphicCtrl_MultiLineText::__CHgChatLine const &) */

__CHgChatLine * __thiscall
CGraphicCtrl_MultiLineText::__CHgChatLine::operator=(__CHgChatLine *this,__CHgChatLine *param_1)

{
                    /* 0xcb10  69  ??4__CHgChatLine@CGraphicCtrl_MultiLineText@@QAEAAV01@ABV01@@Z */
  (this->__CHgChatLine_data).offset_0x0 = *(void **)(param_1 + 4);
  (this->__CHgChatLine_data).offset_0x4 = *(void **)(param_1 + 8);
  (this->__CHgChatLine_data).offset_0x8 = param_1[0xc];
  (this->__CHgChatLine_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->__CHgChatLine_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  return (__CHgChatLine *)this;
}



/* ---- SetApplyGap @ 6000cb40 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_MultiLineText::SetApplyGap(bool) */

void __thiscall
CGraphicCtrl_MultiLineText::SetApplyGap(CGraphicCtrl_MultiLineText *this,bool param_1)

{
                    /* 0xcb40  380  ?SetApplyGap@CGraphicCtrl_MultiLineText@@QAEX_N@Z */
  (this->CGraphicCtrl_MultiLineText_data).offset_0x8 = param_1;
  return;
}



/* ---- SetFocus @ 6000cb50 size=47 ---- */

/* public: int __thiscall CGraphicCtrl_MultiLineText::SetFocus(int) */

int __thiscall CGraphicCtrl_MultiLineText::SetFocus(CGraphicCtrl_MultiLineText *this,int param_1)

{
  int iVar1;
  CWnd *this_00;
  
                    /* 0xcb50  402  ?SetFocus@CGraphicCtrl_MultiLineText@@QAEHH@Z */
  iVar1 = (this->CGraphicCtrl_MultiLineText_data).offset_0x10c;
  if ((iVar1 == 0) || (this_00 = *(CWnd **)(iVar1 + 0x268), this_00 == (CWnd *)0x0)) {
    return 0;
  }
  if (param_1 != 0) {
    CWnd::SetFocus(this_00);
  }
  return 1;
}



/* ---- IsChatNow @ 6000cb80 size=56 ---- */

/* public: int __thiscall CGraphicCtrl_MultiLineText::IsChatNow(void) */

int __thiscall CGraphicCtrl_MultiLineText::IsChatNow(CGraphicCtrl_MultiLineText *this)

{
  int iVar1;
  HWND pHVar2;
  
                    /* 0xcb80  270  ?IsChatNow@CGraphicCtrl_MultiLineText@@QAEHXZ */
  iVar1 = (this->CGraphicCtrl_MultiLineText_data).offset_0x10c;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x268) != 0)) {
    pHVar2 = GetFocus();
    if (*(HWND *)(*(int *)((this->CGraphicCtrl_MultiLineText_data).offset_0x10c + 0x268) + 0x20) ==
        pHVar2) {
      return 1;
    }
  }
  return 0;
}



/* ---- ChangeScrollBar @ 6000cbc0 size=353 ---- */

/* public: void __thiscall CGraphicCtrl_MultiLineText::ChangeScrollBar(class CPoint,int,char *,char
   *,char *) */

void __thiscall
CGraphicCtrl_MultiLineText::ChangeScrollBar
          (CGraphicCtrl_MultiLineText *this,int param_2,int param_3,ushort param_4,char *param_5,
          char *param_6,char *param_7)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  CGraphicCtrl *this_00;
  CGraphicCtrl_ScrollBar *pCVar7;
  undefined1 auStack_16 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xcbc0  125
                       ?ChangeScrollBar@CGraphicCtrl_MultiLineText@@QAEXVCPoint@@HPAD11@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_600166fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = *(undefined4 **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108;
  uVar1 = *(ushort *)(puVar4 + 0x5d);
  uVar2 = *(undefined2 *)(puVar4 + 0x5c);
  uVar3 = *(undefined2 *)((int)puVar4 + 0x172);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1,DAT_600259a8 ^ (uint)(auStack_16 + -0x12));
  }
  pCVar7 = operator_new(0x18c);
  uStack_4 = 0;
  if (pCVar7 == (CGraphicCtrl_ScrollBar *)0x0) {
    pCVar7 = (CGraphicCtrl_ScrollBar *)0x0;
  }
  else {
    pCVar7 = CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar(pCVar7);
  }
  uStack_4 = 0xffffffff;
  *(CGraphicCtrl_ScrollBar **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 = pCVar7;
  CGraphicCtrl_ScrollBar::InitScrollBar(pCVar7,param_5,param_6,param_7,param_4);
  CGraphicCurve::SetPosForce
            ((CGraphicCurve *)(*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 + 0x28),
             (float)param_2,(float)param_3);
  CGraphicCtrl::AddChild
            ((CGraphicCtrl *)this,
             *(CGraphicCtrl **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108,'\0',
             (CGraphicCtrl *)0x0);
  piVar5 = *(int **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108;
  if (piVar5[6] != 1) {
    pcVar6 = *(code **)(*piVar5 + 0x2c);
    piVar5[6] = 1;
    piVar5[0x49] = 0;
    (*pcVar6)(0xff03);
  }
  this_00 = *(CGraphicCtrl **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108;
  if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
    CGraphicCtrl::__AdjustShow(this_00,1);
    (this_00->CGraphicCtrl_data).offset_0xc = 1;
  }
  CGraphicCtrl_ScrollBar::SetCurrentSize
            (*(CGraphicCtrl_ScrollBar **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108,uVar1)
  ;
  *(undefined2 *)(*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 + 0x172) = uVar3;
  *(undefined2 *)(*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 + 0x170) = uVar2;
  CGraphicCtrl_ScrollBar::RePositionBar
            (*(CGraphicCtrl_ScrollBar **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108);
  ExceptionList = local_c;
  return;
}



/* ---- AddLine @ 6000cd30 size=1111 ---- */

/* public: int __thiscall CGraphicCtrl_MultiLineText::AddLine(char *,unsigned long,unsigned long) */

int __thiscall
CGraphicCtrl_MultiLineText::AddLine
          (CGraphicCtrl_MultiLineText *this,char *param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  CGraphicCtrl_ScrollBar *this_00;
  bool bVar4;
  ushort uVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  int iVar9;
  char *_Dst;
  int iVar10;
  int iVar11;
  int local_420;
  uint local_41c;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  char local_408 [1024];
  uint local_8;
  
                    /* 0xcd30  111  ?AddLine@CGraphicCtrl_MultiLineText@@QAEHPADKK@Z */
  local_40c = 0xffffffff;
  puStack_410 = &LAB_600168b0;
  local_414 = ExceptionList;
  local_8 = DAT_600259a8 ^ (uint)local_408;
  ExceptionList = &local_414;
  if (param_1 != (char *)0x0) {
    local_408[0] = '\0';
    memset(local_408 + 1,0,0x3ff);
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar10 = 0;
    iVar11 = 0;
    if (param_3 == 0xffffffff) {
      param_3 = param_2 >> 2 & 0x3f3f3f;
    }
    local_40c = 0;
    do {
      if ((int)pcVar6 - (int)(param_1 + 1) < iVar11) break;
      cVar1 = param_1[iVar11];
      if (cVar1 == '\0') {
        local_41c = 0x10000;
      }
      else if (cVar1 == '\n') {
        local_41c = 0x10002;
      }
      else {
        local_41c = ((-1 < cVar1) - 1 & 0x10001) + 0x10001;
      }
      iVar11 = iVar11 + ((int)local_41c >> 0x10);
      bVar4 = false;
      if ((iVar11 < (int)pcVar6 - (int)(param_1 + 1)) && (param_1[iVar11] == '\n')) {
        bVar4 = true;
LAB_6000ce53:
        memset(local_408,0,0x180);
        memcpy(local_408,param_1 + iVar10,iVar11 - iVar10);
        iVar9 = (this->CGraphicCtrl_MultiLineText_data).offset_0x11c;
        local_408[(iVar11 - iVar10) + 1] = '\0';
        if (iVar9 < 0x20) {
          pvVar8 = (void *)(&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)[iVar9][1];
          if (pvVar8 != (void *)0x0) {
            operator_delete__(pvVar8);
            (&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
            [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][1] = 0;
          }
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          pvVar8 = operator_new__((uint)(pcVar7 + (1 - (int)(local_408 + 1))));
          (&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
          [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][1] = pvVar8;
          (&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
          [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][4] = param_2;
          (&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
          [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][5] = param_3;
          pvVar8 = (void *)(&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
                           [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][2];
          if (pvVar8 != (void *)0x0) {
            operator_delete__(pvVar8);
            (&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
            [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][2] = 0;
          }
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          pvVar8 = operator_new__((uint)(pcVar7 + (1 - (int)(local_408 + 1))));
          (&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
          [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][2] = pvVar8;
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          strcpy_s((char *)(&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
                           [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][2],
                   (rsize_t)(pcVar7 + (1 - (int)(local_408 + 1))),local_408);
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          strcpy_s((char *)(&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)
                           [(this->CGraphicCtrl_MultiLineText_data).offset_0x11c][1],
                   (rsize_t)(pcVar7 + (1 - (int)(local_408 + 1))),local_408);
          puVar3 = &(this->CGraphicCtrl_MultiLineText_data).offset_0x11c;
          *puVar3 = *puVar3 + 1;
          (this->CGraphicCtrl_MultiLineText_data).offset_0x118 = 1;
        }
        else {
          puVar3 = (this->CGraphicCtrl_MultiLineText_data).offset_0x18c;
          for (iVar9 = 1; iVar9 < 0x20; iVar9 = iVar9 + 1) {
            *(undefined4 **)(&(this->CGraphicCtrl_MultiLineText_data).field_0x188 + iVar9 * 4) =
                 (&(this->CGraphicCtrl_MultiLineText_data).offset_0x18c)[iVar9];
          }
          *(undefined4 **)&this[1].CGraphicCtrl_data.field_0x74 = puVar3;
          if ((void *)puVar3[1] != (void *)0x0) {
            operator_delete__((void *)puVar3[1]);
            puVar3[1] = 0;
          }
          if ((void *)puVar3[2] != (void *)0x0) {
            operator_delete__((void *)puVar3[2]);
            puVar3[2] = 0;
          }
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          pvVar8 = operator_new__((uint)(pcVar7 + (1 - (int)(local_408 + 1))));
          puVar3[1] = pvVar8;
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          _Dst = operator_new__((uint)(pcVar7 + (1 - (int)(local_408 + 1))));
          puVar3[5] = param_3;
          puVar3[2] = _Dst;
          puVar3[4] = param_2;
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          strcpy_s(_Dst,(rsize_t)(pcVar7 + (1 - (int)(local_408 + 1))),local_408);
          pcVar7 = local_408;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          strcpy_s((char *)puVar3[1],(rsize_t)(pcVar7 + (1 - (int)(local_408 + 1))),local_408);
          (this->CGraphicCtrl_MultiLineText_data).offset_0x118 = 1;
          *(float *)&(this->CGraphicCtrl_MultiLineText_data).field_0xc4 =
               *(float *)&(this->CGraphicCtrl_MultiLineText_data).field_0xc4 -
               (float)(int)((this->CGraphicCtrl_MultiLineText_data).offset_0x124 +
                           (this->CGraphicCtrl_MultiLineText_data).offset_0x120);
        }
        iVar10 = iVar11;
        if (bVar4) {
          iVar10 = iVar11 + 1;
        }
      }
      else if ((*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x110 < iVar11 - iVar10) ||
              ((local_41c & 0xffff) == 0)) goto LAB_6000ce53;
    } while ((local_41c & 0xffff) != 0);
    iVar11 = (this->CGraphicCtrl_MultiLineText_data).offset_0x11c;
    iVar9 = (this->CGraphicCtrl_MultiLineText_data).offset_0x130;
    if (iVar9 < iVar11) {
      uVar5 = ((short)iVar11 - (short)iVar9) + 1;
    }
    else {
      uVar5 = 0;
    }
    CGraphicCtrl_ScrollBar::SetCurrentSize
              (*(CGraphicCtrl_ScrollBar **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108,
               uVar5);
    do {
      this_00 = *(CGraphicCtrl_ScrollBar **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108;
      sVar2 = (this_00->CGraphicCtrl_ScrollBar_data).offset_0xa;
      CGraphicCtrl_ScrollBar::OnDn(this_00);
    } while (sVar2 != *(short *)(*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 +
                                0x172));
  }
  ExceptionList = local_414;
  iVar11 = __security_check_cookie(local_8 ^ (uint)local_408);
  return iVar11;
}



/* ---- Catch_All@6000d168 @ 6000d168 size=6 ---- */

undefined4 Catch_All_6000d168(void)

{
  return 0x6000d16e;
}



/* ---- CGraphicCtrl_MultiLineText::GetBufData @ 6000d1a0 size=138 ---- */

/* public: virtual char * __thiscall CGraphicCtrl_MultiLineText::GetBufData(void) */

char * __thiscall
CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText__GetBufData(CGraphicCtrl_MultiLineText *this)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 **ppuVar6;
  
                    /* 0xd1a0  200  ?GetBufData@CGraphicCtrl_MultiLineText@@UAEPADXZ */
  iVar4 = 0;
  DAT_60025c00 = 0;
  pcVar5 = (char *)0x0;
  if (0 < (int)(this->CGraphicCtrl_MultiLineText_data).offset_0x11c) {
    ppuVar6 = &(this->CGraphicCtrl_MultiLineText_data).offset_0x18c;
    do {
      FUN_60001040(&DAT_60025c00 + (int)pcVar5,0x2000 - (int)pcVar5,"%s%c%c",(char)(*ppuVar6)[2]);
      pcVar2 = (char *)(*ppuVar6)[2];
      pcVar3 = pcVar2 + 1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar4 = iVar4 + 1;
      ppuVar6 = ppuVar6 + 1;
      pcVar5 = pcVar2 + (int)(pcVar5 + (2 - (int)pcVar3));
    } while (iVar4 < (int)(this->CGraphicCtrl_MultiLineText_data).offset_0x11c);
  }
  pcVar5 = &DAT_60025c00;
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  return (char *)(-(uint)(pcVar3 != &DAT_60025c00) & 0x60025c00);
}



/* ---- __CHgChatLine @ 6000d230 size=26 ---- */

/* public: __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(void) */

void __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(__CHgChatLine *this)

{
                    /* 0xd230  35  ??0__CHgChatLine@CGraphicCtrl_MultiLineText@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->__CHgChatLine_data).offset_0x0 = (void *)0x0;
  (this->__CHgChatLine_data).offset_0x4 = (void *)0x0;
  (this->__CHgChatLine_data).offset_0x8 = 0;
  (this->__CHgChatLine_data).offset_0xc = 0;
  (this->__CHgChatLine_data).offset_0x10 = 0;
  return;
}



/* ---- ~__CHgChatLine @ 6000d250 size=57 ---- */

/* public: virtual __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::~__CHgChatLine(void) */

void __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::~__CHgChatLine(__CHgChatLine *this)

{
  void *pvVar1;
  
                    /* 0xd250  65  ??1__CHgChatLine@CGraphicCtrl_MultiLineText@@UAE@XZ */
  pvVar1 = (this->__CHgChatLine_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->__CHgChatLine_data).offset_0x0 = (void *)0x0;
  }
  pvVar1 = (this->__CHgChatLine_data).offset_0x4;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->__CHgChatLine_data).offset_0x4 = (void *)0x0;
  }
  return;
}



/* ---- __CGraphicCtrl_ChatInputBox @ 6000d290 size=205 ---- */

/* public: __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CGraphicCtrl_ChatInputBox(void) */

__CGraphicCtrl_ChatInputBox * __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CGraphicCtrl_ChatInputBox
          (__CGraphicCtrl_ChatInputBox *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd290  28  ??0__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAE@XZ
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  CHgDIB::CHgDIB((CHgDIB *)&(this->__CGraphicCtrl_ChatInputBox_data).offset_0x12c);
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100 = (int *)0x0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 = 0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x104 = 0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x108 = 2;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x10c = 0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x110 = 0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x190 = (HDC)0x0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x194 = (HGDIOBJ)0x0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x114 = 0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x11c = 0;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x120 = 0xffffff;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x124 = 0xf00000;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x128 = 0x808080;
  memset(&this->__CGraphicCtrl_ChatInputBox_data,0,0x100);
  ExceptionList = local_c;
  return this;
}



/* ---- ~__CGraphicCtrl_ChatInputBox @ 6000d360 size=213 ---- */

/* public: virtual __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::~__CGraphicCtrl_ChatInputBox(void) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::~__CGraphicCtrl_ChatInputBox
          (__CGraphicCtrl_ChatInputBox *this)

{
  int *piVar1;
  HDC hdc;
  uint uVar2;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xd360  59  ??1__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@UAE@XZ
                        */
  puStack_8 = &LAB_600168f7;
  local_c = ExceptionList;
  uVar2 = DAT_600259a8 ^ (uint)(auStack_e + -10);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  piVar1 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100;
  local_4 = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x68))(uVar2);
    piVar1 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
      (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100 = (int *)0x0;
    }
  }
  hdc = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x190;
  if (hdc != (HDC)0x0) {
    SelectObject(hdc,(this->__CGraphicCtrl_ChatInputBox_data).offset_0x194);
    DeleteDC((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190);
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x190 = (HDC)0x0;
  }
  (**(code **)((this->__CGraphicCtrl_ChatInputBox_data).offset_0x12c + 0x14))();
  local_4 = local_4 & 0xffffff00;
  CHgDIB::~CHgDIB((CHgDIB *)&(this->__CGraphicCtrl_ChatInputBox_data).offset_0x12c);
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- ValidateChatInput @ 6000d440 size=13 ---- */

/* public: void __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::ValidateChatInput(int) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::ValidateChatInput
          (__CGraphicCtrl_ChatInputBox *this,int param_1)

{
                    /* 0xd440  460
                       ?ValidateChatInput@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXH@Z
                        */
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 = param_1;
  return;
}



/* ---- FUN_6000d450 @ 6000d450 size=327 ---- */

void __cdecl FUN_6000d450(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  CParam local_198 [132];
  CGameFinder local_114 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001692c;
  local_c = ExceptionList;
  local_10 = DAT_600259a8 ^ (uint)local_198;
  ExceptionList = &local_c;
  iVar1 = IsMyDataChatAgreeFlag();
  if ((iVar1 != 0) || (*(int *)(param_2 + 4) != 0x415)) goto LAB_6000d572;
  CParam::CParam(local_198,false);
  local_4 = 0;
  CGameFinder::CGameFinder(local_114);
  iVar1 = CGameFinder::isGMahjong(local_114);
  pcVar2 = AddValue_exref;
  if (iVar1 == 0) {
    iVar1 = CGameFinder::isBingo(local_114);
    pcVar2 = AddValue_exref;
    if (iVar1 != 0) {
      CParam::AddValue(local_198,"p014",0x212);
      uVar3 = 0x168;
      goto LAB_6000d529;
    }
  }
  else {
    CParam::AddValue(local_198,"p014",0xf0);
    uVar3 = 0x24e;
LAB_6000d529:
    (*pcVar2)(&DAT_60018314,uVar3);
  }
  ShowSaveChatDialog(local_198,true,false);
  local_4 = 0xffffffff;
  CParam::~CParam(local_198);
LAB_6000d572:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_198);
  return;
}



/* ---- OnEditChange @ 6000d5a0 size=93 ---- */

/* public: void __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnEditChange(void)
    */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnEditChange
          (__CHgChatInputBoxEdit *this)

{
  __CHgChatInputBoxEdit *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd5a0  306
                       ?OnEditChange@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXXZ
                       0xd5a0  308
                       ?OnEditUpdate@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXXZ
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  local_4 = 0;
  CWnd::GetWindowTextA
            ((CWnd *)this,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10
            );
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_6000d600 @ 6000d600 size=9 ---- */

undefined4 FUN_6000d600(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return *(undefined4 *)(pAVar1 + 4);
}



/* ---- scalar_deleting_destructor @ 6000d610 size=30 ---- */

CEdit * __thiscall CEdit::scalar_deleting_destructor(CEdit *this,byte param_1)

{
  CEdit::~CEdit(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CEdit *)this;
}



/* ---- CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::_AllocSelf @ 6000d630 size=103 ---- */

/* public: virtual void * __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::
CGraphicCtrl_MultiLineText____CGraphicCtrl_ChatInputBox___AllocSelf
          (__CGraphicCtrl_ChatInputBox *this)

{
  __CGraphicCtrl_ChatInputBox *p_Var1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd630  480
                       ?_AllocSelf@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@UAEPAXXZ
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  p_Var1 = operator_new(0x300);
  local_4 = 0;
  if (p_Var1 == (__CGraphicCtrl_ChatInputBox *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  p_Var1 = __CGraphicCtrl_ChatInputBox(p_Var1);
  ExceptionList = local_c;
  return p_Var1;
}



/* ---- scalar_deleting_destructor @ 6000d6a0 size=124 ---- */

undefined4 * __thiscall
CGraphicCtrl_MultiLineText::__CHgChatLine::scalar_deleting_destructor
          (__CHgChatLine *this,byte param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].__CHgChatLine_data.offset_0x10;
    _eh_vector_destructor_iterator_
              (this,0x18,this[-1].__CHgChatLine_data.offset_0x10,~__CHgChatLine);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return puVar1;
  }
  pvVar2 = (this->__CHgChatLine_data).offset_0x0;
                    /* inlined destructor: CGraphicCtrl_MultiLineText::__CHgChatLine::~__CHgChatLine
                        */
  this->vftablePtr = &_vftable_;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    (this->__CHgChatLine_data).offset_0x0 = (void *)0x0;
  }
  pvVar2 = (this->__CHgChatLine_data).offset_0x4;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    (this->__CHgChatLine_data).offset_0x4 = (void *)0x0;
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- scalar_deleting_destructor @ 6000d720 size=85 ---- */

__CGraphicCtrl_ChatInputBox * __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::scalar_deleting_destructor
          (__CGraphicCtrl_ChatInputBox *this,byte param_1)

{
  HGDIOBJ *ppvVar1;
  
  if ((param_1 & 2) == 0) {
    ~__CGraphicCtrl_ChatInputBox(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (__CGraphicCtrl_ChatInputBox *)this;
  }
  ppvVar1 = &this[-1].__CGraphicCtrl_ChatInputBox_data.offset_0x194;
  _eh_vector_destructor_iterator_
            (this,0x300,(int)this[-1].__CGraphicCtrl_ChatInputBox_data.offset_0x194,
             ~__CGraphicCtrl_ChatInputBox);
  if ((param_1 & 1) != 0) {
    operator_delete__(ppvVar1);
  }
  return (__CGraphicCtrl_ChatInputBox *)ppvVar1;
}



/* ---- __CHgChatLine @ 6000d780 size=443 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText(void) */

__CHgChatLine * __thiscall
CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(__CHgChatLine *this)

{
  CGraphicCurve *this_00;
  undefined4 *puVar1;
  char *pszFaceName;
  HFONT pHVar2;
  undefined4 *puVar3;
  int local_18;
  CSimpleStringT<char,1> local_14 [4];
  __CHgChatLine *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd780  5  ??0CGraphicCtrl_MultiLineText@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001699c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
                    /* inlined constructor: CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText
                        */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  this->vftablePtr = (__CHgChatLine_vftable *)&CGraphicCtrl_MultiLineText::_vftable_;
  this[0xf].__CHgChatLine_data.offset_0x0 = (void *)0x0;
                    /* inlined constructor: CFont::CFont */
  this[0xf].vftablePtr = (__CHgChatLine_vftable *)&CFont::vftable;
  local_4 = 1;
  CHgDIB::CHgDIB((CHgDIB *)&this[0xf].__CHgChatLine_data.offset_0x8);
  this_00 = (CGraphicCurve *)(this + 0x14);
  local_4._0_1_ = 2;
  CGraphicCurve::CGraphicCurve(this_00);
  CWnd::CWnd((CWnd *)(this + 0x1c));
                    /* inlined constructor: CEdit::CEdit */
  ((CCmdTarget *)&this[0x1c].vftablePtr)->CObject = (CObject)&CEdit::vftable;
  local_4._0_1_ = 3;
  *(undefined1 *)&this[0xf].__CHgChatLine_data.offset_0x4 = 1;
  this[0x1a].__CHgChatLine_data.offset_0xc = 1;
  this[0x1a].__CHgChatLine_data.offset_0x10 = 0;
  *(undefined4 *)&this[0x1b].__CHgChatLine_data.offset_0x8 = 0;
  this[0x1b].__CHgChatLine_data.offset_0xc = 0;
  this[0x1b].vftablePtr = (__CHgChatLine_vftable *)0x0;
  this[0x1b].__CHgChatLine_data.offset_0x0 = (void *)0x0;
  this[0x13].__CHgChatLine_data.offset_0x10 = 0;
  this[0x13].__CHgChatLine_data.offset_0xc = 0;
  *(undefined2 *)&this[0x1b].__CHgChatLine_data.offset_0x4 = 0;
  puVar3 = (undefined4 *)&this[0x1f].__CHgChatLine_data.offset_0x8;
  local_18 = 0x20;
  do {
    puVar1 = operator_new(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &_vftable_;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    *puVar3 = puVar1;
    puVar3 = puVar3 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  CGraphicCurve::SetPivot(this_00,'\a',1);
  CGraphicCurve::SetStyle(this_00,4,1);
  CGraphicCurve::SetRate(this_00,_DAT_60018470,_DAT_60018474);
  this[0x1a].__CHgChatLine_data.offset_0x0 = (void *)0x0;
  LoadStr((int)local_14);
  local_4 = CONCAT31(local_4._1_3_,4);
  pszFaceName = ATL::CSimpleStringT<char,1>::operator_char_const_(local_14);
  pHVar2 = CreateFontA(0xc,6,0,0,400,0,0,0,1,0,0,3,1,pszFaceName);
  CGdiObject::Attach((CGdiObject *)(this + 0xf),pHVar2);
  (this->__CHgChatLine_data).offset_0x4 = (void *)0x1;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CGraphicCtrl_MultiLineText @ 6000d940 size=255 ---- */

/* public: virtual __thiscall CGraphicCtrl_MultiLineText::~CGraphicCtrl_MultiLineText(void) */

void __thiscall
CGraphicCtrl_MultiLineText::~CGraphicCtrl_MultiLineText(CGraphicCtrl_MultiLineText *this)

{
  CGraphicCtrl_MultiLineText_data *this_00;
  HDC hdc;
  uint uVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xd940  41  ??1CGraphicCtrl_MultiLineText@@UAE@XZ */
  puStack_8 = &LAB_600169f3;
  local_c = ExceptionList;
  uVar1 = DAT_600259a8 ^ (uint)(auStack_e + -0xe);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 3;
  ppuVar3 = &(this->CGraphicCtrl_MultiLineText_data).offset_0x18c;
  iVar2 = 0x20;
  do {
    if (*ppuVar3 != (undefined4 *)0x0) {
      (**(code **)**ppuVar3)(1,uVar1);
      *ppuVar3 = (undefined4 *)0x0;
    }
    ppuVar3 = ppuVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (**(code **)(*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0xc + 0x14))();
  hdc = (HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74;
  if (hdc != (HDC)0x0) {
    SelectObject(hdc,(HGDIOBJ)(this->CGraphicCtrl_MultiLineText_data).offset_0x70);
    DeleteDC((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74);
    (this->CGraphicCtrl_MultiLineText_data).offset_0x74 = 0;
  }
  this_00 = &this->CGraphicCtrl_MultiLineText_data;
  CGdiObject::DeleteObject((CGdiObject *)this_00);
  local_4._0_1_ = 2;
  CEdit::~CEdit((CEdit *)&(this->CGraphicCtrl_MultiLineText_data).offset_0x138);
  local_4._0_1_ = 1;
  CHgDIB::~CHgDIB((CHgDIB *)&(this->CGraphicCtrl_MultiLineText_data).field_0xc);
  local_4 = (uint)local_4._1_3_ << 8;
                    /* inlined destructor: CFont::~CFont */
  this_00->offset_0x0 = &CFont::vftable.GetRuntimeClass;
  CGdiObject::~CGdiObject((CGdiObject *)this_00);
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- InitWithNoChat @ 6000da40 size=554 ---- */

/* public: int __thiscall CGraphicCtrl_MultiLineText::InitWithNoChat(int,int,int,int,int,int,class
   CPoint,char *,char *,char *) */

int __thiscall
CGraphicCtrl_MultiLineText::InitWithNoChat
          (CGraphicCtrl_MultiLineText *this,undefined4 param_1,undefined4 param_2,int param_3,
          int param_4,int param_5,int param_6,int param_8,int param_9,char *param_10,char *param_11,
          char *param_12)

{
  undefined1 *this_00;
  int *piVar1;
  code *pcVar2;
  CGraphicCtrl *this_01;
  uint uVar3;
  int iVar4;
  int iVar5;
  HDC hdc;
  HDC pHVar6;
  HBITMAP__ *h;
  HGDIOBJ pvVar7;
  CGraphicCtrl_ScrollBar *pCVar8;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xda40  263
                       ?InitWithNoChat@CGraphicCtrl_MultiLineText@@QAEHHHHHHHVCPoint@@PAD11@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016a1b;
  local_c = ExceptionList;
  uVar3 = DAT_600259a8 ^ (int)register0x00000010 - 0x1cU;
  ExceptionList = &local_c;
  iVar4 = 0;
  if (0 < param_5) {
    iVar5 = CGraphicCtrl::CGraphicCtrl__CreateGraphicCtrl
                      ((CGraphicCtrl *)this,param_3,param_4,0xff0000,0,0,0);
    iVar4 = 0;
    if (iVar5 != 0) {
      (this->CGraphicCtrl_MultiLineText_data).offset_0x124 = param_6;
      iVar4 = (param_5 + param_6) * 0x20;
      (this->CGraphicCtrl_MultiLineText_data).offset_0x120 = param_5;
      this_00 = &(this->CGraphicCtrl_MultiLineText_data).field_0xc;
      *(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x134 = iVar4;
      (this->CGraphicCtrl_MultiLineText_data).offset_0x130 = param_4 / (param_5 + param_6);
      (**(code **)(*(int *)this_00 + 0x10))(param_3,iVar4,uVar3);
      CHgImage::FillRect((CHgImage *)this_00,0,0,param_3,
                         *(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x134,0xff0000,0x100
                         ,0);
      hdc = GetDC((HWND)0x0);
      pHVar6 = CreateCompatibleDC(hdc);
      (this->CGraphicCtrl_MultiLineText_data).offset_0x74 = pHVar6;
      h = CHgDIB::GetHBitmap((CHgDIB *)this_00);
      pvVar7 = SelectObject((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,h);
      (this->CGraphicCtrl_MultiLineText_data).offset_0x70 = pvVar7;
      SetBkMode((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,1);
      ReleaseDC((HWND)0x0,hdc);
      pCVar8 = operator_new(0x18c);
      uStack_4 = 0;
      if (pCVar8 == (CGraphicCtrl_ScrollBar *)0x0) {
        pCVar8 = (CGraphicCtrl_ScrollBar *)0x0;
      }
      else {
        pCVar8 = CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar(pCVar8);
      }
      uStack_4 = 0xffffffff;
      *(CGraphicCtrl_ScrollBar **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 = pCVar8;
      CGraphicCtrl_ScrollBar::InitScrollBar(pCVar8,param_10,param_11,param_12,(ushort)param_4);
      CGraphicCurve::SetPosForce
                ((CGraphicCurve *)
                 (*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 + 0x28),
                 (float)param_8,(float)param_9);
      CGraphicCtrl::AddChild
                ((CGraphicCtrl *)this,
                 *(CGraphicCtrl **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108,'\0',
                 (CGraphicCtrl *)0x0);
      piVar1 = *(int **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108;
      if (piVar1[6] != 1) {
        pcVar2 = *(code **)(*piVar1 + 0x2c);
        piVar1[6] = 1;
        piVar1[0x49] = 0;
        (*pcVar2)(0xff03);
      }
      this_01 = *(CGraphicCtrl **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108;
      if ((this_01->CGraphicCtrl_data).offset_0xc != 1) {
        CGraphicCtrl::__AdjustShow(this_01,1);
        (this_01->CGraphicCtrl_data).offset_0xc = 1;
      }
      *(undefined2 *)(*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 + 0x170) =
           *(undefined2 *)&(this->CGraphicCtrl_MultiLineText_data).offset_0x130;
      iVar4 = param_3 / 6 + -2;
      iVar5 = param_3 / 7 + -2;
      *(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x110 = iVar4;
      *(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x114 = iVar5;
      if (iVar4 < 2) {
        *(undefined4 *)&(this->CGraphicCtrl_MultiLineText_data).field_0x110 = 2;
      }
      if (iVar5 < 2) {
        *(undefined4 *)&(this->CGraphicCtrl_MultiLineText_data).field_0x114 = 2;
      }
      iVar4 = 1;
    }
  }
  ExceptionList = local_c;
  return iVar4;
}



/* ---- CGraphicCtrl_MultiLineText::Proc @ 6000dc70 size=707 ---- */

/* public: virtual int __thiscall CGraphicCtrl_MultiLineText::Proc(unsigned long) */

int __thiscall
CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText__Proc
          (CGraphicCtrl_MultiLineText *this,ulong param_1)

{
  char cVar1;
  LPCSTR pCVar2;
  ushort uVar3;
  int iVar4;
  LPCSTR pCVar5;
  int iVar6;
  undefined4 **ppuVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  
                    /* 0xdc70  353  ?Proc@CGraphicCtrl_MultiLineText@@UAEHK@Z */
  uVar3 = *(ushort *)(*(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x108 + 0x172);
  if ((this->CGraphicCtrl_MultiLineText_data).offset_0x128 != uVar3) {
    (this->CGraphicCtrl_MultiLineText_data).offset_0x128 = uVar3;
    (this->CGraphicCtrl_MultiLineText_data).offset_0x12c = (uint)uVar3;
    CGraphicCurve::SetTarget
              ((CGraphicCurve *)&(this->CGraphicCtrl_MultiLineText_data).field_0x78,0.0,
               (float)(int)(((this->CGraphicCtrl_MultiLineText_data).offset_0x124 +
                            (this->CGraphicCtrl_MultiLineText_data).offset_0x120) * (uint)uVar3),1);
    (this->CGraphicCtrl_MultiLineText_data).offset_0x118 = 1;
  }
  if ((this->CGraphicCtrl_MultiLineText_data).offset_0x118 == 0) {
    iVar4 = (**(code **)&(this->CGraphicCtrl_MultiLineText_data).field_0x8c)(param_1);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = (this->CGraphicCtrl_MultiLineText_data).offset_0x11c;
  iVar6 = (this->CGraphicCtrl_MultiLineText_data).offset_0x130;
  if (iVar6 < iVar4) {
    uVar3 = ((short)iVar4 - (short)iVar6) + 1;
  }
  else {
    uVar3 = 0;
  }
  CGraphicCtrl_ScrollBar::SetCurrentSize
            (*(CGraphicCtrl_ScrollBar **)&(this->CGraphicCtrl_MultiLineText_data).field_0x108,uVar3)
  ;
  CHgImage::FillRect((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,
                     (this->CGraphicCtrl_data).offset_0xd0,(this->CGraphicCtrl_data).offset_0xd4,
                     0xff0000,0x100,0);
  CHgImage::FillRect((CHgImage *)&(this->CGraphicCtrl_MultiLineText_data).field_0xc,0,0,
                     (this->CGraphicCtrl_data).offset_0xd0,
                     *(int *)&(this->CGraphicCtrl_MultiLineText_data).field_0x134,0xff0000,0x100,0);
  iVar4 = 0;
  if (0 < (int)(this->CGraphicCtrl_MultiLineText_data).offset_0x11c) {
    ppuVar7 = &(this->CGraphicCtrl_MultiLineText_data).offset_0x18c;
    do {
      if (((*ppuVar7)[1] != 0) && ((*ppuVar7)[5] != 0xff0000)) {
        SelectObject((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,
                     (HGDIOBJ)(this->CGraphicCtrl_MultiLineText_data).offset_0x4);
        SetTextColor((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,(*ppuVar7)[5]);
        iVar10 = (this->CGraphicCtrl_MultiLineText_data).offset_0x120;
        iVar11 = (this->CGraphicCtrl_MultiLineText_data).offset_0x124;
        iVar6 = iVar10 * iVar4 + 1 + iVar11;
        if ((this->CGraphicCtrl_MultiLineText_data).offset_0x8 != '\0') {
          iVar6 = (iVar10 + iVar11) * iVar4 + 1;
        }
        pCVar2 = (LPCSTR)(*ppuVar7)[1];
        pCVar5 = pCVar2;
        do {
          cVar1 = *pCVar5;
          pCVar5 = pCVar5 + 1;
        } while (cVar1 != '\0');
        TextOutA((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,1,iVar6,pCVar2,
                 (int)pCVar5 - (int)(pCVar2 + 1));
      }
      iVar4 = iVar4 + 1;
      ppuVar7 = ppuVar7 + 1;
    } while (iVar4 < (int)(this->CGraphicCtrl_MultiLineText_data).offset_0x11c);
  }
  iVar4 = 0;
  if (0 < (int)(this->CGraphicCtrl_MultiLineText_data).offset_0x11c) {
    ppuVar7 = &(this->CGraphicCtrl_MultiLineText_data).offset_0x18c;
    do {
      if ((*ppuVar7)[1] != 0) {
        SelectObject((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,
                     (HGDIOBJ)(this->CGraphicCtrl_MultiLineText_data).offset_0x4);
        SetTextColor((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,(*ppuVar7)[4]);
        iVar10 = (this->CGraphicCtrl_MultiLineText_data).offset_0x120;
        iVar11 = (this->CGraphicCtrl_MultiLineText_data).offset_0x124;
        iVar6 = iVar10 * iVar4 + 1 + iVar11;
        if ((this->CGraphicCtrl_MultiLineText_data).offset_0x8 != '\0') {
          iVar6 = (iVar10 + iVar11) * iVar4 + 1;
        }
        pCVar2 = (LPCSTR)(*ppuVar7)[1];
        pCVar5 = pCVar2;
        do {
          cVar1 = *pCVar5;
          pCVar5 = pCVar5 + 1;
        } while (cVar1 != '\0');
        TextOutA((HDC)(this->CGraphicCtrl_MultiLineText_data).offset_0x74,0,iVar6,pCVar2,
                 (int)pCVar5 - (int)(pCVar2 + 1));
      }
      iVar4 = iVar4 + 1;
      ppuVar7 = ppuVar7 + 1;
    } while (iVar4 < (int)(this->CGraphicCtrl_MultiLineText_data).offset_0x11c);
  }
  iVar4 = CGraphicCtrl::GetArea((CGraphicCtrl *)this);
  iVar6 = *(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 4);
  uVar8 = CGraphicCtrl::GetArea((CGraphicCtrl *)this);
  iVar4 = ((int *)uVar8)[2] - *(int *)uVar8;
  iVar11 = 0;
  iVar10 = 0x100;
  uVar9 = FUN_60015470(iVar4,(int)((ulonglong)uVar8 >> 0x20));
  CHgImage::Draw((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,
                 (CHgImageBase *)&(this->CGraphicCtrl_MultiLineText_data).field_0xc,0,(int)uVar9,
                 iVar4,iVar6,iVar10,iVar11);
  (this->CGraphicCtrl_MultiLineText_data).offset_0x118 = 0;
  return 1;
}



/* ---- SetSelPos @ 6000df40 size=49 ---- */

/* public: void __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetSelPos(int,int) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetSelPos
          (__CGraphicCtrl_ChatInputBox *this,int param_1,int param_2)

{
                    /* 0xdf40  432
                       ?SetSelPos@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXHH@Z
                        */
  if (((this->__CGraphicCtrl_ChatInputBox_data).offset_0x10c != param_1) ||
     ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x110 != param_2)) {
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x10c = param_1;
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x110 = param_2;
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 = 0;
  }
  return;
}



/* ---- SetCaretPos @ 6000df80 size=31 ---- */

/* public: void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetCaretPos(int)
    */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetCaretPos
          (__CGraphicCtrl_ChatInputBox *this,int param_1)

{
                    /* 0xdf80  382
                       ?SetCaretPos@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXH@Z
                        */
  if ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x104 != param_1) {
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x104 = param_1;
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 = 0;
  }
  return;
}



/* ---- SetCaretSize @ 6000dfa0 size=31 ---- */

/* public: void __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetCaretSize(int) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetCaretSize
          (__CGraphicCtrl_ChatInputBox *this,int param_1)

{
                    /* 0xdfa0  383
                       ?SetCaretSize@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXH@Z
                        */
  if ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x108 != param_1) {
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x108 = param_1;
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 = 0;
  }
  return;
}



/* ---- SetChatBuf @ 6000dfc0 size=61 ---- */

/* public: void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetChatBuf(char
   *) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetChatBuf
          (__CGraphicCtrl_ChatInputBox *this,char *param_1)

{
  int iVar1;
  
                    /* 0xdfc0  384
                       ?SetChatBuf@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXPAD@Z
                        */
  iVar1 = _mbscmp((uchar *)&this->__CGraphicCtrl_ChatInputBox_data,(uchar *)param_1);
  if (iVar1 != 0) {
    strcpy_s((char *)&this->__CGraphicCtrl_ChatInputBox_data,0x100,param_1);
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 = 0;
  }
  return;
}



/* ---- CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::Proc @ 6000e000 size=763 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::Proc(unsigned long) */

int __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::
CGraphicCtrl_MultiLineText____CGraphicCtrl_ChatInputBox__Proc
          (__CGraphicCtrl_ChatInputBox *this,ulong param_1)

{
  char cVar1;
  int iVar2;
  POINT pt;
  SHORT SVar3;
  BOOL BVar4;
  int *piVar5;
  HCURSOR hCursor;
  HWND pHVar6;
  int iVar7;
  int iVar8;
  HGDIOBJ h;
  __CGraphicCtrl_ChatInputBox_data *p_Var9;
  RECT local_10;
  
                    /* 0xe000  362
                       ?Proc@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@UAEHK@Z */
  CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)this);
  local_10.left = local_10.left + -3;
  local_10.right = local_10.right + 3;
  local_10.top = local_10.top + -3;
  local_10.bottom = local_10.bottom + 3;
  pt.y = DAT_60025af0;
  pt.x = _s_CursorPos;
  BVar4 = PtInRect(&local_10,pt);
  if (BVar4 == 0) {
    SVar3 = GetAsyncKeyState(1);
    if (SVar3 != 0) {
      (this->__CGraphicCtrl_ChatInputBox_data).offset_0x11c = 1;
    }
  }
  else {
    if ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x11c == 0) {
      SVar3 = GetAsyncKeyState(1);
      if ((SVar3 != 0) &&
         ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x11c = 1,
         (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100 != (int *)0x0)) {
        piVar5 = (int *)CGraphicCtrl::GetPosScreen((CGraphicCtrl *)this);
        SendMessageA((HWND)(this->__CGraphicCtrl_ChatInputBox_data).offset_0x100[8],0x201,1,
                     ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x114 - *piVar5) +
                     _s_CursorPos);
        piVar5 = (int *)CGraphicCtrl::GetPosScreen((CGraphicCtrl *)this);
        SendMessageA((HWND)(this->__CGraphicCtrl_ChatInputBox_data).offset_0x100[8],0x202,1,
                     ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x114 - *piVar5) +
                     _s_CursorPos);
        CWnd::SetFocus((CWnd *)(this->__CGraphicCtrl_ChatInputBox_data).offset_0x100);
      }
    }
    AfxGetModuleState();
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f01);
    SetCursor(hCursor);
  }
  SVar3 = GetAsyncKeyState(1);
  if (SVar3 == 0) {
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x11c = 0;
  }
  if ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 != 0) {
    return 0;
  }
  piVar5 = &(this->__CGraphicCtrl_ChatInputBox_data).offset_0x12c;
  CHgImage::FillRect((CHgImage *)piVar5,0,0,0x1e0,0xc,0xff0000,0x100,0);
  iVar8 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x10c;
  iVar7 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x110;
  if (iVar8 < iVar7) {
    CHgImage::FillRect((CHgImage *)piVar5,iVar8 * 6,0,(iVar7 - iVar8) * 6,0xc,
                       (this->__CGraphicCtrl_ChatInputBox_data).offset_0x128,0x100,0);
  }
  if ((this->__CGraphicCtrl_ChatInputBox_data).offset_0x100 != (int *)0x0) {
    pHVar6 = GetFocus();
    if (pHVar6 == (HWND)(this->__CGraphicCtrl_ChatInputBox_data).offset_0x100[8]) {
      CHgImage::FillRect((CHgImage *)piVar5,
                         (this->__CGraphicCtrl_ChatInputBox_data).offset_0x104 * 6,0,
                         (this->__CGraphicCtrl_ChatInputBox_data).offset_0x108,0xc,
                         (this->__CGraphicCtrl_ChatInputBox_data).offset_0x124,0x100,0);
    }
  }
  iVar8 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x114;
  iVar7 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x104 * 6;
  if (iVar8 <= iVar7) {
    iVar2 = (this->CGraphicCtrl_data).offset_0xd0;
    iVar7 = iVar7 + (this->__CGraphicCtrl_ChatInputBox_data).offset_0x108;
    if (iVar7 <= iVar8 + iVar2) goto LAB_6000e21b;
    iVar7 = iVar7 - iVar2;
  }
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x114 = iVar7;
LAB_6000e21b:
  iVar8 = SetBkMode((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190,1);
  SetTextColor((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190,
               (this->__CGraphicCtrl_ChatInputBox_data).offset_0x120);
  h = SelectObject((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190,
                   *(HGDIOBJ *)((this->CGraphicCtrl_data).offset_0xd8 + 0x16c));
  p_Var9 = &this->__CGraphicCtrl_ChatInputBox_data;
  do {
    cVar1 = *(char *)p_Var9;
    p_Var9 = (__CGraphicCtrl_ChatInputBox_data *)&p_Var9->field_0x1;
  } while (cVar1 != '\0');
  TextOutA((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190,0,0,
           (LPCSTR)&this->__CGraphicCtrl_ChatInputBox_data,
           (int)p_Var9 - (int)&(this->__CGraphicCtrl_ChatInputBox_data).field_0x1);
  SetBkMode((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190,iVar8);
  SelectObject((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190,h);
  CHgImage::Draw((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,(CHgImageBase *)piVar5,
                 (this->__CGraphicCtrl_ChatInputBox_data).offset_0x114,0,
                 (this->CGraphicCtrl_data).offset_0xd0,0xc,0x100,0);
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x118 = 1;
  return 1;
}



/* ---- OnKeyDown @ 6000e300 size=8 ---- */

/* public: void __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnKeyDown(unsigned
   int,unsigned int,unsigned int) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnKeyDown
          (__CHgChatInputBoxEdit *this,uint param_1,uint param_2,uint param_3)

{
                    /* 0xe300  310
                       ?OnKeyDown@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXIII@Z
                        */
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnChar @ 6000e310 size=33 ---- */

/* public: void __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnChar(unsigned
   int,unsigned int,unsigned int) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnChar
          (__CHgChatInputBoxEdit *this,uint param_1,uint param_2,uint param_3)

{
                    /* 0xe310  301
                       ?OnChar@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXIII@Z
                       0xe310  315
                       ?OnLButtonDown@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXIVCPoint@@@Z
                        */
  PostMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0x415,99,0);
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnEditNotify @ 6000e340 size=525 ---- */

/* public: long __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnEditNotify(unsigned
   int,long) */

long __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnEditNotify
          (__CHgChatInputBoxEdit *this,uint param_1,long param_2)

{
  uchar uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uchar *puVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  int local_114;
  int local_110;
  tagPOINT local_10c;
  uchar local_104 [256];
  uint local_4;
  
                    /* 0xe340  307
                       ?OnEditNotify@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEJIJ@Z
                        */
  local_4 = DAT_600259a8 ^ (uint)&local_114;
  if ((param_1 != 99) && (param_1 != 100)) {
    lVar7 = __security_check_cookie(local_4 ^ (uint)&local_114);
    return lVar7;
  }
  local_104[0] = '\0';
  local_104[1] = '\0';
  memset(local_104 + 2,0,0xfe);
  GetWindowTextA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,(LPSTR)local_104,0x100);
  local_110 = 0;
  local_114 = 0;
  SendMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0xb0,(WPARAM)&local_110,
               (LPARAM)&local_114);
  if ((local_110 != local_114) &&
     (puVar2 = (this->__CHgChatInputBoxEdit_data).offset_0x50, puVar2[0x9c] != 2)) {
    puVar2[0x9c] = 2;
    puVar2[0xa0] = 0;
  }
  puVar2 = (this->__CHgChatInputBoxEdit_data).offset_0x50;
  if ((puVar2[0x9d] != local_110) || (puVar2[0x9e] != local_114)) {
    puVar2[0x9d] = local_110;
    puVar2[0x9e] = local_114;
    puVar2[0xa0] = 0;
  }
  puVar4 = local_104;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (uVar1 != '\0');
  pcVar3 = &DAT_60025b00;
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  if (puVar4 + -(int)(local_104 + 1) != (uchar *)(pcVar5 + -0x60025b00)) {
    puVar4 = local_104;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (uVar1 != '\0');
    pcVar3 = &DAT_60025b00;
    do {
      pcVar5 = pcVar3;
      pcVar3 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    puVar2 = (this->__CHgChatInputBoxEdit_data).offset_0x50;
    if (puVar4 + -(int)(local_104 + 1) == (uchar *)(pcVar5 + -0x60025afe)) {
      if (puVar2[0x9c] == 0xc) goto LAB_6000e49c;
      puVar2[0x9c] = 0xc;
    }
    else {
      if (puVar2[0x9c] == 2) goto LAB_6000e49c;
      puVar2[0x9c] = 2;
    }
    puVar2[0xa0] = 0;
  }
LAB_6000e49c:
  strcpy_s(&DAT_60025b00,0x100,(char *)local_104);
  puVar2 = (this->__CHgChatInputBoxEdit_data).offset_0x50;
  puVar4 = (uchar *)(puVar2 + 0x5a);
  iVar6 = _mbscmp(puVar4,local_104);
  if (iVar6 != 0) {
    strcpy_s((char *)puVar4,0x100,(char *)local_104);
    puVar2[0xa0] = 0;
  }
  GetCaretPos(&local_10c);
  puVar2 = (this->__CHgChatInputBoxEdit_data).offset_0x50;
  if (puVar2[0x9b] != local_10c.x / 6) {
    puVar2[0x9b] = local_10c.x / 6;
    puVar2[0xa0] = 0;
  }
  lVar7 = __security_check_cookie(local_4 ^ (uint)&local_114);
  return lVar7;
}



/* ---- CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::_PreTranslateMessage_ReturnKeyDown @ 6000e550 size=133 ---- */

/* protected: virtual int __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::_PreTranslateMessage_ReturnKeyDown(struct
   tagMSG *) */

int __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::
CGraphicCtrl_MultiLineText____CGraphicCtrl_ChatInputBox____CHgChatInputBoxEdit___PreTranslateMessage_ReturnKeyDown
          (__CHgChatInputBoxEdit *this,tagMSG *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
                    /* 0xe550  489
                       ?_PreTranslateMessage_ReturnKeyDown@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@MAEHPAUtagMSG@@@Z
                        */
  puVar3 = (this->__CHgChatInputBoxEdit_data).offset_0x50;
  pcVar1 = (char *)(puVar3 + 0x5a);
  pcVar4 = pcVar1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (pcVar4 == (char *)((int)puVar3 + 0x169)) {
    return 0;
  }
  CGameWnd::SendCommonChatString((CGameWnd *)CGraphicCtrl::s_pGameWnd,pcVar1,0,(char *)0x0);
  SendMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0xb1,0,0);
  SendMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0xb7,0,0);
  CWnd::SetWindowTextA((CWnd *)this,(char *)&PTR_60017b08);
  PostMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0x415,99,0);
  return 1;
}



/* ---- CGraphicCtrl_MultiLineText::_AllocSelf @ 6000e5e0 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_MultiLineText::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText___AllocSelf(CGraphicCtrl_MultiLineText *this)

{
  __CHgChatLine *p_Var1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xe5e0  464  ?_AllocSelf@CGraphicCtrl_MultiLineText@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  p_Var1 = operator_new(0x374);
  local_4 = 0;
  if (p_Var1 == (__CHgChatLine *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  p_Var1 = __CHgChatLine::__CHgChatLine(p_Var1);
  ExceptionList = local_c;
  return p_Var1;
}



/* ---- scalar_deleting_destructor @ 6000e650 size=85 ---- */

CGraphicCtrl_MultiLineText * __thiscall
CGraphicCtrl_MultiLineText::scalar_deleting_destructor
          (CGraphicCtrl_MultiLineText *this,byte param_1)

{
  undefined4 **ppuVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_MultiLineText(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_MultiLineText *)this;
  }
  ppuVar1 = &this[-1].CGraphicCtrl_MultiLineText_data.offset_0x18c;
  _eh_vector_destructor_iterator_
            (this,0x374,(int)this[-1].CGraphicCtrl_MultiLineText_data.offset_0x18c,
             ~CGraphicCtrl_MultiLineText);
  if ((param_1 & 1) != 0) {
    operator_delete__(ppuVar1);
  }
  return (CGraphicCtrl_MultiLineText *)ppuVar1;
}



/* ---- CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::GetMessageMap @ 6000e6b0 size=6 ---- */

/* protected: virtual struct AFX_MSGMAP const * __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::GetMessageMap(void)const
    */

AFX_MSGMAP * __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::
CGraphicCtrl_MultiLineText____CGraphicCtrl_ChatInputBox____CHgChatInputBoxEdit__GetMessageMap
          (__CHgChatInputBoxEdit *this)

{
                    /* 0xe6b0  225
                       ?GetMessageMap@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@MBEPBUAFX_MSGMAP@@XZ
                       0xe6b0  245
                       ?GetThisMessageMap@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@KGPBUAFX_MSGMAP@@XZ
                        */
  return (AFX_MSGMAP *)&PTR_LAB_600184b4;
}



/* ---- CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnWndMsg @ 6000e6c0 size=155 ---- */

/* public: virtual int __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnWndMsg(unsigned
   int,unsigned int,long,long *) */

int __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::
CGraphicCtrl_MultiLineText____CGraphicCtrl_ChatInputBox____CHgChatInputBoxEdit__OnWndMsg
          (__CHgChatInputBoxEdit *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  uint local_4;
  
                    /* 0xe6c0  341
                       ?OnWndMsg@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@UAEHIIJPAJ@Z
                        */
  local_4 = DAT_600259a8 ^ (uint)&local_4;
  CWnd::CWnd__OnWndMsg((CWnd *)this,param_1,param_2,param_3,param_4);
  if ((param_1 == 7) || (param_1 == 8)) {
    (this->__CHgChatInputBoxEdit_data).offset_0x50[0xa0] = 0;
  }
  if (((param_1 == 0x282) || (param_1 == 0x10f)) || ((param_1 == 0x100 && (param_2 == 0x2e)))) {
    PostMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0x415,99,0);
    SendMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0x415,99,0);
  }
  iVar1 = __security_check_cookie(local_4 ^ (uint)&local_4);
  return iVar1;
}



/* ---- FUN_6000e760 @ 6000e760 size=10 ---- */

void __fastcall FUN_6000e760(undefined4 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



/* ---- FUN_6000e770 @ 6000e770 size=88 ---- */

undefined4 * __fastcall FUN_6000e770(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016a48;
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



/* ---- FUN_6000e7d0 @ 6000e7d0 size=53 ---- */

void * FUN_6000e7d0(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}



/* ---- FUN_6000e810 @ 6000e810 size=53 ---- */

void __fastcall FUN_6000e810(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}



/* ---- ~__CHgChatInputBoxEdit @ 6000e850 size=66 ---- */

/* public: virtual __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::~__CHgChatInputBoxEdit(void)
    */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::
~__CHgChatInputBoxEdit(__CHgChatInputBoxEdit *this)

{
  void *pvVar1;
  
                    /* 0xe850  64
                       ??1__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@UAE@XZ
                        */
  this->vftablePtr = &_vftable_;
  pvVar1 = (this->__CHgChatInputBoxEdit_data).offset_0x60;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  (this->__CHgChatInputBoxEdit_data).offset_0x60 = (void *)0x0;
  (this->__CHgChatInputBoxEdit_data).offset_0x64 = 0;
  (this->__CHgChatInputBoxEdit_data).offset_0x68 = 0;
  operator_delete((this->__CHgChatInputBoxEdit_data).offset_0x54);
  CEdit::~CEdit((CEdit *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 6000e8a0 size=130 ---- */

CEdit * __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::
scalar_deleting_destructor(__CHgChatInputBoxEdit *this,byte param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].__CHgChatInputBoxEdit_data.offset_0x68;
    _eh_vector_destructor_iterator_
              (this,0x70,this[-1].__CHgChatInputBoxEdit_data.offset_0x68,~__CHgChatInputBoxEdit);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return (CEdit *)puVar1;
  }
                    /* inlined destructor:
                       CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::~__CHgChatInputBoxEdit
                        */
  this->vftablePtr = &_vftable_;
  pvVar2 = (this->__CHgChatInputBoxEdit_data).offset_0x60;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  (this->__CHgChatInputBoxEdit_data).offset_0x60 = (void *)0x0;
  (this->__CHgChatInputBoxEdit_data).offset_0x64 = 0;
  (this->__CHgChatInputBoxEdit_data).offset_0x68 = 0;
  operator_delete((this->__CHgChatInputBoxEdit_data).offset_0x54);
  CEdit::~CEdit((CEdit *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CEdit *)this;
}



/* ---- CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::PreTranslateMessage @ 6000e930 size=228 ---- */

/* public: virtual int __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::PreTranslateMessage(struct
   tagMSG *) */

int __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::
CGraphicCtrl_MultiLineText____CGraphicCtrl_ChatInputBox____CHgChatInputBoxEdit__PreTranslateMessage
          (__CHgChatInputBoxEdit *this,tagMSG *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_4;
  
                    /* 0xe930  347
                       ?PreTranslateMessage@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@UAEHPAUtagMSG@@@Z
                        */
  local_4 = DAT_600259a8 ^ (uint)&local_4;
  iVar2 = FUN_600049e0(&(this->__CHgChatInputBoxEdit_data).offset_0x54,this,param_1);
  if (iVar2 != 0) {
LAB_6000e951:
    iVar2 = __security_check_cookie(local_4 ^ (uint)&local_4);
    return iVar2;
  }
  if ((*(int *)(param_1 + 4) == 0x102) &&
     (puVar1 = (this->__CHgChatInputBoxEdit_data).offset_0x50, puVar1[0x9c] != 2)) {
    puVar1[0x9c] = 2;
    puVar1[0xa0] = 0;
  }
  if ((*(int *)(param_1 + 4) == 0x100) && (*(int *)(param_1 + 8) == 0xd)) {
    iVar2 = (*this->vftablePtr->_PreTranslateMessage_ReturnKeyDown)(this,param_1);
    if (iVar2 != 0) goto LAB_6000e951;
  }
  if (*(int *)(param_1 + 4) == 0x429) {
    OnEditNotify(this,*(uint *)(param_1 + 8),*(long *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 4) == 0x42a) {
    PostMessageA(*(HWND *)&(this->__CHgChatInputBoxEdit_data).field_0x1c,0x42b,0,0);
  }
  if (*(int *)(param_1 + 4) == 0x42b) {
    OnEditNotify(this,*(uint *)(param_1 + 8),*(long *)(param_1 + 0xc));
  }
  CWnd::CWnd__PreTranslateMessage((CWnd *)this,param_1);
  iVar2 = __security_check_cookie(local_4 ^ (uint)&local_4);
  return iVar2;
}



/* ---- FUN_6000ea20 @ 6000ea20 size=134 ---- */

void __thiscall FUN_6000ea20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)((int)this + 0xc);
  if (*(int **)((int)this + 0x10) < piVar4) {
    _invalid_parameter_noinfo();
  }
  piVar1 = *(int **)this;
  while( true ) {
    piVar2 = *(int **)((int)this + 0x10);
    if (piVar2 < *(int **)((int)this + 0xc)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)this)) {
      _invalid_parameter_noinfo();
    }
    if (piVar4 == piVar2) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(int **)(iVar3 + 0x10) <= piVar4) {
      _invalid_parameter_noinfo();
    }
    if (*piVar4 == param_1) {
      return;
    }
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(int **)(iVar3 + 0x10) <= piVar4) {
      _invalid_parameter_noinfo();
    }
    piVar4 = piVar4 + 1;
  }
  FUN_60008a30(this,&param_1);
  return;
}



/* ---- attachMsg @ 6000eab0 size=8 ---- */

/* public: void __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::attachMsg(int
   (__cdecl*)(class CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit
   *,struct tagMSG *)) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::attachMsg
          (__CHgChatInputBoxEdit *this,_func_int___CHgChatInputBoxEdit_ptr_tagMSG_ptr *param_1)

{
                    /* 0xeab0  512
                       ?attachMsg@__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEXP6AHPAV123@PAUtagMSG@@@Z@Z
                       0xeab0  513  ?attachMsg@__CWndForInput@@QAEXP6AHPAVCStatic@@PAUtagMSG@@@Z@Z
                        */
  FUN_6000ea20(&(this->__CHgChatInputBoxEdit_data).offset_0x54,(int)param_1);
  return;
}



/* ---- __CHgChatInputBoxEdit @ 6000eac0 size=205 ---- */

/* public: __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::__CHgChatInputBoxEdit(class
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox *) */

void __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::
__CHgChatInputBoxEdit(__CHgChatInputBoxEdit *this,__CGraphicCtrl_ChatInputBox *param_1)

{
  void **this_00;
  int iVar1;
  __CHgChatInputBoxEdit *local_118;
  CGameFinder local_114 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xeac0  33
                       ??0__CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAE@PAV12@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016a89;
  local_c = ExceptionList;
  local_10 = DAT_600259a8 ^ (uint)&local_118;
  ExceptionList = &local_c;
  local_118 = this;
  CWnd::CWnd((CWnd *)this);
  this_00 = &(this->__CHgChatInputBoxEdit_data).offset_0x54;
  local_4 = 0;
  this->vftablePtr = &_vftable_;
  FUN_6000e770(this_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  (this->__CHgChatInputBoxEdit_data).offset_0x50 = (undefined4 *)param_1;
  CGameFinder::CGameFinder(local_114);
  iVar1 = CGameFinder::isGMahjong(local_114);
  if (iVar1 == 0) {
    iVar1 = CGameFinder::isBingo(local_114);
    if (iVar1 == 0) goto LAB_6000eb63;
  }
  FUN_6000ea20(this_00,0x6000d450);
LAB_6000eb63:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_118);
  return;
}



/* ---- InitChatInputBox @ 6000eb90 size=455 ---- */

/* public: int __thiscall
   CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::InitChatInputBox(int,unsigned
   long,unsigned long,unsigned long,class CFont &) */

int __thiscall
CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::InitChatInputBox
          (__CGraphicCtrl_ChatInputBox *this,int param_1,ulong param_2,ulong param_3,ulong param_4,
          CFont *param_5)

{
  int *piVar1;
  int iVar2;
  HDC pHVar3;
  CDC *pCVar4;
  HBITMAP__ *h;
  HGDIOBJ pvVar5;
  CEdit *extraout_EAX;
  CEdit *this_00;
  undefined4 unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_2c;
  void *pvStack_1c;
  void *pvStack_14;
  __CHgChatInputBoxEdit *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xeb90  256
                       ?InitChatInputBox@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText@@QAEHHKKKAAVCFont@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016aca;
  local_c = ExceptionList;
  uStack_2c = DAT_600259a8 ^ (int)register0x00000010 - 0x28U;
  ExceptionList = &local_c;
  uVar7 = 1;
  uVar6 = 0;
  iVar2 = (*this->vftablePtr->CreateGraphicCtrl)(this,(int *)param_1,0xc,0xff0000,0,0);
  if (iVar2 == 0) {
    ExceptionList = pvStack_14;
    return 0;
  }
  (**(code **)((this->__CGraphicCtrl_ChatInputBox_data).offset_0x12c + 0x10))(0x1e0,0xc,uVar6,uVar7)
  ;
  pHVar3 = GetDC(*(HWND *)(CGraphicCtrl::s_pGameWnd + 0x20));
  pCVar4 = CDC::FromHandle(pHVar3);
  if (pCVar4 != (CDC *)0x0) {
    pHVar3 = CreateCompatibleDC(*(HDC *)(pCVar4 + 4));
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x190 = pHVar3;
    ReleaseDC(*(HWND *)(CGraphicCtrl::s_pGameWnd + 0x20),*(HDC *)(pCVar4 + 4));
    h = CHgDIB::GetHBitmap((CHgDIB *)&(this->__CGraphicCtrl_ChatInputBox_data).offset_0x12c);
    pvVar5 = SelectObject((this->__CGraphicCtrl_ChatInputBox_data).offset_0x190,h);
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x194 = pvVar5;
  }
  piVar1 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x68))();
    piVar1 = (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100 = (int *)0x0;
  }
  local_c = operator_new(0x70);
  if (local_c == (__CHgChatInputBoxEdit *)0x0) {
    this_00 = (CEdit *)0x0;
  }
  else {
    __CHgChatInputBoxEdit::__CHgChatInputBoxEdit(local_c,(__CGraphicCtrl_ChatInputBox *)this);
    this_00 = extraout_EAX;
  }
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x100 = (int *)this_00;
  uStack_2c = 0;
  CEdit::Create(this_00,0x50001000,(tagRECT *)&uStack_2c,CGraphicCtrl::s_pGameWnd,0xf58);
  PostMessageA((HWND)(this->__CGraphicCtrl_ChatInputBox_data).offset_0x100[8],0x30,
               *(WPARAM *)(param_1 + 4),1);
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x128 = unaff_retaddr;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x120 = puStack_8;
  (this->__CGraphicCtrl_ChatInputBox_data).offset_0x124 = uStack_4;
  ExceptionList = pvStack_1c;
  return 1;
}



/* ---- InitWithChat @ 6000ed60 size=344 ---- */

/* public: int __thiscall CGraphicCtrl_MultiLineText::InitWithChat(int,int,int,int,int,int,class
   CPoint,class CPoint,char *,char *,char *,unsigned long,unsigned long,unsigned long) */

int __thiscall
CGraphicCtrl_MultiLineText::InitWithChat
          (CGraphicCtrl_MultiLineText *this,undefined4 param_1,undefined4 param_2,int param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_8,
          undefined4 param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,
          undefined4 param_14,ulong param_15,ulong param_16,ulong param_17)

{
  CGraphicCtrl *this_00;
  int *piVar1;
  code *pcVar2;
  int iVar3;
  __CGraphicCtrl_ChatInputBox *p_Var4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xed60  262
                       ?InitWithChat@CGraphicCtrl_MultiLineText@@QAEHHHHHHHVCPoint@@0PAD11KKK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = InitWithNoChat(this,param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,
                         param_12,param_13,param_14);
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  p_Var4 = operator_new(0x300);
  local_4 = 0;
  if (p_Var4 == (__CGraphicCtrl_ChatInputBox *)0x0) {
    p_Var4 = (__CGraphicCtrl_ChatInputBox *)0x0;
  }
  else {
    p_Var4 = __CGraphicCtrl_ChatInputBox::__CGraphicCtrl_ChatInputBox(p_Var4);
  }
  local_4 = 0xffffffff;
  (this->CGraphicCtrl_MultiLineText_data).offset_0x10c = p_Var4;
  __CGraphicCtrl_ChatInputBox::InitChatInputBox
            (p_Var4,param_3,param_15,param_16,param_17,
             (CFont *)&this->CGraphicCtrl_MultiLineText_data);
  CGraphicCtrl::AddChild
            ((CGraphicCtrl *)this,
             (CGraphicCtrl *)(this->CGraphicCtrl_MultiLineText_data).offset_0x10c,'\0',
             (CGraphicCtrl *)0x0);
  CGraphicCurve::SetPosForce
            ((CGraphicCurve *)((this->CGraphicCtrl_MultiLineText_data).offset_0x10c + 0x28),
             (float)param_10,(float)param_11);
  this_00 = (CGraphicCtrl *)(this->CGraphicCtrl_MultiLineText_data).offset_0x10c;
  if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
    CGraphicCtrl::__AdjustShow(this_00,1);
    (this_00->CGraphicCtrl_data).offset_0xc = 1;
  }
  piVar1 = (int *)(this->CGraphicCtrl_MultiLineText_data).offset_0x10c;
  if (piVar1[6] != 1) {
    pcVar2 = *(code **)(*piVar1 + 0x2c);
    piVar1[6] = 1;
    piVar1[0x49] = 0;
    (*pcVar2)(0xff03);
  }
  ExceptionList = local_c;
  return 1;
}



/* ---- CGraphicCtrl_PushBtn @ 6000eec0 size=119 ---- */

/* public: __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(void) */

CGraphicCtrl_PushBtn * __thiscall
CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(CGraphicCtrl_PushBtn *this)

{
                    /* 0xeec0  7  ??0CGraphicCtrl_PushBtn@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_PushBtn_data).offset_0x0 = (int *)0x0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x4 = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x8 = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0xc = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x30 = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x20 = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x1c = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x2c = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x10 = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x18 = 0;
  (this->CGraphicCtrl_PushBtn_data).offset_0x34 = 0;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_PushBtn_data).offset_0x38 = 1;
  (this->CGraphicCtrl_PushBtn_data).offset_0x28 = 1;
  (this->CGraphicCtrl_PushBtn_data).offset_0x24 = 1;
  (this->CGraphicCtrl_PushBtn_data).offset_0x14 = 0xfffe;
  return this;
}



/* ---- ~CGraphicCtrl_PushBtn @ 6000ef40 size=155 ---- */

/* public: virtual __thiscall CGraphicCtrl_PushBtn::~CGraphicCtrl_PushBtn(void) */

void __thiscall CGraphicCtrl_PushBtn::~CGraphicCtrl_PushBtn(CGraphicCtrl_PushBtn *this)

{
  uint uVar1;
  CGraphicCtrl_PushBtn_data *pCVar2;
  int iVar3;
  undefined1 auStackY_a4 [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xef40  43  ??1CGraphicCtrl_PushBtn@@UAE@XZ */
  puStack_8 = &LAB_60016b28;
  local_c = ExceptionList;
  uVar1 = DAT_600259a8 ^ (uint)(auStackY_a4 + 0x88);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  if ((this->CGraphicCtrl_data).offset_0x2 == '\0') {
    pCVar2 = &this->CGraphicCtrl_PushBtn_data;
    iVar3 = 4;
    do {
      if (pCVar2->offset_0x0 != (int *)0x0) {
        (**(code **)(*pCVar2->offset_0x0 + 0x14))(uVar1);
        if (pCVar2->offset_0x0 != (int *)0x0) {
          (**(code **)*pCVar2->offset_0x0)(1);
        }
        pCVar2->offset_0x0 = (int *)0x0;
      }
      pCVar2 = (CGraphicCtrl_PushBtn_data *)&pCVar2->offset_0x4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- CGraphicCtrl_PushBtn::CreateInstance @ 6000efe0 size=86 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_PushBtn::CreateInstance(void)
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up */

CGraphicCtrl * __thiscall
CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn__CreateInstance(CGraphicCtrl_PushBtn *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0xefe0  154  ?CreateInstance@CGraphicCtrl_PushBtn@@UAEPAVCGraphicCtrl@@XZ */
  pCVar1 = CGraphicCtrl::CGraphicCtrl__CreateInstance((CGraphicCtrl *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(int **)(pCVar1 + 0x168) = (this->CGraphicCtrl_PushBtn_data).offset_0x0;
    *(undefined4 *)(pCVar1 + 0x16c) = (this->CGraphicCtrl_PushBtn_data).offset_0x4;
    *(undefined4 *)(pCVar1 + 0x170) = (this->CGraphicCtrl_PushBtn_data).offset_0x8;
    *(undefined4 *)(pCVar1 + 0x174) = (this->CGraphicCtrl_PushBtn_data).offset_0xc;
    *(undefined4 *)(pCVar1 + 0x178) = (this->CGraphicCtrl_PushBtn_data).offset_0x10;
    *(undefined4 *)(pCVar1 + 0x17c) = (this->CGraphicCtrl_PushBtn_data).offset_0x14;
  }
  return pCVar1;
}



/* ---- CGraphicCtrl_PushBtn::OnBtnClicked @ 6000f040 size=1 ---- */

/* public: virtual void __thiscall CGraphicCtrl_PushBtn::OnBtnClicked(void)
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up */

void __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn__OnBtnClicked(CGraphicCtrl_PushBtn *this)

{
                    /* 0xf040  289  ?OnBtnClicked@CGraphicCtrl_PushBtn@@UAEXXZ
                       0xf040  290  ?OnBtnClicked@CGraphicCtrl_PushBtn_Ani@@UAEXXZ
                       0xf040  291  ?OnBtnDrag@CGraphicCtrl_PushBtn@@UAEXXZ
                       0xf040  292  ?OnBtnDrag@CGraphicCtrl_PushBtn_Ani@@UAEXXZ
                       0xf040  295  ?OnBtnPushed@CGraphicCtrl_PushBtn@@UAEXXZ
                       0xf040  296  ?OnBtnPushed@CGraphicCtrl_PushBtn_Ani@@UAEXXZ
                       0xf040  317  ?OnLeave@CGraphicCtrl_PushBtn@@UAEXXZ
                       0xf040  318  ?OnLeave@CGraphicCtrl_PushBtn_Ani@@UAEXXZ
                       0xf040  325  ?OnNoticeTime@CGraphicCtrl@@UAEXXZ
                       0xf040  327  ?OnOver@CGraphicCtrl_PushBtn@@UAEXXZ
                       0xf040  328  ?OnOver@CGraphicCtrl_PushBtn_Ani@@UAEXXZ */
  return;
}



/* ---- scalar_deleting_destructor @ 6000f050 size=85 ---- */

CGraphicCtrl_PushBtn * __thiscall
CGraphicCtrl_PushBtn::scalar_deleting_destructor(CGraphicCtrl_PushBtn *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_PushBtn(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_PushBtn *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_PushBtn_data.offset_0x38;
  _eh_vector_destructor_iterator_
            (this,0x1a4,*(int *)&this[-1].CGraphicCtrl_PushBtn_data.offset_0x38,
             ~CGraphicCtrl_PushBtn);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_PushBtn *)puVar1;
}



/* ---- CGraphicCtrl_PushBtn::CreateGraphicCtrl @ 6000f0b0 size=550 ---- */

/* WARNING: Exceeded maximum restarts with more pending */
/* public: virtual int __thiscall CGraphicCtrl_PushBtn::CreateGraphicCtrl(char *,unsigned
   short,struct HWND__ *,unsigned long,int)
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up */

int __thiscall
CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn__CreateGraphicCtrl
          (CGraphicCtrl_PushBtn *this,char *param_1,ushort param_2,HWND__ *param_3,ulong param_4,
          int param_5)

{
  char cVar1;
  uint uVar2;
  CHgDDB *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  CGraphicCtrl_PushBtn_data *pCVar6;
  int iVar7;
  CGraphicCtrl_PushBtn_data *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined1 auStack_7a [10];
  CHgDIB local_70 [25];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf0b0  134  ?CreateGraphicCtrl@CGraphicCtrl_PushBtn@@UAEHPADGPAUHWND__@@KH@Z
                        */
  puStack_8 = &LAB_60016b64;
  local_c = ExceptionList;
  uVar2 = DAT_600259a8 ^ (uint)(auStack_7a + -0x12);
  ExceptionList = &local_c;
  pCVar8 = &this->CGraphicCtrl_PushBtn_data;
  iVar7 = 0;
  pCVar6 = pCVar8;
  do {
    local_4 = 0xffffffff;
    this_00 = operator_new(0x38);
    local_4 = 0;
    if (this_00 == (CHgDDB *)0x0) {
      this_00 = (CHgDDB *)0x0;
    }
    else {
      CHgDDB::CHgDDB(this_00);
      this_00->vftablePtr = &CHgDDB::vftable;
    }
    local_4 = 0xffffffff;
    pCVar6->offset_0x0 = (int *)this_00;
    if (this_00 == (CHgDDB *)0x0) goto LAB_6000f17e;
    iVar7 = iVar7 + 1;
    pCVar6 = (CGraphicCtrl_PushBtn_data *)&pCVar6->offset_0x4;
  } while (iVar7 < 4);
  CHgDIB::CHgDIB(local_70);
  local_4 = 1;
  cVar1 = (*(local_70[0].vftablePtr)->Create)(param_1,uVar2);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    CHgDIB::~CHgDIB(local_70);
LAB_6000f17e:
    iVar7 = 0;
  }
  else {
    CHgImageBase::SetTileNum((CHgImageBase *)local_70,4);
    uVar13 = 1;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0xffffffff;
    iVar7 = CHgImageBase::GetHeight((CHgImageBase *)local_70);
    iVar3 = CHgImageBase::GetWidth((CHgImageBase *)local_70);
    iVar7 = CHgDummyCtrl::CHgDummyCtrl__CreateGraphicCtrl
                      ((CHgDummyCtrl *)this,iVar3 >> 2,iVar7,uVar9,uVar10,uVar11,uVar12,uVar13);
    if (iVar7 == 0) {
LAB_6000f1bc:
      local_4 = 0xffffffff;
      CHgDIB::~CHgDIB(local_70);
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      do {
        if (param_4 == 0xffffffff) {
          iVar3 = *pCVar8->offset_0x0;
          iVar4 = CHgImageBase::GetHeight((CHgImageBase *)local_70);
          iVar5 = CHgImageBase::GetWidth((CHgImageBase *)local_70);
          cVar1 = (**(code **)(iVar3 + 0x10))(iVar5 >> 2,iVar4);
        }
        else {
          iVar3 = *pCVar8->offset_0x0;
          uVar14 = param_4;
          iVar4 = CHgImageBase::GetHeight((CHgImageBase *)local_70);
          iVar5 = CHgImageBase::GetWidth((CHgImageBase *)local_70);
          cVar1 = (**(code **)(iVar3 + 0xc))(iVar5 >> 2,iVar4,uVar14);
        }
        if (cVar1 == '\0') goto LAB_6000f1bc;
        CHgImage::DrawTile((CHgImage *)pCVar8->offset_0x0,0,0,(CHgImage *)local_70,iVar7,0x100,0);
        iVar7 = iVar7 + 1;
        pCVar8 = (CGraphicCtrl_PushBtn_data *)&pCVar8->offset_0x4;
      } while (iVar7 < 4);
      CHgDIB::Destroy(local_70);
      (this->CGraphicCtrl_data).offset_0x8 = param_2;
      (this->CGraphicCtrl_PushBtn_data).offset_0x10 = param_3;
      (this->CGraphicCtrl_PushBtn_data).offset_0x14 = (uint)param_2;
      (this->CGraphicCtrl_data).offset_0x1c = param_5;
      local_4 = 0xffffffff;
      CHgDIB::~CHgDIB(local_70);
      iVar7 = 1;
    }
  }
  ExceptionList = local_c;
  return iVar7;
}



/* ---- CGraphicCtrl_PushBtn::Proc @ 6000f2e0 size=621 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall CGraphicCtrl_PushBtn::Proc(unsigned long)
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up */

int __thiscall
CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn__Proc(CGraphicCtrl_PushBtn *this,ulong param_1)

{
  HWND pHVar1;
  POINT pt;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  ulong uVar5;
  OnBtnClicked *pOVar6;
  uint uVar7;
  ulong local_14;
  RECT local_10;
  
                    /* 0xf2e0  355  ?Proc@CGraphicCtrl_PushBtn@@UAEHK@Z */
  iVar4 = (this->CGraphicCtrl_PushBtn_data).offset_0x28;
  if (iVar4 == (this->CGraphicCtrl_PushBtn_data).offset_0x24) {
LAB_6000f308:
    if (iVar4 == 0) {
      (this->CGraphicCtrl_PushBtn_data).offset_0x2c = 0;
      goto LAB_6000f50f;
    }
  }
  else {
    (this->CGraphicCtrl_PushBtn_data).offset_0x24 = iVar4;
    if (iVar4 == 0) {
      (this->CGraphicCtrl_PushBtn_data).offset_0x38 = 1;
      goto LAB_6000f308;
    }
  }
  if ((CGraphicCtrl::s_bLButtonDown == 0) &&
     (((this->CGraphicCtrl_PushBtn_data).offset_0x34 == 0 || (CGraphicCtrl::s_bLButtonDblClk == 0)))
     ) {
    (this->CGraphicCtrl_PushBtn_data).offset_0x20 = 0;
  }
  else {
    (this->CGraphicCtrl_PushBtn_data).offset_0x20 = 1;
  }
  CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)this);
  pt.y = DAT_60025af0;
  pt.x = _s_CursorPos;
  BVar3 = PtInRect(&local_10,pt);
  if (BVar3 == 0) {
LAB_6000f480:
    if ((this->CGraphicCtrl_PushBtn_data).offset_0x20 == 0) {
      (this->CGraphicCtrl_PushBtn_data).offset_0x2c = 0;
    }
    (this->CGraphicCtrl_PushBtn_data).offset_0x38 = 0;
    if ((this->CGraphicCtrl_PushBtn_data).offset_0x18 != 0) {
      pHVar1 = (HWND)(this->CGraphicCtrl_PushBtn_data).offset_0x10;
      (this->CGraphicCtrl_PushBtn_data).offset_0x18 = 0;
      PostMessageA(pHVar1,0x47d4,(this->CGraphicCtrl_PushBtn_data).offset_0x14,(LPARAM)pHVar1);
      pOVar6 = this->vftablePtr->OnBtnClicked;
LAB_6000f4c1:
      (*pOVar6)(this);
    }
  }
  else {
    bVar2 = CHgImageBase::HasTransparentColor
                      ((CHgImageBase *)
                       (&(this->CGraphicCtrl_PushBtn_data).offset_0x0)
                       [(byte)(this->CGraphicCtrl_PushBtn_data).offset_0x38]);
    if (bVar2) {
      iVar4 = CHgImage::GetPixel((CHgImage *)
                                 (&(this->CGraphicCtrl_PushBtn_data).offset_0x0)
                                 [(byte)(this->CGraphicCtrl_PushBtn_data).offset_0x38],
                                 _s_CursorPos - local_10.left,DAT_60025af0 - local_10.top,&local_14)
      ;
      if (iVar4 != 0) {
        uVar5 = CHgImageBase::GetTransparentColor
                          ((CHgImageBase *)
                           (&(this->CGraphicCtrl_PushBtn_data).offset_0x0)
                           [(byte)(this->CGraphicCtrl_PushBtn_data).offset_0x38]);
        if (local_14 != uVar5) goto LAB_6000f3d2;
      }
      goto LAB_6000f480;
    }
LAB_6000f3d2:
    (this->CGraphicCtrl_PushBtn_data).offset_0x38 = 0;
    if ((this->CGraphicCtrl_PushBtn_data).offset_0x1c == 0) {
      if ((this->CGraphicCtrl_PushBtn_data).offset_0x20 == 0) {
        (this->CGraphicCtrl_PushBtn_data).offset_0x38 = 2;
      }
      else {
        pOVar6 = this->vftablePtr->OnBtnClicked;
        (this->CGraphicCtrl_PushBtn_data).offset_0x2c = 1;
        (*pOVar6)(this);
      }
    }
    iVar4 = (this->CGraphicCtrl_PushBtn_data).offset_0x2c;
    if (iVar4 != 0) {
      (this->CGraphicCtrl_PushBtn_data).offset_0x38 = 3;
    }
    if (((this->CGraphicCtrl_PushBtn_data).offset_0x20 == 0) && (iVar4 != 0)) {
      pHVar1 = (HWND)(this->CGraphicCtrl_PushBtn_data).offset_0x10;
      if (pHVar1 != (HWND)0x0) {
        PostMessageA(pHVar1,0x111,(uint)*(ushort *)&(this->CGraphicCtrl_PushBtn_data).offset_0x14,
                     (LPARAM)pHVar1);
      }
      (*this->vftablePtr->OnBtnClicked)(this);
      (this->CGraphicCtrl_PushBtn_data).offset_0x2c = 0;
    }
    if ((this->CGraphicCtrl_PushBtn_data).offset_0x18 == 0) {
      pHVar1 = (HWND)(this->CGraphicCtrl_PushBtn_data).offset_0x10;
      (this->CGraphicCtrl_PushBtn_data).offset_0x18 = 1;
      PostMessageA(pHVar1,0x47d3,(this->CGraphicCtrl_PushBtn_data).offset_0x14,(LPARAM)pHVar1);
      pOVar6 = this->vftablePtr->OnBtnClicked;
      goto LAB_6000f4c1;
    }
  }
  if (((this->CGraphicCtrl_PushBtn_data).offset_0x2c != 0) &&
     ((_s_CursorPos != _s_CursorPosLast || (DAT_60025af0 != DAT_60025af8)))) {
    (*this->vftablePtr->OnBtnClicked)(this);
  }
  iVar4 = (this->CGraphicCtrl_PushBtn_data).offset_0x20;
  if ((this->CGraphicCtrl_PushBtn_data).offset_0x1c != iVar4) {
    (this->CGraphicCtrl_PushBtn_data).offset_0x1c = iVar4;
  }
LAB_6000f50f:
  if (CGraphicCtrl::s_bLButtonDown != 0) {
    (this->CGraphicCtrl_PushBtn_data).offset_0x1c = 1;
  }
  uVar7 = (uint)(byte)(this->CGraphicCtrl_PushBtn_data).offset_0x38;
  if ((this->CGraphicCtrl_PushBtn_data).offset_0x30 == uVar7) {
    return 0;
  }
  (this->CGraphicCtrl_PushBtn_data).offset_0x30 = uVar7;
  return 1;
}



/* ---- CGraphicCtrl_PushBtn::DrawProc @ 6000f550 size=109 ---- */

/* public: virtual int __thiscall CGraphicCtrl_PushBtn::DrawProc(class CRect &,class CRect &)
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb
   CGraphicCtrl_PushBtn member function inherited by
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up */

int __thiscall
CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn__DrawProc
          (CGraphicCtrl_PushBtn *this,CRect *param_1,CRect *param_2)

{
  byte bVar1;
  
                    /* 0xf550  169  ?DrawProc@CGraphicCtrl_PushBtn@@UAEHAAVCRect@@0@Z */
  bVar1 = (this->CGraphicCtrl_PushBtn_data).offset_0x38;
  if ((&(this->CGraphicCtrl_PushBtn_data).offset_0x0)[bVar1] == (int *)0x0) {
    return 0;
  }
  CHgImage::Draw((CHgImage *)CGraphicCtrl::s_pBackBuf,*(int *)param_2,*(int *)(param_2 + 4),
                 (CHgImageBase *)(&(this->CGraphicCtrl_PushBtn_data).offset_0x0)[bVar1],
                 *(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8) - *(int *)param_1,
                 *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4),
                 (uint)(byte)(this->CGraphicCtrl_data).offset_0x11f,
                 (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c);
  return 1;
}



/* ---- SetRepeatNumber @ 6000f5c0 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_Tile_Ani::SetRepeatNumber(int) */

void __thiscall CGraphicCtrl_Tile_Ani::SetRepeatNumber(CGraphicCtrl_Tile_Ani *this,int param_1)

{
                    /* 0xf5c0  429  ?SetRepeatNumber@CGraphicCtrl_Tile_Ani@@QAEXH@Z */
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x18 = param_1;
  return;
}



/* ---- IsAnimationEnd @ 6000f5d0 size=27 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::IsAnimationEnd(void) */

int __thiscall CGraphicCtrl_Tile_Ani::IsAnimationEnd(CGraphicCtrl_Tile_Ani *this)

{
  int iVar1;
  
                    /* 0xf5d0  268  ?IsAnimationEnd@CGraphicCtrl_Tile_Ani@@QAEHXZ */
  iVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x18;
  if (((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x14 < iVar1) || (iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* ---- GetSpriteNumber @ 6000f5f0 size=7 ---- */

/* public: unsigned char __thiscall CGraphicCtrl_Tile_Ani::GetSpriteNumber(void) */

uchar __thiscall CGraphicCtrl_Tile_Ani::GetSpriteNumber(CGraphicCtrl_Tile_Ani *this)

{
                    /* 0xf5f0  242  ?GetSpriteNumber@CGraphicCtrl_Tile_Ani@@QAEEXZ */
  return (this->CGraphicCtrl_Tile_Ani_data).offset_0x11;
}



/* ---- GetAniListNumber @ 6000f600 size=7 ---- */

/* public: unsigned char __thiscall CGraphicCtrl_Tile_Ani::GetAniListNumber(void) */

uchar __thiscall CGraphicCtrl_Tile_Ani::GetAniListNumber(CGraphicCtrl_Tile_Ani *this)

{
                    /* 0xf600  194  ?GetAniListNumber@CGraphicCtrl_Tile_Ani@@QAEEXZ */
  return (this->CGraphicCtrl_Tile_Ani_data).offset_0x12;
}



/* ---- GetAniFrameIndex @ 6000f610 size=7 ---- */

/* public: unsigned char __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameIndex(void) */

uchar __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameIndex(CGraphicCtrl_Tile_Ani *this)

{
                    /* 0xf610  190  ?GetAniFrameIndex@CGraphicCtrl_Tile_Ani@@QAEEXZ */
  return (this->CGraphicCtrl_Tile_Ani_data).offset_0x1c;
}



/* ---- GetAniIndex @ 6000f620 size=7 ---- */

/* public: unsigned char __thiscall CGraphicCtrl_Tile_Ani::GetAniIndex(void) */

uchar __thiscall CGraphicCtrl_Tile_Ani::GetAniIndex(CGraphicCtrl_Tile_Ani *this)

{
                    /* 0xf620  192  ?GetAniIndex@CGraphicCtrl_Tile_Ani@@QAEEXZ */
  return (this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
}



/* ---- Rewind @ 6000f630 size=40 ---- */

/* public: void __thiscall CGraphicCtrl_Tile_Ani::Rewind(void) */

void __thiscall CGraphicCtrl_Tile_Ani::Rewind(CGraphicCtrl_Tile_Ani *this)

{
                    /* 0xf630  376  ?Rewind@CGraphicCtrl_Tile_Ani@@QAEXXZ */
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x14 = 0;
  ActivateAniFrame(this,'\0',-1);
  *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x124) = 0;
  return;
}



/* ---- SetDieAfterEndAnimation @ 6000f660 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_Tile_Ani::SetDieAfterEndAnimation(int) */

void __thiscall
CGraphicCtrl_Tile_Ani::SetDieAfterEndAnimation(CGraphicCtrl_Tile_Ani *this,int param_1)

{
                    /* 0xf660  396  ?SetDieAfterEndAnimation@CGraphicCtrl_Tile_Ani@@QAEXH@Z */
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x20 = param_1;
  return;
}



/* ---- SetHideAfterEndAnimation @ 6000f670 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_Tile_Ani::SetHideAfterEndAnimation(int) */

void __thiscall
CGraphicCtrl_Tile_Ani::SetHideAfterEndAnimation(CGraphicCtrl_Tile_Ani *this,int param_1)

{
                    /* 0xf670  406  ?SetHideAfterEndAnimation@CGraphicCtrl_Tile_Ani@@QAEXH@Z */
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x24 = param_1;
  return;
}



/* ---- CGraphicCtrl_Tile_Ani::_AllocSelf @ 6000f680 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Tile_Ani::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani___AllocSelf(CGraphicCtrl_Tile_Ani *this)

{
  CGraphicCtrl_Tile_Ani *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf680  477  ?_AllocSelf@CGraphicCtrl_Tile_Ani@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(400);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_Tile_Ani *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CGraphicCtrl_Tile_Ani(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_PushBtn_Ani @ 6000f6f0 size=89 ---- */

/* public: __thiscall CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani(void) */

CGraphicCtrl_PushBtn_Ani * __thiscall
CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani(CGraphicCtrl_PushBtn_Ani *this)

{
                    /* 0xf6f0  8  ??0CGraphicCtrl_PushBtn_Ani@@QAE@XZ */
  CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani((CGraphicCtrl_Tile_Ani *)this);
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x20 = 0;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 = 0;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x10 = 0;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0xc = 0;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c = 0;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x0 = 0;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x8 = 0;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x18 = 1;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x14 = 1;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x4 = 0xfffe;
  return this;
}



/* ---- ~CGraphicCtrl_PushBtn_Ani @ 6000f750 size=11 ---- */

/* public: virtual __thiscall CGraphicCtrl_PushBtn_Ani::~CGraphicCtrl_PushBtn_Ani(void) */

void __thiscall CGraphicCtrl_PushBtn_Ani::~CGraphicCtrl_PushBtn_Ani(CGraphicCtrl_PushBtn_Ani *this)

{
                    /* 0xf750  44  ??1CGraphicCtrl_PushBtn_Ani@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  CGraphicCtrl_Tile_Ani::~CGraphicCtrl_Tile_Ani((CGraphicCtrl_Tile_Ani *)this);
  return;
}



/* ---- CGraphicCtrl_PushBtn_Ani::CreateGraphicCtrl @ 6000f760 size=79 ---- */

/* public: virtual int __thiscall CGraphicCtrl_PushBtn_Ani::CreateGraphicCtrl(char *,unsigned
   short,struct HWND__ *,unsigned long,int) */

int __thiscall
CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani__CreateGraphicCtrl
          (CGraphicCtrl_PushBtn_Ani *this,char *param_1,ushort param_2,HWND__ *param_3,ulong param_4
          ,int param_5)

{
  int iVar1;
  
                    /* 0xf760  135
                       ?CreateGraphicCtrl@CGraphicCtrl_PushBtn_Ani@@UAEHPADGPAUHWND__@@KH@Z */
  iVar1 = CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__CreateGraphicCtrl
                    ((CGraphicCtrl_Tile_Ani *)this,param_1,0,1);
  if (iVar1 == 0) {
    return 0;
  }
  (this->CGraphicCtrl_data).offset_0x8 = param_2;
  (this->CGraphicCtrl_data).offset_0x1c = param_5;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x0 = param_3;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x18 = 0;
  (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x4 = (uint)param_2;
  return 1;
}



/* ---- CGraphicCtrl_PushBtn_Ani::CreateInstance @ 6000f7b0 size=38 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_PushBtn_Ani::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani__CreateInstance(CGraphicCtrl_PushBtn_Ani *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0xf7b0  155  ?CreateInstance@CGraphicCtrl_PushBtn_Ani@@UAEPAVCGraphicCtrl@@XZ
                        */
  pCVar1 = CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__CreateInstance
                     ((CGraphicCtrl_Tile_Ani *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(undefined4 *)(pCVar1 + 400) = (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x0;
    *(undefined4 *)(pCVar1 + 0x194) = (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x4;
  }
  return pCVar1;
}



/* ---- GetAniFrameNumber @ 6000f7e0 size=38 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameNumber(int) */

int __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameNumber(CGraphicCtrl_Tile_Ani *this,int param_1)

{
                    /* 0xf7e0  191  ?GetAniFrameNumber@CGraphicCtrl_Tile_Ani@@QAEHH@Z */
  if (param_1 == -1) {
    param_1 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  return (this->CGraphicCtrl_Tile_Ani_data).offset_0x8[param_1 * 7 + 3];
}



/* ---- CGraphicCtrl_PushBtn_Ani::_AllocSelf @ 6000f810 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_PushBtn_Ani::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani___AllocSelf(CGraphicCtrl_PushBtn_Ani *this)

{
  CGraphicCtrl_PushBtn_Ani *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf810  467  ?_AllocSelf@CGraphicCtrl_PushBtn_Ani@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1b8);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_PushBtn_Ani *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CGraphicCtrl_PushBtn_Ani(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 6000f880 size=91 ---- */

CGraphicCtrl_Tile_Ani * __thiscall
CGraphicCtrl_PushBtn_Ani::scalar_deleting_destructor(CGraphicCtrl_PushBtn_Ani *this,byte param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGraphicCtrl_PushBtn_Ani::~CGraphicCtrl_PushBtn_Ani */
    this->vftablePtr = &_vftable_;
    CGraphicCtrl_Tile_Ani::~CGraphicCtrl_Tile_Ani((CGraphicCtrl_Tile_Ani *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_Tile_Ani *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_PushBtn_Ani_data.offset_0x24;
  _eh_vector_destructor_iterator_
            (this,0x1b8,*(int *)&this[-1].CGraphicCtrl_PushBtn_Ani_data.offset_0x24,
             ~CGraphicCtrl_PushBtn_Ani);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_Tile_Ani *)puVar1;
}



/* ---- CGraphicCtrl_PushBtn_Ani::Proc @ 6000f8e0 size=677 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall CGraphicCtrl_PushBtn_Ani::Proc(unsigned long) */

int __thiscall
CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani__Proc
          (CGraphicCtrl_PushBtn_Ani *this,ulong param_1)

{
  HWND pHVar1;
  POINT pt;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  ulong uVar5;
  OnBtnClicked *pOVar6;
  uint uVar7;
  ulong local_14;
  RECT local_10;
  
                    /* 0xf8e0  356  ?Proc@CGraphicCtrl_PushBtn_Ani@@UAEHK@Z */
  iVar4 = (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x18;
  if (((iVar4 != (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x14) &&
      ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x14 = iVar4, iVar4 == 0)) &&
     ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 != '\x01')) {
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 = 1;
    CGraphicCtrl_Tile_Ani::ActivateAniFrame((CGraphicCtrl_Tile_Ani *)this,'\0',1);
  }
  if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x18 == 0) {
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c = 0;
    goto LAB_6000fb45;
  }
  if (CGraphicCtrl::s_bLButtonDown == 0) {
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x10 = 0;
  }
  else {
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x10 = 1;
  }
  CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0);
  pt.y = DAT_60025af0;
  pt.x = _s_CursorPos;
  BVar3 = PtInRect(&local_10,pt);
  if (BVar3 == 0) {
LAB_6000faa3:
    if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x10 == 0) {
      (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c = 0;
    }
    if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 != '\0') {
      CGraphicCtrl_Tile_Ani::ActivateAniFrame((CGraphicCtrl_Tile_Ani *)this,'\0',0);
      (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 = 0;
    }
    if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x8 != 0) {
      pHVar1 = (HWND)(this->CGraphicCtrl_PushBtn_Ani_data).offset_0x0;
      (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x8 = 0;
      PostMessageA(pHVar1,0x47d4,(this->CGraphicCtrl_PushBtn_Ani_data).offset_0x4,(LPARAM)pHVar1);
      pOVar6 = this->vftablePtr->OnBtnClicked;
LAB_6000faf7:
      (*pOVar6)(this);
    }
  }
  else {
    bVar2 = CHgImageBase::HasTransparentColor
                      (*(CHgImageBase **)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x16c));
    if (bVar2) {
      iVar4 = CHgImage::GetPixel(*(CHgImage **)
                                  ((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x16c),
                                 _s_CursorPos - local_10.left,DAT_60025af0 - local_10.top,&local_14)
      ;
      if (iVar4 != 0) {
        uVar5 = CHgImageBase::GetTransparentColor
                          (*(CHgImageBase **)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x16c)
                          );
        if (local_14 != uVar5) goto LAB_6000f9d7;
      }
      goto LAB_6000faa3;
    }
LAB_6000f9d7:
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 = 0;
    if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0xc == 0) {
      if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x10 == 0) {
        CGraphicCtrl_Tile_Ani::ActivateAniFrame((CGraphicCtrl_Tile_Ani *)this,'\0',2);
        (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 = 2;
      }
      else {
        pOVar6 = this->vftablePtr->OnBtnClicked;
        (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c = 1;
        (*pOVar6)(this);
      }
    }
    if (((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c != 0) &&
       ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 != '\x03')) {
      CGraphicCtrl_Tile_Ani::ActivateAniFrame((CGraphicCtrl_Tile_Ani *)this,'\0',3);
      (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24 = 3;
    }
    if (((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x10 == 0) &&
       ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c != 0)) {
      pHVar1 = (HWND)(this->CGraphicCtrl_PushBtn_Ani_data).offset_0x0;
      if (pHVar1 != (HWND)0x0) {
        PostMessageA(pHVar1,0x111,(uint)*(ushort *)&(this->CGraphicCtrl_PushBtn_Ani_data).offset_0x4
                     ,(LPARAM)pHVar1);
      }
      (*this->vftablePtr->OnBtnClicked)(this);
      (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c = 0;
    }
    if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x8 == 0) {
      pHVar1 = (HWND)(this->CGraphicCtrl_PushBtn_Ani_data).offset_0x0;
      (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x8 = 1;
      PostMessageA(pHVar1,0x47d3,(this->CGraphicCtrl_PushBtn_Ani_data).offset_0x4,(LPARAM)pHVar1);
      pOVar6 = this->vftablePtr->OnBtnClicked;
      goto LAB_6000faf7;
    }
  }
  if (((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x1c != 0) &&
     ((_s_CursorPos != _s_CursorPosLast || (DAT_60025af0 != DAT_60025af8)))) {
    (*this->vftablePtr->OnBtnClicked)(this);
  }
  iVar4 = (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x10;
  if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0xc != iVar4) {
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0xc = iVar4;
  }
LAB_6000fb45:
  if (CGraphicCtrl::s_bLButtonDown != 0) {
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0xc = 1;
  }
  iVar4 = CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__Proc((CGraphicCtrl_Tile_Ani *)this,param_1);
  uVar7 = (uint)(byte)(this->CGraphicCtrl_PushBtn_Ani_data).offset_0x24;
  if ((this->CGraphicCtrl_PushBtn_Ani_data).offset_0x20 != uVar7) {
    (this->CGraphicCtrl_PushBtn_Ani_data).offset_0x20 = uVar7;
    iVar4 = 1;
  }
  return iVar4;
}



/* ---- CGraphicCtrl_Root @ 6000fb90 size=44 ---- */

/* public: __thiscall CGraphicCtrl_Root::CGraphicCtrl_Root(void) */

CGraphicCtrl_Root * __thiscall CGraphicCtrl_Root::CGraphicCtrl_Root(CGraphicCtrl_Root *this)

{
                    /* 0xfb90  9  ??0CGraphicCtrl_Root@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_data).offset_0x8 = 0xffff;
  this->vftablePtr = &_vftable_;
  CGraphicCtrl::s_pBackBuf = (CHgDIB *)0x0;
  CGraphicCtrl::s_hDCBackBuf = (HDC__ *)0x0;
  s_hSavedBackBuf = (void *)0x0;
  return this;
}



/* ---- ~CGraphicCtrl_Root @ 6000fbc0 size=155 ---- */

/* public: virtual __thiscall CGraphicCtrl_Root::~CGraphicCtrl_Root(void) */

void __thiscall CGraphicCtrl_Root::~CGraphicCtrl_Root(CGraphicCtrl_Root *this)

{
  uint uVar1;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbc0  45  ??1CGraphicCtrl_Root@@UAE@XZ */
  puStack_8 = &LAB_60016b98;
  local_c = ExceptionList;
  uVar1 = DAT_600259a8 ^ (uint)(auStack_e + -10);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_data).offset_0x20 = 0;
  local_4 = 0;
  if (CGraphicCtrl::s_hDCBackBuf != (HDC__ *)0x0) {
    SelectObject(CGraphicCtrl::s_hDCBackBuf,s_hSavedBackBuf);
    DeleteDC(CGraphicCtrl::s_hDCBackBuf);
    CGraphicCtrl::s_hDCBackBuf = (HDC__ *)0x0;
  }
  if (CGraphicCtrl::s_pBackBuf != (CHgDIB *)0x0) {
    (*(code *)**(undefined4 **)CGraphicCtrl::s_pBackBuf)(1,uVar1);
  }
  CGraphicCtrl::s_pBackBuf = (CHgDIB *)0x0;
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- ValidateArea @ 6000fc60 size=25 ---- */

/* public: void __thiscall CGraphicCtrl_Root::ValidateArea(void) */

void __thiscall CGraphicCtrl_Root::ValidateArea(CGraphicCtrl_Root *this)

{
                    /* 0xfc60  459  ?ValidateArea@CGraphicCtrl_Root@@QAEXXZ */
  if (CGraphicCtrl::s_prcInvalidateArea != (CRect *)0x0) {
    SetRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,0,0,0,0);
  }
  return;
}



/* ---- scalar_deleting_destructor @ 6000fc80 size=85 ---- */

CGraphicCtrl_Root * __thiscall
CGraphicCtrl_Root::scalar_deleting_destructor(CGraphicCtrl_Root *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_Root(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_Root *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_data.offset_0x160;
  _eh_vector_destructor_iterator_
            (this,0x168,this[-1].CGraphicCtrl_data.offset_0x160,~CGraphicCtrl_Root);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_Root *)puVar1;
}



/* ---- ~CHgDIB @ 6000fce0 size=404 ---- */

/* public: int __thiscall CGraphicCtrl_Root::CreateGraphicCtrl(int,int,class CHgDIB *,class CRect *)
    */

int __thiscall CHgDIB::~CHgDIB(CHgDIB *this,int param_1,int param_2,CHgDIB *param_3,CRect *param_4)

{
  uint uVar1;
  CHgDIB *this_00;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  HDC pHVar4;
  CDC *pCVar5;
  HBITMAP__ *h;
  undefined1 auStackY_b4 [128];
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfce0  136
                       ?CreateGraphicCtrl@CGraphicCtrl_Root@@QAEHHHPAVCHgDIB@@PAVCRect@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016bcb;
  local_c = ExceptionList;
  uVar1 = DAT_600259a8 ^ (uint)(auStackY_b4 + 0x8c);
  if (param_4 == (CRect *)0x0) {
    return 0;
  }
  CGraphicCtrl::s_prcInvalidateArea = param_4;
  ExceptionList = &local_c;
  this[9].vftablePtr = (CHgDIB_vftable *)param_3;
  local_14 = param_1;
  local_10 = param_2;
  CGraphicCtrl::SetSize((CGraphicCtrl *)this,(CSize *)&local_14);
  this_00 = operator_new(100);
  local_4 = 0;
  if (this_00 == (CHgDIB *)0x0) {
    this_00 = (CHgDIB *)0x0;
  }
  else {
    CHgDIB::CHgDIB((CHgDIB *)this_00);
    *(CHgDIB_vftable **)this_00 = &vftable;
  }
  local_4 = 0xffffffff;
  CGraphicCtrl::s_pBackBuf = this_00;
  (**(code **)(*(int *)this_00 + 0x10))(param_1,param_2,uVar1);
  pAVar2 = AfxGetModuleState();
  iVar3 = (**(code **)(**(int **)(pAVar2 + 4) + 0x7c))();
  if ((iVar3 != 0) && (*(HWND *)(iVar3 + 0x20) != (HWND)0x0)) {
    pHVar4 = GetDC(*(HWND *)(iVar3 + 0x20));
    pCVar5 = CDC::FromHandle(pHVar4);
    CGraphicCtrl::s_hDCBackBuf = CreateCompatibleDC(*(HDC *)(pCVar5 + 4));
    ReleaseDC(*(HWND *)(iVar3 + 0x20),*(HDC *)(pCVar5 + 4));
  }
  if (CGraphicCtrl::s_hDCBackBuf == (HDC__ *)0x0) {
    pAVar2 = AfxGetModuleState();
    iVar3 = (**(code **)(**(int **)(pAVar2 + 4) + 0x7c))();
    pHVar4 = GetDC(*(HWND *)(iVar3 + 0x20));
    pCVar5 = CDC::FromHandle(pHVar4);
    if (pCVar5 != (CDC *)0x0) {
      CGraphicCtrl::s_hDCBackBuf = CreateCompatibleDC(*(HDC *)(pCVar5 + 4));
      pAVar2 = AfxGetModuleState();
      iVar3 = (**(code **)(**(int **)(pAVar2 + 4) + 0x7c))();
      ReleaseDC(*(HWND *)(iVar3 + 0x20),*(HDC *)(pCVar5 + 4));
    }
    if (CGraphicCtrl::s_hDCBackBuf == (HDC__ *)0x0) goto LAB_6000fe4f;
  }
  h = CHgDIB::GetHBitmap((CHgDIB *)CGraphicCtrl::s_pBackBuf);
  CGraphicCtrl_Root::s_hSavedBackBuf = SelectObject(CGraphicCtrl::s_hDCBackBuf,h);
LAB_6000fe4f:
  this[4].vftablePtr = (CHgDIB_vftable *)0x1;
  this[6].vftablePtr = (CHgDIB_vftable *)0x1;
  ExceptionList = local_c;
  return 1;
}



/* ---- CGraphicCtrl_TileSupport @ 6000fe80 size=28 ---- */

/* public: __thiscall CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport(void) */

CGraphicCtrl_TileSupport * __thiscall
CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport(CGraphicCtrl_TileSupport *this)

{
                    /* 0xfe80  17  ??0CGraphicCtrl_TileSupport@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_TileSupport_data).offset_0x0 = 0;
  return this;
}



/* ---- CGraphicCtrl_TileSupport::_AllocSelf @ 6000fea0 size=126 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_TileSupport::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport___AllocSelf(CGraphicCtrl_TileSupport *this)

{
  CList<CGraphicCtrl*,CGraphicCtrl*> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfea0  476  ?_AllocSelf@CGraphicCtrl_TileSupport@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x16c);
  local_4 = 0;
  if (this_00 == (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(this_00);
  this_00->vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)&_vftable_;
  this_00[0xf].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  ExceptionList = local_c;
  return this_00;
}



/* ---- scalar_deleting_destructor @ 6000ff20 size=91 ---- */

CGraphicCtrl * __thiscall
CGraphicCtrl_TileSupport::scalar_deleting_destructor(CGraphicCtrl_TileSupport *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGraphicCtrl_TileSupport::~CGraphicCtrl_TileSupport */
    this->vftablePtr = &_vftable_;
    CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl *)this;
  }
  _eh_vector_destructor_iterator_
            (this,0x16c,this[-1].CGraphicCtrl_TileSupport_data.offset_0x0,
             CGraphicCtrl_Rotate::~CGraphicCtrl_Rotate);
  if ((param_1 & 1) != 0) {
    operator_delete__(&this[-1].CGraphicCtrl_TileSupport_data);
  }
  return (CGraphicCtrl *)&this[-1].CGraphicCtrl_TileSupport_data;
}



/* ---- ~CGraphicCtrl_Rotate @ 6000ff80 size=11 ---- */

/* public: virtual __thiscall CGraphicCtrl_Rotate::~CGraphicCtrl_Rotate(void) */

void __thiscall CGraphicCtrl_Rotate::~CGraphicCtrl_Rotate(CGraphicCtrl_Rotate *this)

{
                    /* 0xff80  46  ??1CGraphicCtrl_Rotate@@UAE@XZ
                       0xff80  53  ??1CGraphicCtrl_TileSupport@@UAE@XZ */
  this->vftablePtr = (CGraphicCtrl_Rotate_vftable *)&CGraphicCtrl_TileSupport::_vftable_;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  return;
}



/* ---- SetRotationDegree @ 6000ff90 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_Rotate::SetRotationDegree(int) */

void __thiscall CGraphicCtrl_Rotate::SetRotationDegree(CGraphicCtrl_Rotate *this,int param_1)

{
                    /* 0xff90  430  ?SetRotationDegree@CGraphicCtrl_Rotate@@QAEXH@Z */
  (this->CGraphicCtrl_Rotate_data).offset_0x0 = param_1;
  return;
}



/* ---- SetScale @ 6000ffa0 size=13 ---- */

/* public: void __thiscall CGraphicCtrl_Rotate::SetScale(float) */

void __thiscall CGraphicCtrl_Rotate::SetScale(CGraphicCtrl_Rotate *this,float param_1)

{
                    /* 0xffa0  431  ?SetScale@CGraphicCtrl_Rotate@@QAEXM@Z */
  (this->CGraphicCtrl_Rotate_data).offset_0x4 = param_1;
  return;
}



/* ---- scalar_deleting_destructor @ 6000ffb0 size=91 ---- */

CGraphicCtrl * __thiscall
CGraphicCtrl_Rotate::scalar_deleting_destructor(CGraphicCtrl_Rotate *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGraphicCtrl_TileSupport::~CGraphicCtrl_TileSupport */
    this->vftablePtr = (CGraphicCtrl_Rotate_vftable *)&CGraphicCtrl_TileSupport::_vftable_;
    CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_Rotate_data.offset_0x4;
  _eh_vector_destructor_iterator_
            (this,0x174,this[-1].CGraphicCtrl_Rotate_data.offset_0x4,~CGraphicCtrl_Rotate);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl *)puVar1;
}



/* ---- CGraphicCtrl_Rotate @ 60010010 size=44 ---- */

/* public: __thiscall CGraphicCtrl_Rotate::CGraphicCtrl_Rotate(void) */

CGraphicCtrl_Rotate * __thiscall CGraphicCtrl_Rotate::CGraphicCtrl_Rotate(CGraphicCtrl_Rotate *this)

{
                    /* 0x10010  10  ??0CGraphicCtrl_Rotate@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_Rotate_data).offset_0x4 = 0x3f800000;
  (this->CGraphicCtrl_TileSupport_data).offset_0x0 = 0;
  (this->CGraphicCtrl_Rotate_data).offset_0x0 = 0;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_data).offset_0x0 = 1;
  return this;
}



/* ---- CGraphicCtrl_Rotate::CreateInstance @ 60010040 size=38 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_Rotate::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_Rotate::CGraphicCtrl_Rotate__CreateInstance(CGraphicCtrl_Rotate *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0x10040  156  ?CreateInstance@CGraphicCtrl_Rotate@@UAEPAVCGraphicCtrl@@XZ */
  pCVar1 = CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport__CreateInstance
                     ((CGraphicCtrl_TileSupport *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(undefined4 *)(pCVar1 + 0x16c) = (this->CGraphicCtrl_Rotate_data).offset_0x0;
    *(undefined4 *)(pCVar1 + 0x170) = (this->CGraphicCtrl_Rotate_data).offset_0x4;
  }
  return pCVar1;
}



/* ---- CGraphicCtrl_Rotate::_AllocSelf @ 60010070 size=148 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Rotate::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_Rotate::CGraphicCtrl_Rotate___AllocSelf(CGraphicCtrl_Rotate *this)

{
  CList<CGraphicCtrl*,CGraphicCtrl*> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10070  469  ?_AllocSelf@CGraphicCtrl_Rotate@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x174);
  local_4 = 0;
  if (this_00 == (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(this_00);
  this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0x3f800000;
  this_00[0xf].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  this_00->vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)&_vftable_;
  this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
  *(undefined1 *)&(this_00->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0 = 1;
  ExceptionList = local_c;
  return this_00;
}



/* ---- CGraphicCtrl_Rotate::DrawProc @ 60010110 size=194 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Rotate::DrawProc(class CRect &,class CRect &) */

int __thiscall
CGraphicCtrl_Rotate::CGraphicCtrl_Rotate__DrawProc
          (CGraphicCtrl_Rotate *this,CRect *param_1,CRect *param_2)

{
  bool bVar1;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0x10110  170  ?DrawProc@CGraphicCtrl_Rotate@@UAEHAAVCRect@@0@Z */
  bVar1 = CGraphicCtrl_TileSupport::GetTileIntersectRect
                    ((CGraphicCtrl_TileSupport *)this,&local_20,(tagRECT *)0x0);
  if (bVar1) {
    CHgImageBase::GetClipArea((CHgImageBase *)CGraphicCtrl::s_pBackBuf,&local_10);
    CHgImageBase::SetClipArea((CHgImageBase *)CGraphicCtrl::s_pBackBuf,(tagRECT *)param_1);
    CHgImage::DrawRotate
              ((CHgImage *)CGraphicCtrl::s_pBackBuf,*(long *)param_2,*(long *)(param_2 + 4),
               (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20,local_20.left,local_20.top,
               local_20.right - local_20.left,local_20.bottom - local_20.top,
               (this->CGraphicCtrl_data).offset_0xc0 + local_20.left,
               (this->CGraphicCtrl_data).offset_0xc4,(this->CGraphicCtrl_Rotate_data).offset_0x0,
               (float)(this->CGraphicCtrl_Rotate_data).offset_0x4,
               (uint)(byte)(this->CGraphicCtrl_data).offset_0x11f,
               (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c);
    CHgImageBase::SetClipArea((CHgImageBase *)CGraphicCtrl::s_pBackBuf,&local_10);
    return 1;
  }
  return 0;
}



/* ---- ~CGraphicCtrl_Scale @ 600101e0 size=11 ---- */

/* public: virtual __thiscall CGraphicCtrl_Scale::~CGraphicCtrl_Scale(void) */

void __thiscall CGraphicCtrl_Scale::~CGraphicCtrl_Scale(CGraphicCtrl_Scale *this)

{
                    /* 0x101e0  47  ??1CGraphicCtrl_Scale@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 600101f0 size=91 ---- */

CGraphicCtrl * __thiscall
CGraphicCtrl_Scale::scalar_deleting_destructor(CGraphicCtrl_Scale *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGraphicCtrl_Scale::~CGraphicCtrl_Scale */
    this->vftablePtr = &_vftable_;
    CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_Scale_data.offset_0x14;
  _eh_vector_destructor_iterator_
            (this,0x180,this[-1].CGraphicCtrl_Scale_data.offset_0x14,~CGraphicCtrl_Scale);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl *)puVar1;
}



/* ---- CGraphicCtrl_Scale::CreateInstance @ 60010250 size=86 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_Scale::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_Scale::CGraphicCtrl_Scale__CreateInstance(CGraphicCtrl_Scale *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0x10250  157  ?CreateInstance@CGraphicCtrl_Scale@@UAEPAVCGraphicCtrl@@XZ */
  pCVar1 = CGraphicCtrl::CGraphicCtrl__CreateInstance((CGraphicCtrl *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(undefined4 *)(pCVar1 + 0x168) = *(undefined4 *)&this->CGraphicCtrl_Scale_data;
    *(undefined4 *)(pCVar1 + 0x16c) = *(undefined4 *)&(this->CGraphicCtrl_Scale_data).field_0x4;
    *(undefined4 *)(pCVar1 + 0x170) = (this->CGraphicCtrl_Scale_data).offset_0x8;
    *(undefined4 *)(pCVar1 + 0x174) = (this->CGraphicCtrl_Scale_data).offset_0xc;
    *(undefined4 *)(pCVar1 + 0x178) = (this->CGraphicCtrl_Scale_data).offset_0x10;
    *(undefined4 *)(pCVar1 + 0x17c) = (this->CGraphicCtrl_Scale_data).offset_0x14;
  }
  return pCVar1;
}



/* ---- CGraphicCtrl_Scale::OnSelfNotice @ 600102b0 size=79 ---- */

/* public: virtual void __thiscall CGraphicCtrl_Scale::OnSelfNotice(unsigned short) */

void __thiscall
CGraphicCtrl_Scale::CGraphicCtrl_Scale__OnSelfNotice(CGraphicCtrl_Scale *this,ushort param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* 0x102b0  334  ?OnSelfNotice@CGraphicCtrl_Scale@@UAEXG@Z */
  if (param_1 == 0xff06) {
    fVar2 = (float)(int)(this->CGraphicCtrl_data).offset_0xd0;
    iVar1 = *(int *)&this->CGraphicCtrl_Scale_data;
    (this->CGraphicCtrl_Scale_data).offset_0x8 = fVar2 / (float)iVar1;
    fVar4 = (float)(int)(this->CGraphicCtrl_data).offset_0xd4;
    fVar3 = (float)*(int *)&(this->CGraphicCtrl_Scale_data).field_0x4;
    (this->CGraphicCtrl_Scale_data).offset_0xc = fVar4 / fVar3;
    (this->CGraphicCtrl_Scale_data).offset_0x10 = (float)iVar1 / fVar2;
    (this->CGraphicCtrl_Scale_data).offset_0x14 = fVar3 / fVar4;
  }
  return;
}



/* ---- CGraphicCtrl_Scale @ 60010300 size=44 ---- */

/* public: __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale(void) */

CGraphicCtrl_Scale * __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale(CGraphicCtrl_Scale *this)

{
                    /* 0x10300  11  ??0CGraphicCtrl_Scale@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_Scale_data).offset_0x8 = 0x3f800000;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_Scale_data).offset_0xc = 0x3f800000;
  (this->CGraphicCtrl_Scale_data).offset_0x10 = 0x3f800000;
  (this->CGraphicCtrl_Scale_data).offset_0x14 = 0x3f800000;
  return this;
}



/* ---- CGraphicCtrl_Scale::DrawProc @ 60010330 size=185 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Scale::DrawProc(class CRect &,class CRect &) */

int __thiscall
CGraphicCtrl_Scale::CGraphicCtrl_Scale__DrawProc
          (CGraphicCtrl_Scale *this,CRect *param_1,CRect *param_2)

{
  CHgImageBase *pCVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  
                    /* 0x10330  171  ?DrawProc@CGraphicCtrl_Scale@@UAEHAAVCRect@@0@Z */
  pCVar1 = (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20;
  if (pCVar1 == (CHgImageBase *)0x0) {
    return 0;
  }
  uVar4 = (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c;
  fVar11 = (float)(this->CGraphicCtrl_Scale_data).offset_0xc;
  uVar8 = (uint)(byte)(this->CGraphicCtrl_data).offset_0x11f;
  iVar2 = *(int *)(param_2 + 4);
  lVar3 = *(long *)param_2;
  fVar10 = (float)(this->CGraphicCtrl_Scale_data).offset_0x8;
  uVar9 = FUN_60015470(uVar8,*(int *)(param_2 + 0xc) - iVar2);
  lVar5 = (long)uVar9;
  uVar9 = FUN_60015470(extraout_ECX,(int)(uVar9 >> 0x20));
  lVar6 = (long)uVar9;
  uVar9 = FUN_60015470(extraout_ECX_00,(int)(uVar9 >> 0x20));
  lVar7 = (long)uVar9;
  uVar9 = FUN_60015470(extraout_ECX_01,(int)(uVar9 >> 0x20));
  CHgImage::DrawScale((CHgImage *)CGraphicCtrl::s_pBackBuf,lVar3,iVar2,pCVar1,(long)uVar9,lVar7,
                      lVar6,lVar5,fVar10,fVar11,uVar8,uVar4);
  return 1;
}



/* ---- CGraphicCtrl_Scale::_AllocSelf @ 600103f0 size=121 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Scale::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale___AllocSelf(CGraphicCtrl_Scale *this)

{
  CList<CGraphicCtrl*,CGraphicCtrl*> *this_00;
  CList<CGraphicCtrl*,CGraphicCtrl*> *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x103f0  470  ?_AllocSelf@CGraphicCtrl_Scale@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x180);
  local_4 = 0;
  pCVar1 = (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0;
  if (this_00 != (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0) {
    CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(this_00);
    this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0x3f800000;
    this_00->vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)&_vftable_;
    this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0x3f800000;
    this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0x3f800000;
    this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x3f800000;
    pCVar1 = this_00;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_Scale::CreateGraphicCtrl @ 60010470 size=384 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Scale::CreateGraphicCtrl(class CCreateFT const
   &,unsigned long,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Scale::CGraphicCtrl_Scale__CreateGraphicCtrl
          (CGraphicCtrl_Scale *this,undefined4 *param_1,ulong param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  CHgImageBase *pCVar3;
  char cVar4;
  CHgDIB *this_00;
  int iVar5;
  CSize aCStack_12 [2];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10470  137
                       ?CreateGraphicCtrl@CGraphicCtrl_Scale@@UAEHABVCCreateFT@@KEVCPoint@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016886;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)(this->CGraphicCtrl_data).offset_0x20;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,DAT_600259a8 ^ (uint)(aCStack_12 + -0x12));
  }
  (this->CGraphicCtrl_data).offset_0x20 = 0;
  if ((this->CGraphicCtrl_data).offset_0x4 == 0) {
    this_00 = operator_new(0x38);
    uStack_4 = 1;
    if (this_00 != (CHgDIB *)0x0) {
      CHgDDB::CHgDDB((CHgDDB *)this_00);
      this_00->vftablePtr = (CHgDIB_vftable *)&CHgDDB::vftable;
      goto LAB_60010508;
    }
  }
  else {
    this_00 = operator_new(100);
    uStack_4 = 0;
    if (this_00 != (CHgDIB *)0x0) {
      CHgDIB::CHgDIB(this_00);
      this_00->vftablePtr = &CHgDIB::vftable;
      goto LAB_60010508;
    }
  }
  this_00 = (CHgDIB *)0x0;
LAB_60010508:
  (this->CGraphicCtrl_data).offset_0x20 = this_00;
  piVar2 = (int *)(this->CGraphicCtrl_data).offset_0x20;
  uStack_4 = 0xffffffff;
  if (param_1[2] == 0) {
    cVar4 = (**(code **)(*piVar2 + 0x10))(*param_1,param_1[1]);
  }
  else {
    cVar4 = (**(code **)(*piVar2 + 4))(param_1[2]);
  }
  if (cVar4 == '\0') {
    puVar1 = (undefined4 *)(this->CGraphicCtrl_data).offset_0x20;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    (this->CGraphicCtrl_data).offset_0x20 = 0;
    iVar5 = 0;
  }
  else {
    if (param_2 != 0xffffffff) {
      CHgImageBase::SetTransparentColor
                ((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20,param_2);
    }
    iVar5 = CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20);
    pCVar3 = (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20;
    *(int *)&this->CGraphicCtrl_Scale_data = iVar5;
    iVar5 = CHgImageBase::GetHeight(pCVar3);
    pCVar3 = (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20;
    *(int *)&(this->CGraphicCtrl_Scale_data).field_0x4 = iVar5;
    CHgImageBase::GetHeight(pCVar3);
    CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20);
    CGraphicCtrl::SetSize((CGraphicCtrl *)this,aCStack_12 + -6);
    (this->CGraphicCtrl_data).offset_0x11c = (undefined1)param_2;
    CGraphicCtrl::SetPosBase((CGraphicCtrl *)this,param_3,param_4);
    (this->CGraphicCtrl_data).offset_0x1c = param_5;
    iVar5 = 1;
  }
  ExceptionList = pvStack_10;
  return iVar5;
}



/* ---- CGraphicCtrl_Scale::CreateGraphicCtrl @ 600105f0 size=140 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Scale::CreateGraphicCtrl(int,int,unsigned
   long,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Scale::CGraphicCtrl_Scale__CreateGraphicCtrl
          (CGraphicCtrl_Scale *this,int param_1,int param_2,uint param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  undefined4 local_4;
  
                    /* 0x105f0  138  ?CreateGraphicCtrl@CGraphicCtrl_Scale@@UAEHHHKEVCPoint@@H@Z */
  local_c = param_1;
  local_8 = param_2;
  local_4 = 0;
  iVar2 = CGraphicCtrl_Scale__CreateGraphicCtrl(this,&local_c,param_3,param_4,param_5,param_6);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = 0x100;
  bVar1 = CHgImageBase::HasTransparentColor((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20);
  CHgImage::FillRect((CHgImage *)(this->CGraphicCtrl_data).offset_0x20,0,0,param_1,param_2,
                     -(uint)bVar1 & param_3,iVar2,iVar3);
  return 1;
}



/* ---- CGraphicCtrl_Scale::CreateGraphicCtrl @ 60010680 size=61 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Scale::CreateGraphicCtrl(char *,unsigned
   long,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Scale::CGraphicCtrl_Scale__CreateGraphicCtrl
          (CGraphicCtrl_Scale *this,undefined4 param_1,ulong param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x10680  139  ?CreateGraphicCtrl@CGraphicCtrl_Scale@@UAEHPADKEVCPoint@@H@Z */
  local_c = 0;
  local_8 = 0;
  local_4 = param_1;
  iVar1 = CGraphicCtrl_Scale__CreateGraphicCtrl(this,&local_c,param_2,param_3,param_4,param_5);
  return iVar1;
}



/* ---- CGraphicCtrl_ScrollBar @ 600106c0 size=97 ---- */

/* public: __thiscall CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar(void) */

CGraphicCtrl_ScrollBar * __thiscall
CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar(CGraphicCtrl_ScrollBar *this)

{
                    /* 0x106c0  12  ??0CGraphicCtrl_ScrollBar@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_ScrollBar_data).offset_0x14 = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x18 = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x1c = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x10 = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x0 = 0;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_ScrollBar_data).offset_0xa = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0xc = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x4 = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x6 = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x8 = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x2 = 0;
  return this;
}



/* ---- ~CGraphicCtrl_ScrollBar @ 60010730 size=11 ---- */

/* public: virtual __thiscall CGraphicCtrl_ScrollBar::~CGraphicCtrl_ScrollBar(void) */

void __thiscall CGraphicCtrl_ScrollBar::~CGraphicCtrl_ScrollBar(CGraphicCtrl_ScrollBar *this)

{
                    /* 0x10730  48  ??1CGraphicCtrl_ScrollBar@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  return;
}



/* ---- SetCurrentSize @ 60010740 size=37 ---- */

/* public: void __thiscall CGraphicCtrl_ScrollBar::SetCurrentSize(unsigned short) */

void __thiscall CGraphicCtrl_ScrollBar::SetCurrentSize(CGraphicCtrl_ScrollBar *this,ushort param_1)

{
                    /* 0x10740  389  ?SetCurrentSize@CGraphicCtrl_ScrollBar@@QAEXG@Z */
  (this->CGraphicCtrl_ScrollBar_data).offset_0xc = param_1;
  if ((1 < param_1) && (param_1 <= (ushort)(this->CGraphicCtrl_ScrollBar_data).offset_0xa)) {
    (this->CGraphicCtrl_ScrollBar_data).offset_0xa = param_1 - 1;
  }
  return;
}



/* ---- CGraphicCtrl_ScrollBar::Proc @ 60010770 size=256 ---- */

/* public: virtual int __thiscall CGraphicCtrl_ScrollBar::Proc(unsigned long) */

int __thiscall
CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar__Proc(CGraphicCtrl_ScrollBar *this,ulong param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  CGraphicCtrl *pCVar4;
  int iVar5;
  
                    /* 0x10770  357  ?Proc@CGraphicCtrl_ScrollBar@@UAEHK@Z */
  uVar1 = (this->CGraphicCtrl_ScrollBar_data).offset_0xc;
  uVar2 = (this->CGraphicCtrl_ScrollBar_data).offset_0x6;
  if (uVar1 == uVar2) goto LAB_60010843;
  if (uVar1 < 2) {
LAB_600107e9:
    if (1 < uVar2) {
      pCVar4 = (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
      if (pCVar4 != (CGraphicCtrl *)0x0) {
        CGraphicCtrl::ShowCtrl(pCVar4,0);
        CGraphicCtrl::PlayCtrl((CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x1c,0);
      }
      iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x14;
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 400) = 0;
      }
      iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x18;
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 400) = 0;
      }
    }
  }
  else if (uVar2 < 2) {
    pCVar4 = (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
    if (pCVar4 != (CGraphicCtrl *)0x0) {
      if ((pCVar4->CGraphicCtrl_data).offset_0xc != 1) {
        CGraphicCtrl::__AdjustShow(pCVar4,1);
        (pCVar4->CGraphicCtrl_data).offset_0xc = 1;
      }
      CGraphicCtrl::PlayCtrl((CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x1c,1);
    }
    iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x14;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 400) = 1;
    }
    iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x18;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 400) = 1;
    }
  }
  else if (uVar1 < 2) goto LAB_600107e9;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x6 = (this->CGraphicCtrl_ScrollBar_data).offset_0xc;
LAB_60010843:
  iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x10) != 0)) &&
     (sVar3 = (this->CGraphicCtrl_ScrollBar_data).offset_0xa,
     (this->CGraphicCtrl_ScrollBar_data).offset_0x4 != sVar3)) {
    (this->CGraphicCtrl_ScrollBar_data).offset_0x4 = sVar3;
  }
  return 0;
}



/* ---- scalar_deleting_destructor @ 60010870 size=91 ---- */

CGraphicCtrl * __thiscall
CGraphicCtrl_ScrollBar::scalar_deleting_destructor(CGraphicCtrl_ScrollBar *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGraphicCtrl_ScrollBar::~CGraphicCtrl_ScrollBar */
    this->vftablePtr = &_vftable_;
    CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_ScrollBar_data.offset_0x1c;
  _eh_vector_destructor_iterator_
            (this,0x18c,this[-1].CGraphicCtrl_ScrollBar_data.offset_0x1c,~CGraphicCtrl_ScrollBar);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl *)puVar1;
}



/* ---- InitScrollBar @ 600108d0 size=1068 ---- */

/* public: int __thiscall CGraphicCtrl_ScrollBar::InitScrollBar(char *,char *,char *,unsigned short)
    */

int __thiscall
CGraphicCtrl_ScrollBar::InitScrollBar
          (CGraphicCtrl_ScrollBar *this,char *param_1,char *param_2,char *param_3,ushort param_4)

{
  undefined4 *puVar1;
  CGraphicCtrl *pCVar2;
  ushort uVar3;
  CGraphicCtrl_PushBtn *pCVar4;
  int iVar5;
  __CGraphicCtrl_ScrollBar_Bar *p_Var6;
  int iVar7;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar3 = param_4;
  _param_4 = (uint)param_4;
                    /* 0x108d0  258  ?InitScrollBar@CGraphicCtrl_ScrollBar@@QAEHPAD00G@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016c11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)(this->CGraphicCtrl_ScrollBar_data).offset_0x14;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,DAT_600259a8 ^ (int)register0x00000010 - 0x28U);
    (this->CGraphicCtrl_ScrollBar_data).offset_0x14 = 0;
  }
  puVar1 = (undefined4 *)(this->CGraphicCtrl_ScrollBar_data).offset_0x18;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    (this->CGraphicCtrl_ScrollBar_data).offset_0x18 = 0;
  }
  puVar1 = (undefined4 *)(this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    (this->CGraphicCtrl_ScrollBar_data).offset_0x1c = 0;
  }
  iVar7 = 0;
  uStack_18 = 0;
  (this->CGraphicCtrl_ScrollBar_data).offset_0x0 = uVar3;
  if (param_1 != (char *)0x0) {
    pCVar4 = operator_new(0x1a4);
    uStack_4 = 0;
    if (pCVar4 == (CGraphicCtrl_PushBtn *)0x0) {
      pCVar4 = (CGraphicCtrl_PushBtn *)0x0;
    }
    else {
                    /* inlined constructor:
                       CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::__CGraphicCtrl_ScrollBar_Dn
                       inlined constructor:
                       CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::__CGraphicCtrl_ScrollBar_Up
                        */
      CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(pCVar4);
      pCVar4->vftablePtr = (CGraphicCtrl_PushBtn_vftable *)&__CGraphicCtrl_ScrollBar_Up::_vftable_;
    }
    uStack_4 = 0xffffffff;
    (this->CGraphicCtrl_ScrollBar_data).offset_0x14 = pCVar4;
    if (pCVar4 == (CGraphicCtrl_PushBtn *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar7 = (*pCVar4->vftablePtr->CreateGraphicCtrl)(pCVar4,(int *)param_1,0xfffe,0,0xff0000,1);
    if (iVar7 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar7 = CGraphicCtrl::AddChild
                      ((CGraphicCtrl *)this,
                       (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x14,'\0',
                       (CGraphicCtrl *)0x0);
    if (iVar7 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x14;
    iVar7 = *(int *)(iVar5 + 0xd8);
    if (0 < *(int *)(iVar5 + 0xd4)) {
      uStack_18 = *(int *)(iVar5 + 0xd4);
    }
    (this->CGraphicCtrl_ScrollBar_data).offset_0x10 = iVar7;
    (this->CGraphicCtrl_ScrollBar_data).offset_0x0 =
         (this->CGraphicCtrl_ScrollBar_data).offset_0x0 - (short)*(undefined4 *)(iVar5 + 0xd8);
    *(undefined4 *)(iVar5 + 0x19c) = 1;
  }
  if (param_2 != (char *)0x0) {
    pCVar4 = operator_new(0x1a4);
    uStack_4 = 1;
    if (pCVar4 == (CGraphicCtrl_PushBtn *)0x0) {
      pCVar4 = (CGraphicCtrl_PushBtn *)0x0;
    }
    else {
      CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(pCVar4);
      pCVar4->vftablePtr = (CGraphicCtrl_PushBtn_vftable *)&__CGraphicCtrl_ScrollBar_Dn::_vftable_;
    }
    uStack_4 = 0xffffffff;
    (this->CGraphicCtrl_ScrollBar_data).offset_0x18 = pCVar4;
    if (pCVar4 == (CGraphicCtrl_PushBtn *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar5 = (*pCVar4->vftablePtr->CreateGraphicCtrl)(pCVar4,(int *)param_2,0xfffe,0,0xff0000,1);
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar5 = CGraphicCtrl::AddChild
                      ((CGraphicCtrl *)this,
                       (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x18,'\0',
                       (CGraphicCtrl *)0x0);
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x18;
    iVar7 = iVar7 + *(int *)(iVar5 + 0xd8);
    if (uStack_18 < *(int *)(iVar5 + 0xd4)) {
      uStack_18 = *(int *)(iVar5 + 0xd4);
    }
    (this->CGraphicCtrl_ScrollBar_data).offset_0x0 =
         (this->CGraphicCtrl_ScrollBar_data).offset_0x0 - (short)*(undefined4 *)(iVar5 + 0xd8);
    *(undefined4 *)(iVar5 + 0x19c) = 1;
  }
  if (param_3 != (char *)0x0) {
    p_Var6 = operator_new(0x1bc);
    uStack_4 = 2;
    if (p_Var6 == (__CGraphicCtrl_ScrollBar_Bar *)0x0) {
      p_Var6 = (__CGraphicCtrl_ScrollBar_Bar *)0x0;
    }
    else {
      p_Var6 = __CGraphicCtrl_ScrollBar_Bar::__CGraphicCtrl_ScrollBar_Bar(p_Var6);
    }
    uStack_4 = 0xffffffff;
    (this->CGraphicCtrl_ScrollBar_data).offset_0x1c = p_Var6;
    if (p_Var6 == (__CGraphicCtrl_ScrollBar_Bar *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar5 = (*p_Var6->vftablePtr->CreateGraphicCtrl)(p_Var6,(int *)param_3,0xfffe,0,0xff0000,1);
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar5 = CGraphicCtrl::AddChild
                      ((CGraphicCtrl *)this,
                       (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x1c,'\0',
                       (CGraphicCtrl *)0x0);
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar5 = (this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
    iVar7 = iVar7 + *(int *)(iVar5 + 0xd8);
    if (uStack_18 < *(int *)(iVar5 + 0xd4)) {
      uStack_18 = *(int *)(iVar5 + 0xd4);
    }
    (this->CGraphicCtrl_ScrollBar_data).offset_0x0 =
         (this->CGraphicCtrl_ScrollBar_data).offset_0x0 - (short)*(undefined4 *)(iVar5 + 0xd8);
    *(undefined4 *)(iVar5 + 0x19c) = 1;
  }
  if ((uStack_18 < 2) ||
     (iVar7 = CHgDummyCtrl::CHgDummyCtrl__CreateGraphicCtrl
                        ((CHgDummyCtrl *)this,uStack_18,_param_4 - iVar7 & 0xffff,0xffffffff,0,0,0,1
                        ), iVar7 == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  pCVar2 = (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x14;
  if (pCVar2 != (CGraphicCtrl *)0x0) {
    CGraphicCtrl::SetPos(pCVar2,0,0);
    CGraphicCtrl::PlayCtrl((CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x14,1);
    CGraphicCtrl::ShowCtrl((CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x14,1);
    *(undefined4 *)((this->CGraphicCtrl_ScrollBar_data).offset_0x14 + 400) = 0;
  }
  pCVar2 = (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x18;
  if (pCVar2 != (CGraphicCtrl *)0x0) {
    CGraphicCtrl::SetPos(pCVar2,0,(uint)uVar3 - (pCVar2->CGraphicCtrl_data).offset_0xd4);
    CGraphicCtrl::PlayCtrl((CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x18,1);
    CGraphicCtrl::ShowCtrl((CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x18,1);
    *(undefined4 *)((this->CGraphicCtrl_ScrollBar_data).offset_0x18 + 400) = 0;
  }
  pCVar2 = (CGraphicCtrl *)(this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
  if (pCVar2 != (CGraphicCtrl *)0x0) {
    iVar7 = (this->CGraphicCtrl_ScrollBar_data).offset_0x14;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 0xd8);
    }
    CGraphicCtrl::SetPos(pCVar2,0,iVar7);
  }
  (this->CGraphicCtrl_ScrollBar_data).offset_0x2 = uVar3;
  ExceptionList = local_c;
  return 1;
}



/* ---- CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::OnBtnPushed @ 60010d00 size=74 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::OnBtnPushed(void) */

void __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::
CGraphicCtrl_ScrollBar____CGraphicCtrl_ScrollBar_Bar__OnBtnPushed
          (__CGraphicCtrl_ScrollBar_Bar *this)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  ulonglong uVar2;
  ulonglong uVar3;
  
                    /* 0x10d00  297
                       ?OnBtnPushed@__CGraphicCtrl_ScrollBar_Bar@CGraphicCtrl_ScrollBar@@UAEXXZ */
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x8 = _s_CursorPos;
  uVar1 = DAT_60025af0;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0xc = DAT_60025af0;
  uVar2 = FUN_60015470(uVar1,in_EDX);
  uVar3 = FUN_60015470(extraout_ECX,(int)(uVar2 >> 0x20));
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x10 = (int)uVar2;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x14 = (int)uVar3;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x4 =
       (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x2;
  return;
}



/* ---- CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::OnBtnDrag @ 60010d50 size=288 ---- */

/* public: virtual void __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::OnBtnDrag(void) */

void __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::
CGraphicCtrl_ScrollBar____CGraphicCtrl_ScrollBar_Bar__OnBtnDrag(__CGraphicCtrl_ScrollBar_Bar *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 in_FPUControlWord;
  ulonglong uVar4;
  short local_8;
  
                    /* 0x10d50  293
                       ?OnBtnDrag@__CGraphicCtrl_ScrollBar_Bar@CGraphicCtrl_ScrollBar@@UAEXXZ */
  iVar2 = (this->CGraphicCtrl_data).offset_0xd8;
  sVar1 = (*(short *)&(this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x14 -
          *(short *)&(this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0xc) + (short)DAT_60025af0;
  (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x2 = sVar1;
  if ((int)sVar1 < *(int *)(iVar2 + 0x178)) {
    (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x2 = *(undefined2 *)(iVar2 + 0x178);
  }
  iVar3 = (uint)*(ushort *)(iVar2 + 0x168) + *(int *)(iVar2 + 0x178);
  if (iVar3 <= (short)(this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x2) {
    sVar1 = *(short *)(iVar2 + 0x178) + *(ushort *)(iVar2 + 0x168) + -1;
    iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),sVar1);
    (this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x2 = sVar1;
  }
  uVar4 = FUN_60015470(iVar2,iVar3);
  CGraphicCurve::SetPosForce
            ((CGraphicCurve *)&(this->CGraphicCtrl_data).field_0x24,(float)(int)uVar4,
             (float)(int)(short)(this->__CGraphicCtrl_ScrollBar_Bar_data).offset_0x2);
  iVar2 = (this->CGraphicCtrl_data).offset_0xd8;
  sVar1 = *(short *)(iVar2 + 0x172);
  local_8 = (short)(int)ROUND((((float10)(int)(short)(this->__CGraphicCtrl_ScrollBar_Bar_data).
                                                     offset_0x2 - (float10)*(int *)(iVar2 + 0x178))
                              * (float10)*(ushort *)(iVar2 + 0x174)) /
                              (float10)*(ushort *)(iVar2 + 0x168));
  *(short *)(iVar2 + 0x172) = local_8;
  if (sVar1 != local_8) {
    (**(code **)(**(int **)(iVar2 + 0xdc) + 0x2c))(0xff08,in_FPUControlWord);
  }
  return;
}



/* ---- OnUp @ 60010e70 size=148 ---- */

/* public: void __thiscall CGraphicCtrl_ScrollBar::OnUp(void) */

void __thiscall CGraphicCtrl_ScrollBar::OnUp(CGraphicCtrl_ScrollBar *this)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_EDX;
  ulonglong uVar4;
  
                    /* 0x10e70  340  ?OnUp@CGraphicCtrl_ScrollBar@@QAEXXZ */
  sVar1 = (this->CGraphicCtrl_ScrollBar_data).offset_0xa;
  if (sVar1 != 0) {
    (this->CGraphicCtrl_ScrollBar_data).offset_0xa = sVar1 + -1;
  }
  iVar3 = (this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
  if ((iVar3 != 0) && (uVar2 = (this->CGraphicCtrl_ScrollBar_data).offset_0xc, 1 < uVar2)) {
    uVar4 = FUN_60015470(this,in_EDX);
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)(iVar3 + 0x28),(float)(int)uVar4,
               (float)((int)((uint)(ushort)(this->CGraphicCtrl_ScrollBar_data).offset_0x0 *
                            (uint)(ushort)(this->CGraphicCtrl_ScrollBar_data).offset_0xa) /
                       (int)(uVar2 - 1) + (this->CGraphicCtrl_ScrollBar_data).offset_0x10));
  }
  (**(code **)(*(int *)(this->CGraphicCtrl_data).offset_0xd8 + 0x2c))(0xff08);
  return;
}



/* ---- OnDn @ 60010f10 size=152 ---- */

/* public: void __thiscall CGraphicCtrl_ScrollBar::OnDn(void) */

void __thiscall CGraphicCtrl_ScrollBar::OnDn(CGraphicCtrl_ScrollBar *this)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  
                    /* 0x10f10  305  ?OnDn@CGraphicCtrl_ScrollBar@@QAEXXZ */
  uVar2 = (this->CGraphicCtrl_ScrollBar_data).offset_0xc;
  iVar1 = uVar2 - 1;
  uVar3 = (this->CGraphicCtrl_ScrollBar_data).offset_0xa;
  if ((int)(uint)uVar3 < iVar1) {
    (this->CGraphicCtrl_ScrollBar_data).offset_0xa = uVar3 + 1;
  }
  iVar4 = (this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
  if ((iVar4 != 0) && (1 < uVar2)) {
    uVar5 = FUN_60015470((uint)uVar2,(uint)uVar3);
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)(iVar4 + 0x28),(float)(int)uVar5,
               (float)((int)((uint)(ushort)(this->CGraphicCtrl_ScrollBar_data).offset_0x0 *
                            (uint)(ushort)(this->CGraphicCtrl_ScrollBar_data).offset_0xa) / iVar1 +
                      (this->CGraphicCtrl_ScrollBar_data).offset_0x10));
  }
  (**(code **)(*(int *)(this->CGraphicCtrl_data).offset_0xd8 + 0x2c))(0xff08);
  return;
}



/* ---- RePositionBar @ 60010fb0 size=133 ---- */

/* public: void __thiscall CGraphicCtrl_ScrollBar::RePositionBar(void) */

void __thiscall CGraphicCtrl_ScrollBar::RePositionBar(CGraphicCtrl_ScrollBar *this)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_EDX;
  ulonglong uVar3;
  
                    /* 0x10fb0  367  ?RePositionBar@CGraphicCtrl_ScrollBar@@QAEXXZ */
  if (((this->CGraphicCtrl_ScrollBar_data).offset_0x1c != 0) &&
     (uVar1 = (this->CGraphicCtrl_ScrollBar_data).offset_0xc, 1 < uVar1)) {
    iVar2 = (this->CGraphicCtrl_ScrollBar_data).offset_0x1c;
    uVar3 = FUN_60015470(this,in_EDX);
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)(iVar2 + 0x28),(float)(int)uVar3,
               (float)((int)((uint)(ushort)(this->CGraphicCtrl_ScrollBar_data).offset_0xa *
                            (uint)(ushort)(this->CGraphicCtrl_ScrollBar_data).offset_0x0) /
                       (int)(uVar1 - 1) + (this->CGraphicCtrl_ScrollBar_data).offset_0x10));
  }
  (**(code **)(*(int *)(this->CGraphicCtrl_data).offset_0xd8 + 0x2c))(0xff08);
  return;
}



/* ---- CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::OnBtnPushed @ 60011040 size=11 ---- */

/* public: virtual void __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::OnBtnPushed(void) */

void __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::
CGraphicCtrl_ScrollBar____CGraphicCtrl_ScrollBar_Up__OnBtnPushed(__CGraphicCtrl_ScrollBar_Up *this)

{
                    /* 0x11040  299
                       ?OnBtnPushed@__CGraphicCtrl_ScrollBar_Up@CGraphicCtrl_ScrollBar@@UAEXXZ */
  OnUp((CGraphicCtrl_ScrollBar *)(this->CGraphicCtrl_data).offset_0xd8);
  return;
}



/* ---- CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::OnBtnPushed @ 60011050 size=11 ---- */

/* public: virtual void __thiscall
   CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::OnBtnPushed(void) */

void __thiscall
CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::
CGraphicCtrl_ScrollBar____CGraphicCtrl_ScrollBar_Dn__OnBtnPushed(__CGraphicCtrl_ScrollBar_Dn *this)

{
                    /* 0x11050  298
                       ?OnBtnPushed@__CGraphicCtrl_ScrollBar_Dn@CGraphicCtrl_ScrollBar@@UAEXXZ */
  OnDn((CGraphicCtrl_ScrollBar *)(this->CGraphicCtrl_data).offset_0xd8);
  return;
}



/* ---- vfunction1 @ 60011060 size=85 ---- */

CGraphicCtrl_PushBtn * __thiscall
CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::vfunction1
          (__CGraphicCtrl_SlideBar_Thumb *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    CGraphicCtrl_PushBtn::~CGraphicCtrl_PushBtn((CGraphicCtrl_PushBtn *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_PushBtn *)this;
  }
  puVar1 = &this[-1].__CGraphicCtrl_SlideBar_Thumb_data.offset_0xc;
  _eh_vector_destructor_iterator_
            (this,0x1b4,this[-1].__CGraphicCtrl_SlideBar_Thumb_data.offset_0xc,
             CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::~__CGraphicCtrl_ScrollBar_Bar);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_PushBtn *)puVar1;
}



/* ---- CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::OnBtnDrag @ 600110c0 size=18 ---- */

/* public: virtual void __thiscall
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::OnBtnDrag(void) */

void __thiscall
CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::
CGraphicCtrl_SlideBar____CGraphicCtrl_SlideBar_Thumb__OnBtnDrag(__CGraphicCtrl_SlideBar_Thumb *this)

{
  int *piVar1;
  
                    /* 0x110c0  294
                       ?OnBtnDrag@__CGraphicCtrl_SlideBar_Thumb@CGraphicCtrl_SlideBar@@UAEXXZ */
  piVar1 = (int *)(this->CGraphicCtrl_data).offset_0xd8;
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x600110cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x34))();
  return;
}



/* ---- CGraphicCtrl_SlideBar @ 600110e0 size=122 ---- */

/* public: __thiscall CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar(void) */

CGraphicCtrl_SlideBar * __thiscall
CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar(CGraphicCtrl_SlideBar *this)

{
                    /* 0x110e0  13  ??0CGraphicCtrl_SlideBar@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_SlideBar_data).offset_0x0 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x8 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x18 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x1c = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x20 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x24 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0xc = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x10 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x28 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x30 = (int *)0x0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x34 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x38 = 0;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_SlideBar_data).offset_0x4 = 1;
  (this->CGraphicCtrl_SlideBar_data).offset_0x14 = 100;
  (this->CGraphicCtrl_SlideBar_data).offset_0x2c = 0xfffe;
  return this;
}



/* ---- _DestroyBgImg @ 60011160 size=63 ---- */

/* protected: void __thiscall CGraphicCtrl_SlideBar::_DestroyBgImg(void) */

void __thiscall CGraphicCtrl_SlideBar::_DestroyBgImg(CGraphicCtrl_SlideBar *this)

{
  int **ppiVar1;
  int iVar2;
  
                    /* 0x11160  485  ?_DestroyBgImg@CGraphicCtrl_SlideBar@@IAEXXZ */
  if ((this->CGraphicCtrl_data).offset_0x2 == '\0') {
    ppiVar1 = &(this->CGraphicCtrl_SlideBar_data).offset_0x30;
    iVar2 = 2;
    do {
      if (*ppiVar1 != (int *)0x0) {
        (**(code **)(**ppiVar1 + 0x14))();
        if (*ppiVar1 != (int *)0x0) {
          (**(code **)**ppiVar1)(1);
        }
        *ppiVar1 = (int *)0x0;
      }
      ppiVar1 = ppiVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



/* ---- CGraphicCtrl_SlideBar::_PostMsg @ 600111a0 size=34 ---- */

/* protected: virtual void __thiscall CGraphicCtrl_SlideBar::_PostMsg(unsigned int) */

void __thiscall
CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar___PostMsg(CGraphicCtrl_SlideBar *this,uint param_1)

{
  HWND hWnd;
  
                    /* 0x111a0  488  ?_PostMsg@CGraphicCtrl_SlideBar@@MAEXI@Z */
  hWnd = (HWND)(this->CGraphicCtrl_SlideBar_data).offset_0x28;
  if (hWnd != (HWND)0x0) {
    PostMessageA(hWnd,param_1,(this->CGraphicCtrl_SlideBar_data).offset_0x2c,0);
  }
  return;
}



/* ---- EnableWindow @ 600111d0 size=29 ---- */

/* public: void __thiscall CGraphicCtrl_SlideBar::EnableWindow(int) */

void __thiscall CGraphicCtrl_SlideBar::EnableWindow(CGraphicCtrl_SlideBar *this,int param_1)

{
  int iVar1;
  
                    /* 0x111d0  183  ?EnableWindow@CGraphicCtrl_SlideBar@@QAEXH@Z */
  (this->CGraphicCtrl_SlideBar_data).offset_0x4 = param_1;
  iVar1 = (this->CGraphicCtrl_SlideBar_data).offset_0x38;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 400) = param_1;
  }
  return;
}



/* ---- GetDecoration @ 600111f0 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_Text::GetDecoration(void) */

int __thiscall CGraphicCtrl_Text::GetDecoration(CGraphicCtrl_Text *this)

{
                    /* 0x111f0  211  ?GetDecoration@CGraphicCtrl_Text@@QAEHXZ
                       0x111f0  285  ?IsWindowEnabled@CGraphicCtrl_SlideBar@@QAEHXZ */
  return (this->CGraphicCtrl_Text_data).offset_0x4;
}



/* ---- SetRange @ 60011200 size=79 ---- */

/* public: int __thiscall CGraphicCtrl_SlideBar::SetRange(unsigned long,unsigned long) */

int __thiscall
CGraphicCtrl_SlideBar::SetRange(CGraphicCtrl_SlideBar *this,ulong param_1,ulong param_2)

{
  int iVar1;
  
                    /* 0x11200  426  ?SetRange@CGraphicCtrl_SlideBar@@QAEHKK@Z */
  if (param_2 <= param_1) {
    return 0;
  }
  (this->CGraphicCtrl_SlideBar_data).offset_0x18 = param_1;
  (this->CGraphicCtrl_SlideBar_data).offset_0x14 = param_2;
  if ((this->CGraphicCtrl_SlideBar_data).offset_0x8 == 0) {
    (this->CGraphicCtrl_SlideBar_data).offset_0x1c = param_1;
    return param_2;
  }
  iVar1 = ((param_2 - param_1) * (this->CGraphicCtrl_SlideBar_data).offset_0x24) /
          (uint)(this->CGraphicCtrl_SlideBar_data).offset_0x20 + param_1;
  (this->CGraphicCtrl_SlideBar_data).offset_0x1c = iVar1;
  return iVar1;
}



/* ---- GetRange @ 60011250 size=27 ---- */

/* public: void __thiscall CGraphicCtrl_SlideBar::GetRange(unsigned long &,unsigned long &) */

void __thiscall
CGraphicCtrl_SlideBar::GetRange(CGraphicCtrl_SlideBar *this,ulong *param_1,ulong *param_2)

{
                    /* 0x11250  235  ?GetRange@CGraphicCtrl_SlideBar@@QAEXAAK0@Z */
  *param_1 = (this->CGraphicCtrl_SlideBar_data).offset_0x18;
  *param_2 = (this->CGraphicCtrl_SlideBar_data).offset_0x14;
  return;
}



/* ---- GetCurrentValue @ 60011270 size=7 ---- */

/* public: unsigned long __thiscall CGraphicCtrl_SlideBar::GetCurrentValue(void) */

ulong __thiscall CGraphicCtrl_SlideBar::GetCurrentValue(CGraphicCtrl_SlideBar *this)

{
                    /* 0x11270  207  ?GetCurrentValue@CGraphicCtrl_SlideBar@@QAEKXZ */
  return (this->CGraphicCtrl_SlideBar_data).offset_0x1c;
}



/* ---- CGraphicCtrl_SlideBar::Proc @ 60011280 size=90 ---- */

/* public: virtual int __thiscall CGraphicCtrl_SlideBar::Proc(unsigned long) */

int __thiscall
CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar__Proc(CGraphicCtrl_SlideBar *this,ulong param_1)

{
  CGraphicCtrl *this_00;
  int *piVar1;
  code *pcVar2;
  
                    /* 0x11280  358  ?Proc@CGraphicCtrl_SlideBar@@UAEHK@Z */
  this_00 = (CGraphicCtrl *)(this->CGraphicCtrl_SlideBar_data).offset_0x38;
  if (this_00 == (CGraphicCtrl *)0x0) {
    return 1;
  }
  if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
    CGraphicCtrl::__AdjustShow(this_00,1);
    (this_00->CGraphicCtrl_data).offset_0xc = 1;
  }
  piVar1 = (int *)(this->CGraphicCtrl_SlideBar_data).offset_0x38;
  if (piVar1[6] != 1) {
    pcVar2 = *(code **)(*piVar1 + 0x2c);
    piVar1[6] = 1;
    piVar1[0x49] = 0;
    (*pcVar2)(0xff03);
  }
  return 1;
}



/* ---- __CGraphicCtrl_SlideBar_Thumb @ 600112e0 size=46 ---- */

/* public: __thiscall
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::__CGraphicCtrl_SlideBar_Thumb(void) */

__CGraphicCtrl_SlideBar_Thumb * __thiscall
CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::__CGraphicCtrl_SlideBar_Thumb
          (__CGraphicCtrl_SlideBar_Thumb *this)

{
                    /* 0x112e0  32  ??0__CGraphicCtrl_SlideBar_Thumb@CGraphicCtrl_SlideBar@@QAE@XZ
                        */
  CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn((CGraphicCtrl_PushBtn *)this);
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0x0 = 0;
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0x8 = 0;
  this->vftablePtr = &_vftable_;
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0x4 = 0;
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0xc = 0;
  return this;
}



/* ---- CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::_AllocSelf @ 60011310 size=144 ---- */

/* public: virtual void * __thiscall
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::
CGraphicCtrl_SlideBar____CGraphicCtrl_SlideBar_Thumb___AllocSelf
          (__CGraphicCtrl_SlideBar_Thumb *this)

{
  CGraphicCtrl_PushBtn *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11310  484
                       ?_AllocSelf@__CGraphicCtrl_SlideBar_Thumb@CGraphicCtrl_SlideBar@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x1b4);
  local_4 = 0;
  if (this_00 == (CGraphicCtrl_PushBtn *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(this_00);
  this_00[1].vftablePtr = (CGraphicCtrl_PushBtn_vftable *)0x0;
  this_00[1].CGraphicCtrl_data.offset_0x4 = 0;
  this_00->vftablePtr = (CGraphicCtrl_PushBtn_vftable *)&_vftable_;
  this_00[1].CGraphicCtrl_data.offset_0x0 = 0;
  this_00[1].CGraphicCtrl_data.offset_0x1 = 0;
  this_00[1].CGraphicCtrl_data.offset_0x2 = 0;
  this_00[1].CGraphicCtrl_data.field_0x3 = 0;
  *(undefined4 *)&this_00[1].CGraphicCtrl_data.offset_0x8 = 0;
  ExceptionList = local_c;
  return this_00;
}



/* ---- CGraphicCtrl_SlideBar::_AllocSelf @ 600113a0 size=103 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_SlideBar::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar___AllocSelf(CGraphicCtrl_SlideBar *this)

{
  CGraphicCtrl_SlideBar *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x113a0  472  ?_AllocSelf@CGraphicCtrl_SlideBar@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1a4);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_SlideBar *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pCVar1 = CGraphicCtrl_SlideBar(pCVar1);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::OnBtnPushed @ 60011410 size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall
   CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::OnBtnPushed(void) */

void __thiscall
CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::
CGraphicCtrl_SlideBar____CGraphicCtrl_SlideBar_Thumb__OnBtnPushed
          (__CGraphicCtrl_SlideBar_Thumb *this)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  ulonglong uVar2;
  ulonglong uVar3;
  
                    /* 0x11410  300
                       ?OnBtnPushed@__CGraphicCtrl_SlideBar_Thumb@CGraphicCtrl_SlideBar@@UAEXXZ */
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0x0 = _s_CursorPos;
  uVar1 = DAT_60025af0;
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0x4 = DAT_60025af0;
  uVar2 = FUN_60015470(uVar1,in_EDX);
  uVar3 = FUN_60015470(extraout_ECX,(int)(uVar2 >> 0x20));
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0x8 = (int)uVar2;
  (this->__CGraphicCtrl_SlideBar_Thumb_data).offset_0xc = (int)uVar3;
  return;
}



/* ---- ~CGraphicCtrl_SlideBar @ 60011450 size=91 ---- */

/* public: virtual __thiscall CGraphicCtrl_SlideBar::~CGraphicCtrl_SlideBar(void) */

void __thiscall CGraphicCtrl_SlideBar::~CGraphicCtrl_SlideBar(CGraphicCtrl_SlideBar *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11450  49  ??1CGraphicCtrl_SlideBar@@UAE@XZ */
  puStack_8 = &LAB_60016c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  _DestroyBgImg(this);
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- CGraphicCtrl_SlideBar::_OnBtnDrag @ 600114b0 size=290 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual void __thiscall CGraphicCtrl_SlideBar::_OnBtnDrag(void) */

void __thiscall
CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar___OnBtnDrag(CGraphicCtrl_SlideBar *this)

{
  int iVar1;
  int iVar2;
  CGraphicCtrl_SlideBar_vftable *pCVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x114b0  487  ?_OnBtnDrag@CGraphicCtrl_SlideBar@@MAEXXZ */
  if ((this->CGraphicCtrl_SlideBar_data).offset_0x0 == 0) {
    iVar1 = (this->CGraphicCtrl_SlideBar_data).offset_0x38;
    iVar2 = (this->CGraphicCtrl_SlideBar_data).offset_0xc;
    uVar4 = ((*(int *)(iVar1 + 0x1ac) - *(int *)(iVar1 + 0x1a4)) - iVar2) + _s_CursorPos;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    uVar5 = (this->CGraphicCtrl_SlideBar_data).offset_0x20;
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)(iVar1 + 0x28),(float)(int)(iVar2 + uVar4),
               (float)(int)(this->CGraphicCtrl_SlideBar_data).offset_0x10);
    if ((this->CGraphicCtrl_SlideBar_data).offset_0x24 == uVar4) {
      return;
    }
    uVar5 = 0x114;
  }
  else {
    iVar1 = (this->CGraphicCtrl_SlideBar_data).offset_0x38;
    iVar2 = (this->CGraphicCtrl_SlideBar_data).offset_0xc;
    uVar4 = ((*(int *)(iVar1 + 0x1b0) - *(int *)(iVar1 + 0x1a8)) - iVar2) + DAT_60025af0;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    uVar5 = (this->CGraphicCtrl_SlideBar_data).offset_0x20;
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    uVar4 = uVar5 - uVar4;
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)(iVar1 + 0x28),
               (float)(int)(this->CGraphicCtrl_SlideBar_data).offset_0x10,
               (float)(int)((uVar5 - uVar4) + iVar2));
    if ((this->CGraphicCtrl_SlideBar_data).offset_0x24 == uVar4) {
      return;
    }
    uVar5 = 0x115;
  }
  iVar1 = (this->CGraphicCtrl_SlideBar_data).offset_0x18;
  pCVar3 = this->vftablePtr;
  (this->CGraphicCtrl_SlideBar_data).offset_0x24 = uVar4;
  (this->CGraphicCtrl_SlideBar_data).offset_0x1c =
       (((this->CGraphicCtrl_SlideBar_data).offset_0x14 - iVar1) * uVar4) /
       (uint)(this->CGraphicCtrl_SlideBar_data).offset_0x20 + iVar1;
  (*pCVar3->_PostMsg)(this,uVar5);
  return;
}



/* ---- SetCurrentValue @ 600115e0 size=265 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CGraphicCtrl_SlideBar::SetCurrentValue(unsigned long) */

int __thiscall CGraphicCtrl_SlideBar::SetCurrentValue(CGraphicCtrl_SlideBar *this,ulong param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
                    /* 0x115e0  390  ?SetCurrentValue@CGraphicCtrl_SlideBar@@QAEHK@Z */
  if (((this->CGraphicCtrl_SlideBar_data).offset_0x4 == 0) ||
     ((this->CGraphicCtrl_SlideBar_data).offset_0x8 == 0)) {
    return 0;
  }
  uVar1 = (this->CGraphicCtrl_SlideBar_data).offset_0x18;
  if ((param_1 < uVar1) || (uVar2 = (this->CGraphicCtrl_SlideBar_data).offset_0x14, uVar2 < param_1)
     ) {
    return 0;
  }
  (this->CGraphicCtrl_SlideBar_data).offset_0x1c = param_1;
  dVar3 = (double)(int)(param_1 - uVar1);
  iVar7 = (this->CGraphicCtrl_SlideBar_data).offset_0x20;
  if ((int)(param_1 - uVar1) < 0) {
    dVar3 = dVar3 + _PTR_600188d8;
  }
  iVar6 = uVar2 - uVar1;
  dVar5 = (double)iVar6;
  if (iVar6 < 0) {
    dVar5 = dVar5 + _PTR_600188d8;
  }
  dVar4 = (double)iVar7;
  if (iVar7 < 0) {
    dVar4 = dVar4 + _PTR_600188d8;
  }
  local_8 = (int)(longlong)ROUND(dVar4 * (dVar3 / dVar5));
  (this->CGraphicCtrl_SlideBar_data).offset_0x24 = local_8;
  if ((this->CGraphicCtrl_SlideBar_data).offset_0x0 == 0) {
    iVar7 = (this->CGraphicCtrl_SlideBar_data).offset_0x10;
    iVar6 = (this->CGraphicCtrl_SlideBar_data).offset_0xc + local_8;
  }
  else {
    iVar6 = (this->CGraphicCtrl_SlideBar_data).offset_0x10;
    iVar7 = ((this->CGraphicCtrl_SlideBar_data).offset_0xc - local_8) + iVar7;
  }
  CGraphicCtrl::SetPos((CGraphicCtrl *)(this->CGraphicCtrl_SlideBar_data).offset_0x38,iVar6,iVar7);
  return 1;
}



/* ---- SetSlideMargin @ 600116f0 size=147 ---- */

/* public: void __thiscall CGraphicCtrl_SlideBar::SetSlideMargin(int) */

void __thiscall CGraphicCtrl_SlideBar::SetSlideMargin(CGraphicCtrl_SlideBar *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
                    /* 0x116f0  437  ?SetSlideMargin@CGraphicCtrl_SlideBar@@QAEXH@Z */
  (this->CGraphicCtrl_SlideBar_data).offset_0xc = param_1;
  if ((this->CGraphicCtrl_SlideBar_data).offset_0x8 != 0) {
    uVar1 = (this->CGraphicCtrl_SlideBar_data).offset_0x20;
    iVar3 = uVar1 + param_1 * -2;
    uVar1 = (uint)((this->CGraphicCtrl_SlideBar_data).offset_0x24 * iVar3) / uVar1;
    (this->CGraphicCtrl_SlideBar_data).offset_0x20 = iVar3;
    (this->CGraphicCtrl_SlideBar_data).offset_0x24 = uVar1;
    if ((this->CGraphicCtrl_SlideBar_data).offset_0x0 == 0) {
      local_4 = (this->CGraphicCtrl_SlideBar_data).offset_0x10;
      iVar2 = uVar1 + param_1;
    }
    else {
      iVar2 = (this->CGraphicCtrl_SlideBar_data).offset_0x10;
      local_4 = (iVar3 - uVar1) + param_1;
    }
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)((this->CGraphicCtrl_SlideBar_data).offset_0x38 + 0x28),(float)iVar2
               ,(float)local_4);
  }
  return;
}



/* ---- SetThumbBtnMargin @ 60011790 size=121 ---- */

/* public: void __thiscall CGraphicCtrl_SlideBar::SetThumbBtnMargin(int) */

void __thiscall CGraphicCtrl_SlideBar::SetThumbBtnMargin(CGraphicCtrl_SlideBar *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x11790  444  ?SetThumbBtnMargin@CGraphicCtrl_SlideBar@@QAEXH@Z */
  (this->CGraphicCtrl_SlideBar_data).offset_0x10 = param_1;
  if ((this->CGraphicCtrl_SlideBar_data).offset_0x8 != 0) {
    if ((this->CGraphicCtrl_SlideBar_data).offset_0x0 == 0) {
      iVar1 = (this->CGraphicCtrl_SlideBar_data).offset_0x24 +
              (this->CGraphicCtrl_SlideBar_data).offset_0xc;
      iVar2 = param_1;
    }
    else {
      iVar2 = ((this->CGraphicCtrl_SlideBar_data).offset_0x20 -
              (this->CGraphicCtrl_SlideBar_data).offset_0x24) +
              (this->CGraphicCtrl_SlideBar_data).offset_0xc;
      iVar1 = param_1;
    }
    CGraphicCurve::SetPosForce
              ((CGraphicCurve *)((this->CGraphicCtrl_SlideBar_data).offset_0x38 + 0x28),(float)iVar1
               ,(float)iVar2);
  }
  return;
}



/* ---- CGraphicCtrl_SlideBar::DrawProc @ 60011810 size=104 ---- */

/* public: virtual int __thiscall CGraphicCtrl_SlideBar::DrawProc(class CRect &,class CRect &) */

int __thiscall
CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar__DrawProc
          (CGraphicCtrl_SlideBar *this,CRect *param_1,CRect *param_2)

{
  CHgImageBase *pCVar1;
  
                    /* 0x11810  172  ?DrawProc@CGraphicCtrl_SlideBar@@UAEHAAVCRect@@0@Z */
  if ((this->CGraphicCtrl_SlideBar_data).offset_0x4 == 0) {
    pCVar1 = (CHgImageBase *)(this->CGraphicCtrl_SlideBar_data).offset_0x34;
  }
  else {
    pCVar1 = (CHgImageBase *)(this->CGraphicCtrl_SlideBar_data).offset_0x30;
  }
  if (pCVar1 != (CHgImageBase *)0x0) {
    CHgImage::Draw((CHgImage *)CGraphicCtrl::s_pBackBuf,*(int *)param_2,*(int *)(param_2 + 4),pCVar1
                   ,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8) - *(int *)param_1,
                   *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4),
                   (uint)(byte)(this->CGraphicCtrl_data).offset_0x11f,
                   (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c);
  }
  return 1;
}



/* ---- scalar_deleting_destructor @ 60011880 size=85 ---- */

CGraphicCtrl_SlideBar * __thiscall
CGraphicCtrl_SlideBar::scalar_deleting_destructor(CGraphicCtrl_SlideBar *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_SlideBar(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_SlideBar *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_SlideBar_data.offset_0x38;
  _eh_vector_destructor_iterator_
            (this,0x1a4,this[-1].CGraphicCtrl_SlideBar_data.offset_0x38,~CGraphicCtrl_SlideBar);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_SlideBar *)puVar1;
}



/* ---- InitSlideBar @ 600118e0 size=916 ---- */

/* WARNING: Exceeded maximum restarts with more pending */
/* public: int __thiscall CGraphicCtrl_SlideBar::InitSlideBar(char *,char *,enum
   CGraphicCtrl_SlideBar::SLIDE_BAR_TYPE,unsigned long,struct HWND__ *,unsigned long) */

int __thiscall
CGraphicCtrl_SlideBar::InitSlideBar
          (CGraphicCtrl_SlideBar *this,char *param_1,char *param_2,SLIDE_BAR_TYPE param_3,
          ulong param_4,HWND__ *param_5,ulong param_6)

{
  undefined4 *puVar1;
  CHgDDB_vftable *pCVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  CHgDDB *this_00;
  CGraphicCtrl_PushBtn *this_01;
  int iVar7;
  int **ppiVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_76 [2];
  CHgDIB CStack_74;
  CHgDIB aCStack_70 [24];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x118e0  259
                       ?InitSlideBar@CGraphicCtrl_SlideBar@@QAEHPAD0W4SLIDE_BAR_TYPE@1@KPAUHWND__@@K@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016c7f;
  local_c = ExceptionList;
  uVar4 = DAT_600259a8 ^ (uint)(auStack_76 + -0x12);
  ExceptionList = &local_c;
  (this->CGraphicCtrl_SlideBar_data).offset_0x28 = param_5;
  puVar1 = (undefined4 *)(this->CGraphicCtrl_SlideBar_data).offset_0x38;
  iVar7 = 0;
  (this->CGraphicCtrl_SlideBar_data).offset_0x2c = param_4;
  (this->CGraphicCtrl_SlideBar_data).offset_0x0 = param_3;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar4);
    (this->CGraphicCtrl_SlideBar_data).offset_0x38 = 0;
  }
  _DestroyBgImg(this);
  CHgDIB::CHgDIB(aCStack_70);
  uStack_4 = 0;
  cVar3 = (*(aCStack_70[0].vftablePtr)->Create)(param_1);
  if (cVar3 == '\0') {
    puStack_8 = (undefined1 *)0xffffffff;
    CHgDIB::~CHgDIB(&CStack_74);
    ExceptionList = pvStack_10;
    return 0;
  }
  CHgImageBase::SetTileNum((CHgImageBase *)&CStack_74,2);
  uVar13 = 1;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0xffffffff;
  iVar5 = CHgImageBase::GetHeight((CHgImageBase *)&CStack_74);
  iVar6 = CHgImageBase::GetWidth((CHgImageBase *)&CStack_74);
  iVar5 = CHgDummyCtrl::CHgDummyCtrl__CreateGraphicCtrl
                    ((CHgDummyCtrl *)this,iVar6 / 2,iVar5,uVar9,uVar10,uVar11,uVar12,uVar13);
  if (iVar5 == 0) {
LAB_60011aff:
    puStack_8 = (undefined1 *)0xffffffff;
    CHgDIB::~CHgDIB(&CStack_74);
    iVar7 = 0;
  }
  else {
    ppiVar8 = &(this->CGraphicCtrl_SlideBar_data).offset_0x30;
    do {
      this_00 = operator_new(0x38);
      puStack_8._0_1_ = 1;
      if (this_00 == (CHgDDB *)0x0) {
        this_00 = (CHgDDB *)0x0;
      }
      else {
        CHgDDB::CHgDDB(this_00);
                    /* inlined constructor: CHgDDB::CHgDDB */
        this_00->vftablePtr = &CHgDDB::vftable;
      }
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      *ppiVar8 = (int *)this_00;
      if (this_00 == (CHgDDB *)0x0) {
LAB_60011af9:
        CHgDIB::Destroy(&CStack_74);
        goto LAB_60011aff;
      }
      pCVar2 = this_00->vftablePtr;
      iVar5 = CHgImageBase::GetHeight((CHgImageBase *)&CStack_74);
      iVar6 = CHgImageBase::GetWidth((CHgImageBase *)&CStack_74);
      cVar3 = (*pCVar2->Create)(iVar6 / 2,iVar5);
      if (cVar3 == '\0') goto LAB_60011af9;
      if (param_5 != (HWND__ *)0xffffffff) {
        CHgImageBase::SetTransparentColor((CHgImageBase *)*ppiVar8,(ulong)param_5);
      }
      CHgImage::DrawTile((CHgImage *)*ppiVar8,0,0,(CHgImage *)&CStack_74,iVar7,0x100,0);
      iVar7 = iVar7 + 1;
      ppiVar8 = ppiVar8 + 1;
    } while (iVar7 < 2);
    CHgDIB::Destroy(&CStack_74);
    if (param_1 != (char *)0x0) {
      this_01 = operator_new(0x1b4);
      puStack_8._0_1_ = 2;
      if (this_01 == (CGraphicCtrl_PushBtn *)0x0) {
        this_01 = (CGraphicCtrl_PushBtn *)0x0;
      }
      else {
                    /* inlined constructor:
                       CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::__CGraphicCtrl_SlideBar_Thumb
                        */
        CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(this_01);
        this_01->vftablePtr =
             (CGraphicCtrl_PushBtn_vftable *)&__CGraphicCtrl_SlideBar_Thumb::_vftable_;
        this_01[1].vftablePtr = (CGraphicCtrl_PushBtn_vftable *)0x0;
        this_01[1].CGraphicCtrl_data.offset_0x0 = 0;
        this_01[1].CGraphicCtrl_data.offset_0x1 = 0;
        this_01[1].CGraphicCtrl_data.offset_0x2 = 0;
        this_01[1].CGraphicCtrl_data.field_0x3 = 0;
        this_01[1].CGraphicCtrl_data.offset_0x4 = 0;
        *(undefined4 *)&this_01[1].CGraphicCtrl_data.offset_0x8 = 0;
      }
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      (this->CGraphicCtrl_SlideBar_data).offset_0x38 = this_01;
      if (((this_01 == (CGraphicCtrl_PushBtn *)0x0) ||
          (iVar7 = (*this_01->vftablePtr->CreateGraphicCtrl)
                             (this_01,(int *)param_1,0xfffe,0,param_5,1), iVar7 == 0)) ||
         (iVar7 = CGraphicCtrl::AddChild
                            ((CGraphicCtrl *)this,
                             (CGraphicCtrl *)(this->CGraphicCtrl_SlideBar_data).offset_0x38,'\0',
                             (CGraphicCtrl *)0x0), iVar7 == 0)) goto LAB_60011aff;
    }
    uVar13 = 1;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0xffffffff;
    iVar7 = CHgImageBase::GetHeight((CHgImageBase *)(this->CGraphicCtrl_SlideBar_data).offset_0x30);
    iVar5 = CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_SlideBar_data).offset_0x30);
    iVar7 = CHgDummyCtrl::CHgDummyCtrl__CreateGraphicCtrl
                      ((CHgDummyCtrl *)this,iVar5,iVar7,uVar9,uVar10,uVar11,uVar12,uVar13);
    if (iVar7 == 0) {
      puStack_8 = (undefined1 *)0xffffffff;
      CHgDIB::~CHgDIB(&CStack_74);
      iVar7 = 0;
    }
    else {
      iVar7 = (this->CGraphicCtrl_SlideBar_data).offset_0x38;
      if ((this->CGraphicCtrl_SlideBar_data).offset_0x0 == 0) {
        iVar7 = *(int *)(iVar7 + 0xd4);
        iVar5 = CHgImageBase::GetWidth
                          ((CHgImageBase *)(this->CGraphicCtrl_SlideBar_data).offset_0x30);
      }
      else {
        iVar7 = *(int *)(iVar7 + 0xd8);
        iVar5 = CHgImageBase::GetHeight
                          ((CHgImageBase *)(this->CGraphicCtrl_SlideBar_data).offset_0x30);
      }
      (this->CGraphicCtrl_SlideBar_data).offset_0x20 =
           (iVar5 + (this->CGraphicCtrl_SlideBar_data).offset_0xc * -2) - iVar7;
      if ((this->CGraphicCtrl_SlideBar_data).offset_0x18 ==
          (this->CGraphicCtrl_SlideBar_data).offset_0x14) {
        (this->CGraphicCtrl_SlideBar_data).offset_0x18 = 0;
        (this->CGraphicCtrl_SlideBar_data).offset_0x14 =
             (this->CGraphicCtrl_SlideBar_data).offset_0x20;
      }
      (this->CGraphicCtrl_SlideBar_data).offset_0x8 = 1;
      SetCurrentValue(this,(this->CGraphicCtrl_SlideBar_data).offset_0x18);
      puStack_8 = (undefined1 *)0xffffffff;
      CHgDIB::~CHgDIB(&CStack_74);
      iVar7 = 1;
    }
  }
  ExceptionList = pvStack_10;
  return iVar7;
}



/* ---- GetSlideType @ 60011c80 size=7 ---- */

/* public: int __thiscall CGraphicCtrl_SlideBar::GetSlideType(void) */

int __thiscall CGraphicCtrl_SlideBar::GetSlideType(CGraphicCtrl_SlideBar *this)

{
                    /* 0x11c80  241  ?GetSlideType@CGraphicCtrl_SlideBar@@QAEHXZ
                       0x11c80  247  ?GetTileDIB@CGraphicCtrl_Tile@@QBEPAVCHgDDB@@XZ */
  return (this->CGraphicCtrl_SlideBar_data).offset_0x0;
}



/* ---- CGraphicCtrl_Tile @ 60011c90 size=38 ---- */

/* public: __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile(void) */

CGraphicCtrl_Tile * __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile(CGraphicCtrl_Tile *this)

{
                    /* 0x11c90  16  ??0CGraphicCtrl_Tile@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_Tile_data).offset_0x0 = (undefined4 *)0x0;
  (this->CGraphicCtrl_Tile_data).offset_0x4 = 0;
  (this->CGraphicCtrl_Tile_data).offset_0x5 = 0;
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- CGraphicCtrl_Tile::CreateInstance @ 60011cc0 size=38 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_Tile::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_Tile::CGraphicCtrl_Tile__CreateInstance(CGraphicCtrl_Tile *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0x11cc0  159  ?CreateInstance@CGraphicCtrl_Tile@@UAEPAVCGraphicCtrl@@XZ */
  pCVar1 = CGraphicCtrl::CGraphicCtrl__CreateInstance((CGraphicCtrl *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(undefined4 **)(pCVar1 + 0x168) = (this->CGraphicCtrl_Tile_data).offset_0x0;
    pCVar1[0x16c] = (CGraphicCtrl)(this->CGraphicCtrl_Tile_data).offset_0x4;
  }
  return pCVar1;
}



/* ---- CGraphicCtrl_Tile::_AllocSelf @ 60011cf0 size=135 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Tile::_AllocSelf(void) */

void * __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile___AllocSelf(CGraphicCtrl_Tile *this)

{
  CList<CGraphicCtrl*,CGraphicCtrl*> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11cf0  475  ?_AllocSelf@CGraphicCtrl_Tile@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016cab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x170);
  local_4 = 0;
  if (this_00 == (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(this_00);
  this_00->vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)&_vftable_;
  this_00[0xf].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
  *(undefined1 *)&this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = 0;
  *(undefined1 *)((int)&this_00[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 + 1) = 0;
  ExceptionList = local_c;
  return this_00;
}



/* ---- ~CGraphicCtrl_Tile @ 60011d80 size=120 ---- */

/* public: virtual __thiscall CGraphicCtrl_Tile::~CGraphicCtrl_Tile(void) */

void __thiscall CGraphicCtrl_Tile::~CGraphicCtrl_Tile(CGraphicCtrl_Tile *this)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11d80  52  ??1CGraphicCtrl_Tile@@UAE@XZ */
  puStack_8 = &LAB_60016c38;
  local_c = ExceptionList;
  uVar2 = DAT_600259a8 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  if ((this->CGraphicCtrl_data).offset_0x2 != '\x01') {
    puVar1 = (this->CGraphicCtrl_Tile_data).offset_0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1,uVar2);
    }
    (this->CGraphicCtrl_Tile_data).offset_0x0 = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- CGraphicCtrl_Tile::DrawProc @ 60011e00 size=128 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Tile::DrawProc(class CRect &,class CRect &) */

int __thiscall
CGraphicCtrl_Tile::CGraphicCtrl_Tile__DrawProc
          (CGraphicCtrl_Tile *this,CRect *param_1,CRect *param_2)

{
  CHgImageBase *pCVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x11e00  173  ?DrawProc@CGraphicCtrl_Tile@@UAEHAAVCRect@@0@Z */
  pCVar1 = (CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0;
  if (pCVar1 != (CHgImageBase *)0x0) {
    uVar2 = (uint)(byte)(this->CGraphicCtrl_Tile_data).offset_0x4;
    uVar3 = (uint)(byte)(this->CGraphicCtrl_Tile_data).offset_0x5;
    if (uVar2 <= uVar3) {
      uVar2 = uVar2 - 1;
      uVar3 = ((int)uVar2 < 0) - 1 & uVar2;
    }
    CHgImage::Draw((CHgImage *)CGraphicCtrl::s_pBackBuf,*(int *)param_2,*(int *)(param_2 + 4),pCVar1
                   ,(this->CGraphicCtrl_data).offset_0xd0 * uVar3 + *(int *)param_1,
                   *(int *)(param_1 + 4),*(int *)(param_1 + 8) - *(int *)param_1,
                   *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4),
                   (uint)(byte)(this->CGraphicCtrl_data).offset_0x11f,
                   (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c);
  }
  return 0;
}



/* ---- scalar_deleting_destructor @ 60011e80 size=85 ---- */

CGraphicCtrl_Tile * __thiscall
CGraphicCtrl_Tile::scalar_deleting_destructor(CGraphicCtrl_Tile *this,byte param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_Tile(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_Tile *)this;
  }
  iVar2._0_1_ = this[-0xffffffff00000001].CGraphicCtrl_Tile_data.offset_0x4;
  iVar2._1_1_ = this[-0xffffffff00000001].CGraphicCtrl_Tile_data.offset_0x5;
  iVar2._2_2_ = *(undefined2 *)&this[-0xffffffff00000001].CGraphicCtrl_Tile_data.field_0x6;
  puVar1 = &this[-1].CGraphicCtrl_Tile_data.offset_0x4;
  _eh_vector_destructor_iterator_(this,0x170,iVar2,~CGraphicCtrl_Tile);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_Tile *)puVar1;
}



/* ---- ActivateTile @ 60011ee0 size=77 ---- */

/* public: int __thiscall CGraphicCtrl_Tile::ActivateTile(unsigned char) */

int __thiscall CGraphicCtrl_Tile::ActivateTile(CGraphicCtrl_Tile *this,uchar param_1)

{
  RECT *lprcSrc2;
  
                    /* 0x11ee0  106  ?ActivateTile@CGraphicCtrl_Tile@@QAEHE@Z */
  if ((((this->CGraphicCtrl_Tile_data).offset_0x5 != param_1) &&
      ((this->CGraphicCtrl_data).offset_0xd8 != 0)) && ((this->CGraphicCtrl_data).offset_0xc != 0))
  {
    lprcSrc2 = (RECT *)CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)this);
    UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
              lprcSrc2);
  }
  (this->CGraphicCtrl_Tile_data).offset_0x5 = param_1;
  return 1;
}



/* ---- CGraphicCtrl_Tile::CreateGraphicCtrl @ 60011f30 size=392 ---- */

/* WARNING: Exceeded maximum restarts with more pending */
/* public: virtual int __thiscall CGraphicCtrl_Tile::CreateGraphicCtrl(class CCreateFT const
   &,int,unsigned long,unsigned char,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Tile::CGraphicCtrl_Tile__CreateGraphicCtrl
          (CGraphicCtrl_Tile *this,undefined4 *param_1,ulong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  CHgDDB *this_00;
  int iVar3;
  int iVar4;
  undefined4 in_stack_0000001c;
  CSize aCStack_12 [2];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11f30  142
                       ?CreateGraphicCtrl@CGraphicCtrl_Tile@@UAEHABVCCreateFT@@HKEEVCPoint@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016d9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (this->CGraphicCtrl_Tile_data).offset_0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,DAT_600259a8 ^ (uint)(aCStack_12 + -0xe));
  }
  (this->CGraphicCtrl_Tile_data).offset_0x0 = (undefined4 *)0x0;
  this_00 = operator_new(0x38);
  uStack_4 = 0;
  if (this_00 == (CHgDDB *)0x0) {
    this_00 = (CHgDDB *)0x0;
  }
  else {
    CHgDDB::CHgDDB(this_00);
    this_00->vftablePtr = &CHgDDB::vftable;
  }
  (this->CGraphicCtrl_Tile_data).offset_0x0 = this_00;
  uStack_4 = 0xffffffff;
  if (param_1[2] == 0) {
    cVar2 = (*this_00->vftablePtr->Create)(*param_1,param_1[1]);
  }
  else {
    cVar2 = (*this_00->vftablePtr->Create)(param_1[2]);
  }
  if (cVar2 == '\0') {
    puVar1 = (this->CGraphicCtrl_Tile_data).offset_0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    (this->CGraphicCtrl_Tile_data).offset_0x0 = (undefined4 *)0x0;
    ExceptionList = pvStack_10;
    return 0;
  }
  if (param_2 != 0xffffffff) {
    CHgImageBase::SetTransparentColor
              ((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0,param_2);
  }
  if (param_1 == (undefined4 *)0x0) {
    iVar3 = CHgImageBase::GetHeight((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0);
    iVar4 = CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0);
    param_1 = (undefined4 *)(iVar4 / iVar3);
  }
  (this->CGraphicCtrl_data).offset_0x11c = param_3;
  (this->CGraphicCtrl_Tile_data).offset_0x4 = (char)param_1;
  CHgImageBase::GetHeight((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0);
  CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0);
  CGraphicCtrl::SetSize((CGraphicCtrl *)this,aCStack_12 + -6);
  CHgImageBase::SetTileNum((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0,(int)param_1);
  (this->CGraphicCtrl_data).offset_0x1c = in_stack_0000001c;
  ExceptionList = pvStack_10;
  return 1;
}



/* ---- CGraphicCtrl_Tile::CreateGraphicCtrl @ 600120c0 size=77 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Tile::CreateGraphicCtrl(int,int,int,unsigned
   long,unsigned char,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Tile::CGraphicCtrl_Tile__CreateGraphicCtrl
          (CGraphicCtrl_Tile *this,undefined4 param_1,undefined4 param_2,ulong param_3,
          undefined1 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x120c0  143  ?CreateGraphicCtrl@CGraphicCtrl_Tile@@UAEHHHHKEEVCPoint@@H@Z */
  local_c = param_1;
  local_8 = param_2;
  local_4 = 0;
  iVar1 = CGraphicCtrl_Tile__CreateGraphicCtrl(this,&local_c,param_3,param_4);
  return iVar1;
}



/* ---- CGraphicCtrl_Tile::CreateGraphicCtrl @ 60012110 size=72 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Tile::CreateGraphicCtrl(char *,int,unsigned
   long,unsigned char,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Tile::CGraphicCtrl_Tile__CreateGraphicCtrl
          (CGraphicCtrl_Tile *this,undefined4 param_1,ulong param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x12110  144  ?CreateGraphicCtrl@CGraphicCtrl_Tile@@UAEHPADHKEEVCPoint@@H@Z
                        */
  local_c = 0;
  local_8 = 0;
  local_4 = param_1;
  iVar1 = CGraphicCtrl_Tile__CreateGraphicCtrl(this,&local_c,param_2,param_3);
  return iVar1;
}



/* ---- CGraphicCtrl_Tile_Element @ 60012160 size=90 ---- */

CGraphicCtrl_Tile_Element * __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::CGraphicCtrl_Tile_Element
          (CGraphicCtrl_Tile_Element *this)

{
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_Tile_Element_data).offset_0x10 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x14 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x8 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x0 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x18 = 0x3f800000;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x4 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0xc = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x20 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x24 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x28 = 0;
  (this->CGraphicCtrl_Tile_Element_data).offset_0x1c = 0;
  this->vftablePtr = &vftable;
  return this;
}



/* ---- CreateObject @ 600121c0 size=103 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
    public: static class CObject * __cdecl CFrameWnd::CreateObject(void)
   
   Library: Visual Studio 2008 Release
   ***** Removed Bad FID Symbol(s) ***** */

undefined4 * __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::CreateObject(CGraphicCtrl_Tile_Element *this)

{
  CGraphicCtrl_Tile_Element *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_600164eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x194);
  local_4 = 0;
  if (pCVar1 == (CGraphicCtrl_Tile_Element *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  pCVar1 = CGraphicCtrl_Tile_Element(pCVar1);
  ExceptionList = local_c;
  return &pCVar1->vftablePtr;
}



/* ---- vfunction5 @ 60012230 size=60 ---- */

undefined4 __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::vfunction5(CGraphicCtrl_Tile_Element *this)

{
  int iVar1;
  
  iVar1 = (this->CGraphicCtrl_Tile_Element_data).offset_0x4;
  if (iVar1 != (this->CGraphicCtrl_Tile_Element_data).offset_0x0) {
    (this->CGraphicCtrl_Tile_Element_data).offset_0x0 = iVar1;
    return 1;
  }
  if ((this->CGraphicCtrl_Tile_Element_data).offset_0x8 == 0) {
    return 0;
  }
  (this->CGraphicCtrl_Tile_Element_data).offset_0x8 = 0;
  return 1;
}



/* ---- CGraphicCtrl_Tile_Ani::SetSpeedRate @ 60012270 size=39 ---- */

/* public: virtual void __thiscall CGraphicCtrl_Tile_Ani::SetSpeedRate(float)
   CGraphicCtrl_Tile_Ani member function inherited by CGraphicCtrl_PushBtn_Ani */

void __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__SetSpeedRate
          (CGraphicCtrl_Tile_Ani *this,float param_1)

{
  int *piVar1;
  
                    /* 0x12270  439  ?SetSpeedRate@CGraphicCtrl_Tile_Ani@@UAEXM@Z */
  (this->CGraphicCtrl_data).offset_0x160 = param_1;
  piVar1 = (int *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0xc))(param_1);
  return;
}



/* ---- CGraphicCtrl_Tile_Ani @ 600122a0 size=110 ---- */

/* public: __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani(void) */

CGraphicCtrl_Tile_Ani * __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani(CGraphicCtrl_Tile_Ani *this)

{
                    /* 0x122a0  18  ??0CGraphicCtrl_Tile_Ani@@QAE@XZ */
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>
            ((CList<CGraphicCtrl*,CGraphicCtrl*> *)this);
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x11 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x12 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x4 = (undefined4 *)0x0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x8 = (int *)0x0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0xc = (void *)0x0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x0 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x1d = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x1e = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x1c = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x13 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x20 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x24 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x14 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x18 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x10 = 0;
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- vfunction1 @ 60012310 size=84 ---- */

CHgDDB * __thiscall CHgDDB::vfunction1(CHgDDB *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    CHgDDB::~CHgDDB(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CHgDDB *)this;
  }
  _eh_vector_destructor_iterator_(this,0x38,(int)this[-1].vftablePtr,~CHgDDB_exref);
  if ((param_1 & 1) != 0) {
    operator_delete__((CHgDDB *)(this + -1));
  }
  return (CHgDDB *)(this + -1);
}



/* ---- ~CHgDDB @ 60012370 size=17 ---- */

void __thiscall CHgDDB::~CHgDDB(CHgDDB *this)

{
  CHgDDB::CHgDDB(this);
  this->vftablePtr = &vftable;
  return;
}



/* ---- GetAniIndexByName @ 60012390 size=80 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::GetAniIndexByName(char *) */

int __thiscall CGraphicCtrl_Tile_Ani::GetAniIndexByName(CGraphicCtrl_Tile_Ani *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x12390  193  ?GetAniIndexByName@CGraphicCtrl_Tile_Ani@@QAEHPAD@Z */
  iVar2 = 0;
  if ((this->CGraphicCtrl_Tile_Ani_data).offset_0x12 != 0) {
    do {
      iVar1 = _mbscmp(*(uchar **)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc + iVar2 * 4),
                      (uchar *)param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)(this->CGraphicCtrl_Tile_Ani_data).offset_0x12);
  }
  return -1;
}



/* ---- _KeyFrame @ 600123f0 size=82 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CGraphicCtrl_Tile_Ani::_KeyFrame::_KeyFrame(_KeyFrame *this)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_600189a8;
  (this->_KeyFrame_data).offset_0x24 = _DAT_600189a8;
  (this->_KeyFrame_data).offset_0x28 = uVar1;
  (this->_KeyFrame_data).offset_0x9 = 0xff;
  (this->_KeyFrame_data).offset_0x2c = 0x3f800000;
  (this->_KeyFrame_data).offset_0xa = 0xff;
  (this->_KeyFrame_data).offset_0x30 = 0x3f800000;
  this->vftablePtr = &vftable;
  (this->_KeyFrame_data).offset_0x34 = 0;
  (this->_KeyFrame_data).offset_0x4 = 0;
  (this->_KeyFrame_data).offset_0x40 = 0;
  (this->_KeyFrame_data).offset_0x0 = 0;
  (this->_KeyFrame_data).offset_0x8 = 0;
  (this->_KeyFrame_data).offset_0x1c = 0;
  (this->_KeyFrame_data).offset_0x20 = 0;
  (this->_KeyFrame_data).offset_0x38 = 0x3f800000;
  (this->_KeyFrame_data).offset_0xc = 0;
  (this->_KeyFrame_data).offset_0x3c = 0x3f800000;
  (this->_KeyFrame_data).offset_0x10 = 0;
  (this->_KeyFrame_data).offset_0x14 = 0;
  (this->_KeyFrame_data).offset_0x18 = 0;
  return;
}



/* ---- scalar_deleting_destructor @ 60012450 size=31 ---- */

undefined4 * __thiscall
CGraphicCtrl_Tile_Ani::_KeyFrame::scalar_deleting_destructor(_KeyFrame *this,byte param_1)

{
                    /* inlined destructor: CGraphicCtrl_Tile_Ani::_KeyFrame::~_KeyFrame */
  this->vftablePtr = &vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- scalar_deleting_destructor @ 60012470 size=30 ---- */

CGraphicCtrl * __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::scalar_deleting_destructor
          (CGraphicCtrl_Tile_Element *this,byte param_1)

{
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGraphicCtrl *)this;
}



/* ---- vfunction7 @ 60012490 size=515 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::vfunction7
          (CGraphicCtrl_Tile_Element *this,int *param_1,int *param_2)

{
  float fVar1;
  CHgImageBase *pCVar2;
  CHgDIB *this_00;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CWinThread *pCVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float10 extraout_ST0;
  ulonglong uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  tagRECT local_10;
  
  pCVar2 = (CHgImageBase *)(this->CGraphicCtrl_Tile_Element_data).offset_0x4;
  if (pCVar2 == (CHgImageBase *)0x0) {
    return 0;
  }
  if ((int)(this->CGraphicCtrl_Tile_Element_data).offset_0xc < 3) {
    CHgImage::Draw((CHgImage *)CGraphicCtrl::s_pBackBuf,*param_2,param_2[1],pCVar2,*param_1,
                   param_1[1],param_1[2] - *param_1,param_1[3] - param_1[1],
                   (byte)(this->CGraphicCtrl_data).offset_0x11f + 1,
                   (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c);
  }
  else {
    piVar3 = (int *)CGraphicCtrl::GetAreaScreen((CGraphicCtrl *)this);
    *param_2 = *piVar3;
    param_2[1] = piVar3[1];
    iVar8 = piVar3[2];
    param_2[2] = iVar8;
    iVar4 = piVar3[3];
    param_2[3] = iVar4;
    if ((this->CGraphicCtrl_data).offset_0x120 == 0) {
      (this->CGraphicCtrl_data).offset_0x120 = 1;
    }
    uVar11 = FUN_60015470(iVar8,iVar4);
    this_00 = CGraphicCtrl::s_pBackBuf;
    iVar4 = (int)uVar11;
    uVar9 = (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c;
    fVar1 = (float)(extraout_ST0 *
                    (float10)(float)(this->CGraphicCtrl_Tile_Element_data).offset_0x10 +
                   (float10)(float)(this->CGraphicCtrl_Tile_Element_data).offset_0x18);
    iVar10 = (byte)(this->CGraphicCtrl_data).offset_0x11f + 1;
    lVar12 = (this->CGraphicCtrl_Tile_Element_data).offset_0x20;
    lVar13 = (this->CGraphicCtrl_Tile_Element_data).offset_0x24;
    iVar8 = iVar4;
    fVar14 = fVar1;
    iVar5 = CHgImageBase::GetHeight
                      ((CHgImageBase *)(this->CGraphicCtrl_Tile_Element_data).offset_0x4);
    iVar6 = CHgImageBase::GetWidth
                      ((CHgImageBase *)(this->CGraphicCtrl_Tile_Element_data).offset_0x4);
    CHgImage::DrawRotate
              ((CHgImage *)this_00,*param_2 + (this->CGraphicCtrl_Tile_Element_data).offset_0x20,
               param_2[1] + (this->CGraphicCtrl_Tile_Element_data).offset_0x24,
               (CHgImageBase *)(this->CGraphicCtrl_Tile_Element_data).offset_0x4,0,0,iVar6,iVar5,
               lVar12,lVar13,iVar8,fVar14,iVar10,uVar9);
    if ((((float)_DAT_600180e0 < fVar1) || (iVar4 != (iVar4 / 0x168) * 0x168)) || (fVar1 < 0.0)) {
      pCVar7 = AfxGetThread();
      if (pCVar7 == (CWinThread *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (**(code **)(*(int *)pCVar7 + 0x7c))();
      }
      GetClientRect(*(HWND *)(iVar8 + 0x20),&local_10);
      *(LONG *)&(this->CGraphicCtrl_data).field_0xfc = local_10.left;
      *(LONG *)&(this->CGraphicCtrl_data).field_0x100 = local_10.top;
      *(LONG *)&(this->CGraphicCtrl_data).field_0x104 = local_10.right;
      *(LONG *)&(this->CGraphicCtrl_data).field_0x108 = local_10.bottom;
      return 1;
    }
  }
  return 1;
}



/* ---- GetTileIndex @ 600126a0 size=83 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::GetTileIndex(unsigned char,int) */

int __thiscall
CGraphicCtrl_Tile_Ani::GetTileIndex(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
                    /* 0x126a0  248  ?GetTileIndex@CGraphicCtrl_Tile_Ani@@QAEHEH@Z */
  if (param_2 == -1) {
    param_2 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  uVar3 = (uint)param_1;
  piVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
  if (piVar1[param_2 * 7 + 3] <= (int)uVar3) {
    return *(int *)(iRam00000008 + 4);
  }
  puVar2 = (undefined4 *)piVar1[param_2 * 7 + 1];
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = (undefined4 *)*puVar2;
  }
  return *(int *)(puVar2[2] + 4);
}



/* ---- GetKeyFrame @ 60012700 size=78 ---- */

/* public: class CGraphicCtrl_Tile_Ani::_KeyFrame * __thiscall
   CGraphicCtrl_Tile_Ani::GetKeyFrame(unsigned char,int) */

_KeyFrame * __thiscall
CGraphicCtrl_Tile_Ani::GetKeyFrame(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
                    /* 0x12700  221  ?GetKeyFrame@CGraphicCtrl_Tile_Ani@@QAEPAV_KeyFrame@1@EH@Z */
  if (param_2 == -1) {
    param_2 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  uVar3 = (uint)param_1;
  piVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
  if ((int)uVar3 < piVar1[param_2 * 7 + 3]) {
    puVar2 = (undefined4 *)piVar1[param_2 * 7 + 1];
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 != (undefined4 *)0x0) {
      return (_KeyFrame *)puVar2[2];
    }
  }
  return (_KeyFrame *)0x0;
}



/* ---- GetAniFrameDelay @ 60012750 size=83 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameDelay(unsigned char,int) */

int __thiscall
CGraphicCtrl_Tile_Ani::GetAniFrameDelay(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
                    /* 0x12750  189  ?GetAniFrameDelay@CGraphicCtrl_Tile_Ani@@QAEHEH@Z */
  if (param_2 == -1) {
    param_2 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  uVar3 = (uint)param_1;
  piVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
  if (piVar1[param_2 * 7 + 3] <= (int)uVar3) {
    return *(int *)(iRam00000008 + 8);
  }
  puVar2 = (undefined4 *)piVar1[param_2 * 7 + 1];
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = (undefined4 *)*puVar2;
  }
  return *(int *)(puVar2[2] + 8);
}



/* ---- GetNextAniFrameIndex @ 600127b0 size=111 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::GetNextAniFrameIndex(void) */

int __thiscall CGraphicCtrl_Tile_Ani::GetNextAniFrameIndex(CGraphicCtrl_Tile_Ani *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
                    /* 0x127b0  227  ?GetNextAniFrameIndex@CGraphicCtrl_Tile_Ani@@QAEHXZ */
  iVar2 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8
          [(uint)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e * 7 + 3];
  cVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x10;
  iVar3 = 0;
  if (cVar1 == '\0') {
    iVar3 = (byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1c + 1;
    if (iVar2 <= iVar3) {
      iVar3 = -1;
    }
  }
  else if (cVar1 == '\x01') {
    uVar4 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x14 & 0x80000001;
    bVar5 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar5 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    uVar4 = (uint)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1c;
    if (bVar5) {
      iVar3 = uVar4 + 1;
      if (iVar2 <= iVar3) {
        return iVar2 + -2;
      }
    }
    else {
      iVar3 = uVar4 - 1;
      if (iVar3 < 0) {
        return 1;
      }
    }
  }
  return iVar3;
}



/* ---- GetTotalAnimationTime @ 60012820 size=71 ---- */

/* public: unsigned long __thiscall CGraphicCtrl_Tile_Ani::GetTotalAnimationTime(int) */

ulong __thiscall
CGraphicCtrl_Tile_Ani::GetTotalAnimationTime(CGraphicCtrl_Tile_Ani *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
                    /* 0x12820  250  ?GetTotalAnimationTime@CGraphicCtrl_Tile_Ani@@QAEKH@Z */
  if (param_1 == -1) {
    param_1 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  piVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8 + param_1 * 7;
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && (0 < piVar1[3])) {
    for (puVar2 = (undefined4 *)piVar1[1]; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      uVar3 = uVar3 + *(int *)(puVar2[2] + 8);
    }
  }
  return uVar3;
}



/* ---- CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_Constructor_or_Destructor @ 60012870 size=51 ---- */

void __fastcall
CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::
CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_Constructor_or_Destructor
          (undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = &vftable;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  CPlex::FreeDataChain((CPlex *)param_1[5]);
  param_1[5] = 0;
  return;
}



/* ---- FUN_600128b0 @ 600128b0 size=101 ---- */

void __thiscall FUN_600128b0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  CPlex *pCVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    pCVar3 = CPlex::Create((CPlex **)((int)this + 0x14),*(uint *)((int)this + 0x18),0xc);
    iVar1 = *(int *)((int)this + 0x18);
    pCVar3 = pCVar3 + iVar1 * 0xc + -8;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)((int)this + 0x10);
      *(CPlex **)((int)this + 0x10) = pCVar3;
      pCVar3 = pCVar3 + -0xc;
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  *(undefined4 *)((int)this + 0x10) = *puVar2;
  puVar2[1] = param_1;
  *puVar2 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}



/* ---- ~CGraphicCtrl_Tile_Ani @ 60012920 size=530 ---- */

/* public: virtual __thiscall CGraphicCtrl_Tile_Ani::~CGraphicCtrl_Tile_Ani(void) */

void __thiscall CGraphicCtrl_Tile_Ani::~CGraphicCtrl_Tile_Ani(CGraphicCtrl_Tile_Ani *this)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStackY_b4 [128];
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12920  54  ??1CGraphicCtrl_Tile_Ani@@UAE@XZ */
  puStack_8 = &LAB_60016cd8;
  local_c = ExceptionList;
  uVar8 = DAT_600259a8 ^ (uint)(auStackY_b4 + 0x88);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  cVar2 = (this->CGraphicCtrl_data).offset_0x2;
  local_4 = 0;
  if (cVar2 == '\0') {
    puVar3 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x4;
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[-1] == 0) {
        operator_delete__(puVar3 + -1);
      }
      else {
        (**(code **)*puVar3)(3,uVar8);
      }
    }
    if ((this->CGraphicCtrl_Tile_Ani_data).offset_0x8 != (int *)0x0) {
      local_18 = 0;
      if ((this->CGraphicCtrl_Tile_Ani_data).offset_0x12 != 0) {
        iVar9 = 0;
        do {
          iVar4 = *(int *)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x8 + iVar9 + 0xc);
          local_1c = 0;
          if (0 < iVar4) {
            do {
              iVar5 = *(int *)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x8 + iVar9 + 8);
              if (iVar5 == 0) {
LAB_60012aa8:
                    /* WARNING: Subroutine does not return */
                AfxThrowInvalidArgException();
              }
              puVar3 = *(undefined4 **)(iVar5 + 8);
              if (puVar3 != (undefined4 *)0x0) {
                (**(code **)*puVar3)(1);
              }
              piVar6 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
              puVar3 = *(undefined4 **)((int)piVar6 + iVar9 + 8);
              if (puVar3 == (undefined4 *)0x0) goto LAB_60012aa8;
              puVar7 = (undefined4 *)puVar3[1];
              *(undefined4 **)((int)piVar6 + iVar9 + 8) = puVar7;
              if (puVar7 == (undefined4 *)0x0) {
                *(undefined4 *)((int)piVar6 + iVar9 + 4) = 0;
              }
              else {
                *puVar7 = 0;
              }
              *puVar3 = *(undefined4 *)((int)piVar6 + iVar9 + 0x10);
              piVar1 = (int *)((int)piVar6 + iVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              *(undefined4 **)((int)piVar6 + iVar9 + 0x10) = puVar3;
              if (*piVar1 == 0) {
                for (puVar3 = *(undefined4 **)((int)piVar6 + iVar9 + 4); puVar3 != (undefined4 *)0x0
                    ; puVar3 = (undefined4 *)*puVar3) {
                }
                *(undefined4 *)((int)piVar6 + iVar9 + 0xc) = 0;
                *(undefined4 *)((int)piVar6 + iVar9 + 0x10) = 0;
                *(undefined4 *)((int)piVar6 + iVar9 + 8) = 0;
                *(undefined4 *)((int)piVar6 + iVar9 + 4) = 0;
                CPlex::FreeDataChain(*(CPlex **)((int)piVar6 + iVar9 + 0x14));
                *(undefined4 *)((int)piVar6 + iVar9 + 0x14) = 0;
              }
              local_1c = local_1c + 1;
            } while (local_1c < iVar4);
          }
          local_18 = local_18 + 1;
          iVar9 = iVar9 + 0x1c;
        } while (local_18 < (int)(uint)(this->CGraphicCtrl_Tile_Ani_data).offset_0x12);
      }
      piVar6 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
      if (piVar6 != (int *)0x0) {
        if (piVar6[-1] == 0) {
          operator_delete__(piVar6 + -1);
        }
        else {
          (**(code **)(*piVar6 + 4))(3);
        }
      }
    }
    if ((this->CGraphicCtrl_Tile_Ani_data).offset_0xc != (void *)0x0) {
      iVar9 = 0;
      if ((this->CGraphicCtrl_Tile_Ani_data).offset_0x12 != 0) {
        do {
          operator_delete__(*(void **)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc +
                                      iVar9 * 4));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(uint)(this->CGraphicCtrl_Tile_Ani_data).offset_0x12);
      }
      operator_delete__((this->CGraphicCtrl_Tile_Ani_data).offset_0xc);
    }
  }
  else if (cVar2 != '\x01') goto LAB_60012b15;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x4 = (undefined4 *)0x0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x8 = (int *)0x0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x0 = 0;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0xc = (void *)0x0;
LAB_60012b15:
  local_4 = 0xffffffff;
  CGraphicCtrl::~CGraphicCtrl((CGraphicCtrl *)this);
  ExceptionList = local_c;
  return;
}



/* ---- scalar_deleting_destructor @ 60012b40 size=122 ---- */

undefined4 * __thiscall
CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::
scalar_deleting_destructor
          (CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> *this,
          byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].
              CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data.
              offset_0x14;
    _eh_vector_destructor_iterator_
              (this,0x1c,
               this[-1].
               CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data.
               offset_0x14,
               CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_Constructor_or_Destructor
              );
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return puVar1;
  }
  puVar1 = (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).
           offset_0x0;
                    /* inlined destructor:
                       CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::~CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>
                        */
  this->vftablePtr = &vftable;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
  }
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0x8
       = 0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0xc
       = 0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0x4
       = 0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0x0
       = (undefined4 *)0x0;
  CPlex::FreeDataChain
            ((this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data)
             .offset_0x10);
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).
  offset_0x10 = (CPlex *)0x0;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> @ 60012bc0 size=31 ---- */

void __thiscall
CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::
CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>
          (CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> *this)

{
  this->vftablePtr = &vftable;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0x8
       = 0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0xc
       = 0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0x4
       = 0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).offset_0x0
       = (undefined4 *)0x0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).
  offset_0x10 = (CPlex *)0x0;
  (this->CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data).
  offset_0x14 = 10;
  return;
}



/* ---- vfunction3 @ 60012be0 size=287 ---- */

void __thiscall
CList<CGraphicCtrl*,CGraphicCtrl*>::vfunction3
          (CList<CGraphicCtrl*,CGraphicCtrl*> *this,CArchive *param_1)

{
  undefined4 uVar1;
  CList<CGraphicCtrl*,CGraphicCtrl*> *pCVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_8;
  CList<CGraphicCtrl*,CGraphicCtrl*> *local_4;
  
  local_4 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar3 = CArchive::ReadCount(param_1);
    while (uVar3 != 0) {
      uVar6 = 1;
      uVar3 = uVar3 - 1;
      puVar5 = &local_8;
      if ((~(byte)*(undefined4 *)(param_1 + 0x18) & 1) == 0) {
        do {
          uVar7 = uVar6;
          if (0x1ffffffe < uVar6) {
            uVar7 = 0x1fffffff;
          }
          uVar4 = CArchive::Read(param_1,puVar5,uVar7 * 4);
          if (uVar4 != uVar7 * 4) {
                    /* WARNING: Subroutine does not return */
            AfxThrowArchiveException(3,(char *)0x0);
          }
          uVar6 = uVar6 - uVar7;
          puVar5 = puVar5 + uVar7;
        } while (uVar6 != 0);
      }
      else {
        uVar6 = 1;
        do {
          uVar7 = uVar6;
          if (0x1ffffffe < uVar6) {
            uVar7 = 0x1fffffff;
          }
          CArchive::Write(param_1,puVar5,uVar7 * 4);
          uVar6 = uVar6 - uVar7;
          puVar5 = puVar5 + uVar7;
        } while (uVar6 != 0);
      }
      pCVar2 = local_4;
      uVar1 = local_8;
      puVar5 = (undefined4 *)
               FUN_600128b0(local_4,(local_4->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x4,0)
      ;
      puVar5[2] = uVar1;
      piVar8 = (int *)(pCVar2->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x4;
      if (piVar8 == (int *)0x0) {
        (pCVar2->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0 = puVar5;
      }
      else {
        *piVar8 = (int)puVar5;
      }
      (pCVar2->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x4 = puVar5;
    }
  }
  else {
    CArchive::WriteCount(param_1,(this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x8);
    piVar8 = (this->CList<CGraphicCtrl*,CGraphicCtrl*>_data).offset_0x0;
    if (piVar8 != (int *)0x0) {
      do {
        FUN_6000b490(param_1,piVar8 + 2,1);
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)0x0);
      return;
    }
  }
  return;
}



/* ---- scalar_deleting_destructor @ 60012d10 size=85 ---- */

CGraphicCtrl_Tile_Ani * __thiscall
CGraphicCtrl_Tile_Ani::scalar_deleting_destructor(CGraphicCtrl_Tile_Ani *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGraphicCtrl_Tile_Ani(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_Tile_Ani *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_Tile_Ani_data.offset_0x24;
  _eh_vector_destructor_iterator_
            (this,400,this[-1].CGraphicCtrl_Tile_Ani_data.offset_0x24,~CGraphicCtrl_Tile_Ani);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_Tile_Ani *)puVar1;
}



/* ---- FUN_60012d70 @ 60012d70 size=77 ---- */

void __thiscall FUN_60012d70(void *this,CHgImageBase *param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
  if ((param_1 != *(CHgImageBase **)((int)this + 0x16c)) &&
     (*(CHgImageBase **)((int)this + 0x16c) = param_1, param_1 != (CHgImageBase *)0x0)) {
    iVar1 = CHgImageBase::GetHeight((CHgImageBase *)param_1);
    local_8 = CHgImageBase::GetWidth(*(CHgImageBase **)((int)this + 0x16c));
    local_4 = iVar1;
    CGraphicCtrl::SetSize(this,(CSize *)&local_8);
  }
  return;
}



/* ---- ActivateAniTile @ 60012dc0 size=116 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::ActivateAniTile(unsigned char) */

int __thiscall CGraphicCtrl_Tile_Ani::ActivateAniTile(CGraphicCtrl_Tile_Ani *this,uchar param_1)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x12dc0  105  ?ActivateAniTile@CGraphicCtrl_Tile_Ani@@QAEHE@Z */
  if (param_1 < (byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x11) {
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x1d = param_1;
    FUN_60012d70((void *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0,
                 (CHgImageBase *)
                 ((this->CGraphicCtrl_Tile_Ani_data).offset_0x4 + (uint)param_1 * 0xe));
    iVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
    local_8 = *(undefined4 *)(iVar1 + 0xd4);
    local_4 = *(undefined4 *)(iVar1 + 0xd8);
    CGraphicCtrl::SetSize((CGraphicCtrl *)this,(CSize *)&local_8);
    return 1;
  }
  return 0;
}



/* ---- ActivateAniFrame @ 60012e40 size=673 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CGraphicCtrl_Tile_Ani::ActivateAniFrame(unsigned char,int) */

int __thiscall
CGraphicCtrl_Tile_Ani::ActivateAniFrame(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2)

{
  _KeyFrame *p_Var1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  RECT *pRVar5;
  _KeyFrame *p_Var6;
  
                    /* 0x12e40  104  ?ActivateAniFrame@CGraphicCtrl_Tile_Ani@@QAEHEH@Z */
  if (param_2 == -1) {
    param_2 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x1e = (char)param_2;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x1c = param_1;
  iVar4 = CGraphicCtrl::IsShowing((CGraphicCtrl *)this);
  if (iVar4 != 0) {
    pRVar5 = (RECT *)CGraphicCtrl::GetAreaScreen
                               ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0);
    UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
              pRVar5);
  }
  p_Var6 = GetKeyFrame(this,param_1,param_2);
  if (p_Var6 == (_KeyFrame *)0x0) {
    return 0;
  }
  ActivateAniTile(this,(uchar)p_Var6[4]);
  iVar4 = CGraphicCtrl::IsShowing((CGraphicCtrl *)this);
  if (iVar4 != 0) {
    pRVar5 = (RECT *)CGraphicCtrl::GetAreaScreen
                               ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0);
    UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
              pRVar5);
  }
  *(_KeyFrame *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x120) = p_Var6[0xc];
  iVar4 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
  uVar2 = *(undefined4 *)(p_Var6 + 8);
  p_Var1 = p_Var6 + 8;
  *(undefined4 *)(iVar4 + 0x130) = *(undefined4 *)(iVar4 + 0x124);
  *(undefined4 *)(iVar4 + 0x134) = uVar2;
  CGraphicCtrl::SetEffectDegrees
            ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0,(uchar)p_Var6[0xd],
             (uchar)p_Var6[0xe]);
  CGraphicCtrl::SetPosBase_low
            ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0,
             (this->CGraphicCtrl_data).offset_0xc0 + *(int *)(p_Var6 + 0x20),
             (this->CGraphicCtrl_data).offset_0xc4 + *(int *)(p_Var6 + 0x24));
  iVar4 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
  if (*(char *)(iVar4 + 400) == '\0') {
    CGraphicCurve::SetDamping
              ((CGraphicCurve *)(iVar4 + 0x28),(float)*(int *)(p_Var6 + 0x10),
               (float)*(int *)(p_Var6 + 0x14),(float)*(int *)(p_Var6 + 0x18),
               (float)*(int *)(p_Var6 + 0x1c),0.0,0.0,0.0,0.0,'\a');
  }
  else {
    *(undefined4 *)(iVar4 + 0xb4) = (this->CGraphicCtrl_data).offset_0x120;
    CGraphicCurve::SetNormal
              ((CGraphicCurve *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x28),
               (float)*(int *)(p_Var6 + 0x10),(float)*(int *)(p_Var6 + 0x14),
               (float)*(int *)(p_Var6 + 0x18),(float)*(int *)(p_Var6 + 0x1c),*(ulong *)p_Var1,'\a');
    *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x180) =
         *(undefined4 *)(p_Var6 + 0x34);
    *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x188) =
         *(undefined4 *)(p_Var6 + 0x20);
    *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x18c) =
         *(undefined4 *)(p_Var6 + 0x24);
    if (0.0 <= *(float *)(p_Var6 + 0x38)) {
      *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x184) =
           *(undefined4 *)(p_Var6 + 0x38);
    }
    else {
      *(float *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x184) =
           *(float *)(p_Var6 + 0x38) + (float)_DAT_600189c8;
    }
    if (*(float *)(p_Var6 + 0x34) == *(float *)(p_Var6 + 0x40)) {
      *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x178) = 0;
    }
    else {
      fVar3 = (float)(int)*(ulong *)p_Var1;
      if ((int)*(ulong *)p_Var1 < 0) {
        fVar3 = fVar3 + _DAT_60017950;
      }
      *(float *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x178) =
           (*(float *)(p_Var6 + 0x40) - *(float *)(p_Var6 + 0x34)) / fVar3;
    }
    if (*(float *)(p_Var6 + 0x38) == *(float *)(p_Var6 + 0x44)) {
      *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x17c) = 0;
    }
    else {
      fVar3 = (float)(int)*(ulong *)p_Var1;
      if ((int)*(ulong *)p_Var1 < 0) {
        fVar3 = fVar3 + _DAT_60017950;
      }
      *(float *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x17c) =
           (*(float *)(p_Var6 + 0x44) - *(float *)(p_Var6 + 0x38)) / fVar3;
    }
  }
  *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x124) = 0;
  return 1;
}



/* ---- __ActivateAniFrame_NotResetDelay @ 600130f0 size=683 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CGraphicCtrl_Tile_Ani::__ActivateAniFrame_NotResetDelay(unsigned char,int)
    */

int __thiscall
CGraphicCtrl_Tile_Ani::__ActivateAniFrame_NotResetDelay
          (CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2)

{
  _KeyFrame *p_Var1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  RECT *pRVar5;
  _KeyFrame *p_Var6;
  
                    /* 0x130f0  499
                       ?__ActivateAniFrame_NotResetDelay@CGraphicCtrl_Tile_Ani@@QAEHEH@Z */
  if (param_2 == -1) {
    param_2 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x1e = (char)param_2;
  (this->CGraphicCtrl_Tile_Ani_data).offset_0x1c = param_1;
  iVar4 = CGraphicCtrl::IsShowing((CGraphicCtrl *)this);
  if (iVar4 != 0) {
    pRVar5 = (RECT *)CGraphicCtrl::GetAreaScreen
                               ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0);
    UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
              pRVar5);
  }
  p_Var6 = GetKeyFrame(this,param_1,param_2);
  if (p_Var6 == (_KeyFrame *)0x0) {
    return 0;
  }
  ActivateAniTile(this,(uchar)p_Var6[4]);
  iVar4 = CGraphicCtrl::IsShowing((CGraphicCtrl *)this);
  if (iVar4 != 0) {
    pRVar5 = (RECT *)CGraphicCtrl::GetAreaScreen
                               ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0);
    UnionRect((LPRECT)CGraphicCtrl::s_prcInvalidateArea,(RECT *)CGraphicCtrl::s_prcInvalidateArea,
              pRVar5);
  }
  *(_KeyFrame *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x120) = p_Var6[0xc];
  iVar4 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
  uVar2 = *(undefined4 *)(p_Var6 + 8);
  p_Var1 = p_Var6 + 8;
  *(undefined4 *)(iVar4 + 0x130) = *(undefined4 *)(iVar4 + 0x124);
  *(undefined4 *)(iVar4 + 0x134) = uVar2;
  CGraphicCtrl::SetEffectDegrees
            ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0,(uchar)p_Var6[0xd],
             (uchar)p_Var6[0xe]);
  CGraphicCtrl::SetPosBase_low
            ((CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0,
             (this->CGraphicCtrl_data).offset_0xc0 + *(int *)(p_Var6 + 0x20),
             (this->CGraphicCtrl_data).offset_0xc4 + *(int *)(p_Var6 + 0x24));
  iVar4 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
  if (*(char *)(iVar4 + 400) == '\0') {
    CGraphicCurve::SetDamping
              ((CGraphicCurve *)(iVar4 + 0x28),(float)*(int *)(p_Var6 + 0x10),
               (float)*(int *)(p_Var6 + 0x14),(float)*(int *)(p_Var6 + 0x18),
               (float)*(int *)(p_Var6 + 0x1c),0.0,0.0,0.0,0.0,'\a');
    return 1;
  }
  *(undefined4 *)(iVar4 + 0xb4) = (this->CGraphicCtrl_data).offset_0x120;
  CGraphicCurve::SetNormal
            ((CGraphicCurve *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x28),
             (float)*(int *)(p_Var6 + 0x10),(float)*(int *)(p_Var6 + 0x14),
             (float)*(int *)(p_Var6 + 0x18),(float)*(int *)(p_Var6 + 0x1c),*(ulong *)p_Var1,'\a');
  *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x180) =
       *(undefined4 *)(p_Var6 + 0x34);
  *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x188) =
       *(undefined4 *)(p_Var6 + 0x20);
  *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x18c) =
       *(undefined4 *)(p_Var6 + 0x24);
  if (0.0 <= *(float *)(p_Var6 + 0x38)) {
    *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x184) =
         *(undefined4 *)(p_Var6 + 0x38);
  }
  else {
    *(float *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x184) =
         *(float *)(p_Var6 + 0x38) + (float)_DAT_600189c8;
  }
  if (*(float *)(p_Var6 + 0x34) == *(float *)(p_Var6 + 0x40)) {
    *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x178) = 0;
  }
  else {
    fVar3 = (float)(int)*(ulong *)p_Var1;
    if ((int)*(ulong *)p_Var1 < 0) {
      fVar3 = fVar3 + _DAT_60017950;
    }
    *(float *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x178) =
         (*(float *)(p_Var6 + 0x40) - *(float *)(p_Var6 + 0x34)) / fVar3;
  }
  if (*(float *)(p_Var6 + 0x38) == *(float *)(p_Var6 + 0x44)) {
    *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x17c) = 0;
    return 1;
  }
  fVar3 = (float)(int)*(ulong *)p_Var1;
  if ((int)*(ulong *)p_Var1 < 0) {
    fVar3 = fVar3 + _DAT_60017950;
  }
  *(float *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x17c) =
       (*(float *)(p_Var6 + 0x44) - *(float *)(p_Var6 + 0x38)) / fVar3;
  return 1;
}



/* ---- CGraphicCtrl_Tile_Ani::Proc @ 600133a0 size=370 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Tile_Ani::Proc(unsigned long) */

int __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__Proc(CGraphicCtrl_Tile_Ani *this,ulong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  
                    /* 0x133a0  361  ?Proc@CGraphicCtrl_Tile_Ani@@UAEHK@Z */
  iVar3 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8
          [(uint)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e * 7 + 3];
  if (((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 != 0) &&
     ((iVar6 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x18,
      (int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x14 < iVar6 || (iVar6 == 0)))) {
    while( true ) {
      do {
        uVar7 = (uint)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
        uVar9 = (uint)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1c;
        piVar4 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
        if ((int)uVar9 < piVar4[uVar7 * 7 + 3]) {
          puVar8 = (undefined4 *)piVar4[uVar7 * 7 + 1];
          for (uVar5 = uVar9; uVar5 != 0; uVar5 = uVar5 - 1) {
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          puVar8 = (undefined4 *)0x0;
        }
        iVar6 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
        if (*(int *)(iVar6 + 0x124) < *(int *)(puVar8[2] + 8)) {
          return 0;
        }
        if ((int)uVar9 < piVar4[uVar7 * 7 + 3]) {
          puVar8 = (undefined4 *)piVar4[uVar7 * 7 + 1];
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          puVar8 = (undefined4 *)0x0;
        }
        piVar4 = (int *)(iVar6 + 0x124);
        *piVar4 = *piVar4 - *(int *)(puVar8[2] + 8);
        uVar9 = GetNextAniFrameIndex(this);
        bVar1 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x1c;
      } while (bVar1 == uVar9);
      cVar2 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x10;
      if (cVar2 == '\0') {
        if (uVar9 == 0xffffffff) {
          uVar9 = 0;
          puVar8 = &(this->CGraphicCtrl_Tile_Ani_data).offset_0x14;
          *puVar8 = *puVar8 + 1;
        }
      }
      else if (cVar2 == '\x01') {
        uVar7 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x14;
        uVar5 = uVar7 & 0x80000001;
        bVar10 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar10 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar10) {
          if ((uint)bVar1 == iVar3 - 1U) {
            (this->CGraphicCtrl_Tile_Ani_data).offset_0x14 = uVar7 + 1;
          }
        }
        else if (bVar1 == 0) {
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x14 = uVar7 + 1;
        }
      }
      iVar6 = IsAnimationEnd(this);
      if (iVar6 != 0) break;
      __ActivateAniFrame_NotResetDelay(this,(uchar)uVar9,-1);
    }
    (*this->vftablePtr->OnSelfNotice)(this,0xff07);
  }
  return 0;
}



/* ---- CGraphicCtrl_Tile_Ani::CreateGraphicCtrl @ 60013520 size=1144 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */
/* public: virtual int __thiscall CGraphicCtrl_Tile_Ani::CreateGraphicCtrl(char *,unsigned
   char,int,unsigned char,unsigned char,unsigned long,int,unsigned char,class CPoint,int,int)
   CGraphicCtrl_Tile_Ani member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__CreateGraphicCtrl
          (CGraphicCtrl_Tile_Ani *this,uint param_1,undefined4 param_2,undefined1 param_3,
          undefined1 param_4,uint param_5,uint param_6,undefined1 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  CGraphicCtrl *this_00;
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  CList<CGraphicCtrl*,CGraphicCtrl*> *this_01;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 local_70;
  CHgDIB aCStack_6c [23];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13520  145
                       ?CreateGraphicCtrl@CGraphicCtrl_Tile_Ani@@UAEHPADEHEEKHEVCPoint@@HH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016d2a;
  local_c = ExceptionList;
  uVar4 = DAT_600259a8 ^ (uint)(aCStack_6c + -5);
  ExceptionList = &local_c;
  CHgDIB::CHgDIB((CHgDIB *)&local_70);
  local_4 = 0;
  cVar3 = (*local_70->Create)(param_1,uVar4);
  if (cVar3 == '\0') {
    puStack_8 = (undefined1 *)0xffffffff;
    CHgDIB::~CHgDIB(aCStack_6c + -2);
    iVar5 = 0;
  }
  else {
    uVar4 = param_1 & 0xff;
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x18 = param_6;
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x11 = (undefined1)param_1;
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x12 = 1;
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x20 = param_10;
    CHgImageBase::SetTileNum((CHgImageBase *)(aCStack_6c + -2),uVar4);
    iVar5 = CHgImageBase::GetWidth((CHgImageBase *)(aCStack_6c + -2));
    iVar6 = CHgImageBase::GetHeight((CHgImageBase *)(aCStack_6c + -2));
    puVar7 = operator_new__(-(uint)(0xfffffffb < uVar4 * 0x38) | uVar4 * 0x38 + 4);
    pcVar1 = ~CHgDDB_exref;
    puStack_8._0_1_ = 1;
    if (puVar7 == (uint *)0x0) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = puVar7 + 1;
      *puVar7 = uVar4;
      _eh_vector_constructor_iterator_(puVar9,0x38,uVar4,CHgDDB::~CHgDDB,pcVar1);
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x4 = puVar9;
    puVar8 = operator_new__(0x20);
    puStack_8._0_1_ = 2;
    if (puVar8 == (undefined4 *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = puVar8 + 1;
      *puVar8 = 1;
      _eh_vector_constructor_iterator_
                (piVar10,0x1c,1,
                 CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::
                 CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>,
                 CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::
                 CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_Constructor_or_Destructor
                );
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x8 = piVar10;
    if (param_5 == 0xffffffff) {
      if (uVar4 != 0) {
        iVar11 = 0;
        param_5 = uVar4;
        do {
          (**(code **)(*(int *)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x4 + iVar11) + 0x10)
          )(iVar5 / (int)uVar4,iVar6);
          iVar11 = iVar11 + 0x38;
          param_5 = param_5 - 1;
        } while (param_5 != 0);
      }
    }
    else if (uVar4 != 0) {
      iVar11 = 0;
      param_6 = uVar4;
      do {
        (**(code **)(*(int *)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x4 + iVar11) + 0xc))
                  (iVar5 / (int)uVar4,iVar6,param_5);
        iVar11 = iVar11 + 0x38;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
    }
    param_5 = 0;
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        CHgImage::DrawTile((CHgImage *)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x4 + iVar5),
                           0,0,(CHgImage *)(aCStack_6c + -2),param_5,0x100,0);
        puVar8 = operator_new(0x48);
        uVar2 = _DAT_600189a8;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8[10] = _DAT_600189a8;
          *puVar8 = &_KeyFrame::vftable;
          puVar8[0xb] = uVar2;
          puVar8[2] = 0;
          puVar8[1] = 0;
          puVar8[0xc] = 0x3f800000;
          *(undefined1 *)(puVar8 + 3) = 0;
          puVar8[0xd] = 0x3f800000;
          *(undefined1 *)((int)puVar8 + 0xd) = 0xff;
          *(undefined1 *)((int)puVar8 + 0xe) = 0xff;
          puVar8[0xe] = 0;
          puVar8[8] = 0;
          puVar8[0x11] = 0;
          puVar8[9] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[0xf] = 0x3f800000;
          puVar8[7] = 0;
          puVar8[0x10] = 0x3f800000;
        }
        puVar8[2] = param_2;
        puVar8[1] = param_5;
        *(undefined1 *)(puVar8 + 3) = param_3;
        *(undefined1 *)((int)puVar8 + 0xd) = param_4;
        *(undefined1 *)((int)puVar8 + 0xe) = param_4;
        puVar8[8] = param_8;
        puVar8[9] = param_9;
        piVar10 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
        iVar6 = FUN_600128b0(piVar10,piVar10[2],0);
        *(undefined4 **)(iVar6 + 8) = puVar8;
        if ((int *)piVar10[2] == (int *)0x0) {
          piVar10[1] = iVar6;
        }
        else {
          *(int *)piVar10[2] = iVar6;
        }
        iVar5 = iVar5 + 0x38;
        piVar10[2] = iVar6;
        param_5 = param_5 + 1;
      } while ((int)param_5 < (int)uVar4);
    }
    this_01 = operator_new(0x194);
    puStack_8._0_1_ = 3;
    if (this_01 == (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0) {
      this_01 = (CList<CGraphicCtrl*,CGraphicCtrl*> *)0x0;
    }
    else {
      CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(this_01);
      this_01[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
      this_01->vftablePtr =
           (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)&CGraphicCtrl_Tile_Element::vftable;
      this_01[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x10 = (CPlex *)0x0;
      this_01[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
      this_01[0xf].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x0;
      this_01[0x10].vftablePtr = (CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *)0x3f800000;
      this_01[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
      this_01[0xf].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0;
      this_01[0x10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x4 = 0;
      this_01[0x10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x8 = 0;
      this_01[0x10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0x0 = (undefined4 *)0x0;
      *(undefined1 *)&this_01[0x10].CList<CGraphicCtrl*,CGraphicCtrl*>_data.offset_0xc = 0;
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x0 = this_01;
    CGraphicCtrl::AddChild((CGraphicCtrl *)this,(CGraphicCtrl *)this_01,'\0',(CGraphicCtrl *)0x0);
    this_00 = (CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
    if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
      CGraphicCtrl::__AdjustShow(this_00,1);
      (this_00->CGraphicCtrl_data).offset_0xc = 1;
    }
    piVar10 = (int *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
    if (piVar10[6] != 1) {
      pcVar1 = *(code **)(*piVar10 + 0x2c);
      piVar10[6] = 1;
      piVar10[0x49] = 0;
      (*pcVar1)(0xff03);
    }
    ActivateAniFrame(this,'\0',0);
    CGraphicCtrl::SetPosBase((CGraphicCtrl *)this,param_8,param_9);
    (this->CGraphicCtrl_data).offset_0x1c = param_11;
    (this->CGraphicCtrl_Tile_Ani_data).offset_0x10 = param_7;
    puStack_8 = (undefined1 *)0xffffffff;
    CHgDIB::~CHgDIB(aCStack_6c + -2);
    iVar5 = 1;
  }
  ExceptionList = pvStack_10;
  return iVar5;
}



/* ---- SetAniFrameIndex @ 600139a0 size=35 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::SetAniFrameIndex(unsigned char,int) */

int __thiscall
CGraphicCtrl_Tile_Ani::SetAniFrameIndex(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2)

{
                    /* 0x139a0  379  ?SetAniFrameIndex@CGraphicCtrl_Tile_Ani@@QAEHEH@Z */
  if (param_2 == -1) {
    param_2 = (int)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e;
  }
  ActivateAniFrame(this,param_1,param_2);
  return 1;
}



/* ---- CGraphicCtrl_Tile_Ani::CreateGraphicCtrl @ 600139d0 size=2064 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall CGraphicCtrl_Tile_Ani::CreateGraphicCtrl(char *,int,int)
   CGraphicCtrl_Tile_Ani member function inherited by CGraphicCtrl_PushBtn_Ani */

int __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__CreateGraphicCtrl
          (CGraphicCtrl_Tile_Ani *this,char *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  size_t _Size;
  CGraphicCtrl *this_00;
  code *pcVar4;
  byte bVar5;
  short sVar7;
  short sVar6;
  HANDLE hFile;
  DWORD dwMaximumSizeLow;
  HANDLE hFileMappingObject;
  byte *lpBaseAddress;
  uint *puVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  _KeyFrame *this_01;
  int extraout_EAX;
  CGraphicCtrl_Tile_Element *pCVar13;
  uint uVar14;
  int iVar15;
  CHgImageBase *pCVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  ushort *puVar20;
  byte local_39;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  int iStack_1c;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x139d0  146  ?CreateGraphicCtrl@CGraphicCtrl_Tile_Ani@@UAEHPADHH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60016d71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar15 = 0;
  local_39 = 0;
  if (param_1 == (char *)0x0) {
LAB_600141bd:
    (this->CGraphicCtrl_data).offset_0x1c = param_3;
  }
  else {
    hFile = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      dwMaximumSizeLow = GetFileSize(hFile,(LPDWORD)0x0);
      if ((dwMaximumSizeLow != 0xffffffff) &&
         (hFileMappingObject =
               CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,dwMaximumSizeLow,(LPCSTR)0x0)
         , hFileMappingObject != (HANDLE)0x0)) {
        lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
        if (lpBaseAddress == (byte *)0x0) {
          CloseHandle(hFileMappingObject);
          CloseHandle(hFile);
          ExceptionList = local_c;
          return 0;
        }
        if ((char)*lpBaseAddress < '\0') {
          uVar2 = *(uint *)(lpBaseAddress + 1);
          bVar5 = *lpBaseAddress & 0x7f;
          bVar5 = (bVar5 == 0x7f) - 1U & bVar5;
          uVar14 = -(uint)((int)((ulonglong)uVar2 * 0x38 >> 0x20) != 0) |
                   (uint)((ulonglong)uVar2 * 0x38);
          puVar8 = operator_new__(-(uint)(0xfffffffb < uVar14) | uVar14 + 4);
          pcVar4 = ~CHgDDB_exref;
          local_4 = 0;
          if (puVar8 == (uint *)0x0) {
            puVar19 = (uint *)0x0;
          }
          else {
            puVar19 = puVar8 + 1;
            *puVar8 = uVar2;
            _eh_vector_constructor_iterator_(puVar19,0x38,uVar2,CHgDDB::~CHgDDB,pcVar4);
          }
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x4 = puVar19;
          local_4 = 0xffffffff;
          pvVar9 = operator_new__(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar2 * 8));
          iVar15 = 9;
          if (bVar5 == 0) {
            local_2c = *(int *)(lpBaseAddress + 5);
            local_30 = 1;
          }
          else {
            local_30 = *(uint *)(lpBaseAddress + 5);
            if (2 < bVar5) {
              local_39 = lpBaseAddress[9];
              iVar15 = 10;
            }
          }
          local_34 = 0;
          if (0 < (int)uVar2) {
            local_28 = (undefined4 *)0x0;
            do {
              pCVar16 = (CHgImageBase *)
                        ((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x4 + (int)local_28);
              if (bVar5 < 2) {
                *(undefined4 *)((int)pvVar9 + local_34 * 8) = 0;
                *(undefined4 *)((int)pvVar9 + local_34 * 8 + 4) = 0;
              }
              else {
                *(undefined4 *)((int)pvVar9 + local_34 * 8) =
                     *(undefined4 *)(lpBaseAddress + iVar15 + 8);
                *(undefined4 *)((int)pvVar9 + local_34 * 8 + 4) =
                     *(undefined4 *)(lpBaseAddress + iVar15 + 0xc);
                iVar15 = iVar15 + 0x10;
              }
              if (pCVar16 != (CHgImageBase *)0x0) {
                pbVar1 = lpBaseAddress + iVar15;
                iVar17 = iVar15 + 0x14;
                (**(code **)(*(int *)pCVar16 + 0xc))
                          (*(undefined4 *)(lpBaseAddress + iVar15),*(int *)(pbVar1 + 4),
                           *(undefined4 *)(lpBaseAddress + iVar15 + 0x10));
                iVar15 = iVar17 + *(int *)(pbVar1 + 0xc);
                FUN_60002f70((int)(lpBaseAddress + iVar17),pCVar16,(int *)pbVar1);
              }
              local_28 = (undefined4 *)((int)local_28 + 0x38);
              local_34 = local_34 + 1;
            } while (local_34 < (int)uVar2);
          }
          uVar14 = -(uint)((int)((ulonglong)local_30 * 0x1c >> 0x20) != 0) |
                   (uint)((ulonglong)local_30 * 0x1c);
          puVar8 = operator_new__(-(uint)(0xfffffffb < uVar14) | uVar14 + 4);
          local_4 = 1;
          if (puVar8 == (uint *)0x0) {
            puVar19 = (uint *)0x0;
          }
          else {
            puVar19 = puVar8 + 1;
            *puVar8 = local_30;
            _eh_vector_constructor_iterator_
                      (puVar19,0x1c,local_30,
                       CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::
                       CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>,
                       CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::
                       CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_Constructor_or_Destructor
                      );
          }
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x8 = (int *)puVar19;
          local_4 = 0xffffffff;
          pvVar10 = operator_new__(-(uint)((int)((ulonglong)local_30 * 4 >> 0x20) != 0) |
                                   (uint)((ulonglong)local_30 * 4));
          (this->CGraphicCtrl_Tile_Ani_data).offset_0xc = pvVar10;
          if (0 < (int)local_30) {
            local_28 = (undefined4 *)0x0;
            local_18 = local_30;
            do {
              piVar3 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
              for (puVar11 = *(undefined4 **)((int)piVar3 + (int)local_28 + 4);
                  puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)*puVar11) {
              }
              *(undefined4 *)((int)piVar3 + (int)local_28 + 0xc) = 0;
              *(undefined4 *)((int)piVar3 + (int)local_28 + 0x10) = 0;
              *(undefined4 *)((int)piVar3 + (int)local_28 + 8) = 0;
              *(undefined4 *)((int)piVar3 + (int)local_28 + 4) = 0;
              CPlex::FreeDataChain(*(CPlex **)((int)piVar3 + (int)local_28 + 0x14));
              local_18 = local_18 - 1;
              *(undefined4 *)((int)piVar3 + (int)local_28 + 0x14) = 0;
              local_28 = (undefined4 *)((int)local_28 + 0x1c);
            } while (local_18 != 0);
          }
          local_28 = (undefined4 *)0x0;
          if (bVar5 == 0) {
            pvVar10 = operator_new__(5);
            *(void **)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc = pvVar10;
            strcpy_s(*(char **)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc,5,"BASIC");
            local_34 = 0;
            if (0 < local_2c) {
              puVar20 = (ushort *)(lpBaseAddress + iVar15);
              do {
                this_01 = operator_new(0x48);
                if (this_01 == (_KeyFrame *)0x0) {
                  iVar15 = 0;
                }
                else {
                  _KeyFrame::_KeyFrame(this_01);
                  iVar15 = extraout_EAX;
                }
                *(uint *)(iVar15 + 4) = (uint)*puVar20;
                uVar12 = FUN_60014ae0((uint)(byte)puVar20[1]);
                *(char *)(iVar15 + 0xc) = (char)uVar12;
                *(byte *)(iVar15 + 0xd) = *(byte *)((int)puVar20 + 3);
                *(uint *)(iVar15 + 8) = (uint)(byte)puVar20[2];
                uVar12 = *(undefined4 *)(puVar20 + 3);
                *(int *)(iVar15 + 0x24) = (int)(short)((uint)uVar12 >> 0x10);
                *(int *)(iVar15 + 0x20) = (int)(short)uVar12;
                uVar12 = *(undefined4 *)(puVar20 + 5);
                puVar20 = puVar20 + 7;
                *(int *)(iVar15 + 0x10) = (int)(short)uVar12;
                *(int *)(iVar15 + 0x14) = (int)(short)((uint)uVar12 >> 0x10);
                if (local_28 != (undefined4 *)0x0) {
                  *(undefined1 *)((int)local_28 + 0xe) = *(undefined1 *)(iVar15 + 0xd);
                  *(undefined4 *)((int)local_28 + 0x18) = *(undefined4 *)(iVar15 + 0x10);
                  *(undefined4 *)((int)local_28 + 0x1c) = *(undefined4 *)(iVar15 + 0x14);
                }
                if (local_34 == local_2c + -1) {
                  *(undefined1 *)(iVar15 + 0xe) = *(undefined1 *)(iVar15 + 0xd);
                  *(undefined4 *)(iVar15 + 0x18) = *(undefined4 *)(iVar15 + 0x10);
                  *(undefined4 *)(iVar15 + 0x1c) = *(undefined4 *)(iVar15 + 0x14);
                }
                piVar3 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
                iVar17 = FUN_600128b0(piVar3,piVar3[2],0);
                *(int *)(iVar17 + 8) = iVar15;
                if ((int *)piVar3[2] == (int *)0x0) {
                  piVar3[1] = iVar17;
                }
                else {
                  *(int *)piVar3[2] = iVar17;
                }
                piVar3[2] = iVar17;
                local_34 = local_34 + 1;
                local_28 = (undefined4 *)iVar15;
              } while (local_34 < local_2c);
            }
          }
          else {
            iStack_1c = 0;
            if (0 < (int)local_30) {
              local_18 = 0;
              do {
                _Size = *(size_t *)(lpBaseAddress + iVar15);
                local_28 = (undefined4 *)0x0;
                pvVar10 = operator_new__(_Size + 1);
                *(void **)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc + iStack_1c * 4) =
                     pvVar10;
                memcpy(*(void **)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc + iStack_1c * 4
                                 ),lpBaseAddress + iVar15 + 4,_Size);
                iVar15 = iVar15 + 4 + _Size;
                *(undefined1 *)
                 (_Size + *(int *)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc +
                                  iStack_1c * 4)) = 0;
                iVar17 = *(int *)(lpBaseAddress + iVar15);
                iVar15 = iVar15 + 4;
                local_34 = 0;
                if (0 < iVar17) {
                  do {
                    puVar11 = operator_new(0x48);
                    uVar12 = _DAT_600189a8;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = (undefined4 *)0x0;
                    }
                    else {
                      puVar11[10] = _DAT_600189a8;
                      puVar11[0xb] = uVar12;
                      *puVar11 = &_KeyFrame::vftable;
                      puVar11[2] = 0;
                      puVar11[0xc] = 0x3f800000;
                      puVar11[1] = 0;
                      puVar11[0xd] = 0x3f800000;
                      *(undefined1 *)(puVar11 + 3) = 0;
                      *(undefined1 *)((int)puVar11 + 0xd) = 0xff;
                      puVar11[0xe] = 0;
                      *(undefined1 *)((int)puVar11 + 0xe) = 0xff;
                      puVar11[0x11] = 0;
                      puVar11[8] = 0;
                      puVar11[9] = 0;
                      puVar11[4] = 0;
                      puVar11[5] = 0;
                      puVar11[0xf] = 0x3f800000;
                      puVar11[6] = 0;
                      puVar11[0x10] = 0x3f800000;
                      puVar11[7] = 0;
                    }
                    puVar11[1] = (uint)*(ushort *)(lpBaseAddress + iVar15);
                    uVar12 = FUN_60014ae0((uint)lpBaseAddress[iVar15 + 2]);
                    iVar18 = iVar15 + 3;
                    *(char *)(puVar11 + 3) = (char)uVar12;
                    if (3 < bVar5) {
                      iVar18 = iVar15 + 6;
                    }
                    *(byte *)((int)puVar11 + 0xd) = lpBaseAddress[iVar18];
                    puVar11[2] = (uint)*(ushort *)(lpBaseAddress + iVar18 + 1);
                    sVar6 = (short)*(undefined4 *)(lpBaseAddress + iVar18 + 3);
                    sVar7 = (short)((uint)*(undefined4 *)(lpBaseAddress + iVar18 + 3) >> 0x10);
                    if (bVar5 < 3) {
                      puVar11[8] = (int)sVar6;
                      puVar11[9] = (int)sVar7;
                    }
                    else {
                      piVar3 = (int *)((int)pvVar9 + puVar11[1] * 8);
                      puVar11[8] = (int)sVar6 - *piVar3;
                      puVar11[9] = (int)sVar7 - piVar3[1];
                    }
                    iVar15 = iVar18 + 0xb;
                    sVar6 = (short)*(undefined4 *)(lpBaseAddress + iVar18 + 7);
                    sVar7 = (short)((uint)*(undefined4 *)(lpBaseAddress + iVar18 + 7) >> 0x10);
                    if (bVar5 < 3) {
                      piVar3 = (int *)((int)pvVar9 + puVar11[1] * 8);
                      puVar11[4] = (int)sVar6 + *piVar3;
                      puVar11[5] = (int)sVar7 + piVar3[1];
                    }
                    else {
                      puVar11[4] = (int)sVar6;
                      puVar11[5] = (int)sVar7;
                      puVar11[0xd] = *(undefined4 *)(lpBaseAddress + iVar15);
                      iVar15 = iVar18 + 0x17;
                      puVar11[0xc] = *(undefined4 *)(lpBaseAddress + iVar18 + 0xf);
                      puVar11[0xe] = *(undefined4 *)(lpBaseAddress + iVar18 + 0x13);
                    }
                    if (local_28 != (undefined4 *)0x0) {
                      *(undefined1 *)((int)local_28 + 0xe) = *(undefined1 *)((int)puVar11 + 0xd);
                      local_28[6] = puVar11[4];
                      local_28[7] = puVar11[5];
                      local_28[0xf] = puVar11[0xc];
                      local_28[0x10] = puVar11[0xd];
                      local_28[0x11] = puVar11[0xe];
                    }
                    if (local_34 == iVar17 + -1) {
                      puVar11[0xf] = puVar11[0xc];
                      puVar11[0x10] = puVar11[0xd];
                      *(undefined1 *)((int)puVar11 + 0xe) = *(undefined1 *)((int)puVar11 + 0xd);
                      puVar11[6] = puVar11[4];
                      puVar11[0x11] = puVar11[0xe];
                      puVar11[7] = puVar11[5];
                    }
                    pvVar10 = (void *)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0x8 + local_18
                                      );
                    iVar18 = FUN_600128b0(pvVar10,*(undefined4 *)((int)pvVar10 + 8),0);
                    *(undefined4 **)(iVar18 + 8) = puVar11;
                    if (*(int **)((int)pvVar10 + 8) == (int *)0x0) {
                      *(int *)((int)pvVar10 + 4) = iVar18;
                    }
                    else {
                      **(int **)((int)pvVar10 + 8) = iVar18;
                    }
                    *(int *)((int)pvVar10 + 8) = iVar18;
                    local_34 = local_34 + 1;
                    local_28 = puVar11;
                  } while (local_34 < iVar17);
                }
                local_18 = local_18 + 0x1c;
                iStack_1c = iStack_1c + 1;
              } while (iStack_1c < (int)local_30);
            }
          }
          local_24 = (undefined1)uVar2;
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x11 = local_24;
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x12 = (byte)local_30;
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x18 = 1;
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x10 = 0;
          (this->CGraphicCtrl_data).offset_0x11c = 0;
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x20 = param_2;
          pCVar13 = operator_new(0x194);
          local_4 = 2;
          if (pCVar13 == (CGraphicCtrl_Tile_Element *)0x0) {
            pCVar13 = (CGraphicCtrl_Tile_Element *)0x0;
          }
          else {
            pCVar13 = CGraphicCtrl_Tile_Element::CGraphicCtrl_Tile_Element(pCVar13);
          }
          local_4 = 0xffffffff;
          (this->CGraphicCtrl_Tile_Ani_data).offset_0x0 = pCVar13;
          if (pCVar13 != (CGraphicCtrl_Tile_Element *)0x0) {
            (pCVar13->CGraphicCtrl_Tile_Element_data).offset_0xc = (uint)bVar5;
            *(byte *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 400) = local_39;
            CGraphicCtrl::AddChild
                      ((CGraphicCtrl *)this,
                       (CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0,'\0',
                       (CGraphicCtrl *)0x0);
            this_00 = (CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
            if ((this_00->CGraphicCtrl_data).offset_0xc != 1) {
              CGraphicCtrl::__AdjustShow(this_00,1);
              (this_00->CGraphicCtrl_data).offset_0xc = 1;
            }
            piVar3 = (int *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
            if (piVar3[6] != 1) {
              pcVar4 = *(code **)(*piVar3 + 0x2c);
              piVar3[6] = 1;
              piVar3[0x49] = 0;
              (*pcVar4)(0xff03);
            }
          }
          ActivateAniFrame(this,'\0',0);
          operator_delete__(pvVar9);
          iVar15 = 1;
        }
        UnmapViewOfFile(lpBaseAddress);
        CloseHandle(hFileMappingObject);
        CloseHandle(hFile);
        goto LAB_600141bd;
      }
      CloseHandle(hFile);
    }
    iVar15 = 0;
  }
  ExceptionList = local_c;
  return iVar15;
}



/* ---- CGraphicCtrl_Tile_Ani::CreateInstance @ 600141e0 size=220 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_Tile_Ani::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__CreateInstance(CGraphicCtrl_Tile_Ani *this)

{
  int iVar1;
  CGraphicCtrl_Tile_Ani *this_00;
  undefined4 uVar2;
  
                    /* 0x141e0  161  ?CreateInstance@CGraphicCtrl_Tile_Ani@@UAEPAVCGraphicCtrl@@XZ
                        */
  this_00 = (CGraphicCtrl_Tile_Ani *)
            CGraphicCtrl::CGraphicCtrl__CreateInstance((CGraphicCtrl *)this);
  iVar1 = (this_00->CGraphicCtrl_data).offset_0xec;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x11 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x11
  ;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x4 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x4;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (this_00->CGraphicCtrl_data).offset_0xe4[2];
  }
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x0 = uVar2;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x18 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x18
  ;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x10 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x10
  ;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x12 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x12
  ;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x20 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x20
  ;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0x8 = (this->CGraphicCtrl_Tile_Ani_data).offset_0x8;
  (this_00->CGraphicCtrl_Tile_Ani_data).offset_0xc = (this->CGraphicCtrl_Tile_Ani_data).offset_0xc;
  ActivateAniFrame(this_00,'\0',0);
  *(undefined4 *)((this_00->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x174) =
       *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x174);
  *(undefined1 *)((this_00->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 4) =
       *(undefined1 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 4);
  *(undefined1 *)((this_00->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 400) =
       *(undefined1 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 400);
  return (CGraphicCtrl *)this_00;
}



/* ---- CGraphicCtrl_Tile_Ani::OnSelfNotice @ 600142c0 size=231 ---- */

/* public: virtual void __thiscall CGraphicCtrl_Tile_Ani::OnSelfNotice(unsigned short)
   CGraphicCtrl_Tile_Ani member function inherited by CGraphicCtrl_PushBtn_Ani */

void __thiscall
CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani__OnSelfNotice
          (CGraphicCtrl_Tile_Ani *this,ushort param_1)

{
  CGraphicCtrl *pCVar1;
  _KeyFrame *p_Var2;
  
                    /* 0x142c0  336  ?OnSelfNotice@CGraphicCtrl_Tile_Ani@@UAEXG@Z */
  switch(param_1) {
  case 0xff01:
    pCVar1 = (CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
    if (pCVar1 != (CGraphicCtrl *)0x0) {
      CGraphicCtrl::SetClippingRect(pCVar1,(CRect *)&(this->CGraphicCtrl_data).field_0x10c);
      return;
    }
    break;
  case 0xff02:
    pCVar1 = (CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
    if ((pCVar1 != (CGraphicCtrl *)0x0) &&
       (p_Var2 = GetKeyFrame(this,(this->CGraphicCtrl_Tile_Ani_data).offset_0x1c,
                             (uint)(byte)(this->CGraphicCtrl_Tile_Ani_data).offset_0x1e),
       p_Var2 != (_KeyFrame *)0x0)) {
      CGraphicCtrl::SetPosBase_low
                (pCVar1,(this->CGraphicCtrl_data).offset_0xc0 + *(int *)(p_Var2 + 0x20),
                 (this->CGraphicCtrl_data).offset_0xc4 + *(int *)(p_Var2 + 0x24));
      *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x170) = 1;
    }
    break;
  case 0xff03:
    pCVar1 = (CGraphicCtrl *)(this->CGraphicCtrl_Tile_Ani_data).offset_0x0;
    if (pCVar1 != (CGraphicCtrl *)0x0) {
      CGraphicCtrl::PlayCtrl(pCVar1,(this->CGraphicCtrl_data).offset_0x14);
      *(undefined4 *)((this->CGraphicCtrl_Tile_Ani_data).offset_0x0 + 0x124) = 0;
      return;
    }
    break;
  case 0xff05:
    Rewind(this);
    return;
  case 0xff07:
    if ((this->CGraphicCtrl_Tile_Ani_data).offset_0x20 != 0) {
      (this->CGraphicCtrl_data).offset_0x18 = 1;
    }
    if ((this->CGraphicCtrl_Tile_Ani_data).offset_0x24 != 0) {
      CGraphicCtrl::ShowCtrl((CGraphicCtrl *)this,0);
      return;
    }
  }
  return;
}



/* ---- ActivateAni @ 600143d0 size=15 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::ActivateAni(int) */

int __thiscall CGraphicCtrl_Tile_Ani::ActivateAni(CGraphicCtrl_Tile_Ani *this,int param_1)

{
  int iVar1;
  
                    /* 0x143d0  102  ?ActivateAni@CGraphicCtrl_Tile_Ani@@QAEHH@Z */
  iVar1 = ActivateAniFrame(this,'\0',param_1);
  return iVar1;
}



/* ---- ActivateAni @ 600143e0 size=87 ---- */

/* public: int __thiscall CGraphicCtrl_Tile_Ani::ActivateAni(char *) */

int __thiscall CGraphicCtrl_Tile_Ani::ActivateAni(CGraphicCtrl_Tile_Ani *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x143e0  103  ?ActivateAni@CGraphicCtrl_Tile_Ani@@QAEHPAD@Z */
  iVar2 = 0;
  if ((this->CGraphicCtrl_Tile_Ani_data).offset_0x12 != 0) {
    do {
      iVar1 = _mbscmp(*(uchar **)((int)(this->CGraphicCtrl_Tile_Ani_data).offset_0xc + iVar2 * 4),
                      (uchar *)param_1);
      if (iVar1 == 0) {
        iVar2 = ActivateAniFrame(this,'\0',iVar2);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)(this->CGraphicCtrl_Tile_Ani_data).offset_0x12);
  }
  return 0;
}



/* ---- ~CGraphicCtrl_Tile_Scale @ 60014440 size=11 ---- */

/* public: virtual __thiscall CGraphicCtrl_Tile_Scale::~CGraphicCtrl_Tile_Scale(void) */

void __thiscall CGraphicCtrl_Tile_Scale::~CGraphicCtrl_Tile_Scale(CGraphicCtrl_Tile_Scale *this)

{
                    /* 0x14440  55  ??1CGraphicCtrl_Tile_Scale@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  CGraphicCtrl_Tile::~CGraphicCtrl_Tile((CGraphicCtrl_Tile *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 60014450 size=91 ---- */

CGraphicCtrl_Tile * __thiscall
CGraphicCtrl_Tile_Scale::scalar_deleting_destructor(CGraphicCtrl_Tile_Scale *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGraphicCtrl_Tile_Scale::~CGraphicCtrl_Tile_Scale */
    this->vftablePtr = &_vftable_;
    CGraphicCtrl_Tile::~CGraphicCtrl_Tile((CGraphicCtrl_Tile *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGraphicCtrl_Tile *)this;
  }
  puVar1 = &this[-1].CGraphicCtrl_Tile_Scale_data.offset_0x14;
  _eh_vector_destructor_iterator_
            (this,0x188,this[-1].CGraphicCtrl_Tile_Scale_data.offset_0x14,~CGraphicCtrl_Tile_Scale);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CGraphicCtrl_Tile *)puVar1;
}



/* ---- CGraphicCtrl_Tile_Scale::CreateInstance @ 600144b0 size=86 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_Tile_Scale::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale__CreateInstance(CGraphicCtrl_Tile_Scale *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0x144b0  162  ?CreateInstance@CGraphicCtrl_Tile_Scale@@UAEPAVCGraphicCtrl@@XZ
                        */
  pCVar1 = CGraphicCtrl_Tile::CGraphicCtrl_Tile__CreateInstance((CGraphicCtrl_Tile *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(undefined4 *)(pCVar1 + 0x170) = *(undefined4 *)&this->CGraphicCtrl_Tile_Scale_data;
    *(undefined4 *)(pCVar1 + 0x174) = *(undefined4 *)&(this->CGraphicCtrl_Tile_Scale_data).field_0x4
    ;
    *(undefined4 *)(pCVar1 + 0x178) = (this->CGraphicCtrl_Tile_Scale_data).offset_0x8;
    *(undefined4 *)(pCVar1 + 0x17c) = (this->CGraphicCtrl_Tile_Scale_data).offset_0xc;
    *(undefined4 *)(pCVar1 + 0x180) = (this->CGraphicCtrl_Tile_Scale_data).offset_0x10;
    *(undefined4 *)(pCVar1 + 0x184) = (this->CGraphicCtrl_Tile_Scale_data).offset_0x14;
  }
  return pCVar1;
}



/* ---- CGraphicCtrl_Tile_Scale::OnSelfNotice @ 60014510 size=69 ---- */

/* public: virtual void __thiscall CGraphicCtrl_Tile_Scale::OnSelfNotice(unsigned short) */

void __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale__OnSelfNotice
          (CGraphicCtrl_Tile_Scale *this,ushort param_1)

{
  int iVar1;
  
                    /* 0x14510  337  ?OnSelfNotice@CGraphicCtrl_Tile_Scale@@UAEXG@Z */
  if (param_1 == 0xff06) {
    iVar1 = (this->CGraphicCtrl_data).offset_0xd4;
    (this->CGraphicCtrl_Tile_Scale_data).offset_0x8 =
         (float)((this->CGraphicCtrl_data).offset_0xd0 + -1) /
         (float)*(int *)&this->CGraphicCtrl_Tile_Scale_data;
    (this->CGraphicCtrl_Tile_Scale_data).offset_0xc =
         (float)(iVar1 + -1) / (float)*(int *)&(this->CGraphicCtrl_Tile_Scale_data).field_0x4;
  }
  return;
}



/* ---- CGraphicCtrl_Tile_Scale @ 60014560 size=44 ---- */

/* public: __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale(void) */

CGraphicCtrl_Tile_Scale * __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale(CGraphicCtrl_Tile_Scale *this)

{
                    /* 0x14560  19  ??0CGraphicCtrl_Tile_Scale@@QAE@XZ */
  CGraphicCtrl_Tile::CGraphicCtrl_Tile((CGraphicCtrl_Tile *)this);
  (this->CGraphicCtrl_Tile_Scale_data).offset_0x8 = 0x3f800000;
  this->vftablePtr = &_vftable_;
  (this->CGraphicCtrl_Tile_Scale_data).offset_0xc = 0x3f800000;
  (this->CGraphicCtrl_Tile_Scale_data).offset_0x10 = 0x3f800000;
  (this->CGraphicCtrl_Tile_Scale_data).offset_0x14 = 0x3f800000;
  return this;
}



/* ---- CGraphicCtrl_Tile_Scale::DrawProc @ 60014590 size=202 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Tile_Scale::DrawProc(class CRect &,class CRect &) */

int __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale__DrawProc
          (CGraphicCtrl_Tile_Scale *this,CRect *param_1,CRect *param_2)

{
  CHgImageBase *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x14590  175  ?DrawProc@CGraphicCtrl_Tile_Scale@@UAEHAAVCRect@@0@Z */
  pCVar1 = (CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0;
  if (pCVar1 == (CHgImageBase *)0x0) {
    return 0;
  }
  iVar2 = (this->CGraphicCtrl_data).offset_0xd4;
  iVar3 = *(int *)&this->CGraphicCtrl_Tile_Scale_data;
  iVar4 = (this->CGraphicCtrl_data).offset_0xd0;
  CHgImage::DrawScale((CHgImage *)CGraphicCtrl::s_pBackBuf,*(int *)param_2,*(int *)(param_2 + 4),
                      pCVar1,(*(int *)param_1 * iVar3) / iVar4 +
                             (uint)(byte)(this->CGraphicCtrl_Tile_data).offset_0x5 * iVar3,
                      (*(int *)(param_1 + 4) *
                      *(int *)&(this->CGraphicCtrl_Tile_Scale_data).field_0x4) / iVar2,
                      ((*(int *)(param_2 + 8) - *(int *)param_2) * iVar3) / iVar4,
                      ((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) *
                      *(int *)&(this->CGraphicCtrl_Tile_Scale_data).field_0x4) / iVar2,
                      (float)(this->CGraphicCtrl_Tile_Scale_data).offset_0x8,
                      (float)(this->CGraphicCtrl_Tile_Scale_data).offset_0xc,
                      (uint)(byte)(this->CGraphicCtrl_data).offset_0x11f,
                      (uint)(byte)(this->CGraphicCtrl_data).offset_0x11c);
  return 1;
}



/* ---- CGraphicCtrl_Tile_Scale::_AllocSelf @ 60014660 size=121 ---- */

/* public: virtual void * __thiscall CGraphicCtrl_Tile_Scale::_AllocSelf(void) */

void * __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale___AllocSelf(CGraphicCtrl_Tile_Scale *this)

{
  CGraphicCtrl_Tile *this_00;
  CGraphicCtrl_Tile *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x14660  478  ?_AllocSelf@CGraphicCtrl_Tile_Scale@@UAEPAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6001665b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x188);
  local_4 = 0;
  pCVar1 = (CGraphicCtrl_Tile *)0x0;
  if (this_00 != (CGraphicCtrl_Tile *)0x0) {
    CGraphicCtrl_Tile::CGraphicCtrl_Tile(this_00);
    this_00[1].CGraphicCtrl_data.offset_0x4 = 0x3f800000;
    this_00->vftablePtr = (CGraphicCtrl_Tile_vftable *)&_vftable_;
    *(undefined4 *)&this_00[1].CGraphicCtrl_data.offset_0x8 = 0x3f800000;
    this_00[1].CGraphicCtrl_data.offset_0xc = 0x3f800000;
    this_00[1].CGraphicCtrl_data.offset_0x10 = 0x3f800000;
    pCVar1 = this_00;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- CGraphicCtrl_Tile_Scale::CreateGraphicCtrl @ 600146e0 size=408 ---- */

/* WARNING: Exceeded maximum restarts with more pending */
/* public: virtual int __thiscall CGraphicCtrl_Tile_Scale::CreateGraphicCtrl(class CCreateFT const
   &,int,unsigned long,unsigned char,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale__CreateGraphicCtrl
          (CGraphicCtrl_Tile_Scale *this,undefined4 *param_1,ulong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  CHgImageBase *this_00;
  char cVar2;
  CHgDDB *this_01;
  int iVar3;
  int iVar4;
  undefined4 in_stack_0000001c;
  CSize aCStack_12 [2];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x146e0  147
                       ?CreateGraphicCtrl@CGraphicCtrl_Tile_Scale@@UAEHABVCCreateFT@@HKEEVCPoint@@H@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60016d9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (this->CGraphicCtrl_Tile_data).offset_0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,DAT_600259a8 ^ (uint)(aCStack_12 + -0xe));
  }
  (this->CGraphicCtrl_Tile_data).offset_0x0 = (undefined4 *)0x0;
  this_01 = operator_new(0x38);
  uStack_4 = 0;
  if (this_01 == (CHgDDB *)0x0) {
    this_01 = (CHgDDB *)0x0;
  }
  else {
    CHgDDB::CHgDDB(this_01);
    this_01->vftablePtr = &CHgDDB::vftable;
  }
  (this->CGraphicCtrl_Tile_data).offset_0x0 = this_01;
  uStack_4 = 0xffffffff;
  if (param_1[2] == 0) {
    cVar2 = (*this_01->vftablePtr->Create)(*param_1,param_1[1]);
  }
  else {
    cVar2 = (*this_01->vftablePtr->Create)(param_1[2]);
  }
  if (cVar2 == '\0') {
    puVar1 = (this->CGraphicCtrl_Tile_data).offset_0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    (this->CGraphicCtrl_Tile_data).offset_0x0 = (undefined4 *)0x0;
    ExceptionList = pvStack_10;
    return 0;
  }
  if (param_2 != 0xffffffff) {
    CHgImageBase::SetTransparentColor
              ((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0,param_2);
  }
  if (param_1 == (undefined4 *)0x0) {
    iVar3 = CHgImageBase::GetHeight((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0);
    iVar4 = CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0);
    param_1 = (undefined4 *)(iVar4 / iVar3);
  }
  (this->CGraphicCtrl_data).offset_0x11c = param_3;
  (this->CGraphicCtrl_Tile_data).offset_0x4 = (char)param_1;
  iVar3 = CHgImageBase::GetWidth((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0);
  this_00 = (CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0;
  *(int *)&this->CGraphicCtrl_Tile_Scale_data = iVar3 / (int)param_1;
  iVar3 = CHgImageBase::GetHeight(this_00);
  *(int *)&(this->CGraphicCtrl_Tile_Scale_data).field_0x4 = iVar3;
  CGraphicCtrl::SetSize((CGraphicCtrl *)this,aCStack_12 + -6);
  CHgImageBase::SetTileNum((CHgImageBase *)(this->CGraphicCtrl_Tile_data).offset_0x0,(int)param_1);
  (this->CGraphicCtrl_data).offset_0x1c = in_stack_0000001c;
  ExceptionList = pvStack_10;
  return 1;
}



/* ---- CGraphicCtrl_Tile_Scale::CreateGraphicCtrl @ 60014880 size=77 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Tile_Scale::CreateGraphicCtrl(int,int,int,unsigned
   long,unsigned char,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale__CreateGraphicCtrl
          (CGraphicCtrl_Tile_Scale *this,undefined4 param_1,undefined4 param_2,ulong param_3,
          undefined1 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x14880  148
                       ?CreateGraphicCtrl@CGraphicCtrl_Tile_Scale@@UAEHHHHKEEVCPoint@@H@Z */
  local_c = param_1;
  local_8 = param_2;
  local_4 = 0;
  iVar1 = CGraphicCtrl_Tile_Scale__CreateGraphicCtrl(this,&local_c,param_3,param_4);
  return iVar1;
}



/* ---- CGraphicCtrl_Tile_Scale::CreateGraphicCtrl @ 600148d0 size=72 ---- */

/* public: virtual int __thiscall CGraphicCtrl_Tile_Scale::CreateGraphicCtrl(char *,int,unsigned
   long,unsigned char,unsigned char,class CPoint,int) */

int __thiscall
CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale__CreateGraphicCtrl
          (CGraphicCtrl_Tile_Scale *this,undefined4 param_1,ulong param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x148d0  149
                       ?CreateGraphicCtrl@CGraphicCtrl_Tile_Scale@@UAEHPADHKEEVCPoint@@H@Z */
  local_c = 0;
  local_8 = 0;
  local_4 = param_1;
  iVar1 = CGraphicCtrl_Tile_Scale__CreateGraphicCtrl(this,&local_c,param_2,param_3);
  return iVar1;
}



/* ---- CGraphicCtrl_TileSupport::CreateInstance @ 60014920 size=26 ---- */

/* public: virtual class CGraphicCtrl * __thiscall CGraphicCtrl_TileSupport::CreateInstance(void) */

CGraphicCtrl * __thiscall
CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport__CreateInstance(CGraphicCtrl_TileSupport *this)

{
  CGraphicCtrl *pCVar1;
  
                    /* 0x14920  160
                       ?CreateInstance@CGraphicCtrl_TileSupport@@UAEPAVCGraphicCtrl@@XZ */
  pCVar1 = CGraphicCtrl::CGraphicCtrl__CreateInstance((CGraphicCtrl *)this);
  if (pCVar1 != (CGraphicCtrl *)0x0) {
    *(undefined4 *)(pCVar1 + 0x168) = (this->CGraphicCtrl_TileSupport_data).offset_0x0;
  }
  return pCVar1;
}



/* ---- GetTileIntersectRect @ 60014940 size=150 ---- */

/* public: bool __thiscall CGraphicCtrl_TileSupport::GetTileIntersectRect(struct tagRECT *,struct
   tagRECT const *) */

bool __thiscall
CGraphicCtrl_TileSupport::GetTileIntersectRect
          (CGraphicCtrl_TileSupport *this,tagRECT *param_1,tagRECT *param_2)

{
  CHgImageBase *this_00;
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0x14940  249
                       ?GetTileIntersectRect@CGraphicCtrl_TileSupport@@QAE_NPAUtagRECT@@PBU2@@Z */
  this_00 = (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20;
  if (this_00 == (CHgImageBase *)0x0) {
    return false;
  }
  iVar1 = (this->CGraphicCtrl_TileSupport_data).offset_0x0;
  if (param_2 == (tagRECT *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x600149d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = CHgImageBase::GetTileRect(this_00,param_1,iVar1);
    return bVar2;
  }
  bVar2 = CHgImageBase::GetTileRect(this_00,&local_10,iVar1);
  if (bVar2) {
    local_20.top = param_2->top;
    local_20.right = param_2->right;
    local_20.left = param_2->left;
    local_20.bottom = param_2->bottom;
    OffsetRect(&local_20,local_10.left,0);
    BVar3 = IntersectRect(param_1,&local_20,&local_10);
    return BVar3 != 0;
  }
  return false;
}



/* ---- CGraphicCtrl_TileSupport::DrawProc @ 600149e0 size=60 ---- */

/* public: virtual int __thiscall CGraphicCtrl_TileSupport::DrawProc(class CRect &,class CRect &) */

int __thiscall
CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport__DrawProc
          (CGraphicCtrl_TileSupport *this,CRect *param_1,CRect *param_2)

{
  bool bVar1;
  int iVar2;
  tagRECT local_10;
  
                    /* 0x149e0  174  ?DrawProc@CGraphicCtrl_TileSupport@@UAEHAAVCRect@@0@Z */
  bVar1 = GetTileIntersectRect(this,&local_10,(tagRECT *)param_1);
  if (bVar1) {
    iVar2 = CGraphicCtrl::CGraphicCtrl__DrawProc((CGraphicCtrl *)this,(CRect *)&local_10,param_2);
    return iVar2;
  }
  return 0;
}



/* ---- ActivateTile @ 60014a20 size=68 ---- */

/* public: bool __thiscall CGraphicCtrl_TileSupport::ActivateTile(int) */

bool __thiscall CGraphicCtrl_TileSupport::ActivateTile(CGraphicCtrl_TileSupport *this,int param_1)

{
  int iVar1;
  
                    /* 0x14a20  107  ?ActivateTile@CGraphicCtrl_TileSupport@@QAE_NH@Z */
  iVar1 = CHgImageBase::GetTileNum((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20);
  if (iVar1 <= param_1) {
    return false;
  }
  if ((((this->CGraphicCtrl_TileSupport_data).offset_0x0 != param_1) &&
      (iVar1 = (this->CGraphicCtrl_data).offset_0xd8,
      (this->CGraphicCtrl_TileSupport_data).offset_0x0 = param_1, iVar1 != 0)) &&
     ((this->CGraphicCtrl_data).offset_0xc != 0)) {
    CGraphicCtrl::Invalidate((CGraphicCtrl *)this);
  }
  return true;
}



/* ---- SetTileNum @ 60014a70 size=107 ---- */

/* public: void __thiscall CGraphicCtrl_TileSupport::SetTileNum(int) */

void __thiscall CGraphicCtrl_TileSupport::SetTileNum(CGraphicCtrl_TileSupport *this,int param_1)

{
  CHgImageBase *pCVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
                    /* 0x14a70  445  ?SetTileNum@CGraphicCtrl_TileSupport@@QAEXH@Z */
  if (param_1 == 0) {
    pCVar1 = (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20;
    iVar2 = CHgImageBase::GetHeight(pCVar1);
    iVar3 = CHgImageBase::GetWidth(pCVar1);
    param_1 = iVar3 / iVar2;
  }
  CHgImageBase::SetTileNum((CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20,param_1);
  pCVar1 = (CHgImageBase *)(this->CGraphicCtrl_data).offset_0x20;
  iVar2 = CHgImageBase::GetHeight(pCVar1);
  local_8 = CHgImageBase::GetWidth(pCVar1);
  local_8 = local_8 / param_1;
  local_4 = iVar2;
  CGraphicCtrl::SetSize((CGraphicCtrl *)this,(CSize *)&local_8);
  return;
}



/* ---- FUN_60014ae0 @ 60014ae0 size=97 ---- */

undefined4 __cdecl FUN_60014ae0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 4;
  case 4:
    return 5;
  case 5:
    return 6;
  case 6:
    return 7;
  case 7:
    return 8;
  case 8:
    return 9;
  case 9:
    return 10;
  case 10:
    return 0xb;
  case 0xb:
    return 0xc;
  case 0xc:
    return 0xd;
  case 0xd:
    return 0xe;
  }
}



/* ---- CControlBase::CreateControl @ 60014b7c size=6 ---- */

bool __thiscall CControlBase::CControlBase__CreateControl(CControlBase *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CControlBase::DestroyControl @ 60014b82 size=6 ---- */

bool __thiscall CControlBase::CControlBase__DestroyControl(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DestroyControl(this);
  return bVar1;
}



/* ---- CControlBase::IsCreated @ 60014b88 size=6 ---- */

bool __thiscall CControlBase::CControlBase__IsCreated(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsCreated(this);
  return bVar1;
}



/* ---- CControlBase::ShowControl @ 60014b8e size=6 ---- */

void __thiscall CControlBase::CControlBase__ShowControl(CControlBase *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowControl(this,param_1);
  return;
}



/* ---- CControlBase::UpdateControlForGame @ 60014b94 size=6 ---- */

void __thiscall CControlBase::CControlBase__UpdateControlForGame(CControlBase *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControlForGame(this,param_1);
  return;
}



/* ---- CControlBase::GetCWndPtr @ 60014b9a size=6 ---- */

CWnd * __thiscall CControlBase::CControlBase__GetCWndPtr(CControlBase *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCWndPtr(this);
  return pCVar1;
}



/* ---- CHgImageBase::Create @ 60014ba0 size=6 ---- */

bool __thiscall CHgImageBase::CHgImageBase__Create(CHgImageBase *this,char *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1);
  return bVar1;
}



/* ---- CHgImageBase::Create @ 60014ba6 size=6 ---- */

bool __thiscall CHgImageBase::CHgImageBase__Create(CHgImageBase *this,char *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgImageBase::Create @ 60014bac size=6 ---- */

bool __thiscall
CHgImageBase::CHgImageBase__Create(CHgImageBase *this,int param_1,int param_2,ulong param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2,param_3);
  return bVar1;
}



/* ---- CHgDIB16::Create @ 60014bb2 size=6 ---- */

bool __thiscall CHgDIB16::CHgDIB16__Create(CHgDIB16 *this,int param_1,int param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgDIB16::Destroy @ 60014bb8 size=6 ---- */

void __thiscall CHgDIB16::CHgDIB16__Destroy(CHgDIB16 *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Destroy(this);
  return;
}



/* ---- CHgImage16::__CreateFromBitmapWithColorTable @ 60014bbe size=6 ---- */

bool __thiscall
CHgImage16::CHgImage16____CreateFromBitmapWithColorTable
          (CHgImage16 *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmapWithColorTable(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgImage16::__CreateFromBitmap16 @ 60014bc4 size=6 ---- */

bool __thiscall
CHgImage16::CHgImage16____CreateFromBitmap16(CHgImage16 *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmap16(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgImage16::__CreateFromBitmap24 @ 60014bca size=6 ---- */

bool __thiscall
CHgImage16::CHgImage16____CreateFromBitmap24(CHgImage16 *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmap24(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgDIB::Create @ 60014bd0 size=6 ---- */

bool __thiscall CHgDIB::CHgDIB__Create(CHgDIB *this,int param_1,int param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgDIB::Destroy @ 60014bd6 size=6 ---- */

void __thiscall CHgDIB::CHgDIB__Destroy(CHgDIB *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Destroy(this);
  return;
}



/* ---- CHgImage::__CreateFromBitmapWithColorTable @ 60014bdc size=6 ---- */

bool __thiscall
CHgImage::CHgImage____CreateFromBitmapWithColorTable(CHgImage *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmapWithColorTable(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgImage::__CreateFromBitmap16 @ 60014be2 size=6 ---- */

bool __thiscall
CHgImage::CHgImage____CreateFromBitmap16(CHgImage *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmap16(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgImage::__CreateFromBitmap24 @ 60014be8 size=6 ---- */

bool __thiscall
CHgImage::CHgImage____CreateFromBitmap24(CHgImage *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmap24(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgDDB::Create @ 60014bee size=6 ---- */

bool __thiscall CHgDDB::CHgDDB__Create(CHgDDB *this,int param_1,int param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



/* ---- CHgDDB::Destroy @ 60014bf4 size=6 ---- */

void __thiscall CHgDDB::CHgDDB__Destroy(CHgDDB *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Destroy(this);
  return;
}



/* ---- CGameWnd::PreCreateWindow @ 60014bfa size=6 ---- */

int __thiscall CGameWnd::CGameWnd__PreCreateWindow(CGameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::DisplayChatMessage @ 60014c00 size=6 ---- */

bool __thiscall
CGameWnd::CGameWnd__DisplayChatMessage
          (CGameWnd *this,uint param_1,char *param_2,int param_3,ulong param_4,int param_5,
          int param_6,char *param_7)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayChatMessage(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}



/* ---- CGameWnd::DisplayNoticeMessage @ 60014c06 size=6 ---- */

bool __thiscall
CGameWnd::CGameWnd__DisplayNoticeMessage
          (CGameWnd *this,char *param_1,int param_2,int param_3,char *param_4,char *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayNoticeMessage(this,param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}



/* ---- CGameWnd::DisplayStatusMessage @ 60014c0c size=6 ---- */

bool __thiscall
CGameWnd::CGameWnd__DisplayStatusMessage
          (CGameWnd *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5,
          char *param_6)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayStatusMessage(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return bVar1;
}



/* ---- CGameWnd::CaptureGameScreen @ 60014c12 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__CaptureGameScreen(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014c12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CaptureGameScreen(this);
  return;
}



/* ---- CGameWnd::FlipScreen @ 60014c18 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__FlipScreen(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FlipScreen(this);
  return iVar1;
}



/* ---- CGameWnd::ExitGameRoom @ 60014c1e size=6 ---- */

void __thiscall CGameWnd::CGameWnd__ExitGameRoom(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitGameRoom(this);
  return;
}



/* ---- CGameWnd::AccuseUser @ 60014c24 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__AccuseUser(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AccuseUser(this);
  return;
}



/* ---- CGameWnd::GetGameChatContent @ 60014c2a size=6 ---- */

char * __thiscall CGameWnd::CGameWnd__GetGameChatContent(CGameWnd *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetGameChatContent(this);
  return pcVar1;
}



/* ---- CGameWnd::UpdateChanceInfo @ 60014c30 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__UpdateChanceInfo(CGameWnd *this,CMemberData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateChanceInfo(this,param_1);
  return;
}



/* ---- CGameWnd::CreateCaptionButtons @ 60014c36 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__CreateCaptionButtons(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateCaptionButtons(this);
  return;
}



/* ---- CGameWnd::ShowInviteGameToChnlDlg @ 60014c3c size=6 ---- */

int __thiscall CGameWnd::CGameWnd__ShowInviteGameToChnlDlg(CGameWnd *this,bool param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowInviteGameToChnlDlg(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::StopHostBanishCheck @ 60014c42 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__StopHostBanishCheck(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StopHostBanishCheck(this);
  return;
}



/* ---- CGameWnd::StartHostBanishCheck @ 60014c48 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__StartHostBanishCheck(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StartHostBanishCheck(this);
  return;
}



/* ---- CGameWnd::GetGameOptionFromRegistry @ 60014c4e size=6 ---- */

int __thiscall CGameWnd::CGameWnd__GetGameOptionFromRegistry(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetGameOptionFromRegistry(this);
  return iVar1;
}



/* ---- CGameWnd::PlayEventSound @ 60014c54 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__PlayEventSound(CGameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PlayEventSound(this,param_1);
  return;
}



/* ---- CGameWnd::IsActivate @ 60014c5a size=6 ---- */

bool __thiscall CGameWnd::CGameWnd__IsActivate(CGameWnd *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsActivate(this);
  return bVar1;
}



/* ---- CGameWnd::ProcessItemProvokeCommand @ 60014c60 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__ProcessItemProvokeCommand(CGameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ProcessItemProvokeCommand(this,param_1);
  return;
}



/* ---- CGameWnd::HasRightOfBanish @ 60014c66 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__HasRightOfBanish(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = HasRightOfBanish(this);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnAddRoomMember @ 60014c6c size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnAddRoomMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnAddRoomMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnDeleteRoomMember @ 60014c72 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnDeleteRoomMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnDeleteRoomMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnRoomMemberList @ 60014c78 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnRoomMemberList(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnRoomMemberList(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnModifyRoomMemberInfo @ 60014c7e size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnModifyRoomMemberInfo(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnModifyRoomMemberInfo(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnEnableHostBanish @ 60014c84 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnEnableHostBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnEnableHostBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnTimeHostBanish @ 60014c8a size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnTimeHostBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnTimeHostBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnGameStatusMessage @ 60014c90 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnGameStatusMessage(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnGameStatusMessage(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnChatString @ 60014c96 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnChatString(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnChatString(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnReqBanishMember @ 60014c9c size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnReqBanishMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnReqBanishMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnClickBanishMember @ 60014ca2 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnClickBanishMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnClickBanishMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnHostBanishCheck @ 60014ca8 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnHostBanishCheck(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnHostBanishCheck(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnConnectTypeError @ 60014cae size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnConnectTypeError(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnConnectTypeError(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnItemReserveChance @ 60014cb4 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnItemReserveChance(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnItemReserveChance(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnStartNewGame @ 60014cba size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnStartNewGame(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnStartNewGame(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnRoomEvent @ 60014cc0 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnRoomEvent(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnRoomEvent(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnAltF4KeyDown @ 60014cc6 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnAltF4KeyDown(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnAltF4KeyDown(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_ChannelLobby_OnUpdateNotice @ 60014ccc size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_ChannelLobby_OnUpdateNotice(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_ChannelLobby_OnUpdateNotice(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnReserveBanish @ 60014cd2 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnReserveBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnReserveBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnExitGameDuetoShutdown @ 60014cd8 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnExitGameDuetoShutdown(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnExitGameDuetoShutdown(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnGetShutdownTime @ 60014cde size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnGetShutdownTime(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnGetShutdownTime(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Net_SocketClose @ 60014ce4 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Net_SocketClose(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Net_SocketClose(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Net_commandTimeBanish @ 60014cea size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Net_commandTimeBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Net_commandTimeBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::UpdateControl @ 60014cf0 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__UpdateControl(CGameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- operator_delete @ 60014cf6 size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- operator_new @ 60014cfc size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- CCmdTarget::OnCmdMsg @ 60014d02 size=6 ---- */

int __thiscall
CCmdTarget::CCmdTarget__OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::OnFinalRelease @ 60014d08 size=6 ---- */

void __thiscall CWnd::CWnd__OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CCmdTarget::IsInvokeAllowed @ 60014d0e size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetDispatchIID @ 60014d14 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetTypeInfoCount @ 60014d1a size=6 ---- */

uint __thiscall CCmdTarget::CCmdTarget__GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}



/* ---- CCmdTarget::GetTypeLibCache @ 60014d20 size=6 ---- */

CTypeLibCache * __thiscall CCmdTarget::CCmdTarget__GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}



/* ---- CCmdTarget::GetTypeLib @ 60014d26 size=6 ---- */

long __thiscall
CCmdTarget::CCmdTarget__GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}



/* ---- CCmdTarget::GetCommandMap @ 60014d2c size=6 ---- */

AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget__GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetDispatchMap @ 60014d32 size=6 ---- */

AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget__GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetConnectionMap @ 60014d38 size=6 ---- */

AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget__GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}



/* ---- CWnd::GetInterfaceMap @ 60014d3e size=6 ---- */

AFX_INTERFACEMAP * __thiscall CWnd::CWnd__GetInterfaceMap(CWnd *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetEventSinkMap @ 60014d44 size=6 ---- */

AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget__GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::OnCreateAggregates @ 60014d4a size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}



/* ---- CCmdTarget::GetInterfaceHook @ 60014d50 size=6 ---- */

IUnknown * __thiscall CCmdTarget::CCmdTarget__GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}



/* ---- CCmdTarget::GetExtraConnectionPoints @ 60014d56 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetConnectionHook @ 60014d5c size=6 ---- */

IConnectionPoint * __thiscall
CCmdTarget::CCmdTarget__GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}



/* ---- CWnd::PreSubclassWindow @ 60014d62 size=6 ---- */

void __thiscall CWnd::CWnd__PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}



/* ---- CWnd::Create @ 60014d68 size=6 ---- */

int __thiscall
CWnd::CWnd__Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                  CWnd *param_5,uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 60014d6e size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,
          CWnd *param_6,uint param_7,void *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 60014d74 size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
          int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
  return iVar1;
}



/* ---- CWnd::DestroyWindow @ 60014d7a size=6 ---- */

int __thiscall CWnd::CWnd__DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}



/* ---- CWnd::CalcWindowRect @ 60014d80 size=6 ---- */

void __thiscall CWnd::CWnd__CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}



/* ---- CWnd::GetMenu @ 60014d86 size=6 ---- */

CMenu * __thiscall CWnd::CWnd__GetMenu(CWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- CWnd::SetMenu @ 60014d8c size=6 ---- */

int __thiscall CWnd::CWnd__SetMenu(CWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnToolHitTest @ 60014d92 size=6 ---- */

int __thiscall CWnd::CWnd__OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}



/* ---- CWnd::GetScrollBarCtrl @ 60014d98 size=6 ---- */

CScrollBar * __thiscall CWnd::CWnd__GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}



/* ---- CWnd::WinHelpA @ 60014d9e size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::HtmlHelpA @ 60014da4 size=6 ---- */

void __thiscall CWnd::CWnd__HtmlHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::WinHelpInternal @ 60014daa size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWnd::ContinueModal @ 60014db0 size=6 ---- */

int __thiscall CWnd::CWnd__ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}



/* ---- CWnd::EndModalLoop @ 60014db6 size=6 ---- */

void __thiscall CWnd::CWnd__EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}



/* ---- CWnd::EnsureStdObj @ 60014dbc size=6 ---- */

long __thiscall CWnd::CWnd__EnsureStdObj(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = EnsureStdObj(this);
  return lVar1;
}



/* ---- CWnd::get_accParent @ 60014dc2 size=6 ---- */

long __thiscall CWnd::CWnd__get_accParent(CWnd *this,IDispatch **param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accParent(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChildCount @ 60014dc8 size=6 ---- */

long __thiscall CWnd::CWnd__get_accChildCount(CWnd *this,long *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChildCount(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChild @ 60014dce size=6 ---- */

long __thiscall CWnd::CWnd__get_accChild(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChild();
  return lVar1;
}



/* ---- CWnd::get_accName @ 60014dd4 size=6 ---- */

long __thiscall CWnd::CWnd__get_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accName();
  return lVar1;
}



/* ---- CWnd::get_accValue @ 60014dda size=6 ---- */

long __thiscall CWnd::CWnd__get_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accValue();
  return lVar1;
}



/* ---- CWnd::get_accDescription @ 60014de0 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDescription(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDescription();
  return lVar1;
}



/* ---- CWnd::get_accRole @ 60014de6 size=6 ---- */

long __thiscall CWnd::CWnd__get_accRole(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accRole();
  return lVar1;
}



/* ---- CWnd::get_accState @ 60014dec size=6 ---- */

long __thiscall CWnd::CWnd__get_accState(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accState();
  return lVar1;
}



/* ---- CWnd::get_accHelp @ 60014df2 size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelp(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelp();
  return lVar1;
}



/* ---- CWnd::get_accHelpTopic @ 60014df8 size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelpTopic(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelpTopic();
  return lVar1;
}



/* ---- CWnd::get_accKeyboardShortcut @ 60014dfe size=6 ---- */

long __thiscall CWnd::CWnd__get_accKeyboardShortcut(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accKeyboardShortcut();
  return lVar1;
}



/* ---- CWnd::get_accFocus @ 60014e04 size=6 ---- */

long __thiscall CWnd::CWnd__get_accFocus(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accFocus(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accSelection @ 60014e0a size=6 ---- */

long __thiscall CWnd::CWnd__get_accSelection(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accSelection(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accDefaultAction @ 60014e10 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDefaultAction();
  return lVar1;
}



/* ---- CWnd::accSelect @ 60014e16 size=6 ---- */

long __thiscall CWnd::CWnd__accSelect(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accSelect();
  return lVar1;
}



/* ---- CWnd::accLocation @ 60014e1c size=6 ---- */

long __thiscall CWnd::CWnd__accLocation(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accLocation();
  return lVar1;
}



/* ---- CWnd::accNavigate @ 60014e22 size=6 ---- */

long __thiscall CWnd::CWnd__accNavigate(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accNavigate();
  return lVar1;
}



/* ---- CWnd::accHitTest @ 60014e28 size=6 ---- */

long __thiscall CWnd::CWnd__accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accHitTest(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::accDoDefaultAction @ 60014e2e size=6 ---- */

long __thiscall CWnd::CWnd__accDoDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accDoDefaultAction();
  return lVar1;
}



/* ---- CWnd::put_accName @ 60014e34 size=6 ---- */

long __thiscall CWnd::CWnd__put_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accName();
  return lVar1;
}



/* ---- CWnd::put_accValue @ 60014e3a size=6 ---- */

long __thiscall CWnd::CWnd__put_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accValue();
  return lVar1;
}



/* ---- CWnd::SetProxy @ 60014e40 size=6 ---- */

long __thiscall CWnd::CWnd__SetProxy(CWnd *this,IAccessibleProxy *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = SetProxy(this,param_1);
  return lVar1;
}



/* ---- CWnd::CreateAccessibleProxy @ 60014e46 size=6 ---- */

long __thiscall
CWnd::CWnd__CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = CreateAccessibleProxy(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::OnCommand @ 60014e4c size=6 ---- */

int __thiscall CWnd::CWnd__OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- CWnd::OnNotify @ 60014e52 size=6 ---- */

int __thiscall CWnd::CWnd__OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::GetSuperWndProcAddr @ 60014e58 size=6 ---- */

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::CWnd__GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}



/* ---- CWnd::PreTranslateMessage @ 60014e5e size=6 ---- */

int __thiscall CWnd::CWnd__PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnAmbientProperty @ 60014e64 size=6 ---- */

int __thiscall
CWnd::CWnd__OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::WindowProc @ 60014e6a size=6 ---- */

long __thiscall CWnd::CWnd__WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::OnWndMsg @ 60014e70 size=6 ---- */

int __thiscall CWnd::CWnd__OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::DefWindowProcA @ 60014e76 size=6 ---- */

long __thiscall CWnd::CWnd__DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::PostNcDestroy @ 60014e7c size=6 ---- */

void __thiscall CWnd::CWnd__PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- CWnd::OnChildNotify @ 60014e82 size=6 ---- */

int __thiscall
CWnd::CWnd__OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::CheckAutoCenter @ 60014e88 size=6 ---- */

int __thiscall CWnd::CWnd__CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- CWnd::IsFrameWnd @ 60014e8e size=6 ---- */

int __thiscall CWnd::CWnd__IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- CWnd::CreateControlContainer @ 60014e94 size=6 ---- */

int __thiscall CWnd::CWnd__CreateControlContainer(CWnd *this,COleControlContainer **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlContainer(this,param_1);
  return iVar1;
}



/* ---- CWnd::CreateControlSite @ 60014e9a size=6 ---- */

int __thiscall
CWnd::CWnd__CreateControlSite
          (CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,
          _GUID *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlSite(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::SetOccDialogInfo @ 60014ea0 size=6 ---- */

int __thiscall CWnd::CWnd__SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- CWnd::GetOccDialogInfo @ 60014ea6 size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd__GetOccDialogInfo(CWnd *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- OnDestroy @ 60014eac size=6 ---- */

void __thiscall CWnd::OnDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}



/* ---- FromHandle @ 60014eb2 size=6 ---- */

CDC * CDC::FromHandle(HDC__ *param_1)

{
  CDC *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}



/* ---- Default @ 60014eb8 size=6 ---- */

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}



/* ---- operator_delete[] @ 60014ebe size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- ~CPaintDC @ 60014ec4 size=6 ---- */

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPaintDC(this);
  return;
}



/* ---- CPaintDC @ 60014eca size=6 ---- */

void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPaintDC(this,param_1);
  return;
}



/* ---- CWnd @ 60014ed0 size=6 ---- */

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}



/* ---- CStatic::GetRuntimeClass @ 60014ed6 size=6 ---- */

CRuntimeClass * __thiscall CStatic::CStatic__GetRuntimeClass(CStatic *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CWnd::GetMessageMap @ 60014edc size=6 ---- */

AFX_MSGMAP * __thiscall CWnd::CWnd__GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CWnd::PreCreateWindow @ 60014ee2 size=6 ---- */

int __thiscall CWnd::CWnd__PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- CStatic::OnChildNotify @ 60014ee8 size=6 ---- */

int __thiscall
CStatic::CStatic__OnChildNotify(CStatic *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CStatic::Create @ 60014eee size=6 ---- */

int __thiscall
CStatic::CStatic__Create
          (CStatic *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}



/* ---- CStatic::DrawItem @ 60014ef4 size=6 ---- */

void __thiscall CStatic::CStatic__DrawItem(CStatic *this,tagDRAWITEMSTRUCT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DrawItem(this,param_1);
  return;
}



/* ---- ~CStatic @ 60014efa size=6 ---- */

void __thiscall CStatic::~CStatic(CStatic *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CStatic(this);
  return;
}



/* ---- PreTranslateInput @ 60014f00 size=6 ---- */

int __thiscall CWnd::PreTranslateInput(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateInput(this,param_1);
  return iVar1;
}



/* ---- CGdiObject::GetRuntimeClass @ 60014f06 size=6 ---- */

CRuntimeClass * __thiscall CGdiObject::CGdiObject__GetRuntimeClass(CGdiObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- AfxMessageBox @ 60014f0c size=6 ---- */

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}



/* ---- DeleteObject @ 60014f12 size=6 ---- */

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}



/* ---- CFont::GetRuntimeClass @ 60014f18 size=6 ---- */

CRuntimeClass * __thiscall CFont::CFont__GetRuntimeClass(CFont *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- Attach @ 60014f1e size=6 ---- */

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}



/* ---- AfxThrowInvalidArgException @ 60014f2a size=6 ---- */

void AfxThrowInvalidArgException(void)

{
                    /* WARNING: Could not recover jumptable at 0x60014f2a. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  AfxThrowInvalidArgException();
  return;
}



/* ---- AfxThrowMemoryException @ 60014f30 size=6 ---- */

void AfxThrowMemoryException(void)

{
                    /* WARNING: Could not recover jumptable at 0x60014f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxThrowMemoryException();
  return;
}



/* ---- CObject::GetRuntimeClass @ 60014f36 size=6 ---- */

CRuntimeClass * __thiscall CObject::CObject__GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- AfxThrowArchiveException @ 60014f3c size=6 ---- */

void AfxThrowArchiveException(int param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014f3c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  AfxThrowArchiveException(param_1,param_2);
  return;
}



/* ---- Read @ 60014f42 size=6 ---- */

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = Read(this,param_1,param_2);
  return uVar1;
}



/* ---- operator_new[] @ 60014f48 size=6 ---- */

void * __cdecl operator_new__(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}



/* ---- Write @ 60014f4e size=6 ---- */

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Write(this,param_1,param_2);
  return;
}



/* ---- ReadCount @ 60014f54 size=6 ---- */

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ReadCount(this);
  return uVar1;
}



/* ---- WriteCount @ 60014f5a size=6 ---- */

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WriteCount(this,param_1);
  return;
}



/* ---- CWinApp @ 60014f66 size=6 ---- */

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}



/* ---- CWinApp::GetRuntimeClass @ 60014f6c size=6 ---- */

CRuntimeClass * __thiscall CWinApp::CWinApp__GetRuntimeClass(CWinApp *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CCmdTarget::OnFinalRelease @ 60014f72 size=6 ---- */

void __thiscall CCmdTarget::CCmdTarget__OnFinalRelease(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CCmdTarget::GetInterfaceMap @ 60014f78 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget__GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CWinApp::Run @ 60014f7e size=6 ---- */

int __thiscall CWinApp::CWinApp__Run(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Run(this);
  return iVar1;
}



/* ---- CWinThread::PreTranslateMessage @ 60014f84 size=6 ---- */

int __thiscall CWinThread::CWinThread__PreTranslateMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWinThread::PumpMessage @ 60014f8a size=6 ---- */

int __thiscall CWinThread::CWinThread__PumpMessage(CWinThread *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PumpMessage(this);
  return iVar1;
}



/* ---- CWinApp::OnIdle @ 60014f90 size=6 ---- */

int __thiscall CWinApp::CWinApp__OnIdle(CWinApp *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnIdle(this,param_1);
  return iVar1;
}



/* ---- CWinThread::IsIdleMessage @ 60014f96 size=6 ---- */

int __thiscall CWinThread::CWinThread__IsIdleMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsIdleMessage(this,param_1);
  return iVar1;
}



/* ---- CWinApp::ProcessWndProcException @ 60014f9c size=6 ---- */

long __thiscall
CWinApp::CWinApp__ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ProcessWndProcException(this,param_1,param_2);
  return lVar1;
}



/* ---- CWinThread::ProcessMessageFilter @ 60014fa2 size=6 ---- */

int __thiscall
CWinThread::CWinThread__ProcessMessageFilter(CWinThread *this,int param_1,tagMSG *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ProcessMessageFilter(this,param_1,param_2);
  return iVar1;
}



/* ---- CWinThread::GetMainWnd @ 60014fa8 size=6 ---- */

CWnd * __thiscall CWinThread::CWinThread__GetMainWnd(CWinThread *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMainWnd(this);
  return pCVar1;
}



/* ---- CWinThread::Delete @ 60014fae size=6 ---- */

void __thiscall CWinThread::CWinThread__Delete(CWinThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- CWinApp::InitLibId @ 60014fb4 size=6 ---- */

void __thiscall CWinApp::CWinApp__InitLibId(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x60014fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitLibId(this);
  return;
}



/* ---- CWinApp::Register @ 60014fba size=6 ---- */

int __thiscall CWinApp::CWinApp__Register(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Register(this);
  return iVar1;
}



/* ---- CWinApp::Unregister @ 60014fc0 size=6 ---- */

int __thiscall CWinApp::CWinApp__Unregister(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Unregister(this);
  return iVar1;
}



/* ---- CWinApp::OpenDocumentFile @ 60014fc6 size=6 ---- */

CDocument * __thiscall CWinApp::CWinApp__OpenDocumentFile(CWinApp *this,char *param_1)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = OpenDocumentFile(this,param_1);
  return pCVar1;
}



/* ---- CWinApp::AddToRecentFileList @ 60014fcc size=6 ---- */

void __thiscall CWinApp::CWinApp__AddToRecentFileList(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddToRecentFileList(this,param_1);
  return;
}



/* ---- CWinApp::InitApplication @ 60014fd2 size=6 ---- */

int __thiscall CWinApp::CWinApp__InitApplication(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitApplication(this);
  return iVar1;
}



/* ---- CWinApp::SaveAllModified @ 60014fd8 size=6 ---- */

int __thiscall CWinApp::CWinApp__SaveAllModified(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveAllModified(this);
  return iVar1;
}



/* ---- CWinApp::DoMessageBox @ 60014fde size=6 ---- */

int __thiscall CWinApp::CWinApp__DoMessageBox(CWinApp *this,char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoMessageBox(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWinApp::DoWaitCursor @ 60014fe4 size=6 ---- */

void __thiscall CWinApp::CWinApp__DoWaitCursor(CWinApp *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60014fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoWaitCursor(this,param_1);
  return;
}



/* ---- CWinApp::OnDDECommand @ 60014fea size=6 ---- */

int __thiscall CWinApp::CWinApp__OnDDECommand(CWinApp *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60014fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDDECommand(this,param_1);
  return iVar1;
}



/* ---- CWinApp::WinHelpA @ 60014ff0 size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::HtmlHelpA @ 60014ff6 size=6 ---- */

void __thiscall CWinApp::CWinApp__HtmlHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::WinHelpInternal @ 60014ffc size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpInternal(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60014ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWinApp::LoadAppLangResourceDLL @ 60015002 size=6 ---- */

HINSTANCE__ * __thiscall CWinApp::CWinApp__LoadAppLangResourceDLL(CWinApp *this)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAppLangResourceDLL(this);
  return pHVar1;
}



/* ---- CWinApp::LoadSysPolicies @ 60015008 size=6 ---- */

int __thiscall CWinApp::CWinApp__LoadSysPolicies(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadSysPolicies(this);
  return iVar1;
}



/* ---- ~CWinApp @ 6001500e size=6 ---- */

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x6001500e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}



/* ---- InitInstance @ 60015014 size=6 ---- */

int __thiscall CWinApp::InitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}



/* ---- ExitInstance @ 6001501a size=6 ---- */

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6001501a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}



/* ---- FreeDataChain @ 60015020 size=6 ---- */

void __thiscall CPlex::FreeDataChain(CPlex *this)

{
                    /* WARNING: Could not recover jumptable at 0x60015020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FreeDataChain(this);
  return;
}



/* ---- AfxGetThread @ 60015026 size=6 ---- */

CWinThread * AfxGetThread(void)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetThread();
  return pCVar1;
}



/* ---- Create @ 6001502c size=6 ---- */

CPlex * CPlex::Create(CPlex **param_1,uint param_2,uint param_3)

{
  CPlex *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6001502c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = Create(param_1,param_2,param_3);
  return pCVar1;
}



/* ---- SetFocus @ 60015032 size=6 ---- */

CWnd * __thiscall CWnd::SetFocus(CWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SetFocus(this);
  return pCVar1;
}



/* ---- GetWindowTextA @ 60015038 size=6 ---- */

void __thiscall
CWnd::GetWindowTextA
          (CWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60015038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetWindowTextA(this,param_1);
  return;
}



/* ---- AfxGetModuleState @ 6001503e size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6001503e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- CEdit::GetRuntimeClass @ 60015044 size=6 ---- */

CRuntimeClass * __thiscall CEdit::CEdit__GetRuntimeClass(CEdit *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- ~CEdit @ 6001504a size=6 ---- */

void __thiscall CEdit::~CEdit(CEdit *this)

{
                    /* WARNING: Could not recover jumptable at 0x6001504a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CEdit(this);
  return;
}



/* ---- SetWindowTextA @ 60015050 size=6 ---- */

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60015050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextA(this,param_1);
  return;
}



/* ---- Create @ 60015056 size=6 ---- */

int __thiscall CEdit::Create(CEdit *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- FUN_6001505c @ 6001505c size=75 ---- */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

long FUN_6001505c(void)

{
  long lVar1;
  int unaff_EBP;
  
  FUN_60015a47(0x10);
  FUN_6000a720();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)(unaff_EBP + -0x1c),(AFX_MODULE_STATE *)&DAT_60027c28);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  lVar1 = AfxWndProc(*(HWND__ **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),
                     *(uint *)(unaff_EBP + 0x10),*(long *)(unaff_EBP + 0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_60015316((undefined4 *)(unaff_EBP + -0x1c));
  return lVar1;
}



/* ---- FUN_600150a7 @ 600150a7 size=327 ---- */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_600150a7(HINSTANCE__ *param_1,int param_2)

{
  _AFX_THREAD_STATE *p_Var1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  CDynLinkLibrary *this;
  AFX_MODULE_STATE *pAVar5;
  AFX_MAINTAIN_STATE2 local_34 [20];
  undefined4 local_20;
  _AFX_THREAD_STATE *local_1c;
  int *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x600150b3;
  if (param_2 != 1) {
    if (param_2 == 0) {
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_60027c28);
      p_Var1 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar5;
      piVar4 = (int *)FUN_6000d600();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_60027c14,1);
      if (DAT_60027c08 != 0) {
        p_Var1 = AfxGetThreadState();
        AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
      }
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_34,(AFX_MODULE_STATE *)&DAT_60027c28);
      local_8 = 3;
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxTermThread(param_1);
      local_8 = 0xffffffff;
      FUN_60015316((undefined4 *)local_34);
    }
    return 1;
  }
  AfxCoreInitModule();
  p_Var1 = AfxGetThreadState();
  uVar3 = *(undefined4 *)(p_Var1 + 8);
  local_20 = uVar3;
  local_1c = p_Var1;
  iVar2 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,(char *)&PTR_60017b08,0);
  if (iVar2 == 0) {
LAB_600150ea:
    AfxWinTerm();
    uVar3 = FUN_6001517d();
    return uVar3;
  }
  piVar4 = (int *)FUN_6000d600();
  local_18 = piVar4;
  if (piVar4 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar4 + 0x58))();
    if (iVar2 == 0) {
      (**(code **)(*piVar4 + 0x70))();
      goto LAB_600150ea;
    }
  }
  *(undefined4 *)(p_Var1 + 8) = uVar3;
  AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_60027c14,param_1);
  local_8 = 0;
  this = (CDynLinkLibrary *)FUN_60003a50(0x40);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this != (CDynLinkLibrary *)0x0) {
    CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_60027c14,0);
  }
  local_8 = 0xffffffff;
  uVar3 = FUN_6001517d();
  return uVar3;
}



/* ---- Catch@60015154 @ 60015154 size=35 ---- */

undefined * Catch_60015154(void)

{
  int unaff_EBP;
  
  if (*(CException **)(unaff_EBP + -0x20) != (CException *)0x0) {
    CException::Delete(*(CException **)(unaff_EBP + -0x20));
  }
  (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x70))();
  AfxWinTerm();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_60015177;
}



/* ---- FUN_6001517d @ 6001517d size=32 ---- */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_6001517d(void)

{
  _AFX_THREAD_STATE *p_Var1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 8) = unaff_EBX;
  p_Var1 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  return *(undefined4 *)(unaff_EBP + 0xc);
}



/* ---- _RawDllMain@12 @ 60015237 size=94 ---- */

/* Library Function - Single Match
    _RawDllMain@12
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 _RawDllMain_12(undefined4 param_1,int param_2)

{
  HLOCAL hMem;
  _AFX_THREAD_STATE *p_Var1;
  AFX_MODULE_STATE *pAVar2;
  
  if (param_2 == 1) {
    hMem = LocalAlloc(0,0x2000);
    if (hMem == (HLOCAL)0x0) {
      return 0;
    }
    LocalFree(hMem);
    p_Var1 = AfxGetThreadState();
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_60027c28);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if ((param_2 == 0) && (DAT_60027c08 == 0)) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}



/* ---- _DllMain@12 @ 60015295 size=63 ---- */

/* Library Function - Single Match
    _DllMain@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 _DllMain_12(HINSTANCE__ *param_1,int param_2)

{
  AFX_MODULE_STATE *pAVar1;
  _AFX_THREAD_STATE *p_Var2;
  undefined4 uVar3;
  
  if (DAT_60027c08 == 0) {
LAB_600152ce:
    uVar3 = FUN_600150a7(param_1,param_2);
    return uVar3;
  }
  if (param_2 == 1) {
    pAVar1 = AfxGetModuleState();
    *(HINSTANCE__ **)(pAVar1 + 8) = param_1;
    p_Var2 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var2 + 8));
  }
  else if (param_2 != 0) goto LAB_600152ce;
  return 1;
}



/* ---- _AFX_DLL_MODULE_STATE @ 600152d4 size=34 ---- */

_AFX_DLL_MODULE_STATE * __thiscall
_AFX_DLL_MODULE_STATE::_AFX_DLL_MODULE_STATE(_AFX_DLL_MODULE_STATE *this)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)this,1,FUN_6001505c,0x900,0);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- scalar_deleting_destructor @ 600152f6 size=32 ---- */

AFX_MODULE_STATE * __thiscall
_AFX_DLL_MODULE_STATE::scalar_deleting_destructor(_AFX_DLL_MODULE_STATE *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE((AFX_MODULE_STATE *)this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return (AFX_MODULE_STATE *)this;
}



/* ---- FUN_60015316 @ 60015316 size=29 ---- */

void __fastcall FUN_60015316(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = *param_1;
  }
  if (param_1[3] != 0) {
    AfxDeactivateActCtx(0,param_1[2]);
  }
  return;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 60015340 size=76 ---- */

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



/* ---- __security_check_cookie @ 60015392 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_600259a8) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- purecall @ 600153a2 size=6 ---- */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x600153a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* ---- __ArrayUnwind @ 600153a8 size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 60015406 size=75 ---- */

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
  FUN_60015451();
  return;
}



/* ---- FUN_60015451 @ 60015451 size=24 ---- */

void FUN_60015451(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- FUN_60015470 @ 60015470 size=145 ---- */

ulonglong __fastcall FUN_60015470(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_60028018 != 0) {
    return CONCAT44(param_2,(int)in_ST0);
  }
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  fStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}



/* ---- memset @ 6001551c size=6 ---- */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6001551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ---- std::exception::what @ 60015522 size=6 ---- */

char * __thiscall std::exception::std__exception__what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* ---- _CxxThrowException @ 60015528 size=6 ---- */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x60015528. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* ---- __alloca_probe @ 60015540 size=43 ---- */

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



/* ---- memcpy @ 6001556c size=6 ---- */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6001556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* ---- _CIsqrt @ 60015572 size=6 ---- */

void _CIsqrt(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIsqrt();
  return;
}



/* ---- __onexit @ 60015578 size=156 ---- */

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
  
  local_8 = &DAT_6001ac98;
  uStack_c = 0x60015584;
  local_20[0] = decode_pointer(DAT_60028024);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_60028024);
    local_24 = decode_pointer(DAT_60028020);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_60028024 = encode_pointer(local_20[0]);
    DAT_60028020 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_60015614();
  }
  return p_Var1;
}



/* ---- FUN_60015614 @ 60015614 size=9 ---- */

void FUN_60015614(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 6001561d size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- `eh_vector_constructor_iterator' @ 60015634 size=77 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *in_stack_ffffffcc;
  int local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_60015681();
  return;
}



/* ---- FUN_60015681 @ 60015681 size=24 ---- */

void FUN_60015681(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}



/* ---- __CRT_INIT@12 @ 600156e8 size=550 ---- */

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
    if (DAT_60027cd4 < 1) {
      return 0;
    }
    DAT_60027cd4 = DAT_60027cd4 + -1;
  }
  _DAT_6002800c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60028014,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60028010 == 0) {
      DAT_60028010 = 1;
      iVar3 = initterm_e(&DAT_60017694,&DAT_600176a0);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_60017668,&DAT_60017690);
      DAT_60028010 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_60028014,0);
    }
    if ((DAT_6002801c != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_6002801c), BVar4 != 0)) {
      (*DAT_6002801c)(param_1,2,param_3);
    }
    DAT_60027cd4 = DAT_60027cd4 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60028014,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60028010 == 2) {
      param_2 = (int *)decode_pointer(DAT_60028024);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_60028020);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_60028024);
            piVar8 = (int *)decode_pointer(DAT_60028020);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_60028020 = encoded_null();
        DAT_60028024 = DAT_60028020;
      }
      DAT_60028010 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_60028014,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 6001590e size=240 ---- */

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
  _DAT_600259b0 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_60027cd4 == 0)) {
    local_20 = 0;
    goto LAB_60015a00;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR___RawDllMainProxy_12_60018af0 != (undefined *)0x0) {
      local_20 = (*(code *)PTR___RawDllMainProxy_12_60018af0)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_60015a00;
    local_20 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (local_20 == 0) goto LAB_60015a00;
  }
  local_20 = _DllMain_12(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    _DllMain_12(param_3,0);
    __CRT_INIT_12(&param_3->unused,(int *)0x0,param_1);
    if (PTR___RawDllMainProxy_12_60018af0 != (undefined *)0x0) {
      (*(code *)PTR___RawDllMainProxy_12_60018af0)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR___RawDllMainProxy_12_60018af0 != (undefined *)0x0)) {
      local_20 = (*(code *)PTR___RawDllMainProxy_12_60018af0)(param_3,param_2,param_1);
    }
  }
LAB_60015a00:
  FUN_60015a19();
  return local_20;
}



/* ---- FUN_60015a19 @ 60015a19 size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60015a19(void)

{
  _DAT_600259b0 = 0xffffffff;
  return;
}



/* ---- entry @ 60015a24 size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- FUN_60015a47 @ 60015a47 size=51 ---- */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */

void __cdecl FUN_60015a47(int param_1)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_600259a8 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __EH_prolog3_catch @ 60015a7a size=54 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_600259a8 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __EH_epilog3 @ 60015ab0 size=20 ---- */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* ---- ___report_gsfailure @ 60015ac4 size=262 ---- */

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
  
  _DAT_60027df0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_60027df4 = &uStack00000004;
  _DAT_60027d30 = 0x10001;
  _DAT_60027cd8 = 0xc0000409;
  _DAT_60027cdc = 1;
  local_32c = DAT_600259a8;
  local_328 = DAT_600259ac;
  _DAT_60027ce4 = _local_res0;
  _DAT_60027dbc = in_GS;
  _DAT_60027dc0 = in_FS;
  _DAT_60027dc4 = in_ES;
  _DAT_60027dc8 = in_DS;
  _DAT_60027dcc = unaff_EDI;
  _DAT_60027dd0 = unaff_ESI;
  _DAT_60027dd4 = unaff_EBX;
  _DAT_60027dd8 = in_EDX;
  _DAT_60027ddc = in_ECX;
  _DAT_60027de0 = in_EAX;
  _DAT_60027de4 = unaff_EBP;
  DAT_60027de8 = _local_res0;
  _DAT_60027dec = in_CS;
  _DAT_60027df8 = in_SS;
  DAT_60027d28 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_60018ae8);
  if (DAT_60027d28 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- __SEH_prolog4 @ 60015bd0 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_600259a8 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 60015c15 size=20 ---- */

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



/* ---- FUN_60015c29 @ 60015c29 size=37 ---- */

void __cdecl
FUN_60015c29(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_600259a8,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- FUN_60015c4e @ 60015c4e size=45 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_60015c4e(void)

{
  return 1;
}



/* ---- __get_sse2_info @ 60015c9e size=98 ---- */

/* WARNING: Removing unreachable block (ram,0x60015cdb) */
/* WARNING: Removing unreachable block (ram,0x60015cc8) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_60015c4e(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ---- _unlock @ 60015d0e size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60015d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 60015d14 size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 60015d1a size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60015d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __ValidateImageBase @ 60015d80 size=53 ---- */

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



/* ---- __FindPESection @ 60015dc0 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 60015e10 size=166 ---- */

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
  
  pcStack_10 = FUN_60015c29;
  local_14 = ExceptionList;
  local_c = DAT_600259a8 ^ 0x6001ad20;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_60000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_60000000,(DWORD_PTR)(pTarget + -0x60000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 60015ece size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 60015ed4 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 60015eda size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60015eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- ___security_init_cookie @ 60015ee6 size=150 ---- */

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
  if ((DAT_600259a8 == 0xbb40e64e) || ((DAT_600259a8 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_600259a8 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_600259a8 == 0xbb40e64e) {
      DAT_600259a8 = 0xbb40e64f;
    }
    else if ((DAT_600259a8 & 0xffff0000) == 0) {
      DAT_600259a8 = DAT_600259a8 | DAT_600259a8 << 0x10;
    }
  }
  DAT_600259ac = ~DAT_600259a8;
  return;
}



/* ---- _type_info_dtor_internal_method @ 60015f7c size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x60015f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- _crt_debugger_hook @ 60015f82 size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60015f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- except_handler4_common @ 60015f88 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- ~AFX_MODULE_STATE @ 60015f94 size=6 ---- */

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x60015f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}



/* ---- AfxWndProc @ 60015f9a size=6 ---- */

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}



/* ---- AFX_MAINTAIN_STATE2 @ 60015fa0 size=6 ---- */

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60015fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}



/* ---- AfxTermThread @ 60015fa6 size=6 ---- */

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60015fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}



/* ---- AfxTermExtensionModule @ 60015fac size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60015fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- AfxUnlockTempMaps @ 60015fb2 size=6 ---- */

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}



/* ---- AfxLockTempMaps @ 60015fb8 size=6 ---- */

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}



/* ---- AfxSetModuleState @ 60015fbe size=6 ---- */

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}



/* ---- Delete @ 60015fc4 size=6 ---- */

void __thiscall CException::Delete(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x60015fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- CDynLinkLibrary @ 60015fca size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60015fca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxInitExtensionModule @ 60015fd0 size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- AfxWinTerm @ 60015fd6 size=6 ---- */

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015fd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}



/* ---- AfxWinInit @ 60015fdc size=6 ---- */

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- AfxGetThreadState @ 60015fe2 size=6 ---- */

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60015fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}



/* ---- AfxCoreInitModule @ 60015fe8 size=6 ---- */

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x60015fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}



/* ---- AFX_MODULE_STATE @ 60015fee size=6 ---- */

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x60015fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3,param_4);
  return;
}



/* ---- operator_delete @ 60015ff4 size=6 ---- */

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60015ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- AfxDeactivateActCtx @ 60015ffa size=6 ---- */

int AfxDeactivateActCtx(ulong param_1,ulong param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60015ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxDeactivateActCtx(param_1,param_2);
  return iVar1;
}



/* ---- __FindPESection @ 60016000 size=62 ---- */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2008 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int in_EAX;
  PIMAGE_SECTION_HEADER p_Var1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(in_EAX + 0x3c) + in_EAX;
  p_Var1 = (PIMAGE_SECTION_HEADER)(*(ushort *)(iVar2 + 0x14) + 0x18 + iVar2);
  uVar3 = 0;
  if (*(ushort *)(iVar2 + 6) != 0) {
    do {
      if (((PBYTE)p_Var1->VirtualAddress <= pImageBase) &&
         (pImageBase < (PBYTE)p_Var1->VirtualAddress + (p_Var1->Misc).PhysicalAddress)) {
        return p_Var1;
      }
      uVar3 = uVar3 + 1;
      p_Var1 = p_Var1 + 1;
    } while (uVar3 < *(ushort *)(iVar2 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



/* ---- __IsNonwritableInCurrentImage @ 6001603e size=113 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  PIMAGE_SECTION_HEADER p_Var1;
  int in_ECX;
  DWORD_PTR in_stack_ffffffd4;
  
  if ((((IMAGE_DOS_HEADER_60000000.e_magic == (char  [2])0x5a4d) &&
       (*(int *)(IMAGE_DOS_HEADER_60000000.e_lfanew + 0x60000000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_60000000.e_res_4_ + (IMAGE_DOS_HEADER_60000000.e_lfanew - 4)
                 ) == 0x10b)) &&
     (p_Var1 = __FindPESection((PBYTE)(in_ECX + -0x60000000),in_stack_ffffffd4),
     p_Var1 != (PIMAGE_SECTION_HEADER)0x0)) {
    return ~(p_Var1->Characteristics >> 0x1f) & 1;
  }
  return 0;
}



/* ---- __RawDllMainProxy@12 @ 600160c6 size=42 ---- */

/* WARNING: Switch with 1 destination removed at 0x600160e3 */
/* Library Function - Single Match
    __RawDllMainProxy@12
   
   Library: Visual Studio 2008 Release */

undefined4 __RawDllMainProxy_12(undefined4 param_1,int param_2)

{
  HLOCAL hMem;
  _AFX_THREAD_STATE *p_Var1;
  AFX_MODULE_STATE *pAVar2;
  BOOL BVar3;
  PBYTE unaff_EBP;
  
  if (PTR__RawDllMain_12_60018a90 == (undefined *)0x0) {
    return 1;
  }
  BVar3 = __IsNonwritableInCurrentImage(unaff_EBP);
  if (BVar3 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    hMem = LocalAlloc(0,0x2000);
    if (hMem == (HLOCAL)0x0) {
      return 0;
    }
    LocalFree(hMem);
    p_Var1 = AfxGetThreadState();
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_60027c28);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if ((param_2 == 0) && (DAT_60027c08 == 0)) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}



/* ---- Unwind@600160f0 @ 600160f0 size=9 ---- */

void Unwind_600160f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600160f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameWnd::~CGameWnd(*(CGameWnd **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600160f9 @ 600160f9 size=15 ---- */

void Unwind_600160f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 500));
  return;
}



/* ---- Unwind@60016130 @ 60016130 size=9 ---- */

void Unwind_60016130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameWnd::~CGameWnd(*(CGameWnd **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016160 @ 60016160 size=11 ---- */

void Unwind_60016160(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@60016190 @ 60016190 size=8 ---- */

void Unwind_60016190(void)

{
  int unaff_EBP;
  
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -100));
  return;
}



/* ---- Unwind@600161c0 @ 600161c0 size=11 ---- */

void Unwind_600161c0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@600161f0 @ 600161f0 size=8 ---- */

void Unwind_600161f0(void)

{
  int unaff_EBP;
  
  CGraphicCtrl_TextBox::~CGraphicCtrl_TextBox(*(CGraphicCtrl_TextBox **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016220 @ 60016220 size=8 ---- */

void Unwind_60016220(void)

{
  int unaff_EBP;
  
  CGraphicCtrl_TextBox::~CGraphicCtrl_TextBox(*(CGraphicCtrl_TextBox **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016250 @ 60016250 size=9 ---- */

void Unwind_60016250(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016280 @ 60016280 size=9 ---- */

void Unwind_60016280(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600162b0 @ 600162b0 size=8 ---- */

void Unwind_600162b0(void)

{
  int unaff_EBP;
  
  CStatic::~CStatic(*(CStatic **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600162e0 @ 600162e0 size=9 ---- */

void Unwind_600162e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600162e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60016320 @ 60016320 size=9 ---- */

void Unwind_60016320(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60016350 @ 60016350 size=8 ---- */

void Unwind_60016350(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016358 @ 60016358 size=14 ---- */

void Unwind_60016358(void)

{
  int unaff_EBP;
  
  CFont::~CFont((CFont *)(*(int *)(unaff_EBP + -0x10) + 0x18c));
  return;
}



/* ---- Unwind@60016366 @ 60016366 size=15 ---- */

void Unwind_60016366(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6001636f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0x1a8));
  return;
}



/* ---- Unwind@60016375 @ 60016375 size=15 ---- */

void Unwind_60016375(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6001637e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x228));
  return;
}



/* ---- Unwind@600163a0 @ 600163a0 size=10 ---- */

void Unwind_600163a0(void)

{
  int unaff_EBP;
  
  FUN_600018f0(*(void **)(unaff_EBP + 0x1c));
  return;
}



/* ---- Unwind@600163aa @ 600163aa size=9 ---- */

void Unwind_600163aa(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600163ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 0x20));
  return;
}



/* ---- Unwind@600163d0 @ 600163d0 size=8 ---- */

void Unwind_600163d0(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600163d8 @ 600163d8 size=14 ---- */

void Unwind_600163d8(void)

{
  int unaff_EBP;
  
  CFont::~CFont((CFont *)(*(int *)(unaff_EBP + -0x10) + 0x18c));
  return;
}



/* ---- Unwind@600163e6 @ 600163e6 size=15 ---- */

void Unwind_600163e6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600163ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0x1a8));
  return;
}



/* ---- Unwind@600163f5 @ 600163f5 size=15 ---- */

void Unwind_600163f5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600163fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x228));
  return;
}



/* ---- Unwind@60016404 @ 60016404 size=14 ---- */

void Unwind_60016404(void)

{
  int unaff_EBP;
  
  FUN_6000e810((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x244));
  return;
}



/* ---- Unwind@60016430 @ 60016430 size=9 ---- */

void Unwind_60016430(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60016470 @ 60016470 size=12 ---- */

void Unwind_60016470(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (unaff_EBP + -0x102c));
  return;
}



/* ---- Unwind@600164b0 @ 600164b0 size=8 ---- */

void Unwind_600164b0(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600164e0 @ 600164e0 size=11 ---- */

void Unwind_600164e0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016510 @ 60016510 size=8 ---- */

void Unwind_60016510(void)

{
  int unaff_EBP;
  
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@60016540 @ 60016540 size=8 ---- */

void Unwind_60016540(void)

{
  int unaff_EBP;
  
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60016570 @ 60016570 size=9 ---- */

void Unwind_60016570(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60016579 @ 60016579 size=8 ---- */

void Unwind_60016579(void)

{
  int unaff_EBP;
  
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@60016581 @ 60016581 size=11 ---- */

void Unwind_60016581(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
  return;
}



/* ---- Unwind@600165b0 @ 600165b0 size=8 ---- */

void Unwind_600165b0(void)

{
  int unaff_EBP;
  
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@600165e0 @ 600165e0 size=8 ---- */

void Unwind_600165e0(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600165e8 @ 600165e8 size=15 ---- */

void Unwind_600165e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600165f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0x174));
  return;
}



/* ---- Unwind@60016620 @ 60016620 size=9 ---- */

void Unwind_60016620(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016650 @ 60016650 size=11 ---- */

void Unwind_60016650(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016680 @ 60016680 size=8 ---- */

void Unwind_60016680(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016688 @ 60016688 size=14 ---- */

void Unwind_60016688(void)

{
  int unaff_EBP;
  
  CFont::~CFont((CFont *)(*(int *)(unaff_EBP + -0x10) + 0x2170));
  return;
}



/* ---- Unwind@600166c0 @ 600166c0 size=11 ---- */

void Unwind_600166c0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600166cb @ 600166cb size=9 ---- */

void Unwind_600166cb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600166ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@600166f0 @ 600166f0 size=11 ---- */

void Unwind_600166f0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016720 @ 60016720 size=9 ---- */

void Unwind_60016720(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60016760 @ 60016760 size=9 ---- */

void Unwind_60016760(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60016769 @ 60016769 size=9 ---- */

void Unwind_60016769(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6001676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x48))
  ;
  return;
}



/* ---- Unwind@600167a0 @ 600167a0 size=8 ---- */

void Unwind_600167a0(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600167a8 @ 600167a8 size=14 ---- */

void Unwind_600167a8(void)

{
  int unaff_EBP;
  
  CFont::~CFont((CFont *)(*(int *)(unaff_EBP + -0x10) + 0x2170));
  return;
}



/* ---- Unwind@600167b6 @ 600167b6 size=15 ---- */

void Unwind_600167b6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600167bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0x2194));
  return;
}



/* ---- Unwind@600167e0 @ 600167e0 size=8 ---- */

void Unwind_600167e0(void)

{
  int unaff_EBP;
  
  CHgDIB16E::~CHgDIB16E(*(CHgDIB16E **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016810 @ 60016810 size=14 ---- */

void Unwind_60016810(void)

{
  int unaff_EBP;
  
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>_Constructor_or_Destructor
            ((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xe4));
  return;
}



/* ---- Unwind@60016840 @ 60016840 size=14 ---- */

void Unwind_60016840(void)

{
  int unaff_EBP;
  
  CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>_Constructor_or_Destructor
            ((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xe4));
  return;
}



/* ---- Unwind@60016870 @ 60016870 size=11 ---- */

void Unwind_60016870(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@6001687b @ 6001687b size=11 ---- */

void Unwind_6001687b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@600168e0 @ 600168e0 size=8 ---- */

void Unwind_600168e0(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600168e8 @ 600168e8 size=15 ---- */

void Unwind_600168e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600168f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0x294));
  return;
}



/* ---- Unwind@60016920 @ 60016920 size=12 ---- */

void Unwind_60016920(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x198));
  return;
}



/* ---- Unwind@60016960 @ 60016960 size=8 ---- */

void Unwind_60016960(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016968 @ 60016968 size=14 ---- */

void Unwind_60016968(void)

{
  int unaff_EBP;
  
  CFont::~CFont((CFont *)(*(int *)(unaff_EBP + -0x10) + 0x168));
  return;
}



/* ---- Unwind@60016976 @ 60016976 size=15 ---- */

void Unwind_60016976(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6001697f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0x174));
  return;
}



/* ---- Unwind@60016985 @ 60016985 size=14 ---- */

void Unwind_60016985(void)

{
  int unaff_EBP;
  
  CEdit::~CEdit((CEdit *)(*(int *)(unaff_EBP + -0x10) + 0x2a0));
  return;
}



/* ---- Unwind@60016993 @ 60016993 size=9 ---- */

void Unwind_60016993(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@600169c0 @ 600169c0 size=8 ---- */

void Unwind_600169c0(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@600169c8 @ 600169c8 size=14 ---- */

void Unwind_600169c8(void)

{
  int unaff_EBP;
  
  CFont::~CFont((CFont *)(*(int *)(unaff_EBP + -0x10) + 0x168));
  return;
}



/* ---- Unwind@600169d6 @ 600169d6 size=15 ---- */

void Unwind_600169d6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x600169df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0x174));
  return;
}



/* ---- Unwind@600169e5 @ 600169e5 size=14 ---- */

void Unwind_600169e5(void)

{
  int unaff_EBP;
  
  CEdit::~CEdit((CEdit *)(*(int *)(unaff_EBP + -0x10) + 0x2a0));
  return;
}



/* ---- Unwind@60016a10 @ 60016a10 size=11 ---- */

void Unwind_60016a10(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x14));
  return;
}



/* ---- Unwind@60016a40 @ 60016a40 size=8 ---- */

void Unwind_60016a40(void)

{
  int unaff_EBP;
  
  FUN_6000e760(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016a70 @ 60016a70 size=11 ---- */

void Unwind_60016a70(void)

{
  int unaff_EBP;
  
  CEdit::~CEdit(*(CEdit **)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60016a7b @ 60016a7b size=14 ---- */

void Unwind_60016a7b(void)

{
  int unaff_EBP;
  
  FUN_6000e810((undefined4 *)(*(int *)(unaff_EBP + -0x118) + 0x58));
  return;
}



/* ---- Unwind@60016ac0 @ 60016ac0 size=10 ---- */

void Unwind_60016ac0(void)

{
  int unaff_EBP;
  
  FUN_600018f0(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60016af0 @ 60016af0 size=11 ---- */

void Unwind_60016af0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x34));
  return;
}



/* ---- Unwind@60016b20 @ 60016b20 size=8 ---- */

void Unwind_60016b20(void)

{
  int unaff_EBP;
  
  CHgDummyCtrl::~CHgDummyCtrl(*(CHgDummyCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016b50 @ 60016b50 size=11 ---- */

void Unwind_60016b50(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x74));
  return;
}



/* ---- Unwind@60016b5b @ 60016b5b size=9 ---- */

void Unwind_60016b5b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(unaff_EBP + -0x70));
  return;
}



/* ---- Unwind@60016b90 @ 60016b90 size=8 ---- */

void Unwind_60016b90(void)

{
  int unaff_EBP;
  
  CGraphicCtrl::~CGraphicCtrl(*(CGraphicCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016bc0 @ 60016bc0 size=11 ---- */

void Unwind_60016bc0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x10));
  return;
}



/* ---- Unwind@60016bf0 @ 60016bf0 size=11 ---- */

void Unwind_60016bf0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60016bfb @ 60016bfb size=11 ---- */

void Unwind_60016bfb(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60016c06 @ 60016c06 size=11 ---- */

void Unwind_60016c06(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60016c30 @ 60016c30 size=8 ---- */

void Unwind_60016c30(void)

{
  int unaff_EBP;
  
  CHgDummyCtrl::~CHgDummyCtrl(*(CHgDummyCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016c60 @ 60016c60 size=9 ---- */

void Unwind_60016c60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(unaff_EBP + -0x70));
  return;
}



/* ---- Unwind@60016c69 @ 60016c69 size=11 ---- */

void Unwind_60016c69(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x10));
  return;
}



/* ---- Unwind@60016c74 @ 60016c74 size=11 ---- */

void Unwind_60016c74(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 0x10));
  return;
}



/* ---- Unwind@60016ca0 @ 60016ca0 size=11 ---- */

void Unwind_60016ca0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016cd0 @ 60016cd0 size=8 ---- */

void Unwind_60016cd0(void)

{
  int unaff_EBP;
  
  CHgDummyCtrl::~CHgDummyCtrl(*(CHgDummyCtrl **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60016d00 @ 60016d00 size=9 ---- */

void Unwind_60016d00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60016d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(unaff_EBP + -0x70));
  return;
}



/* ---- Unwind@60016d09 @ 60016d09 size=11 ---- */

void Unwind_60016d09(void)

{
  int unaff_EBP;
  
  operator_delete__(*(void **)(unaff_EBP + 0x1c));
  return;
}



/* ---- Unwind@60016d14 @ 60016d14 size=11 ---- */

void Unwind_60016d14(void)

{
  int unaff_EBP;
  
  operator_delete__(*(void **)(unaff_EBP + 0x1c));
  return;
}



/* ---- Unwind@60016d1f @ 60016d1f size=11 ---- */

void Unwind_60016d1f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@60016d50 @ 60016d50 size=11 ---- */

void Unwind_60016d50(void)

{
  int unaff_EBP;
  
  operator_delete__(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60016d5b @ 60016d5b size=11 ---- */

void Unwind_60016d5b(void)

{
  int unaff_EBP;
  
  operator_delete__(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60016d66 @ 60016d66 size=11 ---- */

void Unwind_60016d66(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@60016d90 @ 60016d90 size=11 ---- */

void Unwind_60016d90(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60016db6 @ 60016db6 size=8 ---- */

void Unwind_60016db6(void)

{
  int unaff_EBP;
  
  FUN_60015316((undefined4 *)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@60016dd9 @ 60016dd9 size=9 ---- */

void Unwind_60016dd9(void)

{
  int unaff_EBP;
  
  FUN_600018f0(*(void **)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@60016de2 @ 60016de2 size=8 ---- */

void Unwind_60016de2(void)

{
  int unaff_EBP;
  
  FUN_60015316((undefined4 *)(unaff_EBP + -0x30));
  return;
}



/* ---- ~CAnimateGmApp @ 60016e10 size=34 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CAnimateGmApp::~CAnimateGmApp(void)

{
  CWinApp::CWinApp((CWinApp *)&DAT_600259e8,(char *)0x0);
  _DAT_600259e8 = &vftable;
  _atexit(FUN_60016fb0);
  return;
}



/* ---- FUN_60016ee0 @ 60016ee0 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60016ee0(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60025ab4;
  local_8 = DAT_60025ab0;
  puVar1 = (undefined4 *)FUN_6000a730(&local_8,1);
  _DAT_60025aa0 = *puVar1;
  _DAT_60025aa4 = puVar1[1];
  return;
}



/* ---- FUN_60016f20 @ 60016f20 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60016f20(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60025ab4;
  local_8 = DAT_60025ab0;
  puVar1 = (undefined4 *)FUN_6000a730(&local_8,2);
  _DAT_60025a90 = *puVar1;
  _DAT_60025a94 = puVar1[1];
  return;
}



/* ---- FUN_60016f60 @ 60016f60 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60016f60(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60025ab4;
  local_8 = DAT_60025ab0;
  puVar1 = (undefined4 *)FUN_6000a730(&local_8,3);
  _DAT_60025aa8 = *puVar1;
  _DAT_60025aac = puVar1[1];
  return;
}



/* ---- FUN_60016f95 @ 60016f95 size=22 ---- */

void FUN_60016f95(void)

{
  _AFX_DLL_MODULE_STATE::_AFX_DLL_MODULE_STATE((_AFX_DLL_MODULE_STATE *)&DAT_60027c28);
  _atexit(FUN_60016fba);
  return;
}



/* ---- FUN_60016fb0 @ 60016fb0 size=10 ---- */

void FUN_60016fb0(void)

{
  CWinApp::~CWinApp((CWinApp *)&DAT_600259e8);
  return;
}



/* ---- FUN_60016fba @ 60016fba size=10 ---- */

void FUN_60016fba(void)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_60027c28);
  return;
}


// total=963 ok=963 failed=0
