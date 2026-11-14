// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace GcDxbase {

class ?$CCompositeHolder;
class ?$CMFunctor;
class CBaseApp;
class CBaseLobbyView;
class CChannelLobbyView;
class CCmdTarget;
class CComponent;
class CControlBase;
class CFrameWnd;
class CGameLobbyView;
class CGameWnd;
class CMainFrameWnd;
class CObject;
class CVisual;
class CWinApp;
class CWinThread;
class CWnd;
class IComponent;
class IFunctor;

class ?$CMFunctor@VCGcDxChannelLobbyView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x10001cb0
    virtual void vfunc_1(); // slot 1, 0x100019c0
    virtual void vfunc_2(); // slot 2, 0x100019a0
};

class ?$CMFunctor@VCGcDxGameLobbyView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x10001cb0
    virtual void vfunc_1(); // slot 1, 0x10001cc0
    virtual void vfunc_2(); // slot 2, 0x100019a0
};

class ?$CMFunctor@VCGcDxMainFrameView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x10001cb0
    virtual void vfunc_1(); // slot 1, 0x10002c60
    virtual void vfunc_2(); // slot 2, 0x100019a0
};

class CChannelMainWnd : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x100035d6
    virtual void vfunc_1(); // slot 1, 0x100016a0
    virtual void vfunc_2(); // slot 2, 0x10001670
    virtual void vfunc_3(); // slot 3, 0x10001330
    virtual void vfunc_4(); // slot 4, 0x10001670
    virtual void OnCmdMsg(); // slot 5, 0x10003828
    virtual void OnFinalRelease(); // slot 6, 0x10003912
    virtual void IsInvokeAllowed(); // slot 7, 0x10003834
    virtual void GetDispatchIID(); // slot 8, 0x1000383a
    virtual void GetTypeInfoCount(); // slot 9, 0x10003840
    virtual void GetTypeLibCache(); // slot 10, 0x10003846
    virtual void GetTypeLib(); // slot 11, 0x1000384c
    virtual void GetMessageMap(); // slot 12, 0x100035dc
    virtual void GetCommandMap(); // slot 13, 0x10003852
    virtual void GetDispatchMap(); // slot 14, 0x10003858
    virtual void GetConnectionMap(); // slot 15, 0x1000385e
    virtual void GetInterfaceMap(); // slot 16, 0x10003918
    virtual void GetEventSinkMap(); // slot 17, 0x1000386a
    virtual void OnCreateAggregates(); // slot 18, 0x10003870
    virtual void GetInterfaceHook(); // slot 19, 0x10003876
    virtual void GetExtraConnectionPoints(); // slot 20, 0x1000387c
    virtual void GetConnectionHook(); // slot 21, 0x10003882
    virtual void PreSubclassWindow(); // slot 22, 0x1000391e
    virtual void Create(); // slot 23, 0x10003924
    virtual void CreateEx(); // slot 24, 0x1000392a
    virtual void CreateEx(); // slot 25, 0x10003930
    virtual void DestroyWindow(); // slot 26, 0x10003936
    virtual void PreCreateWindow(); // slot 27, 0x1000393c
    virtual void CalcWindowRect(); // slot 28, 0x10003942
    virtual void GetMenu(); // slot 29, 0x10003948
    virtual void SetMenu(); // slot 30, 0x1000394e
    virtual void OnToolHitTest(); // slot 31, 0x10003954
    virtual void GetScrollBarCtrl(); // slot 32, 0x1000395a
    virtual void WinHelpA(); // slot 33, 0x10003960
    virtual void HtmlHelpA(); // slot 34, 0x10003966
    virtual void WinHelpInternal(); // slot 35, 0x1000396c
    virtual void ContinueModal(); // slot 36, 0x10003972
    virtual void EndModalLoop(); // slot 37, 0x10003978
    virtual void EnsureStdObj(); // slot 38, 0x1000397e
    virtual void get_accParent(); // slot 39, 0x10003984
    virtual void get_accChildCount(); // slot 40, 0x1000398a
    virtual void get_accChild(); // slot 41, 0x10003990
    virtual void get_accName(); // slot 42, 0x10003996
    virtual void get_accValue(); // slot 43, 0x1000399c
    virtual void get_accDescription(); // slot 44, 0x100039a2
    virtual void get_accRole(); // slot 45, 0x100039a8
    virtual void get_accState(); // slot 46, 0x100039ae
    virtual void get_accHelp(); // slot 47, 0x100039b4
    virtual void get_accHelpTopic(); // slot 48, 0x100039ba
    virtual void get_accKeyboardShortcut(); // slot 49, 0x100039c0
    virtual void get_accFocus(); // slot 50, 0x100039c6
    virtual void get_accSelection(); // slot 51, 0x100039cc
    virtual void get_accDefaultAction(); // slot 52, 0x100039d2
    virtual void accSelect(); // slot 53, 0x100039d8
    virtual void accLocation(); // slot 54, 0x100039de
    virtual void accNavigate(); // slot 55, 0x100039e4
    virtual void accHitTest(); // slot 56, 0x100039ea
    virtual void accDoDefaultAction(); // slot 57, 0x100039f0
    virtual void put_accName(); // slot 58, 0x100039f6
    virtual void put_accValue(); // slot 59, 0x100039fc
    virtual void SetProxy(); // slot 60, 0x10003a02
    virtual void CreateAccessibleProxy(); // slot 61, 0x10003a08
    virtual void OnCommand(); // slot 62, 0x10003a0e
    virtual void OnNotify(); // slot 63, 0x10003a14
    virtual void GetSuperWndProcAddr(); // slot 64, 0x10003a1a
    virtual void vfunc_65(); // slot 65, 0x10001670
    virtual void vfunc_66(); // slot 66, 0x10001680
    virtual void vfunc_67(); // slot 67, 0x10001690
    virtual void PreTranslateMessage(); // slot 68, 0x10003a20
    virtual void OnAmbientProperty(); // slot 69, 0x10003a26
    virtual void WindowProc(); // slot 70, 0x10003a2c
    virtual void OnWndMsg(); // slot 71, 0x10003a32
    virtual void DefWindowProcA(); // slot 72, 0x10003a38
    virtual void PostNcDestroy(); // slot 73, 0x10003a3e
    virtual void OnChildNotify(); // slot 74, 0x10003a44
    virtual void CheckAutoCenter(); // slot 75, 0x10003a4a
    virtual void IsFrameWnd(); // slot 76, 0x10003a50
    virtual void CreateControlContainer(); // slot 77, 0x10003a56
    virtual void CreateControlSite(); // slot 78, 0x10003a5c
    virtual void SetOccDialogInfo(); // slot 79, 0x10003a62
    virtual void GetOccDialogInfo(); // slot 80, 0x10003a68
    virtual void InitiateChannelMainWnd(); // slot 81, 0x100035e2
    virtual void CreateRoomListCtrl(); // slot 82, 0x100035e8
    virtual void CreateMyInfoCtrl(); // slot 83, 0x100035ee
    virtual void CreateTabCtrl(); // slot 84, 0x100035f4
    virtual void CreateNoticeWnd(); // slot 85, 0x100035fa
    virtual void CreateChannelButton(); // slot 86, 0x10003600
    virtual void CrateTabMemberList(); // slot 87, 0x10003606
    virtual void AddTab(); // slot 88, 0x1000360c
    virtual void AttachScrollCtrl(); // slot 89, 0x10003612
    virtual void AttachListControl(); // slot 90, 0x10003618
    virtual void AttachHtmlCtrl(); // slot 91, 0x1000361e
    virtual void AttachBtn(); // slot 92, 0x10003624
    virtual void CreateMemberListCtrl(); // slot 93, 0x1000362a
    virtual void CreateGuildListCtrl(); // slot 94, 0x10003630
    virtual void CreateFriendListCtrl(); // slot 95, 0x10003636
    virtual void SortRoomList(); // slot 96, 0x1000363c
};

