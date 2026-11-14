// Module: HgCtr3.dll
// ImageBase: 60200000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- ~CChannelListLobbyController @ 60201000 size=11 ---- */

/* public: __thiscall CChannelListLobbyController::CChannelListLobbyController(class
   CChannelListLobbyController const &) */

void __thiscall
CChannelListLobbyController::~CChannelListLobbyController
          (CChannelListLobbyController *this,CChannelListLobbyController *param_1)

{
                    /* 0x1000  1  ??0CChannelListLobbyController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- operator= @ 60201010 size=5 ---- */

/* public: class CChannelListLobbyController & __thiscall
   CChannelListLobbyController::operator=(class CChannelListLobbyController const &) */

CChannelListLobbyController * __thiscall
CChannelListLobbyController::operator=
          (CChannelListLobbyController *this,CChannelListLobbyController *param_1)

{
                    /* 0x1010  31  ??4CChannelListLobbyController@@QAEAAV0@ABV0@@Z
                       0x1010  32  ??4CChannelLobbyController@@QAEAAV0@ABV0@@Z
                       0x1010  33  ??4CGameLobbyController@@QAEAAV0@ABV0@@Z
                       0x1010  35  ??4CLobbyStateController@@QAEAAV0@ABV0@@Z
                       0x1010  36  ??4CMainFrameController@@QAEAAV0@ABV0@@Z
                       0x1010  40  ??4CReportClickToWebController@@QAEAAV0@ABV0@@Z
                       0x1010  41  ??4CSwitch2LobbyController@@QAEAAV0@ABV0@@Z */
  return (CChannelListLobbyController *)this;
}



/* ---- CChannelListLobbyController::OnAttached @ 60201020 size=828 ---- */

/* public: virtual bool __thiscall CChannelListLobbyController::OnAttached(void) */

bool __thiscall
CChannelListLobbyController::CChannelListLobbyController__OnAttached
          (CChannelListLobbyController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x1020  201  ?OnAttached@CChannelListLobbyController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelListLobby_OnAutoSelectedChannel;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelList","onAutoSelectChannel",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelListLobby_OnShowWindow;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelList","onShowWindow",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelListLobbyView_OnRefreshBtnClicked;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("miniChannelListView","onClickRefreshBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("miniChannelListView","onClickJoinBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("miniChannelListView","onClickAutoJoinBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelListLobbyView_OnGrpListBtnClicked;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("miniChannelListView","onClickGrpListBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelListLobbyView_OnHistoryBtnClicked;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("miniChannelListView","onClickHistoryBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelListLobbyView_OnChannelLstCllicked;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("miniChannelListView","onClickChannelLst",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelListLobbyView_OnChannelGrpLstClicked;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("miniChannelListView","onClickChannelGrpLst",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_SocketConnect;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channelList","socketConnect",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channelList","socketClose",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channelList","socketSend",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelListLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetChannelList;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channelList",&DAT_6020c46c,puVar2,1);
  return true;
}



/* ---- CChannelListLobbyController::OnDetached @ 60201360 size=22 ---- */

/* public: virtual bool __thiscall CChannelListLobbyController::OnDetached(void) */

bool __thiscall
CChannelListLobbyController::CChannelListLobbyController__OnDetached
          (CChannelListLobbyController *this)

{
                    /* 0x1360  210  ?OnDetached@CChannelListLobbyController@@UAE_NXZ */
  if (this != (CChannelListLobbyController *)0x0) {
                    /* inlined destructor: CChannelListLobbyController::~CChannelListLobbyController
                        */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- ~CChannelListLobbyController @ 60201380 size=9 ---- */

/* public: __thiscall CChannelListLobbyController::CChannelListLobbyController(void) */

void __thiscall
CChannelListLobbyController::~CChannelListLobbyController(CChannelListLobbyController *this)

{
                    /* 0x1380  2  ??0CChannelListLobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CChannelListLobbyController @ 60201390 size=7 ---- */

/* public: __thiscall CChannelListLobbyController::~CChannelListLobbyController(void) */

void __thiscall
CChannelListLobbyController::~CChannelListLobbyController(CChannelListLobbyController *this)

{
                    /* 0x1390  21  ??1CChannelListLobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- Evt_ChannelListLobby_OnAutoSelectedChannel @ 602013a0 size=600 ---- */

/* WARNING: Removing unreachable block (ram,0x60201525) */
/* WARNING: Removing unreachable block (ram,0x6020154e) */
/* public: int __thiscall
   CChannelListLobbyController::Evt_ChannelListLobby_OnAutoSelectedChannel(struct IParam &) */

int __thiscall
CChannelListLobbyController::Evt_ChannelListLobby_OnAutoSelectedChannel
          (CChannelListLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcStack_154;
  char *pcStack_148;
  char *pcStack_144;
  CParam *pCStack_140;
  undefined4 uStack_138;
  undefined1 auStack_124 [2];
  CParam aCStack_122 [2];
  int aiStack_120 [23];
  CParam aCStack_c4 [32];
  CParam aCStack_a4 [16];
  CParam local_94 [84];
  uint uStack_40;
  void *pvStack_3c;
  uint uStack_34;
  undefined1 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13a0  64
                       ?Evt_ChannelListLobby_OnAutoSelectedChannel@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b7e8;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_124;
  uStack_138 = DAT_60215018 ^ (uint)(auStack_124 + -0x10);
  ExceptionList = &local_c;
  pCStack_140 = (CParam *)0x602013ed;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar1 = God();
  pCStack_140 = local_94;
  pcStack_144 = "getSelectedChannel";
  pcStack_148 = "channelList";
  (**(code **)(*(int *)pIVar1 + 0x10))();
  pcStack_154 = (char *)0x60201434;
  CParam::GetValue(aCStack_a4,"p000",(int *)(auStack_124 + -8));
  pcStack_154 = (char *)0x60201450;
  puVar2 = (undefined4 *)LoadStr((int)(auStack_124 + -0x10));
  pcStack_154 = (char *)0x2792;
  uStack_14 = 1;
  puVar3 = (undefined4 *)LoadStr((int)(auStack_124 + -0xc));
  uStack_14 = 2;
  MsgBox((CWnd *)0x0,(char *)*puVar3,(char *)*puVar2,0,true,"dlgMsgBox");
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_124 + -0xc));
  uStack_14 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_124 + -0x10))
  ;
  CParam::CParam((CParam *)(auStack_124 + -4),false);
  uStack_14 = 3;
  pcStack_154 = (char *)0x602014c2;
  CParam::AddValue((CParam *)(auStack_124 + -4),"p119",0);
  pcStack_154 = (char *)0x602014ce;
  CParam::AddValue((CParam *)(auStack_124 + -4),"p133",0);
  pIVar1 = God();
  pcStack_154 = "showWindow";
  (**(code **)(*(int *)pIVar1 + 0x10))("channelList");
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("miniChannelListView","onClickRefreshBtn",&uStack_138,1);
  uStack_34 = uStack_34 & 0xffffff00;
  CParam::~CParam((CParam *)&pcStack_148);
  uStack_34 = 0xffffffff;
  CParam::~CParam(aCStack_c4);
  ExceptionList = pvStack_3c;
  iVar4 = __security_check_cookie(uStack_40 ^ (uint)&pcStack_154);
  return iVar4;
}



/* ---- Evt_ChannelListLobbyView_OnRefreshBtnClicked @ 60201600 size=289 ---- */

/* public: int __thiscall
   CChannelListLobbyController::Evt_ChannelListLobbyView_OnRefreshBtnClicked(struct IParam &) */

int __thiscall
CChannelListLobbyController::Evt_ChannelListLobbyView_OnRefreshBtnClicked
          (CChannelListLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  char *pcStack_a8;
  CParam *pCStack_a4;
  undefined1 auStack_98 [4];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1600  63
                       ?Evt_ChannelListLobbyView_OnRefreshBtnClicked@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b76c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_98;
  ExceptionList = &local_c;
  pCStack_a4 = (CParam *)0x60201643;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar1 = God();
  pCStack_a4 = local_94;
  pcStack_a8 = "getSelectedChannelGrp";
  (**(code **)(*(int *)pIVar1 + 0x10))("channelList");
  CParam::GetValue((CParam *)&pCStack_a4,"p000",(int *)&pcStack_a8);
  if (pcStack_a8 == (char *)0xffffffff) {
    uStack_14 = 0xffffffff;
    CParam::~CParam((CParam *)&pCStack_a4);
  }
  else {
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))("channelList","clearChannelList",Void_exref,1);
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))("channelList","connectChannelListServer",Void_exref,1);
    uStack_14 = 0xffffffff;
    CParam::~CParam((CParam *)&pCStack_a4);
  }
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)&pcStack_a8);
  return iVar2;
}



/* ---- Evt_ChannelListLobbyView_OnGrpListBtnClicked @ 60201730 size=38 ---- */

/* public: int __thiscall
   CChannelListLobbyController::Evt_ChannelListLobbyView_OnGrpListBtnClicked(struct IParam &) */

int __thiscall
CChannelListLobbyController::Evt_ChannelListLobbyView_OnGrpListBtnClicked
          (CChannelListLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x1730  61
                       ?Evt_ChannelListLobbyView_OnGrpListBtnClicked@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channelList","showGrplist",Void_exref,1);
  return 0;
}



/* ---- Evt_ChannelListLobbyView_OnHistoryBtnClicked @ 60201760 size=140 ---- */

/* public: int __thiscall
   CChannelListLobbyController::Evt_ChannelListLobbyView_OnHistoryBtnClicked(struct IParam &) */

int __thiscall
CChannelListLobbyController::Evt_ChannelListLobbyView_OnHistoryBtnClicked
          (CChannelListLobbyController *this,IParam *param_1)

{
  undefined1 uStack00000000;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  CChannelListLobbyController *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1760  62
                       ?Evt_ChannelListLobbyView_OnHistoryBtnClicked@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020b739;
  local_c = ExceptionList;
  this_00 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10;
  ExceptionList = &local_c;
  local_10 = this;
  (**(code **)(*(int *)param_1 + 0x58))(&DAT_6020c52c,&local_10,DAT_60215018 ^ (uint)&local_10);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack_4);
  local_c = (void *)0x0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_00,(char *)&uStack_4);
  AfxMessageBox(_uStack00000000,0,0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack00000000);
  ExceptionList = local_10;
  return 0;
}



/* ---- Evt_ChannelListLobbyView_OnChannelLstCllicked @ 602017f0 size=474 ---- */

/* public: int __thiscall
   CChannelListLobbyController::Evt_ChannelListLobbyView_OnChannelLstCllicked(struct IParam &) */

int __thiscall
CChannelListLobbyController::Evt_ChannelListLobbyView_OnChannelLstCllicked
          (CChannelListLobbyController *this,IParam *param_1)

{
  int iVar1;
  IGod *pIVar2;
  char *pcStack_1a8;
  IParam *pIStack_1a4;
  char *pcStack_198;
  code *pcStack_194;
  undefined4 uStack_190;
  char *pcStack_18c;
  char *pcStack_188;
  code *pcStack_184;
  undefined4 uStack_180;
  char *pcStack_17c;
  char *pcStack_178;
  code *pcStack_174;
  undefined4 uStack_170;
  char *pcStack_16c;
  char *pcStack_168;
  code *pcStack_164;
  undefined4 uStack_160;
  char *pcStack_15c;
  char *pcStack_158;
  code *pcStack_154;
  undefined4 uStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  code *pcStack_144;
  undefined4 uStack_140;
  char *pcStack_13c;
  char *pcStack_138;
  code *pcStack_134;
  undefined4 uStack_130;
  char *pcStack_12c;
  char *pcStack_128;
  IParam *pIStack_124;
  undefined4 uStack_120;
  undefined *puStack_11c;
  char *pcStack_118;
  code *pcStack_114;
  undefined4 uStack_110;
  undefined1 auStack_108 [100];
  uint uStack_a4;
  uint local_4;
  
                    /* 0x17f0  60
                       ?Evt_ChannelListLobbyView_OnChannelLstCllicked@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = DAT_60215018 ^ (uint)auStack_108;
  uStack_110 = 0x60201812;
  iVar1 = IS_SPLASHON();
  if (iVar1 != 0) {
    iVar1 = __security_check_cookie(local_4 ^ (uint)auStack_108);
    return iVar1;
  }
  uStack_110 = 0x60201838;
  pIVar2 = God();
  uStack_110 = 1;
  pcStack_114 = Void_exref;
  pcStack_118 = "closeInviteResponseDialog";
  puStack_11c = &DAT_6020c550;
  uStack_120 = 0x60201854;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_120 = 0x60201859;
  pIVar2 = God();
  uStack_120 = 1;
  pIStack_124 = param_1;
  pcStack_128 = "selectChannel";
  pcStack_12c = "channelList";
  uStack_130 = 0x6020186f;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_130 = 0x60201874;
  pIVar2 = God();
  uStack_130 = 0;
  pcStack_134 = Void_exref;
  pcStack_138 = "sendExitChannel";
  pcStack_13c = "channel";
  uStack_140 = 0x60201890;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_140 = 0x60201895;
  pIVar2 = God();
  uStack_140 = 1;
  pcStack_144 = Void_exref;
  pcStack_148 = "disconnectChannelServer";
  pcStack_14c = "channel";
  uStack_150 = 0x602018b1;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_150 = 0x602018b6;
  pIVar2 = God();
  uStack_150 = 1;
  pcStack_154 = Void_exref;
  pcStack_158 = "clearChannelInfo";
  pcStack_15c = "channel";
  uStack_160 = 0x602018d2;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_160 = 0x602018d7;
  pIVar2 = God();
  uStack_160 = 1;
  pcStack_164 = Void_exref;
  pcStack_168 = "clearMemberList";
  pcStack_16c = "channel";
  uStack_170 = 0x602018f3;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_170 = 0x602018f8;
  pIVar2 = God();
  uStack_170 = 1;
  pcStack_174 = Void_exref;
  pcStack_178 = "clearRoomList";
  pcStack_17c = "channel";
  uStack_180 = 0x60201914;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_180 = 0x60201919;
  pIVar2 = God();
  uStack_180 = 1;
  pcStack_184 = Void_exref;
  pcStack_188 = "clearItemState";
  pcStack_18c = "channel";
  uStack_190 = 0x60201935;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  uStack_190 = 0x6020193a;
  pIVar2 = God();
  uStack_190 = 1;
  pcStack_194 = Void_exref;
  pcStack_198 = "msnClearBuddyList";
  (**(code **)(*(int *)pIVar2 + 0x10))();
  CGameFinder::CGameFinder((CGameFinder *)&pcStack_198);
  iVar1 = CGameFinder::isTet4((CGameFinder *)&pcStack_198);
  if (iVar1 == 0) {
    iVar1 = CGameFinder::isTET4OBS((CGameFinder *)&pcStack_198);
    if (iVar1 == 0) {
      iVar1 = CGameFinder::isDuelgoTnmt((CGameFinder *)&pcStack_198);
      if (iVar1 == 0) goto LAB_60201995;
    }
  }
  pIStack_1a4 = (IParam *)0x60201995;
  Sleep(1000);
LAB_60201995:
  pIVar2 = God();
  pIStack_1a4 = param_1;
  pcStack_1a8 = "connectChannelServer";
  (**(code **)(*(int *)pIVar2 + 0x10))("channel");
  iVar1 = __security_check_cookie(uStack_a4 ^ (uint)&pcStack_1a8);
  return iVar1;
}



/* ---- Evt_ChannelListLobbyView_OnChannelGrpLstClicked @ 602019d0 size=117 ---- */

/* public: int __thiscall
   CChannelListLobbyController::Evt_ChannelListLobbyView_OnChannelGrpLstClicked(struct IParam &) */

int __thiscall
CChannelListLobbyController::Evt_ChannelListLobbyView_OnChannelGrpLstClicked
          (CChannelListLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x19d0  59
                       ?Evt_ChannelListLobbyView_OnChannelGrpLstClicked@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channelList","selectedChannelGrp",param_1,1);
  if (iVar2 < 0x40000000) {
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))("channelList","clearChannelList",Void_exref,1);
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))("channelList","connectChannelListServer",Void_exref,1);
    return 0;
  }
  return 0x4000000a;
}



/* ---- Net_SocketConnect @ 60201a50 size=406 ---- */

/* public: int __thiscall CChannelListLobbyController::Net_SocketConnect(struct IParam &) */

int __thiscall
CChannelListLobbyController::Net_SocketConnect(CChannelListLobbyController *this,IParam *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  CWinThread *pCVar5;
  CWnd *pCVar6;
  IGod *pIVar7;
  int iVar8;
  undefined1 auStack_b2 [6];
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  CParam aCStack_9c [116];
  uint uStack_28;
  void *pvStack_24;
  undefined4 uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a50  198
                       ?Net_SocketConnect@CChannelListLobbyController@@QAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020b6f4;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)&uStack_a0;
  uStack_ac = DAT_60215018 ^ (uint)(auStack_b2 + 10);
  ExceptionList = &local_c;
  (**(code **)(*(int *)param_1 + 100))();
  if (uStack_a0 == 0) {
    pIVar7 = God();
    (**(code **)(*(int *)pIVar7 + 0x10))("channelList","sendGetChannelList",Void_exref);
  }
  else {
    puVar3 = (undefined4 *)LoadStr((int)(aCStack_9c + -8));
    local_c = (void *)0x0;
    puVar4 = (undefined4 *)LoadStr((int)(auStack_b2 + 10));
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    pcVar1 = (char *)*puVar3;
    pcVar2 = (char *)*puVar4;
    pCVar5 = AfxGetThread();
    if (pCVar5 == (CWinThread *)0x0) {
      pCVar6 = (CWnd *)0x0;
    }
    else {
      pCVar6 = (CWnd *)(**(code **)(*(int *)pCVar5 + 0x7c))();
    }
    MsgBox(pCVar6,pcVar2,pcVar1,0,true,"dlgMsgBox");
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_b2 + 10));
    local_c = (void *)0xffffffff;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_9c + -8));
    CParam::CParam(aCStack_9c,false);
    local_c = (void *)0x2;
    CParam::AddValue(aCStack_9c,"p119",0);
    CParam::AddValue(aCStack_9c,"p133",0);
    pIVar7 = God();
    (**(code **)(*(int *)pIVar7 + 0x10))("channelList","showWindow",aCStack_9c);
    uStack_1c = 0xffffffff;
    CParam::~CParam((CParam *)&uStack_ac);
  }
  ExceptionList = pvStack_24;
  iVar8 = __security_check_cookie(uStack_28 ^ (uint)(auStack_b2 + -6));
  return iVar8;
}



/* ---- CGameLobbyController::Evt_Alarm_ExitAlarm @ 60201bf0 size=5 ---- */

/* public: int __thiscall CGameLobbyController::Evt_Alarm_ExitAlarm(struct IParam &) */

int __thiscall
CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm
          (CGameLobbyController *this,IParam *param_1)

{
                    /* 0x1bf0  56  ?Evt_Alarm_ExitAlarm@CGameLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  57  ?Evt_Alarm_TimeAlarm@CGameLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  58
                       ?Evt_ChannelListLobbyView_OnAutoJoinBtnClicked@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  68
                       ?Evt_ChannelView_OnClickAutoCreateRoomBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  70
                       ?Evt_ChannelView_OnClickChangeChannelBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  73
                       ?Evt_ChannelView_OnClickDirectStartBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  76
                       ?Evt_ChannelView_OnClickGuildCtrl@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  79
                       ?Evt_ChannelView_OnClickMemberListTabFilterBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  81
                       ?Evt_ChannelView_OnClickMyHomepageBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  87
                       ?Evt_ChannelView_OnClickSearchRoomBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  88
                       ?Evt_ChannelView_OnClickShowEmptyRoomBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  90
                       ?Evt_ChannelView_OnClickShowRoomNumOrderBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                       0x1bf0  95
                       ?Evt_Channel_OnActivateOff@CChannelLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  116
                       ?Evt_GameView_OnActivateOff@CGameLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  128
                       ?Evt_MiniChannelListView_OnJoinBtnClicked@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  150  ?Net_EnterRoomFail@CGameLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  173  ?Net_HanChatMessage@CHanChatController@@QAEHAAUIParam@@@Z
                       0x1bf0  174  ?Net_HanChatOneToOneChat@CHanChatController@@QAEHAAUIParam@@@Z
                       0x1bf0  175
                       ?Net_HanChatOneToOneChatEnd@CHanChatController@@QAEHAAUIParam@@@Z
                       0x1bf0  176
                       ?Net_HanChatOneToOneChatString@CHanChatController@@QAEHAAUIParam@@@Z
                       0x1bf0  177  ?Net_HanChatReject@CHanChatController@@QAEHAAUIParam@@@Z
                       0x1bf0  183
                       ?Net_MonitorGetMemberList@CChannelLobbyController@@UAEHAAUIParam@@@Z
                       0x1bf0  184
                       ?Net_MonitorGetMemberList@CGameLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  185
                       ?Net_MonitorTodayMatchInfo@CChannelLobbyController@@UAEHAAUIParam@@@Z
                       0x1bf0  186
                       ?Net_MonitorTodayMatchInfo@CGameLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  189  ?Net_PreStartGame@CGameLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  196  ?Net_SocketClose@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                       0x1bf0  199  ?Net_SocketSend@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  return 0;
}



/* ---- Net_GetChannelList @ 60201c00 size=900 ---- */

/* public: int __thiscall CChannelListLobbyController::Net_GetChannelList(struct IParam &) */

int __thiscall
CChannelListLobbyController::Net_GetChannelList(CChannelListLobbyController *this,IParam *param_1)

{
  byte bVar1;
  bool bVar2;
  IGod *pIVar3;
  int iVar4;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar5;
  undefined4 *puVar6;
  CWinThread *pCVar7;
  CWnd *pCVar8;
  SGlobalInfo *pSVar9;
  CMetpParserRet *pCVar10;
  undefined4 extraout_ECX;
  byte *pbVar11;
  char *unaff_EDI;
  NInfoTypes NVar12;
  char *pcVar13;
  byte *pbVar14;
  CParam aCStack_152 [2];
  char *pcStack_150;
  code *pcStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_130 [108];
  CParam aCStack_c4 [16];
  CParam aCStack_b4 [100];
  byte abStack_50 [20];
  undefined4 uStack_3c;
  char acStack_30 [4];
  undefined4 uStack_2c;
  uint uStack_20;
  void *pvStack_1c;
  int iStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1c00  159
                       ?Net_GetChannelList@CChannelListLobbyController@@QAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020bb9c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_130;
  uStack_144 = DAT_60215018 ^ (uint)(auStack_130 + -0x10);
  ExceptionList = &local_c;
  uStack_148 = 0x60201c47;
  pIVar3 = God();
  uStack_148 = 1;
  pcStack_14c = Void_exref;
  pcStack_150 = "disconnectChannelListServer";
  (**(code **)(*(int *)pIVar3 + 0x10))();
  SPLASH_OFF();
  iVar4 = GetResultKeyState(param_1);
  if (0x3fffffff < iVar4) {
    GetErrorString((IParam *)(auStack_130 + -0x10));
    iStack_14 = 0;
    if (*(int *)(unaff_EDI + -0xc) == 0) {
      pCVar5 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
               LoadStr((int)(auStack_130 + -0xc));
      iStack_14._0_1_ = 1;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                 (auStack_130 + -0x10),pCVar5);
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                 (auStack_130 + -0xc));
    }
    puVar6 = (undefined4 *)LoadStr((int)(auStack_130 + -0xc));
    iStack_14 = CONCAT31(iStack_14._1_3_,2);
    pcVar13 = (char *)*puVar6;
    pCVar7 = AfxGetThread();
    if (pCVar7 == (CWinThread *)0x0) {
      pCVar8 = (CWnd *)0x0;
    }
    else {
      pCVar8 = (CWnd *)(**(code **)(*(int *)pCVar7 + 0x7c))();
    }
    MsgBox(pCVar8,unaff_EDI,pcVar13,0,true,"dlgMsgBox");
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_130 + -0xc)
              );
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               (auStack_130 + -0x10));
    goto LAB_60201f5a;
  }
  PostBipLog(600);
  pbVar14 = &DAT_6020c63c;
  (**(code **)(*(int *)param_1 + 0x44))();
  pcVar13 = "k140e";
  NVar12 = 0;
  pSVar9 = GInfo();
  pCVar10 = SGlobalInfo::MetpInfo(pSVar9,NVar12);
  pcVar13 = CMetpParserRet::GetString(pCVar10,pcVar13);
  FUN_6020a640(extraout_ECX,8,acStack_30,"%s?",(char)pcVar13);
  CParam::CParam(aCStack_b4,false);
  pvStack_1c = (void *)0x3;
  pIVar3 = God();
  iVar4 = 1;
  (**(code **)(*(int *)pIVar3 + 0x10))("channelList","getSelectedChannelGrp",aCStack_b4);
  CParam::GetValue(aCStack_c4,"p000",(int *)&pcStack_150);
  uStack_2c = 0xffffffff;
  CParam::~CParam(aCStack_c4);
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x10))("channelList","fillChnlData",param_1,1);
  if (iVar4 == -1) {
    pcVar13 = "k24e";
    NVar12 = 0;
    pSVar9 = GInfo();
    pCVar10 = SGlobalInfo::MetpInfo(pSVar9,NVar12);
    bVar2 = CMetpParserRet::Query(pCVar10,pcVar13);
    if (bVar2) {
      pIVar3 = God();
      (**(code **)(*(int *)pIVar3 + 0x10))("channelList","manualSelectChannel",param_1,1);
    }
    else {
      pcVar13 = "k202e";
      NVar12 = 0;
      pSVar9 = GInfo();
      pCVar10 = SGlobalInfo::MetpInfo(pSVar9,NVar12);
      bVar2 = CMetpParserRet::Query(pCVar10,pcVar13);
      if (!bVar2) {
        pbVar11 = abStack_50;
        do {
          bVar1 = *pbVar14;
          bVar2 = bVar1 < *pbVar11;
          if (bVar1 != *pbVar11) {
LAB_60201eb5:
            iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
            goto LAB_60201eba;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar2 = bVar1 < pbVar11[1];
          if (bVar1 != pbVar11[1]) goto LAB_60201eb5;
          pbVar14 = pbVar14 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_60201eba:
        if (iVar4 != 0) {
          CParam::CParam(aCStack_152 + -6,false);
          uStack_3c = 4;
          CParam::AddValue(aCStack_152 + -6,"p119",0);
          pIVar3 = God();
          (**(code **)(*(int *)pIVar3 + 0x10))("channelList","showWindow",aCStack_152 + -6,1);
          uStack_3c = 0xffffffff;
          CParam::~CParam(aCStack_152 + -6);
          goto LAB_60201f37;
        }
      }
      pIVar3 = God();
      (**(code **)(*(int *)pIVar3 + 0x10))("channelList","autoSelectChannel",param_1,1);
    }
  }
LAB_60201f37:
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x10))("channel","processVisitFriend",Void_exref,1);
LAB_60201f5a:
  ExceptionList = pvStack_1c;
  uStack_144 = 0x60201f7b;
  iVar4 = __security_check_cookie(uStack_20 ^ (uint)(auStack_130 + -0x10));
  return iVar4;
}



/* ---- Evt_ChannelListLobby_OnShowWindow @ 60201f90 size=36 ---- */

/* public: int __thiscall CChannelListLobbyController::Evt_ChannelListLobby_OnShowWindow(struct
   IParam &) */

int __thiscall
CChannelListLobbyController::Evt_ChannelListLobby_OnShowWindow
          (CChannelListLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x1f90  65
                       ?Evt_ChannelListLobby_OnShowWindow@CChannelListLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channelList","clearChannelList",Void_exref,1);
  return iVar2;
}



/* ---- scalar_deleting_destructor @ 60201fc0 size=18 ---- */

void __thiscall
CMFunctor<CChannelListLobbyController>::scalar_deleting_destructor
          (CMFunctor<CChannelListLobbyController> *this)

