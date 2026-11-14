// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace neon9 {

class ?$CCompositeHolder;
class ?$CDelegate;
class ?$CFlyweightFactory;
class ?$CManagedPoolImpl;
class ?$CMemFunction;
class ?$CMixer;
class ?$CNeonMixer;
class ?$ConcreteLifetimeTracker;
class ?$FunctorHandler;
class ?$FunctorImpl;
class ?$FunctorImplBase;
class ?$IFlyweightFactory;
class ?$IFunctor;
class ?$MemFunHandler;
class ?$SmallObjectBase;
class ?$SmallValueObject;
class ?$_Container_base_aux_alloc_real;
class ?$_Vector_val;
class ?$vector;
class Bitmap;
class C3DDraw;
class C3DSurface;
class CActor;
class CApp;
class CAppManager;
class CAvtrId;
class CAvtrPartPool;
class CButton;
class CCheckBox;
class CCheckButton;
class CComponent;
class CControl;
class CDxAvtr2004;
class CDxAvtrPartPool;
class CEdit;
class CEffectAbstract;
class CEffectAdd;
class CEffectAlpha;
class CEffectAlphaGray;
class CEffectDarken;
class CEffectDifferent;
class CEffectDodge;
class CEffectDodgeBurn;
class CEffectGray;
class CEffectLighten;
class CEffectMultiply;
class CEffectRGBAdd;
class CEffectRGBMulti;
class CEffectRGBSub;
class CEffectScreen;
class CEffectSrcCopy;
class CEffectSub;
class CEffector;
class CFile;
class CFileManager;
class CFrame;
class CFrameEffect;
class CHgAniSurfaceList;
class CHgDxAniSurfaceList;
class CInputDI8;
class CLoader;
class CManagedPool;
class CManager;
class CMove;
class CMoveAcceleration;
class CMoveReduction;
class CMsgDispatch;
class CObject;
class CRLESurface;
class CRadioButton;
class CResource;
class CResourceImpl;
class CScrollBar;
class CSliderBar;
class CSound;
class CSprite;
class CText;
class CTextWindow;
class CTile;
class CVisual;
class CWebBrowser;
class CWindow;
class GdiplusBase;
class IDxDevice;
class IDxDeviceLost;
class IDxDraw;
class IDxEffect;
class IDxSurface;
class IOleObj;
class IRenderFunctor;
class Image;
class LifetimeTracker;
class _Container_base_aux;
class bad_alloc;
class exception;
class invalid_argument;
class length_error;
class logic_error;
class out_of_range;

class ?$CCompositeHolder@VCComponent@frw@neon@@@eco : public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100056c0
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
    virtual void vfunc_3(); // slot 3, 0x1003d410
};

class ?$CDelegate@HU?$Typelist@ABVCOP_Drag@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x10007d10
};

class ?$CDelegate@HU?$Typelist@ABVCOP_LDown@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x10009e60
};

class ?$CDelegate@HU?$Typelist@ABVCOP_LUp@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x10007cf0
};

class ?$CDelegate@HU?$Typelist@ABVCOP_ThumbMove@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x1000d6b0
};

class ?$CFlyweightFactory@PAUHFONT__@@VCFontTrait@frw@neon@@UFontCreator@34@UFontDeleter@34@VCCriticalSection@util@4@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x10042c40
    virtual void vfunc_1(); // slot 1, 0x10040df0
    virtual void vfunc_2(); // slot 2, 0x10042480
    virtual void vfunc_3(); // slot 3, 0x100411c0
    virtual void vfunc_4(); // slot 4, 0x10040fa0
    virtual void vfunc_5(); // slot 5, 0x100410c0
    virtual void vfunc_6(); // slot 6, 0x10040d00
};

class ?$CFlyweightFactory@PAUHFONT__@@VCFontTrait@frw@neon@@UFontCreator@34@UFontDeleter@34@VCEmptyLock@util@4@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x10042c80
    virtual void vfunc_1(); // slot 1, 0x100426a0
    virtual void vfunc_2(); // slot 2, 0x10042480
    virtual void vfunc_3(); // slot 3, 0x10042980
    virtual void vfunc_4(); // slot 4, 0x10042800
    virtual void vfunc_5(); // slot 5, 0x100428c0
    virtual void vfunc_6(); // slot 6, 0x100424d0
};

class ?$CFlyweightFactory@PAVIDxSurface@@USurfaceDesc@@UBmpFromSDCreator@frw@neon@@UIDxSurfaceDeleter@45@VCCriticalSection@util@5@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x10042c20
    virtual void vfunc_1(); // slot 1, 0x10040360
    virtual void vfunc_2(); // slot 2, 0x100418a0
    virtual void vfunc_3(); // slot 3, 0x10040730
    virtual void vfunc_4(); // slot 4, 0x10040510
    virtual void vfunc_5(); // slot 5, 0x10040630
    virtual void vfunc_6(); // slot 6, 0x10040270
};

class ?$CFlyweightFactory@PAVIDxSurface@@USurfaceDesc@@UBmpFromSDCreator@frw@neon@@UIDxSurfaceDeleter@45@VCEmptyLock@util@5@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x10042c60
    virtual void vfunc_1(); // slot 1, 0x10041b00
    virtual void vfunc_2(); // slot 2, 0x100418a0
    virtual void vfunc_3(); // slot 3, 0x10041de0
    virtual void vfunc_4(); // slot 4, 0x10041c70
    virtual void vfunc_5(); // slot 5, 0x10041d30
    virtual void vfunc_6(); // slot 6, 0x100418f0
};

class ?$CManagedPoolImpl@VCCriticalSection@util@neon@@@frw@neon : public ?$CManagedPoolImpl, public CManagedPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10043760
    virtual void vfunc_1(); // slot 1, 0x10043900
    virtual void vfunc_2(); // slot 2, 0x100439c0
    virtual void vfunc_3(); // slot 3, 0x10043a70
};

class ?$CManagedPoolImpl@VCEmptyLock@util@neon@@@frw@neon : public ?$CManagedPoolImpl, public CManagedPool {
public:
    virtual void vfunc_0(); // slot 0, 0x10043760
    virtual void vfunc_1(); // slot 1, 0x10043670
    virtual void vfunc_2(); // slot 2, 0x100436e0
    virtual void vfunc_3(); // slot 3, 0x10043730
};

class ?$CMemFunction@VCSprite@visual@neon@@XH@util@neon : public ?$CMemFunction, public ?$IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x10014640
    virtual void vfunc_1(); // slot 1, 0x10014650
};

