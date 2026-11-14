// Module: HgBoard3.dll
// ImageBase: 60b00000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_60b01000 @ 60b01000 size=40 ---- */

undefined4 FUN_60b01000(undefined4 param_1,int param_2)

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



/* ---- FUN_60b01030 @ 60b01030 size=90 ---- */

undefined4 FUN_60b01030(HINSTANCE__ *param_1,int param_2)

{
  int iVar1;
  CDynLinkLibrary *this;
  
  if (param_2 == 1) {
    iVar1 = AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_60b0d868,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    this = operator_new(0x40);
    if (this != (CDynLinkLibrary *)0x0) {
      CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_60b0d868,0);
      return 1;
    }
  }
  else if (param_2 == 0) {
    AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_60b0d868,0);
  }
  return 1;
}



/* ---- FUN_60b01090 @ 60b01090 size=8 ---- */

void FUN_60b01090(void)

{
  void *in_EAX;
  
  operator_delete(in_EAX);
  return;
}



/* ---- CHgBoardEndInfo @ 60b010a0 size=27 ---- */

/* public: __thiscall CHgBoardEndInfo::CHgBoardEndInfo(class CHgBoardEndInfo const &) */

void __thiscall CHgBoardEndInfo::CHgBoardEndInfo(CHgBoardEndInfo *this,CHgBoardEndInfo *param_1)

{
                    /* 0x10a0  2  ??0CHgBoardEndInfo@@QAE@ABV0@@Z */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}



/* ---- operator= @ 60b010c0 size=21 ---- */

/* public: class CHgBoardEndInfo & __thiscall CHgBoardEndInfo::operator=(class CHgBoardEndInfo const
   &) */

CHgBoardEndInfo * __thiscall
CHgBoardEndInfo::operator=(CHgBoardEndInfo *this,CHgBoardEndInfo *param_1)

{
                    /* 0x10c0  25  ??4CHgBoardEndInfo@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}



/* ---- FUN_60b010e0 @ 60b010e0 size=83 ---- */

undefined4 * __thiscall FUN_60b010e0(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = CHgBoardEndInfo::_vftable_;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,0xc,*(int *)((int)this + -4),CHgBoardEndInfo::~CHgBoardEndInfo);
  if ((param_1 & 1) != 0) {
    operator_delete__((undefined4 *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}



/* ---- CHgBoardEndInfo @ 60b01140 size=9 ---- */

/* public: __thiscall CHgBoardEndInfo::CHgBoardEndInfo(void) */

void __thiscall CHgBoardEndInfo::CHgBoardEndInfo(CHgBoardEndInfo *this)

{
                    /* 0x1140  3  ??0CHgBoardEndInfo@@QAE@XZ */
  *(undefined ***)this = _vftable_;
  return;
}



/* ---- ~CHgBoardEndInfo @ 60b01150 size=7 ---- */

/* public: virtual __thiscall CHgBoardEndInfo::~CHgBoardEndInfo(void) */

void __thiscall CHgBoardEndInfo::~CHgBoardEndInfo(CHgBoardEndInfo *this)

{
                    /* 0x1150  17  ??1CHgBoardEndInfo@@UAE@XZ */
  *(undefined ***)this = _vftable_;
  return;
}



/* ---- SetValue @ 60b01160 size=17 ---- */

/* public: void __thiscall CHgBoardEndInfo::SetValue(int,int) */

void __thiscall CHgBoardEndInfo::SetValue(CHgBoardEndInfo *this,int param_1,int param_2)

{
                    /* 0x1160  177  ?SetValue@CHgBoardEndInfo@@QAEXHH@Z */
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  return;
}



/* ---- GetGameState @ 60b01180 size=4 ---- */

/* public: int __thiscall CHgBoardGameInfo::GetGameState(void) */

int __thiscall CHgBoardGameInfo::GetGameState(CHgBoardGameInfo *this)

{
                    /* 0x1180  83  ?GetGameState@CHgBoardGameInfo@@QAEHXZ */
  return *(int *)(this + 4);
}



/* ---- SetPreSettingState @ 60b01190 size=8 ---- */

/* public: void __thiscall CHgBoardGameInfo::SetPreSettingState(void) */

void __thiscall CHgBoardGameInfo::SetPreSettingState(CHgBoardGameInfo *this)

{
                    /* 0x1190  171  ?SetPreSettingState@CHgBoardGameInfo@@QAEXXZ */
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ---- SetInSettingState @ 60b011a0 size=8 ---- */

/* public: void __thiscall CHgBoardGameInfo::SetInSettingState(void) */

void __thiscall CHgBoardGameInfo::SetInSettingState(CHgBoardGameInfo *this)

{
                    /* 0x11a0  164  ?SetInSettingState@CHgBoardGameInfo@@QAEXXZ */
  *(undefined4 *)(this + 4) = 1;
  return;
}



/* ---- SetPlayingState @ 60b011b0 size=8 ---- */

/* public: void __thiscall CHgBoardGameInfo::SetPlayingState(void) */

void __thiscall CHgBoardGameInfo::SetPlayingState(CHgBoardGameInfo *this)

{
                    /* 0x11b0  170  ?SetPlayingState@CHgBoardGameInfo@@QAEXXZ */
  *(undefined4 *)(this + 4) = 2;
  return;
}



/* ---- SetCountingState @ 60b011c0 size=8 ---- */

/* public: void __thiscall CHgBoardGameInfo::SetCountingState(void) */

void __thiscall CHgBoardGameInfo::SetCountingState(CHgBoardGameInfo *this)

{
                    /* 0x11c0  160  ?SetCountingState@CHgBoardGameInfo@@QAEXXZ */
  *(undefined4 *)(this + 4) = 3;
  return;
}



/* ---- SetCountingOkState @ 60b011d0 size=8 ---- */

/* public: void __thiscall CHgBoardGameInfo::SetCountingOkState(void) */

void __thiscall CHgBoardGameInfo::SetCountingOkState(CHgBoardGameInfo *this)

{
                    /* 0x11d0  159  ?SetCountingOkState@CHgBoardGameInfo@@QAEXXZ */
  *(undefined4 *)(this + 4) = 4;
  return;
}



/* ---- SetEndingState @ 60b011e0 size=8 ---- */

/* public: void __thiscall CHgBoardGameInfo::SetEndingState(void) */

void __thiscall CHgBoardGameInfo::SetEndingState(CHgBoardGameInfo *this)

{
                    /* 0x11e0  162  ?SetEndingState@CHgBoardGameInfo@@QAEXXZ */
  *(undefined4 *)(this + 4) = 5;
  return;
}



/* ---- SetGiboViewState @ 60b011f0 size=8 ---- */

/* public: void __thiscall CHgBoardGameInfo::SetGiboViewState(void) */

void __thiscall CHgBoardGameInfo::SetGiboViewState(CHgBoardGameInfo *this)

{
                    /* 0x11f0  163  ?SetGiboViewState@CHgBoardGameInfo@@QAEXXZ */
  *(undefined4 *)(this + 4) = 6;
  return;
}



/* ---- CHgBoardGameInfo @ 60b01200 size=105 ---- */

/* public: __thiscall CHgBoardGameInfo::CHgBoardGameInfo(class CHgBoardGameInfo const &) */

void __thiscall CHgBoardGameInfo::CHgBoardGameInfo(CHgBoardGameInfo *this,CHgBoardGameInfo *param_1)

{
                    /* 0x1200  4  ??0CHgBoardGameInfo@@QAE@ABV0@@Z */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}



/* ---- operator= @ 60b01270 size=99 ---- */

/* public: class CHgBoardGameInfo & __thiscall CHgBoardGameInfo::operator=(class CHgBoardGameInfo
   const &) */

CHgBoardGameInfo * __thiscall
CHgBoardGameInfo::operator=(CHgBoardGameInfo *this,CHgBoardGameInfo *param_1)

{
                    /* 0x1270  26  ??4CHgBoardGameInfo@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}



/* ---- FUN_60b012e0 @ 60b012e0 size=83 ---- */

undefined4 * __thiscall FUN_60b012e0(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = CHgBoardGameInfo::_vftable_;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,0x40,*(int *)((int)this + -4),CHgBoardGameInfo::~CHgBoardGameInfo);
  if ((param_1 & 1) != 0) {
    operator_delete__((undefined4 *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}



/* ---- CHgBoardGameInfo @ 60b01340 size=82 ---- */

/* public: __thiscall CHgBoardGameInfo::CHgBoardGameInfo(void) */

void __thiscall CHgBoardGameInfo::CHgBoardGameInfo(CHgBoardGameInfo *this)

{
                    /* 0x1340  5  ??0CHgBoardGameInfo@@QAE@XZ */
  *(undefined4 *)(this + 8) = 2;
  *(undefined4 *)(this + 0xc) = 2;
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 0x14;
  *(undefined4 *)(this + 0x20) = 0x1e;
  *(undefined4 *)(this + 0x24) = 3;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 3;
  *(undefined4 *)(this + 0x3c) = 0x1e;
  return;
}



/* ---- ~CHgBoardGameInfo @ 60b013a0 size=7 ---- */

/* public: virtual __thiscall CHgBoardGameInfo::~CHgBoardGameInfo(void) */

void __thiscall CHgBoardGameInfo::~CHgBoardGameInfo(CHgBoardGameInfo *this)

{
                    /* 0x13a0  18  ??1CHgBoardGameInfo@@UAE@XZ */
  *(undefined ***)this = _vftable_;
  return;
}



/* ---- FUN_60b013b0 @ 60b013b0 size=85 ---- */

CHgBoardGetReqDialog * __thiscall FUN_60b013b0(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    CHgBoardGetReqDialog::~CHgBoardGetReqDialog(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,0x168,*(int *)((int)this + -4),CHgBoardGetReqDialog::~CHgBoardGetReqDialog);
  if ((param_1 & 1) != 0) {
    operator_delete__((CHgBoardGetReqDialog *)((int)this + -4));
  }
  return (CHgBoardGetReqDialog *)((int)this + -4);
}



/* ---- CHgBoardGetReqDialog @ 60b01410 size=314 ---- */

/* public: __thiscall CHgBoardGetReqDialog::CHgBoardGetReqDialog(unsigned int,char const *,class
   CWnd *) */

CHgBoardGetReqDialog * __thiscall
CHgBoardGetReqDialog::CHgBoardGetReqDialog
          (CHgBoardGetReqDialog *this,uint param_1,char *param_2,CWnd *param_3)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1410  6  ??0CHgBoardGetReqDialog@@QAE@IPBDPAVCWnd@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60b0626f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog((CDialog *)this,0x4a42,param_3);
  local_4 = 0;
  *(undefined ***)this = _vftable_;
  CWnd::CWnd((CWnd *)(this + 0x74));
  *(undefined ***)(this + 0x74) = CProgressCtrl::vftable;
  this_00 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 200);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(this_00);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 0xe4));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 0xe8));
  local_4._0_1_ = 4;
  CHgDIB::CHgDIB((CHgDIB *)(this + 0xec));
  local_4 = CONCAT31(local_4._1_3_,5);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            (this_00,(char *)&PTR_60b076b0);
  *(uint *)(this + 0xe0) = param_1;
  if (param_1 < 0x4de4) {
    if (param_1 != 0x4de3) {
      switch(param_1) {
      case 0x4a9d:
        goto switchD_60b014d2_caseD_4a9d;
      case 0x4a9e:
        break;
      case 0x4a9f:
      case 0x4aa1:
        goto switchD_60b014d2_caseD_4a9f;
      case 0x4aa0:
        pcVar1 = ".\\common\\Images\\mkendcount.him";
        goto LAB_60b01504;
      default:
        goto switchD_60b014d2_default;
      }
    }
    pcVar1 = ".\\common\\Images\\mkdraw.him";
  }
  else if (param_1 == 0x4de4) {
switchD_60b014d2_caseD_4a9d:
    pcVar1 = ".\\common\\Images\\mkundo.him";
  }
  else {
    if ((param_1 != 0x4de5) && (param_1 != 0x4de6)) goto switchD_60b014d2_default;
switchD_60b014d2_caseD_4a9f:
    pcVar1 = ".\\common\\Images\\mkcount.him";
  }
LAB_60b01504:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 0xe4),pcVar1);
switchD_60b014d2_default:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 0xe8),param_2)
  ;
  *(undefined4 *)(this + 0xdc) = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::LoadStringA
            (this_00,*(uint *)(this + 0xe0));
  ExceptionList = local_c;
  return this;
}



/* ---- ~CHgBoardGetReqDialog @ 60b01560 size=196 ---- */

/* public: virtual __thiscall CHgBoardGetReqDialog::~CHgBoardGetReqDialog(void) */

void __thiscall CHgBoardGetReqDialog::~CHgBoardGetReqDialog(CHgBoardGetReqDialog *this)

{
  uint uVar1;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1560  19  ??1CHgBoardGetReqDialog@@UAE@XZ */
  puStack_8 = &LAB_60b061ff;
  local_c = ExceptionList;
  uVar1 = DAT_60b0d018 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  *(undefined ***)this = _vftable_;
  local_4 = 5;
  if (*(undefined4 **)(this + 0xdc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xdc))(1,uVar1);
  }
  DeleteObject(*(HGDIOBJ *)(this + 0x154));
  DeleteDC(*(HDC *)(this + 0x150));
  local_4._0_1_ = 4;
  CHgDIB::~CHgDIB((CHgDIB *)(this + 0xec));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 0xe8));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 0xe4));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 200));
  local_4 = (uint)local_4._1_3_ << 8;
  CProgressCtrl::~CProgressCtrl((CProgressCtrl *)(this + 0x74));
  local_4 = 0xffffffff;
  CDialog::~CDialog((CDialog *)this);
  ExceptionList = local_c;
  return;
}



/* ---- DoDataExchange @ 60b01630 size=46 ---- */

/* protected: virtual void __thiscall CHgBoardGetReqDialog::DoDataExchange(class CDataExchange *) */

void __thiscall
CHgBoardGetReqDialog::DoDataExchange(CHgBoardGetReqDialog *this,CDataExchange *param_1)

{
                    /* 0x1630  57  ?DoDataExchange@CHgBoardGetReqDialog@@MAEXPAVCDataExchange@@@Z */
  DDX_Control(param_1,0x4a45,(CWnd *)(this + 0x74));
  DDX_Text(param_1,0x4a44,
           (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 200));
  return;
}



/* ---- GetMessageMap @ 60b01660 size=6 ---- */

/* protected: virtual struct AFX_MSGMAP const * __thiscall
   CHgBoardGetReqDialog::GetMessageMap(void)const  */

AFX_MSGMAP * CHgBoardGetReqDialog::GetMessageMap(void)

{
                    /* 0x1660  89  ?GetMessageMap@CHgBoardGetReqDialog@@MBEPBUAFX_MSGMAP@@XZ
                       0x1660  113  ?GetThisMessageMap@CHgBoardGetReqDialog@@KGPBUAFX_MSGMAP@@XZ */
  return (AFX_MSGMAP *)&PTR_LAB_60b07510;
}



/* ---- OnInitDialog @ 60b01670 size=456 ---- */

/* protected: virtual int __thiscall CHgBoardGetReqDialog::OnInitDialog(void) */

int __thiscall CHgBoardGetReqDialog::OnInitDialog(CHgBoardGetReqDialog *this)

{
  LPRECT lpRect;
  code *pcVar1;
  char cVar2;
  uint uVar3;
  CWnd *pCVar4;
  HDC hdc;
  HDC pHVar5;
  HGDIOBJ pvVar6;
  CHgDDB *this_00;
  char *unaff_ESI;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1670  140  ?OnInitDialog@CHgBoardGetReqDialog@@MAEHXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60b06194;
  local_c = ExceptionList;
  uVar3 = DAT_60b0d018 ^ (int)register0x00000010 - 0x20U;
  ExceptionList = &local_c;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar4 = CWnd::GetDlgItem((CWnd *)this,0x4a43);
  lpRect = (LPRECT)(this + 0xcc);
  GetWindowRect(*(HWND *)(pCVar4 + 0x20),lpRect);
  CWnd::ScreenToClient((CWnd *)this,lpRect);
  (**(code **)(*(int *)pCVar4 + 0x68))(uVar3);
  hdc = GetDC(*(HWND *)(this + 0x20));
  pHVar5 = CreateCompatibleDC(hdc);
  pcVar1 = *(code **)(*(int *)(this + 0xec) + 0x10);
  *(HDC *)(this + 0x150) = pHVar5;
  (*pcVar1)(*(int *)(this + 0xd4) - lpRect->left,*(int *)(this + 0xd8) - *(int *)(this + 0xd0));
  pvVar6 = SelectObject(*(HDC *)(this + 0x150),*(HGDIOBJ *)(this + 0x14c));
  *(HGDIOBJ *)(this + 0x154) = pvVar6;
  ReleaseDC(*(HWND *)(this + 0x20),hdc);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             ((int)register0x00000010 + -0x1c));
  local_c = (void *)0x0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::LoadStringA
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             ((int)register0x00000010 + -0x1c),*(int *)(this + 0xe0) + 10);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             ((int)register0x00000010 + -0x1c),(CSimpleStringT<char,1> *)(this + 0xe8));
  CWnd::SetWindowTextA((CWnd *)this,unaff_ESI);
  this_00 = operator_new(0x38);
  local_c._0_1_ = 1;
  if (this_00 == (CHgDDB *)0x0) {
    this_00 = (CHgDDB *)0x0;
  }
  else {
    CHgDDB::CHgDDB(this_00);
    *(undefined ***)this_00 = CHgDDB::vftable;
  }
  local_c = (void *)((uint)local_c._1_3_ << 8);
  *(CHgDDB **)(this + 0xdc) = this_00;
  if (this_00 != (CHgDDB *)0x0) {
    cVar2 = (**(code **)(*(int *)this_00 + 4))(*(undefined4 *)(this + 0xe4));
    if (cVar2 == '\0') {
      if (*(undefined4 **)(this + 0xdc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0xdc))(1);
      }
      *(undefined4 *)(this + 0xdc) = 0;
    }
  }
  SendMessageA(*(HWND *)(this + 0x94),0x406,0,100);
  SendMessageA(*(HWND *)(this + 0x94),0x402,0,0);
  SendMessageA(*(HWND *)(this + 0x94),0x404,0xffffffff,0);
  SetTimer(*(HWND *)(this + 0x20),1,100,(TIMERPROC)0x0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             ((int)register0x00000010 + -0x1c));
  ExceptionList = uStack_14;
  return 1;
}



/* ---- FUN_60b01840 @ 60b01840 size=31 ---- */

CHgDDB * __thiscall FUN_60b01840(void *this,byte param_1)

{
  CHgDDB::~CHgDDB(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- OnTimer @ 60b01860 size=71 ---- */

/* protected: void __thiscall CHgBoardGetReqDialog::OnTimer(unsigned int) */

void __thiscall CHgBoardGetReqDialog::OnTimer(CHgBoardGetReqDialog *this,uint param_1)

{
  LRESULT LVar1;
  
                    /* 0x1860  142  ?OnTimer@CHgBoardGetReqDialog@@IAEXI@Z */
  SendMessageA(*(HWND *)(this + 0x94),0x405,0,0);
  LVar1 = SendMessageA(*(HWND *)(this + 0x94),0x408,0,0);
  if (LVar1 < 1) {
    CDialog::EndDialog((CDialog *)this,2);
  }
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnPaint @ 60b018b0 size=209 ---- */

/* protected: void __thiscall CHgBoardGetReqDialog::OnPaint(void) */

void __thiscall CHgBoardGetReqDialog::OnPaint(CHgBoardGetReqDialog *this)

{
  CPaintDC local_64 [4];
  HDC local_60;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x18b0  141  ?OnPaint@CHgBoardGetReqDialog@@IAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60b06158;
  local_c = ExceptionList;
  local_10 = DAT_60b0d018 ^ (uint)local_64;
  ExceptionList = &local_c;
  CPaintDC::CPaintDC(local_64,(CWnd *)this);
  local_4 = 0;
  CHgImage::Draw((CHgImage *)(this + 0xec),0,0,*(CHgImageBase **)(this + 0xdc),0x100,0);
  BitBlt(local_60,*(int *)(this + 0xcc),*(int *)(this + 0xd0),
         *(int *)(this + 0xd4) - *(int *)(this + 0xcc),*(int *)(this + 0xd8) - *(int *)(this + 0xd0)
         ,*(HDC *)(this + 0x150),0,0,0xcc0020);
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_64);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_64);
  return;
}



/* ---- FUN_60b01990 @ 60b01990 size=14 ---- */

void __thiscall FUN_60b01990(void *this,ushort param_1,CWnd *param_2)

{
  CDialog::Create(this,(char *)(uint)param_1,param_2);
  return;
}



/* ---- FUN_60b019a0 @ 60b019a0 size=30 ---- */

CProgressCtrl * __thiscall FUN_60b019a0(void *this,byte param_1)

{
  CProgressCtrl::~CProgressCtrl(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- ~CHgCellInfo @ 60b019c0 size=1 ---- */

/* public: __thiscall CHgCellInfo::~CHgCellInfo(void) */

void __thiscall CHgCellInfo::~CHgCellInfo(CHgCellInfo *this)

{
                    /* 0x19c0  23  ??1CHgCellInfo@@QAE@XZ */
  return;
}



/* ---- FUN_60b019d0 @ 60b019d0 size=3 ---- */

void FUN_60b019d0(void)

{
  return;
}



/* ---- FUN_60b019e0 @ 60b019e0 size=13 ---- */

void __fastcall FUN_60b019e0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}



/* ---- FUN_60b019f0 @ 60b019f0 size=13 ---- */

void __fastcall FUN_60b019f0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}



/* ---- Create @ 60b01a00 size=23 ---- */

/* public: int __thiscall CHgBoard::Create(class CSize const &) */

int __thiscall CHgBoard::Create(CHgBoard *this,CSize *param_1)

{
  int iVar1;
  
                    /* 0x1a00  53  ?Create@CHgBoard@@QAEHABVCSize@@@Z */
  iVar1 = (**(code **)(*(int *)this + 0x14))(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  return iVar1;
}



/* ---- HaveNoAccessList @ 60b01a20 size=4 ---- */

/* public: int __thiscall CHgBoard::HaveNoAccessList(void) */

int __thiscall CHgBoard::HaveNoAccessList(CHgBoard *this)

{
                    /* 0x1a20  116  ?HaveNoAccessList@CHgBoard@@QAEHXZ */
  return *(int *)(this + 0x14);
}



/* ---- AddNoAccessCell @ 60b01a30 size=79 ---- */

/* public: int __thiscall CHgBoard::AddNoAccessCell(class CPoint const &) */

int __thiscall CHgBoard::AddNoAccessCell(CHgBoard *this,CPoint *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1a30  40  ?AddNoAccessCell@CHgBoard@@QAEHABVCPoint@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_1;
  if ((((*(int *)(this + 4) == 0) || (iVar2 < 0)) || (*(int *)(this + 0xc) <= iVar2)) ||
     (((iVar1 < 0 || (*(int *)(this + 0x10) <= iVar1)) || (*(int *)(this + 0x14) == 0)))) {
    return 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(this + 4) + iVar1 * 4) + iVar2 * 4) = 0xfffffffe;
  *(undefined4 *)(*(int *)(*(int *)(this + 8) + iVar1 * 4) + iVar2 * 4) = 0xffffffff;
  return 1;
}



/* ---- RemoveNoAccessCell @ 60b01a80 size=19 ---- */

/* public: int __thiscall CHgBoard::RemoveNoAccessCell(class CPoint const &) */

int __thiscall CHgBoard::RemoveNoAccessCell(CHgBoard *this,CPoint *param_1)

{
  int iVar1;
  
                    /* 0x1a80  150  ?RemoveNoAccessCell@CHgBoard@@QAEHABVCPoint@@@Z */
  iVar1 = RemoveNoAccessCell(this,*(int *)param_1,*(int *)(param_1 + 4));
  return iVar1;
}



/* ---- IsNoAccessCell @ 60b01aa0 size=65 ---- */

/* public: int __thiscall CHgBoard::IsNoAccessCell(class CPoint const &) */

int __thiscall CHgBoard::IsNoAccessCell(CHgBoard *this,CPoint *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1aa0  125  ?IsNoAccessCell@CHgBoard@@QAEHABVCPoint@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_1;
  if ((((*(int *)(this + 4) == 0) || (iVar2 < 0)) || (*(int *)(this + 0xc) <= iVar2)) ||
     (((iVar1 < 0 || (*(int *)(this + 0x10) <= iVar1)) || (*(int *)(this + 0x14) == 0)))) {
    return 0;
  }
  return (uint)(*(int *)(*(int *)(*(int *)(this + 4) + iVar1 * 4) + iVar2 * 4) == -2);
}



/* ---- PutStone @ 60b01af0 size=33 ---- */

/* public: int __thiscall CHgBoard::PutStone(class CPoint const &,int,int) */

int __thiscall CHgBoard::PutStone(CHgBoard *this,CPoint *param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* 0x1af0  145  ?PutStone@CHgBoard@@QAEHABVCPoint@@HH@Z */
  iVar1 = (**(code **)(*(int *)this + 0x18))
                    (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_2,param_3);
  return iVar1;
}



/* ---- PutSeqNo @ 60b01b20 size=28 ---- */

/* public: int __thiscall CHgBoard::PutSeqNo(class CPoint const &,int) */

int __thiscall CHgBoard::PutSeqNo(CHgBoard *this,CPoint *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x1b20  143  ?PutSeqNo@CHgBoard@@QAEHABVCPoint@@H@Z */
  iVar1 = (**(code **)(*(int *)this + 0x1c))
                    (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_2);
  return iVar1;
}



/* ---- GetDimension @ 60b01b40 size=18 ---- */

/* public: class CSize __thiscall CHgBoard::GetDimension(void) */

void __thiscall CHgBoard::GetDimension(CHgBoard *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x1b40  82  ?GetDimension@CHgBoard@@QAE?AVCSize@@XZ */
  uVar1 = *(undefined4 *)(this + 0x10);
  *in_stack_00000004 = *(undefined4 *)(this + 0xc);
  in_stack_00000004[1] = uVar1;
  return;
}



/* ---- GetReversePoint @ 60b01b60 size=28 ---- */

/* public: class CPoint __thiscall CHgBoard::GetReversePoint(class CPoint) */

void __thiscall CHgBoard::GetReversePoint(CHgBoard *this,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0x1b60  100  ?GetReversePoint@CHgBoard@@QAE?AVCPoint@@V2@@Z */
  iVar1 = *(int *)(this + 0x10);
  *param_2 = (*(int *)(this + 0xc) - param_3) + -1;
  param_2[1] = (iVar1 - param_4) + -1;
  return;
}



/* ---- IsValidRange @ 60b01b80 size=45 ---- */

/* public: int __thiscall CHgBoard::IsValidRange(int,int) */

int __thiscall CHgBoard::IsValidRange(CHgBoard *this,int param_1,int param_2)

{
                    /* 0x1b80  134  ?IsValidRange@CHgBoard@@QAEHHH@Z */
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (*(int *)(this + 0xc) <= param_1)) ||
     ((param_2 < 0 || (*(int *)(this + 0x10) <= param_2)))) {
    return 0;
  }
  return 1;
}



