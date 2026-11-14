// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgAniGm3_16Bit {

class ?$CArray;
class ?$CList;
class AFX_MODULE_STATE;
class CCmdTarget;
class CControlBase;
class CGameWnd;
class CGraphicCtrl_Tile_Element;
class CHgDIB16;
class CHgImage16;
class CHgImageBase;
class CNoTrackObject;
class CObject;
class CStatic;
class CWinApp;
class CWinThread;
class CWnd;
class _KeyFrame;
class __CGraphicCtrl_ChatInputBox;
class __CGraphicCtrl_ScrollBar_Bar;
class __CGraphicCtrl_ScrollBar_Dn;
class __CGraphicCtrl_ScrollBar_Up;
class __CGraphicCtrl_SlideBar_Thumb;
class __CHgChatInputBoxEdit;
class __CHgChatLine;
class bad_alloc;
class exception;
class length_error;
class logic_error;
class out_of_range;

class ?$CArray@UWAIT_INFO@CGraphicCtrl_Notify@@U12@ : public ?$CArray, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f2c
    virtual void vfunc_1(); // slot 1, 0x60006410
    virtual void vfunc_2(); // slot 2, 0x60006960
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
};

class ?$CList@PAVCGraphicCtrl@@PAV1@ : public ?$CList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f2c
    virtual void vfunc_1(); // slot 1, 0x6000b390
    virtual void vfunc_2(); // slot 2, 0x60012c00
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
};

class ?$CList@PAV_KeyFrame@CGraphicCtrl_Tile_Ani@@PAV12@ : public ?$CList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f2c
    virtual void vfunc_1(); // slot 1, 0x60012b60
    virtual void vfunc_2(); // slot 2, 0x60012c00
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
};

