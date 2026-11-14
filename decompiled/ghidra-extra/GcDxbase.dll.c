// Module: GcDxbase.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_10001000 @ 10001000 size=14 ---- */

void FUN_10001000(void *param_1)

{
  operator_delete(param_1);
  return;
}



/* ---- FUN_10001010 @ 10001010 size=90 ---- */

undefined4 FUN_10001010(HINSTANCE__ *param_1,int param_2)

{
  int iVar1;
  CDynLinkLibrary *this;
  
  if (param_2 == 1) {
    iVar1 = AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000d474,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    this = operator_new(0x40);
    if (this != (CDynLinkLibrary *)0x0) {
      CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_1000d474,0);
      return 1;
    }
  }
  else if (param_2 == 0) {
    AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000d474,0);
  }
  return 1;
}



/* ---- FUN_10001070 @ 10001070 size=40 ---- */

undefined4 FUN_10001070(undefined4 param_1,int param_2)

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



/* ---- CGcDxGameLobbyView @ 100010a0 size=26 ---- */

/* public: __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(class CGcDxGameLobbyView const &) */

CGcDxGameLobbyView * __thiscall
CGcDxGameLobbyView::CGcDxGameLobbyView(CGcDxGameLobbyView *this,CGcDxGameLobbyView *param_1)

{
                    /* 0x10a0  4  ??0CGcDxGameLobbyView@@QAE@ABV0@@Z */
  CGameLobbyView::CGameLobbyView((CGameLobbyView *)this,(CGameLobbyView *)param_1);
  *(undefined ***)this = _vftable_;
  return this;
}



/* ---- operator= @ 100010c0 size=20 ---- */

/* public: class CGcDxGameLobbyView & __thiscall CGcDxGameLobbyView::operator=(class
   CGcDxGameLobbyView const &) */

CGcDxGameLobbyView * __thiscall
CGcDxGameLobbyView::operator=(CGcDxGameLobbyView *this,CGcDxGameLobbyView *param_1)

{
                    /* 0x10c0  18  ??4CGcDxGameLobbyView@@QAEAAV0@ABV0@@Z */
  CGameLobbyView::operator=((CGameLobbyView *)this,(CGameLobbyView *)param_1);
  return this;
}



/* ---- FUN_100010e0 @ 100010e0 size=82 ---- */

CGcDxGameLobbyView * __thiscall FUN_100010e0(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    CGcDxGameLobbyView::~CGcDxGameLobbyView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,0x28,*(int *)((int)this + -4),CGcDxGameLobbyView::~CGcDxGameLobbyView);
  if ((param_1 & 1) != 0) {
    operator_delete__((CGcDxGameLobbyView *)((int)this + -4));
  }
  return (CGcDxGameLobbyView *)((int)this + -4);
}



/* ---- CGcDxChannelLobbyView @ 10001140 size=26 ---- */

/* public: __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(class CGcDxChannelLobbyView const
   &) */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::CGcDxChannelLobbyView
          (CGcDxChannelLobbyView *this,CGcDxChannelLobbyView *param_1)

{
                    /* 0x1140  1  ??0CGcDxChannelLobbyView@@QAE@ABV0@@Z */
  CChannelLobbyView::CChannelLobbyView((CChannelLobbyView *)this,(CChannelLobbyView *)param_1);
  *(undefined ***)this = _vftable_;
  return this;
}



/* ---- operator= @ 10001160 size=20 ---- */

/* public: class CGcDxChannelLobbyView & __thiscall CGcDxChannelLobbyView::operator=(class
   CGcDxChannelLobbyView const &) */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::operator=(CGcDxChannelLobbyView *this,CGcDxChannelLobbyView *param_1)

{
                    /* 0x1160  17  ??4CGcDxChannelLobbyView@@QAEAAV0@ABV0@@Z */
  CChannelLobbyView::operator=((CChannelLobbyView *)this,(CChannelLobbyView *)param_1);
  return this;
}



/* ---- FUN_10001180 @ 10001180 size=82 ---- */

CGcDxChannelLobbyView * __thiscall FUN_10001180(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    CGcDxChannelLobbyView::~CGcDxChannelLobbyView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,0x30,*(int *)((int)this + -4),CGcDxChannelLobbyView::~CGcDxChannelLobbyView);
  if ((param_1 & 1) != 0) {
    operator_delete__((CGcDxChannelLobbyView *)((int)this + -4));
  }
  return (CGcDxChannelLobbyView *)((int)this + -4);
}



/* ---- SetGameInFlag @ 100011e0 size=13 ---- */

/* public: void __thiscall CGcDxGameWnd::SetGameInFlag(int) */

void __thiscall CGcDxGameWnd::SetGameInFlag(CGcDxGameWnd *this,int param_1)

{
                    /* 0x11e0  79  ?SetGameInFlag@CGcDxGameWnd@@QAEXH@Z */
  *(int *)(this + 0x1dc) = param_1;
  return;
}



/* ---- IsMinimizeGameWnd @ 100011f0 size=7 ---- */

/* public: int __thiscall CGcDxGameWnd::IsMinimizeGameWnd(void) */

int __thiscall CGcDxGameWnd::IsMinimizeGameWnd(CGcDxGameWnd *this)

{
                    /* 0x11f0  52  ?IsMinimizeGameWnd@CGcDxGameWnd@@QAEHXZ */
  return *(int *)(this + 0x1e4);
}



/* ---- SetMinimizeGameWnd @ 10001200 size=13 ---- */

/* public: void __thiscall CGcDxGameWnd::SetMinimizeGameWnd(int) */

void __thiscall CGcDxGameWnd::SetMinimizeGameWnd(CGcDxGameWnd *this,int param_1)

{
                    /* 0x1200  81  ?SetMinimizeGameWnd@CGcDxGameWnd@@QAEXH@Z */
  *(int *)(this + 0x1e4) = param_1;
  return;
}



/* ---- CGcDxbaseApp @ 10001210 size=27 ---- */

/* public: __thiscall CGcDxbaseApp::CGcDxbaseApp(void) */

CGcDxbaseApp * __thiscall CGcDxbaseApp::CGcDxbaseApp(CGcDxbaseApp *this)

{
                    /* 0x1210  10  ??0CGcDxbaseApp@@QAE@XZ */
  CBaseApp::CBaseApp((CBaseApp *)this);
  *(undefined ***)this = _vftable_;
  timeBeginPeriod(1);
  return this;
}



/* ---- ~CGcDxbaseApp @ 10001230 size=26 ---- */

/* public: virtual __thiscall CGcDxbaseApp::~CGcDxbaseApp(void) */

void __thiscall CGcDxbaseApp::~CGcDxbaseApp(CGcDxbaseApp *this)

