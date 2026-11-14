// Module: HgSock3.dll
// ImageBase: 60600000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_60601000 @ 60601000 size=28 ---- */

void FUN_60601000(void)

{
  __time64_t *unaff_ESI;
  __time64_t _Var1;
  
  _Var1 = _time64((__time64_t *)0x0);
  *unaff_ESI = _Var1;
  return;
}



/* ---- CHgAsyncSocket @ 60601020 size=27 ---- */

/* public: __thiscall CHgAsyncSocket::CHgAsyncSocket(class CHgAsyncSocket const &) */

void __thiscall CHgAsyncSocket::CHgAsyncSocket(CHgAsyncSocket *this,CHgAsyncSocket *param_1)

{
                    /* 0x1020  6  ??0CHgAsyncSocket@@QAE@ABV0@@Z */
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}



/* ---- FUN_60601040 @ 60601040 size=94 ---- */

CHgAsyncSocket * __thiscall FUN_60601040(CHgAsyncSocket *param_1,byte param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0xc,*(int *)(param_1 + -4),CHgAsyncSocket::~CHgAsyncSocket);
    if ((param_2 & 1) != 0) {
      operator_delete__(param_1 + -4);
    }
    return param_1 + -4;
  }
  *(undefined ***)param_1 = &CHgAsyncSocket::_vftable_;
  if (*(int *)(param_1 + 4) != -1) {
    CHgAsyncSocket::Close(param_1);
  }
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



/* ---- FUN_606010a0 @ 606010a0 size=98 ---- */

undefined4 * FUN_606010a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_6060678e;
  local_c = ExceptionList;
  if ((DAT_6060a528 & 1) == 0) {
    DAT_6060a528 = DAT_6060a528 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_60602700();
    _atexit(FUN_606068d0);
  }
  ExceptionList = local_c;
  return &DAT_6060a508;
}



/* ---- CHgAsyncSocket @ 60601110 size=23 ---- */

/* public: __thiscall CHgAsyncSocket::CHgAsyncSocket(void) */

void __thiscall CHgAsyncSocket::CHgAsyncSocket(CHgAsyncSocket *this)

