// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace neon4 {

class ?$CCompositeHolder;
class ?$CDelegate;
class ?$CEffectSrcAlpha;
class ?$CEffectTransparent;
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
class CActor;
class CApp;
class CAppManager;
class CAvtr2004dx;
class CAvtrId;
class CAvtrPartPool;
class CButton;
class CCheckBox;
class CCheckButton;
class CComponent;
class CControl;
class CDDDisplay;
class CDDDraw;
class CDDSurface;
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
class CGSurface;
class CHgAniSurfaceList;
class CHgDxAniSurfaceList;
class CInput;
class CLine;
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
class IDxDraw;
class IDxEffect;
class IDxSurface;
class IOleObj;
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
    virtual void vfunc_0(); // slot 0, 0x10005520
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
    virtual void vfunc_3(); // slot 3, 0x100d1af0
};

class ?$CDelegate@HU?$Typelist@ABVCOP_Drag@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x10007b30
};

class ?$CDelegate@HU?$Typelist@ABVCOP_LDown@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x10009c60
};

class ?$CDelegate@HU?$Typelist@ABVCOP_LUp@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x10007b10
};

class ?$CDelegate@HU?$Typelist@ABVCOP_ThumbMove@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@eco : public ?$CDelegate {
public:
    virtual void vfunc_0(); // slot 0, 0x1000d4b0
};

class ?$CEffectSrcAlpha@VCEffectAdd@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d30b0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectAlpha@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d2f20
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectAlphaGray@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d2f70
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectDarken@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3330
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectDifferent@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d32e0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectDodge@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d31a0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectDodgeBurn@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3240
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectGray@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3150
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectLighten@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3290
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectMultiply@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3380
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectRGBAdd@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d2fc0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectRGBMulti@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3060
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectRGBSub@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3010
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectScreen@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d31f0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectSrcAlpha@VCEffectSrcCopy@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2560
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class ?$CEffectSrcAlpha@VCEffectSub@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectSrcAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3400
    virtual void vfunc_1(); // slot 1, 0x100d2020
    virtual void vfunc_2(); // slot 2, 0x100d3100
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d20d0
    virtual void vfunc_5(); // slot 5, 0x100d20e0
    virtual void vfunc_6(); // slot 6, 0x100d2030
};

class ?$CEffectTransparent@VCEffectAdd@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2bb0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectAlpha@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2a20
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectAlphaGray@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2a70
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectDarken@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2e30
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectDifferent@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2de0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectDodge@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2ca0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectDodgeBurn@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2d40
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectGray@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2c50
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectLighten@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2d90
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectMultiply@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2e80
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectRGBAdd@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2ac0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectRGBMulti@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2b60
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectRGBSub@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2b10
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectScreen@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2cf0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectSrcCopy@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2ed0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CEffectTransparent@VCEffectSub@dd_effect@render@neon@@@dd_effect@render@neon : public ?$CEffectTransparent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d33d0
    virtual void vfunc_1(); // slot 1, 0x100d1f80
    virtual void vfunc_2(); // slot 2, 0x100d2c00
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1f30
    virtual void vfunc_5(); // slot 5, 0x100d1d70
    virtual void vfunc_6(); // slot 6, 0x100d1fd0
};

class ?$CFlyweightFactory@PAUHFONT__@@VCFontTrait@frw@neon@@UFontCreator@34@UFontDeleter@34@VCCriticalSection@util@4@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x100eae70
    virtual void vfunc_1(); // slot 1, 0x100e95a0
    virtual void vfunc_2(); // slot 2, 0x100e92b0
    virtual void vfunc_3(); // slot 3, 0x100e9970
    virtual void vfunc_4(); // slot 4, 0x100e9750
    virtual void vfunc_5(); // slot 5, 0x100e9870
    virtual void vfunc_6(); // slot 6, 0x100e9300
};

class ?$CFlyweightFactory@PAUHFONT__@@VCFontTrait@frw@neon@@UFontCreator@34@UFontDeleter@34@VCEmptyLock@util@4@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x100eaeb0
    virtual void vfunc_1(); // slot 1, 0x100ea8d0
    virtual void vfunc_2(); // slot 2, 0x100e92b0
    virtual void vfunc_3(); // slot 3, 0x100eabb0
    virtual void vfunc_4(); // slot 4, 0x100eaa30
    virtual void vfunc_5(); // slot 5, 0x100eaaf0
    virtual void vfunc_6(); // slot 6, 0x100ea830
};

class ?$CFlyweightFactory@PAVIDxSurface@@USurfaceDesc@@UBmpFromSDCreator@frw@neon@@UIDxSurfaceDeleter@45@VCCriticalSection@util@5@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x100eae50
    virtual void vfunc_1(); // slot 1, 0x100e8650
    virtual void vfunc_2(); // slot 2, 0x100e8510
    virtual void vfunc_3(); // slot 3, 0x100e8a20
    virtual void vfunc_4(); // slot 4, 0x100e8800
    virtual void vfunc_5(); // slot 5, 0x100e8920
    virtual void vfunc_6(); // slot 6, 0x100e8560
};

class ?$CFlyweightFactory@PAVIDxSurface@@USurfaceDesc@@UBmpFromSDCreator@frw@neon@@UIDxSurfaceDeleter@45@VCEmptyLock@util@5@@eco : public ?$CFlyweightFactory, public ?$IFlyweightFactory {
public:
    virtual void vfunc_0(); // slot 0, 0x100eae90
    virtual void vfunc_1(); // slot 1, 0x100ea1b0
    virtual void vfunc_2(); // slot 2, 0x100e8510
    virtual void vfunc_3(); // slot 3, 0x100ea490
    virtual void vfunc_4(); // slot 4, 0x100ea320
    virtual void vfunc_5(); // slot 5, 0x100ea3e0
    virtual void vfunc_6(); // slot 6, 0x100e9fa0
};

class ?$CManagedPoolImpl@VCCriticalSection@util@neon@@@frw@neon : public ?$CManagedPoolImpl, public CManagedPool {
public:
    virtual void vfunc_0(); // slot 0, 0x100eb700
    virtual void vfunc_1(); // slot 1, 0x100ebac0
    virtual void vfunc_2(); // slot 2, 0x100ebb80
    virtual void vfunc_3(); // slot 3, 0x100ebc30
};

class ?$CManagedPoolImpl@VCEmptyLock@util@neon@@@frw@neon : public ?$CManagedPoolImpl, public CManagedPool {
public:
    virtual void vfunc_0(); // slot 0, 0x100eb700
    virtual void vfunc_1(); // slot 1, 0x100eba00
    virtual void vfunc_2(); // slot 2, 0x100eba70
    virtual void vfunc_3(); // slot 3, 0x100eb380
};