class ?$CMixer@VCSound@dev@neon@@VCCriticalSection@util@3@@kiki : public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x1002e8c0
    virtual void Load(); // slot 1, 0x10033200
    virtual void Load(); // slot 2, 0x1002e390
    virtual void LoadBGM(); // slot 3, 0x1002e470
    virtual void UnLoad(); // slot 4, 0x1002fd20
    virtual void UnLoad(); // slot 5, 0x1002fe60
    virtual void FSoundOnEndOfStream(); // slot 6, 0x100321c0
    virtual void SetEndCallback(); // slot 7, 0x10033520
    virtual void CheckSample(); // slot 8, 0x100308f0
    virtual void SetEFXVolume(); // slot 9, 0x10032200
    virtual void SetBGMVolume(); // slot 10, 0x10032250
    virtual void SetVOXVolume(); // slot 11, 0x100322a0
    virtual void GetBGMVolume(); // slot 12, 0x1002eae0
    virtual void Play(); // slot 13, 0x10033670
    virtual void PlayBGM(); // slot 14, 0x100338b0
    virtual void Play3D(); // slot 15, 0x10031ea0
    virtual void Set3DChannelAttr(); // slot 16, 0x10030840
    virtual void Stop(); // slot 17, 0x100322f0
    virtual void Stop(); // slot 18, 0x1002eaf0
    virtual void StopEFX(); // slot 19, 0x10032410
    virtual void StopBGM(); // slot 20, 0x10031fb0
    virtual void StopBGM(); // slot 21, 0x100320d0
    virtual void StopVOX(); // slot 22, 0x10032420
    virtual void FadeBGM(); // slot 23, 0x10031d90
    virtual void FadeBGM(); // slot 24, 0x1002fc70
    virtual void SetCrossfadeTime(); // slot 25, 0x1002e460
    virtual void DestroyChannel(); // slot 26, 0x1002ffb0
    virtual void Work(); // slot 27, 0x10033ba0
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x1002eb50
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x1002e4e0
    virtual void purecall(); // slot 30, 0x1004f610
    virtual void purecall(); // slot 31, 0x1004f610
    virtual void purecall(); // slot 32, 0x1004f610
    virtual void purecall(); // slot 33, 0x1004f610
    virtual void vfunc_34(); // slot 34, 0x10036540
};

class ?$CMixer@VCSound@dev@neon@@VCEmptyLock@util@3@@kiki : public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x1002eb60
    virtual void Load(); // slot 1, 0x10033f40
    virtual void Load(); // slot 2, 0x1002e390
    virtual void LoadBGM(); // slot 3, 0x1002e470
    virtual void UnLoad(); // slot 4, 0x10030140
    virtual void UnLoad(); // slot 5, 0x10030280
    virtual void FSoundOnEndOfStream(); // slot 6, 0x10032860
    virtual void SetEndCallback(); // slot 7, 0x10034230
    virtual void CheckSample(); // slot 8, 0x10030fe0
    virtual void SetEFXVolume(); // slot 9, 0x100328a0
    virtual void SetBGMVolume(); // slot 10, 0x100328f0
    virtual void SetVOXVolume(); // slot 11, 0x10032940
    virtual void GetBGMVolume(); // slot 12, 0x1002ed50
    virtual void Play(); // slot 13, 0x10034380
    virtual void PlayBGM(); // slot 14, 0x100345c0
    virtual void Play3D(); // slot 15, 0x10032540
    virtual void Set3DChannelAttr(); // slot 16, 0x10030f30
    virtual void Stop(); // slot 17, 0x10032990
    virtual void Stop(); // slot 18, 0x1002eaf0
    virtual void StopEFX(); // slot 19, 0x10032ab0
    virtual void StopBGM(); // slot 20, 0x10032650
    virtual void StopBGM(); // slot 21, 0x10032770
    virtual void StopVOX(); // slot 22, 0x10032ac0
    virtual void FadeBGM(); // slot 23, 0x10032430
    virtual void FadeBGM(); // slot 24, 0x10030090
    virtual void SetCrossfadeTime(); // slot 25, 0x1002e4d0
    virtual void DestroyChannel(); // slot 26, 0x100303d0
    virtual void Work(); // slot 27, 0x100348b0
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x1002ede0
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x1002e4e0
    virtual void purecall(); // slot 30, 0x1004f610
    virtual void purecall(); // slot 31, 0x1004f610
    virtual void purecall(); // slot 32, 0x1004f610
    virtual void purecall(); // slot 33, 0x1004f610
    virtual void vfunc_34(); // slot 34, 0x100365a0
};

class ?$CNeonMixer@VCSound@dev@neon@@VCCriticalSection@util@3@ : public ?$CNeonMixer, public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x1002e8c0
    virtual void Load(); // slot 1, 0x10033200
    virtual void Load(); // slot 2, 0x1002e390
    virtual void LoadBGM(); // slot 3, 0x1002e470
    virtual void UnLoad(); // slot 4, 0x1002fd20
    virtual void UnLoad(); // slot 5, 0x1002fe60
    virtual void FSoundOnEndOfStream(); // slot 6, 0x100321c0
    virtual void SetEndCallback(); // slot 7, 0x10033520
    virtual void CheckSample(); // slot 8, 0x100308f0
    virtual void SetEFXVolume(); // slot 9, 0x10032200
    virtual void SetBGMVolume(); // slot 10, 0x10032250
    virtual void SetVOXVolume(); // slot 11, 0x100322a0
    virtual void GetBGMVolume(); // slot 12, 0x1002eae0
    virtual void Play(); // slot 13, 0x10033670
    virtual void PlayBGM(); // slot 14, 0x100338b0
    virtual void Play3D(); // slot 15, 0x10031ea0
    virtual void Set3DChannelAttr(); // slot 16, 0x10030840
    virtual void Stop(); // slot 17, 0x100322f0
    virtual void Stop(); // slot 18, 0x1002eaf0
    virtual void StopEFX(); // slot 19, 0x10032410
    virtual void StopBGM(); // slot 20, 0x10031fb0
    virtual void StopBGM(); // slot 21, 0x100320d0
    virtual void StopVOX(); // slot 22, 0x10032420
    virtual void FadeBGM(); // slot 23, 0x10031d90
    virtual void FadeBGM(); // slot 24, 0x1002fc70
    virtual void SetCrossfadeTime(); // slot 25, 0x1002e460
    virtual void DestroyChannel(); // slot 26, 0x1002ffb0
    virtual void Work(); // slot 27, 0x10033ba0
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x1002eb50
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x1002e4e0
    virtual void DestroySoundData(); // slot 30, 0x10031c10
    virtual void LoadSound(); // slot 31, 0x10034c50
    virtual void LoadSound(); // slot 32, 0x1002e650
    virtual void Close(); // slot 33, 0x1002e6b0
    virtual void vfunc_34(); // slot 34, 0x100369b0
};