{
                    /* 0x1110  7  ??0CHgAsyncSocket@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* ---- ~CHgAsyncSocket @ 60601130 size=20 ---- */

/* public: virtual __thiscall CHgAsyncSocket::~CHgAsyncSocket(void) */

void __thiscall CHgAsyncSocket::~CHgAsyncSocket(CHgAsyncSocket *this)

{
                    /* 0x1130  15  ??1CHgAsyncSocket@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 4) != -1) {
    Close(this);
  }
  return;
}



/* ---- operator_unsigned_int @ 60601150 size=4 ---- */

/* public: __thiscall CHgAsyncSocket::operator unsigned int(void)const  */

uint __thiscall CHgAsyncSocket::operator_unsigned_int(CHgAsyncSocket *this)

{
                    /* 0x1150  23  ??BCHgAsyncSocket@@QBEIXZ */
  return *(uint *)(this + 4);
}



/* ---- GetPeerName @ 60601160 size=136 ---- */

/* public: int __thiscall CHgAsyncSocket::GetPeerName(char * &,unsigned int &) */

int __thiscall CHgAsyncSocket::GetPeerName(CHgAsyncSocket *this,char **param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_BX;
  undefined4 unaff_ESI;
  undefined2 auStack_1e [3];
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
                    /* 0x1160  46  ?GetPeerName@CHgAsyncSocket@@QAEHAAPADAAI@Z */
  local_4 = DAT_6060a01c ^ (uint)&local_18;
  auStack_1e[0] = (undefined2)((uint)unaff_ESI >> 0x10);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_18 = 0x10;
  iVar1 = Ordinal_5(*(undefined4 *)(this + 4),&local_14,&local_18);
  if (iVar1 != -1) {
    uVar2 = Ordinal_15(CONCAT22(unaff_BX,auStack_1e[0]));
    *param_2 = uVar2 & 0xffff;
    pcVar3 = (char *)Ordinal_12(unaff_ESI);
    *param_1 = pcVar3;
  }
  iVar1 = __security_check_cookie(local_10 ^ (uint)(auStack_1e + -3));
  return iVar1;
}



/* ---- GetPeerName @ 606011f0 size=33 ---- */

/* public: int __thiscall CHgAsyncSocket::GetPeerName(struct sockaddr *,int *) */

int __thiscall CHgAsyncSocket::GetPeerName(CHgAsyncSocket *this,sockaddr *param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x11f0  47  ?GetPeerName@CHgAsyncSocket@@QAEHPAUsockaddr@@PAH@Z */
  iVar1 = Ordinal_5(*(undefined4 *)(this + 4),param_1,param_2);
  return (uint)(iVar1 != -1);
}



/* ---- GetSockName @ 60601220 size=136 ---- */

/* public: int __thiscall CHgAsyncSocket::GetSockName(char * &,unsigned int &) */

int __thiscall CHgAsyncSocket::GetSockName(CHgAsyncSocket *this,char **param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_BX;
  undefined4 unaff_ESI;
  undefined2 auStack_1e [3];
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
                    /* 0x1220  49  ?GetSockName@CHgAsyncSocket@@QAEHAAPADAAI@Z */
  local_4 = DAT_6060a01c ^ (uint)&local_18;
  auStack_1e[0] = (undefined2)((uint)unaff_ESI >> 0x10);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_18 = 0x10;
  iVar1 = Ordinal_6(*(undefined4 *)(this + 4),&local_14,&local_18);
  if (iVar1 != -1) {
    uVar2 = Ordinal_15(CONCAT22(unaff_BX,auStack_1e[0]));
    *param_2 = uVar2 & 0xffff;
    pcVar3 = (char *)Ordinal_12(unaff_ESI);
    *param_1 = pcVar3;
  }
  iVar1 = __security_check_cookie(local_10 ^ (uint)(auStack_1e + -3));
  return iVar1;
}



/* ---- GetSockName @ 606012b0 size=33 ---- */

/* public: int __thiscall CHgAsyncSocket::GetSockName(struct sockaddr *,int *) */

int __thiscall CHgAsyncSocket::GetSockName(CHgAsyncSocket *this,sockaddr *param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x12b0  50  ?GetSockName@CHgAsyncSocket@@QAEHPAUsockaddr@@PAH@Z */
  iVar1 = Ordinal_6(*(undefined4 *)(this + 4),param_1,param_2);
  return (uint)(iVar1 != -1);
}



/* ---- GetLocalIPAddrAndPort @ 606012e0 size=322 ---- */

/* public: int __thiscall CHgAsyncSocket::GetLocalIPAddrAndPort(char *,unsigned int &) */

int __thiscall
CHgAsyncSocket::GetLocalIPAddrAndPort(CHgAsyncSocket *this,char *param_1,uint *param_2)

{
  int iVar1;
  UINT UVar2;
  HMODULE hInstance;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  char **lpBuffer;
  char *pcVar5;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined4 auStack_118 [3];
  char acStack_10c [8];
  undefined1 local_104;
  undefined1 local_103 [247];
  uint uStack_c;
  uint local_4;
  
                    /* 0x12e0  43  ?GetLocalIPAddrAndPort@CHgAsyncSocket@@QAEHPADAAI@Z */
  local_4 = DAT_6060a01c ^ (uint)auStack_118;
  uStack_11c = (undefined2)unaff_EBP;
  uStack_11a = (undefined2)((uint)unaff_EBP >> 0x10);
  uStack_120 = (undefined2)unaff_ESI;
  uStack_11e = (undefined2)((uint)unaff_ESI >> 0x10);
  local_104 = 0;
  memset(local_103,0,0xff);
  iVar1 = Ordinal_57(&local_104);
  if (iVar1 == -1) {
    UVar2 = Ordinal_111();
    if (UVar2 == 0) {
      UVar2 = 10000;
    }
    else if ((int)UVar2 < 1) {
      strErrorString._0_1_ = 0;
      goto LAB_60601408;
    }
    iVar1 = 0xff;
    lpBuffer = &strErrorString;
    hInstance = GetModuleHandleA("HgSock.dll");
    LoadStringA(hInstance,UVar2,(LPSTR)lpBuffer,iVar1);
  }
  else {
    pcVar5 = acStack_10c;
    iVar1 = Ordinal_52();
    if (iVar1 != 0) {
      uVar3 = Ordinal_12(*(undefined4 *)**(undefined4 **)(iVar1 + 0xc));
      sprintf(param_1,"%s",uVar3);
      uStack_120 = 0;
      uStack_11e = 0;
      uStack_11c = 0;
      uStack_11a = 0;
      auStack_118[0] = 0;
      iVar1 = Ordinal_6(*(undefined4 *)(this + 4),auStack_118 + -3,auStack_118 + -4);
      if (iVar1 != -1) {
        uVar4 = Ordinal_15(CONCAT22(uStack_11c,uStack_11e));
        *param_2 = uVar4 & 0xffff;
        goto LAB_60601408;
      }
    }
    UVar2 = Ordinal_111(&strErrorString);
    HgGetWSAErrorString(UVar2,pcVar5);
  }
LAB_60601408:
  iVar1 = __security_check_cookie(uStack_c ^ (uint)&uStack_120);
  return iVar1;
}



/* ---- SetSockOpt @ 60601430 size=43 ---- */

/* public: int __thiscall CHgAsyncSocket::SetSockOpt(int,void const *,int,int) */

int __thiscall
CHgAsyncSocket::SetSockOpt(CHgAsyncSocket *this,int param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0x1430  99  ?SetSockOpt@CHgAsyncSocket@@QAEHHPBXHH@Z */
  iVar1 = Ordinal_21(*(undefined4 *)(this + 4),param_4,param_1,param_2,param_3);
  return (uint)(iVar1 != -1);
}



/* ---- GetSockOpt @ 60601460 size=43 ---- */

/* public: int __thiscall CHgAsyncSocket::GetSockOpt(int,void *,int *,int) */

int __thiscall
CHgAsyncSocket::GetSockOpt(CHgAsyncSocket *this,int param_1,void *param_2,int *param_3,int param_4)

{
  int iVar1;
  
                    /* 0x1460  51  ?GetSockOpt@CHgAsyncSocket@@QAEHHPAXPAHH@Z */
  iVar1 = Ordinal_7(*(undefined4 *)(this + 4),param_4,param_1,param_2,param_3);
  return (uint)(iVar1 != -1);
}



/* ---- Create @ 60601490 size=126 ---- */

/* public: int __thiscall CHgAsyncSocket::Create(unsigned int,int,long,char const *) */

int __thiscall
CHgAsyncSocket::Create(CHgAsyncSocket *this,uint param_1,int param_2,long param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x1490  39  ?Create@CHgAsyncSocket@@QAEHIHJPBD@Z */
  if (*(int *)(this + 4) == -1) {
    iVar1 = Ordinal_23(2,param_2,0);
    *(int *)(this + 4) = iVar1;
    if (iVar1 != -1) {
      iVar1 = AsyncSelect(this,param_3);
      if (iVar1 != 0) {
        iVar1 = Bind(this,param_1,param_4);
        if (iVar1 != 0) {
          AddSocketMap(this);
          return 1;
        }
        uVar2 = Ordinal_111();
        (**(code **)(*(int *)this + 0x14))();
        Ordinal_112(uVar2);
      }
    }
  }
  return 0;
}



/* ---- AddSocketMap @ 60601510 size=143 ---- */

/* public: int __thiscall CHgAsyncSocket::AddSocketMap(void) */

int __thiscall CHgAsyncSocket::AddSocketMap(CHgAsyncSocket *this)

{
  int iVar1;
  int *piVar2;
  CHgAsyncSocket *pCVar3;
  uint *puVar4;
  uint local_1c;
  CHgAsyncSocket *local_18;
  int local_14 [4];
  
                    /* 0x1510  30  ?AddSocketMap@CHgAsyncSocket@@QAEHXZ */
  if (*(int *)(this + 4) != -1) {
    piVar2 = FUN_606010a0();
    local_18 = (CHgAsyncSocket *)piVar2[6];
    iVar1 = *piVar2;
    piVar2 = local_14;
    pCVar3 = this + 4;
    FUN_606010a0();
    piVar2 = FUN_60602660(piVar2,(uint *)pCVar3);
    if ((*piVar2 == 0) || (*piVar2 != iVar1)) {
      _invalid_parameter_noinfo();
    }
    if ((CHgAsyncSocket *)piVar2[1] == local_18) {
      local_1c = *(uint *)(this + 4);
      puVar4 = &local_1c;
      local_18 = this;
      FUN_606010a0();
      FUN_60602240(puVar4);
      return 1;
    }
  }
  return 0;
}



/* ---- RemoveSocketMap @ 606015a0 size=128 ---- */

/* public: int __thiscall CHgAsyncSocket::RemoveSocketMap(void) */

int __thiscall CHgAsyncSocket::RemoveSocketMap(CHgAsyncSocket *this)

{
  undefined4 *puVar1;
  int iVar2;
  int **ppiVar3;
  CHgAsyncSocket *pCVar4;
  int *local_10;
  int *local_c;
  
                    /* 0x15a0  87  ?RemoveSocketMap@CHgAsyncSocket@@QAEHXZ */
  puVar1 = FUN_606010a0();
  if (puVar1[7] == 0) {
    return 0;
  }
  ppiVar3 = &local_10;
  pCVar4 = this + 4;
  FUN_606010a0();
  FUN_60602660((int *)ppiVar3,(uint *)pCVar4);
  if (local_10 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *local_10;
  }
  if (local_c == *(int **)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  if (local_c[3] == *(int *)(this + 4)) {
    ppiVar3 = &local_10;
    puVar1 = FUN_606010a0();
    FUN_60602330(puVar1,ppiVar3,local_10,local_c);
  }
  return 1;
}



/* ---- SetInterface @ 60601620 size=10 ---- */

/* public: void __thiscall CHgAsyncSocket::SetInterface(class ISocket *) */

void __thiscall CHgAsyncSocket::SetInterface(CHgAsyncSocket *this,ISocket *param_1)

{
                    /* 0x1620  96  ?SetInterface@CHgAsyncSocket@@QAEXPAVISocket@@@Z */
  *(ISocket **)(this + 8) = param_1;
  return;
}



/* ---- GetPostData @ 60601630 size=10 ---- */

/* public: void * __thiscall CHgAsyncSocket::GetPostData(void) */

void * __thiscall CHgAsyncSocket::GetPostData(CHgAsyncSocket *this)

{
  CHgAsyncSocket *pCVar1;
  
                    /* 0x1630  48  ?GetPostData@CHgAsyncSocket@@QAEPAXXZ */
  pCVar1 = *(CHgAsyncSocket **)(this + 8);
  if (*(CHgAsyncSocket **)(this + 8) == (CHgAsyncSocket *)0x0) {
    pCVar1 = this;
  }
  return pCVar1;
}



/* ---- Socket @ 60601640 size=60 ---- */

/* public: int __thiscall CHgAsyncSocket::Socket(int,long,int,int) */

int __thiscall
CHgAsyncSocket::Socket(CHgAsyncSocket *this,int param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  long unaff_ESI;
  
                    /* 0x1640  102  ?Socket@CHgAsyncSocket@@QAEHHJHH@Z */
  if (*(int *)(this + 4) == -1) {
    iVar1 = Ordinal_23(param_4,param_1,param_3);
    *(int *)(this + 4) = iVar1;
    if (iVar1 != -1) {
      iVar1 = AsyncSelect(this,unaff_ESI);
      return iVar1;
    }
  }
  return 0;
}



/* ---- AsyncSelect @ 60601680 size=76 ---- */

/* public: int __thiscall CHgAsyncSocket::AsyncSelect(long) */

int __thiscall CHgAsyncSocket::AsyncSelect(CHgAsyncSocket *this,long param_1)

{
  BOOL BVar1;
  int iVar2;
  
                    /* 0x1680  31  ?AsyncSelect@CHgAsyncSocket@@QAEHJ@Z */
  if ((*(int *)(this + 4) != -1) && (DAT_6060a504 != (HWND)0x0)) {
    BVar1 = IsWindow(DAT_6060a504);
    if (BVar1 != 0) {
      iVar2 = Ordinal_101(*(undefined4 *)(this + 4),DAT_6060a504,0x81b,param_1);
      return (uint)(iVar2 != -1);
    }
  }
  return 0;
}



/* ---- Bind @ 606016d0 size=168 ---- */

/* public: int __thiscall CHgAsyncSocket::Bind(unsigned int,char const *) */

int __thiscall CHgAsyncSocket::Bind(CHgAsyncSocket *this,uint param_1,char *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint unaff_ESI;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_18 [6];
  
                    /* 0x16d0  32  ?Bind@CHgAsyncSocket@@QAEHIPBD@Z */
  local_18[4] = DAT_6060a01c ^ (uint)local_18;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = 2;
  if (param_2 == (char *)0x0) {
    uStack_20 = param_2;
    uStack_24 = 0x6060170c;
    iVar2 = Ordinal_8();
  }
  else {
    uStack_20 = param_2;
    uStack_24 = 0x60601754;
    iVar2 = Ordinal_11();
    if (iVar2 == -1) {
      uStack_24 = 0x2726;
      uStack_28 = 0x60601764;
      Ordinal_112();
      uStack_24 = 0x60601772;
      iVar2 = __security_check_cookie(local_18[2] ^ (uint)&uStack_20);
      return iVar2;
    }
  }
  uStack_28 = 0x6060171b;
  local_18[0] = iVar2;
  uVar1 = Ordinal_9();
  uStack_28 = 0x10;
  puStack_2c = &uStack_20;
  uStack_20 = (char *)CONCAT22(uVar1,(undefined2)uStack_20);
  Ordinal_2(*(undefined4 *)(this + 4));
  iVar2 = __security_check_cookie(unaff_ESI ^ (uint)&puStack_2c);
  return iVar2;
}



/* ---- Bind @ 60601780 size=33 ---- */

/* public: int __thiscall CHgAsyncSocket::Bind(struct sockaddr const *,int) */

int __thiscall CHgAsyncSocket::Bind(CHgAsyncSocket *this,sockaddr *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x1780  33  ?Bind@CHgAsyncSocket@@QAEHPBUsockaddr@@H@Z */
  iVar1 = Ordinal_2(*(undefined4 *)(this + 4),param_1,param_2);
  return (uint)(iVar1 != -1);
}



/* ---- Connect @ 606017b0 size=190 ---- */

/* public: virtual bool __thiscall CHgAsyncSocket::Connect(char const *,unsigned int) */

bool __thiscall CHgAsyncSocket::Connect(CHgAsyncSocket *this,char *param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint unaff_ESI;
  undefined4 uStack_28;
  char *pcStack_24;
  char *pcStack_20;
  int local_14 [5];
  
                    /* 0x17b0  37  ?Connect@CHgAsyncSocket@@UAE_NPBDI@Z */
  local_14[4] = DAT_6060a01c ^ (uint)local_14;
  if (param_1 == (char *)0x0) {
LAB_60601859:
    uVar1 = __security_check_cookie(local_14[4] ^ (uint)local_14);
    return (bool)uVar1;
  }
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  pcStack_20 = param_1;
  local_14[0] = 2;
  pcStack_24 = (char *)0x606017f1;
  local_14[0] = Ordinal_11();
  if (local_14[0] == -1) {
    pcStack_24 = param_1;
    uStack_28 = 0x60601801;
    iVar2 = Ordinal_52();
    if (iVar2 == 0) {
      pcStack_24 = (char *)0x2726;
      uStack_28 = 0x60601859;
      Ordinal_112();
      goto LAB_60601859;
    }
    local_14[0] = *(int *)**(undefined4 **)(iVar2 + 0xc);
  }
  pcStack_24 = param_1;
  uStack_28 = 0x6060181b;
  Ordinal_9();
  uStack_28 = 0x10;
  Ordinal_4(*(undefined4 *)(this + 4),local_14 + -2);
  uVar1 = __security_check_cookie(unaff_ESI ^ (uint)&uStack_28);
  return (bool)uVar1;
}



/* ---- Connect @ 60601870 size=33 ---- */

/* public: bool __thiscall CHgAsyncSocket::Connect(struct sockaddr const *,int) */

bool __thiscall CHgAsyncSocket::Connect(CHgAsyncSocket *this,sockaddr *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x1870  36  ?Connect@CHgAsyncSocket@@QAE_NPBUsockaddr@@H@Z */
  iVar1 = Ordinal_4(*(undefined4 *)(this + 4),param_1,param_2);
  return iVar1 != -1;
}



/* ---- Listen @ 606018a0 size=28 ---- */

/* public: int __thiscall CHgAsyncSocket::Listen(int) */

int __thiscall CHgAsyncSocket::Listen(CHgAsyncSocket *this,int param_1)

{
  int iVar1;
  
                    /* 0x18a0  55  ?Listen@CHgAsyncSocket@@QAEHH@Z */
  iVar1 = Ordinal_13(*(undefined4 *)(this + 4),param_1);
  return (uint)(iVar1 != -1);
}



/* ---- ReceiveFrom @ 606018c0 size=144 ---- */

/* public: int __thiscall CHgAsyncSocket::ReceiveFrom(void *,int,char * &,unsigned int &,int) */

int __thiscall
CHgAsyncSocket::ReceiveFrom
          (CHgAsyncSocket *this,void *param_1,int param_2,char **param_3,uint *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint unaff_EBX;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
                    /* 0x18c0  82  ?ReceiveFrom@CHgAsyncSocket@@QAEHPAXHAAPADAAIH@Z */
  local_4 = DAT_6060a01c ^ (uint)&local_18;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  puStack_28 = &local_18;
  uStack_2c = &local_14;
  iStack_30 = param_5;
  local_18 = 0x10;
  iVar1 = Ordinal_17(*(undefined4 *)(this + 4),param_1,param_2);
  if (iVar1 != -1) {
    uVar2 = Ordinal_15(CONCAT22(puStack_28._0_2_,uStack_2c._2_2_));
    *param_4 = uVar2 & 0xffff;
    pcVar3 = (char *)Ordinal_12(uStack_2c);
    *param_3 = pcVar3;
  }
  iVar1 = __security_check_cookie(unaff_EBX ^ (uint)&iStack_30);
  return iVar1;
}



/* ---- ReceiveFrom @ 60601950 size=38 ---- */

/* public: int __thiscall CHgAsyncSocket::ReceiveFrom(void *,int,struct sockaddr *,int *,int) */

int __thiscall
CHgAsyncSocket::ReceiveFrom
          (CHgAsyncSocket *this,void *param_1,int param_2,sockaddr *param_3,int *param_4,int param_5
          )

{
  int iVar1;
  
                    /* 0x1950  83  ?ReceiveFrom@CHgAsyncSocket@@QAEHPAXHPAUsockaddr@@PAHH@Z */
  iVar1 = Ordinal_17(*(undefined4 *)(this + 4),param_1,param_2,param_5,param_3,param_4);
  return iVar1;
}



/* ---- SendTo @ 60601980 size=205 ---- */

/* public: int __thiscall CHgAsyncSocket::SendTo(void const *,int,unsigned int,char const *,int) */

int __thiscall
CHgAsyncSocket::SendTo
          (CHgAsyncSocket *this,void *param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  int iVar1;
  undefined4 unaff_retaddr;
  uint uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  int local_14 [5];
  
                    /* 0x1980  94  ?SendTo@CHgAsyncSocket@@QAEHPBXHIPBDH@Z */
  local_14[4] = DAT_6060a01c ^ (uint)local_14;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[0] = 2;
  if (param_4 == (char *)0x0) {
    pcStack_24 = (char *)0xffffffff;
    pcStack_28 = (char *)0x606019c3;
    local_14[0] = Ordinal_8();
  }
  else {
    pcStack_24 = param_4;
    pcStack_28 = (char *)0x60601a0e;
    local_14[0] = Ordinal_11();
    if (local_14[0] == -1) {
      pcStack_28 = param_4;
      uStack_2c = 0x60601a1e;
      iVar1 = Ordinal_52();
      if (iVar1 == 0) {
        pcStack_28 = (char *)0x2726;
        uStack_2c = 0x60601a36;
        Ordinal_112();
        iVar1 = __security_check_cookie(local_14[2] ^ (uint)(local_14 + -2));
        return iVar1;
      }
      local_14[0] = *(int *)**(undefined4 **)(iVar1 + 0xc);
    }
  }
  pcStack_28 = (char *)param_2;
  uStack_2c = 0x606019d2;
  Ordinal_9();
  uStack_2c = 0x10;
  piStack_30 = local_14 + -2;
  uStack_34 = param_3;
  Ordinal_20(*(undefined4 *)(this + 4),param_1,unaff_retaddr);
  iVar1 = __security_check_cookie((uint)pcStack_24 ^ (uint)&uStack_34);
  return iVar1;
}



/* ---- SendTo @ 60601a50 size=38 ---- */

/* public: int __thiscall CHgAsyncSocket::SendTo(void const *,int,struct sockaddr const *,int,int)
    */

int __thiscall
CHgAsyncSocket::SendTo
          (CHgAsyncSocket *this,void *param_1,int param_2,sockaddr *param_3,int param_4,int param_5)

{
  int iVar1;
  
                    /* 0x1a50  95  ?SendTo@CHgAsyncSocket@@QAEHPBXHPBUsockaddr@@HH@Z */
  iVar1 = Ordinal_20(*(undefined4 *)(this + 4),param_1,param_2,param_5,param_3,param_4);
  return iVar1;
}



/* ---- ShutDown @ 60601a80 size=28 ---- */

/* public: int __thiscall CHgAsyncSocket::ShutDown(int) */

int __thiscall CHgAsyncSocket::ShutDown(CHgAsyncSocket *this,int param_1)

{
  int iVar1;
  
                    /* 0x1a80  101  ?ShutDown@CHgAsyncSocket@@QAEHH@Z */
  iVar1 = Ordinal_22(*(undefined4 *)(this + 4),param_1);
  return (uint)(iVar1 != -1);
}



/* ---- IOCtl @ 60601aa0 size=33 ---- */

/* public: int __thiscall CHgAsyncSocket::IOCtl(long,unsigned long *) */

int __thiscall CHgAsyncSocket::IOCtl(CHgAsyncSocket *this,long param_1,ulong *param_2)

{
  int iVar1;
  
                    /* 0x1aa0  53  ?IOCtl@CHgAsyncSocket@@QAEHJPAK@Z */
  iVar1 = Ordinal_10(*(undefined4 *)(this + 4),param_1,param_2);
  return (uint)(iVar1 != -1);
}



/* ---- Accept @ 60601ad0 size=142 ---- */

/* public: virtual bool __thiscall CHgAsyncSocket::Accept(class CHgAsyncSocket &,struct sockaddr
   *,int *) */

bool __thiscall
CHgAsyncSocket::Accept(CHgAsyncSocket *this,CHgAsyncSocket *param_1,sockaddr *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  CHgAsyncSocket *unaff_EDI;
  
                    /* 0x1ad0  28  ?Accept@CHgAsyncSocket@@UAE_NAAV1@PAUsockaddr@@PAH@Z */
  iVar1 = Ordinal_1(*(undefined4 *)(this + 4),param_2,param_3);
  *(int *)(unaff_EDI + 4) = iVar1;
  if (iVar1 == -1) {
    uVar2 = Ordinal_111();
    Ordinal_112(uVar2);
    return false;
  }
  AddSocketMap(unaff_EDI);
  if ((*(int *)(unaff_EDI + 4) != -1) && (DAT_6060a504 != (HWND)0x0)) {
    BVar3 = IsWindow(DAT_6060a504);
    if (BVar3 != 0) {
      Ordinal_101(*(undefined4 *)(unaff_EDI + 4),DAT_6060a504,0x81b,0x3f);
    }
  }
  (**(code **)(*(int *)unaff_EDI + 0x28))(0);
  return iVar1 != -1;
}



/* ---- Receive @ 60601b60 size=28 ---- */

/* public: virtual int __thiscall CHgAsyncSocket::Receive(void *,int,int) */

int __thiscall CHgAsyncSocket::Receive(CHgAsyncSocket *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* 0x1b60  80  ?Receive@CHgAsyncSocket@@UAEHPAXHH@Z */
  iVar1 = Ordinal_16(*(undefined4 *)(this + 4),param_1,param_2,param_3);
  return iVar1;
}



/* ---- Send @ 60601b80 size=28 ---- */

/* public: virtual int __thiscall CHgAsyncSocket::Send(void const *,int,int) */

int __thiscall CHgAsyncSocket::Send(CHgAsyncSocket *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* 0x1b80  88  ?Send@CHgAsyncSocket@@UAEHPBXHH@Z */
  iVar1 = Ordinal_19(*(undefined4 *)(this + 4),param_1,param_2,param_3);
  return iVar1;
}



/* ---- Close @ 60601ba0 size=176 ---- */

/* public: virtual void __thiscall CHgAsyncSocket::Close(void) */

void __thiscall CHgAsyncSocket::Close(CHgAsyncSocket *this)

{
  int iVar1;
  UINT UVar2;
  char **ppcVar3;
  undefined1 auStack_40c [2];
  undefined1 auStack_40a [1026];
  uint local_8;
  
                    /* 0x1ba0  34  ?Close@CHgAsyncSocket@@UAEXXZ */
  local_8 = DAT_6060a01c ^ (uint)auStack_40c;
  if (*(int *)(this + 4) != -1) {
    RemoveSocketMap(this);
    if (DAT_6060a504 != 0) {
      iVar1 = Ordinal_101(*(undefined4 *)(this + 4),DAT_6060a504,0,0);
      if (iVar1 == -1) {
        ppcVar3 = &strErrorString;
        UVar2 = Ordinal_111();
        HgGetWSAErrorString(UVar2,(char *)ppcVar3);
      }
    }
    Ordinal_22(*(undefined4 *)(this + 4),1);
    iVar1 = 1;
    do {
      if (iVar1 == -1) break;
      iVar1 = Ordinal_16(*(undefined4 *)(this + 4),auStack_40c + -8,0x400,0);
    } while (iVar1 != 0);
    Ordinal_3(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 4) = 0xffffffff;
  }
  __security_check_cookie(local_8 ^ (uint)auStack_40c);
  return;
}



/* ---- OnAccept @ 60601c60 size=3 ---- */

/* public: virtual void __thiscall CHgAsyncSocket::OnAccept(int) */

void __thiscall CHgAsyncSocket::OnAccept(CHgAsyncSocket *this,int param_1)

{
                    /* 0x1c60  58  ?OnAccept@CHgAsyncSocket@@UAEXH@Z
                       0x1c60  61  ?OnClose@CHgAsyncSocket@@UAEXH@Z
                       0x1c60  63  ?OnConnect@CHgAsyncSocket@@UAEXH@Z
                       0x1c60  66  ?OnOutOfBandData@CHgAsyncSocket@@UAEXH@Z
                       0x1c60  68  ?OnReceive@CHgAsyncSocket@@UAEXH@Z
                       0x1c60  72  ?OnSend@CHgAsyncSocket@@UAEXH@Z */
  return;
}



/* ---- HgSocketInit @ 60601c70 size=281 ---- */

void __cdecl HgSocketInit(char *param_1)

{
  UINT uID;
  HMODULE hInstance;
  char **lpBuffer;
  int cchBufferMax;
  WNDCLASSA local_1c8;
  char local_1a0 [396];
  uint uStack_14;
  uint local_c;
  
                    /* 0x1c70  1  HgSocketInit */
  local_c = DAT_6060a01c ^ (uint)&local_1c8;
  local_1c8.style = 0;
  local_1c8.lpfnWndProc = FUN_606020d0;
  local_1c8.cbClsExtra = 0;
  local_1c8.cbWndExtra = 0;
  local_1c8.hInstance = DAT_6060a500;
  local_1c8.hIcon = (HICON)0x0;
  local_1c8.hCursor = (HCURSOR)0x0;
  local_1c8.hbrBackground = (HBRUSH)0x0;
  local_1c8.lpszMenuName = (LPCSTR)0x0;
  local_1c8.lpszClassName = "HgSockClass";
  RegisterClassA(&local_1c8);
  DAT_6060a504 = CreateWindowExA(0,"HgSockClass",(LPCSTR)0x0,0x80000000,0,0,0,0,(HWND)0x0,(HMENU)0x0
                                 ,DAT_6060a500,(LPVOID)0x0);
  if (param_1 == (char *)0x0) {
    param_1 = local_1a0;
  }
  uID = Ordinal_115(0x101,param_1);
  if (uID != 0) {
    if ((int)uID < 1) {
      CHgAsyncSocket::strErrorString._0_1_ = 0;
      __security_check_cookie(uStack_14 ^ (uint)(local_1a0 + -0x30));
      return;
    }
    cchBufferMax = 0xff;
    lpBuffer = &CHgAsyncSocket::strErrorString;
    hInstance = GetModuleHandleA("HgSock.dll");
    LoadStringA(hInstance,uID,(LPSTR)lpBuffer,cchBufferMax);
    __security_check_cookie(uStack_14 ^ (uint)(local_1a0 + -0x30));
    return;
  }
  if ((*param_1 != '\x01') || (param_1[1] != '\x01')) {
    Ordinal_116();
  }
  __security_check_cookie(uStack_14 ^ (uint)(local_1a0 + -0x30));
  return;
}



/* ---- HgSocketTerm @ 60601d90 size=16 ---- */

void HgSocketTerm(void)

{
                    /* 0x1d90  2  HgSocketTerm */
  FUN_606010a0();
  FUN_60602610();
                    /* WARNING: Could not recover jumptable at 0x60601d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_116();
  return;
}



/* ---- HgGetWSAErrorString @ 60601da0 size=74 ---- */

int __cdecl HgGetWSAErrorString(UINT param_1,char *param_2)

{
  char cVar1;
  HMODULE hInstance;
  char *pcVar2;
  int cchBufferMax;
  
                    /* 0x1da0  3  HgGetWSAErrorString */
  if (param_1 == 0) {
    param_1 = 10000;
  }
  else if ((int)param_1 < 1) {
    *param_2 = '\0';
    goto LAB_60601dd8;
  }
  cchBufferMax = 0xff;
  pcVar2 = param_2;
  hInstance = GetModuleHandleA("HgSock.dll");
  LoadStringA(hInstance,param_1,pcVar2,cchBufferMax);
LAB_60601dd8:
  pcVar2 = param_2 + 1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return (int)param_2 - (int)pcVar2;
}



/* ---- HgSocketLog @ 60601df0 size=729 ---- */

void __cdecl HgSocketLog(char *param_1,char param_2)

{
  char cVar1;
  HANDLE hFile;
  DWORD DVar2;
  char *pcVar3;
  undefined4 extraout_ECX;
  undefined1 auStack_354 [4];
  __time64_t local_350;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  DWORD local_33c;
  char local_338 [32];
  char local_318 [256];
  char local_218;
  undefined1 local_217 [255];
  char local_118;
  undefined1 local_117 [267];
  uint local_c;
  
                    /* 0x1df0  4  HgSocketLog */
  local_c = DAT_6060a01c ^ (uint)auStack_354;
  local_350 = _time64((__time64_t *)0x0);
  local_338[1] = '\0';
  local_338[2] = '\0';
  local_338[3] = '\0';
  local_338[4] = '\0';
  local_338[5] = '\0';
  local_338[6] = '\0';
  local_338[7] = '\0';
  local_338[8] = '\0';
  local_338[9] = '\0';
  local_338[10] = '\0';
  local_338[0xb] = '\0';
  local_338[0xc] = '\0';
  local_338[0xd] = '\0';
  local_338[0xe] = '\0';
  local_338[0xf] = '\0';
  local_338[0x10] = '\0';
  local_338[0x11] = '\0';
  local_338[0x12] = '\0';
  local_338[0x13] = '\0';
  local_338[0x14] = '\0';
  local_338[0x15] = '\0';
  local_338[0x16] = '\0';
  local_338[0x17] = '\0';
  local_338[0x18] = '\0';
  local_338[0x19] = '\0';
  local_338[0x1a] = '\0';
  local_338[0x1b] = '\0';
  local_338[0x1c] = '\0';
  local_338[0x1d] = '\0';
  local_338[0x1e] = '\0';
  local_338[0] = '\0';
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  if (DAT_6060a3f4 == (undefined4 *)0x0) {
    local_348 = 0xffffffff;
  }
  else {
    local_348 = *DAT_6060a3f4;
  }
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  if (DAT_6060a3f4 == (undefined4 *)0x0) {
    local_344 = 0xffffffff;
  }
  else {
    local_344 = DAT_6060a3f4[1];
  }
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  if (DAT_6060a3f4 == (undefined4 *)0x0) {
    local_340 = 0xffffffff;
  }
  else {
    local_340 = DAT_6060a3f4[2];
  }
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  if (DAT_6060a3f4 == (undefined4 *)0x0) {
    cVar1 = -1;
  }
  else {
    cVar1 = (char)DAT_6060a3f4[5] + 'l';
  }
  FUN_60605c30(local_344,0x1f,local_338,"[%d-%d-%d %d:%d:%d] ",cVar1);
  local_118 = '\0';
  memset(local_117,0,0x103);
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  _localtime64_s((tm *)DAT_6060a3f4,&local_350);
  if (DAT_6060a3f4 == (undefined4 *)0x0) {
    cVar1 = -1;
  }
  else {
    cVar1 = (char)DAT_6060a3f4[5] + 'l';
  }
  FUN_60605c30(extraout_ECX,0x104,&local_118,"Socket%d%d%d.log",cVar1);
  local_318[0] = '\0';
  memset(local_318 + 1,0,0xfe);
  local_218 = '\0';
  memset(local_217,0,0xfe);
  vsprintf_s(&local_218,0xff,param_1,&param_2);
  FUN_60605c30(local_338,0xff,local_318,"%s%s\n",(char)local_338);
  hFile = CreateFileA(&local_118,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DVar2 != 0xffffffff) {
      local_33c = 0;
      SetEndOfFile(hFile);
      pcVar3 = local_318;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,local_318,(int)pcVar3 - (int)(local_318 + 1),&local_33c,(LPOVERLAPPED)0x0);
    }
    CloseHandle(hFile);
  }
  __security_check_cookie(local_c ^ (uint)auStack_354);
  return;
}



/* ---- FUN_606020d0 @ 606020d0 size=308 ---- */

LRESULT FUN_606020d0(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  LRESULT LVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int **ppiVar5;
  WPARAM *pWVar6;
  int *local_10;
  int local_c;
  
  if (param_2 != 0x81b) {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar1;
  }
  if ((param_3 != 0) || (param_4 != 0)) {
    pWVar6 = &param_3;
    ppiVar5 = &local_10;
    FUN_606010a0();
    FUN_60602660((int *)ppiVar5,pWVar6);
    piVar2 = FUN_606010a0();
    iVar4 = piVar2[6];
    if ((local_10 == (int *)0x0) || (local_10 != (int *)*piVar2)) {
      _invalid_parameter_noinfo();
    }
    if (local_c != iVar4) {
      if (local_10 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *local_10;
      }
      if (local_c == *(int *)(iVar4 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      piVar2 = *(int **)(local_c + 0x10);
      if (piVar2 != (int *)0x0) {
        uVar3 = param_4 >> 0x10;
        switch(param_4 & 0xffff) {
        case 1:
          (**(code **)(*piVar2 + 0x18))(uVar3);
          return 0;
        case 2:
          (**(code **)(*piVar2 + 0x1c))(uVar3);
          return 0;
        case 4:
          (**(code **)(*piVar2 + 0x20))(uVar3);
          return 0;
        case 8:
          (**(code **)(*piVar2 + 0x24))(uVar3);
          return 0;
        case 0x10:
          (**(code **)(*piVar2 + 0x28))(uVar3);
          return 0;
        case 0x20:
          (**(code **)(*piVar2 + 0x2c))(uVar3);
        }
      }
    }
  }
  return 0;
}



/* ---- FUN_60602240 @ 60602240 size=234 ---- */

void FUN_60602240(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *unaff_EBX;
  undefined4 *this;
  int *unaff_EDI;
  bool local_c;
  int local_8;
  undefined4 *local_4;
  
  this = (undefined4 *)unaff_EBX[6];
  local_c = true;
  if (*(char *)((int)this[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)this[1];
    do {
      this = puVar2;
      local_c = *param_1 < (uint)this[3];
      if (local_c) {
        puVar2 = (undefined4 *)*this;
      }
      else {
        puVar2 = (undefined4 *)this[2];
      }
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  local_8 = *unaff_EBX;
  local_4 = this;
  if (local_c) {
    puVar2 = *(undefined4 **)unaff_EBX[6];
    if (local_8 == 0) {
      _invalid_parameter_noinfo();
    }
    if (this == puVar2) {
      piVar3 = FUN_606027d0(this,unaff_EBX,&local_8,'\x01');
      iVar1 = *piVar3;
      unaff_EDI[1] = piVar3[1];
      *unaff_EDI = iVar1;
      *(undefined1 *)(unaff_EDI + 2) = 1;
      return;
    }
    FUN_60602dc0();
  }
  if ((uint)local_4[3] < *param_1) {
    piVar3 = FUN_606027d0(this,unaff_EBX,&local_8,local_c);
    iVar1 = piVar3[1];
    *unaff_EDI = *piVar3;
    *(undefined1 *)(unaff_EDI + 2) = 1;
    unaff_EDI[1] = iVar1;
    return;
  }
  *unaff_EDI = local_8;
  *(undefined1 *)(unaff_EDI + 2) = 0;
  unaff_EDI[1] = (int)local_4;
  return;
}



/* ---- FUN_60602330 @ 60602330 size=727 ---- */

/* WARNING: Removing unreachable block (ram,0x60602465) */
/* WARNING: Removing unreachable block (ram,0x60602475) */
/* WARNING: Removing unreachable block (ram,0x6060247e) */
/* WARNING: Removing unreachable block (ram,0x60602481) */
/* WARNING: Removing unreachable block (ram,0x60602471) */
/* WARNING: Removing unreachable block (ram,0x6060248e) */
/* WARNING: Removing unreachable block (ram,0x6060249b) */
/* WARNING: Removing unreachable block (ram,0x606024a6) */
/* WARNING: Removing unreachable block (ram,0x606024a2) */
/* WARNING: Removing unreachable block (ram,0x60602496) */
/* WARNING: Removing unreachable block (ram,0x606024a9) */
/* WARNING: Removing unreachable block (ram,0x606024b9) */

undefined4 * FUN_60602330(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_606066c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x15) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_50,"invalid map/set<T> iterator");
    local_4 = 0;
    std::exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_606072a0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_28,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_606072a0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_60607654);
  }
  FUN_60602d10();
  piVar8 = (int *)*param_4;
  if (*(char *)((int)piVar8 + 0x15) == '\0') {
    if (*(char *)(param_4[2] + 0x15) == '\0') {
      piVar8 = (int *)param_4[2];
    }
  }
  else {
    piVar8 = (int *)param_4[2];
  }
  piVar6 = (int *)param_4[1];
  if (*(char *)((int)piVar8 + 0x15) == '\0') {
    piVar8[1] = (int)piVar6;
  }
  if (*(int **)(param_1[6] + 4) == param_4) {
    *(int **)(param_1[6] + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if (*(int **)param_1[6] == param_4) {
    if (*(char *)((int)piVar8 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0x15);
      piVar7 = (int *)*piVar8;
      piVar5 = piVar8;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar7 + 0x15);
        piVar5 = piVar3;
      }
    }
    else {
      piVar5 = piVar6;
    }
    *(int **)param_1[6] = piVar5;
  }
  iVar2 = param_1[6];
  if (*(int **)(iVar2 + 8) == param_4) {
    if (*(char *)((int)piVar8 + 0x15) == '\0') {
      uVar4 = FUN_60602ab0();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[5] == '\x01') {
    if (piVar8 != *(int **)(param_1[6] + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[5] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar7 + 5) = 0;
            FUN_60602a60(piVar7,(int)param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) == '\x01') && (*(char *)(piVar6[2] + 0x14) == '\x01'))
            goto LAB_6060257e;
            if (*(char *)(piVar6[2] + 0x14) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              FUN_60602ad0(piVar6,(int)param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 5) = (char)piVar7[5];
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined1 *)(piVar6[2] + 0x14) = 1;
            FUN_60602a60(piVar7,(int)param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar7 + 5) = 0;
            FUN_60602ad0(piVar7,(int)param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) != '\x01') || (*(char *)(*piVar6 + 0x14) != '\x01')) {
              if (*(char *)(*piVar6 + 0x14) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                FUN_60602a60(piVar6,(int)param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 5) = (char)piVar7[5];
              *(undefined1 *)(piVar7 + 5) = 1;
              *(undefined1 *)(*piVar6 + 0x14) = 1;
              FUN_60602ad0(piVar7,(int)param_1);
              break;
            }
LAB_6060257e:
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(param_1[6] + 4));
    }
    *(undefined1 *)(piVar8 + 5) = 1;
  }
  operator_delete(param_4);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  uVar4 = *param_1;
  param_2[1] = param_4;
  *param_2 = uVar4;
  ExceptionList = local_c;
  return param_2;
}