class ?$CMemFunction@VCSprite@visual@neon@@XH@util@neon : public ?$CMemFunction, public ?$IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x10015d60
    virtual void vfunc_1(); // slot 1, 0x10015d70
};

class ?$CMixer@VCSound@dev@neon@@VCCriticalSection@util@3@@kiki : public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x100d6e90
    virtual void Load(); // slot 1, 0x100db1a0
    virtual void Load(); // slot 2, 0x100d6980
    virtual void LoadBGM(); // slot 3, 0x100d6a60
    virtual void UnLoad(); // slot 4, 0x100d7f70
    virtual void UnLoad(); // slot 5, 0x100d80b0
    virtual void FSoundOnEndOfStream(); // slot 6, 0x100da2a0
    virtual void SetEndCallback(); // slot 7, 0x100db4c0
    virtual void CheckSample(); // slot 8, 0x100d89b0
    virtual void SetEFXVolume(); // slot 9, 0x100da2e0
    virtual void SetBGMVolume(); // slot 10, 0x100da330
    virtual void SetVOXVolume(); // slot 11, 0x100da380
    virtual void GetBGMVolume(); // slot 12, 0x100d7080
    virtual void Play(); // slot 13, 0x100db610
    virtual void PlayBGM(); // slot 14, 0x100db850
    virtual void Play3D(); // slot 15, 0x100d9f80
    virtual void Set3DChannelAttr(); // slot 16, 0x100d8900
    virtual void Stop(); // slot 17, 0x100da3d0
    virtual void Stop(); // slot 18, 0x100d7090
    virtual void StopEFX(); // slot 19, 0x100da4f0
    virtual void StopBGM(); // slot 20, 0x100da090
    virtual void StopBGM(); // slot 21, 0x100da1b0
    virtual void StopVOX(); // slot 22, 0x100da500
    virtual void FadeBGM(); // slot 23, 0x100d9e70
    virtual void FadeBGM(); // slot 24, 0x100d7ec0
    virtual void SetCrossfadeTime(); // slot 25, 0x100d6a50
    virtual void DestroyChannel(); // slot 26, 0x100d8200
    virtual void Work(); // slot 27, 0x100dbb40
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x100d7170
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x100d6ac0
    virtual void purecall(); // slot 30, 0x100f8770
    virtual void purecall(); // slot 31, 0x100f8770
    virtual void purecall(); // slot 32, 0x100f8770
    virtual void purecall(); // slot 33, 0x100f8770
    virtual void vfunc_34(); // slot 34, 0x100de4f0
};

class ?$CMixer@VCSound@dev@neon@@VCEmptyLock@util@3@@kiki : public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x100d7180
    virtual void Load(); // slot 1, 0x100dbee0
    virtual void Load(); // slot 2, 0x100d6980
    virtual void LoadBGM(); // slot 3, 0x100d6a60
    virtual void UnLoad(); // slot 4, 0x100d8390
    virtual void UnLoad(); // slot 5, 0x100d84d0
    virtual void FSoundOnEndOfStream(); // slot 6, 0x100da940
    virtual void SetEndCallback(); // slot 7, 0x100dc1d0
    virtual void CheckSample(); // slot 8, 0x100d90a0
    virtual void SetEFXVolume(); // slot 9, 0x100da980
    virtual void SetBGMVolume(); // slot 10, 0x100da9d0
    virtual void SetVOXVolume(); // slot 11, 0x100daa20
    virtual void GetBGMVolume(); // slot 12, 0x100d73a0
    virtual void Play(); // slot 13, 0x100dc320
    virtual void PlayBGM(); // slot 14, 0x100dc560
    virtual void Play3D(); // slot 15, 0x100da620
    virtual void Set3DChannelAttr(); // slot 16, 0x100d8ff0
    virtual void Stop(); // slot 17, 0x100daa70
    virtual void Stop(); // slot 18, 0x100d7090
    virtual void StopEFX(); // slot 19, 0x100dab90
    virtual void StopBGM(); // slot 20, 0x100da730
    virtual void StopBGM(); // slot 21, 0x100da850
    virtual void StopVOX(); // slot 22, 0x100daba0
    virtual void FadeBGM(); // slot 23, 0x100da510
    virtual void FadeBGM(); // slot 24, 0x100d82e0
    virtual void SetCrossfadeTime(); // slot 25, 0x10022150
    virtual void DestroyChannel(); // slot 26, 0x100d8620
    virtual void Work(); // slot 27, 0x100dc850
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x100d73b0
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x100d6ac0
    virtual void purecall(); // slot 30, 0x100f8770
    virtual void purecall(); // slot 31, 0x100f8770
    virtual void purecall(); // slot 32, 0x100f8770
    virtual void purecall(); // slot 33, 0x100f8770
    virtual void vfunc_34(); // slot 34, 0x100de550
};

class ?$CNeonMixer@VCSound@dev@neon@@VCCriticalSection@util@3@ : public ?$CNeonMixer, public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x100d6e90
    virtual void Load(); // slot 1, 0x100db1a0
    virtual void Load(); // slot 2, 0x100d6980
    virtual void LoadBGM(); // slot 3, 0x100d6a60
    virtual void UnLoad(); // slot 4, 0x100d7f70
    virtual void UnLoad(); // slot 5, 0x100d80b0
    virtual void FSoundOnEndOfStream(); // slot 6, 0x100da2a0
    virtual void SetEndCallback(); // slot 7, 0x100db4c0
    virtual void CheckSample(); // slot 8, 0x100d89b0
    virtual void SetEFXVolume(); // slot 9, 0x100da2e0
    virtual void SetBGMVolume(); // slot 10, 0x100da330
    virtual void SetVOXVolume(); // slot 11, 0x100da380
    virtual void GetBGMVolume(); // slot 12, 0x100d7080
    virtual void Play(); // slot 13, 0x100db610
    virtual void PlayBGM(); // slot 14, 0x100db850
    virtual void Play3D(); // slot 15, 0x100d9f80
    virtual void Set3DChannelAttr(); // slot 16, 0x100d8900
    virtual void Stop(); // slot 17, 0x100da3d0
    virtual void Stop(); // slot 18, 0x100d7090
    virtual void StopEFX(); // slot 19, 0x100da4f0
    virtual void StopBGM(); // slot 20, 0x100da090
    virtual void StopBGM(); // slot 21, 0x100da1b0
    virtual void StopVOX(); // slot 22, 0x100da500
    virtual void FadeBGM(); // slot 23, 0x100d9e70
    virtual void FadeBGM(); // slot 24, 0x100d7ec0
    virtual void SetCrossfadeTime(); // slot 25, 0x100d6a50
    virtual void DestroyChannel(); // slot 26, 0x100d8200
    virtual void Work(); // slot 27, 0x100dbb40
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x100d7170
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x100d6ac0
    virtual void DestroySoundData(); // slot 30, 0x100d9c50
    virtual void LoadSound(); // slot 31, 0x100dcc00
    virtual void LoadSound(); // slot 32, 0x100d6c50
    virtual void Close(); // slot 33, 0x100d6c30
    virtual void vfunc_34(); // slot 34, 0x100de960
};