class CGcDxChannelLobbyView : public CChannelLobbyView, public CBaseLobbyView, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x100019e0
    virtual void OnDetached(); // slot 1, 0x1000353a
    virtual void vfunc_2(); // slot 2, 0x10001180
    virtual void Msg_GetWindow(); // slot 3, 0x1000352e
    virtual void Msg_UpdateUIFromXML(); // slot 4, 0x10003540
    virtual void OnDblClickRoomList(); // slot 5, 0x10003546
    virtual void OnClickChangeChannelBtn(); // slot 6, 0x1000354c
    virtual void OnClickCreateRoomBtn(); // slot 7, 0x10003552
    virtual void OnClickJoinRoomBtn(); // slot 8, 0x10003558
    virtual void OnClickViewRoomBtn(); // slot 9, 0x1000355e
    virtual void OnClickRoomAvatar(); // slot 10, 0x10003564
    virtual void OnDblClickMemberList(); // slot 11, 0x1000356a
    virtual void OnClickDirectStartBtn(); // slot 12, 0x10003570
    virtual void OnClickRecommendedGameBtn(); // slot 13, 0x10003576
    virtual void OnClickExitBtn(); // slot 14, 0x1000357c
    virtual void OnClickAutoCreateRoomBtn(); // slot 15, 0x10003582
    virtual void OnGetItemState(); // slot 16, 0x10003588
    virtual void OnCloseItemWebDlg(); // slot 17, 0x1000358e
    virtual void OnClickShowItemWebBtn(); // slot 18, 0x10003594
    virtual void OnClickHappyBeanBtn(); // slot 19, 0x1000359a
    virtual void OnClickGuildCtrl(); // slot 20, 0x100035a0
    virtual void OnClickThermometer(); // slot 21, 0x100035a6
    virtual void OnClickSPCRoom(); // slot 22, 0x100035ac
    virtual void OnClickMemberListTabFilterBtn(); // slot 23, 0x100035b2
    virtual void OnClickShowEmptyRoomBtn(); // slot 24, 0x100035b8
    virtual void OnClickShowRoomNumOrderBtn(); // slot 25, 0x100035be
    virtual void OnClickSearchRoomBtn(); // slot 26, 0x100035c4
};