/* ---- FUN_60602610 @ 60602610 size=77 ---- */

void FUN_60602610(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int in_EAX;
  
  piVar2 = *(int **)(*(int *)(in_EAX + 0x18) + 4);
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    FUN_60602790((int *)piVar2[2]);
    piVar3 = (int *)*piVar2;
    operator_delete(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *(int *)(*(int *)(in_EAX + 0x18) + 4) = *(int *)(in_EAX + 0x18);
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)*(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_EAX + 0x18);
  *(int *)(*(int *)(in_EAX + 0x18) + 8) = *(int *)(in_EAX + 0x18);
  return;
}



/* ---- FUN_60602660 @ 60602660 size=136 ---- */

int * FUN_60602660(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puVar5 = (undefined4 *)unaff_EDI[6];
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  puVar2 = (undefined4 *)unaff_EDI[6];
  local_10 = puVar5;
  local_14 = *unaff_EDI;
  if (*unaff_EDI == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar2) || (*param_2 < (uint)puVar5[3])) {
    local_8 = unaff_EDI[6];
    local_c = *unaff_EDI;
    piVar4 = &local_c;
  }
  else {
    piVar4 = &local_14;
  }
  iVar1 = *piVar4;
  param_1[1] = piVar4[1];
  *param_1 = iVar1;
  return param_1;
}



/* ---- FUN_606026f0 @ 606026f0 size=13 ---- */

void FUN_606026f0(void)

{
  operator_delete(DAT_6060a508);
  return;
}



/* ---- FUN_60602700 @ 60602700 size=137 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_60602700(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_606066e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DAT_6060a508 = operator_new(4);
  if (DAT_6060a508 == (undefined4 *)0x0) {
    DAT_6060a508 = (undefined4 *)0x0;
  }
  else {
    *DAT_6060a508 = &DAT_6060a508;
  }
  local_4 = 0;
  DAT_6060a520 = FUN_60602d80();
  *(undefined1 *)(DAT_6060a520 + 0x15) = 1;
  *(int *)(DAT_6060a520 + 4) = DAT_6060a520;
  *(int *)DAT_6060a520 = DAT_6060a520;
  *(int *)(DAT_6060a520 + 8) = DAT_6060a520;
  _DAT_6060a524 = 0;
  ExceptionList = local_c;
  return &DAT_6060a508;
}



/* ---- FUN_60602790 @ 60602790 size=53 ---- */

void FUN_60602790(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    FUN_60602790((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}



/* ---- FUN_606027d0 @ 606027d0 size=655 ---- */

undefined4 * __thiscall
FUN_606027d0(void *this,undefined4 *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_606066c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x1ffffffd < (uint)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"map/set<T> too long");
    local_4 = 0;
    std::exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_606072a0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_28,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_606072a0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_60607618);
  }
  piVar3 = (int *)FUN_60602cd0(param_1[6],this,param_1[6]);
  param_1[7] = param_1[7] + 1;
  if (this == (void *)param_1[6]) {
    *(int **)((int)param_1[6] + 4) = piVar3;
    *(int **)param_1[6] = piVar3;
    iVar4 = param_1[6];
  }
  else {
    if (param_3 != '\0') {
      *(int **)this = piVar3;
      if (this == *(void **)param_1[6]) {
        *(int **)param_1[6] = piVar3;
      }
      goto LAB_606028b0;
    }
    *(int **)((int)this + 8) = piVar3;
    iVar4 = param_1[6];
    if (this != *(void **)(iVar4 + 8)) goto LAB_606028b0;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_606028b0:
  cVar1 = *(char *)(piVar3[1] + 0x14);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(param_1[6] + 4) + 0x14) = 1;
      param_2[1] = piVar3;
      *param_2 = *param_1;
      ExceptionList = local_c;
      return param_2;
    }
    piVar5 = piVar6 + 1;
    piVar7 = (int *)*piVar5;
    piVar2 = (int *)piVar7[1];
    if (piVar7 == (int *)*piVar2) {
      iVar4 = piVar2[2];
      if (*(char *)(iVar4 + 0x14) != '\0') {
        if (piVar6 == (int *)piVar7[2]) {
          piVar6 = (int *)piVar7[2];
          piVar7[2] = *piVar6;
          if (*(char *)(*piVar6 + 0x15) == '\0') {
            *(int **)(*piVar6 + 4) = piVar7;
          }
          piVar5 = piVar7 + 1;
          piVar6[1] = piVar7[1];
          if (piVar7 == *(int **)(param_1[6] + 4)) {
            *(int **)(param_1[6] + 4) = piVar6;
          }
          else {
            piVar2 = (int *)*piVar5;
            if (piVar7 == (int *)*piVar2) {
              *piVar2 = (int)piVar6;
            }
            else {
              piVar2[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar7;
          *piVar5 = (int)piVar6;
          piVar6 = piVar7;
        }
        *(undefined1 *)(*piVar5 + 0x14) = 1;
        *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x14) = 0;
        piVar5 = *(int **)(*piVar5 + 4);
        piVar7 = (int *)*piVar5;
        *piVar5 = piVar7[2];
        if (*(char *)(piVar7[2] + 0x15) == '\0') {
          *(int **)(piVar7[2] + 4) = piVar5;
        }
        piVar7[1] = piVar5[1];
        if (piVar5 == *(int **)(param_1[6] + 4)) {
          *(int **)(param_1[6] + 4) = piVar7;
          piVar7[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar7;
            piVar7[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar7;
            piVar7[2] = (int)piVar5;
          }
        }
        goto LAB_60602a1c;
      }
LAB_6060297a:
      *(undefined1 *)(piVar7 + 5) = 1;
      *(undefined1 *)(iVar4 + 0x14) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x14) = 0;
      piVar6 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x14) == '\0') goto LAB_6060297a;
      if (piVar6 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0x15) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        piVar5 = piVar7 + 1;
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(param_1[6] + 4)) {
          *(int *)(param_1[6] + 4) = iVar4;
        }
        else {
          piVar6 = (int *)*piVar5;
          if (piVar7 == (int *)piVar6[2]) {
            piVar6[2] = iVar4;
          }
          else {
            *piVar6 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        *piVar5 = iVar4;
        piVar6 = piVar7;
      }
      *(undefined1 *)(*piVar5 + 0x14) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x14) = 0;
      piVar5 = *(int **)(*piVar5 + 4);
      piVar7 = (int *)piVar5[2];
      piVar5[2] = *piVar7;
      if (*(char *)(*piVar7 + 0x15) == '\0') {
        *(int **)(*piVar7 + 4) = piVar5;
      }
      piVar7[1] = piVar5[1];
      if (piVar5 == *(int **)(param_1[6] + 4)) {
        *(int **)(param_1[6] + 4) = piVar7;
      }
      else {
        piVar2 = (int *)piVar5[1];
        if (piVar5 == (int *)*piVar2) {
          *piVar2 = (int)piVar7;
        }
        else {
          piVar2[2] = (int)piVar7;
        }
      }
      *piVar7 = (int)piVar5;
LAB_60602a1c:
      piVar5[1] = (int)piVar7;
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}



/* ---- FUN_60602a60 @ 60602a60 size=76 ---- */