class ?$CNeonMixer@VCSound@dev@neon@@VCEmptyLock@util@3@ : public ?$CNeonMixer, public ?$CMixer, public CSound {
public:
    virtual void Init(); // slot 0, 0x100d7180
    virtual void Load(); // slot 1, 0x100dbee0
    virtual void Load(); // slot 2, 0x100d6980
    virtual void LoadBGM(); // slot 3, 0x100d6a60
    virtual void UnLoad(); // slot 4, 0x100d8390
    virtual void UnLoad(); // slot 5, 0x100d84d0
    virtual void FSoundOnEndOfStream(); // slot 6, 0x100da940
    virtual void SetEndCallback(); // slot 7, 0x100dc1d0
    virtual void CheckSample(); // slot 8, 0x100d90a0
    virtual void SetEFXVolume(); // slot 9, 0x100da980
    virtual void SetBGMVolume(); // slot 10, 0x100da9d0
    virtual void SetVOXVolume(); // slot 11, 0x100daa20
    virtual void GetBGMVolume(); // slot 12, 0x100d73a0
    virtual void Play(); // slot 13, 0x100dc320
    virtual void PlayBGM(); // slot 14, 0x100dc560
    virtual void Play3D(); // slot 15, 0x100da620
    virtual void Set3DChannelAttr(); // slot 16, 0x100d8ff0
    virtual void Stop(); // slot 17, 0x100daa70
    virtual void Stop(); // slot 18, 0x100d7090
    virtual void StopEFX(); // slot 19, 0x100dab90
    virtual void StopBGM(); // slot 20, 0x100da730
    virtual void StopBGM(); // slot 21, 0x100da850
    virtual void StopVOX(); // slot 22, 0x100daba0
    virtual void FadeBGM(); // slot 23, 0x100da510
    virtual void FadeBGM(); // slot 24, 0x100d82e0
    virtual void SetCrossfadeTime(); // slot 25, 0x10022150
    virtual void DestroyChannel(); // slot 26, 0x100d8620
    virtual void Work(); // slot 27, 0x100dc850
    virtual void SetAutoUnLoadBGM(); // slot 28, 0x100d73b0
    virtual void GetFilenameFromFullPathName(); // slot 29, 0x100d6ac0
    virtual void DestroySoundData(); // slot 30, 0x100d9cf0
    virtual void LoadSound(); // slot 31, 0x100dcf20
    virtual void LoadSound(); // slot 32, 0x100d6c50
    virtual void Close(); // slot 33, 0x100d6c30
    virtual void vfunc_34(); // slot 34, 0x100de9c0
};

class ?$ConcreteLifetimeTracker@V?$AllocatorSingleton@VClassLevelLockable@Loki@@$0BAAA@$0BAA@$03UDieAsSmallObjectParent@LongevityLifetime@2@VMutex@2@@Loki@@U?$Adapter@V?$AllocatorSingleton@VClassLevelLockable@Loki@@$0BAAA@$0BAA@$03UDieAsSmallObjectParent@LongevityLifetime@2@VMutex@2@@Loki@@@Internal@2@@Internal@Loki : public ?$ConcreteLifetimeTracker, public LifetimeTracker {
public:
    virtual void vfunc_0(); // slot 0, 0x10001870
};

class ?$FunctorHandler@V?$Functor@XVNullType@Loki@@VClassLevelLockable@2@@Loki@@P6AXXZ@Loki : public ?$FunctorHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000fe80
    virtual void vfunc_1(); // slot 1, 0x1000fe50
    virtual void vfunc_2(); // slot 2, 0x1000edc0
    virtual void vfunc_3(); // slot 3, 0x1000ee00
};

class ?$FunctorImplBase@HVClassLevelLockable@Loki@@@Internal@Loki : public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x10008030
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
};

class ?$FunctorImplBase@JVClassLevelLockable@Loki@@@Internal@Loki : public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100df6c0
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
};

class ?$FunctorImplBase@XVClassLevelLockable@Loki@@@Internal@Loki : public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000fe00
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_Drag@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCScrollBar@ctrl@neon@@P8345@AEHABVCOP_Drag@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100080e0
    virtual void vfunc_1(); // slot 1, 0x100080b0
    virtual void vfunc_2(); // slot 2, 0x100065e0
    virtual void vfunc_3(); // slot 3, 0x10009a80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_Drag@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCSliderBar@ctrl@neon@@P8345@AEHABVCOP_Drag@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100080e0
    virtual void vfunc_1(); // slot 1, 0x1000a060
    virtual void vfunc_2(); // slot 2, 0x100065e0
    virtual void vfunc_3(); // slot 3, 0x10009a80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_LDown@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCSliderBar@ctrl@neon@@P8345@AEHABVCOP_LDown@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100080e0
    virtual void vfunc_1(); // slot 1, 0x1000a030
    virtual void vfunc_2(); // slot 2, 0x100065e0
    virtual void vfunc_3(); // slot 3, 0x10009a80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_LUp@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCScrollBar@ctrl@neon@@P8345@AEHABVCOP_LUp@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100080e0
    virtual void vfunc_1(); // slot 1, 0x10008080
    virtual void vfunc_2(); // slot 2, 0x100065e0
    virtual void vfunc_3(); // slot 3, 0x10009a80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_LUp@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCSliderBar@ctrl@neon@@P8345@AEHABVCOP_LUp@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100080e0
    virtual void vfunc_1(); // slot 1, 0x1000a000
    virtual void vfunc_2(); // slot 2, 0x100065e0
    virtual void vfunc_3(); // slot 3, 0x10009a80
};

class ?$MemFunHandler@V?$Functor@HU?$Typelist@ABVCOP_ThumbMove@ctrl@neon@@VNullType@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCTextWindow@ctrl@neon@@P8345@AEHABVCOP_ThumbMove@45@@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x1000d8c0
    virtual void vfunc_1(); // slot 1, 0x1000d890
    virtual void vfunc_2(); // slot 2, 0x1000ba70
    virtual void vfunc_3(); // slot 3, 0x1000bad0
};

class ?$MemFunHandler@V?$Functor@JU?$Typelist@PAUHWND__@@U?$Typelist@IU?$Typelist@IU?$Typelist@JU?$Typelist@AA_NVNullType@Loki@@@Loki@@@Loki@@@Loki@@@Loki@@@Loki@@VClassLevelLockable@2@@Loki@@PAVCApp@frw@neon@@P8345@AEJPAUHWND__@@IIJAA_N@Z@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100df670
    virtual void vfunc_1(); // slot 1, 0x100df640
    virtual void vfunc_2(); // slot 2, 0x100065e0
    virtual void vfunc_3(); // slot 3, 0x10009a80
};

