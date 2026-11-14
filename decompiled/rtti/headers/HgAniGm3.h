// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgAniGm3 {

class ?$CArray;
class ?$CList;
class AFX_MODULE_STATE;
class CCmdTarget;
class CControlBase;
class CGameWnd;
class CGraphicCtrl_Tile_Element;
class CHgDIB16;
class CHgImage;
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
    virtual void GetRuntimeClass(); // slot 0, 0x60014f36
    virtual void vfunc_1(); // slot 1, 0x60006430
    virtual void vfunc_2(); // slot 2, 0x60006980
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
};

class ?$CList@PAVCGraphicCtrl@@PAV1@ : public ?$CList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f36
    virtual void vfunc_1(); // slot 1, 0x6000b440
    virtual void vfunc_2(); // slot 2, 0x60012be0
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
};

class ?$CList@PAV_KeyFrame@CGraphicCtrl_Tile_Ani@@PAV12@ : public ?$CList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f36
    virtual void vfunc_1(); // slot 1, 0x60012b40
    virtual void vfunc_2(); // slot 2, 0x60012be0
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
};

class CAnimateGameWnd : public CGameWnd, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x600017a0
    virtual void vfunc_1(); // slot 1, 0x60001920
    virtual void OnSelfNotice(); // slot 2, 0x60003970
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
    virtual void OnCmdMsg(); // slot 5, 0x60014d02
    virtual void OnFinalRelease(); // slot 6, 0x60014d08
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0e
    virtual void GetDispatchIID(); // slot 8, 0x60014d14
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d1a
    virtual void GetTypeLibCache(); // slot 10, 0x60014d20
    virtual void GetTypeLib(); // slot 11, 0x60014d26
    virtual void GetMessageMap(); // slot 12, 0x60002920
    virtual void GetCommandMap(); // slot 13, 0x60014d2c
    virtual void GetDispatchMap(); // slot 14, 0x60014d32
    virtual void GetConnectionMap(); // slot 15, 0x60014d38
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3e
    virtual void GetEventSinkMap(); // slot 17, 0x60014d44
    virtual void OnCreateAggregates(); // slot 18, 0x60014d4a
    virtual void GetInterfaceHook(); // slot 19, 0x60014d50
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d56
    virtual void GetConnectionHook(); // slot 21, 0x60014d5c
    virtual void PreSubclassWindow(); // slot 22, 0x60014d62
    virtual void Create(); // slot 23, 0x60014d68
    virtual void CreateEx(); // slot 24, 0x60014d6e
    virtual void CreateEx(); // slot 25, 0x60014d74
    virtual void DestroyWindow(); // slot 26, 0x60014d7a
    virtual void PreCreateWindow(); // slot 27, 0x60014bfa
    virtual void CalcWindowRect(); // slot 28, 0x60014d80
    virtual void GetMenu(); // slot 29, 0x60014d86
    virtual void SetMenu(); // slot 30, 0x60014d8c
    virtual void OnToolHitTest(); // slot 31, 0x60014d92
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d98
    virtual void WinHelpA(); // slot 33, 0x60014d9e
    virtual void HtmlHelpA(); // slot 34, 0x60014da4
    virtual void WinHelpInternal(); // slot 35, 0x60014daa
    virtual void ContinueModal(); // slot 36, 0x60014db0
    virtual void EndModalLoop(); // slot 37, 0x60014db6
    virtual void EnsureStdObj(); // slot 38, 0x60014dbc
    virtual void get_accParent(); // slot 39, 0x60014dc2
    virtual void get_accChildCount(); // slot 40, 0x60014dc8
    virtual void get_accChild(); // slot 41, 0x60014dce
    virtual void get_accName(); // slot 42, 0x60014dd4
    virtual void get_accValue(); // slot 43, 0x60014dda
    virtual void get_accDescription(); // slot 44, 0x60014de0
    virtual void get_accRole(); // slot 45, 0x60014de6
    virtual void get_accState(); // slot 46, 0x60014dec
    virtual void get_accHelp(); // slot 47, 0x60014df2
    virtual void get_accHelpTopic(); // slot 48, 0x60014df8
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfe
    virtual void get_accFocus(); // slot 50, 0x60014e04
    virtual void get_accSelection(); // slot 51, 0x60014e0a
    virtual void get_accDefaultAction(); // slot 52, 0x60014e10
    virtual void accSelect(); // slot 53, 0x60014e16
    virtual void accLocation(); // slot 54, 0x60014e1c
    virtual void accNavigate(); // slot 55, 0x60014e22
    virtual void accHitTest(); // slot 56, 0x60014e28
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2e
    virtual void put_accName(); // slot 58, 0x60014e34
    virtual void put_accValue(); // slot 59, 0x60014e3a
    virtual void SetProxy(); // slot 60, 0x60014e40
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e46
    virtual void OnCommand(); // slot 62, 0x60014e4c
    virtual void OnNotify(); // slot 63, 0x60014e52
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e58
    virtual void OnSelfNotice(); // slot 65, 0x60003970
    virtual void vfunc_66(); // slot 66, 0x60001900
    virtual void vfunc_67(); // slot 67, 0x60001910
    virtual void PreTranslateMessage(); // slot 68, 0x60014e5e
    virtual void OnAmbientProperty(); // slot 69, 0x60014e64
    virtual void WindowProc(); // slot 70, 0x60014e6a
    virtual void OnWndMsg(); // slot 71, 0x60014e70
    virtual void DefWindowProcA(); // slot 72, 0x60014e76
    virtual void PostNcDestroy(); // slot 73, 0x60014e7c
    virtual void OnChildNotify(); // slot 74, 0x60014e82
    virtual void CheckAutoCenter(); // slot 75, 0x60014e88
    virtual void IsFrameWnd(); // slot 76, 0x60014e8e
    virtual void CreateControlContainer(); // slot 77, 0x60014e94
    virtual void CreateControlSite(); // slot 78, 0x60014e9a
    virtual void SetOccDialogInfo(); // slot 79, 0x60014ea0
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea6
    virtual void DisplayChatMessage(); // slot 81, 0x60014c00
    virtual void DisplayNoticeMessage(); // slot 82, 0x60014c06
    virtual void DisplayStatusMessage(); // slot 83, 0x60014c0c
    virtual void CaptureGameScreen(); // slot 84, 0x60014c12
    virtual void DoExActive(); // slot 85, 0x60001f40
    virtual void FlipScreen(); // slot 86, 0x60014c18
    virtual void ExitGameRoom(); // slot 87, 0x60014c1e
    virtual void AccuseUser(); // slot 88, 0x60014c24
    virtual void purecall(); // slot 89, 0x600153a2
    virtual void GetGameChatContent(); // slot 90, 0x60014c2a
    virtual void UpdateChanceInfo(); // slot 91, 0x60014c30
    virtual void CreateCaptionButtons(); // slot 92, 0x60014c36
    virtual void purecall(); // slot 93, 0x600153a2
    virtual void purecall(); // slot 94, 0x600153a2
    virtual void purecall(); // slot 95, 0x600153a2
    virtual void purecall(); // slot 96, 0x600153a2
    virtual void purecall(); // slot 97, 0x600153a2
    virtual void ShowInviteGameToChnlDlg(); // slot 98, 0x60014c3c
    virtual void StopHostBanishCheck(); // slot 99, 0x60014c42
    virtual void StartHostBanishCheck(); // slot 100, 0x60014c48
    virtual void GetGameOptionFromRegistry(); // slot 101, 0x60014c4e
    virtual void PlayEventSound(); // slot 102, 0x60014c54
    virtual void IsActivate(); // slot 103, 0x60014c5a
    virtual void ProcessItemProvokeCommand(); // slot 104, 0x60014c60
    virtual void HasRightOfBanish(); // slot 105, 0x60014c66
    virtual void Evt_OnAddRoomMember(); // slot 106, 0x60014c6c
    virtual void Evt_OnDeleteRoomMember(); // slot 107, 0x60014c72
    virtual void Evt_OnRoomMemberList(); // slot 108, 0x60014c78
    virtual void Evt_OnModifyRoomMemberInfo(); // slot 109, 0x60014c7e
    virtual void Evt_OnEnableHostBanish(); // slot 110, 0x60014c84
    virtual void Evt_OnTimeHostBanish(); // slot 111, 0x60014c8a
    virtual void Evt_OnGameStatusMessage(); // slot 112, 0x60014c90
    virtual void Evt_OnChatString(); // slot 113, 0x60014c96
    virtual void Evt_OnReqBanishMember(); // slot 114, 0x60014c9c
    virtual void Evt_OnClickBanishMember(); // slot 115, 0x60014ca2
    virtual void Evt_OnHostBanishCheck(); // slot 116, 0x60014ca8
    virtual void Evt_OnConnectTypeError(); // slot 117, 0x60014cae
    virtual void Evt_OnItemReserveChance(); // slot 118, 0x60014cb4
    virtual void Evt_OnStartNewGame(); // slot 119, 0x60014cba
    virtual void Evt_OnRoomEvent(); // slot 120, 0x60014cc0
    virtual void Evt_OnAltF4KeyDown(); // slot 121, 0x60014cc6
    virtual void Evt_ChannelLobby_OnUpdateNotice(); // slot 122, 0x60014ccc
    virtual void Evt_OnReserveBanish(); // slot 123, 0x60014cd2
    virtual void Evt_OnExitGameDuetoShutdown(); // slot 124, 0x60014cd8
    virtual void Evt_OnGetShutdownTime(); // slot 125, 0x60014cde
    virtual void Net_SocketClose(); // slot 126, 0x60014ce4
    virtual void Net_commandTimeBanish(); // slot 127, 0x60014cea
    virtual void FlipEx(); // slot 128, 0x60001e60
    virtual void FlipSc(); // slot 129, 0x60001f20
    virtual void AnimationProc(); // slot 130, 0x60001c90
};