class CGcDxGameLobbyView : public CGameLobbyView, public CBaseLobbyView, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x10001ce0
    virtual void OnDetached(); // slot 1, 0x10003528
    virtual void vfunc_2(); // slot 2, 0x100010e0
    virtual void Msg_GetWindow(); // slot 3, 0x1000352e
    virtual void Msg_UpdateUIFromXML(); // slot 4, 0x10001ac0
    virtual void OnClickExitGameBtn(); // slot 5, 0x10003534
};

class CGcDxGameWnd : public CGameWnd, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x10001e60
    virtual void vfunc_1(); // slot 1, 0x10002090
    virtual void vfunc_2(); // slot 2, 0x10001670
    virtual void vfunc_3(); // slot 3, 0x10001330
    virtual void vfunc_4(); // slot 4, 0x10001670
    virtual void OnCmdMsg(); // slot 5, 0x10003828
    virtual void OnFinalRelease(); // slot 6, 0x10003912
    virtual void IsInvokeAllowed(); // slot 7, 0x10003834
    virtual void GetDispatchIID(); // slot 8, 0x1000383a
    virtual void GetTypeInfoCount(); // slot 9, 0x10003840
    virtual void GetTypeLibCache(); // slot 10, 0x10003846
    virtual void GetTypeLib(); // slot 11, 0x1000384c
    virtual void GetMessageMap(); // slot 12, 0x10002830
    virtual void GetCommandMap(); // slot 13, 0x10003852
    virtual void GetDispatchMap(); // slot 14, 0x10003858
    virtual void GetConnectionMap(); // slot 15, 0x1000385e
    virtual void GetInterfaceMap(); // slot 16, 0x10003918
    virtual void GetEventSinkMap(); // slot 17, 0x1000386a
    virtual void OnCreateAggregates(); // slot 18, 0x10003870
    virtual void GetInterfaceHook(); // slot 19, 0x10003876
    virtual void GetExtraConnectionPoints(); // slot 20, 0x1000387c
    virtual void GetConnectionHook(); // slot 21, 0x10003882
    virtual void PreSubclassWindow(); // slot 22, 0x1000391e
    virtual void Create(); // slot 23, 0x10003924
    virtual void CreateEx(); // slot 24, 0x1000392a
    virtual void CreateEx(); // slot 25, 0x10003930
    virtual void DestroyWindow(); // slot 26, 0x10003936
    virtual void PreCreateWindow(); // slot 27, 0x100036c0
    virtual void CalcWindowRect(); // slot 28, 0x10003942
    virtual void GetMenu(); // slot 29, 0x10003948
    virtual void SetMenu(); // slot 30, 0x1000394e
    virtual void OnToolHitTest(); // slot 31, 0x10003954
    virtual void GetScrollBarCtrl(); // slot 32, 0x1000395a
    virtual void WinHelpA(); // slot 33, 0x10003960
    virtual void HtmlHelpA(); // slot 34, 0x10003966
    virtual void WinHelpInternal(); // slot 35, 0x1000396c
    virtual void ContinueModal(); // slot 36, 0x10003972
    virtual void EndModalLoop(); // slot 37, 0x10003978
    virtual void EnsureStdObj(); // slot 38, 0x1000397e
    virtual void get_accParent(); // slot 39, 0x10003984
    virtual void get_accChildCount(); // slot 40, 0x1000398a
    virtual void get_accChild(); // slot 41, 0x10003990
    virtual void get_accName(); // slot 42, 0x10003996
    virtual void get_accValue(); // slot 43, 0x1000399c
    virtual void get_accDescription(); // slot 44, 0x100039a2
    virtual void get_accRole(); // slot 45, 0x100039a8
    virtual void get_accState(); // slot 46, 0x100039ae
    virtual void get_accHelp(); // slot 47, 0x100039b4
    virtual void get_accHelpTopic(); // slot 48, 0x100039ba
    virtual void get_accKeyboardShortcut(); // slot 49, 0x100039c0
    virtual void get_accFocus(); // slot 50, 0x100039c6
    virtual void get_accSelection(); // slot 51, 0x100039cc
    virtual void get_accDefaultAction(); // slot 52, 0x100039d2
    virtual void accSelect(); // slot 53, 0x100039d8
    virtual void accLocation(); // slot 54, 0x100039de
    virtual void accNavigate(); // slot 55, 0x100039e4
    virtual void accHitTest(); // slot 56, 0x100039ea
    virtual void accDoDefaultAction(); // slot 57, 0x100039f0
    virtual void put_accName(); // slot 58, 0x100039f6
    virtual void put_accValue(); // slot 59, 0x100039fc
    virtual void SetProxy(); // slot 60, 0x10003a02
    virtual void CreateAccessibleProxy(); // slot 61, 0x10003a08
    virtual void OnCommand(); // slot 62, 0x10003a0e
    virtual void OnNotify(); // slot 63, 0x10003a14
    virtual void GetSuperWndProcAddr(); // slot 64, 0x10003a1a
    virtual void vfunc_65(); // slot 65, 0x10001670
    virtual void vfunc_66(); // slot 66, 0x10001680
    virtual void vfunc_67(); // slot 67, 0x10001690
    virtual void PreTranslateMessage(); // slot 68, 0x10003a20
    virtual void OnAmbientProperty(); // slot 69, 0x10003a26
    virtual void WindowProc(); // slot 70, 0x100021d0
    virtual void OnWndMsg(); // slot 71, 0x10003a32
    virtual void DefWindowProcA(); // slot 72, 0x10003a38
    virtual void PostNcDestroy(); // slot 73, 0x10003a3e
    virtual void OnChildNotify(); // slot 74, 0x10003a44
    virtual void CheckAutoCenter(); // slot 75, 0x10003a4a
    virtual void IsFrameWnd(); // slot 76, 0x10003a50
    virtual void CreateControlContainer(); // slot 77, 0x10003a56
    virtual void CreateControlSite(); // slot 78, 0x10003a5c
    virtual void SetOccDialogInfo(); // slot 79, 0x10003a62
    virtual void GetOccDialogInfo(); // slot 80, 0x10003a68
    virtual void DisplayChatMessage(); // slot 81, 0x100036c6
    virtual void DisplayNoticeMessage(); // slot 82, 0x100036cc
    virtual void DisplayStatusMessage(); // slot 83, 0x100036d2
    virtual void CaptureGameScreen(); // slot 84, 0x100036d8
    virtual void DoExActive(); // slot 85, 0x10001f10
    virtual void FlipScreen(); // slot 86, 0x100036de
    virtual void ExitGameRoom(); // slot 87, 0x100036e4
    virtual void AccuseUser(); // slot 88, 0x100036ea
    virtual void purecall(); // slot 89, 0x10003d52
    virtual void GetGameChatContent(); // slot 90, 0x100036f0
    virtual void UpdateChanceInfo(); // slot 91, 0x100036f6
    virtual void CreateCaptionButtons(); // slot 92, 0x100036fc
    virtual void purecall(); // slot 93, 0x10003d52
    virtual void purecall(); // slot 94, 0x10003d52
    virtual void purecall(); // slot 95, 0x10003d52
    virtual void purecall(); // slot 96, 0x10003d52
    virtual void purecall(); // slot 97, 0x10003d52
    virtual void ShowInviteGameToChnlDlg(); // slot 98, 0x10003702
    virtual void StopHostBanishCheck(); // slot 99, 0x10003708
    virtual void StartHostBanishCheck(); // slot 100, 0x1000370e
    virtual void GetGameOptionFromRegistry(); // slot 101, 0x10003714
    virtual void PlayEventSound(); // slot 102, 0x1000371a
    virtual void IsActivate(); // slot 103, 0x10003720
    virtual void ProcessItemProvokeCommand(); // slot 104, 0x10003726
    virtual void HasRightOfBanish(); // slot 105, 0x1000372c
    virtual void Evt_OnAddRoomMember(); // slot 106, 0x10003732
    virtual void Evt_OnDeleteRoomMember(); // slot 107, 0x10003738
    virtual void Evt_OnRoomMemberList(); // slot 108, 0x1000373e
    virtual void Evt_OnModifyRoomMemberInfo(); // slot 109, 0x10003744
    virtual void Evt_OnEnableHostBanish(); // slot 110, 0x1000374a
    virtual void Evt_OnTimeHostBanish(); // slot 111, 0x10003750
    virtual void Evt_OnGameStatusMessage(); // slot 112, 0x10003756
    virtual void Evt_OnChatString(); // slot 113, 0x1000375c
    virtual void Evt_OnReqBanishMember(); // slot 114, 0x10003762
    virtual void Evt_OnClickBanishMember(); // slot 115, 0x10003768
    virtual void Evt_OnHostBanishCheck(); // slot 116, 0x1000376e
    virtual void Evt_OnConnectTypeError(); // slot 117, 0x10003774
    virtual void Evt_OnItemReserveChance(); // slot 118, 0x1000377a
    virtual void Evt_OnStartNewGame(); // slot 119, 0x10003780
    virtual void Evt_OnRoomEvent(); // slot 120, 0x10003786
    virtual void Evt_OnAltF4KeyDown(); // slot 121, 0x1000378c
    virtual void Evt_ChannelLobby_OnUpdateNotice(); // slot 122, 0x10003792
    virtual void Evt_OnReserveBanish(); // slot 123, 0x10003798
    virtual void Evt_OnExitGameDuetoShutdown(); // slot 124, 0x1000379e
    virtual void Evt_OnGetShutdownTime(); // slot 125, 0x100037a4
    virtual void Net_SocketClose(); // slot 126, 0x100037aa
    virtual void Net_commandTimeBanish(); // slot 127, 0x100037b0
};