{
  if (this != (CMFunctor<CChannelListLobbyController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CChannelListLobbyController>::~CMFunctor<CChannelListLobbyController>
                        */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- FUN_60201fe0 @ 60201fe0 size=21 ---- */

undefined4 FUN_60201fe0(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x60201ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
  return uVar2;
}



/* ---- ~CChannelLobbyController @ 60202000 size=11 ---- */

/* public: __thiscall CChannelLobbyController::CChannelLobbyController(class CChannelLobbyController
   const &) */

void __thiscall
CChannelLobbyController::~CChannelLobbyController
          (CChannelLobbyController *this,CChannelLobbyController *param_1)

{
                    /* 0x2000  3  ??0CChannelLobbyController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CChannelLobbyController::OnAttached @ 60202010 size=4545 ---- */

/* public: virtual bool __thiscall CChannelLobbyController::OnAttached(void) */

bool __thiscall
CChannelLobbyController::CChannelLobbyController__OnAttached(CChannelLobbyController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x2010  202  ?OnAttached@CChannelLobbyController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Channel_OnActivateOn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channel","onActivateOn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channel","onActivateOff",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnDblClickRoomList;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onDblClickRoomList",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickMyInfoAvatar;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onDblClickMemberList",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickChangeChannelBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickChangeChannel",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickAutoCreateRoomBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickAutoCreateRoomBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickCreateRoomBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickCreateRoomBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickJoinRoomBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickJoinRoomBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickViewRoomBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickViewRoomBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickMyInfoAvatar;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickRoomAvatar",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickMyInfoAvatar;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickMyInfoAvatar",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickDirectStartBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickDirectStartBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnGetItemState;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onGetItemState",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickShowItemWebBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickShowItemWebBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickMyHomepageBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickMyHomepageBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickHappyBeanBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickHappyBeanBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickGuildCtrl;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickGuildCtrl",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickMemberListTabFilterBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickRecommendedGameBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickRecommendedGameBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickEventBtn1;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickEventBtn1",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickSPCRoom;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelView","onClickSPCRoom",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_OnClickExitBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("mainFrameView","onClickExitBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_MainFrameView_OnAltF4KeyDown;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("mainFrameView","onAltF4KeyDown",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickInviteBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickInviteBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickWaitCancelBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickWaitCancelBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickResponseYNBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickResponseYNBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickAddFriendBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickAddFriendBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickBuyAvatarBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickBuyAvatarBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickAlbumBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickAlbumBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickMyHomepageBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickDetailInfoBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickSendMemoBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickSendMemoBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickGuildCtrl;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickGuildCtrl",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickInviteChnlToWebBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickInviteChnlToWebBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickSettingApplyBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickSettingApplyBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickInviteGameToChnlBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickInviteGameToChnlBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickAccuseBtnInChnl;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickAccuseBtnInChnl",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickComplaintAgreeBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"OnClickComplaintAgreeBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnChangedAvatarCombo;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_6020c550,"onChangedAvatarCombo",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Channel_SocketConnect;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","socketConnect",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Channel_EnterChannel;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca14,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206dc0;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca18,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206dd0;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca1c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206e20;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca24,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d20;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca2c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d70;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c200e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206e30;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca3c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d30;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca44,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d80;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca48,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206de0;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca4c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206e40;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca54,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d40;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca5c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d90;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c167e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206df0;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca6c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d00;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca74,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d50;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca7c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206da0;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020ca84,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206e00;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","socketClose",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetTicket;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c106e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d60;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c606e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206db0;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c605e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206e10;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c620e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetClientOptions;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c250e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ClientOptionChange;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channel","onClientOption",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetCouponCount;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c202e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_InviteFriendMission;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","gac7e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60206d10;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c500e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GaeaChannelPromotionData;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","gac1e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GaeaChannelPrizeData;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","gac3e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetAuth;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c600e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetUserId;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c601e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetMakeUserId;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c603e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CChannelLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetCheckUserId;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel","c604e",puVar2,1);
  return true;
}



/* ---- CChannelLobbyController::OnDetached @ 602031e0 size=22 ---- */

/* public: virtual bool __thiscall CChannelLobbyController::OnDetached(void) */

bool __thiscall
CChannelLobbyController::CChannelLobbyController__OnDetached(CChannelLobbyController *this)

{
                    /* 0x31e0  211  ?OnDetached@CChannelLobbyController@@UAE_NXZ */
  if (this != (CChannelLobbyController *)0x0) {
                    /* inlined destructor: CChannelLobbyController::~CChannelLobbyController */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- ~CChannelLobbyController @ 60203200 size=9 ---- */

/* public: __thiscall CChannelLobbyController::CChannelLobbyController(void) */

void __thiscall CChannelLobbyController::~CChannelLobbyController(CChannelLobbyController *this)

{
                    /* 0x3200  4  ??0CChannelLobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CChannelLobbyController @ 60203210 size=7 ---- */

/* public: __thiscall CChannelLobbyController::~CChannelLobbyController(void) */

void __thiscall CChannelLobbyController::~CChannelLobbyController(CChannelLobbyController *this)

{
                    /* 0x3210  22  ??1CChannelLobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- Evt_Channel_OnActivateOn @ 60203220 size=149 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Channel_OnActivateOn(struct IParam &) */

int __thiscall
CChannelLobbyController::Evt_Channel_OnActivateOn(CChannelLobbyController *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CWndProperty *this_00;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  bool bVar2;
  char *pcVar3;
  CChannelLobbyController *local_10;
  char *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x3220  96
                       ?Evt_Channel_OnActivateOn@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_6020b6a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  local_4 = 0;
  bVar2 = false;
  pSVar1 = GInfo();
  SGlobalInfo::GetGameId(pSVar1,bVar2);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_01,(char *)&local_10);
  pcVar3 = local_c;
  pSVar1 = GInfo();
  this_00 = SGlobalInfo::WndProperty(pSVar1);
  CWndProperty::SetWndProp(this_00,pcVar3);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = local_8;
  return 0;
}



/* ---- CChannelLobbyController::Net_GetMemberList @ 602032c0 size=92 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_GetMemberList(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_GetMemberList
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  IGod *pIVar2;
  
                    /* 0x32c0  166  ?Net_GetMemberList@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  iVar1 = IS_SPLASHON();
  if (iVar1 == 0) {
    FUN_602065a0();
    return 0x40000003;
  }
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("channel","fillMemberList",param_1,1);
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("channel","sendGetRoomList",Void_exref,1);
  return 0;
}



/* ---- SendGetItemState @ 60203320 size=194 ---- */

/* public: int __thiscall CChannelLobbyController::SendGetItemState(bool) */

int __thiscall CChannelLobbyController::SendGetItemState(CChannelLobbyController *this,bool param_1)

{
  IGod *pIVar1;
  int iVar2;
  char *pcStack_a4;
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3320  225  ?SendGetItemState@CChannelLobbyController@@QAEH_N@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b66c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pcStack_a4 = (char *)0x60203386;
  CParam::AddValue(local_94,"k64e",(uint)param_1);
  pIVar1 = God();
  pcStack_a4 = "sendGetItemState";
  (**(code **)(*(int *)pIVar1 + 0x10))("channel");
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)&pcStack_a4);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)&pcStack_a4);
  return iVar2;
}



/* ---- CChannelLobbyController::Net_GetRoomList @ 602033f0 size=71 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_GetRoomList(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_GetRoomList
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  IGod *pIVar2;
  
                    /* 0x33f0  168  ?Net_GetRoomList@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  iVar1 = IS_SPLASHON();
  if (iVar1 == 0) {
    FUN_602065a0();
    return 0x40000003;
  }
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("channel","fillRoomList",param_1,1);
  iVar1 = SendGetItemState(this,true);
  return iVar1;
}



/* ---- CChannelLobbyController::Net_GetItemState @ 60203440 size=577 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_GetItemState(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_GetItemState
          (CChannelLobbyController *this,IParam *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  SGlobalInfo *pSVar4;
  CItemManager *pCVar5;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar6;
  undefined4 *puVar7;
  CWinThread *pCVar8;
  CWnd *pCVar9;
  IGod *pIVar10;
  CChannelLobbyController *unaff_EBX;
  int unaff_EBP;
  undefined4 local_18;
  CChannelLobbyController *local_14;
  void *local_c;
  undefined1 *puStack_8;
  char *pcStack_4;
  
                    /* 0x3440  163  ?Net_GetItemState@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pcStack_4 = (char *)0xffffffff;
  puStack_8 = &LAB_6020bb3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = this;
  (**(code **)(*(int *)param_1 + 100))
            (&DAT_6020cb34,&local_18,DAT_60215018 ^ (int)register0x00000010 - 0x28U);
  if ((unaff_EBP == 0) || (iVar3 = IS_SPLASHON(), iVar3 != 0)) {
    SPLASH_OFF();
    iVar3 = GetResultKeyState(param_1);
    if (iVar3 < 0x40000000) {
      pIVar10 = God();
      (**(code **)(*(int *)pIVar10 + 0x10))("channel","fillItemState",param_1,1);
      if (unaff_EBP != 0) {
        pIVar10 = God();
        (**(code **)(*(int *)pIVar10 + 0x10))("messenger","msnSendGameInfo",Void_exref,1);
        pIVar10 = God();
        (**(code **)(*(int *)pIVar10 + 0x10))("channel","manualEnterRoom",Void_exref,1);
      }
      iVar3 = 0;
    }
    else {
      pSVar4 = GInfo();
      pCVar5 = SGlobalInfo::ItemManager(pSVar4);
      iVar3 = (**(code **)(*(int *)pCVar5 + 0x20))();
      pSVar4 = GInfo();
      pCVar5 = SGlobalInfo::ItemManager(pSVar4);
      (**(code **)(*(int *)pCVar5 + 0xc))();
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        pSVar4 = GInfo();
        pCVar5 = SGlobalInfo::ItemManager(pSVar4);
        (**(code **)(*(int *)pCVar5 + 0x1c))();
      }
      pSVar4 = GInfo();
      pCVar5 = SGlobalInfo::ItemManager(pSVar4);
      iVar3 = (**(code **)(*(int *)pCVar5 + 0x20))();
      if (iVar3 < 3) {
        SendGetItemState(unaff_EBX,true);
        pSVar4 = GInfo();
        pCVar5 = SGlobalInfo::ItemManager(pSVar4);
        (**(code **)(*(int *)pCVar5 + 0x1c))();
        iVar3 = 0x40000006;
      }
      else {
        pSVar4 = GInfo();
        pCVar5 = SGlobalInfo::ItemManager(pSVar4);
        (**(code **)(*(int *)pCVar5 + 0x24))();
        GetErrorString((IParam *)&pcStack_4);
        local_c = (void *)0x0;
        if (*(int *)(pcStack_4 + -0xc) == 0) {
          pCVar6 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
                   LoadStr((int)register0x00000010 + -0x1c);
          local_c._0_1_ = 1;
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_4,
                     pCVar6);
          local_c = (void *)((uint)local_c._1_3_ << 8);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                     ((int)register0x00000010 + -0x1c));
        }
        puVar7 = (undefined4 *)LoadStr((int)&local_18);
        pcVar2 = pcStack_4;
        local_c = (void *)CONCAT31(local_c._1_3_,2);
        pcVar1 = (char *)*puVar7;
        pCVar8 = AfxGetThread();
        if (pCVar8 == (CWinThread *)0x0) {
          pCVar9 = (CWnd *)0x0;
        }
        else {
          pCVar9 = (CWnd *)(**(code **)(*(int *)pCVar8 + 0x7c))();
        }
        MsgBox(pCVar9,pcVar2,pcVar1,0,true,"dlgMsgBox");
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_18);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_4);
        iVar3 = 0x40000006;
      }
    }
  }
  else {
    FUN_602065a0();
    iVar3 = 0x40000003;
  }
  ExceptionList = local_14;
  return iVar3;
}



/* ---- CChannelLobbyController::Net_GetMembershipState @ 60203690 size=36 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_GetMembershipState(struct IParam &)
    */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_GetMembershipState
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x3690  167
                       ?Net_GetMembershipState@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","fillMembershipState",param_1,1);
  return 0;
}



/* ---- CChannelLobbyController::Net_RoomInfo @ 602036c0 size=812 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_RoomInfo(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_RoomInfo
          (CChannelLobbyController *this,IParam *param_1)

{
  byte bVar1;
  CMemberData CVar2;
  bool bVar3;
  char cVar4;
  IGod *pIVar5;
  SGlobalInfo *pSVar6;
  CMetpParserRet *pCVar7;
  byte *pbVar8;
  int iVar9;
  CMemberData *pCVar10;
  CMemberData *pCVar11;
  CMetpParser *pCVar12;
  int unaff_ESI;
  byte *pbVar13;
  NInfoTypes NVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined4 uVar17;
  IParam *pIStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_13c [112];
  CParam aCStack_cc [156];
  undefined4 uStack_30;
  uint uStack_2c;
  void *pvStack_24;
  undefined4 uStack_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* 0x36c0  195  ?Net_RoomInfo@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_6020b628;
  local_14 = ExceptionList;
  local_1c = DAT_60215018 ^ (uint)auStack_13c;
  uStack_14c = (CMemberData *)(DAT_60215018 ^ (uint)(auStack_13c + -0xc));
  ExceptionList = &local_14;
  uStack_150 = 0x60203708;
  pIVar5 = God();
  uStack_150 = 1;
  pIStack_154 = param_1;
  (**(code **)(*(int *)pIVar5 + 0x10))("channel","updateRoomInfo");
  pcVar15 = "p036";
  NVar14 = 6;
  pSVar6 = GInfo();
  pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
  bVar3 = CMetpParserRet::Query(pCVar7,pcVar15);
  if (bVar3) {
    pcVar15 = "p036";
    NVar14 = 6;
    pbVar13 = &DAT_6020cbbc;
    pSVar6 = GInfo();
    pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
    pbVar8 = (byte *)CMetpParserRet::GetString(pCVar7,pcVar15);
    do {
      bVar1 = *pbVar8;
      bVar3 = bVar1 < *pbVar13;
      if (bVar1 != *pbVar13) {
LAB_60203783:
        iVar9 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
        goto LAB_60203788;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar3 = bVar1 < pbVar13[1];
      if (bVar1 != pbVar13[1]) goto LAB_60203783;
      pbVar8 = pbVar8 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar1 != 0);
    iVar9 = 0;
LAB_60203788:
    if (iVar9 == 0) {
      (**(code **)(*(int *)param_1 + 100))(&DAT_6020cbc4,auStack_13c + -8);
      puVar16 = &DAT_6020cbc4;
      NVar14 = 6;
      pSVar6 = GInfo();
      pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
      iVar9 = FUN_60206a70(pCVar7,puVar16);
      if (iVar9 == unaff_ESI) {
        puVar16 = &DAT_6020cb34;
        NVar14 = 6;
        pSVar6 = GInfo();
        pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
        iVar9 = FUN_60206a70(pCVar7,puVar16);
        if (iVar9 == 1) {
          uVar17 = 0;
          NVar14 = 6;
          pSVar6 = GInfo();
          pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
          FUN_60206b50(&DAT_6020cb34,pCVar7,uVar17);
          cVar4 = (**(code **)(*(int *)param_1 + 0x18))("k116e");
          if (cVar4 != '\0') {
            (**(code **)(*(int *)param_1 + 0x44))("k116e",&uStack_14c);
            pSVar6 = GInfo();
            pCVar10 = SGlobalInfo::MyData(pSVar6);
            if (pCVar10 != (CMemberData *)0x0) {
              pSVar6 = GInfo();
              pCVar11 = SGlobalInfo::MyData(pSVar6);
              pCVar11 = pCVar11 + 0x10;
              pCVar10 = uStack_14c;
              do {
                CVar2 = *pCVar10;
                bVar3 = (byte)CVar2 < (byte)*pCVar11;
                if (CVar2 != *pCVar11) {
LAB_60203864:
                  iVar9 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                  goto LAB_60203869;
                }
                if (CVar2 == (CMemberData)0x0) break;
                CVar2 = pCVar10[1];
                bVar3 = (byte)CVar2 < (byte)pCVar11[1];
                if (CVar2 != pCVar11[1]) goto LAB_60203864;
                pCVar10 = pCVar10 + 2;
                pCVar11 = pCVar11 + 2;
              } while (CVar2 != (CMemberData)0x0);
              iVar9 = 0;
LAB_60203869:
              if (iVar9 == 0) {
                CParam::CParam((CParam *)(auStack_13c + -8),false);
                NVar14 = 6;
                uStack_20 = 0;
                pSVar6 = GInfo();
                pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
                pCVar12 = CMetpParserRet::ParserPtr(pCVar7);
                FUN_60206c70((int *)pCVar12);
                NVar14 = 6;
                pSVar6 = GInfo();
                pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
                pCVar12 = CMetpParserRet::ParserPtr(pCVar7);
                FUN_60206c70((int *)pCVar12);
                NVar14 = 6;
                pSVar6 = GInfo();
                pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
                pCVar12 = CMetpParserRet::ParserPtr(pCVar7);
                FUN_60206c10((int *)pCVar12);
                CParam::AddValue((CParam *)(auStack_13c + -8),"k64e",0);
                pIVar5 = God();
                (**(code **)(*(int *)pIVar5 + 0x10))
                          ("channel","sendInviteGameToMember",auStack_13c + -8,1);
                uStack_30 = 0xffffffff;
                CParam::~CParam((CParam *)&pIStack_154);
                CParam::CParam(aCStack_cc,false);
                uStack_30 = 1;
                CParam::AddValue(aCStack_cc,"p064",1);
                NVar14 = 6;
                pSVar6 = GInfo();
                pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
                pCVar12 = CMetpParserRet::ParserPtr(pCVar7);
                FUN_60206c70((int *)pCVar12);
                pIVar5 = God();
                (**(code **)(*(int *)pIVar5 + 0x10))
                          (&DAT_6020c550,"showInviteWaitingDlg",aCStack_cc,1);
                local_1c = 0xffffffff;
                CParam::~CParam(aCStack_cc);
                goto LAB_602039c4;
              }
            }
          }
          NVar14 = 6;
          pSVar6 = GInfo();
          pCVar7 = SGlobalInfo::MetpInfo(pSVar6,NVar14);
          pCVar12 = CMetpParserRet::ParserPtr(pCVar7);
          (**(code **)(*(int *)pCVar12 + 0x94))();
        }
      }
    }
  }
LAB_602039c4:
  ExceptionList = pvStack_24;
  uStack_150 = 0x602039e6;
  iVar9 = __security_check_cookie(uStack_2c ^ (uint)&uStack_14c);
  return iVar9;
}



/* ---- CChannelLobbyController::Net_GetMemberInfo @ 602039f0 size=309 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_GetMemberInfo(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_GetMemberInfo
          (CChannelLobbyController *this,IParam *param_1)

{
  char *pcVar1;
  IParam *pIVar2;
  void *pvVar3;
  int iVar4;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar5;
  undefined4 *puVar6;
  CWinThread *pCVar7;
  CWnd *pCVar8;
  IGod *pIVar9;
  undefined1 auStack_1c [4];
  CChannelLobbyController *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pIVar2 = param_1;
                    /* 0x39f0  165  ?Net_GetMemberInfo@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b83b;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_60215018 ^ (uint)(auStack_1c + 4));
  ExceptionList = &local_c;
  local_10 = this;
  iVar4 = GetResultKeyState(param_1);
  if (iVar4 < 0x40000000) {
    pIVar9 = God();
    (**(code **)(*(int *)pIVar9 + 0x10))("channel","getMemInfo",pIVar2,1);
    ExceptionList = pvVar3;
    return 0;
  }
  GetErrorString((IParam *)&param_1);
  local_4 = 0;
  if (*(int *)(param_1 + -0xc) == 0) {
    pCVar5 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             LoadStr((int)&local_10);
    local_4._0_1_ = 1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1,pCVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  }
  puVar6 = (undefined4 *)LoadStr((int)&local_10);
  pIVar2 = param_1;
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar1 = (char *)*puVar6;
  pCVar7 = AfxGetThread();
  if (pCVar7 == (CWinThread *)0x0) {
    pCVar8 = (CWnd *)0x0;
  }
  else {
    pCVar8 = (CWnd *)(**(code **)(*(int *)pCVar7 + 0x7c))();
  }
  MsgBox(pCVar8,(char *)pIVar2,pcVar1,0,true,"dlgMsgBox");
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1);
  ExceptionList = local_c;
  return 0x40000007;
}



/* ---- CChannelLobbyController::Net_AddMember @ 60203b30 size=64 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_AddMember(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_AddMember
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  IGod *pIVar2;
  
                    /* 0x3b30  131  ?Net_AddMember@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  iVar1 = GetResultKeyState(param_1);
  if (iVar1 < 0x40000000) {
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))("channel","addMember",param_1,1);
    return 0;
  }
  return 0x40000008;
}



/* ---- CChannelLobbyController::Net_DeleteMember @ 60203b70 size=36 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_DeleteMember(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_DeleteMember
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x3b70  146  ?Net_DeleteMember@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","delMember",param_1,1);
  return 0;
}



/* ---- EnterRoom @ 60203ba0 size=547 ---- */

/* protected: int __thiscall CChannelLobbyController::EnterRoom(int,enum NEnterRoomType) */

int __thiscall
CChannelLobbyController::EnterRoom(CChannelLobbyController *this,int param_1,NEnterRoomType param_2)

{
  bool bVar1;
  SGlobalInfo *this_00;
  CAppRunningState *pCVar2;
  IGod *pIVar3;
  int iVar4;
  NEnterRoomType NVar5;
  undefined4 uVar6;
  undefined4 uStack_1cc;
  undefined1 auStack_1bc [4];
  CParam local_1b8 [120];
  CParam aCStack_140 [16];
  CParam aCStack_130 [136];
  CParam local_a8 [124];
  uint uStack_2c;
  void *pvStack_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
                    /* 0x3ba0  55  ?EnterRoom@CChannelLobbyController@@IAEHHW4NEnterRoomType@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_6020b5d4;
  local_14 = ExceptionList;
  local_1c = DAT_60215018 ^ (uint)auStack_1bc;
  uStack_1cc = DAT_60215018 ^ (uint)(auStack_1bc + -0xc);
  ExceptionList = &local_14;
  NVar5 = DAT_602157c0;
  uVar6 = DAT_602157c4;
  this_00 = GInfo();
  pCVar2 = SGlobalInfo::AppRunningState(this_00);
  bVar1 = CAppRunningState::IsRunning(pCVar2,NVar5,uVar6);
  if (bVar1) {
    CParam::CParam(local_a8,false);
    local_c = 0;
    CParam::AddValue(local_a8,"k64e","v8e");
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x20))(&DAT_6020c550,"onClickResponseYNBtn",local_a8,0);
    CParam::CParam(aCStack_140,false);
    local_1c = CONCAT31(local_1c._1_3_,1);
    CParam::AddValue(aCStack_140,"p064",0);
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))(&DAT_6020c550,"showInviteResponseDlg",aCStack_140,1);
    local_c = local_c & 0xffffff00;
    CParam::~CParam(aCStack_130);
    local_c = 0xffffffff;
    CParam::~CParam(local_a8);
  }
  CParam::CParam(local_1b8,false);
  local_c = 2;
  CParam::AddValue(local_1b8,"k42e",param_1);
  CParam::AddValue(local_1b8,"p036",param_2);
  pIVar3 = God();
  iVar4 = (**(code **)(*(int *)pIVar3 + 0x10))("channel","chkMyStatus",local_1b8,1);
  if (iVar4 < 0x40000000) {
    pIVar3 = God();
    iVar4 = (**(code **)(*(int *)pIVar3 + 0x10))
                      ("channel","fillEnterRoomParameter",auStack_1bc + -0xc,1);
    if (iVar4 < 0x40000000) {
      pIVar3 = God();
      (**(code **)(*(int *)pIVar3 + 0x10))("lobbyState","moveNext",auStack_1bc + -0xc,1);
    }
    local_1c = 0xffffffff;
    CParam::~CParam((CParam *)(auStack_1bc + -0xc));
  }
  else {
    local_1c = 0xffffffff;
    CParam::~CParam((CParam *)(auStack_1bc + -0xc));
  }
  ExceptionList = pvStack_24;
  iVar4 = __security_check_cookie(uStack_2c ^ (uint)&uStack_1cc);
  return iVar4;
}



/* ---- Evt_ChannelView_OnClickChangeChannelBtn @ 60203dd0 size=100 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickChangeChannelBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickChangeChannelBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  char *pcVar3;
  
                    /* 0x3dd0  69
                       ?Evt_ChannelView_OnClickChangeChannelBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020c550,"closeInviteResponseDialog",Void_exref,1);
  pIVar1 = God();
  pcVar3 = "closeAlarmDlg";
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020c550,"closeAlarmDlg",Void_exref,1);
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channelList","showWindow",pcVar3,1);
  return iVar2;
}



/* ---- Evt_ChannelView_OnDblClickRoomList @ 60203e40 size=221 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnDblClickRoomList(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnDblClickRoomList
          (CChannelLobbyController *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CRoomDataList *pCVar2;
  CRoomData *this_00;
  CSTLogFile *pCVar3;
  int iVar4;
  CSTLogFile *this_01;
  int unaff_ESI;
  char *pcVar5;
  CChannelLobbyController *local_c [2];
  
                    /* 0x3e40  93
                       ?Evt_ChannelView_OnDblClickRoomList@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_c[0] = this;
  (**(code **)(*(int *)param_1 + 100))(&DAT_6020cbc4,local_c);
  iVar4 = unaff_ESI;
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::RoomDataList(pSVar1);
  this_00 = CRoomDataList::FindRoomData(pCVar2,iVar4);
  if (this_00 == (CRoomData *)0x0) {
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::RoomDataList(pSVar1);
    iVar4 = *(int *)(pCVar2 + 0x14) - *(int *)(pCVar2 + 0x10) >> 2;
    pcVar5 = 
    "[CChannelLobbyController::Evt_ChannelView_OnDblClickRoomList] Room not found. ID=%d, room list size=%d"
    ;
    pCVar3 = CSTLogFile::GetLogFile();
    CSTLogFile::Write(this_01,(char *)pCVar3,pcVar5,unaff_ESI,iVar4);
    return 0x40000009;
  }
  iVar4 = CRoomData::GetState(this_00);
  switch(iVar4) {
  case 0:
    EnterRoom(this,unaff_ESI,0);
    return 0;
  case 1:
  case 2:
  case 4:
    EnterRoom(this,unaff_ESI,1);
    return 0;
  case 5:
    EnterRoom(this,unaff_ESI,2);
  }
  return 0;
}



/* ---- Evt_ChannelView_OnClickAutoCreateRoomBtn @ 60203f40 size=12 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickAutoCreateRoomBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickAutoCreateRoomBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0x3f40  67
                       ?Evt_ChannelView_OnClickAutoCreateRoomBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  iVar1 = EnterRoom(this,-1,6);
  return iVar1;
}



/* ---- Evt_ChannelView_OnClickCreateRoomBtn @ 60203f50 size=52 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickCreateRoomBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickCreateRoomBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  undefined4 local_4;
  
                    /* 0x3f50  71
                       ?Evt_ChannelView_OnClickCreateRoomBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  (**(code **)(*(int *)param_1 + 100))(&DAT_6020cbc4);
  iVar1 = EnterRoom(this,(int)&local_4,0);
  return iVar1;
}



/* ---- Evt_ChannelView_OnClickJoinRoomBtn @ 60203f90 size=52 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickJoinRoomBtn(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickJoinRoomBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  undefined4 local_4;
  
                    /* 0x3f90  78
                       ?Evt_ChannelView_OnClickJoinRoomBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  (**(code **)(*(int *)param_1 + 100))(&DAT_6020cbc4);
  iVar1 = EnterRoom(this,(int)&local_4,1);
  return iVar1;
}



/* ---- Evt_ChannelView_OnClickViewRoomBtn @ 60203fd0 size=52 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickViewRoomBtn(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickViewRoomBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  undefined4 local_4;
  
                    /* 0x3fd0  91
                       ?Evt_ChannelView_OnClickViewRoomBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  (**(code **)(*(int *)param_1 + 100))(&DAT_6020cbc4);
  iVar1 = EnterRoom(this,(int)&local_4,2);
  return iVar1;
}



/* ---- Evt_ChannelView_OnClickMyInfoAvatar @ 60204010 size=70 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickMyInfoAvatar(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickMyInfoAvatar
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x4010  82
                       ?Evt_ChannelView_OnClickMyInfoAvatar@CChannelLobbyController@@QAEHAAUIParam@@@Z
                       0x4010  85
                       ?Evt_ChannelView_OnClickRoomAvatar@CChannelLobbyController@@QAEHAAUIParam@@@Z
                       0x4010  92
                       ?Evt_ChannelView_OnDblClickMemberList@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  (**(code **)(*(int *)param_1 + 0x3c))(&DAT_6020cbf8,1);
  (**(code **)(*(int *)param_1 + 0x3c))(&DAT_6020cd10,0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020c550,"showMemberInfoDlg",param_1,1);
  return 0;
}



/* ---- Evt_ChannelView_OnClickShowItemWebBtn @ 60204060 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickShowItemWebBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickShowItemWebBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4060  89
                       ?Evt_ChannelView_OnClickShowItemWebBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020c550,"showItemWebDlg",param_1,1);
  return iVar2;
}



/* ---- Evt_ChannelView_OnClickHappyBeanBtn @ 60204090 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickHappyBeanBtn(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickHappyBeanBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4090  77
                       ?Evt_ChannelView_OnClickHappyBeanBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","linkHappyBeanpage",param_1,1);
  return iVar2;
}



/* ---- Evt_ChannelView_OnClickSPCRoom @ 602040c0 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickSPCRoom(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickSPCRoom
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x40c0  86
                       ?Evt_ChannelView_OnClickSPCRoom@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","linkSPCRoom",param_1,1);
  return iVar2;
}



/* ---- Evt_ChannelView_OnClickMyHomepageBtn @ 602040f0 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickMyHomepageBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickMyHomepageBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x40f0  80
                       ?Evt_ChannelView_OnClickMyHomepageBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                       0x40f0  107
                       ?Evt_Dialog_OnClickDetailInfoBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","linkHomepage",param_1,1);
  return iVar2;
}



/* ---- Evt_ChannelView_OnClickGuildCtrl @ 60204120 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickGuildCtrl(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickGuildCtrl
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4120  75
                       ?Evt_ChannelView_OnClickGuildCtrl@CChannelLobbyController@@QAEHAAUIParam@@@Z
                       0x4120  108
                       ?Evt_Dialog_OnClickGuildCtrl@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","linkGuildPage",param_1,1);
  return iVar2;
}



/* ---- Evt_Dialog_OnClickAddFriendBtn @ 60204150 size=54 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickAddFriendBtn(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickAddFriendBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  CWinThread *pCVar1;
  CWnd *pCVar2;
  int iVar3;
  
                    /* 0x4150  103
                       ?Evt_Dialog_OnClickAddFriendBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    pCVar2 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  iVar3 = MsgBox(pCVar2,"CChannelLobbyController\nEvt_Dialog_OnClickAddFriendBtn",&DAT_6020cd7c,0,
                 true,"dlgMsgBox");
  return iVar3;
}



/* ---- Evt_Dialog_OnClickBuyAvatarBtn @ 60204190 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickBuyAvatarBtn(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickBuyAvatarBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4190  105
                       ?Evt_Dialog_OnClickBuyAvatarBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","linkBuyAvatar",param_1,1);
  return iVar2;
}



/* ---- Evt_Dialog_OnClickAlbumBtn @ 602041c0 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickAlbumBtn(struct IParam &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickAlbumBtn(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x41c0  104
                       ?Evt_Dialog_OnClickAlbumBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","linkPhotoAlbum",param_1,1);
  return iVar2;
}



/* ---- Evt_Dialog_OnClickSendMemoBtn @ 602041f0 size=54 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickSendMemoBtn(struct IParam &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickSendMemoBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  CWinThread *pCVar1;
  CWnd *pCVar2;
  int iVar3;
  
                    /* 0x41f0  113
                       ?Evt_Dialog_OnClickSendMemoBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    pCVar2 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  iVar3 = MsgBox(pCVar2,"CChannelLobbyController\nEvt_Dialog_OnClickSendMemoBtn",&DAT_6020cd7c,0,
                 true,"dlgMsgBox");
  return iVar3;
}



/* ---- Evt_Dialog_OnClickInviteChnlToWebBtn @ 60204230 size=54 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickInviteChnlToWebBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickInviteChnlToWebBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  CWinThread *pCVar1;
  CWnd *pCVar2;
  int iVar3;
  
                    /* 0x4230  110
                       ?Evt_Dialog_OnClickInviteChnlToWebBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    pCVar2 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  iVar3 = MsgBox(pCVar2,"CChannelLobbyController\nEvt_Dialog_OnClickInviteChnlToWebBtn",
                 &DAT_6020cd7c,0,true,"dlgMsgBox");
  return iVar3;
}



/* ---- Evt_Dialog_OnClickSettingApplyBtn @ 60204270 size=70 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickSettingApplyBtn(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickSettingApplyBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  SGlobalInfo *this_00;
  CMemberData *pCVar1;
  IGod *pIVar2;
  int iVar3;
  
                    /* 0x4270  114
                       ?Evt_Dialog_OnClickSettingApplyBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  iVar3 = *(int *)param_1;
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::MyData(this_00);
  (**(code **)(iVar3 + 0x20))(&DAT_6020cbd4,pCVar1 + 0x10);
  pIVar2 = God();
  iVar3 = (**(code **)(*(int *)pIVar2 + 0x10))("messenger","msnSavePref",param_1,1);
  return iVar3;
}



/* ---- CChannelLobbyController::Net_DetectGhost @ 602042c0 size=34 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_DetectGhost(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_DetectGhost
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x42c0  148  ?Net_DetectGhost@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","detectGhost",param_1,1);
  return iVar2;
}



/* ---- CChannelLobbyController::Net_NoticeMessage @ 602042f0 size=34 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_NoticeMessage(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_NoticeMessage
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x42f0  187  ?Net_NoticeMessage@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","setNotice",param_1,1);
  return iVar2;
}



/* ---- Evt_ChannelView_OnClickDirectStartBtn @ 60204320 size=468 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickDirectStartBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickDirectStartBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  bool bVar1;
  SGlobalInfo *this_00;
  CAppRunningState *pCVar2;
  IGod *pIVar3;
  int iVar4;
  code *pcVar5;
  char *pcVar6;
  undefined4 uStack_128;
  undefined1 auStack_120 [8];
  CParam aCStack_118 [132];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x4320  72
                       ?Evt_ChannelView_OnClickDirectStartBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b580;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_120;
  uStack_128 = DAT_60215018 ^ (uint)(auStack_120 + -4);
  ExceptionList = &local_c;
  this_00 = GInfo();
  pCVar2 = SGlobalInfo::AppRunningState(this_00);
  bVar1 = CAppRunningState::IsRunning(pCVar2);
  if (bVar1) {
    CParam::CParam(local_94,false);
    local_4 = 0;
    CParam::AddValue(local_94,"k64e","v8e");
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x20))(&DAT_6020c550,"onClickResponseYNBtn");
    CParam::CParam((CParam *)&uStack_128,false);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    CParam::AddValue((CParam *)&uStack_128,"p064",0);
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))(&DAT_6020c550,"showInviteResponseDlg",&uStack_128,1);
    local_4 = local_4 & 0xffffff00;
    CParam::~CParam(aCStack_118);
    local_4 = 0xffffffff;
    CParam::~CParam(local_94);
  }
  pIVar3 = God();
  pcVar6 = (char *)0x1;
  pcVar5 = Void_exref;
  iVar4 = (**(code **)(*(int *)pIVar3 + 0x10))("channel","autoEnterRoom");
  if (iVar4 == 0x40000016) {
    LoadStr((int)(auStack_120 + -0x10));
    uStack_14 = 2;
    LoadStr((int)(auStack_120 + -0xc));
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    MsgBox((CWnd *)0x0,pcVar6,(char *)pcVar5,0,true,"dlgMsgBox");
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_120 + -0xc)
              );
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               (auStack_120 + -0x10));
  }
  ExceptionList = pvStack_1c;
  iVar4 = __security_check_cookie(uStack_20 ^ (uint)(auStack_120 + -0x10));
  return iVar4;
}



/* ---- Evt_ChannelView_OnGetItemState @ 60204500 size=13 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnGetItemState(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnGetItemState
          (CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0x4500  94
                       ?Evt_ChannelView_OnGetItemState@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  iVar1 = SendGetItemState(this,false);
  return iVar1;
}



/* ---- Evt_Dialog_OnClickInviteBtn @ 60204510 size=570 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickInviteBtn(struct IParam &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickInviteBtn(CChannelLobbyController *this,IParam *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  SGlobalInfo *pSVar4;
  CRoomDataList *pCVar5;
  int iVar6;
  CMetpParserRet *pCVar7;
  CMetpParser *pCVar8;
  code *pcVar9;
  int unaff_ESI;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  NInfoTypes NVar13;
  undefined1 *puVar14;
  undefined4 uStack_34;
  undefined1 local_30 [4];
  int local_2c;
  int *local_28;
  CChannelLobbyController *local_24;
  int *local_20 [3];
  int *local_14;
  int *local_10;
  undefined4 local_c;
  
  local_24 = this;
                    /* 0x4510  109
                       ?Evt_Dialog_OnClickInviteBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pSVar4 = GInfo();
  pCVar5 = SGlobalInfo::RoomDataList(pSVar4);
  FUN_602068a0(pCVar5 + 4,local_20);
  local_28 = local_14;
  if (local_10 < local_14) {
    _invalid_parameter_noinfo();
  }
  piVar1 = local_20[0];
  while( true ) {
    piVar2 = local_10;
    if (local_10 < local_14) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != local_20[0])) {
      _invalid_parameter_noinfo();
    }
    if (local_28 == piVar2) goto LAB_602045ce;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if (*(int **)(iVar6 + 0x10) <= local_28) {
      _invalid_parameter_noinfo();
    }
    iVar6 = *local_28;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 8) == 0)) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    if (*(int **)(iVar6 + 0x10) <= local_28) {
      _invalid_parameter_noinfo();
    }
    local_28 = local_28 + 1;
  }
  local_2c = *(int *)(iVar6 + 4);
  if (local_2c != 0) {
    if (local_14 != (int *)0x0) {
      operator_delete(local_14);
    }
    local_14 = (int *)0x0;
    local_10 = (int *)0x0;
    local_c = 0;
    operator_delete(local_20[0]);
    NVar13 = 6;
    pSVar4 = GInfo();
    pCVar7 = SGlobalInfo::MetpInfo(pSVar4,NVar13);
    pCVar8 = CMetpParserRet::ParserPtr(pCVar7);
    puVar14 = local_30;
    cVar3 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cbd4,puVar14);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*(int *)pCVar8 + 0x18))(&DAT_6020cbd4);
      if (cVar3 == '\0') {
        pcVar9 = *(code **)(*(int *)pCVar8 + 0x20);
      }
      else {
        pcVar9 = *(code **)(*(int *)pCVar8 + 0x70);
      }
      (*pcVar9)(&DAT_6020cbd4,unaff_ESI);
    }
    NVar13 = 6;
    pSVar4 = GInfo();
    pCVar7 = SGlobalInfo::MetpInfo(pSVar4,NVar13);
    pCVar8 = CMetpParserRet::ParserPtr(pCVar7);
    cVar3 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cbd8,local_30 + -8);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*(int *)pCVar8 + 0x18))(&DAT_6020cbd8);
      if (cVar3 == '\0') {
        pcVar9 = *(code **)(*(int *)pCVar8 + 0x20);
      }
      else {
        pcVar9 = *(code **)(*(int *)pCVar8 + 0x70);
      }
      (*pcVar9)(&DAT_6020cbd8,puVar14);
    }
    NVar13 = 6;
    iVar6 = unaff_ESI;
    pSVar4 = GInfo();
    pCVar7 = SGlobalInfo::MetpInfo(pSVar4,NVar13);
    FUN_60206b50(&DAT_6020cbc4,pCVar7,iVar6);
    pcVar11 = "v27e";
    pcVar10 = "p036";
    NVar13 = 6;
    pSVar4 = GInfo();
    pCVar7 = SGlobalInfo::MetpInfo(pSVar4,NVar13);
    CMetpParserRet::SetString(pCVar7,pcVar10,pcVar11);
    uVar12 = 1;
    NVar13 = 6;
    pSVar4 = GInfo();
    pCVar7 = SGlobalInfo::MetpInfo(pSVar4,NVar13);
    FUN_60206b50(&DAT_6020cb34,pCVar7,uVar12);
    EnterRoom(uStack_34,unaff_ESI,3);
    return 0;
  }
LAB_602045ce:
  if (local_14 != (int *)0x0) {
    operator_delete(local_14);
  }
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_c = 0;
  operator_delete(local_20[0]);
  return 0x40000010;
}



/* ---- Evt_Dialog_OnClickResponseYNBtn @ 60204760 size=289 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickResponseYNBtn(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickResponseYNBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  byte bVar1;
  SGlobalInfo *pSVar2;
  CAppRunningState *pCVar3;
  CMetpParserRet *pCVar4;
  IGod *pIVar5;
  byte *pbVar6;
  int iVar7;
  CMetpParser *pCVar8;
  bool bVar9;
  char *pcStack_34;
  CChannelLobbyController *pCStack_2c;
  NInfoTypes NVar10;
  char *pcVar11;
  undefined *puVar12;
  
                    /* 0x4760  112
                       ?Evt_Dialog_OnClickResponseYNBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pCStack_2c = (CChannelLobbyController *)0x60204785;
  pSVar2 = GInfo();
  pCStack_2c = (CChannelLobbyController *)0x6020478d;
  pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
  pCStack_2c = (CChannelLobbyController *)0x60204795;
  CAppRunningState::RemoveAppState(pCVar3);
  pcVar11 = "k3e";
  NVar10 = 6;
  pCStack_2c = (CChannelLobbyController *)0x6020479e;
  pSVar2 = GInfo();
  pCStack_2c = (CChannelLobbyController *)0x602047a8;
  pCVar4 = SGlobalInfo::MetpInfo(pSVar2,NVar10);
  CMetpParserRet::GetString(pCVar4,pcVar11);
  puVar12 = &DAT_6020cbc4;
  NVar10 = 6;
  pCStack_2c = (CChannelLobbyController *)0x602047bb;
  pSVar2 = GInfo();
  pCStack_2c = (CChannelLobbyController *)0x602047bf;
  pCVar4 = SGlobalInfo::MetpInfo(pSVar2,NVar10);
  FUN_60206a70(pCVar4,puVar12);
  pCStack_2c = (CChannelLobbyController *)0x602047dc;
  (**(code **)(*(int *)param_1 + 0x20))();
  pCStack_2c = (CChannelLobbyController *)0x602047e1;
  pIVar5 = God();
  pCStack_2c = (CChannelLobbyController *)0x1;
  pcStack_34 = "sendResponseInviteGame";
  (**(code **)(*(int *)pIVar5 + 0x10))("channel");
  pCStack_2c = (CChannelLobbyController *)0x0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cb34,&pCStack_2c);
  pbVar6 = &DAT_6020cea4;
  do {
    bVar1 = *pbVar6;
    bVar9 = bVar1 < (byte)*pcStack_34;
    if (bVar1 != *pcStack_34) {
LAB_60204840:
      iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_60204845;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar9 = bVar1 < (byte)pcStack_34[1];
    if (bVar1 != pcStack_34[1]) goto LAB_60204840;
    pbVar6 = pbVar6 + 2;
    pcStack_34 = pcStack_34 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_60204845:
  if (iVar7 == 0) {
    EnterRoom(pCStack_2c,(int)param_1,1);
  }
  NVar10 = 6;
  pSVar2 = GInfo();
  pCVar4 = SGlobalInfo::MetpInfo(pSVar2,NVar10);
  pCVar8 = CMetpParserRet::ParserPtr(pCVar4);
  (**(code **)(*(int *)pCVar8 + 0x94))();
  return 0;
}



/* ---- Evt_Dialog_OnClickWaitCancelBtn @ 60204890 size=508 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickWaitCancelBtn(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickWaitCancelBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  char cVar1;
  uint uVar2;
  SGlobalInfo *pSVar3;
  CMetpParserRet *pCVar4;
  CMetpParser *pCVar5;
  code *pcVar6;
  IGod *pIVar7;
  int iVar8;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_c0;
  undefined1 *puVar9;
  NInfoTypes NVar10;
  undefined1 *puVar11;
  undefined1 local_98 [4];
  CParam local_94 [92];
  uint uStack_38;
  void *pvStack_34;
  undefined4 uStack_2c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4890  115
                       ?Evt_Dialog_OnClickWaitCancelBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b51c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_98;
  uVar2 = DAT_60215018 ^ (uint)(local_98 + -0xc);
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  NVar10 = 6;
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar10);
  pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
  puVar11 = local_98;
  cVar1 = (**(code **)(*(int *)pCVar5 + 0x44))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(unaff_EBX + 0x18))();
    if (cVar1 == '\0') {
      pcVar6 = *(code **)(unaff_ESI + 0x20);
    }
    else {
      pcVar6 = *(code **)(unaff_ESI + 0x70);
    }
    uStack_c0 = (undefined1 *)0x6020494d;
    (*pcVar6)();
  }
  NVar10 = 6;
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar10);
  pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
  puVar9 = local_98 + -8;
  cVar1 = (**(code **)(*(int *)pCVar5 + 100))();
  if (cVar1 != '\0') {
    uStack_c0 = (undefined1 *)0x60204982;
    cVar1 = (**(code **)(unaff_EDI + 0x18))();
    uStack_c0 = puVar11;
    if (cVar1 == '\0') {
      pcVar6 = *(code **)(uVar2 + 0x3c);
    }
    else {
      pcVar6 = *(code **)(uVar2 + 0x8c);
    }
    (*pcVar6)(&DAT_6020cbc4);
    puVar11 = uStack_c0;
  }
  NVar10 = 6;
  uStack_c0 = (undefined1 *)0x602049ae;
  pSVar3 = GInfo();
  uStack_c0 = (undefined1 *)0x602049b2;
  pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar10);
  pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
  uStack_c0 = &DAT_6020cbd8;
  cVar1 = (**(code **)(*(int *)pCVar5 + 0x44))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(puVar11 + 0x18))(&DAT_6020cbd8);
    if (cVar1 == '\0') {
      pcVar6 = ram0x6020cbf4;
    }
    else {
      pcVar6 = (code *)s_showInviteResponseDlg_6020cc40._4_4_;
    }
    (*pcVar6)(&DAT_6020cbd8,puVar9);
  }
  CParam::AddValue((CParam *)(local_98 + -0x14),"k64e",1);
  NVar10 = 6;
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar10);
  pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
  (**(code **)(*(int *)pCVar5 + 0x94))();
  pIVar7 = God();
  (**(code **)(*(int *)pIVar7 + 0x10))("channel","sendInviteGameToMember",local_98 + -0x14,1);
  uStack_2c = 0xffffffff;
  CParam::~CParam((CParam *)(local_98 + -0x24));
  ExceptionList = pvStack_34;
  iVar8 = __security_check_cookie(uStack_38 ^ (uint)&uStack_c0);
  return iVar8;
}



/* ---- Evt_Dialog_OnChangedAvatarCombo @ 60204a90 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnChangedAvatarCombo(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnChangedAvatarCombo
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4a90  99
                       ?Evt_Dialog_OnChangedAvatarCombo@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","sendAvatarChange",param_1,1);
  return iVar2;
}



/* ---- CChannelLobbyController::Net_Banish @ 60204ac0 size=681 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_Banish(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_Banish
          (CChannelLobbyController *this,IParam *param_1)

{
  char cVar1;
  IGod *pIVar2;
  SGlobalInfo *pSVar3;
  IParam *pIVar4;
  CWinThread *pCVar5;
  HWND hWnd;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_e1;
  undefined *puVar6;
  int iVar7;
  undefined4 uStack_bc;
  char *pcStack_b8;
  CParam *pCStack_b4;
  undefined1 auStack_a0 [2];
  CParam aCStack_9e [10];
  CParam local_94 [60];
  uint uStack_58;
  void *pvStack_54;
  undefined4 uStack_24;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4ac0  135  ?Net_Banish@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020bae4;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_a0;
  ExceptionList = &local_c;
  pCStack_b4 = (CParam *)0x60204b0c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar2 = God();
  pCStack_b4 = local_94;
  pcStack_b8 = "queryState";
  uStack_bc = "lobbyState";
  (**(code **)(*(int *)pIVar2 + 0x10))();
  CParam::GetValue((CParam *)(auStack_a0 + -4),"p008",(char **)(auStack_a0 + -8));
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)(auStack_a0 + -4));
  pIVar2 = God();
  iVar7 = 1;
  (**(code **)(*(int *)pIVar2 + 0x10))();
  GetErrorString((IParam *)(auStack_a0 + -0x20));
  uStack_24 = 1;
  if (*(int *)(iVar7 + -0xc) == 0) {
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))();
    goto LAB_60204d35;
  }
  LoadStr((int)&uStack_bc);
  uStack_24 = CONCAT31(uStack_24._1_3_,2);
  pIVar2 = God();
  iVar7 = (**(code **)(*(int *)pIVar2 + 0x10))();
  if (iVar7 < 1) {
    MsgBox((CWnd *)0x0,(char *)0x1,"channel",0x30,true,"dlgMsgBox");
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))("mainFrame");
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_a0 + -0x44)
              );
    goto LAB_60204d35;
  }
  pSVar3 = GInfo();
  pIVar4 = SGlobalInfo::GData(pSVar3);
  puVar6 = &DAT_6020cee8;
  cVar1 = (**(code **)(*(int *)pIVar4 + 0x18))();
  if (cVar1 != '\0') {
    pSVar3 = GInfo();
    pIVar4 = SGlobalInfo::GData(pSVar3);
    (**(code **)(*(int *)pIVar4 + 0x90))();
  }
  pSVar3 = GInfo();
  pIVar4 = SGlobalInfo::GData(pSVar3);
  cVar1 = (**(code **)(*(int *)pIVar4 + 0x18))();
  if (cVar1 != '\0') {
    pSVar3 = GInfo();
    pIVar4 = SGlobalInfo::GData(pSVar3);
    (**(code **)(*(int *)pIVar4 + 0x90))();
  }
  pSVar3 = GInfo();
  pIVar4 = SGlobalInfo::GData(pSVar3);
  (**(code **)(*(int *)pIVar4 + 0x20))(&DAT_6020ceec);
  pSVar3 = GInfo();
  pIVar4 = SGlobalInfo::GData(pSVar3);
  (**(code **)(*(int *)pIVar4 + 0x20))(&DAT_6020cee8,puVar6);
  pCVar5 = AfxGetThread();
  if (pCVar5 == (CWinThread *)0x0) {
LAB_60204ca6:
    hWnd = (HWND)0x0;
  }
  else {
    iVar7 = (**(code **)(*(int *)pCVar5 + 0x7c))();
    if (iVar7 == 0) goto LAB_60204ca6;
    hWnd = *(HWND *)(iVar7 + 0x20);
  }
  PostMessageA(hWnd,0x432,0,0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_a0 + -0x44));
LAB_60204d35:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_a0 + -0x48));
  ExceptionList = pvStack_54;
  iVar7 = __security_check_cookie(uStack_58 ^ (uint)(auStack_a0 + -0x48));
  return iVar7;
}



/* ---- CChannelLobbyController::Net_ReserveBanish @ 60204d70 size=211 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_ReserveBanish(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_ReserveBanish
          (CChannelLobbyController *this,IParam *param_1)

{
  char cVar1;
  SGlobalInfo *pSVar2;
  IParam *pIVar3;
  CExitReason *pCVar4;
  CGlobalGameEvent *this_00;
  CFunctor *this_01;
  IGod *pIVar5;
  undefined4 unaff_EDI;
  int *unaff_retaddr;
  IFunctor *pIVar6;
  undefined1 auStack_2 [2];
  
                    /* 0x4d70  192  ?Net_ReserveBanish@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pSVar2 = GInfo();
  pIVar3 = SGlobalInfo::GData(pSVar2);
  cVar1 = (**(code **)(*(int *)pIVar3 + 0x18))(&DAT_6020cee8);
  if (cVar1 != '\0') {
    pSVar2 = GInfo();
    pIVar3 = SGlobalInfo::GData(pSVar2);
    (**(code **)(*(int *)pIVar3 + 0x90))(&DAT_6020cee8);
  }
  (**(code **)(*unaff_retaddr + 0x44))(&DAT_6020cee8,auStack_2 + -6);
  pSVar2 = GInfo();
  pIVar3 = SGlobalInfo::GData(pSVar2);
  (**(code **)(*(int *)pIVar3 + 0x20))(&DAT_6020cee8,unaff_EDI);
  pSVar2 = GInfo();
  pCVar4 = SGlobalInfo::ExitReason(pSVar2);
  if ((*(int *)pCVar4 != 0xb) && (*(int *)pCVar4 != 10)) {
    *(undefined4 *)pCVar4 = 10;
  }
  pIVar6 = (IFunctor *)0x0;
  pSVar2 = GInfo();
  this_00 = SGlobalInfo::GameEvent(pSVar2);
  this_01 = CGlobalGameEvent::FntShowEndingPopupDlg(this_00);
  CFunctor::operator=(this_01,pIVar6);
  pIVar5 = God();
  (**(code **)(*(int *)pIVar5 + 0x20))(&DAT_6020ced0,"onReserveBanish",unaff_retaddr,0);
  return 0;
}



/* ---- CChannelLobbyController::Net_AvatarChange @ 60204e50 size=34 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_AvatarChange(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_AvatarChange
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4e50  133  ?Net_AvatarChange@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","avatarChange",param_1,1);
  return iVar2;
}



/* ---- CChannelLobbyController::Net_InviteGameToMember @ 60204e80 size=833 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_InviteGameToMember(struct IParam &)
    */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_InviteGameToMember
          (CChannelLobbyController *this,IParam *param_1)

{
  bool bVar1;
  char cVar2;
  SGlobalInfo *pSVar3;
  CMetpParserRet *pCVar4;
  CMetpParser *pCVar5;
  IGod *pIVar6;
  CAppRunningState *pCVar7;
  code *pcVar8;
  int iVar9;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar10;
  char *pcVar11;
  NInfoTypes NVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined1 *puStack_1bc;
  undefined4 uStack_1b8;
  CParam aCStack_1a4 [2];
  CParam CStack_1a2;
  undefined1 local_1a1 [129];
  CParam aCStack_120 [116];
  CParam aCStack_ac [16];
  CParam aCStack_9c [116];
  uint uStack_28;
  void *pvStack_24;
  undefined4 uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4e80  180
                       ?Net_InviteGameToMember@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020b4d4;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)aCStack_1a4;
  uStack_1b8 = DAT_60215018 ^ (uint)(aCStack_1a4 + -0x10);
  ExceptionList = &local_c;
  puStack_1bc = local_1a1;
  (**(code **)(*(int *)param_1 + 0x68))(&DAT_6020cb34);
  if ((char)((uint)unaff_EBP >> 0x18) == '\x01') {
    NVar12 = 6;
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar12);
    pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
    (**(code **)(*(int *)pCVar5 + 0x94))();
    CParam::CParam(aCStack_9c,false);
    local_c = (void *)0x0;
    CParam::AddValue(aCStack_9c,"p064",0);
    pIVar6 = God();
    (**(code **)(*(int *)pIVar6 + 0x10))(&DAT_6020c550,"showInviteResponseDlg",aCStack_9c,1);
    uStack_1c = 0xffffffff;
    CParam::~CParam(aCStack_ac);
  }
  else {
    uVar10 = DAT_602157d0;
    uVar13 = DAT_602157d4;
    pSVar3 = GInfo();
    pCVar7 = SGlobalInfo::AppRunningState(pSVar3);
    bVar1 = CAppRunningState::IsRunning(pCVar7,uVar10,uVar13);
    if (!bVar1) {
      uVar10 = DAT_602157c0;
      uVar13 = DAT_602157c4;
      pSVar3 = GInfo();
      pCVar7 = SGlobalInfo::AppRunningState(pSVar3);
      bVar1 = CAppRunningState::IsRunning(pCVar7,uVar10,uVar13);
      if (!bVar1) {
        NVar12 = 6;
        pSVar3 = GInfo();
        pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar12);
        pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
        (**(code **)(*(int *)pCVar5 + 0x94))();
        NVar12 = 6;
        pSVar3 = GInfo();
        pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar12);
        CMetpParserRet::ParserPtr(pCVar4);
        FUN_60206c70((int *)param_1);
        NVar12 = 6;
        pSVar3 = GInfo();
        pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar12);
        CMetpParserRet::ParserPtr(pCVar4);
        FUN_60206c10((int *)param_1);
        NVar12 = 6;
        pSVar3 = GInfo();
        pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar12);
        CMetpParserRet::ParserPtr(pCVar4);
        FUN_60206c70((int *)param_1);
        pcVar14 = "v28e";
        pcVar11 = "p036";
        NVar12 = 6;
        pSVar3 = GInfo();
        pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar12);
        CMetpParserRet::SetString(pCVar4,pcVar11,pcVar14);
        CParam::CParam(aCStack_120,false);
        local_c = (void *)0x2;
        CParam::AddValue(aCStack_120,"p064",1);
        CParam::AddValue(aCStack_120,"p169",0);
        FUN_60206c70((int *)param_1);
        pIVar6 = God();
        (**(code **)(*(int *)pIVar6 + 0x10))(&DAT_6020c550,"showInviteResponseDlg",aCStack_120,1);
        uStack_1c = 0xffffffff;
        CParam::~CParam(aCStack_120);
        goto LAB_60205197;
      }
    }
    CParam::CParam(aCStack_1a4,false);
    local_c = (void *)0x1;
    cVar2 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cbd4,aCStack_1a4 + -4);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(unaff_EBP + 0x18))(&DAT_6020cbd4);
      if (cVar2 == '\0') {
        pcVar8 = *(code **)(unaff_ESI + 0x20);
      }
      else {
        pcVar8 = *(code **)(unaff_ESI + 0x70);
      }
      (*pcVar8)(&DAT_6020cbd4,unaff_EDI);
    }
    CParam::AddValue(aCStack_1a4 + -8,"k64e","v8e");
    pIVar6 = God();
    (**(code **)(*(int *)pIVar6 + 0x10))("channel","sendResponseInviteGame",aCStack_1a4 + -8,1);
    uStack_1c = 0xffffffff;
    CParam::~CParam(aCStack_1a4 + -0x10);
  }