void __thiscall FUN_60602a60(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)this + 8);
  *(int *)((int)this + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
    *(void **)(*piVar1 + 4) = this;
  }
  piVar1[1] = *(int *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 0x18) + 4)) {
    *(int **)(*(int *)(param_1 + 0x18) + 4) = piVar1;
    *piVar1 = (int)this;
    *(int **)((int)this + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)((int)this + 4);
  if (this == (void *)*piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = (int)this;
    *(int **)((int)this + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)this;
  *(int **)((int)this + 4) = piVar1;
  return;
}



/* ---- FUN_60602ab0 @ 60602ab0 size=28 ---- */

void FUN_60602ab0(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}



/* ---- FUN_60602ad0 @ 60602ad0 size=80 ---- */

void __thiscall FUN_60602ad0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = this;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 0x18) + 4)) {
    *(int *)(*(int *)(param_1 + 0x18) + 4) = iVar1;
    *(void **)(iVar1 + 8) = this;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  piVar2 = *(int **)((int)this + 4);
  if (this == (void *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(void **)(iVar1 + 8) = this;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(void **)(iVar1 + 8) = this;
  *(int *)((int)this + 4) = iVar1;
  return;
}



/* ---- FUN_60602b20 @ 60602b20 size=67 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60602b20(void)

{
  int local_10 [3];
  
  FUN_60602b90(local_10,DAT_6060a508,(int *)*DAT_6060a520,DAT_6060a508,DAT_6060a520);
  operator_delete(DAT_6060a520);
  DAT_6060a520 = (int *)0x0;
  _DAT_6060a524 = 0;
  return;
}



/* ---- FUN_60602b90 @ 60602b90 size=317 ---- */

int * FUN_60602b90(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_8 [2];
  
  piVar2 = (int *)*DAT_6060a520;
  if ((param_2 == 0) || (param_2 != DAT_6060a508)) {
    _invalid_parameter_noinfo();
  }
  piVar4 = DAT_6060a520;
  if (param_3 == piVar2) {
    if ((param_4 == 0) || (param_4 != DAT_6060a508)) {
      _invalid_parameter_noinfo();
    }
    if (param_5 == piVar4) {
      FUN_60602610();
      iVar3 = *DAT_6060a520;
      *param_1 = DAT_6060a508;
      param_1[1] = iVar3;
      return param_1;
    }
  }
  while( true ) {
    piVar2 = param_3;
    if ((param_2 == 0) || (param_2 != param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3 == param_5) break;
    if (param_2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)param_3 + 0x15) == '\0') {
      piVar4 = (int *)param_3[2];
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        param_3 = piVar4;
        piVar4 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          param_3 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x15);
        piVar5 = (int *)param_3[1];
        piVar4 = param_3;
        while ((param_3 = piVar5, cVar1 == '\0' && (piVar4 == (int *)param_3[2]))) {
          cVar1 = *(char *)(param_3[1] + 0x15);
          piVar5 = (int *)param_3[1];
          piVar4 = param_3;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
    FUN_60602330(&DAT_6060a508,local_8,param_2,piVar2);
  }
  *param_1 = DAT_6060a508;
  param_1[1] = (int)param_3;
  return param_1;
}



/* ---- FUN_60602cd0 @ 60602cd0 size=56 ---- */

void FUN_60602cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *unaff_ESI;
    puVar1[4] = unaff_ESI[1];
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
  }
  return;
}



/* ---- FUN_60602d10 @ 60602d10 size=99 ---- */

void FUN_60602d10(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    _invalid_parameter_noinfo();
  }
  iVar2 = unaff_ESI[1];
  if (*(char *)(iVar2 + 0x15) != '\0') {
    _invalid_parameter_noinfo();
    return;
  }
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0x15) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x15);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x15);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    unaff_ESI[1] = (int)piVar3;
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  cVar1 = *(char *)(iVar2 + 0x15);
  while ((cVar1 == '\0' && (unaff_ESI[1] == *(int *)(iVar2 + 8)))) {
    unaff_ESI[1] = iVar2;
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  unaff_ESI[1] = iVar2;
  return;
}



/* ---- FUN_60602d80 @ 60602d80 size=55 ---- */

void FUN_60602d80(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  return;
}



/* ---- FUN_60602dc0 @ 60602dc0 size=125 ---- */

void FUN_60602dc0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    _invalid_parameter_noinfo();
  }
  piVar2 = (int *)unaff_ESI[1];
  if (*(char *)((int)piVar2 + 0x15) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x15);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x15);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      unaff_ESI[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x15);
    while ((cVar1 == '\0' && (unaff_ESI[1] == *piVar2))) {
      unaff_ESI[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x15);
    }
    if (*(char *)(unaff_ESI[1] + 0x15) == '\0') {
      unaff_ESI[1] = (int)piVar2;
      return;
    }
  }
  else {
    iVar3 = piVar2[2];
    unaff_ESI[1] = iVar3;
    if (*(char *)(iVar3 + 0x15) == '\0') {
      return;
    }
  }
  _invalid_parameter_noinfo();
  return;
}



/* ---- FUN_60602e50 @ 60602e50 size=27 ---- */

void __fastcall FUN_60602e50(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_606072a0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x60602e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



/* ---- FUN_60602e70 @ 60602e70 size=48 ---- */

exception * __thiscall FUN_60602e70(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_606072a0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc));
  std::exception::~exception(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_60602ea0 @ 60602ea0 size=101 ---- */

exception * __thiscall FUN_60602ea0(void *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60606629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception(this,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_606072a0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_60602f20 @ 60602f20 size=7 ---- */

void __fastcall FUN_60602f20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_606072c0;
  return;
}



/* ---- CPacketData @ 60602f50 size=27 ---- */

/* public: __thiscall CPacketData::CPacketData(class CPacketData const &) */

void __thiscall CPacketData::CPacketData(CPacketData *this,CPacketData *param_1)

{
                    /* 0x2f50  12  ??0CPacketData@@QAE@ABV0@@Z */
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}



/* ---- operator= @ 60602f70 size=21 ---- */

/* public: class CHgAsyncSocket & __thiscall CHgAsyncSocket::operator=(class CHgAsyncSocket const &)
    */

CHgAsyncSocket * __thiscall CHgAsyncSocket::operator=(CHgAsyncSocket *this,CHgAsyncSocket *param_1)

{
                    /* 0x2f70  19  ??4CHgAsyncSocket@@QAEAAV0@ABV0@@Z
                       0x2f70  22  ??4CPacketData@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}



/* ---- FUN_60602f90 @ 60602f90 size=83 ---- */

undefined4 * __thiscall FUN_60602f90(undefined4 *param_1,byte param_2)

{
  if ((param_2 & 2) == 0) {
    *param_1 = &CPacketData::_vftable_;
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
    return param_1;
  }
  _eh_vector_destructor_iterator_(param_1,0xc,param_1[-1],CPacketData::~CPacketData);
  if ((param_2 & 1) != 0) {
    operator_delete__(param_1 + -1);
  }
  return param_1 + -1;
}



/* ---- Lock @ 60602ff0 size=14 ---- */

/* protected: void __thiscall CHgtpSocket::Lock(void) */

void __thiscall CHgtpSocket::Lock(CHgtpSocket *this)

{
                    /* 0x2ff0  56  ?Lock@CHgtpSocket@@IAEXXZ */
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x84));
  return;
}



/* ---- Unlock @ 60603000 size=14 ---- */

/* protected: void __thiscall CHgtpSocket::Unlock(void) */

void __thiscall CHgtpSocket::Unlock(CHgtpSocket *this)

{
                    /* 0x3000  103  ?Unlock@CHgtpSocket@@IAEXXZ */
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x84));
  return;
}



/* ---- CHgtpSocket @ 60603010 size=289 ---- */

/* public: __thiscall CHgtpSocket::CHgtpSocket(class CHgtpSocket const &) */

CHgtpSocket * __thiscall CHgtpSocket::CHgtpSocket(CHgtpSocket *this,CHgtpSocket *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3010  10  ??0CHgtpSocket@@QAE@ABV0@@Z */
  puStack_8 = &LAB_606068b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &CHgAsyncSocket::_vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
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
  this[0x34] = param_1[0x34];
  FUN_60603930(param_1 + 0x38,(undefined4 *)(this + 0x38));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_60603930(param_1 + 0x54,(undefined4 *)(this + 0x54));
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 60603140 size=426 ---- */

/* public: class CHgtpSocket & __thiscall CHgtpSocket::operator=(class CHgtpSocket const &) */

CHgtpSocket * __thiscall CHgtpSocket::operator=(CHgtpSocket *this,CHgtpSocket *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  CHgtpSocket *pCVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_14;
  
                    /* 0x3140  21  ??4CHgtpSocket@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  pCVar6 = this + 0x20;
  iVar9 = 0x15;
  do {
    *pCVar6 = pCVar6[(int)param_1 - (int)this];
    pCVar6 = pCVar6 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pCVar6 = this + 0x38;
  if (pCVar6 != param_1 + 0x38) {
    local_14 = *(undefined4 **)(param_1 + 0x4c);
    puVar1 = (undefined4 *)*local_14;
    piVar2 = *(int **)(param_1 + 0x38);
    piVar3 = *(int **)(this + 0x4c);
    piVar7 = (int *)*piVar3;
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)(this + 0x4c) + 4) = *(int *)(this + 0x4c);
    *(undefined4 *)(this + 0x50) = 0;
    if (piVar7 != *(int **)(this + 0x4c)) {
      do {
        piVar3 = (int *)*piVar7;
        operator_delete(piVar7);
        piVar7 = piVar3;
      } while (piVar3 != (int *)*(int *)(this + 0x4c));
    }
    FUN_60603ab0((int)pCVar6,local_14,*(undefined4 *)pCVar6,**(int **)(this + 0x4c),piVar2,puVar1,
                 piVar2,local_14);
  }
  pCVar6 = this + 0x54;
  if (pCVar6 != param_1 + 0x54) {
    piVar2 = *(int **)(param_1 + 0x54);
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    puVar4 = (undefined4 *)*puVar1;
    puVar5 = *(undefined4 **)(this + 0x68);
    puVar8 = (undefined4 *)*puVar5;
    *puVar5 = puVar5;
    *(int *)(*(int *)(this + 0x68) + 4) = *(int *)(this + 0x68);
    *(undefined4 *)(this + 0x6c) = 0;
    if (puVar8 != *(undefined4 **)(this + 0x68)) {
      do {
        local_14 = (undefined4 *)*puVar8;
        operator_delete(puVar8);
        puVar8 = local_14;
      } while (local_14 != *(undefined4 **)(this + 0x68));
    }
    FUN_60603ab0((int)pCVar6,local_14,*(undefined4 *)pCVar6,**(int **)(this + 0x68),piVar2,puVar4,
                 piVar2,puVar1);
  }
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  return this;
}



/* ---- CHgSecureSocket @ 60603350 size=160 ---- */

/* public: __thiscall CHgSecureSocket::CHgSecureSocket(class CHgSecureSocket const &) */

CHgSecureSocket * __thiscall
CHgSecureSocket::CHgSecureSocket(CHgSecureSocket *this,CHgSecureSocket *param_1)

{
  int iVar1;
  CHgSecureSocket *pCVar2;
  CHgSecureSocket *pCVar3;
  
                    /* 0x3350  8  ??0CHgSecureSocket@@QAE@ABV0@@Z */
  CHgtpSocket::CHgtpSocket((CHgtpSocket *)this,(CHgtpSocket *)param_1);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pCVar2 = param_1 + 0xa8;
  pCVar3 = this + 0xa8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  pCVar2 = param_1 + 0xd8;
  pCVar3 = this + 0xd8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  pCVar2 = param_1 + 0x108;
  pCVar3 = this + 0x108;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  return this;
}



/* ---- operator= @ 606033f0 size=169 ---- */

/* public: class CHgSecureSocket & __thiscall CHgSecureSocket::operator=(class CHgSecureSocket const
   &) */

CHgSecureSocket * __thiscall
CHgSecureSocket::operator=(CHgSecureSocket *this,CHgSecureSocket *param_1)

{
  int iVar1;
  CHgSecureSocket *pCVar2;
  int iVar3;
  
                    /* 0x33f0  20  ??4CHgSecureSocket@@QAEAAV0@ABV0@@Z */
  CHgtpSocket::operator=((CHgtpSocket *)this,(CHgtpSocket *)param_1);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pCVar2 = this + 0xa8;
  iVar1 = (int)param_1 - (int)this;
  iVar3 = 0x30;
  do {
    *pCVar2 = pCVar2[iVar1];
    pCVar2 = pCVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pCVar2 = this + 0xd8;
  iVar3 = 0x30;
  do {
    *pCVar2 = pCVar2[iVar1];
    pCVar2 = pCVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pCVar2 = this + 0x108;
  iVar3 = 0x30;
  do {
    *pCVar2 = pCVar2[iVar1];
    pCVar2 = pCVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  return this;
}



/* ---- FUN_606034a0 @ 606034a0 size=150 ---- */

CHgtpSocket * __thiscall FUN_606034a0(CHgtpSocket *param_1,byte param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x148,*(int *)(param_1 + -4),CHgSecureSocket::~CHgSecureSocket);
    if ((param_2 & 1) != 0) {
      operator_delete__(param_1 + -4);
    }
    return param_1 + -4;
  }
  *(undefined ***)param_1 = &CHgSecureSocket::_vftable_;
  if (*(void **)(param_1 + 0x13c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x13c));
  }
  if (*(void **)(param_1 + 0x140) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x140));
  }
  if (*(void **)(param_1 + 0x144) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x144));
  }
  CHgtpSocket::~CHgtpSocket(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}



/* ---- FUN_60603540 @ 60603540 size=99 ---- */

void __fastcall FUN_60603540(undefined4 *param_1)

{
  uint uVar1;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60606688;
  local_c = ExceptionList;
  uVar1 = DAT_6060a01c ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_60607390;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1,uVar1);
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_606072c0;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_606035b0 @ 606035b0 size=300 ---- */

void FUN_606035b0(int param_1)

{
  CHgtpSocket *pCVar1;
  int iVar2;
  CHgSecureSocket *this;
  int unaff_ESI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_60606881;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_1 == 1) {
    pCVar1 = operator_new(0xa0);
    local_c = 0;
    if (pCVar1 == (CHgtpSocket *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CHgtpSocket::CHgtpSocket(pCVar1);
    }
    *(int *)(unaff_ESI + 8) = iVar2;
    *(int *)(iVar2 + 8) = unaff_ESI;
    ExceptionList = local_14;
    return;
  }
  if (param_1 == 2) {
    this = operator_new(0x148);
    local_c = 1;
    if (this == (CHgSecureSocket *)0x0) {
      *(undefined4 *)(unaff_ESI + 8) = 0;
      iRam00000008 = unaff_ESI;
      ExceptionList = local_14;
      return;
    }
    iVar2 = CHgSecureSocket::CHgSecureSocket(this);
    *(int *)(unaff_ESI + 8) = iVar2;
    *(int *)(iVar2 + 8) = unaff_ESI;
    ExceptionList = local_14;
    return;
  }
  pCVar1 = operator_new(0xa0);
  local_c = 2;
  if (pCVar1 == (CHgtpSocket *)0x0) {
    *(undefined4 *)(unaff_ESI + 8) = 0;
    iRam00000008 = unaff_ESI;
    ExceptionList = local_14;
    return;
  }
  iVar2 = CHgtpSocket::CHgtpSocket(pCVar1);
  *(int *)(unaff_ESI + 8) = iVar2;
  *(int *)(iVar2 + 8) = unaff_ESI;
  ExceptionList = local_14;
  return;
}



/* ---- FUN_606038d0 @ 606038d0 size=30 ---- */

undefined4 * __thiscall FUN_606038d0(void *this,byte param_1)

{
  FUN_60603540(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- HgCreateSocket @ 606038f0 size=49 ---- */

undefined4 * __cdecl HgCreateSocket(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* 0x38f0  5  HgCreateSocket */
  puVar1 = operator_new(0xc);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_60607390;
    puVar1[1] = 1;
    puVar2 = puVar1;
  }
  FUN_606035b0(param_1);
  return puVar2;
}



/* ---- FUN_60603930 @ 60603930 size=139 ---- */

undefined4 * __thiscall FUN_60603930(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60606758;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  local_8 = 0;
  piVar2 = (int *)FUN_60603a00();
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[5] = piVar2;
  param_1[6] = 0;
  FUN_60603a70((int)param_1,*param_1,*piVar2,*(int **)this,
               (undefined4 *)**(undefined4 **)((int)this + 0x14),*(int **)this,
               *(undefined4 **)((int)this + 0x14));
  ExceptionList = local_10;
  return param_1;
}



/* ---- Catch_All@606039bb @ 606039bb size=17 ---- */

void Catch_All_606039bb(void)

{
  FUN_60603a20();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_606039d0 @ 606039d0 size=21 ---- */

void FUN_606039d0(void)

{
  undefined4 *in_EAX;
  
  FUN_60603a20();
  operator_delete((void *)*in_EAX);
  return;
}



/* ---- FUN_606039f0 @ 606039f0 size=10 ---- */

void FUN_606039f0(void)

{
  undefined4 *in_EAX;
  
  operator_delete((void *)*in_EAX);
  return;
}



/* ---- FUN_60603a00 @ 60603a00 size=26 ---- */

void FUN_60603a00(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}



/* ---- FUN_60603a20 @ 60603a20 size=71 ---- */

void FUN_60603a20(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x14);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(unaff_ESI + 0x14) + 4) = *(int *)(unaff_ESI + 0x14);
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  if (piVar2 != *(int **)(unaff_ESI + 0x14)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_ESI + 0x14));
  }
  operator_delete(*(void **)(unaff_ESI + 0x14));
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  return;
}



/* ---- FUN_60603a70 @ 60603a70 size=53 ---- */

void FUN_60603a70(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5,
                 int *param_6,undefined4 *param_7)