class CAnimateGmApp : public CWinApp, public CWinThread, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f6c
    virtual void vfunc_1(); // slot 1, 0x6000a700
    virtual void OnSelfNotice(); // slot 2, 0x60003970
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
    virtual void OnCmdMsg(); // slot 5, 0x60014d02
    virtual void OnFinalRelease(); // slot 6, 0x60014f72
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0e
    virtual void GetDispatchIID(); // slot 8, 0x60014d14
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d1a
    virtual void GetTypeLibCache(); // slot 10, 0x60014d20
    virtual void GetTypeLib(); // slot 11, 0x60014d26
    virtual void vfunc_12(); // slot 12, 0x6000a6f0
    virtual void GetCommandMap(); // slot 13, 0x60014d2c
    virtual void GetDispatchMap(); // slot 14, 0x60014d32
    virtual void GetConnectionMap(); // slot 15, 0x60014d38
    virtual void GetInterfaceMap(); // slot 16, 0x60014f78
    virtual void GetEventSinkMap(); // slot 17, 0x60014d44
    virtual void OnCreateAggregates(); // slot 18, 0x60014d4a
    virtual void GetInterfaceHook(); // slot 19, 0x60014d50
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d56
    virtual void GetConnectionHook(); // slot 21, 0x60014d5c
    virtual void vfunc_22(); // slot 22, 0x6000a6d0
    virtual void Run(); // slot 23, 0x60014f7e
    virtual void PreTranslateMessage(); // slot 24, 0x60014f84
    virtual void PumpMessage(); // slot 25, 0x60014f8a
    virtual void OnIdle(); // slot 26, 0x60014f90
    virtual void IsIdleMessage(); // slot 27, 0x60014f96
    virtual void ExitInstance(); // slot 28, 0x6000a6e0
    virtual void ProcessWndProcException(); // slot 29, 0x60014f9c
    virtual void ProcessMessageFilter(); // slot 30, 0x60014fa2
    virtual void GetMainWnd(); // slot 31, 0x60014fa8
    virtual void Delete(); // slot 32, 0x60014fae
    virtual void InitLibId(); // slot 33, 0x60014fb4
    virtual void Register(); // slot 34, 0x60014fba
    virtual void Unregister(); // slot 35, 0x60014fc0
    virtual void OpenDocumentFile(); // slot 36, 0x60014fc6
    virtual void AddToRecentFileList(); // slot 37, 0x60014fcc
    virtual void InitApplication(); // slot 38, 0x60014fd2
    virtual void SaveAllModified(); // slot 39, 0x60014fd8
    virtual void DoMessageBox(); // slot 40, 0x60014fde
    virtual void DoWaitCursor(); // slot 41, 0x60014fe4
    virtual void OnDDECommand(); // slot 42, 0x60014fea
    virtual void WinHelpA(); // slot 43, 0x60014ff0
    virtual void HtmlHelpA(); // slot 44, 0x60014ff6
    virtual void WinHelpInternal(); // slot 45, 0x60014ffc
    virtual void LoadAppLangResourceDLL(); // slot 46, 0x60015002
    virtual void LoadSysPolicies(); // slot 47, 0x60015008
};

