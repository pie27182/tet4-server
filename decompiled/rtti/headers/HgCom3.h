// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgCom3 {

class ?$CMapWrapper;
class ?$CTypedPtrList;
class ?$_CTypedPtrList;
class ?$tMapDeclare;
class CException;
class CObject;
class CPtrList;
class IFunctor;
class IGod;
class IMessage;
class IParam;
class bad_alloc;
class exception;
class invalid_argument;
class length_error;
class logic_error;
class out_of_range;
class runtime_error;

class ?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCItem@@ : public ?$CMapWrapper, public ?$tMapDeclare {
public:
    virtual void vfunc_0(); // slot 0, 0x60110aa0
};

class ?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCMembership@@ : public ?$CMapWrapper, public ?$tMapDeclare {
public:
    virtual void vfunc_0(); // slot 0, 0x60112d30
};

class ?$CTypedPtrList@VCPtrList@@PAVCMemberScore@@ : public ?$CTypedPtrList, public ?$_CTypedPtrList, public CPtrList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60163fb0
    virtual void vfunc_1(); // slot 1, 0x601106e0
    virtual void vfunc_2(); // slot 2, 0x6010cc70
    virtual void vfunc_3(); // slot 3, 0x601526e0
    virtual void vfunc_4(); // slot 4, 0x6010cc70
};

class CAlarmData {
public:
    virtual void vfunc_0(); // slot 0, 0x601010c0
    virtual void AddPlayData(); // slot 1, 0x60102cc0
    virtual void ResetPlayData(); // slot 2, 0x60102da0
    virtual void SetConfigByUppLevel(); // slot 3, 0x60102dc0
    virtual void SendChangeConfigData(); // slot 4, 0x60102e10
    virtual void NotifyTimeAlarm(); // slot 5, 0x60102fd0
    virtual void NotifyExitAlarm(); // slot 6, 0x60103140
};

class CAutoInitialize {
public:
    virtual void vfunc_0(); // slot 0, 0x60105110
    virtual void purecall(); // slot 1, 0x601640ea
    virtual void purecall(); // slot 2, 0x601640ea
};

class CCfgSetting {
public:
    virtual void vfunc_0(); // slot 0, 0x60105320
    virtual void CheckFCName(); // slot 1, 0x60105490
    virtual void SetAdvertiseCfg(); // slot 2, 0x60105990
};

class CDisplayModeChanger {
public:
    virtual void vfunc_0(); // slot 0, 0x6010a3c0
    virtual void vfunc_1(); // slot 1, 0x6010b570
};

class CEncodeToWeb {
public:
    virtual void vfunc_0(); // slot 0, 0x60112da0
};

class CFrameworkException : public CException, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60163f80
    virtual void vfunc_1(); // slot 1, 0x6010c950
    virtual void vfunc_2(); // slot 2, 0x6010cc70
    virtual void vfunc_3(); // slot 3, 0x601526e0
    virtual void vfunc_4(); // slot 4, 0x6010cc70
    virtual void GetErrorMessage(); // slot 5, 0x6010cc20
    virtual void GetErrorMessage(); // slot 6, 0x60163f86
    virtual void ReportError(); // slot 7, 0x60163f8c
};

class CGaeaData {
public:
    virtual void vfunc_0(); // slot 0, 0x60102450
};

class CGameBanish {
public:
    virtual void vfunc_0(); // slot 0, 0x6010df30
};

class CGameOption {
public:
    virtual void vfunc_0(); // slot 0, 0x6010f9c0
};

class CGameReport {
public:
    virtual void vfunc_0(); // slot 0, 0x60110280
};

class CGod : public IGod {
public:
    virtual void LoadDefaultObjects(); // slot 0, 0x60115850
    virtual void Clear(); // slot 1, 0x60115860
    virtual void AddEvtH(); // slot 2, 0x60115f70
    virtual void OverrideEvtH(); // slot 3, 0x60115ea0
    virtual void Call(); // slot 4, 0x60115eb0
    virtual void AddEvtH(); // slot 5, 0x60115f70
    virtual void OverrideEvtH(); // slot 6, 0x60115ea0
    virtual void AppendEvtH(); // slot 7, 0x60115f80
    virtual void Fire(); // slot 8, 0x60115f90
    virtual void AddNetMsgH(); // slot 9, 0x60116050
    virtual void OverrideNetMsgH(); // slot 10, 0x60116060
    virtual void AppendNetMsgH(); // slot 11, 0x60116070
    virtual void RemoveNetMsgH(); // slot 12, 0x60116080
    virtual void AttachComponent(); // slot 13, 0x60115870
    virtual void DetachAll(); // slot 14, 0x60115dd0
    virtual void NetCall(); // slot 15, 0x60116090
};

class CHanChatSetting {
public:
    virtual void vfunc_0(); // slot 0, 0x60116330
};

class CHgObjectFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x60112f20
};

class CItem {
public:
    virtual void vfunc_0(); // slot 0, 0x6011a2d0
};

class CItemManager {
public:
    virtual void vfunc_0(); // slot 0, 0x60110a40
    virtual void SetAllElementsState(); // slot 1, 0x6011aaf0
    virtual void IsItemAvailable(); // slot 2, 0x6011cc50
    virtual void Clear(); // slot 3, 0x6011a610
    virtual void AddItem(); // slot 4, 0x6011cce0
    virtual void DelItem(); // slot 5, 0x6011a660
    virtual void GetItem(); // slot 6, 0x6011cd20
    virtual void AddTryCount(); // slot 7, 0x6011d5d0
    virtual void GetCommand(); // slot 8, 0x6011d5e0
    virtual void ResetTryCount(); // slot 9, 0x6011d5f0
    virtual void DumpAllItems(); // slot 10, 0x6011b120
    virtual void SetItemState(); // slot 11, 0x6011a5a0
};

class CLevelData {
public:
    virtual void vfunc_0(); // slot 0, 0x60101b40
};

class CLevelDataList {
public:
    virtual void vfunc_0(); // slot 0, 0x60101c80
};

class CLibDocZip {
public:
    virtual void vfunc_0(); // slot 0, 0x60157870
};

class CMemberData {
public:
    virtual void vfunc_0(); // slot 0, 0x601018e0
    virtual void DrawAvata(); // slot 1, 0x6011c2e0
};

class CMemberDataList {
public:
    virtual void vfunc_0(); // slot 0, 0x601019b0
};

class CMemberScore {
public:
    virtual void vfunc_0(); // slot 0, 0x60110390
};

class CMembership {
public:
    virtual void vfunc_0(); // slot 0, 0x6011c810
};

class CMembershipManager {
public:
    virtual void vfunc_0(); // slot 0, 0x60112cd0
    virtual void SetAllElementsState(); // slot 1, 0x6011d4b0
    virtual void IsItemAvailable(); // slot 2, 0x6011cc50
    virtual void Clear(); // slot 3, 0x6011cc90
    virtual void AddItem(); // slot 4, 0x6011cce0
    virtual void DelItem(); // slot 5, 0x6011a660
    virtual void GetItem(); // slot 6, 0x6011cd20
    virtual void AddTryCount(); // slot 7, 0x6011d5d0
    virtual void GetCommand(); // slot 8, 0x6011d5e0
    virtual void ResetTryCount(); // slot 9, 0x6011d5f0
    virtual void DumpAllItems(); // slot 10, 0x6011b120
    virtual void SetMembershipState(); // slot 11, 0x6011cbd0
};