class CAnimateGameWnd : public CGameWnd, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60001870
    virtual void vfunc_1(); // slot 1, 0x60001a00
    virtual void OnSelfNotice(); // slot 2, 0x60003b10
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
    virtual void OnCmdMsg(); // slot 5, 0x60014cfe
    virtual void OnFinalRelease(); // slot 6, 0x60014d04
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0a
    virtual void GetDispatchIID(); // slot 8, 0x60014d10
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d16
    virtual void GetTypeLibCache(); // slot 10, 0x60014d1c
    virtual void GetTypeLib(); // slot 11, 0x60014d22
    virtual void GetMessageMap(); // slot 12, 0x60002980
    virtual void GetCommandMap(); // slot 13, 0x60014d28
    virtual void GetDispatchMap(); // slot 14, 0x60014d2e
    virtual void GetConnectionMap(); // slot 15, 0x60014d34
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3a
    virtual void GetEventSinkMap(); // slot 17, 0x60014d40
    virtual void OnCreateAggregates(); // slot 18, 0x60014d46
    virtual void GetInterfaceHook(); // slot 19, 0x60014d4c
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d52
    virtual void GetConnectionHook(); // slot 21, 0x60014d58
    virtual void PreSubclassWindow(); // slot 22, 0x60014d5e
    virtual void Create(); // slot 23, 0x60014d64
    virtual void CreateEx(); // slot 24, 0x60014d6a
    virtual void CreateEx(); // slot 25, 0x60014d70
    virtual void DestroyWindow(); // slot 26, 0x60014d76
    virtual void PreCreateWindow(); // slot 27, 0x60014bf0
    virtual void CalcWindowRect(); // slot 28, 0x60014d7c
    virtual void GetMenu(); // slot 29, 0x60014d82
    virtual void SetMenu(); // slot 30, 0x60014d88
    virtual void OnToolHitTest(); // slot 31, 0x60014d8e
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d94
    virtual void WinHelpA(); // slot 33, 0x60014d9a
    virtual void HtmlHelpA(); // slot 34, 0x60014da0
    virtual void WinHelpInternal(); // slot 35, 0x60014da6
    virtual void ContinueModal(); // slot 36, 0x60014dac
    virtual void EndModalLoop(); // slot 37, 0x60014db2
    virtual void EnsureStdObj(); // slot 38, 0x60014db8
    virtual void get_accParent(); // slot 39, 0x60014dbe
    virtual void get_accChildCount(); // slot 40, 0x60014dc4
    virtual void get_accChild(); // slot 41, 0x60014dca
    virtual void get_accName(); // slot 42, 0x60014dd0
    virtual void get_accValue(); // slot 43, 0x60014dd6
    virtual void get_accDescription(); // slot 44, 0x60014ddc
    virtual void get_accRole(); // slot 45, 0x60014de2
    virtual void get_accState(); // slot 46, 0x60014de8
    virtual void get_accHelp(); // slot 47, 0x60014dee
    virtual void get_accHelpTopic(); // slot 48, 0x60014df4
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfa
    virtual void get_accFocus(); // slot 50, 0x60014e00
    virtual void get_accSelection(); // slot 51, 0x60014e06
    virtual void get_accDefaultAction(); // slot 52, 0x60014e0c
    virtual void accSelect(); // slot 53, 0x60014e12
    virtual void accLocation(); // slot 54, 0x60014e18
    virtual void accNavigate(); // slot 55, 0x60014e1e
    virtual void accHitTest(); // slot 56, 0x60014e24
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2a
    virtual void put_accName(); // slot 58, 0x60014e30
    virtual void put_accValue(); // slot 59, 0x60014e36
    virtual void SetProxy(); // slot 60, 0x60014e3c
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e42
    virtual void OnCommand(); // slot 62, 0x60014e48
    virtual void OnNotify(); // slot 63, 0x60014e4e
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e54
    virtual void OnSelfNotice(); // slot 65, 0x60003b10
    virtual void vfunc_66(); // slot 66, 0x600019e0
    virtual void vfunc_67(); // slot 67, 0x600019f0
    virtual void PreTranslateMessage(); // slot 68, 0x60014e5a
    virtual void OnAmbientProperty(); // slot 69, 0x60014e60
    virtual void WindowProc(); // slot 70, 0x60014e66
    virtual void OnWndMsg(); // slot 71, 0x60014e6c
    virtual void DefWindowProcA(); // slot 72, 0x60014e72
    virtual void PostNcDestroy(); // slot 73, 0x60014e78
    virtual void OnChildNotify(); // slot 74, 0x60014e7e
    virtual void CheckAutoCenter(); // slot 75, 0x60014e84
    virtual void IsFrameWnd(); // slot 76, 0x60014e8a
    virtual void CreateControlContainer(); // slot 77, 0x60014e90
    virtual void CreateControlSite(); // slot 78, 0x60014e96
    virtual void SetOccDialogInfo(); // slot 79, 0x60014e9c
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea2
    virtual void DisplayChatMessage(); // slot 81, 0x60014bf6
    virtual void DisplayNoticeMessage(); // slot 82, 0x60014bfc
    virtual void DisplayStatusMessage(); // slot 83, 0x60014c02
    virtual void CaptureGameScreen(); // slot 84, 0x60014c08
    virtual void DoExActive(); // slot 85, 0x60002010
    virtual void FlipScreen(); // slot 86, 0x60014c0e
    virtual void ExitGameRoom(); // slot 87, 0x60014c14
    virtual void AccuseUser(); // slot 88, 0x60014c1a
    virtual void purecall(); // slot 89, 0x60015456
    virtual void GetGameChatContent(); // slot 90, 0x60014c20
    virtual void UpdateChanceInfo(); // slot 91, 0x60014c26
    virtual void CreateCaptionButtons(); // slot 92, 0x60014c2c
    virtual void purecall(); // slot 93, 0x60015456
    virtual void purecall(); // slot 94, 0x60015456
    virtual void purecall(); // slot 95, 0x60015456
    virtual void purecall(); // slot 96, 0x60015456
    virtual void purecall(); // slot 97, 0x60015456
    virtual void ShowInviteGameToChnlDlg(); // slot 98, 0x60014c32
    virtual void StopHostBanishCheck(); // slot 99, 0x60014c38
    virtual void StartHostBanishCheck(); // slot 100, 0x60014c3e
    virtual void GetGameOptionFromRegistry(); // slot 101, 0x60014c44
    virtual void PlayEventSound(); // slot 102, 0x60014c4a
    virtual void IsActivate(); // slot 103, 0x60014c50
    virtual void ProcessItemProvokeCommand(); // slot 104, 0x60014c56
    virtual void HasRightOfBanish(); // slot 105, 0x60014c5c
    virtual void Evt_OnAddRoomMember(); // slot 106, 0x60014c62
    virtual void Evt_OnDeleteRoomMember(); // slot 107, 0x60014c68
    virtual void Evt_OnRoomMemberList(); // slot 108, 0x60014c6e
    virtual void Evt_OnModifyRoomMemberInfo(); // slot 109, 0x60014c74
    virtual void Evt_OnEnableHostBanish(); // slot 110, 0x60014c7a
    virtual void Evt_OnTimeHostBanish(); // slot 111, 0x60014c80
    virtual void Evt_OnGameStatusMessage(); // slot 112, 0x60014c86
    virtual void Evt_OnChatString(); // slot 113, 0x60014c8c
    virtual void Evt_OnReqBanishMember(); // slot 114, 0x60014c92
    virtual void Evt_OnClickBanishMember(); // slot 115, 0x60014c98
    virtual void Evt_OnHostBanishCheck(); // slot 116, 0x60014c9e
    virtual void Evt_OnConnectTypeError(); // slot 117, 0x60014ca4
    virtual void Evt_OnItemReserveChance(); // slot 118, 0x60014caa
    virtual void Evt_OnStartNewGame(); // slot 119, 0x60014cb0
    virtual void Evt_OnRoomEvent(); // slot 120, 0x60014cb6
    virtual void Evt_OnAltF4KeyDown(); // slot 121, 0x60014cbc
    virtual void Evt_ChannelLobby_OnUpdateNotice(); // slot 122, 0x60014cc2
    virtual void Evt_OnReserveBanish(); // slot 123, 0x60014cc8
    virtual void Evt_OnExitGameDuetoShutdown(); // slot 124, 0x60014cce
    virtual void Evt_OnGetShutdownTime(); // slot 125, 0x60014cd4
    virtual void Net_SocketClose(); // slot 126, 0x60014cda
    virtual void Net_commandTimeBanish(); // slot 127, 0x60014ce0
    virtual void FlipEx(); // slot 128, 0x60001f30
    virtual void FlipSc(); // slot 129, 0x60001ff0
    virtual void AnimationProc(); // slot 130, 0x60001d60
};