class CEdit : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60015044
    virtual void vfunc_1(); // slot 1, 0x6000d610
    virtual void OnSelfNotice(); // slot 2, 0x60003970
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
    virtual void OnCmdMsg(); // slot 5, 0x60014d02
    virtual void OnFinalRelease(); // slot 6, 0x60014d08
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0e
    virtual void GetDispatchIID(); // slot 8, 0x60014d14
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d1a
    virtual void GetTypeLibCache(); // slot 10, 0x60014d20
    virtual void GetTypeLib(); // slot 11, 0x60014d26
    virtual void GetMessageMap(); // slot 12, 0x60014edc
    virtual void GetCommandMap(); // slot 13, 0x60014d2c
    virtual void GetDispatchMap(); // slot 14, 0x60014d32
    virtual void GetConnectionMap(); // slot 15, 0x60014d38
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3e
    virtual void GetEventSinkMap(); // slot 17, 0x60014d44
    virtual void OnCreateAggregates(); // slot 18, 0x60014d4a
    virtual void GetInterfaceHook(); // slot 19, 0x60014d50
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d56
    virtual void GetConnectionHook(); // slot 21, 0x60014d5c
    virtual void PreSubclassWindow(); // slot 22, 0x60014d62
    virtual void Create(); // slot 23, 0x60014d68
    virtual void CreateEx(); // slot 24, 0x60014d6e
    virtual void CreateEx(); // slot 25, 0x60014d74
    virtual void DestroyWindow(); // slot 26, 0x60014d7a
    virtual void PreCreateWindow(); // slot 27, 0x60014ee2
    virtual void CalcWindowRect(); // slot 28, 0x60014d80
    virtual void GetMenu(); // slot 29, 0x60014d86
    virtual void SetMenu(); // slot 30, 0x60014d8c
    virtual void OnToolHitTest(); // slot 31, 0x60014d92
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d98
    virtual void WinHelpA(); // slot 33, 0x60014d9e
    virtual void HtmlHelpA(); // slot 34, 0x60014da4
    virtual void WinHelpInternal(); // slot 35, 0x60014daa
    virtual void ContinueModal(); // slot 36, 0x60014db0
    virtual void EndModalLoop(); // slot 37, 0x60014db6
    virtual void EnsureStdObj(); // slot 38, 0x60014dbc
    virtual void get_accParent(); // slot 39, 0x60014dc2
    virtual void get_accChildCount(); // slot 40, 0x60014dc8
    virtual void get_accChild(); // slot 41, 0x60014dce
    virtual void get_accName(); // slot 42, 0x60014dd4
    virtual void get_accValue(); // slot 43, 0x60014dda
    virtual void get_accDescription(); // slot 44, 0x60014de0
    virtual void get_accRole(); // slot 45, 0x60014de6
    virtual void get_accState(); // slot 46, 0x60014dec
    virtual void get_accHelp(); // slot 47, 0x60014df2
    virtual void get_accHelpTopic(); // slot 48, 0x60014df8
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfe
    virtual void get_accFocus(); // slot 50, 0x60014e04
    virtual void get_accSelection(); // slot 51, 0x60014e0a
    virtual void get_accDefaultAction(); // slot 52, 0x60014e10
    virtual void accSelect(); // slot 53, 0x60014e16
    virtual void accLocation(); // slot 54, 0x60014e1c
    virtual void accNavigate(); // slot 55, 0x60014e22
    virtual void accHitTest(); // slot 56, 0x60014e28
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2e
    virtual void put_accName(); // slot 58, 0x60014e34
    virtual void put_accValue(); // slot 59, 0x60014e3a
    virtual void SetProxy(); // slot 60, 0x60014e40
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e46
    virtual void OnCommand(); // slot 62, 0x60014e4c
    virtual void OnNotify(); // slot 63, 0x60014e52
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e58
    virtual void OnSelfNotice(); // slot 65, 0x60003970
    virtual void vfunc_66(); // slot 66, 0x60001900
    virtual void vfunc_67(); // slot 67, 0x60001910
    virtual void PreTranslateMessage(); // slot 68, 0x60014e5e
    virtual void OnAmbientProperty(); // slot 69, 0x60014e64
    virtual void WindowProc(); // slot 70, 0x60014e6a
    virtual void OnWndMsg(); // slot 71, 0x60014e70
    virtual void DefWindowProcA(); // slot 72, 0x60014e76
    virtual void PostNcDestroy(); // slot 73, 0x60014e7c
    virtual void OnChildNotify(); // slot 74, 0x60014e82
    virtual void CheckAutoCenter(); // slot 75, 0x60014e88
    virtual void IsFrameWnd(); // slot 76, 0x60014e8e
    virtual void CreateControlContainer(); // slot 77, 0x60014e94
    virtual void CreateControlSite(); // slot 78, 0x60014e9a
    virtual void SetOccDialogInfo(); // slot 79, 0x60014ea0
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea6
};