class ?$MemFunHandler@V?$Functor@XVNullType@Loki@@VClassLevelLockable@2@@Loki@@PAVCAppManager@frw@neon@@P8345@AEXXZ@Loki : public ?$MemFunHandler, public ?$FunctorImpl, public ?$FunctorImplBase, public ?$SmallValueObject, public ?$SmallObjectBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100e5470
    virtual void vfunc_1(); // slot 1, 0x100e5440
    virtual void vfunc_2(); // slot 2, 0x100065e0
    virtual void vfunc_3(); // slot 3, 0x100e5430
};

class Bitmap@Gdiplus : public Bitmap, public Image, public GdiplusBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3ee0
    virtual void vfunc_1(); // slot 1, 0x100d44c0
};

class CActor@phy@neon : public CActor, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10027830
    virtual void Logic(); // slot 1, 0x10027890
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10024230
    virtual void Copy(); // slot 11, 0x100238c0
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x100056c0
    virtual void Blt(); // slot 15, 0x100056d0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10023a60
};

class CApp@frw@neon : public CApp {
public:
    virtual void vfunc_0(); // slot 0, 0x100def60
};

class CAppManager@frw@neon : public CAppManager {
public:
    virtual void vfunc_0(); // slot 0, 0x100deb20
};

class CAvatar : public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10024d00
    virtual void Logic(); // slot 1, 0x10024eb0
    virtual void Output(); // slot 2, 0x10024f80
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10024230
    virtual void Copy(); // slot 11, 0x100238c0
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x100056c0
    virtual void Blt(); // slot 15, 0x100056d0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x10024930
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10023a60
};

class CAvtr2004dx@DXAvatar : public CAvtr2004dx, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x10024840
    virtual void GetD3DDevice(); // slot 1, 0x10015240
    virtual void Restore(); // slot 2, 0x100efa40
};

class CAvtrId@DXAvatar : public CAvtrId, public ?$vector, public ?$_Vector_val, public ?$_Container_base_aux_alloc_real, public _Container_base_aux {
public:
    virtual void vfunc_0(); // slot 0, 0x10026c20
};

class CAvtrPartPool@DXAvatar : public CAvtrPartPool, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x100ef830
    virtual void GetD3DDevice(); // slot 1, 0x10015240
    virtual void Restore(); // slot 2, 0x100f2400
};

class CButton@ctrl@neon : public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10006350
    virtual void Logic(); // slot 1, 0x10010940
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10010670
    virtual void SetEffectType(); // slot 15, 0x100106a0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x100108d0
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10010790
    virtual void OnMouseLeave(); // slot 29, 0x100107c0
    virtual void OnMouseLbDown(); // slot 30, 0x100106d0
    virtual void OnMouseLbUp(); // slot 31, 0x10010740
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x100107f0
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x100113e0
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x100109f0
    virtual void SetBtnActive(); // slot 50, 0x10010870
};

class CCheckBox@ctrl@neon : public CCheckBox, public CCheckButton, public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10010df0
    virtual void Logic(); // slot 1, 0x10011430
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10010670
    virtual void SetEffectType(); // slot 15, 0x100106a0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10011930
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10010790
    virtual void OnMouseLeave(); // slot 29, 0x100107c0
    virtual void OnMouseLbDown(); // slot 30, 0x100106d0
    virtual void OnMouseLbUp(); // slot 31, 0x10011660
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x10011760
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x10010db0
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x100109f0
    virtual void SetBtnActive(); // slot 50, 0x10010870
    virtual void Create(); // slot 51, 0x10010e50
    virtual void SetCheck(); // slot 52, 0x10011400
};

class CCheckButton@ctrl@neon : public CCheckButton, public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10010bd0
    virtual void Logic(); // slot 1, 0x10011430
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10010670
    virtual void SetEffectType(); // slot 15, 0x100106a0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x100108d0
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10010790
    virtual void OnMouseLeave(); // slot 29, 0x100107c0
    virtual void OnMouseLbDown(); // slot 30, 0x100106d0
    virtual void OnMouseLbUp(); // slot 31, 0x10011660
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x10011760
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x100113e0
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x100109f0
    virtual void SetBtnActive(); // slot 50, 0x10010870
    virtual void Create(); // slot 51, 0x10011490
    virtual void SetCheck(); // slot 52, 0x10011400
};

class CComponent@frw@neon : public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10003700
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
    virtual void vfunc_3(); // slot 3, 0x100d1af0
};

class CControl@ctrl@neon : public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10003170
    virtual void Logic(); // slot 1, 0x100016f0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10001aa0
    virtual void SetEffectType(); // slot 15, 0x10001b40
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10002710
    virtual void OnMouseLeave(); // slot 29, 0x100027e0
    virtual void OnMouseLbDown(); // slot 30, 0x100028a0
    virtual void OnMouseLbUp(); // slot 31, 0x10002950
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x10002c30
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x10001730
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
};

class CDDDisplay@render@neon : public CDDDisplay, public IDxDevice {
public:
    virtual void vfunc_0(); // slot 0, 0x100cf360
    virtual void Init(); // slot 1, 0x10068ee0
    virtual void SetVSyncWait(); // slot 2, 0x100cef20
    virtual void GetVSyncWait(); // slot 3, 0x100cef30
    virtual void GetWidth(); // slot 4, 0x100ceee0
    virtual void GetHeight(); // slot 5, 0x100ceef0
    virtual void GetBPP(); // slot 6, 0x100cef00
    virtual void IsWindowMode(); // slot 7, 0x100cef10
    virtual void ChangeDisplayMode(); // slot 8, 0x10028e40
    virtual void ApplyLinearFilter(); // slot 9, 0x10015380
    virtual void ApplyLinearFilter(); // slot 10, 0x10015380
    virtual void Draw(); // slot 11, 0x100cd840
    virtual void RenderScene(); // slot 12, 0x100d0230
    virtual void PostRender(); // slot 13, 0x100c13a0
    virtual void CreateSurface(); // slot 14, 0x1002b760
    virtual void CreateDraw(); // slot 15, 0x10029000
    virtual void Release(); // slot 16, 0x10015250
    virtual void Process_WM_PAINT(); // slot 17, 0x1002b4f0
    virtual void AddClipRgn(); // slot 18, 0x100cf420
    virtual void RemoveClipRgn(); // slot 19, 0x100cf4a0
    virtual void CalcVRAM(); // slot 20, 0x10028fc0
    virtual void Is32bppTextureAvailable(); // slot 21, 0x10028e30
    virtual void RenderListClear(); // slot 22, 0x1009a4a0
    virtual void ApplyLinearFilter(); // slot 23, 0x10015380
    virtual void GetD3DDevice(); // slot 24, 0x10015240
    virtual void DestroyObjects(); // slot 25, 0x10028db0
};