class CGcDxMainFrameView : public CMainFrameView, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x10002c80
    virtual void OnDetached(); // slot 1, 0x10003690
    virtual void OnAltF4KeyDown(); // slot 2, 0x10003696
    virtual void OnClickExitButton(); // slot 3, 0x1000369c
    virtual void OnToggleScreenButton(); // slot 4, 0x100036a2
    virtual void OnClickMinimizeButton(); // slot 5, 0x100036a8
    virtual void OnClickAccuseButton(); // slot 6, 0x100036ae
    virtual void OnClickInviteButton(); // slot 7, 0x100036b4
    virtual void OnClickOptionButton(); // slot 8, 0x100036ba
    virtual void vfunc_9(); // slot 9, 0x10002ba0
};

class CGcDxMainFrameWnd : public CMainFrameWnd, public CFrameWnd, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x10002ce0
    virtual void vfunc_1(); // slot 1, 0x10003100
    virtual void vfunc_2(); // slot 2, 0x10001670
    virtual void vfunc_3(); // slot 3, 0x10001330
    virtual void vfunc_4(); // slot 4, 0x10001670
    virtual void OnCmdMsg(); // slot 5, 0x100037bc
    virtual void OnFinalRelease(); // slot 6, 0x10003912
    virtual void IsInvokeAllowed(); // slot 7, 0x10003834
    virtual void GetDispatchIID(); // slot 8, 0x1000383a
    virtual void GetTypeInfoCount(); // slot 9, 0x10003840
    virtual void GetTypeLibCache(); // slot 10, 0x10003846
    virtual void GetTypeLib(); // slot 11, 0x1000384c
    virtual void GetMessageMap(); // slot 12, 0x100033e0
    virtual void GetCommandMap(); // slot 13, 0x10003852
    virtual void GetDispatchMap(); // slot 14, 0x10003858
    virtual void GetConnectionMap(); // slot 15, 0x1000385e
    virtual void GetInterfaceMap(); // slot 16, 0x10003918
    virtual void GetEventSinkMap(); // slot 17, 0x1000386a
    virtual void OnCreateAggregates(); // slot 18, 0x10003870
    virtual void GetInterfaceHook(); // slot 19, 0x10003876
    virtual void GetExtraConnectionPoints(); // slot 20, 0x1000387c
    virtual void GetConnectionHook(); // slot 21, 0x10003882
    virtual void PreSubclassWindow(); // slot 22, 0x1000391e
    virtual void Create(); // slot 23, 0x10003924
    virtual void CreateEx(); // slot 24, 0x1000392a
    virtual void CreateEx(); // slot 25, 0x10003930
    virtual void DestroyWindow(); // slot 26, 0x10003936
    virtual void PreCreateWindow(); // slot 27, 0x100037c2
    virtual void CalcWindowRect(); // slot 28, 0x10003942
    virtual void GetMenu(); // slot 29, 0x10003aaa
    virtual void SetMenu(); // slot 30, 0x10003ab0
    virtual void OnToolHitTest(); // slot 31, 0x10003954
    virtual void GetScrollBarCtrl(); // slot 32, 0x1000395a
    virtual void WinHelpA(); // slot 33, 0x10003960
    virtual void HtmlHelpA(); // slot 34, 0x10003966
    virtual void WinHelpInternal(); // slot 35, 0x1000396c
    virtual void ContinueModal(); // slot 36, 0x10003972
    virtual void EndModalLoop(); // slot 37, 0x10003978
    virtual void EnsureStdObj(); // slot 38, 0x1000397e
    virtual void get_accParent(); // slot 39, 0x10003984
    virtual void get_accChildCount(); // slot 40, 0x1000398a
    virtual void get_accChild(); // slot 41, 0x10003990
    virtual void get_accName(); // slot 42, 0x10003996
    virtual void get_accValue(); // slot 43, 0x1000399c
    virtual void get_accDescription(); // slot 44, 0x100039a2
    virtual void get_accRole(); // slot 45, 0x100039a8
    virtual void get_accState(); // slot 46, 0x100039ae
    virtual void get_accHelp(); // slot 47, 0x100039b4
    virtual void get_accHelpTopic(); // slot 48, 0x100039ba
    virtual void get_accKeyboardShortcut(); // slot 49, 0x100039c0
    virtual void get_accFocus(); // slot 50, 0x100039c6
    virtual void get_accSelection(); // slot 51, 0x100039cc
    virtual void get_accDefaultAction(); // slot 52, 0x100039d2
    virtual void accSelect(); // slot 53, 0x100039d8
    virtual void accLocation(); // slot 54, 0x100039de
    virtual void accNavigate(); // slot 55, 0x100039e4
    virtual void accHitTest(); // slot 56, 0x100039ea
    virtual void accDoDefaultAction(); // slot 57, 0x100039f0
    virtual void put_accName(); // slot 58, 0x100039f6
    virtual void put_accValue(); // slot 59, 0x100039fc
    virtual void SetProxy(); // slot 60, 0x10003a02
    virtual void CreateAccessibleProxy(); // slot 61, 0x10003a08
    virtual void OnCommand(); // slot 62, 0x10003ab6
    virtual void OnNotify(); // slot 63, 0x10003a14
    virtual void GetSuperWndProcAddr(); // slot 64, 0x10003a1a
    virtual void vfunc_65(); // slot 65, 0x10001670
    virtual void BeginModalState(); // slot 66, 0x10003abc
    virtual void EndModalState(); // slot 67, 0x10003ac2
    virtual void PreTranslateMessage(); // slot 68, 0x100037c8
    virtual void OnAmbientProperty(); // slot 69, 0x10003a26
    virtual void WindowProc(); // slot 70, 0x10002d50
    virtual void OnWndMsg(); // slot 71, 0x10003a32
    virtual void DefWindowProcA(); // slot 72, 0x10003a38
    virtual void PostNcDestroy(); // slot 73, 0x10003ac8
    virtual void OnChildNotify(); // slot 74, 0x10003a44
    virtual void CheckAutoCenter(); // slot 75, 0x10003a4a
    virtual void IsFrameWnd(); // slot 76, 0x10003ace
    virtual void CreateControlContainer(); // slot 77, 0x10003a56
    virtual void CreateControlSite(); // slot 78, 0x10003a5c
    virtual void SetOccDialogInfo(); // slot 79, 0x10003a62
    virtual void GetOccDialogInfo(); // slot 80, 0x10003a68
    virtual void Create(); // slot 81, 0x10003ad4
    virtual void LoadFrame(); // slot 82, 0x10003ada
    virtual void GetActiveDocument(); // slot 83, 0x10003ae0
    virtual void GetActiveFrame(); // slot 84, 0x10003ae6
    virtual void GetMessageString(); // slot 85, 0x10003aec
    virtual void RecalcLayout(); // slot 86, 0x10003af2
    virtual void ActivateFrame(); // slot 87, 0x10003af8
    virtual void SetMenuBarVisibility(); // slot 88, 0x10003afe
    virtual void GetMenuBarVisibility(); // slot 89, 0x10003b04
    virtual void SetMenuBarState(); // slot 90, 0x10003b0a
    virtual void GetMenuBarState(); // slot 91, 0x10003b10
    virtual void OnSetPreviewMode(); // slot 92, 0x10003b16
    virtual void GetMessageBar(); // slot 93, 0x10003b1c
    virtual void NegotiateBorderSpace(); // slot 94, 0x10003b22
    virtual void OnCreateClient(); // slot 95, 0x10003b28
    virtual void OnUpdateFrameTitle(); // slot 96, 0x10003b2e
    virtual void OnUpdateFrameMenu(); // slot 97, 0x10003b34
    virtual void GetDefaultAccelerator(); // slot 98, 0x10003b3a
    virtual void DelayUpdateFrameMenu(); // slot 99, 0x10003b40
    virtual void ExitHelpMode(); // slot 100, 0x10003b46
    virtual void OnShowMenuBar(); // slot 101, 0x10003b4c
    virtual void OnHideMenuBar(); // slot 102, 0x10003b52
    virtual void RegisterHandler(); // slot 103, 0x100037ce
    virtual void DisplayAdWnd(); // slot 104, 0x100037d4
    virtual void ShowGameRate(); // slot 105, 0x100037da
    virtual void GetTicket(); // slot 106, 0x100037e0
    virtual void RefreshCookie(); // slot 107, 0x100037e6
    virtual void OnTimer(); // slot 108, 0x10002da0
};