LAB_60205197:
  ExceptionList = pvStack_24;
  iVar9 = __security_check_cookie(uStack_28 ^ (uint)&puStack_1bc);
  return iVar9;
}



/* ---- Evt_OnClickExitBtn @ 602051d0 size=300 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_OnClickExitBtn(struct IParam &) */

int __thiscall
CChannelLobbyController::Evt_OnClickExitBtn(CChannelLobbyController *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CGlobalGameEvent *pCVar2;
  CFunctor *pCVar3;
  IFunctor *pIVar4;
  IGod *pIVar5;
  int iVar6;
  IParam *pIVar7;
  undefined1 auStack_a8 [4];
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x51d0  129  ?Evt_OnClickExitBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b47c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_94;
  ExceptionList = &local_c;
  iVar6 = 0;
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::GameEvent(pSVar1);
  pCVar3 = CGlobalGameEvent::FntShowEndingPopupDlg(pCVar2);
  pIVar4 = CFunctor::Get(pCVar3);
  if (pIVar4 != (IFunctor *)0x0) {
    pIVar7 = (IParam *)Void_exref;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::GameEvent(pSVar1);
    pCVar3 = CGlobalGameEvent::FntShowEndingPopupDlg(pCVar2);
    iVar6 = CFunctor::Call(pCVar3,pIVar7);
  }
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p154",iVar6);
  if (iVar6 != 9) {
    pIVar5 = God();
    (**(code **)(*(int *)pIVar5 + 0x10))("hanChat","clearChatBuffer",Void_exref,1);
    pIVar5 = God();
    (**(code **)(*(int *)pIVar5 + 0x10))("channel","exitProgramByChnl",auStack_a8 + 4,1);
  }
  local_4 = 0xffffffff;
  CParam::~CParam(local_94);
  ExceptionList = local_c;
  iVar6 = __security_check_cookie(local_10 ^ (uint)local_94);
  return iVar6;
}