{
                    /* 0x1230  16  ??1CGcDxbaseApp@@UAE@XZ */
  *(undefined ***)this = _vftable_;
  timeEndPeriod(1);
                    /* WARNING: Could not recover jumptable at 0x10001244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CBaseApp::~CBaseApp((CBaseApp *)this);
  return;
}



/* ---- InitInstance @ 10001250 size=74 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::InitInstance(void) */

int __thiscall CGcDxbaseApp::InitInstance(CGcDxbaseApp *this)

{
  int iVar1;
  
                    /* 0x1250  50  ?InitInstance@CGcDxbaseApp@@UAEHXZ */
  CoInitialize((LPVOID)0x0);
  CreateInputD4();
  CreateDxDevice4();
  neon::frw::Resource();
  neon::ctrl::UIInputManager();
  neon::dev::Sound(false);
  neon::frw::App();
  neon::frw::FileManager();
  iVar1 = CBaseApp::InitInstance((CBaseApp *)this);
  return (uint)(iVar1 != 0);
}



/* ---- ExitInstance @ 100012a0 size=60 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::ExitInstance(void) */

int __thiscall CGcDxbaseApp::ExitInstance(CGcDxbaseApp *this)

{
  int iVar1;
  
                    /* 0x12a0  37  ?ExitInstance@CGcDxbaseApp@@UAEHXZ */
  neon::frw::DestroyResource();
  neon::ctrl::DestroyUIInputManager();
  neon::dev::DestroySound();
  neon::frw::DestroyApp();
  neon::frw::DestroyFileManager();
  ReleaseInput();
  ReleaseDxDevice();
  CoUninitialize();
                    /* WARNING: Could not recover jumptable at 0x100012d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CBaseApp::ExitInstance((CBaseApp *)this);
  return iVar1;
}



/* ---- OnIdle @ 100012e0 size=30 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::OnIdle(long) */

int __thiscall CGcDxbaseApp::OnIdle(CGcDxbaseApp *this,long param_1)

{
  CApp *this_00;
  
                    /* 0x12e0  67  ?OnIdle@CGcDxbaseApp@@UAEHJ@Z */
  this_00 = neon::frw::SApp::Instance();
  neon::frw::CApp::Run(this_00);
  Sleep(1);
  return 1;
}



/* ---- PreTranslateMessage @ 10001300 size=30 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::PreTranslateMessage(struct tagMSG *) */

int __thiscall CGcDxbaseApp::PreTranslateMessage(CGcDxbaseApp *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* 0x1300  75  ?PreTranslateMessage@CGcDxbaseApp@@UAEHPAUtagMSG@@@Z */
  if (*(int *)(param_1 + 4) == 0x104) {
    return 1;
  }
  iVar1 = CWinThread::PreTranslateMessage((CWinThread *)this,param_1);
  return iVar1;
}



/* ---- FUN_10001320 @ 10001320 size=12 ---- */

void FUN_10001320(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
  return;
}



/* ---- FUN_10001330 @ 10001330 size=1 ---- */

void FUN_10001330(void)

{
  return;
}



/* ---- FUN_10001340 @ 10001340 size=102 ---- */

CBaseApp * __thiscall FUN_10001340(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = CGcDxbaseApp::_vftable_;
    timeEndPeriod(1);
    CBaseApp::~CBaseApp(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_(this,0xa8,*(int *)((int)this + -4),CGcDxbaseApp::~CGcDxbaseApp);
  if ((param_1 & 1) != 0) {
    operator_delete__((CBaseApp *)((int)this + -4));
  }
  return (CBaseApp *)((int)this + -4);
}



/* ---- LoadViewObjects @ 100013b0 size=587 ---- */

/* public: virtual bool __thiscall CGcDxbaseApp::LoadViewObjects(void) */

bool __thiscall CGcDxbaseApp::LoadViewObjects(CGcDxbaseApp *this)

{
  uint uVar1;
  CHanChatView *pCVar2;
  IGod *pIVar3;
  CGcDxGameLobbyView *this_00;
  undefined4 uVar4;
  CGcDxChannelLobbyView *this_01;
  CChannelMainWnd *this_02;
  void *pvVar5;
  CMiniChannelListView *this_03;
  CMainFrameView *this_04;
  CDialogCmp *this_05;
  undefined1 auStack_12 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13b0  54  ?LoadViewObjects@CGcDxbaseApp@@UAE_NXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004577;
  local_c = ExceptionList;
  uVar1 = DAT_1000d460 ^ (uint)(auStack_12 + -0xe);
  ExceptionList = &local_c;
  pCVar2 = operator_new(0x10);
  local_4 = 0;
  if (pCVar2 == (CHanChatView *)0x0) {
    pCVar2 = (CHanChatView *)0x0;
  }
  else {
    CHanChatView::CHanChatView(pCVar2,0,1);
    *(undefined ***)pCVar2 = CHanChatView::vftable;
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
    *(undefined ***)pCVar2 = CHanChatView::vftable;
  }
  local_c = (void *)0xffffffff;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pCVar2,1);
  this_00 = operator_new(0x28);
  if (this_00 == (CGcDxGameLobbyView *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CGcDxGameLobbyView::CGcDxGameLobbyView(this_00);
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar4,1);
  this_01 = operator_new(0x30);
  if (this_01 == (CGcDxChannelLobbyView *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    this_02 = operator_new(0x110);
    if (this_02 == (CChannelMainWnd *)0x0) {
      this_02 = (CChannelMainWnd *)0x0;
    }
    else {
      CChannelMainWnd::CChannelMainWnd(this_02);
      *(undefined ***)this_02 = CChannelMainWnd::vftable;
      *(undefined ***)(this_02 + 0x54) = CChannelMainWnd::vftable;
    }
    pvVar5 = (void *)CGcDxChannelLobbyView::CGcDxChannelLobbyView
                               (this_01,"channel",(CWnd *)this_02,true);
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pvVar5,1);
  this_03 = operator_new(0xc);
  if (this_03 == (CMiniChannelListView *)0x0) {
    this_03 = (CMiniChannelListView *)0x0;
  }
  else {
    CMiniChannelListView::CMiniChannelListView(this_03,0);
    *(undefined ***)this_03 = CMiniChannelListView::vftable;
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_03,1);
  this_04 = operator_new(4);
  if (this_04 == (CMainFrameView *)0x0) {
    this_04 = (CMainFrameView *)0x0;
  }
  else {
    CMainFrameView::CMainFrameView(this_04);
    *(undefined ***)this_04 = CMainFrameView::vftable;
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_04,1);
  this_05 = operator_new(8);
  if (this_05 == (CDialogCmp *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CDialogCmp::CDialogCmp(this_05);
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar4,1);
  ExceptionList = pvVar5;
  return true;
}



/* ---- FUN_10001600 @ 10001600 size=31 ---- */

CHanChatView * __thiscall FUN_10001600(void *this,byte param_1)

{
  CHanChatView::~CHanChatView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10001620 @ 10001620 size=31 ---- */

CMiniChannelListView * __thiscall FUN_10001620(void *this,byte param_1)

{
  CMiniChannelListView::~CMiniChannelListView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10001640 @ 10001640 size=31 ---- */

CMainFrameView * __thiscall FUN_10001640(void *this,byte param_1)

{
  CMainFrameView::~CMainFrameView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10001660 @ 10001660 size=8 ---- */

void __thiscall FUN_10001660(void *this,byte param_1)

{
  FUN_100016a0((void *)((int)this + -0x54),param_1);
  return;
}



/* ---- FUN_10001670 @ 10001670 size=3 ---- */

void FUN_10001670(void)

{
  return;
}



/* ---- FUN_10001680 @ 10001680 size=13 ---- */

void __fastcall FUN_10001680(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}



/* ---- FUN_10001690 @ 10001690 size=13 ---- */

void __fastcall FUN_10001690(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}



/* ---- FUN_100016a0 @ 100016a0 size=31 ---- */

CChannelMainWnd * __thiscall FUN_100016a0(void *this,byte param_1)

{
  CChannelMainWnd::~CChannelMainWnd(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- LoadDefaultObjects @ 100016c0 size=78 ---- */

/* public: virtual bool __thiscall CGcDxbaseApp::LoadDefaultObjects(void) */

bool __thiscall CGcDxbaseApp::LoadDefaultObjects(CGcDxbaseApp *this)

{
  CGameWnd *pCVar1;
  int iVar2;
  tagRECT local_10;
  
                    /* 0x16c0  53  ?LoadDefaultObjects@CGcDxbaseApp@@UAE_NXZ */
  CBaseApp::LoadDefaultObjects((CBaseApp *)this);
  pCVar1 = AfxGetGameWnd();
  GetClientRect(*(HWND *)(pCVar1 + 0x20),&local_10);
  iVar2 = (**(code **)(*(int *)this + 0xfc))
                    (local_10.right - local_10.left,local_10.bottom - local_10.top,0,0);
  return (bool)('\x01' - (iVar2 != 1));
}



/* ---- FUN_10001710 @ 10001710 size=106 ---- */

void * __cdecl FUN_10001710(uint param_1)

{
  AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
  *this;
  void *pvVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100045a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
  bVar2 = true;
  local_4 = 0;
  this = Loki::
         SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>
         ::Instance();
  pvVar1 = Loki::SmallObjAllocator::Allocate((SmallObjAllocator *)this,param_1,bVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
  ExceptionList = local_c;
  return pvVar1;
}



/* ---- FUN_10001780 @ 10001780 size=80 ---- */

void __fastcall FUN_10001780(int *param_1)

{
  AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
  *this;
  int *piVar1;
  uint uVar2;
  
  *(int *)param_1[1] = *(int *)param_1[1] + -1;
  piVar1 = (int *)param_1[1];
  if (*piVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
    uVar2 = 4;
    this = Loki::
           SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>
           ::Instance();
    Loki::SmallObjAllocator::Deallocate((SmallObjAllocator *)this,piVar1,uVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
    param_1[1] = 0;
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
  }
  return;
}



/* ---- InitDX @ 100017d0 size=318 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::InitDX(int,int,bool,bool) */

int __thiscall
CGcDxbaseApp::InitDX(CGcDxbaseApp *this,int param_1,int param_2,bool param_3,bool param_4)

{
  bool bVar1;
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  CGameWnd *pCVar4;
  CApp *pCVar5;
  undefined1 uVar6;
  HINSTANCE__ *pHVar7;
  HWND__ *pHVar8;
  SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>
  *pSVar9;
  CBasicPoint<long> *pCVar10;
  undefined1 uVar11;
  int iVar12;
  int local_20;
  int local_1c;
  CVisual *local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x17d0  49  ?InitDX@CGcDxbaseApp@@UAEHHH_N0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100045e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PostBipLog(0x14a);
  this_00 = GInfo();
  pCVar2 = SGlobalInfo::DisplayMode(this_00);
  uVar6 = *(int *)(pCVar2 + 4) == 1;
  local_18 = operator_new(0xc0);
  local_4 = 0;
  if (local_18 == (CVisual *)0x0) {
    local_18 = (CVisual *)0x0;
  }
  else {
    neon::visual::CVisual::CVisual(local_18);
    *(undefined ***)local_18 = neon::visual::CVisual::vftable;
  }
  local_4 = 0xffffffff;
  local_14 = FUN_10001710(4);
  *local_14 = 1;
  local_4 = 1;
  local_20 = param_1;
  local_1c = param_2;
  pAVar3 = AfxGetModuleState();
  pHVar7 = *(HINSTANCE__ **)(pAVar3 + 8);
  iVar12 = 0;
  uVar11 = 0;
  pCVar10 = (CBasicPoint<long> *)&local_20;
  pSVar9 = (SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>
            *)&local_18;
  pCVar4 = AfxGetGameWnd();
  pHVar8 = *(HWND__ **)(pCVar4 + 0x20);
  pCVar5 = neon::frw::SApp::Instance();
  bVar1 = neon::frw::CApp::Init
                    (pCVar5,pHVar7,pHVar8,pSVar9,pCVar10,(bool)uVar6,(bool)uVar11,param_3,param_4,
                     iVar12);
  local_4 = 0xffffffff;
  FUN_10001780((int *)&local_18);
  if (bVar1) {
    iVar12 = 0x168;
  }
  else {
    iVar12 = 0x154;
  }
  PostBipLog(iVar12);
  pCVar5 = neon::frw::SApp::Instance();
  pCVar5[0x3d] = (CApp)0x1;
  ExceptionList = local_c;
  return (uint)bVar1;
}



/* ---- FUN_10001910 @ 10001910 size=31 ---- */

CVisual * __thiscall FUN_10001910(void *this,byte param_1)

{
  neon::visual::CVisual::~CVisual(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- CGcDxChannelLobbyView @ 10001930 size=19 ---- */

/* public: __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(void) */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::CGcDxChannelLobbyView(CGcDxChannelLobbyView *this)

{
                    /* 0x1930  3  ??0CGcDxChannelLobbyView@@QAE@XZ */
  CChannelLobbyView::CChannelLobbyView((CChannelLobbyView *)this);
  *(undefined ***)this = _vftable_;
  return this;
}



/* ---- CGcDxChannelLobbyView @ 10001950 size=38 ---- */

/* public: __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(char const *,class CWnd *,bool)
    */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::CGcDxChannelLobbyView
          (CGcDxChannelLobbyView *this,char *param_1,CWnd *param_2,bool param_3)

{
                    /* 0x1950  2  ??0CGcDxChannelLobbyView@@QAE@PBDPAVCWnd@@_N@Z */
  CChannelLobbyView::CChannelLobbyView((CChannelLobbyView *)this,param_1,param_2,param_3);
  *(undefined ***)this = _vftable_;
  return this;
}



/* ---- ~CGcDxChannelLobbyView @ 10001980 size=12 ---- */

/* public: virtual __thiscall CGcDxChannelLobbyView::~CGcDxChannelLobbyView(void) */

void __thiscall CGcDxChannelLobbyView::~CGcDxChannelLobbyView(CGcDxChannelLobbyView *this)

{
                    /* 0x1980  11  ??1CGcDxChannelLobbyView@@UAE@XZ */
  *(undefined ***)this = _vftable_;
                    /* WARNING: Could not recover jumptable at 0x10001986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CChannelLobbyView::~CChannelLobbyView((CChannelLobbyView *)this);
  return;
}



/* ---- Evt_GcDxChannelLobby_OnActivateOn @ 10001990 size=15 ---- */

/* public: int __thiscall CGcDxChannelLobbyView::Evt_GcDxChannelLobby_OnActivateOn(struct IParam &)
    */

int __thiscall
CGcDxChannelLobbyView::Evt_GcDxChannelLobby_OnActivateOn
          (CGcDxChannelLobbyView *this,IParam *param_1)

{
  CApp *pCVar1;
  
                    /* 0x1990  32
                       ?Evt_GcDxChannelLobby_OnActivateOn@CGcDxChannelLobbyView@@QAEHAAUIParam@@@Z
                        */
  pCVar1 = neon::frw::SApp::Instance();
  pCVar1[0x3d] = (CApp)0x1;
  return 0;
}



/* ---- FUN_100019a0 @ 100019a0 size=18 ---- */

void __thiscall FUN_100019a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 4);
  param_1[1] = *(undefined4 *)((int)this + 8);
  *param_1 = uVar1;
  return;
}



/* ---- FUN_100019c0 @ 100019c0 size=18 ---- */

void __fastcall FUN_100019c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = CMFunctor<CGcDxChannelLobbyView>::vftable;
    operator_delete(param_1);
  }
  return;
}



/* ---- OnAttached @ 100019e0 size=78 ---- */

/* public: virtual bool __thiscall CGcDxChannelLobbyView::OnAttached(void) */

bool __thiscall CGcDxChannelLobbyView::OnAttached(CGcDxChannelLobbyView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x19e0  58  ?OnAttached@CGcDxChannelLobbyView@@UAE_NXZ */
  CChannelLobbyView::OnAttached((CChannelLobbyView *)this);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CMFunctor<CGcDxChannelLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxChannelLobby_OnActivateOn;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channel","onActivateOn",puVar2,1);
  return true;
}



/* ---- SetInGameFlag @ 10001a30 size=13 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::SetInGameFlag(int) */

void __thiscall CGcDxMainFrameWnd::SetInGameFlag(CGcDxMainFrameWnd *this,int param_1)

{
                    /* 0x1a30  80  ?SetInGameFlag@CGcDxMainFrameWnd@@QAEXH@Z */
  *(int *)(this + 0x178) = param_1;
  return;
}



/* ---- CGcDxGameLobbyView @ 10001a40 size=19 ---- */

/* public: __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(void) */

CGcDxGameLobbyView * __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(CGcDxGameLobbyView *this)

{
                    /* 0x1a40  5  ??0CGcDxGameLobbyView@@QAE@XZ */
  CGameLobbyView::CGameLobbyView((CGameLobbyView *)this);
  *(undefined ***)this = _vftable_;
  return this;
}



/* ---- ~CGcDxGameLobbyView @ 10001a60 size=12 ---- */

/* public: virtual __thiscall CGcDxGameLobbyView::~CGcDxGameLobbyView(void) */

void __thiscall CGcDxGameLobbyView::~CGcDxGameLobbyView(CGcDxGameLobbyView *this)

{
                    /* 0x1a60  12  ??1CGcDxGameLobbyView@@UAE@XZ */
  *(undefined ***)this = _vftable_;
                    /* WARNING: Could not recover jumptable at 0x10001a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameLobbyView::~CGameLobbyView((CGameLobbyView *)this);
  return;
}



/* ---- Evt_GcDxGameLobby_OnActivateOn @ 10001a70 size=74 ---- */

/* public: int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOn(struct IParam &) */

int __thiscall
CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOn(CGcDxGameLobbyView *this,IParam *param_1)

{
  CApp *pCVar1;
  SGlobalInfo *this_00;
  IGod *pIVar2;
  
                    /* 0x1a70  34
                       ?Evt_GcDxGameLobby_OnActivateOn@CGcDxGameLobbyView@@QAEHAAUIParam@@@Z */
  pCVar1 = neon::frw::SApp::Instance();
  pCVar1[0x3d] = (CApp)0x0;
  this_00 = GInfo();
  SGlobalInfo::DisplayMode(this_00);
  CGcDxGameWnd::ApplyXDeviceMode(*(CGcDxGameWnd **)(this + 4));
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x20))("mainFrame","activateOn",Void_exref,0);
  return 0;
}



/* ---- Msg_UpdateUIFromXML @ 10001ac0 size=356 ---- */

/* public: virtual int __thiscall CGcDxGameLobbyView::Msg_UpdateUIFromXML(struct IParam &) */

int __thiscall CGcDxGameLobbyView::Msg_UpdateUIFromXML(CGcDxGameLobbyView *this,IParam *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  char *pcVar2;
  CWinThread *pCVar3;
  char *pcVar4;
  int iVar5;
  CWnd *pCVar6;
  void *unaff_EDI;
  undefined4 uVar7;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_2a [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_20 [4];
  undefined4 local_1c;
  IParam *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1ac0  56  ?Msg_UpdateUIFromXML@CGcDxGameLobbyView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  hWnd = (HWND)0x0;
  if (*(int *)(this + 4) != 0) {
    hWnd = *(HWND *)(*(int *)(this + 4) + 0x20);
  }
  BVar1 = IsWindow(hWnd);
  if (BVar1 != 0) {
    ExceptionList = local_c;
    return -7;
  }
  pcVar2 = AfxRegisterWndClass(0x84b,(HICON__ *)0x0,(HBRUSH__ *)0x10,(HICON__ *)0x0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_20,pcVar2);
  local_4 = 0;
  pCVar3 = AfxGetThread();
  if (pCVar3 != (CWinThread *)0x0) {
    (**(code **)(*(int *)pCVar3 + 0x7c))();
  }
  local_1c = 0;
  local_18 = (IParam *)0x0;
  local_14 = 800;
  local_10 = 600;
  iVar5 = **(int **)(this + 4);
  uVar7 = 0x40000000;
  pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 8))
  ;
  pcVar4 = AfxRegisterWndClass(8,(HICON__ *)0x0,(HBRUSH__ *)0x0,(HICON__ *)0x0);
  iVar5 = (**(code **)(iVar5 + 0x5c))(pcVar4,pcVar2,uVar7);
  if (iVar5 == 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_2a + -0x12);
    ExceptionList = unaff_EDI;
    return -10;
  }
  pCVar3 = AfxGetThread();
  if (pCVar3 == (CWinThread *)0x0) {
    pCVar6 = (CWnd *)0x0;
  }
  else {
    pCVar6 = (CWnd *)(**(code **)(*(int *)pCVar3 + 0x7c))();
  }
  CWnd::SetWindowPos(*(CWnd **)(this + 4),pCVar6,0,0,0,0,3);
  iVar5 = CBaseLobbyView::Msg_UpdateUIFromXML((CBaseLobbyView *)this,local_18);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_2a + -0x12);
  ExceptionList = unaff_EDI;
  return iVar5;
}



/* ---- Evt_GcDxGameLobby_OnActivateOnGameWnd @ 10001c30 size=59 ---- */

/* public: int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOnGameWnd(struct IParam &)
    */

int __thiscall
CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOnGameWnd(CGcDxGameLobbyView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  int iVar2;
  
                    /* 0x1c30  35
                       ?Evt_GcDxGameLobby_OnActivateOnGameWnd@CGcDxGameLobbyView@@QAEHAAUIParam@@@Z
                        */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  *(undefined4 *)(iVar2 + 0x178) = 1;
  *(undefined4 *)(*(int *)(this + 4) + 0x1dc) = 1;
  CGcDxGameWnd::SetDlgClipRegion(*(CGcDxGameWnd **)(this + 4));
  return 0;
}



/* ---- Evt_GcDxGameLobby_OnActivateOffGameWnd @ 10001c70 size=62 ---- */

/* public: int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOffGameWnd(struct IParam
   &) */

int __thiscall
CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOffGameWnd(CGcDxGameLobbyView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  int iVar2;
  
                    /* 0x1c70  33
                       ?Evt_GcDxGameLobby_OnActivateOffGameWnd@CGcDxGameLobbyView@@QAEHAAUIParam@@@Z
                        */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  *(undefined4 *)(iVar2 + 0x178) = 0;
  *(undefined4 *)(*(int *)(this + 4) + 0x1dc) = 0;
  CGcDxGameWnd::RemoveDlgClipRegion(*(CGcDxGameWnd **)(this + 4));
  return 0;
}



/* ---- FUN_10001cb0 @ 10001cb0 size=10 ---- */

void __fastcall FUN_10001cb0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10001cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* ---- FUN_10001cc0 @ 10001cc0 size=18 ---- */

void __fastcall FUN_10001cc0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = CMFunctor<CGcDxGameLobbyView>::vftable;
    operator_delete(param_1);
  }
  return;
}



/* ---- OnAttached @ 10001ce0 size=204 ---- */

/* public: virtual bool __thiscall CGcDxGameLobbyView::OnAttached(void) */

bool __thiscall CGcDxGameLobbyView::OnAttached(CGcDxGameLobbyView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x1ce0  59  ?OnAttached@CGcDxGameLobbyView@@UAE_NXZ */
  CGameLobbyView::OnAttached((CGameLobbyView *)this);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CMFunctor<CGcDxGameLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxGameLobby_OnActivateOn;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_10005c4c,"onActivateOn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CMFunctor<CGcDxGameLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxGameLobby_OnActivateOnGameWnd;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_10005c4c,"onActivateOnGameWnd",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CMFunctor<CGcDxGameLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxGameLobby_OnActivateOffGameWnd;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_10005c4c,"onActivateOffGameWnd",puVar2,1);
  return true;
}



/* ---- FUN_10001db0 @ 10001db0 size=156 ---- */

void __cdecl FUN_10001db0(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_1)

{
  uint uVar1;
  FILE *pFVar2;
  char *pcVar3;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10004639;
  local_c = ExceptionList;
  uVar1 = DAT_1000d460 ^ (int)register0x00000010 - 0x14U;
  ExceptionList = &local_c;
  local_4 = 0;
  pFVar2 = fopen("c:\\makegclog","r");
  if (pFVar2 != (FILE *)0x0) {
    fclose(pFVar2);
    pFVar2 = fopen("c:\\GCLog.txt","a");
    if (pFVar2 != (FILE *)0x0) {
      pcVar3 = ATL::CSimpleStringT<char,1>::GetBuffer((CSimpleStringT<char,1> *)&param_1,0);
      fprintf(pFVar2,"%s\n",pcVar3,uVar1);
      fclose(pFVar2);
    }
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- _GetBaseClass @ 10001e50 size=6 ---- */

/* protected: static struct CRuntimeClass * __stdcall CGcDxGameWnd::_GetBaseClass(void) */

CRuntimeClass * CGcDxGameWnd::_GetBaseClass(void)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x1e50  84  ?_GetBaseClass@CGcDxGameWnd@@KGPAUCRuntimeClass@@XZ */
  pCVar1 = CGameWnd::GetThisClass();
  return pCVar1;
}



/* ---- GetRuntimeClass @ 10001e60 size=6 ---- */

/* public: virtual struct CRuntimeClass * __thiscall CGcDxGameWnd::GetRuntimeClass(void)const  */

CRuntimeClass * CGcDxGameWnd::GetRuntimeClass(void)

{
                    /* 0x1e60  43  ?GetRuntimeClass@CGcDxGameWnd@@UBEPAUCRuntimeClass@@XZ
                       0x1e60  45  ?GetThisClass@CGcDxGameWnd@@SGPAUCRuntimeClass@@XZ */
  return (CRuntimeClass *)&classCGcDxGameWnd;
}



/* ---- CGcDxGameWnd @ 10001e70 size=52 ---- */

/* public: __thiscall CGcDxGameWnd::CGcDxGameWnd(void) */

CGcDxGameWnd * __thiscall CGcDxGameWnd::CGcDxGameWnd(CGcDxGameWnd *this)

{
                    /* 0x1e70  6  ??0CGcDxGameWnd@@QAE@XZ */
  CGameWnd::CGameWnd((CGameWnd *)this);
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined ***)this = _vftable__for__CWnd__;
  *(undefined ***)(this + 0x54) = _vftable__for__CControlBase__;
  return this;
}



/* ---- ~CGcDxGameWnd @ 10001eb0 size=54 ---- */

/* public: virtual __thiscall CGcDxGameWnd::~CGcDxGameWnd(void) */

void __thiscall CGcDxGameWnd::~CGcDxGameWnd(CGcDxGameWnd *this)

{
                    /* 0x1eb0  13  ??1CGcDxGameWnd@@UAE@XZ */
  *(undefined ***)this = _vftable__for__CWnd__;
  *(undefined ***)(this + 0x54) = _vftable__for__CControlBase__;
  if (*(void **)(this + 0x1d8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1d8));
    *(undefined4 *)(this + 0x1d8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameWnd::~CGameWnd((CGameWnd *)this);
  return;
}



/* ---- OnCreate @ 10001ef0 size=22 ---- */

/* protected: int __thiscall CGcDxGameWnd::OnCreate(struct tagCREATESTRUCTA *) */

int __thiscall CGcDxGameWnd::OnCreate(CGcDxGameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* 0x1ef0  61  ?OnCreate@CGcDxGameWnd@@IAEHPAUtagCREATESTRUCTA@@@Z */
  iVar1 = CGameWnd::OnCreate((CGameWnd *)this,param_1);
  return (iVar1 != -1) - 1;
}



/* ---- DoExActive @ 10001f10 size=304 ---- */

/* public: virtual void __thiscall CGcDxGameWnd::DoExActive(int) */

void __thiscall CGcDxGameWnd::DoExActive(CGcDxGameWnd *this,int param_1)

{
  byte bVar1;
  int iVar2;
  SGlobalInfo *pSVar3;
  CApp *this_00;
  CDisplayModeChanger *pCVar4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_02;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStack00000008;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack0000000c;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_21;
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
                    /* 0x1f10  31  ?DoExActive@CGcDxGameWnd@@UAEXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004699;
  local_c = ExceptionList;
  bVar1 = (byte)DAT_1000d460;
  ExceptionList = &local_c;
  if (param_1 == 1) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1);
    local_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_01,(char *)&param_1);
    local_c = (undefined1 *)((int)register0x00000010 + -0x24);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               ((int)register0x00000010 + -0x24),&CStack00000008);
    FUN_10001db0((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
                 (bVar1 ^ (byte)((int)register0x00000010 + -0x20)));
    pSVar3 = GInfo();
    SGlobalInfo::DisplayMode(pSVar3);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_02,(char *)&CStack00000008);
    this_00 = neon::frw::SApp::Instance();
    neon::frw::CApp::Run(this_00);
    param_1 = -1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(&CStack0000000c);
  }
  else if (param_1 == 0) {
    uVar7 = *(uint *)(this + 0x1d4);
    uVar6 = *(uint *)(this + 0x1d0);
    uVar5 = *(uint *)(this + 0x1cc);
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    CDisplayModeChanger::SetResolution(pCVar4,uVar5,uVar6,uVar7);
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    if (*(int *)(pCVar4 + 4) != 0) {
      iVar8 = 1;
      pSVar3 = GInfo();
      pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
      CDisplayModeChanger::SetDisplayMode(pCVar4,iVar8);
    }
  }
  CGameWnd::DoExActive((CGameWnd *)this,iVar2);
  ExceptionList = local_c;
  return;
}



/* ---- OnDestroy @ 10002040 size=29 ---- */

/* protected: void __thiscall CGcDxGameWnd::OnDestroy(void) */

void __thiscall CGcDxGameWnd::OnDestroy(CGcDxGameWnd *this)

{
  CSound *pCVar1;
  
                    /* 0x2040  62  ?OnDestroy@CGcDxGameWnd@@IAEXXZ */
  pCVar1 = neon::dev::SSound::Instance();
  (**(code **)(*(int *)pCVar1 + 0x84))();
  CWnd::OnDestroy((CWnd *)this);
  return;
}



/* ---- IsFullMode @ 10002060 size=18 ---- */

/* public: int __thiscall CGcDxGameWnd::IsFullMode(void) */

int __thiscall CGcDxGameWnd::IsFullMode(CGcDxGameWnd *this)

{
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar1;
  
                    /* 0x2060  51  ?IsFullMode@CGcDxGameWnd@@QAEHXZ */
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::DisplayMode(this_00);
  return *(int *)(pCVar1 + 4);
}



/* ---- OnSize @ 10002080 size=8 ---- */

/* protected: void __thiscall CGcDxGameWnd::OnSize(unsigned int,int,int) */

void __thiscall CGcDxGameWnd::OnSize(CGcDxGameWnd *this,uint param_1,int param_2,int param_3)

{
                    /* 0x2080  72  ?OnSize@CGcDxGameWnd@@IAEXIHH@Z */
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- FUN_10002090 @ 10002090 size=130 ---- */

CGameWnd * __thiscall FUN_10002090(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x1e8,*(int *)((int)this + -4),CGcDxGameWnd::~CGcDxGameWnd)
    ;
    if ((param_1 & 1) != 0) {
      operator_delete__((CGameWnd *)((int)this + -4));
    }
    return (CGameWnd *)((int)this + -4);
  }
  *(undefined ***)this = CGcDxGameWnd::_vftable__for__CWnd__;
  *(undefined ***)((int)this + 0x54) = CGcDxGameWnd::_vftable__for__CControlBase__;
  if (*(void **)((int)this + 0x1d8) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x1d8));
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  CGameWnd::~CGameWnd(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- MinimizeGameWindow @ 10002120 size=75 ---- */

/* public: void __thiscall CGcDxGameWnd::MinimizeGameWindow(void) */

void __thiscall CGcDxGameWnd::MinimizeGameWindow(CGcDxGameWnd *this)

{
  CWinThread *pCVar1;
  CWnd *this_00;
  
                    /* 0x2120  55  ?MinimizeGameWindow@CGcDxGameWnd@@QAEXXZ */
  if ((*(int *)(this + 0x1dc) != 0) && (*(int *)(this + 0x1e0) != 0)) {
    *(undefined4 *)(this + 0x1e4) = 1;
    CWnd::ShowWindow((CWnd *)this,6);
  }
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    CWnd::ShowWindow((CWnd *)0x0,6);
    return;
  }
  this_00 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  CWnd::ShowWindow(this_00,6);
  return;
}



/* ---- OnPaint @ 10002170 size=89 ---- */

/* protected: void __thiscall CGcDxGameWnd::OnPaint(void) */

void __thiscall CGcDxGameWnd::OnPaint(CGcDxGameWnd *this)

{
  HDC pHVar1;
  IDxDevice *pIVar2;
  tagPAINTSTRUCT local_44;
  uint local_4;
  
                    /* 0x2170  70  ?OnPaint@CGcDxGameWnd@@IAEXXZ */
  local_4 = DAT_1000d460 ^ (uint)&local_44;
  pHVar1 = BeginPaint(*(HWND *)(this + 0x20),&local_44);
  CDC::FromHandle(pHVar1);
  pIVar2 = DxDevice();
  (**(code **)(*(int *)pIVar2 + 0x44))(&local_44.rcPaint);
  EndPaint(*(HWND *)(this + 0x20),(PAINTSTRUCT *)((&local_44)[-1].rgbReserved + 0x1c));
  __security_check_cookie(local_44.rgbReserved._28_4_ ^ (uint)((&local_44)[-1].rgbReserved + 0x1c));
  return;
}



/* ---- WindowProc @ 100021d0 size=66 ---- */

/* public: virtual long __thiscall CGcDxGameWnd::WindowProc(unsigned int,unsigned int,long) */

long __thiscall CGcDxGameWnd::WindowProc(CGcDxGameWnd *this,uint param_1,uint param_2,long param_3)

{
  HWND__ *pHVar1;
  long lVar2;
  
                    /* 0x21d0  82  ?WindowProc@CGcDxGameWnd@@UAEJIIJ@Z */
  neon::frw::SApp::Instance();
  if (this == (CGcDxGameWnd *)0x0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(this + 0x20);
  }
  lVar2 = neon::frw::CApp::MsgProc(pHVar1,param_1,param_2,param_3);
  if (lVar2 == 0) {
    lVar2 = CWnd::WindowProc((CWnd *)this,param_1,param_2,param_3);
  }
  return lVar2;
}



/* ---- OnRepaint @ 10002220 size=44 ---- */

/* protected: long __thiscall CGcDxGameWnd::OnRepaint(unsigned int,long) */

long __thiscall CGcDxGameWnd::OnRepaint(CGcDxGameWnd *this,uint param_1,long param_2)

{
  IDxDevice *pIVar1;
  tagRECT local_10;
  
                    /* 0x2220  71  ?OnRepaint@CGcDxGameWnd@@IAEJIJ@Z */
  GetClientRect(*(HWND *)(this + 0x20),&local_10);
  pIVar1 = DxDevice();
  (**(code **)(*(int *)pIVar1 + 0x44))(&local_10);
  return 0;
}



/* ---- GetGameResolution @ 10002250 size=41 ---- */

/* public: void __thiscall CGcDxGameWnd::GetGameResolution(void) */

void __thiscall CGcDxGameWnd::GetGameResolution(CGcDxGameWnd *this)

{
  LPRECT lpRect;
  
                    /* 0x2250  39  ?GetGameResolution@CGcDxGameWnd@@QAEXXZ */
  if (*(int *)(this + 0x1d8) == 0) {
    lpRect = operator_new(0x10);
    *(LPRECT *)(this + 0x1d8) = lpRect;
    GetWindowRect(*(HWND *)(this + 0x20),lpRect);
  }
  return;
}



/* ---- ChangeToFullMode @ 10002280 size=393 ---- */

/* protected: long __thiscall CGcDxGameWnd::ChangeToFullMode(void) */

long __thiscall CGcDxGameWnd::ChangeToFullMode(CGcDxGameWnd *this)

{
  int *piVar1;
  CWinThread *pCVar2;
  CWnd *this_00;
  HWND pHVar3;
  LPRECT lpRect;
  int iVar4;
  SGlobalInfo *pSVar5;
  CDisplayModeChanger *pCVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  tagRECT local_10;
  
                    /* 0x2280  30  ?ChangeToFullMode@CGcDxGameWnd@@IAEJXZ */
  GetWindowRect(*(HWND *)(this + 0x20),&local_10);
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) {
    this_00 = (CWnd *)0x0;
  }
  else {
    this_00 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x7c))();
  }
  CWnd::SetWindowPos(this_00,(CWnd *)wndNoTopMost_exref,0,0,local_10.right - local_10.left,
                     local_10.bottom - local_10.top,0x50);
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  CWnd::FromHandle(pHVar3);
  if (*(int *)(this + 0x1d8) == 0) {
    lpRect = operator_new(0x10);
    *(LPRECT *)(this + 0x1d8) = lpRect;
    GetWindowRect(*(HWND *)(this + 0x20),lpRect);
  }
  iVar4 = CWnd::ModifyStyle((CWnd *)this,0x40000000,0x80000000,1);
  if (iVar4 == 0) {
    return 0;
  }
  piVar1 = *(int **)(this + 0x1d8);
  uVar8 = piVar1[3] - piVar1[1];
  uVar9 = piVar1[2] - *piVar1;
  uVar10 = *(uint *)(this + 0x1d4);
  pSVar5 = GInfo();
  pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
  CDisplayModeChanger::SetResolution(pCVar6,uVar9,uVar8,uVar10);
  iVar4 = 1;
  pSVar5 = GInfo();
  pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
  iVar4 = CDisplayModeChanger::SetDisplayMode(pCVar6,iVar4);
  if (iVar4 == 0) {
    uVar10 = *(uint *)(this + 0x1d4);
    uVar8 = *(uint *)(this + 0x1d0);
    uVar9 = *(uint *)(this + 0x1cc);
    pSVar5 = GInfo();
    pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
    CDisplayModeChanger::SetResolution(pCVar6,uVar9,uVar8,uVar10);
    iVar7 = iVar4;
    pSVar5 = GInfo();
    pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
    CDisplayModeChanger::SetDisplayMode(pCVar6,iVar7);
  }
  CWnd::ModifyStyle((CWnd *)this,0x80000000,0x40000000,1);
  pCVar2 = AfxGetThread();
  if (pCVar2 != (CWinThread *)0x0) {
    iVar7 = (**(code **)(*(int *)pCVar2 + 0x7c))();
    if (iVar7 != 0) {
      pHVar3 = *(HWND *)(iVar7 + 0x20);
      goto LAB_100023d1;
    }
  }
  pHVar3 = (HWND)0x0;
LAB_100023d1:
  pHVar3 = SetParent(*(HWND *)(this + 0x20),pHVar3);
  CWnd::FromHandle(pHVar3);
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,5);
  return -(uint)(iVar4 != 1) & 0x80004005;
}



/* ---- RestoreDisplayMode @ 10002410 size=537 ---- */

/* protected: long __thiscall CGcDxGameWnd::RestoreDisplayMode(void) */

long __thiscall CGcDxGameWnd::RestoreDisplayMode(CGcDxGameWnd *this)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CVar1;
  HWND pHVar2;
  IDxDevice *pIVar3;
  int iVar4;
  SGlobalInfo *pSVar5;
  CDisplayModeChanger *pCVar6;
  CWinThread *pCVar7;
  CWnd *pCVar8;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_14 [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_12 [2];
  void *local_10;
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2410  77  ?RestoreDisplayMode@CGcDxGameWnd@@IAEJXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004669;
  local_c = ExceptionList;
  CVar1 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
          ((byte)DAT_1000d460 ^ (char)local_14 - 0xcU);
  ExceptionList = &local_c;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14);
  local_4 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_00,(char *)local_14);
  local_c = local_14 + -0x10;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            (local_14 + -0x10,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)&local_10)
  ;
  FUN_10001db0(CVar1);
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  CWnd::FromHandle(pHVar2);
  CWnd::ModifyStyle((CWnd *)this,0x40000000,0x80000000,1);
  pIVar3 = DxDevice();
  iVar4 = (**(code **)(*(int *)pIVar3 + 0x20))(1);
  if (iVar4 < 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14 + -4);
    ExceptionList = local_10;
    return iVar4;
  }
  pSVar5 = GInfo();
  pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
  iVar4 = CDisplayModeChanger::IsFullScreen(pCVar6);
  if (iVar4 != 0) {
    iVar4 = 0;
    pSVar5 = GInfo();
    pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
    iVar4 = CDisplayModeChanger::SetDisplayMode(pCVar6,iVar4);
    if (iVar4 == 0) {
      uVar11 = *(uint *)(this + 0x1d4);
      uVar10 = *(uint *)(this + 0x1d0);
      uVar9 = *(uint *)(this + 0x1cc);
      pSVar5 = GInfo();
      pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
      CDisplayModeChanger::SetResolution(pCVar6,uVar9,uVar10,uVar11);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14 + -4);
      ExceptionList = local_10;
      return -1;
    }
  }
  uVar11 = *(uint *)(this + 0x1d4);
  uVar10 = *(uint *)(this + 0x1d0);
  uVar9 = *(uint *)(this + 0x1cc);
  pSVar5 = GInfo();
  pCVar6 = SGlobalInfo::DisplayMode(pSVar5);
  CDisplayModeChanger::SetResolution(pCVar6,uVar9,uVar10,uVar11);
  pCVar7 = AfxGetThread();
  if (pCVar7 == (CWinThread *)0x0) {
    pCVar8 = (CWnd *)0x0;
  }
  else {
    pCVar8 = (CWnd *)(**(code **)(*(int *)pCVar7 + 0x7c))();
  }
  CWnd::SetWindowPos(pCVar8,(CWnd *)wndNoTopMost_exref,0,0,0,0,3);
  CWnd::ModifyStyle((CWnd *)this,0x80000000,0x40000000,1);
  pCVar7 = AfxGetThread();
  if (pCVar7 != (CWinThread *)0x0) {
    iVar4 = (**(code **)(*(int *)pCVar7 + 0x7c))();
    if (iVar4 != 0) {
      pHVar2 = *(HWND *)(iVar4 + 0x20);
      goto LAB_100025c7;
    }
  }
  pHVar2 = (HWND)0x0;