/* ---- IsValidRange @ 60b01bb0 size=46 ---- */

/* public: int __thiscall CHgBoard::IsValidRange(class CPoint const &) */

int __thiscall CHgBoard::IsValidRange(CHgBoard *this,CPoint *param_1)

{
                    /* 0x1bb0  133  ?IsValidRange@CHgBoard@@QAEHABVCPoint@@@Z */
  if ((((*(int *)(this + 4) == 0) || (*(int *)param_1 < 0)) ||
      (*(int *)(this + 0xc) <= *(int *)param_1)) ||
     ((*(int *)(param_1 + 4) < 0 || (*(int *)(this + 0x10) <= *(int *)(param_1 + 4))))) {
    return 0;
  }
  return 1;
}



/* ---- IsInStone @ 60b01be0 size=26 ---- */

/* public: int __thiscall CHgBoard::IsInStone(int,int) */

int __thiscall CHgBoard::IsInStone(CHgBoard *this,int param_1,int param_2)

{
                    /* 0x1be0  122  ?IsInStone@CHgBoard@@QAEHHH@Z */
  return (uint)(*(uint *)(*(int *)(*(int *)(this + 4) + param_2 * 4) + param_1 * 4) < 0x80000000);
}



/* ---- IsInStone @ 60b01c00 size=29 ---- */

/* public: int __thiscall CHgBoard::IsInStone(class CPoint const &) */

int __thiscall CHgBoard::IsInStone(CHgBoard *this,CPoint *param_1)

{
                    /* 0x1c00  121  ?IsInStone@CHgBoard@@QAEHABVCPoint@@@Z */
  return (uint)(*(uint *)(*(int *)(*(int *)(this + 4) + *(int *)(param_1 + 4) * 4) +
                         *(int *)param_1 * 4) < 0x80000000);
}



/* ---- GetStone @ 60b01c20 size=54 ---- */

/* public: int __thiscall CHgBoard::GetStone(class CPoint const &) */

int __thiscall CHgBoard::GetStone(CHgBoard *this,CPoint *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1c20  105  ?GetStone@CHgBoard@@QAEHABVCPoint@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_1;
  if ((((*(int *)(this + 4) == 0) || (iVar2 < 0)) || (*(int *)(this + 0xc) <= iVar2)) ||
     ((iVar1 < 0 || (*(int *)(this + 0x10) <= iVar1)))) {
    return -3;
  }
  return *(int *)(*(int *)(*(int *)(this + 4) + iVar1 * 4) + iVar2 * 4);
}



/* ---- GetSeqNo @ 60b01c60 size=92 ---- */

/* public: int __thiscall CHgBoard::GetSeqNo(class CPoint const &) */

int __thiscall CHgBoard::GetSeqNo(CHgBoard *this,CPoint *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1c60  102  ?GetSeqNo@CHgBoard@@QAEHABVCPoint@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_1;
  if ((((*(int *)(this + 4) == 0) || (iVar2 < 0)) || (*(int *)(this + 0xc) <= iVar2)) ||
     ((iVar1 < 0 || (*(int *)(this + 0x10) <= iVar1)))) {
    return -3;
  }
  if ((*(int *)(this + 0x14) == 0) ||
     (*(int *)(*(int *)(*(int *)(this + 4) + iVar1 * 4) + iVar2 * 4) != -2)) {
    return *(int *)(*(int *)(*(int *)(this + 8) + iVar1 * 4) + iVar2 * 4);
  }
  return -2;
}



/* ---- SetBlockSize @ 60b01cc0 size=18 ---- */

/* public: void __thiscall CHgBoardImage::SetBlockSize(class CSize const &) */

void __thiscall CHgBoardImage::SetBlockSize(CHgBoardImage *this,CSize *param_1)

{
                    /* 0x1cc0  156  ?SetBlockSize@CHgBoardImage@@QAEXABVCSize@@@Z */
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 4);
  return;
}



/* ---- SetBlockSize @ 60b01ce0 size=24 ---- */

/* public: void __thiscall CHgBoardImage::SetBlockSize(int,int) */

void __thiscall CHgBoardImage::SetBlockSize(CHgBoardImage *this,int param_1,int param_2)

{
                    /* 0x1ce0  157  ?SetBlockSize@CHgBoardImage@@QAEXHH@Z */
  *(int *)(this + 0x10) = param_1;
  *(int *)(this + 0x14) = param_2;
  return;
}



/* ---- GetBlockSize @ 60b01d00 size=4 ---- */

/* public: class CSize & __thiscall CHgBoardImage::GetBlockSize(void) */

CSize * __thiscall CHgBoardImage::GetBlockSize(CHgBoardImage *this)

{
                    /* 0x1d00  70  ?GetBlockSize@CHgBoardImage@@QAEAAVCSize@@XZ */
  return (CSize *)(this + 0x10);
}



/* ---- GetStoneSize @ 60b01d10 size=4 ---- */

/* public: class CSize & __thiscall CHgBoardImage::GetStoneSize(void) */

CSize * __thiscall CHgBoardImage::GetStoneSize(CHgBoardImage *this)

{
                    /* 0x1d10  110  ?GetStoneSize@CHgBoardImage@@QAEAAVCSize@@XZ */
  return (CSize *)(this + 0x1c);
}



/* ---- GetCellIndex @ 60b01d20 size=38 ---- */

/* public: class CPoint __thiscall CHgBoardImage::GetCellIndex(int,int) */

int __thiscall CHgBoardImage::GetCellIndex(CHgBoardImage *this,int param_1,int param_2)

{
  int in_stack_0000000c;
  
                    /* 0x1d20  76  ?GetCellIndex@CHgBoardImage@@QAE?AVCPoint@@HH@Z */
  *(int *)param_1 = (param_2 - *(int *)(this + 8)) / *(int *)(this + 0x10);
  *(int *)(param_1 + 4) = (in_stack_0000000c - *(int *)(this + 0xc)) / *(int *)(this + 0x14);
  return param_1;
}



/* ---- GetCellIndex @ 60b01d50 size=41 ---- */

/* public: class CPoint __thiscall CHgBoardImage::GetCellIndex(class CPoint const &) */

CPoint * __thiscall CHgBoardImage::GetCellIndex(CHgBoardImage *this,CPoint *param_1)

{
  int *in_stack_00000008;
  
                    /* 0x1d50  75  ?GetCellIndex@CHgBoardImage@@QAE?AVCPoint@@ABV2@@Z */
  *(int *)param_1 = (*in_stack_00000008 - *(int *)(this + 8)) / *(int *)(this + 0x10);
  *(int *)(param_1 + 4) = (in_stack_00000008[1] - *(int *)(this + 0xc)) / *(int *)(this + 0x14);
  return param_1;
}



/* ---- GetCellCood @ 60b01d80 size=34 ---- */

/* public: class CPoint __thiscall CHgBoardImage::GetCellCood(int,int) */

void __thiscall CHgBoardImage::GetCellCood(CHgBoardImage *this,int param_1,int param_2)

{
  int in_stack_0000000c;
  
                    /* 0x1d80  74  ?GetCellCood@CHgBoardImage@@QAE?AVCPoint@@HH@Z */
  *(int *)param_1 = *(int *)(this + 0x10) * param_2 + *(int *)(this + 8);
  *(int *)(param_1 + 4) = *(int *)(this + 0x14) * in_stack_0000000c + *(int *)(this + 0xc);
  return;
}



/* ---- GetCellCood @ 60b01db0 size=37 ---- */

/* public: class CPoint __thiscall CHgBoardImage::GetCellCood(class CPoint &) */

void __thiscall CHgBoardImage::GetCellCood(CHgBoardImage *this,CPoint *param_1)

{
  int *in_stack_00000008;
  
                    /* 0x1db0  73  ?GetCellCood@CHgBoardImage@@QAE?AVCPoint@@AAV2@@Z */
  *(int *)param_1 = *(int *)(this + 0x10) * *in_stack_00000008 + *(int *)(this + 8);
  *(int *)(param_1 + 4) = *(int *)(this + 0x14) * in_stack_00000008[1] + *(int *)(this + 0xc);
  return;
}



/* ---- GetCellRect @ 60b01de0 size=74 ---- */

/* public: class CRect __thiscall CHgBoardImage::GetCellRect(int,int) */

void __thiscall CHgBoardImage::GetCellRect(CHgBoardImage *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  
                    /* 0x1de0  77  ?GetCellRect@CHgBoardImage@@QAE?AVCRect@@HH@Z */
  iVar1 = *(int *)(this + 0x10);
  iVar2 = *(int *)(this + 0x24);
  *(int *)param_1 = iVar1 * param_2 + iVar2;
  iVar3 = *(int *)(this + 0x14);
  iVar4 = *(int *)(this + 0x28);
  *(int *)(param_1 + 4) = iVar3 * in_stack_0000000c + iVar4;
  *(int *)(param_1 + 8) = (param_2 + 1) * iVar1 + iVar2;
  *(int *)(param_1 + 0xc) = (in_stack_0000000c + 1) * iVar3 + iVar4;
  return;
}



/* ---- GetBoardImage @ 60b01e30 size=4 ---- */

/* public: class CHgDDB * __thiscall CHgBoardImage::GetBoardImage(void) */

CHgDDB * __thiscall CHgBoardImage::GetBoardImage(CHgBoardImage *this)

{
                    /* 0x1e30  71  ?GetBoardImage@CHgBoardImage@@QAEPAVCHgDDB@@XZ */
  return *(CHgDDB **)(this + 0x38);
}



/* ---- GetStoneImage @ 60b01e40 size=4 ---- */

/* public: class CHgDDB * __thiscall CHgBoardImage::GetStoneImage(void) */

CHgDDB * __thiscall CHgBoardImage::GetStoneImage(CHgBoardImage *this)

{
                    /* 0x1e40  108  ?GetStoneImage@CHgBoardImage@@QAEPAVCHgDDB@@XZ */
  return *(CHgDDB **)(this + 0x34);
}



/* ---- GetLTEdge @ 60b01e50 size=4 ---- */

/* public: class CPoint & __thiscall CHgBoardImage::GetLTEdge(void) */

CPoint * __thiscall CHgBoardImage::GetLTEdge(CHgBoardImage *this)

{
                    /* 0x1e50  85  ?GetLTEdge@CHgBoardImage@@QAEAAVCPoint@@XZ */
  return (CPoint *)(this + 0x24);
}



/* ---- FUN_60b01e60 @ 60b01e60 size=145 ---- */

undefined4 * __thiscall FUN_60b01e60(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x40,*(int *)((int)this + -4),CHgBoardImage::~CHgBoardImage);
    if ((param_1 & 1) != 0) {
      operator_delete__((undefined4 *)((int)this + -4));
    }
    return (undefined4 *)((int)this + -4);
  }
  *(undefined ***)this = CHgBoardImage::_vftable_;
  if (*(undefined4 **)((int)this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x34))(1);
  }
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(int **)((int)this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 4))(1);
  }
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x30));
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- CHgBoardImage @ 60b01f00 size=64 ---- */

/* public: __thiscall CHgBoardImage::CHgBoardImage(struct HDC__ * &) */

void __thiscall CHgBoardImage::CHgBoardImage(CHgBoardImage *this,HDC__ **param_1)

{
                    /* 0x1f00  7  ??0CHgBoardImage@@QAE@AAPAUHDC__@@@Z */
  *(HDC__ ***)(this + 0x3c) = param_1;
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}



/* ---- ~CHgBoardImage @ 60b01f40 size=73 ---- */

/* public: virtual __thiscall CHgBoardImage::~CHgBoardImage(void) */

void __thiscall CHgBoardImage::~CHgBoardImage(CHgBoardImage *this)

{
                    /* 0x1f40  20  ??1CHgBoardImage@@UAE@XZ */
  *(undefined ***)this = _vftable_;
  if (*(undefined4 **)(this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x34))(1);
  }
  if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x38))(1);
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))(1);
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
  }
  return;
}



/* ---- Create @ 60b01f90 size=529 ---- */

/* public: virtual int __thiscall CHgBoardImage::Create(class CHgBoard *,class CPoint const &,char
   const *,class CPoint const &,char const *,int,unsigned long,int,char const *,unsigned long
   *,class CSize) */

int __thiscall
CHgBoardImage::Create
          (CHgBoardImage *this,int param_1,undefined4 *param_2,undefined4 param_3,
          undefined4 *param_4,undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
          char *param_9,void *param_10,undefined4 param_12,undefined4 param_13)

{
  undefined4 uVar1;
  char cVar2;
  CHgDDB *pCVar3;
  int iVar4;
  void *_Dst;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f90  55
                       ?Create@CHgBoardImage@@UAEHPAVCHgBoard@@ABVCPoint@@PBD12HKH2PAKVCSize@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60b063c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    if (*(undefined4 **)(this + 0x34) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x34))(1,DAT_60b0d018 ^ (int)register0x00000010 - 0x1cU);
      *(undefined4 *)(this + 0x34) = 0;
    }
    pCVar3 = operator_new(0x38);
    uStack_4 = 0;
    if (pCVar3 == (CHgDDB *)0x0) {
      pCVar3 = (CHgDDB *)0x0;
    }
    else {
      CHgDDB::CHgDDB(pCVar3);
      *(undefined ***)pCVar3 = CHgDDB::vftable;
    }
    uStack_4 = 0xffffffff;
    *(CHgDDB **)(this + 0x34) = pCVar3;
    if ((pCVar3 != (CHgDDB *)0x0) &&
       (cVar2 = (**(code **)(*(int *)pCVar3 + 8))(param_5,param_7), cVar2 != '\0')) {
      *(uint *)(*(int *)(this + 0x34) + 0x30) = param_6;
      *(int *)(this + 0x1c) = *(int *)(*(int *)(this + 0x34) + 0xc) / (int)param_6;
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(*(int *)(this + 0x34) + 0x10);
      *(int *)(this + 4) = param_1;
      *(undefined4 *)(this + 8) = *param_2;
      *(undefined4 *)(this + 0xc) = param_2[1];
      *(uint *)(this + 0x18) = param_6;
      if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x38))(1);
        *(undefined4 *)(this + 0x38) = 0;
      }
      pCVar3 = operator_new(0x38);
      uStack_4 = 1;
      if (pCVar3 == (CHgDDB *)0x0) {
        pCVar3 = (CHgDDB *)0x0;
      }
      else {
        CHgDDB::CHgDDB(pCVar3);
        *(undefined ***)pCVar3 = CHgDDB::vftable;
      }
      uStack_4 = 0xffffffff;
      *(CHgDDB **)(this + 0x38) = pCVar3;
      if ((pCVar3 != (CHgDDB *)0x0) &&
         (cVar2 = (**(code **)(*(int *)pCVar3 + 4))(param_3), cVar2 != '\0')) {
        uVar1 = param_4[1];
        *(undefined4 *)(this + 0x24) = *param_4;
        *(undefined4 *)(this + 0x28) = uVar1;
        *(undefined4 *)(this + 0x10) = param_12;
        *(undefined4 *)(this + 0x14) = param_13;
        iVar4 = AdjustSeqFont(this,param_9);
        if (iVar4 != 0) {
          if (*(void **)(this + 0x30) != (void *)0x0) {
            operator_delete(*(void **)(this + 0x30));
            *(undefined4 *)(this + 0x30) = 0;
          }
          _Dst = operator_new__(-(uint)((int)((ulonglong)param_6 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_6 * 4));
          *(void **)(this + 0x30) = _Dst;
          if (_Dst != (void *)0x0) {
            memcpy(_Dst,param_10,param_6 * 4);
            ExceptionList = local_c;
            return 1;
          }
        }
      }
    }
    if (*(undefined4 **)(this + 0x34) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x34))(1);
      *(undefined4 *)(this + 0x34) = 0;
    }
    if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x38))(1);
      *(undefined4 *)(this + 0x38) = 0;
    }
    if (*(int **)(this + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2c) + 4))(1);
      *(undefined4 *)(this + 0x2c) = 0;
    }
    if (*(void **)(this + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x30));
      *(undefined4 *)(this + 0x30) = 0;
    }
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- AdjustSeqFont @ 60b021b0 size=168 ---- */

/* public: int __thiscall CHgBoardImage::AdjustSeqFont(char const *) */

int __thiscall CHgBoardImage::AdjustSeqFont(CHgBoardImage *this,char *param_1)

{
  CGdiObject *this_00;
  HFONT pHVar1;
  int iVar2;
  
                    /* 0x21b0  43  ?AdjustSeqFont@CHgBoardImage@@QAEHPBD@Z */
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))(1);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  this_00 = operator_new(8);
  if (this_00 == (CGdiObject *)0x0) {
    this_00 = (CGdiObject *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined ***)this_00 = CFont::vftable;
  }
  *(CGdiObject **)(this + 0x2c) = this_00;
  if (this_00 != (CGdiObject *)0x0) {
    pHVar1 = CreateFontA(-(*(int *)(this + 0x14) / 2),0,0,0,700,0,0,0,1,2,1,0,0,param_1);
    iVar2 = CGdiObject::Attach(this_00,pHVar1);
    if (iVar2 != 0) {
      return 1;
    }
    if (*(int **)(this + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2c) + 4))(1);
    }
    *(undefined4 *)(this + 0x2c) = 0;
  }
  return 0;
}



/* ---- ChangeBoardImage @ 60b02260 size=70 ---- */

/* public: virtual int __thiscall CHgBoardImage::ChangeBoardImage(class CHgBoard *,class CPoint
   const &,char const *,class CPoint const &,char const *,int,unsigned long,int,char const
   *,unsigned long *,class CSize) */

int __thiscall
CHgBoardImage::ChangeBoardImage
          (CHgBoardImage *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_12,
          undefined4 param_13)

{
  int iVar1;
  
                    /* 0x2260  47
                       ?ChangeBoardImage@CHgBoardImage@@UAEHPAVCHgBoard@@ABVCPoint@@PBD12HKH2PAKVCSize@@@Z
                        */
  iVar1 = (**(code **)(*(int *)this + 0x14))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_12,param_13);
  return iVar1;
}



/* ---- GetBoardRect @ 60b022b0 size=57 ---- */

/* public: class CRect __thiscall CHgBoardImage::GetBoardRect(void) */

void __thiscall CHgBoardImage::GetBoardRect(CHgBoardImage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_stack_00000004;
  
                    /* 0x22b0  72  ?GetBoardRect@CHgBoardImage@@QAE?AVCRect@@XZ */
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)(*(int *)(this + 4) + 0x10);
  iVar3 = *(int *)(this + 0x10);
  iVar4 = *(int *)(this + 0xc);
  iVar5 = *(int *)(this + 0x14);
  iVar6 = *(int *)(*(int *)(this + 4) + 0xc);
  in_stack_00000004[1] = iVar4;
  in_stack_00000004[2] = iVar3 * iVar6 + iVar1;
  *in_stack_00000004 = iVar1;
  in_stack_00000004[3] = iVar5 * iVar2 + iVar4;
  return;
}