class CAnimateGmApp : public CWinApp, public CWinThread, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f62
    virtual void vfunc_1(); // slot 1, 0x6000a710
    virtual void OnSelfNotice(); // slot 2, 0x60003b10
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
    virtual void OnCmdMsg(); // slot 5, 0x60014cfe
    virtual void OnFinalRelease(); // slot 6, 0x60014f68
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0a
    virtual void GetDispatchIID(); // slot 8, 0x60014d10
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d16
    virtual void GetTypeLibCache(); // slot 10, 0x60014d1c
    virtual void GetTypeLib(); // slot 11, 0x60014d22
    virtual void vfunc_12(); // slot 12, 0x6000a700
    virtual void GetCommandMap(); // slot 13, 0x60014d28
    virtual void GetDispatchMap(); // slot 14, 0x60014d2e
    virtual void GetConnectionMap(); // slot 15, 0x60014d34
    virtual void GetInterfaceMap(); // slot 16, 0x60014f6e
    virtual void GetEventSinkMap(); // slot 17, 0x60014d40
    virtual void OnCreateAggregates(); // slot 18, 0x60014d46
    virtual void GetInterfaceHook(); // slot 19, 0x60014d4c
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d52
    virtual void GetConnectionHook(); // slot 21, 0x60014d58
    virtual void vfunc_22(); // slot 22, 0x6000a6e0
    virtual void Run(); // slot 23, 0x60014f74
    virtual void PreTranslateMessage(); // slot 24, 0x60014f7a
    virtual void PumpMessage(); // slot 25, 0x60014f80
    virtual void OnIdle(); // slot 26, 0x60014f86
    virtual void IsIdleMessage(); // slot 27, 0x60014f8c
    virtual void ExitInstance(); // slot 28, 0x6000a6f0
    virtual void ProcessWndProcException(); // slot 29, 0x60014f92
    virtual void ProcessMessageFilter(); // slot 30, 0x60014f98
    virtual void GetMainWnd(); // slot 31, 0x60014f9e
    virtual void Delete(); // slot 32, 0x60014fa4
    virtual void InitLibId(); // slot 33, 0x60014faa
    virtual void Register(); // slot 34, 0x60014fb0
    virtual void Unregister(); // slot 35, 0x60014fb6
    virtual void OpenDocumentFile(); // slot 36, 0x60014fbc
    virtual void AddToRecentFileList(); // slot 37, 0x60014fc2
    virtual void InitApplication(); // slot 38, 0x60014fc8
    virtual void SaveAllModified(); // slot 39, 0x60014fce
    virtual void DoMessageBox(); // slot 40, 0x60014fd4
    virtual void DoWaitCursor(); // slot 41, 0x60014fda
    virtual void OnDDECommand(); // slot 42, 0x60014fe0
    virtual void WinHelpA(); // slot 43, 0x60014fe6
    virtual void HtmlHelpA(); // slot 44, 0x60014fec
    virtual void WinHelpInternal(); // slot 45, 0x60014ff2
    virtual void LoadAppLangResourceDLL(); // slot 46, 0x60014ff8
    virtual void LoadSysPolicies(); // slot 47, 0x60014ffe
};