LAB_100025c7:
  pHVar2 = SetParent(*(HWND *)(this + 0x20),pHVar2);
  CWnd::FromHandle(pHVar2);
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,5);
  pCVar7 = AfxGetThread();
  if (pCVar7 == (CWinThread *)0x0) {
    pCVar8 = (CWnd *)0x0;
  }
  else {
    pCVar8 = (CWnd *)(**(code **)(*(int *)pCVar7 + 0x7c))();
  }
  CWnd::CenterWindow(pCVar8,(CWnd *)0x0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14 + -4);
  ExceptionList = local_10;
  return 0;
}



/* ---- ChangeDisplayMode @ 10002630 size=375 ---- */

/* public: int __thiscall CGcDxGameWnd::ChangeDisplayMode(int *) */

int __thiscall CGcDxGameWnd::ChangeDisplayMode(CGcDxGameWnd *this,int *param_1)

{
  byte bVar1;
  LPRECT lpRect;
  long lVar2;
  SGlobalInfo *pSVar3;
  CDisplayModeChanger *pCVar4;
  IGod *pIVar5;
  uint uVar6;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStack00000008;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_21;
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2630  29  ?ChangeDisplayMode@CGcDxGameWnd@@QAEHPAH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004699;
  local_c = ExceptionList;
  bVar1 = (byte)DAT_1000d460;
  ExceptionList = &local_c;
  if (param_1 == (int *)0x0) {
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    uVar6 = (uint)(*(int *)(pCVar4 + 4) != 0);
  }
  else {
    uVar6 = *param_1;
  }
  if (*(int *)(this + 0x1d8) == 0) {
    lpRect = operator_new(0x10);
    *(LPRECT *)(this + 0x1d8) = lpRect;
    GetWindowRect(*(HWND *)(this + 0x20),lpRect);
  }
  if (uVar6 == 0) {
    lVar2 = ChangeToFullMode(this);
    if (lVar2 < 0) {
      ExceptionList = local_c;
      return 0;
    }
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    *(undefined4 *)(pCVar4 + 4) = 1;
    pIVar5 = God();
    (**(code **)(*(int *)pIVar5 + 0x20))("gameView","onDisplayModeChanged",Void_exref,0);
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1);
    local_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_00,(char *)&param_1);
    local_c = (undefined1 *)((int)register0x00000010 + -0x24);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               ((int)register0x00000010 + -0x24),&CStack00000008);
    FUN_10001db0((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
                 (bVar1 ^ (byte)((int)register0x00000010 + -0x20)));
    RestoreDisplayMode(this);
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    *(undefined4 *)(pCVar4 + 4) = 0;
    pIVar5 = God();
    (**(code **)(*(int *)pIVar5 + 0x20))("gameView","onDisplayModeChanged",Void_exref);
    local_4 = 0xffffffff;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1);
  }
  *(uint *)(this + 0x1e0) = (uint)(uVar6 == 0);
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
  CDisplayModeChanger::DoExtendCode(pCVar4);
  ExceptionList = local_c;
  return 1;
}