class CMetpParser : public IParam {
public:
    virtual void SetContext(); // slot 0, 0x60101120
    virtual void GetContext(); // slot 1, 0x6010a460
    virtual void GetErrorCode(); // slot 2, 0x60105380
    virtual void GetCommand(); // slot 3, 0x6011d5e0
    virtual void GetItemCount(); // slot 4, 0x601053a0
    virtual void IsConst(); // slot 5, 0x6015b610
    virtual void IsExistKey(); // slot 6, 0x601589b0
    virtual void AddValue(); // slot 7, 0x601591d0
    virtual void AddValue(); // slot 8, 0x601590f0
    virtual void AddValue(); // slot 9, 0x60158fd0
    virtual void AddValue(); // slot 10, 0x60158ec0
    virtual void AddValue(); // slot 11, 0x60158db0
    virtual void AddValue(); // slot 12, 0x60158ca0
    virtual void AddValue(); // slot 13, 0x601591d0
    virtual void AddValue(); // slot 14, 0x60158b90
    virtual void AddValue(); // slot 15, 0x60158a70
    virtual void GetValue(); // slot 16, 0x601240f0
    virtual void GetValue(); // slot 17, 0x6015a100
    virtual void GetValue(); // slot 18, 0x60159420
    virtual void GetValue(); // slot 19, 0x601593d0
    virtual void GetValue(); // slot 20, 0x60159380
    virtual void GetValue(); // slot 21, 0x60159380
    virtual void GetValue(); // slot 22, 0x601592f0
    virtual void GetValue(); // slot 23, 0x6015a0b0
    virtual void GetValue(); // slot 24, 0x60159350
    virtual void GetValue(); // slot 25, 0x601592a0
    virtual void GetValue(); // slot 26, 0x60159250
    virtual void SetValue(); // slot 27, 0x601241e0
    virtual void SetValue(); // slot 28, 0x60159db0
    virtual void SetValue(); // slot 29, 0x60159c50
    virtual void SetValue(); // slot 30, 0x60159af0
    virtual void SetValue(); // slot 31, 0x60159990
    virtual void SetValue(); // slot 32, 0x60159830
    virtual void SetValue(); // slot 33, 0x601241e0
    virtual void SetValue(); // slot 34, 0x601596d0
    virtual void SetValue(); // slot 35, 0x60159570
    virtual void DelKey(); // slot 36, 0x60159f80
    virtual void Clear(); // slot 37, 0x6015b470
    virtual void GetData(); // slot 38, 0x60159f10
    virtual void GetChangeDisplayMode(); // slot 39, 0x60102aa0
    virtual void GetPort(); // slot 40, 0x60105390
    virtual void IsEncrypted(); // slot 41, 0x601053c0
    virtual void GetURL(); // slot 42, 0x6015a1f0
    virtual void GetZipURL(); // slot 43, 0x6015a420
    virtual void GetEncryptURL(); // slot 44, 0x6015a230
    virtual void vfunc_45(); // slot 45, 0x60157a40
    virtual void vfunc_46(); // slot 46, 0x6015c160
    virtual void vfunc_47(); // slot 47, 0x6015ccd0
    virtual void vfunc_48(); // slot 48, 0x6015d1f0
    virtual void vfunc_49(); // slot 49, 0x6015d430
    virtual void vfunc_50(); // slot 50, 0x6015c840
    virtual void vfunc_51(); // slot 51, 0x6015cb90
    virtual void purecall(); // slot 52, 0x601640ea
    virtual void purecall(); // slot 53, 0x601640ea
    virtual void purecall(); // slot 54, 0x601640ea
    virtual void vfunc_55(); // slot 55, 0x6015cc40
    virtual void vfunc_56(); // slot 56, 0x6015ccd0
    virtual void vfunc_57(); // slot 57, 0x6015d1f0
    virtual void vfunc_58(); // slot 58, 0x6015d430
};

class CParam : public IParam {
public:
    virtual void SetContext(); // slot 0, 0x60101120
    virtual void GetContext(); // slot 1, 0x6010a460
    virtual void GetService(); // slot 2, 0x60101130
    virtual void GetCommand(); // slot 3, 0x60101140
    virtual void GetItemCount(); // slot 4, 0x60101150
    virtual void IsConst(); // slot 5, 0x601230d0
    virtual void IsExistKey(); // slot 6, 0x60124a40
    virtual void AddValue(); // slot 7, 0x601591d0
    virtual void AddValue(); // slot 8, 0x601233a0
    virtual void AddValue(); // slot 9, 0x60123330
    virtual void AddValue(); // slot 10, 0x601232c0
    virtual void AddValue(); // slot 11, 0x60123240
    virtual void AddValue(); // slot 12, 0x601231c0
    virtual void AddValue(); // slot 13, 0x601591d0
    virtual void AddValue(); // slot 14, 0x60123150
    virtual void AddValue(); // slot 15, 0x601230e0
    virtual void GetValue(); // slot 16, 0x601240f0
    virtual void GetValue(); // slot 17, 0x60123ac0
    virtual void GetValue(); // slot 18, 0x60123a80
    virtual void GetValue(); // slot 19, 0x60123a40
    virtual void GetValue(); // slot 20, 0x60123a00
    virtual void GetValue(); // slot 21, 0x60123a00
    virtual void GetValue(); // slot 22, 0x601239c0
    virtual void GetValue(); // slot 23, 0x60123990
    virtual void GetValue(); // slot 24, 0x60123960
    virtual void GetValue(); // slot 25, 0x60123920
    virtual void GetValue(); // slot 26, 0x601238e0
    virtual void SetValue(); // slot 27, 0x601241e0
    virtual void SetValue(); // slot 28, 0x601243b0
    virtual void SetValue(); // slot 29, 0x60124340
    virtual void SetValue(); // slot 30, 0x601242d0
    virtual void SetValue(); // slot 31, 0x60124270
    virtual void SetValue(); // slot 32, 0x601241f0
    virtual void SetValue(); // slot 33, 0x601241e0
    virtual void SetValue(); // slot 34, 0x60124170
    virtual void SetValue(); // slot 35, 0x60124100
    virtual void DelKey(); // slot 36, 0x60124920
    virtual void Clear(); // slot 37, 0x601249f0
    virtual void GetData(); // slot 38, 0x60124b00
    virtual void GetIPAddress(); // slot 39, 0x60124a20
    virtual void GetIPAddress(); // slot 40, 0x60124a20
    virtual void IsConst(); // slot 41, 0x6015b610
    virtual void GetData(); // slot 42, 0x60124b00
    virtual void GetData(); // slot 43, 0x60124b00
    virtual void GetEncryptURL(); // slot 44, 0x60124a30
    virtual void vfunc_45(); // slot 45, 0x60101220
};

class CPlayerInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x6014bd10
};

class CPlayerInfoList {
public:
    virtual void vfunc_0(); // slot 0, 0x60111760
};

class CProcessXML {
public:
    virtual void vfunc_0(); // slot 0, 0x6014c2c0
};

class CRoomData {
public:
    virtual void vfunc_0(); // slot 0, 0x6014f430
};

class CRoomDataList {
public:
    virtual void vfunc_0(); // slot 0, 0x60101a50
};

class CSFunctor : public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6010c860
    virtual void vfunc_1(); // slot 1, 0x6010c870
    virtual void vfunc_2(); // slot 2, 0x6010c890
};

class CSTLogFile {
public:
    virtual void vfunc_0(); // slot 0, 0x601515f0
};

class CWndProperty {
public:
    virtual void vfunc_0(); // slot 0, 0x60112e40
};