class CEdit : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6001503a
    virtual void vfunc_1(); // slot 1, 0x6000d490
    virtual void OnSelfNotice(); // slot 2, 0x60003b10
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
    virtual void OnCmdMsg(); // slot 5, 0x60014cfe
    virtual void OnFinalRelease(); // slot 6, 0x60014d04
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0a
    virtual void GetDispatchIID(); // slot 8, 0x60014d10
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d16
    virtual void GetTypeLibCache(); // slot 10, 0x60014d1c
    virtual void GetTypeLib(); // slot 11, 0x60014d22
    virtual void GetMessageMap(); // slot 12, 0x60014ed2
    virtual void GetCommandMap(); // slot 13, 0x60014d28
    virtual void GetDispatchMap(); // slot 14, 0x60014d2e
    virtual void GetConnectionMap(); // slot 15, 0x60014d34
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3a
    virtual void GetEventSinkMap(); // slot 17, 0x60014d40
    virtual void OnCreateAggregates(); // slot 18, 0x60014d46
    virtual void GetInterfaceHook(); // slot 19, 0x60014d4c
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d52
    virtual void GetConnectionHook(); // slot 21, 0x60014d58
    virtual void PreSubclassWindow(); // slot 22, 0x60014d5e
    virtual void Create(); // slot 23, 0x60014d64
    virtual void CreateEx(); // slot 24, 0x60014d6a
    virtual void CreateEx(); // slot 25, 0x60014d70
    virtual void DestroyWindow(); // slot 26, 0x60014d76
    virtual void PreCreateWindow(); // slot 27, 0x60014ed8
    virtual void CalcWindowRect(); // slot 28, 0x60014d7c
    virtual void GetMenu(); // slot 29, 0x60014d82
    virtual void SetMenu(); // slot 30, 0x60014d88
    virtual void OnToolHitTest(); // slot 31, 0x60014d8e
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d94
    virtual void WinHelpA(); // slot 33, 0x60014d9a
    virtual void HtmlHelpA(); // slot 34, 0x60014da0
    virtual void WinHelpInternal(); // slot 35, 0x60014da6
    virtual void ContinueModal(); // slot 36, 0x60014dac
    virtual void EndModalLoop(); // slot 37, 0x60014db2
    virtual void EnsureStdObj(); // slot 38, 0x60014db8
    virtual void get_accParent(); // slot 39, 0x60014dbe
    virtual void get_accChildCount(); // slot 40, 0x60014dc4
    virtual void get_accChild(); // slot 41, 0x60014dca
    virtual void get_accName(); // slot 42, 0x60014dd0
    virtual void get_accValue(); // slot 43, 0x60014dd6
    virtual void get_accDescription(); // slot 44, 0x60014ddc
    virtual void get_accRole(); // slot 45, 0x60014de2
    virtual void get_accState(); // slot 46, 0x60014de8
    virtual void get_accHelp(); // slot 47, 0x60014dee
    virtual void get_accHelpTopic(); // slot 48, 0x60014df4
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfa
    virtual void get_accFocus(); // slot 50, 0x60014e00
    virtual void get_accSelection(); // slot 51, 0x60014e06
    virtual void get_accDefaultAction(); // slot 52, 0x60014e0c
    virtual void accSelect(); // slot 53, 0x60014e12
    virtual void accLocation(); // slot 54, 0x60014e18
    virtual void accNavigate(); // slot 55, 0x60014e1e
    virtual void accHitTest(); // slot 56, 0x60014e24
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2a
    virtual void put_accName(); // slot 58, 0x60014e30
    virtual void put_accValue(); // slot 59, 0x60014e36
    virtual void SetProxy(); // slot 60, 0x60014e3c
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e42
    virtual void OnCommand(); // slot 62, 0x60014e48
    virtual void OnNotify(); // slot 63, 0x60014e4e
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e54
    virtual void OnSelfNotice(); // slot 65, 0x60003b10
    virtual void vfunc_66(); // slot 66, 0x600019e0
    virtual void vfunc_67(); // slot 67, 0x600019f0
    virtual void PreTranslateMessage(); // slot 68, 0x60014e5a
    virtual void OnAmbientProperty(); // slot 69, 0x60014e60
    virtual void WindowProc(); // slot 70, 0x60014e66
    virtual void OnWndMsg(); // slot 71, 0x60014e6c
    virtual void DefWindowProcA(); // slot 72, 0x60014e72
    virtual void PostNcDestroy(); // slot 73, 0x60014e78
    virtual void OnChildNotify(); // slot 74, 0x60014e7e
    virtual void CheckAutoCenter(); // slot 75, 0x60014e84
    virtual void IsFrameWnd(); // slot 76, 0x60014e8a
    virtual void CreateControlContainer(); // slot 77, 0x60014e90
    virtual void CreateControlSite(); // slot 78, 0x60014e96
    virtual void SetOccDialogInfo(); // slot 79, 0x60014e9c
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea2
};

class CFont : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f0e
    virtual void vfunc_1(); // slot 1, 0x60003f80
    virtual void OnSelfNotice(); // slot 2, 0x60003b10
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
};

class CGdiObject : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014efc
    virtual void vfunc_1(); // slot 1, 0x60003f60
    virtual void OnSelfNotice(); // slot 2, 0x60003b10
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
};

class CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000c0e0
    virtual void _AllocSelf(); // slot 1, 0x600013b0
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_ChatBox : public CGraphicCtrl_TextBox, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60003690
    virtual void _AllocSelf(); // slot 1, 0x60003620
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x60008720
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003450
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_EditBox : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60005270
    virtual void _AllocSelf(); // slot 1, 0x60003230
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x600057c0
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void OnSelfNotice(); // slot 13, 0x60003b10
    virtual void __OnInputArrive(); // slot 14, 0x60003ad0
};

class CGraphicCtrl_MultiLineText : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000e4f0
    virtual void _AllocSelf(); // slot 1, 0x6000e480
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x6000db10
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void GetBufData(); // slot 13, 0x6000d010
    virtual void vfunc_14(); // slot 14, 0x60014f1a
};

class CGraphicCtrl_Notify : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60006a30
    virtual void _AllocSelf(); // slot 1, 0x600069c0
    virtual void CreateInstance(); // slot 2, 0x60006150
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x60006eb0
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnNoticeTime(); // slot 10, 0x60006b70
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_PushBtn : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000efd0
    virtual void _AllocSelf(); // slot 1, 0x60007bf0
    virtual void CreateInstance(); // slot 2, 0x6000ef70
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x6000f280
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000f4f0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f030
    virtual void OnBtnClicked(); // slot 14, 0x6000f790
    virtual void OnBtnClicked(); // slot 15, 0x6000f790
    virtual void OnBtnClicked(); // slot 16, 0x6000f790
    virtual void OnBtnClicked(); // slot 17, 0x6000f790
    virtual void OnBtnClicked(); // slot 18, 0x6000f790
};