/* ---- FUN_100027b0 @ 100027b0 size=108 ---- */

void __fastcall FUN_100027b0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  iVar2 = param_1[1];
  if (*(char *)(iVar2 + 0x2d) != '\0') {
    _invalid_parameter_noinfo();
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
    param_1[1] = (int)piVar3;
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while ((cVar1 == '\0' && (param_1[1] == *(int *)(iVar2 + 8)))) {
    param_1[1] = iVar2;
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  param_1[1] = iVar2;
  return;
}



/* ---- FUN_10002820 @ 10002820 size=8 ---- */

void __thiscall FUN_10002820(void *this,byte param_1)

{
  FUN_10002090((void *)((int)this + -0x54),param_1);
  return;
}



/* ---- GetMessageMap @ 10002830 size=45 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual struct AFX_MSGMAP const * __thiscall CGcDxGameWnd::GetMessageMap(void)const
    */

AFX_MSGMAP * CGcDxGameWnd::GetMessageMap(void)

{
                    /* 0x2830  41  ?GetMessageMap@CGcDxGameWnd@@MBEPBUAFX_MSGMAP@@XZ
                       0x2830  47  ?GetThisMessageMap@CGcDxGameWnd@@KGPBUAFX_MSGMAP@@XZ */
  if ((_DAT_1000d4e0 & 1) == 0) {
    _DAT_1000d4e0 = _DAT_1000d4e0 | 1;
    _DAT_1000d4d8 = GetThisMessageMap_exref;
    _DAT_1000d4dc = &DAT_10005f88;
  }
  return (AFX_MSGMAP *)&DAT_1000d4d8;
}



/* ---- ApplyXDeviceMode @ 10002860 size=399 ---- */

/* public: void __thiscall CGcDxGameWnd::ApplyXDeviceMode(void) */

void __thiscall CGcDxGameWnd::ApplyXDeviceMode(CGcDxGameWnd *this)

{
  byte bVar1;
  SGlobalInfo *pSVar2;
  CDisplayModeChanger *pCVar3;
  CApp *this_00;
  IDxDevice *pIVar4;
  CWinThread *pCVar5;
  int iVar6;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  bool bVar7;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_25;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_14 [4];
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> aCStack_10 [4];
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2860  28  ?ApplyXDeviceMode@CGcDxGameWnd@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100046c9;
  local_c = ExceptionList;
  bVar1 = (byte)DAT_1000d460;
  ExceptionList = &local_c;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  bVar7 = 0 < *(int *)(pCVar3 + 4);
  this_00 = neon::frw::SApp::Instance();
  neon::frw::CApp::SetDisplay24Bit(this_00,bVar7);
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(pCVar3 + 8);
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(pCVar3 + 0xc);
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(pCVar3 + 0x10);
  pSVar2 = GInfo();
  SGlobalInfo::DisplayMode(pSVar2);
  pIVar4 = DxDevice();
  (**(code **)(*(int *)pIVar4 + 0x1c))();
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  if (*(int *)(pCVar3 + 0x1c) != 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_14);
    uStack_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (aCStack_14,(char *)aCStack_14);
    local_c = aCStack_14 + -0x14;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_14 + -0x14,aCStack_10);
    FUN_10001db0((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
                 (bVar1 ^ (char)aCStack_14 - 0x10U));
    pSVar2 = GInfo();
    SGlobalInfo::DisplayMode(pSVar2);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_01,(char *)aCStack_10);
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
    if (*(int *)(pCVar3 + 4) == 0) {
      RestoreDisplayMode(this);
    }
    else {
      ChangeToFullMode(this);
    }
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  }
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(pCVar3 + 4);
  pCVar5 = AfxGetThread();
  if (pCVar5 == (CWinThread *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(*(int *)pCVar5 + 0x7c))();
  }
  *(undefined4 *)(iVar6 + 0x178) = 1;
  ExceptionList = local_c;
  return;
}



/* ---- SetDlgClipRegion @ 100029f0 size=148 ---- */

/* public: void __thiscall CGcDxGameWnd::SetDlgClipRegion(void) */

void __thiscall CGcDxGameWnd::SetDlgClipRegion(CGcDxGameWnd *this)

{
  int *piVar1;
  int iVar2;
  CDialogList *pCVar3;
  IDxDevice *pIVar4;
  int iVar5;
  int *local_8;
  int local_4;
  
                    /* 0x29f0  78  ?SetDlgClipRegion@CGcDxGameWnd@@QAEXXZ */
  pCVar3 = DialogList();
  local_4 = **(int **)(pCVar3 + 0x1c);
  local_8 = *(int **)(pCVar3 + 4);
  while( true ) {
    iVar2 = local_4;
    piVar1 = local_8;
    pCVar3 = DialogList();
    iVar5 = *(int *)(pCVar3 + 0x1c);
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(pCVar3 + 4))) {
      _invalid_parameter_noinfo();
    }
    if (iVar2 == iVar5) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (iVar2 == *(int *)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = *(int *)(iVar2 + 0x28);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
      pIVar4 = DxDevice();
      (**(code **)(*(int *)pIVar4 + 0x48))(*(undefined4 *)(iVar5 + 0x20));
    }
    FUN_100027b0((int *)&local_8);
  }
  return;
}



/* ---- RemoveDlgClipRegion @ 10002a90 size=148 ---- */

/* public: void __thiscall CGcDxGameWnd::RemoveDlgClipRegion(void) */

void __thiscall CGcDxGameWnd::RemoveDlgClipRegion(CGcDxGameWnd *this)

{
  int *piVar1;
  int iVar2;
  CDialogList *pCVar3;
  IDxDevice *pIVar4;
  int iVar5;
  int *local_8;
  int local_4;
  
                    /* 0x2a90  76  ?RemoveDlgClipRegion@CGcDxGameWnd@@QAEXXZ */
  pCVar3 = DialogList();
  local_4 = **(int **)(pCVar3 + 0x1c);
  local_8 = *(int **)(pCVar3 + 4);
  while( true ) {
    iVar2 = local_4;
    piVar1 = local_8;
    pCVar3 = DialogList();
    iVar5 = *(int *)(pCVar3 + 0x1c);
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(pCVar3 + 4))) {
      _invalid_parameter_noinfo();
    }
    if (iVar2 == iVar5) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (iVar2 == *(int *)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = *(int *)(iVar2 + 0x28);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
      pIVar4 = DxDevice();
      (**(code **)(*(int *)pIVar4 + 0x4c))(*(undefined4 *)(iVar5 + 0x20));
    }
    FUN_100027b0((int *)&local_8);
  }
  return;
}



/* ---- CGcDxMainFrameView @ 10002b30 size=26 ---- */

/* public: __thiscall CGcDxMainFrameView::CGcDxMainFrameView(class CGcDxMainFrameView const &) */

CGcDxMainFrameView * __thiscall
CGcDxMainFrameView::CGcDxMainFrameView(CGcDxMainFrameView *this,CGcDxMainFrameView *param_1)

{
                    /* 0x2b30  7  ??0CGcDxMainFrameView@@QAE@ABV0@@Z */
  CMainFrameView::CMainFrameView((CMainFrameView *)this,(CMainFrameView *)param_1);
  *(undefined ***)this = _vftable_;
  return this;
}



/* ---- operator= @ 10002b50 size=20 ---- */

/* public: class CGcDxMainFrameView & __thiscall CGcDxMainFrameView::operator=(class
   CGcDxMainFrameView const &) */

CGcDxMainFrameView * __thiscall
CGcDxMainFrameView::operator=(CGcDxMainFrameView *this,CGcDxMainFrameView *param_1)

{
                    /* 0x2b50  19  ??4CGcDxMainFrameView@@QAEAAV0@ABV0@@Z */
  CMainFrameView::operator=((CMainFrameView *)this,(CMainFrameView *)param_1);
  return this;
}



/* ---- CGcDxMainFrameView @ 10002b70 size=19 ---- */

/* public: __thiscall CGcDxMainFrameView::CGcDxMainFrameView(void) */

CGcDxMainFrameView * __thiscall CGcDxMainFrameView::CGcDxMainFrameView(CGcDxMainFrameView *this)

{
                    /* 0x2b70  8  ??0CGcDxMainFrameView@@QAE@XZ */
  CMainFrameView::CMainFrameView((CMainFrameView *)this);
  *(undefined ***)this = _vftable_;
  return this;
}



/* ---- ~CGcDxMainFrameView @ 10002b90 size=12 ---- */

/* public: virtual __thiscall CGcDxMainFrameView::~CGcDxMainFrameView(void) */

void __thiscall CGcDxMainFrameView::~CGcDxMainFrameView(CGcDxMainFrameView *this)

{
                    /* 0x2b90  14  ??1CGcDxMainFrameView@@UAE@XZ */
  *(undefined ***)this = _vftable_;
                    /* WARNING: Could not recover jumptable at 0x10002b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMainFrameView::~CMainFrameView((CMainFrameView *)this);
  return;
}



/* ---- FUN_10002ba0 @ 10002ba0 size=89 ---- */

CMainFrameView * __thiscall FUN_10002ba0(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = CGcDxMainFrameView::_vftable_;
    CMainFrameView::~CMainFrameView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,4,*(int *)((int)this + -4),CGcDxMainFrameView::~CGcDxMainFrameView);
  if ((param_1 & 1) != 0) {
    operator_delete__((CMainFrameView *)((int)this + -4));
  }
  return (CMainFrameView *)((int)this + -4);
}



/* ---- Evt_LobbyState_OnStateChanged @ 10002c00 size=83 ---- */

/* public: int __thiscall CGcDxMainFrameView::Evt_LobbyState_OnStateChanged(struct IParam &) */

int __thiscall
CGcDxMainFrameView::Evt_LobbyState_OnStateChanged(CGcDxMainFrameView *this,IParam *param_1)

{
  CMainFrameWnd *this_00;
  BOOL BVar1;
  CGcDxMainFrameView **ppCVar2;
  CGcDxMainFrameView *local_4;
  
  local_4 = this;
                    /* 0x2c00  36
                       ?Evt_LobbyState_OnStateChanged@CGcDxMainFrameView@@QAEHAAUIParam@@@Z */
  this_00 = CMainFrameView::GetMainWnd((CMainFrameView *)this);
  BVar1 = IsIconic(*(HWND *)(this_00 + 0x20));
  if (BVar1 == 1) {
    CWnd::ShowWindow((CWnd *)this_00,9);
  }
  ppCVar2 = &local_4;
  local_4 = (CGcDxMainFrameView *)0x0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_10006070);
  CMainFrameWnd::UpdateSkin(this_00,(char *)ppCVar2);
  return 0;
}



/* ---- FUN_10002c60 @ 10002c60 size=18 ---- */

void __fastcall FUN_10002c60(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = CMFunctor<CGcDxMainFrameView>::vftable;
    operator_delete(param_1);
  }
  return;
}



/* ---- OnAttached @ 10002c80 size=78 ---- */

/* public: virtual bool __thiscall CGcDxMainFrameView::OnAttached(void) */

bool __thiscall CGcDxMainFrameView::OnAttached(CGcDxMainFrameView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x2c80  60  ?OnAttached@CGcDxMainFrameView@@UAE_NXZ */
  CMainFrameView::OnAttached((CMainFrameView *)this);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CMFunctor<CGcDxMainFrameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_LobbyState_OnStateChanged;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("lobbyState","onStateChanged",puVar2,1);
  return true;
}



/* ---- _GetBaseClass @ 10002cd0 size=6 ---- */

/* protected: static struct CRuntimeClass * __stdcall CGcDxMainFrameWnd::_GetBaseClass(void) */

CRuntimeClass * CGcDxMainFrameWnd::_GetBaseClass(void)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x2cd0  85  ?_GetBaseClass@CGcDxMainFrameWnd@@KGPAUCRuntimeClass@@XZ */
  pCVar1 = CMainFrameWnd::GetThisClass();
  return pCVar1;
}



/* ---- GetRuntimeClass @ 10002ce0 size=6 ---- */

/* public: virtual struct CRuntimeClass * __thiscall CGcDxMainFrameWnd::GetRuntimeClass(void)const
    */

CRuntimeClass * CGcDxMainFrameWnd::GetRuntimeClass(void)

{
                    /* 0x2ce0  44  ?GetRuntimeClass@CGcDxMainFrameWnd@@UBEPAUCRuntimeClass@@XZ
                       0x2ce0  46  ?GetThisClass@CGcDxMainFrameWnd@@SGPAUCRuntimeClass@@XZ */
  return (CRuntimeClass *)&classCGcDxMainFrameWnd;
}



/* ---- CGcDxMainFrameWnd @ 10002cf0 size=49 ---- */

/* public: __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd(void) */

CGcDxMainFrameWnd * __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd(CGcDxMainFrameWnd *this)

{
                    /* 0x2cf0  9  ??0CGcDxMainFrameWnd@@QAE@XZ */
  CMainFrameWnd::CMainFrameWnd((CMainFrameWnd *)this);
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined ***)this = _vftable__for__CFrameWnd__;
  *(undefined ***)(this + 0xe8) = _vftable__for__CControlBase__;
  return this;
}



/* ---- ~CGcDxMainFrameWnd @ 10002d30 size=22 ---- */

/* public: virtual __thiscall CGcDxMainFrameWnd::~CGcDxMainFrameWnd(void) */

void __thiscall CGcDxMainFrameWnd::~CGcDxMainFrameWnd(CGcDxMainFrameWnd *this)