class CFont : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f18
    virtual void vfunc_1(); // slot 1, 0x60003e10
    virtual void OnSelfNotice(); // slot 2, 0x60003970
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
};

class CGdiObject : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014f06
    virtual void vfunc_1(); // slot 1, 0x60003df0
    virtual void OnSelfNotice(); // slot 2, 0x60003970
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
};

class CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000c240
    virtual void _AllocSelf(); // slot 1, 0x60001300
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_ChatBox : public CGraphicCtrl_TextBox, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60003570
    virtual void _AllocSelf(); // slot 1, 0x60003500
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x60008720
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003380
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_EditBox : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60005280
    virtual void _AllocSelf(); // slot 1, 0x60003160
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x600057d0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void OnSelfNotice(); // slot 13, 0x60003970
    virtual void __OnInputArrive(); // slot 14, 0x60003980
};

class CGraphicCtrl_MultiLineText : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000e650
    virtual void _AllocSelf(); // slot 1, 0x6000e5e0
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x6000dc70
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void GetBufData(); // slot 13, 0x6000d1a0
    virtual void vfunc_14(); // slot 14, 0x60014f24
};

class CGraphicCtrl_Notify : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60006a50
    virtual void _AllocSelf(); // slot 1, 0x600069e0
    virtual void CreateInstance(); // slot 2, 0x60006160
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x60006ed0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnNoticeTime(); // slot 10, 0x60006b90
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_PushBtn : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000f050
    virtual void _AllocSelf(); // slot 1, 0x60007c00
    virtual void CreateInstance(); // slot 2, 0x6000efe0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x6000f2e0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000f550
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f0b0
    virtual void OnBtnClicked(); // slot 14, 0x6000f040
    virtual void OnBtnClicked(); // slot 15, 0x6000f040
    virtual void OnBtnClicked(); // slot 16, 0x6000f040
    virtual void OnBtnClicked(); // slot 17, 0x6000f040
    virtual void OnBtnClicked(); // slot 18, 0x6000f040
};

class CGraphicCtrl_PushBtn_Ani : public CGraphicCtrl_Tile_Ani, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000f880
    virtual void _AllocSelf(); // slot 1, 0x6000f810
    virtual void CreateInstance(); // slot 2, 0x6000f7b0
    virtual void SetSpeedRate(); // slot 3, 0x60012270
    virtual void Proc(); // slot 4, 0x6000f8e0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ca80
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x600142c0
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x600139d0
    virtual void CreateGraphicCtrl(); // slot 14, 0x60013520
    virtual void CreateGraphicCtrl(); // slot 15, 0x6000f760
    virtual void OnBtnClicked(); // slot 16, 0x6000f040
    virtual void OnBtnClicked(); // slot 17, 0x6000f040
    virtual void OnBtnClicked(); // slot 18, 0x6000f040
    virtual void OnBtnClicked(); // slot 19, 0x6000f040
    virtual void OnBtnClicked(); // slot 20, 0x6000f040
};

class CGraphicCtrl_Root : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000fc80
    virtual void _AllocSelf(); // slot 1, 0x60001720
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_Rotate : public CGraphicCtrl_TileSupport, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000ffb0
    virtual void _AllocSelf(); // slot 1, 0x60010070
    virtual void CreateInstance(); // slot 2, 0x60010040
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x60010110
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_Scale : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x600101f0
    virtual void _AllocSelf(); // slot 1, 0x600103f0
    virtual void CreateInstance(); // slot 2, 0x60010250
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x60010330
    virtual void CreateGraphicCtrl(); // slot 7, 0x60010470
    virtual void CreateGraphicCtrl(); // slot 8, 0x60010680
    virtual void CreateGraphicCtrl(); // slot 9, 0x600105f0
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x600102b0
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_ScrollBar : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60010870
    virtual void _AllocSelf(); // slot 1, 0x60007c90
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x60010770
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ca80
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_SlideBar : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60011880
    virtual void _AllocSelf(); // slot 1, 0x600113a0
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x60011280
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x60011810
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void _OnBtnDrag(); // slot 13, 0x600114b0
    virtual void _PostMsg(); // slot 14, 0x600111a0
};