/* ---- Evt_MainFrameView_OnAltF4KeyDown @ 60205300 size=156 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_MainFrameView_OnAltF4KeyDown(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_MainFrameView_OnAltF4KeyDown
          (CChannelLobbyController *this,IParam *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  IGod *pIVar4;
  CSTLogFile *pCVar5;
  char *pcVar6;
  CSTLogFile *this_00;
  bool bVar7;
  byte *pbVar8;
  undefined4 local_4;
  
                    /* 0x5300  122
                       ?Evt_MainFrameView_OnAltF4KeyDown@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pbVar8 = &DAT_6020cec8;
  local_4 = 0;
  cVar2 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cec8,&local_4);
  if (cVar2 != '\0') {
    pcVar6 = "channel";
    do {
      bVar1 = *pcVar6;
      bVar7 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_60205350:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_60205355;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar6[1];
      bVar7 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_60205350;
      pcVar6 = pcVar6 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_60205355:
    if (iVar3 == 0) {
      pIVar4 = God();
      iVar3 = (**(code **)(*(int *)pIVar4 + 0x20))("mainFrameView","onClickExitBtn",Void_exref,0);
      return iVar3;
    }
  }
  pcVar6 = 
  "[CChannelLobbyController::Evt_MainFrameView_OnAltF4KeyDown] keyState Not Found in param.";
  pCVar5 = CSTLogFile::GetLogFile();
  CSTLogFile::Write(this_00,(char *)pCVar5,pcVar6);
  return 0x40000017;
}



/* ---- CChannelLobbyController::Net_ResponseInviteGame @ 602053a0 size=223 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_ResponseInviteGame(struct IParam &)
    */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_ResponseInviteGame
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  SGlobalInfo *this_00;
  CMetpParserRet *this_01;
  CMetpParser *pCVar2;
  int iVar3;
  NInfoTypes NVar4;
  char *pcStack_a4;
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x53a0  193
                       ?Net_ResponseInviteGame@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b66c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pcStack_a4 = (char *)0x602053ff;
  CParam::AddValue(local_94,"p064",0);
  pIVar1 = God();
  pcStack_a4 = "showInviteWaitingDlg";
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020c550);
  NVar4 = 6;
  this_00 = GInfo();
  this_01 = SGlobalInfo::MetpInfo(this_00,NVar4);
  pCVar2 = CMetpParserRet::ParserPtr(this_01);
  (**(code **)(*(int *)pCVar2 + 0x94))();
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)&pcStack_a4);
  ExceptionList = pvStack_1c;
  iVar3 = __security_check_cookie(uStack_20 ^ (uint)&pcStack_a4);
  return iVar3;
}



/* ---- Evt_Dialog_OnClickInviteGameToChnlBtn @ 60205480 size=922 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickInviteGameToChnlBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickInviteGameToChnlBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  char cVar1;
  SGlobalInfo *pSVar2;
  CMetpParserRet *pCVar3;
  CMetpParser *pCVar4;
  IGod *pIVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  int *piStack_160;
  undefined *puStack_15c;
  undefined *puStack_158;
  undefined *puStack_154;
  undefined1 *puVar9;
  undefined1 *puVar10;
  NInfoTypes NVar11;
  undefined1 *puVar12;
  undefined1 local_120 [2];
  undefined1 auStack_11e [62];
  int iStack_e0;
  int aiStack_dc [2];
  CParam aCStack_d4 [132];
  uint uStack_50;
  void *pvStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x5480  111
                       ?Evt_Dialog_OnClickInviteGameToChnlBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020b438;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_120;
  ExceptionList = &local_c;
  NVar11 = 6;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar11);
  pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
  puVar12 = local_120;
  cVar1 = (**(code **)(*(int *)param_1 + 0x44))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(int *)pCVar4 + 0x18))();
    if (cVar1 == '\0') {
      pcVar7 = *(code **)(*(int *)pCVar4 + 0x20);
    }
    else {
      pcVar7 = *(code **)(*(int *)pCVar4 + 0x70);
    }
    (*pcVar7)();
  }
  NVar11 = 6;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar11);
  pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
  puVar10 = local_120 + -8;
  cVar1 = (**(code **)(*(int *)param_1 + 0x44))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(int *)pCVar4 + 0x18))();
    if (cVar1 == '\0') {
      pcVar7 = *(code **)(*(int *)pCVar4 + 0x20);
    }
    else {
      pcVar7 = *(code **)(*(int *)pCVar4 + 0x70);
    }
    puStack_154 = (undefined *)0x60205574;
    (*pcVar7)();
  }
  NVar11 = 6;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar11);
  pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
  puVar9 = local_120 + -0x10;
  cVar1 = (**(code **)(*(int *)param_1 + 100))();
  if (cVar1 != '\0') {
    puStack_154 = (undefined *)0x602055ab;
    cVar1 = (**(code **)(*(int *)pCVar4 + 0x18))();
    puStack_154 = &DAT_6020cbd4;
    puStack_158 = &DAT_6020cbc4;
    if (cVar1 == '\0') {
      pcVar7 = *(code **)(*(int *)pCVar4 + 0x3c);
    }
    else {
      pcVar7 = *(code **)(*(int *)pCVar4 + 0x8c);
    }
    puStack_15c = (undefined *)0x602055ca;
    (*pcVar7)();
  }
  puStack_154 = (undefined *)0x602055d6;
  CParam::CParam((CParam *)(local_120 + -0x10),false);
  uStack_1c = 0;
  puStack_154 = &DAT_6020cbd4;
  puStack_158 = (undefined *)0x602055f4;
  cVar1 = (**(code **)(*(int *)param_1 + 0x44))();
  if (cVar1 != '\0') {
    puStack_158 = &DAT_6020cbd4;
    puStack_15c = (undefined *)0x6020560a;
    cVar1 = (**(code **)(puVar12 + 0x18))();
    if (cVar1 == '\0') {
      pcVar7 = ram0x6020cbf4;
    }
    else {
      pcVar7 = (code *)s_showInviteResponseDlg_6020cc40._4_4_;
    }
    puStack_15c = &DAT_6020cbd8;
    piStack_160 = (int *)&DAT_6020cbd4;
    (*pcVar7)();
  }
  puStack_158 = local_120 + -0x20;
  puStack_15c = &DAT_6020cbd8;
  piStack_160 = (int *)0x60205642;
  cVar1 = (**(code **)(*(int *)param_1 + 0x44))();
  if (cVar1 != '\0') {
    piStack_160 = (int *)&DAT_6020cbd8;
    cVar1 = (**(code **)(puVar10 + 0x18))();
    if (cVar1 == '\0') {
      pcVar7 = _DAT_6020cbf8;
    }
    else {
      pcVar7 = (code *)s_showInviteResponseDlg_6020cc40._8_4_;
    }
    (*pcVar7)(&DAT_6020cbd8,&DAT_6020cbc4);
  }
  piStack_160 = (int *)(local_120 + -0x28);
  cVar1 = (**(code **)(*(int *)param_1 + 100))(&DAT_6020cbc4);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(puVar9 + 0x18))(&DAT_6020cbc4);
    if (cVar1 == '\0') {
      pcVar7 = (code *)s_showInviteWaitingDlg_6020cc00._0_4_;
    }
    else {
      pcVar7 = (code *)s_showInviteResponseDlg_6020cc40._16_4_;
    }
    (*pcVar7)(&DAT_6020cbc4,puStack_154);
  }
  CParam::AddValue((CParam *)(local_120 + -0x28),"k64e",0);
  pIVar5 = God();
  uVar8 = 1;
  iVar6 = (**(code **)(*(int *)pIVar5 + 0x10))
                    ("channel","sendInviteGameToMember",local_120 + -0x28,1);
  if (iVar6 < 0x40000000) {
    uStack_44 = 0xffffffff;
    CParam::~CParam((CParam *)&puStack_158);
    CParam::CParam(aCStack_d4,false);
    uStack_44 = 1;
    CParam::AddValue(aCStack_d4,"p064",1);
    cVar1 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cbd4,&puStack_15c);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(aiStack_dc[0] + 0x18))(&DAT_6020cbd4);
      if (cVar1 == '\0') {
        pcVar7 = *(code **)(iStack_e0 + 0x20);
      }
      else {
        pcVar7 = *(code **)(iStack_e0 + 0x70);
      }
      (*pcVar7)(&DAT_6020cbd4,uVar8);
    }
    pIVar5 = God();
    (**(code **)(*(int *)pIVar5 + 0x10))(&DAT_6020c550,"showInviteWaitingDlg",aiStack_dc,1);
    uStack_44 = 0xffffffff;
    CParam::~CParam(aCStack_d4);
  }
  else {
    uStack_44 = 0xffffffff;
    CParam::~CParam((CParam *)&puStack_158);
  }
  ExceptionList = pvStack_4c;
  iVar6 = __security_check_cookie(uStack_50 ^ (uint)&piStack_160);
  return iVar6;
}



/* ---- Evt_Dialog_OnClickAccuseBtnInChnl @ 60205820 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickAccuseBtnInChnl(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickAccuseBtnInChnl
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5820  101
                       ?Evt_Dialog_OnClickAccuseBtnInChnl@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","sendAccuseUser",param_1,1);
  return iVar2;
}



/* ---- Evt_Dialog_OnClickComplaintAgreeBtn @ 60205850 size=191 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_Dialog_OnClickComplaintAgreeBtn(struct IParam
   &) */

int __thiscall
CChannelLobbyController::Evt_Dialog_OnClickComplaintAgreeBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5850  106
                       ?Evt_Dialog_OnClickComplaintAgreeBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b3ec;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p258",1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","onSendClientOptions");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar2;
}



/* ---- CChannelLobbyController::Net_GameReport @ 60205910 size=36 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_GameReport(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_GameReport
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x5910  155  ?Net_GameReport@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","refillMemberList",param_1,1);
  return 0;
}



/* ---- CChannelLobbyController::Net_SocketClose @ 60205940 size=489 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_SocketClose(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_SocketClose
          (CChannelLobbyController *this,IParam *param_1)

{
  char cVar1;
  SGlobalInfo *this_00;
  CMetpParserRet *this_01;
  CMetpParser *pCVar2;
  IGod *pIVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  IParam *pIStack_144;
  undefined4 uStack_140;
  NInfoTypes NVar7;
  undefined4 uStack_130;
  undefined1 auStack_120 [104];
  CParam aCStack_b8 [32];
  CParam aCStack_98 [100];
  uint uStack_34;
  void *pvStack_30;
  uint uStack_28;
  undefined1 uStack_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x5940  197  ?Net_SocketClose@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020b3b0;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_120;
  uStack_130 = DAT_60215018 ^ (uint)(auStack_120 + -0xc);
  ExceptionList = &local_c;
  NVar7 = 2;
  this_00 = GInfo();
  this_01 = SGlobalInfo::MetpInfo(this_00,NVar7);
  pCVar2 = CMetpParserRet::ParserPtr(this_01);
  cVar1 = (**(code **)(*(int *)pCVar2 + 0x18))();
  if (cVar1 != '\0') {
    uStack_140 = (char *)0x602059bb;
    (**(code **)(*(int *)param_1 + 0x3c))();
    uStack_140 = (char *)0x602059c0;
    pIVar3 = God();
    uStack_140 = (char *)0x0;
    pIStack_144 = param_1;
    (**(code **)(*(int *)pIVar3 + 0x20))("channel","onRefreshTicket");
  }
  CParam::CParam(aCStack_98,false);
  puStack_8 = (undefined1 *)0x0;
  uStack_140 = (char *)0x60205a09;
  CParam::AddValue(aCStack_98,"k8e","dlgMsgBox");
  pIVar3 = God();
  uStack_140 = "isWindowVisible";
  pIStack_144 = (IParam *)&DAT_6020c550;
  iVar4 = (**(code **)(*(int *)pIVar3 + 0x10))();
  if (iVar4 != 1) {
    puVar5 = (undefined4 *)LoadStr((int)(auStack_120 + -0x14));
    uStack_18 = 1;
    puVar6 = (undefined4 *)LoadStr((int)&uStack_130);
    uStack_18 = 2;
    MsgBox((CWnd *)0x0,(char *)*puVar6,(char *)*puVar5,0,true,"dlgMsgBox");
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack_130);
    uStack_18 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               (auStack_120 + -0x14));
  }
  CParam::CParam((CParam *)(auStack_120 + -0xc),false);
  uStack_18 = 3;
  CParam::AddValue((CParam *)(auStack_120 + -0xc),"p119",0);
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x10))("channelList","showWindow",auStack_120 + -0xc,1);
  uStack_28 = uStack_28 & 0xffffff00;
  CParam::~CParam((CParam *)(auStack_120 + -0x1c));
  uStack_28 = 0xffffffff;
  CParam::~CParam(aCStack_b8);
  ExceptionList = pvStack_30;
  iVar4 = __security_check_cookie(uStack_34 ^ (uint)&pIStack_144);
  return iVar4;
}



/* ---- CChannelLobbyController::Net_ComplaintAgree @ 60205b30 size=36 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_ComplaintAgree(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_ComplaintAgree
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x5b30  144  ?Net_ComplaintAgree@CChannelLobbyController@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","setComplaintAgree",param_1,1);
  return 0;
}



/* ---- Evt_ChannelView_OnClickRecommendedGameBtn @ 60205b60 size=36 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickRecommendedGameBtn(struct
   IParam &) */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickRecommendedGameBtn
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5b60  83
                       ?Evt_ChannelView_OnClickRecommendedGameBtn@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("gameWarp","runRecommendedGame",Void_exref,1);
  return iVar2;
}



/* ---- Evt_ChannelView_OnClickEventBtn1 @ 60205b90 size=430 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickEventBtn1(struct IParam &)
    */

int __thiscall
CChannelLobbyController::Evt_ChannelView_OnClickEventBtn1
          (CChannelLobbyController *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CMetpParserRet *this_00;
  CCfgSetting *pCVar2;
  int iVar3;
  IGod *pIVar4;
  NInfoTypes NVar5;
  char *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2d6 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2d0 [12];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c4 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2b4 [12];
  CParam aCStack_2a8 [16];
  CParam local_298 [132];
  uchar local_214 [500];
  uint uStack_20;
  void *pvStack_1c;
  int iStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5b90  74
                       ?Evt_ChannelView_OnClickEventBtn1@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b344;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_2d0;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2d0);
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2b4);
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar6 = "k3e";
  NVar5 = 2;
  pSVar1 = GInfo();
  this_00 = SGlobalInfo::MetpInfo(pSVar1,NVar5);
  pcVar6 = CMetpParserRet::GetString(this_00,pcVar6);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_2d0,pcVar6);
  pSVar1 = GInfo();
  pcVar6 = SGlobalInfo::GetPwd(pSVar1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_2b4,pcVar6);
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::CfgSetting(pSVar1);
  GetPrivateProfileStringA("URLs","event1","None",(LPSTR)local_214,0x200,(LPCSTR)(pCVar2 + 0x60b));
  iVar3 = _mbscmp(local_214,"None");
  if (iVar3 != 0) {
    ShellExecuteA((HWND)0x0,"open",(LPCSTR)local_214,(LPCSTR)0x0,(LPCSTR)0x0,4);
  }
  CParam::CParam(local_298,false);
  local_4 = CONCAT31(local_4._1_3_,2);
  CParam::AddValue(local_298,"p008","show");
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x10))("mainFrame","showWindow");
  iStack_14._0_1_ = 1;
  CParam::~CParam(aCStack_2a8);
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_2c4);
  iStack_14 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_2d6 + -10);
  ExceptionList = pvStack_1c;
  iVar3 = __security_check_cookie(uStack_20 ^ (uint)(abStack_2d6 + -10));
  return iVar3;
}



/* ---- EnterChannelFailure @ 60205d40 size=1391 ---- */

/* protected: int __thiscall CChannelLobbyController::EnterChannelFailure(struct IParam &) */

int __thiscall
CChannelLobbyController::EnterChannelFailure(CChannelLobbyController *this,IParam *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  SGlobalInfo *pSVar5;
  CMetpParserRet *pCVar6;
  CMetpParser *pCVar7;
  IGod *pIVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  CWinThread *pCVar13;
  CWnd *pCVar14;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar15;
  byte *pbVar16;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  int unaff_EBP;
  char *pcStack_270;
  undefined4 uStack_26c;
  char *pcStack_264;
  IParam *pIStack_260;
  IParam *pIStack_25c;
  undefined4 uStack_254;
  NInfoTypes NVar17;
  char *pcVar18;
  undefined4 uStack_24c;
  undefined1 auStack_238 [120];
  CParam aCStack_1c0 [16];
  CParam aCStack_1b0 [108];
  CGameFinder aCStack_144 [252];
  uint uStack_48;
  void *pvStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x5d40  54  ?EnterChannelFailure@CChannelLobbyController@@IAEHAAUIParam@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020ba84;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_238;
  uStack_24c = DAT_60215018 ^ (uint)(auStack_238 + -0x10);
  ExceptionList = &local_c;
  NVar17 = 2;
  uStack_254 = (char *)0x60205d8c;
  pSVar5 = GInfo();
  uStack_254 = (char *)0x60205d96;
  pCVar6 = SGlobalInfo::MetpInfo(pSVar5,NVar17);
  pCVar7 = CMetpParserRet::ParserPtr(pCVar6);
  pcVar18 = "k300e";
  uStack_254 = (char *)0x60205dac;
  cVar3 = (**(code **)(*(int *)pCVar7 + 0x18))();
  if (cVar3 != '\0') {
    uStack_254 = (char *)0x0;
    pIStack_25c = (IParam *)0x60205dc0;
    (**(code **)(*(int *)param_1 + 0x3c))();
    pIStack_25c = (IParam *)0x60205dc5;
    pIVar8 = God();
    pIStack_25c = (IParam *)0x0;
    pIStack_260 = param_1;
    pcStack_264 = "onRefreshTicket";
    uStack_26c = (CParam *)0x60205ddb;
    (**(code **)(*(int *)pIVar8 + 0x20))();
  }
  uStack_254 = "failcode";
  cVar3 = (**(code **)(*(int *)param_1 + 0x18))();
  if (cVar3 != '\0') {
    pIStack_25c = (IParam *)0x6020d088;
    pIStack_260 = (IParam *)0x60205e00;
    (**(code **)(*(int *)param_1 + 100))();
    if ((((unaff_EBP != 1) && (unaff_EBP != 0x271b)) && (unaff_EBP != 0x2772)) &&
       ((unaff_EBP != 0x12773 && (unaff_EBP != 0x127ee)))) {
      pIStack_25c = (IParam *)0x60205e30;
      PostBipLog(700);
    }
  }
  pIVar8 = God();
  pIStack_25c = param_1;
  pIStack_260 = (IParam *)0x6020d094;
  pcStack_264 = "channelList";
  (**(code **)(*(int *)pIVar8 + 0x10))();
  uStack_26c = (CParam *)0x60205e64;
  CParam::CParam(aCStack_1b0,false);
  uStack_1c = 0;
  pIVar8 = God();
  uStack_26c = aCStack_1b0;
  pcStack_270 = "getSelectedChannelGrp";
  (**(code **)(*(int *)pIVar8 + 0x10))("channelList");
  CParam::GetValue(aCStack_1c0,"p000",(int *)(auStack_238 + -0x18));
  uStack_2c = 0xffffffff;
  CParam::~CParam(aCStack_1c0);
  if (pcVar18 == (char *)0xffffffff) {
    pcVar18 = "k203e";
    NVar17 = 0;
    pSVar5 = GInfo();
    pCVar6 = SGlobalInfo::MetpInfo(pSVar5,NVar17);
    bVar4 = CMetpParserRet::Query(pCVar6,pcVar18);
    if (!bVar4) {
      pIStack_260 = (IParam *)0x0;
      cVar3 = (**(code **)(*(int *)param_1 + 0x18))("failcode");
      if (cVar3 != '\0') {
        (**(code **)(*(int *)param_1 + 100))("failcode",&pIStack_260);
      }
      pcVar18 = "k24e";
      NVar17 = 0;
      pSVar5 = GInfo();
      pCVar6 = SGlobalInfo::MetpInfo(pSVar5,NVar17);
      bVar4 = CMetpParserRet::Query(pCVar6,pcVar18);
      if (bVar4) {
        pcVar18 = "k24e";
        NVar17 = 0;
        pSVar5 = GInfo();
        pCVar6 = SGlobalInfo::MetpInfo(pSVar5,NVar17);
        CMetpParserRet::Delete(pCVar6,pcVar18);
        pcVar18 = "k42e";
        NVar17 = 0;
        pSVar5 = GInfo();
        pCVar6 = SGlobalInfo::MetpInfo(pSVar5,NVar17);
        CMetpParserRet::Delete(pCVar6,pcVar18);
        pcVar18 = "k67e";
        NVar17 = 0;
        pSVar5 = GInfo();
        pCVar6 = SGlobalInfo::MetpInfo(pSVar5,NVar17);
        CMetpParserRet::Delete(pCVar6,pcVar18);
      }
      else if (((pIStack_260 == (IParam *)0x2712) || (pIStack_260 == (IParam *)0x271b)) ||
              ((pIStack_260 == (IParam *)0x2772 || (pIStack_260 == (IParam *)0x0)))) {
        pIVar8 = God();
        (**(code **)(*(int *)pIVar8 + 0x10))("channelList","autoSelectChannel",Void_exref,1);
        goto LAB_60206285;
      }
    }
  }
  uStack_24c = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020d0b0,&uStack_24c);
  pbVar16 = &DAT_6020d0b8;
  pbVar9 = (byte *)uStack_254;
  do {
    bVar1 = *pbVar9;
    bVar4 = bVar1 < *pbVar16;
    if (bVar1 != *pbVar16) {
LAB_60205fe9:
      iVar10 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_60205fee;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar4 = bVar1 < pbVar16[1];
    if (bVar1 != pbVar16[1]) goto LAB_60205fe9;
    pbVar9 = pbVar9 + 2;
    pbVar16 = pbVar16 + 2;
  } while (bVar1 != 0);
  iVar10 = 0;
LAB_60205fee:
  if (iVar10 == 0) {
    puVar11 = (undefined4 *)LoadStr((int)&pIStack_260);
    uStack_34 = 1;
    puVar12 = (undefined4 *)LoadStr((int)(auStack_238 + -0x30));
    uStack_34 = CONCAT31(uStack_34._1_3_,2);
    pcVar18 = (char *)*puVar11;
    pcVar2 = (char *)*puVar12;
    pCVar13 = AfxGetThread();
    if (pCVar13 == (CWinThread *)0x0) {
      pCVar14 = (CWnd *)0x0;
    }
    else {
      pCVar14 = (CWnd *)(**(code **)(*(int *)pCVar13 + 0x7c))();
    }
    MsgBox(pCVar14,pcVar2,pcVar18,0,true,"dlgMsgBox");
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               (auStack_238 + -0x30));
    this_00 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pIStack_260;
LAB_602061d5:
    uStack_34 = 0xffffffff;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(this_00);
  }
  else {
    pbVar16 = &DAT_6020d0c0;
    pbVar9 = (byte *)uStack_254;
    do {
      bVar1 = *pbVar9;
      bVar4 = bVar1 < *pbVar16;
      if (bVar1 != *pbVar16) {
LAB_60206091:
        iVar10 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
        goto LAB_60206096;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar4 = bVar1 < pbVar16[1];
      if (bVar1 != pbVar16[1]) goto LAB_60206091;
      pbVar9 = pbVar9 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar1 != 0);
    iVar10 = 0;
LAB_60206096:
    if (iVar10 == 0) {
      GetErrorString((IParam *)&pcStack_264);
      uStack_34 = 3;
      if (*(int *)(pcStack_264 + -0xc) == 0) {
        pCVar15 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
                  LoadStr((int)&pIStack_260);
        uStack_34._0_1_ = 4;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_264,
                   pCVar15);
        uStack_34 = CONCAT31(uStack_34._1_3_,3);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pIStack_260);
      }
      puVar11 = (undefined4 *)LoadStr((int)(auStack_238 + -0x18));
      pcVar2 = pcStack_264;
      uStack_34 = CONCAT31(uStack_34._1_3_,5);
      pcVar18 = (char *)*puVar11;
      pCVar13 = AfxGetThread();
      if (pCVar13 == (CWinThread *)0x0) {
        pCVar14 = (CWnd *)0x0;
      }
      else {
        pCVar14 = (CWnd *)(**(code **)(*(int *)pCVar13 + 0x7c))();
      }
      MsgBox(pCVar14,pcVar2,pcVar18,0,true,"dlgMsgBox");
      uStack_34 = CONCAT31(uStack_34._1_3_,3);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                 (auStack_238 + -0x18));
      pIStack_25c = (IParam *)0x0;
      cVar3 = (**(code **)(*(int *)param_1 + 0x18))("failcode");
      if (cVar3 != '\0') {
        (**(code **)(*(int *)param_1 + 100))("failcode",&pIStack_260);
      }
      if (((pIStack_260 == (IParam *)0x1271c) || (pIStack_260 == (IParam *)0x12729)) ||
         (pIStack_260 == (IParam *)0x1290f)) {
        pIVar8 = God();
        pcVar18 = "exitProgramByChnl";
      }
      else {
        pIVar8 = God();
        pcVar18 = "disconnectChannelServer";
      }
      (**(code **)(*(int *)pIVar8 + 0x10))("channel",pcVar18,Void_exref,1);
      this_00 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_264;
      goto LAB_602061d5;
    }
  }
  CGameFinder::CGameFinder(aCStack_144);
  iVar10 = CGameFinder::isSingleGame(aCStack_144);
  if (iVar10 == 0) {
    CParam::CParam((CParam *)&uStack_24c,false);
    uStack_34 = 6;
    CParam::AddValue((CParam *)&uStack_24c,"p119",0);
    pIVar8 = God();
    (**(code **)(*(int *)pIVar8 + 0x10))("channelList","showWindow",&uStack_24c,1);
    uStack_3c = 0xffffffff;
    CParam::~CParam((CParam *)&uStack_254);
  }
  else {
    pIVar8 = God();
    (**(code **)(*(int *)pIVar8 + 0x10))("channel","exitProgramByChnl",Void_exref,1);
  }
LAB_60206285:
  ExceptionList = pvStack_44;
  iVar10 = __security_check_cookie(uStack_48 ^ (uint)&pcStack_270);
  return iVar10;
}



/* ---- Net_Channel_SocketConnect @ 602062b0 size=368 ---- */

/* public: int __thiscall CChannelLobbyController::Net_Channel_SocketConnect(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_Channel_SocketConnect(CChannelLobbyController *this,IParam *param_1)

{
  int iVar1;
  SGlobalInfo *pSVar2;
  CAppRunningState *pCVar3;
  IGod *pIVar4;
  int unaff_EDI;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcStack_ac;
  undefined1 local_98 [2];
  CParam aCStack_96 [2];
  CParam aCStack_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x62b0  141
                       ?Net_Channel_SocketConnect@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020bbdc;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_98;
  ExceptionList = &local_c;
  iVar1 = IS_SPLASHON();
  if (iVar1 == 0) {
    FUN_602065a0();
  }
  else {
    pcStack_ac = "k161e";
    (**(code **)(*(int *)param_1 + 100))();
    if (unaff_EDI == 0) {
      uVar5 = DAT_602157d8;
      uVar6 = DAT_602157dc;
      pSVar2 = GInfo();
      pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
      CAppRunningState::AddAppState(pCVar3,uVar5,uVar6);
      CParam::CParam((CParam *)(local_98 + -4),false);
      local_c = (void *)0x0;
      pIVar4 = God();
      (**(code **)(*(int *)pIVar4 + 0x10))("channelList","getSelectedChannel",local_98 + -4,1);
      pIVar4 = God();
      (**(code **)(*(int *)pIVar4 + 0x10))("channel","enterChannel",&pcStack_ac,1);
      uStack_4 = 0xffffffff;
      CParam::~CParam(aCStack_94);
    }
    else {
      uVar5 = DAT_602157d8;
      uVar6 = DAT_602157dc;
      pSVar2 = GInfo();
      pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
      CAppRunningState::RemoveAppState(pCVar3,uVar5,uVar6);
      (**(code **)(*(int *)param_1 + 0x20))(&DAT_6020d0b0,&DAT_6020d0b8);
      pcStack_ac = (char *)0x60206363;
      EnterChannelFailure(this,param_1);
    }
  }
  ExceptionList = local_c;
  iVar1 = __security_check_cookie(local_10 ^ (uint)local_98);
  return iVar1;
}



/* ---- Net_Channel_EnterChannel @ 60206420 size=280 ---- */

