// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgBoard3 {

class ?$CTypedPtrList;
class ?$_CTypedPtrList;
class CCmdTarget;
class CDialog;
class CHgImage;
class CHgImageBase;
class CObject;
class CPtrList;
class CWnd;

class ?$CTypedPtrList@VCPtrList@@PAVCHgCellInfo@@ : public ?$CTypedPtrList, public ?$_CTypedPtrList, public CPtrList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b056e0
    virtual void vfunc_1(); // slot 1, 0x60b03fb0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
};

class ?$CTypedPtrList@VCPtrList@@PAVCHgSeqInfo@@ : public ?$CTypedPtrList, public ?$_CTypedPtrList, public CPtrList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b056e0
    virtual void vfunc_1(); // slot 1, 0x60b03fb0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
};

class ?$CTypedPtrList@VCPtrList@@PAVCPoint@@ : public ?$CTypedPtrList, public ?$_CTypedPtrList, public CPtrList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b056e0
    virtual void vfunc_1(); // slot 1, 0x60b03fb0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
};

class CFont : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b0569e
    virtual void vfunc_1(); // slot 1, 0x60b02bb0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
};

class CGdiObject : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b05698
    virtual void vfunc_1(); // slot 1, 0x60b02be0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
};

class CHgBoard : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b056b0
    virtual void vfunc_1(); // slot 1, 0x60b03fd0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
    virtual void Create(); // slot 5, 0x60b04240
    virtual void PutStone(); // slot 6, 0x60b04800
    virtual void PutSeqNo(); // slot 7, 0x60b04870
};

class CHgBoardEndInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x60b010e0
};

class CHgBoardGameInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x60b012e0
};