{
                    /* 0x2d30  15  ??1CGcDxMainFrameWnd@@UAE@XZ */
  *(undefined ***)this = _vftable__for__CFrameWnd__;
  *(undefined ***)(this + 0xe8) = _vftable__for__CControlBase__;
                    /* WARNING: Could not recover jumptable at 0x10002d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMainFrameWnd::~CMainFrameWnd((CMainFrameWnd *)this);
  return;
}



/* ---- WindowProc @ 10002d50 size=70 ---- */

/* public: virtual long __thiscall CGcDxMainFrameWnd::WindowProc(unsigned int,unsigned int,long) */

long __thiscall
CGcDxMainFrameWnd::WindowProc(CGcDxMainFrameWnd *this,uint param_1,uint param_2,long param_3)

{
  CUIInputManager *this_00;
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  CControl *pCVar5;
  
                    /* 0x2d50  83  ?WindowProc@CGcDxMainFrameWnd@@UAEJIIJ@Z */
  if ((param_1 < 0x200) || (0x20a < param_1)) {
    pCVar5 = (CControl *)0x0;
    uVar2 = param_1;
    uVar3 = param_2;
    uVar4 = param_3;
    this_00 = neon::ctrl::SUIManager::Instance();
    neon::ctrl::CUIInputManager::ProcessMessage(this_00,uVar2,uVar3,uVar4,pCVar5);
  }
  lVar1 = CWnd::WindowProc((CWnd *)this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- OnTimer @ 10002da0 size=301 ---- */

/* public: virtual void __thiscall CGcDxMainFrameWnd::OnTimer(unsigned int) */

void __thiscall CGcDxMainFrameWnd::OnTimer(CGcDxMainFrameWnd *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  IGod *pIVar3;
  int iVar4;
  CApp *this_00;
  byte *pbVar5;
  bool bVar6;
  undefined4 uStack_98;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2da0  74  ?OnTimer@CGcDxMainFrameWnd@@UAEXI@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100046fc;
  local_c = ExceptionList;
  local_10 = DAT_1000d460 ^ (uint)&uStack_98;
  uVar2 = DAT_1000d460 ^ (uint)(local_94 + -0xc);
  ExceptionList = &local_c;
  if ((param_1 == 0xd05) || (param_1 == 0xd06)) {
    CParam::CParam(local_94,false);
    local_4 = 0;
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))("lobbyState","queryState",local_94,1,uVar2);
    CParam::GetValue(local_94,"p008",(char **)&uStack_98);
    pbVar5 = &DAT_10005c4c;
    do {
      bVar1 = *uStack_98;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_10002e70:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10002e75;
      }
      if (bVar1 == 0) break;
      bVar1 = uStack_98[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_10002e70;
      uStack_98 = uStack_98 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10002e75:
    if (iVar4 == 0) {
      this_00 = neon::frw::SApp::Instance();
      neon::frw::CApp::Run(this_00);
    }
    local_4 = 0xffffffff;
    CParam::~CParam(local_94);
  }
  CMainFrameWnd::OnTimer((CMainFrameWnd *)this,param_1);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&uStack_98);
  return;
}



/* ---- OnSize @ 10002ed0 size=164 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::OnSize(unsigned int,int,int) */

void __thiscall
CGcDxMainFrameWnd::OnSize(CGcDxMainFrameWnd *this,uint param_1,int param_2,int param_3)

{
  uint uVar1;
  CGameWnd *pCVar2;
  int iVar3;
  uint *puVar4;
  
                    /* 0x2ed0  73  ?OnSize@CGcDxMainFrameWnd@@QAEXIHH@Z */
  uVar1 = param_1;
  if (*(int *)(this + 0x178) != 0) {
    param_1 = 0;
    if (uVar1 == 1) {
      pCVar2 = AfxGetGameWnd();
      iVar3 = CGcDxGameWnd::IsFullMode((CGcDxGameWnd *)pCVar2);
      if ((iVar3 != 0) && (pCVar2 = AfxGetGameWnd(), *(int *)(pCVar2 + 0x1e4) != 0)) {
        puVar4 = &param_1;
        param_1 = uVar1;
        pCVar2 = AfxGetGameWnd();
        CGcDxGameWnd::ChangeDisplayMode((CGcDxGameWnd *)pCVar2,(int *)puVar4);
      }
    }
    else if (uVar1 == 0) {
      pCVar2 = AfxGetGameWnd();
      iVar3 = CGcDxGameWnd::IsFullMode((CGcDxGameWnd *)pCVar2);
      if ((iVar3 == 0) && (pCVar2 = AfxGetGameWnd(), *(int *)(pCVar2 + 0x1e4) != 0)) {
        puVar4 = &param_1;
        param_1 = uVar1;
        pCVar2 = AfxGetGameWnd();
        CGcDxGameWnd::ChangeDisplayMode((CGcDxGameWnd *)pCVar2,(int *)puVar4);
        pCVar2 = AfxGetGameWnd();
        *(undefined4 *)(pCVar2 + 0x1e4) = 0;
      }
    }
  }
  CFrameWnd::OnSize((CFrameWnd *)this,uVar1,param_2,param_3);
  return;
}



/* ---- OnModalIdle @ 10002f80 size=260 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnModalIdle(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnModalIdle(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  byte bVar1;
  IGod *pIVar2;
  byte *pbVar3;
  int iVar4;
  CApp *this_00;
  long lVar5;
  byte *pbVar6;
  bool bVar7;
  byte *pbStack_a8;
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
  
                    /* 0x2f80  69  ?OnModalIdle@CGcDxMainFrameWnd@@QAEJIJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000473c;
  local_c = ExceptionList;
  local_10 = DAT_1000d460 ^ (uint)auStack_98;
  ExceptionList = &local_c;
  pCStack_a4 = (CParam *)0x10002fc3;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar2 = God();
  pCStack_a4 = local_94;
  pbStack_a8 = (byte *)0x100062b8;
  (**(code **)(*(int *)pIVar2 + 0x10))("lobbyState");
  CParam::GetValue((CParam *)&pCStack_a4,"p008",(char **)&pbStack_a8);
  pbVar6 = &DAT_10005c4c;
  pbVar3 = pbStack_a8;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_10003030:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_10003035;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_10003030;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10003035:
  if (iVar4 == 0) {
    this_00 = neon::frw::SApp::Instance();
    neon::frw::CApp::Run(this_00);
  }
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)&pCStack_a4);
  ExceptionList = pvStack_1c;
  lVar5 = __security_check_cookie(uStack_20 ^ (uint)&pbStack_a8);
  return lVar5;
}



/* ---- GetGameResolution @ 10003090 size=42 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::GetGameResolution(class CRect &) */

void __thiscall CGcDxMainFrameWnd::GetGameResolution(CGcDxMainFrameWnd *this,CRect *param_1)

{
                    /* 0x3090  40  ?GetGameResolution@CGcDxMainFrameWnd@@QAEXAAVCRect@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x15c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x160);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x164);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x168);
  return;
}



/* ---- GetFrameResolution @ 100030c0 size=42 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::GetFrameResolution(class CRect &) */

void __thiscall CGcDxMainFrameWnd::GetFrameResolution(CGcDxMainFrameWnd *this,CRect *param_1)

{
                    /* 0x30c0  38  ?GetFrameResolution@CGcDxMainFrameWnd@@QAEXAAVCRect@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x14c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x150);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x154);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x158);
  return;
}



/* ---- FUN_10003100 @ 10003100 size=102 ---- */

CMainFrameWnd * __thiscall FUN_10003100(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = CGcDxMainFrameWnd::_vftable__for__CFrameWnd__;
    *(undefined ***)((int)this + 0xe8) = CGcDxMainFrameWnd::_vftable__for__CControlBase__;
    CMainFrameWnd::~CMainFrameWnd(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,0x184,*(int *)((int)this + -4),CGcDxMainFrameWnd::~CGcDxMainFrameWnd);
  if ((param_1 & 1) != 0) {
    operator_delete__((CMainFrameWnd *)((int)this + -4));
  }
  return (CMainFrameWnd *)((int)this + -4);
}



/* ---- OnKillFocus @ 10003170 size=8 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::OnKillFocus(class CWnd *) */

void __thiscall CGcDxMainFrameWnd::OnKillFocus(CGcDxMainFrameWnd *this,CWnd *param_1)

{
                    /* 0x3170  68  ?OnKillFocus@CGcDxMainFrameWnd@@QAEXPAVCWnd@@@Z */
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnEnterSizeMove @ 10003180 size=80 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnEnterSizeMove(unsigned int,long) */

long __thiscall
CGcDxMainFrameWnd::OnEnterSizeMove(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  code *pcVar1;
  UINT_PTR UVar2;
  long lVar3;
  
                    /* 0x3180  64  ?OnEnterSizeMove@CGcDxMainFrameWnd@@QAEJIJ@Z */
  if (*(UINT_PTR *)(this + 0x17c) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x17c));
  }
  UVar2 = SetTimer(*(HWND *)(this + 0x20),0xd05,10,(TIMERPROC)0x0);
  pcVar1 = *(code **)(*(int *)this + 0x120);
  *(UINT_PTR *)(this + 0x17c) = UVar2;
  lVar3 = (*pcVar1)(0x231,param_1,param_2);
  return lVar3;
}



/* ---- OnExitSizeMove @ 100031d0 size=55 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnExitSizeMove(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnExitSizeMove(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  long lVar1;
  
                    /* 0x31d0  66  ?OnExitSizeMove@CGcDxMainFrameWnd@@QAEJIJ@Z */
  if (*(UINT_PTR *)(this + 0x17c) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x17c));
  }
  lVar1 = (**(code **)(*(int *)this + 0x120))(0x232,param_1,param_2);
  return lVar1;
}



/* ---- OnActivate @ 10003210 size=350 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::OnActivate(unsigned int,class CWnd *,int) */

void __thiscall
CGcDxMainFrameWnd::OnActivate(CGcDxMainFrameWnd *this,uint param_1,CWnd *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  IGod *pIVar3;
  int iVar4;
  SGlobalInfo *this_00;
  void *pvVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 uStack_98;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x3210  57  ?OnActivate@CGcDxMainFrameWnd@@QAEXIPAVCWnd@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000477c;
  local_c = ExceptionList;
  local_10 = DAT_1000d460 ^ (uint)&uStack_98;
  uVar2 = DAT_1000d460 ^ (uint)(local_94 + -0x14);
  ExceptionList = &local_c;
  if (((param_1 == 1) || (param_1 == 2)) && (param_3 == 0)) {
    CParam::CParam(local_94,false);
    local_4 = param_3;
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))("lobbyState","queryState",local_94,1,uVar2);
    CParam::GetValue(local_94,"p008",(char **)&uStack_98);
    pbVar6 = &DAT_10005c4c;
    do {
      bVar1 = *uStack_98;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_100032e6:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_100032eb;
      }
      if (bVar1 == 0) break;
      bVar1 = uStack_98[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_100032e6;
      uStack_98 = uStack_98 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100032eb:
    if (iVar4 == 0) {
      this_00 = GInfo();
      pvVar5 = SGlobalInfo::GetGameWndPtr(this_00);
      if (pvVar5 != (void *)0x0) {
        SendMessageA(*(HWND *)((int)pvVar5 + 0x20),0x42f,0,0);
      }
    }
    local_4 = 0xffffffff;
    CParam::~CParam(local_94);
  }
  if (*(int *)(this + 0x178) == 0) {
    CMainFrameWnd::OnActivate((CMainFrameWnd *)this,param_1,param_2,param_3);
  }
  else {
    CFrameWnd::OnActivate((CFrameWnd *)this,param_1,param_2,param_3);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&uStack_98);
  return;
}



/* ---- OnEnterDlgDrag @ 10003370 size=55 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnEnterDlgDrag(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnEnterDlgDrag(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  UINT_PTR UVar1;
  
                    /* 0x3370  63  ?OnEnterDlgDrag@CGcDxMainFrameWnd@@QAEJIJ@Z */
  if (*(UINT_PTR *)(this + 0x180) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x180));
  }
  UVar1 = SetTimer(*(HWND *)(this + 0x20),0xd06,10,(TIMERPROC)0x0);
  *(UINT_PTR *)(this + 0x180) = UVar1;
  return 0;
}



/* ---- OnExitDlgDrag @ 100033b0 size=26 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnExitDlgDrag(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnExitDlgDrag(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
                    /* 0x33b0  65  ?OnExitDlgDrag@CGcDxMainFrameWnd@@QAEJIJ@Z */
  if (*(UINT_PTR *)(this + 0x180) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x180));
  }
  return 0;
}



/* ---- FUN_100033d0 @ 100033d0 size=11 ---- */

void __thiscall FUN_100033d0(void *this,byte param_1)

{
  FUN_10003100((void *)((int)this + -0xe8),param_1);
  return;
}



/* ---- GetMessageMap @ 100033e0 size=45 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual struct AFX_MSGMAP const * __thiscall
   CGcDxMainFrameWnd::GetMessageMap(void)const  */

AFX_MSGMAP * CGcDxMainFrameWnd::GetMessageMap(void)

{
                    /* 0x33e0  42  ?GetMessageMap@CGcDxMainFrameWnd@@MBEPBUAFX_MSGMAP@@XZ
                       0x33e0  48  ?GetThisMessageMap@CGcDxMainFrameWnd@@KGPBUAFX_MSGMAP@@XZ */
  if ((_DAT_1000d4ec & 1) == 0) {
    _DAT_1000d4ec = _DAT_1000d4ec | 1;
    _DAT_1000d4e4 = GetThisMessageMap_exref;
    _DAT_1000d4e8 = &DAT_100062c8;
  }
  return (AFX_MSGMAP *)&DAT_1000d4e4;
}



/* ---- Logic @ 1000340e size=6 ---- */

void __thiscall neon::frw::CObject::Logic(CObject *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000340e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Logic(this);
  return;
}



/* ---- Output @ 10003414 size=6 ---- */

void __thiscall neon::visual::CVisual::Output(CVisual *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Output(this);
  return;
}



/* ---- BeforeRelease @ 1000341a size=6 ---- */

void __thiscall neon::frw::CComponent::BeforeRelease(CComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000341a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeforeRelease(this);
  return;
}



/* ---- OnAttached @ 10003420 size=6 ---- */

void __thiscall neon::visual::CVisual::OnAttached(CVisual *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAttached(this);
  return;
}



/* ---- OnDetached @ 10003426 size=6 ---- */

void __thiscall neon::visual::CVisual::OnDetached(CVisual *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDetached(this);
  return;
}



/* ---- OnActivate @ 1000342c size=6 ---- */

void __thiscall neon::frw::CObject::OnActivate(CObject *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivate(this,param_1);
  return;
}



/* ---- OnSelect @ 10003432 size=6 ---- */

void __thiscall neon::frw::CObject::OnSelect(CObject *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSelect(this,param_1);
  return;
}



/* ---- OnFocus @ 10003438 size=6 ---- */

void __thiscall neon::frw::CObject::OnFocus(CObject *this,bool param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFocus(this,param_1,param_2);
  return;
}



/* ---- IsIn @ 1000343e size=6 ---- */

CObject * __thiscall neon::frw::CObject::IsIn(CObject *this,int param_1,int param_2)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000343e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = IsIn(this,param_1,param_2);
  return pCVar1;
}



/* ---- Clone @ 10003444 size=6 ---- */

CObject * __thiscall neon::visual::CVisual::Clone(CVisual *this)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = Clone(this);
  return pCVar1;
}



/* ---- Copy @ 1000344a size=6 ---- */

void __thiscall neon::visual::CVisual::Copy(CVisual *this,CObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000344a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Copy(this,param_1);
  return;
}



/* ---- IsMyIn @ 10003450 size=6 ---- */

CObject * __thiscall neon::frw::CObject::IsMyIn(CObject *this,int param_1,int param_2)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = IsMyIn(this,param_1,param_2);
  return pCVar1;
}



/* ---- IsChildIn @ 10003456 size=6 ---- */

CObject * __thiscall neon::frw::CObject::IsChildIn(CObject *this,int param_1,int param_2)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = IsChildIn(this,param_1,param_2);
  return pCVar1;
}



/* ---- SetEffect @ 1000345c size=6 ---- */

void __thiscall
neon::visual::CVisual::SetEffect
          (CVisual *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4)