class CGraphicCtrl_Text : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60006100
    virtual void _AllocSelf(); // slot 1, 0x60006090
    virtual void CreateInstance(); // slot 2, 0x600072f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x60007260
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x60007210
    virtual void CreateGraphicCtrl(); // slot 9, 0x600071a0
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_TextBox : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60008aa0
    virtual void _AllocSelf(); // slot 1, 0x600031d0
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x60008720
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60007e40
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_Tile : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60011e80
    virtual void _AllocSelf(); // slot 1, 0x60011cf0
    virtual void CreateInstance(); // slot 2, 0x60011cc0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x60011e00
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x60011f30
    virtual void CreateGraphicCtrl(); // slot 14, 0x60012110
    virtual void CreateGraphicCtrl(); // slot 15, 0x600120c0
};

class CGraphicCtrl_TileSupport : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000ff20
    virtual void _AllocSelf(); // slot 1, 0x6000fea0
    virtual void CreateInstance(); // slot 2, 0x60014920
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x600149e0
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_Tile_Ani : public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60012d10
    virtual void _AllocSelf(); // slot 1, 0x6000f680
    virtual void CreateInstance(); // slot 2, 0x600141e0
    virtual void SetSpeedRate(); // slot 3, 0x60012270
    virtual void Proc(); // slot 4, 0x600133a0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ca80
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x600142c0
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x600139d0
    virtual void CreateGraphicCtrl(); // slot 14, 0x60013520
};

class CGraphicCtrl_Tile_Element@CGraphicCtrl_Tile_Ani : public CGraphicCtrl_Tile_Element, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60012470
    virtual void CreateObject(); // slot 1, 0x600121c0
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void vfunc_4(); // slot 4, 0x60012230
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void vfunc_6(); // slot 6, 0x60012490
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class CGraphicCtrl_Tile_Scale : public CGraphicCtrl_Tile, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60014450
    virtual void _AllocSelf(); // slot 1, 0x60014660
    virtual void CreateInstance(); // slot 2, 0x600144b0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x60014590
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60014510
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x600146e0
    virtual void CreateGraphicCtrl(); // slot 14, 0x600148d0
    virtual void CreateGraphicCtrl(); // slot 15, 0x60014880
};

class CGraphicCurve {
public:
    virtual void _SafeAction_DAMPING_Common(); // slot 0, 0x600097e0
    virtual void _SafeAction_DAMPING_X(); // slot 1, 0x60009bc0
    virtual void _SafeAction_DAMPING_Y(); // slot 2, 0x60009cb0
};

class CHgDDB : public CHgImage, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60012310
    virtual void Create(); // slot 1, 0x60014ba0
    virtual void Create(); // slot 2, 0x60014ba6
    virtual void Create(); // slot 3, 0x60014bac
    virtual void Create(); // slot 4, 0x60014bee
    virtual void Destroy(); // slot 5, 0x60014bf4
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60014bdc
    virtual void __CreateFromBitmap16(); // slot 7, 0x60014be2
    virtual void __CreateFromBitmap24(); // slot 8, 0x60014be8
};

class CHgDDB16E : public CHgDIB16E, public CHgDIB16, public CHgImage16, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6000a960
    virtual void Create(); // slot 1, 0x60014ba0
    virtual void Create(); // slot 2, 0x60014ba6
    virtual void Create(); // slot 3, 0x60014bac
    virtual void Create(); // slot 4, 0x6000a860
    virtual void Destroy(); // slot 5, 0x6000a8c0
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60014bbe
    virtual void __CreateFromBitmap16(); // slot 7, 0x60014bc4
    virtual void __CreateFromBitmap24(); // slot 8, 0x60014bca
};

class CHgDIB : public CHgImage, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6000c440
    virtual void Create(); // slot 1, 0x60014ba0
    virtual void Create(); // slot 2, 0x60014ba6
    virtual void Create(); // slot 3, 0x60014bac
    virtual void Create(); // slot 4, 0x60014bd0
    virtual void Destroy(); // slot 5, 0x60014bd6
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60014bdc
    virtual void __CreateFromBitmap16(); // slot 7, 0x60014be2
    virtual void __CreateFromBitmap24(); // slot 8, 0x60014be8
};

class CHgDIB16E : public CHgDIB16, public CHgImage16, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6000a7e0
    virtual void Create(); // slot 1, 0x60014ba0
    virtual void Create(); // slot 2, 0x60014ba6
    virtual void Create(); // slot 3, 0x60014bac
    virtual void Create(); // slot 4, 0x60014bb2
    virtual void Destroy(); // slot 5, 0x60014bb8
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60014bbe
    virtual void __CreateFromBitmap16(); // slot 7, 0x60014bc4
    virtual void __CreateFromBitmap24(); // slot 8, 0x60014bca
};

class CHgDummyCtrl : public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007b40
    virtual void _AllocSelf(); // slot 1, 0x60007e70
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void PostProc(); // slot 4, 0x6000ae10
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ca80
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class _AFX_DLL_MODULE_STATE : public AFX_MODULE_STATE, public CNoTrackObject {
public:
    virtual void vfunc_0(); // slot 0, 0x600152f6
};