class CGraphicCtrl_PushBtn_Ani : public CGraphicCtrl_Tile_Ani, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000f840
    virtual void _AllocSelf(); // slot 1, 0x6000f7d0
    virtual void CreateInstance(); // slot 2, 0x6000f760
    virtual void SetSpeedRate(); // slot 3, 0x60012260
    virtual void Proc(); // slot 4, 0x6000f8a0
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x60003aa0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x600142f0
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x60013a00
    virtual void CreateGraphicCtrl(); // slot 14, 0x60013530
    virtual void CreateGraphicCtrl(); // slot 15, 0x6000f710
    virtual void OnBtnClicked(); // slot 16, 0x6000f790
    virtual void OnBtnClicked(); // slot 17, 0x6000f790
    virtual void OnBtnClicked(); // slot 18, 0x6000f790
    virtual void OnBtnClicked(); // slot 19, 0x6000f790
    virtual void OnBtnClicked(); // slot 20, 0x6000f790
};

class CGraphicCtrl_Root : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000fc40
    virtual void _AllocSelf(); // slot 1, 0x600017f0
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_Rotate : public CGraphicCtrl_TileSupport, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000ff70
    virtual void _AllocSelf(); // slot 1, 0x60010030
    virtual void CreateInstance(); // slot 2, 0x60010000
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x600100d0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_Scale : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x600101b0
    virtual void _AllocSelf(); // slot 1, 0x600103b0
    virtual void CreateInstance(); // slot 2, 0x60010210
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x600102f0
    virtual void CreateGraphicCtrl(); // slot 7, 0x60010430
    virtual void CreateGraphicCtrl(); // slot 8, 0x60010650
    virtual void CreateGraphicCtrl(); // slot 9, 0x600105c0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60010270
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_ScrollBar : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60010840
    virtual void _AllocSelf(); // slot 1, 0x60007c80
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x60010740
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x60003aa0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_SlideBar : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60011860
    virtual void _AllocSelf(); // slot 1, 0x60011380
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x60011260
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x600117f0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void _OnBtnDrag(); // slot 13, 0x60011490
    virtual void _PostMsg(); // slot 14, 0x60011170
};

class CGraphicCtrl_Text : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x600060f0
    virtual void _AllocSelf(); // slot 1, 0x60006080
    virtual void CreateInstance(); // slot 2, 0x600072e0
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x60007250
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x60007200
    virtual void CreateGraphicCtrl(); // slot 9, 0x60007190
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_TextBox : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60008ab0
    virtual void _AllocSelf(); // slot 1, 0x600032a0
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x60008720
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60007e30
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_Tile : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60011e80
    virtual void _AllocSelf(); // slot 1, 0x60011cf0
    virtual void CreateInstance(); // slot 2, 0x60011cc0
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x60011e00
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x60011f30
    virtual void CreateGraphicCtrl(); // slot 14, 0x60012100
    virtual void CreateGraphicCtrl(); // slot 15, 0x600120b0
};

class CGraphicCtrl_TileSupport : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000fee0
    virtual void _AllocSelf(); // slot 1, 0x6000fe60
    virtual void CreateInstance(); // slot 2, 0x60014940
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x60014a00
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_Tile_Ani : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60012d30
    virtual void _AllocSelf(); // slot 1, 0x6000f620
    virtual void CreateInstance(); // slot 2, 0x60014210
    virtual void SetSpeedRate(); // slot 3, 0x60012260
    virtual void Proc(); // slot 4, 0x600133b0
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x60003aa0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x600142f0
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x60013a00
    virtual void CreateGraphicCtrl(); // slot 14, 0x60013530
};

class CGraphicCtrl_Tile_Element@CGraphicCtrl_Tile_Ani : public CGraphicCtrl_Tile_Element, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x600123e0
    virtual void CreateObject(); // slot 1, 0x600121b0
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void vfunc_4(); // slot 4, 0x60012220
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void vfunc_6(); // slot 6, 0x60012400
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class CGraphicCtrl_Tile_Scale : public CGraphicCtrl_Tile, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60014480
    virtual void _AllocSelf(); // slot 1, 0x60014690
    virtual void CreateInstance(); // slot 2, 0x600144e0
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x600145c0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60014540
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x60014710
    virtual void CreateGraphicCtrl(); // slot 14, 0x600148f0
    virtual void CreateGraphicCtrl(); // slot 15, 0x600148a0
};

class CGraphicCurve {
public:
    virtual void _SafeAction_DAMPING_Common(); // slot 0, 0x600097f0
    virtual void _SafeAction_DAMPING_X(); // slot 1, 0x60009bd0
    virtual void _SafeAction_DAMPING_Y(); // slot 2, 0x60009cc0
};

class CHgDDB16E : public CHgDIB16E, public CHgDIB16, public CHgImage16, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6000a8c0
    virtual void Create(); // slot 1, 0x60014b9c
    virtual void Create(); // slot 2, 0x60014ba2
    virtual void Create(); // slot 3, 0x60014ba8
    virtual void Create(); // slot 4, 0x6000a7c0
    virtual void Destroy(); // slot 5, 0x6000a820
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60014bba
    virtual void __CreateFromBitmap16(); // slot 7, 0x60014bc0
    virtual void __CreateFromBitmap24(); // slot 8, 0x60014bc6
};

class CHgDIB16E : public CHgDIB16, public CHgImage16, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x600010b0
    virtual void Create(); // slot 1, 0x60014b9c
    virtual void Create(); // slot 2, 0x60014ba2
    virtual void Create(); // slot 3, 0x60014ba8
    virtual void Create(); // slot 4, 0x60014bae
    virtual void Destroy(); // slot 5, 0x60014bb4
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60014bba
    virtual void __CreateFromBitmap16(); // slot 7, 0x60014bc0
    virtual void __CreateFromBitmap24(); // slot 8, 0x60014bc6
};