class CGcDxbaseApp : public CBaseApp, public CWinApp, public CWinThread, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x10003822
    virtual void vfunc_1(); // slot 1, 0x10001340
    virtual void vfunc_2(); // slot 2, 0x10001670
    virtual void vfunc_3(); // slot 3, 0x10001330
    virtual void vfunc_4(); // slot 4, 0x10001670
    virtual void OnCmdMsg(); // slot 5, 0x10003828
    virtual void OnFinalRelease(); // slot 6, 0x1000382e
    virtual void IsInvokeAllowed(); // slot 7, 0x10003834
    virtual void GetDispatchIID(); // slot 8, 0x1000383a
    virtual void GetTypeInfoCount(); // slot 9, 0x10003840
    virtual void GetTypeLibCache(); // slot 10, 0x10003846
    virtual void GetTypeLib(); // slot 11, 0x1000384c
    virtual void GetMessageMap(); // slot 12, 0x100034aa
    virtual void GetCommandMap(); // slot 13, 0x10003852
    virtual void GetDispatchMap(); // slot 14, 0x10003858
    virtual void GetConnectionMap(); // slot 15, 0x1000385e
    virtual void GetInterfaceMap(); // slot 16, 0x10003864
    virtual void GetEventSinkMap(); // slot 17, 0x1000386a
    virtual void OnCreateAggregates(); // slot 18, 0x10003870
    virtual void GetInterfaceHook(); // slot 19, 0x10003876
    virtual void GetExtraConnectionPoints(); // slot 20, 0x1000387c
    virtual void GetConnectionHook(); // slot 21, 0x10003882
    virtual void InitInstance(); // slot 22, 0x10001250
    virtual void Run(); // slot 23, 0x10003888
    virtual void PreTranslateMessage(); // slot 24, 0x10001300
    virtual void PumpMessage(); // slot 25, 0x1000388e
    virtual void OnIdle(); // slot 26, 0x100012e0
    virtual void IsIdleMessage(); // slot 27, 0x10003894
    virtual void ExitInstance(); // slot 28, 0x100012a0
    virtual void ProcessWndProcException(); // slot 29, 0x1000389a
    virtual void ProcessMessageFilter(); // slot 30, 0x100038a0
    virtual void GetMainWnd(); // slot 31, 0x100038a6
    virtual void Delete(); // slot 32, 0x100038ac
    virtual void InitLibId(); // slot 33, 0x100038b2
    virtual void Register(); // slot 34, 0x100038b8
    virtual void Unregister(); // slot 35, 0x100038be
    virtual void OpenDocumentFile(); // slot 36, 0x100038c4
    virtual void AddToRecentFileList(); // slot 37, 0x100038ca
    virtual void InitApplication(); // slot 38, 0x100038d0
    virtual void SaveAllModified(); // slot 39, 0x100038d6
    virtual void DoMessageBox(); // slot 40, 0x100038dc
    virtual void DoWaitCursor(); // slot 41, 0x100038e2
    virtual void OnDDECommand(); // slot 42, 0x100038e8
    virtual void WinHelpA(); // slot 43, 0x100038ee
    virtual void HtmlHelpA(); // slot 44, 0x100038f4
    virtual void WinHelpInternal(); // slot 45, 0x100038fa
    virtual void LoadAppLangResourceDLL(); // slot 46, 0x10003900
    virtual void LoadSysPolicies(); // slot 47, 0x10003906
    virtual void RegisterHandlers(); // slot 48, 0x100034b0
    virtual void LoadDefaultObjects(); // slot 49, 0x100016c0
    virtual void LoadViewObjects(); // slot 50, 0x100013b0
    virtual void RegWork_LoadFullScreenSetting(); // slot 51, 0x100034b6
    virtual void RegWork_SaveFullScreenSetting(); // slot 52, 0x100034bc
    virtual void RegWork_RegisterNotifyWnd(); // slot 53, 0x100034c2
    virtual void RegWork_EraseNotifyWnd(); // slot 54, 0x100034c8
    virtual void CheckTestMode(); // slot 55, 0x100034ce
    virtual void MakeFrameInstance(); // slot 56, 0x100034d4
    virtual void MakeGameInstance(); // slot 57, 0x100034da
    virtual void HookConfigLoader(); // slot 58, 0x100034e0
    virtual void CheckBipLog(); // slot 59, 0x100034e6
    virtual void _CheckCmdString(); // slot 60, 0x100034ec
    virtual void _CheckMutex(); // slot 61, 0x100034f2
    virtual void _CheckPlatformConverter(); // slot 62, 0x100034f8
    virtual void InitDX(); // slot 63, 0x100017d0
};