class CDDDraw@render@neon : public CDDDraw, public IDxDraw {
public:
    virtual void vfunc_0(); // slot 0, 0x100d1970
    virtual void vfunc_1(); // slot 1, 0x100d08f0
    virtual void ApplyLinearFilter(); // slot 2, 0x10015380
    virtual void vfunc_3(); // slot 3, 0x100d0510
    virtual void vfunc_4(); // slot 4, 0x100d09a0
    virtual void vfunc_5(); // slot 5, 0x100d0590
    virtual void vfunc_6(); // slot 6, 0x100d05b0
    virtual void vfunc_7(); // slot 7, 0x100d17d0
    virtual void vfunc_8(); // slot 8, 0x100d05e0
    virtual void vfunc_9(); // slot 9, 0x100d0f80
    virtual void vfunc_10(); // slot 10, 0x100d17e0
    virtual void vfunc_11(); // slot 11, 0x100d17f0
    virtual void DirtyRectList(); // slot 12, 0x100d35c0
    virtual void vfunc_13(); // slot 13, 0x100d0610
    virtual void vfunc_14(); // slot 14, 0x100d0620
    virtual void vfunc_15(); // slot 15, 0x100d0630
    virtual void vfunc_16(); // slot 16, 0x100d0640
    virtual void Release(); // slot 17, 0x10015250
    virtual void vfunc_18(); // slot 18, 0x100d1a30
    virtual void vfunc_19(); // slot 19, 0x100d1800
};

class CDDSurface@render@neon : public CDDSurface, public IDxSurface, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3fc0
    virtual void DirtyRectList(); // slot 1, 0x100d35c0
    virtual void vfunc_2(); // slot 2, 0x100d3be0
    virtual void vfunc_3(); // slot 3, 0x100d3c40
    virtual void vfunc_4(); // slot 4, 0x100d3ca0
    virtual void vfunc_5(); // slot 5, 0x100d35d0
    virtual void vfunc_6(); // slot 6, 0x100d35e0
    virtual void vfunc_7(); // slot 7, 0x100d35f0
    virtual void vfunc_8(); // slot 8, 0x100d3600
    virtual void vfunc_9(); // slot 9, 0x100d45b0
    virtual void GetPixelFormat(); // slot 10, 0x10028ba0
    virtual void vfunc_11(); // slot 11, 0x100d3ab0
    virtual void vfunc_12(); // slot 12, 0x100d3bb0
    virtual void vfunc_13(); // slot 13, 0x100d3b60
    virtual void Release(); // slot 14, 0x10015250
    virtual void GetD3DDevice(); // slot 15, 0x10015240
    virtual void vfunc_16(); // slot 16, 0x100d4280
    virtual void vfunc_17(); // slot 17, 0x100d3c00
    virtual void vfunc_18(); // slot 18, 0x100d34a0
    virtual void vfunc_19(); // slot 19, 0x100d4510
    virtual void vfunc_20(); // slot 20, 0x100d4190
};

class CDxAvatar : public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10027010
    virtual void Logic(); // slot 1, 0x100271f0
    virtual void Output(); // slot 2, 0x100272b0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10024230
    virtual void Copy(); // slot 11, 0x100238c0
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x100056c0
    virtual void Blt(); // slot 15, 0x100056d0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x10026f90
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10023a60
};

class CDxAvtr2004@DXAvatar : public CDxAvtr2004, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x10026e70
    virtual void GetD3DDevice(); // slot 1, 0x10015240
    virtual void Restore(); // slot 2, 0x100eee10
};

class CDxAvtrPartPool@DXAvatar : public CDxAvtrPartPool, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x100deab0
    virtual void GetD3DDevice(); // slot 1, 0x10015240
    virtual void Restore(); // slot 2, 0x100f48f0
};

class CEdit@ctrl@neon : public CEdit, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10004e30
    virtual void Logic(); // slot 1, 0x100016f0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x10003d30
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10001aa0
    virtual void SetEffectType(); // slot 15, 0x10001b40
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x100035e0
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10002710
    virtual void OnMouseLeave(); // slot 29, 0x100027e0
    virtual void OnMouseLbDown(); // slot 30, 0x10003d90
    virtual void OnMouseLbUp(); // slot 31, 0x10002950
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x10002c30
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10005090
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x10001730
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x100035c0
    virtual void ProcessMessage(); // slot 45, 0x100060f0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x10003b30
    virtual void CreateCursor(); // slot 50, 0x100033e0
    virtual void CreateFontA(); // slot 51, 0x10003980
    virtual void CreateTextTile(); // slot 52, 0x100039f0
    virtual void Update(); // slot 53, 0x10004500
};

class CEffectAbstract@dd_effect@render@neon : public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void purecall(); // slot 2, 0x100f8770
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void purecall(); // slot 5, 0x100f8770
    virtual void purecall(); // slot 6, 0x100f8770
};

class CEffectAdd@dd_effect@render@neon : public CEffectAdd, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2190
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectAlpha@dd_effect@render@neon : public CEffectAlpha, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2130
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectAlphaGray@dd_effect@render@neon : public CEffectAlphaGray, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2250
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectDarken@dd_effect@render@neon : public CEffectDarken, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2390
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectDifferent@dd_effect@render@neon : public CEffectDifferent, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d23d0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectDodge@dd_effect@render@neon : public CEffectDodge, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2290
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectDodgeBurn@dd_effect@render@neon : public CEffectDodgeBurn, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2310
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectGray@dd_effect@render@neon : public CEffectGray, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2210
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectLighten@dd_effect@render@neon : public CEffectLighten, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d2350
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectMultiply@dd_effect@render@neon : public CEffectMultiply, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1b00
    virtual void vfunc_2(); // slot 2, 0x100d2520
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectRGBAdd@dd_effect@render@neon : public CEffectRGBAdd, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1b00
    virtual void vfunc_2(); // slot 2, 0x100d2410
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectRGBMulti@dd_effect@render@neon : public CEffectRGBMulti, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d24b0
    virtual void vfunc_2(); // slot 2, 0x100d24d0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectRGBSub@dd_effect@render@neon : public CEffectRGBSub, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d24b0
    virtual void vfunc_2(); // slot 2, 0x100d2460
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectScreen@dd_effect@render@neon : public CEffectScreen, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d22d0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectSrcCopy@dd_effect@render@neon : public CEffectSrcCopy, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d20f0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffectSub@dd_effect@render@neon : public CEffectSub, public CEffectAbstract, public IDxEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100d2170
    virtual void vfunc_1(); // slot 1, 0x100d1ab0
    virtual void vfunc_2(); // slot 2, 0x100d21d0
    virtual void Release(); // slot 3, 0x10015250
    virtual void vfunc_4(); // slot 4, 0x100d1aa0
    virtual void vfunc_5(); // slot 5, 0x100d1ae0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
};