/* ---- DrawBlock @ 60b022f0 size=66 ---- */

/* public: virtual void __thiscall CHgBoardImage::DrawBlock(class CHgDIB &,int,int) */

void __thiscall
CHgBoardImage::DrawBlock(CHgBoardImage *this,CHgDIB *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x22f0  58  ?DrawBlock@CHgBoardImage@@UAEXAAVCHgDIB@@HH@Z */
  if (*(CHgImageBase **)(this + 0x38) != (CHgImageBase *)0x0) {
    iVar2 = *(int *)(this + 0x14) * param_3 + *(int *)(this + 0x28);
    iVar1 = *(int *)(this + 0x10) * param_2 + *(int *)(this + 0x24);
    CHgImage::Draw((CHgImage *)param_1,iVar1,iVar2,*(CHgImageBase **)(this + 0x38),iVar1,iVar2,
                   *(int *)(this + 0x10),*(int *)(this + 0x14),0x100,0);
  }
  return;
}



/* ---- DrawStone @ 60b02340 size=85 ---- */

/* public: virtual void __thiscall CHgBoardImage::DrawStone(class CHgDIB &,int,int,int) */

void __thiscall
CHgBoardImage::DrawStone(CHgBoardImage *this,CHgDIB *param_1,int param_2,int param_3,int param_4)

{
                    /* 0x2340  63  ?DrawStone@CHgBoardImage@@UAEXAAVCHgDIB@@HHH@Z */
  if (*(CHgImage **)(this + 0x34) != (CHgImage *)0x0) {
    CHgImage::DrawTile((CHgImage *)param_1,
                       (*(int *)(this + 0x10) - *(int *)(this + 0x1c)) / 2 +
                       *(int *)(this + 0x10) * param_2 + *(int *)(this + 0x24),
                       (*(int *)(this + 0x14) - *(int *)(this + 0x20)) / 2 +
                       *(int *)(this + 0x14) * param_3 + *(int *)(this + 0x28),
                       *(CHgImage **)(this + 0x34),param_4,0x100,0);
  }
  return;
}



/* ---- DrawStoneAlpha @ 60b023a0 size=85 ---- */

/* public: virtual void __thiscall CHgBoardImage::DrawStoneAlpha(class CHgDIB &,int,int,int,int) */

void __thiscall
CHgBoardImage::DrawStoneAlpha
          (CHgBoardImage *this,CHgDIB *param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* 0x23a0  64  ?DrawStoneAlpha@CHgBoardImage@@UAEXAAVCHgDIB@@HHHH@Z */
  if (*(CHgImage **)(this + 0x34) != (CHgImage *)0x0) {
    CHgImage::DrawTile((CHgImage *)param_1,
                       (*(int *)(this + 0x10) - *(int *)(this + 0x1c)) / 2 +
                       *(int *)(this + 0x10) * param_2 + *(int *)(this + 0x24),
                       (*(int *)(this + 0x14) - *(int *)(this + 0x20)) / 2 +
                       *(int *)(this + 0x14) * param_3 + *(int *)(this + 0x28),
                       *(CHgImage **)(this + 0x34),param_4,param_5,0);
  }
  return;
}



/* ---- DrawSeqNo @ 60b02400 size=591 ---- */

/* public: virtual void __thiscall CHgBoardImage::DrawSeqNo(void) */

void __thiscall CHgBoardImage::DrawSeqNo(CHgBoardImage *this)

{
  int iVar1;
  int iVar2;
  HGDIOBJ h;
  int iVar3;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  int iVar4;
  int iVar5;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_40 [4];
  LPCSTR local_3c;
  HGDIOBJ local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
                    /* 0x2400  62  ?DrawSeqNo@CHgBoardImage@@UAEXXZ */
  local_c = 0xffffffff;
  local_10 = &LAB_60b06489;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar3 = *(int *)(*(int *)(this + 4) + 0xc);
  iVar5 = *(int *)(*(int *)(this + 4) + 0x10);
  local_30 = iVar3;
  local_2c = iVar5;
  local_34 = SetBkMode((HDC)**(undefined4 **)(this + 0x3c),1);
  iVar4 = 0;
  if (*(int *)(this + 0x2c) == 0) {
    h = (HGDIOBJ)0x0;
  }
  else {
    h = *(HGDIOBJ *)(*(int *)(this + 0x2c) + 4);
  }
  local_38 = SelectObject((HDC)**(undefined4 **)(this + 0x3c),h);
  local_3c = (LPCSTR)GetTextColor((HDC)**(undefined4 **)(this + 0x3c));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_40);
  local_c = 0;
  if (0 < iVar5) {
    do {
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar1 = *(int *)(this + 4);
          iVar2 = *(int *)(iVar1 + 4);
          if (((((-1 < *(int *)(*(int *)(iVar2 + iVar4 * 4) + iVar5 * 4)) && (iVar2 != 0)) &&
               (-1 < iVar5)) && ((iVar5 < *(int *)(iVar1 + 0xc) && (-1 < iVar4)))) &&
             (((iVar4 < *(int *)(iVar1 + 0x10) &&
               ((*(int *)(iVar1 + 0x14) == 0 ||
                (*(int *)(*(int *)(iVar2 + iVar4 * 4) + iVar5 * 4) != -2)))) &&
              (0 < *(int *)(*(int *)(*(int *)(iVar1 + 8) + iVar4 * 4) + iVar5 * 4))))) {
            local_28 = *(int *)(this + 0x10) * iVar5 + *(int *)(this + 0x24);
            local_24.left = *(int *)(this + 0x14) * iVar4 + *(int *)(this + 0x28);
            local_24.top = (iVar5 + 1) * *(int *)(this + 0x10) + *(int *)(this + 0x24);
            local_24.right = (iVar4 + 1) * *(int *)(this + 0x14) + *(int *)(this + 0x28);
            this_00 = *(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> **)(iVar1 + 4)
            ;
            if ((((this_00 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)0x0)
                 && (iVar5 < *(int *)(iVar1 + 0xc))) && (iVar4 < *(int *)(iVar1 + 0x10))) &&
               ((*(int *)(iVar1 + 0x14) == 0 ||
                (this_00 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                           (uint)(*(int *)(*(int *)(this_00 + iVar4 * 4) + iVar5 * 4) == -2),
                this_00 == (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)0x0))))
            {
              this_00 = *(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> **)
                         (*(int *)(iVar1 + 8) + iVar4 * 4);
            }
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                      (this_00,(char *)local_40);
            iVar3 = *(int *)(this + 4);
            if (((*(int *)(iVar3 + 4) == 0) || (*(int *)(iVar3 + 0xc) <= iVar5)) ||
               (*(int *)(iVar3 + 0x10) <= iVar4)) {
              iVar3 = -3;
            }
            else {
              iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 4) + iVar4 * 4) + iVar5 * 4);
            }
            SetTextColor((HDC)**(undefined4 **)(this + 0x3c),
                         *(COLORREF *)(*(int *)(this + 0x30) + iVar3 * 4));
            DrawTextA((HDC)**(undefined4 **)(this + 0x3c),local_3c,-1,&local_24,0x25);
            iVar3 = local_2c;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_2c);
  }
  SetTextColor((HDC)**(undefined4 **)(this + 0x3c),(COLORREF)local_3c);
  SelectObject((HDC)**(undefined4 **)(this + 0x3c),local_38);
  SetBkMode((HDC)**(undefined4 **)(this + 0x3c),local_34);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_40);
  ExceptionList = local_14;
  return;
}



/* ---- DrawSeqNo @ 60b02650 size=399 ---- */

/* public: virtual void __thiscall CHgBoardImage::DrawSeqNo(int,int,int,int) */

void __thiscall
CHgBoardImage::DrawSeqNo(CHgBoardImage *this,int param_1,int param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  int iVar2;
  COLORREF CStack00000014;
  tagRECT local_18;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x2650  61  ?DrawSeqNo@CHgBoardImage@@UAEXHHHH@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_60b06459;
  local_18.bottom = (LONG)ExceptionList;
  ExceptionList = &local_18.bottom;
  local_18.top = (param_1 + 1) * *(int *)(this + 0x10) + *(int *)(this + 0x24);
  local_18.right = (param_2 + 1) * *(int *)(this + 0x14) + *(int *)(this + 0x28);
  local_18.left = *(int *)(this + 0x14) * param_2 + *(int *)(this + 0x28);
  iVar2 = param_3;
  if (param_3 == -1) {
    iVar2 = *(int *)(this + 4);
    if ((((*(int *)(iVar2 + 4) == 0) || (param_1 < 0)) || (*(int *)(iVar2 + 0xc) <= param_1)) ||
       ((param_2 < 0 || (*(int *)(iVar2 + 0x10) <= param_2)))) {
      iVar2 = -3;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 4) + param_2 * 4) + param_1 * 4);
    }
  }
  if (param_4 == -1) {
    param_4 = CHgBoard::GetSeqNo(*(CHgBoard **)(this + 4),param_1,param_2);
  }
  if (0 < param_4) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_2);
    local_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)param_4,
               (char *)&param_2);
    param_2 = SetBkMode((HDC)**(undefined4 **)(this + 0x3c),1);
    pvVar1 = (HGDIOBJ)0x0;
    if (*(int *)(this + 0x2c) != 0) {
      pvVar1 = *(HGDIOBJ *)(*(int *)(this + 0x2c) + 4);
    }
    pvVar1 = SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar1);
    CStack00000014 =
         SetTextColor((HDC)**(undefined4 **)(this + 0x3c),
                      *(COLORREF *)(*(int *)(this + 0x30) + iVar2 * 4));
    DrawTextA((HDC)**(undefined4 **)(this + 0x3c),(LPCSTR)param_3,-1,&local_18,0x25);
    SetTextColor((HDC)**(undefined4 **)(this + 0x3c),CStack00000014);
    SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar1);
    SetBkMode((HDC)**(undefined4 **)(this + 0x3c),param_2);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_3);
  }
  ExceptionList = local_8;
  return;
}



/* ---- DrawBoard @ 60b027e0 size=166 ---- */

/* public: virtual void __thiscall CHgBoardImage::DrawBoard(class CHgDIB &) */

void __thiscall CHgBoardImage::DrawBoard(CHgBoardImage *this,CHgDIB *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x27e0  59  ?DrawBoard@CHgBoardImage@@UAEXAAVCHgDIB@@@Z */
  iVar1 = *(int *)(*(int *)(this + 4) + 0xc);
  iVar2 = *(int *)(*(int *)(this + 4) + 0x10);
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = *(int *)(this + 4);
          iVar4 = *(int *)(iVar3 + 4);
          if (*(int *)(*(int *)(iVar4 + iVar6 * 4) + iVar5 * 4) < 0) {
            (**(code **)(*(int *)this + 0x1c))(param_1,iVar5,iVar6);
          }
          else if ((((iVar4 == 0) || (iVar5 < 0)) || (*(int *)(iVar3 + 0xc) <= iVar5)) ||
                  ((iVar6 < 0 || (*(int *)(iVar3 + 0x10) <= iVar6)))) {
            (**(code **)(*(int *)this + 0x20))(param_1,iVar5,iVar6,0xfffffffd);
          }
          else {
            (**(code **)(*(int *)this + 0x20))
                      (param_1,iVar5,iVar6,*(undefined4 *)(*(int *)(iVar4 + iVar6 * 4) + iVar5 * 4))
            ;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return;
}



/* ---- MarkingLastPut @ 60b02890 size=215 ---- */

/* public: virtual void __thiscall CHgBoardImage::MarkingLastPut(int,class CHgCellInfo const
   &,int,int,int) */

void __thiscall
CHgBoardImage::MarkingLastPut
          (CHgBoardImage *this,int param_1,CHgCellInfo *param_2,int param_3,int param_4,int param_5)

{
  int rop2;
  HGDIOBJ pvVar1;
  tagRECT local_10;
  
                    /* 0x2890  138  ?MarkingLastPut@CHgBoardImage@@UAEXHABVCHgCellInfo@@HHH@Z */
  rop2 = SetROP2((HDC)**(undefined4 **)(this + 0x3c),6);
  pvVar1 = GetStockObject(5);
  pvVar1 = SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar1);
  local_10.right = (*(int *)param_2 + 1) * *(int *)(this + 0x10) + *(int *)(this + 0x24);
  local_10.left = *(int *)(this + 0x10) * *(int *)param_2 + *(int *)(this + 0x24);
  local_10.bottom = (*(int *)(param_2 + 4) + 1) * *(int *)(this + 0x14) + *(int *)(this + 0x28);
  local_10.top = *(int *)(this + 0x14) * *(int *)(param_2 + 4) + *(int *)(this + 0x28);
  InflateRect(&local_10,-param_4,-param_5);
  Rectangle((HDC)**(undefined4 **)(this + 0x3c),local_10.left,local_10.top,local_10.right,
            local_10.bottom);
  SetROP2((HDC)**(undefined4 **)(this + 0x3c),rop2);
  SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar1);
  return;
}



/* ---- MarkingLastPut @ 60b02970 size=347 ---- */

/* public: virtual void __thiscall CHgBoardImage::MarkingLastPut(int,class CHgCellInfo const &,class
   CHgCellInfo const &,int,int,int) */

void __thiscall
CHgBoardImage::MarkingLastPut
          (CHgBoardImage *this,int param_1,CHgCellInfo *param_2,CHgCellInfo *param_3,int param_4,
          int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int rop2;
  HGDIOBJ pvVar3;
  tagRECT local_28;
  tagRECT local_18;
  
                    /* 0x2970  137  ?MarkingLastPut@CHgBoardImage@@UAEXHABVCHgCellInfo@@0HHH@Z */
  rop2 = SetROP2((HDC)**(undefined4 **)(this + 0x3c),6);
  pvVar3 = GetStockObject(5);
  pvVar3 = SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar3);
  local_18.right = *(LONG *)(this + 0x24);
  iVar1 = *(int *)(this + 0x10);
  local_28.left = iVar1 * *(int *)param_2 + local_18.right;
  iVar2 = *(int *)(this + 0x14);
  local_28.top = iVar2 * *(int *)(param_2 + 4) + *(int *)(this + 0x28);
  local_28.right = (*(int *)param_2 + 1) * iVar1 + local_18.right;
  local_28.bottom = (*(int *)(param_2 + 4) + 1) * iVar2 + *(int *)(this + 0x28);
  local_18.left = iVar1 * *(int *)param_3 + local_18.right;
  local_18.top = iVar2 * *(int *)(param_3 + 4) + *(int *)(this + 0x28);
  local_18.right = (*(int *)param_3 + 1) * iVar1 + local_18.right;
  local_18.bottom = (*(int *)(param_3 + 4) + 1) * iVar2 + *(int *)(this + 0x28);
  InflateRect(&local_28,-param_5,-param_6);
  InflateRect(&local_18,-param_5,-param_6);
  Rectangle((HDC)**(undefined4 **)(this + 0x3c),local_28.left,local_28.top,local_28.right,
            local_28.bottom);
  Rectangle((HDC)**(undefined4 **)(this + 0x3c),local_18.left,local_18.top,local_18.right,
            local_18.bottom);
  SetROP2((HDC)**(undefined4 **)(this + 0x3c),rop2);
  SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar3);
  return;
}



/* ---- MarkingMouseCell @ 60b02ad0 size=215 ---- */

/* public: virtual void __thiscall CHgBoardImage::MarkingMouseCell(class CPoint const &,int,int,int)
    */

void __thiscall
CHgBoardImage::MarkingMouseCell
          (CHgBoardImage *this,CPoint *param_1,int param_2,int param_3,int param_4)

{
  int rop2;
  HGDIOBJ pvVar1;
  tagRECT local_10;
  
                    /* 0x2ad0  139  ?MarkingMouseCell@CHgBoardImage@@UAEXABVCPoint@@HHH@Z */
  rop2 = SetROP2((HDC)**(undefined4 **)(this + 0x3c),6);
  pvVar1 = GetStockObject(5);
  pvVar1 = SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar1);
  local_10.right = (*(int *)param_1 + 1) * *(int *)(this + 0x10) + *(int *)(this + 0x24);
  local_10.left = *(int *)(this + 0x10) * *(int *)param_1 + *(int *)(this + 0x24);
  local_10.bottom = (*(int *)(param_1 + 4) + 1) * *(int *)(this + 0x14) + *(int *)(this + 0x28);
  local_10.top = *(int *)(this + 0x14) * *(int *)(param_1 + 4) + *(int *)(this + 0x28);
  InflateRect(&local_10,-param_3,-param_4);
  Rectangle((HDC)**(undefined4 **)(this + 0x3c),local_10.left,local_10.top,local_10.right,
            local_10.bottom);
  SetROP2((HDC)**(undefined4 **)(this + 0x3c),rop2);
  SelectObject((HDC)**(undefined4 **)(this + 0x3c),pvVar1);
  return;
}



/* ---- FUN_60b02bb0 @ 60b02bb0 size=36 ---- */

CImageList * __thiscall FUN_60b02bb0(void *this,byte param_1)