{
  undefined4 local_c;
  
  FUN_60603ab0(param_1,local_c,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* ---- FUN_60603ab0 @ 60603ab0 size=231 ---- */

void FUN_60603ab0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_60606730;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if ((param_5 == (int *)0x0) || (param_5 != param_7)) {
      _invalid_parameter_noinfo();
    }
    if (param_6 == param_8) break;
    if (param_5 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar1 = 0;
    }
    else {
      iVar1 = *param_5;
    }
    if (param_6 == *(undefined4 **)(iVar1 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    iVar1 = FUN_60603ce0(param_4,*(undefined4 *)(param_4 + 4),param_6 + 2);
    FUN_60603d20(param_1);
    *(int *)(param_4 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    if (param_5 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar1 = 0;
    }
    else {
      iVar1 = *param_5;
    }
    if (param_6 == *(undefined4 **)(iVar1 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    param_6 = (undefined4 *)*param_6;
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@60603b83 @ 60603b83 size=103 ---- */

void Catch_All_60603b83(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  
  uVar4 = FUN_60603cc0();
  cVar3 = (char)uVar4;
  while (cVar3 != '\0') {
    piVar1 = *(int **)(unaff_EBP + 0x10);
    iVar5 = *(int *)(unaff_EBP + 0x14);
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    piVar2 = *(int **)(iVar5 + 4);
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (piVar2 == *(int **)(iVar5 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    FUN_60603c00((undefined4 *)(unaff_EBP + -0x20),piVar1,piVar2);
    FUN_60603c80();
    uVar4 = FUN_60603cc0();
    cVar3 = (char)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60603c00 @ 60603c00 size=124 ---- */

undefined4 * FUN_60603c00(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *unaff_EDI;
  
  if (param_2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar1 = 0;
  }
  else {
    iVar1 = *param_2;
  }
  if (param_3 == *(int **)(iVar1 + 0x14)) {
    _invalid_parameter_noinfo();
  }
  iVar1 = *param_3;
  if (param_3 != (int *)unaff_EDI[5]) {
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    operator_delete(param_3);
    unaff_EDI[6] = unaff_EDI[6] + -1;
  }
  *param_1 = *unaff_EDI;
  param_1[1] = iVar1;
  return param_1;
}



/* ---- FUN_60603c80 @ 60603c80 size=49 ---- */

void FUN_60603c80(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    piVar1 = (int *)*unaff_ESI;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
      goto LAB_60603c9b;
    }
  }
  iVar2 = *piVar1;
LAB_60603c9b:
  if (unaff_ESI[1] == *(int *)(iVar2 + 0x14)) {
    _invalid_parameter_noinfo();
  }
  unaff_ESI[1] = *(int *)unaff_ESI[1];
  return;
}



/* ---- FUN_60603cc0 @ 60603cc0 size=30 ---- */

undefined4 FUN_60603cc0(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  if ((*unaff_EDI == 0) || (*unaff_EDI != *unaff_ESI)) {
    _invalid_parameter_noinfo();
  }
  return CONCAT31((int3)((uint)unaff_EDI[1] >> 8),unaff_EDI[1] != unaff_ESI[1]);
}



/* ---- FUN_60603ce0 @ 60603ce0 size=51 ---- */

void FUN_60603ce0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return;
}



/* ---- FUN_60603d20 @ 60603d20 size=159 ---- */

void __fastcall FUN_60603d20(int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60606662;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x18) == 0x3fffffff) {
    ExceptionList = &local_c;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"list<T> too long");
    local_4 = 0;
    std::exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_606072a0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_28,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_606072a0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_60607618);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}



/* ---- FUN_60603dc0 @ 60603dc0 size=1 ---- */

void FUN_60603dc0(void)

{
  return;
}



/* ---- CHgSecureSocket @ 60603dd0 size=322 ---- */

/* public: __thiscall CHgSecureSocket::CHgSecureSocket(void) */

CHgSecureSocket * __thiscall CHgSecureSocket::CHgSecureSocket(CHgSecureSocket *this)

{
  void *pvVar1;
  DWORD DVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3dd0  9  ??0CHgSecureSocket@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60606838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CHgtpSocket::CHgtpSocket((CHgtpSocket *)this);
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xa0) = 0;
  pvVar1 = operator_new(0xa00);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x18) = 0;
    *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x9e0) = 0x271;
    *(undefined4 *)((int)pvVar1 + 0x9f0) = 0;
    *(undefined4 *)((int)pvVar1 + 0x9f4) = 0;
    *(undefined4 *)((int)pvVar1 + 0x9f8) = 2;
  }
  *(void **)(this + 0x13c) = pvVar1;
  pvVar1 = operator_new(0xa00);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x18) = 0;
    *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x9e0) = 0x271;
    *(undefined4 *)((int)pvVar1 + 0x9f0) = 0;
    *(undefined4 *)((int)pvVar1 + 0x9f4) = 0;
    *(undefined4 *)((int)pvVar1 + 0x9f8) = 2;
  }
  *(void **)(this + 0x140) = pvVar1;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  pvVar1 = operator_new(0x9c4);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x9c0) = 0x271;
  }
  *(void **)(this + 0x144) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    DVar2 = GetCurrentProcessId();
    srand(DVar2);
    ExceptionList = local_c;
    return this;
  }
  DVar2 = GetTickCount();
  FUN_60605a30(DVar2);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CHgSecureSocket @ 60603f20 size=74 ---- */

/* public: virtual __thiscall CHgSecureSocket::~CHgSecureSocket(void) */

void __thiscall CHgSecureSocket::~CHgSecureSocket(CHgSecureSocket *this)

{
                    /* 0x3f20  16  ??1CHgSecureSocket@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(void **)(this + 0x13c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x13c));
  }
  if (*(void **)(this + 0x140) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x140));
  }
  if (*(void **)(this + 0x144) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x144));
  }
  CHgtpSocket::~CHgtpSocket((CHgtpSocket *)this);
  return;
}



/* ---- OnConnect @ 60603f70 size=327 ---- */

/* public: virtual void __thiscall CHgSecureSocket::OnConnect(int) */

void __thiscall CHgSecureSocket::OnConnect(CHgSecureSocket *this,int param_1)

{
  int iVar1;
  CHgSecureSocket *pCVar2;
  
                    /* 0x3f70  64  ?OnConnect@CHgSecureSocket@@UAEXH@Z */
  if (param_1 == 0) {
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0x138) = 0;
    GenerateKey(this);
    iVar1 = *(int *)(this + 0x138);
    if (iVar1 < 0x30) {
      do {
        iVar1 = Ordinal_19(*(undefined4 *)(this + 4),this + *(int *)(this + 0x138) + 0x108,
                           0x30 - *(int *)(this + 0x138),0);
        if (iVar1 == -1) {
          iVar1 = Ordinal_111();
          if (iVar1 != 0x2733) {
            Ordinal_22(*(undefined4 *)(this + 4),2);
            *(int *)(this + 0x14) = iVar1;
            if (*(HWND *)(this + 0xc) == (HWND)0x0) {
              return;
            }
            if (*(uint *)(this + 0x10) < 0x400) {
              return;
            }
            pCVar2 = *(CHgSecureSocket **)(this + 8);
            if (*(CHgSecureSocket **)(this + 8) == (CHgSecureSocket *)0x0) {
              pCVar2 = this;
            }
            PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),iVar1 << 0x10 | 0x7e9,
                         (LPARAM)pCVar2);
            return;
          }
        }
        else {
          *(int *)(this + 0x138) = *(int *)(this + 0x138) + iVar1;
        }
      } while (*(int *)(this + 0x138) < 0x30);
      iVar1 = *(int *)(this + 0x138);
    }
    if (iVar1 != 0x30) {
      Ordinal_22(*(undefined4 *)(this + 4),2);
      return;
    }
    FUN_60603dc0();
    *(undefined4 *)(this + 0xa0) = 2;
  }
  else {
    *(int *)(this + 0x14) = param_1;
    if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
      pCVar2 = *(CHgSecureSocket **)(this + 8);
      if (*(CHgSecureSocket **)(this + 8) == (CHgSecureSocket *)0x0) {
        pCVar2 = this;
      }
      PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),param_1 << 0x10 | 0x7e9,
                   (LPARAM)pCVar2);
      return;
    }
  }
  return;
}



/* ---- OnReceive @ 606040c0 size=264 ---- */

/* public: virtual void __thiscall CHgSecureSocket::OnReceive(int) */

void __thiscall CHgSecureSocket::OnReceive(CHgSecureSocket *this,int param_1)

{
  int iVar1;
  CHgSecureSocket *lParam;
  
                    /* 0x40c0  69  ?OnReceive@CHgSecureSocket@@UAEXH@Z */
  if ((*(int *)(this + 0xa0) != 1) && (*(int *)(this + 0xa0) != 2)) {
    CHgtpSocket::OnReceive((CHgtpSocket *)this,param_1);
    return;
  }
  iVar1 = Ordinal_16(*(undefined4 *)(this + 4),this + *(int *)(this + 0xa4) + 0xa8,
                     0x30 - *(int *)(this + 0xa4),0);
  FUN_60603dc0();
  if (iVar1 == -1) {
    Ordinal_111();
    FUN_60603dc0();
    return;
  }
  *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + iVar1;
  FUN_60603dc0();
  if (*(int *)(this + 0xa4) == 0x30) {
    FUN_60603dc0();
    MakeKey(this);
    FUN_60603dc0();
    *(undefined4 *)(this + 0xa0) = 3;
    *(undefined4 *)(this + 0x14) = 0;
    if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
      lParam = *(CHgSecureSocket **)(this + 8);
      if (*(CHgSecureSocket **)(this + 8) == (CHgSecureSocket *)0x0) {
        lParam = this;
      }
      PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),0x7e9,(LPARAM)lParam);
    }
  }
  return;
}



/* ---- GenerateKey @ 606041d0 size=206 ---- */

/* public: void __thiscall CHgSecureSocket::GenerateKey(void) */

void __thiscall CHgSecureSocket::GenerateKey(CHgSecureSocket *this)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  CHgSecureSocket *pCVar4;
  int iVar5;
  CHgSecureSocket *pCVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  CHgSecureSocket local_34 [48];
  uint local_4;
  
                    /* 0x41d0  41  ?GenerateKey@CHgSecureSocket@@QAEXXZ */
  local_4 = DAT_6060a01c ^ (uint)&local_44;
  pCVar4 = this + 0xd8;
  memset(pCVar4,0,0x30);
  iVar5 = 0;
  do {
    if (*(int *)(this + 0x144) == 0) {
      iVar3 = rand();
      uVar2 = (undefined2)(iVar3 % 0xffff);
    }
    else {
      uVar1 = FUN_60605b20();
      uVar2 = (undefined2)(uVar1 % 0xffff);
    }
    *(undefined2 *)(pCVar4 + iVar5 * 2) = uVar2;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x18);
  local_44 = 0x21f72c9d;
  local_40 = 0xcae2a54b;
  local_3c = 0xde8f1dca;
  local_38 = 0x97d23a1c;
  iVar5 = -(int)pCVar4;
  iVar3 = 6;
  do {
    FUN_60605580(pCVar4,(uint *)(pCVar4 + (int)(local_34 + iVar5)));
    pCVar4 = pCVar4 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pCVar4 = local_34;
  pCVar6 = this + 0x108;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pCVar4;
    pCVar4 = pCVar4 + 4;
    pCVar6 = pCVar6 + 4;
  }
  __security_check_cookie(local_4 ^ (uint)&local_44);
  return;
}



/* ---- OnSend @ 606042a0 size=17 ---- */

/* public: virtual void __thiscall CHgSecureSocket::OnSend(int) */

void __thiscall CHgSecureSocket::OnSend(CHgSecureSocket *this,int param_1)

{
                    /* 0x42a0  73  ?OnSend@CHgSecureSocket@@UAEXH@Z */
  if (*(int *)(this + 0xa0) == 3) {
    CHgtpSocket::OnSend((CHgtpSocket *)this,param_1);
    return;
  }
  return;
}



/* ---- MakeKey @ 606042c0 size=382 ---- */

/* public: void __thiscall CHgSecureSocket::MakeKey(void) */

void __thiscall CHgSecureSocket::MakeKey(CHgSecureSocket *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CHgSecureSocket *pCVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CHgSecureSocket *pCVar9;
  int iVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* 0x42c0  57  ?MakeKey@CHgSecureSocket@@QAEXXZ */
  local_18 = 0x21f72c9d;
  local_14 = 0xcae2a54b;
  local_10 = 0xde8f1dca;
  local_c = 0x97d23a1c;
  iVar8 = 6;
  pCVar9 = this + 0xa8;
  do {
    iVar10 = iVar8;
    FUN_60605610(&local_18,(uint *)pCVar9);
    pCVar9 = pCVar9 + 8;
    iVar8 = iVar10 + -1;
  } while (iVar8 != 0);
  pCVar9 = this + 0xb4;
  pCVar5 = this + 0xdc;
  iVar10 = iVar10 + 1;
  do {
    *(uint *)(pCVar5 + -4) = *(uint *)(pCVar5 + -4) ^ *(uint *)(pCVar9 + -0xc);
    *(uint *)pCVar5 =
         *(uint *)pCVar5 ^ *(uint *)(pCVar5 + ((int)(this + 0xa8) - (int)(this + 0xd8)));
    *(uint *)(pCVar5 + 4) = *(uint *)(pCVar5 + 4) ^ *(uint *)(pCVar9 + -4);
    *(uint *)(pCVar5 + 8) = *(uint *)(pCVar5 + 8) ^ *(uint *)pCVar9;
    *(uint *)(pCVar5 + 0xc) = *(uint *)(pCVar5 + 0xc) ^ *(uint *)(pCVar9 + 4);
    *(uint *)(pCVar5 + 0x10) = *(uint *)(pCVar5 + 0x10) ^ *(uint *)(pCVar9 + 8);
    pCVar5 = pCVar5 + 0x18;
    pCVar9 = pCVar9 + 0x18;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_14 = *(undefined4 *)(this + 0xf4);
  puVar1 = *(undefined4 **)(this + 0x140);
  uVar2 = *(undefined4 *)(this + 0xd8);
  uVar3 = *(undefined4 *)(this + 0xdc);
  uVar4 = *(undefined4 *)(this + 0xf0);
  puVar1[0x27e] = 2;
  if (this + 0xe0 != (CHgSecureSocket *)0x0) {
    *puVar1 = uVar2;
    puVar1[4] = uVar2;
    puVar1[7] = puVar1 + 2;
    puVar1[1] = uVar3;
    puVar1[5] = uVar3;
    puVar1[6] = puVar1;
    FUN_60605a70((int)(this + 0xe0));
    uVar6 = FUN_60605b20();
    uVar7 = FUN_60605b20();
    puVar1[0x27b] = uVar7;
    puVar1[0x27a] = uVar6;
    puVar1[0x27d] = puVar1 + 0x27c;
    puVar1[0x27c] = puVar1 + 0x27a;
  }
  puVar1 = *(undefined4 **)(this + 0x13c);
  puVar1[0x27e] = 2;
  if (this + 0xf8 != (CHgSecureSocket *)0x0) {
    *puVar1 = uVar4;
    puVar1[1] = local_14;
    puVar1[4] = uVar4;
    puVar1[5] = local_14;
    puVar1[7] = puVar1 + 2;
    puVar1[6] = puVar1;
    FUN_60605a70((int)(this + 0xf8));
    uVar6 = FUN_60605b20();
    uVar7 = FUN_60605b20();
    puVar1[0x27b] = uVar7;
    puVar1[0x27a] = uVar6;
    puVar1[0x27d] = puVar1 + 0x27c;
    puVar1[0x27c] = puVar1 + 0x27a;
  }
  return;
}



/* ---- SendFilter @ 60604440 size=32 ---- */

/* public: virtual void __thiscall CHgSecureSocket::SendFilter(void *,int) */

void __thiscall CHgSecureSocket::SendFilter(CHgSecureSocket *this,void *param_1,int param_2)

{
                    /* 0x4440  90  ?SendFilter@CHgSecureSocket@@UAEXPAXH@Z */
  if (*(int *)(this + 0xa0) == 3) {
    FUN_606057a0(*(void **)(this + 0x13c),param_1);
  }
  return;
}



/* ---- RecvFilter @ 60604460 size=34 ---- */

/* public: virtual void __thiscall CHgSecureSocket::RecvFilter(void *,int) */

void __thiscall CHgSecureSocket::RecvFilter(CHgSecureSocket *this,void *param_1,int param_2)

{
                    /* 0x4460  84  ?RecvFilter@CHgSecureSocket@@UAEXPAXH@Z */
  if (*(int *)(this + 0xa0) == 3) {
    FUN_60605900(param_1);
  }
  return;
}



/* ---- OnAccept @ 60604490 size=62 ---- */

/* public: virtual void __thiscall CHgSecureSocket::OnAccept(int) */

void __thiscall CHgSecureSocket::OnAccept(CHgSecureSocket *this,int param_1)

{
  CHgSecureSocket *lParam;
  
                    /* 0x4490  59  ?OnAccept@CHgSecureSocket@@UAEXH@Z
                       0x4490  60  ?OnAccept@CHgtpSocket@@UAEXH@Z */
  *(int *)(this + 0x14) = param_1;
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
    lParam = this;
    if (*(CHgSecureSocket **)(this + 8) != (CHgSecureSocket *)0x0) {
      lParam = *(CHgSecureSocket **)(this + 8);
    }
    PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),param_1 << 0x10 | 0x7ee,(LPARAM)lParam
                );
  }
  return;
}



/* ---- GetSocketState @ 606044d0 size=7 ---- */

/* public: enum CHgSecureSocket::SocketState __thiscall CHgSecureSocket::GetSocketState(void) */

SocketState __thiscall CHgSecureSocket::GetSocketState(CHgSecureSocket *this)

{
                    /* 0x44d0  52  ?GetSocketState@CHgSecureSocket@@QAE?AW4SocketState@1@XZ */
  return *(SocketState *)(this + 0xa0);
}



/* ---- SetSocketState @ 606044e0 size=39 ---- */

/* public: void __thiscall CHgSecureSocket::SetSocketState(enum CHgSecureSocket::SocketState) */

void __thiscall CHgSecureSocket::SetSocketState(CHgSecureSocket *this,SocketState param_1)

{
                    /* 0x44e0  100  ?SetSocketState@CHgSecureSocket@@QAEXW4SocketState@1@@Z */
  FUN_60603dc0();
  *(SocketState *)(this + 0xa0) = param_1;
  return;
}



/* ---- Close @ 60604510 size=41 ---- */

/* public: virtual void __thiscall CHgSecureSocket::Close(void) */

void __thiscall CHgSecureSocket::Close(CHgSecureSocket *this)

{
                    /* 0x4510  35  ?Close@CHgSecureSocket@@UAEXXZ */
  CHgAsyncSocket::Close((CHgAsyncSocket *)this);
  FUN_60603dc0();
  *(undefined4 *)(this + 0xa0) = 0;
  return;
}



/* ---- FUN_60604540 @ 60604540 size=81 ---- */