class _KeyFrame@CGraphicCtrl_Tile_Ani : public _KeyFrame {
public:
    virtual void vfunc_0(); // slot 0, 0x60012450
};

class __CGraphicCtrl_ChatInputBox@CGraphicCtrl_ChatBox : public __CGraphicCtrl_ChatInputBox, public CGraphicCtrl_EditBox, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x600035d0
    virtual void vfunc_1(); // slot 1, 0x600034a0
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x600057d0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void vfunc_13(); // slot 13, 0x60003390
    virtual void __OnInputArrive(); // slot 14, 0x60003980
};

class __CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText : public __CGraphicCtrl_ChatInputBox, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x6000d720
    virtual void _AllocSelf(); // slot 1, 0x6000d630
    virtual void CreateInstance(); // slot 2, 0x6000c4f0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x6000e000
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000ae20
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000c4b0
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000c460
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
};

class __CGraphicCtrl_ScrollBar_Bar@CGraphicCtrl_ScrollBar : public __CGraphicCtrl_ScrollBar_Bar, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007db0
    virtual void _AllocSelf(); // slot 1, 0x60007fe0
    virtual void CreateInstance(); // slot 2, 0x6000efe0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x6000f2e0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000f550
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f0b0
    virtual void OnBtnPushed(); // slot 14, 0x60010d00
    virtual void OnBtnClicked(); // slot 15, 0x6000f040
    virtual void OnBtnDrag(); // slot 16, 0x60010d50
    virtual void OnBtnClicked(); // slot 17, 0x6000f040
    virtual void OnBtnClicked(); // slot 18, 0x6000f040
};

class __CGraphicCtrl_ScrollBar_Dn@CGraphicCtrl_ScrollBar : public __CGraphicCtrl_ScrollBar_Dn, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007d50
    virtual void _AllocSelf(); // slot 1, 0x60007f30
    virtual void CreateInstance(); // slot 2, 0x6000efe0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x6000f2e0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000f550
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f0b0
    virtual void OnBtnPushed(); // slot 14, 0x60011050
    virtual void OnBtnClicked(); // slot 15, 0x6000f040
    virtual void OnBtnClicked(); // slot 16, 0x6000f040
    virtual void OnBtnClicked(); // slot 17, 0x6000f040
    virtual void OnBtnClicked(); // slot 18, 0x6000f040
};

class __CGraphicCtrl_ScrollBar_Up@CGraphicCtrl_ScrollBar : public __CGraphicCtrl_ScrollBar_Up, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60007d50
    virtual void _AllocSelf(); // slot 1, 0x60007ed0
    virtual void CreateInstance(); // slot 2, 0x6000efe0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x6000f2e0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000f550
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f0b0
    virtual void OnBtnPushed(); // slot 14, 0x60011040
    virtual void OnBtnClicked(); // slot 15, 0x6000f040
    virtual void OnBtnClicked(); // slot 16, 0x6000f040
    virtual void OnBtnClicked(); // slot 17, 0x6000f040
    virtual void OnBtnClicked(); // slot 18, 0x6000f040
};

class __CGraphicCtrl_SlideBar_Thumb@CGraphicCtrl_SlideBar : public __CGraphicCtrl_SlideBar_Thumb, public CGraphicCtrl_PushBtn, public CHgDummyCtrl, public CGraphicCtrl {
public:
    virtual void vfunc_0(); // slot 0, 0x60011060
    virtual void _AllocSelf(); // slot 1, 0x60011310
    virtual void CreateInstance(); // slot 2, 0x6000efe0
    virtual void SetSpeedRate(); // slot 3, 0x600015f0
    virtual void Proc(); // slot 4, 0x6000f2e0
    virtual void PostProc(); // slot 5, 0x6000ae10
    virtual void DrawProc(); // slot 6, 0x6000f550
    virtual void CreateGraphicCtrl(); // slot 7, 0x6000c2a0
    virtual void CreateGraphicCtrl(); // slot 8, 0x6000ca70
    virtual void CreateGraphicCtrl(); // slot 9, 0x6000ca90
    virtual void OnBtnClicked(); // slot 10, 0x6000f040
    virtual void OnSelfNotice(); // slot 11, 0x60003970
    virtual void SetChildsZOrder(); // slot 12, 0x6000c0a0
    virtual void CreateGraphicCtrl(); // slot 13, 0x6000f0b0
    virtual void OnBtnPushed(); // slot 14, 0x60011410
    virtual void OnBtnClicked(); // slot 15, 0x6000f040
    virtual void OnBtnDrag(); // slot 16, 0x600110c0
    virtual void OnBtnClicked(); // slot 17, 0x6000f040
    virtual void OnBtnClicked(); // slot 18, 0x6000f040
};