{
  *(undefined ***)this = CFont::vftable;
  CImageList::~CImageList(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- `scalar_deleting_destructor' @ 60b02be0 size=30 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall CImageList::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2008 Release */

void * __thiscall CImageList::_scalar_deleting_destructor_(CImageList *this,uint param_1)

{
  ~CImageList(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- ~CImageList @ 60b02c00 size=115 ---- */

/* Library Function - Single Match
    public: virtual __thiscall CImageList::~CImageList(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CImageList::~CImageList(CImageList *this)

{
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  undefined1 local_208 [512];
  uint local_8;
  
  puStack_210 = &LAB_60b06119;
  local_214 = ExceptionList;
  local_8 = DAT_60b0d018 ^ (uint)local_208;
  ExceptionList = &local_214;
  *(undefined ***)this = CGdiObject::vftable;
  local_20c = 0;
  CGdiObject::DeleteObject((CGdiObject *)this);
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}



/* ---- Catch@60b02c73 @ 60b02c73 size=149 ---- */

undefined4 Catch_60b02c73(void)

{
  int *piVar1;
  int iVar2;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this;
  int unaff_EBP;
  
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piVar1 = *(int **)(unaff_EBP + -0x18);
  iVar2 = (**(code **)(*piVar1 + 0x14))();
  if (iVar2 == 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this,(char *)(unaff_EBP + -0x14));
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14),
               (char *)(unaff_EBP + -0x14));
  }
  AfxMessageBox(*(char **)(unaff_EBP + -0x14),0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  (**(code **)(*piVar1 + 4))(1);
  return 0x60b02c4e;
}



/* ---- CHgSeqInfo @ 60b02d10 size=33 ---- */

/* public: __thiscall CHgSeqInfo::CHgSeqInfo(class CHgSeqInfo const &) */

void __thiscall CHgSeqInfo::CHgSeqInfo(CHgSeqInfo *this,CHgSeqInfo *param_1)

{
                    /* 0x2d10  14  ??0CHgSeqInfo@@QAE@ABV0@@Z */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}



/* ---- operator= @ 60b02d40 size=27 ---- */

/* public: class CHgSeqInfo & __thiscall CHgSeqInfo::operator=(class CHgSeqInfo const &) */

CHgSeqInfo * __thiscall CHgSeqInfo::operator=(CHgSeqInfo *this,CHgSeqInfo *param_1)

{
                    /* 0x2d40  29  ??4CHgSeqInfo@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}



/* ---- `default_constructor_closure' @ 60b02d60 size=22 ---- */

/* public: void __thiscall CHgSeqInfo::`default constructor closure'(void) */

void __thiscall CHgSeqInfo::_default_constructor_closure_(CHgSeqInfo *this)

{
                    /* 0x2d60  39  ??_FCHgSeqInfo@@QAEXXZ */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}



/* ---- FUN_60b02d80 @ 60b02d80 size=88 ---- */

CHgSeqInfo * __thiscall FUN_60b02d80(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = CHgSeqInfo::_vftable_;
    CHgSeqInfo::RemoveList(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_(this,0x10,*(int *)((int)this + -4),CHgSeqInfo::~CHgSeqInfo);
  if ((param_1 & 1) != 0) {
    operator_delete__((CHgSeqInfo *)((int)this + -4));
  }
  return (CHgSeqInfo *)((int)this + -4);
}



/* ---- SetTeamNumber @ 60b02de0 size=10 ---- */

/* public: void __thiscall CHgBoardLogic::SetTeamNumber(int) */

void __thiscall CHgBoardLogic::SetTeamNumber(CHgBoardLogic *this,int param_1)

{
                    /* 0x2de0  174  ?SetTeamNumber@CHgBoardLogic@@QAEXH@Z */
  *(int *)(this + 0xc) = param_1;
  return;
}



/* ---- SetCurTurn @ 60b02df0 size=10 ---- */

/* public: void __thiscall CHgBoardLogic::SetCurTurn(int) */

void __thiscall CHgBoardLogic::SetCurTurn(CHgBoardLogic *this,int param_1)

{
                    /* 0x2df0  161  ?SetCurTurn@CHgBoardLogic@@QAEXH@Z */
  *(int *)(this + 0x10) = param_1;
  return;
}



/* ---- SetPlayerTurn @ 60b02e00 size=10 ---- */

/* public: void __thiscall CHgBoardLogic::SetPlayerTurn(int) */

void __thiscall CHgBoardLogic::SetPlayerTurn(CHgBoardLogic *this,int param_1)

{
                    /* 0x2e00  168  ?SetPlayerTurn@CHgBoardLogic@@QAEXH@Z */
  *(int *)(this + 0x18) = param_1;
  return;
}



/* ---- SetOwnMode @ 60b02e10 size=17 ---- */

/* public: void __thiscall CHgBoardLogic::SetOwnMode(int,int) */

void __thiscall CHgBoardLogic::SetOwnMode(CHgBoardLogic *this,int param_1,int param_2)

{
                    /* 0x2e10  165  ?SetOwnMode@CHgBoardLogic@@QAEXHH@Z */
  *(int *)(this + 0x1c) = param_1;
  *(int *)(this + 0x20) = param_2;
  return;
}



/* ---- ReleaseSelectedCell @ 60b02e30 size=8 ---- */

/* public: void __thiscall CHgBoardLogic::ReleaseSelectedCell(void) */

void __thiscall CHgBoardLogic::ReleaseSelectedCell(CHgBoardLogic *this)

{
                    /* 0x2e30  148  ?ReleaseSelectedCell@CHgBoardLogic@@QAEXXZ */
  *(undefined4 *)(this + 0x30) = 0;
  return;
}



/* ---- GetPlayerNumber @ 60b02e40 size=4 ---- */

/* public: int __thiscall CHgBoardLogic::GetPlayerNumber(void) */

int __thiscall CHgBoardLogic::GetPlayerNumber(CHgBoardLogic *this)

{
                    /* 0x2e40  95  ?GetPlayerNumber@CHgBoardLogic@@QAEHXZ
                       0x2e40  97  ?GetPlayerTurn@CHgBoardProgressInfo@@QAEHXZ */
  return *(int *)(this + 8);
}



/* ---- GetTeamNumber @ 60b02e50 size=4 ---- */

/* public: int __thiscall CHgBoardLogic::GetTeamNumber(void) */

int __thiscall CHgBoardLogic::GetTeamNumber(CHgBoardLogic *this)

{
                    /* 0x2e50  111  ?GetTeamNumber@CHgBoardLogic@@QAEHXZ */
  return *(int *)(this + 0xc);
}



/* ---- GetCurTurn @ 60b02e60 size=4 ---- */

/* public: int __thiscall CHgBoardLogic::GetCurTurn(void) */

int __thiscall CHgBoardLogic::GetCurTurn(CHgBoardLogic *this)

{
                    /* 0x2e60  78  ?GetCurTurn@CHgBoardLogic@@QAEHXZ */
  return *(int *)(this + 0x10);
}



/* ---- GetPlayerTurn @ 60b02e70 size=4 ---- */

/* public: int __thiscall CHgBoardLogic::GetPlayerTurn(void) */

int __thiscall CHgBoardLogic::GetPlayerTurn(CHgBoardLogic *this)

{
                    /* 0x2e70  96  ?GetPlayerTurn@CHgBoardLogic@@QAEHXZ */
  return *(int *)(this + 0x18);
}



/* ---- IsMyTurn @ 60b02e80 size=14 ---- */

/* public: int __thiscall CHgBoardLogic::IsMyTurn(void) */

int __thiscall CHgBoardLogic::IsMyTurn(CHgBoardLogic *this)

{
                    /* 0x2e80  124  ?IsMyTurn@CHgBoardLogic@@QAEHXZ */
  return (uint)(*(int *)(this + 0x10) == *(int *)(this + 0x18));
}



/* ---- GetOwnMode @ 60b02e90 size=13 ---- */

/* public: int __thiscall CHgBoardLogic::GetOwnMode(void) */

int __thiscall CHgBoardLogic::GetOwnMode(CHgBoardLogic *this)

{
                    /* 0x2e90  93  ?GetOwnMode@CHgBoardLogic@@QAEHXZ */
  if (*(int *)(this + 0x24) == 0) {
    return 0;
  }
  return *(int *)(this + 0x1c);
}



/* ---- IsPlaying @ 60b02ea0 size=4 ---- */

/* public: int __thiscall CHgBoardLogic::IsPlaying(void) */

int __thiscall CHgBoardLogic::IsPlaying(CHgBoardLogic *this)

{
                    /* 0x2ea0  128  ?IsPlaying@CHgBoardLogic@@QAEHXZ */
  return *(int *)(this + 0x24);
}



/* ---- GetSeqNo @ 60b02eb0 size=4 ---- */

/* public: int __thiscall CHgBoardLogic::GetSeqNo(void) */

int __thiscall CHgBoardLogic::GetSeqNo(CHgBoardLogic *this)

{
                    /* 0x2eb0  104  ?GetSeqNo@CHgBoardLogic@@QAEHXZ */
  return *(int *)(this + 0x28);
}



/* ---- GetPlayerAvatarImage @ 60b02ec0 size=4 ---- */

/* public: class CAvtr2004 * __thiscall CHgBoardProgressInfo::GetPlayerAvatarImage(void) */

CAvtr2004 * __thiscall CHgBoardProgressInfo::GetPlayerAvatarImage(CHgBoardProgressInfo *this)

{
                    /* 0x2ec0  94  ?GetPlayerAvatarImage@CHgBoardProgressInfo@@QAEPAVCAvtr2004@@XZ
                       0x2ec0  130  ?IsSelected@CHgBoardLogic@@QAEHXZ */
  return *(CAvtr2004 **)(this + 0x30);
}



/* ---- GetSelectedCell @ 60b02ed0 size=4 ---- */

/* public: class CPoint & __thiscall CHgBoardLogic::GetSelectedCell(void) */

CPoint * __thiscall CHgBoardLogic::GetSelectedCell(CHgBoardLogic *this)

{
                    /* 0x2ed0  101  ?GetSelectedCell@CHgBoardLogic@@QAEAAVCPoint@@XZ */
  return (CPoint *)(this + 0x34);
}



/* ---- SetUndoSize @ 60b02ee0 size=10 ---- */

/* public: void __thiscall CHgBoardLogic::SetUndoSize(int) */

void __thiscall CHgBoardLogic::SetUndoSize(CHgBoardLogic *this,int param_1)

{
                    /* 0x2ee0  176  ?SetUndoSize@CHgBoardLogic@@QAEXH@Z */
  *(int *)(this + 0x44) = param_1;
  return;
}



/* ---- GetUndoList @ 60b02ef0 size=4 ---- */

/* public: class CTypedPtrList<class CPtrList,class CHgSeqInfo *> * __thiscall
   CHgBoardLogic::GetUndoList(void) */

CTypedPtrList<CPtrList,CHgSeqInfo*> * __thiscall CHgBoardLogic::GetUndoList(CHgBoardLogic *this)

{
                    /* 0x2ef0  114
                       ?GetUndoList@CHgBoardLogic@@QAEPAV?$CTypedPtrList@VCPtrList@@PAVCHgSeqInfo@@@@XZ
                        */
  return *(CTypedPtrList<CPtrList,CHgSeqInfo*> **)(this + 0x40);
}



/* ---- IsViewMode @ 60b02f00 size=4 ---- */

/* public: int __thiscall CHgBoardLogic::IsViewMode(void) */

int __thiscall CHgBoardLogic::IsViewMode(CHgBoardLogic *this)

{
                    /* 0x2f00  135  ?IsViewMode@CHgBoardLogic@@QAEHXZ */
  return *(int *)(this + 0x3c);
}



/* ---- FUN_60b02f10 @ 60b02f10 size=143 ---- */

CHgBoardLogic * __thiscall FUN_60b02f10(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x48,*(int *)((int)this + -4),CHgBoardLogic::~CHgBoardLogic);
    if ((param_1 & 1) != 0) {
      operator_delete__((CHgBoardLogic *)((int)this + -4));
    }
    return (CHgBoardLogic *)((int)this + -4);
  }
  *(undefined ***)this = CHgBoardLogic::_vftable_;
  if ((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 0x24) != 0)) {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    CHgBoardLogic::ClearUndoList(this);
  }
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 4))(1);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- CHgBoardLogic @ 60b02fa0 size=70 ---- */

/* public: __thiscall CHgBoardLogic::CHgBoardLogic(void) */

void __thiscall CHgBoardLogic::CHgBoardLogic(CHgBoardLogic *this)

{
                    /* 0x2fa0  8  ??0CHgBoardLogic@@QAE@XZ */
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 10;
  return;
}



/* ---- ~CHgBoardLogic @ 60b02ff0 size=77 ---- */

/* public: virtual __thiscall CHgBoardLogic::~CHgBoardLogic(void) */

void __thiscall CHgBoardLogic::~CHgBoardLogic(CHgBoardLogic *this)

{
                    /* 0x2ff0  21  ??1CHgBoardLogic@@UAE@XZ */
  *(undefined ***)this = _vftable_;
  if ((*(int *)(this + 4) != 0) && (*(int *)(this + 0x24) != 0)) {
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = 0xffffffff;
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int *)(this + 0x40) != 0) {
    ClearUndoList(this);
  }
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))(1);
  }
  *(undefined4 *)(this + 0x40) = 0;
  return;
}



/* ---- Create @ 60b03040 size=161 ---- */

/* public: virtual int __thiscall CHgBoardLogic::Create(class CHgBoard *) */

int __thiscall CHgBoardLogic::Create(CHgBoardLogic *this,CHgBoard *param_1)

{
  uint uVar1;
  CPtrList *this_00;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3040  56  ?Create@CHgBoardLogic@@UAEHPAVCHgBoard@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60b06388;
  local_c = ExceptionList;
  uVar1 = DAT_60b0d018 ^ (int)register0x00000010 - 0x14U;
  if (param_1 == (CHgBoard *)0x0) {
    return 0;
  }
  ExceptionList = &local_c;
  *(CHgBoard **)(this + 4) = param_1;
  if (*(int *)(this + 0x40) != 0) {
    (**(code **)(*(int *)this + 0x44))(uVar1);
  }
  this_00 = operator_new(0x1c);
  uStack_4 = 0;
  if (this_00 == (CPtrList *)0x0) {
    this_00 = (CPtrList *)0x0;
  }
  else {
    CPtrList::CPtrList(this_00,10);
    *(undefined ***)this_00 = CTypedPtrList<CPtrList,CHgSeqInfo*>::vftable;
  }
  *(CPtrList **)(this + 0x40) = this_00;
  ExceptionList = local_c;
  return (uint)(this_00 != (CPtrList *)0x0);
}



/* ---- InitializeBoard @ 60b030f0 size=24 ---- */

/* public: virtual int __thiscall CHgBoardLogic::InitializeBoard(void *) */

int __thiscall CHgBoardLogic::InitializeBoard(CHgBoardLogic *this,void *param_1)

{
  int iVar1;
  
                    /* 0x30f0  117  ?InitializeBoard@CHgBoardLogic@@UAEHPAX@Z */
  if (*(CHgBoard **)(this + 4) == (CHgBoard *)0x0) {
    return 0;
  }
  iVar1 = CHgBoard::ClearBoard(*(CHgBoard **)(this + 4),-1,-1);
  return iVar1;
}



/* ---- StartGame @ 60b03110 size=121 ---- */

/* public: virtual int __thiscall CHgBoardLogic::StartGame(int,int,int,int,void *,int,int,int) */

int __thiscall
CHgBoardLogic::StartGame
          (CHgBoardLogic *this,int param_1,int param_2,int param_3,int param_4,void *param_5,
          int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  
                    /* 0x3110  179  ?StartGame@CHgBoardLogic@@UAEHHHHHPAXHHH@Z */
  if ((*(int *)(this + 4) != 0) && (*(int *)(this + 0x24) == 0)) {
    *(int *)(this + 0x44) = param_6;
    (**(code **)(*(int *)this + 0x44))();
    *(int *)(this + 0xc) = param_2;
    *(int *)(this + 0x10) = param_3;
    *(int *)(this + 8) = param_1;
    *(int *)(this + 0x1c) = param_7;
    pcVar1 = *(code **)(*(int *)this + 0x18);
    *(int *)(this + 0x20) = param_8;
    *(int *)(this + 0x18) = param_4;
    iVar2 = (*pcVar1)(param_5);
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0x24) = 1;
      *(undefined4 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0x2c) = 0;
      return 1;
    }
  }
  return 0;
}



/* ---- GameOver @ 60b03190 size=41 ---- */

/* public: virtual int __thiscall CHgBoardLogic::GameOver(void) */

int __thiscall CHgBoardLogic::GameOver(CHgBoardLogic *this)

{
                    /* 0x3190  69  ?GameOver@CHgBoardLogic@@UAEHXZ */
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = 0xffffffff;
    *(undefined4 *)(this + 0x24) = 0;
  }
  return 1;
}



/* ---- UndoGameOver @ 60b031c0 size=24 ---- */

/* public: virtual int __thiscall CHgBoardLogic::UndoGameOver(void) */

int __thiscall CHgBoardLogic::UndoGameOver(CHgBoardLogic *this)

{
                    /* 0x31c0  181  ?UndoGameOver@CHgBoardLogic@@UAEHXZ */
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(this + 0x24) = 1;
  return 1;
}



/* ---- SetSelectedCell @ 60b031e0 size=96 ---- */

/* public: int __thiscall CHgBoardLogic::SetSelectedCell(int,int) */

int __thiscall CHgBoardLogic::SetSelectedCell(CHgBoardLogic *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* 0x31e0  172  ?SetSelectedCell@CHgBoardLogic@@QAEHHH@Z */
  iVar1 = *(int *)(this + 4);
  if ((((*(int *)(iVar1 + 4) != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar1 + 0xc))) &&
     (((-1 < param_2 && (param_2 < *(int *)(iVar1 + 0x10))) &&
      (iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 4) + param_2 * 4) + param_1 * 4), iVar1 != -3))))
  {
    iVar1 = IsStoneOfTurn(this,*(int *)(this + 0x10),iVar1);
    if (iVar1 != 0) {
      *(int *)(this + 0x38) = param_2;
      *(int *)(this + 0x34) = param_1;
      *(undefined4 *)(this + 0x30) = 1;
      return 1;
    }
  }
  return 0;
}



/* ---- UpdateBoard @ 60b03240 size=390 ---- */

/* public: virtual class CTypedPtrList<class CPtrList,class CHgCellInfo *> * __thiscall
   CHgBoardLogic::UpdateBoard(int,int,int) */

CTypedPtrList<CPtrList,CHgCellInfo*> * __thiscall
CHgBoardLogic::UpdateBoard(CHgBoardLogic *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  CPtrList *pCVar3;
  int iVar4;
  void *unaff_EDI;
  undefined4 local_c;
  undefined1 *puStack_8;
  CPtrList *pCStack_4;
  
                    /* 0x3240  183
                       ?UpdateBoard@CHgBoardLogic@@UAEPAV?$CTypedPtrList@VCPtrList@@PAVCHgCellInfo@@@@HHH@Z
                        */
  pCStack_4 = (CPtrList *)0xffffffff;
  puStack_8 = &LAB_60b06428;
  local_c = ExceptionList;
  uVar1 = DAT_60b0d018 ^ (int)register0x00000010 - 0x1cU;
  ExceptionList = &local_c;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  (**(code **)(**(int **)(this + 4) + 0x18))
            (param_1,param_2,param_3,*(undefined4 *)(this + 0x28),uVar1);
  piVar2 = operator_new(0x18);
  if (piVar2 != (int *)0x0) {
    piVar2[4] = *(int *)(this + 0x28);
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[2] = (int)pCStack_4;
    piVar2[3] = (int)local_c;
    piVar2[5] = (int)puStack_8;
    pCVar3 = operator_new(0x1c);
    pCStack_4 = pCVar3;
    if (pCVar3 == (CPtrList *)0x0) {
      pCVar3 = (CPtrList *)0x0;
    }
    else {
      CPtrList::CPtrList(pCVar3,10);
      *(undefined ***)pCVar3 = CTypedPtrList<CPtrList,CHgCellInfo*>::vftable;
    }
    if (pCVar3 != (CPtrList *)0x0) {
      CPtrList::AddTail(pCVar3,piVar2);
      iVar4 = AddUndo(this,*(int *)(this + 0x10),(CTypedPtrList<CPtrList,CHgCellInfo*> *)pCVar3);
      if (iVar4 == 0) {
        CPtrList::RemoveAll(pCVar3);
        operator_delete(piVar2);
        (**(code **)(*(int *)pCVar3 + 4))(1);
        ExceptionList = unaff_EDI;
        return (CTypedPtrList<CPtrList,CHgCellInfo*> *)0x0;
      }
      ExceptionList = unaff_EDI;
      return (CTypedPtrList<CPtrList,CHgCellInfo*> *)pCVar3;
    }
    operator_delete(piVar2);
  }
  ExceptionList = unaff_EDI;
  return (CTypedPtrList<CPtrList,CHgCellInfo*> *)0x0;
}



/* ---- FreeUpdateList @ 60b033d0 size=72 ---- */

/* public: void __thiscall CHgBoardLogic::FreeUpdateList(class CTypedPtrList<class CPtrList,class
   CHgCellInfo *> *) */

void __thiscall
CHgBoardLogic::FreeUpdateList(CHgBoardLogic *this,CTypedPtrList<CPtrList,CHgCellInfo*> *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* 0x33d0  67
                       ?FreeUpdateList@CHgBoardLogic@@QAEXPAV?$CTypedPtrList@VCPtrList@@PAVCHgCellInfo@@@@@Z
                        */
  puVar2 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      CPtrList::RemoveAll((CPtrList *)param_1);
      (**(code **)(*(int *)param_1 + 4))(1);
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete((void *)*puVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  AfxThrowInvalidArgException();
}



/* ---- IsStoneOfTurn @ 60b03420 size=134 ---- */

/* public: int __thiscall CHgBoardLogic::IsStoneOfTurn(int,int) */

int __thiscall CHgBoardLogic::IsStoneOfTurn(CHgBoardLogic *this,int param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x3420  131  ?IsStoneOfTurn@CHgBoardLogic@@QAEHHH@Z */
  uVar1 = *(uint *)(this + 0x1c);
  if (((uVar1 != 1) && (uVar1 != 2)) && (uVar1 != 3)) {
    param_1 = -1;
  }
  uVar1 = -(uint)(*(int *)(this + 0x24) != 0) & uVar1;
  if (uVar1 == 1) {
    return (uint)(param_1 == param_2);
  }
  if (uVar1 == 2) {
    if ((*(int *)(this + 0x20) * param_1 <= param_2) &&
       (param_2 < (param_1 + 1) * *(int *)(this + 0x20))) {
      return 1;
    }
  }
  else if (uVar1 == 3) {
    return (uint)(param_1 % *(int *)(this + 0xc) == param_2 % *(int *)(this + 0xc));
  }
  return 0;
}



/* ---- GetKeyStoneOfTurn @ 60b034b0 size=89 ---- */

/* public: int __thiscall CHgBoardLogic::GetKeyStoneOfTurn(int) */

int __thiscall CHgBoardLogic::GetKeyStoneOfTurn(CHgBoardLogic *this,int param_1)

{
  uint uVar1;
  
                    /* 0x34b0  84  ?GetKeyStoneOfTurn@CHgBoardLogic@@QAEHH@Z */
  uVar1 = *(uint *)(this + 0x1c);
  if (((uVar1 != 1) && (uVar1 != 2)) && (uVar1 != 3)) {
    param_1 = -1;
  }
  uVar1 = -(uint)(*(int *)(this + 0x24) != 0) & uVar1;
  if (uVar1 == 1) {
    return param_1;
  }
  if (uVar1 == 2) {
    return *(int *)(this + 0x20) * param_1;
  }
  if (uVar1 == 3) {
    return param_1 % *(int *)(this + 0xc);
  }
  return -1;
}



/* ---- GetStoneOwner @ 60b03510 size=65 ---- */

/* public: int __thiscall CHgBoardLogic::GetStoneOwner(int) */

int __thiscall CHgBoardLogic::GetStoneOwner(CHgBoardLogic *this,int param_1)

{
  int iVar1;
  
                    /* 0x3510  109  ?GetStoneOwner@CHgBoardLogic@@QAEHH@Z */
  if (*(int *)(this + 0x24) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x1c);
  }
  if (iVar1 == 1) {
    return param_1;
  }
  if (iVar1 == 2) {
    return param_1 / *(int *)(this + 0x20);
  }
  if (iVar1 == 3) {
    return param_1 % *(int *)(this + 0xc);
  }
  return -1;
}



/* ---- GetPrevTurn @ 60b03560 size=67 ---- */

/* public: int __thiscall CHgBoardLogic::GetPrevTurn(int) */

int __thiscall CHgBoardLogic::GetPrevTurn(CHgBoardLogic *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x3560  99  ?GetPrevTurn@CHgBoardLogic@@QAEHH@Z */
  iVar1 = *(int *)(this + 0x40);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    iVar1 = *(int *)(iVar1 + 8);
    if (1 < param_1) {
      iVar2 = 1;
      do {
        if (iVar1 == 0) {
          return -1;
        }
        iVar1 = *(int *)(iVar1 + 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      return *(int *)(*(int *)(iVar1 + 8) + 4);
    }
  }
  return -1;
}



/* ---- GetNextTurn @ 60b035b0 size=16 ---- */

/* public: virtual int __thiscall CHgBoardLogic::GetNextTurn(void) */

int __thiscall CHgBoardLogic::GetNextTurn(CHgBoardLogic *this)

{
                    /* 0x35b0  92  ?GetNextTurn@CHgBoardLogic@@UAEHXZ */
  return *(int *)(this + 0x10) + 1U & (*(int *)(this + 8) <= (int)(*(int *)(this + 0x10) + 1U)) - 1;
}



/* ---- GetNextTurn @ 60b035c0 size=19 ---- */

/* public: virtual int __thiscall CHgBoardLogic::GetNextTurn(int) */

int __thiscall CHgBoardLogic::GetNextTurn(CHgBoardLogic *this,int param_1)

{
                    /* 0x35c0  91  ?GetNextTurn@CHgBoardLogic@@UAEHH@Z */
  return param_1 + 1U & (*(int *)(this + 8) <= (int)(param_1 + 1U)) - 1;
}



/* ---- GetLastPut @ 60b035e0 size=96 ---- */

/* public: int __thiscall CHgBoardLogic::GetLastPut(int &,class CHgCellInfo &) */

int __thiscall CHgBoardLogic::GetLastPut(CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x35e0  87  ?GetLastPut@CHgBoardLogic@@QAEHAAHAAVCHgCellInfo@@@Z */
  iVar1 = *(int *)(this + 0x40);
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 0xc) == 0)) ||
      (iVar1 = *(int *)(*(int *)(iVar1 + 8) + 8), iVar1 == 0)) ||
     (puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 8), puVar2 == (undefined4 *)0x0)
     ) {
    return 0;
  }
  *param_1 = *(int *)(iVar1 + 4);
  *(undefined4 *)param_2 = *puVar2;
  *(undefined4 *)(param_2 + 4) = puVar2[1];
  *(undefined4 *)(param_2 + 8) = puVar2[2];
  *(undefined4 *)(param_2 + 0xc) = puVar2[3];
  *(undefined4 *)(param_2 + 0x10) = puVar2[4];
  *(undefined4 *)(param_2 + 0x14) = puVar2[5];
  return 1;
}



/* ---- GetCurrPut @ 60b03640 size=105 ---- */

/* public: int __thiscall CHgBoardLogic::GetCurrPut(int &,class CHgCellInfo &) */

int __thiscall CHgBoardLogic::GetCurrPut(CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x3640  81  ?GetCurrPut@CHgBoardLogic@@QAEHAAHAAVCHgCellInfo@@@Z */
  if ((*(int *)(this + 0x40) != 0) && (*(int *)(*(int *)(this + 0x40) + 0xc) != 0)) {
    if (*(int *)(this + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      AfxThrowInvalidArgException();
    }
    iVar1 = *(int *)(*(int *)(this + 0x2c) + 8);
    if ((iVar1 != 0) &&
       (puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 8),
       puVar2 != (undefined4 *)0x0)) {
      *param_1 = *(int *)(iVar1 + 4);
      *(undefined4 *)param_2 = *puVar2;
      *(undefined4 *)(param_2 + 4) = puVar2[1];
      *(undefined4 *)(param_2 + 8) = puVar2[2];
      *(undefined4 *)(param_2 + 0xc) = puVar2[3];
      *(undefined4 *)(param_2 + 0x10) = puVar2[4];
      *(undefined4 *)(param_2 + 0x14) = puVar2[5];
      return 1;
    }
  }
  return 0;
}