/* public: int __thiscall CChannelLobbyController::Net_Channel_EnterChannel(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_Channel_EnterChannel(CChannelLobbyController *this,IParam *param_1)

{
  char cVar1;
  int iVar2;
  IGod *pIVar3;
  SGlobalInfo *this_00;
  CMetpParserRet *this_01;
  CMetpParser *pCVar4;
  NInfoTypes NVar5;
  
                    /* 0x6420  139
                       ?Net_Channel_EnterChannel@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  iVar2 = IS_SPLASHON();
  if (iVar2 == 0) {
    FUN_602065a0();
    return 0x40000003;
  }
  iVar2 = GetResultKeyState(param_1);
  if (0x3fffffff < iVar2) {
    (**(code **)(*(int *)param_1 + 0x20))(&DAT_6020d0b0,&DAT_6020d0c0);
    iVar2 = EnterChannelFailure(this,param_1);
    return iVar2;
  }
  PostBipLog(700);
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x10))("channel","fillChannelInfo",param_1,1);
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x10))("channel","sendGetMemberList",Void_exref,1);
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x10))("channel","showWindow",Void_exref,1);
  NVar5 = 2;
  this_00 = GInfo();
  this_01 = SGlobalInfo::MetpInfo(this_00,NVar5);
  pCVar4 = CMetpParserRet::ParserPtr(this_01);
  cVar1 = (**(code **)(*(int *)pCVar4 + 0x18))("k300e");
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 0x3c))(&DAT_6020cb34,1);
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))("channel","refreshTicket",param_1,1);
  }
  return 0;
}



/* ---- Net_GetTicket @ 60206540 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GetTicket(struct IParam &) */

int __thiscall CChannelLobbyController::Net_GetTicket(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6540  171  ?Net_GetTicket@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","refreshTicket",param_1,1);
  return iVar2;
}



/* ---- CChannelLobbyController::Net_PlayTimeLimitInfo @ 60206570 size=34 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_PlayTimeLimitInfo(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_PlayTimeLimitInfo
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6570  188
                       ?Net_PlayTimeLimitInfo@CChannelLobbyController@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","PlayeTimeLimitInfo",param_1,1);
  return iVar2;
}



/* ---- FUN_602065a0 @ 602065a0 size=232 ---- */

void FUN_602065a0(void)

{
  IGod *pIVar1;
  
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","sendExitChannel",Void_exref,0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","disconnectChannelServer",Void_exref,1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","clearChannelInfo",Void_exref,1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","clearMemberList",Void_exref,1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","clearRoomList",Void_exref,1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("channel","clearItemState",Void_exref,1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("messenger","msnClearBuddyList",Void_exref,1);
  return;
}



/* ---- Net_GetClientOptions @ 60206690 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GetClientOptions(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_GetClientOptions(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6690  161  ?Net_GetClientOptions@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","onFillClientOptions",param_1,1);
  return iVar2;
}



/* ---- Evt_ClientOptionChange @ 602066c0 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Evt_ClientOptionChange(struct IParam &) */

int __thiscall
CChannelLobbyController::Evt_ClientOptionChange(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x66c0  97
                       ?Evt_ClientOptionChange@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","onSendClientOptions",param_1,1);
  return iVar2;
}



/* ---- Net_GetCouponCount @ 602066f0 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GetCouponCount(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_GetCouponCount(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x66f0  162  ?Net_GetCouponCount@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","onSetCouponCount",param_1,1);
  return iVar2;
}



/* ---- Net_InviteFriendMission @ 60206720 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_InviteFriendMission(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_InviteFriendMission(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6720  179
                       ?Net_InviteFriendMission@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","onInviteFriendMissionSuccess",param_1,1);
  return iVar2;
}



/* ---- Net_GaeaChannelPromotionData @ 60206750 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GaeaChannelPromotionData(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_GaeaChannelPromotionData(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6750  152
                       ?Net_GaeaChannelPromotionData@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","gaPromotionData",param_1,1);
  return iVar2;
}



/* ---- Net_GaeaChannelPrizeData @ 60206780 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GaeaChannelPrizeData(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_GaeaChannelPrizeData(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6780  151
                       ?Net_GaeaChannelPrizeData@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","gaPrizeData",param_1,1);
  return iVar2;
}



/* ---- Net_GetAuth @ 602067b0 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GetAuth(struct IParam &) */

int __thiscall CChannelLobbyController::Net_GetAuth(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x67b0  158  ?Net_GetAuth@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","getAuth",param_1,1);
  return iVar2;
}



/* ---- Net_GetUserId @ 602067e0 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GetUserId(struct IParam &) */

int __thiscall CChannelLobbyController::Net_GetUserId(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x67e0  172  ?Net_GetUserId@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","getUserId",param_1,1);
  return iVar2;
}



/* ---- Net_GetMakeUserId @ 60206810 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GetMakeUserId(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_GetMakeUserId(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6810  164  ?Net_GetMakeUserId@CChannelLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","getMakeUserId",param_1,1);
  return iVar2;
}



/* ---- Net_GetCheckUserId @ 60206840 size=34 ---- */

/* public: int __thiscall CChannelLobbyController::Net_GetCheckUserId(struct IParam &) */

int __thiscall
CChannelLobbyController::Net_GetCheckUserId(CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6840  160  ?Net_GetCheckUserId@CChannelLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","getCheckUserId",param_1,1);
  return iVar2;
}



/* ---- CChannelLobbyController::Net_GetShutdownTime @ 60206870 size=34 ---- */

/* public: virtual int __thiscall CChannelLobbyController::Net_GetShutdownTime(struct IParam &) */

int __thiscall
CChannelLobbyController::CChannelLobbyController__Net_GetShutdownTime
          (CChannelLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x6870  169  ?Net_GetShutdownTime@CChannelLobbyController@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","getShutdownTime",param_1,1);
  return iVar2;
}



/* ---- FUN_602068a0 @ 602068a0 size=214 ---- */

undefined4 * __thiscall FUN_602068a0(void *this,undefined4 *param_1)

{
  rsize_t _DstSize;
  int iVar1;
  void *_Src;
  void *_Dst;
  undefined4 *puVar2;
  int extraout_EAX;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020ba08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = param_1;
  }
  *param_1 = puVar2;
  local_4 = 0;
  iVar4 = *(int *)((int)this + 0x10);
  iVar1 = *(int *)((int)this + 0xc);
  param_1[3] = 0;
  uVar3 = iVar4 - iVar1 >> 2;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar3 != 0) {
    if (0x3fffffff < uVar3) {
      FUN_60206990();
    }
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar3);
    param_1[3] = extraout_EAX;
    param_1[4] = extraout_EAX;
    param_1[5] = extraout_EAX + uVar3 * 4;
    uVar3 = *(uint *)((int)this + 0x10);
    if (uVar3 < *(uint *)((int)this + 0xc)) {
      _invalid_parameter_noinfo();
    }
    _Src = *(void **)((int)this + 0xc);
    if (*(void **)((int)this + 0x10) < _Src) {
      _invalid_parameter_noinfo();
    }
    _Dst = (void *)param_1[3];
    iVar4 = (int)(uVar3 - (int)_Src) >> 2;
    _DstSize = iVar4 * 4;
    if (iVar4 != 0) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (void *)(_DstSize + (int)_Dst);
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_60206980 @ 60206980 size=10 ---- */

void FUN_60206980(void)

{
  undefined4 *in_EAX;
  
  operator_delete((void *)*in_EAX);
  return;
}



/* ---- FUN_60206990 @ 60206990 size=124 ---- */

void FUN_60206990(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  exception local_34 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b9e2;
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
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_6020e280);
}



/* ---- bad_alloc_Constructor_or_Destructor @ 60206a10 size=86 ---- */

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
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_6020e2b8);
  }
  operator_new(param_1 * 4);
  return;
}



/* ---- FUN_60206a70 @ 60206a70 size=179 ---- */

undefined4 __thiscall FUN_60206a70(void *this,undefined4 param_1)

{
  char cVar1;
  CMetpParser *pCVar2;
  uint uStack_a0;
  exception local_64 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_3c [32];
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_6020b302;
  local_10 = ExceptionList;
  uStack_a0 = DAT_60215018 ^ (uint)(local_1c + 6);
  local_14 = (undefined1 *)&uStack_a0;
  ExceptionList = &local_10;
  local_8 = 0;
  pCVar2 = CMetpParserRet::ParserPtr(this);
  cVar1 = (**(code **)(*(int *)pCVar2 + 100))(param_1,local_1c);
  if (cVar1 == '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_3c,"CMetpParserRet.Get()::NoValue");
    local_8._0_1_ = 1;
    std::exception::exception(local_64);
    local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for std::logic_error */
    local_64[0] = (exception)&std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_58,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_3c);
    local_8 = CONCAT31(local_8._1_3_,1);
                    /* inlined constructor or destructor (approx location) for std::invalid_argument
                        */
    local_64[0] = (exception)&std::invalid_argument::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_64,(ThrowInfo *)&DAT_6020e234);
  }
  ExceptionList = local_10;
  return local_1c[0];
}



/* ---- Catch@60206b23 @ 60206b23 size=32 ---- */

void Catch_60206b23(void)

{
  int unaff_EBP;
  
  std::logic_error::logic_error
            ((logic_error *)(unaff_EBP + -0x88),*(exception **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x88),(ThrowInfo *)&DAT_6020e244);
}



/* ---- FUN_60206b50 @ 60206b50 size=161 ---- */

undefined1 __fastcall FUN_60206b50(undefined4 param_1,CMetpParserRet *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  CMetpParser *pCVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_6020b2d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pCVar3 = CMetpParserRet::ParserPtr(param_2);
  cVar1 = (**(code **)(*(int *)pCVar3 + 0x18))(param_1);
  if (cVar1 == '\0') {
    pCVar3 = CMetpParserRet::ParserPtr(param_2);
    uVar2 = (**(code **)(*(int *)pCVar3 + 0x3c))(param_1,param_3);
    ExceptionList = local_10;
    return uVar2;
  }
  pCVar3 = CMetpParserRet::ParserPtr(param_2);
  uVar2 = (**(code **)(*(int *)pCVar3 + 0x8c))(param_1,param_3);
  ExceptionList = local_10;
  return uVar2;
}



/* ---- Catch@60206bf1 @ 60206bf1 size=6 ---- */

undefined1 * Catch_60206bf1(void)

{
  return &LAB_60206bf7;
}



/* ---- FUN_60206c10 @ 60206c10 size=90 ---- */

undefined4 __fastcall FUN_60206c10(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  undefined *puVar4;
  int *local_4;
  
  local_4 = param_1;
  uVar2 = (**(code **)(*param_1 + 100))(&DAT_6020cbc4,&local_4);
  if ((char)uVar2 == '\0') {
    return uVar2 & 0xffffff00;
  }
  puVar4 = &DAT_6020cbc4;
  cVar1 = (**(code **)(*unaff_ESI + 0x18))(&DAT_6020cbc4);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*unaff_ESI + 0x3c))(&DAT_6020cbc4,puVar4);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar3 = (**(code **)(*unaff_ESI + 0x8c))(&DAT_6020cbc4,puVar4);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}



/* ---- FUN_60206c70 @ 60206c70 size=71 ---- */

undefined4 __fastcall FUN_60206c70(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  
  uVar2 = (**(code **)(*param_1 + 0x44))();
  if ((char)uVar2 == '\0') {
    return uVar2 & 0xffffff00;
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x18))();
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*unaff_ESI + 0x20))();
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar3 = (**(code **)(*unaff_ESI + 0x70))();
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}



/* ---- FUN_60206cc0 @ 60206cc0 size=25 ---- */

logic_error * __thiscall FUN_60206cc0(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::invalid_argument::vftable;
  return param_1;
}



/* ---- scalar_deleting_destructor @ 60206ce0 size=18 ---- */

void __thiscall
CMFunctor<CChannelLobbyController>::scalar_deleting_destructor
          (CMFunctor<CChannelLobbyController> *this)

{
  if (this != (CMFunctor<CChannelLobbyController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CChannelLobbyController>::~CMFunctor<CChannelLobbyController> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- scalar_deleting_destructor @ 60206e50 size=48 ---- */

exception * __thiscall
std::invalid_argument::scalar_deleting_destructor(invalid_argument *this,byte param_1)

{
                    /* inlined destructor: std::logic_error::~logic_error */
  this->vftablePtr = (invalid_argument_vftable *)&logic_error::vftable;
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



/* ---- FUN_60206e80 @ 60206e80 size=25 ---- */

logic_error * __thiscall FUN_60206e80(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
  return param_1;
}



/* ---- logic_error @ 60206ea0 size=101 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b2a9;
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



/* ---- ~logic_error @ 60206f10 size=27 ---- */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
                    /* WARNING: Could not recover jumptable at 0x60206f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)this);
  return;
}



/* ---- vfunction2 @ 60206f30 size=14 ---- */

/* std::logic_error member function inherited by std::length_error
   std::logic_error member function inherited by std::invalid_argument */

int __thiscall std::logic_error::vfunction2(logic_error *this)

{
  if (*(uint *)&this[2].logic_error_data < 0x10) {
    return (int)(this + 1);
  }
  return (int)this[1].vftablePtr;
}



/* ---- FUN_60206f40 @ 60206f40 size=12 ---- */

void __fastcall FUN_60206f40(exception *param_1)

{
  *param_1 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x60206f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 60206f50 size=37 ---- */

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



/* ---- FUN_60206f80 @ 60206f80 size=26 ---- */

exception * __thiscall FUN_60206f80(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *param_1 = (exception)&std::bad_alloc::vftable;
  return param_1;
}



/* ---- FUN_60206fa0 @ 60206fa0 size=40 ---- */

undefined4 FUN_60206fa0(undefined4 param_1,int param_2)

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



/* ---- FUN_60206fd0 @ 60206fd0 size=90 ---- */

undefined4 FUN_60206fd0(HINSTANCE__ *param_1,int param_2)

{
  int iVar1;
  CDynLinkLibrary *this;
  
  if (param_2 == 1) {
    iVar1 = AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_602157ac,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    this = operator_new(0x40);
    if (this != (CDynLinkLibrary *)0x0) {
      CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_602157ac,0);
      return 1;
    }
  }
  else if (param_2 == 0) {
    AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_602157ac,0);
  }
  return 1;
}



/* ---- ~CGameLobbyController @ 60207030 size=11 ---- */

/* public: __thiscall CGameLobbyController::CGameLobbyController(class CGameLobbyController const &)
    */

void __thiscall
CGameLobbyController::~CGameLobbyController
          (CGameLobbyController *this,CGameLobbyController *param_1)

{
                    /* 0x7030  5  ??0CGameLobbyController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CGameLobbyController::OnAttached @ 60207040 size=1836 ---- */

/* public: virtual bool __thiscall CGameLobbyController::OnAttached(void) */

bool __thiscall CGameLobbyController::CGameLobbyController__OnAttached(CGameLobbyController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x7040  203  ?OnAttached@CGameLobbyController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GameView_OnActivateOn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020ced0,"onActivateOn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020ced0,"onActivateOff",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GameView_OnClickExitGameBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("gameView","onClickExitGameBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnClickAccuseBtnInGame;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020c550,"onClickAccuseBtnInGame",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_MainFrameView_OnAltF4KeyDown;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("mainFrameView","onAltF4KeyDown",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_Dialog_OnChangedAvatarCombo;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_6020c550,"onChangedAvatarCombo",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d2e8,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_AddRoomMember;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020ca44,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_DeleteRoomMember;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020ca48,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_MemberList;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d2f0,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_ChangeViewerToPlayer;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d2f8,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_ChatString;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d300,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_ReqBanishMember;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d304,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GameReport;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020ca84,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_DetectGhost;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020ca4c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_ConnectTypeError;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d30c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_ItemReserveChance;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d314,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_AvatarChange;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020ca6c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_RoomEvent;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d31c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_StartNewGame;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d324,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Provoke;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,&DAT_6020d32c,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,"c606e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,"c605e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GetShutdownTime;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,"c620e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020ced0,"onTimeAlarm",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020ced0,"onExitAlarm",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ClientOptionChange;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020ced0,"onClientOption",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GaeaRoomPromotionData;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,"gac2e",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGameLobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_GaeaRoomPrizeData;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,"gac4e",puVar2,1);
  return true;
}



/* ---- CGameLobbyController::OnDetached @ 60207770 size=22 ---- */

/* public: virtual bool __thiscall CGameLobbyController::OnDetached(void) */

bool __thiscall CGameLobbyController::CGameLobbyController__OnDetached(CGameLobbyController *this)

{
                    /* 0x7770  212  ?OnDetached@CGameLobbyController@@UAE_NXZ */
  if (this != (CGameLobbyController *)0x0) {
                    /* inlined destructor: CGameLobbyController::~CGameLobbyController */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- ~CGameLobbyController @ 60207790 size=9 ---- */

/* public: __thiscall CGameLobbyController::CGameLobbyController(void) */

void __thiscall CGameLobbyController::~CGameLobbyController(CGameLobbyController *this)

{
                    /* 0x7790  6  ??0CGameLobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CGameLobbyController @ 602077a0 size=7 ---- */

/* public: __thiscall CGameLobbyController::~CGameLobbyController(void) */

void __thiscall CGameLobbyController::~CGameLobbyController(CGameLobbyController *this)

{
                    /* 0x77a0  23  ??1CGameLobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- Evt_GameView_OnActivateOn @ 602077b0 size=149 ---- */

/* public: int __thiscall CGameLobbyController::Evt_GameView_OnActivateOn(struct IParam &) */

int __thiscall
CGameLobbyController::Evt_GameView_OnActivateOn(CGameLobbyController *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CWndProperty *this_00;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  bool bVar2;
  char *pcVar3;
  CGameLobbyController *local_10;
  char *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x77b0  117
                       ?Evt_GameView_OnActivateOn@CGameLobbyController@@QAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_6020b6a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  local_4 = 0;
  bVar2 = false;
  pSVar1 = GInfo();
  SGlobalInfo::GetGameId(pSVar1,bVar2);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_01,(char *)&local_10);
  pcVar3 = local_c;
  pSVar1 = GInfo();
  this_00 = SGlobalInfo::WndProperty(pSVar1);
  CWndProperty::SetWndProp(this_00,pcVar3);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = local_8;
  return 0;
}



/* ---- Evt_GameView_OnClickExitGameBtn @ 60207850 size=38 ---- */

/* public: int __thiscall CGameLobbyController::Evt_GameView_OnClickExitGameBtn(struct IParam &) */

int __thiscall
CGameLobbyController::Evt_GameView_OnClickExitGameBtn(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x7850  118
                       ?Evt_GameView_OnClickExitGameBtn@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("lobbyState","movePrev",Void_exref,1);
  return 0;
}



/* ---- Net_StartNewGame @ 60207880 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_StartNewGame(struct IParam &) */

int __thiscall CGameLobbyController::Net_StartNewGame(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7880  200  ?Net_StartNewGame@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))(&DAT_6020ced0,"onStartNewGame",param_1,0);
  return iVar2;
}



/* ---- Net_AddRoomMember @ 602078b0 size=508 ---- */

/* public: int __thiscall CGameLobbyController::Net_AddRoomMember(struct IParam &) */

int __thiscall CGameLobbyController::Net_AddRoomMember(CGameLobbyController *this,IParam *param_1)

{
  CMemberData CVar1;
  IGod *pIVar2;
  int iVar3;
  SGlobalInfo *pSVar4;
  CMemberData *pCVar5;
  CMetpParserRet *pCVar6;
  undefined **ppuVar7;
  CMemberData *pCVar8;
  bool bVar9;
  NInfoTypes NVar10;
  undefined *puVar11;
  char *pcVar12;
  CMemberData *pCStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_9c [4];
  undefined1 local_98 [112];
  uint uStack_28;
  void *pvStack_24;
  undefined4 uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x78b0  132  ?Net_AddRoomMember@CGameLobbyController@@QAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020b99c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)auStack_9c;
  uStack_ac = DAT_60215018 ^ (uint)(auStack_9c + -0xc);
  ExceptionList = &local_c;
  puStack_b0 = local_98;
  pCStack_b4 = (CMemberData *)&DAT_6020cbd4;
  (**(code **)(*(int *)param_1 + 0x44))();
  pIVar2 = God();
  iVar3 = (**(code **)(*(int *)pIVar2 + 0x10))(&DAT_6020ced0,"addRoomMember",param_1,1);
  if (iVar3 == 0) {
    (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cbd4,&pCStack_b4);
    pCVar8 = pCStack_b4;
    pSVar4 = GInfo();
    pCVar5 = SGlobalInfo::MyData(pSVar4);
    pCVar5 = pCVar5 + 0x10;
    do {
      CVar1 = *pCVar5;
      bVar9 = (byte)CVar1 < (byte)*pCVar8;
      if (CVar1 != *pCVar8) {
LAB_60207971:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_60207976;
      }
      if (CVar1 == (CMemberData)0x0) break;
      CVar1 = pCVar5[1];
      bVar9 = (byte)CVar1 < (byte)pCVar8[1];
      if (CVar1 != pCVar8[1]) goto LAB_60207971;
      pCVar5 = pCVar5 + 2;
      pCVar8 = pCVar8 + 2;
    } while (CVar1 != (CMemberData)0x0);
    iVar3 = 0;
LAB_60207976:
    if (iVar3 == 0) {
      CParam::CParam((CParam *)&uStack_ac,false);
      puVar11 = &DAT_6020cbc4;
      NVar10 = 5;
      uStack_1c = 0;
      pSVar4 = GInfo();
      pCVar6 = SGlobalInfo::MetpInfo(pSVar4,NVar10);
      iVar3 = FUN_60206a70(pCVar6,puVar11);
      CParam::AddValue((CParam *)&uStack_ac,"k42e",iVar3);
      pcVar12 = "k67e";
      NVar10 = 5;
      pSVar4 = GInfo();
      pCVar6 = SGlobalInfo::MetpInfo(pSVar4,NVar10);
      bVar9 = CMetpParserRet::Query(pCVar6,pcVar12);
      if (bVar9) {
        pcVar12 = "k67e";
        NVar10 = 5;
        pSVar4 = GInfo();
        pCVar6 = SGlobalInfo::MetpInfo(pSVar4,NVar10);
        ppuVar7 = (undefined **)CMetpParserRet::GetString(pCVar6,pcVar12);
      }
      else {
        ppuVar7 = &PTR_6020d4d8;
      }
      CParam::AddValue((CParam *)&uStack_ac,"k67e",(char *)ppuVar7);
      pIVar2 = God();
      (**(code **)(*(int *)pIVar2 + 0x10))("messenger","msnSendGameInfo",&uStack_ac,1);
      pcVar12 = "k24e";
      NVar10 = 0;
      pSVar4 = GInfo();
      pCVar6 = SGlobalInfo::MetpInfo(pSVar4,NVar10);
      CMetpParserRet::Delete(pCVar6,pcVar12);
      pcVar12 = "k42e";
      NVar10 = 0;
      pSVar4 = GInfo();
      pCVar6 = SGlobalInfo::MetpInfo(pSVar4,NVar10);
      CMetpParserRet::Delete(pCVar6,pcVar12);
      pcVar12 = "k67e";
      NVar10 = 0;
      pSVar4 = GInfo();
      pCVar6 = SGlobalInfo::MetpInfo(pSVar4,NVar10);
      CMetpParserRet::Delete(pCVar6,pcVar12);
      pcVar12 = "k202e";
      NVar10 = 0;
      pSVar4 = GInfo();
      pCVar6 = SGlobalInfo::MetpInfo(pSVar4,NVar10);
      CMetpParserRet::Delete(pCVar6,pcVar12);
      uStack_1c = 0xffffffff;
      CParam::~CParam((CParam *)&uStack_ac);
    }
  }
  ExceptionList = pvStack_24;
  iVar3 = __security_check_cookie(uStack_28 ^ (uint)&pCStack_b4);
  return iVar3;
}



/* ---- Net_MemberList @ 60207ab0 size=36 ---- */

/* public: int __thiscall CGameLobbyController::Net_MemberList(struct IParam &) */

int __thiscall CGameLobbyController::Net_MemberList(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x7ab0  182  ?Net_MemberList@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"roomMemberList",param_1,1);
  return 0;
}



/* ---- Net_DeleteRoomMember @ 60207ae0 size=36 ---- */

/* public: int __thiscall CGameLobbyController::Net_DeleteRoomMember(struct IParam &) */

int __thiscall
CGameLobbyController::Net_DeleteRoomMember(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x7ae0  147  ?Net_DeleteRoomMember@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"delRoomMember",param_1,0);
  return 0;
}



/* ---- Net_ConnectTypeError @ 60207b10 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_ConnectTypeError(struct IParam &) */

int __thiscall
CGameLobbyController::Net_ConnectTypeError(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7b10  145  ?Net_ConnectTypeError@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))(&DAT_6020ced0,"onConnectTypeError",param_1,0);
  return iVar2;
}



/* ---- Net_ItemReserveChance @ 60207b40 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_ItemReserveChance(struct IParam &) */

int __thiscall
CGameLobbyController::Net_ItemReserveChance(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7b40  181  ?Net_ItemReserveChance@CGameLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))(&DAT_6020ced0,"onReserveItemChance",param_1,0);
  return iVar2;
}



/* ---- Net_DetectGhost @ 60207b70 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_DetectGhost(struct IParam &) */

int __thiscall CGameLobbyController::Net_DetectGhost(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7b70  149  ?Net_DetectGhost@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"detectGhost",param_1,1);
  return iVar2;
}



/* ---- Net_GameReport @ 60207ba0 size=335 ---- */

/* WARNING: Removing unreachable block (ram,0x60207c41) */
/* WARNING: Removing unreachable block (ram,0x60207c46) */
/* WARNING: Removing unreachable block (ram,0x60207c4d) */
/* WARNING: Removing unreachable block (ram,0x60207c54) */
/* public: int __thiscall CGameLobbyController::Net_GameReport(struct IParam &) */

int __thiscall CGameLobbyController::Net_GameReport(CGameLobbyController *this,IParam *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  IGod *pIVar4;
  byte *pbVar5;
  bool bVar6;
  byte *pbVar7;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x7ba0  156  ?Net_GameReport@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pbVar7 = &DAT_6020d3d0;
  local_8 = 0;
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020d3d0,&local_8);
  pbVar2 = (byte *)((int)register0x00000010 + -0xc);
  (**(code **)(*(int *)param_1 + 0x44))("failcode");
  if (pbVar2 != (byte *)0x0) {
    pbVar5 = &DAT_6020d3d4;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_60207c10:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_60207c15;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_60207c10;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_60207c15:
    if ((iVar3 == 0) &&
       ((**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cee8,(int)register0x00000010 + -0xc),
       pbVar7 != (byte *)0x0)) {
      pbVar2 = &DAT_6020d3d8;
      do {
        bVar1 = *pbVar7;
        bVar6 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_60207ca0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_60207ca5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar6 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_60207ca0;
        pbVar7 = pbVar7 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_60207ca5:
      if (iVar3 == 0) {
        pIVar4 = God();
        iVar3 = (**(code **)(*(int *)pIVar4 + 0x20))(&DAT_6020ced0,"onErrorGameReport",param_1,0);
        return iVar3;
      }
    }
  }
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x10))(&DAT_6020ced0,"gameReport",param_1,1);
  return 0;
}



/* ---- Net_RoomEvent @ 60207cf0 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_RoomEvent(struct IParam &) */

int __thiscall CGameLobbyController::Net_RoomEvent(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7cf0  194  ?Net_RoomEvent@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))(&DAT_6020ced0,"onRoomEvent",param_1,0);
  return iVar2;
}



/* ---- Net_ChangeViewerToPlayer @ 60207d20 size=62 ---- */

/* public: int __thiscall CGameLobbyController::Net_ChangeViewerToPlayer(struct IParam &) */

int __thiscall
CGameLobbyController::Net_ChangeViewerToPlayer(CGameLobbyController *this,IParam *param_1)

{
  int iVar1;
  IGod *pIVar2;
  
                    /* 0x7d20  136
                       ?Net_ChangeViewerToPlayer@CGameLobbyController@@QAEHAAUIParam@@@Z */
  iVar1 = GetResultKeyState(param_1);
  if (iVar1 < 0x40000000) {
    pIVar2 = God();
    iVar1 = (**(code **)(*(int *)pIVar2 + 0x10))(&DAT_6020ced0,"changeViewerToPlayer",param_1,1);
    return iVar1;
  }
  return 0x40000000;
}



/* ---- Net_AvatarChange @ 60207d60 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_AvatarChange(struct IParam &) */

int __thiscall CGameLobbyController::Net_AvatarChange(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7d60  134  ?Net_AvatarChange@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"avatarChange",param_1,1);
  return iVar2;
}



/* ---- Evt_MainFrameView_OnAltF4KeyDown @ 60207d90 size=196 ---- */

/* public: int __thiscall CGameLobbyController::Evt_MainFrameView_OnAltF4KeyDown(struct IParam &) */