class ?$CNeonMixer@VCSound@dev@neon@@VCEmptyLock@util@3@ : public ?$CNeonMixer, public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x1002eb60
    virtual void Load(); // slot 1, 0x10033f40
    virtual void Load(); // slot 2, 0x1002e390
    virtual void LoadBGM(); // slot 3, 0x1002e470
    virtual void UnLoad(); // slot 4, 0x10030140
    virtual void UnLoad(); // slot 5, 0x10030280
    virtual void FSoundOnEndOfStream(); // slot 6, 0x10032860
    virtual void SetEndCallback(); // slot 7, 0x10034230
    virtual void CheckSample(); // slot 8, 0x10030fe0
    virtual void SetEFXVolume(); // slot 9, 0x100328a0
    virtual void SetBGMVolume(); // slot 10, 0x100328f0
    virtual void SetVOXVolume(); // slot 11, 0x10032940
    virtual void GetBGMVolume(); // slot 12, 0x1002ed50
    virtual void Play(); // slot 13, 0x10034380
    virtual void PlayBGM(); // slot 14, 0x100345c0
    virtual void Play3D(); // slot 15, 0x10032540
    virtual void Set3DChannelAttr(); // slot 16, 0x10030f30
    virtual void Stop(); // slot 17, 0x10032990
    virtual void Stop(); // slot 18, 0x1002eaf0
    virtual void StopEFX(); // slot 19, 0x10032ab0
    virtual void StopBGM(); // slot 20, 0x10032650
    virtual void StopBGM(); // slot 21, 0x10032770
    virtual void StopVOX(); // slot 22, 0x10032ac0
    virtual void FadeBGM(); // slot 23, 0x10032430
    virtual void FadeBGM(); // slot 24, 0x10030090
    virtual void SetCrossfadeTime(); // slot 25, 0x1002e4d0
    virtual void DestroyChannel(); // slot 26, 0x100303d0
    virtual void Work(); // slot 27, 0x100348b0
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x1002ede0
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x1002e4e0
    virtual void DestroySoundData(); // slot 30, 0x10031cb0
    virtual void LoadSound(); // slot 31, 0x10034f70
    virtual void LoadSound(); // slot 32, 0x1002e650
    virtual void Close(); // slot 33, 0x1002e6b0
    virtual void vfunc_34(); // slot 34, 0x10036a10
};

class ?$ConcreteLifetimeTracker@V?$AllocatorSingleton@VClassLevelLockable@Loki@@$0BAAA@$0BAA@$03UDieAsSmallObjectParent@LongevityLifetime@2@VMutex@2@@Loki@@U?$Adapter@V?$AllocatorSingleton@VClassLevelLockable@Loki@@$0BAAA@$0BAA@$03UDieAsSmallObjectParent@LongevityLifetime@2@VMutex@2@@Loki@@@Internal@2@@Internal@Loki : public ?$ConcreteLifetimeTracker, public LifetimeTracker {
public:
    virtual void vfunc_0(); // slot 0, 0x10001860
};

class ?$FunctorHandler@V?$Functor@XVNullType@Loki@@VClassLevelLockable@2@@Loki@@P6AXXZ@Loki : public ?$FunctorHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000fcf0
    virtual void vfunc_1(); // slot 1, 0x1000fcc0
    virtual void vfunc_2(); // slot 2, 0x1000ebc0
    virtual void vfunc_3(); // slot 3, 0x1000ec00
};

class ?$FunctorImplBase@HVClassLevelLockable@Loki@@@Internal@Loki : public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10008210
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
};

class ?$FunctorImplBase@JVClassLevelLockable@Loki@@@Internal@Loki : public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10037730
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
};

class ?$FunctorImplBase@XVClassLevelLockable@Loki@@@Internal@Loki : public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000fc70
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_Drag@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCScrollBar@ctrl@neon@@P8345@AEHABVCOP_Drag@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a290
    virtual void vfunc_1(); // slot 1, 0x10008290
    virtual void vfunc_2(); // slot 2, 0x10009c90
    virtual void vfunc_3(); // slot 3, 0x10009c80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_Drag@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCSliderBar@ctrl@neon@@P8345@AEHABVCOP_Drag@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a290
    virtual void vfunc_1(); // slot 1, 0x1000a260
    virtual void vfunc_2(); // slot 2, 0x10009c90
    virtual void vfunc_3(); // slot 3, 0x10009c80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_LDown@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCSliderBar@ctrl@neon@@P8345@AEHABVCOP_LDown@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a290
    virtual void vfunc_1(); // slot 1, 0x1000a230
    virtual void vfunc_2(); // slot 2, 0x10009c90
    virtual void vfunc_3(); // slot 3, 0x10009c80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_LUp@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCScrollBar@ctrl@neon@@P8345@AEHABVCOP_LUp@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a290
    virtual void vfunc_1(); // slot 1, 0x10008260
    virtual void vfunc_2(); // slot 2, 0x10009c90
    virtual void vfunc_3(); // slot 3, 0x10009c80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_LUp@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCSliderBar@ctrl@neon@@P8345@AEHABVCOP_LUp@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a290
    virtual void vfunc_1(); // slot 1, 0x1000a200
    virtual void vfunc_2(); // slot 2, 0x10009c90
    virtual void vfunc_3(); // slot 3, 0x10009c80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_ThumbMove@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCTextWindow@ctrl@neon@@P8345@AEHABVCOP_ThumbMove@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000dac0
    virtual void vfunc_1(); // slot 1, 0x1000da90
    virtual void vfunc_2(); // slot 2, 0x1000bc70
    virtual void vfunc_3(); // slot 3, 0x1000bcd0
};

class ?$MemFunHandler@V?$Functor@JU?$Typelist@PAUHWND__@@U?$Typelist@IU?$Typelist@IU?$Typelist@JU?$Typelist@AA_NVNullType@Loki@@@Loki@@@Loki@@@Loki@@@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCApp@frw@neon@@P8345@AEJPAUHWND__@@IIJAA_N@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100376e0
    virtual void vfunc_1(); // slot 1, 0x100376b0
    virtual void vfunc_2(); // slot 2, 0x10009c90
    virtual void vfunc_3(); // slot 3, 0x10009c80
};