/* ---- GetLastPut @ 60b036b0 size=154 ---- */

/* public: int __thiscall CHgBoardLogic::GetLastPut(int &,class CHgCellInfo &,class CHgCellInfo &)
    */

int __thiscall
CHgBoardLogic::GetLastPut
          (CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2,CHgCellInfo *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* 0x36b0  86  ?GetLastPut@CHgBoardLogic@@QAEHAAHAAVCHgCellInfo@@1@Z */
  iVar1 = *(int *)(this + 0x40);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) &&
     (iVar1 = *(int *)(*(int *)(iVar1 + 8) + 8), iVar1 != 0)) {
    puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 8) + 8) + 8);
    if ((puVar2 != (undefined4 *)0x0) &&
       (puVar3 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 8),
       puVar3 != (undefined4 *)0x0)) {
      *param_1 = *(int *)(iVar1 + 4);
      *(undefined4 *)param_2 = *puVar2;
      *(undefined4 *)(param_2 + 4) = puVar2[1];
      *(undefined4 *)(param_2 + 8) = puVar2[2];
      *(undefined4 *)(param_2 + 0xc) = puVar2[3];
      *(undefined4 *)(param_2 + 0x10) = puVar2[4];
      *(undefined4 *)(param_2 + 0x14) = puVar2[5];
      *(undefined4 *)param_3 = *puVar3;
      *(undefined4 *)(param_3 + 4) = puVar3[1];
      *(undefined4 *)(param_3 + 8) = puVar3[2];
      *(undefined4 *)(param_3 + 0xc) = puVar3[3];
      *(undefined4 *)(param_3 + 0x10) = puVar3[4];
      *(undefined4 *)(param_3 + 0x14) = puVar3[5];
      return 1;
    }
  }
  return 0;
}



/* ---- GetCurrPut @ 60b03750 size=163 ---- */

/* public: int __thiscall CHgBoardLogic::GetCurrPut(int &,class CHgCellInfo &,class CHgCellInfo &)
    */

int __thiscall
CHgBoardLogic::GetCurrPut
          (CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2,CHgCellInfo *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* 0x3750  80  ?GetCurrPut@CHgBoardLogic@@QAEHAAHAAVCHgCellInfo@@1@Z */
  if ((*(int *)(this + 0x40) != 0) && (*(int *)(*(int *)(this + 0x40) + 0xc) != 0)) {
    if (*(int *)(this + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      AfxThrowInvalidArgException();
    }
    iVar1 = *(int *)(*(int *)(this + 0x2c) + 8);
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 8) + 8) + 8);
      if ((puVar2 != (undefined4 *)0x0) &&
         (puVar3 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 8),
         puVar3 != (undefined4 *)0x0)) {
        *param_1 = *(int *)(iVar1 + 4);
        *(undefined4 *)param_2 = *puVar2;
        *(undefined4 *)(param_2 + 4) = puVar2[1];
        *(undefined4 *)(param_2 + 8) = puVar2[2];
        *(undefined4 *)(param_2 + 0xc) = puVar2[3];
        *(undefined4 *)(param_2 + 0x10) = puVar2[4];
        *(undefined4 *)(param_2 + 0x14) = puVar2[5];
        *(undefined4 *)param_3 = *puVar3;
        *(undefined4 *)(param_3 + 4) = puVar3[1];
        *(undefined4 *)(param_3 + 8) = puVar3[2];
        *(undefined4 *)(param_3 + 0xc) = puVar3[3];
        *(undefined4 *)(param_3 + 0x10) = puVar3[4];
        *(undefined4 *)(param_3 + 0x14) = puVar3[5];
        return 1;
      }
    }
  }
  return 0;
}



/* ---- GetLastSeqInfo @ 60b03800 size=23 ---- */

/* public: class CHgSeqInfo * __thiscall CHgBoardLogic::GetLastSeqInfo(void) */

CHgSeqInfo * __thiscall CHgBoardLogic::GetLastSeqInfo(CHgBoardLogic *this)

{
  int iVar1;
  
                    /* 0x3800  88  ?GetLastSeqInfo@CHgBoardLogic@@QAEPAVCHgSeqInfo@@XZ */
  iVar1 = *(int *)(this + 0x40);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0xc) == 0)) {
    return (CHgSeqInfo *)0x0;
  }
  return *(CHgSeqInfo **)(*(int *)(iVar1 + 8) + 8);
}



/* ---- IsGameOver @ 60b03820 size=189 ---- */

/* public: virtual int __thiscall CHgBoardLogic::IsGameOver(void) */

int __thiscall CHgBoardLogic::IsGameOver(CHgBoardLogic *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x3820  120  ?IsGameOver@CHgBoardLogic@@UAEHXZ */
  if (0 < *(int *)(this + 8)) {
    iVar7 = 0;
    do {
      iVar2 = (**(code **)(*(int *)this + 0x3c))(iVar7);
      if (iVar2 == 0) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 8));
    if (iVar7 < *(int *)(this + 8)) {
      iVar7 = *(int *)(this + 4);
      iVar2 = *(int *)(iVar7 + 0xc);
      iVar1 = *(int *)(iVar7 + 0x10);
      if ((*(int **)(iVar7 + 4) == (int *)0x0) || (*(int *)(iVar7 + 8) == 0)) {
        return (uint)(iVar1 * iVar2 == 0);
      }
      iVar5 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          if (0 < iVar1) {
            piVar3 = *(int **)(iVar7 + 4);
            iVar4 = iVar1;
            do {
              if (-1 < *(int *)(*piVar3 + iVar6 * 4)) {
                iVar5 = iVar5 + 1;
              }
              piVar3 = piVar3 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      return (uint)(iVar5 == iVar1 * iVar2);
    }
  }
  return 1;
}



/* ---- IsGameOver @ 60b038e0 size=5 ---- */

/* public: virtual int __thiscall CHgBoardLogic::IsGameOver(int,int,int) */

int __thiscall CHgBoardLogic::IsGameOver(CHgBoardLogic *this,int param_1,int param_2,int param_3)

{
                    /* 0x38e0  119  ?IsGameOver@CHgBoardLogic@@UAEHHHH@Z */
  return 0;
}



/* ---- IsPassState @ 60b038f0 size=136 ---- */

/* public: virtual int __thiscall CHgBoardLogic::IsPassState(int) */

int __thiscall CHgBoardLogic::IsPassState(CHgBoardLogic *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x38f0  127  ?IsPassState@CHgBoardLogic@@UAEHH@Z */
  iVar1 = *(int *)(*(int *)(this + 4) + 0xc);
  iVar2 = *(int *)(*(int *)(this + 4) + 0x10);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = *(int *)(this + 4);
          if ((((*(int *)(iVar3 + 4) != 0) && (-1 < iVar4)) && (iVar4 < *(int *)(iVar3 + 0xc))) &&
             (((-1 < iVar5 && (iVar5 < *(int *)(iVar3 + 0x10))) &&
              ((*(int *)(*(int *)(*(int *)(iVar3 + 4) + iVar5 * 4) + iVar4 * 4) == -1 &&
               (iVar3 = (**(code **)(*(int *)this + 0x40))(iVar4,iVar5,param_1), iVar3 != 0)))))) {
            return 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 1;
}



/* ---- IsValidPosition @ 60b03980 size=103 ---- */

/* public: virtual int __thiscall CHgBoardLogic::IsValidPosition(int,int,int) */

int __thiscall
CHgBoardLogic::IsValidPosition(CHgBoardLogic *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* 0x3980  132  ?IsValidPosition@CHgBoardLogic@@UAEHHHH@Z */
  if (*(int *)(this + 0x3c) != 0) {
    return 0;
  }
  iVar1 = *(int *)(this + 4);
  if (((((*(int *)(iVar1 + 4) == 0) || (param_1 < 0)) || (*(int *)(iVar1 + 0xc) <= param_1)) ||
      ((param_2 < 0 || (*(int *)(iVar1 + 0x10) <= param_2)))) ||
     ((((*(int *)(iVar1 + 4) != 0 &&
        ((param_1 < *(int *)(iVar1 + 0xc) && (param_2 < *(int *)(iVar1 + 0x10))))) &&
       (*(int *)(iVar1 + 0x14) != 0)) &&
      (*(int *)(*(int *)(*(int *)(iVar1 + 4) + param_2 * 4) + param_1 * 4) == -2)))) {
    return 0;
  }
  return 1;
}



/* ---- GetTeamTurn @ 60b039f0 size=31 ---- */

/* public: int __thiscall CHgBoardLogic::GetTeamTurn(int) */

int __thiscall CHgBoardLogic::GetTeamTurn(CHgBoardLogic *this,int param_1)

{
  int iVar1;
  
                    /* 0x39f0  112  ?GetTeamTurn@CHgBoardLogic@@QAEHH@Z */
  iVar1 = *(int *)(this + 0x1c);
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    return param_1;
  }
  return -1;
}



/* ---- ClearUndoList @ 60b03a10 size=64 ---- */

/* public: virtual void __thiscall CHgBoardLogic::ClearUndoList(void) */

void __thiscall CHgBoardLogic::ClearUndoList(CHgBoardLogic *this)

{
  int *piVar1;
  undefined4 *puVar2;
  
                    /* 0x3a10  51  ?ClearUndoList@CHgBoardLogic@@UAEXXZ */
  if (*(int *)(*(int *)(this + 0x40) + 0xc) == 0) {
    return;
  }
  puVar2 = *(undefined4 **)(*(int *)(this + 0x40) + 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      CPtrList::RemoveAll(*(CPtrList **)(this + 0x40));
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
                    /* WARNING: Subroutine does not return */
  AfxThrowInvalidArgException();
}



/* ---- AddUndo @ 60b03a50 size=222 ---- */

/* public: int __thiscall CHgBoardLogic::AddUndo(int,class CTypedPtrList<class CPtrList,class
   CHgCellInfo *> *) */

int __thiscall
CHgBoardLogic::AddUndo
          (CHgBoardLogic *this,int param_1,CTypedPtrList<CPtrList,CHgCellInfo*> *param_2)

{
  CHgSeqInfo *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3a50  42
                       ?AddUndo@CHgBoardLogic@@QAEHHPAV?$CTypedPtrList@VCPtrList@@PAVCHgCellInfo@@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60b0635b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(this + 0x40) != 0) {
    this_00 = operator_new(0x10);
    local_4 = 0;
    if (this_00 == (CHgSeqInfo *)0x0) {
      this_00 = (CHgSeqInfo *)0x0;
    }
    else {
      *(int *)(this_00 + 4) = param_1;
      *(undefined ***)this_00 = CHgSeqInfo::_vftable_;
      *(undefined4 *)(this_00 + 8) = 0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      if (param_2 != (CTypedPtrList<CPtrList,CHgCellInfo*> *)0x0) {
        CHgSeqInfo::CopyList(this_00,param_2);
      }
    }
    local_4 = 0xffffffff;
    if (this_00 != (CHgSeqInfo *)0x0) {
      if ((*(int *)(this + 0x44) != 0) &&
         (*(int *)(this + 0x44) < *(int *)(*(int *)(this + 0x40) + 0xc) + 1)) {
        RemoveOldUndo(this,1);
      }
      CPtrList::AddTail(*(CPtrList **)(this + 0x40),this_00);
      *(undefined4 *)(this + 0x2c) = *(undefined4 *)(*(int *)(this + 0x40) + 8);
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- RemoveOldUndo @ 60b03b30 size=82 ---- */

/* public: int __thiscall CHgBoardLogic::RemoveOldUndo(int) */

int __thiscall CHgBoardLogic::RemoveOldUndo(CHgBoardLogic *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* 0x3b30  152  ?RemoveOldUndo@CHgBoardLogic@@QAEHH@Z */
  if ((*(int *)(this + 0x40) == 0) || (*(int *)(*(int *)(this + 0x40) + 0xc) == 0)) {
    return 0;
  }
  iVar2 = 0;
  if (0 < param_1) {
    do {
      if (*(int *)(*(CPtrList **)(this + 0x40) + 0xc) == 0) {
        return 1;
      }
      puVar1 = CPtrList::RemoveHead(*(CPtrList **)(this + 0x40));
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return 1;
}



/* ---- ReplaceUndo @ 60b03b90 size=256 ---- */

/* public: int __thiscall CHgBoardLogic::ReplaceUndo(int,int,class CTypedPtrList<class
   CPtrList,class CHgCellInfo *> *) */

int __thiscall
CHgBoardLogic::ReplaceUndo
          (CHgBoardLogic *this,int param_1,int param_2,CTypedPtrList<CPtrList,CHgCellInfo*> *param_3
          )

{
  uint uVar1;
  int iVar2;
  CHgSeqInfo *this_00;
  void *unaff_ESI;
  int iVar3;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3b90  153
                       ?ReplaceUndo@CHgBoardLogic@@QAEHHHPAV?$CTypedPtrList@VCPtrList@@PAVCHgCellInfo@@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60b0632b;
  local_c = ExceptionList;
  uVar1 = DAT_60b0d018 ^ (int)register0x00000010 - 0x14U;
  iVar3 = *(int *)(this + 0x40);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) && (param_1 <= *(int *)(iVar3 + 0xc))) {
    iVar3 = *(int *)(iVar3 + 8);
    iVar2 = 1;
    if (1 < param_1) {
      do {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(iVar3 + 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
    if (iVar3 != 0) {
      ExceptionList = &local_c;
      this_00 = operator_new(0x10);
      local_4 = 0;
      if (this_00 == (CHgSeqInfo *)0x0) {
        this_00 = (CHgSeqInfo *)0x0;
      }
      else {
        *(int *)(this_00 + 4) = param_2;
        *(undefined ***)this_00 = CHgSeqInfo::_vftable_;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined4 *)(this_00 + 0xc) = 0;
        if (param_3 != (CTypedPtrList<CPtrList,CHgCellInfo*> *)0x0) {
          CHgSeqInfo::CopyList(this_00,param_3);
        }
      }
      local_4 = 0xffffffff;
      if (this_00 != (CHgSeqInfo *)0x0) {
        if (*(undefined4 **)(iVar3 + 8) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar3 + 8))(1,uVar1);
          *(CHgSeqInfo **)(iVar3 + 8) = this_00;
          ExceptionList = unaff_ESI;
          return 1;
        }
        (*(code *)**(undefined4 **)this_00)();
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- GetUndoListCount @ 60b03c90 size=17 ---- */

/* public: int __thiscall CHgBoardLogic::GetUndoListCount(void) */

int __thiscall CHgBoardLogic::GetUndoListCount(CHgBoardLogic *this)

{
  int iVar1;
  
                    /* 0x3c90  115  ?GetUndoListCount@CHgBoardLogic@@QAEHXZ */
  if ((*(int *)(this + 0x40) == 0) || (iVar1 = *(int *)(*(int *)(this + 0x40) + 0xc), iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ---- UndoLastTurn @ 60b03cb0 size=132 ---- */

/* public: virtual int __thiscall CHgBoardLogic::UndoLastTurn(void) */

int __thiscall CHgBoardLogic::UndoLastTurn(CHgBoardLogic *this)

{
  CPtrList *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* 0x3cb0  182  ?UndoLastTurn@CHgBoardLogic@@UAEHXZ */
  this_00 = *(CPtrList **)(this + 0x40);
  if ((this_00 == (CPtrList *)0x0) || (*(int *)(this_00 + 0xc) == 0)) {
    return 0;
  }
  puVar3 = CPtrList::RemoveTail(this_00);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(puVar3[2] + 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x2c) = *(undefined4 *)(*(int *)(this + 0x40) + 8);
      *(undefined4 *)(this + 0x10) = puVar3[1];
      (**(code **)*puVar3)(1);
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
      return 1;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    puVar2 = (undefined4 *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    (**(code **)(**(int **)(this + 4) + 0x18))(*puVar2,puVar2[1],puVar2[3],puVar2[5]);
  }
                    /* WARNING: Subroutine does not return */
  AfxThrowInvalidArgException();
}



/* ---- SetViewMode @ 60b03d40 size=31 ---- */

/* public: int __thiscall CHgBoardLogic::SetViewMode(void) */

int __thiscall CHgBoardLogic::SetViewMode(CHgBoardLogic *this)

{
                    /* 0x3d40  178  ?SetViewMode@CHgBoardLogic@@QAEHXZ */
  if (((*(int *)(this + 0x40) == 0) || (*(int *)(*(int *)(this + 0x40) + 0xc) == 0)) ||
     (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  *(undefined4 *)(this + 0x3c) = 1;
  return 1;
}



/* ---- FreeViewMode @ 60b03d60 size=19 ---- */

/* public: int __thiscall CHgBoardLogic::FreeViewMode(void) */

int __thiscall CHgBoardLogic::FreeViewMode(CHgBoardLogic *this)

{
                    /* 0x3d60  68  ?FreeViewMode@CHgBoardLogic@@QAEHXZ */
  if (*(int *)(this + 0x3c) != 0) {
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return 1;
}



/* ---- IsFirstDo @ 60b03d80 size=34 ---- */

/* public: int __thiscall CHgBoardLogic::IsFirstDo(void) */

int __thiscall CHgBoardLogic::IsFirstDo(CHgBoardLogic *this)

{
  int iVar1;
  
                    /* 0x3d80  118  ?IsFirstDo@CHgBoardLogic@@QAEHXZ */
  iVar1 = *(int *)(this + 0x40);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0xc) == 0)) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  return (uint)(*(int *)(this + 0x2c) == *(int *)(iVar1 + 4));
}



/* ---- IsLastDo @ 60b03db0 size=34 ---- */

/* public: int __thiscall CHgBoardLogic::IsLastDo(void) */

int __thiscall CHgBoardLogic::IsLastDo(CHgBoardLogic *this)

{
  int iVar1;
  
                    /* 0x3db0  123  ?IsLastDo@CHgBoardLogic@@QAEHXZ */
  iVar1 = *(int *)(this + 0x40);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0xc) == 0)) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  return (uint)(*(int *)(this + 0x2c) == *(int *)(iVar1 + 8));
}



/* ---- ApplySeqInfoForward @ 60b03de0 size=104 ---- */

/* public: int __thiscall CHgBoardLogic::ApplySeqInfoForward(class CHgSeqInfo *) */

int __thiscall CHgBoardLogic::ApplySeqInfoForward(CHgBoardLogic *this,CHgSeqInfo *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
                    /* 0x3de0  46  ?ApplySeqInfoForward@CHgBoardLogic@@QAEHPAVCHgSeqInfo@@@Z */
  if (((*(int *)(this + 0x3c) == 0) || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) ||
     (*(int *)(iVar1 + 0xc) == 0)) {
    return 0;
  }
  piVar3 = *(int **)(iVar1 + 4);
  if (piVar3 != (int *)0x0) {
    do {
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      puVar2 = (undefined4 *)piVar3[2];
      piVar3 = (int *)*piVar3;
      (**(code **)(**(int **)(this + 4) + 0x18))(*puVar2,puVar2[1],puVar2[2],puVar2[4]);
    } while (piVar3 != (int *)0x0);
  }
  return 1;
}



/* ---- ApplySeqInfoBackward @ 60b03e50 size=104 ---- */

/* public: int __thiscall CHgBoardLogic::ApplySeqInfoBackward(class CHgSeqInfo *) */

int __thiscall CHgBoardLogic::ApplySeqInfoBackward(CHgBoardLogic *this,CHgSeqInfo *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
                    /* 0x3e50  45  ?ApplySeqInfoBackward@CHgBoardLogic@@QAEHPAVCHgSeqInfo@@@Z */
  if (((*(int *)(this + 0x3c) == 0) || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) ||
     (*(int *)(iVar1 + 0xc) == 0)) {
    return 0;
  }
  piVar3 = *(int **)(iVar1 + 4);
  if (piVar3 != (int *)0x0) {
    do {
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      puVar2 = (undefined4 *)piVar3[2];
      piVar3 = (int *)*piVar3;
      (**(code **)(**(int **)(this + 4) + 0x18))(*puVar2,puVar2[1],puVar2[3],puVar2[5]);
    } while (piVar3 != (int *)0x0);
  }
  return 1;
}



/* ---- GetPrevDo @ 60b03ec0 size=65 ---- */

/* public: class CHgSeqInfo * __thiscall CHgBoardLogic::GetPrevDo(void) */

CHgSeqInfo * __thiscall CHgBoardLogic::GetPrevDo(CHgBoardLogic *this)

{
  int iVar1;
  
                    /* 0x3ec0  98  ?GetPrevDo@CHgBoardLogic@@QAEPAVCHgSeqInfo@@XZ */
  if (*(int *)(this + 0x3c) == 0) {
    return (CHgSeqInfo *)0x0;
  }
  iVar1 = *(int *)(this + 0x40);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x2c) != *(int *)(iVar1 + 4))) {
      FUN_60b03f90((int *)(this + 0x2c));
      iVar1 = *(int *)(this + 0x2c);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      return *(CHgSeqInfo **)(iVar1 + 8);
    }
  }
  return (CHgSeqInfo *)0x0;
}



/* ---- GetCurrDo @ 60b03f10 size=33 ---- */

/* public: class CHgSeqInfo * __thiscall CHgBoardLogic::GetCurrDo(void) */

CHgSeqInfo * __thiscall CHgBoardLogic::GetCurrDo(CHgBoardLogic *this)

{
                    /* 0x3f10  79  ?GetCurrDo@CHgBoardLogic@@QAEPAVCHgSeqInfo@@XZ */
  if ((((*(int *)(this + 0x3c) == 0) || (*(int *)(this + 0x40) == 0)) ||
      (*(int *)(*(int *)(this + 0x40) + 0xc) == 0)) || (*(int *)(this + 0x2c) == 0)) {
    return (CHgSeqInfo *)0x0;
  }
  return *(CHgSeqInfo **)(*(int *)(this + 0x2c) + 8);
}



/* ---- GetNextDo @ 60b03f40 size=65 ---- */

/* public: class CHgSeqInfo * __thiscall CHgBoardLogic::GetNextDo(void) */

CHgSeqInfo * __thiscall CHgBoardLogic::GetNextDo(CHgBoardLogic *this)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x3f40  90  ?GetNextDo@CHgBoardLogic@@QAEPAVCHgSeqInfo@@XZ */
  if ((((*(int *)(this + 0x3c) == 0) || (iVar1 = *(int *)(this + 0x40), iVar1 == 0)) ||
      (*(int *)(iVar1 + 0xc) == 0)) ||
     ((piVar2 = *(int **)(this + 0x2c), piVar2 == (int *)0x0 || (piVar2 == *(int **)(iVar1 + 8)))))
  {
    return (CHgSeqInfo *)0x0;
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  iVar1 = *piVar2;
  *(int *)(this + 0x2c) = iVar1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  return *(CHgSeqInfo **)(iVar1 + 8);
}



/* ---- FUN_60b03f90 @ 60b03f90 size=20 ---- */

int __fastcall FUN_60b03f90(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    AfxThrowInvalidArgException();
  }
  *param_1 = *(int *)(iVar1 + 4);
  return iVar1 + 8;
}



/* ---- FUN_60b03fb0 @ 60b03fb0 size=30 ---- */

CPtrList * __thiscall FUN_60b03fb0(void *this,byte param_1)

{
  CPtrList::~CPtrList(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_60b03fd0 @ 60b03fd0 size=127 ---- */

CHgBoard * __thiscall FUN_60b03fd0(void *this,byte param_1)

{
  int iVar1;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x18,*(int *)((int)this + -4),CHgBoard::~CHgBoard);
    if ((param_1 & 1) != 0) {
      operator_delete__((CHgBoard *)((int)this + -4));
    }
    return (CHgBoard *)((int)this + -4);
  }
  *(undefined ***)this = CHgBoard::_vftable_;
  if (*(int *)((int)this + 0x14) != 0) {
    iVar1 = CHgBoard::ClearNoAccessList(this);
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  CHgBoard::FreeBoardArray(this,(int ***)((int)this + 4));
  CHgBoard::FreeBoardArray(this,(int ***)((int)this + 8));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- CHgBoard @ 60b04050 size=28 ---- */

/* public: __thiscall CHgBoard::CHgBoard(void) */

void __thiscall CHgBoard::CHgBoard(CHgBoard *this)

{
                    /* 0x4050  1  ??0CHgBoard@@QAE@XZ */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



/* ---- ~CHgBoard @ 60b04070 size=55 ---- */

/* public: virtual __thiscall CHgBoard::~CHgBoard(void) */

void __thiscall CHgBoard::~CHgBoard(CHgBoard *this)

{
  int iVar1;
  
                    /* 0x4070  16  ??1CHgBoard@@UAE@XZ */
  *(undefined ***)this = _vftable_;
  if (*(int *)(this + 0x14) != 0) {
    iVar1 = ClearNoAccessList(this);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x14) = 0;
    }
  }
  FreeBoardArray(this,(int ***)(this + 4));
  FreeBoardArray(this,(int ***)(this + 8));
  return;
}



/* ---- AllocBoardArray @ 60b040b0 size=225 ---- */

/* protected: int __thiscall CHgBoard::AllocBoardArray(int * * &) */

int __thiscall CHgBoard::AllocBoardArray(CHgBoard *this,int ***param_1)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x40b0  44  ?AllocBoardArray@CHgBoard@@IAEHAAPAPAH@Z */
  if (*param_1 != (int **)0x0) {
    FreeBoardArray(this,param_1);
  }
  ppiVar1 = operator_new__(-(uint)((int)((ulonglong)*(uint *)(this + 0x10) * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)*(uint *)(this + 0x10) * 4));
  *param_1 = ppiVar1;
  if (ppiVar1 == (int **)0x0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar2 = operator_new__(-(uint)((int)((ulonglong)*(uint *)(this + 0xc) * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)*(uint *)(this + 0xc) * 4));
      (*param_1)[iVar4] = piVar2;
      if ((*param_1)[iVar4] == (int *)0x0) {
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            operator_delete__((*param_1)[iVar5]);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        operator_delete__(*param_1);
        *param_1 = (int **)0x0;
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x10));
  }
  if ((*param_1 != (int **)0x0) && (iVar4 = 0, 0 < *(int *)(this + 0x10))) {
    iVar5 = *(int *)(this + 0xc);
    do {
      iVar3 = 0;
      if (0 < iVar5) {
        do {
          (*param_1)[iVar4][iVar3] = -1;
          iVar5 = *(int *)(this + 0xc);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x10));
  }
  return 1;
}



/* ---- FreeBoardArray @ 60b041a0 size=72 ---- */

/* protected: void __thiscall CHgBoard::FreeBoardArray(int * * &) */

void __thiscall CHgBoard::FreeBoardArray(CHgBoard *this,int ***param_1)

{
  int iVar1;
  
                    /* 0x41a0  66  ?FreeBoardArray@CHgBoard@@IAEXAAPAPAH@Z */
  if (*param_1 != (int **)0x0) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x10)) {
      do {
        if ((*param_1)[iVar1] != (int *)0x0) {
          operator_delete__((*param_1)[iVar1]);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x10));
    }
    operator_delete__(*param_1);
    *param_1 = (int **)0x0;
  }
  return;
}