class CEffector@phy@neon : public CEffector, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10027e50
    virtual void Logic(); // slot 1, 0x10027eb0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100e5a80
    virtual void vfunc_5(); // slot 5, 0x100d1af0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x100e5fc0
    virtual void Copy(); // slot 11, 0x100e6040
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void OnFinish(); // slot 14, 0x10027ff0
};

class CFile@h2p : public CFile {
public:
    virtual void vfunc_0(); // slot 0, 0x100e5230
};

class CFileManager@frw@neon : public CFileManager {
public:
    virtual void vfunc_0(); // slot 0, 0x100e0810
};

class CFrame@CSprite@visual@neon : public CFrame {
public:
    virtual void vfunc_0(); // slot 0, 0x10015f10
};

class CFrameEffect@CSprite@visual@neon : public CFrameEffect {
public:
    virtual void vfunc_0(); // slot 0, 0x100158f0
};

class CGSurface@render@neon : public CGSurface, public CDDSurface, public IDxSurface, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x100d48b0
    virtual void DirtyRectList(); // slot 1, 0x100d35c0
    virtual void vfunc_2(); // slot 2, 0x100d47e0
    virtual void vfunc_3(); // slot 3, 0x100d4810
    virtual void vfunc_4(); // slot 4, 0x100d4830
    virtual void vfunc_5(); // slot 5, 0x100d4780
    virtual void vfunc_6(); // slot 6, 0x100d47a0
    virtual void vfunc_7(); // slot 7, 0x100d35f0
    virtual void vfunc_8(); // slot 8, 0x100d3600
    virtual void vfunc_9(); // slot 9, 0x100d45b0
    virtual void vfunc_10(); // slot 10, 0x100d4850
    virtual void vfunc_11(); // slot 11, 0x100d3ab0
    virtual void vfunc_12(); // slot 12, 0x100d3bb0
    virtual void vfunc_13(); // slot 13, 0x100d3b60
    virtual void Release(); // slot 14, 0x10015250
    virtual void vfunc_15(); // slot 15, 0x100d47c0
    virtual void SetColorKey(); // slot 16, 0x10015260
    virtual void vfunc_17(); // slot 17, 0x100d4870
    virtual void vfunc_18(); // slot 18, 0x100d4890
    virtual void vfunc_19(); // slot 19, 0x100d4d10
    virtual void vfunc_20(); // slot 20, 0x100d4750
};

class CHgAniSurfaceList@DXAvatar : public CHgAniSurfaceList {
public:
    virtual void vfunc_0(); // slot 0, 0x100f64d0
};

class CHgDxAniSurfaceList@DXAvatar : public CHgDxAniSurfaceList {
public:
    virtual void vfunc_0(); // slot 0, 0x100f7c50
};

class CInput@dev@neon : public CInput, public IInput {
public:
    virtual void vfunc_0(); // slot 0, 0x100d6740
    virtual void vfunc_1(); // slot 1, 0x100d6750
    virtual void vfunc_2(); // slot 2, 0x100d6760
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void vfunc_4(); // slot 4, 0x100d6780
    virtual void vfunc_5(); // slot 5, 0x100d67a0
    virtual void vfunc_6(); // slot 6, 0x100d1af0
    virtual void vfunc_7(); // slot 7, 0x100d6800
};

class CLine@visual@neon : public CLine, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10015160
    virtual void vfunc_1(); // slot 1, 0x100d1af0
    virtual void Output(); // slot 2, 0x10013eb0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10024230
    virtual void Copy(); // slot 11, 0x100238c0
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x10013bf0
    virtual void SetEffectType(); // slot 15, 0x10013c70
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x10013d00
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10023a60
    virtual void SetDraw(); // slot 27, 0x10015110
};

class CLoader@h2p : public CLoader {
public:
    virtual void vfunc_0(); // slot 0, 0x100e1d10
};

class CManagedPool@frw@neon : public CManagedPool {
public:
    virtual void purecall(); // slot 0, 0x100f8770
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
    virtual void vfunc_3(); // slot 3, 0x100eb380
};

class CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a940
    virtual void GetD3DDevice(); // slot 1, 0x10015240
    virtual void purecall(); // slot 2, 0x100f8770
};

class CManager@h2p : public CManager {
public:
    virtual void vfunc_0(); // slot 0, 0x1001aa20
};

class CMove@phy@neon : public CMove, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100286f0
    virtual void Logic(); // slot 1, 0x10028800
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100e5a80
    virtual void vfunc_5(); // slot 5, 0x100d1af0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x100e5fc0
    virtual void Copy(); // slot 11, 0x100e6040
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void ProcessMove(); // slot 14, 0x10028330
    virtual void SetParentPos(); // slot 15, 0x100285b0
};

class CMoveAcceleration@phy@neon : public CMoveAcceleration, public CMove, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100287a0
    virtual void Logic(); // slot 1, 0x10028800
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100e5a80
    virtual void vfunc_5(); // slot 5, 0x100d1af0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x100e5fc0
    virtual void Copy(); // slot 11, 0x100e6040
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void ProcessMove(); // slot 14, 0x100283b0
    virtual void SetParentPos(); // slot 15, 0x100285b0
};

class CMoveReduction@phy@neon : public CMoveReduction, public CMove, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100287a0
    virtual void Logic(); // slot 1, 0x10028800
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100e5a80
    virtual void vfunc_5(); // slot 5, 0x100d1af0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x100e5fc0
    virtual void Copy(); // slot 11, 0x100e6040
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void ProcessMove(); // slot 14, 0x10028420
    virtual void SetParentPos(); // slot 15, 0x100285b0
};

class CMsgDispatch@eco : public CMsgDispatch {
public:
    virtual void vfunc_0(); // slot 0, 0x10003680
};

class CObject@frw@neon : public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10003760
    virtual void vfunc_1(); // slot 1, 0x100d1af0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100e5a80
    virtual void vfunc_5(); // slot 5, 0x100d1af0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x100e5fc0
    virtual void Copy(); // slot 11, 0x100e6040
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
};