class CHgDummyCtrl : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007b30
    virtual void _AllocSelf(); // slot 1, 0x60007e60
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void PostProc(); // slot 4, 0x60001960
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x60003aa0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class _AFX_DLL_MODULE_STATE : public AFX_MODULE_STATE, public CNoTrackObject {
public:
    virtual void vfunc_0(); // slot 0, 0x600152ec
};

class _KeyFrame@CGraphicCtrl_Tile_Ani : public _KeyFrame {
public:
    virtual void vfunc_0(); // slot 0, 0x600123c0
};

class __CGraphicCtrl_ChatInputBox@CGraphicCtrl_ChatBox : public __CGraphicCtrl_ChatInputBox, public CGraphicCtrl_EditBox, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x600036f0
    virtual void vfunc_1(); // slot 1, 0x600035c0
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x600057c0
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void vfunc_13(); // slot 13, 0x60003460
    virtual void __OnInputArrive(); // slot 14, 0x60003ad0
};

class __CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText : public __CGraphicCtrl_ChatInputBox, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000d5a0
    virtual void _AllocSelf(); // slot 1, 0x6000d4b0
    virtual void CreateInstance(); // slot 2, 0x6000c370
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x6000dea0
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000ad70
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c330
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c2e0
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
};

class __CGraphicCtrl_ScrollBar_Bar@CGraphicCtrl_ScrollBar : public __CGraphicCtrl_ScrollBar_Bar, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007da0
    virtual void _AllocSelf(); // slot 1, 0x60007fd0
    virtual void CreateInstance(); // slot 2, 0x6000ef70
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x6000f280
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000f4f0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f030
    virtual void OnBtnPushed(); // slot 14, 0x60010cd0
    virtual void OnBtnClicked(); // slot 15, 0x6000f790
    virtual void OnBtnDrag(); // slot 16, 0x60010d20
    virtual void OnBtnClicked(); // slot 17, 0x6000f790
    virtual void OnBtnClicked(); // slot 18, 0x6000f790
};

class __CGraphicCtrl_ScrollBar_Dn@CGraphicCtrl_ScrollBar : public __CGraphicCtrl_ScrollBar_Dn, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007d30
    virtual void _AllocSelf(); // slot 1, 0x60007f20
    virtual void CreateInstance(); // slot 2, 0x6000ef70
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x6000f280
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000f4f0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f030
    virtual void OnBtnPushed(); // slot 14, 0x60011020
    virtual void OnBtnClicked(); // slot 15, 0x6000f790
    virtual void OnBtnClicked(); // slot 16, 0x6000f790
    virtual void OnBtnClicked(); // slot 17, 0x6000f790
    virtual void OnBtnClicked(); // slot 18, 0x6000f790
};

class __CGraphicCtrl_ScrollBar_Up@CGraphicCtrl_ScrollBar : public __CGraphicCtrl_ScrollBar_Up, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007d30
    virtual void _AllocSelf(); // slot 1, 0x60007ec0
    virtual void CreateInstance(); // slot 2, 0x6000ef70
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x6000f280
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000f4f0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f030
    virtual void OnBtnPushed(); // slot 14, 0x60011010
    virtual void OnBtnClicked(); // slot 15, 0x6000f790
    virtual void OnBtnClicked(); // slot 16, 0x6000f790
    virtual void OnBtnClicked(); // slot 17, 0x6000f790
    virtual void OnBtnClicked(); // slot 18, 0x6000f790
};

class __CGraphicCtrl_SlideBar_Thumb@CGraphicCtrl_SlideBar : public __CGraphicCtrl_SlideBar_Thumb, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60011030
    virtual void _AllocSelf(); // slot 1, 0x600112f0
    virtual void CreateInstance(); // slot 2, 0x6000ef70
    virtual void SetSpeedRate(); // slot 3, 0x600016a0
    virtual void Proc(); // slot 4, 0x6000f280
    virtual void PostProc(); // slot 5, 0x60001960
    virtual void DrawProc(); // slot 6, 0x6000f4f0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c140
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c8f0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c900
    virtual void OnBtnClicked(); // slot 10, 0x6000f790
    virtual void OnSelfNotice(); // slot 11, 0x60003b10
    virtual void SetChildsZOrder(); // slot 12, 0x6000bf40
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f030
    virtual void OnBtnPushed(); // slot 14, 0x600113f0
    virtual void OnBtnClicked(); // slot 15, 0x6000f790
    virtual void OnBtnDrag(); // slot 16, 0x60011090
    virtual void OnBtnClicked(); // slot 17, 0x6000f790
    virtual void OnBtnClicked(); // slot 18, 0x6000f790
};