/* ---- ClearBoard @ 60b041f0 size=71 ---- */

/* protected: int __thiscall CHgBoard::ClearBoard(int * * &,int) */

int __thiscall CHgBoard::ClearBoard(CHgBoard *this,int ***param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x41f0  48  ?ClearBoard@CHgBoard@@IAEHAAPAPAHH@Z */
  if (*param_1 == (int **)0x0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x10)) {
    iVar2 = *(int *)(this + 0xc);
    do {
      iVar1 = 0;
      if (0 < iVar2) {
        do {
          (*param_1)[iVar3][iVar1] = param_2;
          iVar2 = *(int *)(this + 0xc);
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x10));
  }
  return 1;
}



/* ---- Create @ 60b04240 size=80 ---- */

/* public: virtual int __thiscall CHgBoard::Create(int,int) */

int __thiscall CHgBoard::Create(CHgBoard *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* 0x4240  54  ?Create@CHgBoard@@UAEHHH@Z */
  *(int *)(this + 0x10) = param_2;
  *(int *)(this + 0xc) = param_1;
  *(undefined4 *)(this + 0x14) = 0;
  iVar1 = AllocBoardArray(this,(int ***)(this + 4));
  if (iVar1 != 0) {
    iVar1 = AllocBoardArray(this,(int ***)(this + 8));
    if (iVar1 != 0) {
      return 1;
    }
    FreeBoardArray(this,(int ***)(this + 4));
  }
  return 0;
}



/* ---- RegisterNoAccessList @ 60b04290 size=9 ---- */

/* public: int __thiscall CHgBoard::RegisterNoAccessList(void) */

int __thiscall CHgBoard::RegisterNoAccessList(CHgBoard *this)

{
                    /* 0x4290  147  ?RegisterNoAccessList@CHgBoard@@QAEHXZ */
  *(undefined4 *)(this + 0x14) = 1;
  return 1;
}



/* ---- UnRegisterNoAccessList @ 60b042a0 size=36 ---- */

/* public: int __thiscall CHgBoard::UnRegisterNoAccessList(void) */

int __thiscall CHgBoard::UnRegisterNoAccessList(CHgBoard *this)

{
  int iVar1;
  
                    /* 0x42a0  180  ?UnRegisterNoAccessList@CHgBoard@@QAEHXZ */
  if (*(int *)(this + 0x14) != 0) {
    iVar1 = ClearNoAccessList(this);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x14) = 0;
      return 1;
    }
  }
  return 0;
}



/* ---- AddNoAccessCell @ 60b042d0 size=78 ---- */

/* public: int __thiscall CHgBoard::AddNoAccessCell(int,int) */

int __thiscall CHgBoard::AddNoAccessCell(CHgBoard *this,int param_1,int param_2)

{
                    /* 0x42d0  41  ?AddNoAccessCell@CHgBoard@@QAEHHH@Z */
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (*(int *)(this + 0xc) <= param_1)) ||
     (((param_2 < 0 || (*(int *)(this + 0x10) <= param_2)) || (*(int *)(this + 0x14) == 0)))) {
    return 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(this + 4) + param_2 * 4) + param_1 * 4) = 0xfffffffe;
  *(undefined4 *)(*(int *)(*(int *)(this + 8) + param_2 * 4) + param_1 * 4) = 0xffffffff;
  return 1;
}



/* ---- RemoveNoAccessCell @ 60b04320 size=102 ---- */

/* public: int __thiscall CHgBoard::RemoveNoAccessCell(int,int) */

int __thiscall CHgBoard::RemoveNoAccessCell(CHgBoard *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* 0x4320  151  ?RemoveNoAccessCell@CHgBoard@@QAEHHH@Z */
  if ((((*(int *)(this + 4) != 0) && (-1 < param_1)) && (param_1 < *(int *)(this + 0xc))) &&
     (((-1 < param_2 && (param_2 < *(int *)(this + 0x10))) && (*(int *)(this + 0x14) != 0)))) {
    iVar1 = *(int *)(*(int *)(this + 4) + param_2 * 4);
    if (*(int *)(iVar1 + param_1 * 4) == -2) {
      *(undefined4 *)(iVar1 + param_1 * 4) = 0xffffffff;
      *(undefined4 *)(*(int *)(*(int *)(this + 8) + param_2 * 4) + param_1 * 4) = 0xffffffff;
      return 1;
    }
  }
  return 0;
}



/* ---- IsNoAccessCell @ 60b04390 size=64 ---- */

/* public: int __thiscall CHgBoard::IsNoAccessCell(int,int) */

int __thiscall CHgBoard::IsNoAccessCell(CHgBoard *this,int param_1,int param_2)

{
                    /* 0x4390  126  ?IsNoAccessCell@CHgBoard@@QAEHHH@Z */
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (*(int *)(this + 0xc) <= param_1)) ||
     (((param_2 < 0 || (*(int *)(this + 0x10) <= param_2)) || (*(int *)(this + 0x14) == 0)))) {
    return 0;
  }
  return (uint)(*(int *)(*(int *)(*(int *)(this + 4) + param_2 * 4) + param_1 * 4) == -2);
}



/* ---- ClearNoAccessList @ 60b043d0 size=121 ---- */

/* public: int __thiscall CHgBoard::ClearNoAccessList(void) */

int __thiscall CHgBoard::ClearNoAccessList(CHgBoard *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x43d0  50  ?ClearNoAccessList@CHgBoard@@QAEHXZ */
  if (*(int *)(this + 0x14) == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      iVar3 = *(int *)(this + 0xc);
      iVar2 = 0;
      if (0 < iVar3) {
        do {
          if ((((*(int *)(this + 4) != 0) && (-1 < iVar2)) && (iVar2 < iVar3)) &&
             (((-1 < iVar4 && (iVar4 < *(int *)(this + 0x10))) &&
              ((*(int *)(this + 0x14) != 0 &&
               (piVar1 = (int *)(*(int *)(*(int *)(this + 4) + iVar4 * 4) + iVar2 * 4),
               *piVar1 == -2)))))) {
            *piVar1 = -1;
            *(undefined4 *)(*(int *)(*(int *)(this + 8) + iVar4 * 4) + iVar2 * 4) = 0xffffffff;
          }
          iVar3 = *(int *)(this + 0xc);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x10));
  }
  return 1;
}



/* ---- ClearBoard @ 60b04450 size=462 ---- */

/* public: int __thiscall CHgBoard::ClearBoard(int,int) */

int __thiscall CHgBoard::ClearBoard(CHgBoard *this,int param_1,int param_2)

{
  CHgBoard *pCVar1;
  CHgBoard *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  CHgBoard *this_00;
  int iVar6;
  int iVar7;
  undefined **local_28;
  undefined4 *local_24;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4450  49  ?ClearBoard@CHgBoard@@QAEHHH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60b063f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = this + 4;
  iVar7 = 0;
  if ((*(int ***)pCVar1 != (int **)0x0) && (pCVar2 = this + 8, *(int ***)pCVar2 != (int **)0x0)) {
    CPtrList::CPtrList((CPtrList *)&local_28,10);
    local_28 = CTypedPtrList<CPtrList,CPoint*>::vftable;
    local_4 = 0;
    if ((*(int *)(this + 0x14) != 0) && (0 < *(int *)(this + 0x10))) {
      do {
        iVar4 = *(int *)(this + 0xc);
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            if (((((*(int ***)pCVar1 != (int **)0x0) && (-1 < iVar6)) && (iVar6 < iVar4)) &&
                ((-1 < iVar7 && (iVar7 < *(int *)(this + 0x10))))) &&
               ((*(int *)(this + 0x14) != 0 && ((*(int ***)pCVar1)[iVar7][iVar6] == -2)))) {
              piVar5 = operator_new(8);
              if (piVar5 == (int *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                *piVar5 = iVar6;
                piVar5[1] = iVar7;
              }
              CPtrList::AddTail((CPtrList *)&local_28,piVar5);
            }
            iVar4 = *(int *)(this + 0xc);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 0x10));
    }
    iVar7 = ClearBoard(this,(int ***)pCVar1,param_1);
    if ((iVar7 != 0) && (iVar7 = ClearBoard(this_00,(int ***)pCVar2,param_2), iVar7 != 0)) {
      if ((*(int *)(this + 0x14) != 0) && (local_1c != 0)) {
        while (local_24 != (undefined4 *)0x0) {
          if (local_24 == (undefined4 *)0x0) goto LAB_60b045c0;
          piVar5 = (int *)local_24[2];
          puVar3 = (undefined4 *)*local_24;
          (*(int ***)pCVar1)[piVar5[1]][*piVar5] = -1;
          (*(int ***)pCVar2)[piVar5[1]][*piVar5] = -1;
          operator_delete(piVar5);
          local_24 = puVar3;
        }
        CPtrList::RemoveAll((CPtrList *)&local_28);
      }
      local_4 = 0xffffffff;
      CPtrList::~CPtrList((CPtrList *)&local_28);
      ExceptionList = local_c;
      return 1;
    }
    if (local_1c != 0) {
      while (local_24 != (undefined4 *)0x0) {
        if (local_24 == (undefined4 *)0x0) {
LAB_60b045c0:
                    /* WARNING: Subroutine does not return */
          AfxThrowInvalidArgException();
        }
        puVar3 = (undefined4 *)*local_24;
        operator_delete((void *)local_24[2]);
        local_24 = puVar3;
      }
      CPtrList::RemoveAll((CPtrList *)&local_28);
    }
    local_4 = 0xffffffff;
    CPtrList::~CPtrList((CPtrList *)&local_28);
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- ~CPtrList @ 60b04620 size=5 ---- */

void __thiscall CPtrList::~CPtrList(CPtrList *this)

{
  ~CPtrList(this);
  return;
}



/* ---- ReverseBoard @ 60b04630 size=445 ---- */

/* public: void __thiscall CHgBoard::ReverseBoard(void) */

void __thiscall CHgBoard::ReverseBoard(CHgBoard *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_EBP;
  int iVar8;
  undefined4 unaff_EDI;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int local_10;
  int local_c;
  
                    /* 0x4630  155  ?ReverseBoard@CHgBoard@@QAEXXZ */
  iVar1 = *(int *)(this + 0xc);
  iVar8 = *(int *)(this + 0x10);
  iVar7 = 0;
  while( true ) {
    iVar8 = iVar8 + -1;
    uVar2 = *(uint *)(this + 0x10);
    uVar6 = uVar2 & 0x80000001;
    bVar10 = uVar6 == 0;
    if ((int)uVar6 < 0) {
      bVar10 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar10) {
      iVar3 = (int)uVar2 / 2;
    }
    else {
      iVar3 = (int)uVar2 / 2 + 1;
    }
    if (iVar3 <= iVar7) break;
    iVar3 = *(int *)(this + 0xc);
    iVar9 = 0;
    if (0 < iVar3) {
      local_c = (iVar1 + -1) * 4;
      local_10 = iVar1 + -1;
      do {
        if ((((*(int *)(this + 4) == 0) || (local_10 < 0)) || (iVar3 <= local_10)) ||
           ((iVar8 < 0 || (*(int *)(this + 0x10) <= iVar8)))) {
          uVar4 = 0xfffffffd;
        }
        else {
          uVar4 = *(undefined4 *)(local_c + *(int *)(*(int *)(this + 4) + iVar8 * 4));
        }
        iVar11 = iVar9;
        iVar12 = iVar7;
        (**(code **)(*(int *)this + 0x18))(iVar9,iVar7,uVar4,0xfffffffe);
        uVar4 = 0xfffffffe;
        iVar3 = iVar8;
        (**(code **)(*(int *)this + 0x18))(unaff_EDI,iVar8,unaff_EBP,0xfffffffe);
        if (((*(int *)(this + 4) == 0) || (iVar11 < 0)) ||
           ((*(int *)(this + 0xc) <= iVar11 || ((iVar8 < 0 || (*(int *)(this + 0x10) <= iVar8))))))
        {
          uVar5 = 0xfffffffd;
        }
        else if ((*(int *)(this + 0x14) == 0) ||
                (*(int *)(iVar12 + *(int *)(*(int *)(this + 4) + iVar8 * 4)) != -2)) {
          uVar5 = *(undefined4 *)(iVar12 + *(int *)(*(int *)(this + 8) + iVar8 * 4));
        }
        else {
          uVar5 = 0xfffffffe;
        }
        (**(code **)(*(int *)this + 0x1c))(iVar9,iVar7,uVar5);
        (**(code **)(*(int *)this + 0x1c))(iVar3,iVar8,uVar4);
        iVar3 = *(int *)(this + 0xc);
        local_c = local_c + -4;
        local_10 = local_10 + -1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar3);
    }
    iVar7 = iVar7 + 1;
  }
  return;
}



/* ---- PutStone @ 60b04800 size=111 ---- */

/* public: virtual int __thiscall CHgBoard::PutStone(int,int,int,int) */

int __thiscall CHgBoard::PutStone(CHgBoard *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0x4800  146  ?PutStone@CHgBoard@@UAEHHHHH@Z */
  iVar1 = *(int *)(this + 4);
  if ((((iVar1 == 0) || (param_1 < 0)) || (*(int *)(this + 0xc) <= param_1)) ||
     (((param_2 < 0 || (*(int *)(this + 0x10) <= param_2)) ||
      ((*(int *)(this + 0x14) != 0 && (*(int *)(*(int *)(iVar1 + param_2 * 4) + param_1 * 4) == -2))
      )))) {
    return 0;
  }
  *(int *)(*(int *)(iVar1 + param_2 * 4) + param_1 * 4) = param_3;
  if (param_4 != -2) {
    *(int *)(*(int *)(*(int *)(this + 8) + param_2 * 4) + param_1 * 4) = param_4;
  }
  return 1;
}



/* ---- PutSeqNo @ 60b04870 size=88 ---- */

/* public: virtual int __thiscall CHgBoard::PutSeqNo(int,int,int) */

int __thiscall CHgBoard::PutSeqNo(CHgBoard *this,int param_1,int param_2,int param_3)

{
                    /* 0x4870  144  ?PutSeqNo@CHgBoard@@UAEHHHH@Z */
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (*(int *)(this + 0xc) <= param_1)) ||
     (((param_2 < 0 || (*(int *)(this + 0x10) <= param_2)) ||
      ((*(int *)(this + 0x14) != 0 &&
       (*(int *)(*(int *)(*(int *)(this + 4) + param_2 * 4) + param_1 * 4) == -2)))))) {
    return 0;
  }
  *(int *)(*(int *)(*(int *)(this + 8) + param_2 * 4) + param_1 * 4) = param_3;
  return 1;
}



/* ---- GetStone @ 60b048d0 size=53 ---- */

/* public: int __thiscall CHgBoard::GetStone(int,int) */

int __thiscall CHgBoard::GetStone(CHgBoard *this,int param_1,int param_2)

{
                    /* 0x48d0  106  ?GetStone@CHgBoard@@QAEHHH@Z */
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (*(int *)(this + 0xc) <= param_1)) ||
     ((param_2 < 0 || (*(int *)(this + 0x10) <= param_2)))) {
    return -3;
  }
  return *(int *)(*(int *)(*(int *)(this + 4) + param_2 * 4) + param_1 * 4);
}



/* ---- GetSeqNo @ 60b04910 size=91 ---- */

/* public: int __thiscall CHgBoard::GetSeqNo(int,int) */

int __thiscall CHgBoard::GetSeqNo(CHgBoard *this,int param_1,int param_2)

{
                    /* 0x4910  103  ?GetSeqNo@CHgBoard@@QAEHHH@Z */
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (*(int *)(this + 0xc) <= param_1)) ||
     ((param_2 < 0 || (*(int *)(this + 0x10) <= param_2)))) {
    return -3;
  }
  if ((*(int *)(this + 0x14) == 0) ||
     (*(int *)(*(int *)(*(int *)(this + 4) + param_2 * 4) + param_1 * 4) != -2)) {
    return *(int *)(*(int *)(*(int *)(this + 8) + param_2 * 4) + param_1 * 4);
  }
  return -2;
}



/* ---- GetStoneCount @ 60b04970 size=380 ---- */

/* public: int __thiscall CHgBoard::GetStoneCount(int,int,int) */

int __thiscall CHgBoard::GetStoneCount(CHgBoard *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
                    /* 0x4970  107  ?GetStoneCount@CHgBoard@@QAEHHHH@Z */
  piVar1 = *(int **)(this + 4);
  iVar4 = 0;
  if ((piVar1 == (int *)0x0) || (*(int *)(this + 8) == 0)) {
    return 0;
  }
  local_8 = 0;
  switch(param_1) {
  case 0:
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 0x10)) {
          piVar3 = piVar1;
          iVar5 = *(int *)(this + 0x10);
          do {
            if (-1 < *(int *)(*piVar3 + iVar4 * 4)) {
              local_8 = local_8 + 1;
            }
            piVar3 = piVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0xc));
    }
    break;
  case 1:
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 0x10)) {
          piVar3 = piVar1;
          iVar5 = *(int *)(this + 0x10);
          do {
            if (*(int *)(*piVar3 + iVar4 * 4) == param_2) {
              local_8 = local_8 + 1;
            }
            piVar3 = piVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0xc));
      return local_8;
    }
    break;
  case 2:
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 0x10)) {
          piVar3 = piVar1;
          iVar5 = *(int *)(this + 0x10);
          do {
            iVar2 = *(int *)(*piVar3 + iVar4 * 4);
            if ((param_2 <= iVar2) && (iVar2 <= param_3)) {
              local_8 = local_8 + 1;
            }
            piVar3 = piVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0xc));
      return local_8;
    }
    break;
  case 3:
    iVar4 = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        if (0 < *(int *)(this + 0x10)) {
          piVar3 = piVar1;
          iVar5 = *(int *)(this + 0x10);
          do {
            if (*(int *)(*piVar3 + iVar4 * 4) % param_2 == param_3) {
              local_8 = local_8 + 1;
            }
            piVar3 = piVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0xc));
      return local_8;
    }
  }
  return local_8;
}



/* ---- DrawPlayerInfo @ 60b04b10 size=5 ---- */

/* public: virtual int __thiscall CHgBoardProgressInfo::DrawPlayerInfo(class CHgDIB &) */

int __thiscall CHgBoardProgressInfo::DrawPlayerInfo(CHgBoardProgressInfo *this,CHgDIB *param_1)

{
                    /* 0x4b10  60  ?DrawPlayerInfo@CHgBoardProgressInfo@@UAEHAAVCHgDIB@@@Z */
  return 0;
}



/* ---- DrawTurnInfo @ 60b04b20 size=8 ---- */

/* public: virtual int __thiscall CHgBoardProgressInfo::DrawTurnInfo(class CHgDIB &) */

int __thiscall CHgBoardProgressInfo::DrawTurnInfo(CHgBoardProgressInfo *this,CHgDIB *param_1)

{
                    /* 0x4b20  65  ?DrawTurnInfo@CHgBoardProgressInfo@@UAEHAAVCHgDIB@@@Z */
  return 1;
}