class __CHgChatInputBoxEdit@__CGraphicCtrl_ChatInputBox@CGraphicCtrl_MultiLineText : public __CHgChatInputBoxEdit, public CEdit, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60015044
    virtual void vfunc_1(); // slot 1, 0x6000e8a0
    virtual void OnSelfNotice(); // slot 2, 0x60003970
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
    virtual void OnCmdMsg(); // slot 5, 0x60014d02
    virtual void OnFinalRelease(); // slot 6, 0x60014d08
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0e
    virtual void GetDispatchIID(); // slot 8, 0x60014d14
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d1a
    virtual void GetTypeLibCache(); // slot 10, 0x60014d20
    virtual void GetTypeLib(); // slot 11, 0x60014d26
    virtual void GetMessageMap(); // slot 12, 0x6000e6b0
    virtual void GetCommandMap(); // slot 13, 0x60014d2c
    virtual void GetDispatchMap(); // slot 14, 0x60014d32
    virtual void GetConnectionMap(); // slot 15, 0x60014d38
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3e
    virtual void GetEventSinkMap(); // slot 17, 0x60014d44
    virtual void OnCreateAggregates(); // slot 18, 0x60014d4a
    virtual void GetInterfaceHook(); // slot 19, 0x60014d50
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d56
    virtual void GetConnectionHook(); // slot 21, 0x60014d5c
    virtual void PreSubclassWindow(); // slot 22, 0x60014d62
    virtual void Create(); // slot 23, 0x60014d68
    virtual void CreateEx(); // slot 24, 0x60014d6e
    virtual void CreateEx(); // slot 25, 0x60014d74
    virtual void DestroyWindow(); // slot 26, 0x60014d7a
    virtual void PreCreateWindow(); // slot 27, 0x60014ee2
    virtual void CalcWindowRect(); // slot 28, 0x60014d80
    virtual void GetMenu(); // slot 29, 0x60014d86
    virtual void SetMenu(); // slot 30, 0x60014d8c
    virtual void OnToolHitTest(); // slot 31, 0x60014d92
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d98
    virtual void WinHelpA(); // slot 33, 0x60014d9e
    virtual void HtmlHelpA(); // slot 34, 0x60014da4
    virtual void WinHelpInternal(); // slot 35, 0x60014daa
    virtual void ContinueModal(); // slot 36, 0x60014db0
    virtual void EndModalLoop(); // slot 37, 0x60014db6
    virtual void EnsureStdObj(); // slot 38, 0x60014dbc
    virtual void get_accParent(); // slot 39, 0x60014dc2
    virtual void get_accChildCount(); // slot 40, 0x60014dc8
    virtual void get_accChild(); // slot 41, 0x60014dce
    virtual void get_accName(); // slot 42, 0x60014dd4
    virtual void get_accValue(); // slot 43, 0x60014dda
    virtual void get_accDescription(); // slot 44, 0x60014de0
    virtual void get_accRole(); // slot 45, 0x60014de6
    virtual void get_accState(); // slot 46, 0x60014dec
    virtual void get_accHelp(); // slot 47, 0x60014df2
    virtual void get_accHelpTopic(); // slot 48, 0x60014df8
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfe
    virtual void get_accFocus(); // slot 50, 0x60014e04
    virtual void get_accSelection(); // slot 51, 0x60014e0a
    virtual void get_accDefaultAction(); // slot 52, 0x60014e10
    virtual void accSelect(); // slot 53, 0x60014e16
    virtual void accLocation(); // slot 54, 0x60014e1c
    virtual void accNavigate(); // slot 55, 0x60014e22
    virtual void accHitTest(); // slot 56, 0x60014e28
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2e
    virtual void put_accName(); // slot 58, 0x60014e34
    virtual void put_accValue(); // slot 59, 0x60014e3a
    virtual void SetProxy(); // slot 60, 0x60014e40
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e46
    virtual void OnCommand(); // slot 62, 0x60014e4c
    virtual void OnNotify(); // slot 63, 0x60014e52
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e58
    virtual void OnSelfNotice(); // slot 65, 0x60003970
    virtual void vfunc_66(); // slot 66, 0x60001900
    virtual void vfunc_67(); // slot 67, 0x60001910
    virtual void PreTranslateMessage(); // slot 68, 0x6000e930
    virtual void OnAmbientProperty(); // slot 69, 0x60014e64
    virtual void WindowProc(); // slot 70, 0x60014e6a
    virtual void OnWndMsg(); // slot 71, 0x6000e6c0
    virtual void DefWindowProcA(); // slot 72, 0x60014e76
    virtual void PostNcDestroy(); // slot 73, 0x60014e7c
    virtual void OnChildNotify(); // slot 74, 0x60014e82
    virtual void CheckAutoCenter(); // slot 75, 0x60014e88
    virtual void IsFrameWnd(); // slot 76, 0x60014e8e
    virtual void CreateControlContainer(); // slot 77, 0x60014e94
    virtual void CreateControlSite(); // slot 78, 0x60014e9a
    virtual void SetOccDialogInfo(); // slot 79, 0x60014ea0
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea6
    virtual void _PreTranslateMessage_ReturnKeyDown(); // slot 81, 0x6000e550
};

class __CHgChatLine@CGraphicCtrl_MultiLineText : public __CHgChatLine {
public:
    virtual void vfunc_0(); // slot 0, 0x6000d6a0
};