class __CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText : public __CHgChatInputBoxEdit, public CEdit, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6001503a
    virtual void vfunc_1(); // slot 1, 0x6000e830
    virtual void OnSelfNotice(); // slot 2, 0x60003b10
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
    virtual void OnCmdMsg(); // slot 5, 0x60014cfe
    virtual void OnFinalRelease(); // slot 6, 0x60014d04
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0a
    virtual void GetDispatchIID(); // slot 8, 0x60014d10
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d16
    virtual void GetTypeLibCache(); // slot 10, 0x60014d1c
    virtual void GetTypeLib(); // slot 11, 0x60014d22
    virtual void GetMessageMap(); // slot 12, 0x6000e5f0
    virtual void GetCommandMap(); // slot 13, 0x60014d28
    virtual void GetDispatchMap(); // slot 14, 0x60014d2e
    virtual void GetConnectionMap(); // slot 15, 0x60014d34
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3a
    virtual void GetEventSinkMap(); // slot 17, 0x60014d40
    virtual void OnCreateAggregates(); // slot 18, 0x60014d46
    virtual void GetInterfaceHook(); // slot 19, 0x60014d4c
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d52
    virtual void GetConnectionHook(); // slot 21, 0x60014d58
    virtual void PreSubclassWindow(); // slot 22, 0x60014d5e
    virtual void Create(); // slot 23, 0x60014d64
    virtual void CreateEx(); // slot 24, 0x60014d6a
    virtual void CreateEx(); // slot 25, 0x60014d70
    virtual void DestroyWindow(); // slot 26, 0x60014d76
    virtual void PreCreateWindow(); // slot 27, 0x60014ed8
    virtual void CalcWindowRect(); // slot 28, 0x60014d7c
    virtual void GetMenu(); // slot 29, 0x60014d82
    virtual void SetMenu(); // slot 30, 0x60014d88
    virtual void OnToolHitTest(); // slot 31, 0x60014d8e
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d94
    virtual void WinHelpA(); // slot 33, 0x60014d9a
    virtual void HtmlHelpA(); // slot 34, 0x60014da0
    virtual void WinHelpInternal(); // slot 35, 0x60014da6
    virtual void ContinueModal(); // slot 36, 0x60014dac
    virtual void EndModalLoop(); // slot 37, 0x60014db2
    virtual void EnsureStdObj(); // slot 38, 0x60014db8
    virtual void get_accParent(); // slot 39, 0x60014dbe
    virtual void get_accChildCount(); // slot 40, 0x60014dc4
    virtual void get_accChild(); // slot 41, 0x60014dca
    virtual void get_accName(); // slot 42, 0x60014dd0
    virtual void get_accValue(); // slot 43, 0x60014dd6
    virtual void get_accDescription(); // slot 44, 0x60014ddc
    virtual void get_accRole(); // slot 45, 0x60014de2
    virtual void get_accState(); // slot 46, 0x60014de8
    virtual void get_accHelp(); // slot 47, 0x60014dee
    virtual void get_accHelpTopic(); // slot 48, 0x60014df4
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfa
    virtual void get_accFocus(); // slot 50, 0x60014e00
    virtual void get_accSelection(); // slot 51, 0x60014e06
    virtual void get_accDefaultAction(); // slot 52, 0x60014e0c
    virtual void accSelect(); // slot 53, 0x60014e12
    virtual void accLocation(); // slot 54, 0x60014e18
    virtual void accNavigate(); // slot 55, 0x60014e1e
    virtual void accHitTest(); // slot 56, 0x60014e24
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2a
    virtual void put_accName(); // slot 58, 0x60014e30
    virtual void put_accValue(); // slot 59, 0x60014e36
    virtual void SetProxy(); // slot 60, 0x60014e3c
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e42
    virtual void OnCommand(); // slot 62, 0x60014e48
    virtual void OnNotify(); // slot 63, 0x60014e4e
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e54
    virtual void OnSelfNotice(); // slot 65, 0x60003b10
    virtual void vfunc_66(); // slot 66, 0x600019e0
    virtual void vfunc_67(); // slot 67, 0x600019f0
    virtual void PreTranslateMessage(); // slot 68, 0x6000e8c0
    virtual void OnAmbientProperty(); // slot 69, 0x60014e60
    virtual void WindowProc(); // slot 70, 0x60014e66
    virtual void OnWndMsg(); // slot 71, 0x6000e550
    virtual void DefWindowProcA(); // slot 72, 0x60014e72
    virtual void PostNcDestroy(); // slot 73, 0x60014e78
    virtual void OnChildNotify(); // slot 74, 0x60014e7e
    virtual void CheckAutoCenter(); // slot 75, 0x60014e84
    virtual void IsFrameWnd(); // slot 76, 0x60014e8a
    virtual void CreateControlContainer(); // slot 77, 0x60014e90
    virtual void CreateControlSite(); // slot 78, 0x60014e96
    virtual void SetOccDialogInfo(); // slot 79, 0x60014e9c
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea2
    virtual void _PreTranslateMessage_ReturnKeyDown(); // slot 81, 0x6000e3f0
};

class __CHgChatLine@CGraphicCtrl_MultiLineText : public __CHgChatLine {
public:
    virtual void vfunc_0(); // slot 0, 0x6000d520
};