int __thiscall
CGameLobbyController::Evt_MainFrameView_OnAltF4KeyDown(CGameLobbyController *this,IParam *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  IGod *pIVar5;
  CSTLogFile *pCVar6;
  CSTLogFile *this_00;
  bool bVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 local_4;
  
                    /* 0x7d90  123
                       ?Evt_MainFrameView_OnAltF4KeyDown@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pbVar9 = &DAT_6020cec8;
  local_4 = 0;
  cVar2 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020cec8,&local_4);
  if (cVar2 != '\0') {
    pbVar3 = &DAT_6020ced0;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_60207de0:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_60207de5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_60207de0;
      pbVar3 = pbVar3 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_60207de5:
    if (iVar4 == 0) {
      pIVar5 = God();
      iVar4 = (**(code **)(*(int *)pIVar5 + 0x10))(&DAT_6020ced0,"onAltF4KeyDownMsg",Void_exref,1);
      if (iVar4 != 5) {
        pIVar5 = God();
        (**(code **)(*(int *)pIVar5 + 0x10))("lobbyState","movePrev",Void_exref,1);
        return 0;
      }
    }
  }
  pcVar8 = "[CGameLobbyController::Evt_MainFrameView_OnAltF4KeyDown] keyState Not Found in param.";
  pCVar6 = CSTLogFile::GetLogFile();
  CSTLogFile::Write(this_00,(char *)pCVar6,pcVar8);
  return 0x40000017;
}



/* ---- Evt_Dialog_OnChangedAvatarCombo @ 60207e60 size=317 ---- */

/* public: int __thiscall CGameLobbyController::Evt_Dialog_OnChangedAvatarCombo(struct IParam &) */

int __thiscall
CGameLobbyController::Evt_Dialog_OnChangedAvatarCombo(CGameLobbyController *this,IParam *param_1)

{
  CParam CVar1;
  IGod *pIVar2;
  CParam *pCVar3;
  int iVar4;
  CParam *pCVar5;
  bool bVar6;
  undefined4 uStack_a8;
  undefined4 local_98;
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7e60  100
                       ?Evt_Dialog_OnChangedAvatarCombo@CGameLobbyController@@QAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b26c;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)&local_98;
  ExceptionList = &local_c;
  local_98 = 0;
  uStack_a8 = (CParam *)0x60207eb3;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar2 = God();
  uStack_a8 = local_94;
  (**(code **)(*(int *)pIVar2 + 0x10))("lobbyState","queryState");
  CParam::GetValue(local_94 + -0x10,"p008",(char **)&uStack_a8);
  pCVar5 = (CParam *)&DAT_6020ced0;
  pCVar3 = uStack_a8;
  do {
    CVar1 = *pCVar3;
    bVar6 = (byte)CVar1 < (byte)*pCVar5;
    if (CVar1 != *pCVar5) {
LAB_60207f20:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_60207f25;
    }
    if (CVar1 == (CParam)0x0) break;
    CVar1 = pCVar3[1];
    bVar6 = (byte)CVar1 < (byte)pCVar5[1];
    if (CVar1 != pCVar5[1]) goto LAB_60207f20;
    pCVar3 = pCVar3 + 2;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CParam)0x0);
  iVar4 = 0;
LAB_60207f25:
  if (iVar4 == 0) {
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))(&DAT_6020ced0,"sendAvatarChange",param_1,1);
    uStack_14 = 0xffffffff;
    CParam::~CParam(local_94 + -0x10);
  }
  else {
    uStack_14 = 0xffffffff;
    CParam::~CParam(local_94 + -0x10);
  }
  ExceptionList = pvStack_1c;
  iVar4 = __security_check_cookie(uStack_20 ^ (uint)&uStack_a8);
  return iVar4;
}



/* ---- Evt_Dialog_OnClickAccuseBtnInGame @ 60207fa0 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Evt_Dialog_OnClickAccuseBtnInGame(struct IParam &)
    */

int __thiscall
CGameLobbyController::Evt_Dialog_OnClickAccuseBtnInGame(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7fa0  102
                       ?Evt_Dialog_OnClickAccuseBtnInGame@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"sendAccuseUser",param_1,1);
  return iVar2;
}



/* ---- Net_ChatString @ 60207fd0 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_ChatString(struct IParam &) */

int __thiscall CGameLobbyController::Net_ChatString(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x7fd0  143  ?Net_ChatString@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"chatString",param_1,1);
  return iVar2;
}



/* ---- Net_ReqBanishMember @ 60208000 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_ReqBanishMember(struct IParam &) */

int __thiscall CGameLobbyController::Net_ReqBanishMember(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x8000  191  ?Net_ReqBanishMember@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"reqBanishMember",param_1,1);
  return iVar2;
}



/* ---- Net_Provoke @ 60208030 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_Provoke(struct IParam &) */

int __thiscall CGameLobbyController::Net_Provoke(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x8030  190  ?Net_Provoke@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"recvProvokeItem",param_1,1);
  return iVar2;
}



/* ---- Net_GetShutdownTime @ 60208060 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_GetShutdownTime(struct IParam &) */

int __thiscall CGameLobbyController::Net_GetShutdownTime(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x8060  170  ?Net_GetShutdownTime@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"getShutdownTime",param_1,1);
  return iVar2;
}



/* ---- Evt_ClientOptionChange @ 60208090 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Evt_ClientOptionChange(struct IParam &) */

int __thiscall
CGameLobbyController::Evt_ClientOptionChange(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x8090  98  ?Evt_ClientOptionChange@CGameLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"onSendClientOptions",param_1,1);
  return iVar2;
}



/* ---- Net_GaeaRoomPromotionData @ 602080c0 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_GaeaRoomPromotionData(struct IParam &) */

int __thiscall
CGameLobbyController::Net_GaeaRoomPromotionData(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x80c0  154
                       ?Net_GaeaRoomPromotionData@CGameLobbyController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"gaPromotionData",param_1,1);
  return iVar2;
}



/* ---- Net_GaeaRoomPrizeData @ 602080f0 size=34 ---- */

/* public: int __thiscall CGameLobbyController::Net_GaeaRoomPrizeData(struct IParam &) */

int __thiscall
CGameLobbyController::Net_GaeaRoomPrizeData(CGameLobbyController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x80f0  153  ?Net_GaeaRoomPrizeData@CGameLobbyController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020ced0,"gaPrizeData",param_1,1);
  return iVar2;
}



/* ---- vfunction1 @ 60208120 size=10 ---- */

void __thiscall
CMFunctor<CChannelListLobbyController>::vfunction1(CMFunctor<CChannelListLobbyController> *this)