class CHanChatView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x100035ca
    virtual void OnDetached(); // slot 1, 0x100035d0
    virtual void vfunc_2(); // slot 2, 0x10001600
};

class CMainFrameView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x1000368a
    virtual void OnDetached(); // slot 1, 0x10003690
    virtual void OnAltF4KeyDown(); // slot 2, 0x10003696
    virtual void OnClickExitButton(); // slot 3, 0x1000369c
    virtual void OnToggleScreenButton(); // slot 4, 0x100036a2
    virtual void OnClickMinimizeButton(); // slot 5, 0x100036a8
    virtual void OnClickAccuseButton(); // slot 6, 0x100036ae
    virtual void OnClickInviteButton(); // slot 7, 0x100036b4
    virtual void OnClickOptionButton(); // slot 8, 0x100036ba
    virtual void vfunc_9(); // slot 9, 0x10001640
};

class CMiniChannelListView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x10003648
    virtual void OnDetached(); // slot 1, 0x1000364e
    virtual void OnClickRefreshBtn(); // slot 2, 0x10003654
    virtual void OnClickJoinBtn(); // slot 3, 0x1000365a
    virtual void OnClickExitBtn(); // slot 4, 0x10003660
    virtual void OnClickAutoJoinBtn(); // slot 5, 0x10003666
    virtual void OnClickGrpListBtn(); // slot 6, 0x1000366c
    virtual void OnClickChannelGrpLst(); // slot 7, 0x10003672
    virtual void OnClickChannelLst(); // slot 8, 0x10003678
    virtual void OnCheckEnterableState(); // slot 9, 0x1000367e
    virtual void vfunc_10(); // slot 10, 0x10001620
    virtual void SetMiniChannelListWnd(); // slot 11, 0x10003684
};