undefined4 FUN_60604540(undefined4 param_1,int param_2)

{
  BOOL BVar1;
  
  if (param_2 == 1) {
    DAT_6060a500 = param_1;
  }
  else if (param_2 == 0) {
    FUN_606010a0();
    FUN_60602610();
    Ordinal_116();
    BVar1 = IsWindow(DAT_6060a504);
    if (BVar1 != 0) {
      DestroyWindow(DAT_6060a504);
    }
    return 0;
  }
  return 1;
}



/* ---- CHgtpSocket @ 606045a0 size=213 ---- */

/* public: __thiscall CHgtpSocket::CHgtpSocket(void) */

CHgtpSocket * __thiscall CHgtpSocket::CHgtpSocket(CHgtpSocket *this)

{
  undefined4 *puVar1;
  void *_Dst;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x45a0  11  ??0CHgtpSocket@@QAE@XZ */
  puStack_8 = &LAB_6060680e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  FUN_60605460((undefined4 *)(this + 0x38));
  local_4._0_1_ = 1;
  FUN_60605460((undefined4 *)(this + 0x54));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x20] = (CHgtpSocket)0x0;
  puVar1 = (undefined4 *)FUN_60601000();
  *(undefined4 *)(this + 0x18) = *puVar1;
  *(undefined4 *)(this + 0x1c) = puVar1[1];
  _Dst = (void *)FUN_60605c4a(0x800);
  *(void **)(this + 0x70) = _Dst;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x800);
  }
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0x800;
  *(undefined4 *)(this + 0x7c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x84));
  ExceptionList = local_c;
  return this;
}



/* ---- ~CHgtpSocket @ 60604680 size=194 ---- */

/* public: virtual __thiscall CHgtpSocket::~CHgtpSocket(void) */

void __thiscall CHgtpSocket::~CHgtpSocket(CHgtpSocket *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4680  17  ??1CHgtpSocket@@UAE@XZ */
  puStack_8 = &LAB_606067ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 2;
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x70));
    *(undefined4 *)(this + 0x70) = 0;
  }
  RemoveAllPacket(this,(list<CPacketData*,std::allocator<CPacketData*>_> *)(this + 0x38));
  RemoveAllPacket(this,(list<CPacketData*,std::allocator<CPacketData*>_> *)(this + 0x54));
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x84));
  FUN_60603a20();
  operator_delete(*(void **)(this + 0x54));
  FUN_60603a20();
  operator_delete(*(void **)(this + 0x38));
  local_4 = 0xffffffff;
  *(undefined ***)this = &CHgAsyncSocket::_vftable_;
  if (*(int *)(this + 4) != -1) {
    CHgAsyncSocket::Close((CHgAsyncSocket *)this);
  }
  ExceptionList = local_c;
  return;
}



/* ---- Receive @ 60604750 size=98 ---- */

/* public: virtual int __thiscall CHgtpSocket::Receive(void *,int,int) */

int __thiscall CHgtpSocket::Receive(CHgtpSocket *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  UINT UVar2;
  
                    /* 0x4750  81  ?Receive@CHgtpSocket@@UAEHPAXHH@Z */
  iVar1 = Ordinal_16(*(undefined4 *)(this + 4),param_1,param_2,param_3);
  if (iVar1 != -1) {
    (**(code **)(*(int *)this + 0x3c))(param_1,iVar1);
    return iVar1;
  }
  UVar2 = Ordinal_111();
  if (UVar2 == 0x2733) {
    return 0x2733;
  }
  HgGetWSAErrorString(UVar2,(char *)&CHgAsyncSocket::strErrorString);
  return -1;
}



/* ---- Send @ 606047c0 size=220 ---- */

/* public: virtual int __thiscall CHgtpSocket::Send(void *,int,int) */

int __thiscall CHgtpSocket::Send(CHgtpSocket *this,void *param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x47c0  89  ?Send@CHgtpSocket@@UAEHPAXHH@Z */
  local_8 = 0xfffffffe;
  pcStack_10 = FUN_60606361;
  local_14 = ExceptionList;
  local_c = DAT_6060a01c ^ 0x606078a8;
  ExceptionList = &local_14;
  pcVar1 = (char *)FUN_60605c4a(param_2 + 5);
  uVar2 = Ordinal_8(param_2);
  *(undefined4 *)pcVar1 = uVar2;
  memcpy(pcVar1 + 4,param_1,param_2);
  pcVar1[param_2 + 4] = '\0';
  local_8 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x84));
  (**(code **)(*(int *)this + 0x38))(pcVar1,param_2 + 4);
  iVar3 = SendPacket(this,pcVar1,param_2 + 4,param_3);
  local_8 = 0;
  FUN_606048a2();
  local_8 = 0xfffffffe;
  operator_delete__(pcVar1);
  ExceptionList = local_14;
  return iVar3;
}



/* ---- FUN_606048a2 @ 606048a2 size=14 ---- */

void FUN_606048a2(void)

{
  int unaff_EBX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_EBX + 0x84));
  return;
}



/* ---- ReadSocketErrorCode @ 606048f0 size=7 ---- */

/* public: int __thiscall CHgtpSocket::ReadSocketErrorCode(void) */

int __thiscall CHgtpSocket::ReadSocketErrorCode(CHgtpSocket *this)

{
                    /* 0x48f0  79  ?ReadSocketErrorCode@CHgtpSocket@@QAEHXZ */
  return *(int *)(this + 0x80);
}



/* ---- OnClose @ 60604900 size=104 ---- */

/* public: virtual void __thiscall CHgtpSocket::OnClose(int) */

void __thiscall CHgtpSocket::OnClose(CHgtpSocket *this,int param_1)

{
  CHgtpSocket *pCVar1;
  
                    /* 0x4900  62  ?OnClose@CHgtpSocket@@UAEXH@Z */
  *(int *)(this + 0x14) = param_1;
  pCVar1 = *(CHgtpSocket **)(this + 8);
  if (*(CHgtpSocket **)(this + 8) == (CHgtpSocket *)0x0) {
    pCVar1 = this;
  }
  SendMessageA(DAT_6060a504,0x828,0,(LPARAM)pCVar1);
  (**(code **)(*(int *)this + 0x14))();
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
    pCVar1 = *(CHgtpSocket **)(this + 8);
    if (*(CHgtpSocket **)(this + 8) == (CHgtpSocket *)0x0) {
      pCVar1 = this;
    }
    ::PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),
                   (uint)*(ushort *)(this + 0x14) << 0x10 | 0x7ea,(LPARAM)pCVar1);
  }
  return;
}



/* ---- OnConnect @ 60604970 size=62 ---- */

/* public: virtual void __thiscall CHgtpSocket::OnConnect(int) */

void __thiscall CHgtpSocket::OnConnect(CHgtpSocket *this,int param_1)

{
  CHgtpSocket *lParam;
  
                    /* 0x4970  65  ?OnConnect@CHgtpSocket@@UAEXH@Z */
  *(int *)(this + 0x14) = param_1;
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
    lParam = this;
    if (*(CHgtpSocket **)(this + 8) != (CHgtpSocket *)0x0) {
      lParam = *(CHgtpSocket **)(this + 8);
    }
    ::PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),param_1 << 0x10 | 0x7e9,
                   (LPARAM)lParam);
  }
  return;
}



/* ---- OnOutOfBandData @ 606049b0 size=62 ---- */

/* public: virtual void __thiscall CHgtpSocket::OnOutOfBandData(int) */

void __thiscall CHgtpSocket::OnOutOfBandData(CHgtpSocket *this,int param_1)

{
  CHgtpSocket *lParam;
  
                    /* 0x49b0  67  ?OnOutOfBandData@CHgtpSocket@@UAEXH@Z */
  *(int *)(this + 0x14) = param_1;
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
    lParam = this;
    if (*(CHgtpSocket **)(this + 8) != (CHgtpSocket *)0x0) {
      lParam = *(CHgtpSocket **)(this + 8);
    }
    ::PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),param_1 << 0x10 | 0x7ed,
                   (LPARAM)lParam);
  }
  return;
}



/* ---- OnReceive @ 606049f0 size=137 ---- */

/* public: virtual void __thiscall CHgtpSocket::OnReceive(int) */

void __thiscall CHgtpSocket::OnReceive(CHgtpSocket *this,int param_1)

{
  uint uVar1;
  CHgtpSocket *lParam;
  uint uVar2;
  int iVar3;
  __time64_t _Var4;
  
                    /* 0x49f0  70  ?OnReceive@CHgtpSocket@@UAEXH@Z */
  uVar2 = 0;
  *(int *)(this + 0x14) = param_1;
  if (param_1 == 0) {
    _Var4 = _time64((__time64_t *)0x0);
    *(__time64_t *)(this + 0x18) = _Var4;
    iVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = ReadPacket(this);
      uVar2 = uVar2 | uVar1;
      if ((uVar2 & 1) == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    if (*(int *)(this + 0x6c) == 0) {
      return;
    }
  }
  if ((((uVar2 & 1) != 0) && (*(HWND *)(this + 0xc) != (HWND)0x0)) &&
     (0x3ff < *(uint *)(this + 0x10))) {
    lParam = *(CHgtpSocket **)(this + 8);
    if (*(CHgtpSocket **)(this + 8) == (CHgtpSocket *)0x0) {
      lParam = this;
    }
    ::PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),
                   (uint)*(ushort *)(this + 0x14) << 0x10 | 0x7eb,(LPARAM)lParam);
  }
  return;
}



/* ---- OnReceivePure @ 60604a80 size=118 ---- */

/* public: virtual void __thiscall CHgtpSocket::OnReceivePure(int) */

void __thiscall CHgtpSocket::OnReceivePure(CHgtpSocket *this,int param_1)

{
  int iVar1;
  CHgtpSocket *lParam;
  int iVar2;
  __time64_t _Var3;
  
                    /* 0x4a80  71  ?OnReceivePure@CHgtpSocket@@UAEXH@Z */
  *(int *)(this + 0x14) = param_1;
  if (param_1 == 0) {
    _Var3 = _time64((__time64_t *)0x0);
    *(__time64_t *)(this + 0x18) = _Var3;
    iVar2 = 0;
    do {
      iVar1 = ReadPacketPure(this);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    if (*(int *)(this + 0x6c) == 0) {
      return;
    }
  }
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
    lParam = *(CHgtpSocket **)(this + 8);
    if (*(CHgtpSocket **)(this + 8) == (CHgtpSocket *)0x0) {
      lParam = this;
    }
    ::PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),
                   (uint)*(ushort *)(this + 0x14) << 0x10 | 0x7eb,(LPARAM)lParam);
  }
  return;
}



/* ---- OnSend @ 60604b00 size=182 ---- */

/* public: virtual void __thiscall CHgtpSocket::OnSend(int) */

void __thiscall CHgtpSocket::OnSend(CHgtpSocket *this,int param_1)

{
  CHgtpSocket *lParam;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x4b00  74  ?OnSend@CHgtpSocket@@UAEXH@Z */
  pcStack_10 = FUN_60606361;
  local_14 = ExceptionList;
  local_c = DAT_6060a01c ^ 0x60607880;
  ExceptionList = &local_14;
  *(int *)(this + 0x14) = param_1;
  if (param_1 == 0) {
    local_8 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x84));
    SendPacket(this);
    local_8 = 0;
    FUN_60604bb9();
  }
  local_8 = 0xfffffffe;
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
    lParam = *(CHgtpSocket **)(this + 8);
    if (*(CHgtpSocket **)(this + 8) == (CHgtpSocket *)0x0) {
      lParam = this;
    }
    ::PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),
                   (uint)*(ushort *)(this + 0x14) << 0x10 | 0x7ec,(LPARAM)lParam);
  }
  ExceptionList = local_14;
  return;
}



/* ---- FUN_60604bb9 @ 60604bb9 size=14 ---- */

void FUN_60604bb9(void)

{
  int unaff_ESI;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x84));
  return;
}



/* ---- SetNotifyHandle @ 60604c00 size=54 ---- */

/* public: bool __thiscall CHgtpSocket::SetNotifyHandle(struct HWND__ *,unsigned int) */

bool __thiscall CHgtpSocket::SetNotifyHandle(CHgtpSocket *this,HWND__ *param_1,uint param_2)

{
  BOOL BVar1;
  
                    /* 0x4c00  98  ?SetNotifyHandle@CHgtpSocket@@QAE_NPAUHWND__@@I@Z */
  if (param_1 != (HWND__ *)0x0) {
    BVar1 = IsWindow(param_1);
    if ((BVar1 != 0) && (0x3ff < param_2)) {
      *(HWND__ **)(this + 0xc) = param_1;
      *(uint *)(this + 0x10) = param_2;
      return true;
    }
  }
  return false;
}



/* ---- Connect @ 60604c40 size=56 ---- */

/* public: virtual bool __thiscall CHgtpSocket::Connect(char const *,unsigned int) */

bool __thiscall CHgtpSocket::Connect(CHgtpSocket *this,char *param_1,uint param_2)

{
  bool bVar1;
  UINT UVar2;
  
                    /* 0x4c40  38  ?Connect@CHgtpSocket@@UAE_NPBDI@Z */
  bVar1 = CHgAsyncSocket::Connect((CHgAsyncSocket *)this,param_1,param_2);
  if (!bVar1) {
    UVar2 = Ordinal_111();
    if (UVar2 != 0x2733) {
      HgGetWSAErrorString(UVar2,(char *)&CHgAsyncSocket::strErrorString);
      return false;
    }
  }
  return true;
}



/* ---- ReadData @ 60604c80 size=131 ---- */

/* public: int __thiscall CHgtpSocket::ReadData(char * &,int &) */

int __thiscall CHgtpSocket::ReadData(CHgtpSocket *this,char **param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_10 [3];
  
                    /* 0x4c80  76  ?ReadData@CHgtpSocket@@QAEHAAPADAAH@Z */
  if (*(int *)(this + 0x6c) == 0) {
    return *(int *)(this + 0x6c);
  }
  piVar1 = *(int **)(this + 0x54);
  piVar2 = (int *)**(undefined4 **)(this + 0x68);
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if (piVar2 == *(int **)(iVar4 + 0x14)) {
    _invalid_parameter_noinfo();
  }
  puVar3 = (undefined4 *)piVar2[2];
  if (puVar3 != (undefined4 *)0x0) {
    *param_1 = (char *)puVar3[1];
    *param_2 = puVar3[2];
    (**(code **)*puVar3)(1);
  }
  FUN_60603c00(local_10,piVar1,piVar2);
  return *(int *)(this + 0x6c);
}



/* ---- DeleteData @ 60604d10 size=30 ---- */

/* public: void __thiscall CHgtpSocket::DeleteData(char * &) */

void __thiscall CHgtpSocket::DeleteData(CHgtpSocket *this,char **param_1)

{
                    /* 0x4d10  40  ?DeleteData@CHgtpSocket@@QAEXAAPAD@Z */
  if (*param_1 != (char *)0x0) {
    operator_delete__(*param_1);
    *param_1 = (char *)0x0;
  }
  return;
}



/* ---- GetPacketCount @ 60604d30 size=4 ---- */

/* public: unsigned int __thiscall CHgtpSocket::GetPacketCount(void) */

uint __thiscall CHgtpSocket::GetPacketCount(CHgtpSocket *this)

{
                    /* 0x4d30  45  ?GetPacketCount@CHgtpSocket@@QAEIXZ */
  return *(uint *)(this + 0x6c);
}



/* ---- SendPacket @ 60604d40 size=117 ---- */

/* protected: int __thiscall CHgtpSocket::SendPacket(char *,int,int) */

int __thiscall CHgtpSocket::SendPacket(CHgtpSocket *this,char *param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x4d40  92  ?SendPacket@CHgtpSocket@@IAEHPADHH@Z */
  iVar1 = param_2;
  _Dst = (void *)FUN_60605c4a(param_2);
  memcpy(_Dst,param_1,iVar1);
  param_2 = (int)operator_new(0xc);
  if ((undefined4 *)param_2 == (undefined4 *)0x0) {
    param_2 = 0;
  }
  else {
    *(undefined ***)param_2 = &CPacketData::_vftable_;
    *(void **)(param_2 + 4) = _Dst;
    *(int *)(param_2 + 8) = iVar1;
  }
  FUN_60605500();
  param_2 = 0;
  iVar1 = sendPacketNoSEH(this,&param_2);
  removePacket(this,param_2);
  return iVar1;
}



/* ---- SetMemberId @ 60604dc0 size=23 ---- */

/* public: void __thiscall CHgtpSocket::SetMemberId(char const *) */

void __thiscall CHgtpSocket::SetMemberId(CHgtpSocket *this,char *param_1)

{
                    /* 0x4dc0  97  ?SetMemberId@CHgtpSocket@@QAEXPBD@Z */
  strcpy_s((char *)(this + 0x20),0x15,param_1);
  return;
}



/* ---- GetMemberId @ 60604de0 size=4 ---- */

/* public: char const * __thiscall CHgtpSocket::GetMemberId(void) */

char * __thiscall CHgtpSocket::GetMemberId(CHgtpSocket *this)

{
                    /* 0x4de0  44  ?GetMemberId@CHgtpSocket@@QAEPBDXZ */
  return (char *)(this + 0x20);
}



/* ---- IsMemberSocket @ 60604df0 size=37 ---- */

/* public: bool __thiscall CHgtpSocket::IsMemberSocket(char const *) */

bool __thiscall CHgtpSocket::IsMemberSocket(CHgtpSocket *this,char *param_1)

{
  int iVar1;
  
                    /* 0x4df0  54  ?IsMemberSocket@CHgtpSocket@@QAE_NPBD@Z */
  if (this[0x20] == (CHgtpSocket)0x0) {
    return false;
  }
  iVar1 = _mbscmp((uchar *)(this + 0x20),(uchar *)param_1);
  return (bool)('\x01' - (iVar1 != 0));
}



/* ---- GetErrorCode @ 60604e20 size=4 ---- */