class CHgBoardGetReqDialog : public CDialog, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b05638
    virtual void vfunc_1(); // slot 1, 0x60b013b0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
    virtual void OnCmdMsg(); // slot 5, 0x60b0563e
    virtual void OnFinalRelease(); // slot 6, 0x60b055d8
    virtual void IsInvokeAllowed(); // slot 7, 0x60b055d2
    virtual void GetDispatchIID(); // slot 8, 0x60b055cc
    virtual void GetTypeInfoCount(); // slot 9, 0x60b055c6
    virtual void GetTypeLibCache(); // slot 10, 0x60b055c0
    virtual void GetTypeLib(); // slot 11, 0x60b055ba
    virtual void GetMessageMap(); // slot 12, 0x60b01660
    virtual void GetCommandMap(); // slot 13, 0x60b055ae
    virtual void GetDispatchMap(); // slot 14, 0x60b055a8
    virtual void GetConnectionMap(); // slot 15, 0x60b055a2
    virtual void GetInterfaceMap(); // slot 16, 0x60b0559c
    virtual void GetEventSinkMap(); // slot 17, 0x60b05596
    virtual void OnCreateAggregates(); // slot 18, 0x60b05590
    virtual void GetInterfaceHook(); // slot 19, 0x60b0558a
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60b05584
    virtual void GetConnectionHook(); // slot 21, 0x60b0557e
    virtual void PreSubclassWindow(); // slot 22, 0x60b05578
    virtual void Create(); // slot 23, 0x60b05572
    virtual void CreateEx(); // slot 24, 0x60b0556c
    virtual void CreateEx(); // slot 25, 0x60b05566
    virtual void DestroyWindow(); // slot 26, 0x60b05560
    virtual void PreCreateWindow(); // slot 27, 0x60b0555a
    virtual void CalcWindowRect(); // slot 28, 0x60b05554
    virtual void GetMenu(); // slot 29, 0x60b0554e
    virtual void SetMenu(); // slot 30, 0x60b05548
    virtual void OnToolHitTest(); // slot 31, 0x60b05542
    virtual void GetScrollBarCtrl(); // slot 32, 0x60b0553c
    virtual void WinHelpA(); // slot 33, 0x60b05536
    virtual void HtmlHelpA(); // slot 34, 0x60b05530
    virtual void WinHelpInternal(); // slot 35, 0x60b0552a
    virtual void ContinueModal(); // slot 36, 0x60b05524
    virtual void EndModalLoop(); // slot 37, 0x60b0551e
    virtual void EnsureStdObj(); // slot 38, 0x60b05518
    virtual void get_accParent(); // slot 39, 0x60b05512
    virtual void get_accChildCount(); // slot 40, 0x60b0550c
    virtual void get_accChild(); // slot 41, 0x60b05506
    virtual void get_accName(); // slot 42, 0x60b05500
    virtual void get_accValue(); // slot 43, 0x60b054fa
    virtual void get_accDescription(); // slot 44, 0x60b054f4
    virtual void get_accRole(); // slot 45, 0x60b054ee
    virtual void get_accState(); // slot 46, 0x60b054e8
    virtual void get_accHelp(); // slot 47, 0x60b054e2
    virtual void get_accHelpTopic(); // slot 48, 0x60b054dc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60b054d6
    virtual void get_accFocus(); // slot 50, 0x60b054d0
    virtual void get_accSelection(); // slot 51, 0x60b054ca
    virtual void get_accDefaultAction(); // slot 52, 0x60b054c4
    virtual void accSelect(); // slot 53, 0x60b054be
    virtual void accLocation(); // slot 54, 0x60b054b8
    virtual void accNavigate(); // slot 55, 0x60b054b2
    virtual void accHitTest(); // slot 56, 0x60b054ac
    virtual void accDoDefaultAction(); // slot 57, 0x60b054a6
    virtual void put_accName(); // slot 58, 0x60b054a0
    virtual void put_accValue(); // slot 59, 0x60b0549a
    virtual void SetProxy(); // slot 60, 0x60b05494
    virtual void CreateAccessibleProxy(); // slot 61, 0x60b0548e
    virtual void OnCommand(); // slot 62, 0x60b05488
    virtual void OnNotify(); // slot 63, 0x60b05482
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60b0547c
    virtual void DoDataExchange(); // slot 65, 0x60b01630
    virtual void vfunc_66(); // slot 66, 0x60b019e0
    virtual void vfunc_67(); // slot 67, 0x60b019f0
    virtual void PreTranslateMessage(); // slot 68, 0x60b05644
    virtual void OnAmbientProperty(); // slot 69, 0x60b05470
    virtual void WindowProc(); // slot 70, 0x60b0546a
    virtual void OnWndMsg(); // slot 71, 0x60b05464
    virtual void DefWindowProcA(); // slot 72, 0x60b0545e
    virtual void PostNcDestroy(); // slot 73, 0x60b05458
    virtual void OnChildNotify(); // slot 74, 0x60b05452
    virtual void CheckAutoCenter(); // slot 75, 0x60b0564a
    virtual void IsFrameWnd(); // slot 76, 0x60b05446
    virtual void CreateControlContainer(); // slot 77, 0x60b05440
    virtual void CreateControlSite(); // slot 78, 0x60b0543a
    virtual void SetOccDialogInfo(); // slot 79, 0x60b05650
    virtual void GetOccDialogInfo(); // slot 80, 0x60b05656
    virtual void vfunc_81(); // slot 81, 0x60b01990
    virtual void Create(); // slot 82, 0x60b0565c
    virtual void CreateIndirect(); // slot 83, 0x60b05662
    virtual void CreateIndirect(); // slot 84, 0x60b05668
    virtual void DoModal(); // slot 85, 0x60b0566e
    virtual void OnInitDialog(); // slot 86, 0x60b01670
    virtual void OnSetFont(); // slot 87, 0x60b05674
    virtual void OnOK(); // slot 88, 0x60b0567a
    virtual void OnCancel(); // slot 89, 0x60b05680
    virtual void PreInitDialog(); // slot 90, 0x60b05686
};

class CHgBoardImage : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b056b0
    virtual void vfunc_1(); // slot 1, 0x60b01e60
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
    virtual void Create(); // slot 5, 0x60b01f90
    virtual void ChangeBoardImage(); // slot 6, 0x60b02260
    virtual void DrawBlock(); // slot 7, 0x60b022f0
    virtual void DrawStone(); // slot 8, 0x60b02340
    virtual void DrawStoneAlpha(); // slot 9, 0x60b023a0
    virtual void DrawSeqNo(); // slot 10, 0x60b02650
    virtual void DrawSeqNo(); // slot 11, 0x60b02400
    virtual void DrawBoard(); // slot 12, 0x60b027e0
    virtual void MarkingLastPut(); // slot 13, 0x60b02970
    virtual void MarkingLastPut(); // slot 14, 0x60b02890
    virtual void MarkingMouseCell(); // slot 15, 0x60b02ad0
};