{
                    /* WARNING: Could not recover jumptable at 0x1000345c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEffect(this,param_1,param_2,param_3,param_4);
  return;
}



/* ---- SetEffectType @ 10003462 size=6 ---- */

void __thiscall
neon::visual::CVisual::SetEffectType
          (CVisual *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,
          uchar param_5)

{
                    /* WARNING: Could not recover jumptable at 0x10003462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEffectType(this,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ---- SetClipRect @ 10003468 size=6 ---- */

void __thiscall
neon::visual::CVisual::SetClipRect(CVisual *this,CBasicRect<float> *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetClipRect(this,param_1,param_2);
  return;
}



/* ---- SetLocalClipRect @ 1000346e size=6 ---- */

void __thiscall
neon::visual::CVisual::SetLocalClipRect(CVisual *this,CBasicRect<float> *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000346e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLocalClipRect(this,param_1,param_2);
  return;
}



/* ---- GetPosX @ 10003474 size=6 ---- */

float __thiscall neon::visual::CVisual::GetPosX(CVisual *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = GetPosX(this);
  return fVar1;
}



/* ---- GetPosY @ 1000347a size=6 ---- */

float __thiscall neon::visual::CVisual::GetPosY(CVisual *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000347a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = GetPosY(this);
  return fVar1;
}



/* ---- SetPosX @ 10003480 size=6 ---- */

void __thiscall neon::visual::CVisual::SetPosX(CVisual *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPosX(this,param_1);
  return;
}



/* ---- SetPosY @ 10003486 size=6 ---- */

void __thiscall neon::visual::CVisual::SetPosY(CVisual *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPosY(this,param_1);
  return;
}



/* ---- SetShowRef @ 1000348c size=6 ---- */

void __thiscall neon::visual::CVisual::SetShowRef(CVisual *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetShowRef(this,param_1);
  return;
}



/* ---- SetInverse @ 10003492 size=6 ---- */

void __thiscall neon::visual::CVisual::SetInverse(CVisual *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInverse(this,param_1);
  return;
}



/* ---- SetPivot @ 10003498 size=6 ---- */

void __thiscall neon::visual::CVisual::SetPivot(CVisual *this,float param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPivot(this,param_1,param_2);
  return;
}



/* ---- SetUseParentRotation @ 1000349e size=6 ---- */

void __thiscall neon::visual::CVisual::SetUseParentRotation(CVisual *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000349e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUseParentRotation(this,param_1);
  return;
}



/* ---- GetAlpha @ 100034a4 size=6 ---- */

uchar __thiscall neon::visual::CVisual::GetAlpha(CVisual *this)

{
  uchar uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetAlpha(this);
  return uVar1;
}



/* ---- GetMessageMap @ 100034aa size=6 ---- */

AFX_MSGMAP * __thiscall CBaseApp::GetMessageMap(CBaseApp *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- RegisterHandlers @ 100034b0 size=6 ---- */

void __thiscall CBaseApp::RegisterHandlers(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegisterHandlers(this);
  return;
}



/* ---- RegWork_LoadFullScreenSetting @ 100034b6 size=6 ---- */

void __thiscall CBaseApp::RegWork_LoadFullScreenSetting(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_LoadFullScreenSetting(this);
  return;
}



/* ---- RegWork_SaveFullScreenSetting @ 100034bc size=6 ---- */

void __thiscall CBaseApp::RegWork_SaveFullScreenSetting(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_SaveFullScreenSetting(this);
  return;
}



/* ---- RegWork_RegisterNotifyWnd @ 100034c2 size=6 ---- */

void __thiscall CBaseApp::RegWork_RegisterNotifyWnd(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_RegisterNotifyWnd(this);
  return;
}



/* ---- RegWork_EraseNotifyWnd @ 100034c8 size=6 ---- */

void __thiscall CBaseApp::RegWork_EraseNotifyWnd(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_EraseNotifyWnd(this);
  return;
}



/* ---- CheckTestMode @ 100034ce size=6 ---- */

void __thiscall CBaseApp::CheckTestMode(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CheckTestMode(this);
  return;
}



/* ---- MakeFrameInstance @ 100034d4 size=6 ---- */

CFrameWnd * __thiscall CBaseApp::MakeFrameInstance(CBaseApp *this)

{
  CFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = MakeFrameInstance(this);
  return pCVar1;
}



/* ---- MakeGameInstance @ 100034da size=6 ---- */

void * __thiscall CBaseApp::MakeGameInstance(CBaseApp *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = MakeGameInstance(this);
  return pvVar1;
}



/* ---- HookConfigLoader @ 100034e0 size=6 ---- */

int __thiscall CBaseApp::HookConfigLoader(CBaseApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = HookConfigLoader(this);
  return iVar1;
}



/* ---- CheckBipLog @ 100034e6 size=6 ---- */

void __thiscall CBaseApp::CheckBipLog(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CheckBipLog(this);
  return;
}



/* ---- _CheckCmdString @ 100034ec size=6 ---- */

int __thiscall CBaseApp::_CheckCmdString(CBaseApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _CheckCmdString(this);
  return iVar1;
}



/* ---- _CheckMutex @ 100034f2 size=6 ---- */

int __thiscall CBaseApp::_CheckMutex(CBaseApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _CheckMutex(this);
  return iVar1;
}



/* ---- _CheckPlatformConverter @ 100034f8 size=6 ---- */

void __thiscall CBaseApp::_CheckPlatformConverter(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CheckPlatformConverter(this);
  return;
}



/* ---- CreateControl @ 100034fe size=6 ---- */

bool __thiscall CControlBase::CreateControl(CControlBase *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- DestroyControl @ 10003504 size=6 ---- */

bool __thiscall CControlBase::DestroyControl(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DestroyControl(this);
  return bVar1;
}



/* ---- IsCreated @ 1000350a size=6 ---- */

bool __thiscall CControlBase::IsCreated(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000350a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsCreated(this);
  return bVar1;
}



/* ---- ShowControl @ 10003510 size=6 ---- */

void __thiscall CControlBase::ShowControl(CControlBase *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowControl(this,param_1);
  return;
}



/* ---- UpdateControlForGame @ 10003516 size=6 ---- */

void __thiscall CControlBase::UpdateControlForGame(CControlBase *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControlForGame(this,param_1);
  return;
}



/* ---- GetCWndPtr @ 1000351c size=6 ---- */

CWnd * __thiscall CControlBase::GetCWndPtr(CControlBase *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000351c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCWndPtr(this);
  return pCVar1;
}



/* ---- God @ 10003522 size=6 ---- */

IGod * __cdecl God(void)

{
  IGod *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = God();
  return pIVar1;
}



/* ---- OnDetached @ 10003528 size=6 ---- */

bool __thiscall CGameLobbyView::OnDetached(CGameLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- Msg_GetWindow @ 1000352e size=6 ---- */

int __thiscall CBaseLobbyView::Msg_GetWindow(CBaseLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000352e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_GetWindow(this,param_1);
  return iVar1;
}



/* ---- OnClickExitGameBtn @ 10003534 size=6 ---- */

int __thiscall CGameLobbyView::OnClickExitGameBtn(CGameLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitGameBtn(this,param_1);
  return iVar1;
}



/* ---- OnDetached @ 1000353a size=6 ---- */

bool __thiscall CChannelLobbyView::OnDetached(CChannelLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000353a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- Msg_UpdateUIFromXML @ 10003540 size=6 ---- */

int __thiscall CChannelLobbyView::Msg_UpdateUIFromXML(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_UpdateUIFromXML(this,param_1);
  return iVar1;
}



/* ---- OnDblClickRoomList @ 10003546 size=6 ---- */

int __thiscall CChannelLobbyView::OnDblClickRoomList(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDblClickRoomList(this,param_1);
  return iVar1;
}



/* ---- OnClickChangeChannelBtn @ 1000354c size=6 ---- */

int __thiscall CChannelLobbyView::OnClickChangeChannelBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChangeChannelBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickCreateRoomBtn @ 10003552 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickCreateRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickCreateRoomBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickJoinRoomBtn @ 10003558 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickJoinRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickJoinRoomBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickViewRoomBtn @ 1000355e size=6 ---- */

int __thiscall CChannelLobbyView::OnClickViewRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000355e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickViewRoomBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickRoomAvatar @ 10003564 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickRoomAvatar(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRoomAvatar(this,param_1);
  return iVar1;
}



/* ---- OnDblClickMemberList @ 1000356a size=6 ---- */

int __thiscall CChannelLobbyView::OnDblClickMemberList(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000356a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDblClickMemberList(this,param_1);
  return iVar1;
}



/* ---- OnClickDirectStartBtn @ 10003570 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickDirectStartBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickDirectStartBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickRecommendedGameBtn @ 10003576 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickRecommendedGameBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRecommendedGameBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickExitBtn @ 1000357c size=6 ---- */

int __thiscall CChannelLobbyView::OnClickExitBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000357c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickAutoCreateRoomBtn @ 10003582 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickAutoCreateRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAutoCreateRoomBtn(this,param_1);
  return iVar1;
}



/* ---- OnGetItemState @ 10003588 size=6 ---- */

int __thiscall CChannelLobbyView::OnGetItemState(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetItemState(this,param_1);
  return iVar1;
}



/* ---- OnCloseItemWebDlg @ 1000358e size=6 ---- */

int __thiscall CChannelLobbyView::OnCloseItemWebDlg(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000358e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCloseItemWebDlg(this,param_1);
  return iVar1;
}



/* ---- OnClickShowItemWebBtn @ 10003594 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickShowItemWebBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowItemWebBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickHappyBeanBtn @ 1000359a size=6 ---- */

int __thiscall CChannelLobbyView::OnClickHappyBeanBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000359a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickHappyBeanBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickGuildCtrl @ 100035a0 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickGuildCtrl(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickGuildCtrl(this,param_1);
  return iVar1;
}



/* ---- OnClickThermometer @ 100035a6 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickThermometer(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickThermometer(this,param_1);
  return iVar1;
}



/* ---- OnClickSPCRoom @ 100035ac size=6 ---- */

int __thiscall CChannelLobbyView::OnClickSPCRoom(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickSPCRoom(this,param_1);
  return iVar1;
}



/* ---- OnClickMemberListTabFilterBtn @ 100035b2 size=6 ---- */

int __thiscall
CChannelLobbyView::OnClickMemberListTabFilterBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickMemberListTabFilterBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickShowEmptyRoomBtn @ 100035b8 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickShowEmptyRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowEmptyRoomBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickShowRoomNumOrderBtn @ 100035be size=6 ---- */

int __thiscall
CChannelLobbyView::OnClickShowRoomNumOrderBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowRoomNumOrderBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickSearchRoomBtn @ 100035c4 size=6 ---- */

int __thiscall CChannelLobbyView::OnClickSearchRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickSearchRoomBtn(this,param_1);
  return iVar1;
}



/* ---- OnAttached @ 100035ca size=6 ---- */

bool __thiscall CHanChatView::OnAttached(CHanChatView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- OnDetached @ 100035d0 size=6 ---- */

bool __thiscall CHanChatView::OnDetached(CHanChatView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- GetRuntimeClass @ 100035d6 size=6 ---- */

CRuntimeClass * __thiscall CChannelMainWnd::GetRuntimeClass(CChannelMainWnd *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- GetMessageMap @ 100035dc size=6 ---- */

AFX_MSGMAP * __thiscall CChannelMainWnd::GetMessageMap(CChannelMainWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- InitiateChannelMainWnd @ 100035e2 size=6 ---- */

int __thiscall
CChannelMainWnd::InitiateChannelMainWnd(CChannelMainWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitiateChannelMainWnd(this,param_1);
  return iVar1;
}



/* ---- CreateRoomListCtrl @ 100035e8 size=6 ---- */

void __thiscall CChannelMainWnd::CreateRoomListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100035e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateRoomListCtrl(this,param_1);
  return;
}



/* ---- CreateMyInfoCtrl @ 100035ee size=6 ---- */

void __thiscall CChannelMainWnd::CreateMyInfoCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100035ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateMyInfoCtrl(this,param_1);
  return;
}



/* ---- CreateTabCtrl @ 100035f4 size=6 ---- */

void __thiscall CChannelMainWnd::CreateTabCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100035f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateTabCtrl(this,param_1);
  return;
}



/* ---- CreateNoticeWnd @ 100035fa size=6 ---- */

void __thiscall CChannelMainWnd::CreateNoticeWnd(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100035fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateNoticeWnd(this,param_1);
  return;
}



/* ---- CreateChannelButton @ 10003600 size=6 ---- */

void __thiscall CChannelMainWnd::CreateChannelButton(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateChannelButton(this,param_1);
  return;
}



/* ---- CrateTabMemberList @ 10003606 size=6 ---- */

void __thiscall CChannelMainWnd::CrateTabMemberList(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CrateTabMemberList(this,param_1);
  return;
}



/* ---- AddTab @ 1000360c size=6 ---- */

void __thiscall CChannelMainWnd::AddTab(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000360c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddTab(this,param_1);
  return;
}



/* ---- AttachScrollCtrl @ 10003612 size=6 ---- */

void __thiscall CChannelMainWnd::AttachScrollCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachScrollCtrl(this,param_1);
  return;
}



/* ---- AttachListControl @ 10003618 size=6 ---- */

void __thiscall CChannelMainWnd::AttachListControl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachListControl(this,param_1);
  return;
}



/* ---- AttachHtmlCtrl @ 1000361e size=6 ---- */

void __thiscall CChannelMainWnd::AttachHtmlCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000361e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachHtmlCtrl(this,param_1);
  return;
}



/* ---- AttachBtn @ 10003624 size=6 ---- */

void __thiscall CChannelMainWnd::AttachBtn(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachBtn(this,param_1);
  return;
}



/* ---- CreateMemberListCtrl @ 1000362a size=6 ---- */

void __thiscall CChannelMainWnd::CreateMemberListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000362a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateMemberListCtrl(this,param_1);
  return;
}



/* ---- CreateGuildListCtrl @ 10003630 size=6 ---- */

void __thiscall CChannelMainWnd::CreateGuildListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateGuildListCtrl(this,param_1);
  return;
}



/* ---- CreateFriendListCtrl @ 10003636 size=6 ---- */

void __thiscall CChannelMainWnd::CreateFriendListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateFriendListCtrl(this,param_1);
  return;
}



/* ---- SortRoomList @ 1000363c size=6 ---- */

void __thiscall CChannelMainWnd::SortRoomList(CChannelMainWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000363c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SortRoomList(this,param_1);
  return;
}



/* ---- UpdateControl @ 10003642 size=6 ---- */

void __thiscall CChannelMainWnd::UpdateControl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- OnAttached @ 10003648 size=6 ---- */

bool __thiscall CMiniChannelListView::OnAttached(CMiniChannelListView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- OnDetached @ 1000364e size=6 ---- */

bool __thiscall CMiniChannelListView::OnDetached(CMiniChannelListView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000364e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- OnClickRefreshBtn @ 10003654 size=6 ---- */

int __thiscall CMiniChannelListView::OnClickRefreshBtn(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRefreshBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickJoinBtn @ 1000365a size=6 ---- */

int __thiscall CMiniChannelListView::OnClickJoinBtn(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000365a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickJoinBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickExitBtn @ 10003660 size=6 ---- */

int __thiscall CMiniChannelListView::OnClickExitBtn(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickAutoJoinBtn @ 10003666 size=6 ---- */

int __thiscall CMiniChannelListView::OnClickAutoJoinBtn(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAutoJoinBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickGrpListBtn @ 1000366c size=6 ---- */

int __thiscall CMiniChannelListView::OnClickGrpListBtn(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000366c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickGrpListBtn(this,param_1);
  return iVar1;
}



/* ---- OnClickChannelGrpLst @ 10003672 size=6 ---- */

int __thiscall
CMiniChannelListView::OnClickChannelGrpLst(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChannelGrpLst(this,param_1);
  return iVar1;
}



/* ---- OnClickChannelLst @ 10003678 size=6 ---- */

int __thiscall CMiniChannelListView::OnClickChannelLst(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChannelLst(this,param_1);
  return iVar1;
}



/* ---- OnCheckEnterableState @ 1000367e size=6 ---- */

int __thiscall
CMiniChannelListView::OnCheckEnterableState(CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000367e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCheckEnterableState(this,param_1);
  return iVar1;
}



/* ---- SetMiniChannelListWnd @ 10003684 size=6 ---- */

void __thiscall
CMiniChannelListView::SetMiniChannelListWnd(CMiniChannelListView *this,CMiniChannelListWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetMiniChannelListWnd(this,param_1);
  return;
}



/* ---- OnAttached @ 1000368a size=6 ---- */

bool __thiscall CMainFrameView::OnAttached(CMainFrameView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000368a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- OnDetached @ 10003690 size=6 ---- */

bool __thiscall CMainFrameView::OnDetached(CMainFrameView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- OnAltF4KeyDown @ 10003696 size=6 ---- */

int __thiscall CMainFrameView::OnAltF4KeyDown(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAltF4KeyDown(this,param_1);
  return iVar1;
}



/* ---- OnClickExitButton @ 1000369c size=6 ---- */

int __thiscall CMainFrameView::OnClickExitButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitButton(this,param_1);
  return iVar1;
}



/* ---- OnToggleScreenButton @ 100036a2 size=6 ---- */

int __thiscall CMainFrameView::OnToggleScreenButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToggleScreenButton(this,param_1);
  return iVar1;
}



/* ---- OnClickMinimizeButton @ 100036a8 size=6 ---- */

int __thiscall CMainFrameView::OnClickMinimizeButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickMinimizeButton(this,param_1);
  return iVar1;
}



/* ---- OnClickAccuseButton @ 100036ae size=6 ---- */

int __thiscall CMainFrameView::OnClickAccuseButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAccuseButton(this,param_1);
  return iVar1;
}



/* ---- OnClickInviteButton @ 100036b4 size=6 ---- */

int __thiscall CMainFrameView::OnClickInviteButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickInviteButton(this,param_1);
  return iVar1;
}



/* ---- OnClickOptionButton @ 100036ba size=6 ---- */

int __thiscall CMainFrameView::OnClickOptionButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickOptionButton(this,param_1);
  return iVar1;
}



/* ---- PreCreateWindow @ 100036c0 size=6 ---- */

int __thiscall CGameWnd::PreCreateWindow(CGameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- DisplayChatMessage @ 100036c6 size=6 ---- */

bool __thiscall
CGameWnd::DisplayChatMessage
          (CGameWnd *this,uint param_1,char *param_2,int param_3,ulong param_4,int param_5,
          int param_6,char *param_7)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayChatMessage(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}



/* ---- DisplayNoticeMessage @ 100036cc size=6 ---- */

bool __thiscall
CGameWnd::DisplayNoticeMessage
          (CGameWnd *this,char *param_1,int param_2,int param_3,char *param_4,char *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayNoticeMessage(this,param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}



/* ---- DisplayStatusMessage @ 100036d2 size=6 ---- */

bool __thiscall
CGameWnd::DisplayStatusMessage
          (CGameWnd *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5,
          char *param_6)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayStatusMessage(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return bVar1;
}



/* ---- CaptureGameScreen @ 100036d8 size=6 ---- */

void __thiscall CGameWnd::CaptureGameScreen(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100036d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CaptureGameScreen(this);
  return;
}



/* ---- FlipScreen @ 100036de size=6 ---- */

int __thiscall CGameWnd::FlipScreen(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FlipScreen(this);
  return iVar1;
}



/* ---- ExitGameRoom @ 100036e4 size=6 ---- */

void __thiscall CGameWnd::ExitGameRoom(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100036e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitGameRoom(this);
  return;
}



/* ---- AccuseUser @ 100036ea size=6 ---- */

void __thiscall CGameWnd::AccuseUser(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100036ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AccuseUser(this);
  return;
}



/* ---- GetGameChatContent @ 100036f0 size=6 ---- */

char * __thiscall CGameWnd::GetGameChatContent(CGameWnd *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetGameChatContent(this);
  return pcVar1;
}



/* ---- UpdateChanceInfo @ 100036f6 size=6 ---- */

void __thiscall CGameWnd::UpdateChanceInfo(CGameWnd *this,CMemberData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateChanceInfo(this,param_1);
  return;
}



/* ---- CreateCaptionButtons @ 100036fc size=6 ---- */

void __thiscall CGameWnd::CreateCaptionButtons(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100036fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateCaptionButtons(this);
  return;
}



/* ---- ShowInviteGameToChnlDlg @ 10003702 size=6 ---- */

int __thiscall CGameWnd::ShowInviteGameToChnlDlg(CGameWnd *this,bool param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowInviteGameToChnlDlg(this,param_1);
  return iVar1;
}



/* ---- StopHostBanishCheck @ 10003708 size=6 ---- */

void __thiscall CGameWnd::StopHostBanishCheck(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StopHostBanishCheck(this);
  return;
}



/* ---- StartHostBanishCheck @ 1000370e size=6 ---- */

void __thiscall CGameWnd::StartHostBanishCheck(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000370e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StartHostBanishCheck(this);
  return;
}



/* ---- GetGameOptionFromRegistry @ 10003714 size=6 ---- */

int __thiscall CGameWnd::GetGameOptionFromRegistry(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetGameOptionFromRegistry(this);
  return iVar1;
}



/* ---- PlayEventSound @ 1000371a size=6 ---- */

void __thiscall CGameWnd::PlayEventSound(CGameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000371a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PlayEventSound(this,param_1);
  return;
}



/* ---- IsActivate @ 10003720 size=6 ---- */

bool __thiscall CGameWnd::IsActivate(CGameWnd *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsActivate(this);
  return bVar1;
}



/* ---- ProcessItemProvokeCommand @ 10003726 size=6 ---- */

void __thiscall CGameWnd::ProcessItemProvokeCommand(CGameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ProcessItemProvokeCommand(this,param_1);
  return;
}



/* ---- HasRightOfBanish @ 1000372c size=6 ---- */

int __thiscall CGameWnd::HasRightOfBanish(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000372c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = HasRightOfBanish(this);
  return iVar1;
}



/* ---- Evt_OnAddRoomMember @ 10003732 size=6 ---- */

int __thiscall CGameWnd::Evt_OnAddRoomMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnAddRoomMember(this,param_1);
  return iVar1;
}



/* ---- Evt_OnDeleteRoomMember @ 10003738 size=6 ---- */

int __thiscall CGameWnd::Evt_OnDeleteRoomMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnDeleteRoomMember(this,param_1);
  return iVar1;
}



/* ---- Evt_OnRoomMemberList @ 1000373e size=6 ---- */

int __thiscall CGameWnd::Evt_OnRoomMemberList(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000373e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnRoomMemberList(this,param_1);
  return iVar1;
}



/* ---- Evt_OnModifyRoomMemberInfo @ 10003744 size=6 ---- */

int __thiscall CGameWnd::Evt_OnModifyRoomMemberInfo(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnModifyRoomMemberInfo(this,param_1);
  return iVar1;
}



/* ---- Evt_OnEnableHostBanish @ 1000374a size=6 ---- */

int __thiscall CGameWnd::Evt_OnEnableHostBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000374a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnEnableHostBanish(this,param_1);
  return iVar1;
}



/* ---- Evt_OnTimeHostBanish @ 10003750 size=6 ---- */

int __thiscall CGameWnd::Evt_OnTimeHostBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnTimeHostBanish(this,param_1);
  return iVar1;
}