class ?$MemFunHandler@V?$Functor@XVNullType@Loki@@VClassLevelLockable@2@@Loki@@PAVCAppManager@frw@neon@@P8345@AEXXZ@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1003d2f0
    virtual void vfunc_1(); // slot 1, 0x1003d2c0
    virtual void vfunc_2(); // slot 2, 0x10009c90
    virtual void vfunc_3(); // slot 3, 0x1003d2b0
};

class Bitmap@Gdiplus : public Bitmap, public Image, public GdiplusBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10038210
    virtual void vfunc_1(); // slot 1, 0x10038240
};

class C3DDisplay : public IDxDevice, public IDxDeviceLost {
public:
    virtual void vfunc_0(); // slot 0, 0x100299e0
    virtual void Init(); // slot 1, 0x10028320
    virtual void SetVSyncWait(); // slot 2, 0x10029190
    virtual void GetVSyncWait(); // slot 3, 0x100291a0
    virtual void GetWidth(); // slot 4, 0x100291b0
    virtual void GetHeight(); // slot 5, 0x100291c0
    virtual void GetBPP(); // slot 6, 0x10027ee0
    virtual void IsWindowMode(); // slot 7, 0x10027cf0
    virtual void ChangeDisplayMode(); // slot 8, 0x1002a560
    virtual void OnCreateDxDeviceLost(); // slot 9, 0x10028e70
    virtual void OnDestroyDxDeviceLost(); // slot 10, 0x10029ba0
    virtual void Draw(); // slot 11, 0x1002a520
    virtual void RenderScene(); // slot 12, 0x10029a50
    virtual void PostRender(); // slot 13, 0x100292d0
    virtual void CreateSurface(); // slot 14, 0x10027d00
    virtual void CreateDraw(); // slot 15, 0x10027df0
    virtual void Release(); // slot 16, 0x1002bb90
    virtual void ApplyLinearFilter(); // slot 17, 0x10013b20
    virtual void AddClipRgn(); // slot 18, 0x10029c00
    virtual void RemoveClipRgn(); // slot 19, 0x10029c80
    virtual void CalcVRAM(); // slot 20, 0x10046580
    virtual void LostDeviceUpdate(); // slot 21, 0x100295c0
    virtual void RenderListClear(); // slot 22, 0x100296e0
    virtual void ApplyLinearFilter(); // slot 23, 0x10028130
    virtual void GetD3DDevice(); // slot 24, 0x100291d0
    virtual void Make(); // slot 25, 0x1002a590
};

class C3DDraw@d9@render@neon : public C3DDraw, public IDxDraw, public IRenderFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x1002b320
    virtual void vfunc_1(); // slot 1, 0x1002a5d0
    virtual void vfunc_2(); // slot 2, 0x1002a710
    virtual void vfunc_3(); // slot 3, 0x1002a640
    virtual void vfunc_4(); // slot 4, 0x1002a6c0
    virtual void vfunc_5(); // slot 5, 0x1002a740
    virtual void vfunc_6(); // slot 6, 0x1002a760
    virtual void ApplyLinearFilter(); // slot 7, 0x10013b20
    virtual void vfunc_8(); // slot 8, 0x1002a910
    virtual void vfunc_9(); // slot 9, 0x1002b4c0
    virtual void vfunc_10(); // slot 10, 0x1002a8b0
    virtual void vfunc_11(); // slot 11, 0x1002a8c0
    virtual void vfunc_12(); // slot 12, 0x1002a8d0
    virtual void vfunc_13(); // slot 13, 0x1002a8e0
    virtual void vfunc_14(); // slot 14, 0x1002a8f0
    virtual void vfunc_15(); // slot 15, 0x1002a900
    virtual void vfunc_16(); // slot 16, 0x1002b360
    virtual void Release(); // slot 17, 0x1002bb90
    virtual void ApplyLinearFilter(); // slot 18, 0x10013b20
    virtual void vfunc_19(); // slot 19, 0x1002aa40
};

class C3DSurface@d9@render@neon : public C3DSurface, public IDxSurface, public IDxDeviceLost {
public:
    virtual void vfunc_0(); // slot 0, 0x1002dcd0
    virtual void GetChildList(); // slot 1, 0x1003d470
    virtual void vfunc_2(); // slot 2, 0x1002cfe0
    virtual void vfunc_3(); // slot 3, 0x1002c890
    virtual void vfunc_4(); // slot 4, 0x1002d010
    virtual void vfunc_5(); // slot 5, 0x1002c3a0
    virtual void vfunc_6(); // slot 6, 0x1002c8d0
    virtual void vfunc_7(); // slot 7, 0x1002d610
    virtual void vfunc_8(); // slot 8, 0x1002d620
    virtual void vfunc_9(); // slot 9, 0x1002c3b0
    virtual void vfunc_10(); // slot 10, 0x1002c3c0
    virtual void vfunc_11(); // slot 11, 0x1002d050
    virtual void vfunc_12(); // slot 12, 0x1002c610
    virtual void vfunc_13(); // slot 13, 0x1002d520
    virtual void Release(); // slot 14, 0x1002bb90
    virtual void vfunc_15(); // slot 15, 0x1002d630
    virtual void vfunc_16(); // slot 16, 0x1002c9a0
    virtual void vfunc_17(); // slot 17, 0x1002cbf0
    virtual void vfunc_18(); // slot 18, 0x1002d040
};

class CActor@phy@neon : public CActor, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100267b0
    virtual void Logic(); // slot 1, 0x10026810
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x10023800
    virtual void Copy(); // slot 11, 0x10022e90
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void SetEffect(); // slot 14, 0x10005860
    virtual void Blt(); // slot 15, 0x10005870
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10023030
};

class CApp@frw@neon : public CApp {
public:
    virtual void vfunc_0(); // slot 0, 0x10036f70
};

class CAppManager@frw@neon : public CAppManager {
public:
    virtual void vfunc_0(); // slot 0, 0x10036b70
};

class CAvtrId@DXAvatar : public CAvtrId, public ?$vector, public ?$_Vector_val, public ?$_Container_base_aux_alloc_real, public _Container_base_aux {
public:
    virtual void vfunc_0(); // slot 0, 0x10026420
};

class CAvtrPartPool@DXAvatar : public CAvtrPartPool, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x1004a3e0
    virtual void GetD3DDevice(); // slot 1, 0x10013b10
    virtual void GetD3DDevice(); // slot 2, 0x10013b10
};

class CButton@ctrl@neon : public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100064f0
    virtual void Logic(); // slot 1, 0x100107f0
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10010520
    virtual void SetEffectType(); // slot 15, 0x10010550
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x10010780
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10010640
    virtual void OnMouseLeave(); // slot 29, 0x10010670
    virtual void OnMouseLbDown(); // slot 30, 0x10010580
    virtual void OnMouseLbUp(); // slot 31, 0x100105f0
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x100106a0
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x100112d0
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x100108a0
    virtual void SetBtnActive(); // slot 50, 0x10010720
};