class __CWndForInput : public CStatic, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014ecc
    virtual void vfunc_1(); // slot 1, 0x600039c0
    virtual void OnSelfNotice(); // slot 2, 0x60003b10
    virtual void OnBtnClicked(); // slot 3, 0x6000f790
    virtual void OnSelfNotice(); // slot 4, 0x60003b10
    virtual void OnCmdMsg(); // slot 5, 0x60014cfe
    virtual void OnFinalRelease(); // slot 6, 0x60014d04
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0a
    virtual void GetDispatchIID(); // slot 8, 0x60014d10
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d16
    virtual void GetTypeLibCache(); // slot 10, 0x60014d1c
    virtual void GetTypeLib(); // slot 11, 0x60014d22
    virtual void vfunc_12(); // slot 12, 0x60006000
    virtual void GetCommandMap(); // slot 13, 0x60014d28
    virtual void GetDispatchMap(); // slot 14, 0x60014d2e
    virtual void GetConnectionMap(); // slot 15, 0x60014d34
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3a
    virtual void GetEventSinkMap(); // slot 17, 0x60014d40
    virtual void OnCreateAggregates(); // slot 18, 0x60014d46
    virtual void GetInterfaceHook(); // slot 19, 0x60014d4c
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d52
    virtual void GetConnectionHook(); // slot 21, 0x60014d58
    virtual void PreSubclassWindow(); // slot 22, 0x60014d5e
    virtual void Create(); // slot 23, 0x60014d64
    virtual void CreateEx(); // slot 24, 0x60014d6a
    virtual void CreateEx(); // slot 25, 0x60014d70
    virtual void DestroyWindow(); // slot 26, 0x60014d76
    virtual void PreCreateWindow(); // slot 27, 0x60014ed8
    virtual void CalcWindowRect(); // slot 28, 0x60014d7c
    virtual void GetMenu(); // slot 29, 0x60014d82
    virtual void SetMenu(); // slot 30, 0x60014d88
    virtual void OnToolHitTest(); // slot 31, 0x60014d8e
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d94
    virtual void WinHelpA(); // slot 33, 0x60014d9a
    virtual void HtmlHelpA(); // slot 34, 0x60014da0
    virtual void WinHelpInternal(); // slot 35, 0x60014da6
    virtual void ContinueModal(); // slot 36, 0x60014dac
    virtual void EndModalLoop(); // slot 37, 0x60014db2
    virtual void EnsureStdObj(); // slot 38, 0x60014db8
    virtual void get_accParent(); // slot 39, 0x60014dbe
    virtual void get_accChildCount(); // slot 40, 0x60014dc4
    virtual void get_accChild(); // slot 41, 0x60014dca
    virtual void get_accName(); // slot 42, 0x60014dd0
    virtual void get_accValue(); // slot 43, 0x60014dd6
    virtual void get_accDescription(); // slot 44, 0x60014ddc
    virtual void get_accRole(); // slot 45, 0x60014de2
    virtual void get_accState(); // slot 46, 0x60014de8
    virtual void get_accHelp(); // slot 47, 0x60014dee
    virtual void get_accHelpTopic(); // slot 48, 0x60014df4
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfa
    virtual void get_accFocus(); // slot 50, 0x60014e00
    virtual void get_accSelection(); // slot 51, 0x60014e06
    virtual void get_accDefaultAction(); // slot 52, 0x60014e0c
    virtual void accSelect(); // slot 53, 0x60014e12
    virtual void accLocation(); // slot 54, 0x60014e18
    virtual void accNavigate(); // slot 55, 0x60014e1e
    virtual void accHitTest(); // slot 56, 0x60014e24
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2a
    virtual void put_accName(); // slot 58, 0x60014e30
    virtual void put_accValue(); // slot 59, 0x60014e36
    virtual void SetProxy(); // slot 60, 0x60014e3c
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e42
    virtual void OnCommand(); // slot 62, 0x60014e48
    virtual void OnNotify(); // slot 63, 0x60014e4e
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e54
    virtual void OnSelfNotice(); // slot 65, 0x60003b10
    virtual void vfunc_66(); // slot 66, 0x600019e0
    virtual void vfunc_67(); // slot 67, 0x600019f0
    virtual void vfunc_68(); // slot 68, 0x600052d0
    virtual void OnAmbientProperty(); // slot 69, 0x60014e60
    virtual void WindowProc(); // slot 70, 0x60014e66
    virtual void OnWndMsg(); // slot 71, 0x60014e6c
    virtual void DefWindowProcA(); // slot 72, 0x60014e72
    virtual void PostNcDestroy(); // slot 73, 0x60014e78
    virtual void OnChildNotify(); // slot 74, 0x60014ede
    virtual void CheckAutoCenter(); // slot 75, 0x60014e84
    virtual void IsFrameWnd(); // slot 76, 0x60014e8a
    virtual void CreateControlContainer(); // slot 77, 0x60014e90
    virtual void CreateControlSite(); // slot 78, 0x60014e96
    virtual void SetOccDialogInfo(); // slot 79, 0x60014e9c
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea2
    virtual void Create(); // slot 81, 0x60014ee4
    virtual void DrawItem(); // slot 82, 0x60014eea
    virtual void vfunc_83(); // slot 83, 0x60003a60
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x600034b0
    virtual void what(); // slot 1, 0x60015512
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60003550
    virtual void vfunc_1(); // slot 1, 0x60003540
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60003550
    virtual void vfunc_1(); // slot 1, 0x60003540
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60003550
    virtual void vfunc_1(); // slot 1, 0x60003540
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x60015329
};

}  // namespace HgAniGm3_16Bit