{
                    /* WARNING: Could not recover jumptable at 0x60208128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this[2].vftablePtr)();
  return;
}



/* ---- scalar_deleting_destructor @ 60208130 size=18 ---- */

void __thiscall
CMFunctor<CGameLobbyController>::scalar_deleting_destructor(CMFunctor<CGameLobbyController> *this)

{
  if (this != (CMFunctor<CGameLobbyController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CGameLobbyController>::~CMFunctor<CGameLobbyController> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CHanChatController @ 60208150 size=32 ---- */

/* public: __thiscall CHanChatController::CHanChatController(class CHanChatController const &) */

CHanChatController * __thiscall
CHanChatController::CHanChatController(CHanChatController *this,CHanChatController *param_1)

{
                    /* 0x8150  7  ??0CHanChatController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CHanChatController_data,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  return this;
}



/* ---- operator= @ 60208170 size=26 ---- */

/* public: class CHanChatController & __thiscall CHanChatController::operator=(class
   CHanChatController const &) */

CHanChatController * __thiscall
CHanChatController::operator=(CHanChatController *this,CHanChatController *param_1)

{
                    /* 0x8170  34  ??4CHanChatController@@QAEAAV0@ABV0@@Z */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CHanChatController_data,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  return (CHanChatController *)this;
}



/* ---- CHanChatController::OnAttached @ 60208190 size=576 ---- */

/* public: virtual bool __thiscall CHanChatController::OnAttached(void) */

bool __thiscall CHanChatController::CHanChatController__OnAttached(CHanChatController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x8190  204  ?OnAttached@CHanChatController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_HanChatString;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d4dc,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d4e4,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d4ec,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d4f4,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d4fc,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d504,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_HanChatView_OnSendHanChatString;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("hanChatView","onSendHanChatStr",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_HanChatView_OnSendHanChatString;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("guildHanChatView","onSendHanChatStr",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CHanChatController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelLobby_OnChannelJoinComplete;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channel","onChannelJoinComplete",puVar2,1);
  return true;
}



/* ---- CHanChatController::OnDetached @ 602083d0 size=35 ---- */

/* public: virtual bool __thiscall CHanChatController::OnDetached(void) */

bool __thiscall CHanChatController::CHanChatController__OnDetached(CHanChatController *this)

{
                    /* 0x83d0  213  ?OnDetached@CHanChatController@@UAE_NXZ */
  if (this != (CHanChatController *)0x0) {
                    /* inlined destructor: CHanChatController::~CHanChatController */
    this->vftablePtr = &_vftable_;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               &this->CHanChatController_data);
    operator_delete(this);
  }
  return true;
}



/* ---- CHanChatController @ 60208400 size=134 ---- */

/* public: __thiscall CHanChatController::CHanChatController(char const *) */

CHanChatController * __thiscall
CHanChatController::CHanChatController(CHanChatController *this,char *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x8400  8  ??0CHanChatController@@QAE@PBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b975;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CHanChatController_data);
  local_4 = 0;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28,param_1);
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CHanChatController_data,pbVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CHanChatController @ 60208490 size=15 ---- */

/* public: __thiscall CHanChatController::~CHanChatController(void) */

void __thiscall CHanChatController::~CHanChatController(CHanChatController *this)

{
                    /* 0x8490  24  ??1CHanChatController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x60208499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CHanChatController_data);
  return;
}



/* ---- Net_HanChatString @ 602084a0 size=36 ---- */

/* public: int __thiscall CHanChatController::Net_HanChatString(struct IParam &) */

int __thiscall CHanChatController::Net_HanChatString(CHanChatController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x84a0  178  ?Net_HanChatString@CHanChatController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("hanChat","procHanChatString",param_1,1);
  return 0;
}



/* ---- Evt_HanChatView_OnSendHanChatString @ 602084d0 size=65 ---- */

/* public: int __thiscall CHanChatController::Evt_HanChatView_OnSendHanChatString(struct IParam &)
    */

int __thiscall
CHanChatController::Evt_HanChatView_OnSendHanChatString(CHanChatController *this,IParam *param_1)

{
  CHanChatController_vftable *pCVar1;
  IGod *pIVar2;
  int iVar3;
  
                    /* 0x84d0  120
                       ?Evt_HanChatView_OnSendHanChatString@CHanChatController@@QAEHAAUIParam@@@Z */
  if ((uint)this[3].CHanChatController_data < 0x10) {
    pCVar1 = (CHanChatController_vftable *)(this + 1);
  }
  else {
    pCVar1 = this[1].vftablePtr;
  }
  (**(code **)(*(int *)param_1 + 0x20))(&DAT_6020d56c,pCVar1);
  pIVar2 = God();
  iVar3 = (**(code **)(*(int *)pIVar2 + 0x10))("hanChat","sendHanChatMsg",param_1,1);
  return iVar3;
}



/* ---- Evt_HanChatView_OnChatTextColorChange @ 60208520 size=34 ---- */

/* public: int __thiscall CHanChatController::Evt_HanChatView_OnChatTextColorChange(struct IParam &)
    */

int __thiscall
CHanChatController::Evt_HanChatView_OnChatTextColorChange(CHanChatController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x8520  119
                       ?Evt_HanChatView_OnChatTextColorChange@CHanChatController@@QAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("hanChat","setChatEditTextColor",param_1,1);
  return iVar2;
}



/* ---- Evt_ChannelLobby_OnChannelJoinComplete @ 60208550 size=253 ---- */

/* public: int __thiscall CHanChatController::Evt_ChannelLobby_OnChannelJoinComplete(struct IParam
   &) */

int __thiscall
CHanChatController::Evt_ChannelLobby_OnChannelJoinComplete(CHanChatController *this,IParam *param_1)

{
  undefined4 *puVar1;
  IGod *pIVar2;
  int iVar3;
  undefined4 uStack_a8;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_98 [4];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x8550  66
                       ?Evt_ChannelLobby_OnChannelJoinComplete@CHanChatController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b228;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_98;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  uStack_a8 = (char *)0x602085ae;
  puVar1 = (undefined4 *)LoadStr((int)local_98);
  local_4._0_1_ = 1;
  uStack_a8 = (char *)0x602085cb;
  CParam::AddValue(local_94,"k2e",(char *)*puVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_98);
  uStack_a8 = (char *)0x602085f1;
  CParam::AddValue(local_94,"k40e",0xa9a9a9);
  pIVar2 = God();
  uStack_a8 = "chatNoticeMessage";
  (**(code **)(*(int *)pIVar2 + 0x10))("hanChat");
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)(local_98 + -0xc));
  ExceptionList = pvStack_1c;
  iVar3 = __security_check_cookie(uStack_20 ^ (uint)&uStack_a8);
  return iVar3;
}



/* ---- scalar_deleting_destructor @ 60208650 size=18 ---- */

void __thiscall
CMFunctor<CHanChatController>::scalar_deleting_destructor(CMFunctor<CHanChatController> *this)

{
  if (this != (CMFunctor<CHanChatController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CHanChatController>::~CMFunctor<CHanChatController> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- vfunction3 @ 60208670 size=18 ---- */

void __thiscall
CMFunctor<CChannelListLobbyController>::vfunction3
          (CMFunctor<CChannelListLobbyController> *this,undefined4 *param_1)

{
  CMFunctor<CChannelListLobbyController>_vftable *pCVar1;
  
  pCVar1 = this[1].vftablePtr;
  param_1[1] = this[2].vftablePtr;
  *param_1 = pCVar1;
  return;
}



/* ---- ~CLobbyStateController @ 60208690 size=11 ---- */

/* public: __thiscall CLobbyStateController::CLobbyStateController(class CLobbyStateController const
   &) */

void __thiscall
CLobbyStateController::~CLobbyStateController
          (CLobbyStateController *this,CLobbyStateController *param_1)

{
                    /* 0x8690  9  ??0CLobbyStateController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CLobbyStateController @ 602086a0 size=9 ---- */

/* public: __thiscall CLobbyStateController::CLobbyStateController(void) */

void __thiscall CLobbyStateController::~CLobbyStateController(CLobbyStateController *this)

{
                    /* 0x86a0  10  ??0CLobbyStateController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CLobbyStateController @ 602086b0 size=7 ---- */

/* public: __thiscall CLobbyStateController::~CLobbyStateController(void) */

void __thiscall CLobbyStateController::~CLobbyStateController(CLobbyStateController *this)

{
                    /* 0x86b0  25  ??1CLobbyStateController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CLobbyStateController::OnAttached @ 602086c0 size=135 ---- */

/* public: virtual bool __thiscall CLobbyStateController::OnAttached(void) */

bool __thiscall
CLobbyStateController::CLobbyStateController__OnAttached(CLobbyStateController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x86c0  205  ?OnAttached@CLobbyStateController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CLobbyStateController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_LobbyState_OnStateChanged;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("lobbyState","onStateChanged",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CLobbyStateController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_MainFrame_OnDestroy;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("mainFrame","onDestroy",puVar2,1);
  return true;
}



/* ---- CLobbyStateController::OnDetached @ 60208750 size=22 ---- */

/* public: virtual bool __thiscall CLobbyStateController::OnDetached(void) */

bool __thiscall
CLobbyStateController::CLobbyStateController__OnDetached(CLobbyStateController *this)

{
                    /* 0x8750  214  ?OnDetached@CLobbyStateController@@UAE_NXZ */
  if (this != (CLobbyStateController *)0x0) {
                    /* inlined destructor: CLobbyStateController::~CLobbyStateController */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- Evt_LobbyState_OnStateChanged @ 60208770 size=146 ---- */

/* public: int __thiscall CLobbyStateController::Evt_LobbyState_OnStateChanged(struct IParam &) */

int __thiscall
CLobbyStateController::Evt_LobbyState_OnStateChanged(CLobbyStateController *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x8770  121
                       ?Evt_LobbyState_OnStateChanged@CLobbyStateController@@QAEHAAUIParam@@@Z */
  puVar5 = &DAT_6020d5f0;
  local_8 = 0;
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020d5f0,&local_8);
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020d5f8,(int)register0x00000010 + -0xc);
  pIVar1 = God();
  uVar4 = 0;
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(puVar5,"activateOff",param_1,0);
  pIVar1 = God();
  iVar3 = (**(code **)(*(int *)pIVar1 + 0x10))(uVar4,"activateOn",param_1,0);
  if ((iVar2 < 0) || (iVar3 < 0)) {
    return -1;
  }
  return 0;
}



/* ---- Evt_MainFrame_OnDestroy @ 60208810 size=38 ---- */

/* public: int __thiscall CLobbyStateController::Evt_MainFrame_OnDestroy(struct IParam &) */

int __thiscall
CLobbyStateController::Evt_MainFrame_OnDestroy(CLobbyStateController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x8810  126
                       ?Evt_MainFrame_OnDestroy@CLobbyStateController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("lobbyState","activateOffCurState",Void_exref,1);
  return 0;
}



/* ---- scalar_deleting_destructor @ 60208840 size=18 ---- */

void __thiscall
CMFunctor<CLobbyStateController>::scalar_deleting_destructor(CMFunctor<CLobbyStateController> *this)

{
  if (this != (CMFunctor<CLobbyStateController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CLobbyStateController>::~CMFunctor<CLobbyStateController> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- ~CMainFrameController @ 60208860 size=11 ---- */

/* public: __thiscall CMainFrameController::CMainFrameController(class CMainFrameController const &)
    */

void __thiscall
CMainFrameController::~CMainFrameController
          (CMainFrameController *this,CMainFrameController *param_1)

{
                    /* 0x8860  11  ??0CMainFrameController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CMainFrameController @ 60208870 size=9 ---- */

/* public: __thiscall CMainFrameController::CMainFrameController(void) */

void __thiscall CMainFrameController::~CMainFrameController(CMainFrameController *this)

{
                    /* 0x8870  12  ??0CMainFrameController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CMainFrameController @ 60208880 size=7 ---- */

/* public: __thiscall CMainFrameController::~CMainFrameController(void) */

void __thiscall CMainFrameController::~CMainFrameController(CMainFrameController *this)

{
                    /* 0x8880  26  ??1CMainFrameController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CMainFrameController::OnAttached @ 60208890 size=72 ---- */

/* public: virtual bool __thiscall CMainFrameController::OnAttached(void) */

bool __thiscall CMainFrameController::CMainFrameController__OnAttached(CMainFrameController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x8890  206  ?OnAttached@CMainFrameController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CMainFrameController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_MainFrame_OnDestroy;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("mainFrame","onDestroy",puVar2,1);
  return true;
}



/* ---- CMainFrameController::OnDetached @ 602088e0 size=22 ---- */

/* public: virtual bool __thiscall CMainFrameController::OnDetached(void) */

bool __thiscall CMainFrameController::CMainFrameController__OnDetached(CMainFrameController *this)

{
                    /* 0x88e0  215  ?OnDetached@CMainFrameController@@UAE_NXZ */
  if (this != (CMainFrameController *)0x0) {
                    /* inlined destructor: CMainFrameController::~CMainFrameController */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- Evt_MainFrameView_OnClickExitBtn @ 60208900 size=38 ---- */

/* public: int __thiscall CMainFrameController::Evt_MainFrameView_OnClickExitBtn(struct IParam &) */

int __thiscall
CMainFrameController::Evt_MainFrameView_OnClickExitBtn(CMainFrameController *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x8900  124
                       ?Evt_MainFrameView_OnClickExitBtn@CMainFrameController@@QAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("mainFrame","destroy",Void_exref,1);
  return 0;
}



/* ---- Evt_MainFrame_OnDestroy @ 60208930 size=66 ---- */

/* public: int __thiscall CMainFrameController::Evt_MainFrame_OnDestroy(struct IParam &) */

int __thiscall
CMainFrameController::Evt_MainFrame_OnDestroy(CMainFrameController *this,IParam *param_1)

{
  SGlobalInfo *this_00;
  CWndProperty *this_01;
  IGod *pIVar1;
  
                    /* 0x8930  127  ?Evt_MainFrame_OnDestroy@CMainFrameController@@QAEHAAUIParam@@@Z
                        */
  nsClone::StopCloneCheckMutex();
  this_00 = GInfo();
  this_01 = SGlobalInfo::WndProperty(this_00);
  CWndProperty::RemoveWndProp(this_01);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_6020c550,"clearDialogList",Void_exref,1);
  return 0;
}



/* ---- scalar_deleting_destructor @ 60208980 size=18 ---- */

void __thiscall
CMFunctor<CMainFrameController>::scalar_deleting_destructor(CMFunctor<CMainFrameController> *this)

{
  if (this != (CMFunctor<CMainFrameController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CMainFrameController>::~CMFunctor<CMainFrameController> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CNetworkController @ 602089a0 size=46 ---- */

/* public: __thiscall CNetworkController::CNetworkController(class CNetworkController const &) */

CNetworkController * __thiscall
CNetworkController::CNetworkController(CNetworkController *this,CNetworkController *param_1)

{
                    /* 0x89a0  13  ??0CNetworkController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CNetworkController_data,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  (this->CNetworkController_data).offset_0x1c = param_1[0x20];
  (this->CNetworkController_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  return this;
}



/* ---- operator= @ 602089d0 size=40 ---- */

/* public: class CNetworkController & __thiscall CNetworkController::operator=(class
   CNetworkController const &) */

CNetworkController * __thiscall
CNetworkController::operator=(CNetworkController *this,CNetworkController *param_1)

{
                    /* 0x89d0  37  ??4CNetworkController@@QAEAAV0@ABV0@@Z */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CNetworkController_data,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4));
  (this->CNetworkController_data).offset_0x1c = param_1[0x20];
  (this->CNetworkController_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  return (CNetworkController *)this;
}



/* ---- CNetworkController::OnAttached @ 60208a00 size=281 ---- */

/* public: virtual bool __thiscall CNetworkController::OnAttached(void) */

bool __thiscall CNetworkController::CNetworkController__OnAttached(CNetworkController *this)

{
  undefined1 uVar1;
  IGod *pIVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puStack_118;
  undefined1 auStack_108 [244];
  uint uStack_14;
  uint local_4;
  
                    /* 0x8a00  207  ?OnAttached@CNetworkController@@UAE_NXZ */
  local_4 = DAT_60215018 ^ (uint)auStack_108;
  CreateNotifyWnd(this);
  pIVar2 = God();
  puStack_118 = (undefined4 *)0x60208a2b;
  puStack_118 = operator_new(0xc);
  if (puStack_118 == (undefined4 *)0x0) {
    puStack_118 = (undefined4 *)0x0;
  }
  else {
    *puStack_118 = &CMFunctor<CNetworkController>::vftable;
    puStack_118[1] = this;
    puStack_118[2] = Evt_SetNetworkMessage;
  }
  if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
    puVar4 = &(this->CNetworkController_data).field_0x4;
  }
  else {
    puVar4 = *(undefined1 **)&(this->CNetworkController_data).field_0x4;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))(puVar4,"onSetNetworkMessage");
  CGameFinder::CGameFinder((CGameFinder *)&puStack_118);
  iVar3 = CGameFinder::isPokerKind((CGameFinder *)&puStack_118);
  if (iVar3 == 0) {
    iVar3 = CGameFinder::isNewHoola((CGameFinder *)&puStack_118);
    if (iVar3 == 0) {
      iVar3 = CGameFinder::isGostopKind((CGameFinder *)&puStack_118);
      if (iVar3 == 0) {
        iVar3 = CGameFinder::isSinyutnori((CGameFinder *)&puStack_118);
        if (iVar3 == 0) {
          iVar3 = CGameFinder::isSinyutnoriHGCJ((CGameFinder *)&puStack_118);
          if (iVar3 == 0) {
            iVar3 = CGameFinder::isTet4((CGameFinder *)&puStack_118);
            if (iVar3 == 0) {
              iVar3 = CGameFinder::isTET4OBS((CGameFinder *)&puStack_118);
              if (iVar3 == 0) {
                iVar3 = CGameFinder::isPBAND((CGameFinder *)&puStack_118);
                if (iVar3 == 0) {
                  iVar3 = CGameFinder::isSPanPan((CGameFinder *)&puStack_118);
                  if (iVar3 == 0) {
                    iVar3 = CGameFinder::isGameGenKind((CGameFinder *)&puStack_118);
                    if (iVar3 == 0) goto LAB_60208b00;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (this->CNetworkController_data).offset_0x1c = 1;
LAB_60208b00:
  uVar1 = __security_check_cookie(uStack_14 ^ (uint)&puStack_118);
  return (bool)uVar1;
}



/* ---- CNetworkController::OnDetached @ 60208b20 size=41 ---- */

/* public: virtual bool __thiscall CNetworkController::OnDetached(void) */

bool __thiscall CNetworkController::CNetworkController__OnDetached(CNetworkController *this)

{
                    /* 0x8b20  216  ?OnDetached@CNetworkController@@UAE_NXZ */
  DestroyWindow((HWND)(this->CNetworkController_data).offset_0x20);
                    /* inlined destructor: CNetworkController::~CNetworkController */
  this->vftablePtr = &_vftable_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CNetworkController_data);
  operator_delete(this);
  return true;
}



/* ---- CNetworkController @ 60208b50 size=112 ---- */

/* public: __thiscall CNetworkController::CNetworkController(char const *) */

CNetworkController * __thiscall
CNetworkController::CNetworkController(CNetworkController *this,char *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8b50  14  ??0CNetworkController@@QAE@PBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b93c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CNetworkController_data);
  local_4 = 0;
  (this->CNetworkController_data).offset_0x20 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CNetworkController_data,param_1);
  (this->CNetworkController_data).offset_0x1c = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- ~CNetworkController @ 60208bc0 size=15 ---- */

/* public: __thiscall CNetworkController::~CNetworkController(void) */

void __thiscall CNetworkController::~CNetworkController(CNetworkController *this)

{
                    /* 0x8bc0  27  ??1CNetworkController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x60208bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->CNetworkController_data);
  return;
}



/* ---- Evt_SetNetworkMessage @ 60208bd0 size=119 ---- */

/* public: int __thiscall CNetworkController::Evt_SetNetworkMessage(struct IParam &) */

int __thiscall CNetworkController::Evt_SetNetworkMessage(CNetworkController *this,IParam *param_1)

{
  uint uStack_2c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x8bd0  130  ?Evt_SetNetworkMessage@CNetworkController@@QAEHAAUIParam@@@Z */
  puStack_c = &LAB_6020b1f0;
  local_10 = ExceptionList;
  uStack_2c = DAT_60215018 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (int *)0x0;
  (**(code **)(*(int *)param_1 + 0x58))(&DAT_6020d688,&local_18);
  (**(code **)(*local_18 + 0x18))((this->CNetworkController_data).offset_0x20,0x829);
  ExceptionList = local_10;
  return 0;
}



/* ---- Catch@60208c47 @ 60208c47 size=29 ---- */

undefined4 Catch_60208c47(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x18);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return 0x60208c31;
}



/* ---- CreateNotifyWnd @ 60208c70 size=145 ---- */

/* protected: bool __thiscall CNetworkController::CreateNotifyWnd(void) */

bool __thiscall CNetworkController::CreateNotifyWnd(CNetworkController *this)

{
  AFX_MODULE_STATE *pAVar1;
  HWND hWnd;
  WNDCLASSA local_28;
  
                    /* 0x8c70  51  ?CreateNotifyWnd@CNetworkController@@IAE_NXZ */
  local_28.style = 0;
  local_28.lpfnWndProc = FUN_60209300;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  pAVar1 = AfxGetModuleState();
  local_28.hInstance = *(HINSTANCE *)(pAVar1 + 8);
  local_28.hIcon = (HICON)0x0;
  local_28.hCursor = (HCURSOR)0x0;
  local_28.hbrBackground = (HBRUSH)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.lpszClassName = "NwNotifyWnd";
  RegisterClassA(&local_28);
  pAVar1 = AfxGetModuleState();
  hWnd = CreateWindowExA(0,"NwNotifyWnd",(LPCSTR)&PTR_6020d4d8,0x80000000,0,0,0,0,(HWND)0x0,
                         (HMENU)0x0,*(HINSTANCE *)(pAVar1 + 8),(LPVOID)0x0);
  (this->CNetworkController_data).offset_0x20 = hWnd;
  SetWindowLongA(hWnd,-0x15,(LONG)this);
  return (this->CNetworkController_data).offset_0x20 != 0;
}



/* ---- CNetworkController::OnSocketClose @ 60208d10 size=189 ---- */

/* protected: virtual int __thiscall CNetworkController::OnSocketClose(class ISocket *,int) */

int __thiscall
CNetworkController::CNetworkController__OnSocketClose
          (CNetworkController *this,ISocket *param_1,int param_2)

{
  IGod *pIVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uStack_b0;
  CParam local_9c [132];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x8d10  219  ?OnSocketClose@CNetworkController@@MAEHPAVISocket@@H@Z */
  puStack_c = &LAB_6020b1bc;
  local_10 = ExceptionList;
  uStack_b0 = DAT_60215018 ^ (uint)(local_9c + 0x98);
  local_14 = (undefined1 *)&uStack_b0;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_b0;
  CParam::CParam(local_9c,false);
  local_8._0_1_ = 1;
  CParam::AddValue(local_9c,"k161e",param_2);
  pIVar1 = God();
  if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
    puVar3 = &(this->CNetworkController_data).field_0x4;
  }
  else {
    puVar3 = *(undefined1 **)&(this->CNetworkController_data).field_0x4;
  }
  (**(code **)(*(int *)pIVar1 + 0x3c))(puVar3,"socketClose",local_9c,0);
  local_8 = (uint)local_8._1_3_ << 8;
  CParam::~CParam(local_9c);
  ExceptionList = local_10;
  iVar2 = __security_check_cookie(local_18 ^ (uint)(local_9c + 0x98));
  return iVar2;
}



/* ---- Catch@60208dcd @ 60208dcd size=32 ---- */

undefined4 Catch_60208dcd(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x9c);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return 0x60208dac;
}



/* ---- CNetworkController::OnSocketConnect @ 60208df0 size=189 ---- */

/* protected: virtual int __thiscall CNetworkController::OnSocketConnect(class ISocket *,int) */

int __thiscall
CNetworkController::CNetworkController__OnSocketConnect
          (CNetworkController *this,ISocket *param_1,int param_2)

{
  IGod *pIVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uStack_b0;
  CParam local_9c [132];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x8df0  220  ?OnSocketConnect@CNetworkController@@MAEHPAVISocket@@H@Z */
  puStack_c = &LAB_6020b17c;
  local_10 = ExceptionList;
  uStack_b0 = DAT_60215018 ^ (uint)(local_9c + 0x98);
  local_14 = (undefined1 *)&uStack_b0;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_b0;
  CParam::CParam(local_9c,false);
  local_8._0_1_ = 1;
  CParam::AddValue(local_9c,"k161e",param_2);
  pIVar1 = God();
  if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
    puVar3 = &(this->CNetworkController_data).field_0x4;
  }
  else {
    puVar3 = *(undefined1 **)&(this->CNetworkController_data).field_0x4;
  }
  (**(code **)(*(int *)pIVar1 + 0x3c))(puVar3,"socketConnect",local_9c,0);
  local_8 = (uint)local_8._1_3_ << 8;
  CParam::~CParam(local_9c);
  ExceptionList = local_10;
  iVar2 = __security_check_cookie(local_18 ^ (uint)(local_9c + 0x98));
  return iVar2;
}



/* ---- Catch@60208ead @ 60208ead size=32 ---- */

undefined4 Catch_60208ead(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x9c);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return 0x60208e8c;
}



/* ---- CNetworkController::OnSocketReceive @ 60208ed0 size=799 ---- */

/* protected: virtual int __thiscall CNetworkController::OnSocketReceive(class ISocket *,int) */

int __thiscall
CNetworkController::CNetworkController__OnSocketReceive
          (CNetworkController *this,ISocket *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  byte *pbVar4;
  char *pcVar5;
  IGod *pIVar6;
  int iVar7;
  SGlobalInfo *pSVar8;
  CGlobalGameEvent *pCVar9;
  CFunctor *pCVar10;
  IFunctor *pIVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int iVar14;
  bool bVar15;
  uint uStack_12c;
  CMetpParser local_11c [13];
  char local_10f;
  undefined4 local_f4;
  int local_b8;
  XMemoryStream local_b4 [8];
  ISocket *local_ac;
  CNetworkController *local_a8;
  int local_a4;
  char *local_a0;
  undefined1 *local_9c;
  void *local_98;
  undefined1 *puStack_94;
  undefined4 local_90;
  CParam local_8c [132];
  uint local_8;
  
                    /* 0x8ed0  221  ?OnSocketReceive@CNetworkController@@MAEHPAVISocket@@H@Z */
  local_90 = 0xffffffff;
  puStack_94 = &LAB_6020b13e;
  local_98 = ExceptionList;
  uStack_12c = DAT_60215018 ^ (uint)local_8c;
  local_9c = (undefined1 *)&uStack_12c;
  ExceptionList = &local_98;
  local_ac = param_1;
  local_a8 = this;
  local_8 = uStack_12c;
  if ((param_2 == 0x2733) || (puVar3 = &uStack_12c, param_2 == 0)) {
    local_a0 = (char *)0x0;
    iVar14 = 1;
    while (puVar3 = (uint *)local_9c, iVar14 != 0) {
      if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
        pbVar12 = &(this->CNetworkController_data).field_0x4;
      }
      else {
        pbVar12 = *(byte **)&(this->CNetworkController_data).field_0x4;
      }
      pbVar4 = &DAT_6020ced0;
      do {
        bVar1 = *pbVar4;
        bVar15 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_60208f80:
          iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_60208f85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar15 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_60208f80;
        pbVar4 = pbVar4 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      iVar14 = 0;
LAB_60208f85:
      if (iVar14 == 0) {
        CParam::CParam(local_8c,false);
        local_90 = 0;
        if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
          pcVar5 = &(this->CNetworkController_data).field_0x4;
        }
        else {
          pcVar5 = *(char **)&(this->CNetworkController_data).field_0x4;
        }
        CParam::AddValue(local_8c,"k1.1",pcVar5);
        pIVar6 = God();
        iVar14 = (**(code **)(*(int *)pIVar6 + 0x10))("network","checkSocketLife",local_8c,1);
        local_90 = 0xffffffff;
        if (iVar14 != 0) {
          CParam::~CParam(local_8c);
          puVar3 = (uint *)local_9c;
          break;
        }
        CParam::~CParam(local_8c);
      }
      iVar14 = (**(code **)(*(int *)param_1 + 0x1c))(&local_a0,&local_a4);
      local_b8 = iVar14;
      if (local_a0 != (char *)0x0) {
        CMetpParser::CMetpParser(local_11c);
        local_90 = 1;
        if ((this->CNetworkController_data).offset_0x1c == '\0') {
          CMetpParser::SetParser(local_11c,local_a0,local_a4,(char *)0x0);
          (**(code **)(*(int *)param_1 + 0x24))(&local_a0);
          if (local_10f != '\0') goto LAB_6020912e;
        }
        else {
          XMemoryStream::XMemoryStream(local_b4);
          local_90._0_1_ = 2;
          XMemoryStream::Write(local_b4,local_a0,local_a4);
          iVar7 = PC_ConvertX2M((IXStream *)local_b4,(IParam *)local_11c);
          if (iVar7 < 0x40000000) {
            (**(code **)(*(int *)param_1 + 0x24))(&local_a0);
          }
          else {
            CMetpParser::SetParser(local_11c,local_a0,local_a4,(char *)0x0);
            (**(code **)(*(int *)param_1 + 0x24))(&local_a0);
            if (local_10f == '\0') {
              local_90 = CONCAT31(local_90._1_3_,1);
              XMemoryStream::~XMemoryStream(local_b4);
              goto LAB_602090ce;
            }
          }
          local_90 = CONCAT31(local_90._1_3_,1);
          XMemoryStream::~XMemoryStream(local_b4);
LAB_6020912e:
          local_90 = CONCAT31(local_90._1_3_,3);
          if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
            pbVar12 = &(this->CNetworkController_data).field_0x4;
          }
          else {
            pbVar12 = *(byte **)&(this->CNetworkController_data).field_0x4;
          }
          pbVar4 = &DAT_6020ced0;
          do {
            bVar1 = *pbVar4;
            bVar15 = bVar1 < *pbVar12;
            if (bVar1 != *pbVar12) {
LAB_60209165:
              iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_6020916a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar15 = bVar1 < pbVar12[1];
            if (bVar1 != pbVar12[1]) goto LAB_60209165;
            pbVar4 = pbVar4 + 2;
            pbVar12 = pbVar12 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_6020916a:
          if (iVar7 == 0) {
            pSVar8 = GInfo();
            pCVar9 = SGlobalInfo::GameEvent(pSVar8);
            pCVar10 = CGlobalGameEvent::FntDispatchService(pCVar9);
            pIVar11 = CFunctor::Get(pCVar10);
            if (pIVar11 != (IFunctor *)0x0) {
              pSVar8 = GInfo();
              pCVar9 = SGlobalInfo::GameEvent(pSVar8);
              pCVar10 = CGlobalGameEvent::FntDispatchService(pCVar9);
              CFunctor::Call(pCVar10,(IParam *)local_11c);
              goto LAB_602090ce;
            }
          }
          uVar2 = local_f4;
          pIVar6 = God();
          if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
            puVar13 = &(this->CNetworkController_data).field_0x4;
          }
          else {
            puVar13 = *(undefined1 **)&(this->CNetworkController_data).field_0x4;
          }
          (**(code **)(*(int *)pIVar6 + 0x3c))(puVar13,uVar2,local_11c,0);
          this = local_a8;
          param_1 = local_ac;
        }
LAB_602090ce:
        local_90 = 0xffffffff;
        CMetpParser::~CMetpParser(local_11c);
      }
    }
  }
  local_9c = (undefined1 *)puVar3;
  ExceptionList = local_98;
  iVar14 = __security_check_cookie(local_8 ^ (uint)local_8c);
  return iVar14;
}



/* ---- Catch@602091ef @ 602091ef size=29 ---- */

undefined * Catch_602091ef(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x30);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return &DAT_6020920c;
}



/* ---- CNetworkController::OnSocketSend @ 60209220 size=189 ---- */

/* protected: virtual int __thiscall CNetworkController::OnSocketSend(class ISocket *,int) */

int __thiscall
CNetworkController::CNetworkController__OnSocketSend
          (CNetworkController *this,ISocket *param_1,int param_2)

{
  IGod *pIVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uStack_b0;
  CParam local_9c [132];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x9220  222  ?OnSocketSend@CNetworkController@@MAEHPAVISocket@@H@Z */
  puStack_c = &LAB_6020b0ec;
  local_10 = ExceptionList;
  uStack_b0 = DAT_60215018 ^ (uint)(local_9c + 0x98);
  local_14 = (undefined1 *)&uStack_b0;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_b0;
  CParam::CParam(local_9c,false);
  local_8._0_1_ = 1;
  CParam::AddValue(local_9c,"k161e",param_2);
  pIVar1 = God();
  if (*(uint *)&(this->CNetworkController_data).field_0x18 < 0x10) {
    puVar3 = &(this->CNetworkController_data).field_0x4;
  }
  else {
    puVar3 = *(undefined1 **)&(this->CNetworkController_data).field_0x4;
  }
  (**(code **)(*(int *)pIVar1 + 0x3c))(puVar3,"socketSend",local_9c,0);
  local_8 = (uint)local_8._1_3_ << 8;
  CParam::~CParam(local_9c);
  ExceptionList = local_10;
  iVar2 = __security_check_cookie(local_18 ^ (uint)(local_9c + 0x98));
  return iVar2;
}



/* ---- Catch@602092dd @ 602092dd size=32 ---- */

undefined4 Catch_602092dd(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x9c);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return 0x602092bc;
}



/* ---- FUN_60209300 @ 60209300 size=159 ---- */

LRESULT FUN_60209300(HWND param_1,UINT param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  LRESULT LVar3;
  
  if (param_2 == 0x829) {
    piVar1 = (int *)GetWindowLongA(param_1,-0x15);
    if (param_4 == 0) {
      return 0;
    }
    uVar2 = param_3 >> 0x10;
    switch(param_3 & 0xffff) {
    case 0x7e9:
      LVar3 = (**(code **)(*piVar1 + 0xc))(param_4,uVar2);
      return LVar3;
    case 0x7ea:
      LVar3 = (**(code **)(*piVar1 + 8))(param_4,uVar2);
      return LVar3;
    case 0x7eb:
      LVar3 = (**(code **)(*piVar1 + 0x10))(param_4,uVar2);
      return LVar3;
    case 0x7ec:
      LVar3 = (**(code **)(*piVar1 + 0x14))(param_4,uVar2);
      return LVar3;
    }
  }
  LVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar3;
}



/* ---- scalar_deleting_destructor @ 602093b0 size=18 ---- */

void __thiscall
CMFunctor<CNetworkController>::scalar_deleting_destructor(CMFunctor<CNetworkController> *this)

{
  if (this != (CMFunctor<CNetworkController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CNetworkController>::~CMFunctor<CNetworkController> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CReportClickToWeb @ 602093d0 size=20 ---- */

/* public: __thiscall CReportClickToWeb::CReportClickToWeb(class CReportClickToWeb const &) */

CReportClickToWeb * __thiscall
CReportClickToWeb::CReportClickToWeb(CReportClickToWeb *this,CReportClickToWeb *param_1)

{
                    /* 0x93d0  15  ??0CReportClickToWeb@@QAE@ABV0@@Z */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_1
            );
  return this;
}



/* ---- operator= @ 602093f0 size=20 ---- */

/* public: class CReportClickToWeb & __thiscall CReportClickToWeb::operator=(class CReportClickToWeb
   const &) */

CReportClickToWeb * __thiscall
CReportClickToWeb::operator=(CReportClickToWeb *this,CReportClickToWeb *param_1)

{
                    /* 0x93f0  39  ??4CReportClickToWeb@@QAEAAV0@ABV0@@Z */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_1
            );
  return this;
}



/* ---- ReportClickToWeb @ 60209410 size=104 ---- */

/* class CReportClickToWeb & __cdecl ReportClickToWeb(void) */

CReportClickToWeb * __cdecl ReportClickToWeb(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9410  223  ?ReportClickToWeb@@YAAAVCReportClickToWeb@@XZ */
  puStack_8 = &LAB_6020b0be;
  local_c = ExceptionList;
  if ((DAT_60215844 & 1) == 0) {
    DAT_60215844 = DAT_60215844 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_60215828);
    _atexit((_func_4879 *)&LAB_6020be70);
  }
  ExceptionList = local_c;
  return (CReportClickToWeb *)&DAT_60215828;
}



/* ---- CReportClickToWeb @ 60209480 size=13 ---- */

/* public: __thiscall CReportClickToWeb::CReportClickToWeb(void) */

CReportClickToWeb * __thiscall CReportClickToWeb::CReportClickToWeb(CReportClickToWeb *this)

{
                    /* 0x9480  16  ??0CReportClickToWeb@@QAE@XZ */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this);
  return this;
}



/* ---- ~CReportClickToWeb @ 60209490 size=6 ---- */

/* public: __thiscall CReportClickToWeb::~CReportClickToWeb(void) */

void __thiscall CReportClickToWeb::~CReportClickToWeb(CReportClickToWeb *this)

{
                    /* WARNING: Could not recover jumptable at 0x60209490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x9490  28  ??1CReportClickToWeb@@QAE@XZ */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this);
  return;
}



/* ---- ReportToWeb @ 602094a0 size=344 ---- */

/* public: int __thiscall CReportClickToWeb::ReportToWeb(char const *) */

int __thiscall CReportClickToWeb::ReportToWeb(CReportClickToWeb *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_60;
  char **ppcStack_5c;
  undefined4 *puStack_58;
  char *pcStack_54;
  char *pcStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x94a0  224  ?ReportToWeb@CReportClickToWeb@@QAEHPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b089;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(this + 0x14) != 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_1c);
    local_4 = 0;
    pcStack_38 = (char *)0x60209502;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (local_1c,(char *)local_1c);
    pcStack_38 = "Hangame2005";
    local_14 = 10000;
    local_10 = 4;
    uStack_3c = 0x60209528;
    pcVar1 = (char *)InternetOpenA();
    if (pcVar1 != (char *)0x0) {
      uStack_3c = 0x6020953e;
      pcStack_38 = pcVar1;
      InternetSetOptionA();
      uStack_3c = 0;
      uStack_40 = 0x84000000;
      uStack_44 = 0;
      uStack_48 = 0;
      iStack_4c = 4;
      pcStack_54 = (char *)0x60209555;
      pcStack_50 = pcVar1;
      iVar2 = InternetOpenUrlA();
      if (iVar2 != 0) {
        pcStack_54 = (char *)0x0;
        puStack_58 = &uStack_3c;
        ppcStack_5c = &pcStack_38;
        uStack_60 = 0x20000013;
        HttpQueryInfoA(iVar2);
        if (iStack_4c == 200) {
          InternetCloseHandle(iVar2);
          InternetCloseHandle(pcVar1);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack_60);
          ExceptionList = pcStack_50;
          return 1;
        }
        InternetCloseHandle(iVar2);
        InternetCloseHandle(pcVar1);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack_60);
        ExceptionList = pcStack_50;
        return 0;
      }
      puStack_58 = (undefined4 *)0x60209562;
      pcStack_54 = pcVar1;
      InternetCloseHandle();
    }
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_1c);
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- SetURL @ 60209600 size=6 ---- */

/* public: void __thiscall CReportClickToWeb::SetURL(char const *) */

void __thiscall CReportClickToWeb::SetURL(CReportClickToWeb *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60209600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x9600  226  ?SetURL@CReportClickToWeb@@QAEXPBD@Z */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,param_1);
  return;
}



/* ---- ~CReportClickToWebController @ 60209610 size=11 ---- */

/* public: __thiscall CReportClickToWebController::CReportClickToWebController(class
   CReportClickToWebController const &) */

void __thiscall
CReportClickToWebController::~CReportClickToWebController
          (CReportClickToWebController *this,CReportClickToWebController *param_1)

{
                    /* 0x9610  17  ??0CReportClickToWebController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CReportClickToWebController::OnAttached @ 60209620 size=639 ---- */

/* public: virtual bool __thiscall CReportClickToWebController::OnAttached(void) */

bool __thiscall
CReportClickToWebController::CReportClickToWebController__OnAttached
          (CReportClickToWebController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x9620  208  ?OnAttached@CReportClickToWebController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickDirectStartBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickAutoCreateRoomBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickChangeChannel",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickShowEmptyRoomBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickShowRoomNumOrderBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickSearchRoomBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickGuildCtrl",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_ChannelView_OnClickRecommendedGameBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickRecommendedGameBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_MainFrameView_OnClickExitBtn;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("mainFrameView","onClickExitBtn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CReportClickToWebController>::vftable;
    puVar2[1] = this;
    puVar2[2] = CGameLobbyController::CGameLobbyController__Evt_Alarm_ExitAlarm;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelView","onClickMyHomepageBtn",puVar2,1);
  return true;
}



/* ---- CReportClickToWebController::OnDetached @ 602098a0 size=22 ---- */

/* public: virtual bool __thiscall CReportClickToWebController::OnDetached(void) */

bool __thiscall
CReportClickToWebController::CReportClickToWebController__OnDetached
          (CReportClickToWebController *this)

{
                    /* 0x98a0  217  ?OnDetached@CReportClickToWebController@@UAE_NXZ */
  if (this != (CReportClickToWebController *)0x0) {
                    /* inlined destructor: CReportClickToWebController::~CReportClickToWebController
                        */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- CReportClickToWebController @ 602098c0 size=31 ---- */

/* public: __thiscall CReportClickToWebController::CReportClickToWebController(void) */

CReportClickToWebController * __thiscall
CReportClickToWebController::CReportClickToWebController(CReportClickToWebController *this)

{
  CReportClickToWeb *this_00;
  
                    /* 0x98c0  18  ??0CReportClickToWebController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  this_00 = ReportClickToWeb();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this_00,
             "http://click.hangame.com/click/counter.nhn?version=4.0h&item=0000&section=%s");
  return this;
}



/* ---- ~CReportClickToWebController @ 602098e0 size=7 ---- */

/* public: __thiscall CReportClickToWebController::~CReportClickToWebController(void) */

void __thiscall
CReportClickToWebController::~CReportClickToWebController(CReportClickToWebController *this)

{
                    /* 0x98e0  29  ??1CReportClickToWebController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- Evt_ChannelView_OnClickRecommendedGameBtn @ 602098f0 size=273 ---- */

/* protected: int __thiscall
   CReportClickToWebController::Evt_ChannelView_OnClickRecommendedGameBtn(struct IParam &) */

int __thiscall
CReportClickToWebController::Evt_ChannelView_OnClickRecommendedGameBtn
          (CReportClickToWebController *this,IParam *param_1)

{
  int iVar1;
  SGlobalInfo *this_00;
  char *pcVar2;
  CReportClickToWeb *this_01;
  bool bVar3;
  undefined4 local_11c;
  char *local_118;
  CGameFinder local_114 [260];
  uint local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x98f0  84
                       ?Evt_ChannelView_OnClickRecommendedGameBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  local_8 = &LAB_6020b8f8;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)&local_11c;
  ExceptionList = &local_c;
  CGameFinder::CGameFinder(local_114);
  iVar1 = CGameFinder::isGostopKind(local_114);
  if (iVar1 == 0) {
    iVar1 = CGameFinder::isPokerKind(local_114);
    if (iVar1 == 0) {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_11c);
      bVar3 = true;
      local_4 = 0;
      this_00 = GInfo();
      pcVar2 = SGlobalInfo::GetGameId(this_00,bVar3);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_118,pcVar2)
      ;
      local_4 = CONCAT31(local_4._1_3_,1);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::MakeLower
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_118);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_11c,
                 (char *)&local_11c);
      this_01 = ReportClickToWeb();
      CReportClickToWeb::ReportToWeb(this_01,local_118);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_114);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_118);
    }
  }
  ExceptionList = local_8;
  local_11c = 0x602099f8;
  iVar1 = __security_check_cookie((uint)local_c ^ (uint)&local_118);
  return iVar1;
}



/* ---- Evt_MainFrameView_OnClickExitBtn @ 60209a10 size=333 ---- */

/* protected: int __thiscall CReportClickToWebController::Evt_MainFrameView_OnClickExitBtn(struct
   IParam &) */

int __thiscall
CReportClickToWebController::Evt_MainFrameView_OnClickExitBtn
          (CReportClickToWebController *this,IParam *param_1)

{
  char cVar1;
  int iVar2;
  SGlobalInfo *this_00;
  char *pcVar3;
  CReportClickToWeb *this_01;
  bool bVar4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_120 [4];
  char *local_11c;
  int local_118;
  CGameFinder local_114 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9a10  125
                       ?Evt_MainFrameView_OnClickExitBtn@CReportClickToWebController@@IAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b8a8;
  local_c = ExceptionList;
  local_10 = DAT_60215018 ^ (uint)local_120;
  ExceptionList = &local_c;
  CGameFinder::CGameFinder(local_114);
  iVar2 = CGameFinder::isGostopKind(local_114);
  if ((iVar2 == 0) && (iVar2 = CGameFinder::isPokerKind(local_114), iVar2 == 0)) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_120);
    bVar4 = true;
    local_4 = 0;
    this_00 = GInfo();
    pcVar3 = SGlobalInfo::GetGameId(this_00,bVar4);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_11c,pcVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::MakeLower
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_11c);
    local_118 = 0;
    cVar1 = (**(code **)(*(int *)param_1 + 100))(&DAT_6020d798,&local_118);
    if ((cVar1 != '\0') && ((local_118 == 0 || (local_118 == 1)))) {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                (local_120,(char *)local_120);
      this_01 = ReportClickToWeb();
      CReportClickToWeb::ReportToWeb(this_01,local_11c);
    }
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_11c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_120);
  }
  ExceptionList = local_c;
  iVar2 = __security_check_cookie(local_10 ^ (uint)local_120);
  return iVar2;
}



/* ---- scalar_deleting_destructor @ 60209b60 size=18 ---- */

void __thiscall
CMFunctor<CReportClickToWebController>::scalar_deleting_destructor
          (CMFunctor<CReportClickToWebController> *this)

{
  if (this != (CMFunctor<CReportClickToWebController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CReportClickToWebController>::~CMFunctor<CReportClickToWebController>
                        */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- operator= @ 60209b80 size=22 ---- */

/* public: class CPNDcurve & __thiscall CPNDcurve::operator=(class CPNDcurve const &) */

CPNDcurve * __thiscall CPNDcurve::operator=(CPNDcurve *this,CPNDcurve *param_1)

{
  int iVar1;
  CPNDcurve *pCVar2;
  
                    /* 0x9b80  38  ??4CPNDcurve@@QAEAAV0@ABV0@@Z */
  pCVar2 = this;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}



/* ---- ~CSwitch2LobbyController @ 60209ba0 size=11 ---- */

/* public: __thiscall CSwitch2LobbyController::CSwitch2LobbyController(class CSwitch2LobbyController
   const &) */

void __thiscall
CSwitch2LobbyController::~CSwitch2LobbyController
          (CSwitch2LobbyController *this,CSwitch2LobbyController *param_1)

{
                    /* 0x9ba0  19  ??0CSwitch2LobbyController@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CSwitch2LobbyController::OnAttached @ 60209bb0 size=450 ---- */

/* public: virtual bool __thiscall CSwitch2LobbyController::OnAttached(void) */

bool __thiscall
CSwitch2LobbyController::CSwitch2LobbyController__OnAttached(CSwitch2LobbyController *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x9bb0  209  ?OnAttached@CSwitch2LobbyController@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CSwitch2LobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = EVT_Switch2_OnActivateOn;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020d7dc,"onActivateOn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CSwitch2LobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = EVT_Switch2_OnActivateOff;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_6020d7dc,"onActivateOff",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CSwitch2LobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Channel_CreateRoom;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d7e4,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CSwitch2LobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Channel_JoinRoom;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d7e8,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CSwitch2LobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Channel_JoinRoom;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d7f0,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CSwitch2LobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Channel_AutoEnterRoom;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))("channel",&DAT_6020d7f8,puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CSwitch2LobbyController>::vftable;
    puVar2[1] = this;
    puVar2[2] = Net_Game_SocketConnect;
  }
  (**(code **)(*(int *)pIVar1 + 0x24))(&DAT_6020ced0,"socketConnect",puVar2,1);
  return true;
}



/* ---- CSwitch2LobbyController::OnDetached @ 60209d80 size=22 ---- */

/* public: virtual bool __thiscall CSwitch2LobbyController::OnDetached(void) */

bool __thiscall
CSwitch2LobbyController::CSwitch2LobbyController__OnDetached(CSwitch2LobbyController *this)

{
                    /* 0x9d80  218  ?OnDetached@CSwitch2LobbyController@@UAE_NXZ */
  if (this != (CSwitch2LobbyController *)0x0) {
                    /* inlined destructor: CSwitch2LobbyController::~CSwitch2LobbyController */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- ~CSwitch2LobbyController @ 60209da0 size=9 ---- */

/* public: __thiscall CSwitch2LobbyController::CSwitch2LobbyController(void) */

void __thiscall CSwitch2LobbyController::~CSwitch2LobbyController(CSwitch2LobbyController *this)

{
                    /* 0x9da0  20  ??0CSwitch2LobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- ~CSwitch2LobbyController @ 60209db0 size=7 ---- */

/* public: __thiscall CSwitch2LobbyController::~CSwitch2LobbyController(void) */

void __thiscall CSwitch2LobbyController::~CSwitch2LobbyController(CSwitch2LobbyController *this)

{
                    /* 0x9db0  30  ??1CSwitch2LobbyController@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- EVT_Switch2_OnActivateOn @ 60209dc0 size=313 ---- */

/* public: int __thiscall CSwitch2LobbyController::EVT_Switch2_OnActivateOn(struct IParam &) */

int __thiscall
CSwitch2LobbyController::EVT_Switch2_OnActivateOn(CSwitch2LobbyController *this,IParam *param_1)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  IGod *pIVar3;
  int iVar4;
  char *unaff_ESI;
  undefined4 local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_30 [28];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x9dc0  53
                       ?EVT_Switch2_OnActivateOn@CSwitch2LobbyController@@QAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6020b062;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_48 = 0;
  (**(code **)(*(int *)param_1 + 0x44))
            (&DAT_6020d5f0,&local_48,DAT_60215018 ^ (uint)(abStack_30 + -0x24));
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (abStack_30 + -0x1c,unaff_ESI);
  local_c = (void *)0x0;
  bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>(pbVar2,"channel");
  local_c = (void *)0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_30 + -0x1c);
  if (bVar1) {
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))("channel","sendEnterRoom",param_1,1);
  }
  else {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_30,unaff_ESI);
    local_c = (void *)0x1;
    bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>(pbVar2,"game");
    local_c = (void *)0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_30);
    if (bVar1) {
      pIVar3 = God();
      iVar4 = (**(code **)(*(int *)pIVar3 + 0x10))(&DAT_6020ced0,"sendExitRoom",Void_exref,0);
      if (iVar4 == 0x40000000) {
        pIVar3 = God();
        (**(code **)(*(int *)pIVar3 + 0x10))(&DAT_6020ced0,"forceExitRoom",Void_exref,1);
      }
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}



/* ---- EVT_Switch2_OnActivateOff @ 60209f00 size=276 ---- */

/* public: int __thiscall CSwitch2LobbyController::EVT_Switch2_OnActivateOff(struct IParam &) */

int __thiscall
CSwitch2LobbyController::EVT_Switch2_OnActivateOff(CSwitch2LobbyController *this,IParam *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  IGod *pIVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_110;
  byte *local_10c;
  CGameFinder local_108 [260];
  uint local_4;
  
                    /* 0x9f00  52
                       ?EVT_Switch2_OnActivateOff@CSwitch2LobbyController@@QAEHAAUIParam@@@Z */
  local_4 = DAT_60215018 ^ (uint)&local_110;
  CGameFinder::CGameFinder(local_108);
  iVar2 = CGameFinder::isSingleGame(local_108);
  if (iVar2 != 0) {
    local_110 = (byte *)0x0;
    local_10c = (byte *)0x0;
    (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020d5f8,&local_110);
    (**(code **)(*(int *)param_1 + 0x44))(&DAT_6020d5f0,local_108 + -0xc);
    pbVar5 = &DAT_6020d7dc;
    pbVar3 = local_10c;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_60209f97:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_60209f9c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_60209f97;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_60209f9c:
    if (iVar2 == 0) {
      pcVar6 = "channel";
      pbVar3 = local_110;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_60209fd0:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_60209fd5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_60209fd0;
        pbVar3 = pbVar3 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_60209fd5:
      if (iVar2 == 0) {
        pIVar4 = God();
        (**(code **)(*(int *)pIVar4 + 0x10))("channel","exitProgramByChnl",Void_exref,1);
      }
    }
  }
  iVar2 = __security_check_cookie(local_4 ^ (uint)&local_110);
  return iVar2;
}



/* ---- Net_Game_SocketConnect @ 6020a020 size=332 ---- */

/* public: int __thiscall CSwitch2LobbyController::Net_Game_SocketConnect(struct IParam &) */

int __thiscall
CSwitch2LobbyController::Net_Game_SocketConnect(CSwitch2LobbyController *this,IParam *param_1)

{
  char *pcVar1;
  SGlobalInfo *this_00;
  CAppRunningState *pCVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  CWinThread *pCVar5;
  CWnd *pCVar6;
  int iVar7;
  IGod *pIVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0xa020  157
                       ?Net_Game_SocketConnect@CSwitch2LobbyController@@QAEHAAUIParam@@@Z */
  iStack_4 = -1;
  puStack_8 = &LAB_6020b872;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)param_1 + 100))
            ("k161e",&param_1,DAT_60215018 ^ (int)register0x00000010 - 0x1cU);
  if (iStack_4 == 0) {
    pIVar8 = God();
    pcVar9 = "sendEnterRoom";
    (**(code **)(*(int *)pIVar8 + 0x10))(&DAT_6020ced0,"sendEnterRoom",Void_exref,1);
    pIVar8 = God();
    (**(code **)(*(int *)pIVar8 + 0x10))("lobbyState","moveNext",Void_exref,1);
    ExceptionList = pcVar9;
    return 0;
  }
  uVar10 = DAT_60215818;
  uVar11 = DAT_6021581c;
  this_00 = GInfo();
  pCVar2 = SGlobalInfo::AppRunningState(this_00);
  CAppRunningState::RemoveAppState(pCVar2,uVar10,uVar11);
  puVar3 = (undefined4 *)LoadStr((int)register0x00000010 + -0x18);
  local_c = (void *)0x0;
  puVar4 = (undefined4 *)LoadStr((int)register0x00000010 + -0x1c);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  pcVar9 = (char *)*puVar3;
  pcVar1 = (char *)*puVar4;
  pCVar5 = AfxGetThread();
  if (pCVar5 == (CWinThread *)0x0) {
    pCVar6 = (CWnd *)0x0;
  }
  else {
    pCVar6 = (CWnd *)(**(code **)(*(int *)pCVar5 + 0x7c))();
  }
  iVar7 = MsgBox(pCVar6,pcVar1,pcVar9,0,true,"dlgMsgBox");
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             ((int)register0x00000010 + -0x1c));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             ((int)register0x00000010 + -0x18));
  ExceptionList = uStack_14;
  return iVar7;
}



/* ---- Net_Channel_CreateRoom @ 6020a170 size=414 ---- */

/* public: int __thiscall CSwitch2LobbyController::Net_Channel_CreateRoom(struct IParam &) */

int __thiscall
CSwitch2LobbyController::Net_Channel_CreateRoom(CSwitch2LobbyController *this,IParam *param_1)

{
  char *pcVar1;
  IParam *pIVar2;
  void *pvVar3;
  int iVar4;
  SGlobalInfo *this_00;
  CAppRunningState *pCVar5;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar6;
  undefined4 *puVar7;
  CWinThread *pCVar8;
  CWnd *pCVar9;
  IGod *pIVar10;
  undefined1 *puVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined1 auStack_1c [4];
  CSwitch2LobbyController *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pIVar2 = param_1;
                    /* 0xa170  138
                       ?Net_Channel_CreateRoom@CSwitch2LobbyController@@QAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b83b;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_60215018 ^ (uint)(auStack_1c + 4));
  ExceptionList = &local_c;
  local_10 = this;
  iVar4 = GetResultKeyState(param_1);
  if (iVar4 < 0x40000000) {
    pIVar10 = God();
    puVar11 = &DAT_6020ced0;
    (**(code **)(*(int *)pIVar10 + 0x10))(&DAT_6020ced0,"setGameRoomInfo",pIVar2,1);
    pIVar10 = God();
    (**(code **)(*(int *)pIVar10 + 0x10))(&DAT_6020ced0,"connGameSvr",Void_exref,1);
    ExceptionList = puVar11;
    return 0;
  }
  pvVar12 = DAT_60215818;
  uVar13 = DAT_6021581c;
  this_00 = GInfo();
  pCVar5 = SGlobalInfo::AppRunningState(this_00);
  CAppRunningState::RemoveAppState(pCVar5,pvVar12,uVar13);
  GetErrorString((IParam *)&param_1);
  local_4 = 0;
  if (*(int *)(param_1 + -0xc) == 0) {
    pCVar6 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             LoadStr((int)&local_10);
    local_4._0_1_ = 1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1,pCVar6);
    local_4 = (uint)local_4._1_3_ << 8;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  }
  puVar7 = (undefined4 *)LoadStr((int)&local_10);
  pIVar2 = param_1;
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar1 = (char *)*puVar7;
  pCVar8 = AfxGetThread();
  if (pCVar8 == (CWinThread *)0x0) {
    pCVar9 = (CWnd *)0x0;
  }
  else {
    pCVar9 = (CWnd *)(**(code **)(*(int *)pCVar8 + 0x7c))();
  }
  MsgBox(pCVar9,(char *)pIVar2,pcVar1,0,true,"dlgMsgBox");
  local_4 = local_4 & 0xffffff00;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  pIVar10 = God();
  iVar4 = (**(code **)(*(int *)pIVar10 + 0x10))("lobbyState","movePrev",Void_exref,1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = pvVar3;
  return iVar4;
}



/* ---- Net_Channel_JoinRoom @ 6020a310 size=414 ---- */

/* public: int __thiscall CSwitch2LobbyController::Net_Channel_JoinRoom(struct IParam &) */

int __thiscall
CSwitch2LobbyController::Net_Channel_JoinRoom(CSwitch2LobbyController *this,IParam *param_1)

{
  char *pcVar1;
  IParam *pIVar2;
  void *pvVar3;
  int iVar4;
  SGlobalInfo *this_00;
  CAppRunningState *pCVar5;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar6;
  undefined4 *puVar7;
  CWinThread *pCVar8;
  CWnd *pCVar9;
  IGod *pIVar10;
  undefined1 *puVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined1 auStack_1c [4];
  CSwitch2LobbyController *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pIVar2 = param_1;
                    /* 0xa310  140  ?Net_Channel_JoinRoom@CSwitch2LobbyController@@QAEHAAUIParam@@@Z
                       0xa310  142  ?Net_Channel_ViewRoom@CSwitch2LobbyController@@QAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b83b;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_60215018 ^ (uint)(auStack_1c + 4));
  ExceptionList = &local_c;
  local_10 = this;
  iVar4 = GetResultKeyState(param_1);
  if (iVar4 < 0x40000000) {
    pIVar10 = God();
    puVar11 = &DAT_6020ced0;
    (**(code **)(*(int *)pIVar10 + 0x10))(&DAT_6020ced0,"setGameRoomInfo",pIVar2,1);
    pIVar10 = God();
    (**(code **)(*(int *)pIVar10 + 0x10))(&DAT_6020ced0,"connGameSvr",Void_exref,1);
    ExceptionList = puVar11;
    return 0;
  }
  pvVar12 = DAT_60215818;
  uVar13 = DAT_6021581c;
  this_00 = GInfo();
  pCVar5 = SGlobalInfo::AppRunningState(this_00);
  CAppRunningState::RemoveAppState(pCVar5,pvVar12,uVar13);
  GetErrorString((IParam *)&param_1);
  local_4 = 0;
  if (*(int *)(param_1 + -0xc) == 0) {
    pCVar6 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             LoadStr((int)&local_10);
    local_4._0_1_ = 1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1,pCVar6);
    local_4 = (uint)local_4._1_3_ << 8;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  }
  puVar7 = (undefined4 *)LoadStr((int)&local_10);
  pIVar2 = param_1;
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar1 = (char *)*puVar7;
  pCVar8 = AfxGetThread();
  if (pCVar8 == (CWinThread *)0x0) {
    pCVar9 = (CWnd *)0x0;
  }
  else {
    pCVar9 = (CWnd *)(**(code **)(*(int *)pCVar8 + 0x7c))();
  }
  MsgBox(pCVar9,(char *)pIVar2,pcVar1,0,true,"dlgMsgBox");
  local_4 = local_4 & 0xffffff00;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  pIVar10 = God();
  iVar4 = (**(code **)(*(int *)pIVar10 + 0x10))("lobbyState","movePrev",Void_exref,1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = pvVar3;
  return iVar4;
}



/* ---- Net_Channel_AutoEnterRoom @ 6020a4b0 size=354 ---- */

/* public: int __thiscall CSwitch2LobbyController::Net_Channel_AutoEnterRoom(struct IParam &) */

int __thiscall
CSwitch2LobbyController::Net_Channel_AutoEnterRoom(CSwitch2LobbyController *this,IParam *param_1)

{
  char *pcVar1;
  IParam *pIVar2;
  void *pvVar3;
  int iVar4;
  SGlobalInfo *this_00;
  CAppRunningState *pCVar5;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar6;
  undefined4 *puVar7;
  CWinThread *pCVar8;
  CWnd *pCVar9;
  IGod *pIVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined1 auStack_1c [4];
  CSwitch2LobbyController *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xa4b0  137
                       ?Net_Channel_AutoEnterRoom@CSwitch2LobbyController@@QAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6020b83b;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_60215018 ^ (uint)(auStack_1c + 4));
  ExceptionList = &local_c;
  local_10 = this;
  iVar4 = GetResultKeyState(param_1);
  if (iVar4 < 0x40000000) {
    ExceptionList = local_c;
    return 0;
  }
  pvVar11 = DAT_60215818;
  uVar12 = DAT_6021581c;
  this_00 = GInfo();
  pCVar5 = SGlobalInfo::AppRunningState(this_00);
  CAppRunningState::RemoveAppState(pCVar5,pvVar11,uVar12);
  GetErrorString((IParam *)&param_1);
  local_4 = 0;
  if (*(int *)(param_1 + -0xc) == 0) {
    pCVar6 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             LoadStr((int)&local_10);
    local_4._0_1_ = 1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1,pCVar6);
    local_4 = (uint)local_4._1_3_ << 8;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  }
  puVar7 = (undefined4 *)LoadStr((int)&local_10);
  pIVar2 = param_1;
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar1 = (char *)*puVar7;
  pCVar8 = AfxGetThread();
  if (pCVar8 == (CWinThread *)0x0) {
    pCVar9 = (CWnd *)0x0;
  }
  else {
    pCVar9 = (CWnd *)(**(code **)(*(int *)pCVar8 + 0x7c))();
  }
  MsgBox(pCVar9,(char *)pIVar2,pcVar1,0,true,"dlgMsgBox");
  local_4 = local_4 & 0xffffff00;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  pIVar10 = God();
  iVar4 = (**(code **)(*(int *)pIVar10 + 0x10))("lobbyState","movePrev",Void_exref,1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ExceptionList = pvVar3;
  return iVar4;
}



/* ---- scalar_deleting_destructor @ 6020a620 size=18 ---- */

void __thiscall
CMFunctor<CSwitch2LobbyController>::scalar_deleting_destructor
          (CMFunctor<CSwitch2LobbyController> *this)

{
  if (this != (CMFunctor<CSwitch2LobbyController> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CSwitch2LobbyController>::~CMFunctor<CSwitch2LobbyController> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- FUN_6020a640 @ 6020a640 size=26 ---- */

void __fastcall
FUN_6020a640(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5)

{
  vsprintf_s(param_3,param_2,param_4,&param_5);
  return;
}



/* ---- God @ 6020a65a size=6 ---- */

IGod * __cdecl God(void)

{
  IGod *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020a65a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = God();
  return pIVar1;
}



/* ---- operator_delete @ 6020a660 size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x6020a660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- AfxMessageBox @ 6020a666 size=6 ---- */

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020a666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}



/* ---- AfxGetThread @ 6020a66c size=6 ---- */

CWinThread * AfxGetThread(void)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetThread();
  return pCVar1;
}



/* ---- operator_new @ 6020a672 size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020a672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- AfxGetModuleState @ 6020a678 size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020a678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- AfxInitExtensionModule @ 6020a67e size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020a67e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- CDynLinkLibrary @ 6020a684 size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x6020a684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxTermExtensionModule @ 6020a68a size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x6020a68a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- Delete @ 6020a690 size=6 ---- */

void __thiscall CException::Delete(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x6020a690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- __security_check_cookie @ 6020a696 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_60215018) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 6020a6a5 size=76 ---- */

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



/* ---- std::exception::what @ 6020a6f8 size=6 ---- */

char * __thiscall std::exception::std__exception__what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020a6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* ---- __onexit @ 6020a6fe size=156 ---- */

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
  
  local_8 = &DAT_6020e120;
  uStack_c = 0x6020a70a;
  local_20[0] = decode_pointer(DAT_60215860);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_60215860);
    local_24 = decode_pointer(DAT_6021585c);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_60215860 = encode_pointer(local_20[0]);
    DAT_6021585c = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_6020a79a();
  }
  return p_Var1;
}



/* ---- FUN_6020a79a @ 6020a79a size=9 ---- */

void FUN_6020a79a(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 6020a7a3 size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- __CRT_INIT@12 @ 6020a809 size=550 ---- */

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
    if (DAT_60215470 < 1) {
      return 0;
    }
    DAT_60215470 = DAT_60215470 + -1;
  }
  _DAT_6021584c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60215854,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60215850 == 0) {
      DAT_60215850 = 1;
      iVar3 = initterm_e(&DAT_6020c2b8,&DAT_6020c2c0);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_6020c27c,&DAT_6020c2b4);
      DAT_60215850 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_60215854,0);
    }
    if ((DAT_60215858 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_60215858), BVar4 != 0)) {
      (*DAT_60215858)(param_1,2,param_3);
    }
    DAT_60215470 = DAT_60215470 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60215854,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60215850 == 2) {
      param_2 = (int *)decode_pointer(DAT_60215860);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_6021585c);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_60215860);
            piVar8 = (int *)decode_pointer(DAT_6021585c);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_6021585c = encoded_null();
        DAT_60215860 = DAT_6021585c;
      }
      DAT_60215850 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_60215854,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 6020aa2f size=240 ---- */

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
  _DAT_60215020 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_60215470 == 0)) {
    local_20 = 0;
    goto LAB_6020ab21;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_FUN_6020d2ac != (undefined *)0x0) {
      local_20 = (*(code *)PTR_FUN_6020d2ac)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_6020ab21;
    local_20 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (local_20 == 0) goto LAB_6020ab21;
  }
  local_20 = FUN_60206fd0(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_60206fd0(param_3,0);
    __CRT_INIT_12(&param_3->unused,(int *)0x0,param_1);
    if (PTR_FUN_6020d2ac != (undefined *)0x0) {
      (*(code *)PTR_FUN_6020d2ac)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_FUN_6020d2ac != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_FUN_6020d2ac)(param_3,param_2,param_1);
    }
  }