/* ---- CHgBoardProgressInfo @ 60b04b30 size=98 ---- */

/* public: __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo(class CHgBoardProgressInfo const &)
    */

void __thiscall
CHgBoardProgressInfo::CHgBoardProgressInfo(CHgBoardProgressInfo *this,CHgBoardProgressInfo *param_1)

{
  int iVar1;
  CHgBoardProgressInfo *pCVar2;
  CHgBoardProgressInfo *pCVar3;
  
                    /* 0x4b30  9  ??0CHgBoardProgressInfo@@QAE@ABV0@@Z */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pCVar2 = param_1 + 0x10;
  pCVar3 = this + 0x10;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



/* ---- operator= @ 60b04ba0 size=123 ---- */

/* public: class CHgBoardProgressInfo & __thiscall CHgBoardProgressInfo::operator=(class
   CHgBoardProgressInfo const &) */

CHgBoardProgressInfo * __thiscall
CHgBoardProgressInfo::operator=(CHgBoardProgressInfo *this,CHgBoardProgressInfo *param_1)

{
                    /* 0x4ba0  27  ??4CHgBoardProgressInfo@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  return this;
}



/* ---- FUN_60b04c20 @ 60b04c20 size=151 ---- */

undefined4 * __thiscall FUN_60b04c20(void *this,byte param_1)

{
  CAvtr2004 *this_00;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x50,*(int *)((int)this + -4),CHgBoardProgressInfo::~CHgBoardProgressInfo);
    if ((param_1 & 1) != 0) {
      operator_delete__((undefined4 *)((int)this + -4));
    }
    return (undefined4 *)((int)this + -4);
  }
  this_00 = *(CAvtr2004 **)((int)this + 0x30);
  *(undefined ***)this = CHgBoardProgressInfo::_vftable_;
  if (this_00 != (CAvtr2004 *)0x0) {
    CAvtr2004::~CAvtr2004(this_00);
    operator_delete(this_00);
  }
  if (*(undefined4 **)((int)this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x34))(1);
  }
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(int *)((int)this + 4) != 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- CHgBoardProgressInfo @ 60b04cc0 size=47 ---- */

/* public: __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo(void) */

void __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo(CHgBoardProgressInfo *this)

{
                    /* 0x4cc0  10  ??0CHgBoardProgressInfo@@QAE@XZ */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}



/* ---- ~CHgBoardProgressInfo @ 60b04cf0 size=80 ---- */

/* public: virtual __thiscall CHgBoardProgressInfo::~CHgBoardProgressInfo(void) */

void __thiscall CHgBoardProgressInfo::~CHgBoardProgressInfo(CHgBoardProgressInfo *this)

{
  CAvtr2004 *this_00;
  
                    /* 0x4cf0  22  ??1CHgBoardProgressInfo@@UAE@XZ */
  this_00 = *(CAvtr2004 **)(this + 0x30);
  *(undefined ***)this = _vftable_;
  if (this_00 != (CAvtr2004 *)0x0) {
    CAvtr2004::~CAvtr2004(this_00);
    operator_delete(this_00);
  }
  if (*(undefined4 **)(this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x34))(1);
  }
  if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x38))(1);
  }
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}



/* ---- SetTurnImage @ 60b04d40 size=321 ---- */

/* public: int __thiscall CHgBoardProgressInfo::SetTurnImage(char const *,char const *,unsigned
   long) */

int __thiscall
CHgBoardProgressInfo::SetTurnImage
          (CHgBoardProgressInfo *this,char *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  CHgDDB *pCVar2;
  undefined1 auStackY_ac [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4d40  175  ?SetTurnImage@CHgBoardProgressInfo@@QAEHPBD0K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60b060e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)(this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x34))(1,DAT_60b0d018 ^ (uint)(auStackY_ac + 0x8c));
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x38))(1);
    *(undefined4 *)(this + 0x38) = 0;
  }
  pCVar2 = operator_new(0x38);
  uStack_4 = 0;
  if (pCVar2 == (CHgDDB *)0x0) {
    pCVar2 = (CHgDDB *)0x0;
  }
  else {
    CHgDDB::CHgDDB(pCVar2);
    *(undefined ***)pCVar2 = CHgDDB::vftable;
  }
  uStack_4 = 0xffffffff;
  *(CHgDDB **)(this + 0x34) = pCVar2;
  pCVar2 = operator_new(0x38);
  uStack_4 = 1;
  if (pCVar2 == (CHgDDB *)0x0) {
    pCVar2 = (CHgDDB *)0x0;
  }
  else {
    CHgDDB::CHgDDB(pCVar2);
    *(undefined ***)pCVar2 = CHgDDB::vftable;
  }
  uStack_4 = 0xffffffff;
  *(CHgDDB **)(this + 0x38) = pCVar2;
  if ((((*(int **)(this + 0x34) != (int *)0x0) && (pCVar2 != (CHgDDB *)0x0)) &&
      (cVar1 = (**(code **)(**(int **)(this + 0x34) + 8))(param_1,param_3), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(**(int **)(this + 0x38) + 8))(param_2,param_3), cVar1 != '\0')) {
    *(undefined4 *)(*(int *)(this + 0x34) + 0x30) = 2;
    *(undefined4 *)(*(int *)(this + 0x38) + 0x30) = 2;
    ExceptionList = local_c;
    return 1;
  }
  if (*(undefined4 **)(this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x34))(1);
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x38))(1);
    *(undefined4 *)(this + 0x38) = 0;
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- SetCoord @ 60b04e90 size=57 ---- */

/* public: void __thiscall CHgBoardProgressInfo::SetCoord(class CRect const &,class CRect const &)
    */

void __thiscall
CHgBoardProgressInfo::SetCoord(CHgBoardProgressInfo *this,CRect *param_1,CRect *param_2)

{
                    /* 0x4e90  158  ?SetCoord@CHgBoardProgressInfo@@QAEXABVCRect@@0@Z */
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_2 + 0xc);
  return;
}



/* ---- SetPlayerInfo @ 60b04ed0 size=238 ---- */

/* public: int __thiscall CHgBoardProgressInfo::SetPlayerInfo(class CMemberData *,int,struct HWND__
   *,int) */

int __thiscall
CHgBoardProgressInfo::SetPlayerInfo
          (CHgBoardProgressInfo *this,CMemberData *param_1,int param_2,HWND__ *param_3,int param_4)

{
  CAvtr2004 *pCVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4ed0  166
                       ?SetPlayerInfo@CHgBoardProgressInfo@@QAEHPAVCMemberData@@HPAUHWND__@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60b062fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = *(CAvtr2004 **)(this + 0x30);
  *(CMemberData **)(this + 4) = param_1;
  *(int *)(this + 8) = param_4;
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  if (pCVar1 != (CAvtr2004 *)0x0) {
    CAvtr2004::~CAvtr2004(pCVar1);
    operator_delete(pCVar1);
    *(undefined4 *)(this + 0x30) = 0;
  }
  pCVar1 = operator_new(0x110);
  local_4 = 0;
  if (pCVar1 == (CAvtr2004 *)0x0) {
    pCVar1 = (CAvtr2004 *)0x0;
  }
  else {
    pCVar1 = (CAvtr2004 *)CAvtr2004::CAvtr2004(pCVar1);
  }
  local_4 = 0xffffffff;
  *(CAvtr2004 **)(this + 0x30) = pCVar1;
  if (pCVar1 == (CAvtr2004 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CAvtr2004::Create(pCVar1,(char *)(param_1 + 0x25),0,1,0,0xff0000);
    if (iVar2 == 0) {
      pCVar1 = *(CAvtr2004 **)(this + 0x30);
      if (pCVar1 != (CAvtr2004 *)0x0) {
        CAvtr2004::~CAvtr2004(pCVar1);
        operator_delete(pCVar1);
      }
      *(undefined4 *)(this + 0x30) = 0;
    }
    iVar2 = 1;
  }
  ExceptionList = local_c;
  return iVar2;
}



/* ---- IsSamePlayer @ 60b04fc0 size=82 ---- */

/* public: int __thiscall CHgBoardProgressInfo::IsSamePlayer(char const *) */

int __thiscall CHgBoardProgressInfo::IsSamePlayer(CHgBoardProgressInfo *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
                    /* 0x4fc0  129  ?IsSamePlayer@CHgBoardProgressInfo@@QAEHPBD@Z */
  if ((*(int *)(this + 4) == 0) || (param_1 == (char *)0x0)) {
    return 0;
  }
  pbVar2 = (byte *)(*(int *)(this + 4) + 0x10);
  while( true ) {
    bVar1 = *pbVar2;
    bVar3 = bVar1 < (byte)*param_1;
    if (bVar1 != *param_1) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar3 = bVar1 < (byte)param_1[1];
    if (bVar1 != param_1[1]) break;
    pbVar2 = pbVar2 + 2;
    param_1 = param_1 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return (uint)(1 - bVar3 == (uint)(bVar3 != 0));
}



/* ---- ResetPlayerInfo @ 60b05020 size=73 ---- */

/* public: int __thiscall CHgBoardProgressInfo::ResetPlayerInfo(void) */

int __thiscall CHgBoardProgressInfo::ResetPlayerInfo(CHgBoardProgressInfo *this)

{
  CAvtr2004 *this_00;
  
                    /* 0x5020  154  ?ResetPlayerInfo@CHgBoardProgressInfo@@QAEHXZ */
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
  }
  this_00 = *(CAvtr2004 **)(this + 0x30);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  if (this_00 != (CAvtr2004 *)0x0) {
    CAvtr2004::~CAvtr2004(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 0x30) = 0;
  }
  return 1;
}



/* ---- SetPlayerNumber @ 60b05070 size=10 ---- */

/* public: void __thiscall CHgBoardLogic::SetPlayerNumber(int) */

void __thiscall CHgBoardLogic::SetPlayerNumber(CHgBoardLogic *this,int param_1)

{
                    /* 0x5070  167  ?SetPlayerNumber@CHgBoardLogic@@QAEXH@Z
                       0x5070  169  ?SetPlayerTurn@CHgBoardProgressInfo@@QAEXH@Z */
  *(int *)(this + 8) = param_1;
  return;
}



/* ---- SetStartGame @ 60b05080 size=32 ---- */

/* public: virtual void __thiscall CHgBoardProgressInfo::SetStartGame(int,int,int) */

void __thiscall
CHgBoardProgressInfo::SetStartGame(CHgBoardProgressInfo *this,int param_1,int param_2,int param_3)

{
                    /* 0x5080  173  ?SetStartGame@CHgBoardProgressInfo@@UAEXHHH@Z */
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(int *)(this + 0x44) = param_1;
  *(int *)(this + 0x48) = param_2;
  *(int *)(this + 0x4c) = param_3;
  return;
}



/* ---- MakeAvatarImage @ 60b050a0 size=201 ---- */

/* public: void __thiscall CHgBoardProgressInfo::MakeAvatarImage(struct HWND__ *,int) */

void __thiscall
CHgBoardProgressInfo::MakeAvatarImage(CHgBoardProgressInfo *this,HWND__ *param_1,int param_2)

{
  CAvtr2004 *pCVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x50a0  136  ?MakeAvatarImage@CHgBoardProgressInfo@@QAEXPAUHWND__@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60b062cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = *(CAvtr2004 **)(this + 0x30);
  if (pCVar1 != (CAvtr2004 *)0x0) {
    CAvtr2004::~CAvtr2004(pCVar1);
    operator_delete(pCVar1);
    *(undefined4 *)(this + 0x30) = 0;
  }
  pCVar1 = operator_new(0x110);
  local_4 = 0;
  if (pCVar1 == (CAvtr2004 *)0x0) {
    pCVar1 = (CAvtr2004 *)0x0;
  }
  else {
    pCVar1 = (CAvtr2004 *)CAvtr2004::CAvtr2004(pCVar1);
  }
  local_4 = 0xffffffff;
  *(CAvtr2004 **)(this + 0x30) = pCVar1;
  iVar2 = CAvtr2004::Create(pCVar1,(char *)(*(int *)(this + 4) + 0x25),0,1,0,0xff0000);
  if (iVar2 == 0) {
    pCVar1 = *(CAvtr2004 **)(this + 0x30);
    if (pCVar1 != (CAvtr2004 *)0x0) {
      CAvtr2004::~CAvtr2004(pCVar1);
      operator_delete(pCVar1);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  ExceptionList = local_c;
  return;
}



/* ---- operator= @ 60b05170 size=5 ---- */

/* public: class HGBG & __thiscall HGBG::operator=(class HGBG const &) */

HGBG * __thiscall HGBG::operator=(HGBG *this,HGBG *param_1)

{
                    /* 0x5170  30  ??4HGBG@@QAEAAV0@ABV0@@Z */
  return this;
}



/* ---- CHgCellInfo @ 60b05180 size=46 ---- */

/* public: __thiscall CHgCellInfo::CHgCellInfo(int,int,int,int,int,int) */

void __thiscall
CHgCellInfo::CHgCellInfo
          (CHgCellInfo *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6
          )

{
                    /* 0x5180  12  ??0CHgCellInfo@@QAE@HHHHHH@Z */
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  *(int *)(this + 0x10) = param_5;
  *(int *)(this + 0x14) = param_6;
  return;
}



/* ---- CHgCellInfo @ 60b051b0 size=43 ---- */

/* public: __thiscall CHgCellInfo::CHgCellInfo(class CHgCellInfo &) */

CHgCellInfo * __thiscall CHgCellInfo::CHgCellInfo(CHgCellInfo *this,CHgCellInfo *param_1)

{
                    /* 0x51b0  11  ??0CHgCellInfo@@QAE@AAV0@@Z
                       0x51b0  28  ??4CHgCellInfo@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}



/* ---- CHgCellInfo @ 60b051e0 size=25 ---- */

/* public: __thiscall CHgCellInfo::CHgCellInfo(void) */

void __thiscall CHgCellInfo::CHgCellInfo(CHgCellInfo *this)

{
                    /* 0x51e0  13  ??0CHgCellInfo@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  return;
}



/* ---- CHgSeqInfo @ 60b05200 size=52 ---- */

/* public: __thiscall CHgSeqInfo::CHgSeqInfo(int,class CTypedPtrList<class CPtrList,class
   CHgCellInfo *> *,void *) */

CHgSeqInfo * __thiscall
CHgSeqInfo::CHgSeqInfo
          (CHgSeqInfo *this,int param_1,CTypedPtrList<CPtrList,CHgCellInfo*> *param_2,void *param_3)

{
                    /* 0x5200  15
                       ??0CHgSeqInfo@@QAE@HPAV?$CTypedPtrList@VCPtrList@@PAVCHgCellInfo@@@@PAX@Z */
  *(int *)(this + 4) = param_1;
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 8) = 0;
  *(void **)(this + 0xc) = param_3;
  if (param_2 != (CTypedPtrList<CPtrList,CHgCellInfo*> *)0x0) {
    CopyList(this,param_2);
  }
  return this;
}



/* ---- ~CHgSeqInfo @ 60b05240 size=11 ---- */

/* public: virtual __thiscall CHgSeqInfo::~CHgSeqInfo(void) */

void __thiscall CHgSeqInfo::~CHgSeqInfo(CHgSeqInfo *this)

{
                    /* 0x5240  24  ??1CHgSeqInfo@@UAE@XZ */
  *(undefined ***)this = _vftable_;
  RemoveList(this);
  return;
}



/* ---- CopyList @ 60b05250 size=320 ---- */

/* private: int __thiscall CHgSeqInfo::CopyList(class CTypedPtrList<class CPtrList,class CHgCellInfo
   *> *) */

int __thiscall CHgSeqInfo::CopyList(CHgSeqInfo *this,CTypedPtrList<CPtrList,CHgCellInfo*> *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  uint uVar4;
  CPtrList *this_00;
  undefined4 *puVar5;
  undefined1 auStackY_a4 [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x5250  52
                       ?CopyList@CHgSeqInfo@@AAEHPAV?$CTypedPtrList@VCPtrList@@PAVCHgCellInfo@@@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60b06298;
  local_c = ExceptionList;
  uVar4 = DAT_60b0d018 ^ (uint)(auStackY_a4 + 0x88);
  ppvVar3 = &local_c;
  if (*(int *)(this + 8) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(this + 8) + 4);
    while (ExceptionList = ppvVar3, puVar1 != (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) goto LAB_60b052ee;
      puVar2 = puVar1 + 2;
      puVar1 = (undefined4 *)*puVar1;
      ppvVar3 = ExceptionList;
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete((void *)*puVar2);
        ppvVar3 = ExceptionList;
      }
    }
    CPtrList::RemoveAll(*(CPtrList **)(this + 8));
    if (*(int **)(this + 8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 8) + 4))(1,uVar4);
    }
    *(undefined4 *)(this + 8) = 0;
    ppvVar3 = ExceptionList;
  }
  ExceptionList = ppvVar3;
  this_00 = operator_new(0x1c);
  uStack_4 = 0;
  if (this_00 == (CPtrList *)0x0) {
    this_00 = (CPtrList *)0x0;
  }
  else {
    CPtrList::CPtrList(this_00,10);
    *(undefined ***)this_00 = CTypedPtrList<CPtrList,CHgCellInfo*>::vftable;
  }
  uStack_4 = 0xffffffff;
  *(CPtrList **)(this + 8) = this_00;
  if (this_00 == (CPtrList *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return 1;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    puVar5 = operator_new(0x18);
    if (puVar5 == (undefined4 *)0x0) {
      RemoveList(this);
      ExceptionList = local_c;
      return 0;
    }
    *puVar5 = *puVar1;
    puVar5[1] = puVar1[1];
    puVar5[2] = puVar1[2];
    puVar5[3] = puVar1[3];
    puVar5[4] = puVar1[4];
    puVar5[5] = puVar1[5];
    CPtrList::AddTail(*(CPtrList **)(this + 8),puVar5);
    puVar1 = puVar2;
  }
LAB_60b052ee:
                    /* WARNING: Subroutine does not return */
  AfxThrowInvalidArgException();
}



/* ---- RemoveList @ 60b05390 size=91 ---- */

/* private: void __thiscall CHgSeqInfo::RemoveList(void) */

void __thiscall CHgSeqInfo::RemoveList(CHgSeqInfo *this)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x5390  149  ?RemoveList@CHgSeqInfo@@AAEXXZ */
  iVar2 = *(int *)(this + 8);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    puVar3 = *(undefined4 **)(iVar2 + 4);
    while (puVar3 != (undefined4 *)0x0) {
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        AfxThrowInvalidArgException();
      }
      puVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      if ((void *)*puVar1 != (void *)0x0) {
        operator_delete((void *)*puVar1);
      }
    }
    CPtrList::RemoveAll(*(CPtrList **)(this + 8));
    if (*(int **)(this + 8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 8) + 4))(1);
    }
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}



/* ---- operator_delete @ 60b053ec size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b053ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- AfxGetModuleState @ 60b053f2 size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b053f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- AfxInitExtensionModule @ 60b053f8 size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b053f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- operator_new @ 60b053fe size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b053fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- CDynLinkLibrary @ 60b05404 size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60b05404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxTermExtensionModule @ 60b0540a size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60b0540a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- operator_delete[] @ 60b05410 size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b05410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- CDialog @ 60b05416 size=6 ---- */

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60b05416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}



/* ---- ~CDialog @ 60b0541c size=6 ---- */

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b0541c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}



/* ---- CreateEx @ 60b05422 size=6 ---- */

int __thiscall
CProgressCtrl::CreateEx
          (CProgressCtrl *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,
          uint param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}



/* ---- Create @ 60b05428 size=6 ---- */

int __thiscall
CProgressCtrl::Create(CProgressCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- GetOccDialogInfo @ 60b0542e size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CWnd::GetOccDialogInfo(CWnd *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0542e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- SetOccDialogInfo @ 60b05434 size=6 ---- */

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- CreateControlSite @ 60b0543a size=6 ---- */

int __thiscall
CWnd::CreateControlSite
          (CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,
          _GUID *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0543a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlSite(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CreateControlContainer @ 60b05440 size=6 ---- */

int __thiscall CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlContainer(this,param_1);
  return iVar1;
}



/* ---- IsFrameWnd @ 60b05446 size=6 ---- */

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- CheckAutoCenter @ 60b0544c size=6 ---- */

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- OnChildNotify @ 60b05452 size=6 ---- */

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- PostNcDestroy @ 60b05458 size=6 ---- */

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b05458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- DefWindowProcA @ 60b0545e size=6 ---- */

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0545e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- OnWndMsg @ 60b05464 size=6 ---- */

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- WindowProc @ 60b0546a size=6 ---- */

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0546a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- OnAmbientProperty @ 60b05470 size=6 ---- */

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- PreTranslateMessage @ 60b05476 size=6 ---- */

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- GetSuperWndProcAddr @ 60b0547c size=6 ---- */

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0547c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}



/* ---- OnNotify @ 60b05482 size=6 ---- */

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- OnCommand @ 60b05488 size=6 ---- */

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- CreateAccessibleProxy @ 60b0548e size=6 ---- */

long __thiscall CWnd::CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0548e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = CreateAccessibleProxy(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- SetProxy @ 60b05494 size=6 ---- */

long __thiscall CWnd::SetProxy(CWnd *this,IAccessibleProxy *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = SetProxy(this,param_1);
  return lVar1;
}



/* ---- put_accValue @ 60b0549a size=6 ---- */

long __thiscall CWnd::put_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0549a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accValue();
  return lVar1;
}



/* ---- put_accName @ 60b054a0 size=6 ---- */

long __thiscall CWnd::put_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accName();
  return lVar1;
}



/* ---- accDoDefaultAction @ 60b054a6 size=6 ---- */

long __thiscall CWnd::accDoDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accDoDefaultAction();
  return lVar1;
}



/* ---- accHitTest @ 60b054ac size=6 ---- */

long __thiscall CWnd::accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accHitTest(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- accNavigate @ 60b054b2 size=6 ---- */

long __thiscall CWnd::accNavigate(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accNavigate();
  return lVar1;
}



/* ---- accLocation @ 60b054b8 size=6 ---- */

long __thiscall CWnd::accLocation(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accLocation();
  return lVar1;
}



/* ---- accSelect @ 60b054be size=6 ---- */

long __thiscall CWnd::accSelect(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accSelect();
  return lVar1;
}



/* ---- get_accDefaultAction @ 60b054c4 size=6 ---- */

long __thiscall CWnd::get_accDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDefaultAction();
  return lVar1;
}



/* ---- get_accSelection @ 60b054ca size=6 ---- */

long __thiscall CWnd::get_accSelection(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accSelection(this,param_1);
  return lVar1;
}



/* ---- get_accFocus @ 60b054d0 size=6 ---- */

long __thiscall CWnd::get_accFocus(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accFocus(this,param_1);
  return lVar1;
}



/* ---- get_accKeyboardShortcut @ 60b054d6 size=6 ---- */

long __thiscall CWnd::get_accKeyboardShortcut(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accKeyboardShortcut();
  return lVar1;
}