class CCheckBox@ctrl@neon : public CCheckBox, public CCheckButton, public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10010ce0
    virtual void Logic(); // slot 1, 0x10011320
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10010520
    virtual void SetEffectType(); // slot 15, 0x10010550
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x10010ca0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10010640
    virtual void OnMouseLeave(); // slot 29, 0x10010670
    virtual void OnMouseLbDown(); // slot 30, 0x10010580
    virtual void OnMouseLbUp(); // slot 31, 0x10011550
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x10011650
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x10010c60
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x100108a0
    virtual void SetBtnActive(); // slot 50, 0x10010720
    virtual void Create(); // slot 51, 0x10010d40
    virtual void SetCheck(); // slot 52, 0x100112f0
};

class CCheckButton@ctrl@neon : public CCheckButton, public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10010a80
    virtual void Logic(); // slot 1, 0x10011320
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10010520
    virtual void SetEffectType(); // slot 15, 0x10010550
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x10010780
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10010640
    virtual void OnMouseLeave(); // slot 29, 0x10010670
    virtual void OnMouseLbDown(); // slot 30, 0x10010580
    virtual void OnMouseLbUp(); // slot 31, 0x10011550
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x10011650
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x100112d0
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x100108a0
    virtual void SetBtnActive(); // slot 50, 0x10010720
    virtual void Create(); // slot 51, 0x10011380
    virtual void SetCheck(); // slot 52, 0x100112f0
};

class CComponent@frw@neon : public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10003780
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
    virtual void vfunc_3(); // slot 3, 0x1003d410
};

class CControl@ctrl@neon : public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100031c0
    virtual void Logic(); // slot 1, 0x100016e0
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10001a90
    virtual void SetEffectType(); // slot 15, 0x10001b30
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10002760
    virtual void OnMouseLeave(); // slot 29, 0x10002830
    virtual void OnMouseLbDown(); // slot 30, 0x100028f0
    virtual void OnMouseLbUp(); // slot 31, 0x100029a0
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x10002c80
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x10001720
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
};

class CDxAvatar : public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10024310
    virtual void Logic(); // slot 1, 0x100244f0
    virtual void Output(); // slot 2, 0x100245b0
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x10023800
    virtual void Copy(); // slot 11, 0x10022e90
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void SetEffect(); // slot 14, 0x10005860
    virtual void Blt(); // slot 15, 0x10005870
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023f40
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10023030
};

class CDxAvtr2004@DXAvatar : public CDxAvtr2004, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x10023e20
    virtual void GetD3DDevice(); // slot 1, 0x10013b10
    virtual void Restore(); // slot 2, 0x10046bc0
};

class CDxAvtrPartPool@DXAvatar : public CDxAvtrPartPool, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x10036b00
    virtual void GetD3DDevice(); // slot 1, 0x10013b10
    virtual void Restore(); // slot 2, 0x1004b670
};

class CEdit@ctrl@neon : public CEdit, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10004fe0
    virtual void Logic(); // slot 1, 0x100016e0
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x10003e20
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10001a90
    virtual void SetEffectType(); // slot 15, 0x10001b30
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x10003630
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10002760
    virtual void OnMouseLeave(); // slot 29, 0x10002830
    virtual void OnMouseLbDown(); // slot 30, 0x10003e80
    virtual void OnMouseLbUp(); // slot 31, 0x100029a0
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x10002c80
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10005230
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x10001720
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10003610
    virtual void ProcessMessage(); // slot 45, 0x10006290
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x10003c20
    virtual void CreateCursor(); // slot 50, 0x10003440
    virtual void CreateFontA(); // slot 51, 0x10003a70
    virtual void CreateTextTile(); // slot 52, 0x10003ae0
    virtual void Update(); // slot 53, 0x100045f0
};

class CEffectAbstract@d3d_effect@d9@render@neon : public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void SetEffect(); // slot 1, 0x10005860
    virtual void purecall(); // slot 2, 0x1004f610
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void purecall(); // slot 4, 0x1004f610
    virtual void purecall(); // slot 5, 0x1004f610
    virtual void vfunc_6(); // slot 6, 0x1002b5d0
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectAdd@d3d_effect@d9@render@neon : public CEffectAdd, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002bf50
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b640
    virtual void vfunc_6(); // slot 6, 0x1002b660
    virtual void vfunc_7(); // slot 7, 0x1002bbc0
};

class CEffectAlpha@d3d_effect@d9@render@neon : public CEffectAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002bf20
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002bba0
    virtual void vfunc_6(); // slot 6, 0x1002b630
    virtual void vfunc_7(); // slot 7, 0x1002bbc0
};

class CEffectAlphaGray@d3d_effect@d9@render@neon : public CEffectAlphaGray, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002bfe0
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002bbe0
    virtual void vfunc_6(); // slot 6, 0x1002b800
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectDarken@d3d_effect@d9@render@neon : public CEffectDarken, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002c0f0
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b980
    virtual void vfunc_6(); // slot 6, 0x1002b940
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectDifferent@d3d_effect@d9@render@neon : public CEffectDifferent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002c120
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b9c0
    virtual void vfunc_6(); // slot 6, 0x1002b940
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectDodge@d3d_effect@d9@render@neon : public CEffectDodge, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002c010
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b840
    virtual void vfunc_6(); // slot 6, 0x1002b8d0
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectDodgeBurn@d3d_effect@d9@render@neon : public CEffectDodgeBurn, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002c090
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b8a0
    virtual void vfunc_6(); // slot 6, 0x1002b8d0
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectGray@d3d_effect@d9@render@neon : public CEffectGray, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002bfb0
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b700
    virtual void vfunc_6(); // slot 6, 0x1002b770
    virtual void vfunc_7(); // slot 7, 0x1002bbd0
};

class CEffectLighten@d3d_effect@d9@render@neon : public CEffectLighten, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002c0c0
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b900
    virtual void vfunc_6(); // slot 6, 0x1002b940
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectMultiply@d3d_effect@d9@render@neon : public CEffectMultiply, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002c1b0
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002bb50
    virtual void vfunc_6(); // slot 6, 0x1002bb70
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectRGBAdd@d3d_effect@d9@render@neon : public CEffectRGBAdd, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc70
    virtual void vfunc_2(); // slot 2, 0x1002bc90
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002ba00
    virtual void vfunc_6(); // slot 6, 0x1002ba20
    virtual void vfunc_7(); // slot 7, 0x1002bc20
};