class CHgBoardLogic : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b056b0
    virtual void vfunc_1(); // slot 1, 0x60b02f10
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
    virtual void Create(); // slot 5, 0x60b03040
    virtual void InitializeBoard(); // slot 6, 0x60b030f0
    virtual void StartGame(); // slot 7, 0x60b03110
    virtual void GameOver(); // slot 8, 0x60b03190
    virtual void UndoGameOver(); // slot 9, 0x60b031c0
    virtual void UpdateBoard(); // slot 10, 0x60b03240
    virtual void GetNextTurn(); // slot 11, 0x60b035c0
    virtual void GetNextTurn(); // slot 12, 0x60b035b0
    virtual void IsGameOver(); // slot 13, 0x60b038e0
    virtual void IsGameOver(); // slot 14, 0x60b03820
    virtual void IsPassState(); // slot 15, 0x60b038f0
    virtual void IsValidPosition(); // slot 16, 0x60b03980
    virtual void ClearUndoList(); // slot 17, 0x60b03a10
    virtual void UndoLastTurn(); // slot 18, 0x60b03cb0
};

class CHgBoardProgressInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x60b04c20
    virtual void SetStartGame(); // slot 1, 0x60b05080
    virtual void purecall(); // slot 2, 0x60b05802
    virtual void DrawPlayerInfo(); // slot 3, 0x60b04b10
    virtual void DrawTurnInfo(); // slot 4, 0x60b04b20
};

class CHgDDB : public CHgImage, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60b01840
    virtual void Create(); // slot 1, 0x60b06086
    virtual void Create(); // slot 2, 0x60b0608c
    virtual void Create(); // slot 3, 0x60b06092
    virtual void Create(); // slot 4, 0x60b06098
    virtual void Destroy(); // slot 5, 0x60b0609e
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60b060a4
    virtual void __CreateFromBitmap16(); // slot 7, 0x60b060aa
    virtual void __CreateFromBitmap24(); // slot 8, 0x60b060b0
};

class CHgSeqInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x60b02d80
};