class CRLESurface@render@neon : public CRLESurface, public IDxSurface {
public:
    virtual void vfunc_0(); // slot 0, 0x10028d20
    virtual void GetSurfaceDesc(); // slot 1, 0x100151c0
    virtual void Fill(); // slot 2, 0x100151d0
    virtual void Fill(); // slot 3, 0x100151d0
    virtual void vfunc_4(); // slot 4, 0x100d1af0
    virtual void GetD3DDevice(); // slot 5, 0x10015240
    virtual void GetSurfacePointer(); // slot 6, 0x100151e0
    virtual void GetWidth(); // slot 7, 0x10015200
    virtual void GetHeight(); // slot 8, 0x10015210
    virtual void GetBPP(); // slot 9, 0x10015220
    virtual void GetPixelFormat(); // slot 10, 0x10028ba0
    virtual void GetDC(); // slot 11, 0x100ee770
    virtual void GetD3DDevice(); // slot 12, 0x10015240
    virtual void ApplyLinearFilter(); // slot 13, 0x10015380
    virtual void Release(); // slot 14, 0x10015250
    virtual void Type(); // slot 15, 0x10015230
    virtual void SetColorKey(); // slot 16, 0x10015260
    virtual void Blt(); // slot 17, 0x100056d0
    virtual void ApplyLinearFilter(); // slot 18, 0x10015380
};

class CRadioButton@ctrl@neon : public CRadioButton, public CCheckButton, public CButton, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10012880
    virtual void Logic(); // slot 1, 0x10011430
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10010670
    virtual void SetEffectType(); // slot 15, 0x100106a0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10011930
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10010790
    virtual void OnMouseLeave(); // slot 29, 0x100107c0
    virtual void OnMouseLbDown(); // slot 30, 0x100106d0
    virtual void OnMouseLbUp(); // slot 31, 0x10011e70
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x10011760
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x100118f0
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x100109f0
    virtual void SetBtnActive(); // slot 50, 0x10010870
    virtual void Create(); // slot 51, 0x10011970
    virtual void SetCheck(); // slot 52, 0x10011e10
};

class CResource@frw@neon : public CResource {
public:
    virtual void vfunc_0(); // slot 0, 0x100eb320
};

class CResourceImpl@frw@neon : public CResourceImpl {
public:
    virtual void vfunc_0(); // slot 0, 0x100ebef0
};

class CScrollBar@ctrl@neon : public CScrollBar, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10006c90
    virtual void Logic(); // slot 1, 0x100016f0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10001aa0
    virtual void SetEffectType(); // slot 15, 0x10001b40
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10006910
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10002710
    virtual void OnMouseLeave(); // slot 29, 0x100027e0
    virtual void OnMouseLbDown(); // slot 30, 0x100028a0
    virtual void OnMouseLbUp(); // slot 31, 0x10002950
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10007d50
    virtual void OnMouseDrag(); // slot 35, 0x10002c30
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x10006e30
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10006820
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x10008d90
};

class CSliderBar@ctrl@neon : public CSliderBar, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10009080
    virtual void Logic(); // slot 1, 0x100016f0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x10009270
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10001aa0
    virtual void SetEffectType(); // slot 15, 0x10001b40
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10002710
    virtual void OnMouseLeave(); // slot 29, 0x100027e0
    virtual void OnMouseLbDown(); // slot 30, 0x100028a0
    virtual void OnMouseLbUp(); // slot 31, 0x10002950
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x10002c30
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x10001730
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
};

class CSound@dev@neon : public CSound {
public:
    virtual void purecall(); // slot 0, 0x100f8770
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
    virtual void purecall(); // slot 3, 0x100f8770
    virtual void purecall(); // slot 4, 0x100f8770
    virtual void purecall(); // slot 5, 0x100f8770
    virtual void purecall(); // slot 6, 0x100f8770
    virtual void purecall(); // slot 7, 0x100f8770
    virtual void purecall(); // slot 8, 0x100f8770
    virtual void purecall(); // slot 9, 0x100f8770
    virtual void purecall(); // slot 10, 0x100f8770
    virtual void purecall(); // slot 11, 0x100f8770
    virtual void purecall(); // slot 12, 0x100f8770
    virtual void purecall(); // slot 13, 0x100f8770
    virtual void purecall(); // slot 14, 0x100f8770
    virtual void purecall(); // slot 15, 0x100f8770
    virtual void purecall(); // slot 16, 0x100f8770
    virtual void purecall(); // slot 17, 0x100f8770
    virtual void purecall(); // slot 18, 0x100f8770
    virtual void purecall(); // slot 19, 0x100f8770
    virtual void purecall(); // slot 20, 0x100f8770
    virtual void purecall(); // slot 21, 0x100f8770
    virtual void purecall(); // slot 22, 0x100f8770
    virtual void purecall(); // slot 23, 0x100f8770
    virtual void purecall(); // slot 24, 0x100f8770
    virtual void purecall(); // slot 25, 0x100f8770
    virtual void purecall(); // slot 26, 0x100f8770
    virtual void purecall(); // slot 27, 0x100f8770
    virtual void purecall(); // slot 28, 0x100f8770
    virtual void purecall(); // slot 29, 0x100f8770
    virtual void purecall(); // slot 30, 0x100f8770
    virtual void purecall(); // slot 31, 0x100f8770
    virtual void purecall(); // slot 32, 0x100f8770
    virtual void purecall(); // slot 33, 0x100f8770
    virtual void vfunc_34(); // slot 34, 0x100d6920
};

class CSprite@visual@neon : public CSprite, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x100199a0
    virtual void Logic(); // slot 1, 0x10018350
    virtual void Output(); // slot 2, 0x10016890
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10019450
    virtual void Copy(); // slot 11, 0x1001a570
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x10015490
    virtual void SetEffectType(); // slot 15, 0x100154f0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x10015570
    virtual void SetInverse(); // slot 23, 0x10015ce0
    virtual void SetPivot(); // slot 24, 0x100176d0
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10015560
    virtual void SetAnimate(); // slot 27, 0x10018360
    virtual void ApplyLinearFilter(); // slot 28, 0x10015380
};

class CText@visual@neon : public CText, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x1000a6a0
    virtual void vfunc_1(); // slot 1, 0x100d1af0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10024230
    virtual void Copy(); // slot 11, 0x100238c0
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x10020c00
    virtual void SetEffectType(); // slot 15, 0x10020c20
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10020c40
    virtual void SetPosY(); // slot 21, 0x10020c70
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10023a60
};

class CTextWindow@ctrl@neon : public CTextWindow, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent, public CManagedRes {
public:
    virtual void vfunc_0(); // slot 0, 0x1000c650
    virtual void Logic(); // slot 1, 0x100016f0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x1000a780
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10001aa0
    virtual void SetEffectType(); // slot 15, 0x10001b40
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10020c40
    virtual void SetPosY(); // slot 21, 0x10020c70
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x1000a830
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10002710
    virtual void OnMouseLeave(); // slot 29, 0x100027e0
    virtual void OnMouseLbDown(); // slot 30, 0x100028a0
    virtual void OnMouseLbUp(); // slot 31, 0x10002950
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x1000d230
    virtual void OnMouseDrag(); // slot 35, 0x10002c30
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x10001730
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x1000ada0
    virtual void Clear(); // slot 50, 0x1000c290
    virtual void ChangeValue(); // slot 51, 0x1000b970
};