LAB_6020ab21:
  FUN_6020ab3a();
  return local_20;
}



/* ---- FUN_6020ab3a @ 6020ab3a size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6020ab3a(void)

{
  _DAT_60215020 = 0xffffffff;
  return;
}



/* ---- entry @ 6020ab45 size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- __ArrayUnwind @ 6020ab68 size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 6020abc6 size=75 ---- */

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
  FUN_6020ac11();
  return;
}



/* ---- FUN_6020ac11 @ 6020ac11 size=24 ---- */

void FUN_6020ac11(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- ___report_gsfailure @ 6020ac29 size=262 ---- */

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
  
  _DAT_60215590 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_60215594 = &uStack00000004;
  _DAT_602154d0 = 0x10001;
  _DAT_60215478 = 0xc0000409;
  _DAT_6021547c = 1;
  local_32c = DAT_60215018;
  local_328 = DAT_6021501c;
  _DAT_60215484 = _local_res0;
  _DAT_6021555c = in_GS;
  _DAT_60215560 = in_FS;
  _DAT_60215564 = in_ES;
  _DAT_60215568 = in_DS;
  _DAT_6021556c = unaff_EDI;
  _DAT_60215570 = unaff_ESI;
  _DAT_60215574 = unaff_EBX;
  _DAT_60215578 = in_EDX;
  _DAT_6021557c = in_ECX;
  _DAT_60215580 = in_EAX;
  _DAT_60215584 = unaff_EBP;
  DAT_60215588 = _local_res0;
  _DAT_6021558c = in_CS;
  _DAT_60215598 = in_SS;
  DAT_602154c8 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_6020c36c);
  if (DAT_602154c8 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- _unlock @ 6020ad30 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x6020ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 6020ad36 size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x6020ad36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 6020ad3c size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x6020ad3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __SEH_prolog4 @ 6020ad44 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_60215018 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 6020ad89 size=20 ---- */

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



/* ---- FUN_6020ad9d @ 6020ad9d size=37 ---- */

void __cdecl
FUN_6020ad9d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_60215018,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- __ValidateImageBase @ 6020ae20 size=53 ---- */

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



/* ---- __FindPESection @ 6020ae60 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 6020aeb0 size=166 ---- */

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
  
  pcStack_10 = FUN_6020ad9d;
  local_14 = ExceptionList;
  local_c = DAT_60215018 ^ 0x6020e1a8;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_60200000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_60200000,(DWORD_PTR)(pTarget + -0x60200000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 6020af6e size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x6020af6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 6020af74 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x6020af74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 6020af7a size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x6020af7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 6020af80 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6020af80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 6020af86 size=150 ---- */

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
  if ((DAT_60215018 == 0xbb40e64e) || ((DAT_60215018 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_60215018 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_60215018 == 0xbb40e64e) {
      DAT_60215018 = 0xbb40e64f;
    }
    else if ((DAT_60215018 & 0xffff0000) == 0) {
      DAT_60215018 = DAT_60215018 | DAT_60215018 << 0x10;
    }
  }
  DAT_6021501c = ~DAT_60215018;
  return;
}



/* ---- terminate @ 6020b01c size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x6020b01c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- _crt_debugger_hook @ 6020b022 size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x6020b022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- _type_info_dtor_internal_method @ 6020b028 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x6020b028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- except_handler4_common @ 6020b02e size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x6020b02e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _CxxThrowException @ 6020b040 size=6 ---- */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x6020b040. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* ---- Unwind@6020b050 @ 6020b050 size=9 ---- */

void Unwind_6020b050(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x44))
  ;
  return;
}



/* ---- Unwind@6020b059 @ 6020b059 size=9 ---- */

void Unwind_6020b059(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x28))
  ;
  return;
}



/* ---- Unwind@6020b080 @ 6020b080 size=9 ---- */

void Unwind_6020b080(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@6020b0b0 @ 6020b0b0 size=14 ---- */

void Unwind_6020b0b0(void)

{
  DAT_60215844 = DAT_60215844 & 0xfffffffe;
  return;
}



/* ---- Unwind@6020b0e0 @ 6020b0e0 size=12 ---- */

void Unwind_6020b0e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x98));
  return;
}



/* ---- Unwind@6020b120 @ 6020b120 size=9 ---- */

void Unwind_6020b120(void)

{
  CParam *unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam(unaff_EBP);
  return;
}



/* ---- Unwind@6020b129 @ 6020b129 size=12 ---- */

void Unwind_6020b129(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b12f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMetpParser::~CMetpParser((CMetpParser *)(unaff_EBP + -0x90));
  return;
}



/* ---- Unwind@6020b135 @ 6020b135 size=9 ---- */

void Unwind_6020b135(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XMemoryStream::~XMemoryStream((XMemoryStream *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@6020b170 @ 6020b170 size=12 ---- */

void Unwind_6020b170(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x98));
  return;
}



/* ---- Unwind@6020b1b0 @ 6020b1b0 size=12 ---- */

void Unwind_6020b1b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x98));
  return;
}



/* ---- Unwind@6020b210 @ 6020b210 size=12 ---- */

void Unwind_6020b210(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b21c @ 6020b21c size=12 ---- */

void Unwind_6020b21c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x98));
  return;
}



/* ---- Unwind@6020b260 @ 6020b260 size=12 ---- */

void Unwind_6020b260(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b2a0 @ 6020b2a0 size=9 ---- */

void Unwind_6020b2a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@6020b2f0 @ 6020b2f0 size=9 ---- */

void Unwind_6020b2f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b2f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x38))
  ;
  return;
}



/* ---- Unwind@6020b2f9 @ 6020b2f9 size=9 ---- */

void Unwind_6020b2f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)(unaff_EBP + -0x60));
  return;
}



/* ---- Unwind@6020b320 @ 6020b320 size=12 ---- */

void Unwind_6020b320(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2d0)
            );
  return;
}



/* ---- Unwind@6020b32c @ 6020b32c size=12 ---- */

void Unwind_6020b32c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2b4)
            );
  return;
}



/* ---- Unwind@6020b338 @ 6020b338 size=12 ---- */

void Unwind_6020b338(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x298));
  return;
}



/* ---- Unwind@6020b380 @ 6020b380 size=12 ---- */

void Unwind_6020b380(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b38c @ 6020b38c size=12 ---- */

void Unwind_6020b38c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@6020b398 @ 6020b398 size=12 ---- */

void Unwind_6020b398(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b39e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@6020b3a4 @ 6020b3a4 size=12 ---- */

void Unwind_6020b3a4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@6020b3e0 @ 6020b3e0 size=12 ---- */

void Unwind_6020b3e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b420 @ 6020b420 size=12 ---- */

void Unwind_6020b420(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@6020b42c @ 6020b42c size=12 ---- */

void Unwind_6020b42c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b470 @ 6020b470 size=12 ---- */

void Unwind_6020b470(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b4b0 @ 6020b4b0 size=12 ---- */

void Unwind_6020b4b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b4b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b4bc @ 6020b4bc size=12 ---- */

void Unwind_6020b4bc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@6020b4c8 @ 6020b4c8 size=12 ---- */

void Unwind_6020b4c8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x19c));
  return;
}



/* ---- Unwind@6020b510 @ 6020b510 size=12 ---- */

void Unwind_6020b510(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b550 @ 6020b550 size=12 ---- */

void Unwind_6020b550(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b55c @ 6020b55c size=12 ---- */

void Unwind_6020b55c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@6020b568 @ 6020b568 size=12 ---- */

void Unwind_6020b568(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b56e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@6020b574 @ 6020b574 size=12 ---- */

void Unwind_6020b574(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b57a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@6020b5b0 @ 6020b5b0 size=12 ---- */

void Unwind_6020b5b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0xa0));
  return;
}



/* ---- Unwind@6020b5bc @ 6020b5bc size=12 ---- */

void Unwind_6020b5bc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b5c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x128));
  return;
}



/* ---- Unwind@6020b5c8 @ 6020b5c8 size=12 ---- */

void Unwind_6020b5c8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b5ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x1b0));
  return;
}



/* ---- Unwind@6020b610 @ 6020b610 size=12 ---- */

void Unwind_6020b610(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x128));
  return;
}



/* ---- Unwind@6020b61c @ 6020b61c size=12 ---- */

void Unwind_6020b61c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0xa0));
  return;
}



/* ---- Unwind@6020b660 @ 6020b660 size=12 ---- */

void Unwind_6020b660(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b6a0 @ 6020b6a0 size=9 ---- */

void Unwind_6020b6a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@6020b6d0 @ 6020b6d0 size=12 ---- */

void Unwind_6020b6d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b6d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x9c));
  return;
}



/* ---- Unwind@6020b6dc @ 6020b6dc size=12 ---- */

void Unwind_6020b6dc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b6e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xa0));
  return;
}



/* ---- Unwind@6020b6e8 @ 6020b6e8 size=12 ---- */

void Unwind_6020b6e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b6ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b730 @ 6020b730 size=9 ---- */

void Unwind_6020b730(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@6020b760 @ 6020b760 size=12 ---- */

void Unwind_6020b760(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b7a0 @ 6020b7a0 size=12 ---- */

void Unwind_6020b7a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b7a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b7ac @ 6020b7ac size=12 ---- */

void Unwind_6020b7ac(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x124));
  return;
}



/* ---- Unwind@6020b7b8 @ 6020b7b8 size=12 ---- */

void Unwind_6020b7b8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b7be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@6020b7c4 @ 6020b7c4 size=12 ---- */

void Unwind_6020b7c4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b7ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@6020b7d0 @ 6020b7d0 size=12 ---- */

void Unwind_6020b7d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b7d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@6020b7dc @ 6020b7dc size=12 ---- */

void Unwind_6020b7dc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x124));
  return;
}



/* ---- Unwind@6020b820 @ 6020b820 size=9 ---- */

void Unwind_6020b820(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@6020b829 @ 6020b829 size=9 ---- */

void Unwind_6020b829(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@6020b832 @ 6020b832 size=9 ---- */

void Unwind_6020b832(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@6020b860 @ 6020b860 size=9 ---- */

void Unwind_6020b860(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@6020b869 @ 6020b869 size=9 ---- */

void Unwind_6020b869(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@6020b890 @ 6020b890 size=12 ---- */

void Unwind_6020b890(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@6020b89c @ 6020b89c size=12 ---- */

void Unwind_6020b89c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b8a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@6020b8e0 @ 6020b8e0 size=12 ---- */

void Unwind_6020b8e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b8e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@6020b8ec @ 6020b8ec size=12 ---- */

void Unwind_6020b8ec(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b8f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@6020b930 @ 6020b930 size=12 ---- */

void Unwind_6020b930(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@6020b960 @ 6020b960 size=12 ---- */

void Unwind_6020b960(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x2c) + 4));
  return;
}



/* ---- Unwind@6020b96c @ 6020b96c size=9 ---- */

void Unwind_6020b96c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x28))
  ;
  return;
}



/* ---- Unwind@6020b990 @ 6020b990 size=12 ---- */

void Unwind_6020b990(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020b9d0 @ 6020b9d0 size=9 ---- */

void Unwind_6020b9d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@6020b9d9 @ 6020b9d9 size=9 ---- */

void Unwind_6020b9d9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020b9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@6020ba00 @ 6020ba00 size=8 ---- */

void Unwind_6020ba00(void)

{
  FUN_60206980();
  return;
}



/* ---- Unwind@6020ba30 @ 6020ba30 size=12 ---- */

void Unwind_6020ba30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020ba36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x198));
  return;
}



/* ---- Unwind@6020ba3c @ 6020ba3c size=12 ---- */

void Unwind_6020ba3c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020ba42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x230));
  return;
}



/* ---- Unwind@6020ba48 @ 6020ba48 size=12 ---- */

void Unwind_6020ba48(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020ba4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x238));
  return;
}



/* ---- Unwind@6020ba54 @ 6020ba54 size=12 ---- */

void Unwind_6020ba54(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020ba5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x234));
  return;
}



/* ---- Unwind@6020ba60 @ 6020ba60 size=12 ---- */

void Unwind_6020ba60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020ba66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x230));
  return;
}



/* ---- Unwind@6020ba6c @ 6020ba6c size=12 ---- */

void Unwind_6020ba6c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020ba72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x220));
  return;
}



/* ---- Unwind@6020ba78 @ 6020ba78 size=12 ---- */

void Unwind_6020ba78(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020ba7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x21c));
  return;
}



/* ---- Unwind@6020bac0 @ 6020bac0 size=12 ---- */

void Unwind_6020bac0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@6020bacc @ 6020bacc size=12 ---- */

void Unwind_6020bacc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xa0));
  return;
}



/* ---- Unwind@6020bad8 @ 6020bad8 size=12 ---- */

void Unwind_6020bad8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x9c));
  return;
}



/* ---- Unwind@6020bb20 @ 6020bb20 size=9 ---- */

void Unwind_6020bb20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@6020bb29 @ 6020bb29 size=9 ---- */

void Unwind_6020bb29(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@6020bb32 @ 6020bb32 size=9 ---- */

void Unwind_6020bb32(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@6020bb60 @ 6020bb60 size=12 ---- */

void Unwind_6020bb60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x130));
  return;
}



/* ---- Unwind@6020bb6c @ 6020bb6c size=12 ---- */

void Unwind_6020bb6c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -300));
  return;
}



/* ---- Unwind@6020bb78 @ 6020bb78 size=12 ---- */

void Unwind_6020bb78(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -300));
  return;
}



/* ---- Unwind@6020bb84 @ 6020bb84 size=12 ---- */

void Unwind_6020bb84(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x9c));
  return;
}



/* ---- Unwind@6020bb90 @ 6020bb90 size=12 ---- */

void Unwind_6020bb90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bb96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@6020bbd0 @ 6020bbd0 size=12 ---- */

void Unwind_6020bbd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6020bbd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- FUN_6020bc30 @ 6020bc30 size=48 ---- */

void FUN_6020bc30(void)

{
  DAT_602157d0 = DAT_602157c8 * 4;
  DAT_602157d4 = DAT_602157c8 >> 0x1e | DAT_602157cc * 4;
  return;
}



/* ---- FUN_6020bd70 @ 6020bd70 size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6020bd70(void)

{
  _DAT_602157f0 = DAT_60215800 * 2;
  _DAT_602157f4 = DAT_60215800 >> 0x1f | DAT_60215804 * 2;
  return;
}



/* ---- FUN_6020bda0 @ 6020bda0 size=48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6020bda0(void)

{
  _DAT_602157e0 = DAT_60215800 * 4;
  _DAT_602157e4 = DAT_60215800 >> 0x1e | DAT_60215804 * 4;
  return;
}



/* ---- FUN_6020be10 @ 6020be10 size=48 ---- */

void FUN_6020be10(void)

{
  DAT_60215818 = DAT_60215820 * 4;
  DAT_6021581c = DAT_60215820 >> 0x1e | DAT_60215824 * 4;
  return;
}


// total=355 ok=355 failed=0