class CEffectRGBMulti@d3d_effect@d9@render@neon : public CEffectRGBMulti, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc70
    virtual void vfunc_2(); // slot 2, 0x1002c180
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002ba90
    virtual void vfunc_5(); // slot 5, 0x1002bad0
    virtual void vfunc_6(); // slot 6, 0x1002bb10
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectRGBSub@d3d_effect@d9@render@neon : public CEffectRGBSub, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc70
    virtual void vfunc_2(); // slot 2, 0x1002c150
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002ba50
    virtual void vfunc_6(); // slot 6, 0x1002ba70
    virtual void vfunc_7(); // slot 7, 0x1002bc20
};

class CEffectScreen@d3d_effect@d9@render@neon : public CEffectScreen, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002c060
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b870
    virtual void vfunc_6(); // slot 6, 0x1002b8d0
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectSrcCopy@d3d_effect@d9@render@neon : public CEffectSrcCopy, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void SetEffect(); // slot 1, 0x10005860
    virtual void vfunc_2(); // slot 2, 0x1002bef0
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002bba0
    virtual void vfunc_6(); // slot 6, 0x1002b5d0
    virtual void vfunc_7(); // slot 7, 0x1002bc40
};

class CEffectSub@d3d_effect@d9@render@neon : public CEffectSub, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x1002c040
    virtual void vfunc_1(); // slot 1, 0x1002bc60
    virtual void vfunc_2(); // slot 2, 0x1002bf80
    virtual void Release(); // slot 3, 0x1002bb90
    virtual void vfunc_4(); // slot 4, 0x1002b680
    virtual void vfunc_5(); // slot 5, 0x1002b690
    virtual void vfunc_6(); // slot 6, 0x1002b6c0
    virtual void vfunc_7(); // slot 7, 0x1002bbc0
};

class CEffector@phy@neon : public CEffector, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10026dd0
    virtual void Logic(); // slot 1, 0x10026e30
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x1003d5c0
    virtual void vfunc_5(); // slot 5, 0x1003d410
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x1003de40
    virtual void Copy(); // slot 11, 0x1003dec0
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void OnFinish(); // slot 14, 0x10026f70
};

class CFile@h2p : public CFile {
public:
    virtual void vfunc_0(); // slot 0, 0x1003d0b0
};

class CFileManager@frw@neon : public CFileManager {
public:
    virtual void vfunc_0(); // slot 0, 0x100389c0
};

class CFrame@CSprite@visual@neon : public CFrame {
public:
    virtual void vfunc_0(); // slot 0, 0x100147f0
};

class CFrameEffect@CSprite@visual@neon : public CFrameEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100141d0
};

class CHgAniSurfaceList@DXAvatar : public CHgAniSurfaceList {
public:
    virtual void vfunc_0(); // slot 0, 0x1004d440
};

class CHgDxAniSurfaceList@DXAvatar : public CHgDxAniSurfaceList {
public:
    virtual void vfunc_0(); // slot 0, 0x1004ead0
};

class CInputDI8@dev@neon : public CInputDI8, public IInput {
public:
    virtual void vfunc_0(); // slot 0, 0x1002e070
    virtual void vfunc_1(); // slot 1, 0x1002e080
    virtual void vfunc_2(); // slot 2, 0x1002e090
    virtual void vfunc_3(); // slot 3, 0x1002dde0
    virtual void vfunc_4(); // slot 4, 0x1002df10
    virtual void vfunc_5(); // slot 5, 0x1002df20
    virtual void vfunc_6(); // slot 6, 0x1002e020
    virtual void vfunc_7(); // slot 7, 0x1002e120
};

class CLoader@h2p : public CLoader {
public:
    virtual void vfunc_0(); // slot 0, 0x10039e30
};

class CManagedPool@frw@neon : public CManagedPool {
public:
    virtual void purecall(); // slot 0, 0x1004f610
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
    virtual void vfunc_3(); // slot 3, 0x10043730
};

class CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x1000abb0
    virtual void GetD3DDevice(); // slot 1, 0x10013b10
    virtual void purecall(); // slot 2, 0x1004f610
};

class CManager@h2p : public CManager {
public:
    virtual void vfunc_0(); // slot 0, 0x100192f0
};

class CMove@phy@neon : public CMove, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10027670
    virtual void Logic(); // slot 1, 0x10027780
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x1003d5c0
    virtual void vfunc_5(); // slot 5, 0x1003d410
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x1003de40
    virtual void Copy(); // slot 11, 0x1003dec0
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void ProcessMove(); // slot 14, 0x100272b0
    virtual void SetParentPos(); // slot 15, 0x10027450
};

class CMoveAcceleration@phy@neon : public CMoveAcceleration, public CMove, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100276f0
    virtual void Logic(); // slot 1, 0x10027780
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x1003d5c0
    virtual void vfunc_5(); // slot 5, 0x1003d410
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x1003de40
    virtual void Copy(); // slot 11, 0x1003dec0
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void ProcessMove(); // slot 14, 0x10027590
    virtual void SetParentPos(); // slot 15, 0x10027450
};

class CMoveReduction@phy@neon : public CMoveReduction, public CMove, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100276f0
    virtual void Logic(); // slot 1, 0x10027780
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x1003d5c0
    virtual void vfunc_5(); // slot 5, 0x1003d410
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x1003de40
    virtual void Copy(); // slot 11, 0x1003dec0
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void ProcessMove(); // slot 14, 0x10027600
    virtual void SetParentPos(); // slot 15, 0x10027450
};

class CMsgDispatch@eco : public CMsgDispatch {
public:
    virtual void vfunc_0(); // slot 0, 0x10003700
};

class CObject@frw@neon : public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100037e0
    virtual void vfunc_1(); // slot 1, 0x1003d410
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x1003d5c0
    virtual void vfunc_5(); // slot 5, 0x1003d410
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x1003de40
    virtual void Copy(); // slot 11, 0x1003dec0
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
};