class Cmd_AuthToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60135870
    virtual void vfunc_1(); // slot 1, 0x60135610
    virtual void vfunc_2(); // slot 2, 0x60135650
    virtual void vfunc_3(); // slot 3, 0x60135660
    virtual void vfunc_4(); // slot 4, 0x60135670
    virtual void vfunc_5(); // slot 5, 0x601356e0
    virtual void vfunc_6(); // slot 6, 0x601357a0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_AuthToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012ca40
    virtual void vfunc_1(); // slot 1, 0x6012c820
    virtual void vfunc_2(); // slot 2, 0x6012c850
    virtual void vfunc_3(); // slot 3, 0x6012c860
    virtual void vfunc_4(); // slot 4, 0x6012c870
    virtual void vfunc_5(); // slot 5, 0x6012c8e0
    virtual void vfunc_6(); // slot 6, 0x6012c990
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_AddMemberSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60142ec0
    virtual void vfunc_2(); // slot 2, 0x60145340
    virtual void vfunc_3(); // slot 3, 0x60145350
    virtual void vfunc_4(); // slot 4, 0x60142ef0
    virtual void vfunc_5(); // slot 5, 0x60145360
    virtual void vfunc_6(); // slot 6, 0x601453e0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_AddMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012f560
    virtual void vfunc_1(); // slot 1, 0x6012ee90
    virtual void vfunc_2(); // slot 2, 0x6012efd0
    virtual void vfunc_3(); // slot 3, 0x6012efe0
    virtual void vfunc_4(); // slot 4, 0x6012eff0
    virtual void vfunc_5(); // slot 5, 0x6012f0e0
    virtual void vfunc_6(); // slot 6, 0x6012f2f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_AutoEnterRoomToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60133d30
    virtual void vfunc_1(); // slot 1, 0x60129d30
    virtual void vfunc_2(); // slot 2, 0x60133c90
    virtual void vfunc_3(); // slot 3, 0x60133ca0
    virtual void vfunc_4(); // slot 4, 0x60129d80
    virtual void vfunc_5(); // slot 5, 0x60133cb0
    virtual void vfunc_6(); // slot 6, 0x60142e10
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_AutoEnterRoomToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012a3c0
    virtual void vfunc_1(); // slot 1, 0x6012a0a0
    virtual void vfunc_2(); // slot 2, 0x6012a120
    virtual void vfunc_3(); // slot 3, 0x6012a130
    virtual void vfunc_4(); // slot 4, 0x6012a140
    virtual void vfunc_5(); // slot 5, 0x6012a180
    virtual void vfunc_6(); // slot 6, 0x6012a290
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_AvatarChangeSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60144b70
    virtual void vfunc_1(); // slot 1, 0x60143420
    virtual void vfunc_2(); // slot 2, 0x60144ae0
    virtual void vfunc_3(); // slot 3, 0x60144af0
    virtual void vfunc_4(); // slot 4, 0x60144c90
    virtual void vfunc_5(); // slot 5, 0x60144cb0
    virtual void vfunc_6(); // slot 6, 0x60144b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_AvatarChangeSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143320
    virtual void vfunc_1(); // slot 1, 0x60143420
    virtual void vfunc_2(); // slot 2, 0x60143300
    virtual void vfunc_3(); // slot 3, 0x60143310
    virtual void vfunc_4(); // slot 4, 0x60144c90
    virtual void vfunc_5(); // slot 5, 0x60144cb0
    virtual void vfunc_6(); // slot 6, 0x60144b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_BanishToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601339f0
    virtual void vfunc_1(); // slot 1, 0x60135fc0
    virtual void vfunc_2(); // slot 2, 0x60133960
    virtual void vfunc_3(); // slot 3, 0x60133970
    virtual void vfunc_4(); // slot 4, 0x60136000
    virtual void vfunc_5(); // slot 5, 0x60133980
    virtual void vfunc_6(); // slot 6, 0x60133b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_CheckUserIdToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60135c50
    virtual void vfunc_1(); // slot 1, 0x60135ae0
    virtual void vfunc_2(); // slot 2, 0x60135b10
    virtual void vfunc_3(); // slot 3, 0x60135b20
    virtual void vfunc_4(); // slot 4, 0x60135b30
    virtual void vfunc_5(); // slot 5, 0x60135b50
    virtual void vfunc_6(); // slot 6, 0x60135bd0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_CheckUserIdToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012cc40
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x6012cc20
    virtual void vfunc_3(); // slot 3, 0x6012cc30
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ClientOptionInfoSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60146e50
    virtual void vfunc_1(); // slot 1, 0x60146d60
    virtual void vfunc_2(); // slot 2, 0x60146da0
    virtual void vfunc_3(); // slot 3, 0x60146db0
    virtual void vfunc_4(); // slot 4, 0x60146dc0
    virtual void vfunc_5(); // slot 5, 0x60146df0
    virtual void vfunc_6(); // slot 6, 0x60146f70
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ClientOptionInfoSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601439e0
    virtual void vfunc_1(); // slot 1, 0x60143900
    virtual void vfunc_2(); // slot 2, 0x601439c0
    virtual void vfunc_3(); // slot 3, 0x601439d0
    virtual void vfunc_4(); // slot 4, 0x60143b70
    virtual void vfunc_5(); // slot 5, 0x60143ba0
    virtual void vfunc_6(); // slot 6, 0x60143c00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ComplaintAgreeSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x60147110
    virtual void vfunc_3(); // slot 3, 0x60147120
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ComplaintAgreeSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x60144180
    virtual void vfunc_3(); // slot 3, 0x60144190
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ComplaintSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60144520
    virtual void vfunc_1(); // slot 1, 0x60144750
    virtual void vfunc_2(); // slot 2, 0x60144410
    virtual void vfunc_3(); // slot 3, 0x60144420
    virtual void vfunc_4(); // slot 4, 0x60144430
    virtual void vfunc_5(); // slot 5, 0x60144870
    virtual void vfunc_6(); // slot 6, 0x60144480
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_CouponCountToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601470f0
    virtual void vfunc_1(); // slot 1, 0x60135fc0
    virtual void vfunc_2(); // slot 2, 0x601470d0
    virtual void vfunc_3(); // slot 3, 0x601470e0
    virtual void vfunc_4(); // slot 4, 0x60136000
    virtual void vfunc_5(); // slot 5, 0x60133980
    virtual void vfunc_6(); // slot 6, 0x60133b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_CouponCountToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143dd0
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x60143d60
    virtual void vfunc_3(); // slot 3, 0x60143d70
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_CreateRoomToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60131a80
    virtual void vfunc_1(); // slot 1, 0x601315e0
    virtual void vfunc_2(); // slot 2, 0x601316b0
    virtual void vfunc_3(); // slot 3, 0x601316c0
    virtual void vfunc_4(); // slot 4, 0x601316d0
    virtual void vfunc_5(); // slot 5, 0x60131730
    virtual void vfunc_6(); // slot 6, 0x601318c0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_CreateRoomToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60129c20
    virtual void vfunc_1(); // slot 1, 0x601298f0
    virtual void vfunc_2(); // slot 2, 0x60129970
    virtual void vfunc_3(); // slot 3, 0x60129980
    virtual void vfunc_4(); // slot 4, 0x60129990
    virtual void vfunc_5(); // slot 5, 0x601299d0
    virtual void vfunc_6(); // slot 6, 0x60129ae0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_DeleteMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601326d0
    virtual void vfunc_1(); // slot 1, 0x60134630
    virtual void vfunc_2(); // slot 2, 0x601326b0
    virtual void vfunc_3(); // slot 3, 0x601326c0
    virtual void vfunc_4(); // slot 4, 0x60134690
    virtual void vfunc_5(); // slot 5, 0x6012a510
    virtual void vfunc_6(); // slot 6, 0x601346b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_DetectGhostToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x601354b0
    virtual void vfunc_3(); // slot 3, 0x601354c0
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_DetectGhostToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x6012c670
    virtual void vfunc_3(); // slot 3, 0x6012c680
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_EnterChannelByUserIdToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012d1e0
    virtual void vfunc_1(); // slot 1, 0x6012cf00
    virtual void vfunc_2(); // slot 2, 0x6012cf70
    virtual void vfunc_3(); // slot 3, 0x6012cf80
    virtual void vfunc_4(); // slot 4, 0x6012cf90
    virtual void vfunc_5(); // slot 5, 0x6012cfd0
    virtual void vfunc_6(); // slot 6, 0x6012d0e0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_EnterChannelErrorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012d830
    virtual void vfunc_1(); // slot 1, 0x6012d620
    virtual void vfunc_2(); // slot 2, 0x6012d680
    virtual void vfunc_3(); // slot 3, 0x6012d690
    virtual void vfunc_4(); // slot 4, 0x6012d6a0
    virtual void vfunc_5(); // slot 5, 0x6012d6d0
    virtual void vfunc_6(); // slot 6, 0x6012d780
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_EnterChannelSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601366e0
    virtual void vfunc_2(); // slot 2, 0x60144940
    virtual void vfunc_3(); // slot 3, 0x60144950
    virtual void vfunc_4(); // slot 4, 0x60136620
    virtual void vfunc_5(); // slot 5, 0x60144960
    virtual void vfunc_6(); // slot 6, 0x60136630
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_EnterChannelToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012e7b0
    virtual void vfunc_1(); // slot 1, 0x6012e390
    virtual void vfunc_2(); // slot 2, 0x6012e440
    virtual void vfunc_3(); // slot 3, 0x6012e450
    virtual void vfunc_4(); // slot 4, 0x6012e460
    virtual void vfunc_5(); // slot 5, 0x6012e4a0
    virtual void vfunc_6(); // slot 6, 0x6012e600
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_EnterChannelToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60128c30
    virtual void vfunc_1(); // slot 1, 0x601289c0
    virtual void vfunc_2(); // slot 2, 0x60128a30
    virtual void vfunc_3(); // slot 3, 0x60128a40
    virtual void vfunc_4(); // slot 4, 0x60128a50
    virtual void vfunc_5(); // slot 5, 0x60128a90
    virtual void vfunc_6(); // slot 6, 0x60128b60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_EnterChannelWithTicketToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012ea80
    virtual void vfunc_1(); // slot 1, 0x6012e8b0
    virtual void vfunc_2(); // slot 2, 0x6012e8d0
    virtual void vfunc_3(); // slot 3, 0x6012e8e0
    virtual void vfunc_4(); // slot 4, 0x6012e8f0
    virtual void vfunc_5(); // slot 5, 0x6012e950
    virtual void vfunc_6(); // slot 6, 0x6012e9e0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_EnterChannelWithTicketToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60128f00
    virtual void vfunc_1(); // slot 1, 0x60128d30
    virtual void vfunc_2(); // slot 2, 0x60128d50
    virtual void vfunc_3(); // slot 3, 0x60128d60
    virtual void vfunc_4(); // slot 4, 0x60128d70
    virtual void vfunc_5(); // slot 5, 0x60128dd0
    virtual void vfunc_6(); // slot 6, 0x60128e60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ExitChannelToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60132db0
    virtual void vfunc_1(); // slot 1, 0x60132c00
    virtual void vfunc_2(); // slot 2, 0x60132c40
    virtual void vfunc_3(); // slot 3, 0x60132c50
    virtual void vfunc_4(); // slot 4, 0x60132c60
    virtual void vfunc_5(); // slot 5, 0x60132c90
    virtual void vfunc_6(); // slot 6, 0x60132d20
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ExitChannelToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012a590
    virtual void vfunc_1(); // slot 1, 0x60134630
    virtual void vfunc_2(); // slot 2, 0x6012a4f0
    virtual void vfunc_3(); // slot 3, 0x6012a500
    virtual void vfunc_4(); // slot 4, 0x60134690
    virtual void vfunc_5(); // slot 5, 0x6012a510
    virtual void vfunc_6(); // slot 6, 0x601346b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GaeaGameValueSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143f40
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x60143f20
    virtual void vfunc_3(); // slot 3, 0x60143f30
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x601440b0
    virtual void vfunc_6(); // slot 6, 0x60144100
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GaeaPrizeDataSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60146990
    virtual void vfunc_1(); // slot 1, 0x60146ad0
    virtual void vfunc_2(); // slot 2, 0x60146870
    virtual void vfunc_3(); // slot 3, 0x60146880
    virtual void vfunc_4(); // slot 4, 0x60146b40
    virtual void vfunc_5(); // slot 5, 0x60146b60
    virtual void vfunc_6(); // slot 6, 0x60146890
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GaeaPromotionDataSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60146460
    virtual void vfunc_1(); // slot 1, 0x60146210
    virtual void vfunc_2(); // slot 2, 0x60146380
    virtual void vfunc_3(); // slot 3, 0x60146390
    virtual void vfunc_4(); // slot 4, 0x601463a0
    virtual void vfunc_5(); // slot 5, 0x601463e0
    virtual void vfunc_6(); // slot 6, 0x601466a0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GameJoinRoomToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60131f30
    virtual void vfunc_1(); // slot 1, 0x60131cc0
    virtual void vfunc_2(); // slot 2, 0x60131d70
    virtual void vfunc_3(); // slot 3, 0x60131d80
    virtual void vfunc_4(); // slot 4, 0x60131d90
    virtual void vfunc_5(); // slot 5, 0x60131de0
    virtual void vfunc_6(); // slot 6, 0x601323f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GameJoinRoomToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60129da0
    virtual void vfunc_1(); // slot 1, 0x60129d30
    virtual void vfunc_2(); // slot 2, 0x60129d60
    virtual void vfunc_3(); // slot 3, 0x60129d70
    virtual void vfunc_4(); // slot 4, 0x60129d80
    virtual void vfunc_5(); // slot 5, 0x60133cb0
    virtual void vfunc_6(); // slot 6, 0x60142e10
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetMemberInfoSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601451e0
    virtual void vfunc_2(); // slot 2, 0x601451f0
    virtual void vfunc_3(); // slot 3, 0x60145200
    virtual void vfunc_4(); // slot 4, 0x60136620
    virtual void vfunc_5(); // slot 5, 0x60145210
    virtual void vfunc_6(); // slot 6, 0x601452b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetMemberInfoToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012e180
    virtual void vfunc_1(); // slot 1, 0x6012dad0
    virtual void vfunc_2(); // slot 2, 0x6012dc00
    virtual void vfunc_3(); // slot 3, 0x6012dc10
    virtual void vfunc_4(); // slot 4, 0x6012dc20
    virtual void vfunc_5(); // slot 5, 0x6012dce0
    virtual void vfunc_6(); // slot 6, 0x6012df00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetMemberListSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601455f0
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x60145570
    virtual void vfunc_3(); // slot 3, 0x60145580
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x60145d70
    virtual void vfunc_6(); // slot 6, 0x60145590
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetMemberListToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601302f0
    virtual void vfunc_1(); // slot 1, 0x60130080
    virtual void vfunc_2(); // slot 2, 0x60130160
    virtual void vfunc_3(); // slot 3, 0x60130170
    virtual void vfunc_4(); // slot 4, 0x60130180
    virtual void vfunc_5(); // slot 5, 0x601301d0
    virtual void vfunc_6(); // slot 6, 0x60130260
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetMemberListToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601292c0
    virtual void vfunc_1(); // slot 1, 0x601291f0
    virtual void vfunc_2(); // slot 2, 0x60129220
    virtual void vfunc_3(); // slot 3, 0x60129230
    virtual void vfunc_4(); // slot 4, 0x60129040
    virtual void vfunc_5(); // slot 5, 0x60129060
    virtual void vfunc_6(); // slot 6, 0x60129240
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetMemberListTodayMatchInfoToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60136450
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x601363d0
    virtual void vfunc_3(); // slot 3, 0x601363e0
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x60145d70
    virtual void vfunc_6(); // slot 6, 0x601363f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetMemberShipStateSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60145ff0
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x60145f70
    virtual void vfunc_3(); // slot 3, 0x60145f80
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x60145d70
    virtual void vfunc_6(); // slot 6, 0x60145f90
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetRoomListToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60130770
    virtual void vfunc_1(); // slot 1, 0x601304d0
    virtual void vfunc_2(); // slot 2, 0x601305c0
    virtual void vfunc_3(); // slot 3, 0x601305d0
    virtual void vfunc_4(); // slot 4, 0x601305e0
    virtual void vfunc_5(); // slot 5, 0x60130630
    virtual void vfunc_6(); // slot 6, 0x601306d0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetRoomListToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60129570
    virtual void vfunc_1(); // slot 1, 0x601293e0
    virtual void vfunc_2(); // slot 2, 0x60129410
    virtual void vfunc_3(); // slot 3, 0x60129420
    virtual void vfunc_4(); // slot 4, 0x60129430
    virtual void vfunc_5(); // slot 5, 0x60129450
    virtual void vfunc_6(); // slot 6, 0x601294e0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetUserIdByMemberIdToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012cb40
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x6012cb20
    virtual void vfunc_3(); // slot 3, 0x6012cb30
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_GetUserIdToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601359d0
    virtual void vfunc_1(); // slot 1, 0x60135980
    virtual void vfunc_2(); // slot 2, 0x601359b0
    virtual void vfunc_3(); // slot 3, 0x601359c0
    virtual void vfunc_4(); // slot 4, 0x60135d80
    virtual void vfunc_5(); // slot 5, 0x60135da0
    virtual void vfunc_6(); // slot 6, 0x60135e40
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_InviteGameToMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60131220
    virtual void vfunc_1(); // slot 1, 0x60130f90
    virtual void vfunc_2(); // slot 2, 0x60131000
    virtual void vfunc_3(); // slot 3, 0x60131010
    virtual void vfunc_4(); // slot 4, 0x60131020
    virtual void vfunc_5(); // slot 5, 0x60131050
    virtual void vfunc_6(); // slot 6, 0x60131130
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_InviteGameToMemberToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012a880
    virtual void vfunc_1(); // slot 1, 0x6012a6b0
    virtual void vfunc_2(); // slot 2, 0x6012a6f0
    virtual void vfunc_3(); // slot 3, 0x6012a700
    virtual void vfunc_4(); // slot 4, 0x6012a710
    virtual void vfunc_5(); // slot 5, 0x6012a730
    virtual void vfunc_6(); // slot 6, 0x6012a7d0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_MakeUserIdToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60135ed0
    virtual void vfunc_1(); // slot 1, 0x60135980
    virtual void vfunc_2(); // slot 2, 0x60135d60
    virtual void vfunc_3(); // slot 3, 0x60135d70
    virtual void vfunc_4(); // slot 4, 0x60135d80
    virtual void vfunc_5(); // slot 5, 0x60135da0
    virtual void vfunc_6(); // slot 6, 0x60135e40
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_MakeUserIdToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012cd50
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x6012cd20
    virtual void vfunc_3(); // slot 3, 0x6012cd30
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ReserveBanishToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60136020
    virtual void vfunc_1(); // slot 1, 0x60135fc0
    virtual void vfunc_2(); // slot 2, 0x60135fe0
    virtual void vfunc_3(); // slot 3, 0x60135ff0
    virtual void vfunc_4(); // slot 4, 0x60136000
    virtual void vfunc_5(); // slot 5, 0x60133980
    virtual void vfunc_6(); // slot 6, 0x60133b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ResponseInviteGameToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60131360
    virtual void vfunc_1(); // slot 1, 0x6012a980
    virtual void vfunc_2(); // slot 2, 0x60131320
    virtual void vfunc_3(); // slot 3, 0x60131330
    virtual void vfunc_4(); // slot 4, 0x60131340
    virtual void vfunc_5(); // slot 5, 0x6012a9c0
    virtual void vfunc_6(); // slot 6, 0x6012aa40
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ResponseInviteGameToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012aad0
    virtual void vfunc_1(); // slot 1, 0x6012a980
    virtual void vfunc_2(); // slot 2, 0x6012a9a0
    virtual void vfunc_3(); // slot 3, 0x6012a9b0
    virtual void vfunc_4(); // slot 4, 0x60131340
    virtual void vfunc_5(); // slot 5, 0x6012a9c0
    virtual void vfunc_6(); // slot 6, 0x6012aa40
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_RoomInfoToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60130a70
    virtual void vfunc_1(); // slot 1, 0x6012c5d0
    virtual void vfunc_2(); // slot 2, 0x601309d0
    virtual void vfunc_3(); // slot 3, 0x601309e0
    virtual void vfunc_4(); // slot 4, 0x6012c600
    virtual void vfunc_5(); // slot 5, 0x60130870
    virtual void vfunc_6(); // slot 6, 0x601309f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_SearchMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60132190
    virtual void vfunc_1(); // slot 1, 0x60132030
    virtual void vfunc_2(); // slot 2, 0x60132050
    virtual void vfunc_3(); // slot 3, 0x60132060
    virtual void vfunc_4(); // slot 4, 0x60132070
    virtual void vfunc_5(); // slot 5, 0x60132090
    virtual void vfunc_6(); // slot 6, 0x60132110
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_SendErrorToMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60133b80
    virtual void vfunc_1(); // slot 1, 0x60135fc0
    virtual void vfunc_2(); // slot 2, 0x60133ae0
    virtual void vfunc_3(); // slot 3, 0x60133af0
    virtual void vfunc_4(); // slot 4, 0x60136000
    virtual void vfunc_5(); // slot 5, 0x60133980
    virtual void vfunc_6(); // slot 6, 0x60133b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ShutdownTimeToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601366e0
    virtual void vfunc_2(); // slot 2, 0x60136600
    virtual void vfunc_3(); // slot 3, 0x60136610
    virtual void vfunc_4(); // slot 4, 0x60136620
    virtual void vfunc_5(); // slot 5, 0x60144960
    virtual void vfunc_6(); // slot 6, 0x60136630
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_TicketReissueToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012eba0
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x6012eb60
    virtual void vfunc_3(); // slot 3, 0x6012eb70
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_TicketReissueToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601290d0
    virtual void vfunc_1(); // slot 1, 0x601291f0
    virtual void vfunc_2(); // slot 2, 0x60129020
    virtual void vfunc_3(); // slot 3, 0x60129030
    virtual void vfunc_4(); // slot 4, 0x60129040
    virtual void vfunc_5(); // slot 5, 0x60129060
    virtual void vfunc_6(); // slot 6, 0x60129240
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_TodayMatchInfoToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60136280
    virtual void vfunc_1(); // slot 1, 0x60136100
    virtual void vfunc_2(); // slot 2, 0x60136110
    virtual void vfunc_3(); // slot 3, 0x60136120
    virtual void vfunc_4(); // slot 4, 0x60136130
    virtual void vfunc_5(); // slot 5, 0x60136180
    virtual void vfunc_6(); // slot 6, 0x60136200
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ViewRoomToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60132580
    virtual void vfunc_1(); // slot 1, 0x60131cc0
    virtual void vfunc_2(); // slot 2, 0x601323d0
    virtual void vfunc_3(); // slot 3, 0x601323e0
    virtual void vfunc_4(); // slot 4, 0x60131d90
    virtual void vfunc_5(); // slot 5, 0x60131de0
    virtual void vfunc_6(); // slot 6, 0x601323f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Channel_ViewRoomToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60129ed0
    virtual void vfunc_1(); // slot 1, 0x60129d30
    virtual void vfunc_2(); // slot 2, 0x60129eb0
    virtual void vfunc_3(); // slot 3, 0x60129ec0
    virtual void vfunc_4(); // slot 4, 0x60129d80
    virtual void vfunc_5(); // slot 5, 0x60133cb0
    virtual void vfunc_6(); // slot 6, 0x60142e10
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Chatting_ChatStringToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60135080
    virtual void vfunc_1(); // slot 1, 0x6012c270
    virtual void vfunc_2(); // slot 2, 0x60135040
    virtual void vfunc_3(); // slot 3, 0x60135050
    virtual void vfunc_4(); // slot 4, 0x60135060
    virtual void vfunc_5(); // slot 5, 0x6012c2d0
    virtual void vfunc_6(); // slot 6, 0x6012c360
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Chatting_ChatStringToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012c3f0
    virtual void vfunc_1(); // slot 1, 0x6012c270
    virtual void vfunc_2(); // slot 2, 0x6012c2b0
    virtual void vfunc_3(); // slot 3, 0x6012c2c0
    virtual void vfunc_4(); // slot 4, 0x60135060
    virtual void vfunc_5(); // slot 5, 0x6012c2d0
    virtual void vfunc_6(); // slot 6, 0x6012c360
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Chatting_HanChatStringToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60135180
    virtual void vfunc_1(); // slot 1, 0x6012c5d0
    virtual void vfunc_2(); // slot 2, 0x60135160
    virtual void vfunc_3(); // slot 3, 0x60135170
    virtual void vfunc_4(); // slot 4, 0x6012c600
    virtual void vfunc_5(); // slot 5, 0x60130870
    virtual void vfunc_6(); // slot 6, 0x601309f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Chatting_HanChatStringToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012c650
    virtual void vfunc_1(); // slot 1, 0x6012c5d0
    virtual void vfunc_2(); // slot 2, 0x6012c5e0
    virtual void vfunc_3(); // slot 3, 0x6012c5f0
    virtual void vfunc_4(); // slot 4, 0x6012c600
    virtual void vfunc_5(); // slot 5, 0x60130870
    virtual void vfunc_6(); // slot 6, 0x601309f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Item_GetItemStateToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60130e00
    virtual void vfunc_1(); // slot 1, 0x60130be0
    virtual void vfunc_2(); // slot 2, 0x60130ca0
    virtual void vfunc_3(); // slot 3, 0x60130cb0
    virtual void vfunc_4(); // slot 4, 0x60130cc0
    virtual void vfunc_5(); // slot 5, 0x60130cf0
    virtual void vfunc_6(); // slot 6, 0x60130d70
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Item_GetItemStateToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60129720
    virtual void vfunc_1(); // slot 1, 0x60129650
    virtual void vfunc_2(); // slot 2, 0x60129670
    virtual void vfunc_3(); // slot 3, 0x60129680
    virtual void vfunc_4(); // slot 4, 0x60129690
    virtual void vfunc_5(); // slot 5, 0x601296b0
    virtual void vfunc_6(); // slot 6, 0x60143710
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Item_ProvokeSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60144eb0
    virtual void vfunc_1(); // slot 1, 0x60143550
    virtual void vfunc_2(); // slot 2, 0x60144e00
    virtual void vfunc_3(); // slot 3, 0x60144e10
    virtual void vfunc_4(); // slot 4, 0x60144e20
    virtual void vfunc_5(); // slot 5, 0x60144e40
    virtual void vfunc_6(); // slot 6, 0x60143590
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Item_ProvokeSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143610
    virtual void vfunc_1(); // slot 1, 0x60143550
    virtual void vfunc_2(); // slot 2, 0x60143570
    virtual void vfunc_3(); // slot 3, 0x60143580
    virtual void vfunc_4(); // slot 4, 0x60144e20
    virtual void vfunc_5(); // slot 5, 0x60144e40
    virtual void vfunc_6(); // slot 6, 0x60143590
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Item_ReserveChanceSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601451c0
    virtual void vfunc_1(); // slot 1, 0x60144fd0
    virtual void vfunc_2(); // slot 2, 0x60145010
    virtual void vfunc_3(); // slot 3, 0x60145020
    virtual void vfunc_4(); // slot 4, 0x60145030
    virtual void vfunc_5(); // slot 5, 0x60145050
    virtual void vfunc_6(); // slot 6, 0x60145100
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Item_ReserveChanceSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143790
    virtual void vfunc_1(); // slot 1, 0x60129650
    virtual void vfunc_2(); // slot 2, 0x601436f0
    virtual void vfunc_3(); // slot 3, 0x60143700
    virtual void vfunc_4(); // slot 4, 0x60129690
    virtual void vfunc_5(); // slot 5, 0x601296b0
    virtual void vfunc_6(); // slot 6, 0x60143710
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_LayerAlignment : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601526e0
    virtual void vfunc_2(); // slot 2, 0x60120270
    virtual void vfunc_3(); // slot 3, 0x60120280
    virtual void vfunc_4(); // slot 4, 0x60134c90
    virtual void vfunc_5(); // slot 5, 0x60134a20
    virtual void vfunc_6(); // slot 6, 0x60134a60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Notice_NoticeToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60135490
    virtual void vfunc_1(); // slot 1, 0x601352b0
    virtual void vfunc_2(); // slot 2, 0x60135300
    virtual void vfunc_3(); // slot 3, 0x60135310
    virtual void vfunc_4(); // slot 4, 0x60135320
    virtual void vfunc_5(); // slot 5, 0x60135340
    virtual void vfunc_6(); // slot 6, 0x601353e0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_AddMemberSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60142110
    virtual void vfunc_2(); // slot 2, 0x60145610
    virtual void vfunc_3(); // slot 3, 0x60145620
    virtual void vfunc_4(); // slot 4, 0x60142140
    virtual void vfunc_5(); // slot 5, 0x60145630
    virtual void vfunc_6(); // slot 6, 0x601456c0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_AddMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012feb0
    virtual void vfunc_1(); // slot 1, 0x6012f820
    virtual void vfunc_2(); // slot 2, 0x6012f950
    virtual void vfunc_3(); // slot 3, 0x6012f960
    virtual void vfunc_4(); // slot 4, 0x6012f970
    virtual void vfunc_5(); // slot 5, 0x6012fa30
    virtual void vfunc_6(); // slot 6, 0x6012fc50
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_AlterRoomToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012c120
    virtual void vfunc_1(); // slot 1, 0x6012bf60
    virtual void vfunc_2(); // slot 2, 0x6012bfa0
    virtual void vfunc_3(); // slot 3, 0x6012bfb0
    virtual void vfunc_4(); // slot 4, 0x6012bfc0
    virtual void vfunc_5(); // slot 5, 0x6012bfe0
    virtual void vfunc_6(); // slot 6, 0x6012c080
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_AvatarChangeSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60144d10
    virtual void vfunc_1(); // slot 1, 0x60143420
    virtual void vfunc_2(); // slot 2, 0x60144c70
    virtual void vfunc_3(); // slot 3, 0x60144c80
    virtual void vfunc_4(); // slot 4, 0x60144c90
    virtual void vfunc_5(); // slot 5, 0x60144cb0
    virtual void vfunc_6(); // slot 6, 0x60144b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_AvatarChangeSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143460
    virtual void vfunc_1(); // slot 1, 0x60143420
    virtual void vfunc_2(); // slot 2, 0x60143440
    virtual void vfunc_3(); // slot 3, 0x60143450
    virtual void vfunc_4(); // slot 4, 0x60144c90
    virtual void vfunc_5(); // slot 5, 0x60144cb0
    virtual void vfunc_6(); // slot 6, 0x60144b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_CanLockThisRoomToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60133f10
    virtual void vfunc_1(); // slot 1, 0x60133e20
    virtual void vfunc_2(); // slot 2, 0x60133e40
    virtual void vfunc_3(); // slot 3, 0x60133e50
    virtual void vfunc_4(); // slot 4, 0x60133e60
    virtual void vfunc_5(); // slot 5, 0x60134bc0
    virtual void vfunc_6(); // slot 6, 0x60133e80
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ClientOptionInfoSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60146fe0
    virtual void vfunc_1(); // slot 1, 0x60146d60
    virtual void vfunc_2(); // slot 2, 0x60146f50
    virtual void vfunc_3(); // slot 3, 0x60146f60
    virtual void vfunc_4(); // slot 4, 0x60146dc0
    virtual void vfunc_5(); // slot 5, 0x60146df0
    virtual void vfunc_6(); // slot 6, 0x60146f70
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ClientOptionInfoSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143c70
    virtual void vfunc_1(); // slot 1, 0x60143900
    virtual void vfunc_2(); // slot 2, 0x60143b50
    virtual void vfunc_3(); // slot 3, 0x60143b60
    virtual void vfunc_4(); // slot 4, 0x60143b70
    virtual void vfunc_5(); // slot 5, 0x60143ba0
    virtual void vfunc_6(); // slot 6, 0x60143c00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ComplaintSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60144920
    virtual void vfunc_1(); // slot 1, 0x60144750
    virtual void vfunc_2(); // slot 2, 0x60144850
    virtual void vfunc_3(); // slot 3, 0x60144860
    virtual void vfunc_4(); // slot 4, 0x60144430
    virtual void vfunc_5(); // slot 5, 0x60144870
    virtual void vfunc_6(); // slot 6, 0x60144480
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ConnectTypeErrorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60134c50
    virtual void vfunc_1(); // slot 1, 0x60133e20
    virtual void vfunc_2(); // slot 2, 0x60134ba0
    virtual void vfunc_3(); // slot 3, 0x60134bb0
    virtual void vfunc_4(); // slot 4, 0x60133e60
    virtual void vfunc_5(); // slot 5, 0x60134bc0
    virtual void vfunc_6(); // slot 6, 0x60133e80
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_DeleteMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60132ab0
    virtual void vfunc_1(); // slot 1, 0x60132900
    virtual void vfunc_2(); // slot 2, 0x60132940
    virtual void vfunc_3(); // slot 3, 0x60132950
    virtual void vfunc_4(); // slot 4, 0x60132960
    virtual void vfunc_5(); // slot 5, 0x60132980
    virtual void vfunc_6(); // slot 6, 0x60132a20
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_DetectGhostToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x601354e0
    virtual void vfunc_3(); // slot 3, 0x601354f0
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_DetectGhostToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x6012c690
    virtual void vfunc_3(); // slot 3, 0x6012c6a0
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_EnterRoomToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60133390
    virtual void vfunc_1(); // slot 1, 0x60129d30
    virtual void vfunc_2(); // slot 2, 0x60133370
    virtual void vfunc_3(); // slot 3, 0x60133380
    virtual void vfunc_4(); // slot 4, 0x60129d80
    virtual void vfunc_5(); // slot 5, 0x60133cb0
    virtual void vfunc_6(); // slot 6, 0x60142e10
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_EnterRoomToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012b020
    virtual void vfunc_1(); // slot 1, 0x6012acb0
    virtual void vfunc_2(); // slot 2, 0x6012ad30
    virtual void vfunc_3(); // slot 3, 0x6012ad40
    virtual void vfunc_4(); // slot 4, 0x6012ad50
    virtual void vfunc_5(); // slot 5, 0x6012ad90
    virtual void vfunc_6(); // slot 6, 0x6012aec0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ExitRoomToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012b2e0
    virtual void vfunc_1(); // slot 1, 0x6012b140
    virtual void vfunc_2(); // slot 2, 0x6012b170
    virtual void vfunc_3(); // slot 3, 0x6012b180
    virtual void vfunc_4(); // slot 4, 0x6012b190
    virtual void vfunc_5(); // slot 5, 0x6012b1b0
    virtual void vfunc_6(); // slot 6, 0x6012b240
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GaeaGameValueSvcKorToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60144160
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x60144090
    virtual void vfunc_3(); // slot 3, 0x601440a0
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x601440b0
    virtual void vfunc_6(); // slot 6, 0x60144100
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GaeaPrizeDataSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60146c60
    virtual void vfunc_1(); // slot 1, 0x60146ad0
    virtual void vfunc_2(); // slot 2, 0x60146b20
    virtual void vfunc_3(); // slot 3, 0x60146b30
    virtual void vfunc_4(); // slot 4, 0x60146b40
    virtual void vfunc_5(); // slot 5, 0x60146b60
    virtual void vfunc_6(); // slot 6, 0x60146890
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GaeaPromotionDataSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60146730
    virtual void vfunc_1(); // slot 1, 0x60146210
    virtual void vfunc_2(); // slot 2, 0x60146680
    virtual void vfunc_3(); // slot 3, 0x60146690
    virtual void vfunc_4(); // slot 4, 0x601463a0
    virtual void vfunc_5(); // slot 5, 0x601463e0
    virtual void vfunc_6(); // slot 6, 0x601466a0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GameReportSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60145ba0
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x60145b20
    virtual void vfunc_3(); // slot 3, 0x60145b30
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x60145d70
    virtual void vfunc_6(); // slot 6, 0x60145b40
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GameReportToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60133870
    virtual void vfunc_1(); // slot 1, 0x60133640
    virtual void vfunc_2(); // slot 2, 0x60133710
    virtual void vfunc_3(); // slot 3, 0x60133720
    virtual void vfunc_4(); // slot 4, 0x60133730
    virtual void vfunc_5(); // slot 5, 0x60133760
    virtual void vfunc_6(); // slot 6, 0x601337e0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GameReportToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012b860
    virtual void vfunc_1(); // slot 1, 0x6012b510
    virtual void vfunc_2(); // slot 2, 0x6012b620
    virtual void vfunc_3(); // slot 3, 0x6012b630
    virtual void vfunc_4(); // slot 4, 0x6012b640
    virtual void vfunc_5(); // slot 5, 0x6012b6b0
    virtual void vfunc_6(); // slot 6, 0x6012b780
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GetMemberListSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601459d0
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x60145950
    virtual void vfunc_3(); // slot 3, 0x60145960
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x60145d70
    virtual void vfunc_6(); // slot 6, 0x60145970
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GetMemberListToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60133260
    virtual void vfunc_1(); // slot 1, 0x60132f70
    virtual void vfunc_2(); // slot 2, 0x60133060
    virtual void vfunc_3(); // slot 3, 0x60133070
    virtual void vfunc_4(); // slot 4, 0x60133080
    virtual void vfunc_5(); // slot 5, 0x601330c0
    virtual void vfunc_6(); // slot 6, 0x60133190
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GetMemberListTodayMatchInfoToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601365e0
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x601365a0
    virtual void vfunc_3(); // slot 3, 0x601365b0
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x60145d70
    virtual void vfunc_6(); // slot 6, 0x601363f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_GetRoomInfoToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601308f0
    virtual void vfunc_1(); // slot 1, 0x6012c5d0
    virtual void vfunc_2(); // slot 2, 0x60130850
    virtual void vfunc_3(); // slot 3, 0x60130860
    virtual void vfunc_4(); // slot 4, 0x6012c600
    virtual void vfunc_5(); // slot 5, 0x60130870
    virtual void vfunc_6(); // slot 6, 0x601309f0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ItemMemberGameInfoResultToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601343d0
    virtual void vfunc_2(); // slot 2, 0x601343e0
    virtual void vfunc_3(); // slot 3, 0x601343f0
    virtual void vfunc_4(); // slot 4, 0x60134400
    virtual void vfunc_5(); // slot 5, 0x60134410
    virtual void vfunc_6(); // slot 6, 0x60134490
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ItemUsePowerChanceSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60145bc0
    virtual void vfunc_2(); // slot 2, 0x60145bd0
    virtual void vfunc_3(); // slot 3, 0x60145be0
    virtual void vfunc_4(); // slot 4, 0x60142ef0
    virtual void vfunc_5(); // slot 5, 0x60142be0
    virtual void vfunc_6(); // slot 6, 0x60142c60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ItemUsePowerChanceToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601526e0
    virtual void vfunc_2(); // slot 2, 0x60134a00
    virtual void vfunc_3(); // slot 3, 0x60134a10
    virtual void vfunc_4(); // slot 4, 0x60134c90
    virtual void vfunc_5(); // slot 5, 0x60134a20
    virtual void vfunc_6(); // slot 6, 0x60134a60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ItemUseRecoveryItemSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x60145c00
    virtual void vfunc_3(); // slot 3, 0x60145c10
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ItemUseRecoveryItemToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601526e0
    virtual void vfunc_2(); // slot 2, 0x60134ab0
    virtual void vfunc_3(); // slot 3, 0x60134ac0
    virtual void vfunc_4(); // slot 4, 0x60134c90
    virtual void vfunc_5(); // slot 5, 0x60134a20
    virtual void vfunc_6(); // slot 6, 0x60134a60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_MemberGameInfoResultToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60133f30
    virtual void vfunc_2(); // slot 2, 0x60133f40
    virtual void vfunc_3(); // slot 3, 0x60133f50
    virtual void vfunc_4(); // slot 4, 0x60133f60
    virtual void vfunc_5(); // slot 5, 0x60133f70
    virtual void vfunc_6(); // slot 6, 0x60133fd0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_MoneyRecoveredToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601343b0
    virtual void vfunc_1(); // slot 1, 0x60134160
    virtual void vfunc_2(); // slot 2, 0x601341b0
    virtual void vfunc_3(); // slot 3, 0x601341c0
    virtual void vfunc_4(); // slot 4, 0x601341d0
    virtual void vfunc_5(); // slot 5, 0x601341f0
    virtual void vfunc_6(); // slot 6, 0x601342c0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_NotMatchZeroSum : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601349e0
    virtual void vfunc_1(); // slot 1, 0x60134820
    virtual void vfunc_2(); // slot 2, 0x60134840
    virtual void vfunc_3(); // slot 3, 0x60134850
    virtual void vfunc_4(); // slot 4, 0x60134860
    virtual void vfunc_5(); // slot 5, 0x60134880
    virtual void vfunc_6(); // slot 6, 0x60134930
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_NoticeToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012bd30
    virtual void vfunc_1(); // slot 1, 0x6012bb20
    virtual void vfunc_2(); // slot 2, 0x6012bb70
    virtual void vfunc_3(); // slot 3, 0x6012bb80
    virtual void vfunc_4(); // slot 4, 0x6012bb90
    virtual void vfunc_5(); // slot 5, 0x6012bbc0
    virtual void vfunc_6(); // slot 6, 0x6012bc70
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ReqBanishMemberToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601327d0
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x601327b0
    virtual void vfunc_3(); // slot 3, 0x601327c0
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ReqBanishMemberToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012c4f0
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x6012c4d0
    virtual void vfunc_3(); // slot 3, 0x6012c4e0
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ReserveBanishToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601334c0
    virtual void vfunc_1(); // slot 1, 0x60129d30
    virtual void vfunc_2(); // slot 2, 0x601334a0
    virtual void vfunc_3(); // slot 3, 0x601334b0
    virtual void vfunc_4(); // slot 4, 0x60129d80
    virtual void vfunc_5(); // slot 5, 0x60133cb0
    virtual void vfunc_6(); // slot 6, 0x60142e10
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_RoomEventToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60134730
    virtual void vfunc_1(); // slot 1, 0x60134630
    virtual void vfunc_2(); // slot 2, 0x60134670
    virtual void vfunc_3(); // slot 3, 0x60134680
    virtual void vfunc_4(); // slot 4, 0x60134690
    virtual void vfunc_5(); // slot 5, 0x6012a510
    virtual void vfunc_6(); // slot 6, 0x601346b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_SetRoomStateToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601354d0
    virtual void vfunc_2(); // slot 2, 0x6012c140
    virtual void vfunc_3(); // slot 3, 0x6012c150
    virtual void vfunc_4(); // slot 4, 0x60147130
    virtual void vfunc_5(); // slot 5, 0x601441a0
    virtual void vfunc_6(); // slot 6, 0x6012c6b0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ShutdownTimeToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601366e0
    virtual void vfunc_2(); // slot 2, 0x601366f0
    virtual void vfunc_3(); // slot 3, 0x60136700
    virtual void vfunc_4(); // slot 4, 0x60136620
    virtual void vfunc_5(); // slot 5, 0x60144960
    virtual void vfunc_6(); // slot 6, 0x60136630
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_StartNewGameSvcKorToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60145e20
    virtual void vfunc_1(); // slot 1, 0x601458a0
    virtual void vfunc_2(); // slot 2, 0x60145d50
    virtual void vfunc_3(); // slot 3, 0x60145d60
    virtual void vfunc_4(); // slot 4, 0x601365c0
    virtual void vfunc_5(); // slot 5, 0x60145d70
    virtual void vfunc_6(); // slot 6, 0x60145dc0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_StartNewGameToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x601526e0
    virtual void vfunc_2(); // slot 2, 0x60134c70
    virtual void vfunc_3(); // slot 3, 0x60134c80
    virtual void vfunc_4(); // slot 4, 0x60134c90
    virtual void vfunc_5(); // slot 5, 0x60134a20
    virtual void vfunc_6(); // slot 6, 0x60134a60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_StartNewGameToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012b9c0
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x6012b940
    virtual void vfunc_3(); // slot 3, 0x6012b950
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ViewerToPlayerToC : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60134f10
    virtual void vfunc_1(); // slot 1, 0x60134d80
    virtual void vfunc_2(); // slot 2, 0x60134db0
    virtual void vfunc_3(); // slot 3, 0x60134dc0
    virtual void vfunc_4(); // slot 4, 0x60134dd0
    virtual void vfunc_5(); // slot 5, 0x60134df0
    virtual void vfunc_6(); // slot 6, 0x60134e80
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class Cmd_Room_ViewerToPlayerToS : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012be30
    virtual void vfunc_1(); // slot 1, 0x60143d50
    virtual void vfunc_2(); // slot 2, 0x6012be10
    virtual void vfunc_3(); // slot 3, 0x6012be20
    virtual void vfunc_4(); // slot 4, 0x6012eb80
    virtual void vfunc_5(); // slot 5, 0x60143d80
    virtual void vfunc_6(); // slot 6, 0x6012b960
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class EncodeInt {
public:
    virtual void vfunc_0(); // slot 0, 0x60152810
};