/* public: int __thiscall CHgtpSocket::GetErrorCode(void) */

int __thiscall CHgtpSocket::GetErrorCode(CHgtpSocket *this)

{
                    /* 0x4e20  42  ?GetErrorCode@CHgtpSocket@@QAEHXZ */
  return *(int *)(this + 0x14);
}



/* ---- SendPacket @ 60604e30 size=43 ---- */

/* protected: int __thiscall CHgtpSocket::SendPacket(void) */

int __thiscall CHgtpSocket::SendPacket(CHgtpSocket *this)

{
  int iVar1;
  int local_4;
  
                    /* 0x4e30  93  ?SendPacket@CHgtpSocket@@IAEHXZ */
  local_4 = 0;
  iVar1 = sendPacketNoSEH(this,&local_4);
  removePacket(this,local_4);
  return iVar1;
}



/* ---- sendPacketNoSEH @ 60604e60 size=412 ---- */

/* protected: int __thiscall CHgtpSocket::sendPacketNoSEH(int &) */

int __thiscall CHgtpSocket::sendPacketNoSEH(CHgtpSocket *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  UINT UVar6;
  void *_Dst;
  UINT uID;
  HMODULE hInstance;
  uint _Size;
  void *_Src;
  char **lpBuffer;
  int local_24;
  undefined4 *local_14;
  
                    /* 0x4e60  105  ?sendPacketNoSEH@CHgtpSocket@@IAEHAAH@Z */
  if (*(int *)(this + 0x50) == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(this + 0x4c);
  piVar2 = *(int **)(this + 0x38);
  local_14 = (undefined4 *)*puVar1;
  local_24 = 0;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (local_14 == puVar1) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (local_14 == *(undefined4 **)(iVar5 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = local_14[2];
    _Src = *(void **)(iVar5 + 4);
    uVar3 = *(uint *)(iVar5 + 8);
    for (_Size = uVar3; 0 < (int)_Size; _Size = _Size - iVar4) {
      iVar4 = Ordinal_19(*(undefined4 *)(this + 4),_Src,_Size,0);
      if (iVar4 == -1) {
        UVar6 = Ordinal_111();
        if (UVar6 == 0x2733) {
          _Dst = (void *)FUN_60605c4a(_Size);
          memcpy(_Dst,_Src,_Size);
          operator_delete__(*(void **)(iVar5 + 4));
          *(void **)(iVar5 + 4) = _Dst;
          *(uint *)(iVar5 + 8) = _Size;
          return uVar3 + 1;
        }
        if (UVar6 == 0) {
          uID = 10000;
        }
        else {
          uID = UVar6;
          if ((int)UVar6 < 1) {
            CHgAsyncSocket::strErrorString._0_1_ = 0;
            *(UINT *)(this + 0x80) = UVar6;
            return -1;
          }
        }
        iVar5 = 0xff;
        lpBuffer = &CHgAsyncSocket::strErrorString;
        hInstance = GetModuleHandleA("HgSock.dll");
        LoadStringA(hInstance,uID,(LPSTR)lpBuffer,iVar5);
        *(UINT *)(this + 0x80) = UVar6;
        return -1;
      }
      local_24 = local_24 + iVar4;
      _Src = (void *)((int)_Src + iVar4);
    }
    *param_1 = *param_1 + 1;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (local_14 == *(undefined4 **)(iVar5 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    local_14 = (undefined4 *)*local_14;
  }
  return local_24;
}



/* ---- removePacket @ 60605000 size=212 ---- */

/* protected: int __thiscall CHgtpSocket::removePacket(int) */

int __thiscall CHgtpSocket::removePacket(CHgtpSocket *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x5000  104  ?removePacket@CHgtpSocket@@IAEHH@Z */
  local_8 = 0xfffffffe;
  pcStack_10 = FUN_60606361;
  local_14 = ExceptionList;
  local_c = DAT_6060a01c ^ 0x60607860;
  ExceptionList = &local_14;
  iVar3 = 0;
  while ((iVar3 < param_1 && (*(int *)(this + 0x50) != 0))) {
    iVar1 = **(int **)(this + 0x4c);
    if (*(int **)(this + 0x38) == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(this + 0x38);
    }
    if (iVar1 == *(int *)(iVar4 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = *(undefined4 **)(iVar1 + 8);
    local_8 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      if ((void *)puVar2[1] != (void *)0x0) {
        operator_delete__((void *)puVar2[1]);
        puVar2[1] = 0;
      }
      (**(code **)*puVar2)(1);
    }
    local_8 = 0xfffffffe;
    FUN_606054d0();
    iVar3 = iVar3 + 1;
  }
  ExceptionList = local_14;
  return iVar3;
}



/* ---- PostMessageA @ 60605100 size=58 ---- */

/* protected: void __thiscall CHgtpSocket::PostMessageA(unsigned int) */

void __thiscall CHgtpSocket::PostMessageA(CHgtpSocket *this,uint param_1)

{
  CHgtpSocket *lParam;
  
                    /* 0x5100  75  ?PostMessageA@CHgtpSocket@@IAEXI@Z */
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (0x3ff < *(uint *)(this + 0x10))) {
    lParam = this;
    if (*(CHgtpSocket **)(this + 8) != (CHgtpSocket *)0x0) {
      lParam = *(CHgtpSocket **)(this + 8);
    }
    ::PostMessageA(*(HWND *)(this + 0xc),*(uint *)(this + 0x10),
                   CONCAT22(*(undefined2 *)(this + 0x14),(undefined2)param_1),(LPARAM)lParam);
  }
  return;
}



/* ---- ReadPacket @ 60605140 size=392 ---- */

/* protected: int __thiscall CHgtpSocket::ReadPacket(void) */

int __thiscall CHgtpSocket::ReadPacket(CHgtpSocket *this)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  
                    /* 0x5140  77  ?ReadPacket@CHgtpSocket@@IAEHXZ */
  iVar1 = (**(code **)(*(int *)this + 0xc))
                    (*(int *)(this + 0x70) + *(int *)(this + 0x74),
                     *(int *)(this + 0x78) - *(int *)(this + 0x74),0);
  if (iVar1 == 0x2733) {
    return 8;
  }
  if (((iVar1 == -1) || (iVar1 == 0)) ||
     (*(int *)(this + 0x74) = *(int *)(this + 0x74) + iVar1, *(uint *)(this + 0x74) < 4)) {
    return 0;
  }
  do {
    if (*(uint *)(this + 0x74) < 4) {
      return 1;
    }
    if (*(int *)(this + 0x7c) == 0) {
      uVar2 = Ordinal_14(**(undefined4 **)(this + 0x70));
      *(undefined4 *)(this + 0x7c) = uVar2;
    }
    iVar1 = *(int *)(this + 0x7c);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(this + 0x74) < iVar1 + 4U) {
      if (*(int *)(this + 0x74) == *(int *)(this + 0x78)) {
        pvVar3 = (void *)FUN_60605c4a(*(int *)(this + 0x78) + 0x800);
        memcpy(pvVar3,*(void **)(this + 0x70),*(size_t *)(this + 0x78));
        operator_delete__(*(void **)(this + 0x70));
        *(int *)(this + 0x78) = *(int *)(this + 0x78) + 0x800;
        *(void **)(this + 0x70) = pvVar3;
        return 1;
      }
      return 1;
    }
    pvVar3 = (void *)FUN_60605c4a(iVar1 + 1);
    memcpy(pvVar3,(void *)(*(int *)(this + 0x70) + 4),*(size_t *)(this + 0x7c));
    *(undefined1 *)((int)pvVar3 + *(int *)(this + 0x7c)) = 0;
    puVar4 = operator_new(0xc);
    if (puVar4 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(this + 0x7c);
      *puVar4 = &CPacketData::_vftable_;
      puVar4[1] = pvVar3;
      puVar4[2] = uVar2;
    }
    FUN_60605500();
    uVar5 = 0;
    if (*(int *)(this + 0x74) - *(int *)(this + 0x7c) != 4) {
      do {
        *(undefined1 *)(*(int *)(this + 0x70) + uVar5) =
             *(undefined1 *)(*(int *)(this + 0x7c) + *(int *)(this + 0x70) + 4 + uVar5);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (*(int *)(this + 0x74) - *(int *)(this + 0x7c)) - 4U);
    }
    iVar1 = *(int *)(this + 0x7c);
    *(undefined4 *)(this + 0x7c) = 0;
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + (-4 - iVar1);
  } while (*(int *)(this + 0x74) != 0);
  return 1;
}



/* ---- ReadPacketPure @ 606052d0 size=216 ---- */

/* protected: int __thiscall CHgtpSocket::ReadPacketPure(void) */

int __thiscall CHgtpSocket::ReadPacketPure(CHgtpSocket *this)

{
  size_t _Size;
  void *_Dst;
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_414 [2];
  undefined1 auStack_412 [2];
  undefined1 local_410 [1024];
  uint uStack_10;
  uint local_4;
  
                    /* 0x52d0  78  ?ReadPacketPure@CHgtpSocket@@IAEHXZ */
  local_4 = DAT_6060a01c ^ (uint)auStack_414;
  memset(local_410,0,0x401);
  _Size = (**(code **)(*(int *)this + 0xc))(local_410,0x400,0);
  if ((_Size != 0xffffffff) && (_Size != 0)) {
    _Dst = (void *)FUN_60605c4a(_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,auStack_414 + -8,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
      puVar1 = operator_new(0xc);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = &CPacketData::_vftable_;
        puVar1[1] = _Dst;
        puVar1[2] = _Size;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_60605500();
        iVar2 = __security_check_cookie(uStack_10 ^ (uint)(auStack_414 + -0xc));
        return iVar2;
      }
    }
  }
  iVar2 = __security_check_cookie(uStack_10 ^ (uint)(auStack_414 + -0xc));
  return iVar2;
}



/* ---- RemoveAllPacket @ 606053b0 size=99 ---- */

/* protected: void __thiscall CHgtpSocket::RemoveAllPacket(class std::list<class CPacketData *,class
   std::allocator<class CPacketData *> > &) */

void __thiscall
CHgtpSocket::RemoveAllPacket
          (CHgtpSocket *this,list<CPacketData*,std::allocator<CPacketData*>_> *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
                    /* 0x53b0  86
                       ?RemoveAllPacket@CHgtpSocket@@IAEXAAV?$list@PAVCPacketData@@V?$allocator@PAVCPacketData@@@std@@@std@@@Z
                        */
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    for (puVar4 = (undefined4 *)*puVar1; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      if ((undefined4 *)puVar4[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar4[2])(1);
      }
    }
    piVar2 = *(int **)(param_1 + 0x14);
    piVar3 = (int *)*piVar2;
    *piVar2 = (int)piVar2;
    *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (piVar3 != *(int **)(param_1 + 0x14)) {
      do {
        piVar2 = (int *)*piVar3;
        operator_delete(piVar3);
        piVar3 = piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 0x14));
    }
  }
  return;
}



/* ---- AddPacketSize @ 60605420 size=47 ---- */

/* protected: void __thiscall CHgtpSocket::AddPacketSize(char *,char const *,int) */

void __thiscall
CHgtpSocket::AddPacketSize(CHgtpSocket *this,char *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
                    /* 0x5420  29  ?AddPacketSize@CHgtpSocket@@IAEXPADPBDH@Z */
  uVar1 = Ordinal_8(param_3);
  *unaff_retaddr = uVar1;
  memcpy(unaff_retaddr + 1,param_1,param_3);
  *(undefined1 *)((int)unaff_retaddr + param_3 + 4) = 0;
  return;
}



/* ---- RecvFilter @ 60605450 size=3 ---- */

/* public: virtual void __thiscall CHgtpSocket::RecvFilter(void *,int) */

void __thiscall CHgtpSocket::RecvFilter(CHgtpSocket *this,void *param_1,int param_2)

{
                    /* 0x5450  85  ?RecvFilter@CHgtpSocket@@UAEXPAXH@Z
                       0x5450  91  ?SendFilter@CHgtpSocket@@UAEXPAXH@Z */
  return;
}



/* ---- FUN_60605460 @ 60605460 size=103 ---- */

undefined4 * FUN_60605460(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60606708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  local_4 = 0;
  uVar2 = FUN_60603a00();
  param_1[5] = uVar2;
  param_1[6] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_606054d0 @ 606054d0 size=36 ---- */

void FUN_606054d0(void)

{
  undefined4 *in_EAX;
  undefined4 local_10 [3];
  
  FUN_60603c00(local_10,(int *)*in_EAX,*(int **)in_EAX[5]);
  return;
}



/* ---- FUN_60605500 @ 60605500 size=45 ---- */

void FUN_60605500(void)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 0x14);
  iVar2 = FUN_60603ce0(iVar1,*(undefined4 *)(iVar1 + 4),in_EAX);
  FUN_60603d20(unaff_EBX);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



/* ---- CPacketData @ 60605530 size=25 ---- */

/* public: __thiscall CPacketData::CPacketData(char *,int) */

void __thiscall CPacketData::CPacketData(CPacketData *this,char *param_1,int param_2)

{
                    /* 0x5530  13  ??0CPacketData@@QAE@PADH@Z */
  *(undefined ***)this = &_vftable_;
  *(char **)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  return;
}



/* ---- CPacketData @ 60605550 size=17 ---- */

/* public: __thiscall CPacketData::CPacketData(void) */

void __thiscall CPacketData::CPacketData(CPacketData *this)

{
                    /* 0x5550  14  ??0CPacketData@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* ---- ~CPacketData @ 60605570 size=7 ---- */

/* public: virtual __thiscall CPacketData::~CPacketData(void) */

void __thiscall CPacketData::~CPacketData(CPacketData *this)

{
                    /* 0x5570  18  ??1CPacketData@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  return;
}



/* ---- FUN_60605580 @ 60605580 size=129 ---- */

void __thiscall FUN_60605580(void *this,uint *param_1)

{
  int *in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)((int)this + 4);
  iVar3 = 0;
  iVar4 = 0x20;
  do {
    iVar3 = iVar3 + -0x61c88647;
    uVar1 = uVar1 + ((uVar2 >> 5) + in_EAX[1] ^ uVar2 * 0x10 + *in_EAX ^ iVar3 + uVar2);
    iVar4 = iVar4 + -1;
    uVar2 = uVar2 + ((uVar1 >> 5) + in_EAX[3] ^ uVar1 * 0x10 + in_EAX[2] ^ iVar3 + uVar1);
  } while (iVar4 != 0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* ---- FUN_60605610 @ 60605610 size=131 ---- */

void __thiscall FUN_60605610(void *this,uint *param_1)

{
  uint *in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *in_EAX;
  uVar1 = in_EAX[1];
  iVar3 = -0x3910c8e0;
  iVar4 = 0x20;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = uVar1 - ((uVar2 >> 5) + *(int *)((int)this + 0xc) ^
                     uVar2 * 0x10 + *(int *)((int)this + 8) ^ iVar3 + uVar2);
    uVar2 = uVar2 - ((uVar1 >> 5) + *(int *)((int)this + 4) ^ uVar1 * 0x10 + *(int *)this ^
                    iVar3 + uVar1);
    iVar3 = iVar3 + 0x61c88647;
  } while (iVar4 != 0);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* ---- FUN_606056a0 @ 606056a0 size=244 ---- */

void __fastcall FUN_606056a0(uint *param_1)

{
  uint *puVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  uint local_8;
  uint local_4;
  
  puVar1 = (uint *)((int)param_1 + in_EAX);
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    uVar3 = *param_1;
    uVar2 = *(uint *)unaff_ESI[6] ^ uVar3;
    *param_1 = uVar2;
    *param_1 = *(uint *)unaff_ESI[0x27c] ^ uVar2;
    *(uint *)unaff_ESI[6] = uVar3;
    unaff_ESI[6] = unaff_ESI[6] + 4;
    unaff_ESI[0x27c] = unaff_ESI[0x27c] + 4;
    if (unaff_ESI[6] == unaff_ESI[7]) {
      unaff_ESI[2] = *unaff_ESI;
      unaff_ESI[3] = unaff_ESI[1];
      if (unaff_ESI[0x27e] == 2) {
        local_8 = unaff_ESI[4];
        local_4 = unaff_ESI[5];
        FUN_60605580(&local_8,&local_8);
        *unaff_ESI = local_8;
        unaff_ESI[1] = local_4;
        unaff_ESI[4] = local_8;
        unaff_ESI[5] = local_4;
      }
      else if (unaff_ESI[0x27e] == 1) {
        uVar2 = unaff_ESI[4] ^ *unaff_ESI;
        uVar3 = unaff_ESI[5] ^ unaff_ESI[1];
        *unaff_ESI = uVar2;
        unaff_ESI[1] = uVar3;
        unaff_ESI[4] = uVar2;
        unaff_ESI[5] = uVar3;
      }
      unaff_ESI[6] = (uint)unaff_ESI;
      uVar3 = FUN_60605b20();
      uVar2 = FUN_60605b20();
      unaff_ESI[0x27a] = uVar3;
      unaff_ESI[0x27b] = uVar2;
      unaff_ESI[0x27c] = (uint)(unaff_ESI + 0x27a);
    }
  }
  return;
}



/* ---- FUN_606057a0 @ 606057a0 size=345 ---- */

uint * __thiscall FUN_606057a0(void *this,uint *param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *local_1c;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)((int)this + 0x9f8) == 0) {
    return param_1;
  }
  if ((param_1 != (uint *)0x0) && (in_EAX != 0)) {
    uVar3 = in_EAX;
    if ((((uint)param_1 & 3) == 0) && ((*(byte *)((int)this + 0x18) & 3) == 0)) {
      uVar3 = in_EAX & 3;
      FUN_606056a0(param_1);
      param_1 = (uint *)((int)param_1 + (in_EAX - uVar3));
    }
    if (param_1 < (uint *)(uVar3 + (int)param_1)) {
      local_1c = param_1;
      do {
        uVar1 = *local_1c;
        *(byte *)local_1c =
             **(byte **)((int)this + 0x9f0) ^ **(byte **)((int)this + 0x18) ^ (byte)uVar1;
        **(byte **)((int)this + 0x18) = (byte)uVar1;
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
        *(int *)((int)this + 0x9f0) = *(int *)((int)this + 0x9f0) + 1;
        if (*(int *)((int)this + 0x18) == *(int *)((int)this + 0x1c)) {
          *(uint *)((int)this + 8) = *(uint *)this;
          *(uint *)((int)this + 0xc) = *(uint *)((int)this + 4);
          if (*(int *)((int)this + 0x9f8) == 2) {
            local_10 = *(undefined4 *)((int)this + 0x10);
            local_c = *(undefined4 *)((int)this + 0x14);
            FUN_60605580(&local_10,&local_10);
            *(undefined4 *)this = local_10;
            *(undefined4 *)((int)this + 4) = local_c;
            *(undefined4 *)((int)this + 0x10) = local_10;
            *(undefined4 *)((int)this + 0x14) = local_c;
          }
          else if (*(int *)((int)this + 0x9f8) == 1) {
            uVar2 = *(uint *)((int)this + 0x10) ^ *(uint *)this;
            uVar1 = *(uint *)((int)this + 0x14) ^ *(uint *)((int)this + 4);
            *(uint *)this = uVar2;
            *(uint *)((int)this + 4) = uVar1;
            *(uint *)((int)this + 0x10) = uVar2;
            *(uint *)((int)this + 0x14) = uVar1;
          }
          *(void **)((int)this + 0x18) = this;
          uVar1 = FUN_60605b20();
          uVar2 = FUN_60605b20();
          *(uint *)((int)this + 0x9e8) = uVar1;
          *(uint *)((int)this + 0x9ec) = uVar2;
          *(uint **)((int)this + 0x9f0) = (uint *)((int)this + 0x9e8);
        }
        local_1c = (uint *)((int)local_1c + 1);
      } while (local_1c < (uint *)(uVar3 + (int)param_1));
    }
  }
  return param_1;
}