/* ---- Evt_OnGameStatusMessage @ 10003756 size=6 ---- */

int __thiscall CGameWnd::Evt_OnGameStatusMessage(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnGameStatusMessage(this,param_1);
  return iVar1;
}



/* ---- Evt_OnChatString @ 1000375c size=6 ---- */

int __thiscall CGameWnd::Evt_OnChatString(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000375c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnChatString(this,param_1);
  return iVar1;
}



/* ---- Evt_OnReqBanishMember @ 10003762 size=6 ---- */

int __thiscall CGameWnd::Evt_OnReqBanishMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnReqBanishMember(this,param_1);
  return iVar1;
}



/* ---- Evt_OnClickBanishMember @ 10003768 size=6 ---- */

int __thiscall CGameWnd::Evt_OnClickBanishMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnClickBanishMember(this,param_1);
  return iVar1;
}



/* ---- Evt_OnHostBanishCheck @ 1000376e size=6 ---- */

int __thiscall CGameWnd::Evt_OnHostBanishCheck(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000376e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnHostBanishCheck(this,param_1);
  return iVar1;
}



/* ---- Evt_OnConnectTypeError @ 10003774 size=6 ---- */

int __thiscall CGameWnd::Evt_OnConnectTypeError(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnConnectTypeError(this,param_1);
  return iVar1;
}



/* ---- Evt_OnItemReserveChance @ 1000377a size=6 ---- */

int __thiscall CGameWnd::Evt_OnItemReserveChance(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000377a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnItemReserveChance(this,param_1);
  return iVar1;
}



/* ---- Evt_OnStartNewGame @ 10003780 size=6 ---- */

int __thiscall CGameWnd::Evt_OnStartNewGame(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnStartNewGame(this,param_1);
  return iVar1;
}



/* ---- Evt_OnRoomEvent @ 10003786 size=6 ---- */

int __thiscall CGameWnd::Evt_OnRoomEvent(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnRoomEvent(this,param_1);
  return iVar1;
}



/* ---- Evt_OnAltF4KeyDown @ 1000378c size=6 ---- */

int __thiscall CGameWnd::Evt_OnAltF4KeyDown(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnAltF4KeyDown(this,param_1);
  return iVar1;
}



/* ---- Evt_ChannelLobby_OnUpdateNotice @ 10003792 size=6 ---- */

int __thiscall CGameWnd::Evt_ChannelLobby_OnUpdateNotice(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_ChannelLobby_OnUpdateNotice(this,param_1);
  return iVar1;
}



/* ---- Evt_OnReserveBanish @ 10003798 size=6 ---- */

int __thiscall CGameWnd::Evt_OnReserveBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnReserveBanish(this,param_1);
  return iVar1;
}



/* ---- Evt_OnExitGameDuetoShutdown @ 1000379e size=6 ---- */

int __thiscall CGameWnd::Evt_OnExitGameDuetoShutdown(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000379e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnExitGameDuetoShutdown(this,param_1);
  return iVar1;
}



/* ---- Evt_OnGetShutdownTime @ 100037a4 size=6 ---- */

int __thiscall CGameWnd::Evt_OnGetShutdownTime(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnGetShutdownTime(this,param_1);
  return iVar1;
}



/* ---- Net_SocketClose @ 100037aa size=6 ---- */

int __thiscall CGameWnd::Net_SocketClose(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Net_SocketClose(this,param_1);
  return iVar1;
}



/* ---- Net_commandTimeBanish @ 100037b0 size=6 ---- */

int __thiscall CGameWnd::Net_commandTimeBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Net_commandTimeBanish(this,param_1);
  return iVar1;
}



/* ---- UpdateControl @ 100037b6 size=6 ---- */

void __thiscall CGameWnd::UpdateControl(CGameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- OnCmdMsg @ 100037bc size=6 ---- */

int __thiscall
CMainFrameWnd::OnCmdMsg
          (CMainFrameWnd *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- PreCreateWindow @ 100037c2 size=6 ---- */

int __thiscall CMainFrameWnd::PreCreateWindow(CMainFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- PreTranslateMessage @ 100037c8 size=6 ---- */

int __thiscall CMainFrameWnd::PreTranslateMessage(CMainFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- RegisterHandler @ 100037ce size=6 ---- */

void __thiscall CMainFrameWnd::RegisterHandler(CMainFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100037ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegisterHandler(this);
  return;
}



/* ---- DisplayAdWnd @ 100037d4 size=6 ---- */

void __thiscall CMainFrameWnd::DisplayAdWnd(CMainFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100037d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayAdWnd(this);
  return;
}



/* ---- ShowGameRate @ 100037da size=6 ---- */

void __thiscall CMainFrameWnd::ShowGameRate(CMainFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowGameRate(this,param_1);
  return;
}



/* ---- GetTicket @ 100037e0 size=6 ---- */

void __thiscall CMainFrameWnd::GetTicket(CMainFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetTicket(this,param_1);
  return;
}



/* ---- RefreshCookie @ 100037e6 size=6 ---- */

void __thiscall CMainFrameWnd::RefreshCookie(CMainFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100037e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RefreshCookie(this);
  return;
}



/* ---- UpdateControl @ 100037ec size=6 ---- */

void __thiscall CMainFrameWnd::UpdateControl(CMainFrameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- UpdateControlForGame @ 100037f2 size=6 ---- */

void __thiscall CMainFrameWnd::UpdateControlForGame(CMainFrameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControlForGame(this,param_1);
  return;
}



/* ---- operator_delete @ 100037f8 size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- operator_new @ 100037fe size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- AfxTermExtensionModule @ 10003804 size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- CDynLinkLibrary @ 1000380a size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000380a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxInitExtensionModule @ 10003810 size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- AfxGetModuleState @ 10003816 size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- operator_delete[] @ 1000381c size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- GetRuntimeClass @ 10003822 size=6 ---- */

CRuntimeClass * __thiscall CWinApp::GetRuntimeClass(CWinApp *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- OnCmdMsg @ 10003828 size=6 ---- */

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- OnFinalRelease @ 1000382e size=6 ---- */

void __thiscall CCmdTarget::OnFinalRelease(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000382e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- IsInvokeAllowed @ 10003834 size=6 ---- */

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}



/* ---- GetDispatchIID @ 1000383a size=6 ---- */

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000383a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}



/* ---- GetTypeInfoCount @ 10003840 size=6 ---- */

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}



/* ---- GetTypeLibCache @ 10003846 size=6 ---- */

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}



/* ---- GetTypeLib @ 1000384c size=6 ---- */

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000384c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}



/* ---- GetCommandMap @ 10003852 size=6 ---- */

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}



/* ---- GetDispatchMap @ 10003858 size=6 ---- */

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}



/* ---- GetConnectionMap @ 1000385e size=6 ---- */

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000385e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}



/* ---- GetInterfaceMap @ 10003864 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- GetEventSinkMap @ 1000386a size=6 ---- */

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000386a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}



/* ---- OnCreateAggregates @ 10003870 size=6 ---- */

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}



/* ---- GetInterfaceHook @ 10003876 size=6 ---- */

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}



/* ---- GetExtraConnectionPoints @ 1000387c size=6 ---- */

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000387c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}



/* ---- GetConnectionHook @ 10003882 size=6 ---- */

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}



/* ---- Run @ 10003888 size=6 ---- */

int __thiscall CWinApp::Run(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Run(this);
  return iVar1;
}



/* ---- PumpMessage @ 1000388e size=6 ---- */

int __thiscall CWinThread::PumpMessage(CWinThread *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000388e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PumpMessage(this);
  return iVar1;
}



/* ---- IsIdleMessage @ 10003894 size=6 ---- */

int __thiscall CWinThread::IsIdleMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsIdleMessage(this,param_1);
  return iVar1;
}



/* ---- ProcessWndProcException @ 1000389a size=6 ---- */

long __thiscall CWinApp::ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000389a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ProcessWndProcException(this,param_1,param_2);
  return lVar1;
}



/* ---- ProcessMessageFilter @ 100038a0 size=6 ---- */

int __thiscall CWinThread::ProcessMessageFilter(CWinThread *this,int param_1,tagMSG *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ProcessMessageFilter(this,param_1,param_2);
  return iVar1;
}



/* ---- GetMainWnd @ 100038a6 size=6 ---- */

CWnd * __thiscall CWinThread::GetMainWnd(CWinThread *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMainWnd(this);
  return pCVar1;
}



/* ---- Delete @ 100038ac size=6 ---- */

void __thiscall CWinThread::Delete(CWinThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x100038ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- InitLibId @ 100038b2 size=6 ---- */

void __thiscall CWinApp::InitLibId(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100038b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitLibId(this);
  return;
}



/* ---- Register @ 100038b8 size=6 ---- */

int __thiscall CWinApp::Register(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Register(this);
  return iVar1;
}



/* ---- Unregister @ 100038be size=6 ---- */

int __thiscall CWinApp::Unregister(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Unregister(this);
  return iVar1;
}



/* ---- OpenDocumentFile @ 100038c4 size=6 ---- */

CDocument * __thiscall CWinApp::OpenDocumentFile(CWinApp *this,char *param_1)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = OpenDocumentFile(this,param_1);
  return pCVar1;
}



/* ---- AddToRecentFileList @ 100038ca size=6 ---- */

void __thiscall CWinApp::AddToRecentFileList(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100038ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddToRecentFileList(this,param_1);
  return;
}



/* ---- InitApplication @ 100038d0 size=6 ---- */

int __thiscall CWinApp::InitApplication(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitApplication(this);
  return iVar1;
}



/* ---- SaveAllModified @ 100038d6 size=6 ---- */

int __thiscall CWinApp::SaveAllModified(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveAllModified(this);
  return iVar1;
}



/* ---- DoMessageBox @ 100038dc size=6 ---- */

int __thiscall CWinApp::DoMessageBox(CWinApp *this,char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoMessageBox(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- DoWaitCursor @ 100038e2 size=6 ---- */

void __thiscall CWinApp::DoWaitCursor(CWinApp *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100038e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoWaitCursor(this,param_1);
  return;
}



/* ---- OnDDECommand @ 100038e8 size=6 ---- */

int __thiscall CWinApp::OnDDECommand(CWinApp *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDDECommand(this,param_1);
  return iVar1;
}



/* ---- WinHelpA @ 100038ee size=6 ---- */

void __thiscall CWinApp::WinHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100038ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- HtmlHelpA @ 100038f4 size=6 ---- */

void __thiscall CWinApp::HtmlHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100038f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- WinHelpInternal @ 100038fa size=6 ---- */

void __thiscall CWinApp::WinHelpInternal(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100038fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- LoadAppLangResourceDLL @ 10003900 size=6 ---- */

HINSTANCE__ * __thiscall CWinApp::LoadAppLangResourceDLL(CWinApp *this)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAppLangResourceDLL(this);
  return pHVar1;
}



/* ---- LoadSysPolicies @ 10003906 size=6 ---- */

int __thiscall CWinApp::LoadSysPolicies(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadSysPolicies(this);
  return iVar1;
}



/* ---- PreTranslateMessage @ 1000390c size=6 ---- */

int __thiscall CWinThread::PreTranslateMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- OnFinalRelease @ 10003912 size=6 ---- */

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- GetInterfaceMap @ 10003918 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CWnd::GetInterfaceMap(CWnd *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- PreSubclassWindow @ 1000391e size=6 ---- */

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000391e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}



/* ---- Create @ 10003924 size=6 ---- */

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}



/* ---- CreateEx @ 1000392a size=6 ---- */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,
              CWnd *param_6,uint param_7,void *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000392a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- CreateEx @ 10003930 size=6 ---- */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
              int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
  return iVar1;
}



/* ---- DestroyWindow @ 10003936 size=6 ---- */

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}



/* ---- PreCreateWindow @ 1000393c size=6 ---- */

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000393c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- CalcWindowRect @ 10003942 size=6 ---- */

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}



/* ---- GetMenu @ 10003948 size=6 ---- */

CMenu * __thiscall CWnd::GetMenu(CWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- SetMenu @ 1000394e size=6 ---- */

int __thiscall CWnd::SetMenu(CWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000394e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- OnToolHitTest @ 10003954 size=6 ---- */

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}



/* ---- GetScrollBarCtrl @ 1000395a size=6 ---- */

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000395a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}



/* ---- WinHelpA @ 10003960 size=6 ---- */

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- HtmlHelpA @ 10003966 size=6 ---- */

void __thiscall CWnd::HtmlHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- WinHelpInternal @ 1000396c size=6 ---- */

void __thiscall CWnd::WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- ContinueModal @ 10003972 size=6 ---- */

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}



/* ---- EndModalLoop @ 10003978 size=6 ---- */

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}



/* ---- EnsureStdObj @ 1000397e size=6 ---- */

long __thiscall CWnd::EnsureStdObj(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000397e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = EnsureStdObj(this);
  return lVar1;
}



/* ---- get_accParent @ 10003984 size=6 ---- */

long __thiscall CWnd::get_accParent(CWnd *this,IDispatch **param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accParent(this,param_1);
  return lVar1;
}



/* ---- get_accChildCount @ 1000398a size=6 ---- */

long __thiscall CWnd::get_accChildCount(CWnd *this,long *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000398a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChildCount(this,param_1);
  return lVar1;
}



/* ---- get_accChild @ 10003990 size=6 ---- */

long __thiscall CWnd::get_accChild(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChild();
  return lVar1;
}



/* ---- get_accName @ 10003996 size=6 ---- */

long __thiscall CWnd::get_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accName();
  return lVar1;
}



/* ---- get_accValue @ 1000399c size=6 ---- */

long __thiscall CWnd::get_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000399c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accValue();
  return lVar1;
}



/* ---- get_accDescription @ 100039a2 size=6 ---- */

long __thiscall CWnd::get_accDescription(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDescription();
  return lVar1;
}



/* ---- get_accRole @ 100039a8 size=6 ---- */

long __thiscall CWnd::get_accRole(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accRole();
  return lVar1;
}



/* ---- get_accState @ 100039ae size=6 ---- */

long __thiscall CWnd::get_accState(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accState();
  return lVar1;
}



/* ---- get_accHelp @ 100039b4 size=6 ---- */

long __thiscall CWnd::get_accHelp(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelp();
  return lVar1;
}



/* ---- get_accHelpTopic @ 100039ba size=6 ---- */

long __thiscall CWnd::get_accHelpTopic(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelpTopic();
  return lVar1;
}



/* ---- get_accKeyboardShortcut @ 100039c0 size=6 ---- */

long __thiscall CWnd::get_accKeyboardShortcut(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accKeyboardShortcut();
  return lVar1;
}



/* ---- get_accFocus @ 100039c6 size=6 ---- */

long __thiscall CWnd::get_accFocus(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accFocus(this,param_1);
  return lVar1;
}



/* ---- get_accSelection @ 100039cc size=6 ---- */