class CRLESurface@render@neon : public CRLESurface, public IDxSurface {
public:
    virtual void vfunc_0(); // slot 0, 0x10027c70
    virtual void GetSurfaceDesc(); // slot 1, 0x10013a90
    virtual void Fill(); // slot 2, 0x10013aa0
    virtual void Fill(); // slot 3, 0x10013aa0
    virtual void vfunc_4(); // slot 4, 0x1003d410
    virtual void GetD3DDevice(); // slot 5, 0x10013b10
    virtual void GetSurfacePointer(); // slot 6, 0x10013ab0
    virtual void GetWidth(); // slot 7, 0x10013ad0
    virtual void GetHeight(); // slot 8, 0x10013ae0
    virtual void GetBPP(); // slot 9, 0x10013af0
    virtual void GetPixelFormat(); // slot 10, 0x10027b00
    virtual void CalcVRAM(); // slot 11, 0x10046580
    virtual void GetD3DDevice(); // slot 12, 0x10013b10
    virtual void ApplyLinearFilter(); // slot 13, 0x10013b20
    virtual void Release(); // slot 14, 0x1002bb90
    virtual void Type(); // slot 15, 0x10013b00
    virtual void SetColorKey(); // slot 16, 0x10013b30
    virtual void Blt(); // slot 17, 0x10005870
    virtual void ApplyLinearFilter(); // slot 18, 0x10013b20
};

class CRadioButton@ctrl@neon : public CRadioButton, public CCheckButton, public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10012700
    virtual void Logic(); // slot 1, 0x10011320
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10010520
    virtual void SetEffectType(); // slot 15, 0x10010550
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x10010ca0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10010640
    virtual void OnMouseLeave(); // slot 29, 0x10010670
    virtual void OnMouseLbDown(); // slot 30, 0x10010580
    virtual void OnMouseLbUp(); // slot 31, 0x10011d50
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x10011650
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x100117e0
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x100108a0
    virtual void SetBtnActive(); // slot 50, 0x10010720
    virtual void Create(); // slot 51, 0x10011820
    virtual void SetCheck(); // slot 52, 0x10011cc0
};

class CResource@frw@neon : public CResource {
public:
    virtual void vfunc_0(); // slot 0, 0x10043150
};

class CResourceImpl@frw@neon : public CResourceImpl {
public:
    virtual void vfunc_0(); // slot 0, 0x10043ca0
};

class CScrollBar@ctrl@neon : public CScrollBar, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10006e20
    virtual void Logic(); // slot 1, 0x100016e0
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10001a90
    virtual void SetEffectType(); // slot 15, 0x10001b30
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x10006aa0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10002760
    virtual void OnMouseLeave(); // slot 29, 0x10002830
    virtual void OnMouseLbDown(); // slot 30, 0x100028f0
    virtual void OnMouseLbUp(); // slot 31, 0x100029a0
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10007f30
    virtual void OnMouseDrag(); // slot 35, 0x10002c80
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x10006fc0
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x100069b0
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x10008f20
};

class CSliderBar@ctrl@neon : public CSliderBar, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10009210
    virtual void Logic(); // slot 1, 0x100016e0
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x10009410
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10001a90
    virtual void SetEffectType(); // slot 15, 0x10001b30
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10002760
    virtual void OnMouseLeave(); // slot 29, 0x10002830
    virtual void OnMouseLbDown(); // slot 30, 0x100028f0
    virtual void OnMouseLbUp(); // slot 31, 0x100029a0
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x10002c80
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x10001720
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
};

class CSound@dev@neon : public CSound {
public:
    virtual void purecall(); // slot 0, 0x1004f610
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
    virtual void purecall(); // slot 3, 0x1004f610
    virtual void purecall(); // slot 4, 0x1004f610
    virtual void purecall(); // slot 5, 0x1004f610
    virtual void purecall(); // slot 6, 0x1004f610
    virtual void purecall(); // slot 7, 0x1004f610
    virtual void purecall(); // slot 8, 0x1004f610
    virtual void purecall(); // slot 9, 0x1004f610
    virtual void purecall(); // slot 10, 0x1004f610
    virtual void purecall(); // slot 11, 0x1004f610
    virtual void purecall(); // slot 12, 0x1004f610
    virtual void purecall(); // slot 13, 0x1004f610
    virtual void purecall(); // slot 14, 0x1004f610
    virtual void purecall(); // slot 15, 0x1004f610
    virtual void purecall(); // slot 16, 0x1004f610
    virtual void purecall(); // slot 17, 0x1004f610
    virtual void purecall(); // slot 18, 0x1004f610
    virtual void purecall(); // slot 19, 0x1004f610
    virtual void purecall(); // slot 20, 0x1004f610
    virtual void purecall(); // slot 21, 0x1004f610
    virtual void purecall(); // slot 22, 0x1004f610
    virtual void purecall(); // slot 23, 0x1004f610
    virtual void purecall(); // slot 24, 0x1004f610
    virtual void purecall(); // slot 25, 0x1004f610
    virtual void purecall(); // slot 26, 0x1004f610
    virtual void purecall(); // slot 27, 0x1004f610
    virtual void purecall(); // slot 28, 0x1004f610
    virtual void purecall(); // slot 29, 0x1004f610
    virtual void purecall(); // slot 30, 0x1004f610
    virtual void purecall(); // slot 31, 0x1004f610
    virtual void purecall(); // slot 32, 0x1004f610
    virtual void purecall(); // slot 33, 0x1004f610
    virtual void vfunc_34(); // slot 34, 0x1002e300
};

class CSprite@visual@neon : public CSprite, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10018280
    virtual void Logic(); // slot 1, 0x10016c30
    virtual void Output(); // slot 2, 0x10015170
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x10017d30
    virtual void Copy(); // slot 11, 0x10018e50
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void SetEffect(); // slot 14, 0x10013d50
    virtual void SetEffectType(); // slot 15, 0x10013db0
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10013e40
    virtual void SetInverse(); // slot 23, 0x100145c0
    virtual void SetPivot(); // slot 24, 0x10015f80
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10013e20
    virtual void SetAnimate(); // slot 27, 0x10016c40
    virtual void ApplyLinearFilter(); // slot 28, 0x10013b20
};

class CText@visual@neon : public CText, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a8f0
    virtual void vfunc_1(); // slot 1, 0x1003d410
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x10023800
    virtual void Copy(); // slot 11, 0x10022e90
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void SetEffect(); // slot 14, 0x1001fc10
    virtual void SetEffectType(); // slot 15, 0x1001fc30
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x1000acb0
    virtual void SetPosY(); // slot 21, 0x10020860
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10023030
};

class CTextWindow@ctrl@neon : public CTextWindow, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x1000c7e0
    virtual void Logic(); // slot 1, 0x100016e0
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1000a9d0
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10001a90
    virtual void SetEffectType(); // slot 15, 0x10001b30
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x1000acb0
    virtual void SetPosY(); // slot 21, 0x10020860
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x1000aa80
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10002760
    virtual void OnMouseLeave(); // slot 29, 0x10002830
    virtual void OnMouseLbDown(); // slot 30, 0x100028f0
    virtual void OnMouseLbUp(); // slot 31, 0x100029a0
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x1000d430
    virtual void OnMouseDrag(); // slot 35, 0x10002c80
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x10001720
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x1000b080
    virtual void Clear(); // slot 50, 0x1000c490
    virtual void ChangeValue(); // slot 51, 0x1000bc00
};