/* ---- get_accHelpTopic @ 60b054dc size=6 ---- */

long __thiscall CWnd::get_accHelpTopic(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelpTopic();
  return lVar1;
}



/* ---- get_accHelp @ 60b054e2 size=6 ---- */

long __thiscall CWnd::get_accHelp(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelp();
  return lVar1;
}



/* ---- get_accState @ 60b054e8 size=6 ---- */

long __thiscall CWnd::get_accState(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accState();
  return lVar1;
}



/* ---- get_accRole @ 60b054ee size=6 ---- */

long __thiscall CWnd::get_accRole(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accRole();
  return lVar1;
}



/* ---- get_accDescription @ 60b054f4 size=6 ---- */

long __thiscall CWnd::get_accDescription(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDescription();
  return lVar1;
}



/* ---- get_accValue @ 60b054fa size=6 ---- */

long __thiscall CWnd::get_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b054fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accValue();
  return lVar1;
}



/* ---- get_accName @ 60b05500 size=6 ---- */

long __thiscall CWnd::get_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accName();
  return lVar1;
}



/* ---- get_accChild @ 60b05506 size=6 ---- */

long __thiscall CWnd::get_accChild(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChild();
  return lVar1;
}



/* ---- get_accChildCount @ 60b0550c size=6 ---- */

long __thiscall CWnd::get_accChildCount(CWnd *this,long *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0550c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChildCount(this,param_1);
  return lVar1;
}



/* ---- get_accParent @ 60b05512 size=6 ---- */

long __thiscall CWnd::get_accParent(CWnd *this,IDispatch **param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accParent(this,param_1);
  return lVar1;
}



/* ---- EnsureStdObj @ 60b05518 size=6 ---- */

long __thiscall CWnd::EnsureStdObj(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = EnsureStdObj(this);
  return lVar1;
}



/* ---- EndModalLoop @ 60b0551e size=6 ---- */

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b0551e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}



/* ---- ContinueModal @ 60b05524 size=6 ---- */

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}



/* ---- WinHelpInternal @ 60b0552a size=6 ---- */

void __thiscall CWnd::WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60b0552a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- HtmlHelpA @ 60b05530 size=6 ---- */

void __thiscall CWnd::HtmlHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60b05530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- WinHelpA @ 60b05536 size=6 ---- */

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60b05536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- GetScrollBarCtrl @ 60b0553c size=6 ---- */

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}



/* ---- OnToolHitTest @ 60b05542 size=6 ---- */

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}



/* ---- SetMenu @ 60b05548 size=6 ---- */

int __thiscall CWnd::SetMenu(CWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- GetMenu @ 60b0554e size=6 ---- */

CMenu * __thiscall CWnd::GetMenu(CWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0554e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- CalcWindowRect @ 60b05554 size=6 ---- */

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60b05554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}



/* ---- PreCreateWindow @ 60b0555a size=6 ---- */

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0555a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- DestroyWindow @ 60b05560 size=6 ---- */

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}



/* ---- CreateEx @ 60b05566 size=6 ---- */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
              int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
  return iVar1;
}



/* ---- CreateEx @ 60b0556c size=6 ---- */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,
              CWnd *param_6,uint param_7,void *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- Create @ 60b05572 size=6 ---- */

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}



/* ---- PreSubclassWindow @ 60b05578 size=6 ---- */

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b05578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}



/* ---- GetConnectionHook @ 60b0557e size=6 ---- */

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0557e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}



/* ---- GetExtraConnectionPoints @ 60b05584 size=6 ---- */

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}



/* ---- GetInterfaceHook @ 60b0558a size=6 ---- */

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0558a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}



/* ---- OnCreateAggregates @ 60b05590 size=6 ---- */

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}



/* ---- GetEventSinkMap @ 60b05596 size=6 ---- */

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}



/* ---- GetInterfaceMap @ 60b0559c size=6 ---- */

AFX_INTERFACEMAP * __thiscall CWnd::GetInterfaceMap(CWnd *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0559c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- GetConnectionMap @ 60b055a2 size=6 ---- */

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}



/* ---- GetDispatchMap @ 60b055a8 size=6 ---- */

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}



/* ---- GetCommandMap @ 60b055ae size=6 ---- */

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}



/* ---- GetMessageMap @ 60b055b4 size=6 ---- */

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- GetTypeLib @ 60b055ba size=6 ---- */

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}



/* ---- GetTypeLibCache @ 60b055c0 size=6 ---- */

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}



/* ---- GetTypeInfoCount @ 60b055c6 size=6 ---- */

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}



/* ---- GetDispatchIID @ 60b055cc size=6 ---- */

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}



/* ---- IsInvokeAllowed @ 60b055d2 size=6 ---- */

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}



/* ---- OnFinalRelease @ 60b055d8 size=6 ---- */

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b055d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- OnCmdMsg @ 60b055de size=6 ---- */

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- GetRuntimeClass @ 60b055e4 size=6 ---- */

CRuntimeClass * __thiscall CProgressCtrl::GetRuntimeClass(CProgressCtrl *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b055e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CWnd @ 60b055ea size=6 ---- */

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b055ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}



/* ---- ~CProgressCtrl @ 60b055f0 size=6 ---- */

void __thiscall CProgressCtrl::~CProgressCtrl(CProgressCtrl *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b055f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CProgressCtrl(this);
  return;
}



/* ---- DDX_Control @ 60b055f6 size=6 ---- */

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x60b055f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Control(param_1,param_2,param_3);
  return;
}



/* ---- DDX_Text @ 60b055fc size=6 ---- */

void DDX_Text(CDataExchange *param_1,int param_2,
             CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x60b055fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}



/* ---- OnInitDialog @ 60b05608 size=6 ---- */

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}



/* ---- GetDlgItem @ 60b0560e size=6 ---- */

CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0560e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetDlgItem(this,param_1);
  return pCVar1;
}



/* ---- ScreenToClient @ 60b05614 size=6 ---- */

void __thiscall CWnd::ScreenToClient(CWnd *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b05614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ScreenToClient(this,param_1);
  return;
}



/* ---- SetWindowTextA @ 60b0561a size=6 ---- */

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b0561a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextA(this,param_1);
  return;
}



/* ---- EndDialog @ 60b05620 size=6 ---- */

void __thiscall CDialog::EndDialog(CDialog *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b05620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndDialog(this,param_1);
  return;
}



/* ---- Default @ 60b05626 size=6 ---- */

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}



/* ---- CPaintDC @ 60b0562c size=6 ---- */

void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b0562c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPaintDC(this,param_1);
  return;
}



/* ---- ~CPaintDC @ 60b05632 size=6 ---- */

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b05632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPaintDC(this);
  return;
}



/* ---- GetRuntimeClass @ 60b05638 size=6 ---- */

CRuntimeClass * __thiscall CDialog::GetRuntimeClass(CDialog *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- OnCmdMsg @ 60b0563e size=6 ---- */

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0563e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- PreTranslateMessage @ 60b05644 size=6 ---- */

int __thiscall CDialog::PreTranslateMessage(CDialog *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CheckAutoCenter @ 60b0564a size=6 ---- */

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0564a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- SetOccDialogInfo @ 60b05650 size=6 ---- */

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- GetOccDialogInfo @ 60b05656 size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CDialog::GetOccDialogInfo(CDialog *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- Create @ 60b0565c size=6 ---- */

int __thiscall CDialog::Create(CDialog *this,char *param_1,CWnd *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0565c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2);
  return iVar1;
}



/* ---- CreateIndirect @ 60b05662 size=6 ---- */

int __thiscall CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateIndirect(this,param_1,param_2);
  return iVar1;
}



/* ---- CreateIndirect @ 60b05668 size=6 ---- */

int __thiscall
CDialog::CreateIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateIndirect(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- DoModal @ 60b0566e size=6 ---- */

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0566e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}



/* ---- OnSetFont @ 60b05674 size=6 ---- */

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b05674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}



/* ---- OnOK @ 60b0567a size=6 ---- */

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b0567a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}



/* ---- OnCancel @ 60b05680 size=6 ---- */

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b05680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}



/* ---- PreInitDialog @ 60b05686 size=6 ---- */

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b05686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}



/* ---- AfxMessageBox @ 60b0568c size=6 ---- */

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0568c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}



/* ---- DeleteObject @ 60b05692 size=6 ---- */

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}



/* ---- GetRuntimeClass @ 60b05698 size=6 ---- */

CRuntimeClass * __thiscall CGdiObject::GetRuntimeClass(CGdiObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- GetRuntimeClass @ 60b0569e size=6 ---- */

CRuntimeClass * __thiscall CFont::GetRuntimeClass(CFont *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0569e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- operator_new[] @ 60b056a4 size=6 ---- */

void * __cdecl operator_new__(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b056a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}



/* ---- Attach @ 60b056aa size=6 ---- */

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b056aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}



/* ---- GetRuntimeClass @ 60b056b0 size=6 ---- */

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b056b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- RemoveAll @ 60b056b6 size=6 ---- */

void __thiscall CPtrList::RemoveAll(CPtrList *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b056b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveAll(this);
  return;
}



/* ---- AddTail @ 60b056bc size=6 ---- */

__POSITION * __thiscall CPtrList::AddTail(CPtrList *this,void *param_1)

{
  __POSITION *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60b056bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AddTail(this,param_1);
  return p_Var1;
}



/* ---- RemoveHead @ 60b056c2 size=6 ---- */

void * __thiscall CPtrList::RemoveHead(CPtrList *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b056c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemoveHead(this);
  return pvVar1;
}



/* ---- RemoveTail @ 60b056c8 size=6 ---- */

void * __thiscall CPtrList::RemoveTail(CPtrList *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b056c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemoveTail(this);
  return pvVar1;
}



/* ---- AfxThrowInvalidArgException @ 60b056ce size=6 ---- */

void AfxThrowInvalidArgException(void)

{
                    /* WARNING: Could not recover jumptable at 0x60b056ce. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  AfxThrowInvalidArgException();
  return;
}



/* ---- ~CPtrList @ 60b056d4 size=6 ---- */

void __thiscall CPtrList::~CPtrList(CPtrList *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b056d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPtrList(this);
  return;
}



/* ---- CPtrList @ 60b056da size=6 ---- */

void __thiscall CPtrList::CPtrList(CPtrList *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b056da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPtrList(this,param_1);
  return;
}



/* ---- GetRuntimeClass @ 60b056e0 size=6 ---- */

CRuntimeClass * __thiscall CPtrList::GetRuntimeClass(CPtrList *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b056e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- __security_check_cookie @ 60b056e6 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_60b0d018) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- __ArrayUnwind @ 60b056f5 size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 60b05753 size=75 ---- */

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
  FUN_60b0579e();
  return;
}



/* ---- FUN_60b0579e @ 60b0579e size=24 ---- */

void FUN_60b0579e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 60b057b6 size=76 ---- */

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



/* ---- purecall @ 60b05802 size=6 ---- */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x60b05802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* ---- __CRT_INIT@12 @ 60b05857 size=550 ---- */

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
    if (DAT_60b0d530 < 1) {
      return 0;
    }
    DAT_60b0d530 = DAT_60b0d530 + -1;
  }
  _DAT_60b0d8b8 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60b0d8c0,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60b0d8bc == 0) {
      DAT_60b0d8bc = 1;
      iVar3 = initterm_e(&DAT_60b07378,&DAT_60b07380);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_60b07354,&DAT_60b07374);
      DAT_60b0d8bc = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_60b0d8c0,0);
    }
    if ((DAT_60b0d8cc != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_60b0d8cc), BVar4 != 0)) {
      (*DAT_60b0d8cc)(param_1,2,param_3);
    }
    DAT_60b0d530 = DAT_60b0d530 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60b0d8c0,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60b0d8bc == 2) {
      param_2 = (int *)decode_pointer(DAT_60b0d8c8);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_60b0d8c4);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_60b0d8c8);
            piVar8 = (int *)decode_pointer(DAT_60b0d8c4);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_60b0d8c4 = encoded_null();
        DAT_60b0d8c8 = DAT_60b0d8c4;
      }
      DAT_60b0d8bc = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_60b0d8c0,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 60b05a7d size=240 ---- */

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
  _DAT_60b0d020 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_60b0d530 == 0)) {
    local_20 = 0;
    goto LAB_60b05b6f;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_FUN_60b07440 != (undefined *)0x0) {
      local_20 = (*(code *)PTR_FUN_60b07440)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_60b05b6f;
    local_20 = __CRT_INIT_12((int *)param_3,param_2,param_1);
    if (local_20 == 0) goto LAB_60b05b6f;
  }
  local_20 = FUN_60b01030(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_60b01030(param_3,0);
    __CRT_INIT_12((int *)param_3,(int *)0x0,param_1);
    if (PTR_FUN_60b07440 != (undefined *)0x0) {
      (*(code *)PTR_FUN_60b07440)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12((int *)param_3,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_FUN_60b07440 != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_FUN_60b07440)(param_3,param_2,param_1);
    }
  }
LAB_60b05b6f:
  FUN_60b05b88();
  return local_20;
}



/* ---- FUN_60b05b88 @ 60b05b88 size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60b05b88(void)

{
  _DAT_60b0d020 = 0xffffffff;
  return;
}



/* ---- entry @ 60b05b93 size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- ___report_gsfailure @ 60b05bb6 size=262 ---- */

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
  
  _DAT_60b0d650 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_60b0d654 = &uStack00000004;
  _DAT_60b0d590 = 0x10001;
  _DAT_60b0d538 = 0xc0000409;
  _DAT_60b0d53c = 1;
  local_32c = DAT_60b0d018;
  local_328 = DAT_60b0d01c;
  _DAT_60b0d544 = _local_res0;
  _DAT_60b0d61c = in_GS;
  _DAT_60b0d620 = in_FS;
  _DAT_60b0d624 = in_ES;
  _DAT_60b0d628 = in_DS;
  _DAT_60b0d62c = unaff_EDI;
  _DAT_60b0d630 = unaff_ESI;
  _DAT_60b0d634 = unaff_EBX;
  _DAT_60b0d638 = in_EDX;
  _DAT_60b0d63c = in_ECX;
  _DAT_60b0d640 = in_EAX;
  _DAT_60b0d644 = unaff_EBP;
  DAT_60b0d648 = _local_res0;
  _DAT_60b0d64c = in_CS;
  _DAT_60b0d658 = in_SS;
  DAT_60b0d588 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_60b0742c);
  if (DAT_60b0d588 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- terminate @ 60b05cbc size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x60b05cbc. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- __SEH_prolog4 @ 60b05cc4 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_60b0d018 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 60b05d09 size=20 ---- */

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



/* ---- FUN_60b05d1d @ 60b05d1d size=37 ---- */

void __cdecl
FUN_60b05d1d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_60b0d018,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- __onexit @ 60b05d4e size=156 ---- */

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
  
  local_8 = &DAT_60b08560;
  uStack_c = 0x60b05d5a;
  local_20[0] = decode_pointer(DAT_60b0d8c8);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_60b0d8c8);
    local_24 = decode_pointer(DAT_60b0d8c4);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_60b0d8c8 = encode_pointer(local_20[0]);
    DAT_60b0d8c4 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_60b05dea();
  }
  return p_Var1;
}



/* ---- FUN_60b05dea @ 60b05dea size=9 ---- */

void FUN_60b05dea(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 60b05df3 size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- __ValidateImageBase @ 60b05e60 size=53 ---- */

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



/* ---- __FindPESection @ 60b05ea0 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 60b05ef0 size=166 ---- */

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
  
  pcStack_10 = FUN_60b05d1d;
  local_14 = ExceptionList;
  local_c = DAT_60b0d018 ^ 0x60b08580;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_60b00000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_60b00000,(DWORD_PTR)(pTarget + -0x60b00000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 60b05fae size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x60b05fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 60b05fb4 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x60b05fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 60b05fba size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b05fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 60b05fc0 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b05fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 60b05fc6 size=150 ---- */

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
  if ((DAT_60b0d018 == 0xbb40e64e) || ((DAT_60b0d018 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_60b0d018 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_60b0d018 == 0xbb40e64e) {
      DAT_60b0d018 = 0xbb40e64f;
    }
    else if ((DAT_60b0d018 & 0xffff0000) == 0) {
      DAT_60b0d018 = DAT_60b0d018 | DAT_60b0d018 << 0x10;
    }
  }
  DAT_60b0d01c = ~DAT_60b0d018;
  return;
}



/* ---- _crt_debugger_hook @ 60b0605c size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60b0605c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- except_handler4_common @ 60b06062 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x60b06062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _type_info_dtor_internal_method @ 60b06068 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b06068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- _unlock @ 60b06074 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60b06074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 60b0607a size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x60b0607a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 60b06080 size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60b06080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- Create @ 60b06086 size=6 ---- */

bool __thiscall CHgImageBase::Create(CHgImageBase *this,char *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b06086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1);
  return bVar1;
}



/* ---- Create @ 60b0608c size=6 ---- */

bool __thiscall CHgImageBase::Create(CHgImageBase *this,char *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b0608c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



/* ---- Create @ 60b06092 size=6 ---- */

bool __thiscall CHgImageBase::Create(CHgImageBase *this,int param_1,int param_2,ulong param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b06092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2,param_3);
  return bVar1;
}



/* ---- Create @ 60b06098 size=6 ---- */

bool __thiscall CHgDDB::Create(CHgDDB *this,int param_1,int param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b06098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = Create(this,param_1,param_2);
  return bVar1;
}



/* ---- Destroy @ 60b0609e size=6 ---- */

void __thiscall CHgDDB::Destroy(CHgDDB *this)

{
                    /* WARNING: Could not recover jumptable at 0x60b0609e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Destroy(this);
  return;
}



/* ---- __CreateFromBitmapWithColorTable @ 60b060a4 size=6 ---- */

bool __thiscall
CHgImage::__CreateFromBitmapWithColorTable(CHgImage *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b060a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmapWithColorTable(this,param_1,param_2);
  return bVar1;
}



/* ---- __CreateFromBitmap16 @ 60b060aa size=6 ---- */

bool __thiscall CHgImage::__CreateFromBitmap16(CHgImage *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b060aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmap16(this,param_1,param_2);
  return bVar1;
}



/* ---- __CreateFromBitmap24 @ 60b060b0 size=6 ---- */

bool __thiscall CHgImage::__CreateFromBitmap24(CHgImage *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b060b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __CreateFromBitmap24(this,param_1,param_2);
  return bVar1;
}



/* ---- memcpy @ 60b060bc size=6 ---- */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60b060bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* ---- Unwind@60b060d0 @ 60b060d0 size=11 ---- */

void Unwind_60b060d0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60b060db @ 60b060db size=11 ---- */

void Unwind_60b060db(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60b06110 @ 60b06110 size=9 ---- */

void Unwind_60b06110(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b06113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60b06150 @ 60b06150 size=8 ---- */

void Unwind_60b06150(void)

{
  int unaff_EBP;
  
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -100));
  return;
}



/* ---- Unwind@60b06180 @ 60b06180 size=9 ---- */

void Unwind_60b06180(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b06183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60b06189 @ 60b06189 size=11 ---- */

void Unwind_60b06189(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60b061b0 @ 60b061b0 size=8 ---- */

void Unwind_60b061b0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60b061b8 @ 60b061b8 size=11 ---- */

void Unwind_60b061b8(void)

{
  int unaff_EBP;
  
  CProgressCtrl::~CProgressCtrl((CProgressCtrl *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}



/* ---- Unwind@60b061c3 @ 60b061c3 size=15 ---- */

void Unwind_60b061c3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b061cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 200));
  return;
}



/* ---- Unwind@60b061d2 @ 60b061d2 size=15 ---- */

void Unwind_60b061d2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b061db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0xe4));
  return;
}



/* ---- Unwind@60b061e1 @ 60b061e1 size=15 ---- */

void Unwind_60b061e1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b061ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0xe8));
  return;
}



/* ---- Unwind@60b061f0 @ 60b061f0 size=15 ---- */

void Unwind_60b061f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b061f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0xec));
  return;
}



/* ---- Unwind@60b06220 @ 60b06220 size=8 ---- */

void Unwind_60b06220(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60b06228 @ 60b06228 size=11 ---- */

void Unwind_60b06228(void)

{
  int unaff_EBP;
  
  CProgressCtrl::~CProgressCtrl((CProgressCtrl *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}



/* ---- Unwind@60b06233 @ 60b06233 size=15 ---- */

void Unwind_60b06233(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b0623c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 200));
  return;
}



/* ---- Unwind@60b06242 @ 60b06242 size=15 ---- */

void Unwind_60b06242(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b0624b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0xe4));
  return;
}



/* ---- Unwind@60b06251 @ 60b06251 size=15 ---- */

void Unwind_60b06251(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b0625a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0xe8));
  return;
}



/* ---- Unwind@60b06260 @ 60b06260 size=15 ---- */

void Unwind_60b06260(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b06269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CHgDIB::~CHgDIB((CHgDIB *)(*(int *)(unaff_EBP + -0x10) + 0xec));
  return;
}



/* ---- Unwind@60b06290 @ 60b06290 size=8 ---- */

void Unwind_60b06290(void)

{
  FUN_60b01090();
  return;
}



/* ---- Unwind@60b062c0 @ 60b062c0 size=11 ---- */

void Unwind_60b062c0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60b062f0 @ 60b062f0 size=11 ---- */

void Unwind_60b062f0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60b06320 @ 60b06320 size=11 ---- */

void Unwind_60b06320(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60b06350 @ 60b06350 size=11 ---- */

void Unwind_60b06350(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60b06380 @ 60b06380 size=8 ---- */

void Unwind_60b06380(void)

{
  FUN_60b01090();
  return;
}



/* ---- Unwind@60b063b0 @ 60b063b0 size=11 ---- */

void Unwind_60b063b0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60b063bb @ 60b063bb size=11 ---- */

void Unwind_60b063bb(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60b063f0 @ 60b063f0 size=8 ---- */

void Unwind_60b063f0(void)

{
  int unaff_EBP;
  
  CPtrList::~CPtrList((CPtrList *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@60b06420 @ 60b06420 size=8 ---- */

void Unwind_60b06420(void)

{
  FUN_60b01090();
  return;
}



/* ---- Unwind@60b06450 @ 60b06450 size=9 ---- */

void Unwind_60b06450(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b06453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@60b06480 @ 60b06480 size=9 ---- */

void Unwind_60b06480(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60b06483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x38));
  return;
}



/* ---- FUN_60b06550 @ 60b06550 size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60b06550(void)

{
  _DAT_60b0d88c = DAT_60b0d89c * 2;
  _DAT_60b0d890 = DAT_60b0d89c >> 0x1f | DAT_60b0d8a0 * 2;
  return;
}



/* ---- FUN_60b06580 @ 60b06580 size=48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60b06580(void)

{
  _DAT_60b0d87c = DAT_60b0d89c * 4;
  _DAT_60b0d880 = DAT_60b0d89c >> 0x1e | DAT_60b0d8a0 * 4;
  return;
}


// total=393 ok=393 failed=0