long __thiscall CWnd::get_accSelection(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accSelection(this,param_1);
  return lVar1;
}



/* ---- get_accDefaultAction @ 100039d2 size=6 ---- */

long __thiscall CWnd::get_accDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDefaultAction();
  return lVar1;
}



/* ---- accSelect @ 100039d8 size=6 ---- */

long __thiscall CWnd::accSelect(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accSelect();
  return lVar1;
}



/* ---- accLocation @ 100039de size=6 ---- */

long __thiscall CWnd::accLocation(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accLocation();
  return lVar1;
}



/* ---- accNavigate @ 100039e4 size=6 ---- */

long __thiscall CWnd::accNavigate(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accNavigate();
  return lVar1;
}



/* ---- accHitTest @ 100039ea size=6 ---- */

long __thiscall CWnd::accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accHitTest(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- accDoDefaultAction @ 100039f0 size=6 ---- */

long __thiscall CWnd::accDoDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accDoDefaultAction();
  return lVar1;
}



/* ---- put_accName @ 100039f6 size=6 ---- */

long __thiscall CWnd::put_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accName();
  return lVar1;
}



/* ---- put_accValue @ 100039fc size=6 ---- */

long __thiscall CWnd::put_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accValue();
  return lVar1;
}



/* ---- SetProxy @ 10003a02 size=6 ---- */

long __thiscall CWnd::SetProxy(CWnd *this,IAccessibleProxy *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = SetProxy(this,param_1);
  return lVar1;
}



/* ---- CreateAccessibleProxy @ 10003a08 size=6 ---- */

long __thiscall CWnd::CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = CreateAccessibleProxy(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- OnCommand @ 10003a0e size=6 ---- */

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- OnNotify @ 10003a14 size=6 ---- */

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- GetSuperWndProcAddr @ 10003a1a size=6 ---- */

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}



/* ---- PreTranslateMessage @ 10003a20 size=6 ---- */

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- OnAmbientProperty @ 10003a26 size=6 ---- */

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- WindowProc @ 10003a2c size=6 ---- */

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- OnWndMsg @ 10003a32 size=6 ---- */

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- DefWindowProcA @ 10003a38 size=6 ---- */

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- PostNcDestroy @ 10003a3e size=6 ---- */

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- OnChildNotify @ 10003a44 size=6 ---- */

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CheckAutoCenter @ 10003a4a size=6 ---- */

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- IsFrameWnd @ 10003a50 size=6 ---- */

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- CreateControlContainer @ 10003a56 size=6 ---- */

int __thiscall CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlContainer(this,param_1);
  return iVar1;
}



/* ---- CreateControlSite @ 10003a5c size=6 ---- */

int __thiscall
CWnd::CreateControlSite
          (CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,
          _GUID *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlSite(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- SetOccDialogInfo @ 10003a62 size=6 ---- */

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- GetOccDialogInfo @ 10003a68 size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CWnd::GetOccDialogInfo(CWnd *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- AfxGetThread @ 10003a6e size=6 ---- */

CWinThread * AfxGetThread(void)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetThread();
  return pCVar1;
}



/* ---- SetWindowPos @ 10003a74 size=6 ---- */

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}



/* ---- AfxRegisterWndClass @ 10003a7a size=6 ---- */

char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = AfxRegisterWndClass(param_1,param_2,param_3,param_4);
  return pcVar1;
}



/* ---- OnDestroy @ 10003a80 size=6 ---- */

void __thiscall CWnd::OnDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}



/* ---- FromHandle @ 10003a86 size=6 ---- */

CDC * CDC::FromHandle(HDC__ *param_1)

{
  CDC *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}



/* ---- FromHandle @ 10003a8c size=6 ---- */

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}



/* ---- Default @ 10003a92 size=6 ---- */

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}



/* ---- ShowWindow @ 10003a98 size=6 ---- */

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}



/* ---- ModifyStyle @ 10003a9e size=6 ---- */

int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ModifyStyle(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CenterWindow @ 10003aa4 size=6 ---- */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CenterWindow(this,param_1);
  return;
}



/* ---- GetMenu @ 10003aaa size=6 ---- */

CMenu * __thiscall CFrameWnd::GetMenu(CFrameWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- SetMenu @ 10003ab0 size=6 ---- */

int __thiscall CFrameWnd::SetMenu(CFrameWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- OnCommand @ 10003ab6 size=6 ---- */

int __thiscall CFrameWnd::OnCommand(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- BeginModalState @ 10003abc size=6 ---- */

void __thiscall CFrameWnd::BeginModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginModalState(this);
  return;
}



/* ---- EndModalState @ 10003ac2 size=6 ---- */

void __thiscall CFrameWnd::EndModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalState(this);
  return;
}



/* ---- PostNcDestroy @ 10003ac8 size=6 ---- */

void __thiscall CFrameWnd::PostNcDestroy(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- IsFrameWnd @ 10003ace size=6 ---- */

int __thiscall CFrameWnd::IsFrameWnd(CFrameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- Create @ 10003ad4 size=6 ---- */

int __thiscall
CFrameWnd::Create(CFrameWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                 CWnd *param_5,char *param_6,ulong param_7,CCreateContext *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- LoadFrame @ 10003ada size=6 ---- */

int __thiscall
CFrameWnd::LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadFrame(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- GetActiveDocument @ 10003ae0 size=6 ---- */

CDocument * __thiscall CFrameWnd::GetActiveDocument(CFrameWnd *this)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveDocument(this);
  return pCVar1;
}



/* ---- GetActiveFrame @ 10003ae6 size=6 ---- */

CFrameWnd * __thiscall CFrameWnd::GetActiveFrame(CFrameWnd *this)

{
  CFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveFrame(this);
  return pCVar1;
}



/* ---- GetMessageString @ 10003aec size=6 ---- */

void __thiscall
CFrameWnd::GetMessageString
          (CFrameWnd *this,uint param_1,
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}



/* ---- RecalcLayout @ 10003af2 size=6 ---- */

void __thiscall CFrameWnd::RecalcLayout(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RecalcLayout(this,param_1);
  return;
}



/* ---- ActivateFrame @ 10003af8 size=6 ---- */

void __thiscall CFrameWnd::ActivateFrame(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ActivateFrame(this,param_1);
  return;
}



/* ---- SetMenuBarVisibility @ 10003afe size=6 ---- */

void __thiscall CFrameWnd::SetMenuBarVisibility(CFrameWnd *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetMenuBarVisibility(this,param_1);
  return;
}



/* ---- GetMenuBarVisibility @ 10003b04 size=6 ---- */

ulong __thiscall CFrameWnd::GetMenuBarVisibility(CFrameWnd *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetMenuBarVisibility(this);
  return uVar1;
}



/* ---- SetMenuBarState @ 10003b0a size=6 ---- */

int __thiscall CFrameWnd::SetMenuBarState(CFrameWnd *this,ulong param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenuBarState(this,param_1);
  return iVar1;
}



/* ---- GetMenuBarState @ 10003b10 size=6 ---- */

ulong __thiscall CFrameWnd::GetMenuBarState(CFrameWnd *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetMenuBarState(this);
  return uVar1;
}



/* ---- OnSetPreviewMode @ 10003b16 size=6 ---- */

void __thiscall CFrameWnd::OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPreviewMode(this,param_1,param_2);
  return;
}



/* ---- GetMessageBar @ 10003b1c size=6 ---- */

CWnd * __thiscall CFrameWnd::GetMessageBar(CFrameWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMessageBar(this);
  return pCVar1;
}



/* ---- NegotiateBorderSpace @ 10003b22 size=6 ---- */

int __thiscall CFrameWnd::NegotiateBorderSpace(CFrameWnd *this,uint param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = NegotiateBorderSpace(this,param_1,param_2);
  return iVar1;
}



/* ---- OnCreateClient @ 10003b28 size=6 ---- */

int __thiscall
CFrameWnd::OnCreateClient(CFrameWnd *this,tagCREATESTRUCTA *param_1,CCreateContext *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateClient(this,param_1,param_2);
  return iVar1;
}



/* ---- OnUpdateFrameTitle @ 10003b2e size=6 ---- */

void __thiscall CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameTitle(this,param_1);
  return;
}



/* ---- OnUpdateFrameMenu @ 10003b34 size=6 ---- */

void __thiscall CFrameWnd::OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameMenu(this,param_1);
  return;
}



/* ---- GetDefaultAccelerator @ 10003b3a size=6 ---- */

HACCEL__ * __thiscall CFrameWnd::GetDefaultAccelerator(CFrameWnd *this)

{
  HACCEL__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultAccelerator(this);
  return pHVar1;
}



/* ---- DelayUpdateFrameMenu @ 10003b40 size=6 ---- */

void __thiscall CFrameWnd::DelayUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DelayUpdateFrameMenu(this,param_1);
  return;
}



/* ---- ExitHelpMode @ 10003b46 size=6 ---- */

void __thiscall CFrameWnd::ExitHelpMode(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitHelpMode(this);
  return;
}



/* ---- OnShowMenuBar @ 10003b4c size=6 ---- */

void __thiscall CFrameWnd::OnShowMenuBar(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowMenuBar(this);
  return;
}



/* ---- OnHideMenuBar @ 10003b52 size=6 ---- */

void __thiscall CFrameWnd::OnHideMenuBar(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideMenuBar(this);
  return;
}



/* ---- OnSize @ 10003b58 size=6 ---- */

void __thiscall CFrameWnd::OnSize(CFrameWnd *this,uint param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10003b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSize(this,param_1,param_2,param_3);
  return;
}



/* ---- OnActivate @ 10003b5e size=6 ---- */

void __thiscall CFrameWnd::OnActivate(CFrameWnd *this,uint param_1,CWnd *param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10003b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivate(this,param_1,param_2,param_3);
  return;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 10003b64 size=76 ---- */

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



/* ---- __ArrayUnwind @ 10003bb0 size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 10003c0e size=75 ---- */

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
  FUN_10003c59();
  return;
}



/* ---- FUN_10003c59 @ 10003c59 size=24 ---- */

void FUN_10003c59(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- __security_check_cookie @ 10003c86 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_1000d460) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- __onexit @ 10003c95 size=156 ---- */

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
  
  local_8 = &DAT_10007108;
  uStack_c = 0x10003ca1;
  local_20[0] = decode_pointer(DAT_1000d844);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_1000d844);
    local_24 = decode_pointer(DAT_1000d840);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_1000d844 = encode_pointer(local_20[0]);
    DAT_1000d840 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_10003d31();
  }
  return p_Var1;
}



/* ---- FUN_10003d31 @ 10003d31 size=9 ---- */

void FUN_10003d31(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 10003d3a size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- purecall @ 10003d52 size=6 ---- */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* ---- __CRT_INIT@12 @ 10003da7 size=550 ---- */

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
    if (DAT_1000d4f8 < 1) {
      return 0;
    }
    DAT_1000d4f8 = DAT_1000d4f8 + -1;
  }
  _DAT_1000d830 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_1000d838,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1000d834 == 0) {
      DAT_1000d834 = 1;
      iVar3 = initterm_e(&DAT_1000577c,&DAT_10005784);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_10005770,&DAT_10005778);
      DAT_1000d834 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_1000d838,0);
    }
    if ((DAT_1000d83c != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1000d83c), BVar4 != 0)) {
      (*DAT_1000d83c)(param_1,2,param_3);
    }
    DAT_1000d4f8 = DAT_1000d4f8 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_1000d838,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1000d834 == 2) {
      param_2 = (int *)decode_pointer(DAT_1000d844);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_1000d840);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_1000d844);
            piVar8 = (int *)decode_pointer(DAT_1000d840);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_1000d840 = encoded_null();
        DAT_1000d844 = DAT_1000d840;
      }
      DAT_1000d834 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_1000d838,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 10003fcd size=240 ---- */

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
  _DAT_1000d468 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_1000d4f8 == 0)) {
    local_20 = 0;
    goto LAB_100040bf;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_FUN_100057ac != (undefined *)0x0) {
      local_20 = (*(code *)PTR_FUN_100057ac)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_100040bf;
    local_20 = __CRT_INIT_12((int *)param_3,param_2,param_1);
    if (local_20 == 0) goto LAB_100040bf;
  }
  local_20 = FUN_10001010(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_10001010(param_3,0);
    __CRT_INIT_12((int *)param_3,(int *)0x0,param_1);
    if (PTR_FUN_100057ac != (undefined *)0x0) {
      (*(code *)PTR_FUN_100057ac)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12((int *)param_3,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_FUN_100057ac != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_FUN_100057ac)(param_3,param_2,param_1);
    }
  }
LAB_100040bf:
  FUN_100040d8();
  return local_20;
}



/* ---- FUN_100040d8 @ 100040d8 size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100040d8(void)

{
  _DAT_1000d468 = 0xffffffff;
  return;
}



/* ---- entry @ 100040e3 size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- terminate @ 10004106 size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004106. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- __SEH_prolog4 @ 1000410c size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1000d460 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 10004151 size=20 ---- */

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



/* ---- FUN_10004165 @ 10004165 size=37 ---- */

void __cdecl
FUN_10004165(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_1000d460,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- ___report_gsfailure @ 1000418a size=262 ---- */

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
  
  _DAT_1000d618 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1000d61c = &uStack00000004;
  _DAT_1000d558 = 0x10001;
  _DAT_1000d500 = 0xc0000409;
  _DAT_1000d504 = 1;
  local_32c = DAT_1000d460;
  local_328 = DAT_1000d464;
  _DAT_1000d50c = _local_res0;
  _DAT_1000d5e4 = in_GS;
  _DAT_1000d5e8 = in_FS;
  _DAT_1000d5ec = in_ES;
  _DAT_1000d5f0 = in_DS;
  _DAT_1000d5f4 = unaff_EDI;
  _DAT_1000d5f8 = unaff_ESI;
  _DAT_1000d5fc = unaff_EBX;
  _DAT_1000d600 = in_EDX;
  _DAT_1000d604 = in_ECX;
  _DAT_1000d608 = in_EAX;
  _DAT_1000d60c = unaff_EBP;
  DAT_1000d610 = _local_res0;
  _DAT_1000d614 = in_CS;
  _DAT_1000d620 = in_SS;
  DAT_1000d550 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_10006468);
  if (DAT_1000d550 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- _unlock @ 10004290 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x10004290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 10004296 size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 1000429c size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x1000429c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __ValidateImageBase @ 10004300 size=53 ---- */

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



/* ---- __FindPESection @ 10004340 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 10004390 size=166 ---- */

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
  
  pcStack_10 = FUN_10004165;
  local_14 = ExceptionList;
  local_c = DAT_1000d460 ^ 0x10007150;
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



/* ---- initterm @ 1000444e size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000444e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 10004454 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 1000445a size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000445a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 10004460 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10004460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 10004466 size=150 ---- */

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
  if ((DAT_1000d460 == 0xbb40e64e) || ((DAT_1000d460 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1000d460 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1000d460 == 0xbb40e64e) {
      DAT_1000d460 = 0xbb40e64f;
    }
    else if ((DAT_1000d460 & 0xffff0000) == 0) {
      DAT_1000d460 = DAT_1000d460 | DAT_1000d460 << 0x10;
    }
  }
  DAT_1000d464 = ~DAT_1000d460;
  return;
}



/* ---- _type_info_dtor_internal_method @ 100044fc size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x100044fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- except_handler4_common @ 10004502 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _crt_debugger_hook @ 10004508 size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10004508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- Unwind@10004520 @ 10004520 size=11 ---- */

void Unwind_10004520(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000452b @ 1000452b size=11 ---- */

void Unwind_1000452b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@10004536 @ 10004536 size=11 ---- */

void Unwind_10004536(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@10004541 @ 10004541 size=11 ---- */

void Unwind_10004541(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000454c @ 1000454c size=10 ---- */

void Unwind_1000454c(void)

{
  int unaff_EBP;
  
  FUN_10001000(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10004556 @ 10004556 size=11 ---- */

void Unwind_10004556(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10004561 @ 10004561 size=11 ---- */

void Unwind_10004561(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000456c @ 1000456c size=11 ---- */

void Unwind_1000456c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100045a0 @ 100045a0 size=8 ---- */

void Unwind_100045a0(void)

{
  FUN_10001320();
  return;
}



/* ---- Unwind@100045d0 @ 100045d0 size=11 ---- */

void Unwind_100045d0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@100045db @ 100045db size=8 ---- */

void Unwind_100045db(void)

{
  int unaff_EBP;
  
  FUN_10001780((int *)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10004600 @ 10004600 size=9 ---- */

void Unwind_10004600(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10004630 @ 10004630 size=9 ---- */

void Unwind_10004630(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10004660 @ 10004660 size=9 ---- */

void Unwind_10004660(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@10004690 @ 10004690 size=9 ---- */

void Unwind_10004690(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@100046c0 @ 100046c0 size=9 ---- */

void Unwind_100046c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100046c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100046f0 @ 100046f0 size=12 ---- */

void Unwind_100046f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100046f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@10004730 @ 10004730 size=12 ---- */

void Unwind_10004730(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@10004770 @ 10004770 size=12 ---- */

void Unwind_10004770(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}


// total=468 ok=468 failed=0