class CTile@visual@neon : public CTile, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10022bb0
    virtual void vfunc_1(); // slot 1, 0x100d1af0
    virtual void Output(); // slot 2, 0x10022160
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100222a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10022960
    virtual void Copy(); // slot 11, 0x10023470
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x10022060
    virtual void SetEffectType(); // slot 15, 0x10022070
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x10022080
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x100220f0
    virtual void Release(); // slot 27, 0x10022390
};

class CVisual@visual@neon : public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10003830
    virtual void vfunc_1(); // slot 1, 0x100d1af0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10024230
    virtual void Copy(); // slot 11, 0x100238c0
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x100056c0
    virtual void Blt(); // slot 15, 0x100056d0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10023a60
};

class CWebBrowser@ctrl@neon : public CWebBrowser, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent, public IOleObj {
public:
    virtual void vfunc_0(); // slot 0, 0x1000f6e0
    virtual void Logic(); // slot 1, 0x1000fc90
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x100e5670
    virtual void OnFocus(); // slot 8, 0x100e5690
    virtual void IsIn(); // slot 9, 0x100e5590
    virtual void Clone(); // slot 10, 0x10024230
    virtual void Copy(); // slot 11, 0x100238c0
    virtual void GetDC(); // slot 12, 0x100ee770
    virtual void IsChildIn(); // slot 13, 0x100e5930
    virtual void SetEffect(); // slot 14, 0x100056c0
    virtual void Blt(); // slot 15, 0x100056d0
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x10001600
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10023a60
    virtual void Create(); // slot 27, 0x1000fa60
    virtual void OnDestroy(); // slot 28, 0x1000e8c0
};

class CWindow@ctrl@neon : public CWindow, public CControl, public CVisual, public CObject, public ?$CCompositeHolder, public CComponent {
public:
    virtual void vfunc_0(); // slot 0, 0x10010000
    virtual void Logic(); // slot 1, 0x100016f0
    virtual void vfunc_2(); // slot 2, 0x100d1af0
    virtual void vfunc_3(); // slot 3, 0x100d1af0
    virtual void OnAttached(); // slot 4, 0x100246a0
    virtual void OnDetached(); // slot 5, 0x100238b0
    virtual void OnActivate(); // slot 6, 0x100e5650
    virtual void OnSelect(); // slot 7, 0x10001170
    virtual void OnFocus(); // slot 8, 0x100102e0
    virtual void IsIn(); // slot 9, 0x10001110
    virtual void Clone(); // slot 10, 0x10001390
    virtual void Copy(); // slot 11, 0x10001410
    virtual void IsMyIn(); // slot 12, 0x10001890
    virtual void IsChildIn(); // slot 13, 0x10001cd0
    virtual void SetEffect(); // slot 14, 0x10001aa0
    virtual void SetEffectType(); // slot 15, 0x10001b40
    virtual void SetClipRect(); // slot 16, 0x10024370
    virtual void SetLocalClipRect(); // slot 17, 0x10024440
    virtual void GetPosX(); // slot 18, 0x10023d40
    virtual void GetPosY(); // slot 19, 0x10023e80
    virtual void SetPosX(); // slot 20, 0x10023ff0
    virtual void SetPosY(); // slot 21, 0x10024050
    virtual void SetShowRef(); // slot 22, 0x100246c0
    virtual void SetInverse(); // slot 23, 0x100015f0
    virtual void SetPivot(); // slot 24, 0x1000ffc0
    virtual void SetUseParentRotation(); // slot 25, 0x10001620
    virtual void GetAlpha(); // slot 26, 0x10001380
    virtual void Destroy(); // slot 27, 0x10001100
    virtual void OnMouseOver(); // slot 28, 0x10002710
    virtual void OnMouseLeave(); // slot 29, 0x100027e0
    virtual void OnMouseLbDown(); // slot 30, 0x100103a0
    virtual void OnMouseLbUp(); // slot 31, 0x10002950
    virtual void OnMouseRbDown(); // slot 32, 0x10002a00
    virtual void OnMouseRbUp(); // slot 33, 0x10002ab0
    virtual void OnMouseWheel(); // slot 34, 0x10002b60
    virtual void OnMouseDrag(); // slot 35, 0x10010480
    virtual void OnMouseMove(); // slot 36, 0x10002d80
    virtual void OnMouseLDoubleClick(); // slot 37, 0x10002f70
    virtual void OnMouseRDoubleClick(); // slot 38, 0x10003020
    virtual void OnReturn(); // slot 39, 0x10002ce0
    virtual void OnKeyDown(); // slot 40, 0x10002e30
    virtual void OnKeyUp(); // slot 41, 0x10002ed0
    virtual void SetActive(); // slot 42, 0x10001730
    virtual void SetSelect(); // slot 43, 0x10001150
    virtual void SetFocus(); // slot 44, 0x10002640
    virtual void ProcessMessage(); // slot 45, 0x100011b0
    virtual void AttachToolTip(); // slot 46, 0x10001250
    virtual void SetCanFocus(); // slot 47, 0x10001360
    virtual void GetCanFocus(); // slot 48, 0x10001370
    virtual void Create(); // slot 49, 0x100101b0
    virtual void Create(); // slot 50, 0x10010060
};

class IInput {
public:
    virtual void purecall(); // slot 0, 0x100f8770
    virtual void purecall(); // slot 1, 0x100f8770
    virtual void purecall(); // slot 2, 0x100f8770
    virtual void purecall(); // slot 3, 0x100f8770
    virtual void purecall(); // slot 4, 0x100f8770
    virtual void purecall(); // slot 5, 0x100f8770
    virtual void purecall(); // slot 6, 0x100f8770
};

class IOleObj@util@neon : public IOleObj {
public:
    virtual void purecall(); // slot 0, 0x100f8770
};

class Image@Gdiplus : public Image, public GdiplusBase {
public:
    virtual void vfunc_0(); // slot 0, 0x100d3ee0
    virtual void vfunc_1(); // slot 1, 0x100d44c0
};

class LifetimeTracker@Internal@Loki : public LifetimeTracker {
public:
    virtual void purecall(); // slot 0, 0x100f8770
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x100011d0
    virtual void what(); // slot 1, 0x100f873c
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003560
    virtual void vfunc_1(); // slot 1, 0x10001350
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003560
    virtual void vfunc_1(); // slot 1, 0x10001350
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003560
    virtual void vfunc_1(); // slot 1, 0x10001350
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x10003560
    virtual void vfunc_1(); // slot 1, 0x10001350
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x100f86f0
};

}  // namespace neon4