class EncodeLongLong {
public:
    virtual void vfunc_0(); // slot 0, 0x6010b610
};

class GA_GameValue_Data {
public:
    virtual void vfunc_0(); // slot 0, 0x60102310
};

class GA_PRM_Data {
public:
    virtual void vfunc_0(); // slot 0, 0x60102130
};

class GA_PRM_MasterInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x60101ed0
};

class IMessage@XDR : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void purecall(); // slot 1, 0x601640ea
    virtual void purecall(); // slot 2, 0x601640ea
    virtual void purecall(); // slot 3, 0x601640ea
    virtual void purecall(); // slot 4, 0x601640ea
    virtual void purecall(); // slot 5, 0x601640ea
    virtual void purecall(); // slot 6, 0x601640ea
    virtual void purecall(); // slot 7, 0x601640ea
    virtual void purecall(); // slot 8, 0x601640ea
};

class TimeAI : public CAutoInitialize {
public:
    virtual void vfunc_0(); // slot 0, 0x60110920
    virtual void vfunc_1(); // slot 1, 0x60110700
    virtual void vfunc_2(); // slot 2, 0x60110720
};

class _ChatInfo : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60143200
    virtual void vfunc_1(); // slot 1, 0x60143080
    virtual void vfunc_2(); // slot 2, 0x601430b0
    virtual void vfunc_3(); // slot 3, 0x601430c0
    virtual void vfunc_4(); // slot 4, 0x601430d0
    virtual void vfunc_5(); // slot 5, 0x601430f0
    virtual void vfunc_6(); // slot 6, 0x60143170
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _ClientOptionInfoSlotSvcKor : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60145bc0
    virtual void vfunc_2(); // slot 2, 0x60142bc0
    virtual void vfunc_3(); // slot 3, 0x60142bd0
    virtual void vfunc_4(); // slot 4, 0x60142ef0
    virtual void vfunc_5(); // slot 5, 0x60142be0
    virtual void vfunc_6(); // slot 6, 0x60142c60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _ExScore : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601271d0
    virtual void vfunc_1(); // slot 1, 0x60135fc0
    virtual void vfunc_2(); // slot 2, 0x601271b0
    virtual void vfunc_3(); // slot 3, 0x601271c0
    virtual void vfunc_4(); // slot 4, 0x60136000
    virtual void vfunc_5(); // slot 5, 0x60133980
    virtual void vfunc_6(); // slot 6, 0x60133b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _GaeaGameValue : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142ea0
    virtual void vfunc_1(); // slot 1, 0x60129d30
    virtual void vfunc_2(); // slot 2, 0x60142df0
    virtual void vfunc_3(); // slot 3, 0x60142e00
    virtual void vfunc_4(); // slot 4, 0x60129d80
    virtual void vfunc_5(); // slot 5, 0x60133cb0
    virtual void vfunc_6(); // slot 6, 0x60142e10
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _HanchatFormat : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60125b40
    virtual void vfunc_1(); // slot 1, 0x60125890
    virtual void vfunc_2(); // slot 2, 0x601258f0
    virtual void vfunc_3(); // slot 3, 0x60125900
    virtual void vfunc_4(); // slot 4, 0x60125910
    virtual void vfunc_5(); // slot 5, 0x601259a0
    virtual void vfunc_6(); // slot 6, 0x60125a70
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _HanchatTextFormat : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60125740
    virtual void vfunc_1(); // slot 1, 0x60125560
    virtual void vfunc_2(); // slot 2, 0x60125590
    virtual void vfunc_3(); // slot 3, 0x601255a0
    virtual void vfunc_4(); // slot 4, 0x601255b0
    virtual void vfunc_5(); // slot 5, 0x601255d0
    virtual void vfunc_6(); // slot 6, 0x60125680
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _ItemState : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601270c0
    virtual void vfunc_1(); // slot 1, 0x60126ec0
    virtual void vfunc_2(); // slot 2, 0x60126f10
    virtual void vfunc_3(); // slot 3, 0x60126f20
    virtual void vfunc_4(); // slot 4, 0x60126f30
    virtual void vfunc_5(); // slot 5, 0x60126f50
    virtual void vfunc_6(); // slot 6, 0x60127000
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _KeyType : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601287f0
    virtual void vfunc_1(); // slot 1, 0x60128610
    virtual void vfunc_2(); // slot 2, 0x60128650
    virtual void vfunc_3(); // slot 3, 0x60128660
    virtual void vfunc_4(); // slot 4, 0x60128670
    virtual void vfunc_5(); // slot 5, 0x60128690
    virtual void vfunc_6(); // slot 6, 0x60128750
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberInfo : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60126370
    virtual void vfunc_1(); // slot 1, 0x60125db0
    virtual void vfunc_2(); // slot 2, 0x60125ec0
    virtual void vfunc_3(); // slot 3, 0x60125ed0
    virtual void vfunc_4(); // slot 4, 0x60125ee0
    virtual void vfunc_5(); // slot 5, 0x60125f90
    virtual void vfunc_6(); // slot 6, 0x60126160
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberInfoChannelSvcKor : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60142ec0
    virtual void vfunc_2(); // slot 2, 0x60142ed0
    virtual void vfunc_3(); // slot 3, 0x60142ee0
    virtual void vfunc_4(); // slot 4, 0x60142ef0
    virtual void vfunc_5(); // slot 5, 0x60145360
    virtual void vfunc_6(); // slot 6, 0x60142f00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberInfoRoom : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601284e0
    virtual void vfunc_1(); // slot 1, 0x60127e80
    virtual void vfunc_2(); // slot 2, 0x60127fa0
    virtual void vfunc_3(); // slot 3, 0x60127fb0
    virtual void vfunc_4(); // slot 4, 0x60127fc0
    virtual void vfunc_5(); // slot 5, 0x60128080
    virtual void vfunc_6(); // slot 6, 0x60128290
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberInfoRoomSvcKor : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60142110
    virtual void vfunc_2(); // slot 2, 0x60142120
    virtual void vfunc_3(); // slot 3, 0x60142130
    virtual void vfunc_4(); // slot 4, 0x60142140
    virtual void vfunc_5(); // slot 5, 0x60145630
    virtual void vfunc_6(); // slot 6, 0x601456c0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberInfoShort : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60126480
    virtual void vfunc_1(); // slot 1, 0x60135fc0
    virtual void vfunc_2(); // slot 2, 0x60126460
    virtual void vfunc_3(); // slot 3, 0x60126470
    virtual void vfunc_4(); // slot 4, 0x60136000
    virtual void vfunc_5(); // slot 5, 0x60133980
    virtual void vfunc_6(); // slot 6, 0x60133b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberInfoStartNewGame : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60141f70
    virtual void vfunc_1(); // slot 1, 0x60141dc0
    virtual void vfunc_2(); // slot 2, 0x60141de0
    virtual void vfunc_3(); // slot 3, 0x60141df0
    virtual void vfunc_4(); // slot 4, 0x60141e00
    virtual void vfunc_5(); // slot 5, 0x60141e20
    virtual void vfunc_6(); // slot 6, 0x60141ec0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberScore : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60127690
    virtual void vfunc_1(); // slot 1, 0x60127370
    virtual void vfunc_2(); // slot 2, 0x60127460
    virtual void vfunc_3(); // slot 3, 0x60127470
    virtual void vfunc_4(); // slot 4, 0x60127480
    virtual void vfunc_5(); // slot 5, 0x601274c0
    virtual void vfunc_6(); // slot 6, 0x601275a0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberScoreReport : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60127be0
    virtual void vfunc_1(); // slot 1, 0x60127800
    virtual void vfunc_2(); // slot 2, 0x601278a0
    virtual void vfunc_3(); // slot 3, 0x601278b0
    virtual void vfunc_4(); // slot 4, 0x601278c0
    virtual void vfunc_5(); // slot 5, 0x60127910
    virtual void vfunc_6(); // slot 6, 0x60127a60
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberScoreReportSvcKor : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60141f90
    virtual void vfunc_2(); // slot 2, 0x60141fa0
    virtual void vfunc_3(); // slot 3, 0x60141fb0
    virtual void vfunc_4(); // slot 4, 0x60141fc0
    virtual void vfunc_5(); // slot 5, 0x60141fd0
    virtual void vfunc_6(); // slot 6, 0x60142070
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MemberTodayMatchInfo : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x6012d4b0
    virtual void vfunc_1(); // slot 1, 0x6012d2d0
    virtual void vfunc_2(); // slot 2, 0x6012d300
    virtual void vfunc_3(); // slot 3, 0x6012d310
    virtual void vfunc_4(); // slot 4, 0x6012d320
    virtual void vfunc_5(); // slot 5, 0x6012d340
    virtual void vfunc_6(); // slot 6, 0x6012d410
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _MembershipState : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142240
    virtual void vfunc_1(); // slot 1, 0x60135fc0
    virtual void vfunc_2(); // slot 2, 0x60142220
    virtual void vfunc_3(); // slot 3, 0x60142230
    virtual void vfunc_4(); // slot 4, 0x60136000
    virtual void vfunc_5(); // slot 5, 0x60133980
    virtual void vfunc_6(); // slot 6, 0x60133b00
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _PromotionMastInfoSvcKor : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142940
    virtual void vfunc_1(); // slot 1, 0x60142670
    virtual void vfunc_2(); // slot 2, 0x60142740
    virtual void vfunc_3(); // slot 3, 0x60142750
    virtual void vfunc_4(); // slot 4, 0x60142760
    virtual void vfunc_5(); // slot 5, 0x60142790
    virtual void vfunc_6(); // slot 6, 0x60142870
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _PromotionMoneyInfoSvcKor : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x601424e0
    virtual void vfunc_1(); // slot 1, 0x60142330
    virtual void vfunc_2(); // slot 2, 0x60142350
    virtual void vfunc_3(); // slot 3, 0x60142360
    virtual void vfunc_4(); // slot 4, 0x60142370
    virtual void vfunc_5(); // slot 5, 0x60142390
    virtual void vfunc_6(); // slot 6, 0x60142430
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _PromotionUserInfoSvcKor : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60142f60
    virtual void vfunc_1(); // slot 1, 0x60142960
    virtual void vfunc_2(); // slot 2, 0x601429a0
    virtual void vfunc_3(); // slot 3, 0x601429b0
    virtual void vfunc_4(); // slot 4, 0x601429c0
    virtual void vfunc_5(); // slot 5, 0x601429d0
    virtual void vfunc_6(); // slot 6, 0x60142ab0
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class _RoomInfo : public IMessage {
public:
    virtual void vfunc_0(); // slot 0, 0x60126d80
    virtual void vfunc_1(); // slot 1, 0x601267c0
    virtual void vfunc_2(); // slot 2, 0x60126a10
    virtual void vfunc_3(); // slot 3, 0x60126a20
    virtual void vfunc_4(); // slot 4, 0x60126a30
    virtual void vfunc_5(); // slot 5, 0x60126ac0
    virtual void vfunc_6(); // slot 6, 0x60126c10
    virtual void vfunc_7(); // slot 7, 0x6012d1d0
    virtual void vfunc_8(); // slot 8, 0x6012cd40
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60104ee0
    virtual void what(); // slot 1, 0x601640e4
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60104e90
    virtual void vfunc_1(); // slot 1, 0x60104ec0
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60104e90
    virtual void vfunc_1(); // slot 1, 0x60104ec0
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60104e90
    virtual void vfunc_1(); // slot 1, 0x60104ec0
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60104e90
    virtual void vfunc_1(); // slot 1, 0x60104ec0
};

class runtime_error@std : public runtime_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x6011a240
    virtual void vfunc_1(); // slot 1, 0x60104ec0
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x60164098
};

}  // namespace HgCom3