class __CWndForInput : public CStatic, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60014ed6
    virtual void vfunc_1(); // slot 1, 0x60003870
    virtual void OnSelfNotice(); // slot 2, 0x60003970
    virtual void OnBtnClicked(); // slot 3, 0x6000f040
    virtual void OnSelfNotice(); // slot 4, 0x60003970
    virtual void OnCmdMsg(); // slot 5, 0x60014d02
    virtual void OnFinalRelease(); // slot 6, 0x60014d08
    virtual void IsInvokeAllowed(); // slot 7, 0x60014d0e
    virtual void GetDispatchIID(); // slot 8, 0x60014d14
    virtual void GetTypeInfoCount(); // slot 9, 0x60014d1a
    virtual void GetTypeLibCache(); // slot 10, 0x60014d20
    virtual void GetTypeLib(); // slot 11, 0x60014d26
    virtual void vfunc_12(); // slot 12, 0x60006010
    virtual void GetCommandMap(); // slot 13, 0x60014d2c
    virtual void GetDispatchMap(); // slot 14, 0x60014d32
    virtual void GetConnectionMap(); // slot 15, 0x60014d38
    virtual void GetInterfaceMap(); // slot 16, 0x60014d3e
    virtual void GetEventSinkMap(); // slot 17, 0x60014d44
    virtual void OnCreateAggregates(); // slot 18, 0x60014d4a
    virtual void GetInterfaceHook(); // slot 19, 0x60014d50
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60014d56
    virtual void GetConnectionHook(); // slot 21, 0x60014d5c
    virtual void PreSubclassWindow(); // slot 22, 0x60014d62
    virtual void Create(); // slot 23, 0x60014d68
    virtual void CreateEx(); // slot 24, 0x60014d6e
    virtual void CreateEx(); // slot 25, 0x60014d74
    virtual void DestroyWindow(); // slot 26, 0x60014d7a
    virtual void PreCreateWindow(); // slot 27, 0x60014ee2
    virtual void CalcWindowRect(); // slot 28, 0x60014d80
    virtual void GetMenu(); // slot 29, 0x60014d86
    virtual void SetMenu(); // slot 30, 0x60014d8c
    virtual void OnToolHitTest(); // slot 31, 0x60014d92
    virtual void GetScrollBarCtrl(); // slot 32, 0x60014d98
    virtual void WinHelpA(); // slot 33, 0x60014d9e
    virtual void HtmlHelpA(); // slot 34, 0x60014da4
    virtual void WinHelpInternal(); // slot 35, 0x60014daa
    virtual void ContinueModal(); // slot 36, 0x60014db0
    virtual void EndModalLoop(); // slot 37, 0x60014db6
    virtual void EnsureStdObj(); // slot 38, 0x60014dbc
    virtual void get_accParent(); // slot 39, 0x60014dc2
    virtual void get_accChildCount(); // slot 40, 0x60014dc8
    virtual void get_accChild(); // slot 41, 0x60014dce
    virtual void get_accName(); // slot 42, 0x60014dd4
    virtual void get_accValue(); // slot 43, 0x60014dda
    virtual void get_accDescription(); // slot 44, 0x60014de0
    virtual void get_accRole(); // slot 45, 0x60014de6
    virtual void get_accState(); // slot 46, 0x60014dec
    virtual void get_accHelp(); // slot 47, 0x60014df2
    virtual void get_accHelpTopic(); // slot 48, 0x60014df8
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60014dfe
    virtual void get_accFocus(); // slot 50, 0x60014e04
    virtual void get_accSelection(); // slot 51, 0x60014e0a
    virtual void get_accDefaultAction(); // slot 52, 0x60014e10
    virtual void accSelect(); // slot 53, 0x60014e16
    virtual void accLocation(); // slot 54, 0x60014e1c
    virtual void accNavigate(); // slot 55, 0x60014e22
    virtual void accHitTest(); // slot 56, 0x60014e28
    virtual void accDoDefaultAction(); // slot 57, 0x60014e2e
    virtual void put_accName(); // slot 58, 0x60014e34
    virtual void put_accValue(); // slot 59, 0x60014e3a
    virtual void SetProxy(); // slot 60, 0x60014e40
    virtual void CreateAccessibleProxy(); // slot 61, 0x60014e46
    virtual void OnCommand(); // slot 62, 0x60014e4c
    virtual void OnNotify(); // slot 63, 0x60014e52
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60014e58
    virtual void OnSelfNotice(); // slot 65, 0x60003970
    virtual void vfunc_66(); // slot 66, 0x60001900
    virtual void vfunc_67(); // slot 67, 0x60001910
    virtual void vfunc_68(); // slot 68, 0x600052e0
    virtual void OnAmbientProperty(); // slot 69, 0x60014e64
    virtual void WindowProc(); // slot 70, 0x60014e6a
    virtual void OnWndMsg(); // slot 71, 0x60014e70
    virtual void DefWindowProcA(); // slot 72, 0x60014e76
    virtual void PostNcDestroy(); // slot 73, 0x60014e7c
    virtual void OnChildNotify(); // slot 74, 0x60014ee8
    virtual void CheckAutoCenter(); // slot 75, 0x60014e88
    virtual void IsFrameWnd(); // slot 76, 0x60014e8e
    virtual void CreateControlContainer(); // slot 77, 0x60014e94
    virtual void CreateControlSite(); // slot 78, 0x60014e9a
    virtual void SetOccDialogInfo(); // slot 79, 0x60014ea0
    virtual void GetOccDialogInfo(); // slot 80, 0x60014ea6
    virtual void Create(); // slot 81, 0x60014eee
    virtual void DrawItem(); // slot 82, 0x60014ef4
    virtual void vfunc_83(); // slot 83, 0x60003910
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x600033e0
    virtual void what(); // slot 1, 0x60015522
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60003ba0
    virtual void vfunc_1(); // slot 1, 0x60003470
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60003ba0
    virtual void vfunc_1(); // slot 1, 0x60003470
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60003ba0
    virtual void vfunc_1(); // slot 1, 0x60003470
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x60015340
};

}  // namespace HgAniGm3