class CTile@visual@neon : public CTile, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10022180
    virtual void vfunc_1(); // slot 1, 0x1003d410
    virtual void Output(); // slot 2, 0x10021110
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x100210e0
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x10021dd0
    virtual void Copy(); // slot 11, 0x10022a40
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void SetEffect(); // slot 14, 0x10021040
    virtual void SetEffectType(); // slot 15, 0x10021050
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10021060
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x100210d0
    virtual void Release(); // slot 27, 0x10021490
};

class CVisual@visual@neon : public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100038b0
    virtual void vfunc_1(); // slot 1, 0x1003d410
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x10023800
    virtual void Copy(); // slot 11, 0x10022e90
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void SetEffect(); // slot 14, 0x10005860
    virtual void Blt(); // slot 15, 0x10005870
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10023030
};

class CWebBrowser@ctrl@neon : public CWebBrowser, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent, public IOleObj {
public:
    virtual void vfunc_0(); // slot 0, 0x1000f550
    virtual void Logic(); // slot 1, 0x1000fb00
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x1003d4f0
    virtual void OnFocus(); // slot 8, 0x1003d510
    virtual void IsIn(); // slot 9, 0x1003d420
    virtual void Clone(); // slot 10, 0x10023800
    virtual void Copy(); // slot 11, 0x10022e90
    virtual void CalcVRAM(); // slot 12, 0x10046580
    virtual void IsChildIn(); // slot 13, 0x1003d7f0
    virtual void SetEffect(); // slot 14, 0x10005860
    virtual void Blt(); // slot 15, 0x10005870
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x100015f0
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10023030
    virtual void Create(); // slot 27, 0x1000f8d0
    virtual void OnDestroy(); // slot 28, 0x1000ea60
};

class CWindow@ctrl@neon : public CWindow, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x1000fe70
    virtual void Logic(); // slot 1, 0x100016e0
    virtual void vfunc_2(); // slot 2, 0x1003d410
    virtual void vfunc_3(); // slot 3, 0x1003d410
    virtual void OnAttached(); // slot 4, 0x10023c70
    virtual void OnDetached(); // slot 5, 0x10022e80
    virtual void OnActivate(); // slot 6, 0x1003d4d0
    virtual void OnSelect(); // slot 7, 0x10001160
    virtual void OnFocus(); // slot 8, 0x10010190
    virtual void IsIn(); // slot 9, 0x10001100
    virtual void Clone(); // slot 10, 0x10001350
    virtual void Copy(); // slot 11, 0x10001400
    virtual void IsMyIn(); // slot 12, 0x10001880
    virtual void IsChildIn(); // slot 13, 0x10001d20
    virtual void SetEffect(); // slot 14, 0x10001a90
    virtual void SetEffectType(); // slot 15, 0x10001b30
    virtual void SetClipRect(); // slot 16, 0x10023940
    virtual void SetLocalClipRect(); // slot 17, 0x10023a10
    virtual void GetPosX(); // slot 18, 0x10023310
    virtual void GetPosY(); // slot 19, 0x10023450
    virtual void SetPosX(); // slot 20, 0x100235c0
    virtual void SetPosY(); // slot 21, 0x10023620
    virtual void SetShowRef(); // slot 22, 0x10023c90
    virtual void SetInverse(); // slot 23, 0x100015e0
    virtual void SetPivot(); // slot 24, 0x1000fe30
    virtual void SetUseParentRotation(); // slot 25, 0x10001610
    virtual void GetAlpha(); // slot 26, 0x10001340
    virtual void CreateVertexPool(); // slot 27, 0x10028220
    virtual void OnMouseOver(); // slot 28, 0x10002760
    virtual void OnMouseLeave(); // slot 29, 0x10002830
    virtual void OnMouseLbDown(); // slot 30, 0x10010250
    virtual void OnMouseLbUp(); // slot 31, 0x100029a0
    virtual void OnMouseRbDown(); // slot 32, 0x10002a50
    virtual void OnMouseRbUp(); // slot 33, 0x10002b00
    virtual void OnMouseWheel(); // slot 34, 0x10002bb0
    virtual void OnMouseDrag(); // slot 35, 0x10010330
    virtual void OnMouseMove(); // slot 36, 0x10002dd0
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002fc0
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003070
    virtual void OnReturn(); // slot 39, 0x10002d30
    virtual void OnKeyDown(); // slot 40, 0x10002e80
    virtual void OnKeyUp(); // slot 41, 0x10002f20
    virtual void SetActive(); // slot 42, 0x10001720
    virtual void SetSelect(); // slot 43, 0x10001140
    virtual void SetFocus(); // slot 44, 0x10002690
    virtual void ProcessMessage(); // slot 45, 0x100011a0
    virtual void AttachToolTip(); // slot 46, 0x10001230
    virtual void SetCanFocus(); // slot 47, 0x10001320
    virtual void GetCanFocus(); // slot 48, 0x10001330
    virtual void Create(); // slot 49, 0x10010020
    virtual void Create(); // slot 50, 0x1000fed0
};

class IInput {
public:
    virtual void purecall(); // slot 0, 0x1004f610
    virtual void purecall(); // slot 1, 0x1004f610
    virtual void purecall(); // slot 2, 0x1004f610
    virtual void purecall(); // slot 3, 0x1004f610
    virtual void purecall(); // slot 4, 0x1004f610
    virtual void purecall(); // slot 5, 0x1004f610
    virtual void purecall(); // slot 6, 0x1004f610
};

class IOleObj@util@neon : public IOleObj {
public:
    virtual void purecall(); // slot 0, 0x1004f610
};

class Image@Gdiplus : public Image, public GdiplusBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10038210
    virtual void vfunc_1(); // slot 1, 0x10038240
};

class LifetimeTracker@Internal@Loki : public LifetimeTracker {
public:
    virtual void purecall(); // slot 0, 0x1004f610
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100011c0
    virtual void what(); // slot 1, 0x1004f5dc
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100013d0
    virtual void vfunc_1(); // slot 1, 0x10001310
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100013d0
    virtual void vfunc_1(); // slot 1, 0x10001310
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100013d0
    virtual void vfunc_1(); // slot 1, 0x10001310
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100013d0
    virtual void vfunc_1(); // slot 1, 0x10001310
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x1004f590
};

}  // namespace neon9