/* ---- FUN_60605900 @ 60605900 size=292 ---- */

byte * FUN_60605900(byte *param_1)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint *unaff_ESI;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (unaff_ESI[0x27e] == 0) {
    return param_1;
  }
  if ((param_1 != (byte *)0x0) && (in_EAX != 0)) {
    for (pbVar3 = param_1; pbVar3 < param_1 + in_EAX; pbVar3 = pbVar3 + 1) {
      *pbVar3 = *pbVar3 ^ *(byte *)unaff_ESI[6] ^ *(byte *)unaff_ESI[0x27c];
      *(byte *)unaff_ESI[6] = *pbVar3;
      unaff_ESI[6] = unaff_ESI[6] + 1;
      unaff_ESI[0x27c] = unaff_ESI[0x27c] + 1;
      if (unaff_ESI[6] == unaff_ESI[7]) {
        unaff_ESI[2] = *unaff_ESI;
        unaff_ESI[3] = unaff_ESI[1];
        if (unaff_ESI[0x27e] == 2) {
          local_18 = unaff_ESI[4];
          local_14 = unaff_ESI[5];
          FUN_60605580(&local_18,&local_18);
          *unaff_ESI = local_18;
          unaff_ESI[1] = local_14;
          unaff_ESI[4] = local_18;
          unaff_ESI[5] = local_14;
        }
        else if (unaff_ESI[0x27e] == 1) {
          uVar2 = unaff_ESI[4] ^ *unaff_ESI;
          uVar1 = unaff_ESI[5] ^ unaff_ESI[1];
          *unaff_ESI = uVar2;
          unaff_ESI[1] = uVar1;
          unaff_ESI[4] = uVar2;
          unaff_ESI[5] = uVar1;
        }
        unaff_ESI[6] = (uint)unaff_ESI;
        local_10 = FUN_60605b20();
        uVar1 = FUN_60605b20();
        unaff_ESI[0x27a] = local_10;
        unaff_ESI[0x27b] = uVar1;
        unaff_ESI[0x27c] = (uint)(unaff_ESI + 0x27a);
      }
    }
  }
  return param_1;
}



/* ---- FUN_60605a30 @ 60605a30 size=64 ---- */

void __fastcall FUN_60605a30(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  
  *in_EAX = param_1;
  in_EAX[0x270] = 1;
  do {
    iVar1 = in_EAX[0x270];
    in_EAX[iVar1] = ((uint)in_EAX[iVar1 + -1] >> 0x1e ^ in_EAX[iVar1 + -1]) * 0x6c078965 + iVar1;
    in_EAX[0x270] = in_EAX[0x270] + 1;
  } while ((int)in_EAX[0x270] < 0x270);
  return;
}



/* ---- FUN_60605a70 @ 60605a70 size=164 ---- */

void __fastcall FUN_60605a70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_60605a30(0x12bd6aa);
  iVar3 = 0;
  iVar4 = 0x270;
  iVar5 = 1;
  do {
    iVar2 = iVar5 + 1;
    puVar1[iVar5] =
         (((uint)puVar1[iVar5 + -1] >> 0x1e ^ puVar1[iVar5 + -1]) * 0x19660d ^ puVar1[iVar5]) +
         *(int *)(param_1 + iVar3 * 4) + iVar3;
    iVar3 = iVar3 + 1;
    if (0x26f < iVar2) {
      *puVar1 = puVar1[0x26f];
      iVar2 = 1;
    }
    if (3 < iVar3) {
      iVar3 = 0;
    }
    iVar4 = iVar4 + -1;
    iVar5 = iVar2;
  } while (iVar4 != 0);
  iVar5 = 0x26f;
  do {
    puVar1[iVar2] =
         (((uint)puVar1[iVar2 + -1] >> 0x1e ^ puVar1[iVar2 + -1]) * 0x5d588b65 ^ puVar1[iVar2]) -
         iVar2;
    iVar2 = iVar2 + 1;
    if (0x26f < iVar2) {
      *puVar1 = puVar1[0x26f];
      iVar2 = 1;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *puVar1 = 0x80000000;
  return;
}



/* ---- FUN_60605b20 @ 60605b20 size=264 ---- */

uint FUN_60605b20(void)

{
  uint *in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0x26f < (int)in_EAX[0x270]) {
    if (in_EAX[0x270] == 0x271) {
      in_EAX = (uint *)FUN_60605a30(0x1571);
    }
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      uVar3 = (in_EAX[iVar1 + 1] ^ in_EAX[iVar1]) & 0x7fffffff ^ in_EAX[iVar1];
      in_EAX[iVar1] =
           uVar3 >> 1 ^ *(uint *)(&DAT_6060a0b8 + (uVar3 & 1) * 4) ^ in_EAX[iVar1 + 0x18d];
      iVar1 = iVar2;
    } while (iVar2 < 0xe3);
    for (; iVar2 < 0x26f; iVar2 = iVar2 + 1) {
      uVar3 = (in_EAX[iVar2 + 1] ^ in_EAX[iVar2]) & 0x7fffffff ^ in_EAX[iVar2];
      in_EAX[iVar2] =
           uVar3 >> 1 ^ *(uint *)(&DAT_6060a0b8 + (uVar3 & 1) * 4) ^ in_EAX[iVar2 + -0xe3];
    }
    uVar3 = (in_EAX[0x26f] ^ *in_EAX) & 0x7fffffff ^ in_EAX[0x26f];
    in_EAX[0x26f] = *(uint *)(&DAT_6060a0b8 + (uVar3 & 1) * 4) ^ in_EAX[0x18c] ^ uVar3 >> 1;
    in_EAX[0x270] = 0;
  }
  uVar3 = in_EAX[in_EAX[0x270]];
  in_EAX[0x270] = in_EAX[0x270] + 1;
  uVar3 = uVar3 ^ uVar3 >> 0xb;
  uVar3 = uVar3 ^ (uVar3 & 0xff3a58ad) << 7;
  uVar3 = uVar3 ^ (uVar3 & 0xffffdf8c) << 0xf;
  return uVar3 >> 0x12 ^ uVar3;
}



/* ---- FUN_60605c30 @ 60605c30 size=26 ---- */

void __fastcall
FUN_60605c30(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5)

{
  vsprintf_s(param_3,param_2,param_4,&param_5);
  return;
}



/* ---- FUN_60605c4a @ 60605c4a size=11 ---- */

void __cdecl FUN_60605c4a(uint param_1)

{
  operator_new(param_1);
  return;
}



/* ---- __security_check_cookie @ 60605c55 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_6060a01c) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- operator_delete @ 60605c64 size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60605c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- __ArrayUnwind @ 60605c6a size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 60605cc8 size=75 ---- */

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
  FUN_60605d13();
  return;
}



/* ---- FUN_60605d13 @ 60605d13 size=24 ---- */

void FUN_60605d13(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- operator_delete[] @ 60605d2c size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60605d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- __onexit @ 60605d32 size=156 ---- */

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
  
  local_8 = &DAT_60607550;
  uStack_c = 0x60605d3e;
  local_20[0] = decode_pointer(DAT_6060a540);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_6060a540);
    local_24 = decode_pointer(DAT_6060a53c);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_6060a540 = encode_pointer(local_20[0]);
    DAT_6060a53c = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_60605dce();
  }
  return p_Var1;
}



/* ---- FUN_60605dce @ 60605dce size=9 ---- */

void FUN_60605dce(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 60605dd7 size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- operator_new @ 60605dee size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60605dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 60605dfa size=76 ---- */

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



/* ---- __CRT_INIT@12 @ 60605e9b size=550 ---- */

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
    if (DAT_6060a0c0 < 1) {
      return 0;
    }
    DAT_6060a0c0 = DAT_6060a0c0 + -1;
  }
  _DAT_6060a52c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_6060a534,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_6060a530 == 0) {
      DAT_6060a530 = 1;
      iVar3 = initterm_e(&DAT_606071b4,&DAT_606071bc);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_606071ac,&DAT_606071b0);
      DAT_6060a530 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_6060a534,0);
    }
    if ((DAT_6060a538 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_6060a538), BVar4 != 0)) {
      (*DAT_6060a538)(param_1,2,param_3);
    }
    DAT_6060a0c0 = DAT_6060a0c0 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_6060a534,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_6060a530 == 2) {
      param_2 = (int *)decode_pointer(DAT_6060a540);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_6060a53c);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_6060a540);
            piVar8 = (int *)decode_pointer(DAT_6060a53c);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_6060a53c = encoded_null();
        DAT_6060a540 = DAT_6060a53c;
      }
      DAT_6060a530 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_6060a534,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 606060c1 size=240 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  _DAT_6060a024 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_6060a0c0 == 0)) {
    local_20 = 0;
    goto LAB_606061b3;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_606071e4 != (undefined *)0x0) {
      local_20 = (*(code *)PTR_606071e4)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_606061b3;
    local_20 = __CRT_INIT_12(param_3,param_2,param_1);
    if (local_20 == 0) goto LAB_606061b3;
  }
  local_20 = FUN_60604540(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_60604540(param_3,0);
    __CRT_INIT_12(param_3,(int *)0x0,param_1);
    if (PTR_606071e4 != (undefined *)0x0) {
      (*(code *)PTR_606071e4)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_606071e4 != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_606071e4)(param_3,param_2,param_1);
    }
  }
LAB_606061b3:
  FUN_606061cc();
  return local_20;
}



/* ---- FUN_606061cc @ 606061cc size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_606061cc(void)

{
  _DAT_6060a024 = 0xffffffff;
  return;
}



/* ---- entry @ 606061d7 size=35 ---- */

void entry(int *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- ___report_gsfailure @ 606061fa size=262 ---- */

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
  
  _DAT_6060a1e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_6060a1e4 = &uStack00000004;
  _DAT_6060a120 = 0x10001;
  _DAT_6060a0c8 = 0xc0000409;
  _DAT_6060a0cc = 1;
  local_32c = DAT_6060a01c;
  local_328 = DAT_6060a020;
  _DAT_6060a0d4 = _local_res0;
  _DAT_6060a1ac = in_GS;
  _DAT_6060a1b0 = in_FS;
  _DAT_6060a1b4 = in_ES;
  _DAT_6060a1b8 = in_DS;
  _DAT_6060a1bc = unaff_EDI;
  _DAT_6060a1c0 = unaff_ESI;
  _DAT_6060a1c4 = unaff_EBX;
  _DAT_6060a1c8 = in_EDX;
  _DAT_6060a1cc = in_ECX;
  _DAT_6060a1d0 = in_EAX;
  _DAT_6060a1d4 = unaff_EBP;
  DAT_6060a1d8 = _local_res0;
  _DAT_6060a1dc = in_CS;
  _DAT_6060a1e8 = in_SS;
  DAT_6060a118 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_606071e8);
  if (DAT_6060a118 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- terminate @ 60606300 size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x60606300. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- __SEH_prolog4 @ 60606308 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_6060a01c ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 6060634d size=20 ---- */

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



/* ---- FUN_60606361 @ 60606361 size=37 ---- */

void __cdecl
FUN_60606361(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_6060a01c,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- _unlock @ 60606386 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60606386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 6060638c size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x6060638c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 60606392 size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60606392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __ValidateImageBase @ 606063f0 size=53 ---- */

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



/* ---- __FindPESection @ 60606430 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 60606480 size=166 ---- */

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
  
  pcStack_10 = FUN_60606361;
  local_14 = ExceptionList;
  local_c = DAT_6060a01c ^ 0x60607598;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_60600000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_60600000,(DWORD_PTR)(pTarget + -0x60600000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 6060653e size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x6060653e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 60606544 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x60606544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 6060654a size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x6060654a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 60606550 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60606550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 60606556 size=150 ---- */

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
  if ((DAT_6060a01c == 0xbb40e64e) || ((DAT_6060a01c & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_6060a01c = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_6060a01c == 0xbb40e64e) {
      DAT_6060a01c = 0xbb40e64f;
    }
    else if ((DAT_6060a01c & 0xffff0000) == 0) {
      DAT_6060a01c = DAT_6060a01c | DAT_6060a01c << 0x10;
    }
  }
  DAT_6060a020 = ~DAT_6060a01c;
  return;
}



/* ---- _crt_debugger_hook @ 606065ec size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x606065ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- except_handler4_common @ 606065f2 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x606065f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _type_info_dtor_internal_method @ 606065f8 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x606065f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- memcpy @ 60606604 size=6 ---- */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60606604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* ---- _CxxThrowException @ 60606610 size=6 ---- */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x60606610. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* ---- memset @ 60606616 size=6 ---- */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60606616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ---- Unwind@60606620 @ 60606620 size=9 ---- */

void Unwind_60606620(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60606623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60606650 @ 60606650 size=9 ---- */

void Unwind_60606650(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60606653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60606659 @ 60606659 size=9 ---- */

void Unwind_60606659(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6060665c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@60606680 @ 60606680 size=8 ---- */

void Unwind_60606680(void)

{
  int unaff_EBP;
  
  FUN_60602f20(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@606066b0 @ 606066b0 size=9 ---- */

void Unwind_606066b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x606066b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@606066b9 @ 606066b9 size=9 ---- */

void Unwind_606066b9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x606066bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@606066e0 @ 606066e0 size=5 ---- */

void Unwind_606066e0(void)

{
  operator_delete(DAT_6060a508);
  return;
}



/* ---- Unwind@60606700 @ 60606700 size=8 ---- */

void Unwind_60606700(void)

{
  FUN_606039f0();
  return;
}



/* ---- Unwind@60606750 @ 60606750 size=8 ---- */

void Unwind_60606750(void)

{
  FUN_606039f0();
  return;
}



/* ---- Unwind@60606780 @ 60606780 size=14 ---- */

void Unwind_60606780(void)

{
  DAT_6060a528 = DAT_6060a528 & 0xfffffffe;
  return;
}



/* ---- Unwind@606067b0 @ 606067b0 size=8 ---- */

void Unwind_606067b0(void)

{
  int unaff_EBP;
  
  CHgAsyncSocket::~CHgAsyncSocket(*(CHgAsyncSocket **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@606067b8 @ 606067b8 size=11 ---- */

void Unwind_606067b8(void)

{
  FUN_606039d0();
  return;
}



/* ---- Unwind@606067c3 @ 606067c3 size=11 ---- */

void Unwind_606067c3(void)

{
  FUN_606039d0();
  return;
}



/* ---- Unwind@606067f0 @ 606067f0 size=8 ---- */

void Unwind_606067f0(void)

{
  int unaff_EBP;
  
  CHgAsyncSocket::~CHgAsyncSocket(*(CHgAsyncSocket **)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@606067f8 @ 606067f8 size=11 ---- */

void Unwind_606067f8(void)

{
  FUN_606039d0();
  return;
}



/* ---- Unwind@60606803 @ 60606803 size=11 ---- */

void Unwind_60606803(void)

{
  FUN_606039d0();
  return;
}



/* ---- Unwind@60606830 @ 60606830 size=8 ---- */

void Unwind_60606830(void)

{
  int unaff_EBP;
  
  CHgtpSocket::~CHgtpSocket(*(CHgtpSocket **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60606860 @ 60606860 size=11 ---- */

void Unwind_60606860(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@6060686b @ 6060686b size=11 ---- */

void Unwind_6060686b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60606876 @ 60606876 size=11 ---- */

void Unwind_60606876(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@606068a0 @ 606068a0 size=8 ---- */

void Unwind_606068a0(void)

{
  int unaff_EBP;
  
  CHgAsyncSocket::~CHgAsyncSocket(*(CHgAsyncSocket **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@606068a8 @ 606068a8 size=11 ---- */

void Unwind_606068a8(void)

{
  FUN_606039d0();
  return;
}



/* ---- FUN_606068d0 @ 606068d0 size=75 ---- */

void FUN_606068d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_606066e5;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_60602b20();
  operator_delete(DAT_6060a508);
  ExceptionList = local_c;
  return;
}


// total=214 ok=214 failed=0