class CVisual@visual@neon : public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10001910
    virtual void Logic(); // slot 1, 0x1000340e
    virtual void Output(); // slot 2, 0x10003414
    virtual void BeforeRelease(); // slot 3, 0x1000341a
    virtual void OnAttached(); // slot 4, 0x10003420
    virtual void OnDetached(); // slot 5, 0x10003426
    virtual void OnActivate(); // slot 6, 0x1000342c
    virtual void OnSelect(); // slot 7, 0x10003432
    virtual void OnFocus(); // slot 8, 0x10003438
    virtual void IsIn(); // slot 9, 0x1000343e
    virtual void Clone(); // slot 10, 0x10003444
    virtual void Copy(); // slot 11, 0x1000344a
    virtual void IsMyIn(); // slot 12, 0x10003450
    virtual void IsChildIn(); // slot 13, 0x10003456
    virtual void SetEffect(); // slot 14, 0x1000345c
    virtual void SetEffectType(); // slot 15, 0x10003462
    virtual void SetClipRect(); // slot 16, 0x10003468
    virtual void SetLocalClipRect(); // slot 17, 0x1000346e
    virtual void GetPosX(); // slot 18, 0x10003474
    virtual void GetPosY(); // slot 19, 0x1000347a
    virtual void SetPosX(); // slot 20, 0x10003480
    virtual void SetPosY(); // slot 21, 0x10003486
    virtual void SetShowRef(); // slot 22, 0x1000348c
    virtual void SetInverse(); // slot 23, 0x10003492
    virtual void SetPivot(); // slot 24, 0x10003498
    virtual void SetUseParentRotation(); // slot 25, 0x1000349e
    virtual void GetAlpha(); // slot 26, 0x100034a4
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x10003b64
};

}  // namespace GcDxbase