class CProgressCtrl : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60b055e4
    virtual void vfunc_1(); // slot 1, 0x60b019a0
    virtual void vfunc_2(); // slot 2, 0x60b019d0
    virtual void vfunc_3(); // slot 3, 0x60b019c0
    virtual void vfunc_4(); // slot 4, 0x60b019d0
    virtual void OnCmdMsg(); // slot 5, 0x60b055de
    virtual void OnFinalRelease(); // slot 6, 0x60b055d8
    virtual void IsInvokeAllowed(); // slot 7, 0x60b055d2
    virtual void GetDispatchIID(); // slot 8, 0x60b055cc
    virtual void GetTypeInfoCount(); // slot 9, 0x60b055c6
    virtual void GetTypeLibCache(); // slot 10, 0x60b055c0
    virtual void GetTypeLib(); // slot 11, 0x60b055ba
    virtual void GetMessageMap(); // slot 12, 0x60b055b4
    virtual void GetCommandMap(); // slot 13, 0x60b055ae
    virtual void GetDispatchMap(); // slot 14, 0x60b055a8
    virtual void GetConnectionMap(); // slot 15, 0x60b055a2
    virtual void GetInterfaceMap(); // slot 16, 0x60b0559c
    virtual void GetEventSinkMap(); // slot 17, 0x60b05596
    virtual void OnCreateAggregates(); // slot 18, 0x60b05590
    virtual void GetInterfaceHook(); // slot 19, 0x60b0558a
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60b05584
    virtual void GetConnectionHook(); // slot 21, 0x60b0557e
    virtual void PreSubclassWindow(); // slot 22, 0x60b05578
    virtual void Create(); // slot 23, 0x60b05572
    virtual void CreateEx(); // slot 24, 0x60b0556c
    virtual void CreateEx(); // slot 25, 0x60b05566
    virtual void DestroyWindow(); // slot 26, 0x60b05560
    virtual void PreCreateWindow(); // slot 27, 0x60b0555a
    virtual void CalcWindowRect(); // slot 28, 0x60b05554
    virtual void GetMenu(); // slot 29, 0x60b0554e
    virtual void SetMenu(); // slot 30, 0x60b05548
    virtual void OnToolHitTest(); // slot 31, 0x60b05542
    virtual void GetScrollBarCtrl(); // slot 32, 0x60b0553c
    virtual void WinHelpA(); // slot 33, 0x60b05536
    virtual void HtmlHelpA(); // slot 34, 0x60b05530
    virtual void WinHelpInternal(); // slot 35, 0x60b0552a
    virtual void ContinueModal(); // slot 36, 0x60b05524
    virtual void EndModalLoop(); // slot 37, 0x60b0551e
    virtual void EnsureStdObj(); // slot 38, 0x60b05518
    virtual void get_accParent(); // slot 39, 0x60b05512
    virtual void get_accChildCount(); // slot 40, 0x60b0550c
    virtual void get_accChild(); // slot 41, 0x60b05506
    virtual void get_accName(); // slot 42, 0x60b05500
    virtual void get_accValue(); // slot 43, 0x60b054fa
    virtual void get_accDescription(); // slot 44, 0x60b054f4
    virtual void get_accRole(); // slot 45, 0x60b054ee
    virtual void get_accState(); // slot 46, 0x60b054e8
    virtual void get_accHelp(); // slot 47, 0x60b054e2
    virtual void get_accHelpTopic(); // slot 48, 0x60b054dc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60b054d6
    virtual void get_accFocus(); // slot 50, 0x60b054d0
    virtual void get_accSelection(); // slot 51, 0x60b054ca
    virtual void get_accDefaultAction(); // slot 52, 0x60b054c4
    virtual void accSelect(); // slot 53, 0x60b054be
    virtual void accLocation(); // slot 54, 0x60b054b8
    virtual void accNavigate(); // slot 55, 0x60b054b2
    virtual void accHitTest(); // slot 56, 0x60b054ac
    virtual void accDoDefaultAction(); // slot 57, 0x60b054a6
    virtual void put_accName(); // slot 58, 0x60b054a0
    virtual void put_accValue(); // slot 59, 0x60b0549a
    virtual void SetProxy(); // slot 60, 0x60b05494
    virtual void CreateAccessibleProxy(); // slot 61, 0x60b0548e
    virtual void OnCommand(); // slot 62, 0x60b05488
    virtual void OnNotify(); // slot 63, 0x60b05482
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60b0547c
    virtual void vfunc_65(); // slot 65, 0x60b019d0
    virtual void vfunc_66(); // slot 66, 0x60b019e0
    virtual void vfunc_67(); // slot 67, 0x60b019f0
    virtual void PreTranslateMessage(); // slot 68, 0x60b05476
    virtual void OnAmbientProperty(); // slot 69, 0x60b05470
    virtual void WindowProc(); // slot 70, 0x60b0546a
    virtual void OnWndMsg(); // slot 71, 0x60b05464
    virtual void DefWindowProcA(); // slot 72, 0x60b0545e
    virtual void PostNcDestroy(); // slot 73, 0x60b05458
    virtual void OnChildNotify(); // slot 74, 0x60b05452
    virtual void CheckAutoCenter(); // slot 75, 0x60b0544c
    virtual void IsFrameWnd(); // slot 76, 0x60b05446
    virtual void CreateControlContainer(); // slot 77, 0x60b05440
    virtual void CreateControlSite(); // slot 78, 0x60b0543a
    virtual void SetOccDialogInfo(); // slot 79, 0x60b05434
    virtual void GetOccDialogInfo(); // slot 80, 0x60b0542e
    virtual void Create(); // slot 81, 0x60b05428
    virtual void CreateEx(); // slot 82, 0x60b05422
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x60b057b6
};

}  // namespace HgBoard3
